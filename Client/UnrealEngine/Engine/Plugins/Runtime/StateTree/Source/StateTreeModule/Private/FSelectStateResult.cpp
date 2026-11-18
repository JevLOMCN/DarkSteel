// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 8

// FSelectStateResult @ 14d4e9f80

FSelectStateResult * __thiscall
FStateTreeExecutionContext::FSelectStateResult::FSelectStateResult
          (FSelectStateResult *this,FSelectStateResult *param_1)

{
  TArray<UE::StateTree::FActiveState,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FActiveStateID FVar4;
  undefined2 uVar5;
  ForElementType<UE::StateTree::FActiveFrameID> _Dst;
  ForElementType<FStateTreeExecutionFrame> FVar6;
  ForElementType<FStateTreeExecutionContext::FSelectionEventWithID> FVar7;
  ForElementType<FStateTreeExecutionFrame> FVar8;
  ForElementType<FStateTreeExecutionContext::FSelectionEventWithID> FVar9;
  ForElementType<UE::StateTree::FActiveFrameID> _Src_00;
  
  pTVar1 = &this->SelectedStates;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FSelectStateResult_FStateTreeExecutionContext__6B_;
  iVar3 = (param_1->SelectedStates).ArrayNum;
  piVar2 = &(this->SelectedStates).ArrayMax;
  _Src = (param_1->SelectedStates).AllocatorInstance.Data;
  (this->SelectedStates).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0xc);
  }
  (this->SelectedFrames).AllocatorInstance.SecondaryData =
       (ForElementType<UE::StateTree::FActiveFrameID>)0x0;
  _Src_00 = (param_1->SelectedFrames).AllocatorInstance.SecondaryData;
  iVar3 = (param_1->SelectedFrames).ArrayNum;
  (this->SelectedFrames).ArrayNum = iVar3;
  if (_Src_00 == (ForElementType<UE::StateTree::FActiveFrameID>)0x0) {
    _Src_00 = (ForElementType<UE::StateTree::FActiveFrameID>)&param_1->SelectedFrames;
  }
  piVar2 = &(this->SelectedFrames).ArrayMax;
  if (iVar3 == 0) {
    *piVar2 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::FActiveFrameID>_>
              (4,4,iVar3,0,&(this->SelectedFrames).AllocatorInstance,iVar3,piVar2);
    _Dst = (this->SelectedFrames).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<UE::StateTree::FActiveFrameID>)0x0) {
      _Dst = (ForElementType<UE::StateTree::FActiveFrameID>)&this->SelectedFrames;
    }
    memcpy((void *)_Dst,(void *)_Src_00,(longlong)iVar3 << 2);
  }
  (this->TemporaryFrames).AllocatorInstance.SecondaryData =
       (ForElementType<FStateTreeExecutionFrame>)0x0;
  FVar8 = (param_1->TemporaryFrames).AllocatorInstance.SecondaryData;
  iVar3 = (param_1->TemporaryFrames).ArrayNum;
  (this->TemporaryFrames).ArrayNum = iVar3;
  if (FVar8 == (ForElementType<FStateTreeExecutionFrame>)0x0) {
    FVar8 = (ForElementType<FStateTreeExecutionFrame>)&param_1->TemporaryFrames;
  }
  piVar2 = &(this->TemporaryFrames).ArrayMax;
  if (iVar3 == 0) {
    *piVar2 = 2;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionFrame>_>
              (0x70,8,iVar3,0,&(this->TemporaryFrames).AllocatorInstance,iVar3,piVar2);
    FVar6 = (this->TemporaryFrames).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FStateTreeExecutionFrame>)0x0) {
      FVar6 = (ForElementType<FStateTreeExecutionFrame>)&this->TemporaryFrames;
    }
    ConstructItems<FStateTreeExecutionFrame,FStateTreeExecutionFrame,int>
              ((void *)FVar6,(FStateTreeExecutionFrame *)FVar8,iVar3);
  }
  (this->SelectionEvents).AllocatorInstance.SecondaryData =
       (ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>)0x0;
  FVar9 = (param_1->SelectionEvents).AllocatorInstance.SecondaryData;
  iVar3 = (param_1->SelectionEvents).ArrayNum;
  (this->SelectionEvents).ArrayNum = iVar3;
  if (FVar9 == (ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>)0x0) {
    FVar9 = (ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>)
            &param_1->SelectionEvents;
  }
  piVar2 = &(this->SelectionEvents).ArrayMax;
  if (iVar3 == 0) {
    *piVar2 = 2;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>_>
              (0x20,8,iVar3,0,&(this->SelectionEvents).AllocatorInstance,iVar3,piVar2);
    FVar7 = (this->SelectionEvents).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>)0x0) {
      FVar7 = (ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>)
              &this->SelectionEvents;
    }
    ConstructItems<FStateTreeExecutionContext::FSelectionEventWithID,FStateTreeExecutionContext::FSelectionEventWithID,int>
              ((void *)FVar7,(FSelectionEventWithID *)FVar9,iVar3);
  }
  FVar4.Value = (param_1->TargetState).StateID.Value;
  (this->TargetState).FrameID = (FActiveFrameID)(param_1->TargetState).FrameID.Value;
  (this->TargetState).StateID = (FActiveStateID)FVar4.Value;
  uVar5 = *(undefined2 *)&(param_1->TargetState).field_0xa;
  (this->TargetState).StateHandle = (FStateTreeStateHandle)(param_1->TargetState).StateHandle.Index;
  *(undefined2 *)&(this->TargetState).field_0xa = uVar5;
  return this;
}

