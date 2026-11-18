// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 4

// Exec_Dev @ 14454e720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FIcmpModule::Exec_Dev(FIcmpModule *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  FName *pFVar2;
  ISocketSubsystem *pIVar3;
  FIcmpAsyncResult *this_00;
  uint uVar4;
  undefined ***pppuVar5;
  uint local_98 [2];
  wchar_t *local_90;
  FString local_88;
  code *local_78;
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  FName local_48 [2];
  code *local_38 [2];
  code *local_28 [3];
  undefined8 local_10;
  
  local_90 = param_2;
  bVar1 = FParse::Command(&local_90,L"Icmp",true);
  if ((bVar1) && (bVar1 = FParse::Command(&local_90,L"Ping",true), bVar1)) {
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    FParse::Token(&local_90,&local_88,true,L'\0');
    if (local_88.Data.ArrayNum < 2) {
      if (2 < (byte)LogConsoleResponse._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      }
      ::FString::operator=(&local_88,L"127.0.0.1");
    }
    local_68 = &
               ___7__TFunction_OwnedObject_P6AXUFIcmpEchoResult___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_50 = (undefined ***)0x0;
    local_60 = `FIcmpModule::Exec_Dev'::__l8::<lambda_1>::<lambda_invoker_cdecl>;
    local_98[0] = 0;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<void_(__cdecl*)(FIcmpEchoResult),void,FIcmpEchoResult>::Call;
    FConfigCacheIni::GetInt(GConfig,L"Ping",L"StackSize",(int *)local_98,&GEngineIni);
    if (local_98[0] != 0) {
      uVar4 = 0x200000;
      if ((int)local_98[0] < 0x200000) {
        uVar4 = local_98[0];
      }
      local_98[0] = 0x8000;
      if (0x8000 < (int)uVar4) {
        local_98[0] = uVar4;
      }
    }
    pFVar2 = ::FName::FName(local_48,L"WINDOWS");
    pIVar3 = ISocketSubsystem::Get(pFVar2);
    this_00 = ::operator_new(0x70);
    if (this_00 != (FIcmpAsyncResult *)0x0) {
      local_38[0] = local_78;
      local_10 = 0;
      if (local_78 != (code *)0x0) {
        pppuVar5 = &local_68;
        if (local_50 != (undefined ***)0x0) {
          pppuVar5 = local_50;
        }
        (*(code *)**pppuVar5)(pppuVar5,local_38 + 2);
      }
      FIcmpAsyncResult::FIcmpAsyncResult
                (this_00,pIVar3,&local_88,__real_3f800000,local_98[0],
                 (TFunction<void___cdecl(FIcmpEchoResult)> *)local_38);
    }
    if (local_78 != (code *)0x0) {
      pppuVar5 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar5 = local_50;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    return true;
  }
  return false;
}

// StartupModule @ 14454e920

void __thiscall FIcmpModule::StartupModule(FIcmpModule *this)

{
  return;
}

// ShutdownModule @ 14454e930

void __thiscall FIcmpModule::ShutdownModule(FIcmpModule *this)

{
  return;
}

// <lambda_invoker_cdecl> @ 14454e9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`FIcmpModule::Exec_Dev'::__l8::<lambda_1>::<lambda_invoker_cdecl>(FIcmpEchoResult *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (param_1->Status == Success) {
    if (3 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    }
  }
  else if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  pFVar1 = (param_1->ReplyFrom).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->ResolvedAddress).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

