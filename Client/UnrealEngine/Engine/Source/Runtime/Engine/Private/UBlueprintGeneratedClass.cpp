// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 69

// UBlueprintGeneratedClass @ 147688570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UBlueprintGeneratedClass * __thiscall
UBlueprintGeneratedClass::UBlueprintGeneratedClass
          (UBlueprintGeneratedClass *this,FVTableHelper *param_1)

{
  UClass::UClass((UClass *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  (this->DynamicBindingObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicBindingObjects).ArrayNum = 0;
  (this->DynamicBindingObjects).ArrayMax = 0;
  (this->ComponentTemplates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentTemplates).ArrayNum = 0;
  (this->ComponentTemplates).ArrayMax = 0;
  (this->Timelines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Timelines).ArrayNum = 0;
  (this->Timelines).ArrayMax = 0;
  (this->ComponentClassOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentClassOverrides).ArrayNum = 0;
  (this->ComponentClassOverrides).ArrayMax = 0;
  (this->FieldNotifies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldNotifies).ArrayNum = 0;
  (this->FieldNotifies).ArrayMax = 0;
  this->FieldNotifiesStartBitNumber = 0;
  (this->SimpleConstructionScript).field0_0x0.DebugPtr = (USimpleConstructionScript *)0x0;
  (this->InheritableComponentHandler).field0_0x0.DebugPtr = (UInheritableComponentHandler *)0x0;
  (this->UberGraphFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  *(undefined8 *)&this->CookedPropertyGuids = 0;
  *(undefined8 *)&(this->CookedPropertyGuids).field_0x8 = 0;
  *(undefined8 *)&(this->CookedPropertyGuids).field_0x20 = 0;
  *(undefined4 *)&(this->CookedPropertyGuids).field_0x28 = 0;
  *(undefined4 *)&(this->CookedPropertyGuids).field_0x2c = 0x80;
  *(undefined4 *)&(this->CookedPropertyGuids).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CookedPropertyGuids).field_0x34 = 0;
  *(undefined8 *)&(this->CookedPropertyGuids).field_0x40 = 0;
  *(undefined4 *)&(this->CookedPropertyGuids).field_0x48 = 0;
  *(undefined8 *)&this->CookedComponentInstancingData = 0;
  *(undefined8 *)&(this->CookedComponentInstancingData).field_0x8 = 0;
  *(undefined8 *)&(this->CookedComponentInstancingData).field_0x20 = 0;
  *(undefined4 *)&(this->CookedComponentInstancingData).field_0x28 = 0;
  *(undefined4 *)&(this->CookedComponentInstancingData).field_0x2c = 0x80;
  *(undefined4 *)&(this->CookedComponentInstancingData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CookedComponentInstancingData).field_0x34 = 0;
  *(undefined8 *)&(this->CookedComponentInstancingData).field_0x40 = 0;
  *(undefined4 *)&(this->CookedComponentInstancingData).field_0x48 = 0;
  (this->CustomPropertyListForPostConstruction).Array.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CustomPropertyListForPostConstruction).Array.ArrayNum = 0;
  (this->CustomPropertyListForPostConstruction).Array.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->SerializeAndPostLoadCritical,4000);
  return this;
}

// UBlueprintGeneratedClass @ 1476886b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UBlueprintGeneratedClass * __thiscall
UBlueprintGeneratedClass::UBlueprintGeneratedClass
          (UBlueprintGeneratedClass *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UClass::UClass((UClass *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  (this->DynamicBindingObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  (this->DynamicBindingObjects).ArrayNum = 0;
  (this->DynamicBindingObjects).ArrayMax = 0;
  (this->ComponentTemplates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentTemplates).ArrayNum = 0;
  (this->ComponentTemplates).ArrayMax = 0;
  (this->Timelines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Timelines).ArrayNum = 0;
  (this->Timelines).ArrayMax = 0;
  (this->ComponentClassOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentClassOverrides).ArrayNum = 0;
  (this->ComponentClassOverrides).ArrayMax = 0;
  (this->FieldNotifies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldNotifies).ArrayNum = 0;
  (this->FieldNotifies).ArrayMax = 0;
  this->FieldNotifiesStartBitNumber = 0;
  (this->SimpleConstructionScript).field0_0x0.DebugPtr = (USimpleConstructionScript *)0x0;
  (this->InheritableComponentHandler).field0_0x0.DebugPtr = (UInheritableComponentHandler *)0x0;
  (this->UberGraphFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  this->UberGraphFunctionKey = 0;
  *(undefined8 *)&this->CookedPropertyGuids = 0;
  *(undefined8 *)&(this->CookedPropertyGuids).field_0x8 = 0;
  *(undefined8 *)&(this->CookedPropertyGuids).field_0x20 = 0;
  *(undefined4 *)&(this->CookedPropertyGuids).field_0x28 = 0;
  *(undefined4 *)&(this->CookedPropertyGuids).field_0x2c = 0x80;
  *(undefined4 *)&(this->CookedPropertyGuids).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CookedPropertyGuids).field_0x34 = 0;
  *(undefined8 *)&(this->CookedPropertyGuids).field_0x40 = 0;
  *(undefined4 *)&(this->CookedPropertyGuids).field_0x48 = 0;
  *(undefined8 *)&this->CookedComponentInstancingData = 0;
  *(undefined8 *)&(this->CookedComponentInstancingData).field_0x8 = 0;
  *(undefined8 *)&(this->CookedComponentInstancingData).field_0x20 = 0;
  *(undefined4 *)&(this->CookedComponentInstancingData).field_0x28 = 0;
  *(undefined4 *)&(this->CookedComponentInstancingData).field_0x2c = 0x80;
  *(undefined4 *)&(this->CookedComponentInstancingData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CookedComponentInstancingData).field_0x34 = 0;
  *(undefined8 *)&(this->CookedComponentInstancingData).field_0x40 = 0;
  *(undefined4 *)&(this->CookedComponentInstancingData).field_0x48 = 0;
  (this->CustomPropertyListForPostConstruction).Array.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CustomPropertyListForPostConstruction).Array.ArrayNum = 0;
  (this->CustomPropertyListForPostConstruction).Array.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->SerializeAndPostLoadCritical,4000);
  this->bHasCookedComponentInstancingData = '\0';
  this->bCustomPropertyListForPostConstructionInitialized = '\0';
  this->bSupportsDynamicInstancedReference = '\0';
  this->NumReplicatedProperties = 0;
  return this;
}

// ~UBlueprintGeneratedClass @ 14768a800

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UBlueprintGeneratedClass::~UBlueprintGeneratedClass(UBlueprintGeneratedClass *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SerializeAndPostLoadCritical);
  TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_>
            (&this->CustomPropertyListForPostConstruction);
  *(undefined4 *)&(this->CookedComponentInstancingData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CookedComponentInstancingData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FBlueprintCookedComponentInstancingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FBlueprintCookedComponentInstancingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FBlueprintCookedComponentInstancingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CookedComponentInstancingData);
  *(undefined4 *)&(this->CookedPropertyGuids).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CookedPropertyGuids).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CookedPropertyGuids);
  pFVar2 = (this->FieldNotifies).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ComponentClassOverrides).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Timelines).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ComponentTemplates).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DynamicBindingObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UClass::~UClass((UClass *)this);
  return;
}

// operator() @ 14768b570

FName __thiscall
`UBlueprintGeneratedClass::FindBlueprintPropertyNameFromGuid'::__l2::<lambda_1>::operator()
          (void *this,
          TMap<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>
          *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  longlong *in_R8;
  undefined8 *puVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  int iStack_48;
  uint uStack_44;
  TBitArray<FDefaultBitArrayAllocator> *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iVar2 = (int)in_R8[5];
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)(in_R8 + 2);
  piVar4 = *(int **)this;
  iStack_48 = 0;
  local_30 = 0;
  uStack_44 = 1;
  iStack_34 = 0;
  if (iVar2 != 0) {
    pTVar7 = (TBitArray<FDefaultBitArrayAllocator> *)in_R8[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)in_R8[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar7 = TStack_70.Array;
    }
    uVar3 = *(uint *)(pTVar7->AllocatorInstance).InlineData;
    while (uVar3 == 0) {
      lVar5 = (longlong)iStack_48;
      local_30 = local_30 + 0x20;
      iStack_48 = iStack_48 + 1;
      iStack_34 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_14768b60a;
      uVar3 = *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar5 * 4 + 4);
    }
    uStack_44 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_44 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_34 = (int)lVar5 + -1 + local_30;
    if (iVar2 < iStack_34) {
      iStack_34 = iVar2;
    }
  }
LAB_14768b60a:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_40 = TStack_70.Array;
  TStack_70._padding_._0_4_ = iStack_48;
  TStack_70._padding_._4_4_ = uStack_44;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar2) {
    do {
      puVar6 = (undefined8 *)((longlong)TStack_70.CurrentBitIndex * 0x20 + *in_R8);
      if (((*(int *)((longlong)puVar6 + 0x14) == piVar4[3] && *(int *)(puVar6 + 2) == piVar4[2]) &&
          *(int *)((longlong)puVar6 + 0xc) == piVar4[1]) && *piVar4 == *(int *)(puVar6 + 1)) {
        if (puVar6 != (undefined8 *)0x0) {
          *(undefined8 *)param_1 = *puVar6;
          return (FName)param_1;
        }
        break;
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  *(undefined8 *)param_1 = 0;
  return (FName)param_1;
}

// operator() @ 14768b900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
`UBlueprintGeneratedClass::GetGeneratedClassesHierarchy'::__l2::<lambda_1>::operator()
          (void *this,UBlueprintGeneratedClass *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UBlueprintGeneratedClass *local_res10 [3];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(UBlueprintGeneratedClass **)(pFVar2->Data + (longlong)iVar6 * 8) = local_res10[0];
  return true;
}

// operator() @ 14768c1d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UBlueprintGeneratedClass::SerializeDefaultObject'::__l5::<lambda_1>::operator()
          (void *this,FBlueprintCookedComponentInstancingData *param_1,UActorComponent *param_2,
          FString *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1->bHasValidCookedData != false) {
    if (param_2 != (UActorComponent *)0x0) {
      if (((uint)param_2->_padding_ >> 10 & 1) == 0) {
        if ((param_2->_padding_ & 0x10) == 0) {
          FBlueprintCookedComponentInstancingData::BuildCachedPropertyDataFromTemplate
                    (param_1,param_2);
          goto LAB_14768c2ae;
        }
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4144715368457305349>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                           ,0x2fb,"!SourceTemplate->HasAnyFlags(RF_ClassDefaultObject)");
        if (bVar3) goto code_r0x00014768c27b;
      }
      else {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4144715368457305350>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                           ,0x2fa,"!SourceTemplate->HasAnyFlags(RF_NeedLoad)");
        if (bVar3) {
code_r0x00014768c27b:
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    if (2 < (byte)LogBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
    }
    param_1->bHasValidCookedData = false;
  }
LAB_14768c2ae:
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 14768c3c0

void __thiscall
`UBlueprintGeneratedClass::GetPreloadDependencies'::__l8::<lambda_1>::operator()
          (void *this,UObject *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 local_18;
  UObject *local_10;
  
  if ((*(uint *)&param_1->field_0x8 & 0x40020) != 0) {
    local_18 = *(undefined8 *)&param_1->field_0x10;
    pFVar2 = *(ForAnyElementType **)this;
    if ((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(undefined8 *)(pFVar2->Data + (longlong)iVar5 * 8) = local_18;
    pFVar2 = *(ForAnyElementType **)this;
    local_10 = UObject::GetArchetype(param_1);
    if ((pFVar2->Data <= (FScriptContainerElement *)&local_10) &&
       ((FScriptContainerElement *)&local_10 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(UObject **)(pFVar2->Data + (longlong)iVar5 * 8) = local_10;
  }
  return;
}

// operator() @ 14768e120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UBlueprintGeneratedClass::AddReferencedObjectsInUbergraphFrame'::__l14::<lambda_2>::operator()
          (void *this,FCrashContextExtendedWriter *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  undefined1 auStack_908 [32];
  TStringBuilderBase<wchar_t> local_8e8;
  wchar_t local_8c8 [64];
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_908;
  puVar1 = *(undefined8 **)this;
  if (ThreadCount < 0x10) {
    local_848.Base = local_828;
    local_848.CurPos = local_828;
    local_848.End = (wchar_t *)local_28;
    local_848.bIsDynamic = false;
    local_848.bIsExternal = false;
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)*puVar1,(UObject *)0x0,&local_848);
    if (local_848.End < local_848.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_848,1);
    }
    *local_848.CurPos = L'\n';
    local_848.CurPos = local_848.CurPos + 1;
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)puVar1[1],(UObject *)0x0,&local_848);
    if (local_848.End < local_848.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_848,1);
    }
    *local_848.CurPos = L'\n';
    local_8e8.Base = local_8c8;
    local_848.CurPos = local_848.CurPos + 1;
    local_8e8.CurPos = local_8c8;
    local_8e8.End = (wchar_t *)&local_848;
    local_8e8.bIsDynamic = false;
    local_8e8.bIsExternal = false;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_8e8,L"BPGCBreadcrumb_%u");
    pcVar2 = *(code **)((longlong)*param_1 + 0x10);
    if (local_848.End < local_848.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_848,1);
    }
    pwVar3 = local_848.Base;
    *local_848.CurPos = L'\0';
    if (local_8e8.End < (TStringBuilderBase<wchar_t> *)(local_8e8.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_8e8,1);
    }
    *local_8e8.CurPos = L'\0';
    (*pcVar2)(param_1,local_8e8.Base,pwVar3);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_8e8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
  }
  ThreadCount = ThreadCount + 1;
  return;
}

// AddReferencedObjectsInUbergraphFrame @ 147692a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UBlueprintGeneratedClass::AddReferencedObjectsInUbergraphFrame
          (UObject *param_1,FReferenceCollector *param_2)

{
  UStruct *pUVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  longlong lVar7;
  undefined1 auStack_128 [32];
  UObject *local_108;
  longlong local_100;
  longlong local_f8;
  undefined **local_e8;
  UObject **ppUStack_e0;
  undefined8 local_d8;
  undefined ***local_d0;
  UObject **local_c8;
  longlong *local_c0;
  FReferenceCollector local_b8;
  FReferenceCollector *local_a8;
  undefined8 local_a0;
  UObject *local_98;
  UObject *local_90;
  longlong local_88;
  DWORD local_80;
  code *local_78 [2];
  undefined **local_68;
  UObject **ppUStack_60;
  undefined8 local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_100 = *(longlong *)&param_1->field_0x10;
  lVar7 = *(longlong *)(*(longlong *)&param_1->field_0x10 + 0x40);
  local_108 = param_1;
  while( true ) {
    pUVar1 = *(UStruct **)(local_100 + 0x288);
    if (*(FProperty **)(local_100 + 0x280) != (FProperty *)0x0) {
      puVar5 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         (*(FProperty **)(local_100 + 0x280),param_1,0);
      local_a0 = *puVar5;
      local_b8._padding_ = (longlong)&___7FPersistentFrameCollector__6B_;
      local_b8.DefaultReferenceCollectorArchive.Ptr = (FReferenceCollectorArchive *)0x0;
      local_98 = local_108;
      pvVar2 = (void *)*puVar5;
      local_a8 = param_2;
      if (pvVar2 != (void *)0x0) {
        if (*(int *)(puVar5 + 1) != *(int *)(local_100 + 0x290)) {
          local_c8 = &local_108;
          local_c0 = &local_100;
          `UBlueprintGeneratedClass::AddReferencedObjectsInUbergraphFrame'::__l14::<lambda_1>::
          operator()(&local_c8);
        }
        local_90 = local_108;
        local_88 = local_100;
        local_80 = GetCurrentThreadId();
        local_e8 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UBlueprintGeneratedClass::AddReferencedObjectsInUbergraphFrame'::`14'::<lambda_2>,1,0>
                    ::_vftable_;
        ppUStack_e0 = &local_90;
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UBlueprintGeneratedClass::AddReferencedObjectsInUbergraphFrame'::__l14::<lambda_2>,void,FCrashContextExtendedWriter_&>
                      ::Call;
        local_50 = (undefined ***)0x0;
        local_d0 = (undefined ***)0x0;
        local_68 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UBlueprintGeneratedClass::AddReferencedObjectsInUbergraphFrame'::`14'::<lambda_2>,1,0>
                    ::_vftable_;
        local_58 = local_d8;
        local_f8 = 0;
        ppUStack_60 = ppUStack_e0;
        FAdditionalCrashContextStack::PushProvider
                  ((FScopedAdditionalCrashContextProvider *)local_78);
        if (local_f8 != 0) {
          pppuVar6 = &local_e8;
          if (local_d0 != (undefined ***)0x0) {
            pppuVar6 = local_d0;
          }
          (*(code *)(*pppuVar6)[2])();
        }
        (**(code **)(param_2->_padding_ + 0x70))(param_2,0);
        FReferenceCollector::AddPropertyReferences(&local_b8,pUVar1,pvVar2,(UObject *)pUVar1);
        (**(code **)(param_2->_padding_ + 0x70))(param_2,1);
        FAdditionalCrashContextStack::PopProvider();
        if (local_78[0] != (code *)0x0) {
          pppuVar6 = &local_68;
          if (local_50 != (undefined ***)0x0) {
            pppuVar6 = local_50;
          }
          (*(code *)(*pppuVar6)[2])();
        }
      }
      FReferenceCollector::~FReferenceCollector(&local_b8);
      param_1 = local_108;
    }
    if ((*(uint *)(lVar7 + 0xd4) >> 7 & 1) != 0) break;
    local_100 = lVar7;
    lVar7 = *(longlong *)(lVar7 + 0x40);
  }
  if (((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < *(int *)(lVar7 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) +
        (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("This->IsA(this)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xf38,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(longlong *)(lVar7 + 0xc0) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CppClassStaticFunctions.GetAddReferencedObjects() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xf3a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)(lVar7 + 0xc0))(param_1,param_2);
  return;
}

// ArePropertyGuidsAvailable @ 147694960

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UBlueprintGeneratedClass::ArePropertyGuidsAvailable(UBlueprintGeneratedClass *this)

{
  int iVar1;
  longlong *plVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  
  if (((char)this->_padding_ != '\0') &&
     (0 < *(int *)&(this->CookedPropertyGuids).field_0x8 -
          *(int *)&(this->CookedPropertyGuids).field_0x34)) {
    return true;
  }
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x0001476949c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x360))(plVar2);
      return (bool)uVar3;
    }
  }
  return false;
}

// Bind @ 147694d00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UBlueprintGeneratedClass::Bind(UBlueprintGeneratedClass *this)

{
  bool bVar1;
  
  UClass::Bind((UClass *)this);
  bVar1 = UsePersistentUberGraphFrame();
  if ((bVar1) && ((this->UberGraphFunction).field0_0x0.DebugPtr != (UFunction *)0x0)) {
    this->_padding_ = (longlong)AddReferencedObjectsInUbergraphFrame;
  }
  return;
}

// BindDynamicDelegates @ 147694d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UBlueprintGeneratedClass::BindDynamicDelegates(UClass *param_1,UObject *param_2)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18 [2];
  FString local_58;
  FString local_48;
  
  do {
    if (((param_1 == (UClass *)0x0) || (param_2 == (UObject *)0x0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ThisClass && InInstance",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                           ,0x64c,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar2 = (int)param_1->_padding_;
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &param_1->_padding_)) {
      if (2 < (byte)LogBlueprint._0_1_) {
        local_res10 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res10,&local_48);
        local_res18[0].ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
        local_res18[0].Number = *(uint *)&param_2->field_0x1c;
        ::FName::ToString(local_res18,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
    pUVar5 = StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if (((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
         &pUVar5->_padding_)) && (param_1 != (UClass *)0x0)) {
      plVar6 = (longlong *)param_1[1]._padding_;
      iVar2 = (int)param_1[1]._padding_;
      plVar1 = plVar6 + iVar2;
      while( true ) {
        if ((int)param_1[1]._padding_ != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UDynamicBlueprintBinding>_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res8);
        }
        if (plVar6 == plVar1) break;
        if ((longlong *)*plVar6 == (longlong *)0x0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4144715368457304489>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                             ,0x657,"DynamicBindingObject");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          (**(code **)(*(longlong *)*plVar6 + 0x2b0))();
        }
        plVar6 = plVar6 + 1;
      }
    }
    param_1 = (UClass *)param_1->_padding_;
  } while (param_1 != (UClass *)0x0);
  return;
}

