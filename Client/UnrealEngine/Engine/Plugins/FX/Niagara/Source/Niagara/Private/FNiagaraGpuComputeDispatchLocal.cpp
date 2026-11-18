// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// AddDataBufferTransitions<TArray<FRHITransitionInfo,TSizedDefaultAllocator<32>_>_> @ 1492c74f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
FNiagaraGpuComputeDispatchLocal::
AddDataBufferTransitions<TArray<FRHITransitionInfo,TSizedDefaultAllocator<32>_>_>
          (TArray<FRHITransitionInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FRHITransitionInfo,TSizedDefaultAllocator<32>_> *param_2,
          FNiagaraDataBuffer *param_3,ERHIAccess param_4,ERHIAccess param_5)

{
  FRHIUnorderedAccessView *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  pFVar1 = (param_3->GPUBufferFloat).UAV.Reference;
  piVar6 = &param_1->ArrayMax;
  if (pFVar1 != (FRHIUnorderedAccessView *)0x0) {
    iVar3 = param_1->ArrayNum;
    if (iVar3 == *piVar6) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_1->AllocatorInstance,piVar6);
    }
    param_1->ArrayNum = iVar3 + 1;
    lVar4 = (longlong)iVar3;
    pFVar2 = (param_1->AllocatorInstance).Data;
    *(FRHIUnorderedAccessView **)(pFVar2 + lVar4 * 0x30 + 8) = pFVar1;
    *(undefined4 *)(pFVar2 + lVar4 * 0x30) = 0xffffffff;
    *(undefined2 *)(pFVar2 + lVar4 * 0x30 + 4) = 0xffff;
    pFVar2[lVar4 * 0x30 + 0x10] = (FScriptContainerElement)0x3;
    *(ERHIAccess *)(pFVar2 + lVar4 * 0x30 + 0x14) = param_4;
    *(ERHIAccess *)(pFVar2 + lVar4 * 0x30 + 0x18) = param_5;
    pFVar2[lVar4 * 0x30 + 0x1c] = (FScriptContainerElement)0x0;
    pFVar2[lVar4 * 0x30 + 0x28] = (FScriptContainerElement)0x0;
    iVar3 = param_2->ArrayNum;
    if (iVar3 == param_2->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar3 + 1;
    lVar4 = (longlong)iVar3;
    pFVar2 = (param_2->AllocatorInstance).Data;
    *(undefined4 *)(pFVar2 + lVar4 * 0x30) = 0xffffffff;
    *(undefined2 *)(pFVar2 + lVar4 * 0x30 + 4) = 0xffff;
    *(FRHIUnorderedAccessView **)(pFVar2 + lVar4 * 0x30 + 8) = pFVar1;
    pFVar2[lVar4 * 0x30 + 0x10] = (FScriptContainerElement)0x3;
    *(ERHIAccess *)(pFVar2 + lVar4 * 0x30 + 0x14) = param_5;
    *(ERHIAccess *)(pFVar2 + lVar4 * 0x30 + 0x18) = param_4;
    pFVar2[lVar4 * 0x30 + 0x1c] = (FScriptContainerElement)0x0;
    pFVar2[lVar4 * 0x30 + 0x28] = (FScriptContainerElement)0x0;
  }
  piVar7 = &param_2->ArrayNum;
  piVar5 = &param_1->ArrayNum;
  pFVar1 = (param_3->GPUBufferHalf).UAV.Reference;
  if (pFVar1 != (FRHIUnorderedAccessView *)0x0) {
    iVar3 = *piVar5;
    if (iVar3 == *piVar6) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_1->AllocatorInstance,piVar6);
      *piVar5 = iVar3;
    }
    *piVar5 = iVar3 + 1;
    lVar4 = (longlong)iVar3;
    pFVar2 = (param_1->AllocatorInstance).Data;
    *(undefined4 *)(pFVar2 + lVar4 * 0x30) = 0xffffffff;
    *(undefined2 *)(pFVar2 + lVar4 * 0x30 + 4) = 0xffff;
    *(FRHIUnorderedAccessView **)(pFVar2 + lVar4 * 0x30 + 8) = pFVar1;
    pFVar2[lVar4 * 0x30 + 0x10] = (FScriptContainerElement)0x3;
    *(ERHIAccess *)(pFVar2 + lVar4 * 0x30 + 0x14) = param_4;
    *(ERHIAccess *)(pFVar2 + lVar4 * 0x30 + 0x18) = param_5;
    pFVar2[lVar4 * 0x30 + 0x1c] = (FScriptContainerElement)0x0;
    pFVar2[lVar4 * 0x30 + 0x28] = (FScriptContainerElement)0x0;
    iVar3 = *piVar7;
    if (iVar3 == param_2->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
      *piVar7 = iVar3;
    }
    *piVar7 = iVar3 + 1;
    lVar4 = (longlong)iVar3;
    pFVar2 = (param_2->AllocatorInstance).Data;
    *(undefined4 *)(pFVar2 + lVar4 * 0x30) = 0xffffffff;
    *(undefined2 *)(pFVar2 + lVar4 * 0x30 + 4) = 0xffff;
    *(FRHIUnorderedAccessView **)(pFVar2 + lVar4 * 0x30 + 8) = pFVar1;
    pFVar2[lVar4 * 0x30 + 0x10] = (FScriptContainerElement)0x3;
    *(ERHIAccess *)(pFVar2 + lVar4 * 0x30 + 0x14) = param_5;
    *(ERHIAccess *)(pFVar2 + lVar4 * 0x30 + 0x18) = param_4;
    pFVar2[lVar4 * 0x30 + 0x1c] = (FScriptContainerElement)0x0;
    pFVar2[lVar4 * 0x30 + 0x28] = (FScriptContainerElement)0x0;
  }
  piVar5 = &param_2->ArrayNum;
  piVar6 = &param_1->ArrayNum;
  pFVar1 = (param_3->GPUBufferInt).UAV.Reference;
  if (pFVar1 != (FRHIUnorderedAccessView *)0x0) {
    iVar3 = *piVar6;
    if (iVar3 == param_1->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
      *piVar6 = iVar3;
    }
    lVar4 = (longlong)iVar3;
    *piVar6 = iVar3 + 1;
    pFVar2 = (param_1->AllocatorInstance).Data;
    *(undefined4 *)(pFVar2 + lVar4 * 0x30) = 0xffffffff;
    *(undefined2 *)(pFVar2 + lVar4 * 0x30 + 4) = 0xffff;
    *(FRHIUnorderedAccessView **)(pFVar2 + lVar4 * 0x30 + 8) = pFVar1;
    pFVar2[lVar4 * 0x30 + 0x10] = (FScriptContainerElement)0x3;
    *(ERHIAccess *)(pFVar2 + lVar4 * 0x30 + 0x14) = param_4;
    *(ERHIAccess *)(pFVar2 + lVar4 * 0x30 + 0x18) = param_5;
    pFVar2[lVar4 * 0x30 + 0x1c] = (FScriptContainerElement)0x0;
    pFVar2[lVar4 * 0x30 + 0x28] = (FScriptContainerElement)0x0;
    iVar3 = *piVar5;
    if (iVar3 == param_2->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
      *piVar5 = iVar3;
    }
    lVar4 = (longlong)iVar3;
    *piVar5 = iVar3 + 1;
    pFVar2 = (param_2->AllocatorInstance).Data;
    *(undefined4 *)(pFVar2 + lVar4 * 0x30) = 0xffffffff;
    *(undefined2 *)(pFVar2 + lVar4 * 0x30 + 4) = 0xffff;
    *(FRHIUnorderedAccessView **)(pFVar2 + lVar4 * 0x30 + 8) = pFVar1;
    pFVar2[lVar4 * 0x30 + 0x10] = (FScriptContainerElement)0x3;
    *(ERHIAccess *)(pFVar2 + lVar4 * 0x30 + 0x14) = param_5;
    *(ERHIAccess *)(pFVar2 + lVar4 * 0x30 + 0x18) = param_4;
    pFVar2[lVar4 * 0x30 + 0x1c] = (FScriptContainerElement)0x0;
    pFVar2[lVar4 * 0x30 + 0x28] = (FScriptContainerElement)0x0;
  }
  return;
}

// CsvStatsEnabled @ 1492e0430

bool __cdecl FNiagaraGpuComputeDispatchLocal::CsvStatsEnabled(void)

{
  char cVar1;
  IConsoleManager *pIVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar2 = IConsoleManager::Get();
      DetailedCVar = (IConsoleVariable *)
                     (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"fx.DetailedCSVStats",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (DetailedCVar != (IConsoleVariable *)0x0) {
    cVar1 = (**(code **)(*(longlong *)DetailedCVar + 0xc0))();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

