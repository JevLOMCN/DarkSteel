// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetStatId @ 147cacdc0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FBoneBufferPool::GetStatId(FBoneBufferPool *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FBoneBufferPool::GetStatId(void)const_::_2_::FStat_FBoneBufferPool>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FBoneBufferPool ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FBoneBufferPool::GetStatId(void)const_::_2_::FStat_FBoneBufferPool>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"FBoneBufferPool");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FBoneBufferPool,*pFVar1,L"FBoneBufferPool",
                   "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,
                   false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_FBoneBufferPool;
  if (StatPtr_FBoneBufferPool ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FBoneBufferPool::GetStatId(void)const_::_2_::FStat_FBoneBufferPool>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FBoneBufferPool");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FBoneBufferPool::GetStatId(void)const_::_2_::FStat_FBoneBufferPool>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FBoneBufferPool,*pFVar1,
                         L"FBoneBufferPool","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// ~FBoneBufferPool @ 147cc84a0

void __thiscall FBoneBufferPool::~FBoneBufferPool(FBoneBufferPool *this)

{
  *(undefined ***)this =
       &_vftable__for__TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>__;
  *(undefined ***)&this->field_0x178 = &_vftable__for__FTickableObjectRenderThread__;
  *(undefined ***)&this->field_0x188 = &_vftable__for__FRenderResource__;
  TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::
  ~TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>
            ((TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *)this);
  return;
}