// BuildCustomArrayPropertyListForPostConstruction @ 147696660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UBlueprintGeneratedClass::BuildCustomArrayPropertyListForPostConstruction
          (UBlueprintGeneratedClass *this,FArrayProperty *param_1,FCustomPropertyListNode **param_2,
          uchar *param_3,uchar *param_4,int param_5)

{
  int *piVar1;
  TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_> *pTVar2;
  FProperty *pFVar3;
  FArrayProperty *pFVar4;
  FScriptContainerElement *pFVar5;
  FStructOpsFakeVTable *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  ICppStructOps *pIVar12;
  EStructOpsFakeVTableFlags EVar13;
  uchar *puVar14;
  uint uVar15;
  uchar *puVar16;
  int iVar17;
  FCustomPropertyListNode **ppFVar18;
  EArrayPropertyFlags EVar19;
  char local_78;
  EArrayPropertyFlags local_77;
  EArrayPropertyFlags local_76;
  int local_74;
  FCustomPropertyListNode *local_70;
  FCustomPropertyListNode *local_68;
  FCustomPropertyListNode *local_60;
  FCustomPropertyListNode *local_58;
  int local_50;
  int local_4c;
  
  local_77 = param_1->ArrayFlags;
  (**(code **)(param_1->Inner->_padding_ + 0x168))();
  pFVar3 = param_1->Inner;
  local_50 = pFVar3->ElementSize;
  if ((local_50 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  if ((pFVar3 == (FProperty *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  EVar19 = param_1->ArrayFlags;
  local_76 = EVar19;
  (**(code **)(param_1->Inner->_padding_ + 0x168))();
  pFVar3 = param_1->Inner;
  iVar11 = pFVar3->ElementSize;
  local_4c = iVar11;
  if ((iVar11 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  ppFVar18 = param_2;
  iVar17 = param_5;
  if ((pFVar3 == (FProperty *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  do {
    if (*(int *)(param_3 + 8) <= iVar17) {
LAB_147696cd3:
      if ((*param_2 == (FCustomPropertyListNode *)0x0) &&
         (*(int *)(param_3 + 8) == *(int *)(param_4 + 8))) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      return bVar8;
    }
    local_74 = iVar17;
    if (*(int *)(param_4 + 8) <= iVar17 - param_5) {
      local_58 = ::operator_new(0x20);
      if (local_58 != (FCustomPropertyListNode *)0x0) {
        local_58->Property = (FProperty *)0x0;
        local_58->ArrayIndex = iVar17;
        local_58->SubPropertyList = (FCustomPropertyListNode *)0x0;
        local_58->PropertyListNext = (FCustomPropertyListNode *)0x0;
      }
      *ppFVar18 = local_58;
      pTVar2 = &this->CustomPropertyListForPostConstruction;
      pFVar5 = (pTVar2->Array).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar5 + (longlong)(this->CustomPropertyListForPostConstruction).Array.ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      iVar11 = (this->CustomPropertyListForPostConstruction).Array.ArrayNum;
      piVar1 = &(this->CustomPropertyListForPostConstruction).Array.ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)pTVar2,piVar1);
      }
      (this->CustomPropertyListForPostConstruction).Array.ArrayNum = iVar11 + 1;
      *(FCustomPropertyListNode **)((pTVar2->Array).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           local_58;
      goto LAB_147696cd3;
    }
    if (*(int *)(param_3 + 8) == 0) {
      puVar14 = (uchar *)0x0;
    }
    else {
      puVar14 = *(uchar **)param_3;
      if (((local_77 & UsesMemoryImageAllocator) != None) && (((ulonglong)puVar14 & 1) != 0)) {
        puVar14 = param_3 + ((longlong)puVar14 >> 0x18);
      }
      puVar14 = puVar14 + (longlong)local_50 * (longlong)iVar17;
    }
    if (*(int *)(param_4 + 8) == 0) {
      puVar16 = (uchar *)0x0;
    }
    else {
      puVar16 = *(uchar **)param_4;
      if (((EVar19 & UsesMemoryImageAllocator) != None) && (((ulonglong)puVar16 & 1) != 0)) {
        puVar16 = param_4 + ((longlong)puVar16 >> 0x18);
      }
      puVar16 = puVar16 + (longlong)iVar11 * (longlong)(iVar17 - param_5);
    }
    pFVar4 = (FArrayProperty *)param_1->Inner;
    if (pFVar4 == (FArrayProperty *)0x0) {
LAB_147696b04:
      cVar10 = (**(code **)(pFVar4->_padding_ + 0xb8))(pFVar4,puVar14,puVar16,0);
      if (cVar10 == '\0') {
        local_60 = ::operator_new(0x20);
        if (local_60 != (FCustomPropertyListNode *)0x0) {
          local_60->Property = (FProperty *)param_1;
          local_60->SubPropertyList = (FCustomPropertyListNode *)0x0;
          local_60->PropertyListNext = (FCustomPropertyListNode *)0x0;
          local_60->ArrayIndex = iVar17;
        }
        *ppFVar18 = local_60;
        pTVar2 = &this->CustomPropertyListForPostConstruction;
        pFVar5 = (pTVar2->Array).AllocatorInstance.Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_60) &&
            ((FScriptContainerElement *)&local_60 <
             pFVar5 + (longlong)(this->CustomPropertyListForPostConstruction).Array.ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        iVar11 = (this->CustomPropertyListForPostConstruction).Array.ArrayNum;
        piVar1 = &(this->CustomPropertyListForPostConstruction).Array.ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pTVar2,piVar1);
        }
        (this->CustomPropertyListForPostConstruction).Array.ArrayNum = iVar11 + 1;
        *(FCustomPropertyListNode **)((pTVar2->Array).AllocatorInstance.Data + (longlong)iVar11 * 8)
             = local_60;
        goto LAB_147696be3;
      }
    }
    else {
      if ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x14 & 1) == 0) {
        if ((pFVar4 == (FArrayProperty *)0x0) ||
           ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x15 & 1) == 0)) goto LAB_147696b04;
        local_68 = ::operator_new(0x20);
        if (local_68 != (FCustomPropertyListNode *)0x0) {
          local_68->Property = (FProperty *)param_1;
          local_68->SubPropertyList = (FCustomPropertyListNode *)0x0;
          local_68->PropertyListNext = (FCustomPropertyListNode *)0x0;
          local_68->ArrayIndex = iVar17;
        }
        pTVar2 = &this->CustomPropertyListForPostConstruction;
        *ppFVar18 = local_68;
        pFVar5 = (pTVar2->Array).AllocatorInstance.Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 <
             pFVar5 + (longlong)(this->CustomPropertyListForPostConstruction).Array.ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        iVar11 = (this->CustomPropertyListForPostConstruction).Array.ArrayNum;
        piVar1 = &(this->CustomPropertyListForPostConstruction).Array.ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pTVar2,piVar1);
        }
        (this->CustomPropertyListForPostConstruction).Array.ArrayNum = iVar11 + 1;
        *(FCustomPropertyListNode **)((pTVar2->Array).AllocatorInstance.Data + (longlong)iVar11 * 8)
             = local_68;
        bVar8 = BuildCustomArrayPropertyListForPostConstruction
                          (this,pFVar4,&(*ppFVar18)->SubPropertyList,puVar14,puVar16,0);
        iVar17 = local_74;
        if (bVar8) goto LAB_147696be3;
        TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_>::RemoveAt
                  (pTVar2,(this->CustomPropertyListForPostConstruction).Array.ArrayNum + -1,Default)
        ;
        *ppFVar18 = (FCustomPropertyListNode *)0x0;
        iVar17 = local_74;
        goto LAB_147696bea;
      }
      local_70 = ::operator_new(0x20);
      if (local_70 != (FCustomPropertyListNode *)0x0) {
        local_70->Property = (FProperty *)param_1;
        local_70->SubPropertyList = (FCustomPropertyListNode *)0x0;
        local_70->PropertyListNext = (FCustomPropertyListNode *)0x0;
        local_70->ArrayIndex = iVar17;
      }
      *ppFVar18 = local_70;
      pTVar2 = &this->CustomPropertyListForPostConstruction;
      pFVar5 = (pTVar2->Array).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_70) &&
          ((FScriptContainerElement *)&local_70 <
           pFVar5 + (longlong)(this->CustomPropertyListForPostConstruction).Array.ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      iVar11 = (this->CustomPropertyListForPostConstruction).Array.ArrayNum;
      piVar1 = &(this->CustomPropertyListForPostConstruction).Array.ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)pTVar2,piVar1);
      }
      (this->CustomPropertyListForPostConstruction).Array.ArrayNum = iVar11 + 1;
      *(FCustomPropertyListNode **)((pTVar2->Array).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           local_70;
      pIVar12 = (ICppStructOps *)0x0;
      if (*(UScriptStruct **)&pFVar4->ArrayFlags != (UScriptStruct *)0x0) {
        pIVar12 = UScriptStruct::GetCppStructOps(*(UScriptStruct **)&pFVar4->ArrayFlags);
      }
      local_78 = '\0';
      if ((pIVar12 == (ICppStructOps *)0x0) ||
         (pFVar6 = pIVar12->FakeVPtr, !(pFVar6->Capabilities).HasIdentical)) {
LAB_147696983:
        bVar8 = BuildCustomPropertyListForPostConstruction
                          (this,&(*ppFVar18)->SubPropertyList,*(UStruct **)&pFVar4->ArrayFlags,
                           puVar14,puVar16);
        local_78 = !bVar8;
      }
      else {
        if (((pFVar6->Flags & Identical) == None) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!!(this->Flags & FuncFlag)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x660,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        uVar15 = 0;
        for (EVar13 = pFVar6->Flags &
                      (Copy|GetPreloadDependencies|PostScriptConstruct|NetDeltaSerialize|
                       NetSerialize|PostSerialize|SerializeSlot|SerializeArchive|Destruct|
                       ConstructForTests|Construct); EVar13 != None;
            EVar13 = EVar13 & EVar13 - Construct) {
          uVar15 = uVar15 + 1;
        }
        cVar10 = (**(code **)(&pFVar6[1].Flags + (ulonglong)uVar15 * 2))
                           (puVar14,puVar16,0,&local_78);
        if (cVar10 == '\0') goto LAB_147696983;
      }
      if (local_78 == '\0') {
LAB_147696be3:
        ppFVar18 = &(*ppFVar18)->PropertyListNext;
      }
      else {
        TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_>::RemoveAt
                  (pTVar2,(this->CustomPropertyListForPostConstruction).Array.ArrayNum + -1,Default)
        ;
        *ppFVar18 = (FCustomPropertyListNode *)0x0;
      }
    }
LAB_147696bea:
    EVar19 = local_76;
    iVar11 = local_4c;
    iVar17 = iVar17 + 1;
  } while( true );
}

// BuildCustomPropertyListForPostConstruction @ 147696d10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UBlueprintGeneratedClass::BuildCustomPropertyListForPostConstruction
          (UBlueprintGeneratedClass *this,FCustomPropertyListNode **param_1,UStruct *param_2,
          uchar *param_3,uchar *param_4)

