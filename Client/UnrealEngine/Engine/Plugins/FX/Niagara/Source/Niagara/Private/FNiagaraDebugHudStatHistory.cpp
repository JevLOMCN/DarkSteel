// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// AddFrame_GPU @ 1492840c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FNiagaraDebugHudStatHistory::AddFrame_GPU(FNiagaraDebugHudStatHistory *this,double param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&NiagaraDebugLocal::RTFramesGuard);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->GPUFrames,NiagaraDebugLocal::Settings.PerfHistoryFrames,Default);
  uVar1 = (this->GPUFrames).ArrayNum;
  uVar4 = this->CurrFrameGPU + 1;
  if (uVar1 == 0) {
    uVar5 = 0;
    this->CurrFrameGPU = 0;
  }
  else {
    if ((int)uVar4 < 0) {
      uVar5 = uVar1 - -uVar4 % uVar1;
      if (-uVar4 % uVar1 == 0) {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = uVar4 % uVar1;
    }
    this->CurrFrameGPU = uVar5;
    uVar4 = 0;
    if ((int)uVar5 < (int)uVar1) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 != 0) goto LAB_149284175;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_149284175:
  *(double *)((this->GPUFrames).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014928419c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&NiagaraDebugLocal::RTFramesGuard);
  return;
}

// AddFrame_GT @ 1492841b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FNiagaraDebugHudStatHistory::AddFrame_GT(FNiagaraDebugHudStatHistory *this,double param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  TArray<double,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->GTFrames,NiagaraDebugLocal::Settings.PerfHistoryFrames,Default);
  uVar1 = (this->GTFrames).ArrayNum;
  uVar4 = this->CurrFrame + 1;
  if (uVar1 == 0) {
    uVar5 = 0;
    this->CurrFrame = 0;
  }
  else {
    if ((int)uVar4 < 0) {
      uVar5 = uVar1 - -uVar4 % uVar1;
      if (-uVar4 % uVar1 == 0) {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = uVar4 % uVar1;
    }
    this->CurrFrame = uVar5;
    uVar4 = 0;
    if ((int)uVar5 < (int)uVar1) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 != 0) goto LAB_14928424f;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14928424f:
  *(double *)((this->GTFrames).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) = param_1;
  return;
}

// AddFrame_RT @ 149284270

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FNiagaraDebugHudStatHistory::AddFrame_RT(FNiagaraDebugHudStatHistory *this,double param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&NiagaraDebugLocal::RTFramesGuard);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->RTFrames,NiagaraDebugLocal::Settings.PerfHistoryFrames,Default);
  uVar1 = (this->RTFrames).ArrayNum;
  uVar4 = this->CurrFrameRT + 1;
  if (uVar1 == 0) {
    uVar5 = 0;
    this->CurrFrameRT = 0;
  }
  else {
    if ((int)uVar4 < 0) {
      uVar5 = uVar1 - -uVar4 % uVar1;
      if (-uVar4 % uVar1 == 0) {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = uVar4 % uVar1;
    }
    this->CurrFrameRT = uVar5;
    uVar4 = 0;
    if ((int)uVar5 < (int)uVar1) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 != 0) goto LAB_149284325;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_149284325:
  *(double *)((this->RTFrames).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014928434c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&NiagaraDebugLocal::RTFramesGuard);
  return;
}

// GetHistoryFrames_GPU @ 1492a41f0

void __thiscall
FNiagaraDebugHudStatHistory::GetHistoryFrames_GPU
          (FNiagaraDebugHudStatHistory *this,TArray<double,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&NiagaraDebugLocal::RTFramesGuard);
  uVar9 = (this->GPUFrames).ArrayNum;
  if (uVar9 != 0) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    piVar1 = &param_1->ArrayMax;
    if (param_1->ArrayMax < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar9,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    uVar9 = this->CurrFrameGPU;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->GPUFrames).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (this->GPUFrames).AllocatorInstance.Data + (longlong)(int)uVar9 * 8;
      pFVar4 = (param_1->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar2) && (pFVar2 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
        param_1->ArrayNum = iVar8;
      }
      param_1->ArrayNum = iVar8 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           *(undefined8 *)pFVar2;
      uVar7 = uVar9 + 1;
      uVar3 = (this->GPUFrames).ArrayNum;
      if (uVar3 == 0) {
        uVar9 = 0;
      }
      else if ((int)uVar7 < 0) {
        uVar9 = uVar3 - -uVar7 % uVar3;
        if (-uVar7 % uVar3 == 0) {
          uVar9 = 0;
        }
      }
      else {
        uVar9 = uVar7 % uVar3;
      }
    } while (uVar9 != this->CurrFrameGPU);
  }
                    /* WARNING: Could not recover jumptable at 0x0001492a438d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&NiagaraDebugLocal::RTFramesGuard);
  return;
}

// GetHistoryFrames_GT @ 1492a43b0

void __thiscall
FNiagaraDebugHudStatHistory::GetHistoryFrames_GT
          (FNiagaraDebugHudStatHistory *this,TArray<double,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = (this->GTFrames).ArrayNum;
  if (uVar9 != 0) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    piVar1 = &param_1->ArrayMax;
    if (*piVar1 < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar9,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    uVar9 = this->CurrFrame;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->GTFrames).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (this->GTFrames).AllocatorInstance.Data + (longlong)(int)uVar9 * 8;
      pFVar4 = (param_1->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar2) && (pFVar2 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
        param_1->ArrayNum = iVar8;
      }
      param_1->ArrayNum = iVar8 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           *(undefined8 *)pFVar2;
      uVar7 = uVar9 + 1;
      uVar3 = (this->GTFrames).ArrayNum;
      if (uVar3 == 0) {
        uVar9 = 0;
      }
      else if ((int)uVar7 < 0) {
        uVar9 = uVar3 - -uVar7 % uVar3;
        if (-uVar7 % uVar3 == 0) {
          uVar9 = 0;
        }
      }
      else {
        uVar9 = uVar7 % uVar3;
      }
    } while (uVar9 != this->CurrFrame);
  }
  return;
}

// GetHistoryFrames_RT @ 1492a4550

void __thiscall
FNiagaraDebugHudStatHistory::GetHistoryFrames_RT
          (FNiagaraDebugHudStatHistory *this,TArray<double,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&NiagaraDebugLocal::RTFramesGuard);
  uVar9 = (this->RTFrames).ArrayNum;
  if (uVar9 != 0) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    piVar1 = &param_1->ArrayMax;
    if (param_1->ArrayMax < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar9,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    uVar9 = this->CurrFrameRT;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->RTFrames).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (this->RTFrames).AllocatorInstance.Data + (longlong)(int)uVar9 * 8;
      pFVar4 = (param_1->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar2) && (pFVar2 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
        param_1->ArrayNum = iVar8;
      }
      param_1->ArrayNum = iVar8 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           *(undefined8 *)pFVar2;
      uVar7 = uVar9 + 1;
      uVar3 = (this->RTFrames).ArrayNum;
      if (uVar3 == 0) {
        uVar9 = 0;
      }
      else if ((int)uVar7 < 0) {
        uVar9 = uVar3 - -uVar7 % uVar3;
        if (-uVar7 % uVar3 == 0) {
          uVar9 = 0;
        }
      }
      else {
        uVar9 = uVar7 % uVar3;
      }
    } while (uVar9 != this->CurrFrameRT);
  }
                    /* WARNING: Could not recover jumptable at 0x0001492a46ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&NiagaraDebugLocal::RTFramesGuard);
  return;
}