// ~FSelectStateResult @ 14d4ec4e0

void __thiscall
FStateTreeExecutionContext::FSelectStateResult::~FSelectStateResult(FSelectStateResult *this)

{
  ForElementType<UE::StateTree::FActiveFrameID> FVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FStateTreeExecutionContext::FSelectionEventWithID> FVar3;
  ForElementType<FStateTreeExecutionFrame> FVar4;
  
  FVar3 = (this->SelectionEvents).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>)0x0) {
    FVar3 = (ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>)
            &this->SelectionEvents;
  }
  DestructItems<FStateTreeExecutionContext::FSelectionEventWithID,int>
            ((FSelectionEventWithID *)FVar3,(this->SelectionEvents).ArrayNum);
  FVar3 = (this->SelectionEvents).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar4 = (this->TemporaryFrames).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<FStateTreeExecutionFrame>)0x0) {
    FVar4 = (ForElementType<FStateTreeExecutionFrame>)&this->TemporaryFrames;
  }
  DestructItems<FStateTreeExecutionFrame,int>
            ((FStateTreeExecutionFrame *)FVar4,(this->TemporaryFrames).ArrayNum);
  FVar4 = (this->TemporaryFrames).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FStateTreeExecutionFrame>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar1 = (this->SelectedFrames).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::StateTree::FActiveFrameID>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->SelectedStates).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator= @ 14d4ecb90

FSelectStateResult * __thiscall
FStateTreeExecutionContext::FSelectStateResult::operator=
          (FSelectStateResult *this,FSelectStateResult *param_1)