{
  int *piVar1;
  TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FArrayProperty *this_00;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  UObjectBaseUtility *this_01;
  uint *puVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  UClass *pUVar16;
  FCustomPropertyListNode *pFVar17;
  undefined8 *puVar18;
  FCustomPropertyListNode *pFVar19;
  uint uVar20;
  uchar *puVar21;
  uchar *puVar22;
  int iVar23;
  FCustomPropertyListNode **ppFVar24;
  FCustomPropertyListNode *local_70;
  FCustomPropertyListNode *local_68;
  FCustomPropertyListNode *local_60;
  FString local_58;
  
  if (param_2 != (UStruct *)0x0) {
    Z_Construct_UClass_UClass_NoRegister();
  }
  this_00 = (FArrayProperty *)param_2->PropertyLink;
  ppFVar24 = param_1;
  do {
    if (this_00 == (FArrayProperty *)0x0) {
      return *param_1 != (FCustomPropertyListNode *)0x0;
    }
    pUVar16 = FField::GetOwnerClass((FField *)this_00);
    uVar5 = this_00->_padding_;
    if (((uVar5 >> 0xe & 1) == 0) ||
       ((pUVar16 != (UClass *)0x0 && ((pUVar16->ClassFlags >> 10 & 1) != 0)))) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((!bVar9) && (((uVar5 & 0x800000202000) == 0 || ((uVar5 & 0x8000080000) == 0)))) {
      bVar9 = UE::Runtime::Engine::Private::FBlueprintGeneratedClassUtils::
              RequiresCompleteValueForPostConstruction((FProperty *)this_00);
      iVar14 = (int)this_00->_padding_;
      iVar23 = 0;
      if (0 < iVar14) {
        do {
          if (((iVar23 < 0) || (iVar14 <= iVar23)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          if ((param_3 == (uchar *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          iVar14 = *(int *)((longlong)&this_00->_padding_ + 4);
          iVar3 = *(int *)((longlong)&this_00->_padding_ + 4);
          puVar22 = param_3 + (longlong)iVar3 + (longlong)iVar14 * (longlong)iVar23;
          if ((param_4 == (uchar *)0x0) ||
             (iVar4 = (int)this_00->_padding_, param_2->PropertiesSize < iVar14 * iVar4 + iVar3)) {
            puVar21 = (uchar *)0x0;
          }
          else {
            if (((iVar23 < 0) || (iVar4 <= iVar23)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2dd,L"Array index out of bounds: %i from an array of size %i"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            puVar21 = param_4 + (longlong)*(int *)((longlong)&this_00->_padding_ + 4) +
                                (longlong)*(int *)((longlong)&this_00->_padding_ + 4) *
                                (longlong)iVar23;
          }
          pFVar19 = (FCustomPropertyListNode *)0x0;
          if (bVar9) {
LAB_14769736d:
            cVar13 = (**(code **)(this_00->_padding_ + 0xb8))(this_00,puVar22,puVar21,0);
            if (cVar13 == '\0') {
              pFVar17 = ::operator_new(0x20);
              if (pFVar17 != (FCustomPropertyListNode *)0x0) {
                pFVar17->Property = (FProperty *)this_00;
                pFVar17->ArrayIndex = iVar23;
                pFVar17->SubPropertyList = (FCustomPropertyListNode *)0x0;
                pFVar17->PropertyListNext = (FCustomPropertyListNode *)0x0;
                pFVar19 = pFVar17;
              }
              *ppFVar24 = pFVar19;
              pTVar2 = &this->CustomPropertyListForPostConstruction;
              pFVar6 = (pTVar2->Array).AllocatorInstance.Data;
              local_60 = pFVar19;
              if (((pFVar6 <= (FScriptContainerElement *)&local_60) &&
                  ((FScriptContainerElement *)&local_60 <
                   pFVar6 + (longlong)(this->CustomPropertyListForPostConstruction).Array.ArrayMax *
                            8)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar8 = (code *)swi(3);
                uVar11 = (*pcVar8)();
                return (bool)uVar11;
              }
              iVar14 = (this->CustomPropertyListForPostConstruction).Array.ArrayNum;
              piVar1 = &(this->CustomPropertyListForPostConstruction).Array.ArrayMax;
              if (iVar14 == *piVar1) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,(ForAnyElementType *)pTVar2,piVar1);
              }
              (this->CustomPropertyListForPostConstruction).Array.ArrayNum = iVar14 + 1;
              *(FCustomPropertyListNode **)
               ((pTVar2->Array).AllocatorInstance.Data + (longlong)iVar14 * 8) = local_60;
              goto LAB_147697455;
            }
          }
          else {
            uVar5 = *(ulonglong *)(this_00->_padding_ + 0x18);
            if (((uVar5 >> 0x14 & 1) == 0) || (this_00 == (FArrayProperty *)0x0)) {
              if (((uVar5 >> 0x15 & 1) == 0) || (this_00 == (FArrayProperty *)0x0))
              goto LAB_14769736d;
              pFVar17 = ::operator_new(0x20);
              if (pFVar17 != (FCustomPropertyListNode *)0x0) {
                pFVar17->Property = (FProperty *)this_00;
                pFVar17->ArrayIndex = iVar23;
                pFVar17->SubPropertyList = (FCustomPropertyListNode *)0x0;
                pFVar17->PropertyListNext = (FCustomPropertyListNode *)0x0;
                pFVar19 = pFVar17;
              }
              pTVar2 = &this->CustomPropertyListForPostConstruction;
              *ppFVar24 = pFVar19;
              pFVar6 = (pTVar2->Array).AllocatorInstance.Data;
              local_68 = pFVar19;
              if (((pFVar6 <= (FScriptContainerElement *)&local_68) &&
                  ((FScriptContainerElement *)&local_68 <
                   pFVar6 + (longlong)(this->CustomPropertyListForPostConstruction).Array.ArrayMax *
                            8)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar8 = (code *)swi(3);
                uVar11 = (*pcVar8)();
                return (bool)uVar11;
              }
              iVar14 = (this->CustomPropertyListForPostConstruction).Array.ArrayNum;
              piVar1 = &(this->CustomPropertyListForPostConstruction).Array.ArrayMax;
              if (iVar14 == *piVar1) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,(ForAnyElementType *)pTVar2,piVar1);
              }
              (this->CustomPropertyListForPostConstruction).Array.ArrayNum = iVar14 + 1;
              *(FCustomPropertyListNode **)
               ((pTVar2->Array).AllocatorInstance.Data + (longlong)iVar14 * 8) = local_68;
              bVar10 = BuildCustomArrayPropertyListForPostConstruction
                                 (this,this_00,&(*ppFVar24)->SubPropertyList,puVar22,puVar21,0);
              if (bVar10) goto LAB_147697455;
              TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_>::RemoveAt
                        (pTVar2,(this->CustomPropertyListForPostConstruction).Array.ArrayNum + -1,
                         Default);
              *ppFVar24 = (FCustomPropertyListNode *)0x0;
              goto LAB_14769745c;
            }
            pFVar17 = ::operator_new(0x20);
            if (pFVar17 != (FCustomPropertyListNode *)0x0) {
              pFVar17->Property = (FProperty *)this_00;
              pFVar17->ArrayIndex = iVar23;
              pFVar17->SubPropertyList = (FCustomPropertyListNode *)0x0;
              pFVar17->PropertyListNext = (FCustomPropertyListNode *)0x0;
              pFVar19 = pFVar17;
            }
            *ppFVar24 = pFVar19;
            pTVar2 = &this->CustomPropertyListForPostConstruction;
            pFVar6 = (pTVar2->Array).AllocatorInstance.Data;
            local_70 = pFVar19;
            if (((pFVar6 <= (FScriptContainerElement *)&local_70) &&
                ((FScriptContainerElement *)&local_70 <
                 pFVar6 + (longlong)(this->CustomPropertyListForPostConstruction).Array.ArrayMax * 8
                )) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar10)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            iVar14 = (this->CustomPropertyListForPostConstruction).Array.ArrayNum;
            piVar1 = &(this->CustomPropertyListForPostConstruction).Array.ArrayMax;
            if (iVar14 == *piVar1) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,(ForAnyElementType *)pTVar2,piVar1);
            }
            (this->CustomPropertyListForPostConstruction).Array.ArrayNum = iVar14 + 1;
            *(FCustomPropertyListNode **)
             ((pTVar2->Array).AllocatorInstance.Data + (longlong)iVar14 * 8) = local_70;
            puVar18 = (undefined8 *)0x0;
            this_01 = *(UObjectBaseUtility **)&this_00->ArrayFlags;
            if (this_01 != (UObjectBaseUtility *)0x0) {
              if (this_01[4].field_0x14 == '\0') {
                UObjectBaseUtility::GetPathName(this_01,&local_58,(UObject *)0x0);
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("bPrepareCppStructOpsCompleted",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                    ,0x8f6,
                                    L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s"
                                   );
                if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
                if (bVar10) {
                  pcVar8 = (code *)swi(3);
                  uVar11 = (*pcVar8)();
                  return (bool)uVar11;
                }
              }
              puVar18 = *(undefined8 **)&this_01[4].field_0x18;
            }
            bVar10 = false;
            if ((puVar18 == (undefined8 *)0x0) ||
               (puVar7 = (uint *)*puVar18, (*(byte *)((longlong)puVar7 + 0x15) & 0x40) == 0)) {
LAB_1476970c0:
              bVar10 = BuildCustomPropertyListForPostConstruction
                                 (this,&(*ppFVar24)->SubPropertyList,
                                  *(UStruct **)&this_00->ArrayFlags,puVar22,puVar21);
              bVar10 = !bVar10;
            }
            else {
              if (((~(byte)(*puVar7 >> 0xb) & 1) != 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!!(this->Flags & FuncFlag)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                      ,0x660,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                uVar11 = (*pcVar8)();
                return (bool)uVar11;
              }
              uVar20 = 0;
              for (uVar15 = *puVar7 & 0x7ff; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
                uVar20 = uVar20 + 1;
              }
              cVar13 = (**(code **)(puVar7 + (ulonglong)uVar20 * 2 + 6))(puVar22,puVar21,0);
              if (cVar13 == '\0') goto LAB_1476970c0;
            }
            if (bVar10) {
              pTVar2 = &this->CustomPropertyListForPostConstruction;
              uVar15 = (this->CustomPropertyListForPostConstruction).Array.ArrayNum - 1;
              if (((int)uVar15 < 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                                      ,0x100,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                uVar11 = (*pcVar8)();
                return (bool)uVar11;
              }
              if (((this->CustomPropertyListForPostConstruction).Array.ArrayNum <= (int)uVar15) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                                      ,0x101,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                uVar11 = (*pcVar8)();
                return (bool)uVar11;
              }
              ::operator_delete(*(void **)((pTVar2->Array).AllocatorInstance.Data +
                                          (longlong)(int)uVar15 * 8),0x20);
              uVar20 = 0;
              if ((int)uVar15 < (this->CustomPropertyListForPostConstruction).Array.ArrayNum) {
                uVar20 = ~uVar15 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                uVar11 = (*pcVar8)();
                return (bool)uVar11;
              }
              pFVar6 = (pTVar2->Array).AllocatorInstance.Data + (longlong)(int)uVar15 * 8;
              iVar14 = ((this->CustomPropertyListForPostConstruction).Array.ArrayNum - uVar15) + -1;
              if (iVar14 != 0) {
                memmove(pFVar6,pFVar6 + 8,(longlong)iVar14 << 3);
              }
              iVar14 = (this->CustomPropertyListForPostConstruction).Array.ArrayNum + -1;
              (this->CustomPropertyListForPostConstruction).Array.ArrayNum = iVar14;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,(ForAnyElementType *)pTVar2,iVar14,
                         &(this->CustomPropertyListForPostConstruction).Array.ArrayMax);
              *ppFVar24 = (FCustomPropertyListNode *)0x0;
            }
            else {
LAB_147697455:
              ppFVar24 = &(*ppFVar24)->PropertyListNext;
            }
          }
LAB_14769745c:
          iVar14 = (int)this_00->_padding_;
          iVar23 = iVar23 + 1;
        } while (iVar23 < iVar14);
      }
    }
    this_00 = (FArrayProperty *)this_00->_padding_;
  } while( true );
}

// CanBeClusterRoot @ 147698170

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UBlueprintGeneratedClass::CanBeClusterRoot(UBlueprintGeneratedClass *this)

{
  UPackage *pUVar1;
  
  pUVar1 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  return (bool)(~(byte)((uint)pUVar1->PackageFlagsPrivate >> 0x11) & 1);
}

// CreateComponentsForActor @ 1476991f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UBlueprintGeneratedClass::CreateComponentsForActor(UClass *param_1,AActor *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  if (((param_1 == (UClass *)0x0) || (param_2 == (AActor *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ThisClass && Actor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                         ,0x734,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)param_2,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (((!bVar4) && (param_2 != (AActor *)0x0)) &&
     ((((uint)param_2->_padding_ >> 0x1e & 1) == 0 && (param_1 != (UClass *)0x0)))) {
    pUVar5 = StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar5->_padding_)) {
      puVar6 = (undefined8 *)param_1[1]._padding_;
      iVar2 = (int)param_1[1]._padding_;
      puVar1 = puVar6 + iVar2;
      while( true ) {
        if ((int)param_1[1]._padding_ != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UTimelineTemplate>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (puVar6 == puVar1) break;
        if ((UTimelineTemplate *)*puVar6 != (UTimelineTemplate *)0x0) {
          CreateTimelineComponent(param_2,(UTimelineTemplate *)*puVar6);
        }
        puVar6 = puVar6 + 1;
      }
    }
  }
  return;
}

// CreatePersistentUberGraphFrame @ 1476997a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBlueprintGeneratedClass::CreatePersistentUberGraphFrame
          (UBlueprintGeneratedClass *this,UObject *param_1,bool param_2,bool param_3,UClass *param_4
          )

{
  UFunction *pUVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_PersistentUberGraphFrameMemory> FVar7;
  void *_Dst;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  UObject *local_res10;
  FName local_78;
  FString local_70;
  FString local_60;
  UObject **local_50;
  UClass **local_48;
  UBlueprintGeneratedClass *local_40;
  
  local_res10 = param_1;
  if (((this->UberGraphFramePointerProperty == (FStructProperty *)0x0) !=
       ((this->UberGraphFunction).field0_0x0.DebugPtr == (UFunction *)0x0)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4144715368457304216>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                         ,0x768,"!UberGraphFramePointerProperty == !UberGraphFunction"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((((local_res10 == (UObject *)0x0) || (bVar4 = UsePersistentUberGraphFrame(), !bVar4)) ||
      (this->UberGraphFramePointerProperty == (FStructProperty *)0x0)) ||
     ((this->UberGraphFunction).field0_0x0.DebugPtr == (UFunction *)0x0)) goto LAB_147699c4a;
  plVar5 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     ((FProperty *)this->UberGraphFramePointerProperty,local_res10,0);
  if ((plVar5 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PointerToUberGraphFrame",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                         ,0x76c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_2) {
LAB_1476998eb:
    if (*plVar5 != 0) goto LAB_147699c4a;
  }
  else if (*plVar5 != 0) {
    local_50 = &local_res10;
    local_48 = &param_4;
    local_40 = this;
    bVar4 = `UBlueprintGeneratedClass::CreatePersistentUberGraphFrame'::__l13::<lambda_1>::
            operator()(&local_50);
    if (bVar4) goto LAB_1476998eb;
    FMemory::Free((void *)*plVar5);
    *plVar5 = 0;
  }
  if (((uint)((this->UberGraphFunction).field0_0x0.DebugPtr)->_padding_ >> 0x15 & 1) == 0) {
    _Dst = (void *)0x0;
    if (5 < (byte)LogBlueprint._0_1_) {
      if (local_res10 == (UObject *)0x0) {
        ::FString::FString(&local_60,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_res10,&local_60,(UObject *)0x0);
      }
      pUVar1 = (this->UberGraphFunction).field0_0x0.DebugPtr;
      if (pUVar1 == (UFunction *)0x0) {
        ::FString::FString(&local_70,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar1,&local_70,(UObject *)0x0);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      _Dst = (void *)0x0;
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pUVar1 = (this->UberGraphFunction).field0_0x0.DebugPtr;
    iVar8 = (int)*(short *)((longlong)&pUVar1->_padding_ + 4);
    lVar10 = (longlong)((int)pUVar1->_padding_ + -1 + iVar8 & -iVar8);
    if (lVar10 != 0) {
      FVar7 = StatPtr_STAT_PersistentUberGraphFrameMemory;
      if (StatPtr_STAT_PersistentUberGraphFrameMemory ==
          (FThreadSafeStaticStat<FStat_STAT_PersistentUberGraphFrameMemory>)0x0) {
        pFVar6 = ::FName::FName(&local_78,"STAT_PersistentUberGraphFrameMemory");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_PersistentUberGraphFrameMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PersistentUberGraphFrameMemory
                           ,*pFVar6,L"Persistent Uber Graph Frame memory","STATGROUP_Memory",
                           "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical
                          );
      }
      FThreadStats::AddMessage<__int64>(*(FName *)FVar7,Add,lVar10,false);
    }
    pUVar1 = (this->UberGraphFunction).field0_0x0.DebugPtr;
    uVar9 = (uint)*(short *)((longlong)&pUVar1->_padding_ + 4);
    _Dst = FMemory::Malloc((longlong)(int)((int)pUVar1->_padding_ + -1 + uVar9 & -uVar9),uVar9);
    pUVar1 = (this->UberGraphFunction).field0_0x0.DebugPtr;
    iVar8 = (int)*(short *)((longlong)&pUVar1->_padding_ + 4);
    memset(_Dst,0,(longlong)((int)pUVar1->_padding_ + -1 + iVar8 & -iVar8));
    for (plVar2 = (longlong *)((this->UberGraphFunction).field0_0x0.DebugPtr)->_padding_;
        plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[9]) {
      if ((*(uint *)(plVar2 + 7) >> 9 & 1) == 0) {
        pcVar3 = *(code **)(*plVar2 + 0x150);
        if (((int)plVar2[6] < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((_Dst == (void *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (*pcVar3)(plVar2);
      }
      else {
        lVar10 = plVar2[6];
        iVar8 = *(int *)((longlong)plVar2 + 0x34);
        if (((int)lVar10 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((_Dst == (void *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        memset((void *)((longlong)*(int *)((longlong)plVar2 + 0x44) + (longlong)_Dst),0,
               (longlong)iVar8 * (longlong)(int)lVar10);
      }
    }
  }
  *plVar5 = (longlong)_Dst;
  *(uint *)(plVar5 + 1) = this->UberGraphFunctionKey;
LAB_147699c4a:
  if (!param_3) {
    (**(code **)(*(longlong *)this->_padding_ + 0x3a8))
              ((longlong *)this->_padding_,local_res10,param_2,0,0);
  }
  return;
}

// CreateTimelineComponent @ 14769a250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UBlueprintGeneratedClass::CreateTimelineComponent(AActor *param_1,UTimelineTemplate *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_> *pTVar2;
  byte *pbVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  code *pcVar7;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  UClass *pUVar12;
  UTimelineComponent *this;
  FObjectPropertyBase *this_00;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined1 auStackY_2b8 [32];
  UTimelineComponent *local_268;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_260;
  FWeakObjectPtr local_258;
  undefined8 local_250;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_248;
  FWeakObjectPtr local_240;
  FName local_238;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_230;
  FWeakObjectPtr local_228;
  FName local_220;
  TIndexedContainerIterator<TArray<FRichCurveKey,TSizedDefaultAllocator<32>_>_const_,FRichCurveKey_const_,int>
  local_218;
  undefined1 local_208 [8];
  undefined8 local_200;
  undefined8 local_1f8;
  FOnTimelineFloat local_1f0;
  FOnTimelineVector local_1d8;
  FOnTimelineLinearColor local_1c0;
  AActor *local_1a8;
  AActor *local_1a0;
  AActor *local_198;
  FDestructionSentinel local_190;
  FDestructionSentinel local_178;
  undefined1 local_160 [16];
  FName local_150;
  FDestructionSentinel local_148;
  undefined1 local_130 [16];
  FName local_120;
  FReadAccessScope local_118;
  FReadAccessScope local_100;
  FReadAccessScope local_e8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  if ((((param_1 != (AActor *)0x0) &&
       (local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8,
       ((uint)param_1->_padding_ >> 0x1e & 1) == 0)) && (param_2 != (UTimelineTemplate *)0x0)) &&
     (bVar9 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)param_1,RF_ArchetypeObject|RF_ClassDefaultObject),
     !bVar9)) {
    FVar4 = param_2->VariableName;
    if (FVar4 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)param_1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar12 = Z_Construct_UClass_UTimelineComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar12);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._24_4_ = RF_NoFlags;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = param_1;
    local_c8._16_8_ = FVar4;
    this = (UTimelineComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar16 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar16 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 2;
    pTVar2 = &param_1->BlueprintCreatedComponents;
    local_268 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_268) &&
        ((FScriptContainerElement *)&local_268 <
         pFVar5 + (longlong)(param_1->BlueprintCreatedComponents).ArrayMax * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = (param_1->BlueprintCreatedComponents).ArrayNum;
    piVar1 = &(param_1->BlueprintCreatedComponents).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (param_1->BlueprintCreatedComponents).ArrayNum = iVar10 + 1;
    *(UTimelineComponent **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_268;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_268 != (UTimelineComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_268);
    }
    UActorComponent::SetNetAddressable((UActorComponent *)this);
    UTimelineComponent::SetPropertySetObject(this,(UObject *)param_1);
    UTimelineComponent::SetDirectionPropertyName(this,param_2->DirectionPropertyName);
    UTimelineComponent::SetTimelineLength(this,param_2->TimelineLength);
    UTimelineComponent::SetTimelineLengthMode(this,(uint)(param_2->LengthMode).Value);
    *(uchar *)&this->_padding_ = (param_2->TimelineTickGroup).Value;
    this_00 = FindFProperty<FObjectPropertyBase>
                        ((UStruct *)param_1->_padding_,param_2->VariableName,Default);
    if (this_00 != (FObjectPropertyBase *)0x0) {
      FObjectPropertyBase::SetObjectPropertyValue_InContainer(this_00,param_1,(UObject *)this,0);
    }
    uVar17 = 0;
    uVar15 = uVar17;
    if (0 < (param_2->EventTracks).ArrayNum) {
      do {
        uVar13 = (uint)uVar15;
        uVar11 = 0;
        if ((int)uVar13 < (param_2->EventTracks).ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (param_2->EventTracks).AllocatorInstance.Data;
        if (*(longlong *)(pFVar5 + uVar17 + 0x20) != 0) {
          uVar6 = *(undefined8 *)(pFVar5 + uVar17 + 0x18);
          local_260.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          local_258.ObjectIndex = 0;
          local_258.ObjectSerialNumber = 0;
          local_250 = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_260,(FWriteAccessScope *)&local_190);
          local_1a8 = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_258,(FObjectPtr)&local_1a8);
          local_250 = uVar6;
          if (local_190.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
          }
          FRichCurve::GetKeyIterator
                    ((FRichCurve *)(*(longlong *)(pFVar5 + uVar17 + 0x20) + 0x30),&local_218);
          for (; (-1 < local_218.Index && (local_218.Index < (local_218.Container)->ArrayNum));
              local_218.Index = local_218.Index + 1) {
            local_208 = (undefined1  [8])0x0;
            local_200 = (FWeakObjectPtr)0x0;
            local_1f8 = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      (&local_260,&local_118);
            local_200 = local_258;
            local_1f8 = local_250;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_118);
            pTVar8 = local_218.Container;
            lVar14 = (longlong)local_218.Index;
            uVar11 = 0;
            if (local_218.Index < (local_218.Container)->ArrayNum) {
              uVar11 = (uint)~local_218.Index >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            UTimelineComponent::AddEvent
                      (this,*(float *)((pTVar8->AllocatorInstance).Data + lVar14 * 0x1c + 4),
                       (FOnTimelineEvent *)local_208);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_260.AccessDetector);
        }
        uVar17 = uVar17 + 0x28;
        uVar15 = (ulonglong)(uVar13 + 1);
      } while ((int)(uVar13 + 1) < (param_2->EventTracks).ArrayNum);
    }
    uVar17 = 0;
    uVar15 = uVar17;
    if (0 < (param_2->FloatTracks).ArrayNum) {
      do {
        uVar13 = (uint)uVar17;
        uVar11 = 0;
        if ((int)uVar13 < (param_2->FloatTracks).ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (param_2->FloatTracks).AllocatorInstance.Data;
        if (*(UCurveFloat **)(pFVar5 + uVar15 + 0x20) != (UCurveFloat *)0x0) {
          local_1f0._8_8_ = 0;
          local_1f0._16_8_ = 0;
          local_1f0._0_8_ = 0;
          UTimelineComponent::AddInterpFloat
                    (this,*(UCurveFloat **)(pFVar5 + uVar15 + 0x20),&local_1f0,
                     *(FName *)(pFVar5 + uVar15 + 0x18),*(FName *)(pFVar5 + uVar15 + 8));
        }
        uVar17 = (ulonglong)(uVar13 + 1);
        uVar15 = uVar15 + 0x28;
      } while ((int)(uVar13 + 1) < (param_2->FloatTracks).ArrayNum);
    }
    uVar17 = 0;
    uVar15 = uVar17;
    if (0 < (param_2->VectorTracks).ArrayNum) {
      do {
        uVar13 = (uint)uVar17;
        uVar11 = 0;
        if ((int)uVar13 < (param_2->VectorTracks).ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (param_2->VectorTracks).AllocatorInstance.Data;
        if (*(UCurveVector **)(pFVar5 + uVar15 + 0x20) != (UCurveVector *)0x0) {
          local_1d8._8_8_ = 0;
          local_1d8._16_8_ = 0;
          local_1d8._0_8_ = 0;
          UTimelineComponent::AddInterpVector
                    (this,*(UCurveVector **)(pFVar5 + uVar15 + 0x20),&local_1d8,
                     *(FName *)(pFVar5 + uVar15 + 0x18),*(FName *)(pFVar5 + uVar15 + 8));
        }
        uVar17 = (ulonglong)(uVar13 + 1);
        uVar15 = uVar15 + 0x28;
      } while ((int)(uVar13 + 1) < (param_2->VectorTracks).ArrayNum);
    }
    uVar17 = 0;
    uVar15 = uVar17;
    if (0 < (param_2->LinearColorTracks).ArrayNum) {
      do {
        uVar13 = (uint)uVar17;
        uVar11 = 0;
        if ((int)uVar13 < (param_2->LinearColorTracks).ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (param_2->LinearColorTracks).AllocatorInstance.Data;
        if (*(UCurveLinearColor **)(pFVar5 + uVar15 + 0x20) != (UCurveLinearColor *)0x0) {
          local_1c0._8_8_ = 0;
          local_1c0._16_8_ = 0;
          local_1c0._0_8_ = 0;
          UTimelineComponent::AddInterpLinearColor
                    (this,*(UCurveLinearColor **)(pFVar5 + uVar15 + 0x20),&local_1c0,
                     *(FName *)(pFVar5 + uVar15 + 0x18),*(FName *)(pFVar5 + uVar15 + 8));
        }
        uVar17 = (ulonglong)(uVar13 + 1);
        uVar15 = uVar15 + 0x28;
      } while ((int)(uVar13 + 1) < (param_2->LinearColorTracks).ArrayNum);
    }
    FVar4 = param_2->UpdateFunctionName;
    local_230.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_228.ObjectIndex = 0;
    local_228.ObjectSerialNumber = 0;
    local_220.ComparisonIndex.Value = 0;
    local_220.Number = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_230,(FWriteAccessScope *)&local_178);
    local_1a0 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_228,(FObjectPtr)&local_1a0);
    local_220 = FVar4;
    if (local_178.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
    }
    local_160._0_8_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_230,&local_100);
    local_160._8_4_ = local_228.ObjectIndex;
    local_160._12_4_ = local_228.ObjectSerialNumber;
    local_150 = local_220;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_100);
    UTimelineComponent::SetTimelinePostUpdateFunc(this,(FOnTimelineEvent *)local_160);
    FVar4 = param_2->FinishedFunctionName;
    local_248.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_240.ObjectIndex = 0;
    local_240.ObjectSerialNumber = 0;
    local_238.ComparisonIndex.Value = 0;
    local_238.Number = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_248,(FWriteAccessScope *)&local_148);
    local_198 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_240,(FObjectPtr)&local_198);
    local_238 = FVar4;
    if (local_148.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
    }
    local_130._0_8_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_248,&local_e8)
    ;
    local_130._8_4_ = local_240.ObjectIndex;
    local_130._12_4_ = local_240.ObjectSerialNumber;
    local_120 = local_238;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e8);
    UTimelineComponent::SetTimelineFinishedFunc(this,(FOnTimelineEvent *)local_130);
    UActorComponent::RegisterComponent((UActorComponent *)this);
    if (param_2->bAutoPlay != 0) {
      pbVar3 = (byte *)((longlong)&this->_padding_ + 2);
      *pbVar3 = *pbVar3 | 8;
      UTimelineComponent::Play(this);
    }
    if (param_2->bLoop != '\0') {
      UTimelineComponent::SetLooping(this,true);
    }
    if (param_2->bReplicated != '\0') {
      UActorComponent::SetIsReplicated((UActorComponent *)this,true);
    }
    if (param_2->bIgnoreTimeDilation != '\0') {
      UTimelineComponent::SetIgnoreTimeDilation(this,true);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_248.AccessDetector);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_230.AccessDetector);
  }
  return;
}

// DestroyPersistentUberGraphFrame @ 14769f960

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBlueprintGeneratedClass::DestroyPersistentUberGraphFrame
          (UBlueprintGeneratedClass *this,UObject *param_1,bool param_2)

{
  void *pvVar1;
  longlong *plVar2;
  UFunction *pUVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_PersistentUberGraphFrameMemory> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar10;
  uchar auVar11 [8];
  FName local_res8;
  FName local_res10;
  FStatMessage local_58;
  FString local_48;
  
  if (((this->UberGraphFramePointerProperty == (FStructProperty *)0x0) !=
       ((this->UberGraphFunction).field0_0x0.DebugPtr == (UFunction *)0x0)) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4144715368457304163>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                         ,0x79d,"!UberGraphFramePointerProperty == !UberGraphFunction"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((param_1 != (UObject *)0x0) && (bVar6 = UsePersistentUberGraphFrame(), bVar6)) &&
      (this->UberGraphFramePointerProperty != (FStructProperty *)0x0)) &&
     ((this->UberGraphFunction).field0_0x0.DebugPtr != (UFunction *)0x0)) {
    puVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal
                       ((FProperty *)this->UberGraphFramePointerProperty,param_1,0);
    pvVar1 = (void *)*puVar7;
    *puVar7 = 0;
    if (pvVar1 == (void *)0x0) {
      if (4 < (byte)LogBlueprint._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      for (plVar2 = (longlong *)((this->UberGraphFunction).field0_0x0.DebugPtr)->_padding_;
          plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[9]) {
        if ((plVar2[7] & 0x1000000000U) == 0) {
          pcVar5 = *(code **)(*plVar2 + 0x138);
          if (((int)plVar2[6] < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (*pcVar5)(plVar2,(longlong)*(int *)((longlong)plVar2 + 0x44) + (longlong)pvVar1);
        }
      }
      FMemory::Free(pvVar1);
      pUVar3 = (this->UberGraphFunction).field0_0x0.DebugPtr;
      iVar10 = (int)*(short *)((longlong)&pUVar3->_padding_ + 4);
      auVar11 = (uchar  [8])(longlong)((int)pUVar3->_padding_ + -1 + iVar10 & -iVar10);
      if (auVar11 != (uchar  [8])0x0) {
        FVar9 = StatPtr_STAT_PersistentUberGraphFrameMemory;
        if (StatPtr_STAT_PersistentUberGraphFrameMemory ==
            (FThreadSafeStaticStat<FStat_STAT_PersistentUberGraphFrameMemory>)0x0) {
          pFVar8 = ::FName::FName(&local_res10,"STAT_PersistentUberGraphFrameMemory");
          FVar9 = (FThreadSafeStaticStat<FStat_STAT_PersistentUberGraphFrameMemory>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &StatPtr_STAT_PersistentUberGraphFrameMemory,*pFVar8,
                             L"Persistent Uber Graph Frame memory","STATGROUP_Memory",
                             "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,
                             MCR_Physical);
        }
        FVar4 = *(FName *)FVar9;
        local_res8 = FVar4;
        if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this_00 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_00 == (FThreadStats *)0x0) {
            this_01 = FThreadStatsPool::Get();
            this_00 = FThreadStatsPool::GetFromPool(this_01);
          }
          local_58.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
          local_res8 = FVar4;
          local_58.StatData.Pad = auVar11;
          local_58.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(this_00,&local_58);
          FStatsTrace::Add(&local_res8,-(longlong)auVar11);
          if (this_00->ScopeCount == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
    }
  }
  if (((!param_2) && (plVar2 = (longlong *)this->_padding_, plVar2 != (longlong *)0x0)) &&
     ((*(uint *)(plVar2 + 1) >> 0x1e & 1) == 0)) {
    (**(code **)(*plVar2 + 0x3b0))(plVar2,param_1,0);
  }
  return;
}

// FindArchetype @ 1476a7f30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
UBlueprintGeneratedClass::FindArchetype
          (UBlueprintGeneratedClass *this,UClass *param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  USimpleConstructionScript *this_00;
  UActorComponent *pUVar2;
  FName FVar3;
  UBlueprintGeneratedClass *pUVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  USCS_Node *pUVar8;
  UObjectBase *pUVar9;
  FComponentKey *pFVar10;
  UActorComponent *pUVar11;
  int iVar12;
  ForAnyElementType FVar13;
  UActorComponent *pUVar14;
  int iVar15;
  UInheritableComponentHandler *this_01;
  ulonglong uVar16;
  FNameEntryId FVar17;
  FName local_res18;
  FName local_168;
  FName local_160;
  TObjectPtr<UClass>_u_0 local_158;
  FName local_150;
  uint local_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  UClass *local_108;
  UBlueprintGeneratedClass *local_100;
  longlong *local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FName local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FComponentKey local_58;
  
  uVar16 = 0;
  local_168 = (FName)((ulonglong)local_168 & 0xffffffff00000000);
  if ((this->SimpleConstructionScript).field0_0x0.DebugPtr == (USimpleConstructionScript *)0x0) {
    return (UObject *)0x0;
  }
  local_res18 = param_2;
  local_108 = param_1;
  local_100 = this;
  pUVar7 = Z_Construct_UClass_ALevelScriptActor_NoRegister();
  if (pUVar7 != (UClass *)0x0) {
    iVar15 = (int)pUVar7->_padding_;
    if (((int)this->_padding_ < iVar15) ||
       ((longlong *)*(undefined1 **)(this->_padding_ + (longlong)iVar15 * 8) != &pUVar7->_padding_))
    {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      return (UObject *)0x0;
    }
  }
  local_160 = (FName)((ulonglong)local_res18 & 0xffffffff);
  FVar3 = local_160;
  local_f8 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  do {
    pUVar14 = (UActorComponent *)0x0;
    this_00 = (this->SimpleConstructionScript).field0_0x0.DebugPtr;
    pUVar11 = pUVar14;
    if (this_00 == (USimpleConstructionScript *)0x0) {
LAB_1476a8276:
      this_01 = (UInheritableComponentHandler *)0x0;
      if ((*(int *)(*local_f8 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)
         ) {
        FBoolConfigValueHelper::FBoolConfigValueHelper
                  (&EnableInheritableComponents,L"Kismet",L"bEnableInheritableComponents",
                   &GEngineIni);
        _Init_thread_footer(&::_TSS0);
      }
      if (EnableInheritableComponents.bValue != false) {
        this_01 = (this->InheritableComponentHandler).field0_0x0.DebugPtr;
      }
      if (this_01 == (UInheritableComponentHandler *)0x0) goto LAB_1476a81d0;
      if (((uint)this_01->_padding_ >> 10 & 1) != 0) {
        if (GEventDrivenLoaderEnabled == false) {
          UInheritableComponentHandler::PreloadAll(this_01);
        }
        else {
          ::FName::ToString(&local_res18,&local_78);
          if ((param_1 == (UClass *)0x0) || (param_1->_padding_ == 0)) {
            ::FString::FString(&local_c0,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&local_c0,(UObject *)0x0,None);
          }
          if (this_01->_padding_ == 0) {
            ::FString::FString(&local_d0,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_01,&local_d0,(UObject *)0x0,None);
          }
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogClass);
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
      }
      UInheritableComponentHandler::FindKey
                (this_01,(FComponentKey *)&local_158.ObjectPtr,local_res18);
      if ((((local_158.DebugPtr == (UClass *)0x0) ||
           (((local_148 == 0 && uStack_144 == 0) && uStack_140 == 0) && uStack_13c == 0)) ||
          ((local_160.ComparisonIndex.Value = 0, local_160.Number = 0, local_150 != (FName)0x0 &&
           (local_138 = 0, local_150 == (FName)0x0)))) && (local_res18 != FVar3)) {
        pFVar10 = UInheritableComponentHandler::FindKey(this_01,&local_58,FVar3);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar7 = (pFVar10->OwnerClass).field0_0x0.DebugPtr, pUVar7 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        local_158.DebugPtr = (pFVar10->OwnerClass).field0_0x0.DebugPtr;
        local_150 = pFVar10->SCSVariableName;
        local_148 = (pFVar10->AssociatedGuid).A;
        uStack_144 = (pFVar10->AssociatedGuid).B;
        uStack_140 = (pFVar10->AssociatedGuid).C;
        uStack_13c = (pFVar10->AssociatedGuid).D;
        if ((((local_158.DebugPtr != (UClass *)0x0) &&
             (((uStack_13c != 0 || uStack_144 != 0) || local_148 != 0) || uStack_140 != 0)) &&
            ((local_130 = 0, local_150 == (FName)0x0 ||
             ((((local_148 == 0 && uStack_144 == 0) && uStack_140 == 0) && uStack_13c == 0 ||
              (local_128 = 0, local_150 != (FName)0x0)))))) &&
           ((local_120 = 0, local_150 != (FName)0x0 &&
            (((local_148 != 0 || uStack_144 != 0) || uStack_140 != 0) || uStack_13c != 0))))
        goto LAB_1476a81d0;
      }
      if (((local_158.DebugPtr == (UClass *)0x0) ||
          (((uStack_13c == 0 && uStack_144 == 0) && local_148 == 0) && uStack_140 == 0)) ||
         ((local_118 = 0, local_150 != (FName)0x0 &&
          ((((local_148 != 0 || uStack_144 != 0) || uStack_140 != 0) || uStack_13c != 0 &&
           (local_110 = 0, local_150 == (FName)0x0)))))) goto LAB_1476a81d0;
      pUVar11 = UInheritableComponentHandler::GetOverridenComponentTemplate
                          (this_01,(FComponentKey *)&local_158.ObjectPtr);
      if ((pUVar11 != (UActorComponent *)0x0) && (((uint)pUVar11->_padding_ >> 6 & 1) != 0)) {
        pUVar11 = (UActorComponent *)0x0;
      }
      if (GEventDrivenLoaderEnabled == false) goto LAB_1476a81d0;
      if (pUVar11 != (UActorComponent *)0x0) {
        if (((uint)pUVar11->_padding_ >> 10 & 1) != 0) {
          ::FName::ToString(&local_res18,&local_68);
          if ((param_1 == (UClass *)0x0) || (param_1->_padding_ == 0)) {
            ::FString::FString(&local_a0,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&local_a0,(UObject *)0x0,None);
          }
          if (pUVar11->_padding_ == 0) {
            ::FString::FString(&local_b0,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)pUVar11,&local_b0,(UObject *)0x0,None);
          }
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogClass);
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
          if ((void *)CONCAT44(local_a0.Data.AllocatorInstance.Data._4_4_,
                               local_a0.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
            FMemory::Free((void *)CONCAT44(local_a0.Data.AllocatorInstance.Data._4_4_,
                                           local_a0.Data.AllocatorInstance.Data._0_4_));
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_1476a81d0;
      }
    }
    else {
      if (((uint)this_00->_padding_ >> 10 & 1) != 0) {
        USimpleConstructionScript::PreloadChain(this_00);
      }
      pUVar8 = USimpleConstructionScript::FindSCSNode(this_00,local_res18);
      if (pUVar8 == (USCS_Node *)0x0) goto LAB_1476a8276;
      pUVar2 = (pUVar8->ComponentTemplate).field0_0x0.DebugPtr;
      if (pUVar2 != (UActorComponent *)0x0) {
        iVar15 = (int)param_1->_padding_;
        if (((*(int *)(pUVar2->_padding_ + 0x38) < iVar15) ||
            (pUVar11 = pUVar2,
            (longlong *)
            *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
            &param_1->_padding_)) && (pUVar11 = pUVar14, (param_1->ClassFlags >> 0x12 & 1) != 0)) {
          local_168 = (FName)param_1->_padding_;
          ::FName::ToString(&local_168,&local_e0);
          ::FString::FString(&local_88,"REINST_");
          local_168 = (FName)(CONCAT44(local_168.Number,(int)uVar16) | 1);
          if (local_88.Data.ArrayNum == 0) {
            iVar15 = 0;
          }
          else {
            iVar15 = local_88.Data.ArrayNum + -1;
          }
          FVar13.Data = (FScriptContainerElement *)L"";
          if (local_88.Data.ArrayNum != 0) {
            FVar13.Data = local_88.Data.AllocatorInstance.Data;
          }
          bVar5 = ::FString::StartsWith(&local_e0,(wchar_t *)FVar13.Data,iVar15,IgnoreCase);
          if (bVar5) {
            if (local_e0.Data.ArrayNum == 0) {
              iVar15 = 0;
            }
            else {
              iVar15 = local_e0.Data.ArrayNum + -1;
            }
            iVar12 = iVar15;
            if (iVar15 + -7 < iVar15) {
              iVar12 = iVar15 + -7;
            }
            iVar6 = 0;
            if (0 < iVar12) {
              iVar6 = iVar12;
            }
            local_168 = (FName)((ulonglong)local_168 | 2);
            pFVar1 = local_e0.Data.AllocatorInstance.Data + ((longlong)iVar15 - (longlong)iVar6) * 2
            ;
            local_90 = *(FName *)(((pUVar8->ComponentTemplate).field0_0x0.DebugPtr)->_padding_ +
                                 0x18);
            ::FName::ToString(&local_90,&local_f0);
            if (local_f0.Data.ArrayNum == 0) {
              iVar15 = 0;
            }
            else {
              iVar15 = local_f0.Data.ArrayNum + -1;
            }
            if (iVar15 < iVar6) {
              iVar6 = iVar15;
            }
            iVar12 = 0;
            if (0 < iVar6) {
              iVar12 = iVar6;
            }
            if (((iVar15 != iVar12) ||
                (((iVar15 != 0 && (iVar12 != 0)) &&
                 (iVar6 = FGenericPlatformStricmp::Strnicmp
                                    ((wchar_t *)local_f0.Data.AllocatorInstance.Data,
                                     (wchar_t *)pFVar1,(longlong)iVar12), iVar6 != 0)))) ||
               (iVar15 != iVar12)) goto LAB_1476a8182;
            bVar5 = true;
          }
          else {
LAB_1476a8182:
            bVar5 = false;
          }
          FVar17.Value = local_168.ComparisonIndex.Value;
          if ((((ulonglong)local_168 & 2) != 0) &&
             (FVar17.Value = local_168.ComparisonIndex.Value & 0xfffffffd,
             local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
          local_168 = (FName)(CONCAT44(local_168.Number,FVar17.Value) & 0xfffffffffffffffe);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pUVar14 = (pUVar8->ComponentTemplate).field0_0x0.DebugPtr;
          }
          pUVar11 = pUVar14;
          param_1 = local_108;
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
            param_1 = local_108;
          }
        }
      }
LAB_1476a81d0:
      if (pUVar11 != (UActorComponent *)0x0) {
        return (UObject *)pUVar11;
      }
    }
    pUVar4 = local_100;
    pUVar9 = FindObjectWithOuter((UObjectBase *)local_100,param_1,FVar3);
    if (pUVar9 != (UObjectBase *)0x0) {
      return (UObject *)pUVar9;
    }
    if ((local_res18 != FVar3) &&
       (pUVar9 = FindObjectWithOuter((UObjectBase *)pUVar4,param_1,local_res18),
       pUVar9 != (UObjectBase *)0x0)) {
      return (UObject *)pUVar9;
    }
    this = (UBlueprintGeneratedClass *)pUVar4->_padding_;
    if (this == (UBlueprintGeneratedClass *)0x0) {
      return (UObject *)0x0;
    }
    local_100 = this;
    pUVar7 = StaticClass();
    iVar15 = (int)pUVar7->_padding_;
    if (*(int *)(this->_padding_ + 0x38) < iVar15) {
      return (UObject *)0x0;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar15 * 8)
        != &pUVar7->_padding_) {
      return (UObject *)0x0;
    }
    uVar16 = (ulonglong)local_168 & 0xffffffff;
  } while( true );
}

// FindBlueprintPropertyGuidFromName @ 1476a8720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGuid * __thiscall
UBlueprintGeneratedClass::FindBlueprintPropertyGuidFromName
          (UBlueprintGeneratedClass *this,FGuid *__return_storage_ptr__,FName param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  
  if (*(char *)&this[-1].Timelines.AllocatorInstance.Data == '\0') {
    __return_storage_ptr__->A = 0;
    __return_storage_ptr__->B = 0;
    __return_storage_ptr__->C = 0;
    __return_storage_ptr__->D = 0;
    return __return_storage_ptr__;
  }
  pFVar4 = TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>::
           Find((TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>
                 *)&this->_padding_,param_1);
  if (pFVar4 != (FGuid *)0x0) {
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    __return_storage_ptr__->A = pFVar4->A;
    __return_storage_ptr__->B = uVar1;
    __return_storage_ptr__->C = uVar2;
    __return_storage_ptr__->D = uVar3;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// FindBlueprintPropertyNameFromGuid @ 1476a8790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall
UBlueprintGeneratedClass::FindBlueprintPropertyNameFromGuid
          (UBlueprintGeneratedClass *this,FGuid *param_1)

{
  undefined1 local_res8 [32];
  
  if (*(char *)&this[-1].Timelines.AllocatorInstance.Data != '\0') {
    `UBlueprintGeneratedClass::FindBlueprintPropertyNameFromGuid'::__l2::<lambda_1>::operator()
              (local_res8,
               (TMap<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_> *
               )param_1);
    return (FName)param_1;
  }
  param_1->A = 0;
  param_1->B = 0;
  return (FName)param_1;
}

// FindComponentTemplateByName @ 1476a8a00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorComponent * __thiscall
UBlueprintGeneratedClass::FindComponentTemplateByName(UBlueprintGeneratedClass *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UActorComponent *pUVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->ComponentTemplates).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->ComponentTemplates).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UActorComponent *)(*pcVar1)();
        return pUVar4;
      }
      pUVar4 = *(UActorComponent **)((this->ComponentTemplates).AllocatorInstance.Data + lVar6);
      if ((pUVar4 != (UActorComponent *)0x0) && ((FName)pUVar4->_padding_ == *param_1)) {
        return pUVar4;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->ComponentTemplates).ArrayNum);
  }
  return (UActorComponent *)0x0;
}

