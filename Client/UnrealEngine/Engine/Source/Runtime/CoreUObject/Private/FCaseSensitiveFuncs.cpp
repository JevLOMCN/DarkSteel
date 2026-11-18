// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// GetKeyHash @ 141ea0970

uint __cdecl
FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>::GetKeyHash
          (FAssetRegistryExportPath *param_1)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  FVar1 = param_1->Object;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar2 = param_1->Package;
  uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  FVar3 = (param_1->ClassPath).AssetName;
  uVar7 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  FVar4 = (param_1->ClassPath).PackageName;
  uVar8 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  uVar8 = (uVar8 >> 2) + 0x9e3779b9 + FVar4.Number + uVar8 * 0x40 ^ uVar8;
  uVar8 = (uVar8 >> 2) +
          ((uVar7 >> 2) + 0x9e3779b9 + FVar3.Number + uVar7 * 0x40 ^ uVar7) +
          uVar8 * 0x40 + -0x61c88647 ^ uVar8;
  uVar8 = (uVar8 >> 2) +
          ((uVar6 >> 2) + 0x9e3779b9 + FVar2.Number + uVar6 * 0x40 ^ uVar6) +
          uVar8 * 0x40 + -0x61c88647 ^ uVar8;
  return (uVar8 >> 2) + 0x9e3779b9 +
         ((uVar5 >> 2) + FVar1.Number + 0x9e3779b9 + uVar5 * 0x40 ^ uVar5) + uVar8 * 0x40 ^ uVar8;
}

// GetKeyHash @ 141ea0aa0

uint __cdecl
FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>::GetKeyHash
          (FNumberlessExportPath *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ::GetTypeHash((FNameEntryId)(param_1->Object).Value);
  uVar2 = ::GetTypeHash((FNameEntryId)(param_1->Package).Value);
  uVar3 = ::GetTypeHash((FNameEntryId)(param_1->ClassObject).Value);
  uVar4 = ::GetTypeHash((FNameEntryId)(param_1->ClassPackage).Value);
  uVar4 = uVar4 * 0x40 + uVar3 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  uVar4 = uVar4 * 0x40 + uVar2 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  return uVar4 * 0x40 + uVar1 + 0x9e3779b9 + (uVar4 >> 2) ^ uVar4;
}

// GetKeyHash @ 141ea0b50

uint __cdecl
FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>::GetKeyHash
          (FMarshalledText *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = (param_1->String).Data.ArrayNum;
  uVar4 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  if ((int)uVar4 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x113,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar4 = CityHash32((char *)(param_1->String).Data.AllocatorInstance.Data,uVar4);
  return uVar4;
}

// GetKeyHash @ 141ea0bc0

uint __cdecl
FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>::GetKeyHash(FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  if (iVar5 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x113,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar4 = CityHash32((char *)(param_1->Data).AllocatorInstance.Data,iVar5 * 2);
  return uVar4;
}