{
  TArray<UE::StateTree::FActiveState,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FStateTreeExecutionContext::FSelectionEventWithID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FActiveStateID FVar5;
  undefined2 uVar6;
  ForElementType<UE::StateTree::FActiveFrameID> _Dst;
  ForElementType<FStateTreeExecutionFrame> FVar7;
  ForElementType<FStateTreeExecutionFrame> FVar8;
  ForElementType<FStateTreeExecutionContext::FSelectionEventWithID> FVar9;
  ForElementType<FStateTreeExecutionContext::FSelectionEventWithID> FVar10;
  ForElementType<UE::StateTree::FActiveFrameID> _Src_00;
  TArray<FStateTreeExecutionFrame,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar11
  ;
  
  pTVar1 = &this->SelectedStates;
  if (pTVar1 != &param_1->SelectedStates) {
    iVar4 = (param_1->SelectedStates).ArrayNum;
    piVar2 = &(this->SelectedStates).ArrayMax;
    _Src = (param_1->SelectedStates).AllocatorInstance.Data;
    (this->SelectedStates).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0xc);
      }
    }
  }
  if (this == param_1) {
LAB_14d4ecc95:
    if (this == param_1) goto LAB_14d4ecddb;
  }
  else {
    _Src_00 = (param_1->SelectedFrames).AllocatorInstance.SecondaryData;
    piVar2 = &(this->SelectedFrames).ArrayMax;
    iVar4 = (param_1->SelectedFrames).ArrayNum;
    if (_Src_00 == (ForElementType<UE::StateTree::FActiveFrameID>)0x0) {
      _Src_00 = (ForElementType<UE::StateTree::FActiveFrameID>)&param_1->SelectedFrames;
    }
    (this->SelectedFrames).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::StateTree::FActiveFrameID>_>
                (4,4,iVar4,*piVar2,&(this->SelectedFrames).AllocatorInstance,iVar4,piVar2);
      _Dst = (this->SelectedFrames).AllocatorInstance.SecondaryData;
      if (iVar4 == 0) goto LAB_14d4ecc95;
      if (_Dst == (ForElementType<UE::StateTree::FActiveFrameID>)0x0) {
        _Dst = (ForElementType<UE::StateTree::FActiveFrameID>)&this->SelectedFrames;
      }
      memcpy((void *)_Dst,(void *)_Src_00,(longlong)iVar4 << 2);
    }
  }
  pTVar11 = &this->TemporaryFrames;
  FVar7 = (this->TemporaryFrames).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<FStateTreeExecutionFrame>)0x0) {
    FVar7 = (ForElementType<FStateTreeExecutionFrame>)pTVar11;
  }
  DestructItems<FStateTreeExecutionFrame,int>
            ((FStateTreeExecutionFrame *)FVar7,(this->TemporaryFrames).ArrayNum);
  FVar7 = (param_1->TemporaryFrames).AllocatorInstance.SecondaryData;
  piVar2 = &(this->TemporaryFrames).ArrayMax;
  iVar4 = (param_1->TemporaryFrames).ArrayNum;
  if (FVar7 == (ForElementType<FStateTreeExecutionFrame>)0x0) {
    FVar7 = (ForElementType<FStateTreeExecutionFrame>)&param_1->TemporaryFrames;
  }
  (this->TemporaryFrames).ArrayNum = iVar4;
  if ((iVar4 == 0) && (*piVar2 == 0)) {
    *piVar2 = 2;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionFrame>_>
              (0x70,8,iVar4,*piVar2,&pTVar11->AllocatorInstance,iVar4,piVar2);
    FVar8 = (this->TemporaryFrames).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FStateTreeExecutionFrame>)0x0) {
      FVar8 = (ForElementType<FStateTreeExecutionFrame>)pTVar11;
    }
    ConstructItems<FStateTreeExecutionFrame,FStateTreeExecutionFrame,int>
              ((void *)FVar8,(FStateTreeExecutionFrame *)FVar7,iVar4);
  }
  FVar9 = (this->SelectionEvents).AllocatorInstance.SecondaryData;
  pTVar3 = &this->SelectionEvents;
  if (FVar9 == (ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>)0x0) {
    FVar9 = (ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>)pTVar3;
  }
  DestructItems<FStateTreeExecutionContext::FSelectionEventWithID,int>
            ((FSelectionEventWithID *)FVar9,(this->SelectionEvents).ArrayNum);
  FVar9 = (param_1->SelectionEvents).AllocatorInstance.SecondaryData;
  piVar2 = &(this->SelectionEvents).ArrayMax;
  iVar4 = (param_1->SelectionEvents).ArrayNum;
  if (FVar9 == (ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>)0x0) {
    FVar9 = (ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>)
            &param_1->SelectionEvents;
  }
  (this->SelectionEvents).ArrayNum = iVar4;
  if ((iVar4 == 0) && (*piVar2 == 0)) {
    *piVar2 = 2;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>_>
              (0x20,8,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
    FVar10 = (this->SelectionEvents).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>)0x0) {
      FVar10 = (ForElementType<FStateTreeExecutionContext::FSelectionEventWithID>)pTVar3;
    }
    ConstructItems<FStateTreeExecutionContext::FSelectionEventWithID,FStateTreeExecutionContext::FSelectionEventWithID,int>
              ((void *)FVar10,(FSelectionEventWithID *)FVar9,iVar4);
  }