// FindPropertyGuidFromName @ 1476a9180

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGuid * __thiscall
UBlueprintGeneratedClass::FindPropertyGuidFromName
          (UBlueprintGeneratedClass *this,FGuid *__return_storage_ptr__,FName param_1)

{
  int iVar1;
  longlong *plVar2;
  FGuid *pFVar3;
  UClass *pUVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (((char)this->_padding_ == '\0') ||
     (pFVar3 = TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>
               ::Find((TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>
                       *)&this->CookedPropertyGuids,param_1), pFVar3 == (FGuid *)0x0)) {
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar5 = pFVar3->A;
    uVar6 = pFVar3->B;
    uVar7 = pFVar3->C;
    uVar8 = pFVar3->D;
  }
  if (((uVar8 == 0 && uVar7 == 0) && uVar6 == 0) && uVar5 == 0) {
    plVar2 = (longlong *)this->_padding_;
    if (plVar2 != (longlong *)0x0) {
      pUVar4 = StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        (**(code **)(*plVar2 + 0x358))(plVar2,__return_storage_ptr__,param_1);
        return __return_storage_ptr__;
      }
    }
    __return_storage_ptr__->A = 0;
    __return_storage_ptr__->B = 0;
    __return_storage_ptr__->C = 0;
    __return_storage_ptr__->D = 0;
  }
  else {
    __return_storage_ptr__->A = uVar5;
    __return_storage_ptr__->B = uVar6;
    __return_storage_ptr__->C = uVar7;
    __return_storage_ptr__->D = uVar8;
  }
  return __return_storage_ptr__;
}

