#ifndef DOGECOIN_ITERATE_DUMP_H
#define DOGECOIN_ITERATE_DUMP_H
#include "types.h"
#include "io.h"

void print_hex(const void *data, size_t len);
void print_hash(const u8 *hash);
void print_reversed_hash(const u8 *hash);

void dump_block_header(const struct dogecoin_block *b);
void dump_tx(const struct dogecoin_transaction *tx);
void dump_tx_input(const struct dogecoin_transaction_input *input);
void dump_tx_output(const struct dogecoin_transaction_output *output);

#endif /* DOGECOIN_ITERATE_DUMP_H */