LAB_14d4ecddb:
  FVar5.Value = (param_1->TargetState).StateID.Value;
  (this->TargetState).FrameID = (FActiveFrameID)(param_1->TargetState).FrameID.Value;
  (this->TargetState).StateID = (FActiveStateID)FVar5.Value;
  uVar6 = *(undefined2 *)&(param_1->TargetState).field_0xa;
  (this->TargetState).StateHandle = (FStateTreeStateHandle)(param_1->TargetState).StateHandle.Index;
  *(undefined2 *)&(this->TargetState).field_0xa = uVar6;
  return this;
}

// GetExecutionFrame @ 14d4fdca0

FFrameAndParent * __thiscall
FStateTreeExecutionContext::FSelectStateResult::GetExecutionFrame
          (FSelectStateResult *this,FFrameAndParent *__return_storage_ptr__,FActiveFrameID param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FFrameAndParent *pFVar4;
  uint uVar5;
  ForElementType<FStateTreeExecutionFrame> FVar6;
  ForElementType<UE::StateTree::FActiveFrameID> FVar7;
  ForElementType<FStateTreeExecutionFrame> FVar8;
  ForElementType<FStateTreeExecutionFrame> FVar9;
  uint uVar10;
  int iVar11;
  ForElementType<UE::StateTree::FActiveFrameID> FVar12;
  
  iVar1 = (this->SelectedFrames).ArrayNum;
  FVar7 = (this->SelectedFrames).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::StateTree::FActiveFrameID>)0x0) {
    FVar7 = (ForElementType<UE::StateTree::FActiveFrameID>)&this->SelectedFrames;
  }
  FVar12 = FVar7;
  do {
    if (FVar12 == (ForElementType<UE::StateTree::FActiveFrameID>)
                  ((longlong)FVar7 + (longlong)iVar1 * 4)) {
LAB_14d4fdcee:
      FVar6 = (ForElementType<FStateTreeExecutionFrame>)0x0;
      uVar5 = 0;
LAB_14d4fdcf2:
      __return_storage_ptr__->Frame = (FStateTreeExecutionFrame *)FVar6;
      (__return_storage_ptr__->ParentFrameID).Value = uVar5;
      return __return_storage_ptr__;
    }
    if (*(uint *)FVar12 == param_1.Value) {
      iVar11 = (int)((longlong)FVar12 - (longlong)FVar7 >> 2);
      if (iVar11 != -1) {
        FVar9 = (this->TemporaryFrames).AllocatorInstance.SecondaryData;
        if (FVar9 == (ForElementType<FStateTreeExecutionFrame>)0x0) {
          FVar9 = (ForElementType<FStateTreeExecutionFrame>)&this->TemporaryFrames;
        }
        uVar5 = 0;
        FVar8 = (ForElementType<FStateTreeExecutionFrame>)
                ((longlong)(this->TemporaryFrames).ArrayNum * 0x70 + (longlong)FVar9);
        for (; (FVar6 = (ForElementType<FStateTreeExecutionFrame>)0x0, FVar9 != FVar8 &&
               (FVar6 = FVar9, *(uint *)((longlong)FVar9 + 0x50) != param_1.Value));
            FVar9 = (ForElementType<FStateTreeExecutionFrame>)((longlong)FVar9 + 0x70)) {
        }
        if (0 < iVar11) {
          uVar10 = iVar11 - 1;
          if ((int)uVar10 < iVar1) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar4 = (FFrameAndParent *)(*pcVar2)();
            return pFVar4;
          }
          FVar7 = (this->SelectedFrames).AllocatorInstance.SecondaryData;
          if (FVar7 == (ForElementType<UE::StateTree::FActiveFrameID>)0x0) {
            FVar7 = (ForElementType<UE::StateTree::FActiveFrameID>)&this->SelectedFrames;
          }
          uVar5 = *(uint *)((longlong)FVar7 + (longlong)(int)uVar10 * 4);
        }
        goto LAB_14d4fdcf2;
      }
      goto LAB_14d4fdcee;
    }
    FVar12 = (ForElementType<UE::StateTree::FActiveFrameID>)((longlong)FVar12 + 4);
  } while( true );
}

