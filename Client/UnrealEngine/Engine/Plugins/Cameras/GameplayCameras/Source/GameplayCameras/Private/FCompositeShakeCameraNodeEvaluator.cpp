// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// GetTypeID @ 14d661ba0

FCameraObjectTypeID * __thiscall
UE::Cameras::FCompositeShakeCameraNodeEvaluator::GetTypeID(FCompositeShakeCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d662e00

bool __thiscall
UE::Cameras::FCompositeShakeCameraNodeEvaluator::IsKindOf
          (FCompositeShakeCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator> TVar1;
  
  TVar1 = (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID;
  if (((TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)PrivateTypeID) &&
      (TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)
                FShakeCameraNodeEvaluator::PrivateTypeID)) &&
     (TVar1 != FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuild @ 14d6637b0

void __thiscall
UE::Cameras::FCompositeShakeCameraNodeEvaluator::OnBuild
          (FCompositeShakeCameraNodeEvaluator *this,FCameraNodeEvaluatorBuildParams *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  UClass *pUVar9;
  FCameraNodeEvaluator *pFVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 local_res8 [8];
  FCameraNodeEvaluator *local_38 [2];
  
  lVar11 = 0;
  if (this->_padding_ != 0) {
    pUVar9 = UCompositeShakeCameraNode::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar9);
    if (bVar6) {
      lVar11 = this->_padding_;
    }
  }
  puVar12 = *(undefined8 **)(lVar11 + 0x38);
  iVar3 = *(int *)(lVar11 + 0x40);
  puVar2 = puVar12 + iVar3;
  while( true ) {
    while( true ) {
      if (*(int *)(lVar11 + 0x40) != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UShakeCameraNode>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (puVar12 == puVar2) {
        return;
      }
      pFVar10 = FCameraNodeEvaluatorBuildParams::BuildEvaluator(param_1,(UCameraNode *)*puVar12);
      if (pFVar10 != (FCameraNodeEvaluator *)0x0) break;
      local_38[0] = (FCameraNodeEvaluator *)0x0;
      puVar12 = puVar12 + 1;
    }
    cVar7 = (**(code **)(pFVar10->_padding_ + 8))(pFVar10,&FShakeCameraNodeEvaluator::PrivateTypeID)
    ;
    if ((cVar7 == '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsKindOf<Type>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraNodeEvaluator.h"
                           ,0x123,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this->ShakeEvaluators).AllocatorInstance.Data;
    local_38[0] = pFVar10;
    if (((pFVar4 <= (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 <
         pFVar4 + (longlong)(this->ShakeEvaluators).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar8 = (this->ShakeEvaluators).ArrayNum;
    piVar1 = &(this->ShakeEvaluators).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ShakeEvaluators).AllocatorInstance,piVar1);
    }
    puVar12 = puVar12 + 1;
    (this->ShakeEvaluators).ArrayNum = iVar8 + 1;
    *(FCameraNodeEvaluator **)((this->ShakeEvaluators).AllocatorInstance.Data + (longlong)iVar8 * 8)
         = local_38[0];
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// OnGetChildren @ 14d6673b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FCompositeShakeCameraNodeEvaluator::OnGetChildren
          (FCompositeShakeCameraNodeEvaluator *this,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar5;
  ForElementType<UE::Cameras::FCameraNodeEvaluator_*> FVar6;
  undefined1 auStackY_88 [32];
  TArray<UE::Cameras::FCameraNodeEvaluator_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  iVar1 = (this->ShakeEvaluators).ArrayNum;
  pFVar2 = (this->ShakeEvaluators).AllocatorInstance.Data;
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
  (__return_storage_ptr__->Storage)._padding_ = 0;
  *(undefined4 *)&(__return_storage_ptr__->Storage)._padding_ = 0;
  (__return_storage_ptr__->Storage).TypeIndex = '\0';
  local_48.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)0x0;
  local_48.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_48.ArrayMax = 4;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraNodeEvaluator_*>_>
              (8,8,iVar1,0,&local_48.AllocatorInstance,iVar1,&local_48.ArrayMax);
    FVar6 = (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)&local_48;
    if (local_48.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)0x0) {
      FVar6 = local_48.AllocatorInstance.SecondaryData;
    }
    ConstructItems<UE::Cameras::FCameraNodeEvaluator_*,UE::Cameras::FShakeCameraNodeEvaluator_*,int>
              ((void *)FVar6,(FShakeCameraNodeEvaluator **)pFVar2,iVar1);
  }
  TVariant<TArrayView<UE::Cameras::FCameraNodeEvaluator_*,int>,TArray<UE::Cameras::FCameraNodeEvaluator_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
  ::
  Set<TArray<UE::Cameras::FCameraNodeEvaluator_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
            (&__return_storage_ptr__->Storage,&local_48);
  if (local_48.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)0x0) {
    FMemory::Free((void *)local_48.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// OnRestartShake @ 14d669180

void __thiscall
UE::Cameras::FCompositeShakeCameraNodeEvaluator::OnRestartShake
          (FCompositeShakeCameraNodeEvaluator *this,FCameraNodeShakeRestartParams *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ShakeEvaluators).AllocatorInstance.Data;
  iVar2 = (this->ShakeEvaluators).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ShakeEvaluators).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FShakeCameraNodeEvaluator_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FShakeCameraNodeEvaluator::RestartShake(*(FShakeCameraNodeEvaluator **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// OnRun @ 14d66c750

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCompositeShakeCameraNodeEvaluator::OnRun
          (FCompositeShakeCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ShakeEvaluators).AllocatorInstance.Data;
  iVar2 = (this->ShakeEvaluators).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ShakeEvaluators).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FShakeCameraNodeEvaluator_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FCameraNodeEvaluator::Run(*(FCameraNodeEvaluator **)pFVar3,param_1,param_2);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// OnShakeResult @ 14d66eb10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCompositeShakeCameraNodeEvaluator::OnShakeResult
          (FCompositeShakeCameraNodeEvaluator *this,FCameraNodeShakeParams *param_1,
          FCameraNodeShakeResult *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  float fVar5;
  float fVar6;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->ShakeEvaluators).AllocatorInstance.Data;
  iVar2 = (this->ShakeEvaluators).ArrayNum;
  bVar3 = false;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  fVar6 = 0.0;
  while( true ) {
    if ((this->ShakeEvaluators).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FShakeCameraNodeEvaluator_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    FShakeCameraNodeEvaluator::ShakeResult(*(FShakeCameraNodeEvaluator **)pFVar4,param_1,param_2);
    fVar5 = param_2->ShakeTimeLeft;
    if (fVar5 < 0.0) {
      bVar3 = true;
      pFVar4 = pFVar4 + 8;
    }
    else {
      if (fVar5 <= fVar6) {
        fVar5 = fVar6;
      }
      pFVar4 = pFVar4 + 8;
      fVar6 = fVar5;
    }
  }
  if (bVar3) {
    param_2->ShakeTimeLeft = __real_bf800000;
  }
  else {
    param_2->ShakeTimeLeft = fVar6;
  }
  return;
}

