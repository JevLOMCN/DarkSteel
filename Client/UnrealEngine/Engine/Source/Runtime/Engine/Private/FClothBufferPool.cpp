// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetStatId @ 147cad570

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FClothBufferPool::GetStatId(FClothBufferPool *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FClothBufferPool::GetStatId(void)const_::_2_::FStat_FClothBufferPool>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FClothBufferPool ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FClothBufferPool::GetStatId(void)const_::_2_::FStat_FClothBufferPool>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"FClothBufferPool");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FClothBufferPool,*pFVar1,
                   L"FClothBufferPool","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_FClothBufferPool;
  if (StatPtr_FClothBufferPool ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FClothBufferPool::GetStatId(void)const_::_2_::FStat_FClothBufferPool>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FClothBufferPool");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FClothBufferPool::GetStatId(void)const_::_2_::FStat_FClothBufferPool>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FClothBufferPool,*pFVar1,
                         L"FClothBufferPool","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// ~FClothBufferPool @ 147cc84e0

void __thiscall FClothBufferPool::~FClothBufferPool(FClothBufferPool *this)

{
  *(undefined ***)this =
       &_vftable__for__TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>__;
  *(undefined ***)&this->field_0x178 = &_vftable__for__FTickableObjectRenderThread__;
  *(undefined ***)&this->field_0x188 = &_vftable__for__FRenderResource__;
  TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::
  ~TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>
            ((TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *)this);
  return;
}

