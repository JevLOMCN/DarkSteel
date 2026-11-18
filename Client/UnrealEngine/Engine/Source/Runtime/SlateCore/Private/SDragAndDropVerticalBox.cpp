// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 9

// Construct @ 1425d3340

void __thiscall
SDragAndDropVerticalBox::Construct(SDragAndDropVerticalBox *this,FArguments *param_1)

{
  longlong *plVar1;
  FArguments *pFVar2;
  undefined1 local_258 [8];
  ForAnyElementType local_250;
  int local_248;
  FDestructionSentinel local_240;
  FArguments local_228;
  
  pFVar2 = SVerticalBox::FArguments::FArguments(&local_228);
  SVerticalBox::Construct((SVerticalBox *)this,pFVar2);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_228._Slots.AllocatorInstance.Data,local_228._Slots.ArrayNum);
  if ((FSlotArguments *)local_228._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_228._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_228);
  if (&param_1->_OnCanAcceptDropAdvanced != &this->OnCanAcceptDropAdvanced) {
    local_258 = (undefined1  [8])0x0;
    local_250.Data = (FScriptContainerElement *)0x0;
    local_248 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnCanAcceptDropAdvanced,(FReadAccessScope *)&local_240);
    if ((*(int *)&(param_1->_OnCanAcceptDropAdvanced).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_OnCanAcceptDropAdvanced).field_0x8,
       plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_258);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_240);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCanAcceptDropAdvanced,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_258);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_258,
               (FWriteAccessScope *)&local_240);
    if ((local_248 != 0) && (local_250.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_250.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_250,0,0,0x10);
      local_248 = 0;
    }
    if (local_240.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_240.Accessor,&local_240);
    }
    if (local_250.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_258);
  }
  if (&param_1->_OnAcceptDrop != &this->OnAcceptDrop) {
    local_258 = (undefined1  [8])0x0;
    local_250.Data = (FScriptContainerElement *)0x0;
    local_248 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnAcceptDrop,
               (FReadAccessScope *)&local_240);
    if ((*(int *)&(param_1->_OnAcceptDrop).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_OnAcceptDrop).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_258);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_240);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAcceptDrop,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_258);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_258,
               (FWriteAccessScope *)&local_240);
    if ((local_248 != 0) && (local_250.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_250.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_250,0,0,0x10);
      local_248 = 0;
    }
    if (local_240.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_240.Accessor,&local_240);
    }
    if (local_250.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_258);
  }
  if (&param_1->_OnDragDetected != &this->OnDragDetected_Handler) {
    local_258 = (undefined1  [8])0x0;
    local_250.Data = (FScriptContainerElement *)0x0;
    local_248 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnDragDetected,
               (FReadAccessScope *)&local_240);
    if ((*(int *)&(param_1->_OnDragDetected).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_OnDragDetected).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_258);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_240);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDragDetected_Handler,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_258);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_258,
               (FWriteAccessScope *)&local_240);
    if ((local_248 != 0) && (local_250.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_250.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_250,0,0,0x10);
      local_248 = 0;
    }
    if (local_240.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_240.Accessor,&local_240);
    }
    if (local_250.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_258);
  }
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDragEnter_Handler,&param_1->_OnDragEnter);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDragLeave_Handler,&param_1->_OnDragLeave);
  if (&param_1->_OnDrop != &this->OnDrop_Handler) {
    local_258 = (undefined1  [8])0x0;
    local_250.Data = (FScriptContainerElement *)0x0;
    local_248 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnDrop,
               (FReadAccessScope *)&local_240);
    if ((*(int *)&(param_1->_OnDrop).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_OnDrop).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_258);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_240);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDrop_Handler,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_258);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_258,
               (FWriteAccessScope *)&local_240);
    if ((local_248 != 0) && (local_250.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_250.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_250,0,0,0x10);
      local_248 = 0;
    }
    if (local_240.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_240.Accessor,&local_240);
    }
    if (local_250.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_258);
  }
  (this->CurrentDragOperationScreenSpaceLocation).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->CurrentDragOverSlotIndex = -1;
  return;
}

