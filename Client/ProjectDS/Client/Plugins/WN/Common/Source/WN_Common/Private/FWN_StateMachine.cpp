// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 8

// CreateState @ 14949b680

void __thiscall FWN_StateMachine::CreateState(FWN_StateMachine *this,FName param_1)

{
  int *piVar1;
  TArray<FWN_StateMachine_StateNode,TSizedDefaultAllocator<32>_> *this_00;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FName *local_res8;
  FName local_res10 [3];
  undefined2 uStack_26;
  FNameEntryId FStack_24;
  uint uStack_20;
  
  this_00 = &this->StateNodes;
  local_res10[0] = param_1;
  iVar2 = TArray<FWN_StateMachine_StateNode,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_FWN_StateMachine::FindStateNodeIndex_::__l2::<lambda_1>_>
                    (this_00,(<lambda_1>)param_1,(this->StateNodes).ArrayNum);
  if (iVar2 != -1) {
    local_res8 = local_res10;
    `FWN_StateMachine::CreateState'::__l5::<lambda_1>::operator()(&local_res8);
  }
  piVar1 = &(this->StateNodes).ArrayMax;
  FStack_24 = local_res10[0].ComparisonIndex.Value;
  uStack_20 = local_res10[0].Number;
  iVar2 = (this->StateNodes).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&this_00->AllocatorInstance,piVar1);
  }
  (this->StateNodes).ArrayNum = iVar2 + 1;
  pFVar3 = (this_00->AllocatorInstance).Data + (longlong)iVar2 * 0x20;
  *(ulonglong *)pFVar3 = CONCAT44(FStack_24.Value,CONCAT22(uStack_26,0x200));
  *(uint *)(pFVar3 + 8) = uStack_20;
  *(undefined8 *)(pFVar3 + 0x10) = 0;
  *(undefined8 *)(pFVar3 + 0x18) = 0;
  return;
}

// CreateTransition @ 14949b720

void __thiscall
FWN_StateMachine::CreateTransition(FWN_StateMachine *this,FName param_1,FName param_2,FName param_3)

{
  int *piVar1;
  TArray<FWN_StateMachine_TransitionNode,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  TArray<FWN_StateMachine_StateNode,TSizedDefaultAllocator<32>_> *this_01;
  FName *local_res8;
  FName local_res10;
  FName local_68;
  FName *local_60;
  FName local_58;
  FName *local_50;
  undefined2 local_48;
  undefined2 uStack_46;
  FNameEntryId FStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  this_00 = &this->TransitionNodes;
  local_res10 = param_1;
  iVar6 = TArray<FWN_StateMachine_TransitionNode,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_FWN_StateMachine::FindTransitionNodeIndex_::__l2::<lambda_1>_>
                    (this_00,(<lambda_1>)param_1,(this->TransitionNodes).ArrayNum);
  if (iVar6 != -1) {
    local_res8 = &local_res10;
    `FWN_StateMachine::CreateTransition'::__l5::<lambda_1>::operator()(&local_res8);
    return;
  }
  this_01 = &this->StateNodes;
  local_68 = param_2;
  uVar7 = TArray<FWN_StateMachine_StateNode,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_FWN_StateMachine::FindStateNodeIndex_::__l2::<lambda_1>_>
                    (this_01,(<lambda_1>)param_2,(this->StateNodes).ArrayNum);
  if (uVar7 == 0xffffffff) {
    local_60 = &local_68;
    `FWN_StateMachine::FindStateNodeIndex'::__l5::<lambda_2>::operator()(&local_60);
    if ((this->TransitionNodes).ArrayNum < 1) {
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
    iVar6 = (this->TransitionNodes).ArrayNum;
    uVar7 = iVar6 - 1;
    pFVar2 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x14;
    iVar6 = ~uVar7 + iVar6;
    if (iVar6 != 0) {
      memmove(pFVar2,pFVar2 + 0x14,(longlong)iVar6 * 0x14);
    }
    piVar1 = &(this->TransitionNodes).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,&this_00->AllocatorInstance,(this->TransitionNodes).ArrayNum,
               &(this->TransitionNodes).ArrayMax);
    return;
  }
  local_58 = param_3;
  iVar6 = TArray<FWN_StateMachine_StateNode,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_FWN_StateMachine::FindStateNodeIndex_::__l2::<lambda_1>_>
                    (this_01,(<lambda_1>)param_3,(this->StateNodes).ArrayNum);
  if (iVar6 == -1) {
    local_50 = &local_58;
    `FWN_StateMachine::FindStateNodeIndex'::__l5::<lambda_2>::operator()(&local_50);
  }
  iVar9 = (this->TransitionNodes).ArrayNum;
  uVar10 = 0;
  if ((int)uVar7 < (this->StateNodes).ArrayNum) {
    uVar10 = ~uVar7 >> 0x1f;
  }
  if (uVar10 == 0) {
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
  pFVar2 = (this_01->AllocatorInstance).Data;
  iVar8 = *(int *)(pFVar2 + (longlong)(int)uVar7 * 0x20 + 0x18);
  if (iVar8 == *(int *)(pFVar2 + (longlong)(int)uVar7 * 0x20 + 0x1c)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)(pFVar2 + (longlong)(int)uVar7 * 0x20 + 0x10),
                       (int *)(pFVar2 + (longlong)(int)uVar7 * 0x20 + 0x1c));
  }
  local_48 = 0x200;
  *(int *)(pFVar2 + (longlong)(int)uVar7 * 0x20 + 0x18) = iVar8 + 1;
  piVar1 = &(this->TransitionNodes).ArrayMax;
  *(int *)(*(longlong *)(pFVar2 + (longlong)(int)uVar7 * 0x20 + 0x10) + (longlong)iVar8 * 4) = iVar9
  ;
  FStack_44 = local_res10.ComparisonIndex.Value;
  uStack_40 = local_res10.Number;
  iVar9 = (this->TransitionNodes).ArrayNum;
  uStack_3c = uVar7;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x414,&this_00->AllocatorInstance,piVar1);
  }
  (this->TransitionNodes).ArrayNum = iVar9 + 1;
  pFVar3 = (this_00->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar9 * 0x14;
  *(ulonglong *)pFVar2 = CONCAT44(FStack_44.Value,CONCAT22(uStack_46,local_48));
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_3c,uStack_40);
  *(int *)(pFVar3 + (longlong)iVar9 * 0x14 + 0x10) = iVar6;
  return;
}

