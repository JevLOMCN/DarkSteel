// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 29

// StaticClass @ 1485048e0

UClass * __cdecl USCS_Node::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USCS_Node.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SCS_Node",&Z_Registration_Info_UClass_USCS_Node.InnerSingleton,
               StaticRegisterNativesUSCS_Node,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USCS_Node>,InternalVTableHelperCtorCaller<USCS_Node>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USCS_Node.InnerSingleton;
}

// USCS_Node @ 14850feb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USCS_Node * __thiscall USCS_Node::USCS_Node(USCS_Node *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USCS_Node__6B_;
  (this->ComponentClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ComponentTemplate).field0_0x0.DebugPtr = (UActorComponent *)0x0;
  (this->CookedComponentInstancingData).ChangedPropertyList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CookedComponentInstancingData).ChangedPropertyList.ArrayNum = 0;
  (this->CookedComponentInstancingData).ChangedPropertyList.ArrayMax = 0;
  (this->CookedComponentInstancingData).ComponentTemplateName.ComparisonIndex = 0;
  (this->CookedComponentInstancingData).ComponentTemplateName.Number = 0;
  (this->CookedComponentInstancingData).CachedPropertyListForSerialization.Array.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  (this->CookedComponentInstancingData).CachedPropertyListForSerialization.Array.ArrayNum = 0;
  (this->CookedComponentInstancingData).CachedPropertyListForSerialization.Array.ArrayMax = 0;
  (this->CookedComponentInstancingData).CachedPropertyData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CookedComponentInstancingData).CachedPropertyData.ArrayNum = 0;
  (this->CookedComponentInstancingData).CachedPropertyData.ArrayMax = 0;
  (this->CookedComponentInstancingData).ComponentTemplateFlags = '\0';
  (this->CookedComponentInstancingData).bHasValidCookedData = false;
  (this->CookedComponentInstancingData).ComponentTemplateClass = (UClass *)0x0;
  (this->AttachToName).ComparisonIndex = 0;
  (this->AttachToName).Number = 0;
  (this->ParentComponentOrVariableName).ComparisonIndex = 0;
  (this->ParentComponentOrVariableName).Number = 0;
  (this->ParentComponentOwnerClassName).ComparisonIndex = 0;
  (this->ParentComponentOwnerClassName).Number = 0;
  (this->ChildNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildNodes).ArrayNum = 0;
  (this->ChildNodes).ArrayMax = 0;
  (this->MetaDataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetaDataArray).ArrayNum = 0;
  (this->MetaDataArray).ArrayMax = 0;
  (this->VariableGuid).A = 0;
  (this->VariableGuid).B = 0;
  (this->VariableGuid).C = 0;
  (this->VariableGuid).D = 0;
  (this->InternalVariableName).ComparisonIndex = 0;
  (this->InternalVariableName).Number = 0;
  return this;
}

// USCS_Node @ 14850ff50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USCS_Node * __thiscall USCS_Node::USCS_Node(USCS_Node *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USCS_Node__6B_;
  (this->ComponentClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ComponentTemplate).field0_0x0.DebugPtr = (UActorComponent *)0x0;
  (this->CookedComponentInstancingData).ChangedPropertyList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CookedComponentInstancingData).ChangedPropertyList.ArrayNum = 0;
  (this->CookedComponentInstancingData).ChangedPropertyList.ArrayMax = 0;
  (this->CookedComponentInstancingData).ComponentTemplateName.ComparisonIndex = 0;
  (this->CookedComponentInstancingData).ComponentTemplateName.Number = 0;
  (this->CookedComponentInstancingData).CachedPropertyListForSerialization.Array.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  (this->CookedComponentInstancingData).CachedPropertyListForSerialization.Array.ArrayNum = 0;
  (this->CookedComponentInstancingData).CachedPropertyListForSerialization.Array.ArrayMax = 0;
  (this->CookedComponentInstancingData).CachedPropertyData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CookedComponentInstancingData).CachedPropertyData.ArrayNum = 0;
  (this->CookedComponentInstancingData).CachedPropertyData.ArrayMax = 0;
  (this->CookedComponentInstancingData).ComponentTemplateFlags = '\0';
  (this->CookedComponentInstancingData).bHasValidCookedData = false;
  (this->CookedComponentInstancingData).ComponentTemplateClass = (UClass *)0x0;
  (this->AttachToName).ComparisonIndex = 0;
  (this->AttachToName).Number = 0;
  (this->ParentComponentOrVariableName).ComparisonIndex = 0;
  (this->ParentComponentOrVariableName).Number = 0;
  (this->ParentComponentOwnerClassName).ComparisonIndex = 0;
  (this->ParentComponentOwnerClassName).Number = 0;
  (this->ChildNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildNodes).ArrayNum = 0;
  (this->ChildNodes).ArrayMax = 0;
  (this->MetaDataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetaDataArray).ArrayNum = 0;
  (this->MetaDataArray).ArrayMax = 0;
  (this->VariableGuid).A = 0;
  (this->VariableGuid).B = 0;
  (this->VariableGuid).C = 0;
  (this->VariableGuid).D = 0;
  (this->InternalVariableName).ComparisonIndex = 0;
  (this->InternalVariableName).Number = 0;
  this->bIsParentComponentNative = false;
  return this;
}

// ~USCS_Node @ 1485117b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USCS_Node::~USCS_Node(USCS_Node *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USCS_Node__6B_;
  DestructItems<FBPVariableMetaDataEntry,int>
            ((FBPVariableMetaDataEntry *)(this->MetaDataArray).AllocatorInstance.Data,
             (this->MetaDataArray).ArrayNum);
  pFVar1 = (this->MetaDataArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChildNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBlueprintCookedComponentInstancingData::~FBlueprintCookedComponentInstancingData
            (&this->CookedComponentInstancingData);
  UObject::~UObject((UObject *)this);
  return;
}

// AddChildNode @ 1485156b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USCS_Node::AddChildNode(USCS_Node *this,USCS_Node *param_1,bool param_2)

{
  int *piVar1;
  TArray<TObjectPtr<USCS_Node>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  USimpleConstructionScript *pUVar7;
  FScriptContainerElement *pFVar8;
  USCS_Node *local_18 [2];
  
  if (param_1 != (USCS_Node *)0x0) {
    pTVar2 = &this->ChildNodes;
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    pFVar3 = pFVar8 + (longlong)(this->ChildNodes).ArrayNum * 8;
    for (; pFVar8 != pFVar3; pFVar8 = pFVar8 + 8) {
      if ((*(USCS_Node **)pFVar8 != (USCS_Node *)0x0) && (*(USCS_Node **)pFVar8 == param_1)) {
        return;
      }
    }
    local_18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->ChildNodes).ArrayMax * 8))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->ChildNodes).ArrayNum;
    piVar1 = &(this->ChildNodes).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ChildNodes).ArrayNum = iVar6 + 1;
    *(USCS_Node **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (USCS_Node *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
    if (param_2) {
      pUVar7 = GetSCS(this);
      FSCSAllNodesHelper::Add(pUVar7,param_1);
    }
  }
  return;
}