// GetStateHandle @ 14d4ff830

FActiveState * __thiscall
FStateTreeExecutionContext::FSelectStateResult::GetStateHandle
          (FSelectStateResult *this,FActiveState *__return_storage_ptr__,FActiveStateID param_1)

{
  undefined8 uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FActiveState *pFVar7;
  uint uVar8;
  TArrayView<UE::StateTree::FActiveState_const_,int> local_18;
  
  local_18.DataPtr = (FActiveState *)(this->SelectedStates).AllocatorInstance.Data;
  iVar2 = (this->SelectedStates).ArrayNum;
  if (iVar2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FActiveState *)(*pcVar4)();
      return pFVar7;
    }
  }
  local_18.ArrayNum = iVar2;
  uVar6 = UE::StateTree::FActiveStatePath::IndexOf(&local_18,param_1);
  if (uVar6 == 0xffffffff) {
    *(undefined4 *)&__return_storage_ptr__->StateHandle = 0xffff;
    __return_storage_ptr__->FrameID = 0;
    __return_storage_ptr__->StateID = 0;
  }
  else {
    uVar8 = 0;
    if ((int)uVar6 < (this->SelectedStates).ArrayNum) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FActiveState *)(*pcVar4)();
        return pFVar7;
      }
    }
    pFVar3 = (this->SelectedStates).AllocatorInstance.Data;
    uVar1 = *(undefined8 *)(pFVar3 + (longlong)(int)uVar6 * 0xc);
    __return_storage_ptr__->FrameID = (FActiveFrameID)(int)uVar1;
    __return_storage_ptr__->StateID = (FActiveStateID)(int)((ulonglong)uVar1 >> 0x20);
    *(undefined4 *)&__return_storage_ptr__->StateHandle =
         *(undefined4 *)(pFVar3 + (longlong)(int)uVar6 * 0xc + 8);
  }
  return __return_storage_ptr__;
}

// MakeAndAddTemporaryFrame @ 14d501b30

FStateTreeExecutionFrame * __thiscall
FStateTreeExecutionContext::FSelectStateResult::MakeAndAddTemporaryFrame
          (FSelectStateResult *this,FActiveFrameID param_1,FExecutionFrameHandle *param_2,
          bool param_3)

