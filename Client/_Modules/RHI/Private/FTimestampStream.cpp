// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// AddTimestamp @ 145c4ea20

void __thiscall
UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::AddTimestamp
          (FTimestampStream *this,ulong64 param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong64 local_res10;
  
  local_res10 = param_1;
  if (!param_2) {
    pFVar2 = (this->Values).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
       ((FScriptContainerElement *)&local_res10 < pFVar2 + (longlong)(this->Values).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = (this->Values).ArrayNum;
    piVar1 = &(this->Values).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->Values).ArrayNum = iVar6 + 1;
    *(ulong64 *)((this->Values).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_res10;
    return;
  }
  iVar6 = (this->Values).ArrayNum;
  if (iVar6 != 0) {
    uVar5 = 0;
    if ((int)(iVar6 - 1U) < iVar6) {
      uVar5 = ~(iVar6 - 1U) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = (this->Values).ArrayNum;
    if (local_res10 <=
        *(ulonglong *)((this->Values).AllocatorInstance.Data + ((longlong)iVar6 + -1) * 8)) {
      uVar8 = ~(iVar6 - 1U);
      uVar5 = 0;
      if ((int)(iVar6 - 1U) < iVar6) {
        uVar5 = uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar7 = (this->Values).ArrayNum + uVar8;
      pFVar2 = (this->Values).AllocatorInstance.Data + ((longlong)iVar6 + -1) * 8;
      if (iVar7 != 0) {
        memmove(pFVar2,pFVar2 + 8,(longlong)iVar7 << 3);
      }
      piVar1 = &(this->Values).ArrayNum;
      *piVar1 = *piVar1 + -1;
      return;
    }
  }
  pFVar2 = (this->Values).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
     ((FScriptContainerElement *)&local_res10 < pFVar2 + (longlong)(this->Values).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->Values).ArrayNum;
  piVar1 = &(this->Values).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->Values).ArrayNum = iVar6 + 1;
  *(ulong64 *)((this->Values).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_res10;
  return;
}

// ComputeUnion @ 145c54740

ulong64 __cdecl
UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::ComputeUnion
          (TArrayView<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState,int>
           *param_1)

{
  FState *pFVar1;
  int iVar2;
  FTimestampStream *pFVar3;
  FTimestampStream *pFVar4;
  ulonglong uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  ulong64 uVar11;
  FState *pFVar12;
  uint uVar13;
  FState *pFVar14;
  ulonglong uVar15;
  int local_res10;
  ulong64 local_res18;
  
  uVar15 = 0;
  local_res18 = 0;
  local_res10 = 0;
  bVar9 = true;
  while( true ) {
    pFVar12 = param_1->DataPtr;
    pFVar14 = (FState *)0x0;
    pFVar1 = pFVar12 + param_1->ArrayNum;
    if (pFVar12 == pFVar1) break;
    do {
      pFVar3 = pFVar12->Stream;
      iVar2 = pFVar12->TimestampIndex;
      if (iVar2 < (pFVar3->Values).ArrayNum) {
        if (pFVar14 != (FState *)0x0) {
          if ((iVar2 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return uVar11;
          }
          pFVar4 = pFVar14->Stream;
          uVar5 = *(ulonglong *)((pFVar3->Values).AllocatorInstance.Data + (longlong)iVar2 * 8);
          uVar10 = pFVar14->TimestampIndex;
          uVar13 = 0;
          if ((int)uVar10 < (pFVar4->Values).ArrayNum) {
            uVar13 = ~uVar10 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return uVar11;
          }
          if (*(ulonglong *)((pFVar4->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 8) <=
              uVar5) goto LAB_145c54844;
        }
        pFVar14 = pFVar12;
      }
LAB_145c54844:
      pFVar12 = pFVar12 + 1;
    } while (pFVar12 != pFVar1);
    if (pFVar14 == (FState *)0x0) break;
    if (!bVar9) {
      if (0 < local_res10) {
        uVar10 = pFVar14->TimestampIndex;
        pFVar3 = pFVar14->Stream;
        uVar13 = 0;
        if ((int)uVar10 < (pFVar3->Values).ArrayNum) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return uVar11;
        }
        if (uVar15 < *(ulonglong *)
                      ((pFVar3->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 8)) {
          uVar10 = pFVar14->TimestampIndex;
          pFVar3 = pFVar14->Stream;
          uVar13 = 0;
          if ((int)uVar10 < (pFVar3->Values).ArrayNum) {
            uVar13 = ~uVar10 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return uVar11;
          }
          local_res18 = local_res18 +
                        (*(longlong *)
                          ((pFVar3->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 8) -
                        uVar15);
        }
      }
      uVar10 = pFVar14->TimestampIndex;
      if (((longlong)(int)uVar10 & 1U) != 0) {
        pFVar3 = pFVar14->Stream;
        uVar13 = 0;
        if ((int)uVar10 < (pFVar3->Values).ArrayNum) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return uVar11;
        }
        pFVar4 = pFVar14->Stream;
        uVar13 = pFVar14->TimestampIndex - 1;
        lVar6 = *(longlong *)((pFVar3->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
        uVar10 = 0;
        if ((int)uVar13 < (pFVar4->Values).ArrayNum) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return uVar11;
        }
        pFVar14->BusyCycles =
             pFVar14->BusyCycles +
             (lVar6 - *(longlong *)
                       ((pFVar4->Values).AllocatorInstance.Data + (longlong)(int)uVar13 * 8));
      }
    }
    uVar10 = pFVar14->TimestampIndex;
    pFVar3 = pFVar14->Stream;
    uVar13 = 0;
    if ((int)uVar10 < (pFVar3->Values).ArrayNum) {
      uVar13 = ~uVar10 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return uVar11;
    }
    uVar15 = *(ulonglong *)((pFVar3->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
    local_res10 = local_res10 + (~pFVar14->TimestampIndex & 1U) * 2 + -1;
    if ((local_res10 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("BusyPipes >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                           ,0x64f,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return uVar11;
    }
    pFVar14->TimestampIndex = pFVar14->TimestampIndex + 1;
    bVar9 = false;
  }
  if ((local_res10 != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BusyPipes == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                         ,0x655,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return uVar11;
  }
  return local_res18;
}