// ExecuteNodeOnActor @ 148524730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

UActorComponent * __thiscall
USCS_Node::ExecuteNodeOnActor
          (USCS_Node *this,AActor *param_1,USceneComponent *param_2,TTransform<double> *param_3,
          FRotationConversionCache *param_4,bool param_5,ESpawnActorScaleMethod param_6)

{
  int iVar1;
  USimpleConstructionScript *pUVar2;
  FName FVar3;
  UStruct *pUVar4;
  USCS_Node *this_00;
  code *pcVar5;
  FObjectPropertyBase *this_01;
  bool bVar6;
  uint uVar7;
  UActorComponent *pUVar8;
  UClass *pUVar9;
  USimpleConstructionScript *pUVar10;
  UInheritableComponentHandler *pUVar11;
  FBlueprintCookedComponentInstancingData *pFVar12;
  USceneComponent *this_02;
  UWorld *pUVar13;
  TTransform<double> *pTVar14;
  FString *pFVar15;
  uint uVar16;
  UBlueprintGeneratedClass *pUVar17;
  USceneComponent *pUVar18;
  longlong lVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  undefined1 auStackY_338 [32];
  UBlueprintGeneratedClass *local_2e8;
  FName local_2e0;
  TFieldIterator<FObjectPropertyBase> local_2d8;
  undefined8 local_2c0;
  FName local_2b8;
  USceneComponent *local_2b0;
  TTransform<double> *local_2a8;
  FRotationConversionCache *local_2a0;
  FName local_298;
  FName local_290;
  FName local_288;
  FName local_280;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  UBlueprintGeneratedClass **local_238;
  USCS_Node *local_230;
  FString local_228;
  FString local_218;
  double local_208;
  double dStack_200;
  double local_1f8;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FComponentKey local_1c0;
  FComponentKey local_1a0;
  TTransform<double> local_178;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_2a0 = param_4;
  pwVar21 = L"";
  local_2a8 = param_3;
  if ((param_1 == (AActor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Actor != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SCS_Node.cpp"
                         ,0x56,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar8 = (UActorComponent *)(*pcVar5)();
    return pUVar8;
  }
  if ((((param_2 == (USceneComponent *)0x0) || (((uint)param_2->_padding_ >> 0x1e & 1) != 0)) &&
      (param_3 == (TTransform<double> *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(ParentComponent) || (RootTransform != nullptr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SCS_Node.cpp"
                         ,0x57,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar8 = (UActorComponent *)(*pcVar5)();
    return pUVar8;
  }
  pUVar17 = (UBlueprintGeneratedClass *)param_1->_padding_;
  if (pUVar17 == (UBlueprintGeneratedClass *)0x0) {
    pFVar15 = GetTypeName<UBlueprintGeneratedClass>(&local_1f0);
    if ((pFVar15->Data).ArrayNum != 0) {
      pwVar21 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar21);
  }
  pUVar9 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
  iVar1 = (int)pUVar9->_padding_;
  if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar9->_padding_)) {
    pFVar15 = GetTypeName<UBlueprintGeneratedClass>(&local_1e0);
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    pFVar15 = GetFullNameForCastLogError<UClass>(&local_1d0,(UClass *)pUVar17);
    if ((pFVar15->Data).ArrayNum != 0) {
      pwVar21 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar21,pwVar20);
  }
  local_2e8 = pUVar17;
  bVar6 = UBlueprintGeneratedClass::UseFastPathComponentInstancing(pUVar17);
  pUVar17 = local_2e8;
  if (bVar6) {
    pFVar12 = (FBlueprintCookedComponentInstancingData *)0x0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FBoolConfigValueHelper::FBoolConfigValueHelper
                (&EnableInheritableComponents,L"Kismet",L"bEnableInheritableComponents",&GEngineIni)
      ;
      _Init_thread_footer(&::_TSS0);
    }
    if (EnableInheritableComponents.bValue != false) {
      pUVar10 = GetSCS(this);
      pUVar2 = (pUVar17->SimpleConstructionScript).field0_0x0.DebugPtr;
      if (pUVar2 == (USimpleConstructionScript *)0x0) {
        bVar6 = pUVar10 == (USimpleConstructionScript *)0x0;
      }
      else {
        bVar6 = pUVar2 == pUVar10;
      }
      if (!bVar6) {
        FComponentKey::FComponentKey(&local_1c0,this);
        do {
          pUVar11 = UBlueprintGeneratedClass::GetInheritableComponentHandler(pUVar17,false);
          if (pUVar11 != (UInheritableComponentHandler *)0x0) {
            pFVar12 = UInheritableComponentHandler::GetOverridenComponentTemplateData
                                (pUVar11,&local_1c0);
          }
          pUVar17 = (UBlueprintGeneratedClass *)pUVar17->_padding_;
          if (pUVar17 == (UBlueprintGeneratedClass *)0x0) {
LAB_1485248fe:
            pUVar17 = (UBlueprintGeneratedClass *)0x0;
          }
          else {
            pUVar9 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
            iVar1 = (int)pUVar9->_padding_;
            if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar9->_padding_)) goto LAB_1485248fe;
          }
          if (pFVar12 != (FBlueprintCookedComponentInstancingData *)0x0) goto LAB_14852492e;
          if (pUVar17 == (UBlueprintGeneratedClass *)0x0) break;
          pUVar2 = (pUVar17->SimpleConstructionScript).field0_0x0.DebugPtr;
          if (pUVar2 == (USimpleConstructionScript *)0x0) {
            bVar6 = pUVar10 == (USimpleConstructionScript *)0x0;
          }
          else {
            bVar6 = pUVar2 == pUVar10;
          }
        } while (!bVar6);
      }
    }
    pFVar12 = &this->CookedComponentInstancingData;
    if (pFVar12 == (FBlueprintCookedComponentInstancingData *)0x0) goto LAB_14852496b;
LAB_14852492e:
    if (pFVar12->bHasValidCookedData == false) goto LAB_14852496b;
    if (pFVar12->ComponentTemplateClass == (UClass *)0x0) {
      local_238 = &local_2e8;
      local_230 = this;
      bVar6 = `USCS_Node::ExecuteNodeOnActor'::__l17::<lambda_1>::operator()(&local_238);
      if (!bVar6) goto LAB_14852496b;
    }
    this_02 = (USceneComponent *)
              AActor::CreateComponentFromTemplateData(param_1,pFVar12,this->InternalVariableName);
  }
  else {
LAB_14852496b:
    pUVar17 = local_2e8;
    pUVar8 = (UActorComponent *)0x0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FBoolConfigValueHelper::FBoolConfigValueHelper
                (&EnableInheritableComponents,L"Kismet",L"bEnableInheritableComponents",&GEngineIni)
      ;
      _Init_thread_footer(&::_TSS0);
    }
    if (EnableInheritableComponents.bValue != false) {
      pUVar10 = GetSCS(this);
      pUVar2 = (pUVar17->SimpleConstructionScript).field0_0x0.DebugPtr;
      if (pUVar2 == (USimpleConstructionScript *)0x0) {
        bVar6 = pUVar10 == (USimpleConstructionScript *)0x0;
      }
      else {
        bVar6 = pUVar2 == pUVar10;
      }
      if (!bVar6) {
        FComponentKey::FComponentKey(&local_1a0,this);
        do {
          pUVar11 = UBlueprintGeneratedClass::GetInheritableComponentHandler(pUVar17,false);
          if (pUVar11 != (UInheritableComponentHandler *)0x0) {
            pUVar8 = UInheritableComponentHandler::GetOverridenComponentTemplate(pUVar11,&local_1a0)
            ;
          }
          pUVar17 = (UBlueprintGeneratedClass *)pUVar17->_padding_;
          if (pUVar17 == (UBlueprintGeneratedClass *)0x0) {
LAB_148524a30:
            pUVar17 = (UBlueprintGeneratedClass *)0x0;
          }
          else {
            pUVar9 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
            iVar1 = (int)pUVar9->_padding_;
            if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar9->_padding_)) goto LAB_148524a30;
          }
          if (pUVar8 != (UActorComponent *)0x0) goto LAB_148524a64;
          if (pUVar17 == (UBlueprintGeneratedClass *)0x0) break;
          pUVar2 = (pUVar17->SimpleConstructionScript).field0_0x0.DebugPtr;
          if (pUVar2 == (USimpleConstructionScript *)0x0) {
            bVar6 = pUVar10 == (USimpleConstructionScript *)0x0;
          }
          else {
            bVar6 = pUVar2 == pUVar10;
          }
        } while (!bVar6);
      }
    }
    pUVar8 = (this->ComponentTemplate).field0_0x0.DebugPtr;
    if (pUVar8 == (UActorComponent *)0x0) {
      return (UActorComponent *)0x0;
    }
LAB_148524a64:
    this_02 = (USceneComponent *)
              AActor::CreateComponentFromTemplate(param_1,pUVar8,this->InternalVariableName);
  }
  if (this_02 == (USceneComponent *)0x0) {
    return (UActorComponent *)0x0;
  }
  *(undefined1 *)((longlong)&this_02->_padding_ + 1) = 1;
  local_2b0 = this_02;
  UActorComponent::SetNetAddressable((UActorComponent *)this_02);
  if ((this_02->_padding_ & 0x4000000) == 0) {
    (**(code **)(this_02->_padding_ + 0x4a8))(this_02);
  }
  pUVar9 = Z_Construct_UClass_USceneComponent_NoRegister();
  iVar1 = (int)pUVar9->_padding_;
  if ((*(int *)(this_02->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar9->_padding_)) {
    pUVar18 = (USceneComponent *)0x0;
    goto LAB_148524d33;
  }
  pUVar13 = AActor::GetWorld(param_1);
  if ((pUVar13 == (UWorld *)0x0) || (pUVar13->bIsWorldInitialized == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  pUVar18 = this_02;
  if (((param_2 == (USceneComponent *)0x0) || (((uint)param_2->_padding_ >> 0x1e & 1) != 0)) ||
     (param_2 == this_02)) {
    local_178.Rotation.XY.m128d_f64[0] = (local_2a8->Rotation).XY.m128d_f64[0];
    local_178.Rotation.XY.m128d_f64[1] = (local_2a8->Rotation).XY.m128d_f64[1];
    local_178.Rotation.ZW.m128d_f64[0] = (local_2a8->Rotation).ZW.m128d_f64[0];
    local_178.Rotation.ZW.m128d_f64[1] = (local_2a8->Rotation).ZW.m128d_f64[1];
    local_178.Translation.XY.m128d_f64[0] = (local_2a8->Translation).XY.m128d_f64[0];
    local_178.Translation.XY.m128d_f64[1] = (local_2a8->Translation).XY.m128d_f64[1];
    local_178.Translation.ZW.m128d_f64[0] = (local_2a8->Translation).ZW.m128d_f64[0];
    local_178.Translation.ZW.m128d_f64[1] = (local_2a8->Translation).ZW.m128d_f64[1];
    local_178.Scale3D.XY.m128d_f64[0] = (local_2a8->Scale3D).XY.m128d_f64[0];
    local_178.Scale3D.XY.m128d_f64[1] = (local_2a8->Scale3D).XY.m128d_f64[1];
    local_178.Scale3D.ZW.m128d_f64[0] = (local_2a8->Scale3D).ZW.m128d_f64[0];
    local_178.Scale3D.ZW.m128d_f64[1] = (local_2a8->Scale3D).ZW.m128d_f64[1];
    if (param_6 == MultiplyWithRoot) {
      pTVar14 = USceneComponent::GetRelativeTransform(this_02,&local_b8);
      local_118.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_118.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_118.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_118.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_118.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_118.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_118.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_118.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_118,pTVar14,&local_178);
      local_178.Rotation.XY.m128d_f64[0] = local_118.Rotation.XY.m128d_f64[0];
      local_178.Rotation.XY.m128d_f64[1] = local_118.Rotation.XY.m128d_f64[1];
      local_178.Rotation.ZW.m128d_f64[0] = local_118.Rotation.ZW.m128d_f64[0];
      local_178.Rotation.ZW.m128d_f64[1] = local_118.Rotation.ZW.m128d_f64[1];
      local_178.Translation.XY.m128d_f64[0] = local_118.Translation.XY.m128d_f64[0];
      local_178.Translation.XY.m128d_f64[1] = local_118.Translation.XY.m128d_f64[1];
      local_178.Translation.ZW.m128d_f64[0] = local_118.Translation.ZW.m128d_f64[0];
      local_178.Translation.ZW.m128d_f64[1] = local_118.Translation.ZW.m128d_f64[1];
      local_178.Scale3D.XY.m128d_f64[0] = local_118.Scale3D.XY.m128d_f64[0];
      local_178.Scale3D.XY.m128d_f64[1] = local_118.Scale3D.XY.m128d_f64[1];
      local_178.Scale3D.ZW.m128d_f64[0] = local_118.Scale3D.ZW.m128d_f64[0];
      local_178.Scale3D.ZW.m128d_f64[1] = local_118.Scale3D.ZW.m128d_f64[1];
    }
    if (param_5) {
      local_208 = (this_02->RelativeScale3D).field0_0x0._s_0.X;
      dStack_200 = (this_02->RelativeScale3D).field0_0x0._s_0.Y;
      local_1f8 = (this_02->RelativeScale3D).field0_0x0._s_0.Z;
      local_178.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_178.Scale3D.XY.m128d_f64[0] = local_208;
      local_178.Scale3D.XY.m128d_f64[1] = dStack_200;
      local_178.Scale3D.ZW.m128d_f64[0] = local_1f8;
    }
    if (local_2a0 != (FRotationConversionCache *)0x0) {
      USceneComponent::SetRelativeRotationCache(this_02,local_2a0);
    }
    USceneComponent::SetWorldTransform(this_02,&local_178,false,(FHitResult *)0x0,None);
    AActor::SetRootComponent(param_1,this_02);
    if (param_1->bHasDeferredComponentRegistration == '\0') goto LAB_148524b1d;
    if (!bVar6) goto LAB_148524d33;
    (**(code **)(param_1->_padding_ + 0x5b0))(param_1);
  }
  else {
    USceneComponent::SetupAttachment(this_02,param_2,this->AttachToName);
LAB_148524b1d:
    if (!bVar6) goto LAB_148524d33;
  }
  lVar19 = this->_padding_;
  if (lVar19 == 0) {
LAB_148524b57:
    lVar19 = 0;
  }
  else {
    pUVar9 = Z_Construct_UClass_USimpleConstructionScript_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) + (longlong)iVar1 * 8)
        != &pUVar9->_padding_)) goto LAB_148524b57;
  }
  if (*(FStaticMeshComponentBulkReregisterContext **)(lVar19 + 0xa8) !=
      (FStaticMeshComponentBulkReregisterContext *)0x0) {
    FStaticMeshComponentBulkReregisterContext::AddConstructedComponent
              (*(FStaticMeshComponentBulkReregisterContext **)(lVar19 + 0xa8),this_02);
  }
  USimpleConstructionScript::RegisterInstancedComponent((UActorComponent *)this_02);
LAB_148524d33:
  FVar3 = this->InternalVariableName;
  local_2c0 = 0;
  local_2b8 = FVar3;
  if (FVar3 != (FName)0x0) {
    pUVar4 = (UStruct *)param_1->_padding_;
    if (FVar3 != (FName)0x0) {
      if (pUVar4 == (UStruct *)0x0) {
        local_2d8.Field = (FField *)0x0;
      }
      else {
        local_2d8.Field = pUVar4->ChildProperties;
      }
      local_2d8.InterfaceIndex = -1;
      local_2d8.bIncludeSuper = true;
      local_2d8.bIncludeDeprecated = true;
      local_2d8.bIncludeInterface = false;
      local_2d8.Struct = pUVar4;
      TFieldIterator<FObjectPropertyBase>::IterateToNext(&local_2d8);
      this_01 = (FObjectPropertyBase *)local_2d8.Field;
      while (local_2d8.Field = (FField *)this_01, this_01 != (FObjectPropertyBase *)0x0) {
        bVar6 = IsThisNotNull(this_01,"FField::GetFName");
        if (bVar6) {
          local_2e0 = (FName)this_01->_padding_;
        }
        else {
          local_2e0.ComparisonIndex.Value = 0;
          local_2e0.Number = 0;
        }
        if (local_2e0 == FVar3) {
          if (this_01 != (FObjectPropertyBase *)0x0) {
            pUVar9 = (this_01->PropertyClass).field0_0x0.DebugPtr;
            if (pUVar9 != (UClass *)0x0) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar9);
              }
              iVar1 = (int)pUVar9->_padding_;
              if ((*(int *)(this_02->_padding_ + 0x38) < iVar1) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar1 * 8)
                  != &pUVar9->_padding_)) {
                if ((byte)LogBlueprint._0_1_ < 5) goto LAB_148524fc8;
                local_298 = (FName)this_02->_padding_;
                ::FName::ToString(&local_298,&local_258);
                local_290 = (FName)((this_01->PropertyClass).field0_0x0.DebugPtr)->_padding_;
                ::FName::ToString(&local_290,&local_268);
                local_288 = (FName)param_1->_padding_;
                ::FName::ToString(&local_288,&local_278);
                ::FName::ToString(&local_2b8,&local_228);
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
                if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_228.Data.AllocatorInstance.Data);
                }
                if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_278.Data.AllocatorInstance.Data);
                }
                if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_268.Data.AllocatorInstance.Data);
                }
                goto LAB_148524fb9;
              }
            }
            FObjectPropertyBase::SetObjectPropertyValue_InContainer
                      (this_01,param_1,(UObject *)this_02,0);
            goto LAB_148524fc8;
          }
          break;
        }
        local_2d8.Field = (FField *)this_01->_padding_;
        TFieldIterator<FObjectPropertyBase>::IterateToNext(&local_2d8);
        this_01 = (FObjectPropertyBase *)local_2d8.Field;
      }
    }
    if (4 < (byte)LogBlueprint._0_1_) {
      local_280 = (FName)param_1->_padding_;
      ::FName::ToString(&local_280,&local_248);
      ::FName::ToString(&local_2b8,&local_218);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
      local_258.Data.AllocatorInstance.Data = local_248.Data.AllocatorInstance.Data;
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
        local_258.Data.AllocatorInstance.Data = local_248.Data.AllocatorInstance.Data;
      }
LAB_148524fb9:
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_148524fc8:
  if (pUVar18 != (USceneComponent *)0x0) {
    param_2 = pUVar18;
  }
  uVar16 = 0;
  if (0 < (this->ChildNodes).ArrayNum) {
    lVar19 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar16 < (this->ChildNodes).ArrayNum) {
        uVar7 = ~uVar16 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pUVar8 = (UActorComponent *)(*pcVar5)();
        return pUVar8;
      }
      this_00 = *(USCS_Node **)((this->ChildNodes).AllocatorInstance.Data + lVar19);
      if ((this_00 == (USCS_Node *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Node != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SCS_Node.cpp"
                             ,0xdd,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pUVar8 = (UActorComponent *)(*pcVar5)();
        return pUVar8;
      }
      ExecuteNodeOnActor(this_00,param_1,param_2,(TTransform<double> *)0x0,
                         (FRotationConversionCache *)0x0,false,OverrideRootScale);
      uVar16 = uVar16 + 1;
      lVar19 = lVar19 + 8;
      this_02 = local_2b0;
    } while ((int)uVar16 < (this->ChildNodes).ArrayNum);
  }
  return (UActorComponent *)this_02;
}

// FindMetaDataEntryIndexForKey @ 1485256c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall USCS_Node::FindMetaDataEntryIndexForKey(USCS_Node *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->MetaDataArray).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->MetaDataArray).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->MetaDataArray).AllocatorInstance.Data + lVar5) == param_1) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while ((int)uVar6 < (this->MetaDataArray).ArrayNum);
  }
  return -1;
}

// GetActualComponentTemplate @ 1485288f0

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
USCS_Node::GetActualComponentTemplate(USCS_Node *this,UBlueprintGeneratedClass *param_1)

{
  int iVar1;
  USimpleConstructionScript *pUVar2;
  USimpleConstructionScript *pUVar3;
  UInheritableComponentHandler *this_00;
  UActorComponent *pUVar4;
  UClass *pUVar5;
  bool bVar6;
  FComponentKey local_28;
  
  pUVar4 = (UActorComponent *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FBoolConfigValueHelper::FBoolConfigValueHelper
              (&EnableInheritableComponents,L"Kismet",L"bEnableInheritableComponents",&GEngineIni);
    _Init_thread_footer(&::_TSS0);
  }
  if (EnableInheritableComponents.bValue != false) {
    pUVar3 = GetSCS(this);
    pUVar2 = (param_1->SimpleConstructionScript).field0_0x0.DebugPtr;
    if (pUVar2 == (USimpleConstructionScript *)0x0) {
      bVar6 = pUVar3 == (USimpleConstructionScript *)0x0;
    }
    else {
      bVar6 = pUVar2 == pUVar3;
    }
    if (!bVar6) {
      FComponentKey::FComponentKey(&local_28,this);
      do {
        this_00 = UBlueprintGeneratedClass::GetInheritableComponentHandler(param_1,false);
        if (this_00 != (UInheritableComponentHandler *)0x0) {
          pUVar4 = UInheritableComponentHandler::GetOverridenComponentTemplate(this_00,&local_28);
        }
        param_1 = (UBlueprintGeneratedClass *)param_1->_padding_;
        if (param_1 == (UBlueprintGeneratedClass *)0x0) {
LAB_1485289cb:
          param_1 = (UBlueprintGeneratedClass *)0x0;
        }
        else {
          pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
          iVar1 = (int)pUVar5->_padding_;
          if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar5->_padding_)) goto LAB_1485289cb;
        }
        if (pUVar4 != (UActorComponent *)0x0) {
          return pUVar4;
        }
        if (param_1 == (UBlueprintGeneratedClass *)0x0) break;
        pUVar2 = (param_1->SimpleConstructionScript).field0_0x0.DebugPtr;
        if (pUVar2 == (USimpleConstructionScript *)0x0) {
          bVar6 = pUVar3 == (USimpleConstructionScript *)0x0;
        }
        else {
          bVar6 = pUVar2 == pUVar3;
        }
      } while (!bVar6);
    }
  }
  return (this->ComponentTemplate).field0_0x0.DebugPtr;
}

// GetActualComponentTemplateData @ 148528a70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FBlueprintCookedComponentInstancingData * __thiscall
USCS_Node::GetActualComponentTemplateData(USCS_Node *this,UBlueprintGeneratedClass *param_1)

{
  int iVar1;
  USimpleConstructionScript *pUVar2;
  USimpleConstructionScript *pUVar3;
  UInheritableComponentHandler *this_00;
  FBlueprintCookedComponentInstancingData *pFVar4;
  UClass *pUVar5;
  bool bVar6;
  FComponentKey local_28;
  
  pFVar4 = (FBlueprintCookedComponentInstancingData *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FBoolConfigValueHelper::FBoolConfigValueHelper
              (&EnableInheritableComponents,L"Kismet",L"bEnableInheritableComponents",&GEngineIni);
    _Init_thread_footer(&::_TSS0);
  }
  if (EnableInheritableComponents.bValue != false) {
    pUVar3 = GetSCS(this);
    pUVar2 = (param_1->SimpleConstructionScript).field0_0x0.DebugPtr;
    if (pUVar2 == (USimpleConstructionScript *)0x0) {
      bVar6 = pUVar3 == (USimpleConstructionScript *)0x0;
    }
    else {
      bVar6 = pUVar2 == pUVar3;
    }
    if (!bVar6) {
      FComponentKey::FComponentKey(&local_28,this);
      do {
        this_00 = UBlueprintGeneratedClass::GetInheritableComponentHandler(param_1,false);
        if (this_00 != (UInheritableComponentHandler *)0x0) {
          pFVar4 = UInheritableComponentHandler::GetOverridenComponentTemplateData
                             (this_00,&local_28);
        }
        param_1 = (UBlueprintGeneratedClass *)param_1->_padding_;
        if (param_1 == (UBlueprintGeneratedClass *)0x0) {
LAB_148528b4b:
          param_1 = (UBlueprintGeneratedClass *)0x0;
        }
        else {
          pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
          iVar1 = (int)pUVar5->_padding_;
          if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar5->_padding_)) goto LAB_148528b4b;
        }
        if (pFVar4 != (FBlueprintCookedComponentInstancingData *)0x0) {
          return pFVar4;
        }
        if (param_1 == (UBlueprintGeneratedClass *)0x0) break;
        pUVar2 = (param_1->SimpleConstructionScript).field0_0x0.DebugPtr;
        if (pUVar2 == (USimpleConstructionScript *)0x0) {
          bVar6 = pUVar3 == (USimpleConstructionScript *)0x0;
        }
        else {
          bVar6 = pUVar2 == pUVar3;
        }
      } while (!bVar6);
    }
  }
  return &this->CookedComponentInstancingData;
}

// GetAllNodes @ 148528c80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<USCS_Node_*,TSizedDefaultAllocator<32>_> * __thiscall
USCS_Node::GetAllNodes
          (USCS_Node *this,TArray<USCS_Node_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  USCS_Node *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  TArray<USCS_Node_*,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  longlong lVar9;
  TArray<USCS_Node_*,TSizedDefaultAllocator<32>_> local_38;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  iVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
  uVar8 = 0;
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  *(USCS_Node **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) = this;
  if (0 < (this->ChildNodes).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->ChildNodes).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<USCS_Node_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      this_00 = *(USCS_Node **)((this->ChildNodes).AllocatorInstance.Data + lVar9);
      if ((this_00 == (USCS_Node *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ChildNode != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SCS_Node.cpp"
                             ,0xf0,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<USCS_Node_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      pTVar7 = GetAllNodes(this_00,&local_38);
      if ((__return_storage_ptr__ == pTVar7) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<USCS_Node_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      iVar4 = pTVar7->ArrayNum;
      if (iVar4 != 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar4,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayNum,piVar1);
        memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8,
                (pTVar7->AllocatorInstance).Data,(longlong)iVar4 << 3);
        pTVar7->ArrayNum = 0;
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->ChildNodes).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetAllNodes @ 148528e50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<USCS_Node_const_*,TSizedDefaultAllocator<32>_> * __thiscall
USCS_Node::GetAllNodes
          (USCS_Node *this,
          TArray<USCS_Node_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  USCS_Node *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  TArray<USCS_Node_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  longlong lVar9;
  TArray<USCS_Node_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  iVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
  uVar8 = 0;
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  *(USCS_Node **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) = this;
  if (0 < (this->ChildNodes).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->ChildNodes).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<USCS_Node_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      this_00 = *(USCS_Node **)((this->ChildNodes).AllocatorInstance.Data + lVar9);
      if ((this_00 == (USCS_Node *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ChildNode != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SCS_Node.cpp"
                             ,0x145,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<USCS_Node_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      pTVar7 = GetAllNodes(this_00,&local_38);
      if ((__return_storage_ptr__ == pTVar7) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<USCS_Node_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      iVar4 = pTVar7->ArrayNum;
      if (iVar4 != 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar4,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayNum,piVar1);
        memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8,
                (pTVar7->AllocatorInstance).Data,(longlong)iVar4 << 3);
        pTVar7->ArrayNum = 0;
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->ChildNodes).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetMetaData @ 14852b790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall USCS_Node::GetMetaData(USCS_Node *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FString *pFVar5;
  
  uVar3 = FindMetaDataEntryIndexForKey(this,param_1);
  if (uVar3 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EntryIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SCS_Node.cpp"
                       ,0x1c4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
  }
  uVar4 = 0;
  if ((int)uVar3 < (this->MetaDataArray).ArrayNum) {
    uVar4 = ~uVar3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FString *)((this->MetaDataArray).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x18 + 8)
  ;
}

// GetPrivateStaticClass @ 14852c470

UClass * __cdecl USCS_Node::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USCS_Node.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SCS_Node",&Z_Registration_Info_UClass_USCS_Node.InnerSingleton,
               StaticRegisterNativesUSCS_Node,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USCS_Node>,InternalVTableHelperCtorCaller<USCS_Node>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USCS_Node.InnerSingleton;
}

// GetSCS @ 14852c5d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USimpleConstructionScript * __thiscall USCS_Node::GetSCS(USCS_Node *this)

{
  int iVar1;
  USimpleConstructionScript *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pUVar2 = (USimpleConstructionScript *)this->_padding_;
  if (pUVar2 == (USimpleConstructionScript *)0x0) {
    pFVar4 = GetTypeName<USimpleConstructionScript>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = Z_Construct_UClass_USimpleConstructionScript_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    return pUVar2;
  }
  pFVar4 = GetTypeName<USimpleConstructionScript>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar2);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// IsChildOf @ 148531f30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall USCS_Node::IsChildOf(USCS_Node *this,USCS_Node *param_1)

{
  TArray<USCS_Node_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TArray<USCS_Node_*,TSizedDefaultAllocator<32>_> local_28;
  TArray<USCS_Node_*,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar5 = (FScriptContainerElement *)0x0;
  iVar4 = 0;
  if (param_1 != (USCS_Node *)0x0) {
    pTVar1 = GetAllNodes(param_1,&local_28);
    iVar4 = 0;
    if (&local_18 != pTVar1) {
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar4 = pTVar1->ArrayNum;
      pTVar1->ArrayNum = 0;
      pTVar1->ArrayMax = 0;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  pFVar2 = pFVar5;
  do {
    if (pFVar2 == pFVar5 + (longlong)iVar4 * 8) {
      bVar3 = false;
LAB_148531fb0:
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      return bVar3;
    }
    if (*(USCS_Node **)pFVar2 == this) {
      bVar3 = true;
      goto LAB_148531fb0;
    }
    pFVar2 = pFVar2 + 8;
  } while( true );
}

// IsRootNode @ 148532d20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall USCS_Node::IsRootNode(USCS_Node *this)

{
  FScriptContainerElement *pFVar1;
  USimpleConstructionScript *pUVar2;
  FScriptContainerElement *pFVar3;
  
  pUVar2 = GetSCS(this);
  pFVar3 = (pUVar2->RootNodes).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(pUVar2->RootNodes).ArrayNum * 8;
  while( true ) {
    if (pFVar3 == pFVar1) {
      return false;
    }
    if (*(USCS_Node **)pFVar3 == this) break;
    pFVar3 = pFVar3 + 8;
  }
  return true;
}

// MoveChildNodes @ 148534440

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USCS_Node::MoveChildNodes(USCS_Node *this,USCS_Node *param_1,int param_2)

{
  int *piVar1;
  TArray<TObjectPtr<USCS_Node>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<USCS_Node>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  USCS_Node *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  USimpleConstructionScript *pUVar9;
  USimpleConstructionScript *pUVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  int local_res18;
  
  if (param_1 != (USCS_Node *)0x0) {
    local_res18 = param_2;
    pUVar9 = GetSCS(param_1);
    pUVar10 = GetSCS(this);
    pTVar2 = &param_1->ChildNodes;
    if (pUVar9 != pUVar10) {
      pFVar12 = (pTVar2->AllocatorInstance).Data;
      iVar4 = (param_1->ChildNodes).ArrayNum;
      pFVar11 = pFVar12 + (longlong)iVar4 * 8;
      while( true ) {
        if ((param_1->ChildNodes).ArrayNum != iVar4) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<USCS_Node>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        param_2 = local_res18;
        if (pFVar12 == pFVar11) break;
        pUVar5 = *(USCS_Node **)pFVar12;
        FSCSAllNodesHelper::Remove(pUVar9,pUVar5);
        FSCSAllNodesHelper::Add(pUVar10,pUVar5);
        pFVar12 = pFVar12 + 8;
      }
    }
    pTVar3 = &this->ChildNodes;
    if (param_2 == -1) {
      if ((pTVar3 == pTVar2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar4 = (param_1->ChildNodes).ArrayNum;
      if (iVar4 != 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar4,&pTVar3->AllocatorInstance,&(this->ChildNodes).ArrayNum,
                           &(this->ChildNodes).ArrayMax);
        ConstructItems<TObjectPtr<USCS_Node>,TObjectPtr<USCS_Node>,int>
                  ((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 8,
                   (TObjectPtr<USCS_Node> *)(pTVar2->AllocatorInstance).Data,iVar4);
      }
    }
    else {
      if ((pTVar3 == pTVar2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(const void*)this != (const void*)&Items",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x767,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar4 = (param_1->ChildNodes).ArrayNum;
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar4,&pTVar3->AllocatorInstance,&(this->ChildNodes).ArrayNum,
                         &(this->ChildNodes).ArrayMax);
      pFVar11 = (pTVar3->AllocatorInstance).Data + (longlong)param_2 * 8;
      memmove(pFVar11 + (longlong)iVar4 * 8,pFVar11,(longlong)(iVar8 - param_2) << 3);
      ConstructItems<TObjectPtr<USCS_Node>,TObjectPtr<USCS_Node>,int>
                ((pTVar3->AllocatorInstance).Data + (longlong)param_2 * 8,
                 (TObjectPtr<USCS_Node> *)(pTVar2->AllocatorInstance).Data,iVar4);
    }
    piVar1 = &(param_1->ChildNodes).ArrayMax;
    (param_1->ChildNodes).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// PostLoad @ 148539410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USCS_Node::PostLoad(USCS_Node *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(USCS_Node **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// PreloadChain @ 148539e00

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

void __thiscall USCS_Node::PreloadChain(USCS_Node *this)

{
  FScriptContainerElement *pFVar1;
  UActorComponent *this_00;
  USCS_Node *this_01;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  ForAnyElementType FVar6;
  int iVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_28;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId344,"USCS_Node::PreloadChain",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SCS_Node.cpp"
               ,0x158);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId344);
  }
  UObject::ConditionalPreload((UObject *)this);
  this_00 = (this->ComponentTemplate).field0_0x0.DebugPtr;
  iVar7 = 0;
  if (this_00 != (UActorComponent *)0x0) {
    UObject::ConditionalPreload((UObject *)this_00);
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    GetObjectsWithOuter((UObjectBase *)(this->ComponentTemplate).field0_0x0.DebugPtr,&local_28,true,
                        RF_NoFlags,Borrowed);
    iVar3 = local_28.ArrayNum;
    uVar5 = (ulonglong)local_28.ArrayNum;
    pFVar1 = local_28.AllocatorInstance.Data + uVar5 * 8;
    FVar6.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar5 != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar6.Data == pFVar1) break;
      UObject::ConditionalPreload(*(UObject **)FVar6.Data);
      uVar5 = local_28._8_8_ & 0xffffffff;
      FVar6.Data = FVar6.Data + 8;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  while( true ) {
    if ((iVar7 < 0) || ((this->ChildNodes).ArrayNum <= iVar7)) {
      if (!bVar8) {
        return;
      }
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
    if ((iVar7 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    this_01 = *(USCS_Node **)((this->ChildNodes).AllocatorInstance.Data + (longlong)iVar7 * 8);
    if (this_01 != (USCS_Node *)0x0) {
      PreloadChain(this_01);
    }
    iVar7 = iVar7 + 1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// RemoveChildNode @ 148540b00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USCS_Node::RemoveChildNode(USCS_Node *this,USCS_Node *param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  USCS_Node *pUVar5;
  USimpleConstructionScript *pUVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  USCS_Node *local_48 [2];
  
  local_48[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USCS_Node *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->ChildNodes).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar2 + (longlong)(this->ChildNodes).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->ChildNodes).ArrayNum;
  if (iVar1 != 0) {
    pFVar2 = (this->ChildNodes).AllocatorInstance.Data;
    iVar10 = 0;
    bVar4 = *(USCS_Node **)pFVar2 != local_48[0];
    lVar7 = 0;
    pUVar5 = local_48[0];
    iVar8 = 0;
    do {
      iVar9 = iVar8;
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar9 + 1;
        if (iVar1 <= lVar7) break;
      } while (bVar4 == (*(USCS_Node **)(pFVar2 + lVar7 * 8) != pUVar5));
      if (bVar4 != false) {
        if (iVar10 != iVar8) {
          memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar8 * 8,
                  (longlong)(iVar9 - iVar8) << 3);
          pUVar5 = local_48[0];
        }
        iVar10 = iVar10 + (iVar9 - iVar8);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar8 = iVar9;
    } while (lVar7 < iVar1);
    (this->ChildNodes).ArrayNum = iVar10;
    if (iVar1 - iVar10 == -1) {
      return;
    }
  }
  if (param_2) {
    pUVar6 = GetSCS(this);
    FSCSAllNodesHelper::Remove(pUVar6,param_1);
  }
  return;
}

// RemoveChildNodeAt @ 148540ce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USCS_Node::RemoveChildNodeAt(USCS_Node *this,int param_1,bool param_2)

{
  int *piVar1;
  TArray<TObjectPtr<USCS_Node>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  USCS_Node *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  USimpleConstructionScript *pUVar7;
  int iVar8;
  
  if ((-1 < param_1) && (param_1 < (this->ChildNodes).ArrayNum)) {
    pTVar2 = &this->ChildNodes;
    pUVar3 = *(USCS_Node **)((pTVar2->AllocatorInstance).Data + (longlong)param_1 * 8);
    uVar6 = 0;
    if (param_1 < (this->ChildNodes).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->ChildNodes).ArrayNum + ~param_1;
    _Dst = (pTVar2->AllocatorInstance).Data + (longlong)param_1 * 8;
    if (iVar8 != 0) {
      memmove(_Dst,_Dst + 8,(longlong)iVar8 << 3);
    }
    piVar1 = &(this->ChildNodes).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar2->AllocatorInstance,(this->ChildNodes).ArrayNum,
               &(this->ChildNodes).ArrayMax);
    if (param_2) {
      pUVar7 = GetSCS(this);
      FSCSAllNodesHelper::Remove(pUVar7,pUVar3);
    }
  }
  return;
}

// RemoveMetaData @ 1485412b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USCS_Node::RemoveMetaData(USCS_Node *this,FName param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar6 = FindMetaDataEntryIndexForKey(this,param_1);
  if (uVar6 != 0xffffffff) {
    uVar7 = 0;
    if ((int)uVar6 < (this->MetaDataArray).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar2 = (this->MetaDataArray).AllocatorInstance.Data;
    _Dst = pFVar2 + (longlong)(int)uVar6 * 0x18;
    pvVar3 = *(void **)(pFVar2 + (longlong)(int)uVar6 * 0x18 + 8);
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    iVar8 = (this->MetaDataArray).ArrayNum + ~uVar6;
    if (iVar8 != 0) {
      memmove(_Dst,_Dst + 0x18,(longlong)iVar8 * 0x18);
    }
    piVar1 = &(this->MetaDataArray).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&(this->MetaDataArray).AllocatorInstance,(this->MetaDataArray).ArrayNum,
               &(this->MetaDataArray).ArrayMax);
  }
  return;
}

// RenameComponentTemplate @ 1485413a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl USCS_Node::RenameComponentTemplate(UActorComponent *param_1,FName *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  UActorComponent *pUVar4;
  AActor *this;
  int iVar5;
  UClass *pUVar6;
  FString *pFVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  undefined1 local_res8 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((param_1 != (UActorComponent *)0x0) && (((uint)param_1->_padding_ >> 5 & 1) != 0)) {
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    UObject::GetArchetypeInstances((UObject *)param_1,&local_68);
    ::FName::ToString(param_2,&local_58);
    pcVar3 = *(code **)(param_1->_padding_ + 0x170);
    ::FString::ConcatFF(&local_48,&local_58,&USimpleConstructionScript::ComponentTemplateNameSuffix)
    ;
    pwVar10 = L"";
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar11.Data = local_48.Data.AllocatorInstance.Data;
    }
    (*pcVar3)(param_1,FVar11.Data,0,0x10);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    iVar5 = local_68.ArrayNum;
    uVar8 = (ulonglong)local_68.ArrayNum;
    pFVar1 = local_68.AllocatorInstance.Data + uVar8 * 8;
    FVar11.Data = local_68.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar8 != iVar5) {
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar11.Data == pFVar1) break;
      pUVar4 = *(UActorComponent **)FVar11.Data;
      if ((pUVar4->_padding_ & 0x400020) == 0x400020) {
        if (pUVar4 == (UActorComponent *)0x0) {
          pFVar7 = GetTypeName<UActorComponent>(&local_38);
          if ((pFVar7->Data).ArrayNum != 0) {
            pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar10);
        }
        pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
        iVar2 = (int)pUVar6->_padding_;
        if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar6->_padding_)) {
          pFVar7 = GetTypeName<UActorComponent>(&local_48);
          if ((pFVar7->Data).ArrayNum == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
          }
          pFVar7 = GetFullNameForCastLogError<UObject>(&local_38,(UObject *)pUVar4);
          if ((pFVar7->Data).ArrayNum != 0) {
            pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar10,pwVar12);
        }
        RenameComponentTemplate(pUVar4,param_2);
        uVar8 = local_68._8_8_ & 0xffffffff;
        FVar11.Data = FVar11.Data + 8;
      }
      else {
        this = (AActor *)pUVar4->_padding_;
        if (this != (AActor *)0x0) {
          pUVar6 = Z_Construct_UClass_AActor_NoRegister();
          iVar2 = (int)pUVar6->_padding_;
          if ((iVar2 <= *(int *)(this->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar6->_padding_)) {
            AActor::CheckComponentInstanceName(this,*param_2);
          }
        }
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar9.Data = local_58.Data.AllocatorInstance.Data;
        }
        (**(code **)(pUVar4->_padding_ + 0x170))(pUVar4,FVar9.Data,0,0x10);
        uVar8 = local_68._8_8_ & 0xffffffff;
        FVar11.Data = FVar11.Data + 8;
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 148542300

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USCS_Node::Serialize(USCS_Node *this,FArchive *param_1)

{
  UActorComponent *pUVar1;
  UClass *pUVar2;
  
  UObject::Serialize((UObject *)this,param_1);
  if ((((param_1->field_0x28 & 1) != 0) && ((param_1->field_0x29 & 1) != 0)) &&
     ((*(uint *)&param_1->field_0x34 & 0x401000) == 0)) {
    if (((this->ComponentClass).field0_0x0.DebugPtr == (UClass *)0x0) &&
       (pUVar1 = (this->ComponentTemplate).field0_0x0.DebugPtr, pUVar1 != (UActorComponent *)0x0)) {
      pUVar2 = (UClass *)pUVar1->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (this->ComponentClass).field0_0x0.DebugPtr = pUVar2;
    }
    pUVar1 = (this->ComponentTemplate).field0_0x0.DebugPtr;
    if (pUVar1 != (UActorComponent *)0x0) {
      UObjectBase::AtomicallyClearFlags((UObjectBase *)pUVar1,RF_InheritableComponentTemplate);
    }
  }
  return;
}

// Serialize @ 148542380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USCS_Node::Serialize(USCS_Node *this,FStructuredArchiveRecord param_1)

{
  UActorComponent *pUVar1;
  UClass *pUVar2;
  FArchive *pFVar3;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar3);
  if ((((pFVar3->field_0x28 & 1) != 0) && ((pFVar3->field_0x29 & 1) != 0)) &&
     ((*(uint *)&pFVar3->field_0x34 & 0x401000) == 0)) {
    if (((this->ComponentClass).field0_0x0.DebugPtr == (UClass *)0x0) &&
       (pUVar1 = (this->ComponentTemplate).field0_0x0.DebugPtr, pUVar1 != (UActorComponent *)0x0)) {
      pUVar2 = (UClass *)pUVar1->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (this->ComponentClass).field0_0x0.DebugPtr = pUVar2;
    }
    pUVar1 = (this->ComponentTemplate).field0_0x0.DebugPtr;
    if (pUVar1 != (UActorComponent *)0x0) {
      UObjectBase::AtomicallyClearFlags((UObjectBase *)pUVar1,RF_InheritableComponentTemplate);
    }
  }
  return;
}

// SetMetaData @ 1485426c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USCS_Node::SetMetaData(USCS_Node *this,FName param_1,FString *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  TArray<FBPVariableMetaDataEntry,TSizedDefaultAllocator<32>_> *pTVar12;
  
  uVar8 = FindMetaDataEntryIndexForKey(this,param_1);
  pTVar12 = &this->MetaDataArray;
  if (uVar8 == 0xffffffff) {
    pFVar2 = (param_2->Data).AllocatorInstance.Data;
    piVar1 = &(this->MetaDataArray).ArrayMax;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = (param_2->Data).ArrayMax;
    iVar4 = (param_2->Data).ArrayNum;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
    iVar10 = (this->MetaDataArray).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar12->AllocatorInstance,piVar1);
    }
    lVar11 = (longlong)iVar10;
    (this->MetaDataArray).ArrayNum = iVar10 + 1;
    pFVar5 = (pTVar12->AllocatorInstance).Data;
    *(FName *)(pFVar5 + lVar11 * 0x18) = param_1;
    *(FScriptContainerElement **)(pFVar5 + lVar11 * 0x18 + 8) = pFVar2;
    *(int *)(pFVar5 + lVar11 * 0x18 + 0x10) = iVar4;
    *(int *)(pFVar5 + lVar11 * 0x18 + 0x14) = iVar3;
  }
  else {
    uVar9 = 0;
    if ((int)uVar8 < (this->MetaDataArray).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar2 = (pTVar12->AllocatorInstance).Data + ((longlong)(int)uVar8 * 3 + 1) * 8;
    if (pFVar2 != (FScriptContainerElement *)param_2) {
      if (*(void **)&pFVar2->field_0x0 != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar2->field_0x0);
      }
      *(FScriptContainerElement **)&pFVar2->field_0x0 = (param_2->Data).AllocatorInstance.Data;
      (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar2 + 8) = (param_2->Data).ArrayNum;
      *(int *)(pFVar2 + 0xc) = (param_2->Data).ArrayMax;
      (param_2->Data).ArrayNum = 0;
      (param_2->Data).ArrayMax = 0;
    }
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// SetVariableName @ 148542830

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USCS_Node::SetVariableName(USCS_Node *this,FName *param_1,bool param_2)

{
  UActorComponent *pUVar1;
  
  if (!param_2) {
    this->InternalVariableName = *param_1;
    return;
  }
  pUVar1 = (this->ComponentTemplate).field0_0x0.DebugPtr;
  if (pUVar1 != (UActorComponent *)0x0) {
    RenameComponentTemplate(pUVar1,param_1);
    this->InternalVariableName = *param_1;
    return;
  }
  this->InternalVariableName = *param_1;
  return;
}

// StaticRegisterNativesUSCS_Node @ 148548530

void __cdecl USCS_Node::StaticRegisterNativesUSCS_Node(void)

{
  return;
}

// operator() @ 15052d5c0

bool __thiscall `USCS_Node::ExecuteNodeOnActor'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4937276738834006110>);
  if (bVar4) {
    ::FName::ToString((FName *)(*(longlong *)((longlong)this + 8) + 0xd0),&local_18);
    local_res10 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4937276738834006110>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15052d677;
    }
  }
  bVar4 = false;
LAB_15052d677:
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

