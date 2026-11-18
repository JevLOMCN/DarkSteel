// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 2

// StaticStruct @ 146f84990

UScriptStruct * __cdecl FActorPerceptionBlueprintInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActorPerceptionBlueprintInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FActorPerceptionBlueprintInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo,(UObject *)pUVar1,
                         L"ActorPerceptionBlueprintInfo");
  }
  return Z_Registration_Info_UScriptStruct_FActorPerceptionBlueprintInfo.OuterSingleton;
}

// FActorPerceptionBlueprintInfo @ 146f90ec0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorPerceptionBlueprintInfo * __thiscall
FActorPerceptionBlueprintInfo::FActorPerceptionBlueprintInfo
          (FActorPerceptionBlueprintInfo *this,FActorPerceptionInfo *param_1)

{
  AActor *pAVar1;
  uint uVar2;
  
  (this->Target).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->LastSensedStimuli).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastSensedStimuli).ArrayNum = 0;
  (this->LastSensedStimuli).ArrayMax = 0;
  pAVar1 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  (this->Target).field0_0x0.DebugPtr = pAVar1;
  TArray<FAIStimulus,TSizedDefaultAllocator<32>_>::operator=
            (&this->LastSensedStimuli,&param_1->LastSensedStimuli);
  uVar2 = (this->bIsHostile ^ param_1->bIsHostile) & 1 ^ *(uint *)&this->field_0x18;
  *(uint *)&this->field_0x18 = uVar2;
  *(uint *)&this->field_0x18 = (uVar2 ^ *(uint *)&param_1->field_0x24) & 2 ^ uVar2;
  return this;
}