// FindStateNodeIndex @ 14949fbe0

int __thiscall
FWN_StateMachine::FindStateNodeIndex(FWN_StateMachine *this,FName param_1,bool param_2)

{
  int iVar1;
  FName *local_res8;
  FName local_res10;
  
  local_res10 = param_1;
  iVar1 = TArray<FWN_StateMachine_StateNode,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_FWN_StateMachine::FindStateNodeIndex_::__l2::<lambda_1>_>
                    (&this->StateNodes,(<lambda_1>)param_1,(this->StateNodes).ArrayNum);
  if ((iVar1 == -1) && (param_2)) {
    local_res8 = &local_res10;
    `FWN_StateMachine::FindStateNodeIndex'::__l5::<lambda_2>::operator()(&local_res8);
  }
  return iVar1;
}

// FindTransitionNodeIndex @ 14949fcd0

int __thiscall
FWN_StateMachine::FindTransitionNodeIndex(FWN_StateMachine *this,FName param_1,bool param_2)

{
  int iVar1;
  FName *local_res8;
  FName local_res10;
  
  local_res10 = param_1;
  iVar1 = TArray<FWN_StateMachine_TransitionNode,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_FWN_StateMachine::FindTransitionNodeIndex_::__l2::<lambda_1>_>
                    (&this->TransitionNodes,(<lambda_1>)param_1,(this->TransitionNodes).ArrayNum);
  if ((iVar1 == -1) && (param_2)) {
    local_res8 = &local_res10;
    `FWN_StateMachine::FindTransitionNodeIndex'::__l5::<lambda_2>::operator()(&local_res8);
  }
  return iVar1;
}

// operator() @ 1505431d0

bool __thiscall `FWN_StateMachine::CreateState'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2709737941273411601>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2709737941273411601>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150543237;
    }
  }
  bVar2 = false;
LAB_150543237:
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

// operator() @ 150543270

bool __thiscall `FWN_StateMachine::CreateTransition'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2709737941273411615>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2709737941273411615>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505432d7;
    }
  }
  bVar2 = false;
LAB_1505432d7:
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

// operator() @ 1505433b0

bool __thiscall `FWN_StateMachine::FindStateNodeIndex'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2709737941273411655>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2709737941273411655>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150543417;
    }
  }
  bVar2 = false;
LAB_150543417:
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

// operator() @ 150543450

bool __thiscall
`FWN_StateMachine::FindTransitionNodeIndex'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2709737941273411671>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2709737941273411671>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505434b7;
    }
  }
  bVar2 = false;
LAB_1505434b7:
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

