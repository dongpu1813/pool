#client.cpp#:557:		client->id_str = json_get_string(json, "id");
#client.cpp#:563:		const char *method = json_get_string(json, "method");
client.cpp:557:		client->id_str = json_get_string(json, "id");
client.cpp:563:		const char *method = json_get_string(json, "method");
coinbase.cpp:174:			const char *payee = json_get_string(json_result, "payee");
coinbase.cpp:211:			const char *payee = json_get_string(json_result, "payee");
coinbase.cpp:231:		const char *payee = json_get_string(json_result, "payee");
coinbase.cpp:269:			const char* payee = json_get_string(incentive, "address");
coinbase.cpp:311:            		const char *payee = json_get_string(json_result, "payee");
coinbase.cpp:331:				const char *payee = json_get_string(superblock->u.array.values[i], "payee");
coinbase.cpp:348:			const char *payee = json_get_string(masternode, "payee");
coinbase.cpp:385:				const char *payee = json_get_string(superblock->u.array.values[i], "payee");
coinbase.cpp:397:			const char *payee = json_get_string(masternode, "payee");
coinbase.cpp:428:				const char *payee = json_get_string(superblock->u.array.values[i], "payee");
coinbase.cpp:440:			const char *payee = json_get_string(masternode, "payee");
coinbase.cpp:463:		const char *payee = json_get_string(json_result, "payee");
coinbase.cpp:481:				const char *payeeSN = json_get_string(json_result, "payeeSN");
coinbase.cpp:492:				const char *payee = json_get_string(json_result, "payee");
#coind.cpp#:139:	const char *p = json_get_string(json_result, "pubkey");
#coind.cpp#:142:	const char *acc = json_get_string(json_result, "account");
#coind.cpp#:152:		const char *pk = json_get_string(json_result, "scriptPubKey");
coind.cpp:139:	const char *p = json_get_string(json_result, "pubkey");
coind.cpp:142:	const char *acc = json_get_string(json_result, "account");
coind.cpp:152:		const char *pk = json_get_string(json_result, "scriptPubKey");
coind_submit.cpp:139:		const char *p = json_get_string(json_error, "message");
coind_submit.cpp:159:		const char *p = json_get_string(json_result, "message");
coind_submit.cpp:190:		const char *p = json_get_string(json_error, "message");
coind_submit.cpp:237:		const char *p = json_get_string(json_error, "message");
coind_template.cpp:25:	const char *p = json_get_string(json_result, "target");
coind_template.cpp:28:	p = json_get_string(json_result, "hash");
coind_template.cpp:66:	strcpy(templ->nbits, json_get_string(json_result, "bits"));
coind_template.cpp:67:	strcpy(templ->prevhash_hex, json_get_string(json_result, "previousblockhash"));
coind_template.cpp:171:		const char *err = json_get_string(jr, "message");
coind_template.cpp:182:	const char *header_hex = json_get_string(gwr, "data");
coind_template.cpp:216:	const char *header_hex = json_get_string(json, "header");
coind_template.cpp:265:				const char *commitment = json_get_string(json_result, "default_witness_commitment");
coind_template.cpp:304:	const char *bits = json_get_string(json_result, "bits");
coind_template.cpp:306:	const char *prev = json_get_string(json_result, "previousblockhash");
coind_template.cpp:308:	const char *flags = json_get_string(json_coinbaseaux, "flags");
coind_template.cpp:312:		const char *accumulator = json_get_string(json_result, "accumulatorcheckpoint");
coind_template.cpp:317:	const char *claim = json_get_string(json_result, "claimtrie");
coind_template.cpp:334:		claim = json_get_string(json_obj, "hash");
coind_template.cpp:341:	const char *sc_root = json_get_string(json_result, "stateroot");
coind_template.cpp:342:	const char *sc_utxo = json_get_string(json_result, "utxoroot");
coind_template.cpp:373://	uint64_t target = decode_compact(json_get_string(json_result, "bits"));
coind_template.cpp:380://	strcpy(target, json_get_string(json_result, "target"));
coind_template.cpp:407:		const char *p = json_get_string(json_tx->u.array.values[i], "hash");
coind_template.cpp:418:		const char *txid = json_get_string(json_tx->u.array.values[i], "txid");
coind_template.cpp:430:		const char *d = json_get_string(json_tx->u.array.values[i], "data");
coind_template.cpp:476:		const char *commitment = json_get_string(json_result, "default_witness_commitment");
grepout.c:119:coind_template.cpp:66:	strcpy(templ->nbits, json_get_string(json_result, "bits"));
grepout.c:120:coind_template.cpp:67:	strcpy(templ->prevhash_hex, json_get_string(json_result, "previousblockhash"));
grepout.c:136:coind_template.cpp:380://	strcpy(target, json_get_string(json_result, "target"));
json_get_string.cpp:11:#client.cpp#:557:		client->id_str = json_get_string(json, "id");
json_get_string.cpp:17:#client.cpp#:563:		const char *method = json_get_string(json, "method");
json_get_string.cpp:39:client.cpp:557:		client->id_str = json_get_string(json, "id");
json_get_string.cpp:45:client.cpp:563:		const char *method = json_get_string(json, "method");
json_get_string.cpp:67:coinbase.cpp:174:			const char *payee = json_get_string(json_result, "payee");
json_get_string.cpp:89:coinbase.cpp:211:			const char *payee = json_get_string(json_result, "payee");
json_get_string.cpp:109:coinbase.cpp:231:		const char *payee = json_get_string(json_result, "payee");
json_get_string.cpp:131:coinbase.cpp:269:			const char* payee = json_get_string(incentive, "address");
json_get_string.cpp:153:coinbase.cpp:311:            		const char *payee = json_get_string(json_result, "payee");
json_get_string.cpp:173:coinbase.cpp:331:				const char *payee = json_get_string(superblock->u.array.values[i], "payee");
json_get_string.cpp:190:coinbase.cpp:348:			const char *payee = json_get_string(masternode, "payee");
json_get_string.cpp:212:coinbase.cpp:385:				const char *payee = json_get_string(superblock->u.array.values[i], "payee");
json_get_string.cpp:224:coinbase.cpp:397:			const char *payee = json_get_string(masternode, "payee");
json_get_string.cpp:246:coinbase.cpp:428:				const char *payee = json_get_string(superblock->u.array.values[i], "payee");
json_get_string.cpp:258:coinbase.cpp:440:			const char *payee = json_get_string(masternode, "payee");
json_get_string.cpp:280:coinbase.cpp:463:		const char *payee = json_get_string(json_result, "payee");
json_get_string.cpp:298:coinbase.cpp:481:				const char *payeeSN = json_get_string(json_result, "payeeSN");
json_get_string.cpp:309:coinbase.cpp:492:				const char *payee = json_get_string(json_result, "payee");
json_get_string.cpp:331:#coind.cpp#:139:	const char *p = json_get_string(json_result, "pubkey");
json_get_string.cpp:334:#coind.cpp#:142:	const char *acc = json_get_string(json_result, "account");
json_get_string.cpp:344:#coind.cpp#:152:		const char *pk = json_get_string(json_result, "scriptPubKey");
json_get_string.cpp:366:coind.cpp:139:	const char *p = json_get_string(json_result, "pubkey");
json_get_string.cpp:369:coind.cpp:142:	const char *acc = json_get_string(json_result, "account");
json_get_string.cpp:379:coind.cpp:152:		const char *pk = json_get_string(json_result, "scriptPubKey");
json_get_string.cpp:401:coind_submit.cpp:139:		const char *p = json_get_string(json_error, "message");
json_get_string.cpp:421:coind_submit.cpp:159:		const char *p = json_get_string(json_result, "message");
json_get_string.cpp:443:coind_submit.cpp:190:		const char *p = json_get_string(json_error, "message");
json_get_string.cpp:465:coind_submit.cpp:237:		const char *p = json_get_string(json_error, "message");
json_get_string.cpp:487:coind_template.cpp:25:	const char *p = json_get_string(json_result, "target");
json_get_string.cpp:490:coind_template.cpp:28:	p = json_get_string(json_result, "hash");
json_get_string.cpp:512:coind_template.cpp:66:	strcpy(templ->nbits, json_get_string(json_result, "bits"));
json_get_string.cpp:513:coind_template.cpp:67:	strcpy(templ->prevhash_hex, json_get_string(json_result, "previousblockhash"));
json_get_string.cpp:535:coind_template.cpp:171:		const char *err = json_get_string(jr, "message");
json_get_string.cpp:546:coind_template.cpp:182:	const char *header_hex = json_get_string(gwr, "data");
json_get_string.cpp:568:coind_template.cpp:216:	const char *header_hex = json_get_string(json, "header");
json_get_string.cpp:590:coind_template.cpp:265:				const char *commitment = json_get_string(json_result, "default_witness_commitment");
json_get_string.cpp:612:coind_template.cpp:304:	const char *bits = json_get_string(json_result, "bits");
json_get_string.cpp:614:coind_template.cpp:306:	const char *prev = json_get_string(json_result, "previousblockhash");
json_get_string.cpp:616:coind_template.cpp:308:	const char *flags = json_get_string(json_coinbaseaux, "flags");
json_get_string.cpp:620:coind_template.cpp:312:		const char *accumulator = json_get_string(json_result, "accumulatorcheckpoint");
json_get_string.cpp:625:coind_template.cpp:317:	const char *claim = json_get_string(json_result, "claimtrie");
json_get_string.cpp:642:coind_template.cpp:334:		claim = json_get_string(json_obj, "hash");
json_get_string.cpp:649:coind_template.cpp:341:	const char *sc_root = json_get_string(json_result, "stateroot");
json_get_string.cpp:650:coind_template.cpp:342:	const char *sc_utxo = json_get_string(json_result, "utxoroot");
json_get_string.cpp:672:coind_template.cpp:373://	uint64_t target = decode_compact(json_get_string(json_result, "bits"));
json_get_string.cpp:679:coind_template.cpp:380://	strcpy(target, json_get_string(json_result, "target"));
json_get_string.cpp:701:coind_template.cpp:407:		const char *p = json_get_string(json_tx->u.array.values[i], "hash");
json_get_string.cpp:712:coind_template.cpp:418:		const char *txid = json_get_string(json_tx->u.array.values[i], "txid");
json_get_string.cpp:724:coind_template.cpp:430:		const char *d = json_get_string(json_tx->u.array.values[i], "data");
json_get_string.cpp:746:coind_template.cpp:476:		const char *commitment = json_get_string(json_result, "default_witness_commitment");
json_get_string.cpp:768:grepout.c:119:coind_template.cpp:66:	strcpy(templ->nbits, json_get_string(json_result, "bits"));
json_get_string.cpp:769:grepout.c:120:coind_template.cpp:67:	strcpy(templ->prevhash_hex, json_get_string(json_result, "previousblockhash"));
json_get_string.cpp:785:grepout.c:136:coind_template.cpp:380://	strcpy(target, json_get_string(json_result, "target"));
json_get_string.cpp:807:remote.cpp:175:		const char *method = json_get_string(json, "method");
json_get_string.cpp:829:share.cpp:278:			const char *h1 = json_get_string(json_res, "pow_hash"); // DGB, MYR, J
json_get_string.cpp:830:share.cpp:279:			const char *h2 = json_get_string(json_res, "mined_hash"); // XVG
json_get_string.cpp:831:share.cpp:280:			const char *h3 = json_get_string(json_res, "phash"); // XSH
json_get_string.cpp:851:share.cpp:300:			const char *h = json_get_string(json_res, "proofhash");
json_get_string.cpp:873:#util.cpp#:41:const char *json_get_string(json_value *json, const char *name)
json_get_string.cpp:895:util.cpp:41:const char *json_get_string(json_value *json, const char *name)
json_get_string.cpp:917:util.h:51:const char *json_get_string(json_value *json, const char *name);
remote.cpp:175:		const char *method = json_get_string(json, "method");
share.cpp:278:			const char *h1 = json_get_string(json_res, "pow_hash"); // DGB, MYR, J
share.cpp:279:			const char *h2 = json_get_string(json_res, "mined_hash"); // XVG
share.cpp:280:			const char *h3 = json_get_string(json_res, "phash"); // XSH
share.cpp:300:			const char *h = json_get_string(json_res, "proofhash");
#util.cpp#:41:const char *json_get_string(json_value *json, const char *name)
util.cpp:41:const char *json_get_string(json_value *json, const char *name)
util.h:51:const char *json_get_string(json_value *json, const char *name);