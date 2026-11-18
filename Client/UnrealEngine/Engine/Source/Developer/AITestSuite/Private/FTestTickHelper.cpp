// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 4

// GetStatId @ 1470533b0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FTestTickHelper::GetStatId(FTestTickHelper *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FTestTickHelper::GetStatId(void)const_::_2_::FStat_FTestTickHelper>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FTestTickHelper ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FTestTickHelper::GetStatId(void)const_::_2_::FStat_FTestTickHelper>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"FTestTickHelper");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FTestTickHelper,*pFVar1,L"FTestTickHelper",
                   "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,
                   false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_FTestTickHelper;
  if (StatPtr_FTestTickHelper ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FTestTickHelper::GetStatId(void)const_::_2_::FStat_FTestTickHelper>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FTestTickHelper");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FTestTickHelper::GetStatId(void)const_::_2_::FStat_FTestTickHelper>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FTestTickHelper,*pFVar1,
                         L"FTestTickHelper","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// IsTickable @ 147056f00

bool __thiscall FTestTickHelper::IsTickable(FTestTickHelper *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Owner).WeakPtr);
  return bVar1;
}

// IsTickableInEditor @ 147056f10

bool __thiscall FTestTickHelper::IsTickableInEditor(FTestTickHelper *this)

{
  return true;
}

// Tick @ 147059c20

void __thiscall FTestTickHelper::Tick(FTestTickHelper *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Owner).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x2b0))(pUVar2,param_1);
  }
  return;
}