// FindPropertyNameFromGuid @ 1476a9280

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall
UBlueprintGeneratedClass::FindPropertyNameFromGuid(UBlueprintGeneratedClass *this,FGuid *param_1)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  longlong local_res8;
  
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar3->_padding_)) &&
       ((**(code **)(*plVar2 + 0x350))(plVar2,&local_res8), local_res8 != 0)) goto LAB_1476a930d;
  }
  if ((char)this->_padding_ != '\0') {
    `UBlueprintGeneratedClass::FindBlueprintPropertyNameFromGuid'::__l2::<lambda_1>::operator()
              (&local_res8,
               (TMap<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_> *
               )param_1);
    return (FName)param_1;
  }
  local_res8 = 0;
LAB_1476a930d:
  param_1->A = (int)local_res8;
  param_1->B = (int)((ulonglong)local_res8 >> 0x20);
  return (FName)param_1;
}

// ForEachFieldNotify @ 1476aa590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBlueprintGeneratedClass::ForEachFieldNotify
          (UBlueprintGeneratedClass *this,
          TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *param_1,bool param_2)

{
  int iVar1;
  UBlueprintGeneratedClass *this_00;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  UClass *pUVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined8 local_38;
  int local_30;
  TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> local_28;
  
  if (this->FieldNotifiesStartBitNumber < 0) {
    local_res8[0] = 0;
    `UBlueprintGeneratedClass::ForEachFieldNotify'::__l2::<lambda_1>::operator()(local_res8);
  }
  uVar7 = 0;
  if (0 < (this->FieldNotifies).ArrayNum) {
    lVar8 = 0;
    do {
      iVar1 = this->FieldNotifiesStartBitNumber;
      uVar5 = 0;
      if ((int)uVar7 < (this->FieldNotifies).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_38 = *(undefined8 *)((this->FieldNotifies).AllocatorInstance.Data + lVar8);
      local_30 = iVar1 + uVar7;
      cVar4 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_38);
      if (cVar4 == '\0') {
        return;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (this->FieldNotifies).ArrayNum);
  }
  if ((param_2) &&
     (this_00 = (UBlueprintGeneratedClass *)this->_padding_,
     this_00 != (UBlueprintGeneratedClass *)0x0)) {
    pUVar6 = StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      local_28._0_8_ = *(undefined8 *)param_1;
      local_28._8_8_ = *(undefined8 *)&param_1->field_0x8;
      ForEachFieldNotify(this_00,&local_28,true);
    }
  }
  return;
}

// ForEachGeneratedClassInHierarchy @ 1476aa700

bool __cdecl
UBlueprintGeneratedClass::ForEachGeneratedClassInHierarchy
          (UClass *param_1,TFunctionRef<bool___cdecl(UBlueprintGeneratedClass_const_*)> *param_2)

{
  int iVar1;
  char cVar2;
  UClass *pUVar3;
  UClass *local_res8;
  
  while( true ) {
    if (param_1 == (UClass *)0x0) {
      return true;
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if (*(int *)(param_1->_padding_ + 0x38) < iVar1) {
      return true;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_) {
      return true;
    }
    local_res8 = param_1;
    cVar2 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res8);
    if (cVar2 == '\0') break;
    param_1 = (UClass *)param_1->_padding_;
  }
  return true;
}

