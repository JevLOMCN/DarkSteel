// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// ApplyParameterOverrides @ 14d65c250

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlueprintCameraNodeEvaluator::ApplyParameterOverrides
          (FBlueprintCameraNodeEvaluator *this,FCameraVariableTable *param_1,
          FCameraContextDataTable *param_2)

{
  int iVar1;
  FCameraVariableID FVar2;
  FCameraContextDataID FVar3;
  UStruct *this_00;
  UBlueprintCameraNodeEvaluator *pUVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  UClass *pUVar8;
  FProperty *pFVar9;
  uchar *puVar10;
  uchar *_Dst;
  FName *pFVar11;
  FName *pFVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined8 uVar14;
  
  this_00 = (UStruct *)((this->EvaluatorBlueprint).field0_0x0.DebugPtr)->_padding_;
  if (this->_padding_ != 0) {
    pUVar8 = UBlueprintCameraNode::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar8);
    if (bVar6) {
      lVar13 = this->_padding_;
      goto LAB_14d65c2a1;
    }
  }
  lVar13 = 0;
LAB_14d65c2a1:
  iVar1 = *(int *)(lVar13 + 0x50);
  pFVar11 = *(FName **)(lVar13 + 0x48);
  pFVar12 = pFVar11 + (longlong)iVar1 * 5;
  while( true ) {
    if (*(int *)(lVar13 + 0x50) != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FCustomCameraNodeBlendableParameter_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar12) break;
    pFVar9 = UStruct::FindPropertyByName(this_00,*pFVar11);
    if (pFVar9 == (FProperty *)0x0) {
      bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5807300082072027013>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Utility\\BlueprintCameraNode.cpp"
                         ,0x7b,"Property");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      FVar2.Value = pFVar11[3].ComparisonIndex.Value;
      if (FVar2.Value != 0xffffffff) {
        puVar10 = FCameraVariableTable::TryGetValue
                            (param_1,FVar2,pFVar11[1].ComparisonIndex.Value,
                             (UScriptStruct *)pFVar11[2],true);
        if (puVar10 != (uchar *)0x0) {
          FProperty::SetValue_InContainer
                    (pFVar9,(this->EvaluatorBlueprint).field0_0x0.DebugPtr,puVar10);
        }
      }
    }
    pFVar11 = pFVar11 + 5;
  }
  iVar1 = *(int *)(lVar13 + 0x60);
  pFVar12 = *(FName **)(lVar13 + 0x58);
  pFVar11 = pFVar12 + (longlong)iVar1 * 4;
  do {
    while( true ) {
      if (*(int *)(lVar13 + 0x60) != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FCustomCameraNodeDataParameter_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar12 == pFVar11) {
        return;
      }
      pFVar9 = UStruct::FindPropertyByName(this_00,*pFVar12);
      if (pFVar9 != (FProperty *)0x0) break;
      bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5807300082072026993>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Utility\\BlueprintCameraNode.cpp"
                         ,0x8f,"Property");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
LAB_14d65c4f3:
      pFVar12 = pFVar12 + 4;
    }
    FVar3.Value = pFVar12[3].ComparisonIndex.Value;
    if (FVar3.Value == 0xffffffff) goto LAB_14d65c4f3;
    uVar14 = 1;
    puVar10 = FCameraContextDataTable::TryGetData
                        (param_2,FVar3,pFVar12[1].ComparisonIndex.Value,(UObject *)pFVar12[2],true);
    if (puVar10 == (uchar *)0x0) goto LAB_14d65c4f3;
    pUVar4 = (this->EvaluatorBlueprint).field0_0x0.DebugPtr;
    cVar7 = (**(code **)(pFVar9->_padding_ + 0x70))(pFVar9);
    if (cVar7 != '\0') {
      (**(code **)(pFVar9->_padding_ + 0x88))(pFVar9,pUVar4,puVar10);
      goto LAB_14d65c4f3;
    }
    if (pFVar9->ArrayDim < 1) {
      uVar14 = 0;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (pUVar4 == (UBlueprintCameraNodeEvaluator *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    _Dst = (uchar *)((longlong)&pUVar4->_padding_ + (longlong)pFVar9->Offset_Internal);
    if (_Dst == puVar10) goto LAB_14d65c4f3;
    if (((uint)(int)pFVar9->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(pFVar9->_padding_ + 0xf0))(pFVar9,_Dst,puVar10,pFVar9->ArrayDim,uVar14);
      pFVar12 = pFVar12 + 4;
    }
    else {
      memcpy(_Dst,puVar10,(longlong)pFVar9->ElementSize * (longlong)pFVar9->ArrayDim);
      pFVar12 = pFVar12 + 4;
    }
  } while( true );
}

// GetTypeID @ 14d661b40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraObjectTypeID * __thiscall
UE::Cameras::FBlueprintCameraNodeEvaluator::GetTypeID(FBlueprintCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d662d20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FBlueprintCameraNodeEvaluator::IsKindOf
          (FBlueprintCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FBlueprintCameraNodeEvaluator>)param_1->ID != PrivateTypeID
      ) && ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
            FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnAddReferencedObjects @ 14d663650

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlueprintCameraNodeEvaluator::OnAddReferencedObjects
          (FBlueprintCameraNodeEvaluator *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d663663. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->EvaluatorBlueprint,0,0);
  return;
}

