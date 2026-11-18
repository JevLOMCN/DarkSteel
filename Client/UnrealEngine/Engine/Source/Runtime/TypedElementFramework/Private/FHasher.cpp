// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 1

// operator() @ 142ca0010

ulong64 __thiscall
UE::Editor::DataStorage::FHasher::operator()(FHasher *this,FSoftObjectPath *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  undefined1 local_28 [16];
  FString local_18;
  
  local_28._0_8_ = (param_1->AssetPath).PackageName;
  local_28._8_8_ = (param_1->AssetPath).AssetName;
  pFVar7 = (FScriptContainerElement *)0x0;
  uVar5 = (local_28._8_8_ ^ local_28._0_8_) * -0x622015f714c7d297;
  iVar1 = (param_1->SubPathString).Data.ArrayNum;
  uVar5 = (uVar5 >> 0x2f ^ uVar5 ^ local_28._8_8_) * -0x622015f714c7d297;
  uVar8 = 0;
  uVar9 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar9 = uVar8;
  }
  pFVar3 = ::FString::ConstructFromPtrSize
                     ((FString *)local_28,
                      (uchar *)(param_1->SubPathString).Data.AllocatorInstance.Data,uVar9);
  uVar9 = uVar8;
  if (&local_18 != pFVar3) {
    pFVar7 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar9 = (pFVar3->Data).ArrayNum;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if ((FName)local_28._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  uVar6 = uVar9 * 2 - 2;
  pFVar2 = pFVar7;
  if (uVar9 == 0) {
    uVar6 = uVar8;
    pFVar2 = (FScriptContainerElement *)L"";
  }
  uVar4 = CityHash64WithSeed((char *)pFVar2,uVar6,(uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297);
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return uVar4;
}

