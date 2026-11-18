// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// BuildDebugBlocks @ 14d59b2d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FRootCameraDebugBlock::BuildDebugBlocks
          (FRootCameraDebugBlock *this,FCameraSystemEvaluator *param_1,
          FCameraDebugBlockBuildParams *param_2,FCameraDebugBlockBuilder *param_3)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCameraEvaluationService *this_00;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *pTVar3;
  UWorld *pUVar4;
  code *pcVar5;
  FCameraPose *pFVar6;
  bool bVar7;
  char cVar8;
  FCategoryTitleDebugBlock *pFVar9;
  FCameraDirectorTreeDebugBlock *this_01;
  FCameraPoseDebugBlock *pFVar10;
  FCameraEvaluationServiceDebugBlock *pFVar11;
  FCameraDebugBlock *pFVar12;
  FVariableTableDebugBlock *pFVar13;
  FContextDataTableDebugBlock *pFVar14;
  FPostProcessSettingsDebugBlock *pFVar15;
  FPlayerControllersDebugBlock *this_02;
  UObject *pUVar16;
  UWorld *pUVar17;
  UWorld *pUVar18;
  ForAnyElementType FVar19;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *pTVar20;
  undefined1 local_res20 [8];
  undefined1 local_68 [8];
  FCameraPose *local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_48;
  
  iVar1 = (int)this->_padding_;
  if (iVar1 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
code_r0x00014d59b358:
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (iVar1 == 0) {
    iVar1 = (int)this->_padding_;
    if (iVar1 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) goto code_r0x00014d59b358;
    }
    else if (iVar1 == 0) goto LAB_14d59b36a;
  }
  local_res20[0] = 0;
  `UE::Cameras::FRootCameraDebugBlock::BuildDebugBlocks'::__l2::<lambda_1>::operator()(local_res20);
LAB_14d59b36a:
  (this->DebugID).Value = (param_1->DebugID).Value;
  pFVar9 = FCameraDebugBlockBuilder::StartChildDebugBlock<UE::Cameras::FCategoryTitleDebugBlock>
                     (param_3);
  ::FString::operator=(&pFVar9->Title,L"Camera Directors");
  ::FString::operator=(&pFVar9->Category,&FCameraDebugCategories::DirectorTree);
  this_01 = FCameraDebugBlockBuilder::
            StartChildDebugBlock<UE::Cameras::FCameraDirectorTreeDebugBlock>(param_3);
  FCameraDirectorTreeDebugBlock::Initialize(this_01,&param_1->ContextStack,param_3);
  FCameraDebugBlockBuilder::EndChildDebugBlock(param_3);
  FCameraDebugBlockBuilder::EndChildDebugBlock(param_3);
  pFVar9 = FCameraDebugBlockBuilder::StartChildDebugBlock<UE::Cameras::FCategoryTitleDebugBlock>
                     (param_3);
  ::FString::operator=(&pFVar9->Title,L"Camera Nodes");
  ::FString::operator=(&pFVar9->Category,&FCameraDebugCategories::NodeTree);
  if (param_1->RootEvaluator != (FRootCameraNodeEvaluator *)0x0) {
    FCameraNodeEvaluator::BuildDebugBlocks
              ((FCameraNodeEvaluator *)param_1->RootEvaluator,param_2,param_3);
  }
  local_60 = &(param_1->Result).CameraPose;
  pFVar10 = FCameraDebugBlockBuilder::
            BuildDebugBlock<UE::Cameras::FCameraPoseDebugBlock,FCameraPose_const_&>
                      (param_3,local_60);
  pFVar10->bDrawText = false;
  FCameraDebugBlock::AddChild((FCameraDebugBlock *)pFVar9,(FCameraDebugBlock *)pFVar10);
  FCameraDebugBlockBuilder::EndChildDebugBlock(param_3);
  pFVar9 = FCameraDebugBlockBuilder::StartChildDebugBlock<UE::Cameras::FCategoryTitleDebugBlock>
                     (param_3);
  ::FString::operator=(&pFVar9->Title,L"Services");
  ::FString::operator=(&pFVar9->Category,&FCameraDebugCategories::Services);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if ((TArray<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,TSizedDefaultAllocator<32>_> *)
      &local_58 != &param_1->EvaluationServices) {
    DestructItems<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int>
              ((TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *)0x0,0);
    iVar1 = (param_1->EvaluationServices).ArrayNum;
    pTVar20 = (TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *)
              (param_1->EvaluationServices).AllocatorInstance.Data;
    local_50 = CONCAT44(local_50._4_4_,iVar1);
    if ((iVar1 == 0) && (local_50._4_4_ == 0)) {
      local_50 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,local_50._4_4_,&local_58,iVar1,(int *)((longlong)&local_50 + 4));
      ConstructItems<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int>
                (local_58.Data,pTVar20,iVar1);
    }
  }
  iVar1 = (int)local_50;
  pTVar20 = (TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *)
            (local_58.Data + (longlong)(int)local_50 * 0x10);
  FVar19.Data = local_58.Data;
  while( true ) {
    if ((int)local_50 != iVar1) {
      local_68[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_68);
    }
    if ((TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *)FVar19.Data == pTVar20) {
      DestructItems<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int>
                ((TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *)local_58.Data,(int)local_50)
      ;
      if ((TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *)local_58.Data !=
          (TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *)0x0) {
        FMemory::Free(local_58.Data);
      }
      FCameraDebugBlockBuilder::EndChildDebugBlock(param_3);
      pFVar9 = FCameraDebugBlockBuilder::StartChildDebugBlock<UE::Cameras::FCategoryTitleDebugBlock>
                         (param_3);
      ::FString::operator=(&pFVar9->Title,L"Evaluated Camera");
      ::FString::operator=(&pFVar9->Category,&FCameraDebugCategories::PoseStats);
      pTVar3 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_3->Storage;
      pFVar12 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                          (pTVar3,0x30,8);
      pUVar17 = (UWorld *)0x0;
      (pFVar12->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar12->Attachments).ArrayNum = 0;
      (pFVar12->Attachments).ArrayMax = 0;
      (pFVar12->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar12->Children).ArrayNum = 0;
      (pFVar12->Children).ArrayMax = 0;
      pFVar12->_padding_ = (longlong)&___7FCameraNodeEvaluationResultDebugBlock_Cameras_UE__6B_;
      TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
                (pTVar3,pFVar12);
      FCameraDebugBlock::AddChild((FCameraDebugBlock *)pFVar9,pFVar12);
      pFVar6 = local_60;
      *(undefined1 *)&pFVar12[1]._padding_ = *(undefined1 *)&local_60[0x10].ISO;
      *(undefined1 *)((longlong)&pFVar12[1]._padding_ + 1) =
           *(undefined1 *)((longlong)&local_60[0x10].ISO + 1);
      pFVar10 = FCameraDebugBlockBuilder::
                BuildDebugBlock<UE::Cameras::FCameraPoseDebugBlock,FCameraPose_const_&>
                          (param_3,local_60);
      FCameraDebugBlock::AddChild(pFVar12,(FCameraDebugBlock *)pFVar10);
      pFVar13 = FCameraDebugBlockBuilder::
                BuildDebugBlock<UE::Cameras::FVariableTableDebugBlock,UE::Cameras::FCameraVariableTable_const_&>
                          (param_3,(FCameraVariableTable *)(pFVar6 + 1));
      FCameraDebugBlock::AddChild(pFVar12,(FCameraDebugBlock *)pFVar13);
      pFVar14 = FCameraDebugBlockBuilder::
                BuildDebugBlock<UE::Cameras::FContextDataTableDebugBlock,UE::Cameras::FCameraContextDataTable_const_&>
                          (param_3,(FCameraContextDataTable *)&pFVar6[1].NearClippingPlane);
      FCameraDebugBlock::AddChild(pFVar12,(FCameraDebugBlock *)pFVar14);
      pFVar15 = FCameraDebugBlockBuilder::
                BuildDebugBlock<UE::Cameras::FPostProcessSettingsDebugBlock,UE::Cameras::FPostProcessSettingsCollection_const_&>
                          (param_3,(FPostProcessSettingsCollection *)&pFVar6[2].ISO);
      FCameraDebugBlock::AddChild(pFVar12,(FCameraDebugBlock *)pFVar15);
      iVar1 = (pFVar12->Children).ArrayNum;
      pUVar18 = pUVar17;
      if (iVar1 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (0 < iVar1) {
        pUVar4 = *(UWorld **)(pFVar12->Children).AllocatorInstance.Data;
        cVar8 = (**(code **)(pUVar4->_padding_ + 8))(pUVar4,&FCameraPoseDebugBlock::PrivateTypeID);
        if (cVar8 != '\0') {
          pUVar18 = pUVar4;
        }
      }
      ::FString::operator=
                ((FString *)&(pUVar18->StreamingLevelsToConsider).LevelsToProcess,
                 L"GameplayCameras.Debug.PoseStats.ShowUnchanged");
      iVar1 = (pFVar12->Children).ArrayNum;
      pUVar18 = pUVar17;
      if (iVar1 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (1 < iVar1) {
        pUVar4 = *(UWorld **)((pFVar12->Children).AllocatorInstance.Data + 8);
        cVar8 = (**(code **)(pUVar4->_padding_ + 8))
                          (pUVar4,&FVariableTableDebugBlock::PrivateTypeID);
        if (cVar8 != '\0') {
          pUVar18 = pUVar4;
        }
      }
      ::FString::operator=
                ((FString *)&pUVar18->NetDriver,L"GameplayCameras.Debug.PoseStats.ShowVariableIDs");
      iVar1 = (pFVar12->Children).ArrayNum;
      pUVar18 = pUVar17;
      if (iVar1 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (2 < iVar1) {
        pUVar4 = *(UWorld **)((pFVar12->Children).AllocatorInstance.Data + 0x10);
        cVar8 = (**(code **)(pUVar4->_padding_ + 8))
                          (pUVar4,&FContextDataTableDebugBlock::PrivateTypeID);
        if (cVar8 != '\0') {
          pUVar18 = pUVar4;
        }
      }
      ::FString::operator=
                ((FString *)&pUVar18->NetDriver,L"GameplayCameras.Debug.PoseStats.ShowDataIDs");
      pTVar3 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_3->Storage;
      this_02 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                          (pTVar3,0x40,8);
      this_02->_padding_ = 0;
      this_02->_padding_ = 0;
      this_02->_padding_ = 0;
      this_02->_padding_ = 0;
      this_02->_padding_ = (longlong)&___7FPlayerControllersDebugBlock_Cameras_UE__6B_;
      (this_02->PlayerControllers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_02->PlayerControllers).ArrayNum = 0;
      (this_02->PlayerControllers).ArrayMax = 0;
      this_02->bHadValidWorld = false;
      TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
                (pTVar3,(FCameraDebugBlock *)this_02);
      FCameraDebugBlock::AddChild((FCameraDebugBlock *)pFVar9,(FCameraDebugBlock *)this_02);
      pUVar16 = FWeakObjectPtr::Get(&(param_1->WeakOwner).WeakPtr);
      if (pUVar16 != (UObject *)0x0) {
        pUVar17 = (UWorld *)(**(code **)(*(longlong *)pUVar16 + 0x180))(pUVar16);
      }
      FPlayerControllersDebugBlock::Initialize(this_02,pUVar17);
      FCameraDebugBlockBuilder::EndChildDebugBlock(param_3);
      pTVar3 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_3->Storage;
      pFVar12 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                          (pTVar3,0x28,8);
      (pFVar12->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar12->Attachments).ArrayNum = 0;
      (pFVar12->Attachments).ArrayMax = 0;
      (pFVar12->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar12->Children).ArrayNum = 0;
      (pFVar12->Children).ArrayMax = 0;
      pFVar12->_padding_ = (longlong)&___7FViewfinderDebugBlock_Cameras_UE__6B_;
      TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
                (pTVar3,pFVar12);
      FCameraDebugBlock::AddChild((FCameraDebugBlock *)this,pFVar12);
      return;
    }
    pTVar2 = (((TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *)FVar19.Data)->
             SharedReferenceCount).ReferenceController;
    this_00 = ((TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *)FVar19.Data)->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Object = this_00;
    local_48.SharedReferenceCount.ReferenceController = pTVar2;
    pFVar11 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
              BuildObject<UE::Cameras::FCameraEvaluationServiceDebugBlock,TSharedPtr<UE::Cameras::FCameraEvaluationService,1>_&>
                        ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_3->Storage,
                         &local_48);
    FCameraDebugBlockBuilder::OnStartChildDebugBlock(param_3,(FCameraDebugBlock *)pFVar11);
    if ((this_00 == (FCameraEvaluationService *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) break;
    FCameraEvaluationService::BuildDebugBlocks(this_00,param_2,param_3);
    FCameraDebugBlockBuilder::EndChildDebugBlock(param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FVar19.Data = FVar19.Data + 0x10;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// GetTypeID @ 14d5abc60

FCameraObjectTypeID * __thiscall
UE::Cameras::FRootCameraDebugBlock::GetTypeID(FRootCameraDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b48e0

bool __thiscall
UE::Cameras::FRootCameraDebugBlock::IsKindOf
          (FRootCameraDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FRootCameraDebugBlock>)param_1->ID != PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
      FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnSerialize @ 14d5c3920

void __thiscall
UE::Cameras::FRootCameraDebugBlock::OnSerialize(FRootCameraDebugBlock *this,FArchive *param_1)

{
  FCameraSystemDebugID *pFVar1;
  int *piVar2;
  
  pFVar1 = &this->DebugID;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    pFVar1->Value = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d5c3959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar1);
  return;
}

// RootDebugDraw @ 14d5cc730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UE::Cameras::FRootCameraDebugBlock::RootDebugDraw
          (FRootCameraDebugBlock *this,FRootCameraDebugDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  FCameraSystemDebugRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  FString *pFVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  FString local_110;
  undefined1 local_100 [8];
  TStringView<wchar_t> local_f8;
  undefined1 local_e8 [16];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_d8;
  FScriptContainerElement local_88 [64];
  FScriptContainerElement *local_48;
  uint local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  iVar3 = GGameplayCamerasDebugSystemID;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  bVar1 = param_1->bIsCameraManagerOrViewTarget;
  iVar2 = (this->DebugID).Value;
  if ((GGameplayCamerasDebugEnable) &&
     (((pFVar5 = FCameraSystemDebugRegistry::Get(), iVar3 == iVar2 || (iVar3 == 0x7fffffff)) ||
      ((iVar3 == 0 &&
       ((bVar1 != false ||
        (*(int *)&(pFVar5->Entries).field_0x8 - *(int *)&(pFVar5->Entries).field_0x34 == 1)))))))) {
    local_d8.Elements._0_8_ = 0;
    local_d8.Elements._8_8_ = 0;
    local_d8.Elements._32_8_ = 0;
    local_f8.Size = GGameplayCamerasDebugCategories.Data.ArrayNum + -1;
    if (GGameplayCamerasDebugCategories.Data.ArrayNum == 0) {
      local_f8.Size = 0;
    }
    local_d8.Elements._40_4_ = 0;
    local_100 = (undefined1  [8])local_88;
    local_e8._8_8_ = local_100;
    local_d8.Elements._44_4_ = 0x80;
    local_e8._0_8_ =
         Core::Private::Function::
         TFunctionRefCaller<`UE::String::ParseTokens<TArray<TStringView<wchar_t>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
         ::Call;
    local_d8.Elements._48_4_ = 0xffffffff;
    local_d8.Elements._52_4_ = 0;
    local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_d8.HashSize = 0;
    local_48 = (FScriptContainerElement *)0x0;
    local_40 = 0;
    local_3c = 4;
    local_f8.DataPtr = (wchar_t *)GGameplayCamerasDebugCategories.Data.AllocatorInstance.Data;
    String::ParseTokens(&local_f8,L',',(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_e8,
                        None);
    uVar4 = local_40;
    uVar8 = (ulonglong)(int)local_40;
    pFVar6 = local_88;
    if (local_48 != (FScriptContainerElement *)0x0) {
      pFVar6 = local_48;
    }
    pFVar9 = pFVar6 + uVar8 * 0x10;
    while( true ) {
      if ((uint)uVar8 != uVar4) {
        `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_118);
      }
      if (pFVar6 == pFVar9) break;
      local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_110.Data.ArrayNum = 0;
      local_110.Data.ArrayMax = 0;
      pFVar7 = ::FString::ConstructFromPtrSize
                         ((FString *)local_e8,*(wchar_t **)pFVar6,(int)*(undefined8 *)(pFVar6 + 8));
      if (&local_110 != pFVar7) {
        local_110.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_110.Data.ArrayNum = (pFVar7->Data).ArrayNum;
        local_110.Data.ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e8._0_8_);
      }
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                (&local_d8,(FString *)local_100,(bool *)&local_110);
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      uVar8 = (ulonglong)local_40;
      pFVar6 = pFVar6 + 0x10;
    }
    FCameraDebugColors::Set(&GGameplayCamerasDebugColorScheme);
    FCameraDebugBlock::DebugDraw
              ((FCameraDebugBlock *)this,(FCameraDebugBlockDrawParams *)&local_d8,param_2);
    if (GGameplayCamerasDebugDrawBackground != false) {
      FCameraDebugRenderer::DrawTextBackgroundTile(param_2,GGameplayCamerasDebugBackgroundOpacity);
    }
    if (local_48 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48);
    }
    local_d8.HashSize = 0;
    if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_d8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_d8.Elements);
  }
  return;
}

// ShouldDebugDraw @ 14d5cfee0

bool __cdecl
UE::Cameras::FRootCameraDebugBlock::ShouldDebugDraw(FCameraSystemDebugID param_1,bool param_2)

{
  int iVar1;
  FCameraSystemDebugRegistry *pFVar2;
  
  iVar1 = GGameplayCamerasDebugSystemID;
  if (!GGameplayCamerasDebugEnable) {
    return false;
  }
  pFVar2 = FCameraSystemDebugRegistry::Get();
  if (((iVar1 != param_1.Value) && (iVar1 != 0x7fffffff)) &&
     ((iVar1 != 0 ||
      ((!param_2 &&
       (*(int *)&(pFVar2->Entries).field_0x8 - *(int *)&(pFVar2->Entries).field_0x34 != 1)))))) {
    return false;
  }
  return true;
}

// operator() @ 150581fb0

bool __thiscall
`UE::Cameras::FRootCameraDebugBlock::BuildDebugBlocks'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5163722971050672059>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5163722971050672059>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