// OnDragDetected @ 1425ed080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDragAndDropVerticalBox::OnDragDetected
          (SDragAndDropVerticalBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  FSlot *pFVar4;
  ForElementType<FArrangedWidget> FVar5;
  longlong *plVar6;
  undefined1 auStack_1d8 [32];
  int local_1b8;
  FSlot *local_1b0;
  FDeprecateSlateVector2D local_1a8;
  FReadAccessScope local_1a0;
  FArrangedChildren local_188;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_188.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
  plVar6 = (longlong *)0x0;
  local_188.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_188.Array.ArrayNum = 0;
  local_188.Array.ArrayMax = 4;
  local_188.bAllow3DWidgets = false;
  (**(code **)(this->_padding_ + 0x240))(this,param_1,&local_188);
  local_1a8 = param_2->ScreenSpacePosition;
  iVar3 = SWidget::FindChildUnderPosition(&local_188,(FDeprecateVector2DParameter *)&local_1a8);
  if ((-1 < iVar3) && (iVar3 < (int)this->_padding_)) {
    pFVar4 = TPanelChildren<SBoxPanel::FSlot>::operator[]
                       ((TPanelChildren<SBoxPanel::FSlot> *)&this->_padding_,iVar3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnDragDetected_Handler,&local_1a0);
    if ((*(int *)&(this->OnDragDetected_Handler).field_0x10 != 0) &&
       ((plVar1 = *(longlong **)&(this->OnDragDetected_Handler).field_0x8, plVar1 != (longlong *)0x0
        && (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')))) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_1a0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnDragDetected_Handler,&local_1a0);
      if (*(int *)&(this->OnDragDetected_Handler).field_0x10 != 0) {
        plVar6 = *(longlong **)&(this->OnDragDetected_Handler).field_0x8;
      }
      local_1b8 = iVar3;
      local_1b0 = pFVar4;
      (**(code **)(*plVar6 + 0x60))(plVar6,__return_storage_ptr__,param_1,param_2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_1a0);
      FVar5 = (ForElementType<FArrangedWidget>)&local_188.Array;
      if (local_188.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
        FVar5 = local_188.Array.AllocatorInstance.SecondaryData;
      }
      goto LAB_1425ed1d5;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1a0);
  }
  FReply::FReply(__return_storage_ptr__,false);
  FVar5 = (ForElementType<FArrangedWidget>)&local_188.Array;
  if (local_188.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar5 = local_188.Array.AllocatorInstance.SecondaryData;
  }
LAB_1425ed1d5:
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar5,local_188.Array.ArrayNum);
  if (local_188.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_188.Array.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// OnDragEnter @ 1425ed250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDragAndDropVerticalBox::OnDragEnter
          (SDragAndDropVerticalBox *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDragEnter_Handler,
             &local_28);
  if ((*(int *)&(this->OnDragEnter_Handler).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnDragEnter_Handler).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnDragEnter_Handler,&local_28);
      if (*(int *)&(this->OnDragEnter_Handler).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->OnDragEnter_Handler).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnDragLeave @ 1425ed2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDragAndDropVerticalBox::OnDragLeave(SDragAndDropVerticalBox *this,FDragDropEvent *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_28 [8];
  FReadAccessScope local_20;
  
  if (((TOptional<SDragAndDropVerticalBox::EItemDropZone> *)local_28 != &this->ItemDropZone) &&
     ((this->ItemDropZone).bIsSet != false)) {
    (this->ItemDropZone).bIsSet = false;
  }
  (this->CurrentDragOperationScreenSpaceLocation).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->CurrentDragOverSlotIndex = -1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDragLeave_Handler,
             &local_20);
  if ((*(int *)&(this->OnDragLeave_Handler).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnDragLeave_Handler).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnDragLeave_Handler,&local_20);
      if (*(int *)&(this->OnDragLeave_Handler).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->OnDragLeave_Handler).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  return;
}

// OnDragOver @ 1425ed3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDragAndDropVerticalBox::OnDragOver
          (SDragAndDropVerticalBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  float fVar1;
  longlong *plVar2;
  FDragDropOperation *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FString *pFVar10;
  FReply *pFVar11;
  TTransform2<float> *pTVar12;
  ForElementType<FArrangedWidget> FVar13;
  TOptional<SDragAndDropVerticalBox::EItemDropZone> TVar14;
  ForElementType<FArrangedWidget> FVar15;
  ForElementType<FArrangedWidget> FVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  TReferenceControllerBase<1> *pTVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_238 [32];
  undefined8 in_stack_fffffffffffffde8;
  longlong lVar23;
  int iVar24;
  float fStack_204;
  undefined8 local_200;
  float local_1f8;
  float fStack_1f4;
  uint local_1f0;
  FReply *local_1e8;
  undefined1 local_1e0 [32];
  FArrangedChildren local_1c0;
  TTransform2<float> local_80;
  ulonglong local_68;
  
  iVar24 = (int)((ulonglong)in_stack_fffffffffffffde8 >> 0x20);
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1e8 = __return_storage_ptr__;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnCanAcceptDropAdvanced,(FReadAccessScope *)(local_1e0 + 8));
  if (((*(int *)&(this->OnCanAcceptDropAdvanced).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->OnCanAcceptDropAdvanced).field_0x8, plVar2 == (longlong *)0x0)
      ) || (cVar5 = (**(code **)(*plVar2 + 0x38))(), cVar5 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_1e0 + 8));
  if (!bVar6) goto LAB_1425ed812;
  local_1c0.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
  local_1c0.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  uVar19 = 0;
  local_1c0.Array.ArrayNum = 0;
  local_1c0.Array.ArrayMax = 4;
  local_1c0.bAllow3DWidgets = false;
  (**(code **)(this->_padding_ + 0x240))(this,param_1,&local_1c0);
  pFVar3 = (param_2->Content).Object;
  if (pFVar3 == (FDragDropOperation *)0x0) {
LAB_1425ed7d2:
    pTVar20 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
    pFVar10 = FDragAndDropVerticalBoxOp::GetTypeId();
    cVar5 = (*pcVar4)(pFVar3,pFVar10);
    if (cVar5 == '\0') goto LAB_1425ed7d2;
    pTVar20 = (param_2->Content).SharedReferenceCount.ReferenceController;
    pFVar3 = (param_2->Content).Object;
    if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((pFVar3 != (FDragDropOperation *)0x0) && (iVar17 = (int)pFVar3[1]._padding_, -1 < iVar17))
       && (iVar17 < local_1c0.Array.ArrayNum)) {
      local_200 = (TVector2<float>_u_0)param_2->_padding_;
      uVar7 = SWidget::FindChildUnderPosition(&local_1c0,(FDeprecateVector2DParameter *)&local_200);
      lVar18 = (longlong)(int)uVar7;
      if ((-1 < (int)uVar7) && ((int)uVar7 < local_1c0.Array.ArrayNum)) {
        local_1f0 = ~uVar7 >> 0x1f;
        uVar8 = uVar19;
        if ((int)uVar7 < local_1c0.Array.ArrayNum) {
          uVar8 = local_1f0;
        }
        if (uVar8 == 0) {
          lVar23 = lVar18;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          iVar24 = (int)((ulonglong)lVar23 >> 0x20);
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pFVar11 = (FReply *)(*pcVar4)();
            return pFVar11;
          }
        }
        iVar17 = local_1c0.Array.ArrayNum;
        FVar15 = local_1c0.Array.AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<FArrangedWidget>)&local_1c0.Array;
        if (local_1c0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0)
        {
          FVar13 = local_1c0.Array.AllocatorInstance.SecondaryData;
        }
        pTVar12 = Inverse<TTransform2<float>_>
                            (&local_80,(TTransform2<float> *)((longlong)FVar13 + 0x1c) + lVar18 * 3)
        ;
        local_1f8 = (float)param_2->_padding_;
        fVar22 = local_1f8 * (pTVar12->M).M[0][1];
        fStack_1f4 = (float)((ulonglong)param_2->_padding_ >> 0x20);
        fVar21 = fStack_1f4 * (pTVar12->M).M[1][1];
        fVar1 = (pTVar12->Trans).field0_0x0._s_0.Y;
        uVar8 = (uint)pFVar3[1]._padding_;
        _local_1f8 = CONCAT44(fStack_1f4,uVar8);
        uVar9 = uVar19;
        if ((int)uVar8 < iVar17) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (iVar24 = (int)uVar8 >> 0x1f,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           FVar15 = local_1c0.Array.AllocatorInstance.SecondaryData,
           iVar17 = local_1c0.Array.ArrayNum, bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FReply *)(*pcVar4)();
          return pFVar11;
        }
        FVar13 = (ForElementType<FArrangedWidget>)&local_1c0.Array;
        if (FVar15 != (ForElementType<FArrangedWidget>)0x0) {
          FVar13 = FVar15;
        }
        uVar8 = uVar19;
        if ((int)uVar7 < iVar17) {
          uVar8 = local_1f0;
        }
        if (uVar8 == 0) {
          lVar23 = lVar18;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          iVar24 = (int)((ulonglong)lVar23 >> 0x20);
          FVar15 = local_1c0.Array.AllocatorInstance.SecondaryData;
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pFVar11 = (FReply *)(*pcVar4)();
            return pFVar11;
          }
        }
        FVar16 = (ForElementType<FArrangedWidget>)&local_1c0.Array;
        if (FVar15 != (ForElementType<FArrangedWidget>)0x0) {
          FVar16 = FVar15;
        }
        local_200 = (TVector2<float>_u_0)
                    *(TVector2<float>_u_0 *)
                     &((TVector2<float> *)((longlong)FVar16 + 0xc))[lVar18 * 9].field0_0x0._s_0;
        fStack_204 = (*(TVector2<float>_u_0 *)
                       &((TVector2<float> *)((longlong)FVar13 + 0xc))[(longlong)(int)local_1f8 * 9].
                        field0_0x0._s_0).Y;
        if (fStack_204 <= local_200._4_4_) {
          if (local_200._4_4_ <= fStack_204) {
            fStack_204 = SUB84((((FArrangedWidget *)((longlong)FVar16 + lVar18 * 0x48))->Geometry).
                               Size,4);
            uVar19 = (uint)(fStack_204 * __real_3f000000 < fVar22 + fVar21 + fVar1);
          }
          else {
            uVar19 = 1;
          }
        }
        __return_storage_ptr__ = local_1e8;
        if ((int)uVar7 < (int)this->_padding_) {
          TPanelChildren<SBoxPanel::FSlot>::operator[]
                    ((TPanelChildren<SBoxPanel::FSlot> *)&this->_padding_,uVar7);
          TVar14 = TDelegate<TOptional<enum_SDragAndDropVerticalBox::EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_SDragAndDropVerticalBox::EItemDropZone,int,SVerticalBox::FSlot_*),FDefaultDelegateUserPolicy>
                   ::Execute(&this->OnCanAcceptDropAdvanced,(FDragDropEvent *)local_1e0,
                             (EItemDropZone)param_2,uVar19,(FSlot *)CONCAT44(iVar24,uVar7));
          pFVar11 = local_1e8;
          if (TVar14 != (TOptional<SDragAndDropVerticalBox::EItemDropZone>)&this->ItemDropZone) {
            if (*(char *)((longlong)TVar14 + 4) == '\0') {
              if ((this->ItemDropZone).bIsSet != false) {
                (this->ItemDropZone).bIsSet = false;
              }
            }
            else {
              (this->ItemDropZone).TypedValue = *(EItemDropZone *)TVar14;
              (this->ItemDropZone).bIsSet = true;
            }
          }
          (this->CurrentDragOperationScreenSpaceLocation).field0_0x0 =
               (TVector2<float>_u_0)param_2->_padding_;
          this->CurrentDragOverSlotIndex = uVar7;
          FReply::FReply(local_1e8,true);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar20);
          FVar15 = (ForElementType<FArrangedWidget>)&local_1c0.Array;
          if (local_1c0.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FVar15 = local_1c0.Array.AllocatorInstance.SecondaryData;
          }
          DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar15,local_1c0.Array.ArrayNum);
          if (local_1c0.Array.AllocatorInstance.SecondaryData ==
              (ForElementType<FArrangedWidget>)0x0) {
            return pFVar11;
          }
          FMemory::Free((void *)local_1c0.Array.AllocatorInstance.SecondaryData);
          return pFVar11;
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  FVar15 = (ForElementType<FArrangedWidget>)&local_1c0.Array;
  if (local_1c0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar15 = local_1c0.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar15,local_1c0.Array.ArrayNum);
  if (local_1c0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_1c0.Array.AllocatorInstance.SecondaryData);
  }
