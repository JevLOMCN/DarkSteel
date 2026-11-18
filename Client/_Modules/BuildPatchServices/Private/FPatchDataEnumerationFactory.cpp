// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 143248290

IPatchDataEnumeration * __cdecl
BuildPatchServices::FPatchDataEnumerationFactory::Create
          (FPatchDataEnumerationConfiguration *param_1)

{
  IPatchDataEnumeration *pIVar1;
  IPatchDataEnumeration IVar2;
  IFileManager *pIVar3;
  IPlatformFile *pIVar4;
  
  pIVar1 = ::operator_new(0x48);
  if (pIVar1 == (IPatchDataEnumeration *)0x0) {
    return (IPatchDataEnumeration *)0x0;
  }
  *pIVar1 = (IPatchDataEnumeration)&___7FPatchDataEnumeration_BuildPatchServices__6B_;
  ::FString::FString((FString *)(pIVar1 + 1),&param_1->InputFile);
  ::FString::FString((FString *)(pIVar1 + 3),&param_1->OutputFile);
  *(bool *)(pIVar1 + 5) = param_1->bIncludeSizes;
  FPaths::GetPath((FString *)(pIVar1 + 6),(FString *)(pIVar1 + 1));
  IVar2 = (IPatchDataEnumeration)::operator_new(0x18);
  if (IVar2 != (IPatchDataEnumeration)0x0) {
    *(undefined ***)IVar2 = &___7FFileSystem_BuildPatchServices__6B_;
    pIVar3 = IFileManager::Get();
    *(IFileManager **)((longlong)IVar2 + 8) = pIVar3;
    pIVar4 = IPlatformFile::GetPlatformPhysical();
    *(IPlatformFile **)((longlong)IVar2 + 0x10) = pIVar4;
    pIVar1[8] = IVar2;
    return pIVar1;
  }
  pIVar1[8] = (IPatchDataEnumeration)0x0;
  return pIVar1;
}

