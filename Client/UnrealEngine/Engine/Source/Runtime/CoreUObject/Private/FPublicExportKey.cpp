// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FromPackageImport @ 142325fd0

FPublicExportKey * __cdecl
FPublicExportKey::FromPackageImport
          (FPublicExportKey *__return_storage_ptr__,FPackageObjectIndex param_1,
          TArrayView<FPackageId_const_,int> *param_2,
          TArrayView<unsigned___int64_const_,int> *param_3)

{
  FPackageId FVar1;
  code *pcVar2;
  bool bVar3;
  FPublicExportKey *pFVar4;
  ulong64 *puVar5;
  uint uVar6;
  
  if ((byte)(param_1.TypeAndId >> 0x3e) != 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ObjectIndex.IsPackageImport()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\AsyncLoading2.h"
                       ,0xe5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPublicExportKey *)(*pcVar2)();
      return pFVar4;
    }
  }
  uVar6 = (uint)(param_1.TypeAndId >> 0x20) & 0x3fffffff;
  if (param_2->ArrayNum <= (int)uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPublicExportKey *)(*pcVar2)();
      return pFVar4;
    }
  }
  FVar1.Id = param_2->DataPtr[uVar6].Id;
  puVar5 = TArrayView<unsigned___int64_const_,int>::operator[](param_3,(int)param_1.TypeAndId);
  MakeKey(__return_storage_ptr__,FVar1,*puVar5);
  return __return_storage_ptr__;
}

// MakeKey @ 14232c1b0

FPublicExportKey * __cdecl
FPublicExportKey::MakeKey
          (FPublicExportKey *__return_storage_ptr__,FPackageId param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  FPublicExportKey *pFVar3;
  
  if (param_1.Id == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PackageId.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\AsyncLoading2.h"
                       ,0xdd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPublicExportKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (param_2 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExportHash",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\AsyncLoading2.h"
                       ,0xde,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPublicExportKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  __return_storage_ptr__->PackageIdLow = (uint)param_1.Id;
  __return_storage_ptr__->PackageIdHigh = (uint)(param_1.Id >> 0x20);
  __return_storage_ptr__->ExportHashHigh = (uint)(param_2 >> 0x20);
  __return_storage_ptr__->ExportHashLow = (uint)param_2;
  return __return_storage_ptr__;
}

