// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 2

// ComputeCPUPerfIndex @ 1423d4a90

float __thiscall
FSynthBenchmarkResults::ComputeCPUPerfIndex
          (FSynthBenchmarkResults *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_58 [20];
  
  if (param_1 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
  }
  fVar6 = __real_42c80000;
  fVar9 = this->CPUStats[1].Weight + this->CPUStats[0].Weight;
  local_58[0] = (this->CPUStats[0].IndexNormalizedTime * __real_42c80000) /
                this->CPUStats[0].MeasuredNormalizedTime;
  if (param_1 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)local_58) &&
        ((FScriptContainerElement *)local_58 < pFVar1 + (longlong)param_1->ArrayMax * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar4 + 1;
    *(float *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_58[0];
  }
  piVar5 = &param_1->ArrayMax;
  fVar7 = 0.0;
  if (fVar9 <= 0.0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = this->CPUStats[0].Weight / fVar9;
  }
  fVar8 = fVar8 * local_58[0];
  local_58[0] = (this->CPUStats[1].IndexNormalizedTime * fVar6) /
                this->CPUStats[1].MeasuredNormalizedTime;
  if (param_1 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)local_58) &&
        ((FScriptContainerElement *)local_58 < pFVar1 + (longlong)*piVar5 * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
    iVar4 = param_1->ArrayNum;
    if (iVar4 == *piVar5) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_1->AllocatorInstance,piVar5);
    }
    param_1->ArrayNum = iVar4 + 1;
    *(float *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_58[0];
  }
  if (0.0 < fVar9) {
    fVar7 = this->CPUStats[1].Weight / fVar9;
  }
  return fVar7 * local_58[0] + fVar8;
}

// ComputeGPUPerfIndex @ 1423d4d30

float __thiscall
FSynthBenchmarkResults::ComputeGPUPerfIndex
          (FSynthBenchmarkResults *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_58 [20];
  
  lVar5 = 7;
  if (param_1 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,7,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
  }
  fVar7 = __real_42c80000;
  fVar10 = 0.0;
  fVar9 = this->GPUStats[1].Weight + this->GPUStats[0].Weight + this->GPUStats[2].Weight +
          this->GPUStats[3].Weight + this->GPUStats[4].Weight + this->GPUStats[5].Weight +
          this->GPUStats[6].Weight;
  pfVar6 = &this->GPUStats[0].MeasuredNormalizedTime;
  do {
    local_58[0] = (pfVar6[1] * fVar7) / *pfVar6;
    if (param_1 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if ((pFVar1 <= (FScriptContainerElement *)local_58) &&
         ((FScriptContainerElement *)local_58 < pFVar1 + (longlong)param_1->ArrayMax * 4)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          fVar7 = (float)(*pcVar2)();
          return fVar7;
        }
      }
      iVar4 = param_1->ArrayNum;
      if (iVar4 == param_1->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar4 + 1;
      *(float *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_58[0];
    }
    if (fVar9 <= 0.0) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = pfVar6[6] / fVar9;
    }
    pfVar6 = pfVar6 + 10;
    fVar10 = fVar10 + fVar8 * local_58[0];
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return fVar10;
}