// GetAssetRegistryTags @ 1476ad8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UBlueprintGeneratedClass::GetAssetRegistryTags
          (UBlueprintGeneratedClass *this,
          TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  UBlueprintGeneratedClass *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(UBlueprintGeneratedClass **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(UBlueprintGeneratedClass **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(this->_padding_ + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(UBlueprintGeneratedClass **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this
       ) goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 1476ad8e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBlueprintGeneratedClass::GetAssetRegistryTags
          (UBlueprintGeneratedClass *this,FAssetRegistryTagsContext param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  FAssetRegistryTagsContext FVar3;
  FString *pFVar4;
  UClass *pUVar5;
  FAssetRegistryTagsContextData *pFVar6;
  longlong lVar7;
  int iVar8;
  FAssetRegistryTagsContext local_res8;
  FString local_78;
  FString local_68;
  FAssetRegistryTag local_58;
  FAssetRegistryTag local_38;
  
  FVar3.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(&local_res8,param_1.Data);
  UClass::GetAssetRegistryTags((UClass *)this,FVar3);
  pFVar6 = (FAssetRegistryTagsContextData *)this->_padding_;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  if (pFVar6 == (FAssetRegistryTagsContextData *)0x0) {
    pFVar4 = ::FString::operator=(&local_78,L"None");
    iVar1 = (pFVar4->Data).ArrayNum;
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    ::FString::AssignRange(&local_68,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar8);
  }
  else {
    local_res8.Data = pFVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pFVar6);
    }
    pFVar4 = FObjectPropertyBase::GetExportPath
                       ((FString *)&local_58,(TObjectPtr<UObject_const_> *)&local_res8,
                        (UObject *)0x0,(UObject *)0x0,0);
    if (&local_78 != pFVar4) {
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_78.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = (pFVar4->Data).ArrayNum;
      local_78.Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_58.Name != (FName)0x0) {
      FMemory::Free((void *)local_58.Name);
    }
    for (; pFVar6 != (FAssetRegistryTagsContextData *)0x0;
        pFVar6 = *(FAssetRegistryTagsContextData **)&(pFVar6->Tags).field_0x40) {
      pUVar5 = StaticClass();
      lVar7 = *(longlong *)&(pFVar6->Tags).field_0x10;
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar7 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) break;
    }
    local_res8.Data = pFVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pFVar6 != (FAssetRegistryTagsContextData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pFVar6);
    }
    pFVar4 = FObjectPropertyBase::GetExportPath
                       ((FString *)&local_58,(TObjectPtr<UObject_const_> *)&local_res8,
                        (UObject *)0x0,(UObject *)0x0,0);
    if (&local_68 != pFVar4) {
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_68.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = (pFVar4->Data).ArrayNum;
      local_68.Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_58.Name != (FName)0x0) {
      FMemory::Free((void *)local_58.Name);
    }
  }
  FVar2.Data = local_78.Data.AllocatorInstance.Data;
  lVar7 = (longlong)local_78.Data.ArrayNum;
  local_58.Name = FBlueprintTags::ParentClassPath;
  local_58.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Value.Data.ArrayNum = local_78.Data.ArrayNum;
  if (local_78.Data.ArrayNum == 0) {
    local_58.Value.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_58.Value,
               local_78.Data.ArrayNum,&local_58.Value.Data.ArrayMax);
    memcpy(local_58.Value.Data.AllocatorInstance.Data,FVar2.Data,lVar7 * 2);
  }
  local_58.Type = TT_Alphabetical;
  local_58.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_58);
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  lVar7 = (longlong)local_68.Data.ArrayNum;
  local_58.Name = FBlueprintTags::NativeParentClassPath;
  local_58.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Value.Data.ArrayNum = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    local_58.Value.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_58.Value,
               local_68.Data.ArrayNum,&local_58.Value.Data.ArrayMax);
    memcpy(local_58.Value.Data.AllocatorInstance.Data,FVar2.Data,lVar7 * 2);
  }
  local_58.Type = TT_Alphabetical;
  local_58.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_58);
  local_58.Name.ComparisonIndex.Value = 0;
  local_58.Name.Number = 0;
  local_58.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::AppendInt((FString *)&local_58,*(int *)((longlong)&this->_padding_ + 4));
  local_38.Name = FBlueprintTags::ClassFlags;
  local_38.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_58.Name;
  local_38.Value.Data.ArrayNum = (int)local_58.Value.Data.AllocatorInstance.Data;
  local_38.Value.Data.ArrayMax = local_58.Value.Data.AllocatorInstance.Data._4_4_;
  local_58.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Name.ComparisonIndex.Value = 0;
  local_58.Name.Number = 0;
  local_38.Type = TT_Hidden;
  local_38.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_38);
  if (local_58.Name != (FName)0x0) {
    FMemory::Free((void *)local_58.Name);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// GetDefaultObjectPreloadDependencies @ 1476b0200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBlueprintGeneratedClass::GetDefaultObjectPreloadDependencies
          (UBlueprintGeneratedClass *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TObjectPtr<UObject>_u_0 *pTVar1;
  USimpleConstructionScript *pUVar2;
  USCS_Node *this_00;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  UStruct *pUVar5;
  UObjectBaseUtility *this_01;
  undefined8 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  UClass *pUVar13;
  UScriptStruct *pUVar14;
  void *pvVar15;
  ICppStructOps *this_02;
  FFieldClass *pFVar16;
  TTuple<FProperty_const_*,void_const_*> *pTVar17;
  ulonglong uVar18;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  UBlueprintGeneratedClass *pUVar24;
  undefined1 auStackY_818 [32];
  undefined1 local_7c8;
  undefined1 local_7c7;
  undefined1 local_7c6 [6];
  TObjectPtr<UObject>_u_0 local_7c0;
  USCS_Node *local_7b8;
  UActorComponent *local_7b0;
  longlong local_7a8;
  longlong local_7a0;
  longlong local_798;
  UScriptStruct *local_790;
  uint local_788;
  FScriptContainerElement *local_780;
  FString local_778;
  FPropertyValueIterator local_768;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_818;
  pUVar13 = (UClass *)this->_padding_;
  if ((pUVar13->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar13);
  }
  local_7c0 = (pUVar13->ClassDefaultObject).field0_0x0;
  pTVar1 = (TObjectPtr<UObject>_u_0 *)(param_1->AllocatorInstance).Data;
  if (((pTVar1 <= &local_7c0) && (&local_7c0 < pTVar1 + param_1->ArrayMax)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar11 = param_1->ArrayNum;
  if (iVar11 == param_1->ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar11 + 1;
  *(TObjectPtr<UObject>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_7c0
  ;
  pUVar24 = this;
  while( true ) {
    pUVar2 = (pUVar24->SimpleConstructionScript).field0_0x0.DebugPtr;
    if (pUVar2 != (USimpleConstructionScript *)0x0) {
      local_788 = (pUVar2->AllNodes).ArrayNum;
      uVar18 = (ulonglong)(int)local_788;
      pFVar22 = (pUVar2->AllNodes).AllocatorInstance.Data;
      local_780 = pFVar22 + uVar18 * 8;
      while( true ) {
        pFVar21 = local_780;
        if ((pUVar2->AllNodes).ArrayNum != (int)uVar18) {
          local_7c8 = 0;
          `TCheckedPointerIterator<USCS_Node_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_7c8);
        }
        if (pFVar22 == pFVar21) break;
        this_00 = *(USCS_Node **)pFVar22;
        if (pUVar24 == this) {
          pFVar21 = (param_1->AllocatorInstance).Data;
          local_7b8 = this_00;
          if (((pFVar21 <= (FScriptContainerElement *)&local_7b8) &&
              ((FScriptContainerElement *)&local_7b8 < pFVar21 + (longlong)param_1->ArrayMax * 8))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar11 = param_1->ArrayNum;
          if (iVar11 == param_1->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar11 + 1;
          *(USCS_Node **)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_7b8;
        }
        local_7b0 = USCS_Node::GetActualComponentTemplate(this_00,this);
        pFVar21 = (param_1->AllocatorInstance).Data;
        if (((pFVar21 <= (FScriptContainerElement *)&local_7b0) &&
            ((FScriptContainerElement *)&local_7b0 < pFVar21 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar11 = param_1->ArrayNum;
        if (iVar11 == param_1->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar11 + 1;
        pFVar22 = pFVar22 + 8;
        *(UActorComponent **)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_7b0;
        uVar18 = (ulonglong)local_788;
      }
    }
    pUVar24 = (UBlueprintGeneratedClass *)pUVar24->_padding_;
    if (pUVar24 == (UBlueprintGeneratedClass *)0x0) break;
    pUVar13 = StaticClass();
    iVar11 = (int)pUVar13->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar13->_padding_)) break;
  }
  pFVar21 = (this->ComponentTemplates).AllocatorInstance.Data;
  iVar11 = (this->ComponentTemplates).ArrayNum;
  pFVar22 = pFVar21 + (longlong)iVar11 * 8;
  while( true ) {
    if ((this->ComponentTemplates).ArrayNum != iVar11) {
      local_7c7 = 0;
      `TCheckedPointerIterator<TObjectPtr<UActorComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_7c7);
    }
    if (pFVar21 == pFVar22) break;
    lVar3 = *(longlong *)pFVar21;
    if (lVar3 != 0) {
      pFVar4 = (param_1->AllocatorInstance).Data;
      local_7a8 = lVar3;
      if (((pFVar4 <= (FScriptContainerElement *)&local_7a8) &&
          ((FScriptContainerElement *)&local_7a8 < pFVar4 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar12 = param_1->ArrayNum;
      if (iVar12 == param_1->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar12 + 1;
      *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_7a8;
    }
    pFVar21 = pFVar21 + 8;
  }
  bVar10 = GetAllowNativeComponentClassOverrides();
  if (bVar10) {
    pFVar21 = (this->ComponentClassOverrides).AllocatorInstance.Data;
    iVar11 = (this->ComponentClassOverrides).ArrayNum;
    pFVar22 = pFVar21 + 8;
    while( true ) {
      if ((this->ComponentClassOverrides).ArrayNum != iVar11) {
        local_7c6[0] = 0;
        `TCheckedPointerIterator<FBPComponentClassOverride,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_7c6);
      }
      if (pFVar22 + -8 == pFVar21 + (longlong)iVar11 * 0x10) break;
      lVar3 = *(longlong *)pFVar22;
      if (lVar3 != 0) {
        pFVar4 = (param_1->AllocatorInstance).Data;
        local_7a0 = lVar3;
        if (((pFVar4 <= (FScriptContainerElement *)&local_7a0) &&
            ((FScriptContainerElement *)&local_7a0 < pFVar4 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar12 = param_1->ArrayNum;
        if (iVar12 == param_1->ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar12 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_7a0;
      }
      pFVar22 = pFVar22 + 0x10;
    }
  }
  local_798 = this->_padding_;
  if (local_798 != 0) {
    pFVar22 = (param_1->AllocatorInstance).Data;
    if (((pFVar22 <= (FScriptContainerElement *)&local_798) &&
        ((FScriptContainerElement *)&local_798 < pFVar22 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar11 = param_1->ArrayNum;
    if (iVar11 == param_1->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar11 + 1;
    *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_798;
    pUVar14 = UClass::GetSparseClassDataArchetypeStruct((UClass *)this);
    if (pUVar14 != (UScriptStruct *)0x0) {
      pFVar22 = (param_1->AllocatorInstance).Data;
      local_790 = pUVar14;
      if (((pFVar22 <= (FScriptContainerElement *)&local_790) &&
          ((FScriptContainerElement *)&local_790 < pFVar22 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == param_1->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar11 + 1;
      *(UScriptStruct **)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_790;
    }
    pvVar15 = UClass::GetSparseClassData((UClass *)this,ArchetypeIfNull);
    this_02 = UScriptStruct::GetCppStructOps((UScriptStruct *)this->_padding_);
    if (this_02 != (ICppStructOps *)0x0) {
      UScriptStruct::ICppStructOps::GetPreloadDependencies(this_02,pvVar15,param_1);
    }
    pUVar5 = (UStruct *)this->_padding_;
    pFVar16 = FStructProperty::StaticClass();
    FPropertyValueIterator::FPropertyValueIterator
              (&local_768,pFVar16,pUVar5,pvVar15,FullRecursion,IncludeDeprecated);
    while (0 < local_768.PropertyIteratorStack.ArrayNum) {
      pTVar17 = FPropertyValueIterator::operator->(&local_768);
      this_01 = *(UObjectBaseUtility **)(*(longlong *)pTVar17 + 0x70);
      if (this_01[4].field_0x14 == '\0') {
        UObjectBaseUtility::GetPathName(this_01,&local_778,(UObject *)0x0);
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("bPrepareCppStructOpsCompleted",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                            ,0x8f6,
                            L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s"
                           );
        if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_778.Data.AllocatorInstance.Data);
        }
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      puVar6 = *(undefined8 **)&this_01[4].field_0x18;
      if (puVar6 != (undefined8 *)0x0) {
        pTVar17 = FPropertyValueIterator::operator->(&local_768);
        puVar7 = (uint *)*puVar6;
        uVar8 = *(undefined8 *)&pTVar17->field_0x8;
        if ((*(byte *)((longlong)puVar7 + 0x17) & 4) != 0) {
          if (((~(byte)(*puVar7 >> 9) & 1) != 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!!(this->Flags & FuncFlag)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                  ,0x660,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar23 = 0;
          for (uVar20 = *puVar7 & 0x1ff; uVar20 != 0; uVar20 = uVar20 & uVar20 - 1) {
            uVar23 = uVar23 + 1;
          }
          (**(code **)(puVar7 + (ulonglong)uVar23 * 2 + 6))(uVar8,param_1);
        }
      }
      FPropertyValueIterator::IterateToNext(&local_768);
    }
    FVar19 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_768;
    if (local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
        (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
      FVar19 = local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData;
    }
    DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
              ((FPropertyValueStackEntry *)FVar19,local_768.PropertyIteratorStack.ArrayNum);
    if (local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
        (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
      FMemory::Free((void *)local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// GetDynamicBindingObject @ 1476b0bd0

UDynamicBlueprintBinding * __cdecl
UBlueprintGeneratedClass::GetDynamicBindingObject(UClass *param_1,UClass *param_2)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UDynamicBlueprintBinding *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  
  if ((param_1 == (UClass *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ThisClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                         ,0x639,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar5 = (UDynamicBlueprintBinding *)(*pcVar3)();
    return pUVar5;
  }
  if (param_1 != (UClass *)0x0) {
    pUVar6 = StaticClass();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar6->_padding_)) {
      plVar7 = (longlong *)param_1[1]._padding_;
      iVar2 = (int)param_1[1]._padding_;
      plVar1 = plVar7 + iVar2;
      while( true ) {
        if ((int)param_1[1]._padding_ != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UDynamicBlueprintBinding>_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res8);
        }
        if (plVar7 == plVar1) break;
        pUVar5 = (UDynamicBlueprintBinding *)*plVar7;
        if ((pUVar5 != (UDynamicBlueprintBinding *)0x0) &&
           (*(UClass **)&pUVar5->field_0x10 == param_2)) {
          return pUVar5;
        }
        plVar7 = plVar7 + 1;
      }
      return (UDynamicBlueprintBinding *)0x0;
    }
  }
  return (UDynamicBlueprintBinding *)0x0;
}

// GetGeneratedClassesHierarchy @ 1476b0df0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UBlueprintGeneratedClass::GetGeneratedClassesHierarchy
          (UClass *param_1,
          TArray<UBlueprintGeneratedClass_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  TArray<UBlueprintGeneratedClass_const_*,TSizedDefaultAllocator<32>_> *local_res8;
  
  param_2->ArrayNum = 0;
  local_res8 = param_2;
  if (param_2->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  while( true ) {
    if ((UBlueprintGeneratedClass *)param_1 == (UBlueprintGeneratedClass *)0x0) {
      return true;
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if (*(int *)(((UBlueprintGeneratedClass *)param_1)->_padding_ + 0x38) < iVar1) {
      return true;
    }
    if ((longlong *)
        *(undefined1 **)
         (*(longlong *)(((UBlueprintGeneratedClass *)param_1)->_padding_ + 0x30) +
         (longlong)iVar1 * 8) != &pUVar3->_padding_) {
      return true;
    }
    bVar2 = `UBlueprintGeneratedClass::GetGeneratedClassesHierarchy'::__l2::<lambda_1>::operator()
                      (&local_res8,(UBlueprintGeneratedClass *)param_1);
    if (!bVar2) break;
    param_1 = (UClass *)((UBlueprintGeneratedClass *)param_1)->_padding_;
  }
  return true;
}

// GetInheritableComponentHandler @ 1476b1320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInheritableComponentHandler * __thiscall
UBlueprintGeneratedClass::GetInheritableComponentHandler
          (UBlueprintGeneratedClass *this,bool param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UInheritableComponentHandler *pUVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FBoolConfigValueHelper::FBoolConfigValueHelper
              (&EnableInheritableComponents,L"Kismet",L"bEnableInheritableComponents",&GEngineIni);
    _Init_thread_footer(&::_TSS0);
  }
  if (EnableInheritableComponents.bValue == false) {
    pUVar4 = (UInheritableComponentHandler *)0x0;
  }
  else {
    pUVar4 = (this->InheritableComponentHandler).field0_0x0.DebugPtr;
    if ((pUVar4 == (UInheritableComponentHandler *)0x0) && (param_1)) {
      pFVar2 = ::FName::FName(local_a8,L"InheritableComponentHandler");
      FVar1 = *pFVar2;
      if (FVar1 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar3 = Z_Construct_UClass_UInheritableComponentHandler_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar3);
      local_98._48_8_ = (FObjectInstancingGraph *)0x0;
      local_98._56_8_ = (UPackage *)0x0;
      local_98._24_4_ = RF_NoFlags;
      local_98[0x20] = false;
      local_98._8_8_ = this;
      local_98._16_8_ = FVar1;
      local_98._40_8_ = pUVar4;
      pUVar4 = (UInheritableComponentHandler *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar5 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar5 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UInheritableComponentHandler *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->InheritableComponentHandler).field0_0x0.DebugPtr = pUVar4;
    }
  }
  return pUVar4;
}

// GetLifetimeBlueprintReplicationList @ 1476b1870

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBlueprintGeneratedClass::GetLifetimeBlueprintReplicationList
          (UBlueprintGeneratedClass *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  FField *pFVar2;
  UClass *pUVar3;
  int iVar4;
  TFieldIterator<FProperty> local_38;
  FLifetimeProperty local_20;
  
  local_38.Field = (FField *)this->_padding_;
  iVar4 = this->NumReplicatedProperties;
  local_38.InterfaceIndex = -1;
  local_38.bIncludeSuper = false;
  local_38.bIncludeDeprecated = true;
  local_38.bIncludeInterface = false;
  local_38.Struct = (UStruct *)this;
  TFieldIterator<FProperty>::IterateToNext(&local_38);
  pFVar2 = local_38.Field;
  while ((local_38.Field = pFVar2, pFVar2 != (FField *)0x0 && (iVar4 != 0))) {
    if ((pFVar2 != (FField *)0x0) && (((ulonglong)pFVar2[1].ClassPrivate & 0x20) != 0)) {
      local_20.RepIndex = *(ushort *)&pFVar2[1].Owner.Container;
      iVar4 = iVar4 + -1;
      local_20.Condition = (ELifetimeCondition)*(byte *)((longlong)&pFVar2[1].Owner.Container + 2);
      local_20.RepNotifyCondition = REPNOTIFY_OnChanged;
      local_20.bIsPushBased = false;
      local_20.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FLifetimeProperty>
                (param_1,&local_20);
    }
    local_38.Field = pFVar2->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_38);
    pFVar2 = local_38.Field;
  }
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    pUVar3 = StaticClass();
    iVar4 = (int)pUVar3->_padding_;
    if ((iVar4 <= *(int *)(plVar1[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar1[2] + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar3->_padding_)) {
      (**(code **)(*plVar1 + 0x408))(plVar1,param_1);
    }
  }
  return;
}

// GetPersistentUberGraphFrame @ 1476b29a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uchar * __thiscall
UBlueprintGeneratedClass::GetPersistentUberGraphFrame
          (UBlueprintGeneratedClass *this,UObject *param_1,UFunction *param_2)

{
  UFunction *pUVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  uchar *puVar5;
  
  if (param_1 != (UObject *)0x0) {
    bVar3 = UsePersistentUberGraphFrame();
    if ((((bVar3) && (this->UberGraphFramePointerProperty != (FStructProperty *)0x0)) &&
        (pUVar1 = (this->UberGraphFunction).field0_0x0.DebugPtr, pUVar1 != (UFunction *)0x0)) &&
       (pUVar1 == param_2)) {
      plVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)this->UberGraphFramePointerProperty,param_1,0);
      if (*plVar4 == 0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4144715368457304236>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                           ,0x754,"PointerToUberGraphFrame->RawPointer");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          puVar5 = (uchar *)(*pcVar2)();
          return puVar5;
        }
      }
      return (uchar *)*plVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001476b2a53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar5 = (uchar *)(**(code **)(*(longlong *)this->_padding_ + 0x3a0))
                              ((longlong *)this->_padding_,param_1,param_2);
  return puVar5;
}

// GetPreloadDependencies @ 1476b32b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UBlueprintGeneratedClass::GetPreloadDependencies
          (UBlueprintGeneratedClass *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  UClass *this_00;
  TObjectPtr<UObject>_u_0 *pTVar1;
  TObjectPtr<UFunction>_u_0 TVar2;
  TObjectPtr<UFunction>_u_0 *pTVar3;
  TObjectPtr<UInheritableComponentHandler>_u_0 TVar4;
  TObjectPtr<UInheritableComponentHandler>_u_0 *pTVar5;
  TObjectPtr<USimpleConstructionScript>_u_0 *pTVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_res8;
  TObjectPtr<UObject>_u_0 local_48;
  TObjectPtr<UFunction>_u_0 local_40;
  TObjectPtr<UInheritableComponentHandler>_u_0 local_38;
  TObjectPtr<USimpleConstructionScript>_u_0 local_30;
  code *local_28;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> **local_20;
  code *local_18;
  code **local_10;
  
  UClass::GetPreloadDependencies((UClass *)this,param_1);
  this_00 = (UClass *)this->_padding_;
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  local_48 = (this_00->ClassDefaultObject).field0_0x0;
  pTVar1 = (TObjectPtr<UObject>_u_0 *)(param_1->AllocatorInstance).Data;
  if ((pTVar1 <= &local_48) && (&local_48 < pTVar1 + param_1->ArrayMax)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = param_1->ArrayNum;
  if (iVar9 == param_1->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar9 + 1;
  *(TObjectPtr<UObject>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_48;
  TVar2 = (TObjectPtr<UFunction>_u_0)(this->UberGraphFunction).field0_0x0.DebugPtr;
  if (TVar2.DebugPtr != (UFunction *)0x0) {
    pTVar3 = (TObjectPtr<UFunction>_u_0 *)(param_1->AllocatorInstance).Data;
    local_40 = TVar2;
    if ((pTVar3 <= &local_40) && (&local_40 < pTVar3 + param_1->ArrayMax)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = param_1->ArrayNum;
    if (iVar9 == param_1->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar9 + 1;
    ((TObjectPtr<UFunction>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8))->
    DebugPtr = (UFunction *)local_40;
  }
  if (this->_padding_ == 0) {
    UClass::InternalCreateDefaultObjectWrapper((UClass *)this);
  }
  if ((UObjectBase *)this->_padding_ != (UObjectBase *)0x0) {
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UBlueprintGeneratedClass::GetPreloadDependencies'::__l8::<lambda_1>,void,UObject_*>
               ::Call;
    local_20 = &local_res8;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`ForEachObjectWithOuter'::__l2::<lambda_1>,bool,UObject_*>::Call;
    local_res8 = param_1;
    ForEachObjectWithOuterBreakable
              ((UObjectBase *)this->_padding_,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_18,
               true,RF_NoFlags,Borrowed);
  }
  TVar4 = (TObjectPtr<UInheritableComponentHandler>_u_0)
          (this->InheritableComponentHandler).field0_0x0.DebugPtr;
  if (TVar4.DebugPtr != (UInheritableComponentHandler *)0x0) {
    pTVar5 = (TObjectPtr<UInheritableComponentHandler>_u_0 *)(param_1->AllocatorInstance).Data;
    local_38 = TVar4;
    if ((pTVar5 <= &local_38) && (&local_38 < pTVar5 + param_1->ArrayMax)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = param_1->ArrayNum;
    if (iVar9 == param_1->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar9 + 1;
    ((TObjectPtr<UInheritableComponentHandler>_u_0 *)
    ((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8))->DebugPtr =
         (UInheritableComponentHandler *)local_38;
  }
  local_30 = (TObjectPtr<USimpleConstructionScript>_u_0)
             (this->SimpleConstructionScript).field0_0x0.DebugPtr;
  if (local_30.DebugPtr != (USimpleConstructionScript *)0x0) {
    pTVar6 = (TObjectPtr<USimpleConstructionScript>_u_0 *)(param_1->AllocatorInstance).Data;
    if ((pTVar6 <= &local_30) && (&local_30 < pTVar6 + param_1->ArrayMax)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = param_1->ArrayNum;
    if (iVar9 == param_1->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar9 + 1;
    ((TObjectPtr<USimpleConstructionScript>_u_0 *)
    ((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8))->DebugPtr =
         (USimpleConstructionScript *)local_30;
  }
  return;
}

// GetPrimaryAssetId @ 1476b3610

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimaryAssetId * __thiscall
UBlueprintGeneratedClass::GetPrimaryAssetId
          (UBlueprintGeneratedClass *this,FPrimaryAssetId *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FPrimaryAssetId *pFVar5;
  FName *pFVar6;
  undefined1 local_18 [16];
  
  (__return_storage_ptr__->PrimaryAssetType).Name = (FName)0x0;
  (__return_storage_ptr__->PrimaryAssetName).ComparisonIndex = 0;
  (__return_storage_ptr__->PrimaryAssetName).Number = 0;
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 == (longlong *)0x0) {
    if ((this->_padding_ & 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("HasAnyFlags(RF_ClassDefaultObject)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                         ,0x294,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FPrimaryAssetId *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  else {
    pFVar6 = (FName *)(**(code **)(*plVar1 + 0x1c8))(plVar1,local_18);
    FVar3 = pFVar6[1];
    (__return_storage_ptr__->PrimaryAssetType).Name = *pFVar6;
    __return_storage_ptr__->PrimaryAssetName = FVar3;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1476b3f40

UClass * __cdecl UBlueprintGeneratedClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintGeneratedClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintGeneratedClass",
               &Z_Registration_Info_UClass_UBlueprintGeneratedClass.InnerSingleton,
               StaticRegisterNativesUBlueprintGeneratedClass,0x370,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintGeneratedClass>,
               InternalVTableHelperCtorCaller<UBlueprintGeneratedClass>,local_res8,
               UClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintGeneratedClass.InnerSingleton;
}

// GetUberGraphFrameName @ 1476b61a0

FName __cdecl UBlueprintGeneratedClass::GetUberGraphFrameName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&UberGraphFrameName,L"UberGraphFrame");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = UberGraphFrameName;
  return in_RCX;
}

// GetVersePath @ 1476b6230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FVersePath * __thiscall
UBlueprintGeneratedClass::GetVersePath
          (UBlueprintGeneratedClass *this,FVersePath *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  int iVar2;
  FName *pFVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_8b8 [32];
  FTopLevelAssetPath local_898;
  FName local_888 [2];
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_8b8;
  local_898.PackageName.ComparisonIndex.Value = 0;
  local_898.PackageName.Number = 0;
  local_898.AssetName.ComparisonIndex.Value = 0;
  local_898.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_898,(UObject *)this);
  local_878.Base = local_858;
  local_878.bIsDynamic = false;
  local_878.bIsExternal = false;
  local_878.CurPos = local_858;
  local_878.End = local_42;
  local_888[0] = local_898.AssetName;
  ::FName::ToString(local_888,&local_878);
  pwVar1 = local_878.Base;
  iVar4 = (int)((longlong)local_878.CurPos - (longlong)local_878.Base >> 1);
  iVar2 = iVar4;
  if (2 < iVar4) {
    iVar2 = 2;
  }
  iVar5 = 0;
  if (0 < iVar2) {
    iVar5 = iVar2;
  }
  if ((iVar5 == 2) &&
     (iVar2 = wcsncmp(L"_C",local_878.Base + ((longlong)iVar4 - (longlong)iVar5),2), iVar2 == 0)) {
    if (iVar4 + -2 < iVar4) {
      iVar4 = iVar4 + -2;
    }
    iVar2 = 0;
    if (0 < iVar4) {
      iVar2 = iVar4;
    }
    pFVar3 = ::FName::FName(local_888,iVar2,pwVar1,FNAME_Add);
    FTopLevelAssetPath::TrySetPath(&local_898,local_898.PackageName,*pFVar3);
  }
  FPackageName::GetVersePath(__return_storage_ptr__,&local_898);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
  return __return_storage_ptr__;
}

// InitArrayPropertyFromCustomList @ 1476b7740

void __cdecl
UBlueprintGeneratedClass::InitArrayPropertyFromCustomList
          (FArrayProperty *param_1,FCustomPropertyListNode *param_2,uchar *param_3,uchar *param_4)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  int iVar3;
  FProperty *pFVar4;
  code *pcVar5;
  FArrayProperty *pFVar6;
  EArrayPropertyFlags EVar7;
  bool bVar8;
  uchar *puVar9;
  uchar *puVar10;
  FScriptArrayHelper_u_8 FVar11;
  uchar *puVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  FArrayProperty *local_res8;
  EArrayPropertyFlags local_res10;
  FArrayProperty **local_70;
  <lambda_1> local_68;
  FScriptArrayHelper local_58;
  
  EVar1 = param_1->ArrayFlags;
  local_res8 = param_1;
  local_58.ElementAlignment = (**(code **)(param_1->Inner->_padding_ + 0x168))();
  local_58.InnerProperty = param_1->Inner;
  local_58.ElementSize = (local_58.InnerProperty)->ElementSize;
  local_58.field1_0x8 = (FScriptArrayHelper_u_8)param_3;
  local_58.ArrayFlags = EVar1;
  if ((local_58.ElementSize < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_58.InnerProperty == (FProperty *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar6 = local_res8;
  EVar1 = local_res8->ArrayFlags;
  (**(code **)(local_res8->Inner->_padding_ + 0x168))();
  pFVar4 = pFVar6->Inner;
  iVar2 = pFVar4->ElementSize;
  if ((iVar2 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pFVar4 == (FProperty *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = *(int *)(param_4 + 8);
  local_res10 = EVar1 & UsesMemoryImageAllocator;
  iVar16 = (local_58.field1_0x8.FreezableArray)->ArrayNum;
  if (iVar16 < iVar3) {
    FScriptArrayHelper::AddValues(&local_58,iVar3 - iVar16);
  }
  else if (iVar3 < iVar16) {
    iVar14 = iVar16 - iVar3;
    if ((iVar14 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Count>=0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1127,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((iVar3 < 0) || ((local_58.field1_0x8.FreezableArray)->ArrayNum < iVar16)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index + Count <= Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1128,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FScriptArrayHelper::DestructItems(&local_58,iVar3,iVar14);
    local_68.__this = &local_58;
    local_68.Index = iVar3;
    local_68.Count = iVar14;
    FScriptArrayHelper::WithScriptArray<_FScriptArrayHelper::RemoveValues_::__l2::<lambda_1>_>
              (&local_58,&local_68);
  }
  EVar7 = local_res10;
  puVar9 = (uchar *)0x0;
  iVar16 = 0;
  EVar1 = local_res10;
  FVar11 = local_58.field1_0x8;
  for (; local_res10 = EVar1, param_2 != (FCustomPropertyListNode *)0x0;
      param_2 = param_2->PropertyListNext) {
    iVar16 = param_2->ArrayIndex;
    if (param_2->Property == (FProperty *)0x0) break;
    puVar10 = puVar9;
    if ((FVar11.FreezableArray)->ArrayNum != 0) {
      puVar10 = (uchar *)(FVar11.FreezableArray)->_padding_;
      if (((local_58.ArrayFlags & UsesMemoryImageAllocator) != None) &&
         (((ulonglong)puVar10 & 1) != 0)) {
        puVar10 = &(FVar11.HeapArray)->field_0x0 + ((longlong)puVar10 >> 0x18);
      }
      puVar10 = puVar10 + (longlong)local_58.ElementSize * (longlong)iVar16;
    }
    puVar12 = puVar9;
    if (*(int *)(param_4 + 8) != 0) {
      puVar12 = *(uchar **)param_4;
      if ((EVar7 != None) && (((ulonglong)puVar12 & 1) != 0)) {
        puVar12 = param_4 + ((longlong)puVar12 >> 0x18);
      }
      puVar12 = puVar12 + (longlong)iVar2 * (longlong)iVar16;
    }
    if ((puVar10 != (uchar *)0x0) || (puVar12 != (uchar *)0x0)) {
      if ((iVar16 < 0) || (*(int *)(param_4 + 8) <= iVar16)) {
        local_70 = &local_res8;
        `UBlueprintGeneratedClass::InitArrayPropertyFromCustomList'::__l20::<lambda_1>::operator()
                  (&local_70);
        FVar11 = local_58.field1_0x8;
      }
      else {
        bVar8 = InitPropertyFromSubPropertyList
                          (local_res8->Inner,param_2->SubPropertyList,puVar10,puVar12);
        FVar11 = local_58.field1_0x8;
        if ((!bVar8) && (pFVar4 = local_res8->Inner, puVar10 != puVar12)) {
          if (((uint)(int)pFVar4->PropertyFlags >> 0x1e & 1) == 0) {
            (**(code **)(pFVar4->_padding_ + 0xf0))(pFVar4,puVar10,puVar12,pFVar4->ArrayDim);
            FVar11 = local_58.field1_0x8;
          }
          else {
            memcpy(puVar10,puVar12,(longlong)pFVar4->ElementSize * (longlong)pFVar4->ArrayDim);
            FVar11 = local_58.field1_0x8;
          }
        }
      }
    }
    EVar1 = local_res10;
  }
  if (iVar16 < iVar3) {
    if (((uint)(int)local_res8->Inner->PropertyFlags >> 0x1e & 1) == 0) {
      lVar15 = (longlong)(iVar3 - iVar16);
      lVar13 = (longlong)iVar16;
      do {
        puVar10 = puVar9;
        if ((FVar11.FreezableArray)->ArrayNum != 0) {
          puVar10 = (uchar *)(FVar11.FreezableArray)->_padding_;
          if (((local_58.ArrayFlags & UsesMemoryImageAllocator) != None) &&
             (((ulonglong)puVar10 & 1) != 0)) {
            puVar10 = &(FVar11.HeapArray)->field_0x0 + ((longlong)puVar10 >> 0x18);
          }
          puVar10 = puVar10 + local_58.ElementSize * lVar13;
        }
        puVar12 = puVar9;
        if (*(int *)(param_4 + 8) != 0) {
          puVar12 = *(uchar **)param_4;
          if ((EVar1 != None) && (((ulonglong)puVar12 & 1) != 0)) {
            puVar12 = param_4 + ((longlong)puVar12 >> 0x18);
          }
          puVar12 = puVar12 + iVar2 * lVar13;
        }
        if (((puVar10 != (uchar *)0x0) || (puVar12 != (uchar *)0x0)) &&
           (pFVar4 = local_res8->Inner, puVar10 != puVar12)) {
          if (((uint)(int)pFVar4->PropertyFlags >> 0x1e & 1) == 0) {
            (**(code **)(pFVar4->_padding_ + 0xf0))(pFVar4,puVar10,puVar12,pFVar4->ArrayDim);
            FVar11 = local_58.field1_0x8;
          }
          else {
            memcpy(puVar10,puVar12,(longlong)pFVar4->ElementSize * (longlong)pFVar4->ArrayDim);
            FVar11 = local_58.field1_0x8;
          }
        }
        lVar13 = lVar13 + 1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    else {
      puVar10 = puVar9;
      if ((FVar11.FreezableArray)->ArrayNum != 0) {
        puVar10 = (uchar *)(FVar11.FreezableArray)->_padding_;
        if (((local_58.ArrayFlags & UsesMemoryImageAllocator) != None) &&
           (((ulonglong)puVar10 & 1) != 0)) {
          puVar10 = &(FVar11.HeapArray)->field_0x0 + ((longlong)puVar10 >> 0x18);
        }
        puVar10 = puVar10 + (longlong)local_58.ElementSize * (longlong)iVar16;
      }
      if (*(int *)(param_4 + 8) != 0) {
        puVar9 = *(uchar **)param_4;
        if ((EVar1 != None) && (((ulonglong)puVar9 & 1) != 0)) {
          puVar9 = param_4 + ((longlong)puVar9 >> 0x18);
        }
        puVar9 = puVar9 + (longlong)iVar2 * (longlong)iVar16;
      }
      memcpy(puVar10,puVar9,(longlong)((iVar3 - iVar16) * local_res8->Inner->ElementSize));
    }
  }
  return;
}

// InitPropertiesFromCustomList @ 1476b7bc0

void __cdecl
UBlueprintGeneratedClass::InitPropertiesFromCustomList
          (FCustomPropertyListNode *param_1,UStruct *param_2,uchar *param_3,uchar *param_4)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  FProperty *pFVar4;
  FCustomPropertyListNode *pFVar5;
  FArrayProperty *pFVar6;
  code *pcVar7;
  bool bVar8;
  uchar *_Dst;
  uchar *_Src;
  
  do {
    if (param_1 == (FCustomPropertyListNode *)0x0) {
      return;
    }
    iVar1 = param_1->ArrayIndex;
    pFVar3 = param_1->Property;
    if (((iVar1 < 0) || (pFVar3->ArrayDim <= iVar1)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar8)
       ) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((param_3 == (uchar *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar2 = param_1->ArrayIndex;
    pFVar4 = param_1->Property;
    _Dst = param_3 + (longlong)pFVar3->Offset_Internal +
                     (longlong)iVar1 * (longlong)pFVar3->ElementSize;
    if (((iVar2 < 0) || (pFVar4->ArrayDim <= iVar2)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar8)
       ) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((param_4 == (uchar *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = param_1->SubPropertyList;
    pFVar6 = (FArrayProperty *)param_1->Property;
    _Src = param_4 + (longlong)pFVar4->Offset_Internal +
                     (longlong)iVar2 * (longlong)pFVar4->ElementSize;
    if ((pFVar5 == (FCustomPropertyListNode *)0x0) || (pFVar6 == (FArrayProperty *)0x0)) {
LAB_1476b7d4b:
      if (_Dst != _Src) {
        if (((uint)pFVar6->_padding_ >> 0x1e & 1) == 0) {
          (**(code **)(pFVar6->_padding_ + 0xf0))(pFVar6,_Dst,_Src,1);
        }
        else {
          memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&pFVar6->_padding_ + 4));
        }
      }
    }
    else if ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x14 & 1) == 0) {
      if ((pFVar6 == (FArrayProperty *)0x0) ||
         ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x15 & 1) == 0)) goto LAB_1476b7d4b;
      InitArrayPropertyFromCustomList(pFVar6,pFVar5,_Dst,_Src);
    }
    else {
      InitPropertiesFromCustomList(pFVar5,*(UStruct **)&pFVar6->ArrayFlags,_Dst,_Src);
    }
    param_1 = param_1->PropertyListNext;
  } while( true );
}

// InitPropertiesFromCustomList @ 1476b7db0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBlueprintGeneratedClass::InitPropertiesFromCustomList
          (UBlueprintGeneratedClass *this,uchar *param_1,uchar *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FCustomPropertyListNode *pFVar1;
  FFieldClass *pFVar2;
  code *pcVar3;
  FField *this_00;
  bool bVar4;
  UStruct *pUVar5;
  UClass *pUVar6;
  uchar *_Dst;
  uchar *_Src;
  UBlueprintGeneratedClass *local_res8;
  TFieldIterator<FProperty> local_48;
  
  lpCriticalSection = &this->SerializeAndPostLoadCritical;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x3e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((GBlueprintNativePropertyInitFastPathDisabled == 0) &&
     ((this->bCustomPropertyListForPostConstructionInitialized != '\0' ||
      (local_res8 = this,
      bVar4 = `UBlueprintGeneratedClass::InitPropertiesFromCustomList'::__l3::<lambda_1>::operator()
                        (&local_res8), bVar4)))) {
    if ((0 < (this->CustomPropertyListForPostConstruction).Array.ArrayNum) &&
       (pFVar1 = *(FCustomPropertyListNode **)
                  (this->CustomPropertyListForPostConstruction).Array.AllocatorInstance.Data,
       pFVar1 != (FCustomPropertyListNode *)0x0)) {
      InitPropertiesFromCustomList(pFVar1,(UStruct *)this,param_1,param_2);
    }
  }
  else {
    pUVar5 = (UStruct *)this->_padding_;
    if (pUVar5 != (UStruct *)0x0) {
      do {
        if ((pUVar5[1]._padding_ & 0x1000008000000000) != 0) break;
        pUVar5 = (pUVar5->SuperStruct).field0_0x0.DebugPtr;
      } while (pUVar5 != (UStruct *)0x0);
      if (pUVar5 != (UStruct *)0x0) {
        local_48.Field = pUVar5->ChildProperties;
        local_48.InterfaceIndex = -1;
        local_48.bIncludeSuper = true;
        local_48.bIncludeDeprecated = true;
        local_48.bIncludeInterface = false;
        local_48.Struct = pUVar5;
        TFieldIterator<FProperty>::IterateToNext(&local_48);
        this_00 = local_48.Field;
        while (local_48.Field = this_00, this_00 != (FField *)0x0) {
          if ((this_00 == (FField *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Property",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                                 ,0x4f1,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar6 = FField::GetOwnerClass(this_00);
          pFVar2 = this_00[1].ClassPrivate;
          if ((((ulonglong)pFVar2 >> 0xe & 1) == 0) ||
             ((pUVar6 != (UClass *)0x0 && ((pUVar6->ClassFlags >> 10 & 1) != 0)))) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((!bVar4) &&
             ((((ulonglong)pFVar2 & 0x800000202000) == 0 ||
              (((ulonglong)pFVar2 & 0x8000080000) == 0)))) {
            if (((int)this_00[1]._padding_ < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((param_2 == (uchar *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            _Src = param_2 + *(int *)((longlong)&this_00[1].Owner.Container + 4);
            if (((int)this_00[1]._padding_ < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((param_1 == (uchar *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            _Dst = param_1 + *(int *)((longlong)&this_00[1].Owner.Container + 4);
            if (_Dst != _Src) {
              if ((*(uint *)&this_00[1].ClassPrivate >> 0x1e & 1) == 0) {
                (**(code **)(this_00->_padding_ + 0xf0))
                          (this_00,_Dst,_Src,(int)this_00[1]._padding_);
              }
              else {
                memcpy(_Dst,_Src,
                       (longlong)*(int *)((longlong)&this_00[1]._padding_ + 4) *
                       (longlong)(int)this_00[1]._padding_);
              }
            }
          }
          local_48.Field = (local_48.Field)->Next;
          TFieldIterator<FProperty>::IterateToNext(&local_48);
          this_00 = local_48.Field;
        }
      }
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001476b80de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
  return;
}

// InitPropertyFromSubPropertyList @ 1476b8100

bool __cdecl
UBlueprintGeneratedClass::InitPropertyFromSubPropertyList
          (FProperty *param_1,FCustomPropertyListNode *param_2,uchar *param_3,uchar *param_4)

{
  if ((param_2 != (FCustomPropertyListNode *)0x0) && (param_1 != (FProperty *)0x0)) {
    if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0) {
      InitPropertiesFromCustomList(param_2,(UStruct *)param_1[1]._padding_,param_3,param_4);
      return true;
    }
    if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x15 & 1) != 0))
    {
      InitArrayPropertyFromCustomList((FArrayProperty *)param_1,param_2,param_3,param_4);
      return true;
    }
  }
  return false;
}

// InitializeFieldNotifies @ 1476b9ca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UBlueprintGeneratedClass::InitializeFieldNotifies(UBlueprintGeneratedClass *this)

{
  UObject *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int *local_res18;
  code *local_18;
  int **local_10;
  
  iVar3 = (this->FieldNotifies).ArrayNum;
  this->FieldNotifiesStartBitNumber = 0;
  if (iVar3 != 0) {
    pUVar4 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
    bVar2 = UClass::ImplementsInterface((UClass *)this,pUVar4);
    if (bVar2) {
      this_00 = (UObject *)this->_padding_;
      if (this_00 == (UObject *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4144715368457305593>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                           ,0x207,"GetDefaultObject(false)");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        local_res10[0] = 0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(this_00);
        }
        pUVar4 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
        plVar5 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar4);
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5);
        local_res18 = local_res10;
        local_10 = &local_res18;
        local_18 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UBlueprintGeneratedClass::InitializeFieldNotifies'::__l5::<lambda_1>,bool,UE::FieldNotification::FFieldId>
                   ::Call;
        (**(code **)*puVar6)(puVar6,this,&local_18);
        iVar3 = local_res10[0] - (this->FieldNotifies).ArrayNum;
        this->FieldNotifiesStartBitNumber = iVar3;
        if (iVar3 < 0) {
          `UBlueprintGeneratedClass::InitializeFieldNotifies'::__l5::<lambda_2>::operator()
                    (local_res8);
        }
      }
    }
  }
  return;
}

// IsAsset @ 1476ba7a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UBlueprintGeneratedClass::IsAsset(UBlueprintGeneratedClass *this)

{
  bool bVar1;
  
  bVar1 = UObject::IsAsset((UObject *)this);
  if ((bVar1) && (-1 < *(int *)((longlong)&this->_padding_ + 4))) {
    return true;
  }
  return false;
}

// IsFunctionImplementedInScript @ 1476ba990

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UBlueprintGeneratedClass::IsFunctionImplementedInScript
          (UBlueprintGeneratedClass *this,FName param_1)

{
  int iVar1;
  longlong lVar2;
  UFunction *pUVar3;
  UClass *pUVar4;
  
  pUVar3 = UClass::FindFunctionByName((UClass *)this,param_1,IncludeSuper);
  if ((pUVar3 != (UFunction *)0x0) && (lVar2 = pUVar3->_padding_, lVar2 != 0)) {
    pUVar4 = StaticClass();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      return true;
    }
  }
  return false;
}

// Link @ 1476bc3e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBlueprintGeneratedClass::Link(UBlueprintGeneratedClass *this,FArchive *param_1,bool param_2)

{
  longlong lVar1;
  FName FVar2;
  FField *pFVar3;
  bool bVar4;
  FName FVar5;
  FName FVar6;
  TFieldIterator<FStructProperty> local_48;
  TFieldIterator<FStructProperty> local_30;
  
  UClass::Link((UClass *)this,param_1,param_2);
  bVar4 = UsePersistentUberGraphFrame();
  if ((bVar4) && ((this->UberGraphFunction).field0_0x0.DebugPtr != (UFunction *)0x0)) {
    (**(code **)(*(longlong *)param_1 + 0x1b0))(param_1);
    local_48.Field = (FField *)this->_padding_;
    local_48.InterfaceIndex = -1;
    local_48.bIncludeSuper = false;
    local_48.bIncludeDeprecated = true;
    local_48.bIncludeInterface = false;
    local_48.Struct = (UStruct *)this;
    TFieldIterator<FStructProperty>::IterateToNext(&local_48);
    local_30.bIncludeSuper = local_48.bIncludeSuper;
    local_30.bIncludeDeprecated = local_48.bIncludeDeprecated;
    local_30.InterfaceIndex = local_48.InterfaceIndex;
    local_30.bIncludeInterface = local_48.bIncludeInterface;
    local_30._23_1_ = local_48._23_1_;
    local_30.Struct = local_48.Struct;
    local_30.Field = local_48.Field;
    if ((FStructProperty *)local_48.Field != (FStructProperty *)0x0) {
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      FVar6.ComparisonIndex.Value = 0;
      FVar6.Number = 0;
      do {
        pFVar3 = local_30.Field;
        if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
        {
          ::FName::FName(&UberGraphFrameName,L"UberGraphFrame");
          _Init_thread_footer(&::_TSS0);
        }
        FVar2 = UberGraphFrameName;
        bVar4 = IsThisNotNull(pFVar3,"FField::GetFName");
        FVar5 = FVar6;
        if (bVar4) {
          FVar5 = pFVar3->NamePrivate;
        }
        if (FVar5 == FVar2) {
          this->UberGraphFramePointerProperty = (FStructProperty *)pFVar3;
          break;
        }
        local_30.Field = pFVar3->Next;
        TFieldIterator<FStructProperty>::IterateToNext(&local_30);
      } while ((FStructProperty *)local_30.Field != (FStructProperty *)0x0);
    }
  }
  UClass::AssembleReferenceTokenStream((UClass *)this,true);
  if ((this->bSupportsDynamicInstancedReference == '\0') &&
     (*(char *)(this->_padding_ + 0x128) == '\0')) {
    *(undefined1 *)&this->_padding_ = 0;
    return;
  }
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// NeedsLoadForClient @ 1476bd630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UBlueprintGeneratedClass::NeedsLoadForClient(UBlueprintGeneratedClass *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  
  if ((PRIVATE_GIsRunningCommandlet) && ((this->_padding_ & 0x10) == 0)) {
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4144715368457303965>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                         ,0x863,"GetSuperClass()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    else {
      cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x100))();
      if (cVar4 == '\0') {
        return false;
      }
    }
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4144715368457303961>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                         ,0x867,"GetDefaultObject(false)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    else {
      cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x100))();
      if (cVar4 == '\0') {
        return false;
      }
    }
  }
  bVar2 = UField::NeedsLoadForClient((UField *)this);
  return bVar2;
}

// NeedsLoadForEditorGame @ 1476bd710

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UBlueprintGeneratedClass::NeedsLoadForEditorGame(UBlueprintGeneratedClass *this)

{
  return true;
}

// NeedsLoadForServer @ 1476bd730

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UBlueprintGeneratedClass::NeedsLoadForServer(UBlueprintGeneratedClass *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  
  if ((PRIVATE_GIsRunningCommandlet) && ((this->_padding_ & 0x10) == 0)) {
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4144715368457303986>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                         ,0x84e,"GetSuperClass()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    else {
      cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x108))();
      if (cVar4 == '\0') {
        return false;
      }
    }
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4144715368457303982>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                         ,0x852,"GetDefaultObject(false)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    else {
      cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x108))();
      if (cVar4 == '\0') {
        return false;
      }
    }
  }
  bVar2 = UField::NeedsLoadForServer((UField *)this);
  return bVar2;
}