// OnBuildDebugBlocks @ 14d664740

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlueprintCameraNodeEvaluator::OnBuildDebugBlocks
          (FBlueprintCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  FCameraDebugBlock *pFVar1;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  bool bVar2;
  FCameraDebugBlock *pFVar3;
  UClass *pUVar4;
  longlong lVar5;
  FName local_res8;
  undefined1 local_28 [12];
  int iStack_1c;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar3 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x38,8);
  lVar5 = 0;
  pFVar1 = pFVar3 + 1;
  pFVar1->_padding_ = 0;
  (pFVar3->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar3->Attachments).ArrayNum = 0;
  (pFVar3->Attachments).ArrayMax = 0;
  (pFVar3->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar3->Children).ArrayNum = 0;
  (pFVar3->Children).ArrayMax = 0;
  pFVar3[1].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar3->_padding_ = (longlong)&___7FBlueprintCameraDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar3);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,pFVar3);
  if (this->_padding_ != 0) {
    pUVar4 = UBlueprintCameraNode::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar2) {
      lVar5 = this->_padding_;
    }
  }
  if (*(longlong *)(lVar5 + 0x40) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x40) + 0x10);
    if (lVar5 == 0) {
      ::FString::FString((FString *)local_28,L"None");
    }
    else {
      local_res8 = *(FName *)(lVar5 + 0x18);
      ::FName::ToString(&local_res8,(FString *)local_28);
    }
    if (pFVar1 != (FCameraDebugBlock *)local_28) {
      if ((void *)pFVar1->_padding_ != (void *)0x0) {
        FMemory::Free((void *)pFVar1->_padding_);
      }
      pFVar1->_padding_ = local_28._0_8_;
      *(undefined4 *)&pFVar3[1].Attachments.AllocatorInstance.Data = local_28._8_4_;
      *(int *)((longlong)&pFVar3[1].Attachments.AllocatorInstance.Data + 4) = iStack_1c;
      stack0xffffffffffffffe0 = (FScriptContainerElement *)0x0;
      local_28._0_8_ = (FScriptContainerElement *)0x0;
    }
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  return;
}

