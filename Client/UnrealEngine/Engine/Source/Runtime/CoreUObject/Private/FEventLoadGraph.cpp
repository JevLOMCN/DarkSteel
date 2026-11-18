// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// AddArc @ 141eda230

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall
FEventLoadGraph::AddArc(FEventLoadGraph *this,FEventLoadNodePtr *param_1,FEventLoadNodePtr *param_2)

{
  FScriptContainerElement *pFVar1;
  FAsyncPackage *pFVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  FEventLoadNodePtr *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int *piVar10;
  bool bVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  FEventLoadNode *pFVar15;
  FEventLoadNode *pFVar16;
  int iStack_1c;
  int iStack_c;
  
  if ((param_1->WaitingPackage).Package == (FAsyncPackage *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Package",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                        ,0x37,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar2 = (param_1->WaitingPackage).Package;
  uVar7 = param_1->Phase;
  uVar3._0_4_ = param_1->ImportOrExportIndex;
  uVar3._4_4_ = param_1->Phase;
  if ((undefined4)uVar3 == 0) {
    if (2 < (uint)uVar3._4_4_) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index < int32(EEventLoadNode::Package_NumPhases) && Index >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                          ,0x10a,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar16 = (pFVar2->EventNodeArray).PackageNodes + (int)uVar3._4_4_;
  }
  else {
    if ((pFVar2->EventNodeArray).TotalNumberOfImportExportNodes == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TotalNumberOfImportExportNodes",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                          ,0x10d,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((int)(undefined4)uVar3 < 0) {
      if (1 < (int)uVar7) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("int32(Node.Phase) < int32(EEventLoadNode::Import_NumPhases)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                            ,0x110,L"");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((uVar3 >> 0x1f & 1) == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsImport()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                            ,0x55,L"");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar12 = (pFVar2->EventNodeArray).OffsetToImports;
      iVar14 = iVar12 + ~(undefined4)uVar3 * 2 + uVar7;
      if ((iVar14 < iVar12) || ((pFVar2->EventNodeArray).OffsetToExports <= iVar14)) {
        iVar12 = 0x112;
        pcVar13 = "Index >= OffsetToImports && Index < OffsetToExports";
LAB_141eda41d:
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           (pcVar13,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                            ,iVar12,L"");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
    }
    else {
      if (2 < (int)uVar7) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("int32(Node.Phase) < int32(EEventLoadNode::Export_NumPhases)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                            ,0x116,L"");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((int)(undefined4)uVar3 < 1) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsExport()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                            ,0x5b,L"");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar12 = (pFVar2->EventNodeArray).OffsetToExports;
      iVar14 = iVar12 + (undefined4)uVar3 * 3 + uVar7 + -3;
      if (iVar14 < iVar12) {
        iVar12 = 0x118;
        pcVar13 = "Index >= OffsetToExports";
        goto LAB_141eda41d;
      }
    }
    if ((((pFVar2->EventNodeArray).Array == (FEventLoadNode *)0x0) ||
        ((pFVar2->EventNodeArray).TotalNumberOfImportExportNodes <= iVar14)) || (iVar14 < 0)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Array && Index < TotalNumberOfImportExportNodes && Index >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                          ,0x11a,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar16 = (pFVar2->EventNodeArray).Array + iVar14;
  }
  if (pFVar16->bAddedToGraph == false) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!bCheckAdded || NodeRef.bAddedToGraph",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                        ,0xfc,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((param_2->WaitingPackage).Package == (FAsyncPackage *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Package",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                        ,0x37,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar2 = (param_2->WaitingPackage).Package;
  uVar8 = param_2->Phase;
  uVar4._0_4_ = param_2->ImportOrExportIndex;
  uVar4._4_4_ = param_2->Phase;
  if ((undefined4)uVar4 == 0) {
    if (2 < (uint)uVar4._4_4_) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index < int32(EEventLoadNode::Package_NumPhases) && Index >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                          ,0x10a,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar15 = (pFVar2->EventNodeArray).PackageNodes + (int)uVar4._4_4_;
    goto LAB_141eda6db;
  }
  if ((pFVar2->EventNodeArray).TotalNumberOfImportExportNodes == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("TotalNumberOfImportExportNodes",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                        ,0x10d,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((int)(undefined4)uVar4 < 0) {
    if (1 < (int)uVar8) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("int32(Node.Phase) < int32(EEventLoadNode::Import_NumPhases)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                          ,0x110,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((uVar4 >> 0x1f & 1) == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsImport()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                          ,0x55,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar12 = (pFVar2->EventNodeArray).OffsetToImports;
    iVar14 = iVar12 + ~(undefined4)uVar4 * 2 + uVar8;
    if ((iVar14 < iVar12) || ((pFVar2->EventNodeArray).OffsetToExports <= iVar14)) {
      iVar12 = 0x112;
      pcVar13 = "Index >= OffsetToImports && Index < OffsetToExports";
LAB_141eda67d:
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         (pcVar13,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                          ,iVar12,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  else {
    if (2 < (int)uVar8) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("int32(Node.Phase) < int32(EEventLoadNode::Export_NumPhases)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                          ,0x116,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((int)(undefined4)uVar4 < 1) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsExport()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                          ,0x5b,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar12 = (pFVar2->EventNodeArray).OffsetToExports;
    iVar14 = iVar12 + (undefined4)uVar4 * 3 + uVar8 + -3;
    if (iVar14 < iVar12) {
      iVar12 = 0x118;
      pcVar13 = "Index >= OffsetToExports";
      goto LAB_141eda67d;
    }
  }
  if ((((pFVar2->EventNodeArray).Array == (FEventLoadNode *)0x0) ||
      ((pFVar2->EventNodeArray).TotalNumberOfImportExportNodes <= iVar14)) || (iVar14 < 0)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Array && Index < TotalNumberOfImportExportNodes && Index >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                        ,0x11a,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar15 = (pFVar2->EventNodeArray).Array + iVar14;
LAB_141eda6db:
  if (pFVar15->bAddedToGraph == false) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!bCheckAdded || NodeRef.bAddedToGraph",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                        ,0xfc,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pFVar15->bFired != false) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!DependentNode->bFired",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                        ,0x4ca,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar15->NumPrerequistes = pFVar15->NumPrerequistes + 1;
  pFVar5 = (FEventLoadNodePtr *)(pFVar16->NodesWaitingForMe).AllocatorInstance.Data;
  if ((pFVar5 <= param_2) && (param_2 < pFVar5 + (pFVar16->NodesWaitingForMe).ArrayMax)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar12 = (pFVar16->NodesWaitingForMe).ArrayNum;
  piVar10 = &(pFVar16->NodesWaitingForMe).ArrayMax;
  if (iVar12 == *piVar10) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)pFVar16,piVar10);
  }
  (pFVar16->NodesWaitingForMe).ArrayNum = iVar12 + 1;
  uVar9 = *(undefined8 *)&param_2->ImportOrExportIndex;
  pFVar1 = (pFVar16->NodesWaitingForMe).AllocatorInstance.Data + (longlong)iVar12 * 0x10;
  *(FAsyncPackage **)pFVar1 = (param_2->WaitingPackage).Package;
  *(undefined8 *)(pFVar1 + 8) = uVar9;
  return;
}

// AddNode @ 141edb4d0

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall
FEventLoadGraph::AddNode(FEventLoadGraph *this,FEventLoadNodePtr *param_1,bool param_2,int param_3)

{
  FAsyncPackage *pFVar1;
  FAsyncPackage *pFVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  FEventLoadNode *pFVar13;
  FUnsafeWeakAsyncPackagePtr local_res18 [2];
  int iStack_2c;
  FEventLoadNodePtr local_28;
  
  if (((param_1->WaitingPackage).Package == (FAsyncPackage *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                         ,0x37,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar1 = (param_1->WaitingPackage).Package;
  local_28.WaitingPackage.Package = (param_1->WaitingPackage).Package;
  local_28.ImportOrExportIndex.Index = (param_1->ImportOrExportIndex).Index;
  local_28.Phase = param_1->Phase;
  bVar7 = FEventLoadNodeArray::AddNode(&pFVar1->EventNodeArray,&local_28);
  if (bVar7) {
    pFVar2 = (param_1->WaitingPackage).Package;
    uVar9 = ((uint)((ulonglong)pFVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar2 >> 4)) *
            -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    if (*(int *)&(this->PackagesWithNodes).Elements.field_0x8 !=
        *(int *)&(this->PackagesWithNodes).Elements.field_0x34) {
      FVar11 = (this->PackagesWithNodes).Hash.SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&(this->PackagesWithNodes).Hash;
      }
      iVar8 = *(int *)((longlong)FVar11 +
                      (ulonglong)((this->PackagesWithNodes).HashSize - 1U & (uVar9 >> 0x10 ^ uVar9))
                      * 4);
      if (iVar8 != -1) {
        lVar3 = *(longlong *)&(this->PackagesWithNodes).Elements;
        do {
          if (*(FAsyncPackage **)(lVar3 + (longlong)iVar8 * 0x10) == pFVar2) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!PackagesWithNodes.Contains(NewNode.WaitingPackage)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                               ,0x4bb,L"");
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            break;
          }
          iVar8 = *(int *)(lVar3 + 8 + (longlong)iVar8 * 0x10);
        } while (iVar8 != -1);
      }
    }
    TSet<FUnsafeWeakAsyncPackagePtr,DefaultKeyFuncs<FUnsafeWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::Emplace<FUnsafeWeakAsyncPackagePtr_const_&>
              (&this->PackagesWithNodes,local_res18,(bool *)param_1);
  }
  if ((uint)param_2 + param_3 == 0) {
    return;
  }
  uVar6 = param_1->Phase;
  uVar4._0_4_ = param_1->ImportOrExportIndex;
  uVar4._4_4_ = param_1->Phase;
  if ((undefined4)uVar4 == 0) {
    if ((2 < (uint)uVar4._4_4_) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < int32(EEventLoadNode::Package_NumPhases) && Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                           ,0x10a,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar13 = (pFVar1->EventNodeArray).PackageNodes + (int)uVar4._4_4_;
    goto LAB_141edb7f4;
  }
  if (((pFVar1->EventNodeArray).TotalNumberOfImportExportNodes == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TotalNumberOfImportExportNodes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                         ,0x10d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((int)(undefined4)uVar4 < 0) {
    if ((1 < (int)uVar6) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("int32(Node.Phase) < int32(EEventLoadNode::Import_NumPhases)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                           ,0x110,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((uVar4 >> 0x1f & 1) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsImport()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                           ,0x55,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (pFVar1->EventNodeArray).OffsetToImports;
    iVar12 = iVar8 + ~(undefined4)uVar4 * 2 + uVar6;
    if ((iVar12 < iVar8) || ((pFVar1->EventNodeArray).OffsetToExports <= iVar12)) {
      iVar8 = 0x112;
      pcVar10 = "Index >= OffsetToImports && Index < OffsetToExports";
LAB_141edb796:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar10,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                         ,iVar8,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  else {
    if ((2 < (int)uVar6) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("int32(Node.Phase) < int32(EEventLoadNode::Export_NumPhases)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                           ,0x116,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((int)(undefined4)uVar4 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsExport()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                           ,0x5b,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (pFVar1->EventNodeArray).OffsetToExports;
    iVar12 = iVar8 + (undefined4)uVar4 * 3 + uVar6 + -3;
    if (iVar12 < iVar8) {
      iVar8 = 0x118;
      pcVar10 = "Index >= OffsetToExports";
      goto LAB_141edb796;
    }
  }
  if (((((pFVar1->EventNodeArray).Array == (FEventLoadNode *)0x0) ||
       ((pFVar1->EventNodeArray).TotalNumberOfImportExportNodes <= iVar12)) || (iVar12 < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Array && Index < TotalNumberOfImportExportNodes && Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                         ,0x11a,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar13 = (pFVar1->EventNodeArray).Array + iVar12;
LAB_141edb7f4:
  if ((pFVar13->bAddedToGraph == false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bCheckAdded || NodeRef.bAddedToGraph",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                         ,0xfc,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar13->NumPrerequistes = pFVar13->NumPrerequistes + (uint)param_2 + param_3;
  return;
}

// CheckForCycles @ 141edf350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FEventLoadGraph::CheckForCycles(FEventLoadGraph *this,bool param_1)

{
  uint uVar1;
  EEventLoadNode EVar2;
  int iVar3;
  undefined1 *puVar4;
  FAsyncPackage *pFVar5;
  code *pcVar6;
  FEventLoadGraph *pFVar7;
  bool bVar8;
  ulonglong uVar9;
  FString *pFVar10;
  longlong lVar11;
  char *pcVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  int *piVar19;
  uint uVar20;
  FEventLoadNode *pFVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  int *piVar24;
  undefined1 *puVar25;
  uint *puVar26;
  uint *puVar27;
  FEventLoadNodePtr *pFVar28;
  undefined1 *puVar29;
  undefined1 auStackY_358 [32];
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325;
  undefined1 local_324;
  undefined1 local_323;
  undefined1 local_322;
  undefined1 local_321;
  uint local_320;
  TArray<FEventLoadNodePtr,TSizedDefaultAllocator<32>_> local_318;
  FAsyncPackage *local_308;
  undefined8 uStack_300;
  uint local_2f8;
  FAsyncPackage *local_2f0;
  int local_2e8;
  int local_2e4;
  TArray<FEventLoadNodePtr,TSizedDefaultAllocator<32>_> local_2e0;
  FString local_2d0;
  FEventLoadGraph *local_2c0;
  int iStack_2b8;
  uint uStack_2b4;
  undefined1 *local_2b0;
  undefined4 uStack_2a8;
  int iStack_2a4;
  int local_2a0;
  undefined4 uStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  int *local_290;
  int *local_288;
  FEventLoadGraph *local_280;
  int local_278;
  int local_274;
  undefined1 local_270 [8];
  int local_268;
  int local_264;
  FEventLoadGraph *local_260;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_258;
  undefined8 uStack_238;
  FEventLoadGraph *local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  undefined8 uStack_208;
  undefined8 *local_200;
  FEventLoadNodePtr *local_1f8;
  FAsyncPackage **local_1f0;
  FEventLoadNodePtr *local_1e8;
  FString local_1e0;
  FString local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180 [2];
  undefined4 local_154;
  undefined4 local_134;
  TSet<TTuple<FEventLoadNodePtr,FEventLoadNodePtr>,TDefaultMapHashableKeyFuncs<FEventLoadNodePtr,FEventLoadNodePtr,1>,FDefaultSetAllocator>
  local_128;
  TSet<FEventLoadNodePtr,DefaultKeyFuncs<FEventLoadNodePtr,0>,FDefaultSetAllocator> local_d8;
  TSet<FEventLoadNodePtr,DefaultKeyFuncs<FEventLoadNodePtr,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_358;
  piVar19 = (int *)&(this->PackagesWithNodes).Elements.field_0x8;
  piVar24 = (int *)&(this->PackagesWithNodes).Elements.field_0x34;
  local_290 = piVar19;
  local_288 = piVar24;
  local_280 = this;
  do {
    uVar14 = 0;
    local_320 = 0;
    if (param_1 != false) {
      local_128.Elements._0_8_ = 0;
      local_128.Elements._32_8_ = 0;
      iStack_2b8 = 0;
      local_128.Elements._40_4_ = 0;
      uStack_2b4 = 1;
      local_128.Elements._52_4_ = 0;
      local_128.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_2a0 = 0;
      local_128.HashSize = 0;
      local_318.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      puVar29 = &(this->PackagesWithNodes).Elements.field_0x10;
      local_128.Elements._8_8_ = 0;
      local_128.Elements._44_4_ = 0x80;
      local_128.Elements._48_4_ = 0xffffffff;
      local_318.ArrayNum = 0;
      local_318.ArrayMax = 0;
      iVar15 = *(int *)&(this->PackagesWithNodes).Elements.field_0x28;
      iStack_2a4 = 0;
      if (iVar15 != 0) {
        puVar27 = *(uint **)&(this->PackagesWithNodes).Elements.field_0x20;
        puVar26 = (uint *)puVar29;
        if (puVar27 != (uint *)0x0) {
          puVar26 = puVar27;
        }
        uVar14 = *puVar26;
        iStack_2b8 = 0;
        while (uVar14 == 0) {
          lVar11 = (longlong)iStack_2b8;
          local_2a0 = local_2a0 + 0x20;
          iStack_2b8 = iStack_2b8 + 1;
          iStack_2a4 = iVar15;
          if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2b8)
          goto LAB_141edf49d;
          uVar14 = puVar26[lVar11 + 1];
        }
        uStack_2b4 = -uVar14 & uVar14;
        uVar9 = (ulonglong)uStack_2b4 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_278 = (int)lVar11;
        iStack_2a4 = local_278 + -1 + local_2a0;
        if (iVar15 < iStack_2a4) {
          iStack_2a4 = iVar15;
        }
      }
LAB_141edf49d:
      uVar14 = *(uint *)&(this->PackagesWithNodes).Elements.field_0x28;
      uStack_29c = local_154;
      uStack_2a8 = 0xffffffff;
      uVar20 = uVar14 & 0xffffffe0;
      iStack_298 = *local_290 - *local_288;
      TStack_258._padding_ = CONCAT44(uStack_2b4,iStack_2b8);
      TStack_258.CurrentBitIndex = iStack_2a4;
      TStack_258.UnvisitedBitMask = 0xffffffff;
      iVar22 = (int)uVar14 >> 5;
      TStack_258._28_4_ = local_154;
      TStack_258.BaseBitIndex = local_2a0;
      uStack_238 = CONCAT44(uStack_294,iStack_298);
      local_2c0 = this;
      local_2b0 = puVar29;
      local_260 = this;
      TStack_258.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar29;
      if ((((int)uVar14 < 0) || (iVar15 < (int)uVar14)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar1 = *(uint *)&(this->PackagesWithNodes).Elements.field_0x28;
      if (uVar14 != uVar1) {
        puVar4 = *(undefined1 **)&(this->PackagesWithNodes).Elements.field_0x20;
        puVar25 = puVar29;
        if (puVar4 != (undefined1 *)0x0) {
          puVar25 = puVar4;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar22 * 4);
        while (uVar14 == 0) {
          lVar11 = (longlong)iVar22;
          uVar20 = uVar20 + 0x20;
          iVar22 = iVar22 + 1;
          uVar14 = uVar1;
          if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
          goto LAB_141edf5a0;
          uVar14 = *(uint *)(puVar25 + lVar11 * 4 + 4);
        }
        uVar9 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_274 = (int)lVar11;
        uVar14 = local_274 + -1 + uVar20;
        if ((int)uVar1 < (int)uVar14) {
          uVar14 = uVar1;
        }
      }
LAB_141edf5a0:
      while( true ) {
        pFVar7 = local_260;
        if (*(int *)&(local_260->PackagesWithNodes).Elements.field_0x8 -
            *(int *)&(local_260->PackagesWithNodes).Elements.field_0x34 != (int)uStack_238) {
          local_327 = 0;
          `TSparseArray<TSparseSetElement<FUnsafeWeakAsyncPackagePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_327);
        }
        if (((TStack_258.CurrentBitIndex == uVar14) &&
            (TStack_258.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar29)) &&
           (pFVar7 == this)) break;
        plVar16 = (longlong *)
                  (*(longlong *)&(pFVar7->PackagesWithNodes).Elements +
                  (longlong)TStack_258.CurrentBitIndex * 0x10);
        if ((*plVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Package",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                               ,0x37,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (FAsyncPackage *)*plVar16;
        FEventLoadNodeArray::GetAddedNodes(&pFVar5->EventNodeArray,&local_318,pFVar5);
        TStack_258.UnvisitedBitMask = TStack_258.UnvisitedBitMask & ~TStack_258._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_258);
      }
      uVar9 = (ulonglong)local_318.ArrayNum;
      pFVar28 = (FEventLoadNodePtr *)(local_318.AllocatorInstance.Data + uVar9 * 0x10);
      local_2f8 = local_318.ArrayNum;
      FVar18.Data = local_318.AllocatorInstance.Data;
      while( true ) {
        if (local_318.ArrayNum != (int)uVar9) {
          local_326 = 0;
          `TCheckedPointerIterator<FEventLoadNodePtr,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_326);
        }
        this = local_280;
        if ((FEventLoadNodePtr *)FVar18.Data == pFVar28) break;
        if (((((FEventLoadNodePtr *)FVar18.Data)->WaitingPackage).Package == (FAsyncPackage *)0x0)
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Package",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                  ,0x37,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (((FEventLoadNodePtr *)FVar18.Data)->WaitingPackage).Package;
        local_308 = (((FEventLoadNodePtr *)FVar18.Data)->WaitingPackage).Package;
        uStack_300._0_4_ = ((FEventLoadNodePtr *)FVar18.Data)->ImportOrExportIndex;
        uStack_300._4_4_ = ((FEventLoadNodePtr *)FVar18.Data)->Phase;
        uVar9._0_4_ = ((FEventLoadNodePtr *)FVar18.Data)->ImportOrExportIndex;
        uVar9._4_4_ = ((FEventLoadNodePtr *)FVar18.Data)->Phase;
        if ((undefined4)uVar9 == 0) {
          if ((2 < (uint)uVar9._4_4_) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < int32(EEventLoadNode::Package_NumPhases) && Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                 ,0x10a,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar21 = (pFVar5->EventNodeArray).PackageNodes + (int)uVar9._4_4_;
        }
        else {
          if (((pFVar5->EventNodeArray).TotalNumberOfImportExportNodes == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("TotalNumberOfImportExportNodes",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                 ,0x10d,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((int)(undefined4)uVar9 < 0) {
            if ((1 < uStack_300._4_4_) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("int32(Node.Phase) < int32(EEventLoadNode::Import_NumPhases)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                   ,0x110,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (((uVar9 >> 0x1f & 1) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsImport()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                   ,0x55,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar15 = uStack_300._4_4_ + ~(undefined4)uVar9 * 2 +
                     (pFVar5->EventNodeArray).OffsetToImports;
            if ((iVar15 < (pFVar5->EventNodeArray).OffsetToImports) ||
               ((pFVar5->EventNodeArray).OffsetToExports <= iVar15)) {
              iVar22 = 0x112;
              pcVar12 = "Index >= OffsetToImports && Index < OffsetToExports";
LAB_141edf822:
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                (pcVar12,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                 ,iVar22,L"");
              if (bVar8) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
          }
          else {
            if ((2 < uStack_300._4_4_) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("int32(Node.Phase) < int32(EEventLoadNode::Export_NumPhases)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                   ,0x116,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (((int)(undefined4)uVar9 < 1) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsExport()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                   ,0x5b,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar15 = (undefined4)uVar9 * 3 + -3 + uStack_300._4_4_ +
                     (pFVar5->EventNodeArray).OffsetToExports;
            if (iVar15 < (pFVar5->EventNodeArray).OffsetToExports) {
              iVar22 = 0x118;
              pcVar12 = "Index >= OffsetToExports";
              goto LAB_141edf822;
            }
          }
          if (((((pFVar5->EventNodeArray).Array == (FEventLoadNode *)0x0) ||
               ((pFVar5->EventNodeArray).TotalNumberOfImportExportNodes <= iVar15)) || (iVar15 < 0))
             && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Array && Index < TotalNumberOfImportExportNodes && Index >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                    ,0x11a,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar21 = (pFVar5->EventNodeArray).Array + iVar15;
        }
        if ((pFVar21->bAddedToGraph == false) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!bCheckAdded || NodeRef.bAddedToGraph",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                               ,0xfc,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (pFVar21->NumPrerequistes == 0) {
          if (GIsInitialLoad == false) {
            if (pFVar21->bFired == false) goto LAB_141edf8c8;
            if ((byte)LogStreaming._0_1_ < 3) goto LAB_141edf945;
            FEventLoadNodePtr::HumanReadableStringForDebugging
                      ((FEventLoadNodePtr *)FVar18.Data,&local_1d0);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            FVar13.Data = local_1d0.Data.AllocatorInstance.Data;
          }
          else {
            if (pFVar21->bFired != false) {
              local_320 = local_320 + 1;
              goto LAB_141edf945;
            }
LAB_141edf8c8:
            FEventLoadNodePtr::HumanReadableStringForDebugging
                      ((FEventLoadNodePtr *)FVar18.Data,&local_1e0);
            UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            FVar13.Data = local_1e0.Data.AllocatorInstance.Data;
          }
          if (FVar13.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar13.Data);
          }
        }
LAB_141edf945:
        iVar15 = (pFVar21->NodesWaitingForMe).ArrayNum;
        pFVar17 = (pFVar21->NodesWaitingForMe).AllocatorInstance.Data;
        pFVar23 = pFVar17 + (longlong)iVar15 * 0x10;
        while( true ) {
          if ((pFVar21->NodesWaitingForMe).ArrayNum != iVar15) {
            local_325 = 0;
            `TCheckedPointerIterator<FEventLoadNodePtr,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_325);
          }
          if (pFVar17 == pFVar23) break;
          local_1c0 = *(undefined8 *)pFVar17;
          uStack_1b8 = *(undefined8 *)(pFVar17 + 8);
          local_200 = &local_1c0;
          local_1f8 = (FEventLoadNodePtr *)FVar18.Data;
          TSet<TTuple<FEventLoadNodePtr,FEventLoadNodePtr>,TDefaultMapHashableKeyFuncs<FEventLoadNodePtr,FEventLoadNodePtr,1>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FEventLoadNodePtr_const_&,FEventLoadNodePtr_const_&>_>
                    (&local_128,
                     (TPairInitializer<FEventLoadNodePtr_const_&,FEventLoadNodePtr_const_&> *)
                     local_270,(bool *)&local_200);
          pFVar17 = pFVar17 + 0x10;
        }
        if ((((FEventLoadNodePtr *)FVar18.Data)->ImportOrExportIndex).Index != 0) {
          EVar2 = ((FEventLoadNodePtr *)FVar18.Data)->Phase;
          local_2e8 = 0;
          local_2f0 = (((FEventLoadNodePtr *)FVar18.Data)->WaitingPackage).Package;
          local_2e4 = 0xffffffff;
          if (EVar2 == ImportOrExport_Serialize) {
            local_2e4 = 2;
          }
          else {
            local_2e8 = (((FEventLoadNodePtr *)FVar18.Data)->ImportOrExportIndex).Index;
            if (EVar2 == ImportOrExport_Create) {
              local_2e4 = (local_2e8 >> 0x1f) + 2;
            }
            else {
              if ((EVar2 != Export_StartIO) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Phase == EEventLoadNode::Export_StartIO",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                     ,0xb2,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_2e4 = 1;
            }
          }
          local_1f0 = &local_2f0;
          local_1e8 = (FEventLoadNodePtr *)FVar18.Data;
          TSet<TTuple<FEventLoadNodePtr,FEventLoadNodePtr>,TDefaultMapHashableKeyFuncs<FEventLoadNodePtr,FEventLoadNodePtr,1>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FEventLoadNodePtr_const_&,FEventLoadNodePtr_const_&>_>
                    (&local_128,
                     (TPairInitializer<FEventLoadNodePtr_const_&,FEventLoadNodePtr_const_&> *)
                     (local_270 + 4),(bool *)&local_1f0);
        }
        uVar9 = (ulonglong)local_2f8;
        FVar18.Data = FVar18.Data + 0x10;
      }
      iVar15 = local_318.ArrayNum;
      pFVar28 = (FEventLoadNodePtr *)
                (local_318.AllocatorInstance.Data + (longlong)local_318.ArrayNum * 0x10);
      local_88.Elements._0_8_ = 0;
      local_88.Elements._8_8_ = 0;
      local_88.Elements._32_8_ = 0;
      local_88.Elements._40_4_ = 0;
      local_88.Elements._44_4_ = 0x80;
      local_88.Elements._48_4_ = 0xffffffff;
      local_88.Elements._52_4_ = 0;
      local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_88.HashSize = 0;
      local_d8.Elements._0_8_ = 0;
      local_d8.Elements._8_8_ = 0;
      local_d8.Elements._32_8_ = 0;
      local_d8.Elements._40_4_ = 0;
      local_d8.Elements._44_4_ = 0x80;
      local_d8.Elements._48_4_ = 0xffffffff;
      local_d8.Elements._52_4_ = 0;
      local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_d8.HashSize = 0;
      FVar18.Data = local_318.AllocatorInstance.Data;
      while( true ) {
        if (local_318.ArrayNum != iVar15) {
          local_324 = 0;
          `TCheckedPointerIterator<FEventLoadNodePtr,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_324);
        }
        uVar14 = local_320;
        if ((FEventLoadNodePtr *)FVar18.Data == pFVar28) break;
        bVar8 = CheckForCyclesInner(this,(TMultiMap<FEventLoadNodePtr,FEventLoadNodePtr,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNodePtr,FEventLoadNodePtr,1>_>
                                          *)&local_128,&local_88,&local_d8,
                                    (FEventLoadNodePtr *)FVar18.Data);
        if (bVar8) {
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        }
        FVar18.Data = FVar18.Data + 0x10;
      }
      iVar15 = local_318.ArrayNum;
      if (local_318.ArrayNum != local_320) {
        pFVar28 = (FEventLoadNodePtr *)
                  (local_318.AllocatorInstance.Data + (longlong)local_318.ArrayNum * 0x10);
        FVar18.Data = local_318.AllocatorInstance.Data;
        while( true ) {
          if (local_318.ArrayNum != iVar15) {
            local_323 = 0;
            `TCheckedPointerIterator<FEventLoadNodePtr,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_323);
          }
          if ((FEventLoadNodePtr *)FVar18.Data == pFVar28) break;
          if (1 < (byte)LogStreaming._0_1_) {
            FEventLoadNodePtr::HumanReadableStringForDebugging
                      ((FEventLoadNodePtr *)FVar18.Data,&local_1b0);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
            }
          }
          FVar18.Data = FVar18.Data + 0x10;
        }
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      }
      local_d8.HashSize = 0;
      if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_d8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FEventLoadNodePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FEventLoadNodePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_d8.Elements);
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FEventLoadNodePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FEventLoadNodePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      if ((FEventLoadNodePtr *)local_318.AllocatorInstance.Data != (FEventLoadNodePtr *)0x0) {
        FMemory::Free(local_318.AllocatorInstance.Data);
      }
      local_128.HashSize = 0;
      if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_128.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FEventLoadNodePtr,FEventLoadNodePtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FEventLoadNodePtr,FEventLoadNodePtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_128.Elements);
      piVar19 = local_290;
      piVar24 = local_288;
    }
    if (*piVar19 == *piVar24) {
      return;
    }
    if (uVar14 != 0) {
      return;
    }
    if (param_1 != false) break;
    if (1 < (byte)LogStreaming._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    param_1 = true;
  } while( true );
  local_2b0 = &(this->PackagesWithNodes).Elements.field_0x10;
  local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d0.Data.ArrayNum = 0;
  local_2d0.Data.ArrayMax = 0;
  iVar15 = *(int *)&(this->PackagesWithNodes).Elements.field_0x28;
  iStack_2b8 = 0;
  uStack_2b4 = 1;
  local_2a0 = 0;
  iStack_2a4 = 0;
  if (iVar15 != 0) {
    puVar27 = *(uint **)&(this->PackagesWithNodes).Elements.field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)local_2b0;
    }
    uVar14 = *puVar27;
    iStack_2b8 = 0;
    local_2a0 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_2b8;
      local_2a0 = local_2a0 + 0x20;
      iStack_2b8 = iStack_2b8 + 1;
      iStack_2a4 = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2b8) goto LAB_141edfd4e;
      uVar14 = puVar27[lVar11 + 1];
    }
    uStack_2b4 = -uVar14 & uVar14;
    uVar9 = (ulonglong)uStack_2b4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_268 = (int)lVar11;
    iStack_2a4 = local_2a0 + -1 + local_268;
    if (iVar15 < iStack_2a4) {
      iStack_2a4 = iVar15;
    }
  }
LAB_141edfd4e:
  uVar14 = *(uint *)&(this->PackagesWithNodes).Elements.field_0x28;
  uStack_29c = local_134;
  iStack_298 = *(int *)&(this->PackagesWithNodes).Elements.field_0x8 -
               *(int *)&(this->PackagesWithNodes).Elements.field_0x34;
  uVar20 = uVar14 & 0xffffffe0;
  uStack_2a8 = 0xffffffff;
  puVar29 = &(this->PackagesWithNodes).Elements.field_0x10;
  TStack_228.CurrentBitIndex = iStack_2a4;
  TStack_228.UnvisitedBitMask = 0xffffffff;
  local_320 = -1 << ((byte)uVar14 & 0x1f);
  TStack_228._padding_ = CONCAT44(uStack_2b4,iStack_2b8);
  iVar15 = (int)uVar14 >> 5;
  TStack_228._28_4_ = local_134;
  TStack_228.BaseBitIndex = local_2a0;
  uStack_208 = CONCAT44(uStack_294,iStack_298);
  local_2c0 = this;
  local_230 = this;
  TStack_228.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2b0;
  if (((int)uVar14 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar1 = *(uint *)&(this->PackagesWithNodes).Elements.field_0x28;
  iVar22 = 0;
  if (uVar14 != uVar1) {
    puVar4 = *(undefined1 **)&(this->PackagesWithNodes).Elements.field_0x20;
    puVar25 = puVar29;
    if (puVar4 != (undefined1 *)0x0) {
      puVar25 = puVar4;
    }
    uVar14 = local_320 & *(uint *)(puVar25 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar15;
      uVar20 = uVar20 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar1;
      iVar22 = 0;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_141edfe60;
      uVar14 = *(uint *)(puVar25 + lVar11 * 4 + 4);
    }
    uVar9 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_264 = (int)lVar11;
    uVar14 = (uVar20 - 1) + local_264;
    iVar22 = 0;
    if ((int)uVar1 < (int)uVar14) {
      uVar14 = uVar1;
    }
  }
LAB_141edfe60:
  while( true ) {
    pFVar7 = local_230;
    if (*(int *)&(local_230->PackagesWithNodes).Elements.field_0x8 -
        *(int *)&(local_230->PackagesWithNodes).Elements.field_0x34 != (int)uStack_208) {
      local_322 = 0;
      `TSparseArray<TSparseSetElement<FUnsafeWeakAsyncPackagePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_322);
    }
    if (((TStack_228.CurrentBitIndex == uVar14) &&
        (TStack_228.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar29)) &&
       (pFVar7 == local_280)) break;
    plVar16 = (longlong *)
              (*(longlong *)&(pFVar7->PackagesWithNodes).Elements +
              (longlong)TStack_228.CurrentBitIndex * 0x10);
    if ((*plVar16 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Package",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                           ,0x37,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (FAsyncPackage *)*plVar16;
    if (pFVar5 == (FAsyncPackage *)0x0) {
      if (1 < (byte)LogStreaming._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      }
    }
    else {
      if (1 < (byte)LogStreaming._0_1_) {
        ::FName::ToString(&(pFVar5->Desc).Name,&local_1a0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
      }
      if (iVar22 < 5) {
        pFVar10 = ::FName::ToString(&(pFVar5->Desc).Name,&local_190);
        iVar3 = (pFVar10->Data).ArrayNum;
        iVar15 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar15 = 0;
        }
        ::FString::AppendChars(&local_2d0,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar15);
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
        ::FString::AppendChars(&local_2d0,L",",1);
        iVar22 = iVar22 + 1;
      }
      local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2e0.ArrayNum = 0;
      local_2e0.ArrayMax = 0;
      FEventLoadNodeArray::GetAddedNodes(&pFVar5->EventNodeArray,&local_2e0,pFVar5);
      iVar15 = local_2e0.ArrayNum;
      pFVar28 = (FEventLoadNodePtr *)
                (local_2e0.AllocatorInstance.Data + (longlong)local_2e0.ArrayNum * 0x10);
      FVar18.Data = local_2e0.AllocatorInstance.Data;
      while( true ) {
        if (local_2e0.ArrayNum != iVar15) {
          local_321 = 0;
          `TCheckedPointerIterator<FEventLoadNodePtr,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_321);
        }
        if ((FEventLoadNodePtr *)FVar18.Data == pFVar28) break;
        if (1 < (byte)LogStreaming._0_1_) {
          FEventLoadNodePtr::HumanReadableStringForDebugging
                    ((FEventLoadNodePtr *)FVar18.Data,local_180);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
          if (local_180[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180[0].Data.AllocatorInstance.Data);
          }
        }
        FVar18.Data = FVar18.Data + 0x10;
      }
      if ((FEventLoadNodePtr *)local_2e0.AllocatorInstance.Data != (FEventLoadNodePtr *)0x0) {
        FMemory::Free(local_2e0.AllocatorInstance.Data);
      }
    }
    TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
  }
  return;
}

// CheckForCyclesInner @ 141ee00d0

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FEventLoadGraph::CheckForCyclesInner
          (FEventLoadGraph *this,
          TMultiMap<FEventLoadNodePtr,FEventLoadNodePtr,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNodePtr,FEventLoadNodePtr,1>_>
          *param_1,TSet<FEventLoadNodePtr,DefaultKeyFuncs<FEventLoadNodePtr,0>,FDefaultSetAllocator>
                   *param_2,
          TSet<FEventLoadNodePtr,DefaultKeyFuncs<FEventLoadNodePtr,0>,FDefaultSetAllocator> *param_3
          ,FEventLoadNodePtr *param_4)

{
  FAsyncPackage *pFVar1;
  FEventLoadNodePtr *this_00;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_58 [8];
  TBaseKeyIterator<1> local_50;
  TBaseKeyIterator<1> local_38;
  
  this_00 = param_4;
  bVar2 = false;
  pFVar1 = (param_4->WaitingPackage).Package;
  uVar4 = ((uint)((ulonglong)pFVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar3 = TSet<FEventLoadNodePtr,DefaultKeyFuncs<FEventLoadNodePtr,0>,FDefaultSetAllocator>::
          FindIndexByHash<FEventLoadNodePtr>
                    (param_3,(param_4->Phase << 0xe ^ (param_4->ImportOrExportIndex).Index) << 0xd ^
                             uVar4 >> 0x10 ^ uVar4,param_4);
  if (iVar3 == -1) {
    param_4._0_1_ = '\0';
    TSet<FEventLoadNodePtr,DefaultKeyFuncs<FEventLoadNodePtr,0>,FDefaultSetAllocator>::
    Emplace<FEventLoadNodePtr_const_&>(param_2,(FEventLoadNodePtr *)local_58,(bool *)this_00);
    if ((char)param_4 == '\0') {
      TSet<FEventLoadNodePtr,DefaultKeyFuncs<FEventLoadNodePtr,0>,FDefaultSetAllocator>::
      Emplace<FEventLoadNodePtr_const_&>(param_3,(FEventLoadNodePtr *)&param_4,(bool *)this_00);
      TSet<TTuple<FEventLoadNodePtr,FEventLoadNodePtr>,TDefaultMapHashableKeyFuncs<FEventLoadNodePtr,FEventLoadNodePtr,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                (&local_38,
                 (TSet<TTuple<FEventLoadNodePtr,FEventLoadNodePtr>,TDefaultMapHashableKeyFuncs<FEventLoadNodePtr,FEventLoadNodePtr,1>,FDefaultSetAllocator>
                  *)param_1,(TRetainedRef<FEventLoadNodePtr_const_>)this_00);
      local_50.Set = local_38.Set;
      local_50.Key = local_38.Key;
      local_50.Index = local_38.Index;
      local_50.NextIndex = local_38.NextIndex;
      do {
        if (local_50.Index == -1) break;
        bVar2 = CheckForCyclesInner(this,param_1,param_2,param_3,
                                    (FEventLoadNodePtr *)
                                    (*(longlong *)&(local_50.Set)->Elements +
                                    ((longlong)local_50.Index * 5 + 2) * 8));
        TSet<TTuple<FEventLoadNodePtr,FEventLoadNodePtr>,TDefaultMapHashableKeyFuncs<FEventLoadNodePtr,FEventLoadNodePtr,1>,FDefaultSetAllocator>
        ::TBaseKeyIterator<1>::operator++(&local_50);
      } while (!bVar2);
      if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
        pFVar1 = (this_00->WaitingPackage).Package;
        uVar4 = ((uint)((ulonglong)pFVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar1 >> 4)) *
                -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        TSet<FEventLoadNodePtr,DefaultKeyFuncs<FEventLoadNodePtr,0>,FDefaultSetAllocator>::
        RemoveImpl<FEventLoadNodePtr>
                  (param_3,(this_00->Phase << 0xe ^ (this_00->ImportOrExportIndex).Index) << 0xd ^
                           uVar4 >> 0x10 ^ uVar4,this_00);
      }
    }
  }
  else {
    bVar2 = true;
  }
  if ((1 < (byte)LogStreaming._0_1_) && (bVar2 != false)) {
    FEventLoadNodePtr::HumanReadableStringForDebugging(this_00,(FString *)&local_50);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_50.Set !=
        (TSet<TTuple<FEventLoadNodePtr,FEventLoadNodePtr>,TDefaultMapHashableKeyFuncs<FEventLoadNodePtr,FEventLoadNodePtr,1>,FDefaultSetAllocator>
         *)0x0) {
      FMemory::Free(local_50.Set);
    }
  }
  return bVar2;
}

// DoneAddingPrerequistesFireIfNone @ 141eea220

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall
FEventLoadGraph::DoneAddingPrerequistesFireIfNone
          (FEventLoadGraph *this,FEventLoadNodePtr *param_1,bool param_2)

{
  FAsyncPackage *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  char *pcVar6;
  int iVar7;
  FEventLoadNode *pFVar8;
  int iVar9;
  int iStack_c;
  
  if ((param_1->WaitingPackage).Package == (FAsyncPackage *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                       ,0x37,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (param_1->WaitingPackage).Package;
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
        (*pcVar3)();
        return;
      }
    }
    pFVar8 = (pFVar1->EventNodeArray).PackageNodes + (int)uVar2._4_4_;
    goto LAB_141eea46b;
  }
  if ((pFVar1->EventNodeArray).TotalNumberOfImportExportNodes == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TotalNumberOfImportExportNodes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                       ,0x10d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
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
        (*pcVar3)();
        return;
      }
    }
    if ((uVar2 >> 0x1f & 1) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsImport()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x55,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar9 = (pFVar1->EventNodeArray).OffsetToImports;
    iVar7 = iVar9 + ~(undefined4)uVar2 * 2 + uVar4;
    if ((iVar7 < iVar9) || ((pFVar1->EventNodeArray).OffsetToExports <= iVar7)) {
      iVar9 = 0x112;
      pcVar6 = "Index >= OffsetToImports && Index < OffsetToExports";
LAB_141eea40d:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                         ,iVar9,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
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
        (*pcVar3)();
        return;
      }
    }
    if ((int)(undefined4)uVar2 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsExport()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x5b,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar9 = (pFVar1->EventNodeArray).OffsetToExports;
    iVar7 = iVar9 + (undefined4)uVar2 * 3 + uVar4 + -3;
    if (iVar7 < iVar9) {
      iVar9 = 0x118;
      pcVar6 = "Index >= OffsetToExports";
      goto LAB_141eea40d;
    }
  }
  if ((((pFVar1->EventNodeArray).Array == (FEventLoadNode *)0x0) ||
      ((pFVar1->EventNodeArray).TotalNumberOfImportExportNodes <= iVar7)) || (iVar7 < 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Array && Index < TotalNumberOfImportExportNodes && Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                       ,0x11a,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = (pFVar1->EventNodeArray).Array + iVar7;
LAB_141eea46b:
  if (pFVar8->bAddedToGraph == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bCheckAdded || NodeRef.bAddedToGraph",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                       ,0xfc,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pFVar8->bFired != false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!DependentNode->bFired",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x539,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2) {
    if (pFVar8->NumPrerequistes < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DependentNode->NumPrerequistes > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x53c,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar8->NumPrerequistes = pFVar8->NumPrerequistes + -1;
  }
  if (pFVar8->NumPrerequistes == 0) {
    pFVar8->bFired = true;
    if ((param_1->WaitingPackage).Package == (FAsyncPackage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                         ,0x37,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FAsyncPackage::FireNode((param_1->WaitingPackage).Package,param_1);
  }
  return;
}

// NodeWillBeFiredExternally @ 141effdc0

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall
FEventLoadGraph::NodeWillBeFiredExternally(FEventLoadGraph *this,FEventLoadNodePtr *param_1)

{
  FAsyncPackage *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  char *pcVar6;
  int iVar7;
  FEventLoadNode *pFVar8;
  int iVar9;
  int iStack_c;
  
  if ((param_1->WaitingPackage).Package == (FAsyncPackage *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                       ,0x37,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (param_1->WaitingPackage).Package;
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
        (*pcVar3)();
        return;
      }
    }
    pFVar8 = (pFVar1->EventNodeArray).PackageNodes + (int)uVar2._4_4_;
    goto LAB_141effffd;
  }
  if ((pFVar1->EventNodeArray).TotalNumberOfImportExportNodes == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TotalNumberOfImportExportNodes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                       ,0x10d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
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
        (*pcVar3)();
        return;
      }
    }
    if ((uVar2 >> 0x1f & 1) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsImport()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x55,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar9 = (pFVar1->EventNodeArray).OffsetToImports;
    iVar7 = iVar9 + ~(undefined4)uVar2 * 2 + uVar4;
    if ((iVar7 < iVar9) || ((pFVar1->EventNodeArray).OffsetToExports <= iVar7)) {
      iVar9 = 0x112;
      pcVar6 = "Index >= OffsetToImports && Index < OffsetToExports";
LAB_141efff9f:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar6,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                         ,iVar9,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
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
        (*pcVar3)();
        return;
      }
    }
    if ((int)(undefined4)uVar2 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsExport()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x5b,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar9 = (pFVar1->EventNodeArray).OffsetToExports;
    iVar7 = iVar9 + (undefined4)uVar2 * 3 + uVar4 + -3;
    if (iVar7 < iVar9) {
      iVar9 = 0x118;
      pcVar6 = "Index >= OffsetToExports";
      goto LAB_141efff9f;
    }
  }
  if ((((pFVar1->EventNodeArray).Array == (FEventLoadNode *)0x0) ||
      ((pFVar1->EventNodeArray).TotalNumberOfImportExportNodes <= iVar7)) || (iVar7 < 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Array && Index < TotalNumberOfImportExportNodes && Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                       ,0x11a,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = (pFVar1->EventNodeArray).Array + iVar7;
LAB_141effffd:
  if (pFVar8->bAddedToGraph == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bCheckAdded || NodeRef.bAddedToGraph",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                       ,0xfc,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pFVar8->bFired != false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!DependentNode->bFired",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x531,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8->bFired = true;
  return;
}

// RemoveNode @ 141f0d320

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall FEventLoadGraph::RemoveNode(FEventLoadGraph *this,FEventLoadNodePtr *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  FAsyncPackage *this_00;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  FUnsafeWeakAsyncPackagePtr FVar7;
  FPackageIndex FVar8;
  EEventLoadNode EVar9;
  bool bVar10;
  DWORD DVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  FEventLoadNode *pFVar19;
  FEventLoadNodePtr *pFVar20;
  FEventLoadNodeArray *this_01;
  FScriptContainerElement *pFVar21;
  undefined1 local_res8 [16];
  uint local_a8 [4];
  FEventLoadNodePtr local_98;
  FUnsafeWeakAsyncPackagePtr local_88;
  FPackageIndex FStack_80;
  EEventLoadNode EStack_7c;
  FScriptContainerElement *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  FEventLoadNodePtr local_58 [2];
  
  local_88.Package = (param_1->WaitingPackage).Package;
  uVar4 = param_1->ImportOrExportIndex;
  uVar5 = param_1->Phase;
  FStack_80.Index = uVar4;
  EStack_7c = uVar5;
  if ((FAsyncLoadingThread::Instance == (FAsyncLoadingThread *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Instance",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoadingThread.h"
                          ,0x178,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((((FAsyncLoadingThread::bThreadStarted == false) ||
       (DVar11 = GetCurrentThreadId(), DVar11 != FAsyncLoadingThread::AsyncLoadingThreadID)) &&
      ((bVar10 = IsInGameThread(), !bVar10 ||
       (FAsyncLoadingThread::AsyncLoadingTickCounter.Counter == 0)))) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("FAsyncLoadingThread::Get().IsInAsyncLoadThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0x4d3,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->IndicesToFire).ArrayNum != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IndicesToFire.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0x4d4,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_78 = (FScriptContainerElement *)0x0;
  uStack_70 = 0;
  if ((local_88.Package == (FAsyncPackage *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Package",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                          ,0x37,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EVar9 = EStack_7c;
  FVar8.Index = FStack_80.Index;
  FVar7.Package = local_88.Package;
  this_01 = &(local_88.Package)->EventNodeArray;
  if (FStack_80.Index == 0) {
    if ((Export_StartIO < EStack_7c) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < int32(EEventLoadNode::Package_NumPhases) && Index >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                            ,0x10a,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar19 = this_01->PackageNodes + (int)EVar9;
  }
  else {
    if ((((local_88.Package)->EventNodeArray).TotalNumberOfImportExportNodes == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TotalNumberOfImportExportNodes",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                            ,0x10d,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (FVar8.Index < 0) {
      if ((1 < (int)EVar9) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("int32(Node.Phase) < int32(EEventLoadNode::Import_NumPhases)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                              ,0x110,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((-1 < FVar8.Index) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsImport()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                              ,0x55,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar13 = ((FVar7.Package)->EventNodeArray).OffsetToImports;
      iVar16 = iVar13 + ~FVar8.Index * 2 + EVar9;
      if ((iVar16 < iVar13) || (((FVar7.Package)->EventNodeArray).OffsetToExports <= iVar16)) {
        iVar13 = 0x112;
        pcVar14 = "Index >= OffsetToImports && Index < OffsetToExports";
LAB_141f0d5d5:
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           (pcVar14,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                            ,iVar13,L"");
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    else {
      if ((2 < (int)EVar9) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("int32(Node.Phase) < int32(EEventLoadNode::Export_NumPhases)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                              ,0x116,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((FVar8.Index < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsExport()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                              ,0x5b,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar13 = ((FVar7.Package)->EventNodeArray).OffsetToExports;
      iVar16 = FVar8.Index * 3 + -3 + iVar13 + EVar9;
      if (iVar16 < iVar13) {
        iVar13 = 0x118;
        pcVar14 = "Index >= OffsetToExports";
        goto LAB_141f0d5d5;
      }
    }
    if ((((((FVar7.Package)->EventNodeArray).Array == (FEventLoadNode *)0x0) ||
         (((FVar7.Package)->EventNodeArray).TotalNumberOfImportExportNodes <= iVar16)) ||
        (iVar16 < 0)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Array && Index < TotalNumberOfImportExportNodes && Index >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                            ,0x11a,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar19 = ((FVar7.Package)->EventNodeArray).Array + iVar16;
  }
  if ((pFVar19->bAddedToGraph == false) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bCheckAdded || NodeRef.bAddedToGraph",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                          ,0xfc,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pFVar19->bFired == false) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PrereqisiteNode->bFired",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0x4da,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pFVar19->NumPrerequistes != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PrereqisiteNode->NumPrerequistes == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0x4db,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar17 = (pFVar19->NodesWaitingForMe).AllocatorInstance.Data;
  iVar13 = (pFVar19->NodesWaitingForMe).ArrayNum;
  uVar6._0_4_ = (pFVar19->NodesWaitingForMe).ArrayNum;
  uVar6._4_4_ = (pFVar19->NodesWaitingForMe).ArrayMax;
  local_a8[0] = 0;
  (pFVar19->NodesWaitingForMe).AllocatorInstance.Data = local_78;
  (pFVar19->NodesWaitingForMe).ArrayNum = (int)uStack_70;
  (pFVar19->NodesWaitingForMe).ArrayMax = uStack_70._4_4_;
  local_78 = pFVar17;
  uStack_70 = uVar6;
  if (0 < iVar13) {
    do {
      uVar15 = local_a8[0];
      uVar12 = 0;
      if ((int)local_a8[0] < (int)uStack_70) {
        uVar12 = ~local_a8[0] >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar17 = local_78 + (longlong)(int)uVar15 * 0x10;
      if ((*(longlong *)pFVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Package",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                              ,0x37,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar18 = *(longlong *)pFVar17;
      local_68 = *(longlong *)pFVar17;
      uStack_60 = *(longlong *)(pFVar17 + 8);
      uVar2 = *(ulonglong *)(pFVar17 + 8);
      uVar15 = (uint)uVar2;
      if (uVar15 == 0) {
        uVar15 = (uint)(uVar2 >> 0x20);
        if ((2 < uVar15) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < int32(EEventLoadNode::Package_NumPhases) && Index >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                ,0x10a,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar18 = lVar18 + 0x5a0 + (longlong)(int)uVar15 * 0x18;
      }
      else {
        if ((*(int *)(lVar18 + 0x5f0) == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("TotalNumberOfImportExportNodes",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                ,0x10d,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((int)uVar15 < 0) {
          if ((1 < uStack_60._4_4_) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("int32(Node.Phase) < int32(EEventLoadNode::Import_NumPhases)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                  ,0x110,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((uVar2 >> 0x1f & 1) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsImport()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                  ,0x55,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar13 = *(int *)(lVar18 + 0x600) + ~uVar15 * 2 + uStack_60._4_4_;
          if ((iVar13 < *(int *)(lVar18 + 0x600)) || (*(int *)(lVar18 + 0x604) <= iVar13)) {
            iVar16 = 0x112;
            pcVar14 = "Index >= OffsetToImports && Index < OffsetToExports";
LAB_141f0d8f9:
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               (pcVar14,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                ,iVar16,L"");
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        else {
          if ((2 < uStack_60._4_4_) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("int32(Node.Phase) < int32(EEventLoadNode::Export_NumPhases)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                  ,0x116,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((int)uVar15 < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsExport()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                  ,0x5b,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar13 = *(int *)(lVar18 + 0x604) + uVar15 * 3 + uStack_60._4_4_ + -3;
          if (iVar13 < *(int *)(lVar18 + 0x604)) {
            iVar16 = 0x118;
            pcVar14 = "Index >= OffsetToExports";
            goto LAB_141f0d8f9;
          }
        }
        if ((((*(longlong *)(lVar18 + 0x5e8) == 0) || (*(int *)(lVar18 + 0x5f0) <= iVar13)) ||
            (iVar13 < 0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Array && Index < TotalNumberOfImportExportNodes && Index >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                ,0x11a,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar18 = *(longlong *)(lVar18 + 0x5e8) + (longlong)iVar13 * 0x18;
      }
      if ((*(char *)(lVar18 + 0x15) == '\0') &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bCheckAdded || NodeRef.bAddedToGraph",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                              ,0xfc,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(int *)(lVar18 + 0x10) < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("DependentNode->NumPrerequistes > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0x4e1,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      piVar1 = (int *)(lVar18 + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined1 *)(lVar18 + 0x14) = 1;
        pFVar17 = (this->IndicesToFire).AllocatorInstance.Data;
        if (((pFVar17 <= (FScriptContainerElement *)local_a8) &&
            ((FScriptContainerElement *)local_a8 <
             pFVar17 + (longlong)(this->IndicesToFire).ArrayMax * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar13 = (this->IndicesToFire).ArrayNum;
        piVar1 = &(this->IndicesToFire).ArrayMax;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->IndicesToFire).AllocatorInstance,piVar1);
        }
        (this->IndicesToFire).ArrayNum = iVar13 + 1;
        *(uint *)((this->IndicesToFire).AllocatorInstance.Data + (longlong)iVar13 * 4) = local_a8[0]
        ;
      }
      local_a8[0] = local_a8[0] + 1;
      bVar10 = (int)local_a8[0] < (int)uStack_70;
    } while (bVar10);
  }
  local_58[0].Phase = EStack_7c;
  local_58[0].ImportOrExportIndex.Index = FStack_80.Index;
  local_58[0].WaitingPackage.Package = local_88.Package;
  bVar10 = FEventLoadNodeArray::RemoveNode(this_01,local_58);
  if (bVar10) {
    TSet<FUnsafeWeakAsyncPackagePtr,DefaultKeyFuncs<FUnsafeWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::Remove(&this->PackagesWithNodes,&local_88);
    FEventLoadNodeArray::Shutdown(this_01);
  }
  if (FStack_80.Index == 0) goto LAB_141f0de26;
  if ((FStack_80.Index == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumImplicitArcs == 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0x50f,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((FStack_80.Index == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ImportOrExportIndex.IsNull()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                          ,0xa1,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_98.WaitingPackage.Package = local_88.Package;
  local_98.ImportOrExportIndex.Index = 0;
  if (EStack_7c == ImportOrExport_Serialize) {
    local_98.Phase = Export_StartIO;
  }
  else {
    local_98.ImportOrExportIndex.Index = FStack_80.Index;
    if (EStack_7c == ImportOrExport_Create) {
      local_98.Phase = (-1 < FStack_80.Index) + ImportOrExport_Serialize;
    }
    else {
      if ((EStack_7c != Export_StartIO) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Phase == EEventLoadNode::Export_StartIO",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                              ,0xb2,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_98.Phase = ImportOrExport_Serialize;
    }
  }
  if ((local_98.WaitingPackage.Package == (FAsyncPackage *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Package",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                          ,0x37,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EVar9 = local_98.Phase;
  FVar8.Index = local_98.ImportOrExportIndex.Index;
  FVar7.Package = local_98.WaitingPackage.Package;
  if (local_98.ImportOrExportIndex.Index == 0) {
    if ((Export_StartIO < local_98.Phase) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < int32(EEventLoadNode::Package_NumPhases) && Index >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                            ,0x10a,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar19 = ((FVar7.Package)->EventNodeArray).PackageNodes + (int)EVar9;
  }
  else {
    if ((((local_98.WaitingPackage.Package)->EventNodeArray).TotalNumberOfImportExportNodes == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TotalNumberOfImportExportNodes",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                            ,0x10d,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (FVar8.Index < 0) {
      if ((1 < (int)EVar9) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("int32(Node.Phase) < int32(EEventLoadNode::Import_NumPhases)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                              ,0x110,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((-1 < FVar8.Index) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsImport()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                              ,0x55,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar13 = ((FVar7.Package)->EventNodeArray).OffsetToImports;
      iVar16 = iVar13 + ~FVar8.Index * 2 + EVar9;
      if ((iVar16 < iVar13) || (((FVar7.Package)->EventNodeArray).OffsetToExports <= iVar16)) {
        iVar13 = 0x112;
        pcVar14 = "Index >= OffsetToImports && Index < OffsetToExports";
LAB_141f0dd2e:
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           (pcVar14,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                            ,iVar13,L"");
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    else {
      if ((2 < (int)EVar9) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("int32(Node.Phase) < int32(EEventLoadNode::Export_NumPhases)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                              ,0x116,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((FVar8.Index < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsExport()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                              ,0x5b,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar13 = ((FVar7.Package)->EventNodeArray).OffsetToExports;
      iVar16 = FVar8.Index * 3 + -3 + iVar13 + EVar9;
      if (iVar16 < iVar13) {
        iVar13 = 0x118;
        pcVar14 = "Index >= OffsetToExports";
        goto LAB_141f0dd2e;
      }
    }
    if ((((((FVar7.Package)->EventNodeArray).Array == (FEventLoadNode *)0x0) ||
         (((FVar7.Package)->EventNodeArray).TotalNumberOfImportExportNodes <= iVar16)) ||
        (iVar16 < 0)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Array && Index < TotalNumberOfImportExportNodes && Index >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                            ,0x11a,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar19 = ((FVar7.Package)->EventNodeArray).Array + iVar16;
  }
  if ((pFVar19->bAddedToGraph == false) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bCheckAdded || NodeRef.bAddedToGraph",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                          ,0xfc,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pFVar19->NumPrerequistes < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("DependentNode->NumPrerequistes > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0x512,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar1 = &pFVar19->NumPrerequistes;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    pFVar19->bFired = true;
    if ((local_98.WaitingPackage.Package == (FAsyncPackage *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Package",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                            ,0x37,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FAsyncPackage::FireNode(local_98.WaitingPackage.Package,&local_98);
  }
LAB_141f0de26:
  pFVar21 = (this->IndicesToFire).AllocatorInstance.Data;
  iVar13 = (this->IndicesToFire).ArrayNum;
  pFVar17 = pFVar21 + (longlong)iVar13 * 4;
  while( true ) {
    if ((this->IndicesToFire).ArrayNum != iVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar21 == pFVar17) {
      (this->IndicesToFire).ArrayNum = 0;
      if ((this->IndicesToFire).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->IndicesToFire).AllocatorInstance,0,&(this->IndicesToFire).ArrayMax)
        ;
      }
      if (local_78 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78);
      }
      return;
    }
    uVar15 = *(uint *)pFVar21;
    uVar12 = 0;
    if ((int)uVar15 < (int)uStack_70) {
      uVar12 = ~uVar15 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) break;
    pFVar20 = (FEventLoadNodePtr *)(local_78 + (longlong)(int)uVar15 * 0x10);
    if (((pFVar20->WaitingPackage).Package == (FAsyncPackage *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Package",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                            ,0x37,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = (pFVar20->WaitingPackage).Package;
    if ((this_00->SerialNumber == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentTarget.SerialNumber",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                            ,0x523,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FAsyncPackage::FireNode(this_00,pFVar20);
    pFVar21 = pFVar21 + 4;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

