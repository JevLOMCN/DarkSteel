// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EventLoop
// Functions: 1

// operator() @ 15049b730

bool __thiscall
`TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188913>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188913>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>::TRangedForIterator::operator!=(TSparseArray<struct_UE::EventLoop::TManagedStorage<struct_UE::EventLoop::FIORequestBSDSocket,struct_UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FStorageEntry,class_FDefaultSparseArrayAllocator>::TRangedForIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

