// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// ForEachEntity @ 1467913b0

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
UE::MovieScene::FEvaluateConstraintChannels::ForEachEntity
          (FEvaluateConstraintChannels *this,UObject *param_1,FInstanceHandle param_2,
          FConstraintComponentData *param_3,FFrameTime param_4)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  longlong lVar4;
  UTransformableHandle *pUVar5;
  UMovieSceneConstraintSystem *pUVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  FConstraintAndActiveChannel *pFVar11;
  UTickableTransformConstraint *this_00;
  UClass *pUVar12;
  UTransformableComponentHandle *pUVar13;
  FWeakObjectPtr *pFVar14;
  USceneComponent *pUVar15;
  longlong *plVar16;
  longlong lVar17;
  char local_res20 [8];
  UObject *local_78;
  UTickableTransformConstraint *local_70;
  UTransformableHandle *local_68;
  undefined1 local_60 [8];
  FWeakObjectPtr local_58;
  FWeakObjectPtr FStack_50;
  undefined8 local_48;
  TReferenceControllerBase<1> *local_40;
  undefined8 local_38;
  TReferenceControllerBase<1> *local_30;
  
  plVar16 = &param_3->Section->_padding_;
  pFVar11 = (FConstraintAndActiveChannel *)(**(code **)(*plVar16 + 0x18))(plVar16,param_3);
  if (pFVar11 == (FConstraintAndActiveChannel *)0x0) {
    return;
  }
  this_00 = (UTickableTransformConstraint *)::CreateConstraintIfNeeded(this->World,pFVar11);
  if (this_00 == (UTickableTransformConstraint *)0x0) {
    return;
  }
  lVar17 = ((ulonglong)(uint)param_2 & 0xffff) * 0x140 +
           *(longlong *)&this->InstanceRegistry->Instances;
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar17 + 0x120);
  uVar3 = *(undefined8 *)(lVar17 + 0x118);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res20[0] = '\0';
  (**(code **)(*(longlong *)&pFVar11->ActiveChannel + 0xa0))(pFVar11,param_4,local_res20);
  (**(code **)(this_00->_padding_ + 0x2c8))(this_00,local_res20[0]);
  pUVar12 = Z_Construct_UClass_UTickableTransformConstraint_NoRegister();
  iVar10 = (int)pUVar12->_padding_;
  if ((*(int *)(this_00->_padding_ + 0x38) < iVar10) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar10 * 8)
      != &pUVar12->_padding_)) {
    lVar4 = this_00->_padding_;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = uVar3;
    local_30 = pTVar2;
    (**(code **)(lVar4 + 0x2e0))(this_00,*(undefined4 *)(lVar17 + 0x128),&local_38,0);
    goto LAB_146791739;
  }
  (**(code **)(this_00->_padding_ + 0x300))(this_00,this->World);
  lVar4 = this_00->_padding_;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = uVar3;
  local_40 = pTVar2;
  (**(code **)(lVar4 + 0x2e0))(this_00,*(undefined4 *)(lVar17 + 0x128),&local_48,0);
  if (((local_res20[0] != '\0') && (bVar8 = TransformableHandleUtils::SkipTicking(), bVar8)) &&
     (pUVar13 = Cast<UTransformableComponentHandle,UTransformableHandle>(&this_00->ParentTRSHandle),
     pUVar13 != (UTransformableComponentHandle *)0x0)) {
    pUVar5 = (this_00->ParentTRSHandle).field0_0x0.DebugPtr;
    if (((pUVar5 == (UTransformableHandle *)0x0) || (((uint)pUVar5->_padding_ >> 0x1e & 1) != 0)) ||
       (pUVar5 = (this_00->ParentTRSHandle).field0_0x0.DebugPtr,
       cVar9 = (**(code **)(pUVar5->_padding_ + 0x2b0))(pUVar5,1), cVar9 == '\0')) {
LAB_146791577:
      pUVar15 = (USceneComponent *)0x0;
    }
    else {
      pUVar5 = (this_00->ParentTRSHandle).field0_0x0.DebugPtr;
      pFVar14 = (FWeakObjectPtr *)(**(code **)(pUVar5->_padding_ + 0x330))(pUVar5,local_60);
      pUVar15 = (USceneComponent *)FWeakObjectPtr::Get(pFVar14);
      if (pUVar15 == (USceneComponent *)0x0) goto LAB_146791577;
      pUVar12 = Z_Construct_UClass_USceneComponent_NoRegister();
      iVar10 = (int)pUVar12->_padding_;
      if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar10) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
          &pUVar12->_padding_)) goto LAB_146791577;
    }
    TransformableHandleUtils::MarkComponentForEvaluation(pUVar15,true);
  }
  if ((this_00->ChildTRSHandle).field0_0x0.DebugPtr == (UTransformableHandle *)0x0)
  goto LAB_146791739;
  pUVar12 = Z_Construct_UClass_UTransformableComponentHandle_NoRegister();
  bVar8 = FObjectPtr::IsA((FObjectPtr *)&this_00->ChildTRSHandle,pUVar12);
  if ((!bVar8) ||
     (pUVar5 = (this_00->ChildTRSHandle).field0_0x0.DebugPtr, pUVar5 == (UTransformableHandle *)0x0)
     ) goto LAB_146791739;
  if (param_1 == (UObject *)0x0) {
LAB_1467915e6:
    param_1 = (UObject *)0x0;
  }
  else {
    pUVar12 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar10 = (int)pUVar12->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar10) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
        &pUVar12->_padding_)) goto LAB_1467915e6;
  }
  local_78 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(pUVar5 + 1),(FObjectPtr)&local_78);
  local_58.ObjectIndex = 0;
  local_58.ObjectSerialNumber = 0;
  FStack_50.ObjectIndex = 0;
  FStack_50.ObjectSerialNumber = 0;
  local_70 = this_00;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)this_00);
  }
  FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_70);
  local_68 = pUVar5;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)pUVar5);
  }
  FWeakObjectPtr::operator=(&FStack_50,(FObjectPtr)&local_68);
  pUVar6 = this->System;
  pFVar14 = (FWeakObjectPtr *)(pUVar6->DynamicOffsets).AllocatorInstance.Data;
  if (((pFVar14 <= &local_58) &&
      (&local_58 < pFVar14 + (longlong)(pUVar6->DynamicOffsets).ArrayMax * 2)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = (pUVar6->DynamicOffsets).ArrayNum;
  piVar1 = &(pUVar6->DynamicOffsets).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&(pUVar6->DynamicOffsets).AllocatorInstance,piVar1);
  }
  (pUVar6->DynamicOffsets).ArrayNum = iVar10 + 1;
  pFVar14 = (FWeakObjectPtr *)
            ((pUVar6->DynamicOffsets).AllocatorInstance.Data + (longlong)iVar10 * 0x10);
  *pFVar14 = local_58;
  pFVar14[1] = FStack_50;
  UTickableTransformConstraint::EnsurePrimaryDependency(this_00,this->World);
LAB_146791739:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// PreTask @ 1467b4500

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
UE::MovieScene::FEvaluateConstraintChannels::PreTask(FEvaluateConstraintChannels *this)

{
  UMovieSceneConstraintSystem *pUVar1;
  
  pUVar1 = this->System;
  (pUVar1->DynamicOffsets).ArrayNum = 0;
  if ((pUVar1->DynamicOffsets).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(pUVar1->DynamicOffsets).AllocatorInstance,0,
               &(pUVar1->DynamicOffsets).ArrayMax);
  }
  return;
}

