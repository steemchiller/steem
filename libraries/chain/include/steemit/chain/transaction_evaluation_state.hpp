#pragma once
#include <steemit/chain/protocol/operations.hpp>

namespace steemit { namespace chain {
   class database;
   struct signed_transaction;

   class transaction_evaluation_state
   {
      public:
         transaction_evaluation_state( database* db = nullptr )
         :_db(db){}

         database& db()const { assert( _db ); return *_db; }

         const signed_transaction*        _trx = nullptr;
         database*                        _db = nullptr;
         bool                             _is_proposed_trx = false;
   };
} } // namespace steemit::chain