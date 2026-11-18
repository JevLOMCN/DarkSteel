// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 4

// SupportsDynamicReloading @ 14cedd230

bool __thiscall
FPCGGeometryScriptInteropModule::SupportsDynamicReloading(FPCGGeometryScriptInteropModule *this)

{
  return true;
}

// StartupModule @ 14cedd300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGGeometryScriptInteropModule::StartupModule(FPCGGeometryScriptInteropModule *this)

{
  FModuleManager *this_00;
  FName *pFVar1;
  FPCGModule *pFVar2;
  ulong64 uVar3;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  this_00 = FModuleManager::Get();
  pFVar1 = ::FName::FName((FName *)local_58,L"PCG");
  FModuleManager::LoadModuleChecked(this_00,*pFVar1);
  pFVar2 = FPCGModule::GetPCGModuleChecked();
  local_20 = (undefined ***)0x0;
  local_38 = &
             ___7__TFunction_OwnedObject_P6A_NPEAUFPCGContext__AEBUFPCGGetDataFunctionRegistryParams__PEAVAActor__AEAUFPCGGetDataFunctionRegistryOutput___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_30 = PCGGetDynamicMeshData::GetDynamicMeshDataFromActor;
  local_58._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<bool_(__cdecl*)(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,AActor_*,FPCGGetDataFunctionRegistryOutput_&),bool,FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,AActor_*,FPCGGetDataFunctionRegistryOutput_&>
       ::Call;
  uVar3 = FPCGGetDataFunctionRegistry::RegisterDataFromActorFunction
                    (&pFVar2->GetDataFunctionRegistry,
                     (TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,AActor_*,FPCGGetDataFunctionRegistryOutput_&)>
                      *)(local_58 + 0x10));
  this->GetActorDataFunctionHandle = uVar3;
  if ((code *)local_58._16_8_ != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  local_20 = (undefined ***)0x0;
  local_38 = &
             ___7__TFunction_OwnedObject_P6A_NPEAUFPCGContext__AEBUFPCGGetDataFunctionRegistryParams__PEAVUActorComponent__AEAUFPCGGetDataFunctionRegistryOutput___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_30 = PCGGetDynamicMeshData::GetDynamicMeshDataFromComponent;
  local_58._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<bool_(__cdecl*)(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,UActorComponent_*,FPCGGetDataFunctionRegistryOutput_&),bool,FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,UActorComponent_*,FPCGGetDataFunctionRegistryOutput_&>
       ::Call;
  uVar3 = FPCGGetDataFunctionRegistry::RegisterDataFromComponentFunction
                    (&pFVar2->GetDataFunctionRegistry,
                     (TFunction<bool___cdecl(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,UActorComponent_*,FPCGGetDataFunctionRegistryOutput_&)>
                      *)(local_58 + 0x10));
  this->GetComponentDataFunctionHandle = uVar3;
  if ((code *)local_58._16_8_ != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FPCGGeometryScriptInteropModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPreExit,(FPCGGeometryScriptInteropModule *)local_58,
             (pmf_8c8ccc70)this);
  return;
}

// ShutdownModule @ 14cedd440

void __thiscall
FPCGGeometryScriptInteropModule::ShutdownModule(FPCGGeometryScriptInteropModule *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPreExit,this);
  return;
}

// PreExit @ 14cef4de0

void __thiscall FPCGGeometryScriptInteropModule::PreExit(FPCGGeometryScriptInteropModule *this)

{
  bool bVar1;
  FPCGModule *pFVar2;
  
  bVar1 = FPCGModule::IsPCGModuleLoaded();
  if (bVar1) {
    pFVar2 = FPCGModule::GetPCGModuleChecked();
    FPCGGetDataFunctionRegistry::UnregisterDataFromActorFunction
              (&pFVar2->GetDataFunctionRegistry,this->GetActorDataFunctionHandle);
    FPCGGetDataFunctionRegistry::UnregisterDataFromComponentFunction
              (&pFVar2->GetDataFunctionRegistry,this->GetComponentDataFunctionHandle);
  }
  return;
}

