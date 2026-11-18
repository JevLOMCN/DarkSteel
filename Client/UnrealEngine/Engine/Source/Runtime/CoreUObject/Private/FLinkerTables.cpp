// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 22

// Exp @ 141ef2080

FObjectExport * __thiscall FLinkerTables::Exp(FLinkerTables *this,FPackageIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FObjectExport *pFVar4;
  uint uVar5;
  
  uVar5 = param_1.Index - 1;
  if (((param_1.Index < 1) || ((int)uVar5 < 0)) || ((this->ExportMap).ArrayNum <= (int)uVar5)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index.IsExport() && ExportMap.IsValidIndex(Index.ToExport())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                       ,0xaa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FObjectExport *)(*pcVar1)();
      return pFVar4;
    }
    if (param_1.Index < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsExport()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x5b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FObjectExport *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  uVar3 = 0;
  if ((int)uVar5 < (this->ExportMap).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FObjectExport *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FObjectExport *)((this->ExportMap).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x68);
}

// Exp @ 141ef2160

FObjectExport * __thiscall FLinkerTables::Exp(FLinkerTables *this,FPackageIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FObjectExport *pFVar4;
  uint uVar5;
  
  uVar5 = param_1.Index - 1;
  if (((param_1.Index < 1) || ((int)uVar5 < 0)) || ((this->ExportMap).ArrayNum <= (int)uVar5)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index.IsExport() && ExportMap.IsValidIndex(Index.ToExport())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                       ,0xaf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FObjectExport *)(*pcVar1)();
      return pFVar4;
    }
    if (param_1.Index < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsExport()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x5b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FObjectExport *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  uVar3 = 0;
  if ((int)uVar5 < (this->ExportMap).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FObjectExport *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FObjectExport *)((this->ExportMap).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x68);
}

// Imp @ 141efb090

FObjectImport * __thiscall FLinkerTables::Imp(FLinkerTables *this,FPackageIndex param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FObjectImport *pFVar5;
  uint uVar6;
  
  piVar1 = &(this->ImportMap).ArrayNum;
  uVar6 = ~param_1.Index;
  if (((-1 < param_1.Index) || (-1 < param_1.Index)) || (*piVar1 <= (int)uVar6)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index.IsImport() && ImportMap.IsValidIndex(Index.ToImport())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                       ,0x8c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FObjectImport *)(*pcVar2)();
      return pFVar5;
    }
    if (-1 < param_1.Index) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsImport()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x55,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FObjectImport *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  uVar4 = 0;
  if ((int)uVar6 < *piVar1) {
    uVar4 = (uint)param_1.Index >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FObjectImport *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FObjectImport *)((this->ImportMap).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x38);
}

// Imp @ 141efb190

FObjectImport * __thiscall FLinkerTables::Imp(FLinkerTables *this,FPackageIndex param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FObjectImport *pFVar5;
  uint uVar6;
  
  piVar1 = &(this->ImportMap).ArrayNum;
  uVar6 = ~param_1.Index;
  if (((-1 < param_1.Index) || (-1 < param_1.Index)) || (*piVar1 <= (int)uVar6)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index.IsImport() && ImportMap.IsValidIndex(Index.ToImport())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                       ,0x91,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FObjectImport *)(*pcVar2)();
      return pFVar5;
    }
    if (-1 < param_1.Index) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsImport()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x55,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FObjectImport *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  uVar4 = 0;
  if ((int)uVar6 < *piVar1) {
    uVar4 = (uint)param_1.Index >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FObjectImport *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FObjectImport *)((this->ImportMap).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x38);
}

// ImpExp @ 141efb290

