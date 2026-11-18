// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 3

// ExecuteTask @ 148cc2d10

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`StorageServer::FCacheStorageBlocking::Flush'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  `StorageServer::FCacheStorageBlocking::Flush'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 148cc2d30

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`StorageServer::FCacheJournalSectioned::Flush'::__l10::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  StorageServer::FCacheJournalSectioned::FlushImmediate
            (*(FCacheJournalSectioned **)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 148cc2d50

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`StorageServer::FCacheJournalSimple::Flush'::__l13::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  StorageServer::FCacheJournalSimple::FlushImmediate
            (*(FCacheJournalSimple **)((longlong)this + 0xd8));
  return;
}

