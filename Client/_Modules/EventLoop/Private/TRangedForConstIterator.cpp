// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EventLoop
// Functions: 1

// operator() @ 15049b6f0

bool __thiscall
`TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188890>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188890>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FIORequestHandleTraits>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::TRangedForConstIterator::operator!=(TSparseArray<class_TSparseSetElement<struct_TTuple<unsigned___int64,struct_UE::EventLoop::TManagedStorage<struct_UE::EventLoop::FIORequestBSDSocket,struct_UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::TManagedStorageInternalHandle<struct_UE::EventLoop::TResourceHandle<struct_UE::EventLoop::FIORequestHandleTraits>_>_>_>,class_TSparseArrayAllocator<class_TSizedDefaultAllocator<32>,class_FDefaultBitArrayAllocator>_>::TRangedForConstIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