FObjectResource * __thiscall FLinkerTables::ImpExp(FLinkerTables *this,FPackageIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  FObjectResource *pFVar3;
  FObjectImport *pFVar4;
  FObjectExport *pFVar5;
  
  if (param_1.Index == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Index.IsNull()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                       ,0x59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FObjectResource *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (param_1.Index < 0) {
    pFVar4 = Imp(this,param_1);
    return (FObjectResource *)pFVar4;
  }
  pFVar5 = Exp(this,param_1);
  return (FObjectResource *)pFVar5;
}

// ImpExp @ 141efb300

FObjectResource * __thiscall FLinkerTables::ImpExp(FLinkerTables *this,FPackageIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  FObjectResource *pFVar3;
  FObjectImport *pFVar4;
  FObjectExport *pFVar5;
  
  if (param_1.Index == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Index.IsNull()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                       ,0x6a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FObjectResource *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (param_1.Index < 0) {
    pFVar4 = Imp(this,param_1);
    return (FObjectResource *)pFVar4;
  }
  pFVar5 = Exp(this,param_1);
  return (FObjectResource *)pFVar5;
}

// ~FLinkerTables @ 1420a4c50

void __thiscall FLinkerTables::~FLinkerTables(FLinkerTables *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->SearchableNamesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SearchableNamesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SearchableNamesMap);
  pFVar2 = (this->SoftPackageReferenceList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *)
             (this->DependsMap).AllocatorInstance.Data,(this->DependsMap).ArrayNum);
  pFVar2 = (this->DependsMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FCellExport,int>
            ((FCellExport *)(this->CellExportMap).AllocatorInstance.Data,
             (this->CellExportMap).ArrayNum);
  pFVar2 = (this->CellExportMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FCellImport,int>
            ((FCellImport *)(this->CellImportMap).AllocatorInstance.Data,
             (this->CellImportMap).ArrayNum);
  pFVar2 = (this->CellImportMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ExportMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ImportMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AnyExportIsInImport @ 1420a9ed0

bool __thiscall FLinkerTables::AnyExportIsInImport(FLinkerTables *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FPackageIndex FVar3;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ImportIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                       ,0x67,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  FVar3.Index = 0;
  if (0 < (this->ExportMap).ArrayNum) {
    do {
      if (FVar3.Index < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExportIndex >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                           ,0x6d,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          bVar2 = (bool)(*pcVar1)();
          return bVar2;
        }
      }
      FVar3.Index = FVar3.Index + 1;
      bVar2 = ResourceIsIn(this,FVar3,(FPackageIndex)~param_1);
      if (bVar2) {
        return true;
      }
    } while (FVar3.Index < (this->ExportMap).ArrayNum);
  }
  return false;
}

// AnyExportShareOuterWithImport @ 1420a9f90

bool __thiscall FLinkerTables::AnyExportShareOuterWithImport(FLinkerTables *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FPackageIndex FVar5;
  FPackageIndex FVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  
  if ((param_1 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ImportIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x67,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  uVar7 = 0;
  if (0 < (this->ExportMap).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->ExportMap).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(int *)((this->ExportMap).AllocatorInstance.Data + lVar8 + 8) < 0) {
        if (((int)uVar7 < 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("ExportIndex >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                               ,0x6d,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        FVar5 = ResourceGetOutermost(this,(int)local_res10);
        FVar6 = ResourceGetOutermost(this,(int)local_res8);
        if (*(int *)CONCAT44(extraout_var,FVar5.Index) ==
            *(int *)CONCAT44(extraout_var_00,FVar6.Index)) {
          return true;
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x68;
    } while ((int)uVar7 < (this->ExportMap).ArrayNum);
  }
  return false;
}

// DoResourcesShareOutermost @ 1420b3b60

bool __thiscall
FLinkerTables::DoResourcesShareOutermost
          (FLinkerTables *this,FPackageIndex param_1,FPackageIndex param_2)

{
  FPackageIndex FVar1;
  FPackageIndex FVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  FVar1 = ResourceGetOutermost(this,(int)local_res20);
  FVar2 = ResourceGetOutermost(this,(int)local_18);
  return *(int *)CONCAT44(extraout_var,FVar1.Index) == *(int *)CONCAT44(extraout_var_00,FVar2.Index)
  ;
}

// GetAllocatedSize @ 1420c5dc0

ulong64 __thiscall FLinkerTables::GetAllocatedSize(FLinkerTables *this)

{
  FScriptContainerElement *pFVar1;
  undefined1 *puVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint *puVar18;
  FScriptContainerElement *pFVar19;
  ulong64 uVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = (this->DependsMap).ArrayNum;
  pFVar12 = (this->DependsMap).AllocatorInstance.Data;
  lVar14 = (longlong)(this->ExportMap).ArrayMax * 0x68 +
           (longlong)(this->DependsMap).ArrayMax * 0x10 +
           (longlong)(this->ImportMap).ArrayMax * 0x38;
  pFVar19 = pFVar12 + (longlong)iVar11 * 0x10;
  while( true ) {
    if ((this->DependsMap).ArrayNum != iVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar19) break;
    pFVar1 = pFVar12 + 0xc;
    pFVar12 = pFVar12 + 0x10;
    lVar14 = lVar14 + (longlong)*(int *)pFVar1 * 4;
  }
  uVar16 = 0;
  uVar15 = 0;
  uVar3 = *(uint *)&(this->SearchableNamesMap).field_0x48;
  uVar10 = uVar16;
  if (1 < uVar3) {
    uVar10 = (longlong)(int)uVar3 << 2;
  }
  puVar2 = &(this->SearchableNamesMap).field_0x10;
  uVar3 = *(uint *)&(this->SearchableNamesMap).field_0x28;
  uVar6 = 1;
  uVar17 = 0;
  uVar20 = lVar14 + (longlong)(this->SoftPackageReferenceList).ArrayMax * 8 +
           (longlong)*(int *)&(this->SearchableNamesMap).field_0xc * 0x20 +
           ((*(int *)&(this->SearchableNamesMap).field_0x2c + 0x1fU >> 5) << 2) + uVar10;
  uVar7 = uVar15;
  if (uVar3 != 0) {
    puVar18 = *(uint **)&(this->SearchableNamesMap).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar2;
    }
    uVar7 = *puVar18;
    uVar10 = uVar16;
    uVar17 = 0;
    uVar15 = 0;
    while (uVar7 == 0) {
      iVar11 = (int)uVar16;
      uVar17 = (int)uVar10 + 0x20;
      uVar10 = (ulonglong)uVar17;
      uVar15 = iVar11 + 1;
      uVar16 = (ulonglong)uVar15;
      uVar7 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < (int)uVar15)
      goto LAB_1420c5efd;
      uVar7 = puVar18[(longlong)iVar11 + 1];
    }
    uVar6 = -uVar7 & uVar7;
    uVar16 = (ulonglong)uVar6 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    uVar7 = (uVar17 - 1) + local_res18;
    if ((int)uVar3 < (int)uVar7) {
      uVar7 = uVar3;
    }
  }
LAB_1420c5efd:
  uVar8 = *(uint *)&(this->SearchableNamesMap).field_0x28;
  uVar13 = uVar8 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,uVar15);
  TStack_60.CurrentBitIndex = uVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar8 >> 5;
  TStack_60._28_4_ = uVar7;
  TStack_60.BaseBitIndex = uVar17;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->SearchableNamesMap).field_0x8 -
                       *(int *)&(this->SearchableNamesMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar8 < 0) || ((int)uVar3 < (int)uVar8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar20 = (*pcVar4)();
    return uVar20;
  }
  uVar3 = *(uint *)&(this->SearchableNamesMap).field_0x28;
  if (uVar8 != uVar3) {
    puVar9 = *(undefined1 **)&(this->SearchableNamesMap).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = puVar2;
    }
    uVar15 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar9 + (longlong)iVar11 * 4);
    while (uVar15 == 0) {
      lVar14 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar8 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar11) goto LAB_1420c6000;
      uVar15 = *(uint *)(puVar9 + lVar14 * 4 + 4);
    }
    uVar16 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar8 = (int)lVar14 + -1 + uVar13;
    if ((int)uVar3 < (int)uVar8) {
      uVar8 = uVar3;
    }
  }
LAB_1420c6000:
  while( true ) {
    if (*(int *)&(this->SearchableNamesMap).field_0x8 -
        *(int *)&(this->SearchableNamesMap).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar8) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    uVar20 = uVar20 + (longlong)
                      *(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x14 +
                              *(longlong *)&this->SearchableNamesMap) * 8;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return uVar20;
}

// GetClassName @ 1420c64e0

FName __thiscall FLinkerTables::GetClassName(FLinkerTables *this,FPackageIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  uint in_register_00000014;
  uint in_R8D;
  
  FVar4.Number = in_register_00000014;
  FVar4.ComparisonIndex.Value = param_1.Index;
  if (-1 < (int)in_R8D) {
    if (0 < (int)in_R8D) {
      GetExportClassName(this,param_1.Index);
      return FVar4;
    }
    *(undefined8 *)FVar4 = 0;
    return FVar4;
  }
  uVar3 = 0;
  if ((int)~in_R8D < (this->ImportMap).ArrayNum) {
    uVar3 = in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FName)(*pcVar1)();
      return FVar4;
    }
  }
  *(undefined8 *)FVar4 =
       *(undefined8 *)
        ((this->ImportMap).AllocatorInstance.Data + (longlong)(int)~in_R8D * 0x38 + 0x14);
  return FVar4;
}