// PostInitProperties @ 1476be1b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UBlueprintGeneratedClass::PostInitProperties(UBlueprintGeneratedClass *this)

{
  UClass::PostInitProperties((UClass *)this);
  if ((this->_padding_ & 0x10) != 0) {
    this->_padding_ = (longlong)UClass::AddReferencedObjects;
  }
  return;
}

// PostLoad @ 1476be1e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UBlueprintGeneratedClass::PostLoad(UBlueprintGeneratedClass *this)

{
  UObject *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int *local_res18;
  code *local_18;
  int **local_10;
  
  UClass::PostLoad((UClass *)this);
  iVar3 = (this->FieldNotifies).ArrayNum;
  this->FieldNotifiesStartBitNumber = 0;
  if (iVar3 != 0) {
    pUVar4 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
    bVar2 = UClass::ImplementsInterface((UClass *)this,pUVar4);
    if (bVar2) {
      this_00 = (UObject *)this->_padding_;
      if (this_00 == (UObject *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4144715368457305593>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                           ,0x207,"GetDefaultObject(false)");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        local_res10[0] = 0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(this_00);
        }
        pUVar4 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
        plVar5 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar4);
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5);
        local_res18 = local_res10;
        local_10 = &local_res18;
        local_18 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UBlueprintGeneratedClass::InitializeFieldNotifies'::__l5::<lambda_1>,bool,UE::FieldNotification::FFieldId>
                   ::Call;
        (**(code **)*puVar6)(puVar6,this,&local_18);
        iVar3 = local_res10[0] - (this->FieldNotifies).ArrayNum;
        this->FieldNotifiesStartBitNumber = iVar3;
        if (iVar3 < 0) {
          `UBlueprintGeneratedClass::InitializeFieldNotifies'::__l5::<lambda_2>::operator()
                    (local_res8);
        }
      }
    }
  }
  UClass::AssembleReferenceTokenStream((UClass *)this,true);
  return;
}

// PostLoadDefaultObject @ 1476be310

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBlueprintGeneratedClass::PostLoadDefaultObject(UBlueprintGeneratedClass *this,UObject *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SerializeAndPostLoadCritical;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    UClass::PostLoadDefaultObject((UClass *)this,param_1);
    if (param_1 == (UObject *)this->_padding_) {
      UpdateCustomPropertyListForPostConstruction(this);
      if ((this->_padding_ & 0x400000000) != 0) {
        UObject::LoadConfig((UObject *)this->_padding_,(UClass *)0x0,(wchar_t *)0x0,0,
                            (FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001476be391. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PurgeClass @ 1476bfd90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UBlueprintGeneratedClass::PurgeClass(UBlueprintGeneratedClass *this,bool param_1)

{
  UClass::PurgeClass((UClass *)this,param_1);
  this->UberGraphFramePointerProperty = (FStructProperty *)0x0;
  (this->UberGraphFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  this->UberGraphFunctionKey = 0;
  return;
}

// Serialize @ 1476c65a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBlueprintGeneratedClass::Serialize(UBlueprintGeneratedClass *this,FArchive *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  UPackage *pUVar4;
  FKeyForward local_res10;
  TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> local_18;
  
  if (((param_1->field_0x28 & 1) != 0) && ((*(uint *)&param_1->field_0x34 & 0x1000) == 0)) {
    LOCK();
    UNLOCK();
    uVar2 = (int)GUberGraphSerialNumber + 1;
    GUberGraphSerialNumber = (TAtomic<int>)((int)GUberGraphSerialNumber + 1);
    this->UberGraphFunctionKey = uVar2;
  }
  UClass::Serialize((UClass *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if ((0x38 < iVar3) && ((param_1->field_0x2b & 0x10) != 0)) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>
              (param_1,&local_18);
    if ((param_1->field_0x28 & 1) != 0) {
      AlgoImpl::
      IntroSortInternal<TTuple<FName,FString>,int,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                ((TTuple<FName,FString> *)local_18.AllocatorInstance.Data,local_18.ArrayNum,
                 local_res10,(FNameFastLess)local_res10);
    }
    DestructItems<TTuple<FName,FString>,int>
              ((TTuple<FName,FString> *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if ((TTuple<FName,FString> *)local_18.AllocatorInstance.Data != (TTuple<FName,FString> *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  if (((param_1->field_0x28 & 1) != 0) && ((*(uint *)&param_1->field_0x34 & 0x1000) == 0)) {
    pUVar4 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    if ((pUVar4 != (UPackage *)0x0) && (((uint)pUVar4->PackageFlagsPrivate & 0x20) != 0)) {
      puVar1 = (uint *)((longlong)&this->_padding_ + 4);
      *puVar1 = *puVar1 | 0x2000000;
    }
  }
  return;
}

// Serialize @ 1476c66a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBlueprintGeneratedClass::Serialize(UBlueprintGeneratedClass *this,FStructuredArchiveRecord param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  FArchiveState *this_00;
  UPackage *pUVar4;
  FSlotBase local_res10 [3];
  TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  if ((this_00->ArIsLoading != 0) && ((this_00->ArPortFlags & 0x1000) == 0)) {
    LOCK();
    UNLOCK();
    uVar2 = (int)GUberGraphSerialNumber + 1;
    GUberGraphSerialNumber = (TAtomic<int>)((int)GUberGraphSerialNumber + 1);
    this->UberGraphFunctionKey = uVar2;
  }
  UClass::Serialize((UClass *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFortniteMainBranchObjectVersion::GUID);
  iVar3 = FArchiveState::CustomVer(this_00,&FFortniteMainBranchObjectVersion::GUID);
  if ((0x38 < iVar3) && (this_00->ArIsFilterEditorOnly != '\0')) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>
              ((FArchive *)this_00,&local_18);
    if (this_00->ArIsLoading != 0) {
      AlgoImpl::
      IntroSortInternal<TTuple<FName,FString>,int,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                ((TTuple<FName,FString> *)local_18.AllocatorInstance.Data,local_18.ArrayNum,
                 local_res10[0].StructuredArchive._0_1_,
                 (FNameFastLess)local_res10[0].StructuredArchive._0_1_);
    }
    DestructItems<TTuple<FName,FString>,int>
              ((TTuple<FName,FString> *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if ((TTuple<FName,FString> *)local_18.AllocatorInstance.Data != (TTuple<FName,FString> *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  if ((this_00->ArIsLoading != 0) && ((this_00->ArPortFlags & 0x1000) == 0)) {
    pUVar4 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    if ((pUVar4 != (UPackage *)0x0) && (((uint)pUVar4->PackageFlagsPrivate & 0x20) != 0)) {
      puVar1 = (uint *)((longlong)&this->_padding_ + 4);
      *puVar1 = *puVar1 | 0x2000000;
    }
  }
  return;
}

// SerializeDefaultObject @ 1476c67b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBlueprintGeneratedClass::SerializeDefaultObject
          (UBlueprintGeneratedClass *this,UObject *param_1,FStructuredArchiveSlot param_2)

{
  UInheritableComponentHandler *pUVar1;
  UActorComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  USimpleConstructionScript *pUVar4;
  undefined1 *puVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FArchiveState *this_00;
  FString *pFVar11;
  longlong *plVar12;
  FStructuredArchiveFromArchive *this_01;
  FStructuredArchiveSlot FVar13;
  UScriptStruct *pUVar14;
  FLinkerLoad *pFVar15;
  undefined1 *puVar16;
  FBlueprintCookedComponentInstancingData *pFVar17;
  FScriptContainerElement *pFVar18;
  UObject *pUVar19;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar20;
  uint uVar21;
  FSlotBase local_res18;
  undefined1 auStackY_2d8 [32];
  undefined1 local_298;
  undefined1 local_297 [7];
  ForAnyElementType local_290;
  int local_284;
  UObject *local_280;
  FArchiveState *local_278;
  longlong local_270;
  FString *local_268;
  UObject *local_260;
  FName local_258;
  FName local_250;
  UBlueprintGeneratedClass *local_248;
  FName local_240;
  FName local_238;
  FArchiveState *local_230;
  FString local_228;
  code *local_218;
  FArchiveState **local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FStructuredArchiveFromArchive local_1d0;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->SerializeAndPostLoadCritical;
  local_res18.StructuredArchive = (FStructuredArchive *)param_2;
  local_260 = param_1;
  local_248 = this;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
  local_278 = this_00;
  UClass::SerializeDefaultObject
            ((UClass *)this,param_1,(FStructuredArchiveSlot)local_res18.StructuredArchive);
  uVar21 = 0;
  if ((((this_00->field_0x28 & 1) != 0) && ((this_00->field_0x2b & 1) == 0)) &&
     (param_1 == (UObject *)this->_padding_)) {
    (**(code **)(this->_padding_ + 0x3a8))(this,param_1,1);
    UpdateCustomPropertyListForPostConstruction(this);
    local_258 = (FName)this->_padding_;
    ::FName::ToString(&local_258,&local_228);
    _Src.Data = local_228.Data.AllocatorInstance.Data;
    local_290.Data = (FScriptContainerElement *)0x0;
    if (local_228.Data.ArrayNum == 0) {
      local_284 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_228.Data.ArrayNum,0,&local_290,local_228.Data.ArrayNum,&local_284);
      memcpy(local_290.Data,_Src.Data,(longlong)local_228.Data.ArrayNum * 2);
    }
    pUVar1 = (this->InheritableComponentHandler).field0_0x0.DebugPtr;
    if (this->bHasCookedComponentInstancingData != 0) {
      if (pUVar1 != (UInheritableComponentHandler *)0x0) {
        for (; (-1 < (int)uVar21 && ((int)uVar21 < (pUVar1->Records).ArrayNum)); uVar21 = uVar21 + 1
            ) {
          if (((int)uVar21 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar20 = (longlong)(int)uVar21 * 0x78;
          local_250 = *(FName *)((pUVar1->Records).AllocatorInstance.Data + lVar20 + 0x18);
          local_268 = ::FName::ToString(&local_250,&local_1f0);
          uVar10 = 0;
          if ((int)uVar21 < (pUVar1->Records).ArrayNum) {
            uVar10 = ~uVar21 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pUVar2 = *(UActorComponent **)((pUVar1->Records).AllocatorInstance.Data + lVar20 + 8);
          uVar10 = 0;
          if ((int)uVar21 < (pUVar1->Records).ArrayNum) {
            uVar10 = ~uVar21 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar3 = (pUVar1->Records).AllocatorInstance.Data;
          if (pFVar3[lVar20 + 0x51] != (FScriptContainerElement)0x0) {
            if (pUVar2 != (UActorComponent *)0x0) {
              if (((uint)pUVar2->_padding_ >> 10 & 1) == 0) {
                if ((pUVar2->_padding_ & 0x10) == 0) {
                  FBlueprintCookedComponentInstancingData::BuildCachedPropertyDataFromTemplate
                            ((FBlueprintCookedComponentInstancingData *)(pFVar3 + lVar20 + 0x30),
                             pUVar2);
                  goto LAB_1476c6afa;
                }
                bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_4144715368457305349>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                                   ,0x2fb,"!SourceTemplate->HasAnyFlags(RF_ClassDefaultObject)");
                if (bVar7) goto code_r0x0001476c6ab5;
              }
              else {
                bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_4144715368457305350>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                                   ,0x2fa,"!SourceTemplate->HasAnyFlags(RF_NeedLoad)");
                if (bVar7) {
code_r0x0001476c6ab5:
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
            }
            if (2 < (byte)LogBlueprint._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
            }
            pFVar3[lVar20 + 0x51] = (FScriptContainerElement)0x0;
          }
LAB_1476c6afa:
          pFVar3 = (local_268->Data).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
        }
        lpCriticalSection = (LPCRITICAL_SECTION)&local_248->SerializeAndPostLoadCritical;
        this = local_248;
      }
      pUVar4 = (this->SimpleConstructionScript).field0_0x0.DebugPtr;
      if (pUVar4 != (USimpleConstructionScript *)0x0) {
        pFVar18 = (pUVar4->AllNodes).AllocatorInstance.Data;
        iVar9 = (pUVar4->AllNodes).ArrayNum;
        pFVar3 = pFVar18 + (longlong)iVar9 * 8;
        while( true ) {
          if ((pUVar4->AllNodes).ArrayNum != iVar9) {
            local_298 = 0;
            `TCheckedPointerIterator<USCS_Node_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_298);
          }
          if (pFVar18 == pFVar3) break;
          lVar20 = *(longlong *)pFVar18;
          local_240 = *(FName *)(lVar20 + 0xd0);
          pFVar11 = ::FName::ToString(&local_240,&local_1e0);
          `UBlueprintGeneratedClass::SerializeDefaultObject'::__l5::<lambda_1>::operator()
                    (&local_290,(FBlueprintCookedComponentInstancingData *)(lVar20 + 0x38),
                     *(UActorComponent **)(lVar20 + 0x30),pFVar11);
          pFVar18 = pFVar18 + 8;
        }
      }
      this_00 = local_278;
      if (0 < *(int *)&(this->CookedComponentInstancingData).field_0x8 -
              *(int *)&(this->CookedComponentInstancingData).field_0x34) {
        pFVar18 = (this->ComponentTemplates).AllocatorInstance.Data;
        iVar9 = (this->ComponentTemplates).ArrayNum;
        pFVar3 = pFVar18 + (longlong)iVar9 * 8;
        while( true ) {
          if ((this->ComponentTemplates).ArrayNum != iVar9) {
            local_297[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<UActorComponent>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_297);
          }
          if (pFVar18 == pFVar3) break;
          pUVar2 = *(UActorComponent **)pFVar18;
          if (pUVar2 == (UActorComponent *)0x0) {
LAB_1476c6c98:
            pFVar18 = pFVar18 + 8;
          }
          else {
            lVar20 = pUVar2->_padding_;
            uVar21 = ::GetTypeHash((FNameEntryId)(uint)lVar20);
            if (*(int *)&(this->CookedComponentInstancingData).field_0x8 ==
                *(int *)&(this->CookedComponentInstancingData).field_0x34) goto LAB_1476c6c98;
            puVar5 = *(undefined1 **)&(this->CookedComponentInstancingData).field_0x40;
            puVar16 = &(this->CookedComponentInstancingData).field_0x38;
            if (puVar5 != (undefined1 *)0x0) {
              puVar16 = puVar5;
            }
            iVar8 = *(int *)(puVar16 +
                            (ulonglong)
                            (*(int *)&(this->CookedComponentInstancingData).field_0x48 - 1U &
                            (int)((ulonglong)lVar20 >> 0x20) + uVar21) * 4);
            if (iVar8 == -1) goto LAB_1476c6c98;
            do {
              plVar12 = (longlong *)
                        ((longlong)iVar8 * 0x58 + *(longlong *)&this->CookedComponentInstancingData)
              ;
              if (*plVar12 == lVar20) {
                pFVar17 = (FBlueprintCookedComponentInstancingData *)(plVar12 + 1);
                if (plVar12 == (longlong *)0x0) {
                  pFVar17 = (FBlueprintCookedComponentInstancingData *)0x0;
                }
                if (pFVar17 != (FBlueprintCookedComponentInstancingData *)0x0) {
                  local_238 = (FName)pUVar2->_padding_;
                  ::FName::ToString(&local_238,&local_200);
                  `UBlueprintGeneratedClass::SerializeDefaultObject'::__l5::<lambda_1>::operator()
                            (&local_290,pFVar17,pUVar2,&local_200);
                }
                goto LAB_1476c6c98;
              }
              iVar8 = (int)plVar12[10];
            } while (iVar8 != -1);
            pFVar18 = pFVar18 + 8;
          }
        }
        lpCriticalSection = (LPCRITICAL_SECTION)&this->SerializeAndPostLoadCritical;
        this_00 = local_278;
      }
    }
    if (local_290.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data);
    }
    param_1 = local_260;
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
      param_1 = local_260;
    }
  }
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FUE5MainStreamObjectVersion::GUID);
  iVar9 = FArchiveState::CustomVer(this_00,&FUE5MainStreamObjectVersion::GUID);
  if (0x20 < iVar9) {
    if (this_00->ArIsSaving == '\0') {
      if (this_00->ArIsLoading != 0) {
        local_280 = (UObject *)0x0;
        (**(code **)(this_00->_padding_ + 0x168))(this_00,&local_280);
        pUVar19 = (UObject *)this->_padding_;
        if (local_280 != pUVar19) {
          UClass::CleanupSparseClassData((UClass *)this);
          pUVar19 = local_280;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_280 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_280);
          }
          this->_padding_ = (longlong)pUVar19;
        }
        if (pUVar19 == (UObject *)0x0) goto LAB_1476c6e80;
      }
    }
    else {
      local_270 = this->_padding_;
      local_210 = &local_230;
      local_218 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UBlueprintGeneratedClass::SerializeDefaultObject'::__l40::<lambda_2>,bool,FProperty_*>
                  ::Call;
      local_230 = this_00;
      bVar7 = UE::Reflection::DoesSparseClassDataOverrideArchetype
                        ((UClass *)this,(TFunctionRef<bool___cdecl(FProperty_*)> *)&local_218);
      if (!bVar7) {
        local_270 = 0;
      }
      (**(code **)(this_00->_padding_ + 0x168))(this_00,&local_270);
      if (!bVar7) {
LAB_1476c6e80:
        if ((this_00->ArIsLoading != 0) &&
           (pFVar15 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)param_1),
           this_00 = local_278, pFVar15 != (FLinkerLoad *)0x0)) {
          uVar10 = UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)param_1);
          uVar21 = 0;
          if ((int)uVar10 < (int)pFVar15->_padding_) {
            uVar21 = ~uVar10 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          this_00 = local_278;
          (**(code **)(local_278->_padding_ + 0x1b8))
                    (local_278,
                     *(longlong *)((longlong)(int)uVar10 * 0x68 + 0x28 + pFVar15->_padding_) +
                     *(longlong *)((longlong)(int)uVar10 * 0x68 + 0x20 + pFVar15->_padding_));
        }
        goto LAB_1476c6d9a;
      }
    }
  }
  if (this->_padding_ != 0) {
    this_01 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                        (&local_1d0,(FArchive *)this_00);
    FVar13 = FStructuredArchiveFromArchive::GetSlot(this_01);
    UClass::SerializeSparseClassData((UClass *)this,*(FStructuredArchiveSlot *)FVar13);
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1d0);
  }
