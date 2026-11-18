// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// GatherResults @ 145db79e0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall FRDGTimingFrame::GatherResults(FRDGTimingFrame *this,bool param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  int iVar3;
  FBaseGraphTask *pFVar4;
  longlong lVar5;
  ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> FVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> FVar16;
  longlong local_res8;
  longlong local_res18 [2];
  
  bVar8 = IsInRenderingThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphEvent.cpp"
                         ,0x52,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pFVar4 = (this->RHIEndFence).Reference;
  if ((pFVar4 != (FBaseGraphTask *)0x0) && (pFVar4->field_0xd0 == '\0')) {
    if (!param_1) {
      return false;
    }
    FRHICommandListExecutor::WaitOnRHIThreadFence(&this->RHIEndFence);
  }
  pFVar4 = (this->RHIEndFence).Reference;
  if (pFVar4 != (FBaseGraphTask *)0x0) {
    (this->RHIEndFence).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar1 = &pFVar4->field_0x30;
    iVar3 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  uVar13 = this->NextScope;
  if ((int)uVar13 < (this->TimingScopes).ArrayNum) {
    do {
      uVar11 = 0;
      if ((int)uVar13 < (this->TimingScopes).ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      pFVar14 = (this->TimingScopes).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x30;
      if (pFVar14[0x28] != (FScriptContainerElement)0x0) {
        cVar10 = (**(code **)(GDynamicRHI->_padding_ + 0x288))
                           (GDynamicRHI,*(longlong *)(pFVar14 + 8),local_res18,param_1,0xffffffff);
        if (cVar10 == '\0') {
          return false;
        }
        cVar10 = (**(code **)(GDynamicRHI->_padding_ + 0x288))
                           (GDynamicRHI,*(longlong *)(pFVar14 + 0x18),&local_res8,param_1,0xffffffff
                           );
        if (cVar10 == '\0') {
          return false;
        }
        lVar5 = *(longlong *)pFVar14;
        lVar15 = local_res8 - local_res18[0];
        iVar3 = (this->Timings).Array.ArrayNum;
        iVar12 = DynamicRenderScaling::FBudget::GetGlobalListSize();
        if ((iVar3 != iVar12) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Array.Num() == FBudget::GetGlobalListSize()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                               ,0xd5,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        uVar13 = *(uint *)(lVar5 + 100);
        uVar11 = 0;
        if ((int)uVar13 < (this->Timings).Array.ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        FVar6 = (this->Timings).Array.AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>)&this->Timings
        ;
        if (FVar6 != (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>)0x0) {
          FVar16 = FVar6;
        }
        plVar2 = (longlong *)((longlong)(int)uVar13 * 0x10 + 8 + (longlong)FVar16);
        *plVar2 = *plVar2 + lVar15;
      }
      uVar13 = this->NextScope + 1;
      this->NextScope = uVar13;
    } while ((int)uVar13 < (this->TimingScopes).ArrayNum);
  }
  return true;
}

