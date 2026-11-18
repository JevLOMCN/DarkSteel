// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// FContext @ 14d4b1210

FContext * __thiscall
UE::StateTree::Private::FCrashReporterHandlerImpl::FContext::FContext
          (FContext *this,TNotNull<UObject_const_*> param_1,TNotNull<UStateTree_const_*> param_2,
          FName param_3,uint param_4)

{
  uint uVar1;
  UStateTree *local_res8;
  
  if ((GC::GIsIncrementalReachabilityPending) && (param_1.Val != (UObject *)0x0)) {
    GC::MarkAsReachable(param_1.Val);
  }
  (this->Owner).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = (UStateTree *)param_1.Val;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1.Val != (UObject *)0x0)) {
    GC::MarkAsReachable(param_1.Val);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2.Val != (UStateTree *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2.Val);
  }
  (this->StateTree).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_2.Val;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2.Val != (UStateTree *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2.Val);
  }
  FWeakObjectPtr::operator=(&(this->StateTree).WeakPtr,(FObjectPtr)&local_res8);
  this->ThreadID = param_4;
  this->Context = param_3;
  LOCK();
  UNLOCK();
  uVar1 = (int)`public:_static_unsigned_int___cdecl_UE::StateTree::Private::FCrashReporterHandlerImpl::FContext::GenerateID(void)'
               ::__l2::IDGenerator + 1;
  `public:_static_unsigned_int___cdecl_UE::StateTree::Private::FCrashReporterHandlerImpl::FContext::GenerateID(void)'
  ::__l2::IDGenerator =
       (atomic<unsigned_int>)
       ((int)`public:_static_unsigned_int___cdecl_UE::StateTree::Private::FCrashReporterHandlerImpl::FContext::GenerateID(void)'
             ::__l2::IDGenerator + 1);
  this->ID = uVar1;
  return this;
}

