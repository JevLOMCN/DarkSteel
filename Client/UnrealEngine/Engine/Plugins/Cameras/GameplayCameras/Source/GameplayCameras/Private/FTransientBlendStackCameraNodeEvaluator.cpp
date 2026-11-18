// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 15

// GetTypeID @ 14d558d60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraObjectTypeID * __thiscall
UE::Cameras::FTransientBlendStackCameraNodeEvaluator::GetTypeID
          (FTransientBlendStackCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d55a560

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FTransientBlendStackCameraNodeEvaluator::IsKindOf
          (FTransientBlendStackCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  TCameraObjectTypeID<UE::Cameras::FBlendStackCameraNodeEvaluator> TVar1;
  
  TVar1 = (TCameraObjectTypeID<UE::Cameras::FBlendStackCameraNodeEvaluator>)param_1->ID;
  if (((TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendStackCameraNodeEvaluator>)PrivateTypeID) &&
      (TVar1 != FBlendStackCameraNodeEvaluator::PrivateTypeID)) &&
     (TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendStackCameraNodeEvaluator>)
               FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d579380

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FTransientBlendStackCameraNodeEvaluator::OnInitialize
          (FTransientBlendStackCameraNodeEvaluator *this,
          FCameraNodeEvaluatorInitializeParams *param_1,FCameraNodeEvaluationResult *param_2)

{
  TSharedPtr<UE::Cameras::FCameraParameterSetterService,1> *pTVar1;
  TSharedPtr<UE::Cameras::FCameraParameterSetterService,1> local_18;
  
  FBlendStackCameraNodeEvaluator::OnInitialize
            ((FBlendStackCameraNodeEvaluator *)this,param_1,param_2);
  pTVar1 = FCameraSystemEvaluator::FindEvaluationService<UE::Cameras::FCameraParameterSetterService>
                     (param_1->Evaluator,&local_18);
  if (&this->ParameterSetterService != pTVar1) {
    (this->ParameterSetterService).Object = pTVar1->Object;
    pTVar1->Object = (FCameraParameterSetterService *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ParameterSetterService).SharedReferenceCount,&pTVar1->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// OnRun @ 14d5793f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FTransientBlendStackCameraNodeEvaluator::OnRun
          (FTransientBlendStackCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  TArray<UE::Cameras::FBlendStackCameraNodeEvaluator::FResolvedEntry,TSizedDefaultAllocator<32>_>
  local_a8;
  FResolvedEntry *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FResolvedEntry *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FResolvedEntry *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FResolvedEntry *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<UE::Cameras::FBlendStackCameraNodeEvaluator::FResolvedEntry,int> local_58;
  TArrayView<UE::Cameras::FBlendStackCameraNodeEvaluator::FResolvedEntry,int> local_48;
  TArrayView<UE::Cameras::FBlendStackCameraNodeEvaluator::FResolvedEntry,int> local_38;
  TArrayView<UE::Cameras::FBlendStackCameraNodeEvaluator::FResolvedEntry,int> local_28;
  
  if ((int)this->_padding_ != (this->EntryExtraInfos).ArrayNum) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8460252048816865068>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\TransientBlendStackCameraNode.cpp"
                       ,0xd4,"Entries.Num() == EntryExtraInfos.Num()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  FBlendStackCameraNodeEvaluator::ResolveEntries
            ((FBlendStackCameraNodeEvaluator *)this,param_1,&local_a8);
  iStack_90 = local_a8.ArrayNum;
  local_98 = (FResolvedEntry *)local_a8.AllocatorInstance.Data;
  if (local_a8.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_58._12_4_ = uStack_8c;
  local_58.ArrayNum = iStack_90;
  local_58.DataPtr = local_98;
  InternalPreBlendPrepare(this,&local_58,param_1,param_2);
  iStack_80 = local_a8.ArrayNum;
  local_88 = (FResolvedEntry *)local_a8.AllocatorInstance.Data;
  if (local_a8.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_48._12_4_ = uStack_7c;
  local_48.ArrayNum = iStack_80;
  local_48.DataPtr = local_88;
  InternalPreBlendExecute(this,&local_48,param_1,param_2);
  iStack_70 = local_a8.ArrayNum;
  local_78 = (FResolvedEntry *)local_a8.AllocatorInstance.Data;
  if (local_a8.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38._12_4_ = uStack_6c;
  local_38.ArrayNum = iStack_70;
  local_38.DataPtr = local_78;
  InternalUpdate(this,&local_38,param_1,param_2);
  iStack_60 = local_a8.ArrayNum;
  local_68 = (FResolvedEntry *)local_a8.AllocatorInstance.Data;
  if (local_a8.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28._12_4_ = uStack_5c;
  local_28.ArrayNum = iStack_60;
  local_28.DataPtr = local_68;
  InternalPostBlendExecute(this,&local_28,param_1,param_2);
  FBlendStackCameraNodeEvaluator::OnRunFinished((FBlendStackCameraNodeEvaluator *)this,param_2);
  pFVar5 = (this->EntryExtraInfos).AllocatorInstance.Data;
  iVar2 = (this->EntryExtraInfos).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->EntryExtraInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FTransientBlendStackCameraNodeEvaluator::FCameraRigEntryExtraInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    *(undefined4 *)pFVar5 = 0;
    pFVar5 = pFVar5 + 4;
  }
  DestructItems<UE::Cameras::FBlendStackCameraNodeEvaluator::FResolvedEntry,int>
            ((FResolvedEntry *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if ((FResolvedEntry *)local_a8.AllocatorInstance.Data != (FResolvedEntry *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// OnSerialize @ 14d579630

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FTransientBlendStackCameraNodeEvaluator::OnSerialize
          (FTransientBlendStackCameraNodeEvaluator *this,
          FCameraNodeEvaluatorSerializeParams *param_1,FArchive *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  FScriptContainerElement *pFVar8;
  uint local_res8 [2];
  
  FBlendStackCameraNodeEvaluator::OnSerialize
            ((FBlendStackCameraNodeEvaluator *)this,param_1,param_2);
  uVar2 = (this->EntryExtraInfos).ArrayNum;
  uVar6 = (ulonglong)(int)uVar2;
  pFVar8 = (this->EntryExtraInfos).AllocatorInstance.Data;
  pFVar1 = pFVar8 + uVar6 * 4;
  while( true ) {
    if ((this->EntryExtraInfos).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<UE::Cameras::FTransientBlendStackCameraNodeEvaluator::FCameraRigEntryExtraInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    puVar7 = &param_2->field_0x28;
    if (pFVar8 == pFVar1) break;
    piVar3 = (int *)**(undefined8 **)&param_2->field_0x8;
    if ((int *)(*(undefined8 **)&param_2->field_0x8)[1] < piVar3 + 1) {
      local_res8[0] = 0;
      if ((*puVar7 & 1) == 0) {
        local_res8[0] = (uint)(*pFVar8 != (FScriptContainerElement)0x0);
      }
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_2);
      }
      if ((*puVar7 & 1) != 0) {
        *pFVar8 = (FScriptContainerElement)(local_res8[0] != 0);
      }
    }
    else {
      *pFVar8 = (FScriptContainerElement)(*piVar3 != 0);
      **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
    }
    piVar3 = (int *)**(undefined8 **)&param_2->field_0x8;
    if ((int *)(*(undefined8 **)&param_2->field_0x8)[1] < piVar3 + 1) {
      local_res8[0] = 0;
      if ((*puVar7 & 1) == 0) {
        local_res8[0] = (uint)(pFVar8[1] != (FScriptContainerElement)0x0);
      }
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_2);
      }
      if ((*puVar7 & 1) != 0) {
        pFVar8[1] = (FScriptContainerElement)(local_res8[0] != 0);
      }
    }
    else {
      pFVar8[1] = (FScriptContainerElement)(*piVar3 != 0);
      **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
    }
    puVar4 = *(undefined8 **)&param_2->field_0x8;
    piVar3 = (int *)*puVar4;
    if ((int *)puVar4[1] < piVar3 + 1) {
      local_res8[0] = 0;
      if ((param_2->field_0x28 & 1) == 0) {
        local_res8[0] = (uint)(pFVar8[2] != (FScriptContainerElement)0x0);
      }
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_2);
      }
      if ((param_2->field_0x28 & 1) != 0) {
        pFVar8[2] = (FScriptContainerElement)(local_res8[0] != 0);
      }
    }
    else {
      pFVar8[2] = (FScriptContainerElement)(*piVar3 != 0);
      plVar5 = *(longlong **)&param_2->field_0x8;
      *plVar5 = *plVar5 + 4;
    }
    puVar4 = *(undefined8 **)&param_2->field_0x8;
    piVar3 = (int *)*puVar4;
    if ((int *)puVar4[1] < piVar3 + 1) {
      local_res8[0] = 0;
      if ((param_2->field_0x28 & 1) == 0) {
        local_res8[0] = (uint)(pFVar8[3] != (FScriptContainerElement)0x0);
      }
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_2);
      }
      if ((param_2->field_0x28 & 1) != 0) {
        pFVar8[3] = (FScriptContainerElement)(local_res8[0] != 0);
      }
      uVar6 = (ulonglong)uVar2;
      pFVar8 = pFVar8 + 4;
    }
    else {
      uVar6 = (ulonglong)uVar2;
      pFVar8[3] = (FScriptContainerElement)(*piVar3 != 0);
      plVar5 = *(longlong **)&param_2->field_0x8;
      *plVar5 = *plVar5 + 4;
      pFVar8 = pFVar8 + 4;
    }
  }
  return;
}

// Freeze @ 14d5a59d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FTransientBlendStackCameraNodeEvaluator::Freeze
          (FTransientBlendStackCameraNodeEvaluator *this,FBlendStackCameraFreezeParams *param_1)

{
  int iVar1;
  FCameraEvaluationContext *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FCameraEvaluationContext *pFVar8;
  FCameraEvaluationContext *pFVar9;
  FCameraRigEntry *pFVar10;
  FCameraRigEntry *pFVar11;
  uint uVar12;
  FCameraEvaluationContext *pFVar13;
  undefined1 local_res10 [8];
  
  if ((param_1->EntryID).Value == 0xffffffff) {
    pFVar10 = (FCameraRigEntry *)this->_padding_;
    iVar1 = (int)this->_padding_;
    pFVar11 = pFVar10 + iVar1;
    pFVar13 = (FCameraEvaluationContext *)0x0;
    while( true ) {
      if ((int)this->_padding_ != iVar1) {
        `TCheckedPointerIterator<UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar10 == pFVar11) break;
      if ((!(pFVar10->Flags).bIsFrozen) &&
         ((pFVar10->CameraRig).field0_0x0.DebugPtr == (param_1->CameraRig).field0_0x0.DebugPtr)) {
        pFVar2 = (FCameraEvaluationContext *)
                 (pFVar10->EvaluationContext).WeakReferenceCount.ReferenceController;
        pFVar8 = pFVar2;
        pFVar9 = pFVar13;
        if (pFVar2 != (FCameraEvaluationContext *)0x0) {
          iVar4 = *(int *)&pFVar2->field_0x8;
          do {
            pFVar8 = pFVar13;
            if (iVar4 == 0) goto LAB_14d5a5ad4;
            LOCK();
            iVar7 = *(int *)&pFVar2->field_0x8;
            bVar5 = iVar4 == iVar7;
            if (bVar5) {
              *(int *)&pFVar2->field_0x8 = iVar4 + 1;
              iVar7 = iVar4;
            }
            UNLOCK();
            iVar4 = iVar7;
          } while (!bVar5);
          pFVar8 = pFVar2;
          pFVar9 = (pFVar10->EvaluationContext).Object;
        }
LAB_14d5a5ad4:
        pFVar2 = (param_1->EvaluationContext).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar8);
        if (pFVar2 == pFVar9) {
          FBlendStackCameraNodeEvaluator::FreezeEntry
                    ((FBlendStackCameraNodeEvaluator *)this,pFVar10);
        }
      }
      pFVar10 = pFVar10 + 1;
    }
  }
  else {
    uVar6 = FBlendStackCameraNodeEvaluator::IndexOfEntry
                      ((FBlendStackCameraNodeEvaluator *)this,
                       (FBlendStackEntryID)(param_1->EntryID).Value);
    if (uVar6 != 0xffffffff) {
      uVar12 = 0;
      if ((int)uVar6 < (int)this->_padding_) {
        uVar12 = ~uVar6 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FBlendStackCameraNodeEvaluator::FreezeEntry
                ((FBlendStackCameraNodeEvaluator *)this,
                 (FCameraRigEntry *)((longlong)(int)uVar6 * 0x14c0 + this->_padding_));
      return;
    }
  }
  return;
}

// FreezeAll @ 14d5a5b30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FTransientBlendStackCameraNodeEvaluator::FreezeAll
          (FTransientBlendStackCameraNodeEvaluator *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1)

{
  int iVar1;
  FCameraEvaluationContext *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  FCameraEvaluationContext *pFVar6;
  FCameraRigEntry *pFVar7;
  FCameraRigEntry *pFVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  
  iVar1 = (int)this->_padding_;
  pFVar7 = (FCameraRigEntry *)this->_padding_;
  pFVar8 = pFVar7 + iVar1;
  do {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return;
    }
    if (!(pFVar7->Flags).bIsFrozen) {
      pTVar5 = (pFVar7->EvaluationContext).WeakReferenceCount.ReferenceController;
      pFVar6 = (FCameraEvaluationContext *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar5->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            pTVar5 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14d5a5ba0;
          }
          LOCK();
          aVar4 = pTVar5->SharedReferenceCount;
          bVar9 = aVar3 == aVar4;
          if (bVar9) {
            pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar4 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar4;
        } while (!bVar9);
        pFVar6 = (pFVar7->EvaluationContext).Object;
      }
LAB_14d5a5ba0:
      pFVar2 = param_1->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      if (pFVar2 == pFVar6) {
        FBlendStackCameraNodeEvaluator::FreezeEntry((FBlendStackCameraNodeEvaluator *)this,pFVar7);
      }
    }
    pFVar7 = pFVar7 + 1;
  } while( true );
}

// InternalPostBlendExecute @ 14d5b3130

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FTransientBlendStackCameraNodeEvaluator::InternalPostBlendExecute
          (FTransientBlendStackCameraNodeEvaluator *this,
          TArrayView<UE::Cameras::FBlendStackCameraNodeEvaluator::FResolvedEntry,int> *param_1,
          FCameraNodeEvaluationParams *param_2,FCameraNodeEvaluationResult *param_3)

{
  int *piVar1;
  FCameraNodeEvaluationResult *pFVar2;
  FCameraRigEntry *pFVar3;
  FBlendCameraNodeEvaluator *this_00;
  FScriptContainerElement *_Dst;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FResolvedEntry *pFVar8;
  uint uVar9;
  FResolvedEntry *pFVar10;
  FCameraNodeBlendResult local_88;
  FCameraNodeBlendParams local_78;
  FCameraEvaluationContext *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FCameraNodeEvaluationParams local_58;
  
  pFVar8 = param_1->DataPtr;
  uVar9 = 0xffffffff;
  pFVar10 = pFVar8 + param_1->ArrayNum;
  do {
    if (pFVar8 == pFVar10) {
      if (((param_2->EvaluationType != IK) && (param_2->EvaluationType != ViewRotationPreview)) &&
         (uVar9 != 0xffffffff)) {
        FBlendStackCameraNodeEvaluator::PopEntries((FBlendStackCameraNodeEvaluator *)this,uVar9);
        uVar6 = 0;
        if ((int)uVar9 <= (this->EntryExtraInfos).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar9 != 0) {
          _Dst = (this->EntryExtraInfos).AllocatorInstance.Data;
          iVar7 = (this->EntryExtraInfos).ArrayNum - uVar9;
          if (iVar7 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar9 * 4,(longlong)iVar7 << 2);
          }
          piVar1 = &(this->EntryExtraInfos).ArrayNum;
          *piVar1 = *piVar1 - uVar9;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,1,&(this->EntryExtraInfos).AllocatorInstance,(this->EntryExtraInfos).ArrayNum
                     ,&(this->EntryExtraInfos).ArrayMax);
        }
      }
      return;
    }
    pFVar3 = pFVar8->Entry;
    uVar6 = 0;
    if (pFVar8->EntryIndex < (this->EntryExtraInfos).ArrayNum) {
      uVar6 = (uint)~pFVar8->EntryIndex >> 0x1f;
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
    local_58.Evaluator = param_2->Evaluator;
    pFVar2 = &pFVar3->Result;
    local_68 = (param_2->EvaluationContext).Object;
    pTStack_60 = (param_2->EvaluationContext).SharedReferenceCount.ReferenceController;
    if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58.EvaluationType = param_2->EvaluationType;
    local_58.DeltaTime = param_2->DeltaTime;
    local_58.EvaluationContext.Object = (pFVar8->Context).Object;
    local_58.bIsFirstFrame = param_2->bIsFirstFrame;
    local_58.bIsActiveCameraRig = param_2->bIsActiveCameraRig;
    local_58.EvaluationContext.SharedReferenceCount.ReferenceController =
         (pFVar8->Context).SharedReferenceCount.ReferenceController;
    if (local_58.EvaluationContext.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.EvaluationContext.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.EvaluationContext.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
    local_58.bIsFirstFrame = (pFVar3->Flags).bIsFirstFrame;
    local_78.ChildParams = &local_58;
    local_88.bIsBlendFull = false;
    local_88.bIsBlendFinished = false;
    local_88.BlendedResult = param_3;
    local_78.ChildResult = pFVar2;
    if ((pFVar3->RootEvaluator == (FBlendStackRootCameraNodeEvaluator *)0x0) ||
       (this_00 = pFVar3->RootEvaluator->BlendEvaluator, this_00 == (FBlendCameraNodeEvaluator *)0x0
       )) {
      FCameraNodeEvaluationResult::OverrideAll(param_3,pFVar2,false);
LAB_14d5b32cb:
      uVar9 = pFVar8->EntryIndex;
    }
    else {
      FBlendCameraNodeEvaluator::BlendResults(this_00,&local_78,&local_88);
      if ((local_88.bIsBlendFull != false) && (local_88.bIsBlendFinished != false))
      goto LAB_14d5b32cb;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.EvaluationContext.SharedReferenceCount.ReferenceController);
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// InternalPreBlendExecute @ 14d5b33f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FTransientBlendStackCameraNodeEvaluator::InternalPreBlendExecute
          (FTransientBlendStackCameraNodeEvaluator *this,
          TArrayView<UE::Cameras::FBlendStackCameraNodeEvaluator::FResolvedEntry,int> *param_1,
          FCameraNodeEvaluationParams *param_2,FCameraNodeEvaluationResult *param_3)

{
  FCameraVariableTable *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FCameraRigEntry *pFVar4;
  FBlendCameraNodeEvaluator *this_01;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement FVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FResolvedEntry *pFVar10;
  FResolvedEntry *pFVar11;
  undefined1 local_res8 [8];
  TArrayView<UE::Cameras::FBlendStackCameraNodeEvaluator::FResolvedEntry,int> *local_res10;
  undefined1 local_b8 [8];
  FCameraNodePreBlendResult local_b0;
  FCameraNodeEvaluationParams local_a0;
  longlong local_78;
  FScriptContainerElement *local_70;
  FCameraNodePreBlendParams local_68;
  FCameraEvaluationContext *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  iVar2 = (this->PreBlendVariableTable).Entries.ArrayNum;
  this_00 = &this->PreBlendVariableTable;
  pFVar9 = (this_00->Entries).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)iVar2 * 0x18;
  local_res10 = param_1;
  while( true ) {
    if ((this->PreBlendVariableTable).Entries.ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Cameras::FCameraVariableTable::FEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    pFVar9[0x14] = (FScriptContainerElement)((byte)pFVar9[0x14] & 0xef);
    pFVar9 = pFVar9 + 0x18;
  }
  pFVar9 = (this->EntryExtraInfos).AllocatorInstance.Data;
  iVar2 = (this->EntryExtraInfos).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->EntryExtraInfos).ArrayNum != iVar2) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<UE::Cameras::FTransientBlendStackCameraNodeEvaluator::FCameraRigEntryExtraInfo_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (pFVar9 == pFVar1) {
      return;
    }
    if (pFVar9[2] != (FScriptContainerElement)0x0) break;
    pFVar9 = pFVar9 + 4;
  }
  pFVar10 = param_1->DataPtr;
  pFVar11 = pFVar10 + param_1->ArrayNum;
  do {
    if (pFVar10 == pFVar11) {
      pFVar10 = local_res10->DataPtr;
      pFVar11 = pFVar10 + local_res10->ArrayNum;
      for (; pFVar10 != pFVar11; pFVar10 = pFVar10 + 1) {
        if ((!(pFVar10->Entry->Flags).bIsFrozen) &&
           ((pFVar10->Context).Object != (FCameraEvaluationContext *)0x0)) {
          FCameraVariableTable::InternalOverride
                    (&(pFVar10->Entry->Result).VariableTable,this_00,KnownOnly,
                     (FCameraVariableTableFlags *)0x0,false,(FCameraVariableTableFlags *)0x0);
        }
      }
      return;
    }
    uVar3 = pFVar10->EntryIndex;
    pFVar4 = pFVar10->Entry;
    uVar8 = 0;
    if ((int)uVar3 < (this->EntryExtraInfos).ArrayNum) {
      uVar8 = ~uVar3 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_70 = (this->EntryExtraInfos).AllocatorInstance.Data;
    local_a0.Evaluator = param_2->Evaluator;
    local_48 = (param_2->EvaluationContext).Object;
    pTStack_40 = (param_2->EvaluationContext).SharedReferenceCount.ReferenceController;
    if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a0.EvaluationType = param_2->EvaluationType;
    local_a0.DeltaTime = param_2->DeltaTime;
    local_a0.EvaluationContext.Object = (pFVar10->Context).Object;
    local_a0.bIsFirstFrame = param_2->bIsFirstFrame;
    local_a0.bIsActiveCameraRig = param_2->bIsActiveCameraRig;
    local_a0.EvaluationContext.SharedReferenceCount.ReferenceController =
         (pFVar10->Context).SharedReferenceCount.ReferenceController;
    if (local_a0.EvaluationContext.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a0.EvaluationContext.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a0.EvaluationContext.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78 = (longlong)(int)uVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
    local_68.ChildVariableTable = &(pFVar4->Result).VariableTable;
    local_a0.bIsFirstFrame = (pFVar4->Flags).bIsFirstFrame;
    local_68.EvaluationParams = &local_a0;
    local_68.VariableTableFilter = InputOnly;
    local_b0.bIsBlendFull = false;
    local_b0.bIsBlendFinished = false;
    local_b0.VariableTable = this_00;
    local_68.LastCameraPose = &(pFVar4->Result).CameraPose;
    if ((pFVar4->RootEvaluator == (FBlendStackRootCameraNodeEvaluator *)0x0) ||
       (this_01 = pFVar4->RootEvaluator->BlendEvaluator, this_01 == (FBlendCameraNodeEvaluator *)0x0
       )) {
      FCameraVariableTable::InternalOverride
                (this_00,local_68.ChildVariableTable,InputOnly,(FCameraVariableTableFlags *)0x0,
                 false,(FCameraVariableTableFlags *)0x0);
LAB_14d5b35fc:
      FVar7 = (FScriptContainerElement)0x1;
    }
    else {
      FBlendCameraNodeEvaluator::BlendParameters(this_01,&local_68,&local_b0);
      if ((local_b0.bIsBlendFinished != false) && (local_b0.bIsBlendFull != false))
      goto LAB_14d5b35fc;
      FVar7 = (FScriptContainerElement)0x0;
    }
    local_70[local_78 * 4 + 3] = FVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0.EvaluationContext.SharedReferenceCount.ReferenceController);
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// InternalPreBlendPrepare @ 14d5b36b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FTransientBlendStackCameraNodeEvaluator::InternalPreBlendPrepare
          (FTransientBlendStackCameraNodeEvaluator *this,
          TArrayView<UE::Cameras::FBlendStackCameraNodeEvaluator::FResolvedEntry,int> *param_1,
          FCameraNodeEvaluationParams *param_2,FCameraNodeEvaluationResult *param_3)

{
  FCameraVariableTable *this_00;
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  FCameraRigEntry *pFVar4;
  FScriptContainerElement *pFVar5;
  FCameraParameterSetterService *this_01;
  FCameraNodeEvaluator *this_02;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FResolvedEntry *pFVar11;
  FScriptContainerElement FVar12;
  FResolvedEntry *pFVar13;
  undefined1 local_res10 [8];
  FCameraNodeEvaluationParams *local_res18;
  FCameraNodeEvaluationResult *local_res20;
  FCameraBlendedParameterUpdateResult local_a8;
  FResolvedEntry *local_a0;
  FCameraBlendedParameterUpdateParams local_98;
  FCameraEvaluationContext *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  FCameraNodeEvaluationParams local_78;
  
  pFVar11 = param_1->DataPtr;
  pFVar13 = pFVar11 + param_1->ArrayNum;
  local_res18 = param_2;
  local_res20 = param_3;
  local_a0 = pFVar13;
  if (pFVar11 != pFVar13) {
    do {
      uVar2 = pFVar11->EntryIndex;
      lVar9 = (longlong)(int)uVar2;
      pFVar4 = pFVar11->Entry;
      uVar8 = 0;
      if ((int)uVar2 < (this->EntryExtraInfos).ArrayNum) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->EntryExtraInfos).AllocatorInstance.Data;
      if ((!(pFVar4->Flags).bIsFrozen) &&
         ((pFVar11->Context).Object != (FCameraEvaluationContext *)0x0)) {
        local_78.Evaluator = local_res18->Evaluator;
        local_88 = (local_res18->EvaluationContext).Object;
        pTStack_80 = (local_res18->EvaluationContext).SharedReferenceCount.ReferenceController;
        if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_80->SharedReferenceCount =
               (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_78.EvaluationType = local_res18->EvaluationType;
        local_78.DeltaTime = local_res18->DeltaTime;
        local_78.EvaluationContext.Object = (pFVar11->Context).Object;
        local_78.bIsFirstFrame = local_res18->bIsFirstFrame;
        local_78.bIsActiveCameraRig = local_res18->bIsActiveCameraRig;
        local_78.EvaluationContext.SharedReferenceCount.ReferenceController =
             (pFVar11->Context).SharedReferenceCount.ReferenceController;
        if (local_78.EvaluationContext.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_78.EvaluationContext.SharedReferenceCount.ReferenceController)->
          SharedReferenceCount =
               (atomic<int>)
               ((int)(local_78.EvaluationContext.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_80);
        this_00 = &(pFVar4->Result).VariableTable;
        local_78.bIsFirstFrame = (pFVar4->Flags).bIsFirstFrame;
        local_78.bIsActiveCameraRig = pFVar11->EntryIndex == (int)this->_padding_ + -1;
        FCameraVariableTable::InternalOverride
                  (this_00,&local_res20->VariableTable,PublicOnly,(FCameraVariableTableFlags *)0x0,
                   false,(FCameraVariableTableFlags *)0x0);
        FCameraVariableTable::InternalOverride
                  (this_00,&(pFVar4->ContextResult).VariableTable,None,
                   (FCameraVariableTableFlags *)0x0,false,(FCameraVariableTableFlags *)0x0);
        FCameraContextDataTable::OverrideAll
                  (&(pFVar4->Result).ContextDataTable,&(pFVar4->ContextResult).ContextDataTable);
        this_01 = (this->ParameterSetterService).Object;
        if (this_01 != (FCameraParameterSetterService *)0x0) {
          FCameraParameterSetterService::ApplyCameraVariableSetters(this_01,this_00);
        }
        if (pFVar5[lVar9 * 4] == (FScriptContainerElement)0x0) {
          local_98.EvaluationParams = &local_78;
          iVar3 = (pFVar4->EvaluatorHierarchy).FlattenedHierarchy.ArrayNum;
          FVar12 = (FScriptContainerElement)0x0;
          pFVar10 = (pFVar4->EvaluatorHierarchy).FlattenedHierarchy.AllocatorInstance.Data;
          pFVar1 = pFVar10 + (longlong)iVar3 * 8;
          local_a8.VariableTable = this_00;
          local_98.LastCameraPose = &(pFVar4->Result).CameraPose;
          while( true ) {
            if ((pFVar4->EvaluatorHierarchy).FlattenedHierarchy.ArrayNum != iVar3) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<UE::Cameras::FCameraNodeEvaluator_*,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(local_res10);
            }
            if (pFVar10 == pFVar1) break;
            if (((*(FCameraNodeEvaluator **)pFVar10)->PrivateFlags & NeedsParameterUpdate) != None)
            {
              FCameraNodeEvaluator::UpdateParameters
                        (*(FCameraNodeEvaluator **)pFVar10,&local_98,&local_a8);
              FVar12 = (FScriptContainerElement)0x1;
            }
            pFVar10 = pFVar10 + 8;
          }
          pFVar5[lVar9 * 4 + 2] = FVar12;
          pFVar5[lVar9 * 4] = (FScriptContainerElement)0x1;
          pFVar13 = local_a0;
        }
        if (pFVar5[lVar9 * 4 + 1] == (FScriptContainerElement)0x0) {
          this_02 = (FCameraNodeEvaluator *)pFVar4->RootEvaluator->BlendEvaluator;
          if (this_02 != (FCameraNodeEvaluator *)0x0) {
            FCameraNodeEvaluator::Run(this_02,&local_78,&pFVar4->Result);
          }
          pFVar5[lVar9 * 4 + 1] = (FScriptContainerElement)0x1;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.EvaluationContext.SharedReferenceCount.ReferenceController);
      }
      pFVar11 = pFVar11 + 1;
    } while (pFVar11 != pFVar13);
  }
  return;
}

// InternalRunFinished @ 14d5b39b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FTransientBlendStackCameraNodeEvaluator::InternalRunFinished
          (FTransientBlendStackCameraNodeEvaluator *this,FCameraNodeEvaluationResult *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->EntryExtraInfos).AllocatorInstance.Data;
  iVar2 = (this->EntryExtraInfos).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->EntryExtraInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FTransientBlendStackCameraNodeEvaluator::FCameraRigEntryExtraInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    *(undefined4 *)pFVar3 = 0;
    pFVar3 = pFVar3 + 4;
  }
  return;
}

// InternalUpdate @ 14d5b41a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FTransientBlendStackCameraNodeEvaluator::InternalUpdate
          (FTransientBlendStackCameraNodeEvaluator *this,
          TArrayView<UE::Cameras::FBlendStackCameraNodeEvaluator::FResolvedEntry,int> *param_1,
          FCameraNodeEvaluationParams *param_2,FCameraNodeEvaluationResult *param_3)

{
  FCameraNodeEvaluationResult *this_00;
  FCameraRigEntry *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCameraNodeEvaluator *this_01;
  code *pcVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  TEnumAsByte<EAspectRatioAxisConstraint> TVar11;
  FCameraPoseFlags FVar12;
  undefined3 uVar13;
  bool bVar14;
  uint uVar15;
  FResolvedEntry *pFVar16;
  FResolvedEntry *pFVar17;
  TVector<double>_u_0 local_68;
  FCameraNodeEvaluationParams local_50;
  
  pFVar16 = param_1->DataPtr;
  pFVar17 = pFVar16 + param_1->ArrayNum;
  while( true ) {
    if (pFVar16 == pFVar17) {
      return;
    }
    pFVar1 = pFVar16->Entry;
    uVar15 = 0;
    if (pFVar16->EntryIndex < (this->EntryExtraInfos).ArrayNum) {
      uVar15 = (uint)~pFVar16->EntryIndex >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) break;
    if ((!(pFVar1->Flags).bIsFrozen) &&
       ((pFVar16->Context).Object != (FCameraEvaluationContext *)0x0)) {
      local_50.Evaluator = param_2->Evaluator;
      this_00 = &pFVar1->Result;
      pTVar2 = (param_2->EvaluationContext).SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_50.EvaluationType = param_2->EvaluationType;
      local_50.DeltaTime = param_2->DeltaTime;
      local_50.EvaluationContext.Object = (pFVar16->Context).Object;
      local_50.bIsFirstFrame = param_2->bIsFirstFrame;
      local_50.bIsActiveCameraRig = param_2->bIsActiveCameraRig;
      local_50.EvaluationContext.SharedReferenceCount.ReferenceController =
           (pFVar16->Context).SharedReferenceCount.ReferenceController;
      if (local_50.EvaluationContext.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_50.EvaluationContext.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             = (atomic<int>)
               ((int)(local_50.EvaluationContext.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      local_50.bIsFirstFrame = (pFVar1->Flags).bIsFirstFrame;
      local_50.bIsActiveCameraRig = pFVar16->EntryIndex == (int)this->_padding_ + -1;
      FCameraNodeEvaluationResult::Reset(this_00);
      dVar4 = (param_3->CameraPose).Location.field0_0x0._s_0.Y;
      (this_00->CameraPose).Location.field0_0x0._s_0.X =
           (param_3->CameraPose).Location.field0_0x0._s_0.X;
      (pFVar1->Result).CameraPose.Location.field0_0x0._s_0.Y = dVar4;
      dVar4 = (param_3->CameraPose).Rotation.Pitch;
      (pFVar1->Result).CameraPose.Location.field0_0x0._s_0.Z =
           (param_3->CameraPose).Location.field0_0x0._s_0.Z;
      (pFVar1->Result).CameraPose.Rotation.Pitch = dVar4;
      dVar4 = (param_3->CameraPose).Rotation.Roll;
      (pFVar1->Result).CameraPose.Rotation.Yaw = (param_3->CameraPose).Rotation.Yaw;
      (pFVar1->Result).CameraPose.Rotation.Roll = dVar4;
      fVar5 = (param_3->CameraPose).FieldOfView;
      fVar6 = (param_3->CameraPose).FocalLength;
      (pFVar1->Result).CameraPose.TargetDistance = (param_3->CameraPose).TargetDistance;
      (pFVar1->Result).CameraPose.FieldOfView = fVar5;
      (pFVar1->Result).CameraPose.FocalLength = fVar6;
      fVar5 = (param_3->CameraPose).Aperture;
      fVar6 = (param_3->CameraPose).ShutterSpeed;
      fVar7 = (param_3->CameraPose).FocusDistance;
      (pFVar1->Result).CameraPose.OrthographicWidth = (param_3->CameraPose).OrthographicWidth;
      (pFVar1->Result).CameraPose.Aperture = fVar5;
      (pFVar1->Result).CameraPose.ShutterSpeed = fVar6;
      (pFVar1->Result).CameraPose.FocusDistance = fVar7;
      fVar5 = (param_3->CameraPose).SensorHeight;
      fVar6 = (param_3->CameraPose).SensorHorizontalOffset;
      fVar7 = (param_3->CameraPose).SensorVerticalOffset;
      (pFVar1->Result).CameraPose.SensorWidth = (param_3->CameraPose).SensorWidth;
      (pFVar1->Result).CameraPose.SensorHeight = fVar5;
      (pFVar1->Result).CameraPose.SensorHorizontalOffset = fVar6;
      (pFVar1->Result).CameraPose.SensorVerticalOffset = fVar7;
      fVar5 = (param_3->CameraPose).SqueezeFactor;
      fVar6 = (param_3->CameraPose).Overscan;
      iVar8 = (param_3->CameraPose).DiaphragmBladeCount;
      (pFVar1->Result).CameraPose.ISO = (param_3->CameraPose).ISO;
      (pFVar1->Result).CameraPose.SqueezeFactor = fVar5;
      (pFVar1->Result).CameraPose.Overscan = fVar6;
      (pFVar1->Result).CameraPose.DiaphragmBladeCount = iVar8;
      fVar5 = (param_3->CameraPose).FarClippingPlane;
      fVar6 = (param_3->CameraPose).PhysicalCameraBlendWeight;
      bVar14 = (param_3->CameraPose).EnablePhysicalCamera;
      bVar9 = (param_3->CameraPose).ConstrainAspectRatio;
      bVar10 = (param_3->CameraPose).OverrideAspectRatioAxisConstraint;
      TVar11.Value = (param_3->CameraPose).AspectRatioAxisConstraint.Value;
      (pFVar1->Result).CameraPose.NearClippingPlane = (param_3->CameraPose).NearClippingPlane;
      (pFVar1->Result).CameraPose.FarClippingPlane = fVar5;
      (pFVar1->Result).CameraPose.PhysicalCameraBlendWeight = fVar6;
      (pFVar1->Result).CameraPose.EnablePhysicalCamera = bVar14;
      (pFVar1->Result).CameraPose.ConstrainAspectRatio = bVar9;
      (pFVar1->Result).CameraPose.OverrideAspectRatioAxisConstraint = bVar10;
      (pFVar1->Result).CameraPose.AspectRatioAxisConstraint =
           (TEnumAsByte<EAspectRatioAxisConstraint>)TVar11.Value;
      FVar12 = (param_3->CameraPose).ChangedFlags;
      uVar13 = *(undefined3 *)&(param_3->CameraPose).field_0x85;
      (pFVar1->Result).CameraPose.ProjectionMode =
           (TEnumAsByte<ECameraProjectionMode::Type>)(param_3->CameraPose).ProjectionMode.Value;
      (pFVar1->Result).CameraPose.ChangedFlags = FVar12;
      *(undefined3 *)&(pFVar1->Result).CameraPose.field_0x85 = uVar13;
      FCameraRigJoints::OverrideAll(&(pFVar1->Result).CameraRigJoints,&param_3->CameraRigJoints);
      FPostProcessSettings::operator=
                (&(pFVar1->Result).PostProcessSettings.PostProcessSettings,
                 &(param_3->PostProcessSettings).PostProcessSettings);
      FCameraPose::OverrideChanged(&this_00->CameraPose,&(pFVar1->ContextResult).CameraPose);
      if (((param_3->bIsCameraCut != false) || ((pFVar1->ContextResult).bIsCameraCut != false)) ||
         ((pFVar1->Flags).bForceCameraCut)) {
        bVar14 = true;
      }
      else {
        bVar14 = false;
      }
      (pFVar1->Result).bIsCameraCut = bVar14;
      (pFVar1->Result).bIsValid = true;
      local_68._s_0.X = (pFVar1->ContextResult).CameraPose.Location.field0_0x0._s_0.X;
      local_68._s_0.Y = (pFVar1->ContextResult).CameraPose.Location.field0_0x0._s_0.Y;
      local_68._s_0.Z = (pFVar1->ContextResult).CameraPose.Location.field0_0x0._s_0.Z;
      FCameraNodeEvaluationResult::AddCameraPoseTrailPointIfNeeded
                (this_00,(TVector<double> *)&local_68._s_0);
      this_01 = pFVar1->RootEvaluator->RootEvaluator;
      if (this_01 != (FCameraNodeEvaluator *)0x0) {
        FCameraNodeEvaluator::Run(this_01,&local_50,this_00);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.EvaluationContext.SharedReferenceCount.ReferenceController);
    }
    pFVar16 = pFVar16 + 1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Push @ 14d5c8640

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlendStackEntryID __thiscall
UE::Cameras::FTransientBlendStackCameraNodeEvaluator::Push
          (FTransientBlendStackCameraNodeEvaluator *this,FBlendStackCameraPushParams *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  uint uVar6;
  atomic<int> aVar7;
  ECameraRigMergingEligibility EVar8;
  UCameraRigTransition *pUVar9;
  TReferenceControllerBase<1> *pTVar10;
  UCameraRigTransition *in_R8;
  longlong lVar11;
  TReferenceControllerBase<1> *pTVar12;
  
  iVar1 = (int)this->_padding_;
  if (iVar1 == 0) {
LAB_14d5c8783:
    FindTransition(this,(FBlendStackCameraPushParams *)in_R8);
  }
  else {
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
    uVar6 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar6 = ~(iVar1 - 1U) >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (FBlendStackEntryID)uVar6;
    }
    lVar11 = (longlong)(int)this->_padding_ * 0x14c0 + this->_padding_;
    if ((*(byte *)(lVar11 + -0x10) & 8) != 0) goto LAB_14d5c8783;
    pTVar2 = *(TReferenceControllerBase<1> **)(lVar11 + -0x14b0);
    pTVar10 = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar2->SharedReferenceCount;
      do {
        pTVar10 = pTVar12;
        if (aVar4 == (atomic<int>)0x0) goto LAB_14d5c8701;
        LOCK();
        aVar7 = pTVar2->SharedReferenceCount;
        bVar5 = aVar4 == aVar7;
        if (bVar5) {
          pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar7 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar7;
      } while (!bVar5);
      pTVar12 = *(TReferenceControllerBase<1> **)(lVar11 + -0x14b8);
      pTVar10 = pTVar2;
    }
LAB_14d5c8701:
    pTVar2 = (TReferenceControllerBase<1> *)in_R8->_padding_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    if (pTVar2 != pTVar12) goto LAB_14d5c8783;
    if ((((char)in_R8->_padding_ == '\0') && (*(longlong *)(lVar11 + -0x14a8) == in_R8->_padding_))
       || ((EVar8 = FBlendStackRootCameraNodeEvaluator::CompareCameraRigForMerging
                              (*(FBlendStackRootCameraNodeEvaluator **)(lVar11 + -0x1478),
                               (UCameraRigAsset *)in_R8->_padding_), (char)in_R8->_padding_ == '\0'
           && (EVar8 == Active)))) {
      *(undefined4 *)&(param_1->EvaluationContext).Object = 0xffffffff;
      goto LAB_14d5c879f;
    }
    if (EVar8 != EligibleForMerge) goto LAB_14d5c8783;
    pUVar9 = FindTransition(this,(FBlendStackCameraPushParams *)in_R8);
    if ((pUVar9 != (UCameraRigTransition *)0x0) && (pUVar9->bAllowCameraRigMerging != false)) {
      PushMergedEntry(this,param_1,in_R8);
      goto LAB_14d5c879f;
    }
  }
  PushNewEntry(this,param_1,in_R8);
LAB_14d5c879f:
  return (FBlendStackEntryID)(uint)param_1;
}

// PushMergedEntry @ 14d5c88c0

/* WARNING: Removing unreachable block (ram,0x00014d5c8a03) */
/* WARNING: Removing unreachable block (ram,0x00014d5c8a1c) */
/* WARNING: Removing unreachable block (ram,0x00014d5c8a2e) */
/* WARNING: Removing unreachable block (ram,0x00014d5c8a39) */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlendStackEntryID __thiscall
UE::Cameras::FTransientBlendStackCameraNodeEvaluator::PushMergedEntry
          (FTransientBlendStackCameraNodeEvaluator *this,FBlendStackCameraPushParams *param_1,
          UCameraRigTransition *param_2)

{
  FCameraEvaluationContext *pFVar1;
  FCameraNodeEvaluator *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FCameraEvaluationContext *pFVar9;
  longlong lVar10;
  FCameraEvaluationContext *pFVar11;
  longlong in_R9;
  FCameraEvaluationContext *pFVar12;
  FCameraNodeEvaluatorBuilder local_res8;
  FCameraNodeEvaluatorBuildParams local_res10;
  FCameraNodeEvaluatorInitializeParams local_98;
  
  pFVar9 = (FCameraEvaluationContext *)0x0;
  pFVar12 = pFVar9;
  if (in_R9 != 0) {
    pFVar12 = *(FCameraEvaluationContext **)(in_R9 + 0x40);
  }
  iVar4 = (int)this->_padding_;
  uVar8 = iVar4 - 1;
  uVar6 = 0;
  if ((int)uVar8 < iVar4) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (FBlendStackEntryID)uVar6;
  }
  local_98.LastActiveCameraRigInfo.EvaluationContext.Object = (FCameraEvaluationContext *)0x0;
  local_98.LastActiveCameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_98.LastActiveCameraRigInfo.CameraRig.field0_0x0.DebugPtr =
       (TObjectPtr<UCameraRigAsset_const_>_u_0)0x0;
  local_98.LastActiveCameraRigInfo.LastResult = (FCameraNodeEvaluationResult *)0x0;
  lVar10 = (longlong)(int)this->_padding_ * 0x14c0 + this->_padding_;
  local_98.EvaluationContext.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_98.LastActiveCameraRigInfo.InstanceID.Value = 0xffffffff;
  local_98.LastActiveCameraRigInfo.InstanceID.Layer = None;
  local_res8.Storage = (FCameraNodeEvaluatorStorage *)(lVar10 + -0x1498);
  local_98.LastActiveCameraRigInfo.RootEvaluator = (FCameraNodeEvaluator *)0x0;
  local_res10.Builder = &local_res8;
  local_98.Evaluator = (FCameraSystemEvaluator *)this->_padding_;
  local_98.Layer = Main;
  local_98.Hierarchy = (FCameraNodeEvaluatorHierarchy *)0x0;
  pFVar1 = *(FCameraEvaluationContext **)(lVar10 + -0x14b0);
  pFVar11 = pFVar1;
  if (pFVar1 != (FCameraEvaluationContext *)0x0) {
    iVar4 = *(int *)&pFVar1->field_0x8;
    do {
      pFVar11 = pFVar9;
      if (iVar4 == 0) goto LAB_14d5c89e5;
      LOCK();
      iVar7 = *(int *)&pFVar1->field_0x8;
      bVar5 = iVar4 == iVar7;
      if (bVar5) {
        *(int *)&pFVar1->field_0x8 = iVar4 + 1;
        iVar7 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar7;
    } while (!bVar5);
    pFVar9 = *(FCameraEvaluationContext **)(lVar10 + -0x14b8);
    pFVar11 = pFVar1;
  }
LAB_14d5c89e5:
  if (pFVar11 != (FCameraEvaluationContext *)0x0) {
    local_98.EvaluationContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)pFVar11;
  }
  local_98.EvaluationContext.Object = pFVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_98.Layer = *(ECameraRigLayer *)((longlong)&this->_padding_ + 4);
  FBlendStackRootCameraNodeEvaluator::MergeCameraRig
            (*(FBlendStackRootCameraNodeEvaluator **)(lVar10 + -0x1478),&local_res10,&local_98,
             (FCameraNodeEvaluationResult *)(lVar10 + -0xa10),(UCameraRigAsset *)param_2->_padding_,
             (UBlendCameraNode *)pFVar12);
  pFVar2 = *(FCameraNodeEvaluator **)(lVar10 + -0x1478);
  *(undefined4 *)(lVar10 + -0x1468) = 0;
  if (*(int *)(lVar10 + -0x1464) < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(lVar10 + -0x1470),0,(int *)(lVar10 + -0x1464));
  }
  FCameraNodeEvaluatorHierarchy::Append((FCameraNodeEvaluatorHierarchy *)(lVar10 + -0x1470),pFVar2);
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)param_2->_padding_ != (UObject *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2->_padding_);
  }
  *(longlong *)(lVar10 + -0x14a8) = param_2->_padding_;
  *(undefined4 *)&(param_1->EvaluationContext).Object = *(undefined4 *)(lVar10 + -0x14c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.LastActiveCameraRigInfo.EvaluationContext.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.EvaluationContext.SharedReferenceCount.ReferenceController);
  return (FBlendStackEntryID)(uint)param_1;
}

// PushNewEntry @ 14d5c8b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlendStackEntryID __thiscall
UE::Cameras::FTransientBlendStackCameraNodeEvaluator::PushNewEntry
          (FTransientBlendStackCameraNodeEvaluator *this,FBlendStackCameraPushParams *param_1,
          UCameraRigTransition *param_2)

{
  int *piVar1;
  longlong lVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  UBlendStackRootCameraNode *pUVar9;
  UCameraRigTransition *pUVar10;
  uint uVar11;
  UCameraRigTransition *pUVar12;
  UCameraRigTransition *in_R9;
  undefined1 auStackY_1578 [32];
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_1518;
  FCameraRigEntry local_1508;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14d5c8b65;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1578;
  pUVar12 = (UCameraRigTransition *)0x0;
  pUVar10 = pUVar12;
  if (this->_padding_ != 0) {
    pUVar8 = Z_Construct_UClass_UBlendStackCameraNode_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar8);
    if (bVar5) {
      pUVar10 = (UCameraRigTransition *)this->_padding_;
    }
  }
  pUVar9 = NewObject<UBlendStackRootCameraNode>
                     ((UObject *)pUVar10,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  lVar2 = param_2->_padding_;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = *(UObject **)(lVar2 + 200), pUVar3 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar3);
  }
  (pUVar9->RootNode).field0_0x0 = *(TObjectPtr<UCameraNode>_u_0 *)(lVar2 + 200);
  pUVar10 = pUVar12;
  if (in_R9 != (UCameraRigTransition *)0x0) {
    pUVar12 = in_R9;
    pUVar10 = (UCameraRigTransition *)(in_R9->Blend).field0_0x0.DebugPtr;
  }
  if (pUVar10 == (UCameraRigTransition *)0x0) {
    pUVar10 = (UCameraRigTransition *)
              NewObject<UPopBlendCameraNode>
                        ((UObject *)pUVar9,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                         (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  }
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UCameraRigTransition *)0x0))
  {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  (pUVar9->Blend).field0_0x0.DebugPtr = (UBlendCameraNode *)pUVar10;
  FBlendStackCameraNodeEvaluator::FCameraRigEntry::FCameraRigEntry(&local_1508);
  local_1518.Object = (FCameraEvaluationContext *)param_2->_padding_;
  local_1518.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)param_2->_padding_;
  if (local_1518.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1518.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1518.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FBlendStackCameraNodeEvaluator::InitializeEntry
            ((FBlendStackCameraNodeEvaluator *)this,&local_1508,
             (UCameraRigAsset *)param_2->_padding_,&local_1518,pUVar9,true);
  *(uint *)&(param_1->EvaluationContext).Object = local_1508.EntryID.Value;
  if ((((FCameraRigEntry *)this->_padding_ <= &local_1508) &&
      (&local_1508 < (FCameraRigEntry *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4)))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (FBlendStackEntryID)uVar6;
  }
  iVar7 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14c0,0x10,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar7 + 1;
  FBlendStackCameraNodeEvaluator::FCameraRigEntry::FCameraRigEntry
            ((FCameraRigEntry *)((longlong)iVar7 * 0x14c0 + this->_padding_),&local_1508);
  iVar7 = (this->EntryExtraInfos).ArrayNum;
  piVar1 = &(this->EntryExtraInfos).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x104,&(this->EntryExtraInfos).AllocatorInstance,piVar1);
  }
  (this->EntryExtraInfos).ArrayNum = iVar7 + 1;
  *(undefined4 *)((this->EntryExtraInfos).AllocatorInstance.Data + (longlong)iVar7 * 4) = 0;
  bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_);
  if (bVar5) {
    iVar7 = (int)this->_padding_;
    uVar11 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar11 < iVar7) {
      uVar6 = ~uVar11 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (FBlendStackEntryID)uVar6;
    }
    FBlendStackCameraNodeEvaluator::BroadcastCameraRigEvent
              ((FBlendStackCameraNodeEvaluator *)this,Pushed,
               (FCameraRigEntry *)((longlong)((int)this->_padding_ + -1) * 0x14c0 + this->_padding_)
               ,pUVar12);
  }
  FBlendStackCameraNodeEvaluator::FCameraRigEntry::~FCameraRigEntry(&local_1508);
  return (FBlendStackEntryID)(uint)param_1;
}

