// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosUserDataPT
// Functions: 9

// `dynamic_initializer_for_'ModuleRegistrantChaosUserDataPT'' @ 141442f00

void __cdecl _dynamic_initializer_for__ModuleRegistrantChaosUserDataPT__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ChaosUserDataPT";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ChaosUserDataPT",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FChaosUserDataPTModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UserDataPT_ClearData_PT'' @ 141442f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_UserDataPT_ClearData_PT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UserDataPT_ClearData_PT ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UserDataPT_ClearData_PT>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_UserDataPT_ClearData_PT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UserDataPT_ClearData_PT,*pFVar1,
               L"ChaosUserDataPT::OnPreSimulate::ClearData","STATGROUP_ChaosUserDataPT",
               "STATCAT_Advanced",L"ChaosUserDataPT",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UserDataPT_GetData_PT'' @ 141442fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_UserDataPT_GetData_PT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UserDataPT_GetData_PT ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UserDataPT_GetData_PT>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_UserDataPT_GetData_PT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UserDataPT_GetData_PT,*pFVar1,
               L"ChaosUserDataPT::GetData_PT","STATGROUP_ChaosUserDataPT","STATCAT_Advanced",
               L"ChaosUserDataPT",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UserDataPT_RemoveData_GT'' @ 141443070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_UserDataPT_RemoveData_GT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UserDataPT_RemoveData_GT ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UserDataPT_RemoveData_GT>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_UserDataPT_RemoveData_GT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UserDataPT_RemoveData_GT,*pFVar1,
               L"ChaosUserDataPT::RemoveData_GT","STATGROUP_ChaosUserDataPT","STATCAT_Advanced",
               L"ChaosUserDataPT",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UserDataPT_RemoveData_PT'' @ 141443100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_UserDataPT_RemoveData_PT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UserDataPT_RemoveData_PT ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UserDataPT_RemoveData_PT>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_UserDataPT_RemoveData_PT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UserDataPT_RemoveData_PT,*pFVar1,
               L"ChaosUserDataPT::OnPreSimulate::RemoveData","STATGROUP_ChaosUserDataPT",
               "STATCAT_Advanced",L"ChaosUserDataPT",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UserDataPT_SetData_GT'' @ 141443190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_UserDataPT_SetData_GT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UserDataPT_SetData_GT ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UserDataPT_SetData_GT>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_UserDataPT_SetData_GT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UserDataPT_SetData_GT,*pFVar1,
               L"ChaosUserDataPT::SetData_GT","STATGROUP_ChaosUserDataPT","STATCAT_Advanced",
               L"ChaosUserDataPT",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UserDataPT_UpdateData_PT'' @ 141443220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_UserDataPT_UpdateData_PT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UserDataPT_UpdateData_PT ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_UserDataPT_UpdateData_PT>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_UserDataPT_UpdateData_PT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UserDataPT_UpdateData_PT,*pFVar1,
               L"ChaosUserDataPT::OnPreSimulate::UpdateData","STATGROUP_ChaosUserDataPT",
               "STATCAT_Advanced",L"ChaosUserDataPT",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `scalar_deleting_destructor' @ 14e9b5ad0

void * __thiscall
FChaosUserDataPTModule::_scalar_deleting_destructor_(FChaosUserDataPTModule *this,uint param_1)

{
  *this = (FChaosUserDataPTModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_ChaosUserDataPT @ 14e9b5b40

void __cdecl IMPLEMENT_MODULE_ChaosUserDataPT(void)

{
  return;
}

