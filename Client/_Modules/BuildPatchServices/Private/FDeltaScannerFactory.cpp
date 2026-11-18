// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 143247ca0

IDataScanner * __cdecl
BuildPatchServices::FDeltaScannerFactory::Create
          (uint param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          TDoubleLinkedList<TTuple<BuildPatchServices::FBlockRange,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>
          *param_3,IDeltaChunkEnumeration *param_4,FStatsCollector *param_5)

{
  code *pcVar1;
  bool bVar2;
  IDataScanner *pIVar3;
  FDeltaScanner *this;
  FDeltaScanner *pFVar4;
  
  if (param_2->ArrayNum < (int)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.Num() >= (int32)WindowSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\DeltaScanner.cpp"
                       ,0x266,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IDataScanner *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (param_4 == (IDeltaChunkEnumeration *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CloudEnumeration != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\DeltaScanner.cpp"
                       ,0x267,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IDataScanner *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (param_5 == (FStatsCollector *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StatsCollector != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\DeltaScanner.cpp"
                       ,0x268,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IDataScanner *)(*pcVar1)();
      return pIVar3;
    }
  }
  this = ::operator_new(0x100);
  pFVar4 = (FDeltaScanner *)0x0;
  if (this != (FDeltaScanner *)0x0) {
    pFVar4 = FDeltaScanner::FDeltaScanner(this,param_1,param_2,param_3,param_4,param_5);
  }
  return (IDataScanner *)pFVar4;
}

