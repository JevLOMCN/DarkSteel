// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// FOptimusActionScope @ 14e14f9b0

FOptimusActionScope * __thiscall
FOptimusActionScope::FOptimusActionScope
          (FOptimusActionScope *this,UOptimusActionStack *param_1,FString *param_2)

{
  this->ActionStack = param_1;
  UOptimusActionStack::OpenActionScope(param_1,param_2);
  return this;
}

// ~FOptimusActionScope @ 14e161110

void __thiscall FOptimusActionScope::~FOptimusActionScope(FOptimusActionScope *this)

{
  int *piVar1;
  UOptimusActionStack *this_00;
  FOptimusAction *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  TSharedPtr<FOptimusAction,1> local_28;
  
  this_00 = this->ActionStack;
  if ((this_00->ActionScopes).ArrayNum < 1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3926983981366509426>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusActionStack.cpp"
                       ,0x8e,"ActionScopes.Num() > 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pFVar8 = (this_00->ActionScopes).AllocatorInstance.Data;
    lVar7 = (longlong)(this_00->ActionScopes).ArrayNum;
    pFVar2 = *(FOptimusAction **)(pFVar8 + lVar7 * 0x10 + -0x10);
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar8 + lVar7 * 0x10 + -8);
    *(undefined8 *)(pFVar8 + lVar7 * 0x10 + -8) = 0;
    *(undefined8 *)(pFVar8 + lVar7 * 0x10 + -0x10) = 0;
    iVar6 = (this_00->ActionScopes).ArrayNum;
    pFVar8 = (this_00->ActionScopes).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar8 + -8));
    iVar6 = (this_00->ActionScopes).ArrayNum - iVar6;
    if (iVar6 != 0) {
      memmove(pFVar8 + -0x10,pFVar8,(longlong)iVar6 << 4);
    }
    piVar1 = &(this_00->ActionScopes).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this_00->ActionScopes).AllocatorInstance,(this_00->ActionScopes).ArrayNum,
               &(this_00->ActionScopes).ArrayMax);
    if (pFVar2 == (FOptimusAction *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(int *)&pFVar2[1].Title.Data.AllocatorInstance.Data != 0) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.Object = pFVar2;
      local_28.SharedReferenceCount.ReferenceController = pTVar3;
      UOptimusActionStack::RunAction(this_00,&local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// SetTitle @ 14e2228f0

void __thiscall FOptimusActionScope::SetTitle(FOptimusActionScope *this,FString *param_1)

{
  int iVar1;
  UOptimusActionStack *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  pUVar2 = this->ActionStack;
  iVar1 = (pUVar2->ActionScopes).ArrayNum;
  uVar7 = iVar1 - 1;
  uVar6 = 0;
  if ((int)uVar7 < iVar1) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  iVar1 = (pUVar2->ActionScopes).ArrayNum;
  pFVar3 = (pUVar2->ActionScopes).AllocatorInstance.Data;
  if (*(longlong *)(pFVar3 + (longlong)iVar1 * 0x10 + -0x10) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  ::FString::operator=
            ((FString *)(*(longlong *)(pFVar3 + (longlong)iVar1 * 0x10 + -0x10) + 8),param_1);
  return;
}

