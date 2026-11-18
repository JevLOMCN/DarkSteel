// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// CyclesToSeconds @ 14331d4a0

double __cdecl BuildPatchServices::FMockCyclesProvider::CyclesToSeconds(ulong64 param_1)

{
  double dVar1;
  ForAnyElementType FVar2;
  longlong lVar3;
  double dVar4;
  
  dVar1 = (double)param_1 * SecondsPerCycle;
  dVar4 = FStatsCollector::GetSeconds();
  if (RxCyclesToSeconds.ArrayNum == RxCyclesToSeconds.ArrayMax) {
    RxCyclesToSeconds.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&RxCyclesToSeconds.AllocatorInstance,&RxCyclesToSeconds.ArrayMax);
  }
  FVar2.Data = RxCyclesToSeconds.AllocatorInstance.Data;
  lVar3 = (longlong)RxCyclesToSeconds.ArrayNum;
  RxCyclesToSeconds.ArrayNum = RxCyclesToSeconds.ArrayNum + 1;
  *(double *)(RxCyclesToSeconds.AllocatorInstance.Data + lVar3 * 0x18) = dVar4;
  *(double *)(FVar2.Data + lVar3 * 0x18 + 8) = dVar1;
  *(ulong64 *)(FVar2.Data + lVar3 * 0x18 + 0x10) = param_1;
  return dVar1;
}

// GetCycles @ 143320870

ulong64 __cdecl BuildPatchServices::FMockCyclesProvider::GetCycles(void)

{
  ForAnyElementType FVar1;
  longlong lVar2;
  double dVar3;
  
  dVar3 = FStatsCollector::GetSeconds();
  if (RxGetCycles.ArrayNum == RxGetCycles.ArrayMax) {
    RxGetCycles.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&RxGetCycles.AllocatorInstance,&RxGetCycles.ArrayMax);
  }
  FVar1.Data = RxGetCycles.AllocatorInstance.Data;
  lVar2 = (longlong)RxGetCycles.ArrayNum;
  RxGetCycles.ArrayNum = RxGetCycles.ArrayNum + 1;
  *(double *)(RxGetCycles.AllocatorInstance.Data + lVar2 * 0x10) = dVar3;
  *(ulong64 *)(FVar1.Data + lVar2 * 0x10 + 8) = CurrentCycles;
  return CurrentCycles;
}

// Reset @ 143326740

void __cdecl BuildPatchServices::FMockCyclesProvider::Reset(void)

{
  RxGetCycles.ArrayNum = 0;
  if ((RxGetCycles.ArrayMax < 0) && (RxGetCycles.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&RxGetCycles.AllocatorInstance,0,&RxGetCycles.ArrayMax);
  }
  RxCyclesToSeconds.ArrayNum = 0;
  if ((RxCyclesToSeconds.ArrayMax < 0) && (RxCyclesToSeconds.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&RxCyclesToSeconds.AllocatorInstance,0,&RxCyclesToSeconds.ArrayMax);
  }
  SecondsPerCycle = __real_3f847ae147ae147b;
  CurrentCycles = 0;
  return;
}