// OnInitialize @ 14d6678e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlueprintCameraNodeEvaluator::OnInitialize
          (FBlueprintCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  int iVar1;
  UBlueprintCameraNode *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UBlueprintCameraNodeEvaluator *pUVar7;
  UFunction *pUVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  FName local_res20;
  FString local_78;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  if (this->_padding_ != 0) {
    pUVar5 = UBlueprintCameraNode::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar5);
    if ((bVar4) &&
       (pUVar2 = (UBlueprintCameraNode *)this->_padding_, pUVar2 != (UBlueprintCameraNode *)0x0)) {
      pUVar7 = (pUVar2->CameraNodeEvaluatorTemplate).field0_0x0.DebugPtr;
      if (pUVar7 == (UBlueprintCameraNodeEvaluator *)0x0) {
        if ((byte)LogCameraSystem._0_1_ < 2) {
          return;
        }
        local_res20 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_res20,&local_78);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
        if (local_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
        return;
      }
      pwVar10 = L"";
      if (((param_1->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar6 = FWeakObjectPtr::Get(&(((param_1->EvaluationContext).Object)->WeakOwner).WeakPtr);
      pUVar7 = (UBlueprintCameraNodeEvaluator *)
               StaticDuplicateObject
                         ((UObject *)pUVar7,pUVar6,(FName)0x0,
                          RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                          RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                          RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                          RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                          RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                          RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                          RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                          RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                          RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|
                          RF_Public,(UClass *)0x0,Normal,
                          PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                          ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                          AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                          ReachabilityFlag0);
      if (pUVar7 == (UBlueprintCameraNodeEvaluator *)0x0) {
        pFVar9 = GetTypeName<UBlueprintCameraNodeEvaluator>(&local_58);
        if ((pFVar9->Data).ArrayNum != 0) {
          pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar10);
      }
      pUVar5 = UBlueprintCameraNodeEvaluator::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable((UObject *)pUVar7);
        }
        (this->EvaluatorBlueprint).field0_0x0.DebugPtr = pUVar7;
        ApplyParameterOverrides(this,&param_2->VariableTable,&param_2->ContextDataTable);
        pUVar7 = (this->EvaluatorBlueprint).field0_0x0.DebugPtr;
        if ((pUVar7->BlueprintNode != (UBlueprintCameraNode *)0x0) &&
           (bVar4 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_5807300082072026948>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Utility\\BlueprintCameraNode.cpp"
                               ,0xbc,"BlueprintNode == nullptr"), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar7->BlueprintNode = pUVar2;
        local_68.Object = (param_1->EvaluationContext).Object;
        local_68.SharedReferenceCount.ReferenceController =
             (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UBlueprintCameraNodeEvaluator::SetupExecution(pUVar7,&local_68,param_2);
        pUVar7->bIsFirstFrame = true;
        pUVar8 = UObject::FindFunctionChecked
                           ((UObject *)pUVar7,
                            NAME_UBlueprintCameraNodeEvaluator_InitializeCameraNode);
        (**(code **)(pUVar7->_padding_ + 0x260))(pUVar7,pUVar8,0);
        UBlueprintCameraNodeEvaluator::TeardownExecution(pUVar7);
        return;
      }
      pFVar9 = GetTypeName<UBlueprintCameraNodeEvaluator>(&local_48);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      pFVar9 = GetFullNameForCastLogError<UObject>(&local_38,(UObject *)pUVar7);
      if ((pFVar9->Data).ArrayNum != 0) {
        pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar10,pwVar11);
    }
  }
  bVar4 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5807300082072027066>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Utility\\BlueprintCameraNode.cpp"
                     ,0x46,"BlueprintNode");
  if (!bVar4) {
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// OnRun @ 14d66b590

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlueprintCameraNodeEvaluator::OnRun
          (FBlueprintCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  UBlueprintCameraNodeEvaluator *this_00;
  UFunction *pUVar1;
  float local_res8 [2];
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_18;
  
  if ((this->EvaluatorBlueprint).field0_0x0.DebugPtr != (UBlueprintCameraNodeEvaluator *)0x0) {
    ApplyParameterOverrides(this,&param_2->VariableTable,&param_2->ContextDataTable);
    local_18.Object = (param_1->EvaluationContext).Object;
    this_00 = (this->EvaluatorBlueprint).field0_0x0.DebugPtr;
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UBlueprintCameraNodeEvaluator::SetupExecution(this_00,&local_18,param_2);
    this_00->bIsFirstFrame = param_1->bIsFirstFrame;
    this_00->bIsActiveCameraRig = param_1->bIsActiveCameraRig;
    local_res8[0] = param_1->DeltaTime;
    pUVar1 = UObject::FindFunctionChecked
                       ((UObject *)this_00,NAME_UBlueprintCameraNodeEvaluator_TickCameraNode);
    (**(code **)(this_00->_padding_ + 0x260))(this_00,pUVar1,local_res8);
    UBlueprintCameraNodeEvaluator::TeardownExecution(this_00);
  }
  return;
}