LAB_1476c6d9a:
  if (((this_00->field_0x28 & 1) != 0) && (this->_padding_ == 0)) {
    pUVar14 = UClass::GetSparseClassDataArchetypeStruct((UClass *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    this->_padding_ = (longlong)pUVar14;
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// SetupObjectInitializer @ 1476c9d10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBlueprintGeneratedClass::SetupObjectInitializer
          (UBlueprintGeneratedClass *this,FObjectInitializer *param_1)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  FName *pFVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ComponentClassOverrides).ArrayNum;
  pFVar4 = (FName *)(this->ComponentClassOverrides).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 2;
  while( true ) {
    if ((this->ComponentClassOverrides).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FBPComponentClassOverride_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    FVar2 = *pFVar4;
    FVar3 = pFVar4[1];
    FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar2);
    FObjectInitializer::FOverrides::Add
              (&param_1->SubobjectOverrides,FVar2,(UClass *)FVar3,
               (TArrayView<FName_const_,int> *)0x0);
    pFVar4 = pFVar4 + 2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001476c9da7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x390))((longlong *)this->_padding_,param_1);
  return;
}

// StaticRegisterNativesUBlueprintGeneratedClass @ 1476ca250

void __cdecl UBlueprintGeneratedClass::StaticRegisterNativesUBlueprintGeneratedClass(void)

{
  return;
}

// UpdateCustomPropertyListForPostConstruction @ 1476cc6a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBlueprintGeneratedClass::UpdateCustomPropertyListForPostConstruction
          (UBlueprintGeneratedClass *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FCustomPropertyListNode *local_res8;
  
  pFVar2 = (this->CustomPropertyListForPostConstruction).Array.AllocatorInstance.Data;
  for (iVar6 = (this->CustomPropertyListForPostConstruction).Array.ArrayNum; iVar6 != 0;
      iVar6 = iVar6 + -1) {
    ::operator_delete(*(void **)pFVar2,0x20);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->CustomPropertyListForPostConstruction).Array.ArrayMax;
  iVar6 = *piVar1;
  (this->CustomPropertyListForPostConstruction).Array.ArrayNum = 0;
  if (iVar6 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->CustomPropertyListForPostConstruction,0,piVar1);
  }
  this->bCustomPropertyListForPostConstructionInitialized = '\0';
  pUVar3 = (UStruct *)this->_padding_;
  do {
    if (pUVar3 == (UStruct *)0x0) {
LAB_1476cc79e:
      this->bCustomPropertyListForPostConstructionInitialized = '\x01';
      return;
    }
    if ((pUVar3[1]._padding_ & 0x1000008000000000) != 0) {
      if ((this->_padding_ == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetDefaultObject(false) != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                             ,0x4c9,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_res8 = (FCustomPropertyListNode *)0x0;
      BuildCustomPropertyListForPostConstruction
                (this,&local_res8,pUVar3,(uchar *)this->_padding_,
                 (uchar *)pUVar3[1].Script.AllocatorInstance.Data);
      goto LAB_1476cc79e;
    }
    pUVar3 = (pUVar3->SuperStruct).field0_0x0.DebugPtr;
  } while( true );
}

// UseFastPathComponentInstancing @ 1476ccdb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UBlueprintGeneratedClass::UseFastPathComponentInstancing(UBlueprintGeneratedClass *this)

{
  if ((this->bHasCookedComponentInstancingData != 0) &&
     (GBlueprintComponentInstancingFastPathDisabled == 0)) {
    return true;
  }
  return false;
}

// UsePersistentUberGraphFrame @ 1476ccdd0

bool __cdecl UBlueprintGeneratedClass::UsePersistentUberGraphFrame(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FBoolConfigValueHelper::FBoolConfigValueHelper
                (&PersistentUberGraphFrame,L"Kismet",L"bPersistentUberGraphFrame",&GEngineIni);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return PersistentUberGraphFrame.bValue;
}

// operator() @ 15050ed80

bool __thiscall
`UBlueprintGeneratedClass::ForEachFieldNotify'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4144715368457303160>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4144715368457303160>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15050eee0

bool __thiscall
`UBlueprintGeneratedClass::InitPropertiesFromCustomList'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4144715368457304856>);
  if (bVar2) {
    if (*(UObjectBaseUtility **)this == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4144715368457304856>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050ef62;
    }
  }
  bVar2 = false;
LAB_15050ef62:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15050f060

bool __thiscall
`UBlueprintGeneratedClass::InitArrayPropertyFromCustomList'::__l20::<lambda_1>::operator()
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  UObjectBaseUtility *this_00;
  FString local_18;
  
  this_00 = (UObjectBaseUtility *)0x0;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4144715368457304769>);
  if (bVar3) {
    lVar1 = **(longlong **)this;
    pUVar5 = Z_Construct_UClass_UStruct_NoRegister();
    bVar3 = FFieldVariant::IsA((FFieldVariant *)(lVar1 + 0x10),pUVar5);
    if (bVar3) {
      this_00 = (UObjectBaseUtility *)(*(ulonglong *)(lVar1 + 0x10) & 0xfffffffffffffffe);
    }
    UObjectBaseUtility::GetFullName(this_00,&local_18,(UObject *)0x0,None);
    this_00 = (UObjectBaseUtility *)&DAT_00000001;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4144715368457304769>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15050f0f1;
    }
  }
  bVar3 = false;
LAB_15050f0f1:
  if ((this_00 != (UObjectBaseUtility *)0x0) &&
     (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 15050f160

bool __thiscall
`UBlueprintGeneratedClass::CreatePersistentUberGraphFrame'::__l13::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  FName local_res10;
  FName local_res18;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar6 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4144715368457304206>);
  if (bVar4) {
    local_res10 = *(FName *)(*(longlong *)((longlong)this + 0x10) + 0x18);
    ::FName::ToString(&local_res10,&local_38);
    bVar6 = **(longlong **)((longlong)this + 8) != 0;
    if (bVar6) {
      local_res18 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
      ::FName::ToString(&local_res18,&local_48);
    }
    bVar3 = true;
    bVar2 = true;
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_28,(UObject *)0x0);
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4144715368457304206>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15050f278;
    }
  }
  bVar4 = false;
LAB_15050f278:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return (bool)uVar5;
}

// operator() @ 15050f2e0

bool __thiscall
`UBlueprintGeneratedClass::AddReferencedObjectsInUbergraphFrame'::__l14::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4144715368457303593>);
  if (bVar4) {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)((longlong)this + 8),&local_18,(UObject *)0x0)
    ;
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_28,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4144715368457303593>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15050f385;
    }
  }
  bVar4 = false;
LAB_15050f385:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15050f510

bool __thiscall
`UBlueprintGeneratedClass::InitializeFieldNotifies'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4144715368457305584>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4144715368457305584>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

