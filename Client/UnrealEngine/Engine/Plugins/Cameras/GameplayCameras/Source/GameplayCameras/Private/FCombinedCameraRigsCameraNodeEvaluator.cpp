// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// ApplyParameterOverrides @ 14d59a020

void __thiscall
UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator::ApplyParameterOverrides
          (FCombinedCameraRigsCameraNodeEvaluator *this,FCameraVariableTable *param_1,bool param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FCameraRigAssetReference *this_00;
  FCameraRigAssetReference *pFVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  if (this->_padding_ != 0) {
    pUVar3 = UCombinedCameraRigsCameraNode::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (bVar2) {
      lVar5 = this->_padding_;
      goto LAB_14d59a065;
    }
  }
  lVar5 = 0;
LAB_14d59a065:
  iVar1 = *(int *)(lVar5 + 0x40);
  this_00 = *(FCameraRigAssetReference **)(lVar5 + 0x38);
  pFVar4 = this_00 + iVar1;
  while( true ) {
    if (*(int *)(lVar5 + 0x40) != iVar1) {
      `TCheckedPointerIterator<FCameraRigAssetReference_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (this_00 == pFVar4) break;
    FCameraRigAssetReference::ApplyParameterOverridesImpl
              (this_00,param_1,(FCameraContextDataTable *)0x0,param_2);
    this_00 = this_00 + 1;
  }
  return;
}

// GetTypeID @ 14d5abbf0

FCameraObjectTypeID * __thiscall
UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator::GetTypeID
          (FCombinedCameraRigsCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b4800

bool __thiscall
UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator::IsKindOf
          (FCombinedCameraRigsCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuild @ 14d5b7db0

void __thiscall
UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator::OnBuild
          (FCombinedCameraRigsCameraNodeEvaluator *this,FCameraNodeEvaluatorBuildParams *param_1)

{
  int *piVar1;
  int iVar2;
  UCameraNode *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  FCameraNodeEvaluator *local_38 [2];
  
  if (this->_padding_ != 0) {
    pUVar8 = UCombinedCameraRigsCameraNode::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar8);
    if (bVar6) {
      lVar9 = this->_padding_;
      goto LAB_14d5b7df0;
    }
  }
  lVar9 = 0;
LAB_14d5b7df0:
  iVar2 = *(int *)(lVar9 + 0x40);
  lVar10 = *(longlong *)(lVar9 + 0x38);
  lVar11 = (longlong)iVar2 * 0x130 + lVar10;
  while( true ) {
    if (*(int *)(lVar9 + 0x40) != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FCameraRigAssetReference_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (lVar10 == lVar11) break;
    if ((*(longlong *)(lVar10 + 0x38) != 0) &&
       (pUVar3 = *(UCameraNode **)(*(longlong *)(lVar10 + 0x38) + 200), pUVar3 != (UCameraNode *)0x0
       )) {
      local_38[0] = FCameraNodeEvaluatorBuildParams::BuildEvaluator(param_1,pUVar3);
      if (local_38[0] != (FCameraNodeEvaluator *)0x0) {
        pFVar4 = (this->CameraRigRootEvaluators).AllocatorInstance.Data;
        if ((pFVar4 <= (FScriptContainerElement *)local_38) &&
           ((FScriptContainerElement *)local_38 <
            pFVar4 + (longlong)(this->CameraRigRootEvaluators).ArrayMax * 8)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar7 = (this->CameraRigRootEvaluators).ArrayNum;
        piVar1 = &(this->CameraRigRootEvaluators).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->CameraRigRootEvaluators).AllocatorInstance,piVar1);
        }
        (this->CameraRigRootEvaluators).ArrayNum = iVar7 + 1;
        *(FCameraNodeEvaluator **)
         ((this->CameraRigRootEvaluators).AllocatorInstance.Data + (longlong)iVar7 * 8) =
             local_38[0];
      }
    }
    lVar10 = lVar10 + 0x130;
  }
  return;
}

// OnBuildDebugBlocks @ 14d5b8270

void __thiscall
UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator::OnBuildDebugBlocks
          (FCombinedCameraRigsCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  FCameraNodeEvaluator *this_00;
  UCameraNode *this_01;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_02;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FCameraDebugBlock *pFVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  int iVar9;
  int iVar10;
  longlong local_res8;
  FName local_res20;
  FString local_58;
  
  uVar7 = 0;
  if (0 < (this->CameraRigRootEvaluators).ArrayNum) {
    local_res8 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar7 < (this->CameraRigRootEvaluators).ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar8.Data = (FScriptContainerElement *)0x0;
      this_00 = *(FCameraNodeEvaluator **)
                 ((this->CameraRigRootEvaluators).AllocatorInstance.Data + local_res8);
      if (this_00 != (FCameraNodeEvaluator *)0x0) {
        this_01 = (this_00->PrivateCameraNode).field0_0x0.DebugPtr;
        iVar10 = 0;
        if (this_01 != (UCameraNode *)0x0) {
          pUVar4 = UCameraRigAsset::StaticClass();
          pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_01,pUVar4);
          FVar8.Data = (FScriptContainerElement *)0x0;
          iVar10 = 0;
          if (pUVar5 != (UObject *)0x0) {
            local_res20.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
            local_res20.Number = *(uint *)&pUVar5->field_0x1c;
            ::FName::ToString(&local_res20,&local_58);
            FVar8.Data = local_58.Data.AllocatorInstance.Data;
            iVar10 = local_58.Data.ArrayNum;
            local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_58.Data.ArrayNum = 0;
            local_58.Data.ArrayMax = 0;
          }
        }
        this_02 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
        pFVar6 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                           (this_02,0x40,8);
        pFVar6[1]._padding_ = 0;
        (pFVar6->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar6->Attachments).ArrayNum = 0;
        (pFVar6->Attachments).ArrayMax = 0;
        (pFVar6->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar6->Children).ArrayNum = 0;
        (pFVar6->Children).ArrayMax = 0;
        pFVar6->_padding_ = (longlong)&___7FCombinedCameraRigCameraDebugBlock_Cameras_UE__6B_;
        pFVar6[1].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar6[1].Attachments.ArrayNum = 0;
        pFVar6[1].Attachments.ArrayMax = 0;
        TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
                  (this_02,pFVar6);
        FCameraDebugBlockBuilder::OnStartChildDebugBlock(param_2,pFVar6);
        iVar9 = iVar10 + -1;
        *(uint *)&pFVar6[1]._padding_ = uVar7;
        if (iVar10 == 0) {
          iVar9 = 0;
        }
        ::FString::AssignRange((FString *)&pFVar6[1].Attachments,(wchar_t *)FVar8.Data,iVar9);
        FCameraNodeEvaluator::BuildDebugBlocks(this_00,param_1,param_2);
        FCameraDebugBlockBuilder::EndChildDebugBlock(param_2);
        if (FVar8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar8.Data);
        }
      }
      uVar7 = uVar7 + 1;
      local_res8 = local_res8 + 8;
    } while ((int)uVar7 < (this->CameraRigRootEvaluators).ArrayNum);
  }
  param_2->VisitFlags = param_2->VisitFlags | SkipChildren;
  return;
}

// OnGetChildren @ 14d5c1dd0

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator::OnGetChildren
          (FCombinedCameraRigsCameraNodeEvaluator *this,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar5;
  undefined4 uStack_c;
  
  pFVar2 = (this->CameraRigRootEvaluators).AllocatorInstance.Data;
  iVar1 = (this->CameraRigRootEvaluators).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)(*pcVar3)();
      return pTVar5;
    }
  }
  (__return_storage_ptr__->Storage)._padding_ = (longlong)pFVar2;
  (__return_storage_ptr__->Storage)._padding_ = CONCAT44(uStack_c,iVar1);
  (__return_storage_ptr__->Storage).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// OnInitialize @ 14d5c2370

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator::OnInitialize
          (FCombinedCameraRigsCameraNodeEvaluator *this,
          FCameraNodeEvaluatorInitializeParams *param_1,FCameraNodeEvaluationResult *param_2)

{
  ApplyParameterOverrides(this,&param_2->VariableTable,false);
  return;
}

// OnRun @ 14d5c29c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator::OnRun
          (FCombinedCameraRigsCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  ApplyParameterOverrides(this,&param_2->VariableTable,true);
  pFVar3 = (this->CameraRigRootEvaluators).AllocatorInstance.Data;
  iVar2 = (this->CameraRigRootEvaluators).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->CameraRigRootEvaluators).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FCameraNodeEvaluator_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FCameraNodeEvaluator::Run(*(FCameraNodeEvaluator **)pFVar3,param_1,param_2);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