// GetExportClassName @ 1420c65e0

FName __thiscall FLinkerTables::GetExportClassName(FLinkerTables *this,int param_1)

{
  FPackageIndex FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FNameEntryId FVar5;
  FName FVar6;
  FObjectImport *pFVar7;
  FObjectExport *pFVar8;
  undefined4 extraout_var;
  uint in_register_00000014;
  uint in_R8D;
  undefined1 local_res18 [16];
  
  FVar6.Number = in_register_00000014;
  FVar6.ComparisonIndex.Value = param_1;
  if ((-1 < (int)in_R8D) && ((int)in_R8D < (this->ExportMap).ArrayNum)) {
    uVar4 = 0;
    if ((int)in_R8D < (this->ExportMap).ArrayNum) {
      uVar4 = ~in_R8D >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar6 = (FName)(*pcVar2)();
        return FVar6;
      }
    }
    FVar1.Index = *(int *)((this->ExportMap).AllocatorInstance.Data +
                          (longlong)(int)in_R8D * 0x68 + 0xc);
    if (FVar1.Index != 0) {
      if (FVar1.Index < 0) {
        pFVar7 = Imp(this,FVar1);
        *(longlong *)FVar6 = pFVar7->_padding_;
        return FVar6;
      }
      pFVar8 = Exp(this,FVar1);
      *(longlong *)FVar6 = pFVar8->_padding_;
      return FVar6;
    }
  }
  FVar5 = FNameEntryId::FromValidEName((EName)local_res18);
  *(undefined4 *)FVar6 = *(undefined4 *)CONCAT44(extraout_var,FVar5.Value);
  *(undefined4 *)((longlong)FVar6 + 4) = 0;
  return FVar6;
}

// GetExportFullName @ 1420c69f0

FString * __thiscall
FLinkerTables::GetExportFullName
          (FLinkerTables *this,FString *__return_storage_ptr__,FString *param_1,int param_2,
          bool param_3)

{
  FPackageIndex FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FNameEntryId FVar5;
  FString *pFVar6;
  undefined4 extraout_var;
  FObjectResource *pFVar7;
  FString *pFVar8;
  FName local_res8;
  undefined1 local_res20 [8];
  FString local_48;
  FString local_38;
  FString local_28;
  
  uVar4 = 0;
  if (param_2 < (this->ExportMap).ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar2)();
      return pFVar6;
    }
  }
  FVar1.Index = *(int *)((this->ExportMap).AllocatorInstance.Data + (longlong)param_2 * 0x68 + 0xc);
  if (FVar1.Index == 0) {
    FVar5 = FNameEntryId::FromValidEName((EName)local_res20);
    local_res8.Number = 0;
    local_res8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar5.Value);
  }
  else {
    pFVar7 = ImpExp(this,FVar1);
    local_res8 = pFVar7->ObjectName;
  }
  pFVar6 = GetExportPathName(this,&local_28,param_1,param_2,param_3);
  pFVar8 = ::FName::ToString(&local_res8,&local_38);
  ::FString::ConcatFC(&local_48,pFVar8,L" ");
  ::FString::ConcatFF(__return_storage_ptr__,&local_48,pFVar6);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetExportPathName @ 1420c6cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FString * __thiscall
