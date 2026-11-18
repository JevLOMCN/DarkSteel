// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 5

// StartupModule @ 14a837740

void __thiscall FWN_ISKM_Module::StartupModule(FWN_ISKM_Module *this)

{
  code *pcVar1;
  bool bVar2;
  IPluginManager *pIVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  <lambda_1> local_res18 [16];
  FString local_78;
  FString local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  void *local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  pIVar3 = IPluginManager::Get();
  local_58 = 0x507b62b8;
  uStack_54 = 1;
  uStack_50 = 7;
  plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x70))(pIVar3,local_38,&local_58);
  if (*plVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*plVar4 + 0x20))();
  local_10 = 7;
  local_28.DataPtr = (wchar_t *)*puVar5;
  local_28.Size = *(int *)(puVar5 + 1) + -1;
  if (*(int *)(puVar5 + 1) == 0) {
    local_28.Size = 0;
  }
  local_18 = L"Shaders";
  FPaths::CombineInternal(&local_68,&local_28,2);
  ::FString::FString(&local_78,L"/Plugin/WN_ISKM");
  AddShaderSourceDirectoryMapping(&local_78,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_FWN_ISKM_Module::StartupModule_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,local_res18);
  return;
}

// PreUnloadCallback @ 14a8378a0

void __thiscall FWN_ISKM_Module::PreUnloadCallback(FWN_ISKM_Module *this)

{
  return;
}

// PostLoadCallback @ 14a8378b0

void __thiscall FWN_ISKM_Module::PostLoadCallback(FWN_ISKM_Module *this)

{
  return;
}

// ShutdownModule @ 14a8378c0

void __thiscall FWN_ISKM_Module::ShutdownModule(FWN_ISKM_Module *this)

{
  FWN_ISKM_DataArrayPool<FWN_ISKM_InstanceData>::Empty(&GWN_InstanceDataArrayPool);
  FWN_ISKM_DataArrayPool<float>::Empty(&GWN_CustomDataArrayPool);
  return;
}

// operator() @ 14a840be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall `FWN_ISKM_Module::StartupModule'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  if (GEngine == (UEngine *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GEngine",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Module.cpp"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMulticastDelegateRegistration<void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>::
  AddStatic<>((TMulticastDelegateRegistration<void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
               *)&GEngine->PreRenderDelegateEx,(_func___cdecl_void_FRDGBuilder_ptr *)local_res10);
  TMulticastDelegateRegistration<void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>::
  AddStatic<>((TMulticastDelegateRegistration<void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
               *)&GEngine->PostRenderDelegateEx,(_func___cdecl_void_FRDGBuilder_ptr *)local_res18);
  return;
}

