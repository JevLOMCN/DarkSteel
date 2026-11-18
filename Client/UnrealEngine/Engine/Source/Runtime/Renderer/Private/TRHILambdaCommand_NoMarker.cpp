// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ExecuteAndDestruct @ 14475b1e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand_NoMarker<FRHIComputeCommandList,`FRHIComputeCommandList::BeginBreadcrumbCPU'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulong64 uVar5;
  FThreadBuffer *pFVar6;
  ushort uVar7;
  uchar *puVar8;
  byte bVar9;
  byte bVar10;
  ulonglong uVar11;
  LARGE_INTEGER aLStackX_10 [3];
  
  (param_1->PersistentState).LocalBreadcrumb = *(FRHIBreadcrumbNode **)((longlong)this + 0x10);
  if (*(char *)((longlong)this + 0x18) != '\0') {
    (param_1->CPUBreadcrumbState).Current = *(FRHIBreadcrumbNode **)((longlong)this + 0x10);
    uVar2 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 0x38);
    if (uVar2 != 0) {
      iVar3 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x3c);
      if (iVar3 == 0) {
        FCpuProfilerTrace::OutputBeginEvent(uVar2);
        return;
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      pFVar6 = *(FThreadBuffer **)(lVar4 + 0xb60);
      piVar1 = (int *)(lVar4 + 0xb58);
      *piVar1 = *piVar1 + 1;
      if (pFVar6 == (FThreadBuffer *)0x0) {
        pFVar6 = FCpuProfilerTraceInternal::CreateThreadBuffer();
      }
      QueryPerformanceCounter(aLStackX_10);
      uVar5 = pFVar6->LastCycle;
      pFVar6->LastCycle = (ulong64)aLStackX_10[0];
      puVar8 = pFVar6->Buffer + pFVar6->BufferSize;
      uVar11 = (aLStackX_10[0].QuadPart - uVar5) * 4 | 1;
      do {
        bVar9 = 0;
        bVar10 = (byte)uVar11;
        if (0x7f < uVar11) {
          bVar9 = 0x80;
        }
        uVar11 = uVar11 >> 7;
        *puVar8 = bVar9 | bVar10 & 0x7f;
        puVar8 = puVar8 + 1;
      } while (uVar11 != 0);
      uVar11 = (ulonglong)(uint)(iVar3 * 2) | 1;
      do {
        bVar9 = 0;
        bVar10 = (byte)uVar11;
        if (0x7f < uVar11) {
          bVar9 = 0x80;
        }
        uVar11 = uVar11 >> 7;
        *puVar8 = bVar9 | bVar10 & 0x7f;
        puVar8 = puVar8 + 1;
      } while (uVar11 != 0);
      uVar7 = ((short)puVar8 - (short)pFVar6) - 0x12;
      pFVar6->BufferSize = uVar7;
      if (0xf0 < uVar7) {
        FCpuProfilerTraceInternal::FlushThreadBuffer(pFVar6);
      }
      return;
    }
  }
  return;
}

// ExecuteAndDestruct @ 14475b220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand_NoMarker<FRHIComputeCommandList,`FRHIComputeCommandList::EndBreadcrumbCPU'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  `FRHIComputeCommandList::EndBreadcrumbCPU'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