FLinkerTables::GetExportPathName
          (FLinkerTables *this,FString *__return_storage_ptr__,FString *param_1,int param_2,
          bool param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  byte bVar6;
  bool bVar7;
  wchar_t wVar8;
  FNameEntryId FVar9;
  uint uVar10;
  FString *pFVar11;
  FObjectExport *pFVar12;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  uint uVar15;
  int iVar16;
  FPackageIndex FVar17;
  ulong64 uVar18;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  byte local_138;
  ulonglong local_134;
  ulonglong local_12c;
  FString *local_120;
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  FString *local_110;
  FString local_108;
  undefined4 local_f0;
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_168;
  local_e8.Base = local_c8;
  bVar7 = false;
  local_e8.CurPos = local_c8;
  local_e8.bIsDynamic = false;
  local_e8.bIsExternal = false;
  local_e8.End = (wchar_t *)local_48;
  local_120 = __return_storage_ptr__;
  local_110 = param_1;
  if ((param_2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExportIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x6d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FString *)(*pcVar3)();
    return pFVar11;
  }
  FVar17.Index = param_2 + 1;
  bVar6 = 0;
  if (FVar17.Index != 0) {
    do {
      local_138 = bVar6 | (byte)((uint)FVar17.Index >> 0x1f);
      if ((FVar17.Index == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Index.IsNull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                             ,0x59,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FString *)(*pcVar3)();
        return pFVar11;
      }
      if (FVar17.Index < 0) {
        pFVar12 = (FObjectExport *)Imp(this,FVar17);
      }
      else {
        pFVar12 = Exp(this,FVar17);
      }
      if (0 < (int)((longlong)local_e8.CurPos - (longlong)local_e8.Base >> 1)) {
        uVar10 = pFVar12->_padding_;
        if (uVar10 == 0) {
LAB_1420c6e85:
          if (FVar17.Index < 0) {
            iVar16 = (this->ImportMap).ArrayNum;
            uVar15 = ~FVar17.Index;
            uVar10 = 0;
            if ((int)uVar15 < iVar16) {
              uVar10 = (uint)FVar17.Index >> 0x1f;
            }
            if (uVar10 == 0) {
              local_148 = (longlong)(int)uVar15;
              local_140 = (longlong)iVar16;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                pFVar11 = (FString *)(*pcVar3)();
                return pFVar11;
              }
            }
            local_12c = *(ulonglong *)
                         ((this->ImportMap).AllocatorInstance.Data +
                         (longlong)(int)uVar15 * 0x38 + 0x14);
          }
          else if (FVar17.Index < 1) {
            local_12c = 0;
          }
          else {
            GetExportClassName(this,(int)&local_12c);
          }
          uVar4 = local_12c;
          FVar9 = FNameEntryId::FromValidEName((EName)local_114);
          if (uVar4 == *(uint *)CONCAT44(extraout_var_00,FVar9.Value)) goto LAB_1420c6fbe;
          if (((int)((longlong)local_e8.CurPos - (longlong)local_e8.Base >> 1) < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pos + RemoveLen <= Len()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                 ,0x119,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FString *)(*pcVar3)();
            return pFVar11;
          }
          pwVar14 = local_e8.CurPos;
          if (local_e8.End < local_e8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
            pwVar14 = local_e8.CurPos;
          }
          for (; local_e8.CurPos != local_e8.Base; local_e8.CurPos = local_e8.CurPos + -1) {
            *local_e8.CurPos = local_e8.CurPos[-1];
          }
          wVar8 = u__[0];
        }
        else {
          if ((int)uVar10 < 0) {
            iVar16 = (this->ImportMap).ArrayNum;
            uVar15 = ~uVar10;
            if ((uVar10 >> 0x1f & (uint)((int)uVar15 < iVar16)) == 0) {
              local_148 = (longlong)(int)uVar15;
              local_140 = (longlong)iVar16;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                pFVar11 = (FString *)(*pcVar3)();
                return pFVar11;
              }
            }
            local_134 = *(ulonglong *)
                         ((this->ImportMap).AllocatorInstance.Data +
                         (longlong)(int)uVar15 * 0x38 + 0x14);
          }
          else if ((int)uVar10 < 1) {
            local_134 = 0;
          }
          else {
            GetExportClassName(this,(int)&local_134);
          }
          uVar4 = local_134;
          FVar9 = FNameEntryId::FromValidEName((EName)local_118);
          if (uVar4 == *(uint *)CONCAT44(extraout_var,FVar9.Value)) goto LAB_1420c6e85;
LAB_1420c6fbe:
          if (((int)((longlong)local_e8.CurPos - (longlong)local_e8.Base >> 1) < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pos + RemoveLen <= Len()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                 ,0x119,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FString *)(*pcVar3)();
            return pFVar11;
          }
          pwVar14 = local_e8.CurPos;
          if (local_e8.End < local_e8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
            pwVar14 = local_e8.CurPos;
          }
          for (; local_e8.CurPos != local_e8.Base; local_e8.CurPos = local_e8.CurPos + -1) {
            *local_e8.CurPos = local_e8.CurPos[-1];
          }
          wVar8 = u__[0];
        }
        local_e8.CurPos = pwVar14 + 1;
        *local_e8.Base = wVar8;
      }
      pFVar11 = ::FName::ToString((FName *)pFVar12,&local_108);
      iVar1 = (pFVar11->Data).ArrayNum;
      pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
      iVar16 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar16 = 0;
      }
      if (((int)((longlong)local_e8.CurPos - (longlong)local_e8.Base >> 1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pos + RemoveLen <= Len()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                             ,0x119,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FString *)(*pcVar3)();
        return pFVar11;
      }
      if (iVar16 < 0) {
        local_e8.CurPos = local_e8.CurPos + iVar16;
        if (local_e8.Base != local_e8.CurPos) {
          pwVar14 = local_e8.Base + -(longlong)iVar16;
          pwVar13 = local_e8.Base;
          do {
            wVar8 = *pwVar14;
            pwVar14 = pwVar14 + 1;
            *pwVar13 = wVar8;
            pwVar13 = pwVar13 + 1;
          } while (pwVar13 != local_e8.CurPos);
        }
      }
      else if (0 < iVar16) {
        uVar18 = (ulong64)iVar16;
        if (local_e8.End < local_e8.CurPos + uVar18) {
          TStringBuilderBase<wchar_t>::Extend(&local_e8,uVar18);
        }
        local_e8.CurPos = local_e8.CurPos + uVar18;
        pwVar14 = local_e8.CurPos + -1;
        if (pwVar14 != local_e8.Base + (uVar18 - 1)) {
          pwVar13 = pwVar14 + -uVar18;
          do {
            wVar8 = *pwVar13;
            pwVar13 = pwVar13 + -1;
            *pwVar14 = wVar8;
            pwVar14 = pwVar14 + -1;
          } while (pwVar14 != local_e8.Base + (uVar18 - 1));
        }
      }
      if (0 < iVar16) {
        memcpy(local_e8.Base,pFVar2,(longlong)iVar16 * 2);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
LAB_1420c721f:
        bVar7 = true;
      }
      else if (FVar17.Index < 1) {
        bVar7 = false;
      }
      else {
        iVar16 = FVar17.Index + -1;
        if (((iVar16 < 0) || ((this->ExportMap).ArrayNum <= iVar16)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index.IsExport() && ExportMap.IsValidIndex(Index.ToExport())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                               ,0xaa,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FString *)(*pcVar3)();
          return pFVar11;
        }
        iVar1 = (this->ExportMap).ArrayNum;
        uVar10 = 0;
        if (iVar16 < iVar1) {
          uVar10 = (uint)-FVar17.Index >> 0x1f;
        }
        if (uVar10 == 0) {
          local_148 = (longlong)FVar17.Index + -1;
          local_140 = (longlong)iVar1;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FString *)(*pcVar3)();
            return pFVar11;
          }
        }
        if (((byte)(this->ExportMap).AllocatorInstance.Data[(longlong)FVar17.Index * 0x68 + -0x1c] &
            1) != 0) goto LAB_1420c721f;
        bVar7 = false;
      }
      if ((FVar17.Index == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Index.IsNull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                             ,0x59,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FString *)(*pcVar3)();
        return pFVar11;
      }
      if (FVar17.Index < 0) {
        pFVar12 = (FObjectExport *)Imp(this,FVar17);
      }
      else {
        pFVar12 = Exp(this,FVar17);
      }
      FVar17.Index = pFVar12->_padding_;
      bVar6 = local_138;
    } while (FVar17.Index != 0);
    if (((bVar7) && (param_3)) ||
       (param_1 = local_110, __return_storage_ptr__ = local_120, local_138 != 0)) {
      if (local_e8.End < local_e8.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
      }
      *local_e8.CurPos = L'\0';
      ::FString::FString(local_120,local_e8.Base);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
      return local_120;
    }
  }
  local_f0 = 1;
  if (((int)((longlong)local_e8.CurPos - (longlong)local_e8.Base >> 1) < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pos + RemoveLen <= Len()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                         ,0x119,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FString *)(*pcVar3)();
    return pFVar11;
  }
  if (local_e8.End < local_e8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
  }
  pwVar14 = local_e8.CurPos + 1;
  for (; local_e8.CurPos != local_e8.Base; local_e8.CurPos = local_e8.CurPos + -1) {
    *local_e8.CurPos = local_e8.CurPos[-1];
  }
  *local_e8.Base = u__[0];
  iVar1 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar16 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar16 = 0;
  }
  local_e8.CurPos = pwVar14;
  if (((int)((longlong)pwVar14 - (longlong)local_e8.Base >> 1) < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pos + RemoveLen <= Len()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                         ,0x119,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FString *)(*pcVar3)();
    return pFVar11;
  }
  uVar18 = (ulong64)iVar16;
  if (iVar16 < 0) {
    local_e8.CurPos = local_e8.CurPos + uVar18;
    for (pwVar14 = local_e8.Base; pwVar14 != local_e8.CurPos; pwVar14 = pwVar14 + 1) {
      *pwVar14 = pwVar14[-uVar18];
    }
  }
  else if (0 < iVar16) {
    if (local_e8.End < local_e8.CurPos + uVar18) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,uVar18);
    }
    local_e8.CurPos = local_e8.CurPos + uVar18;
    pwVar14 = local_e8.CurPos + -1;
    if (pwVar14 != local_e8.Base + (uVar18 - 1)) {
      pwVar13 = pwVar14 + -uVar18;
      do {
        wVar8 = *pwVar13;
        pwVar13 = pwVar13 + -1;
        *pwVar14 = wVar8;
        pwVar14 = pwVar14 + -1;
      } while (pwVar14 != local_e8.Base + (uVar18 - 1));
    }
  }
  if (0 < iVar16) {
    memcpy(local_e8.Base,pFVar2,uVar18 * 2);
  }
  if (local_e8.End < local_e8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
  }
  *local_e8.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_e8.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
  return __return_storage_ptr__;
}

