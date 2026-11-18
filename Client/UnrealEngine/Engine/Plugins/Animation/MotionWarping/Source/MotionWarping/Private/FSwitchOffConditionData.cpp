// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 3

// StaticStruct @ 14cefdec0

UScriptStruct * __cdecl FSwitchOffConditionData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSwitchOffConditionData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UScriptStruct_FSwitchOffConditionData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSwitchOffConditionData,(UObject *)pUVar1,
                         L"SwitchOffConditionData");
  }
  return Z_Registration_Info_UScriptStruct_FSwitchOffConditionData.OuterSingleton;
}

// FSwitchOffConditionData @ 14cf03e10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSwitchOffConditionData * __thiscall
FSwitchOffConditionData::FSwitchOffConditionData
          (FSwitchOffConditionData *this,FSwitchOffConditionData *param_1)

{
  TArray<TObjectPtr<UMotionWarpingSwitchOffCondition>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &this->SwitchOffConditions;
  this->WarpTargetName = param_1->WarpTargetName;
  piVar2 = &(this->SwitchOffConditions).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->SwitchOffConditions).ArrayNum;
  pFVar4 = (param_1->SwitchOffConditions).AllocatorInstance.Data;
  (this->SwitchOffConditions).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UMotionWarpingSwitchOffCondition>,TObjectPtr<UMotionWarpingSwitchOffCondition>,int>
              ((pTVar1->AllocatorInstance).Data,
               (TObjectPtr<UMotionWarpingSwitchOffCondition> *)pFVar4,iVar3);
  }
  return this;
}

// SetMotionWarpingTarget @ 14cf1b9f0

void __thiscall
FSwitchOffConditionData::SetMotionWarpingTarget
          (FSwitchOffConditionData *this,FMotionWarpingTarget *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->SwitchOffConditions).AllocatorInstance.Data;
  iVar2 = (this->SwitchOffConditions).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SwitchOffConditions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMotionWarpingSwitchOffCondition>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x2e0))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