LAB_1425ed812:
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnDrop @ 1425ed890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDragAndDropVerticalBox::OnDrop
          (SDragAndDropVerticalBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDragAndDropVerticalBoxOp *pFVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FString *pFVar9;
  TOptional<SDragAndDropVerticalBox::EItemDropZone> TVar10;
  FReply *pFVar11;
  ForElementType<FArrangedWidget> FVar12;
  EItemDropZone EVar13;
  longlong *plVar14;
  undefined1 auStackY_2d8 [32];
  undefined4 in_stack_fffffffffffffd4c;
  TSharedPtr<FDragAndDropVerticalBoxOp,1> local_2a8;
  FDeprecateVector2DParameter local_298;
  EItemDropZone local_290 [2];
  undefined1 local_288 [40];
  FReadAccessScope local_260;
  FReply local_248;
  FArrangedChildren local_190;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  FReply::FReply(__return_storage_ptr__,false);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnAcceptDrop,
             (FReadAccessScope *)(local_288 + 0x10));
  if (((*(int *)&(this->OnAcceptDrop).field_0x10 == 0) ||
      (plVar14 = *(longlong **)&(this->OnAcceptDrop).field_0x8, plVar14 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*plVar14 + 0x38))(), cVar5 == '\0')) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_288 + 0x10));
  if (!bVar7) {
    return __return_storage_ptr__;
  }
  local_190.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
  plVar14 = (longlong *)0x0;
  local_190.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_190.Array.ArrayNum = 0;
  local_190.Array.ArrayMax = 4;
  local_190.bAllow3DWidgets = false;
  (**(code **)(this->_padding_ + 0x240))(this,param_1,&local_190);
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    pFVar9 = FDragAndDropVerticalBoxOp::GetTypeId();
    cVar5 = (*pcVar2)(pFVar1,pFVar9);
    if (cVar5 != '\0') {
      pTVar3 = (param_2->Content).SharedReferenceCount.ReferenceController;
      pFVar1 = (param_2->Content).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (pFVar1 == (FDragDropOperation *)0x0) goto LAB_1425edb7d;
      local_298 = (FDeprecateVector2DParameter)param_2->_padding_;
      iVar8 = SWidget::FindChildUnderPosition(&local_190,&local_298);
      if ((-1 < iVar8) && (iVar8 < (int)this->_padding_)) {
        local_2a8.Object =
             (FDragAndDropVerticalBoxOp *)
             TPanelChildren<SBoxPanel::FSlot>::operator[]
                       ((TPanelChildren<SBoxPanel::FSlot> *)&this->_padding_,iVar8);
        bVar7 = (this->ItemDropZone).bIsSet;
        EVar13 = local_290[0];
        if (bVar7 != false) {
          EVar13 = (this->ItemDropZone).TypedValue;
        }
        bVar6 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                           &this->OnCanAcceptDropAdvanced);
        if (((bVar6) && ((this->ItemDropZone).bIsSet != false)) &&
           (TVar10 = TDelegate<TOptional<enum_SDragAndDropVerticalBox::EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_SDragAndDropVerticalBox::EItemDropZone,int,SVerticalBox::FSlot_*),FDefaultDelegateUserPolicy>
                     ::Execute(&this->OnCanAcceptDropAdvanced,(FDragDropEvent *)local_288,
                               (EItemDropZone)param_2,(this->ItemDropZone).TypedValue,
                               (FSlot *)CONCAT44(in_stack_fffffffffffffd4c,iVar8)),
           TVar10 != (TOptional<SDragAndDropVerticalBox::EItemDropZone>)local_290)) {
          if (*(char *)((longlong)TVar10 + 4) != '\0') {
            EVar13 = *(EItemDropZone *)TVar10;
LAB_1425eda73:
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnAcceptDrop
                       ,&local_260);
            if (*(int *)&(this->OnAcceptDrop).field_0x10 != 0) {
              plVar14 = *(longlong **)&(this->OnAcceptDrop).field_0x8;
            }
            (**(code **)(*plVar14 + 0x60))(plVar14,&local_248,param_2,EVar13);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_260);
            FReply::operator=(__return_storage_ptr__,&local_248);
            FReply::~FReply(&local_248);
            if ((char)__return_storage_ptr__->_padding_ != '\0') {
              FDragDropEvent::GetOperationAs<FDragAndDropVerticalBoxOp>(param_2,&local_2a8);
              pFVar4 = local_2a8.Object;
              if (((FSlot *)local_2a8.Object == (FSlot *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar2 = (code *)swi(3);
                pFVar11 = (FReply *)(*pcVar2)();
                return pFVar11;
              }
              TPanelChildren<SBoxPanel::FSlot>::Move
                        ((TPanelChildren<SBoxPanel::FSlot> *)&this->_padding_,
                         pFVar4->SlotIndexBeingDragged,iVar8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_2a8.SharedReferenceCount.ReferenceController);
            }
          }
        }
        else if (bVar7 != false) goto LAB_1425eda73;
      }
      if (((TOptional<SDragAndDropVerticalBox::EItemDropZone> *)(local_288 + 8) !=
           &this->ItemDropZone) && ((this->ItemDropZone).bIsSet != false)) {
        (this->ItemDropZone).bIsSet = false;
      }
      (this->CurrentDragOperationScreenSpaceLocation).field0_0x0._s_0 =
           (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      this->CurrentDragOverSlotIndex = -1;
      goto LAB_1425edb7d;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_1425edb7d:
  FVar12 = (ForElementType<FArrangedWidget>)&local_190.Array;
  if (local_190.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar12 = local_190.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar12,local_190.Array.ArrayNum);
  if (local_190.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_190.Array.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 1425ee780

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDragAndDropVerticalBox::OnMouseButtonDown
          (SDragAndDropVerticalBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  FKeyDetails *pFVar6;
  FSharedReferencer<1> FVar7;
  FSharedReferencer<1> FVar8;
  FWeakReferencer<1> FVar9;
  TSharedRef<SWidget,1> *pTVar10;
  bool bVar11;
  TSharedRef<SWidget,1> local_e8;
  FReply local_d8;
  
  FVar3 = (param_2->EffectingButton).KeyName;
  pTVar4 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar11 = FVar3 != EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (bVar11) {
    FReply::FReply(__return_storage_ptr__,false);
    return __return_storage_ptr__;
  }
  FReply::FReply(&local_d8,true);
  FVar7 = EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount;
  pFVar6 = EKeys::LeftMouseButton.KeyDetails.Object;
  FVar3 = EKeys::LeftMouseButton.KeyName;
  if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_e8);
  pTVar4 = (pTVar10->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar10->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8.DetectDragForWidget.Object = pSVar5;
  FVar9.ReferenceController = local_d8.DetectDragForWidget.WeakReferenceCount.ReferenceController;
  if (pTVar4 != local_d8.DetectDragForWidget.WeakReferenceCount.ReferenceController) {
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    FVar9.ReferenceController = pTVar4;
    if (local_d8.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_d8.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_d8.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_d8.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  local_d8.DetectDragForWidget.WeakReferenceCount.ReferenceController = FVar9.ReferenceController;
  FVar8.ReferenceController =
       local_d8.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
  local_d8.DetectDragForMouseButton.KeyName = FVar3;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8.DetectDragForMouseButton.KeyDetails.Object = pFVar6;
  local_d8.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.ReferenceController =
       FVar7.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  FReply::FReply(__return_storage_ptr__,&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FReply::~FReply(&local_d8);
  return __return_storage_ptr__;
}

// OnPaint @ 1425ef910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SDragAndDropVerticalBox::OnPaint
          (SDragAndDropVerticalBox *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  FSlateBrush *pFVar1;
  TTransform2<float> *pTVar2;
  ESlateColorStylingMode EVar3;
  EItemDropZone EVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FSlateColor *this_00;
  ForElementType<FArrangedWidget> FVar11;
  FArrangedWidget *pFVar12;
  uint uVar13;
  undefined1 auStackY_378 [32];
  FLinearColor_u_0 local_328;
  FSlateWindowElementList *local_318;
  TVector2<float>_u_0 local_310;
  float local_308;
  undefined8 local_304;
  FDeprecateSlateVector2D local_2fc;
  float local_2f4 [2];
  float afStack_2ec [2];
  TVector2<float>_u_0 local_2e4;
  byte local_2dc;
  uchar local_2d8 [8];
  FArrangedWidget local_2d0 [4];
  FArrangedWidget *local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  undefined1 local_1a0;
  FArrangedChildren local_198;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_2d8[0] = (uchar)EVisibility::Visible.Value.Value;
  local_318 = param_4;
  local_1b0 = (FArrangedWidget *)0x0;
  local_1a8 = 0;
  local_1a4 = 4;
  local_1a0 = 0;
  (**(code **)(this->_padding_ + 0x240))(this,param_2,local_2d8);
  local_198.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
  local_198.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_198.Array.ArrayNum = 0;
  local_198.Array.ArrayMax = 4;
  local_198.bAllow3DWidgets = false;
  (**(code **)(this->_padding_ + 0x240))(this,param_2,&local_198);
  uVar8 = SPanel::PaintArrangedChildren
                    ((SPanel *)this,param_1,&local_198,param_2,param_3,param_4,param_5,param_6,
                     param_7);
  FVar11 = (ForElementType<FArrangedWidget>)&local_198.Array;
  if (local_198.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar11 = local_198.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar11,local_198.Array.ArrayNum);
  if (local_198.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_198.Array.AllocatorInstance.SecondaryData);
  }
  uVar13 = uVar8;
  if ((this->ItemDropZone).bIsSet != false) {
    EVar4 = (this->ItemDropZone).TypedValue;
    if ((EVar4 == AboveItem) || (lVar10 = 0x3a0, EVar4 != BelowItem)) {
      lVar10 = 0x2f0;
    }
    uVar5 = this->CurrentDragOverSlotIndex;
    pFVar1 = (FSlateBrush *)((longlong)&this->_padding_ + lVar10);
    if ((-1 < (int)uVar5) && ((int)uVar5 < local_1a8)) {
      uVar13 = 0;
      if ((int)uVar5 < local_1a8) {
        uVar13 = ~uVar5 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
      EVar3 = (pFVar1->TintColor).ColorUseRule;
      this_00 = &pFVar1->TintColor;
      pFVar12 = local_2d0;
      if (local_1b0 != (FArrangedWidget *)0x0) {
        pFVar12 = local_1b0;
      }
      if (EVar3 != UseColor_Specified) {
        if (EVar3 == UseColor_ColorTable) {
          this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
        }
        else if ((EVar3 == UseColor_Foreground) || (EVar3 != UseColor_Foreground_Subdued)) {
          this_00 = (FSlateColor *)&param_6->ForegroundColor;
        }
        else {
          this_00 = (FSlateColor *)&param_6->SubduedForeground;
        }
      }
      local_310 = pFVar12[(int)uVar5].Geometry.AbsolutePosition.field0_0x0;
      local_328._s_0.R =
           (this_00->SpecifiedColor).field0_0x0._s_0.R *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
      local_2fc = pFVar12[(int)uVar5].Geometry.Size;
      local_328._s_0.G =
           (this_00->SpecifiedColor).field0_0x0._s_0.G *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
      local_328._s_0.B =
           (this_00->SpecifiedColor).field0_0x0._s_0.B *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
      local_2dc = pFVar12[(int)uVar5].Geometry.bHasRenderTransform * '\x02' | local_2dc & 0xfc;
      local_328._s_0.A =
           (this_00->SpecifiedColor).field0_0x0._s_0.A *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
      local_308 = pFVar12[(int)uVar5].Geometry.Scale;
      pTVar2 = &pFVar12[(int)uVar5].Geometry.AccumulatedRenderTransform;
      local_2f4 = (pTVar2->M).M[0];
      afStack_2ec = (pTVar2->M).M[1];
      local_304 = 0;
      local_2e4 = pFVar12[(int)uVar5].Geometry.AccumulatedRenderTransform.Trans.field0_0x0;
      uVar13 = uVar8 + 1;
      FSlateDrawElement::MakeBox
                (local_318,uVar8,(FPaintGeometry *)&local_310._s_0,pFVar1,None,
                 (FLinearColor *)&local_328._s_0);
    }
  }
  pFVar12 = local_2d0;
  if (local_1b0 != (FArrangedWidget *)0x0) {
    pFVar12 = local_1b0;
  }
  DestructItems<FArrangedWidget,int>(pFVar12,local_1a8);
  if (local_1b0 != (FArrangedWidget *)0x0) {
    FMemory::Free(local_1b0);
  }
  return uVar13;
}

// ZoneFromPointerPosition @ 142606190

EItemDropZone __thiscall
SDragAndDropVerticalBox::ZoneFromPointerPosition
          (SDragAndDropVerticalBox *this,TVector2<float> param_1,FGeometry *param_2,
          FGeometry *param_3)

{
  float fStackX_14;
  float fStackX_1c;
  float fStackX_24;
  
  fStackX_1c = (param_3->AbsolutePosition).field0_0x0._s_0.Y;
  fStackX_24 = (param_2->AbsolutePosition).field0_0x0._s_0.Y;
  if (fStackX_24 < fStackX_1c) {
    return AboveItem;
  }
  if (fStackX_24 <= fStackX_1c) {
    fStackX_1c = SUB84(param_2->Size,4);
    fStackX_14 = param_1.field0_0x0._4_4_;
    return (EItemDropZone)(fStackX_1c * __real_3f000000 < fStackX_14);
  }
  return BelowItem;
}

