// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetStatId @ 147b28260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FGlobalDynamicMeshIndexPool::GetStatId(FGlobalDynamicMeshIndexPool *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TStatId___cdecl_FGlobalDynamicMeshIndexPool::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TStatId___cdecl_FGlobalDynamicMeshIndexPool::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TStatId___cdecl_FGlobalDynamicMeshIndexPool::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FGlobalDynamicMeshIndexPool = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"FGlobalDynamicMeshIndexPool");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_struct_TStatId___cdecl_FGlobalDynamicMeshIndexPool::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FGlobalDynamicMeshIndexPool,*pFVar1,L"FGlobalDynamicMeshIndexPool",
               "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_struct_TStatId___cdecl_FGlobalDynamicMeshIndexPool::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_FGlobalDynamicMeshIndexPool;
  if (_StatPtr_FGlobalDynamicMeshIndexPool == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FGlobalDynamicMeshIndexPool");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`public:_virtual_struct_TStatId___cdecl_FGlobalDynamicMeshIndexPool::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_FGlobalDynamicMeshIndexPool,*pFVar1,
                       L"FGlobalDynamicMeshIndexPool","STATGROUP_Tickables","STATCAT_Advanced",
                       L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

// ~FGlobalDynamicMeshIndexPool @ 147b3cf00

void __thiscall
FGlobalDynamicMeshIndexPool::~FGlobalDynamicMeshIndexPool(FGlobalDynamicMeshIndexPool *this)

{
  *(undefined ***)this =
       &
       _vftable__for__TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>__
  ;
  *(undefined ***)&this->field_0x148 = &_vftable__for__FTickableObjectRenderThread__;
  *(undefined ***)&this->field_0x158 = &_vftable__for__FRenderResource__;
  TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
  ~TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
            ((TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
              *)this);
  return;
}

