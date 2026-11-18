// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// FRDGScope_Budget @ 145d8ccc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGScope_Budget * __thiscall
FRDGScope_Budget::FRDGScope_Budget(FRDGScope_Budget *this,FRDGScopeState *param_1,FBudget *param_2)

{
  int *piVar1;
  FBudget *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FRDGScope_Budget *pFVar8;
  bool *pbVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  
  this->Frame = (FRDGTimingFrame *)0x0;
  pFVar2 = (param_1->ScopeState).ActiveBudget;
  this->bPop = pFVar2 == (FBudget *)0x0;
  if (((pFVar2 != (FBudget *)0x0) && ((param_1->ScopeState).ActiveBudget != param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPop || State.ScopeState.ActiveBudget == &Budget",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphEvent.cpp"
                         ,0x14d,L"Cannot nest dynamic render scaling budgets."), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FRDGScope_Budget *)(*pcVar4)();
    return pFVar8;
  }
  (param_1->ScopeState).ActiveBudget = param_2;
  if (this->bPop == false) {
    return this;
  }
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphEvent.cpp"
                         ,0xd5,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FRDGScope_Budget *)(*pcVar4)();
    return pFVar8;
  }
  if (GRDGTimingPool._40_8_ == 0) {
    return this;
  }
  pbVar9 = DynamicRenderScaling::TMap<bool>::operator[]
                     ((TMap<bool> *)&GRDGTimingPool.field_0x150,param_2);
  uVar5 = GRDGTimingPool._40_8_;
  if (*pbVar9 == false) {
    return this;
  }
  this->Frame = (FRDGTimingFrame *)GRDGTimingPool._40_8_;
  piVar1 = (int *)(uVar5 + 0x14);
  iVar7 = *piVar1;
  iVar12 = *(int *)(uVar5 + 0x10);
  if (iVar12 == 0) {
    if (0x3f < iVar7) goto LAB_145d8cde5;
    uVar11 = 0x40;
    iVar12 = 0;
  }
  else {
    if (iVar12 != iVar7) goto LAB_145d8cde5;
    uVar11 = iVar7 * 2;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if ((int)uVar11 <= iVar7) goto LAB_145d8cde5;
  }
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,uVar11,(ForAnyElementType *)(uVar5 + 8),iVar12,piVar1);
LAB_145d8cde5:
  iVar7 = *(int *)(uVar5 + 0x10);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)(uVar5 + 8),piVar1);
  }
  *(int *)(uVar5 + 0x10) = iVar7 + 1;
  plVar3 = *(longlong **)uVar5;
  puVar10 = (undefined8 *)((longlong)iVar7 * 0x30 + *(longlong *)(uVar5 + 8));
  *puVar10 = param_2;
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar10 + 1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar10 + 3);
  *(undefined1 *)(puVar10 + 5) = 0;
  this->ScopeId = iVar7;
  return this;
}

// BeginGPU @ 145da3310

void __thiscall FRDGScope_Budget::BeginGPU(FRDGScope_Budget *this,FRHIComputeCommandList *param_1)

{
  byte bVar1;
  uint uVar2;
  FRDGTimingFrame *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  if (this->Frame != (FRDGTimingFrame *)0x0) {
    bVar1 = param_1->field_0x6a;
    if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (param_1->field_0x6a == '\x01') {
      pFVar3 = this->Frame;
      uVar2 = this->ScopeId;
      uVar6 = 0;
      if ((int)uVar2 < (pFVar3->TimingScopes).ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
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
      (**(code **)(GDynamicRHI->_padding_ + 0x280))
                (GDynamicRHI,param_1,
                 *(undefined8 *)
                  ((pFVar3->TimingScopes).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x30 + 8))
      ;
      uVar6 = 0;
      if ((int)uVar2 < (pFVar3->TimingScopes).ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
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
      (pFVar3->TimingScopes).AllocatorInstance.Data[(longlong)(int)uVar2 * 0x30 + 0x28] =
           (FScriptContainerElement)0x1;
    }
  }
  return;
}

// EndGPU @ 145dac9f0

void __thiscall FRDGScope_Budget::EndGPU(FRDGScope_Budget *this,FRHIComputeCommandList *param_1)

{
  byte bVar1;
  uint uVar2;
  FRDGTimingFrame *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  if (this->Frame != (FRDGTimingFrame *)0x0) {
    bVar1 = param_1->field_0x6a;
    if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (param_1->field_0x6a == '\x01') {
      pFVar3 = this->Frame;
      uVar2 = this->ScopeId;
      uVar6 = 0;
      if ((int)uVar2 < (pFVar3->TimingScopes).ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
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
      (**(code **)(GDynamicRHI->_padding_ + 0x280))
                (GDynamicRHI,param_1,
                 *(undefined8 *)
                  ((pFVar3->TimingScopes).AllocatorInstance.Data +
                  (longlong)(int)uVar2 * 0x30 + 0x18));
      uVar6 = 0;
      if ((int)uVar2 < (pFVar3->TimingScopes).ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
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
      (pFVar3->TimingScopes).AllocatorInstance.Data[(longlong)(int)uVar2 * 0x30 + 0x28] =
           (FScriptContainerElement)0x1;
    }
  }
  return;
}

// ImmediateEnd @ 145dbcd40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FRDGScope_Budget::ImmediateEnd(FRDGScope_Budget *this,FRDGScopeState *param_1)

{
  if (this->bPop != false) {
    (param_1->ScopeState).ActiveBudget = (FBudget *)0x0;
  }
  return;
}

