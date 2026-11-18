// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 143248190

IPatchDataCompactifier * __cdecl
BuildPatchServices::FPatchDataCompactifierFactory::Create(FCompactifyConfiguration *param_1)

{
  IPatchDataCompactifier *pIVar1;
  FNumberFormattingOptions *pFVar2;
  IPatchDataCompactifier IVar3;
  IFileManager *pIVar4;
  IPlatformFile *pIVar5;
  FNumberFormattingOptions local_28;
  
  pIVar1 = ::operator_new(0x58);
  if (pIVar1 == (IPatchDataCompactifier *)0x0) {
    return (IPatchDataCompactifier *)0x0;
  }
  *pIVar1 = (IPatchDataCompactifier)&___7FPatchDataCompactifier_BuildPatchServices__6B_;
  ::FString::FString((FString *)(pIVar1 + 1),&param_1->CloudDirectory);
  *(float *)(pIVar1 + 3) = param_1->DataAgeThreshold;
  ::FString::FString((FString *)(pIVar1 + 4),&param_1->DeletedChunkLogFile);
  *(bool *)(pIVar1 + 6) = param_1->bRunPreview;
  pFVar2 = FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
  pFVar2->MaximumFractionalDigits = 3;
  pFVar2->MinimumFractionalDigits = 3;
  IVar3 = *(IPatchDataCompactifier *)&pFVar2->MinimumIntegralDigits;
  pIVar1[7] = *(IPatchDataCompactifier *)pFVar2;
  pIVar1[8] = IVar3;
  pIVar1[9] = *(IPatchDataCompactifier *)&pFVar2->MinimumFractionalDigits;
  IVar3 = (IPatchDataCompactifier)::operator_new(0x18);
  if (IVar3 != (IPatchDataCompactifier)0x0) {
    *(undefined ***)IVar3 = &___7FFileSystem_BuildPatchServices__6B_;
    pIVar4 = IFileManager::Get();
    *(IFileManager **)((longlong)IVar3 + 8) = pIVar4;
    pIVar5 = IPlatformFile::GetPlatformPhysical();
    *(IPlatformFile **)((longlong)IVar3 + 0x10) = pIVar5;
    pIVar1[10] = IVar3;
    return pIVar1;
  }
  pIVar1[10] = (IPatchDataCompactifier)0x0;
  return pIVar1;
}