// GetImportFullName @ 1420c7550

FString * __thiscall
FLinkerTables::GetImportFullName(FLinkerTables *this,FString *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FString *pFVar4;
  uint uVar5;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar3 = GetImportPathName(this,&local_18,param_1);
  uVar5 = 0;
  if (param_1 < (this->ImportMap).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = ::FName::ToString((FName *)((this->ImportMap).AllocatorInstance.Data +
                                      (longlong)param_1 * 0x38 + 0x14),&local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L" ");
  ::FString::ConcatFF(__return_storage_ptr__,&local_38,pFVar3);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetImportPathName @ 1420c7660

FString * __thiscall
FLinkerTables::GetImportPathName(FLinkerTables *this,FString *__return_storage_ptr__,int param_1)

{
  int iVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FNameEntryId FVar8;
  FString *pFVar9;
  FObjectExport *this_00;
  undefined4 extraout_var;
  FName FVar10;
  undefined4 extraout_var_00;
  int iVar11;
  ForAnyElementType FVar12;
  FPackageIndex FVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  ulonglong local_res20;
  undefined1 local_a8 [8];
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ImportIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x67,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FString *)(*pcVar4)();
    return pFVar9;
  }
  FVar13.Index = ~param_1;
  do {
    if (FVar13.Index == 0) {
      return __return_storage_ptr__;
    }
    if (FVar13.Index < 0) {
      this_00 = (FObjectExport *)Imp(this,FVar13);
    }
    else {
      this_00 = Exp(this,FVar13);
    }
    bVar5 = false;
    iVar1 = (__return_storage_ptr__->Data).ArrayNum;
    iVar11 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar11 = 0;
    }
    if (0 < iVar11) {
      if (FVar13.Index < 0) {
        uVar7 = 0;
        if (~FVar13.Index < (this->ImportMap).ArrayNum) {
          uVar7 = (uint)FVar13.Index >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FString *)(*pcVar4)();
          return pFVar9;
        }
        local_res20 = *(ulonglong *)
                       ((this->ImportMap).AllocatorInstance.Data +
                       (longlong)~FVar13.Index * 0x38 + 0x14);
      }
      else if (FVar13.Index < 1) {
        local_res20 = 0;
      }
      else {
        GetExportClassName(this,(int)&local_res20);
      }
      uVar2 = local_res20;
      FVar8 = FNameEntryId::FromValidEName((EName)local_res18);
      if (uVar2 != *(uint *)CONCAT44(extraout_var,FVar8.Value)) {
        if (this_00->_padding_ != 0) {
          FVar10 = GetClassName(this,(FPackageIndex)(int)local_a8);
          uVar2 = *(ulonglong *)FVar10;
          FVar8 = FNameEntryId::FromValidEName((EName)local_res10);
          if (uVar2 != *(uint *)CONCAT44(extraout_var_00,FVar8.Value)) goto LAB_1420c77e0;
        }
        bVar5 = true;
      }
    }
