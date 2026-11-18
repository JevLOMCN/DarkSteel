// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 3

// Execute @ 14949e300

void __thiscall
FWN_StateMachine_ExecutionContext::Execute(FWN_StateMachine_ExecutionContext *this,float param_1)

{
  uint *puVar1;
  FWN_StateMachine *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  FName *pFVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint *puVar21;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FReadAccessScope local_80;
  FReadAccessScope local_68 [2];
  
  pFVar2 = (this->StateMachine).Object;
  if (pFVar2 == (FWN_StateMachine *)0x0) {
    `FWN_StateMachine_ExecutionContext::Execute'::__l5::<lambda_1>::operator()(local_res18);
    return;
  }
  if ((pFVar2->StateNodes).ArrayNum == 0) {
    `FWN_StateMachine_ExecutionContext::Execute'::__l8::<lambda_2>::operator()(local_res20);
    return;
  }
  (**(code **)(this->_padding_ + 8))();
  if ((this->CurrentStateIndex == -1) && (this->CurrentTransitionIndex == -1)) {
    this->CurrentStateIndex = 0;
    if (((pFVar2->StateNodes).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar3 = (pFVar2->StateNodes).AllocatorInstance.Data;
    TDelegate<void___cdecl(FName,FName,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
    ::ExecuteIfBound(&pFVar2->OnEnterStateCallback,*(FName *)(pFVar3 + 4),(FName)0x0,this);
    (**(code **)(this->_padding_ + 0x18))(this,*(undefined8 *)(pFVar3 + 4),0);
  }
  uVar14 = this->CurrentStateIndex;
  bVar8 = false;
  uVar20 = 0;
  if (uVar14 != 0xffffffff) {
    uVar11 = 0;
    if ((int)uVar14 < (pFVar2->StateNodes).ArrayNum) {
      uVar11 = ~uVar14 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar3 = (pFVar2->StateNodes).AllocatorInstance.Data;
    lVar19 = (longlong)(int)uVar14 * 0x20;
    uVar14 = *(uint *)(pFVar3 + lVar19 + 0x18);
    uVar15 = (ulonglong)(int)uVar14;
    puVar21 = *(uint **)(pFVar3 + lVar19 + 0x10);
    puVar1 = puVar21 + uVar15;
    do {
      if (*(int *)(pFVar3 + lVar19 + 0x18) != (int)uVar15) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar21 == puVar1) goto LAB_14949e7ce;
      uVar11 = *puVar21;
      lVar16 = (longlong)(int)uVar11;
      uVar12 = 0;
      if ((int)uVar11 < (pFVar2->TransitionNodes).ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (pFVar2->TransitionNodes).AllocatorInstance.Data;
      uVar12 = *(uint *)(pFVar4 + lVar16 * 0x14 + 0x10);
      uVar13 = uVar20;
      if ((int)uVar12 < (pFVar2->StateNodes).ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (pFVar2->StateNodes).AllocatorInstance.Data;
      if ((this->CurrentStateIndex != *(int *)(pFVar4 + lVar16 * 0x14 + 0xc)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentStateIndex == transitionNode->StateNodeIndexFrom",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Common\\Source\\WN_Common\\Private\\WN_StateMachine.cpp"
                             ,0x8b,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar2->OnCheckTransitionCallback,&local_80);
      if (((*(int *)&(pFVar2->OnCheckTransitionCallback).field_0x10 == 0) ||
          (plVar6 = *(longlong **)&(pFVar2->OnCheckTransitionCallback).field_0x8,
          plVar6 == (longlong *)0x0)) || (cVar9 = (**(code **)(*plVar6 + 0x38))(), cVar9 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_80);
        cVar9 = (**(code **)(this->_padding_ + 0x40))
                          (this,*(undefined8 *)(pFVar4 + lVar16 * 0x14 + 4),
                           *(undefined8 *)(pFVar3 + lVar19 + 4),
                           *(undefined8 *)(pFVar5 + (longlong)(int)uVar12 * 0x20 + 4),param_1);
        if (cVar9 == '\x01') goto LAB_14949e63c;
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_80);
        bVar8 = TDelegate<bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
                ::Execute(&pFVar2->OnCheckTransitionCallback,*(FName *)(pFVar4 + lVar16 * 0x14 + 4),
                          *(FName *)(pFVar3 + lVar19 + 4),
                          *(FName *)(pFVar5 + (longlong)(int)uVar12 * 0x20 + 4),param_1,this);
        if (bVar8) goto LAB_14949e63c;
      }
      uVar15 = (ulonglong)uVar14;
      puVar21 = puVar21 + 1;
    } while( true );
  }
LAB_14949e7f6:
  uVar14 = this->CurrentTransitionIndex;
  lVar19 = (longlong)(int)uVar14;
  if (uVar14 != 0xffffffff) {
    uVar11 = 0;
    if ((int)uVar14 < (pFVar2->TransitionNodes).ArrayNum) {
      uVar11 = ~uVar14 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar3 = (pFVar2->TransitionNodes).AllocatorInstance.Data;
    uVar14 = *(uint *)(pFVar3 + lVar19 * 0x14 + 0xc);
    uVar11 = uVar20;
    if ((int)uVar14 < (pFVar2->StateNodes).ArrayNum) {
      uVar11 = ~uVar14 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar11 = *(uint *)(pFVar3 + lVar19 * 0x14 + 0x10);
    pFVar4 = (pFVar2->StateNodes).AllocatorInstance.Data;
    if ((int)uVar11 < (pFVar2->StateNodes).ArrayNum) {
      uVar20 = ~uVar11 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = (pFVar2->StateNodes).AllocatorInstance.Data;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar2->OnUpdateTransitionCallback,local_68);
    if (((*(int *)&(pFVar2->OnUpdateTransitionCallback).field_0x10 == 0) ||
        (plVar6 = *(longlong **)&(pFVar2->OnUpdateTransitionCallback).field_0x8,
        plVar6 == (longlong *)0x0)) || (cVar9 = (**(code **)(*plVar6 + 0x38))(), cVar9 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_68);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_68);
      bVar10 = TDelegate<bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
               ::Execute(&pFVar2->OnUpdateTransitionCallback,*(FName *)(pFVar3 + lVar19 * 0x14 + 4),
                         *(FName *)(pFVar4 + (longlong)(int)uVar14 * 0x20 + 4),
                         *(FName *)(pFVar5 + (longlong)(int)uVar11 * 0x20 + 4),param_1,this);
      if (!bVar10) goto LAB_14949ea22;
    }
    pFVar17 = (FName *)(pFVar5 + (longlong)(int)uVar11 * 0x20 + 4);
    this->CurrentTransitionIndex = -1;
    TDelegate<void___cdecl(FName,FName,FName,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
    ::ExecuteIfBound(&pFVar2->OnLeaveTransitionCallback,*(FName *)(pFVar3 + lVar19 * 0x14 + 4),
                     *(FName *)(pFVar4 + (longlong)(int)uVar14 * 0x20 + 4),*pFVar17,this);
    (**(code **)(this->_padding_ + 0x38))
              (this,*(undefined8 *)(pFVar3 + lVar19 * 0x14 + 4),
               *(undefined8 *)(pFVar4 + (longlong)(int)uVar14 * 0x20 + 4),*pFVar17);
    TDelegate<void___cdecl(FName,FName,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
    ::ExecuteIfBound(&pFVar2->OnEnterStateCallback,*pFVar17,
                     *(FName *)(pFVar4 + (longlong)(int)uVar14 * 0x20 + 4),this);
    (**(code **)(this->_padding_ + 0x18))
              (this,*pFVar17,*(undefined8 *)(pFVar4 + (longlong)(int)uVar14 * 0x20 + 4));
    this->CurrentStateIndex = *(int *)(pFVar3 + lVar19 * 0x14 + 0x10);
    if (!bVar8) {
      TDelegate<void___cdecl(FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
      ::ExecuteIfBound(&pFVar2->OnUpdateStateCallback,*pFVar17,param_1,this);
      (**(code **)(this->_padding_ + 0x28))(this,*pFVar17,param_1);
    }
  }
LAB_14949ea22:
                    /* WARNING: Could not recover jumptable at 0x00014949ea6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,param_1);
  return;
LAB_14949e63c:
  if (uVar11 == 0xffffffff) {
LAB_14949e7ce:
    TDelegate<void___cdecl(FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
    ::ExecuteIfBound(&pFVar2->OnUpdateStateCallback,*(FName *)(pFVar3 + lVar19 + 4),param_1,this);
    (**(code **)(this->_padding_ + 0x28))(this,*(undefined8 *)(pFVar3 + lVar19 + 4),param_1);
    bVar8 = true;
  }
  else {
    this->CurrentStateIndex = -1;
    uVar14 = uVar20;
    if ((int)uVar11 < (pFVar2->TransitionNodes).ArrayNum) {
      uVar14 = ~uVar11 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar4 = (pFVar2->TransitionNodes).AllocatorInstance.Data;
    uVar14 = *(uint *)(pFVar4 + lVar16 * 0x14 + 0x10);
    uVar12 = 0;
    if ((int)uVar14 < (pFVar2->StateNodes).ArrayNum) {
      uVar12 = ~uVar14 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = (pFVar2->StateNodes).AllocatorInstance.Data;
    lVar18 = (longlong)(int)uVar14 * 0x20;
    TDelegate<void___cdecl(FName,FName,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
    ::ExecuteIfBound(&pFVar2->OnLeaveStateCallback,*(FName *)(pFVar3 + lVar19 + 4),
                     *(FName *)(pFVar5 + lVar18 + 4),this);
    (**(code **)(this->_padding_ + 0x20))
              (this,*(undefined8 *)(pFVar3 + lVar19 + 4),*(undefined8 *)(pFVar5 + lVar18 + 4));
    TDelegate<void___cdecl(FName,FName,FName,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
    ::ExecuteIfBound(&pFVar2->OnEnterTransitionCallback,*(FName *)(pFVar4 + lVar16 * 0x14 + 4),
                     *(FName *)(pFVar3 + lVar19 + 4),*(FName *)(pFVar5 + lVar18 + 4),this);
    (**(code **)(this->_padding_ + 0x30))
              (this,*(undefined8 *)(pFVar4 + lVar16 * 0x14 + 4),*(undefined8 *)(pFVar3 + lVar19 + 4)
               ,*(undefined8 *)(pFVar5 + lVar18 + 4));
    bVar8 = false;
    this->CurrentTransitionIndex = uVar11;
  }
  goto LAB_14949e7f6;
}

// operator() @ 150543310

bool __thiscall
`FWN_StateMachine_ExecutionContext::Execute'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2709737941273411688>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2709737941273411688>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505434f0

bool __thiscall
`FWN_StateMachine_ExecutionContext::Execute'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2709737941273411694>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2709737941273411694>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