{
  int *piVar1;
  ushort uVar2;
  UStateTree *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FCompactStateTreeFrame *pFVar7;
  FStateTreeTasksCompletionStatus *pFVar8;
  ForElementType<FStateTreeExecutionFrame> FVar9;
  FStateTreeExecutionFrame *pFVar10;
  undefined1 local_res20 [8];
  FStateTreeTasksCompletionStatus local_48;
  FStateTreeTasksCompletionStatus local_38;
  
  if ((((param_2->RootState).Index == 0xffff) ||
      ((param_2->StateTree).field0_0x0.DebugPtr == (UStateTree *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionContext.cpp"
                         ,0x39e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FStateTreeExecutionFrame *)(*pcVar4)();
    return pFVar10;
  }
  iVar6 = (this->TemporaryFrames).ArrayNum;
  piVar1 = &(this->TemporaryFrames).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeExecutionFrame>_>
                      (0x870,&(this->TemporaryFrames).AllocatorInstance,piVar1);
  }
  (this->TemporaryFrames).ArrayNum = iVar6 + 1;
  FVar9 = (this->TemporaryFrames).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FStateTreeExecutionFrame>)0x0) {
    FVar9 = (ForElementType<FStateTreeExecutionFrame>)&this->TemporaryFrames;
  }
  pFVar10 = (FStateTreeExecutionFrame *)((longlong)iVar6 * 0x70 + (longlong)FVar9);
  DefaultConstructItems<FStateTreeExecutionFrame,int>(pFVar10,1);
  (pFVar10->FrameID).Value = param_1.Value;
  pUVar3 = (param_2->StateTree).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (pFVar10->StateTree).field0_0x0.DebugPtr = pUVar3;
  uVar2 = (param_2->RootState).Index;
  pFVar10->bIsGlobalFrame = '\0';
  pFVar10->field_0x6a = pFVar10->field_0x6a | param_3;
  (pFVar10->RootState).Index = uVar2;
  pFVar7 = UE::StateTree::ExecutionContext::Private::FindStateTreeFrame(param_2);
  if (pFVar7 == (FCompactStateTreeFrame *)0x0) {
    `FStateTreeExecutionContext::FSelectStateResult::MakeAndAddTemporaryFrame'::__l2::<lambda_1>::
    operator()(local_res20);
    local_48.Buffer = (uint *)0x0;
    local_48.BufferNum = '\0';
    local_48._9_7_ = 0;
    FStateTreeTasksCompletionStatus::operator=(&pFVar10->ActiveTasksStatus,&local_48);
    pFVar8 = &local_48;
  }
  else {
    pFVar8 = FStateTreeTasksCompletionStatus::FStateTreeTasksCompletionStatus(&local_38,pFVar7);
    FStateTreeTasksCompletionStatus::operator=(&pFVar10->ActiveTasksStatus,pFVar8);
    pFVar8 = &local_38;
  }
  FStateTreeTasksCompletionStatus::~FStateTreeTasksCompletionStatus(pFVar8);
  return pFVar10;
}

// MakeAndAddTemporaryFrameWithNewRoot @ 14d501ca0

FStateTreeExecutionFrame * __thiscall
FStateTreeExecutionContext::FSelectStateResult::MakeAndAddTemporaryFrameWithNewRoot
          (FSelectStateResult *this,FActiveFrameID param_1,FExecutionFrameHandle *param_2,
          FStateTreeExecutionFrame *param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  ushort uVar3;
  bool bVar4;
  FStateTreeExecutionFrame *pFVar5;
  
  if (((param_2->RootState).Index == 0xffff) ||
     ((param_2->StateTree).field0_0x0.DebugPtr == (UStateTree *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionContext.cpp"
                       ,0x3b2,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FStateTreeExecutionFrame *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar5 = MakeAndAddTemporaryFrame(this,param_1,param_2,true);
  (pFVar5->ExternalDataBaseIndex).Value = (param_3->ExternalDataBaseIndex).Value;
  uVar2 = (param_3->GlobalParameterDataHandle).field_0x1;
  uVar3 = (param_3->GlobalParameterDataHandle).Index;
  (pFVar5->GlobalParameterDataHandle).Source = (param_3->GlobalParameterDataHandle).Source;
  (pFVar5->GlobalParameterDataHandle).field_0x1 = uVar2;
  (pFVar5->GlobalParameterDataHandle).Index = uVar3;
  (pFVar5->GlobalParameterDataHandle).StateHandle.Index =
       (param_3->GlobalParameterDataHandle).StateHandle.Index;
  (pFVar5->GlobalInstanceIndexBase).Value = (param_3->GlobalInstanceIndexBase).Value;
  pFVar5->field_0x6a = pFVar5->field_0x6a ^ (pFVar5->field_0x6a ^ param_3->field_0x6a) & 2;
  param_3->bHaveEntered = '\0';
  return pFVar5;
}

// operator() @ 15057efa0

bool __thiscall
`FStateTreeExecutionContext::FSelectStateResult::MakeAndAddTemporaryFrame'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_244450361459342425>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_244450361459342425>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