LAB_1420c77e0:
    iVar1 = (__return_storage_ptr__->Data).ArrayNum;
    uVar7 = iVar1 - 1;
    if (iVar1 == 0) {
      uVar7 = 0;
    }
    if (0 < (int)uVar7) {
      if (bVar5) {
        pFVar9 = ::FString::FString(&local_70,L":");
        ::FString::ConcatFF(&local_a0,pFVar9,__return_storage_ptr__);
        if (__return_storage_ptr__ != &local_a0) {
          pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (__return_storage_ptr__->Data).AllocatorInstance.Data =
               local_a0.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->Data).ArrayNum = local_a0.Data.ArrayNum;
          (__return_storage_ptr__->Data).ArrayMax = local_a0.Data.ArrayMax;
          local_a0.Data.ArrayNum = 0;
          local_a0.Data.ArrayMax = 0;
          local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        FVar12.Data = local_70.Data.AllocatorInstance.Data;
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          FVar12.Data = local_70.Data.AllocatorInstance.Data;
        }
      }
      else {
        pFVar9 = ::FString::FString(&local_60,L".");
        ::FString::ConcatFF(&local_90,pFVar9,__return_storage_ptr__);
        if (__return_storage_ptr__ != &local_90) {
          pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (__return_storage_ptr__->Data).AllocatorInstance.Data =
               local_90.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->Data).ArrayNum = local_90.Data.ArrayNum;
          (__return_storage_ptr__->Data).ArrayMax = local_90.Data.ArrayMax;
          local_90.Data.ArrayNum = 0;
          local_90.Data.ArrayMax = 0;
          local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        FVar12.Data = local_60.Data.AllocatorInstance.Data;
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
          FVar12.Data = local_60.Data.AllocatorInstance.Data;
        }
      }
      if (FVar12.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar12.Data);
      }
    }
    pFVar9 = ::FName::ToString((FName *)this_00,&local_50);
    ::FString::ConcatFF(&local_80,pFVar9,__return_storage_ptr__);
    if (__return_storage_ptr__ != &local_80) {
      pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_80.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_80.Data.ArrayMax;
      local_80.Data.ArrayNum = 0;
      local_80.Data.ArrayMax = 0;
      local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    FVar13.Index = this_00->_padding_;
  } while( true );
}

