// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// AddNode @ 141edb840

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

bool __thiscall FEventLoadNodeArray::AddNode(FEventLoadNodeArray *this,FEventLoadNodePtr *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 uVar5;
  char *pcVar6;
  int iVar7;
  FEventLoadNode *pFVar8;
  int iVar9;
  int iStack_c;
  
  uVar3 = param_1->Phase;
  uVar1._0_4_ = param_1->ImportOrExportIndex;
  uVar1._4_4_ = param_1->Phase;
  if ((undefined4)uVar1 == 0) {
    if (2 < (uint)uVar1._4_4_) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < int32(EEventLoadNode::Package_NumPhases) && Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                         ,0x10a,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    pFVar8 = this->PackageNodes + (int)uVar1._4_4_;
    goto LAB_141edba47;
  }
  if (this->TotalNumberOfImportExportNodes == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TotalNumberOfImportExportNodes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                       ,0x10d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  if ((int)(undefined4)uVar1 < 0) {
    if (1 < (int)uVar3) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("int32(Node.Phase) < int32(EEventLoadNode::Import_NumPhases)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                         ,0x110,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    if ((uVar1 >> 0x1f & 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsImport()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x55,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    iVar7 = this->OffsetToImports + ~(undefined4)uVar1 * 2 + uVar3;
    if ((iVar7 < this->OffsetToImports) || (this->OffsetToExports <= iVar7)) {
      iVar9 = 0x112;
      pcVar6 = "Index >= OffsetToImports && Index < OffsetToExports";
LAB_141edb9e9:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                         ,iVar9,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
  }
  else {
    if (2 < (int)uVar3) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("int32(Node.Phase) < int32(EEventLoadNode::Export_NumPhases)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                         ,0x116,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    if ((int)(undefined4)uVar1 < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsExport()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x5b,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    iVar7 = this->OffsetToExports + (undefined4)uVar1 * 3 + uVar3 + -3;
    if (iVar7 < this->OffsetToExports) {
      iVar9 = 0x118;
      pcVar6 = "Index >= OffsetToExports";
      goto LAB_141edb9e9;
    }
  }
  if (((this->Array == (FEventLoadNode *)0x0) || (this->TotalNumberOfImportExportNodes <= iVar7)) ||
     (iVar7 < 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Array && Index < TotalNumberOfImportExportNodes && Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                       ,0x11a,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  pFVar8 = this->Array + iVar7;
LAB_141edba47:
  if (pFVar8->bAddedToGraph != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NodeRef.bAddedToGraph",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                       ,0xee,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  pFVar8->bAddedToGraph = true;
  this->TotalNumberOfNodesAdded = this->TotalNumberOfNodesAdded + 1;
  return this->TotalNumberOfNodesAdded == 1;
}

// GetAddedNodes @ 141ef7d30

void __thiscall
FEventLoadNodeArray::GetAddedNodes
          (FEventLoadNodeArray *this,TArray<FEventLoadNodePtr,TSizedDefaultAllocator<32>_> *param_1,
          FAsyncPackage *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  bool bVar7;
  int iVar8;
  FEventLoadNodeArray *pFVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  FEventLoadNodeArray *pFVar13;
  uint uVar14;
  FAsyncPackage *local_48;
  uint uStack_40;
  int iStack_3c;
  
  if (this->TotalNumberOfNodesAdded != 0) {
    iVar11 = 0;
    uStack_40 = 0;
    pFVar13 = this;
    local_48 = param_2;
    do {
      uVar14 = uStack_40;
      pFVar9 = pFVar13;
      iStack_3c = iVar11;
      if (uStack_40 != 0) {
        if ((this->TotalNumberOfImportExportNodes == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TotalNumberOfImportExportNodes",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                               ,0x10d,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((int)uVar14 < 0) {
          if ((1 < iVar11) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("int32(Node.Phase) < int32(EEventLoadNode::Import_NumPhases)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                 ,0x110,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((-1 < (int)uVar14) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsImport()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                 ,0x55,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar8 = iVar11 + ~uVar14 * 2 + this->OffsetToImports;
          if ((iVar8 < this->OffsetToImports) || (this->OffsetToExports <= iVar8)) {
            iVar12 = 0x112;
            pcVar10 = "Index >= OffsetToImports && Index < OffsetToExports";
LAB_141ef7ed7:
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              (pcVar10,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                               ,iVar12,L"");
            if (bVar7) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        else {
          if ((2 < iVar11) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("int32(Node.Phase) < int32(EEventLoadNode::Export_NumPhases)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                 ,0x116,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (((int)uVar14 < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsExport()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                 ,0x5b,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar8 = uVar14 * 3 + -3 + iVar11 + this->OffsetToExports;
          if (iVar8 < this->OffsetToExports) {
            iVar12 = 0x118;
            pcVar10 = "Index >= OffsetToExports";
            goto LAB_141ef7ed7;
          }
        }
        if ((((this->Array == (FEventLoadNode *)0x0) ||
             (this->TotalNumberOfImportExportNodes <= iVar8)) || (iVar8 < 0)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Array && Index < TotalNumberOfImportExportNodes && Index >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                               ,0x11a,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar9 = (FEventLoadNodeArray *)(this->Array + iVar8);
      }
      if (pFVar9->PackageNodes[0].bAddedToGraph != false) {
        pFVar1 = (param_1->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar8 = param_1->ArrayNum;
        if (iVar8 == param_1->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        auVar3._8_4_ = uStack_40;
        auVar3._0_8_ = local_48;
        auVar3._12_4_ = iStack_3c;
        param_1->ArrayNum = iVar8 + 1;
        *(undefined1 (*) [16])((param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10) = auVar3;
      }
      iVar11 = iVar11 + 1;
      pFVar13 = (FEventLoadNodeArray *)(pFVar13->PackageNodes + 1);
    } while (iVar11 < 3);
    uVar14 = 0;
    if (0 < this->NumImports) {
      do {
        if (((int)uVar14 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("ImportIndex >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                               ,0x67,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar11 = 0;
        uStack_40 = ~uVar14;
        pFVar13 = this;
        do {
          uVar6 = uStack_40;
          pFVar9 = pFVar13;
          iStack_3c = iVar11;
          if (uStack_40 != 0) {
            if ((this->TotalNumberOfImportExportNodes == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TotalNumberOfImportExportNodes",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                   ,0x10d,L""), bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((int)uVar6 < 0) {
              if ((1 < iVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("int32(Node.Phase) < int32(EEventLoadNode::Import_NumPhases)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                     ,0x110,L""), bVar7)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if ((-1 < (int)uVar6) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsImport()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                     ,0x55,L""), bVar7)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar8 = iVar11 + ~uVar6 * 2 + this->OffsetToImports;
              if ((iVar8 < this->OffsetToImports) || (this->OffsetToExports <= iVar8)) {
                iVar12 = 0x112;
                pcVar10 = "Index >= OffsetToImports && Index < OffsetToExports";
LAB_141ef8197:
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  (pcVar10,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                   ,iVar12,L"");
                if (bVar7) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
            }
            else {
              if ((2 < iVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("int32(Node.Phase) < int32(EEventLoadNode::Export_NumPhases)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                     ,0x116,L""), bVar7)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (((int)uVar6 < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsExport()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                     ,0x5b,L""), bVar7)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar8 = uVar6 * 3 + -3 + iVar11 + this->OffsetToExports;
              if (iVar8 < this->OffsetToExports) {
                iVar12 = 0x118;
                pcVar10 = "Index >= OffsetToExports";
                goto LAB_141ef8197;
              }
            }
            if ((((this->Array == (FEventLoadNode *)0x0) ||
                 (this->TotalNumberOfImportExportNodes <= iVar8)) || (iVar8 < 0)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Array && Index < TotalNumberOfImportExportNodes && Index >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                   ,0x11a,L""), bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar9 = (FEventLoadNodeArray *)(this->Array + iVar8);
          }
          if (pFVar9->PackageNodes[0].bAddedToGraph != false) {
            pFVar1 = (param_1->AllocatorInstance).Data;
            if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
                ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)
                ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar8 = param_1->ArrayNum;
            if (iVar8 == param_1->ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            auVar4._8_4_ = uStack_40;
            auVar4._0_8_ = local_48;
            auVar4._12_4_ = iStack_3c;
            param_1->ArrayNum = iVar8 + 1;
            *(undefined1 (*) [16])((param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10) =
                 auVar4;
          }
          iVar11 = iVar11 + 1;
          pFVar13 = (FEventLoadNodeArray *)(pFVar13->PackageNodes + 1);
        } while (iVar11 < 2);
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < this->NumImports);
    }
    uVar14 = 0;
    if (0 < this->NumExports) {
      do {
        if (((int)uVar14 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("ExportIndex >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                               ,0x6d,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar14 = uVar14 + 1;
        iVar11 = 0;
        pFVar13 = this;
        uStack_40 = uVar14;
        do {
          uVar6 = uStack_40;
          pFVar9 = pFVar13;
          iStack_3c = iVar11;
          if (uStack_40 != 0) {
            if ((this->TotalNumberOfImportExportNodes == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TotalNumberOfImportExportNodes",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                   ,0x10d,L""), bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((int)uVar6 < 0) {
              if ((1 < iVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("int32(Node.Phase) < int32(EEventLoadNode::Import_NumPhases)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                     ,0x110,L""), bVar7)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if ((-1 < (int)uVar6) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsImport()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                     ,0x55,L""), bVar7)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar8 = iVar11 + ~uVar6 * 2 + this->OffsetToImports;
              if ((iVar8 < this->OffsetToImports) || (this->OffsetToExports <= iVar8)) {
                iVar12 = 0x112;
                pcVar10 = "Index >= OffsetToImports && Index < OffsetToExports";
LAB_141ef8467:
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  (pcVar10,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                   ,iVar12,L"");
                if (bVar7) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
            }
            else {
              if ((2 < iVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("int32(Node.Phase) < int32(EEventLoadNode::Export_NumPhases)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                     ,0x116,L""), bVar7)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (((int)uVar6 < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsExport()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                     ,0x5b,L""), bVar7)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar8 = uVar6 * 3 + -3 + iVar11 + this->OffsetToExports;
              if (iVar8 < this->OffsetToExports) {
                iVar12 = 0x118;
                pcVar10 = "Index >= OffsetToExports";
                goto LAB_141ef8467;
              }
            }
            if ((((this->Array == (FEventLoadNode *)0x0) ||
                 (this->TotalNumberOfImportExportNodes <= iVar8)) || (iVar8 < 0)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Array && Index < TotalNumberOfImportExportNodes && Index >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                   ,0x11a,L""), bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar9 = (FEventLoadNodeArray *)(this->Array + iVar8);
          }
          if (pFVar9->PackageNodes[0].bAddedToGraph != false) {
            pFVar1 = (param_1->AllocatorInstance).Data;
            if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
                ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)
                ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar8 = param_1->ArrayNum;
            if (iVar8 == param_1->ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            auVar5._8_4_ = uStack_40;
            auVar5._0_8_ = local_48;
            auVar5._12_4_ = iStack_3c;
            param_1->ArrayNum = iVar8 + 1;
            *(undefined1 (*) [16])((param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10) =
                 auVar5;
          }
          iVar11 = iVar11 + 1;
          pFVar13 = (FEventLoadNodeArray *)(pFVar13->PackageNodes + 1);
        } while (iVar11 < 3);
      } while ((int)uVar14 < this->NumExports);
    }
  }
  return;
}

// Init @ 141efb570

void __thiscall FEventLoadNodeArray::Init(FEventLoadNodeArray *this,int param_1,int param_2)

{
  FEventLoadNode *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (((((param_2 == 0) || (this->NumExports != 0)) || (3 < this->TotalNumberOfNodesAdded)) ||
      (this->TotalNumberOfImportExportNodes != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumExports && !NumExports && TotalNumberOfNodesAdded <= int32(EEventLoadNode::Package_NumPhases) && !TotalNumberOfImportExportNodes"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x46a,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->NumImports = param_1;
  this->NumExports = param_2;
  iVar8 = param_1 * 2 + param_2 * 3;
  this->OffsetToImports = 0;
  this->OffsetToExports = param_1 * 2;
  this->TotalNumberOfImportExportNodes = iVar8;
  if ((iVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TotalNumberOfImportExportNodes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x470,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar9 = (ulonglong)this->TotalNumberOfImportExportNodes;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar9;
  uVar5 = SUB168(ZEXT816(0x18) * auVar3,0);
  if (SUB168(ZEXT816(0x18) * auVar3,8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  uVar6 = uVar5 + 8;
  if (0xfffffffffffffff7 < uVar5) {
    uVar6 = 0xffffffffffffffff;
  }
  puVar7 = operator_new__(uVar6);
  if (puVar7 == (ulonglong *)0x0) {
    this->Array = (FEventLoadNode *)0x0;
  }
  else {
    *puVar7 = uVar9;
    pFVar1 = (FEventLoadNode *)(puVar7 + 1);
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      (pFVar1->NodesWaitingForMe).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar1->NodesWaitingForMe).ArrayNum = 0;
      (pFVar1->NodesWaitingForMe).ArrayMax = 0;
      pFVar1->NumPrerequistes = 0;
      pFVar1->bFired = false;
      pFVar1->bAddedToGraph = false;
      pFVar1 = pFVar1 + 1;
    }
    this->Array = (FEventLoadNode *)(puVar7 + 1);
  }
  return;
}

// RemoveNode @ 141f0df80

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

bool __thiscall
FEventLoadNodeArray::RemoveNode(FEventLoadNodeArray *this,FEventLoadNodePtr *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 uVar6;
  char *pcVar7;
  int iVar8;
  FEventLoadNode *pFVar9;
  int iVar10;
  int iStack_c;
  
  uVar4 = param_1->Phase;
  uVar2._0_4_ = param_1->ImportOrExportIndex;
  uVar2._4_4_ = param_1->Phase;
  if ((undefined4)uVar2 == 0) {
    if (2 < (uint)uVar2._4_4_) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < int32(EEventLoadNode::Package_NumPhases) && Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                         ,0x10a,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    pFVar9 = this->PackageNodes + (int)uVar2._4_4_;
    goto LAB_141f0e187;
  }
  if (this->TotalNumberOfImportExportNodes == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TotalNumberOfImportExportNodes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                       ,0x10d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  if ((int)(undefined4)uVar2 < 0) {
    if (1 < (int)uVar4) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("int32(Node.Phase) < int32(EEventLoadNode::Import_NumPhases)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                         ,0x110,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    if ((uVar2 >> 0x1f & 1) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsImport()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x55,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    iVar8 = this->OffsetToImports + ~(undefined4)uVar2 * 2 + uVar4;
    if ((iVar8 < this->OffsetToImports) || (this->OffsetToExports <= iVar8)) {
      iVar10 = 0x112;
      pcVar7 = "Index >= OffsetToImports && Index < OffsetToExports";
LAB_141f0e129:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar7,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                         ,iVar10,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
  }
  else {
    if (2 < (int)uVar4) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("int32(Node.Phase) < int32(EEventLoadNode::Export_NumPhases)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                         ,0x116,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    if ((int)(undefined4)uVar2 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsExport()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x5b,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    iVar8 = this->OffsetToExports + (undefined4)uVar2 * 3 + uVar4 + -3;
    if (iVar8 < this->OffsetToExports) {
      iVar10 = 0x118;
      pcVar7 = "Index >= OffsetToExports";
      goto LAB_141f0e129;
    }
  }
  if (((this->Array == (FEventLoadNode *)0x0) || (this->TotalNumberOfImportExportNodes <= iVar8)) ||
     (iVar8 < 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Array && Index < TotalNumberOfImportExportNodes && Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                       ,0x11a,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  pFVar9 = this->Array + iVar8;
LAB_141f0e187:
  if (pFVar9->bAddedToGraph == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeRef.bAddedToGraph",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                       ,0xf5,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  pFVar9->bAddedToGraph = false;
  piVar1 = &this->TotalNumberOfNodesAdded;
  *piVar1 = *piVar1 + -1;
  return *piVar1 == 0;
}

// Shutdown @ 141f13890

void __thiscall FEventLoadNodeArray::Shutdown(FEventLoadNodeArray *this)

{
  FEventLoadNode *pFVar1;
  FEventLoadNode *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  
  if ((this->TotalNumberOfNodesAdded != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!TotalNumberOfNodesAdded",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x476,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = this->Array;
  if (pFVar2 != (FEventLoadNode *)0x0) {
    lVar6 = *(longlong *)&pFVar2[-1].NumPrerequistes;
    pFVar1 = pFVar2 + lVar6;
    while (lVar6 != 0) {
      pFVar3 = pFVar1[-1].NodesWaitingForMe.AllocatorInstance.Data;
      pFVar1 = pFVar1 + -1;
      lVar6 = lVar6 + -1;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
    operator_delete__(&pFVar2[-1].NumPrerequistes,
                      *(longlong *)&pFVar2[-1].NumPrerequistes * 0x18 + 8);
  }
  this->Array = (FEventLoadNode *)0x0;
  return;
}

