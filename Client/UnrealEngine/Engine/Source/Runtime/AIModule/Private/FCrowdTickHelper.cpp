// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 2

// GetStatId @ 146fb56b0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FCrowdTickHelper::GetStatId(FCrowdTickHelper *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FCrowdTickHelper::GetStatId(void)const_::_2_::FStat_FCrowdTickHelper>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FCrowdTickHelper ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FCrowdTickHelper::GetStatId(void)const_::_2_::FStat_FCrowdTickHelper>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"FCrowdTickHelper");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FCrowdTickHelper,*pFVar1,
                   L"FCrowdTickHelper","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_FCrowdTickHelper;
  if (StatPtr_FCrowdTickHelper ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FCrowdTickHelper::GetStatId(void)const_::_2_::FStat_FCrowdTickHelper>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FCrowdTickHelper");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_FCrowdTickHelper::GetStatId(void)const_::_2_::FStat_FCrowdTickHelper>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FCrowdTickHelper,*pFVar1,
                         L"FCrowdTickHelper","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// Tick @ 146fd7920

void __thiscall FCrowdTickHelper::Tick(FCrowdTickHelper *this,float param_1)

{
  return;
}