// ImportIsInAnyExport @ 1420c8e10

bool __thiscall FLinkerTables::ImportIsInAnyExport(FLinkerTables *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_1 < (this->ImportMap).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  uVar7 = *(uint *)((this->ImportMap).AllocatorInstance.Data + (longlong)param_1 * 0x38 + 8);
  do {
    if (uVar7 == 0) {
      return false;
    }
    if ((int)uVar7 < 0) {
      uVar5 = ~uVar7;
      if (((-1 < (int)uVar7) || ((this->ImportMap).ArrayNum <= (int)uVar5)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index.IsImport() && ImportMap.IsValidIndex(Index.ToImport())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                             ,0x91,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar4 = 0;
      if ((int)uVar5 < (this->ImportMap).ArrayNum) {
        uVar4 = uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pFVar6 = (this->ImportMap).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x38;
    }
    else {
      if (((((int)uVar7 < 1) || ((int)(uVar7 - 1) < 0)) ||
          ((this->ExportMap).ArrayNum <= (int)(uVar7 - 1))) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index.IsExport() && ExportMap.IsValidIndex(Index.ToExport())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                             ,0xaf,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (((int)uVar7 < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsExport()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                             ,0x5b,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar5 = 0;
      if ((int)(uVar7 - 1) < (this->ExportMap).ArrayNum) {
        uVar5 = -uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pFVar6 = (this->ExportMap).AllocatorInstance.Data + (longlong)(int)(uVar7 - 1) * 0x68;
    }
    uVar7 = *(uint *)(pFVar6 + 8);
    if (0 < (int)uVar7) {
      return true;
    }
  } while( true );
}

// ResourceGetOutermost @ 1420d5fc0

FPackageIndex __thiscall
FLinkerTables::ResourceGetOutermost(FLinkerTables *this,FPackageIndex param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FObjectResource *pFVar7;
  undefined4 in_register_00000014;
  FPackageIndex in_R8D;
  
  pFVar7 = ImpExp(this,in_R8D);
  iVar4 = (pFVar7->OuterIndex).Index;
  do {
    if (iVar4 == 0) {
      *(int *)CONCAT44(in_register_00000014,param_1.Index) = in_R8D.Index;
      return (FPackageIndex)param_1.Index;
    }
    in_R8D.Index = (pFVar7->OuterIndex).Index;
    if ((in_R8D.Index == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Index.IsNull()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                           ,0x6a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return (FPackageIndex)iVar4;
    }
    if (in_R8D.Index < 0) {
      piVar1 = &(this->ImportMap).ArrayNum;
      iVar4 = -1 - in_R8D.Index;
      if (((iVar4 < 0) || (*piVar1 <= iVar4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index.IsImport() && ImportMap.IsValidIndex(Index.ToImport())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                             ,0x91,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return (FPackageIndex)iVar4;
      }
      uVar5 = 0;
      if (iVar4 < *piVar1) {
        uVar5 = (uint)in_R8D.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return (FPackageIndex)iVar4;
      }
      pFVar7 = (FObjectResource *)
               ((this->ImportMap).AllocatorInstance.Data + (longlong)iVar4 * 0x38);
    }
    else {
      if ((((in_R8D.Index < 1) || ((int)(in_R8D.Index - 1U) < 0)) ||
          ((this->ExportMap).ArrayNum <= (int)(in_R8D.Index - 1U))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index.IsExport() && ExportMap.IsValidIndex(Index.ToExport())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                             ,0xaf,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return (FPackageIndex)iVar4;
      }
      if ((in_R8D.Index < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsExport()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                             ,0x5b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return (FPackageIndex)iVar4;
      }
      uVar5 = in_R8D.Index - 1;
      uVar6 = 0;
      if ((int)uVar5 < (this->ExportMap).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return (FPackageIndex)iVar4;
      }
      pFVar7 = (FObjectResource *)
               ((this->ExportMap).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x68);
    }
    iVar4 = (pFVar7->OuterIndex).Index;
  } while( true );
}

// ResourceIsIn @ 1420d61a0

bool __thiscall
FLinkerTables::ResourceIsIn(FLinkerTables *this,FPackageIndex param_1,FPackageIndex param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FObjectResource *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  pFVar7 = ImpExp(this,param_1);
  uVar2 = (pFVar7->OuterIndex).Index;
  do {
    if (uVar2 == 0) {
      return false;
    }
    if ((int)uVar2 < 0) {
      uVar8 = ~uVar2;
      piVar1 = &(this->ImportMap).ArrayNum;
      if (((-1 < (int)uVar2) || (*piVar1 <= (int)uVar8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index.IsImport() && ImportMap.IsValidIndex(Index.ToImport())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                             ,0x91,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar6 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar6 = uVar2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar9 = (this->ImportMap).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x38;
    }
    else {
      if (((((int)uVar2 < 1) || ((int)(uVar2 - 1) < 0)) ||
          ((this->ExportMap).ArrayNum <= (int)(uVar2 - 1))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index.IsExport() && ExportMap.IsValidIndex(Index.ToExport())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                             ,0xaf,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (((int)uVar2 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsExport()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                             ,0x5b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar8 = 0;
      if ((int)(uVar2 - 1) < (this->ExportMap).ArrayNum) {
        uVar8 = -uVar2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar9 = (this->ExportMap).AllocatorInstance.Data + (longlong)(int)(uVar2 - 1) * 0x68;
    }
    uVar2 = *(uint *)(pFVar9 + 8);
    if (uVar2 == param_2.Index) {
      return true;
    }
  } while( true );
}

// SerializeSearchableNamesMap @ 1420d95c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FLinkerTables::SerializeSearchableNamesMap(FLinkerTables *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  SerializeSearchableNamesMap(this,*(FStructuredArchiveSlot *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// SerializeSearchableNamesMap @ 1420d9630

void __thiscall
FLinkerTables::SerializeSearchableNamesMap(FLinkerTables *this,FStructuredArchiveSlot param_1)

{
  TMap<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  FIdentityFunctor FVar6;
  TMap<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  bool bVar8;
  FArchive *pFVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  FSlotBase local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FKeyComparisonClass<TLess<FPackageIndex>_> local_a0;
  TMap<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar9 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  this_00 = &this->SearchableNamesMap;
  if ((pFVar9->field_0x28 & 4) != 0) {
    local_a0.Predicate.Predicate =
         (TDereferenceWrapper<FPackageIndex,TLess<FPackageIndex>_>)local_res8;
    TSet<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Sort<TSortableMapBase<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>::FKeyComparisonClass<TLess<FPackageIndex>_>_>
              ((TSet<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this_00,&local_a0);
    iStack_90 = 0;
    puVar1 = &(this->SearchableNamesMap).field_0x10;
    iVar3 = *(int *)&(this->SearchableNamesMap).field_0x28;
    uStack_8c = 1;
    local_78 = 0;
    iStack_7c = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(this->SearchableNamesMap).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar13 = *puVar15;
      while (uVar13 == 0) {
        lVar10 = (longlong)iStack_90;
        local_78 = local_78 + 0x20;
        iStack_90 = iStack_90 + 1;
        iStack_7c = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1420d970e;
        uVar13 = puVar15[lVar10 + 1];
      }
      uStack_8c = -uVar13 & uVar13;
      uVar2 = (ulonglong)uStack_8c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iStack_7c = local_78 + -1 + (int)lVar10;
      if (iVar3 < iStack_7c) {
        iStack_7c = iVar3;
      }
    }
LAB_1420d970e:
    iStack_70 = *(int *)&(this->SearchableNamesMap).field_0x8 -
                *(int *)&(this->SearchableNamesMap).field_0x34;
    uVar13 = *(uint *)&(this->SearchableNamesMap).field_0x28;
    uStack_80 = 0xffffffff;
    uVar12 = uVar13 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
    TStack_60.CurrentBitIndex = iStack_7c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar13 >> 5;
    TStack_60._28_4_ = iStack_7c;
    TStack_60.BaseBitIndex = local_78;
    uStack_40 = CONCAT44(uStack_6c,iStack_70);
    local_98 = this_00;
    local_88 = puVar1;
    iStack_74 = iStack_7c;
    local_68 = this_00;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar4 = *(uint *)&(this->SearchableNamesMap).field_0x28;
    if (uVar13 != uVar4) {
      puVar14 = *(undefined1 **)&(this->SearchableNamesMap).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar11;
        uVar12 = uVar12 + 0x20;
        iVar11 = iVar11 + 1;
        uVar13 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_1420d9809;
        uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar13 = (int)lVar10 + -1 + uVar12;
      if ((int)uVar4 < (int)uVar13) {
        uVar13 = uVar4;
      }
    }
LAB_1420d9809:
    FVar6 = local_res10.StructuredArchive._0_1_;
    while( true ) {
      pTVar7 = local_68;
      if (*(int *)(&local_68->field_0x0 + 8) - *(int *)(&local_68->field_0x0 + 0x34) !=
          (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_60.CurrentBitIndex == uVar13) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == this_00)) break;
      lVar10 = *(longlong *)&pTVar7->field_0x0;
      AlgoImpl::
      IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
                (*(FName **)((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 + lVar10),
                 *(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 + lVar10),FVar6,
                 (FNameLexicalLess *)local_res20);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  TSetPrivateFriend::
  SerializeStructured<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ((FStructuredArchiveSlot)local_res10.StructuredArchive,
             (TSet<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this_00);
  return;
}

