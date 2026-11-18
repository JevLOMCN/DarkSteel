// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 39

// FTreeNode @ 141919300

FTreeNode * __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::FTreeNode
          (FTreeNode *this,FTreeNode *param_1)

{
  (this->RelPaths).Ptr = (FString *)0x0;
  (this->ChildNodes).Ptr = (FTreeNode *)0x0;
  this->NumChildNodesAndFlags = 0;
  this->CapacityChildNodes = 0;
  operator=(this,param_1);
  return this;
}

// FTreeNode @ 141919330

FTreeNode * __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::FTreeNode(FTreeNode *this)

{
  (this->RelPaths).Ptr = (FString *)0x0;
  (this->ChildNodes).Ptr = (FTreeNode *)0x0;
  this->NumChildNodesAndFlags = 0;
  this->CapacityChildNodes = 0;
  return this;
}

// ~FTreeNode @ 14191caa0

void __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::~FTreeNode(FTreeNode *this)

{
  int *piVar1;
  FTreeNode *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FTreeNode *this_00;
  FString *pFVar5;
  
  pFVar2 = (this->ChildNodes).Ptr;
  if (pFVar2 != (FTreeNode *)0x0) {
    lVar4 = *(longlong *)&pFVar2[-1].NumChildNodesAndFlags;
    this_00 = pFVar2 + lVar4;
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      this_00 = this_00 + -1;
      ~FTreeNode(this_00);
    }
    operator_delete__(&pFVar2[-1].NumChildNodesAndFlags,
                      *(longlong *)&pFVar2[-1].NumChildNodesAndFlags * 0x28 + 8);
  }
  pFVar5 = (this->RelPaths).Ptr;
  if (pFVar5 != (FString *)0x0) {
    lVar4 = *(longlong *)&pFVar5[-1].Data.ArrayNum;
    piVar1 = &pFVar5[-1].Data.ArrayNum;
    pFVar5 = pFVar5 + lVar4;
    while (lVar4 != 0) {
      pFVar3 = pFVar5[-1].Data.AllocatorInstance.Data;
      pFVar5 = pFVar5 + -1;
      lVar4 = lVar4 + -1;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
    operator_delete__(piVar1,*(longlong *)piVar1 * 0x10 + 8);
  }
  return;
}

// operator= @ 14191dd70

FTreeNode * __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::operator=
          (FTreeNode *this,FTreeNode *param_1)

{
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *pTVar1;
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *pTVar2;
  int *piVar3;
  TUniquePtr<TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode_[0]>_>
  *pTVar4;
  TUniquePtr<TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode_[0]>_>
  *pTVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FTreeNode *pFVar8;
  void *pvVar9;
  longlong lVar10;
  FString *pFVar11;
  FTreeNode *this_00;
  
  uVar6 = this->NumChildNodesAndFlags;
  if ((int)param_1->NumChildNodesAndFlags < 0) {
    if ((int)uVar6 < 0) {
      this->NumChildNodesAndFlags = uVar6 & 0x7fffffff;
      pvVar9 = *(void **)(this->Value).Pad;
      if (pvVar9 != (void *)0x0) {
        FMemory::Free(pvVar9);
      }
    }
    this->NumChildNodesAndFlags = this->NumChildNodesAndFlags | 0x80000000;
    (this->Value).Pad[0] = '\0';
    (this->Value).Pad[1] = '\0';
    (this->Value).Pad[2] = '\0';
    (this->Value).Pad[3] = '\0';
    (this->Value).Pad[4] = '\0';
    (this->Value).Pad[5] = '\0';
    (this->Value).Pad[6] = '\0';
    (this->Value).Pad[7] = '\0';
    *(undefined8 *)(this->Value).Pad = *(undefined8 *)(param_1->Value).Pad;
    (param_1->Value).Pad[0] = '\0';
    (param_1->Value).Pad[1] = '\0';
    (param_1->Value).Pad[2] = '\0';
    (param_1->Value).Pad[3] = '\0';
    (param_1->Value).Pad[4] = '\0';
    (param_1->Value).Pad[5] = '\0';
    (param_1->Value).Pad[6] = '\0';
    (param_1->Value).Pad[7] = '\0';
    *(undefined4 *)((this->Value).Pad + 8) = *(undefined4 *)((param_1->Value).Pad + 8);
    *(undefined4 *)((this->Value).Pad + 0xc) = *(undefined4 *)((param_1->Value).Pad + 0xc);
    uVar6 = param_1->NumChildNodesAndFlags;
    (param_1->Value).Pad[8] = '\0';
    (param_1->Value).Pad[9] = '\0';
    (param_1->Value).Pad[10] = '\0';
    (param_1->Value).Pad[0xb] = '\0';
    (param_1->Value).Pad[0xc] = '\0';
    (param_1->Value).Pad[0xd] = '\0';
    (param_1->Value).Pad[0xe] = '\0';
    (param_1->Value).Pad[0xf] = '\0';
    if (-1 < (int)uVar6) goto LAB_14191de03;
    param_1->NumChildNodesAndFlags = uVar6 & 0x7fffffff;
    pvVar9 = *(void **)(param_1->Value).Pad;
  }
  else {
    if (-1 < (int)uVar6) goto LAB_14191de03;
    this->NumChildNodesAndFlags = uVar6 & 0x7fffffff;
    pvVar9 = *(void **)(this->Value).Pad;
  }
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
LAB_14191de03:
  pTVar1 = &param_1->RelPaths;
  pTVar2 = &this->RelPaths;
  if (pTVar2 != pTVar1) {
    pFVar11 = pTVar2->Ptr;
    pTVar2->Ptr = pTVar1->Ptr;
    pTVar1->Ptr = (FString *)0x0;
    if (pFVar11 != (FString *)0x0) {
      lVar10 = *(longlong *)&pFVar11[-1].Data.ArrayNum;
      piVar3 = &pFVar11[-1].Data.ArrayNum;
      pFVar11 = pFVar11 + lVar10;
      while (lVar10 != 0) {
        pFVar7 = pFVar11[-1].Data.AllocatorInstance.Data;
        pFVar11 = pFVar11 + -1;
        lVar10 = lVar10 + -1;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
      }
      operator_delete__(piVar3,*(longlong *)piVar3 * 0x10 + 8);
    }
  }
  pTVar4 = &param_1->ChildNodes;
  pTVar5 = &this->ChildNodes;
  if (pTVar5 != pTVar4) {
    pFVar8 = pTVar5->Ptr;
    pTVar5->Ptr = pTVar4->Ptr;
    pTVar4->Ptr = (FTreeNode *)0x0;
    if (pFVar8 != (FTreeNode *)0x0) {
      lVar10 = *(longlong *)&pFVar8[-1].NumChildNodesAndFlags;
      this_00 = pFVar8 + lVar10;
      for (; lVar10 != 0; lVar10 = lVar10 + -1) {
        this_00 = this_00 + -1;
        ~FTreeNode(this_00);
      }
      operator_delete__(&pFVar8[-1].NumChildNodesAndFlags,
                        *(longlong *)&pFVar8[-1].NumChildNodesAndFlags * 0x28 + 8);
    }
  }
  this->NumChildNodesAndFlags =
       this->NumChildNodesAndFlags ^
       (this->NumChildNodesAndFlags ^ param_1->NumChildNodesAndFlags) & 0x7fffffff;
  this->CapacityChildNodes = param_1->CapacityChildNodes;
  param_1->NumChildNodesAndFlags = param_1->NumChildNodesAndFlags & 0x80000000;
  param_1->CapacityChildNodes = 0;
  return this;
}

// ConditionalCompactNode @ 14192e210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::ConditionalCompactNode
          (FString *param_1,FTreeNode *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FTreeNode *pFVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  FString *pFVar9;
  FTreeNode *this;
  undefined1 auStack_8d8 [32];
  FScriptContainerElement *local_8b8;
  int iStack_8b0;
  undefined4 uStack_8ac;
  FScriptContainerElement *local_8a8;
  int iStack_8a0;
  undefined4 uStack_89c;
  TStringView<wchar_t> local_898;
  TStringView<wchar_t> local_888;
  FTreeNode local_878;
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_8d8;
  if (-1 < (int)param_2->NumChildNodesAndFlags) {
    uVar7 = param_2->NumChildNodesAndFlags & 0x7fffffff;
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChildNodes > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x637,L"Invalid to call ConditionalCompactNode with an empty ChildNode.");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (1 < uVar7) {
      return;
    }
    local_848.Base = local_828;
    local_848.CurPos = local_828;
    local_848.bIsDynamic = false;
    local_848.bIsExternal = false;
    local_848.End = (wchar_t *)local_28;
    local_8b8 = (param_1->Data).AllocatorInstance.Data;
    iVar2 = (param_1->Data).ArrayNum;
    iStack_8b0 = iVar2 + -1;
    if (iVar2 == 0) {
      iStack_8b0 = 0;
    }
    local_898._12_4_ = uStack_8ac;
    local_898.Size = iStack_8b0;
    local_898.DataPtr = (wchar_t *)local_8b8;
    FPathViews::AppendPath(&local_848,&local_898);
    pFVar9 = (param_2->RelPaths).Ptr;
    local_8a8 = (pFVar9->Data).AllocatorInstance.Data;
    iVar2 = (pFVar9->Data).ArrayNum;
    iStack_8a0 = iVar2 + -1;
    if (iVar2 == 0) {
      iStack_8a0 = 0;
    }
    local_888._12_4_ = uStack_89c;
    local_888.Size = iStack_8a0;
    local_888.DataPtr = (wchar_t *)local_8a8;
    FPathViews::AppendPath(&local_848,&local_888);
    ::FString::AssignRange
              (param_1,local_848.Base,
               (int)((longlong)local_848.CurPos - (longlong)local_848.Base >> 1));
    local_878.NumChildNodesAndFlags = 0;
    local_878.CapacityChildNodes = 0;
    local_878.RelPaths.Ptr = (FString *)0x0;
    local_878.ChildNodes.Ptr = (FTreeNode *)0x0;
    operator=(&local_878,(param_2->ChildNodes).Ptr);
    operator=(param_2,&local_878);
    if (local_878.ChildNodes.Ptr != (FTreeNode *)0x0) {
      lVar8 = *(longlong *)&local_878.ChildNodes.Ptr[-1].NumChildNodesAndFlags;
      pFVar5 = local_878.ChildNodes.Ptr + -1;
      this = local_878.ChildNodes.Ptr + lVar8;
      for (; lVar8 != 0; lVar8 = lVar8 + -1) {
        this = this + -1;
        ~FTreeNode(this);
      }
      operator_delete__(&pFVar5->NumChildNodesAndFlags,
                        *(longlong *)&pFVar5->NumChildNodesAndFlags * 0x28 + 8);
    }
    if (local_878.RelPaths.Ptr != (FString *)0x0) {
      lVar8 = *(longlong *)&local_878.RelPaths.Ptr[-1].Data.ArrayNum;
      piVar1 = &local_878.RelPaths.Ptr[-1].Data.ArrayNum;
      pFVar9 = local_878.RelPaths.Ptr + lVar8;
      while (lVar8 != 0) {
        pFVar3 = pFVar9[-1].Data.AllocatorInstance.Data;
        pFVar9 = pFVar9 + -1;
        lVar8 = lVar8 + -1;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
      }
      operator_delete__(piVar1,*(longlong *)piVar1 * 0x10 + 8);
    }
    if (local_848.bIsDynamic != false) {
      FMemory::Free(local_848.Base);
    }
  }
  return;
}

// ContainsChildPaths @ 14192f140

bool __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::ContainsChildPaths
          (FTreeNode *this,TStringView<wchar_t> *param_1)

{
  int iVar1;
  FTreeNode *pFVar2;
  FString *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  int iVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool local_res10 [8];
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48 [2];
  
  if (param_1->Size == 0) {
    return (this->NumChildNodesAndFlags & 0x7fffffff) != 0;
  }
  local_b8.DataPtr = param_1->DataPtr;
  local_b8.Size = param_1->Size;
  local_b8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar12 = 0;
  local_108.DataPtr = (wchar_t *)0x0;
  local_108.Size = 0;
  local_118.DataPtr = (wchar_t *)0x0;
  local_118.Size = 0;
  FPathViews::SplitFirstComponent(&local_b8,&local_108,&local_118);
  pwVar7 = local_108.DataPtr;
  uVar5._4_4_ = local_108._12_4_;
  uVar5._0_4_ = local_108.Size;
  local_a8.DataPtr = local_108.DataPtr;
  local_a8._8_8_ = uVar5;
  iVar10 = UE::DirectoryTree::FindInsertionIndex
                     (this->NumChildNodesAndFlags & 0x7fffffff,&this->RelPaths,&local_a8,local_res10
                     );
  if (local_res10[0] != false) {
    pFVar2 = (this->ChildNodes).Ptr;
    local_f8.DataPtr = (wchar_t *)0x0;
    local_f8.Size = 0;
    local_128.DataPtr = (wchar_t *)0x0;
    local_128.Size = 0;
    pFVar3 = (this->RelPaths).Ptr;
    local_c8 = pFVar3[iVar10].Data.AllocatorInstance.Data;
    iVar1 = pFVar3[iVar10].Data.ArrayNum;
    iStack_c0 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_c0 = 0;
    }
    local_98._12_4_ = uStack_bc;
    local_98.Size = iStack_c0;
    local_98.DataPtr = (wchar_t *)local_c8;
    FPathViews::SplitFirstComponent(&local_98,&local_f8,&local_128);
    local_88._12_4_ = local_f8._12_4_;
    local_88.Size = local_f8.Size;
    local_88.DataPtr = local_f8.DataPtr;
    local_78.DataPtr = pwVar7;
    local_78._8_8_ = uVar5;
    bVar8 = FPathViews::Equals(&local_78,&local_88);
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPathViews::Equals( FirstComponent, ExistingFirstComponent)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x482,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    if (-1 < param_1->Size) {
      local_48[0].DataPtr._0_4_ = local_118.DataPtr._0_4_;
      local_48[0].DataPtr._4_4_ = local_118.DataPtr._4_4_;
      uVar13 = local_128.DataPtr._0_4_;
      uVar14 = local_128.DataPtr._4_4_;
      do {
        iVar1 = local_128.Size;
        if (local_128.Size == 0) {
          local_48[0].Size = local_118.Size;
          bVar8 = ContainsChildPaths(pFVar2 + iVar10,local_48);
          return bVar8;
        }
        if (local_118.Size == 0) {
          return true;
        }
        local_148.DataPtr = (wchar_t *)0x0;
        local_148.Size = 0;
        local_e8.DataPtr = (wchar_t *)0x0;
        local_e8.Size = 0;
        local_68.DataPtr._0_4_ = local_48[0].DataPtr._0_4_;
        local_68.DataPtr._4_4_ = local_48[0].DataPtr._4_4_;
        local_68.Size = local_118.Size;
        FPathViews::SplitFirstComponent(&local_68,&local_148,&local_e8);
        iVar6 = local_148.Size;
        if ((local_148.Size == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!NextFirstComponent.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x499,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        local_138.DataPtr = (wchar_t *)0x0;
        local_138.Size = 0;
        local_d8.DataPtr = (wchar_t *)0x0;
        local_d8.Size = 0;
        local_58.DataPtr._0_4_ = uVar13;
        local_58.DataPtr._4_4_ = uVar14;
        local_58.Size = iVar1;
        FPathViews::SplitFirstComponent(&local_58,&local_138,&local_d8);
        iVar1 = local_138.Size;
        if ((local_138.Size == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!NextExistingFirstComponent.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x49d,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        if (iVar6 != iVar1) {
          return false;
        }
        if ((iVar6 != 0) && (iVar1 != 0)) {
          iVar11 = iVar1;
          if (iVar6 < iVar1) {
            iVar11 = iVar6;
          }
          iVar11 = FGenericPlatformStricmp::Strnicmp
                             (local_148.DataPtr,local_138.DataPtr,(longlong)iVar11);
          if (iVar11 != 0) {
            return false;
          }
        }
        if (iVar6 != iVar1) {
          return false;
        }
        local_118.Size = local_e8.Size;
        iVar12 = iVar12 + 1;
        local_128.Size = local_d8.Size;
        local_118.DataPtr = local_e8.DataPtr;
        local_118._12_4_ = local_e8._12_4_;
        local_128.DataPtr = local_d8.DataPtr;
        local_128._12_4_ = local_d8._12_4_;
        local_48[0].DataPtr._0_4_ = local_e8.DataPtr._0_4_;
        local_48[0].DataPtr._4_4_ = local_e8.DataPtr._4_4_;
        uVar13 = local_d8.DataPtr._0_4_;
        uVar14 = local_d8.DataPtr._4_4_;
      } while (iVar12 <= param_1->Size);
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                       ,0x4ae,L"Infinite loop trying to split path %.*s into components.");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
  }
  return false;
}

// Find @ 14193ca90

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::Find
          (FTreeNode *this,TStringView<wchar_t> *param_1)

{
  FTreeNode *this_00;
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  bool local_res8 [8];
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  if ((param_1->Size == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InRelPath.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x443,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  local_58.DataPtr = param_1->DataPtr;
  local_58.Size = param_1->Size;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_78.DataPtr = (wchar_t *)0x0;
  local_78.Size = 0;
  local_88.DataPtr = (wchar_t *)0x0;
  local_88.Size = 0;
  FPathViews::SplitFirstComponent(&local_58,&local_78,&local_88);
  local_48._12_4_ = local_78._12_4_;
  local_48.Size = local_78.Size;
  local_48.DataPtr = local_78.DataPtr;
  iVar4 = UE::DirectoryTree::FindInsertionIndex
                    (this->NumChildNodesAndFlags & 0x7fffffff,&this->RelPaths,&local_48,local_res8);
  if (local_res8[0] != false) {
    local_28.DataPtr = param_1->DataPtr;
    local_28.Size = param_1->Size;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    this_00 = (this->ChildNodes).Ptr + iVar4;
    pFVar1 = (this->RelPaths).Ptr;
    local_68 = pFVar1[iVar4].Data.AllocatorInstance.Data;
    iVar4 = pFVar1[iVar4].Data.ArrayNum;
    iStack_60 = iVar4 + -1;
    if (iVar4 == 0) {
      iStack_60 = 0;
    }
    local_38._12_4_ = uStack_5c;
    local_38.Size = iStack_60;
    local_38.DataPtr = (wchar_t *)local_68;
    bVar3 = FPathViews::TryMakeChildPathRelativeTo(&local_28,&local_38,&local_88);
    if (bVar3) {
      if (local_88.Size != 0) {
        local_18._12_4_ = local_88._12_4_;
        local_18.Size = local_88.Size;
        local_18.DataPtr = local_88.DataPtr;
        pTVar5 = Find(this_00,&local_18);
        return pTVar5;
      }
      if ((int)this_00->NumChildNodesAndFlags < 0) {
        return (TArray<FName,TSizedDefaultAllocator<32>_> *)this_00;
      }
      return (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
    }
  }
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
}

// FindOrAdd @ 14193e2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::FindOrAdd
          (FTreeNode *this,TStringView<wchar_t> *param_1,bool *param_2)

{
  int *piVar1;
  FTreeNode *this_00;
  wchar_t *pwVar2;
  void *pvVar3;
  code *pcVar4;
  FTreeNode *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar12;
  FString *pFVar13;
  FString *pFVar14;
  ulonglong uVar15;
  longlong lVar16;
  FTreeNode *this_01;
  int iVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_af8 [32];
  int local_ad8;
  wchar_t *local_ad0;
  bool local_ac8 [8];
  bool *local_ac0;
  TStringView<wchar_t> local_ab8;
  FString local_aa8;
  FString local_a98;
  FString local_a88;
  TStringView<wchar_t> local_a78;
  TStringView<wchar_t> local_a68;
  FString *local_a58;
  TStringView<wchar_t> local_a50;
  FScriptContainerElement *local_a38;
  int iStack_a30;
  undefined4 uStack_a2c;
  TStringView<wchar_t> local_a28;
  TStringView<wchar_t> local_a18;
  TStringView<wchar_t> local_a08;
  TStringView<wchar_t> local_9f8;
  TStringView<wchar_t> local_9e8;
  TStringView<wchar_t> local_9d8;
  FTreeNode *local_9c8;
  TStringView<wchar_t> local_9b8;
  TStringView<wchar_t> local_9a8;
  FString local_998;
  TStringView<wchar_t> local_988;
  TStringView<wchar_t> local_978;
  TStringView<wchar_t> local_968;
  TStringView<wchar_t> local_958;
  FString local_948;
  TStringView<wchar_t> local_938;
  FString local_928;
  TStringView<wchar_t> local_918;
  FTreeNode local_908;
  FTreeNode local_8e0;
  FTreeNode local_8b8;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1024];
  ulonglong local_68 [6];
  
  local_68[0] = __security_cookie.value ^ (ulonglong)auStack_af8;
  local_9b8.DataPtr = param_1->DataPtr;
  local_9b8.Size = param_1->Size;
  local_9b8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar17 = 0;
  local_a18.DataPtr = (wchar_t *)0x0;
  local_a18.Size = 0;
  local_a68.DataPtr = (wchar_t *)0x0;
  local_a68.Size = 0;
  local_ac0 = param_2;
  local_9c8 = this;
  FPathViews::SplitFirstComponent(&local_9b8,&local_a18,&local_a68);
  if ((local_a18.Size == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FirstComponent.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x399,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar12;
  }
  local_9a8._12_4_ = local_a18._12_4_;
  local_9a8.Size = local_a18.Size;
  local_9a8.DataPtr = local_a18.DataPtr;
  iVar10 = UE::DirectoryTree::FindInsertionIndex
                     (this->NumChildNodesAndFlags & 0x7fffffff,&this->RelPaths,&local_9a8,local_ac8)
  ;
  if (local_ac8[0] == false) {
    uVar20 = *(undefined8 *)&param_1->Size;
    pwVar2 = param_1->DataPtr;
    local_908.Value.Pad[8] = '\0';
    local_908.Value.Pad[9] = '\0';
    local_908.Value.Pad[10] = '\0';
    local_908.Value.Pad[0xb] = '\0';
    local_908.Value.Pad[0xc] = '\0';
    local_908.Value.Pad[0xd] = '\0';
    local_908.Value.Pad[0xe] = '\0';
    local_908.Value.Pad[0xf] = '\0';
    local_908.RelPaths.Ptr = (FString *)0x0;
    *param_2 = false;
    local_908.Value.Pad[0] = '\0';
    local_908.Value.Pad[1] = '\0';
    local_908.Value.Pad[2] = '\0';
    local_908.Value.Pad[3] = '\0';
    local_908.Value.Pad[4] = '\0';
    local_908.Value.Pad[5] = '\0';
    local_908.Value.Pad[6] = '\0';
    local_908.Value.Pad[7] = '\0';
    local_908.ChildNodes.Ptr = (FTreeNode *)0x0;
    local_908.NumChildNodesAndFlags = 0;
    local_908.CapacityChildNodes = 0;
    local_aa8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_aa8.Data.ArrayNum = 0;
    local_aa8.Data.ArrayMax = 0;
    pFVar13 = ::FString::ConstructFromPtrSize(&local_998,pwVar2,(int)uVar20);
    if (&local_aa8 != pFVar13) {
      local_aa8.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
      (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_aa8.Data.ArrayNum = (pFVar13->Data).ArrayNum;
      local_aa8.Data.ArrayMax = (pFVar13->Data).ArrayMax;
      (pFVar13->Data).ArrayNum = 0;
      (pFVar13->Data).ArrayMax = 0;
    }
    if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_998.Data.AllocatorInstance.Data);
    }
    this = InsertChildNode(this,iVar10,&local_aa8,&local_908);
    if (local_aa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_aa8.Data.AllocatorInstance.Data);
    }
    ~FTreeNode(&local_908);
    if ((int)this->NumChildNodesAndFlags < 0) {
      this->NumChildNodesAndFlags = this->NumChildNodesAndFlags & 0x7fffffff;
      pvVar3 = *(void **)(this->Value).Pad;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
    }
    this->NumChildNodesAndFlags = this->NumChildNodesAndFlags | 0x80000000;
    (this->Value).Pad[0] = '\0';
    (this->Value).Pad[1] = '\0';
    (this->Value).Pad[2] = '\0';
    (this->Value).Pad[3] = '\0';
    (this->Value).Pad[4] = '\0';
    (this->Value).Pad[5] = '\0';
    (this->Value).Pad[6] = '\0';
    (this->Value).Pad[7] = '\0';
    (this->Value).Pad[8] = '\0';
    (this->Value).Pad[9] = '\0';
    (this->Value).Pad[10] = '\0';
    (this->Value).Pad[0xb] = '\0';
    (this->Value).Pad[0xc] = '\0';
    (this->Value).Pad[0xd] = '\0';
    (this->Value).Pad[0xe] = '\0';
    (this->Value).Pad[0xf] = '\0';
  }
  else {
    local_a08.DataPtr = (wchar_t *)0x0;
    this_00 = (this->ChildNodes).Ptr + iVar10;
    local_a58 = (this->RelPaths).Ptr + iVar10;
    local_a08.Size = 0;
    local_ab8.DataPtr = (wchar_t *)0x0;
    local_ab8.Size = 0;
    local_a38 = (local_a58->Data).AllocatorInstance.Data;
    iVar10 = (local_a58->Data).ArrayNum;
    iStack_a30 = iVar10 + -1;
    if (iVar10 == 0) {
      iStack_a30 = 0;
    }
    local_988._12_4_ = uStack_a2c;
    local_988.Size = iStack_a30;
    local_988.DataPtr = (wchar_t *)local_a38;
    FPathViews::SplitFirstComponent(&local_988,&local_a08,&local_ab8);
    if ((local_a08.Size == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ExistingFirstComponent.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x3ab,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar12;
    }
    local_ad8 = param_1->Size;
    uVar18 = 1;
    if (-1 < local_ad8) {
      uVar21 = local_ab8.DataPtr._0_4_;
      uVar22 = local_ab8.DataPtr._4_4_;
      uVar23 = local_a68.DataPtr._0_4_;
      uVar24 = local_a68.DataPtr._4_4_;
      do {
        iVar7 = local_a68.Size;
        iVar10 = local_ab8.Size;
        if (local_ab8.Size == 0) {
          if (local_a68.Size != 0) {
            local_918.DataPtr._0_4_ = uVar23;
            local_918.DataPtr._4_4_ = uVar24;
            local_918.Size = local_a68.Size;
            pTVar12 = FindOrAdd(this_00,&local_918,local_ac0);
            return pTVar12;
          }
          *local_ac0 = SUB41(this_00->NumChildNodesAndFlags >> 0x1f,0);
          if ((int)this_00->NumChildNodesAndFlags < 0) {
            return (TArray<FName,TSizedDefaultAllocator<32>_> *)this_00;
          }
          this_00->NumChildNodesAndFlags = this_00->NumChildNodesAndFlags | 0x80000000;
          (this_00->Value).Pad[0] = '\0';
          (this_00->Value).Pad[1] = '\0';
          (this_00->Value).Pad[2] = '\0';
          (this_00->Value).Pad[3] = '\0';
          (this_00->Value).Pad[4] = '\0';
          (this_00->Value).Pad[5] = '\0';
          (this_00->Value).Pad[6] = '\0';
          (this_00->Value).Pad[7] = '\0';
          (this_00->Value).Pad[8] = '\0';
          (this_00->Value).Pad[9] = '\0';
          (this_00->Value).Pad[10] = '\0';
          (this_00->Value).Pad[0xb] = '\0';
          (this_00->Value).Pad[0xc] = '\0';
          (this_00->Value).Pad[0xd] = '\0';
          (this_00->Value).Pad[0xe] = '\0';
          (this_00->Value).Pad[0xf] = '\0';
          return (TArray<FName,TSizedDefaultAllocator<32>_> *)this_00;
        }
        if (local_a68.Size == 0) {
          local_8e0.NumChildNodesAndFlags = 0;
          local_8e0.CapacityChildNodes = 0;
          local_8e0.RelPaths.Ptr = (FString *)0x0;
          local_8e0.ChildNodes.Ptr = (FTreeNode *)0x0;
          *local_ac0 = false;
          operator=(&local_8e0,this_00);
          local_a88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a88.Data.ArrayNum = 0;
          local_a88.Data.ArrayMax = 0;
          pFVar13 = ::FString::ConstructFromPtrSize(&local_928,local_ab8.DataPtr,iVar10);
          if (&local_a88 != pFVar13) {
            local_a88.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
            (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a88.Data.ArrayNum = (pFVar13->Data).ArrayNum;
            local_a88.Data.ArrayMax = (pFVar13->Data).ArrayMax;
            (pFVar13->Data).ArrayNum = 0;
            (pFVar13->Data).ArrayMax = 0;
          }
          if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_928.Data.AllocatorInstance.Data);
          }
          if ((int)this_00->NumChildNodesAndFlags < 0) {
            this_00->NumChildNodesAndFlags = this_00->NumChildNodesAndFlags & 0x7fffffff;
            pvVar3 = *(void **)(this_00->Value).Pad;
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
          }
          TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset
                    (&this_00->RelPaths,(void *)0x0);
          TUniquePtr<TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode_[0]>_>
          ::Reset(&this_00->ChildNodes,(void *)0x0);
          uVar20 = *(undefined8 *)&param_1->Size;
          pwVar2 = param_1->DataPtr;
          this_00->CapacityChildNodes = 0;
          this_00->NumChildNodesAndFlags = 0x80000000;
          (this_00->Value).Pad[0] = '\0';
          (this_00->Value).Pad[1] = '\0';
          (this_00->Value).Pad[2] = '\0';
          (this_00->Value).Pad[3] = '\0';
          (this_00->Value).Pad[4] = '\0';
          (this_00->Value).Pad[5] = '\0';
          (this_00->Value).Pad[6] = '\0';
          (this_00->Value).Pad[7] = '\0';
          (this_00->Value).Pad[8] = '\0';
          (this_00->Value).Pad[9] = '\0';
          (this_00->Value).Pad[10] = '\0';
          (this_00->Value).Pad[0xb] = '\0';
          (this_00->Value).Pad[0xc] = '\0';
          (this_00->Value).Pad[0xd] = '\0';
          (this_00->Value).Pad[0xe] = '\0';
          (this_00->Value).Pad[0xf] = '\0';
          ::FString::AssignRange(local_a58,pwVar2,(int)uVar20);
          InsertChildNode(this_00,0,&local_a88,&local_8e0);
          if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a88.Data.AllocatorInstance.Data);
          }
          if (local_8e0.ChildNodes.Ptr != (FTreeNode *)0x0) {
            lVar16 = *(longlong *)&local_8e0.ChildNodes.Ptr[-1].NumChildNodesAndFlags;
            pFVar5 = local_8e0.ChildNodes.Ptr + -1;
            this_01 = local_8e0.ChildNodes.Ptr + lVar16;
            for (; lVar16 != 0; lVar16 = lVar16 + -1) {
              this_01 = this_01 + -1;
              ~FTreeNode(this_01);
            }
            operator_delete__(&pFVar5->NumChildNodesAndFlags,
                              *(longlong *)&pFVar5->NumChildNodesAndFlags * 0x28 + 8);
          }
          if (local_8e0.RelPaths.Ptr == (FString *)0x0) {
            return (TArray<FName,TSizedDefaultAllocator<32>_> *)this_00;
          }
          lVar16 = *(longlong *)&local_8e0.RelPaths.Ptr[-1].Data.ArrayNum;
          piVar1 = &local_8e0.RelPaths.Ptr[-1].Data.ArrayNum;
          pFVar13 = local_8e0.RelPaths.Ptr + lVar16;
          while (lVar16 != 0) {
            pFVar19 = pFVar13[-1].Data.AllocatorInstance.Data;
            pFVar13 = pFVar13 + -1;
            lVar16 = lVar16 + -1;
            if (pFVar19 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar19);
            }
          }
          operator_delete__(piVar1,*(longlong *)piVar1 * 0x10 + 8);
          return (TArray<FName,TSizedDefaultAllocator<32>_> *)this_00;
        }
        local_a78.DataPtr = (wchar_t *)0x0;
        local_a78.Size = 0;
        local_9f8.DataPtr = (wchar_t *)0x0;
        local_9f8.Size = 0;
        local_978.DataPtr._0_4_ = uVar23;
        local_978.DataPtr._4_4_ = uVar24;
        local_978.Size = local_a68.Size;
        FPathViews::SplitFirstComponent(&local_978,&local_a78,&local_9f8);
        iVar6 = local_a78.Size;
        if ((local_a78.Size == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!NextFirstComponent.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x3d8,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar12;
        }
        local_a50.DataPtr = (wchar_t *)0x0;
        local_a50.Size = 0;
        local_9e8.DataPtr = (wchar_t *)0x0;
        local_9e8.Size = 0;
        local_968.DataPtr._0_4_ = uVar21;
        local_968.DataPtr._4_4_ = uVar22;
        local_968.Size = iVar10;
        FPathViews::SplitFirstComponent(&local_968,&local_a50,&local_9e8);
        iVar8 = local_a50.Size;
        if ((local_a50.Size == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!NextExistingFirstComponent.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x3dc,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar12;
        }
        if (iVar6 != iVar8) {
LAB_14193e71e:
          pFVar13 = local_a58;
          local_888.Base = local_868;
          local_888.CurPos = local_868;
          local_888.bIsDynamic = false;
          local_888.bIsExternal = false;
          local_888.End = (wchar_t *)local_68;
          local_a38 = (local_a58->Data).AllocatorInstance.Data;
          iVar17 = (local_a58->Data).ArrayNum;
          iStack_a30 = iVar17 + -1;
          if (iVar17 == 0) {
            iStack_a30 = 0;
          }
          if (0 < (int)uVar18) {
            uVar20._4_4_ = uStack_a2c;
            uVar20._0_4_ = iStack_a30;
            uVar15 = (ulonglong)uVar18;
            pFVar19 = local_a38;
            do {
              local_a28.DataPtr = (wchar_t *)0x0;
              local_a28.Size = 0;
              local_9d8.DataPtr = (wchar_t *)0x0;
              local_9d8.Size = 0;
              local_958.DataPtr = (wchar_t *)pFVar19;
              local_958._8_8_ = uVar20;
              FPathViews::SplitFirstComponent(&local_958,&local_a28,&local_9d8);
              if ((((int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1) != 0) &&
                  (local_888.CurPos[-1] != L'/')) && (local_888.CurPos[-1] != L'\\')) {
                if (local_888.End < local_888.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_888,1);
                }
                *local_888.CurPos = L'/';
                local_888.CurPos = local_888.CurPos + 1;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (&local_888,local_a28.DataPtr,local_a28.Size);
              uVar20._4_4_ = local_9d8._12_4_;
              uVar20._0_4_ = local_9d8.Size;
              uVar15 = uVar15 - 1;
              pFVar19 = (FScriptContainerElement *)local_9d8.DataPtr;
            } while (uVar15 != 0);
          }
          local_8b8.NumChildNodesAndFlags = 0;
          local_8b8.CapacityChildNodes = 0;
          local_8b8.RelPaths.Ptr = (FString *)0x0;
          local_8b8.ChildNodes.Ptr = (FTreeNode *)0x0;
          operator=(&local_8b8,this_00);
          local_a98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a98.Data.ArrayNum = 0;
          local_a98.Data.ArrayMax = 0;
          pFVar14 = ::FString::ConstructFromPtrSize(&local_948,local_ab8.DataPtr,iVar10);
          if (&local_a98 != pFVar14) {
            local_a98.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
            (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a98.Data.ArrayNum = (pFVar14->Data).ArrayNum;
            local_a98.Data.ArrayMax = (pFVar14->Data).ArrayMax;
            (pFVar14->Data).ArrayNum = 0;
            (pFVar14->Data).ArrayMax = 0;
          }
          if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_948.Data.AllocatorInstance.Data);
          }
          if ((int)this_00->NumChildNodesAndFlags < 0) {
            this_00->NumChildNodesAndFlags = this_00->NumChildNodesAndFlags & 0x7fffffff;
            pvVar3 = *(void **)(this_00->Value).Pad;
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
          }
          TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset
                    (&this_00->RelPaths,(void *)0x0);
          TUniquePtr<TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode_[0]>_>
          ::Reset(&this_00->ChildNodes,(void *)0x0);
          this_00->NumChildNodesAndFlags = 0;
          this_00->CapacityChildNodes = 0;
          ::FString::AssignRange
                    (pFVar13,local_888.Base,
                     (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1));
          InsertChildNode(this_00,0,&local_a98,&local_8b8);
          local_938.DataPtr._0_4_ = uVar23;
          local_938.DataPtr._4_4_ = uVar24;
          local_938.Size = iVar7;
          pTVar12 = FindOrAdd(this_00,&local_938,local_ac0);
          if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a98.Data.AllocatorInstance.Data);
          }
          ~FTreeNode(&local_8b8);
          if (local_888.bIsDynamic == false) {
            return pTVar12;
          }
          FMemory::Free(local_888.Base);
          return pTVar12;
        }
        if ((iVar6 != 0) && (iVar8 != 0)) {
          iVar11 = iVar8;
          if (iVar6 < iVar8) {
            iVar11 = iVar6;
          }
          iVar11 = FGenericPlatformStricmp::Strnicmp
                             (local_a78.DataPtr,local_a50.DataPtr,(longlong)iVar11);
          if (iVar11 != 0) goto LAB_14193e71e;
        }
        if (iVar6 != iVar8) goto LAB_14193e71e;
        local_a68.Size = local_9f8.Size;
        uVar18 = uVar18 + 1;
        local_ab8.Size = local_9e8.Size;
        iVar17 = iVar17 + 1;
        local_ad8 = param_1->Size;
        local_a68.DataPtr = local_9f8.DataPtr;
        local_a68._12_4_ = local_9f8._12_4_;
        local_ab8.DataPtr = local_9e8.DataPtr;
        local_ab8._12_4_ = local_9e8._12_4_;
        this = local_9c8;
        uVar21 = local_9e8.DataPtr._0_4_;
        uVar22 = local_9e8.DataPtr._4_4_;
        uVar23 = local_9f8.DataPtr._0_4_;
        uVar24 = local_9f8.DataPtr._4_4_;
      } while (iVar17 <= local_ad8);
    }
    local_ad0 = param_1->DataPtr;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                       ,0x404,L"Infinite loop trying to split path %.*s into components.");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar12;
    }
  }
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)this;
}

// InsertChildNode @ 141950e80

FTreeNode * __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::InsertChildNode
          (FTreeNode *this,int param_1,FString *param_2,FTreeNode *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FTreeNode *pFVar7;
  uint uVar8;
  undefined8 *puVar9;
  FString *pFVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  uVar8 = this->NumChildNodesAndFlags & 0x7fffffff;
  uVar13 = (ulonglong)uVar8;
  if (((param_1 < 0) || ((int)uVar8 < param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= InsertionIndex && InsertionIndex <= NumChildNodes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x5fd,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FTreeNode *)(*pcVar4)();
    return pFVar7;
  }
  uVar11 = uVar8 + 1;
  if (((int)uVar11 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((uint32)(NumChildNodes + 1)) & FlagsMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x5fe,L"Overflow"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FTreeNode *)(*pcVar4)();
    return pFVar7;
  }
  uVar2 = this->CapacityChildNodes;
  if (uVar8 == uVar2) {
    if (uVar2 == 0) {
      iVar6 = 1;
    }
    else if ((int)uVar2 < 8) {
      iVar6 = uVar2 * 2;
    }
    else {
      iVar6 = (int)(uVar2 * 3) / 2;
      if ((iVar6 <= (int)uVar2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewCapacity > CapacityChildNodes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                             ,0x60e,L"Overflow"), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FTreeNode *)(*pcVar4)();
        return pFVar7;
      }
    }
    Realloc(this,iVar6);
    if ((this->CapacityChildNodes <= (int)uVar8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumChildNodes < CapacityChildNodes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x611,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FTreeNode *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (param_1 < (int)uVar8) {
    lVar15 = uVar13 * 0x28;
    lVar14 = uVar13 << 4;
    lVar12 = uVar13 * 0x28;
    uVar13 = (ulonglong)(uVar8 - param_1);
    do {
      puVar9 = (undefined8 *)
               ((longlong)&(((this->RelPaths).Ptr)->Data).AllocatorInstance.Data + lVar14);
      puVar1 = puVar9 + -2;
      if (puVar9 != puVar1) {
        if ((void *)*puVar9 != (void *)0x0) {
          FMemory::Free((void *)*puVar9);
        }
        *puVar9 = *puVar1;
        *puVar1 = 0;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar9 + -1);
        *(undefined4 *)((longlong)puVar9 + 0xc) = *(undefined4 *)((longlong)puVar9 + -4);
        puVar9[-1] = 0;
      }
      pFVar7 = (this->ChildNodes).Ptr;
      operator=((FTreeNode *)((pFVar7->Value).Pad + lVar15),
                (FTreeNode *)(pFVar7[-1].Value.Pad + lVar12));
      lVar12 = lVar12 + -0x28;
      lVar14 = lVar14 + -0x10;
      lVar15 = lVar15 + -0x28;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  pFVar10 = (this->RelPaths).Ptr + param_1;
  if (pFVar10 != param_2) {
    pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar10->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar10->Data).ArrayNum = (param_2->Data).ArrayNum;
    (pFVar10->Data).ArrayMax = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
  }
  operator=((this->ChildNodes).Ptr + param_1,param_3);
  if (((int)uVar11 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= InNumChildNodes && (InNumChildNodes & FlagsMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x353,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FTreeNode *)(*pcVar4)();
    return pFVar7;
  }
  this->NumChildNodesAndFlags = this->NumChildNodesAndFlags & 0x80000000 | uVar11;
  return (this->ChildNodes).Ptr + param_1;
}

// Realloc @ 14195f890

void __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::Realloc
          (FTreeNode *this,int param_1)

{
  void *pvVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  ulonglong *puVar10;
  FTreeNode *pFVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar15;
  FString *pFVar16;
  uint uVar17;
  FTreeNode *pFVar18;
  FTreeNode *pFVar19;
  FTreeNode *pFVar14;
  
  uVar13 = (ulonglong)param_1;
  if (this->CapacityChildNodes != param_1) {
    uVar17 = this->NumChildNodesAndFlags & 0x7fffffff;
    if ((param_1 < (int)uVar17) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumChildNodes <= NewCapacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x64c,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (0 < param_1) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar13;
      uVar8 = SUB168(ZEXT816(0x10) * auVar5,0);
      if (SUB168(ZEXT816(0x10) * auVar5,8) != 0) {
        uVar8 = 0xffffffffffffffff;
      }
      uVar9 = uVar8 + 8;
      if (0xfffffffffffffff7 < uVar8) {
        uVar9 = 0xffffffffffffffff;
      }
      puVar10 = operator_new__(uVar9);
      iVar12 = 0;
      pFVar14 = (FTreeNode *)0x0;
      pFVar19 = pFVar14;
      if (puVar10 != (ulonglong *)0x0) {
        pFVar19 = (FTreeNode *)(puVar10 + 1);
        *puVar10 = uVar13;
        pFVar11 = pFVar19;
        uVar8 = uVar13;
        do {
          (pFVar11->Value).Pad[0] = '\0';
          (pFVar11->Value).Pad[1] = '\0';
          (pFVar11->Value).Pad[2] = '\0';
          (pFVar11->Value).Pad[3] = '\0';
          (pFVar11->Value).Pad[4] = '\0';
          (pFVar11->Value).Pad[5] = '\0';
          (pFVar11->Value).Pad[6] = '\0';
          (pFVar11->Value).Pad[7] = '\0';
          (pFVar11->Value).Pad[8] = '\0';
          (pFVar11->Value).Pad[9] = '\0';
          (pFVar11->Value).Pad[10] = '\0';
          (pFVar11->Value).Pad[0xb] = '\0';
          (pFVar11->Value).Pad[0xc] = '\0';
          (pFVar11->Value).Pad[0xd] = '\0';
          (pFVar11->Value).Pad[0xe] = '\0';
          (pFVar11->Value).Pad[0xf] = '\0';
          pFVar11 = (FTreeNode *)&pFVar11->RelPaths;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar13;
      uVar8 = SUB168(ZEXT816(0x28) * auVar6,0);
      if (SUB168(ZEXT816(0x28) * auVar6,8) != 0) {
        uVar8 = 0xffffffffffffffff;
      }
      uVar9 = uVar8 + 8;
      if (0xfffffffffffffff7 < uVar8) {
        uVar9 = 0xffffffffffffffff;
      }
      puVar10 = operator_new__(uVar9);
      if (puVar10 != (ulonglong *)0x0) {
        pFVar14 = (FTreeNode *)(puVar10 + 1);
        *puVar10 = uVar13;
        puVar10 = puVar10 + 4;
        do {
          puVar10[-1] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10 = puVar10 + 5;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      uVar13 = (ulonglong)uVar17;
      pFVar11 = pFVar19;
      if (uVar17 != 0) {
        do {
          pFVar18 = (FTreeNode *)
                    (((longlong)pFVar11 - (longlong)pFVar19) + (longlong)(this->RelPaths).Ptr);
          if (pFVar11 != pFVar18) {
            pvVar1 = *(void **)(pFVar11->Value).Pad;
            if (pvVar1 != (void *)0x0) {
              FMemory::Free(pvVar1);
            }
            *(undefined8 *)(pFVar11->Value).Pad = *(undefined8 *)(pFVar18->Value).Pad;
            (pFVar18->Value).Pad[0] = '\0';
            (pFVar18->Value).Pad[1] = '\0';
            (pFVar18->Value).Pad[2] = '\0';
            (pFVar18->Value).Pad[3] = '\0';
            (pFVar18->Value).Pad[4] = '\0';
            (pFVar18->Value).Pad[5] = '\0';
            (pFVar18->Value).Pad[6] = '\0';
            (pFVar18->Value).Pad[7] = '\0';
            *(undefined4 *)((pFVar11->Value).Pad + 8) = *(undefined4 *)((pFVar18->Value).Pad + 8);
            *(undefined4 *)((pFVar11->Value).Pad + 0xc) =
                 *(undefined4 *)((pFVar18->Value).Pad + 0xc);
            (pFVar18->Value).Pad[8] = '\0';
            (pFVar18->Value).Pad[9] = '\0';
            (pFVar18->Value).Pad[10] = '\0';
            (pFVar18->Value).Pad[0xb] = '\0';
            (pFVar18->Value).Pad[0xc] = '\0';
            (pFVar18->Value).Pad[0xd] = '\0';
            (pFVar18->Value).Pad[0xe] = '\0';
            (pFVar18->Value).Pad[0xf] = '\0';
          }
          operator=(pFVar14 + iVar12,(this->ChildNodes).Ptr + iVar12);
          iVar12 = iVar12 + 1;
          uVar13 = uVar13 - 1;
          pFVar11 = (FTreeNode *)&pFVar11->RelPaths;
        } while (uVar13 != 0);
      }
      pFVar11 = (this->ChildNodes).Ptr;
      (this->ChildNodes).Ptr = pFVar14;
      if (pFVar11 != (FTreeNode *)0x0) {
        lVar15 = *(longlong *)&pFVar11[-1].NumChildNodesAndFlags;
        pFVar14 = pFVar11 + lVar15;
        for (; lVar15 != 0; lVar15 = lVar15 + -1) {
          pFVar14 = pFVar14 + -1;
          ~FTreeNode(pFVar14);
        }
        operator_delete__(&pFVar11[-1].NumChildNodesAndFlags,
                          *(longlong *)&pFVar11[-1].NumChildNodesAndFlags * 0x28 + 8);
      }
      pFVar2 = (this->RelPaths).Ptr;
      (this->RelPaths).Ptr = (FString *)pFVar19;
      if (pFVar2 != (FString *)0x0) {
        lVar15 = *(longlong *)&pFVar2[-1].Data.ArrayNum;
        pFVar16 = pFVar2 + lVar15;
        while (lVar15 != 0) {
          pFVar3 = pFVar16[-1].Data.AllocatorInstance.Data;
          pFVar16 = pFVar16 + -1;
          lVar15 = lVar15 + -1;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
        }
        operator_delete__(&pFVar2[-1].Data.ArrayNum,
                          *(longlong *)&pFVar2[-1].Data.ArrayNum * 0x10 + 8);
      }
      this->CapacityChildNodes = param_1;
      return;
    }
    TUniquePtr<TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode_[0]>_>
    ::Reset(&this->ChildNodes,(void *)0x0);
    TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset(&this->RelPaths,(void *)0x0);
    this->CapacityChildNodes = param_1;
  }
  return;
}

// Remove @ 141964e30

void __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::Remove
          (FTreeNode *this,TStringView<wchar_t> *param_1,bool *param_2)

{
  FTreeNode *this_00;
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FString *pFVar7;
  bool local_res8 [8];
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  if ((param_1->Size == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InRelPath.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x40b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_78.DataPtr = param_1->DataPtr;
  local_78.Size = param_1->Size;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_98.DataPtr = (wchar_t *)0x0;
  local_98.Size = 0;
  local_a8.DataPtr = (wchar_t *)0x0;
  local_a8.Size = 0;
  FPathViews::SplitFirstComponent(&local_78,&local_98,&local_a8);
  local_68._12_4_ = local_98._12_4_;
  local_68.Size = local_98.Size;
  local_68.DataPtr = local_98.DataPtr;
  iVar5 = UE::DirectoryTree::FindInsertionIndex
                    (this->NumChildNodesAndFlags & 0x7fffffff,&this->RelPaths,&local_68,local_res8);
  if (local_res8[0] != false) {
    local_48.DataPtr = param_1->DataPtr;
    local_48.Size = param_1->Size;
    local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
    this_00 = (this->ChildNodes).Ptr + iVar5;
    pFVar7 = (this->RelPaths).Ptr + iVar5;
    local_88 = (pFVar7->Data).AllocatorInstance.Data;
    iVar1 = (pFVar7->Data).ArrayNum;
    iStack_80 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_80 = 0;
    }
    local_58._12_4_ = uStack_7c;
    local_58.Size = iStack_80;
    local_58.DataPtr = (wchar_t *)local_88;
    bVar4 = FPathViews::TryMakeChildPathRelativeTo(&local_48,&local_58,&local_a8);
    if (bVar4) {
      if (local_a8.Size == 0) {
        *param_2 = SUB41(this_00->NumChildNodesAndFlags >> 0x1f,0);
        uVar6 = this_00->NumChildNodesAndFlags & 0x7fffffff;
        if (uVar6 == 0) {
          RemoveChildNodeAt(this,iVar5);
          return;
        }
        if (-1 < (int)this_00->NumChildNodesAndFlags) {
          return;
        }
        this_00->NumChildNodesAndFlags = uVar6;
        pvVar2 = *(void **)(this_00->Value).Pad;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
      }
      else {
        local_38._12_4_ = local_a8._12_4_;
        local_38.Size = local_a8.Size;
        local_38.DataPtr = local_a8.DataPtr;
        Remove(this_00,&local_38,param_2);
        if (*param_2 == false) {
          return;
        }
      }
      ConditionalCompactNode(pFVar7,this_00);
      return;
    }
  }
  *param_2 = false;
  return;
}

// RemoveChildNodeAt @ 1419659b0

void __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::RemoveChildNodeAt
          (FTreeNode *this,int param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  FTreeNode *pFVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  FTreeNode *pFVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  uVar10 = this->NumChildNodesAndFlags & 0x7fffffff;
  if (((param_1 < 0) || ((int)uVar10 <= param_1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= RemoveIndex && RemoveIndex < NumChildNodes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x623,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar1 = uVar10 - 1;
  if (param_1 < (int)uVar1) {
    lVar11 = (longlong)param_1 * 0x28;
    lVar9 = (longlong)param_1 << 4;
    uVar12 = (ulonglong)(uVar1 - param_1);
    do {
      puVar8 = (undefined8 *)
               ((longlong)&(((this->RelPaths).Ptr)->Data).AllocatorInstance.Data + lVar9);
      puVar2 = puVar8 + 2;
      if (puVar8 != puVar2) {
        if ((void *)*puVar8 != (void *)0x0) {
          FMemory::Free((void *)*puVar8);
        }
        *puVar8 = *puVar2;
        *puVar2 = 0;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + 3);
        *(undefined4 *)((longlong)puVar8 + 0xc) = *(undefined4 *)((longlong)puVar8 + 0x1c);
        puVar8[3] = 0;
      }
      pFVar7 = (FTreeNode *)((((this->ChildNodes).Ptr)->Value).Pad + lVar11);
      operator=(pFVar7,pFVar7 + 1);
      lVar11 = lVar11 + 0x28;
      lVar9 = lVar9 + 0x10;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  lVar9 = (ulonglong)uVar10 - 1;
  ::FString::Empty((this->RelPaths).Ptr + lVar9);
  pFVar3 = (this->ChildNodes).Ptr;
  pFVar7 = pFVar3 + lVar9;
  uVar10 = pFVar3[lVar9].NumChildNodesAndFlags;
  if ((int)uVar10 < 0) {
    pFVar7->NumChildNodesAndFlags = uVar10 & 0x7fffffff;
    pvVar4 = *(void **)(pFVar7->Value).Pad;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
  }
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset(&pFVar7->RelPaths,(void *)0x0);
  TUniquePtr<TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode_[0]>_>
  ::Reset(&pFVar7->ChildNodes,(void *)0x0);
  pFVar7->NumChildNodesAndFlags = 0;
  pFVar7->CapacityChildNodes = 0;
  if (((int)uVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= InNumChildNodes && (InNumChildNodes & FlagsMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x353,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this->NumChildNodesAndFlags = this->NumChildNodesAndFlags & 0x80000000 | uVar1;
  return;
}

// Reset @ 141967440

void __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::Reset(FTreeNode *this)

{
  void *pvVar1;
  
  if ((int)this->NumChildNodesAndFlags < 0) {
    this->NumChildNodesAndFlags = this->NumChildNodesAndFlags & 0x7fffffff;
    pvVar1 = *(void **)(this->Value).Pad;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  }
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset(&this->RelPaths,(void *)0x0);
  TUniquePtr<TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode_[0]>_>
  ::Reset(&this->ChildNodes,(void *)0x0);
  this->NumChildNodesAndFlags = 0;
  this->CapacityChildNodes = 0;
  return;
}

// TryFindClosestPath @ 141975e10

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::TryFindClosestPath
          (FTreeNode *this,TStringView<wchar_t> *param_1,TStringBuilderBase<wchar_t> *param_2,
          wchar_t param_3)

{
  FTreeNode *this_00;
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  FString *pFVar8;
  bool local_res8 [8];
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  if ((param_1->Size == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InRelPath.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x58c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar7;
  }
  local_68.DataPtr = param_1->DataPtr;
  local_68.Size = param_1->Size;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_88.DataPtr = (wchar_t *)0x0;
  local_88.Size = 0;
  local_98.DataPtr = (wchar_t *)0x0;
  local_98.Size = 0;
  FPathViews::SplitFirstComponent(&local_68,&local_88,&local_98);
  local_58._12_4_ = local_88._12_4_;
  local_58.Size = local_88.Size;
  local_58.DataPtr = local_88.DataPtr;
  iVar5 = UE::DirectoryTree::FindInsertionIndex
                    (this->NumChildNodesAndFlags & 0x7fffffff,&this->RelPaths,&local_58,local_res8);
  if (local_res8[0] != false) {
    local_38.DataPtr = param_1->DataPtr;
    local_38.Size = param_1->Size;
    local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
    this_00 = (this->ChildNodes).Ptr + iVar5;
    pFVar8 = (this->RelPaths).Ptr + iVar5;
    local_78 = (pFVar8->Data).AllocatorInstance.Data;
    iVar5 = (pFVar8->Data).ArrayNum;
    iStack_70 = iVar5 + -1;
    if (iVar5 == 0) {
      iStack_70 = 0;
    }
    local_48._12_4_ = uStack_6c;
    local_48.Size = iStack_70;
    local_48.DataPtr = (wchar_t *)local_78;
    bVar4 = FPathViews::TryMakeChildPathRelativeTo(&local_38,&local_48,&local_98);
    if (bVar4) {
      if (local_98.Size == 0) {
        if ((int)this_00->NumChildNodesAndFlags < 0) {
          if (param_2 == (TStringBuilderBase<wchar_t> *)0x0) {
            return (TArray<FName,TSizedDefaultAllocator<32>_> *)this_00;
          }
          pwVar1 = param_2->CurPos;
          pwVar2 = param_2->Base;
          FPathViews::Append<wchar_t,FString_const_&>(param_2,pFVar8);
          UE::DirectoryTree::FixupPathSeparator
                    (param_2,(int)((longlong)pwVar1 - (longlong)pwVar2 >> 1),param_3);
          return (TArray<FName,TSizedDefaultAllocator<32>_> *)this_00;
        }
      }
      else {
        iVar5 = -1;
        if (param_2 != (TStringBuilderBase<wchar_t> *)0x0) {
          pwVar1 = param_2->CurPos;
          pwVar2 = param_2->Base;
          FPathViews::Append<wchar_t,FString_const_&>(param_2,pFVar8);
          iVar5 = (int)((longlong)pwVar1 - (longlong)pwVar2 >> 1);
          UE::DirectoryTree::FixupPathSeparator(param_2,iVar5,param_3);
        }
        local_28._12_4_ = local_98._12_4_;
        local_28.Size = local_98.Size;
        local_28.DataPtr = local_98.DataPtr;
        pTVar7 = TryFindClosestPath(this_00,&local_28,param_2,param_3);
        if (pTVar7 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
          return pTVar7;
        }
        if ((int)this_00->NumChildNodesAndFlags < 0) {
          return (TArray<FName,TSizedDefaultAllocator<32>_> *)this_00;
        }
        if (param_2 != (TStringBuilderBase<wchar_t> *)0x0) {
          iVar6 = (int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1);
          iVar5 = iVar6 - iVar5;
          if ((iVar6 < iVar5) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount <= Len()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                 ,0xe8,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar7;
          }
          param_2->CurPos = param_2->CurPos + -(longlong)iVar5;
        }
      }
    }
  }
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
}

// TryGetChildren @ 1419761a0

/* WARNING: Removing unreachable block (ram,0x000141976ed4) */
/* WARNING: Removing unreachable block (ram,0x000141976d3a) */
/* WARNING: Removing unreachable block (ram,0x0001419767a2) */
/* WARNING: Removing unreachable block (ram,0x0001419763f6) */
/* WARNING: Removing unreachable block (ram,0x000141977074) */
/* WARNING: Removing unreachable block (ram,0x000141976589) */

bool __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::TryGetChildren
          (FTreeNode *this,TStringBuilderBase<wchar_t> *param_1,wchar_t param_2,
          TStringView<wchar_t> *param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4,
          EDirectoryTreeGetFlags param_5)

{
  wchar_t **ppwVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  wchar_t *pwVar13;
  FScriptContainerElement *pFVar14;
  undefined8 *puVar15;
  FTreeNode *pFVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  bool local_res20 [8];
  TStringView<wchar_t> local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  TStringView<wchar_t> local_278;
  ulonglong local_268;
  TStringView<wchar_t> local_260;
  TStringView<wchar_t> local_248;
  TStringView<wchar_t> local_238;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  TStringView<wchar_t> local_210;
  TStringView<wchar_t> local_1f8;
  longlong local_1e8;
  FTreeNode *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  TStringView<wchar_t> local_1b8;
  TStringView<wchar_t> local_1a8;
  TStringView<wchar_t> local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  wchar_t *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FScriptContainerElement *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58 [2];
  
  if (param_3->Size == 0) {
    uVar9 = this->NumChildNodesAndFlags & 0x7fffffff;
    local_268 = (ulonglong)uVar9;
    if (uVar9 == 0) {
LAB_1419770bc:
      bVar7 = true;
    }
    else {
      local_228 = 0;
      local_218 = 0;
      local_220 = 0;
      do {
        pFVar16 = (FTreeNode *)((((this->ChildNodes).Ptr)->Value).Pad + local_220);
        puVar15 = (undefined8 *)
                  ((longlong)&(((this->RelPaths).Ptr)->Data).AllocatorInstance.Data + local_218);
        local_1e0 = pFVar16;
        if ((param_5 & ImpliedChildren) == None) {
          pwVar13 = param_1->CurPos;
          iVar10 = (int)((longlong)pwVar13 - (longlong)param_1->Base >> 1);
          if (((iVar10 != 0) && (pwVar13[-1] != L'/')) && (pwVar13[-1] != L'\\')) {
            if (param_1->End < pwVar13 + 1) {
              TStringBuilderBase<wchar_t>::Extend(param_1,1);
            }
            *param_1->CurPos = L'/';
            param_1->CurPos = param_1->CurPos + 1;
          }
          iVar11 = *(int *)(puVar15 + 1) + -1;
          if (*(int *)(puVar15 + 1) == 0) {
            iVar11 = 0;
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,(wchar_t *)*puVar15,iVar11);
          UE::DirectoryTree::FixupPathSeparator(param_1,iVar10,param_2);
          if ((int)pFVar16->NumChildNodesAndFlags < 0) {
            if (param_1->End < param_1->CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(param_1,1);
            }
            *param_1->CurPos = L'\0';
            ::FString::FString(&local_2d8,param_1->Base);
            pFVar14 = (param_4->AllocatorInstance).Data;
            if (((pFVar14 <= (FScriptContainerElement *)&local_2d8) &&
                ((FScriptContainerElement *)&local_2d8 <
                 pFVar14 + (longlong)param_4->ArrayMax * 0x10)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            iVar11 = param_4->ArrayNum;
            if (iVar11 == param_4->ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
            }
            param_4->ArrayNum = iVar11 + 1;
            pFVar14 = (param_4->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
            *(undefined8 *)pFVar14 = 0;
            *(FScriptContainerElement **)pFVar14 = local_2d8.Data.AllocatorInstance.Data;
            local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar14 + 8) = local_2d8.Data.ArrayNum;
            *(int *)(pFVar14 + 0xc) = local_2d8.Data.ArrayMax;
            local_2d8.Data.ArrayNum = 0;
            local_2d8.Data.ArrayMax = 0;
          }
          if ((-1 < (int)pFVar16->NumChildNodesAndFlags) || ((param_5 & Recursive) != None)) {
            uStack_1c0 = 0;
            local_1c8 = 0;
            local_118.DataPtr = (wchar_t *)0x0;
            local_118.Size = 0;
            local_118._12_4_ = 0;
            TryGetChildren(pFVar16,param_1,param_2,&local_118,param_4,param_5);
          }
          iVar11 = (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1);
          iVar10 = iVar11 - iVar10;
          if ((iVar11 < iVar10) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount <= Len()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                 ,0xe8,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
        }
        else {
          local_168 = (wchar_t *)*puVar15;
          local_260.DataPtr = (wchar_t *)0x0;
          local_260.Size = 0;
          local_248.DataPtr = (wchar_t *)0x0;
          local_248.Size = 0;
          iStack_160 = *(int *)(puVar15 + 1) + -1;
          if (*(int *)(puVar15 + 1) == 0) {
            iStack_160 = 0;
          }
          local_148._12_4_ = uStack_15c;
          local_148.Size = iStack_160;
          local_148.DataPtr = local_168;
          FPathViews::SplitFirstComponent(&local_148,&local_260,&local_248);
          pwVar13 = param_1->CurPos;
          lVar17 = (longlong)pwVar13 - (longlong)param_1->Base >> 1;
          local_1e8 = lVar17;
          if ((((int)lVar17 != 0) && (pwVar13[-1] != L'/')) && (pwVar13[-1] != L'\\')) {
            if (param_1->End < pwVar13 + 1) {
              TStringBuilderBase<wchar_t>::Extend(param_1,1);
            }
            *param_1->CurPos = L'/';
            param_1->CurPos = param_1->CurPos + 1;
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,local_260.DataPtr,local_260.Size);
          UE::DirectoryTree::FixupPathSeparator(param_1,(int)lVar17,param_2);
          ppwVar1 = &param_1->End;
          if (*ppwVar1 < param_1->CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(param_1,1);
          }
          *param_1->CurPos = L'\0';
          ::FString::FString(&local_2c8,param_1->Base);
          pFVar14 = (param_4->AllocatorInstance).Data;
          if (((pFVar14 <= (FScriptContainerElement *)&local_2c8) &&
              ((FScriptContainerElement *)&local_2c8 < pFVar14 + (longlong)param_4->ArrayMax * 0x10)
              ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          iVar10 = param_4->ArrayNum;
          if (iVar10 == param_4->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar10 + 1;
          pFVar14 = (param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
          *(undefined8 *)pFVar14 = 0;
          *(FScriptContainerElement **)pFVar14 = local_2c8.Data.AllocatorInstance.Data;
          *(int *)(pFVar14 + 8) = local_2c8.Data.ArrayNum;
          *(int *)(pFVar14 + 0xc) = local_2c8.Data.ArrayMax;
          local_2c8.Data.ArrayNum = 0;
          local_2c8.Data.ArrayMax = 0;
          local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if ((param_5 & Recursive) != None) {
            while (local_248.Size != 0) {
              local_138._12_4_ = local_248._12_4_;
              local_138.Size = local_248.Size;
              local_138.DataPtr = local_248.DataPtr;
              FPathViews::SplitFirstComponent(&local_138,&local_260,&local_248);
              pwVar13 = param_1->CurPos;
              iVar10 = (int)((longlong)pwVar13 - (longlong)param_1->Base >> 1);
              if (((iVar10 != 0) && (pwVar13[-1] != L'/')) && (pwVar13[-1] != L'\\')) {
                if (*ppwVar1 < pwVar13 + 1) {
                  TStringBuilderBase<wchar_t>::Extend(param_1,1);
                }
                *param_1->CurPos = L'/';
                param_1->CurPos = param_1->CurPos + 1;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (param_1,local_260.DataPtr,local_260.Size);
              UE::DirectoryTree::FixupPathSeparator(param_1,iVar10,param_2);
              if (*ppwVar1 < param_1->CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(param_1,1);
              }
              *param_1->CurPos = L'\0';
              ::FString::FString(&local_2b8,param_1->Base);
              pFVar14 = (param_4->AllocatorInstance).Data;
              if (((pFVar14 <= (FScriptContainerElement *)&local_2b8) &&
                  ((FScriptContainerElement *)&local_2b8 <
                   pFVar14 + (longlong)param_4->ArrayMax * 0x10)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              iVar10 = param_4->ArrayNum;
              if (iVar10 == param_4->ArrayMax) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
              }
              param_4->ArrayNum = iVar10 + 1;
              pFVar14 = (param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
              *(undefined8 *)pFVar14 = 0;
              *(FScriptContainerElement **)pFVar14 = local_2b8.Data.AllocatorInstance.Data;
              local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              *(int *)(pFVar14 + 8) = local_2b8.Data.ArrayNum;
              *(int *)(pFVar14 + 0xc) = local_2b8.Data.ArrayMax;
              local_2b8.Data.ArrayNum = 0;
              local_2b8.Data.ArrayMax = 0;
              lVar17 = local_1e8;
            }
            uStack_1d0 = 0;
            local_1d8 = 0;
            local_128.DataPtr = (wchar_t *)0x0;
            local_128.Size = 0;
            local_128._12_4_ = 0;
            TryGetChildren(local_1e0,param_1,param_2,&local_128,param_4,param_5);
          }
          iVar11 = (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1);
          iVar10 = iVar11 - (int)lVar17;
          if ((iVar11 < iVar10) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount <= Len()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                 ,0xe8,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
        }
        local_228 = local_228 + 1;
        local_220 = local_220 + 0x28;
        local_218 = local_218 + 0x10;
        param_1->CurPos = param_1->CurPos + -(longlong)iVar10;
      } while (local_228 < (longlong)local_268);
      bVar7 = true;
    }
  }
  else {
    local_108.DataPtr = param_3->DataPtr;
    local_108.Size = param_3->Size;
    local_108._12_4_ = *(undefined4 *)&param_3->field_0xc;
    iVar11 = 0;
    local_1b8.DataPtr = (wchar_t *)0x0;
    local_1b8.Size = 0;
    local_1f8.DataPtr = (wchar_t *)0x0;
    local_1f8.Size = 0;
    FPathViews::SplitFirstComponent(&local_108,&local_1b8,&local_1f8);
    pwVar13 = local_1b8.DataPtr;
    uVar5._4_4_ = local_1b8._12_4_;
    uVar5._0_4_ = local_1b8.Size;
    local_f8.DataPtr = local_1b8.DataPtr;
    local_f8._8_8_ = uVar5;
    iVar10 = UE::DirectoryTree::FindInsertionIndex
                       (this->NumChildNodesAndFlags & 0x7fffffff,&this->RelPaths,&local_f8,
                        local_res20);
    if (local_res20[0] != false) {
      local_278.DataPtr = (wchar_t *)0x0;
      local_278.Size = 0;
      local_2e8.DataPtr = (wchar_t *)0x0;
      pFVar16 = (this->ChildNodes).Ptr + iVar10;
      local_2e8.Size = 0;
      pFVar2 = (this->RelPaths).Ptr;
      local_158 = pFVar2[iVar10].Data.AllocatorInstance.Data;
      iVar10 = pFVar2[iVar10].Data.ArrayNum;
      iStack_150 = iVar10 + -1;
      if (iVar10 == 0) {
        iStack_150 = 0;
      }
      local_e8._12_4_ = uStack_14c;
      local_e8.Size = iStack_150;
      local_e8.DataPtr = (wchar_t *)local_158;
      FPathViews::SplitFirstComponent(&local_e8,&local_278,&local_2e8);
      local_d8._12_4_ = local_278._12_4_;
      local_d8.Size = local_278.Size;
      local_d8.DataPtr = local_278.DataPtr;
      local_c8.DataPtr = pwVar13;
      local_c8._8_8_ = uVar5;
      bVar7 = FPathViews::Equals(&local_c8,&local_d8);
      if ((!bVar7) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("FPathViews::Equals(FirstComponent, ExistingFirstComponent)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                             ,0x512,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      if (-1 < param_3->Size) {
        local_58[0].DataPtr._0_4_ = local_1f8.DataPtr._0_4_;
        local_58[0].DataPtr._4_4_ = local_1f8.DataPtr._4_4_;
        uVar19 = local_2e8.DataPtr._0_4_;
        uVar20 = local_2e8.DataPtr._4_4_;
        do {
          iVar10 = local_2e8.Size;
          if (local_2e8.Size == 0) {
            if (((local_1f8.Size != 0) || ((param_5 & ImpliedParent) != None)) ||
               ((int)pFVar16->NumChildNodesAndFlags < 0)) {
              local_58[0].Size = local_1f8.Size;
              bVar7 = TryGetChildren(pFVar16,param_1,param_2,local_58,param_4,param_5);
              return bVar7;
            }
            goto LAB_141976b9a;
          }
          if (local_1f8.Size == 0) {
            if ((param_5 & ImpliedParent) == None) goto LAB_141976b9a;
            if ((param_5 & ImpliedChildren) != None) {
              local_98.DataPtr._0_4_ = uVar19;
              local_98.DataPtr._4_4_ = uVar20;
              local_98.Size = local_2e8.Size;
              FPathViews::SplitFirstComponent(&local_98,&local_278,&local_2e8);
              pwVar13 = param_1->CurPos;
              uVar18 = (longlong)pwVar13 - (longlong)param_1->Base >> 1;
              local_268 = uVar18;
              if ((((int)uVar18 != 0) && (pwVar13[-1] != L'/')) && (pwVar13[-1] != L'\\')) {
                if (param_1->End < pwVar13 + 1) {
                  TStringBuilderBase<wchar_t>::Extend(param_1,1);
                }
                *param_1->CurPos = L'/';
                param_1->CurPos = param_1->CurPos + 1;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (param_1,local_278.DataPtr,local_278.Size);
              UE::DirectoryTree::FixupPathSeparator(param_1,(int)uVar18,param_2);
              pwVar13 = TStringBuilderBase<wchar_t>::operator*(param_1);
              ::FString::FString(&local_2a8,pwVar13);
              pFVar14 = (param_4->AllocatorInstance).Data;
              if (((pFVar14 <= (FScriptContainerElement *)&local_2a8) &&
                  ((FScriptContainerElement *)&local_2a8 <
                   pFVar14 + (longlong)param_4->ArrayMax * 0x10)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              iVar10 = param_4->ArrayNum;
              if (iVar10 == param_4->ArrayMax) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
              }
              param_4->ArrayNum = iVar10 + 1;
              pFVar14 = (param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
              *(undefined8 *)pFVar14 = 0;
              *(FScriptContainerElement **)pFVar14 = local_2a8.Data.AllocatorInstance.Data;
              *(int *)(pFVar14 + 8) = local_2a8.Data.ArrayNum;
              *(int *)(pFVar14 + 0xc) = local_2a8.Data.ArrayMax;
              local_2a8.Data.ArrayNum = 0;
              local_2a8.Data.ArrayMax = 0;
              local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if ((param_5 & Recursive) != None) {
                while (local_2e8.Size != 0) {
                  local_88._12_4_ = local_2e8._12_4_;
                  local_88.Size = local_2e8.Size;
                  local_88.DataPtr = local_2e8.DataPtr;
                  FPathViews::SplitFirstComponent(&local_88,&local_278,&local_2e8);
                  pwVar13 = param_1->CurPos;
                  iVar10 = (int)((longlong)pwVar13 - (longlong)param_1->Base >> 1);
                  if (((iVar10 != 0) && (pwVar13[-1] != L'/')) && (pwVar13[-1] != L'\\')) {
                    if (param_1->End < pwVar13 + 1) {
                      TStringBuilderBase<wchar_t>::Extend(param_1,1);
                    }
                    *param_1->CurPos = L'/';
                    param_1->CurPos = param_1->CurPos + 1;
                  }
                  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                            (param_1,local_278.DataPtr,local_278.Size);
                  UE::DirectoryTree::FixupPathSeparator(param_1,iVar10,param_2);
                  if (param_1->End < param_1->CurPos + 1) {
                    TStringBuilderBase<wchar_t>::Extend(param_1,1);
                  }
                  *param_1->CurPos = L'\0';
                  ::FString::FString(&local_298,param_1->Base);
                  pFVar14 = (param_4->AllocatorInstance).Data;
                  if (((pFVar14 <= (FScriptContainerElement *)&local_298) &&
                      ((FScriptContainerElement *)&local_298 <
                       pFVar14 + (longlong)param_4->ArrayMax * 0x10)) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    uVar8 = (*pcVar4)();
                    return (bool)uVar8;
                  }
                  iVar10 = param_4->ArrayNum;
                  if (iVar10 == param_4->ArrayMax) {
                    iVar10 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
                  }
                  param_4->ArrayNum = iVar10 + 1;
                  pFVar14 = (param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
                  *(undefined8 *)pFVar14 = 0;
                  *(FScriptContainerElement **)pFVar14 = local_298.Data.AllocatorInstance.Data;
                  *(int *)(pFVar14 + 8) = local_298.Data.ArrayNum;
                  *(int *)(pFVar14 + 0xc) = local_298.Data.ArrayMax;
                  local_298.Data.ArrayNum = 0;
                  local_298.Data.ArrayMax = 0;
                  local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  uVar18 = local_268;
                }
                uStack_180 = 0;
                local_188 = 0;
                local_78.DataPtr = (wchar_t *)0x0;
                local_78.Size = 0;
                local_78._12_4_ = 0;
                TryGetChildren(pFVar16,param_1,param_2,&local_78,param_4,param_5);
              }
              TStringBuilderBase<wchar_t>::RemoveSuffix
                        (param_1,(int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1) -
                                 (int)uVar18);
              return true;
            }
            if (((int)pFVar16->NumChildNodesAndFlags < 0) || ((param_5 & Recursive) != None)) {
              pwVar13 = param_1->CurPos;
              pwVar3 = param_1->Base;
              FPathViews::Append<wchar_t,TStringView<wchar_t>_&>(param_1,&local_2e8);
              UE::DirectoryTree::FixupPathSeparator
                        (param_1,(int)((longlong)pwVar13 - (longlong)pwVar3 >> 1),param_2);
              if ((int)pFVar16->NumChildNodesAndFlags < 0) {
                pwVar13 = TStringBuilderBase<wchar_t>::operator*(param_1);
                ::FString::FString(&local_288,pwVar13);
                pFVar14 = (param_4->AllocatorInstance).Data;
                if (((pFVar14 <= (FScriptContainerElement *)&local_288) &&
                    ((FScriptContainerElement *)&local_288 <
                     pFVar14 + (longlong)param_4->ArrayMax * 0x10)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  uVar8 = (*pcVar4)();
                  return (bool)uVar8;
                }
                iVar10 = param_4->ArrayNum;
                if (iVar10 == param_4->ArrayMax) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
                }
                param_4->ArrayNum = iVar10 + 1;
                pFVar14 = (param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
                *(undefined8 *)pFVar14 = 0;
                *(FScriptContainerElement **)pFVar14 = local_288.Data.AllocatorInstance.Data;
                local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                *(int *)(pFVar14 + 8) = local_288.Data.ArrayNum;
                *(int *)(pFVar14 + 0xc) = local_288.Data.ArrayMax;
                local_288.Data.ArrayNum = 0;
                local_288.Data.ArrayMax = 0;
              }
              if ((param_5 & Recursive) != None) {
                uStack_170 = 0;
                local_178 = 0;
                local_68.DataPtr = (wchar_t *)0x0;
                local_68.Size = 0;
                local_68._12_4_ = 0;
                TryGetChildren(pFVar16,param_1,param_2,&local_68,param_4,param_5);
              }
            }
            goto LAB_1419770bc;
          }
          local_238.DataPtr = (wchar_t *)0x0;
          local_238.Size = 0;
          local_1a8.DataPtr = (wchar_t *)0x0;
          local_1a8.Size = 0;
          local_b8.DataPtr._0_4_ = local_58[0].DataPtr._0_4_;
          local_b8.DataPtr._4_4_ = local_58[0].DataPtr._4_4_;
          local_b8.Size = local_1f8.Size;
          FPathViews::SplitFirstComponent(&local_b8,&local_238,&local_1a8);
          iVar6 = local_238.Size;
          if ((local_238.Size == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!NextFirstComponent.IsEmpty()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                                 ,0x56c,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          local_210.DataPtr = (wchar_t *)0x0;
          local_210.Size = 0;
          local_198.DataPtr = (wchar_t *)0x0;
          local_198.Size = 0;
          local_a8.DataPtr._0_4_ = uVar19;
          local_a8.DataPtr._4_4_ = uVar20;
          local_a8.Size = iVar10;
          FPathViews::SplitFirstComponent(&local_a8,&local_210,&local_198);
          iVar10 = local_210.Size;
          if ((local_210.Size == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!NextExistingFirstComponent.IsEmpty()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                                 ,0x570,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          if (iVar6 != iVar10) goto LAB_141976b9a;
          if ((iVar6 != 0) && (iVar10 != 0)) {
            iVar12 = iVar10;
            if (iVar6 < iVar10) {
              iVar12 = iVar6;
            }
            iVar12 = FGenericPlatformStricmp::Strnicmp
                               (local_238.DataPtr,local_210.DataPtr,(longlong)iVar12);
            if (iVar12 != 0) goto LAB_141976b9a;
          }
          if (iVar6 != iVar10) goto LAB_141976b9a;
          local_1f8.Size = local_1a8.Size;
          iVar11 = iVar11 + 1;
          local_2e8.Size = local_198.Size;
          local_2e8._12_4_ = local_198._12_4_;
          local_1f8.DataPtr = local_1a8.DataPtr;
          local_1f8._12_4_ = local_1a8._12_4_;
          local_2e8.DataPtr = local_198.DataPtr;
          local_58[0].DataPtr._0_4_ = local_1a8.DataPtr._0_4_;
          local_58[0].DataPtr._4_4_ = local_1a8.DataPtr._4_4_;
          uVar19 = local_198.DataPtr._0_4_;
          uVar20 = local_198.DataPtr._4_4_;
        } while (iVar11 <= param_3->Size);
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x581,L"Infinite loop trying to split path %.*s into components.");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x584,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
    }
LAB_141976b9a:
    bVar7 = false;
  }
  return bVar7;
}

// FTreeNode @ 141b28570

FTreeNode * __thiscall TDirectoryTree<int>::FTreeNode::FTreeNode(FTreeNode *this,FTreeNode *param_1)

{
  (this->RelPaths).Ptr = (FString *)0x0;
  (this->ChildNodes).Ptr = (FTreeNode *)0x0;
  this->NumChildNodesAndFlags = 0;
  this->CapacityChildNodes = 0;
  operator=(this,param_1);
  return this;
}

// FTreeNode @ 141b285a0

FTreeNode * __thiscall TDirectoryTree<int>::FTreeNode::FTreeNode(FTreeNode *this)

{
  (this->RelPaths).Ptr = (FString *)0x0;
  (this->ChildNodes).Ptr = (FTreeNode *)0x0;
  this->NumChildNodesAndFlags = 0;
  this->CapacityChildNodes = 0;
  return this;
}

// FTreeNode @ 141b285c0

FTreeNode * __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FTreeNode::FTreeNode
          (void *this)

{
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  return this;
}

// ~FTreeNode @ 141b2b140

void __thiscall TDirectoryTree<int>::FTreeNode::~FTreeNode(FTreeNode *this)

{
  int *piVar1;
  FTreeNode *pFVar2;
  FScriptContainerElement *pFVar3;
  FTreeNode *this_00;
  longlong lVar4;
  FString *pFVar5;
  
  pFVar2 = (this->ChildNodes).Ptr;
  if (pFVar2 != (FTreeNode *)0x0) {
    lVar4 = *(longlong *)&pFVar2[-1].NumChildNodesAndFlags;
    this_00 = pFVar2 + lVar4;
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      this_00 = this_00 + -1;
      ~FTreeNode(this_00);
    }
    operator_delete__(&pFVar2[-1].NumChildNodesAndFlags,
                      *(longlong *)&pFVar2[-1].NumChildNodesAndFlags * 0x20 + 8);
  }
  pFVar5 = (this->RelPaths).Ptr;
  if (pFVar5 != (FString *)0x0) {
    lVar4 = *(longlong *)&pFVar5[-1].Data.ArrayNum;
    piVar1 = &pFVar5[-1].Data.ArrayNum;
    pFVar5 = pFVar5 + lVar4;
    while (lVar4 != 0) {
      pFVar3 = pFVar5[-1].Data.AllocatorInstance.Data;
      pFVar5 = pFVar5 + -1;
      lVar4 = lVar4 + -1;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
    operator_delete__(piVar1,*(longlong *)piVar1 * 0x10 + 8);
  }
  return;
}

// ~FTreeNode @ 141b2b220

void __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FTreeNode::~FTreeNode
          (void *this)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *this_00;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)((longlong)this + 0x10);
  if (lVar2 != 0) {
    lVar4 = *(longlong *)(lVar2 + -8);
    this_00 = (void *)(lVar4 * 0x20 + lVar2);
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      this_00 = (void *)((longlong)this_00 + -0x20);
      ~FTreeNode(this_00);
    }
    operator_delete__((longlong *)(lVar2 + -8),*(longlong *)(lVar2 + -8) * 0x20 + 8);
  }
  lVar2 = *(longlong *)((longlong)this + 8);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar2 + -8);
    lVar4 = lVar3 * 0x10 + lVar2;
    while (lVar3 != 0) {
      puVar1 = (undefined8 *)(lVar4 + -0x10);
      lVar4 = lVar4 + -0x10;
      lVar3 = lVar3 + -1;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
    }
    operator_delete__((longlong *)(lVar2 + -8),*(longlong *)(lVar2 + -8) * 0x10 + 8);
  }
  return;
}

// operator= @ 141b2b8c0

FTreeNode * __thiscall TDirectoryTree<int>::FTreeNode::operator=(FTreeNode *this,FTreeNode *param_1)

{
  TUniquePtr<TDirectoryTree<int>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<int>::FTreeNode_[0]>_>
  *pTVar1;
  TUniquePtr<TDirectoryTree<int>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<int>::FTreeNode_[0]>_>
  *pTVar2;
  FTreeNode *pFVar3;
  FTreeNode *this_00;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = this->NumChildNodesAndFlags;
  if ((int)param_1->NumChildNodesAndFlags < 0) {
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 & 0x7fffffff;
    }
    this->NumChildNodesAndFlags = uVar5 | 0x80000000;
    *(undefined4 *)(this->Value).Pad = *(undefined4 *)(param_1->Value).Pad;
    if ((int)param_1->NumChildNodesAndFlags < 0) {
      param_1->NumChildNodesAndFlags = param_1->NumChildNodesAndFlags & 0x7fffffff;
    }
  }
  else if ((int)uVar5 < 0) {
    this->NumChildNodesAndFlags = uVar5 & 0x7fffffff;
  }
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::operator=
            (&this->RelPaths,&param_1->RelPaths);
  pTVar1 = &param_1->ChildNodes;
  pTVar2 = &this->ChildNodes;
  if (pTVar2 != pTVar1) {
    pFVar3 = pTVar2->Ptr;
    pTVar2->Ptr = pTVar1->Ptr;
    pTVar1->Ptr = (FTreeNode *)0x0;
    if (pFVar3 != (FTreeNode *)0x0) {
      lVar4 = *(longlong *)&pFVar3[-1].NumChildNodesAndFlags;
      this_00 = pFVar3 + lVar4;
      for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        this_00 = this_00 + -1;
        ~FTreeNode(this_00);
      }
      operator_delete__(&pFVar3[-1].NumChildNodesAndFlags,
                        *(longlong *)&pFVar3[-1].NumChildNodesAndFlags * 0x20 + 8);
    }
  }
  this->NumChildNodesAndFlags =
       this->NumChildNodesAndFlags ^
       (this->NumChildNodesAndFlags ^ param_1->NumChildNodesAndFlags) & 0x7fffffff;
  this->CapacityChildNodes = param_1->CapacityChildNodes;
  param_1->NumChildNodesAndFlags = param_1->NumChildNodesAndFlags & 0x80000000;
  param_1->CapacityChildNodes = 0;
  return this;
}

// operator= @ 141b2b9e0

FTreeNode * __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FTreeNode::operator=
          (void *this,FTreeNode *param_1)

{
  TUniquePtr<TDirectoryTree<_protected:_void___cdecl_FDirectoryTreeAPITests::TestBody(FString_const_&)_::_2_::FMoveConstructOnly>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<_protected:_void___cdecl_FDirectoryTreeAPITests::TestBody(FString_const_&)_::_2_::FMoveConstructOnly>::FTreeNode_[0]>_>
  *pTVar1;
  longlong *plVar2;
  longlong lVar3;
  void *this_00;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = *(uint *)((longlong)this + 0x18);
  if ((int)param_1->NumChildNodesAndFlags < 0) {
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 & 0x7fffffff;
    }
    *(uint *)((longlong)this + 0x18) = uVar5 | 0x80000000;
    *(undefined4 *)this = *(undefined4 *)(param_1->Value).Pad;
    uVar5 = param_1->NumChildNodesAndFlags;
    *(undefined4 *)(param_1->Value).Pad = 0xffffffff;
    if ((int)uVar5 < 0) {
      param_1->NumChildNodesAndFlags = uVar5 & 0x7fffffff;
    }
  }
  else if ((int)uVar5 < 0) {
    *(uint *)((longlong)this + 0x18) = uVar5 & 0x7fffffff;
  }
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::operator=
            ((TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *)((longlong)this + 8),
             &param_1->RelPaths);
  pTVar1 = &param_1->ChildNodes;
  plVar2 = (longlong *)((longlong)this + 0x10);
  if ((TUniquePtr<TDirectoryTree<_protected:_void___cdecl_FDirectoryTreeAPITests::TestBody(FString_const_&)_::_2_::FMoveConstructOnly>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<_protected:_void___cdecl_FDirectoryTreeAPITests::TestBody(FString_const_&)_::_2_::FMoveConstructOnly>::FTreeNode_[0]>_>
       *)plVar2 != pTVar1) {
    lVar3 = *plVar2;
    *plVar2 = (longlong)pTVar1->Ptr;
    pTVar1->Ptr = (FTreeNode *)0x0;
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar3 + -8);
      this_00 = (void *)(lVar4 * 0x20 + lVar3);
      for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        this_00 = (void *)((longlong)this_00 + -0x20);
        ~FTreeNode(this_00);
      }
      operator_delete__((longlong *)(lVar3 + -8),*(longlong *)(lVar3 + -8) * 0x20 + 8);
    }
  }
  *(uint *)((longlong)this + 0x18) =
       *(uint *)((longlong)this + 0x18) ^
       (*(uint *)((longlong)this + 0x18) ^ param_1->NumChildNodesAndFlags) & 0x7fffffff;
  *(int *)((longlong)this + 0x1c) = param_1->CapacityChildNodes;
  param_1->NumChildNodesAndFlags = param_1->NumChildNodesAndFlags & 0x80000000;
  param_1->CapacityChildNodes = 0;
  return this;
}

// ConditionalCompactNode @ 141b3b340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
TDirectoryTree<int>::FTreeNode::ConditionalCompactNode(FString *param_1,FTreeNode *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FTreeNode *pFVar5;
  bool bVar6;
  uint uVar7;
  FTreeNode *this;
  FString *pFVar8;
  longlong lVar9;
  undefined1 auStack_8c8 [32];
  FScriptContainerElement *local_8a8;
  int iStack_8a0;
  undefined4 uStack_89c;
  FScriptContainerElement *local_898;
  int iStack_890;
  undefined4 uStack_88c;
  TStringView<wchar_t> local_888;
  TStringView<wchar_t> local_878;
  FTreeNode local_868;
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_8c8;
  if (-1 < (int)param_2->NumChildNodesAndFlags) {
    uVar7 = param_2->NumChildNodesAndFlags & 0x7fffffff;
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChildNodes > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x637,L"Invalid to call ConditionalCompactNode with an empty ChildNode.");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (1 < uVar7) {
      return;
    }
    local_848.Base = local_828;
    local_848.CurPos = local_828;
    local_848.bIsDynamic = false;
    local_848.bIsExternal = false;
    local_848.End = (wchar_t *)local_28;
    local_8a8 = (param_1->Data).AllocatorInstance.Data;
    iVar2 = (param_1->Data).ArrayNum;
    iStack_8a0 = iVar2 + -1;
    if (iVar2 == 0) {
      iStack_8a0 = 0;
    }
    local_888._12_4_ = uStack_89c;
    local_888.Size = iStack_8a0;
    local_888.DataPtr = (wchar_t *)local_8a8;
    FPathViews::AppendPath(&local_848,&local_888);
    pFVar8 = (param_2->RelPaths).Ptr;
    local_898 = (pFVar8->Data).AllocatorInstance.Data;
    iVar2 = (pFVar8->Data).ArrayNum;
    iStack_890 = iVar2 + -1;
    if (iVar2 == 0) {
      iStack_890 = 0;
    }
    local_878._12_4_ = uStack_88c;
    local_878.Size = iStack_890;
    local_878.DataPtr = (wchar_t *)local_898;
    FPathViews::AppendPath(&local_848,&local_878);
    ::FString::AssignRange
              (param_1,local_848.Base,
               (int)((longlong)local_848.CurPos - (longlong)local_848.Base >> 1));
    local_868.NumChildNodesAndFlags = 0;
    local_868.CapacityChildNodes = 0;
    local_868.RelPaths.Ptr = (FString *)0x0;
    local_868.ChildNodes.Ptr = (FTreeNode *)0x0;
    operator=(&local_868,(param_2->ChildNodes).Ptr);
    operator=(param_2,&local_868);
    if (local_868.ChildNodes.Ptr != (FTreeNode *)0x0) {
      lVar9 = *(longlong *)&local_868.ChildNodes.Ptr[-1].NumChildNodesAndFlags;
      pFVar5 = local_868.ChildNodes.Ptr + -1;
      this = local_868.ChildNodes.Ptr + lVar9;
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
        this = this + -1;
        ~FTreeNode(this);
      }
      operator_delete__(&pFVar5->NumChildNodesAndFlags,
                        *(longlong *)&pFVar5->NumChildNodesAndFlags * 0x20 + 8);
    }
    if (local_868.RelPaths.Ptr != (FString *)0x0) {
      lVar9 = *(longlong *)&local_868.RelPaths.Ptr[-1].Data.ArrayNum;
      piVar1 = &local_868.RelPaths.Ptr[-1].Data.ArrayNum;
      pFVar8 = local_868.RelPaths.Ptr + lVar9;
      while (lVar9 != 0) {
        pFVar3 = pFVar8[-1].Data.AllocatorInstance.Data;
        pFVar8 = pFVar8 + -1;
        lVar9 = lVar9 + -1;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
      }
      operator_delete__(piVar1,*(longlong *)piVar1 * 0x10 + 8);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
  }
  return;
}

// ContainsChildPaths @ 141b3be70

bool __thiscall
TDirectoryTree<int>::FTreeNode::ContainsChildPaths(FTreeNode *this,TStringView<wchar_t> *param_1)

{
  int iVar1;
  FTreeNode *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  FString *pFVar9;
  int iVar10;
  bool local_res10 [8];
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  if (param_1->Size == 0) {
    return (this->NumChildNodesAndFlags & 0x7fffffff) != 0;
  }
  local_a8.DataPtr = param_1->DataPtr;
  local_a8.Size = param_1->Size;
  local_a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar10 = 0;
  local_108.DataPtr = (wchar_t *)0x0;
  local_108.Size = 0;
  local_f8.DataPtr = (wchar_t *)0x0;
  local_f8.Size = 0;
  FPathViews::SplitFirstComponent(&local_a8,&local_108,&local_f8);
  local_98._12_4_ = local_108._12_4_;
  local_98.Size = local_108.Size;
  local_98.DataPtr = local_108.DataPtr;
  iVar7 = UE::DirectoryTree::FindInsertionIndex
                    (this->NumChildNodesAndFlags & 0x7fffffff,&this->RelPaths,&local_98,local_res10)
  ;
  if (local_res10[0] != false) {
    local_e8.DataPtr = (wchar_t *)0x0;
    pFVar9 = (this->RelPaths).Ptr + iVar7;
    local_e8.Size = 0;
    local_118.DataPtr = (wchar_t *)0x0;
    local_118._8_8_ = (ulonglong)(uint)local_118._12_4_ << 0x20;
    local_b8 = (pFVar9->Data).AllocatorInstance.Data;
    iVar1 = (pFVar9->Data).ArrayNum;
    pFVar2 = (this->ChildNodes).Ptr;
    iStack_b0 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_b0 = 0;
    }
    local_88._12_4_ = uStack_ac;
    local_88.Size = iStack_b0;
    local_88.DataPtr = (wchar_t *)local_b8;
    FPathViews::SplitFirstComponent(&local_88,&local_e8,&local_118);
    local_78._12_4_ = local_e8._12_4_;
    local_78.Size = local_e8.Size;
    local_68._12_4_ = local_108._12_4_;
    local_68.Size = local_108.Size;
    local_78.DataPtr = local_e8.DataPtr;
    local_68.DataPtr = local_108.DataPtr;
    bVar5 = FPathViews::Equals(&local_68,&local_78);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPathViews::Equals( FirstComponent, ExistingFirstComponent)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x482,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if (-1 < param_1->Size) {
      local_38.DataPtr._0_4_ = local_f8.DataPtr._0_4_;
      local_38.DataPtr._4_4_ = local_f8.DataPtr._4_4_;
      do {
        if (local_118.Size == 0) {
          local_38.Size = local_f8.Size;
          bVar5 = ContainsChildPaths(pFVar2 + iVar7,&local_38);
          return bVar5;
        }
        if (local_f8.Size == 0) {
          return true;
        }
        local_128.DataPtr = (wchar_t *)0x0;
        local_128.Size = 0;
        local_d8.DataPtr = (wchar_t *)0x0;
        local_d8.Size = 0;
        local_58.DataPtr._0_4_ = local_38.DataPtr._0_4_;
        local_58.DataPtr._4_4_ = local_38.DataPtr._4_4_;
        local_58.Size = local_f8.Size;
        FPathViews::SplitFirstComponent(&local_58,&local_128,&local_d8);
        if ((local_128.Size == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!NextFirstComponent.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x499,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        local_48.DataPtr = local_118.DataPtr;
        local_48.Size = local_118.Size;
        local_48._12_4_ = local_118._12_4_;
        local_138.DataPtr = (wchar_t *)0x0;
        local_138.Size = 0;
        local_c8.DataPtr = (wchar_t *)0x0;
        local_c8.Size = 0;
        FPathViews::SplitFirstComponent(&local_48,&local_138,&local_c8);
        if ((local_138.Size == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!NextExistingFirstComponent.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x49d,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar4 = local_128.Size;
        iVar1 = local_138.Size;
        if (local_128.Size != local_138.Size) {
          return false;
        }
        if (((local_128.Size != 0) && (local_138.Size != 0)) &&
           (iVar8 = FGenericPlatformStricmp::Strnicmp
                              (local_128.DataPtr,local_138.DataPtr,(longlong)local_138.Size),
           iVar8 != 0)) {
          return false;
        }
        if (iVar4 != iVar1) {
          return false;
        }
        local_f8.Size = local_d8.Size;
        iVar10 = iVar10 + 1;
        local_118.DataPtr = local_c8.DataPtr;
        local_118._8_8_ = CONCAT44(local_c8._12_4_,local_c8.Size);
        local_f8.DataPtr = local_d8.DataPtr;
        local_f8._12_4_ = local_d8._12_4_;
        local_38.DataPtr._0_4_ = local_d8.DataPtr._0_4_;
        local_38.DataPtr._4_4_ = local_d8.DataPtr._4_4_;
      } while (iVar10 <= param_1->Size);
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                       ,0x4ae,L"Infinite loop trying to split path %.*s into components.");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  return false;
}

// Find @ 141b40b80

int * __thiscall TDirectoryTree<int>::FTreeNode::Find(FTreeNode *this,TStringView<wchar_t> *param_1)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  FTreeNode *this_00;
  bool local_res8 [8];
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  if ((param_1->Size == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InRelPath.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x443,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    piVar5 = (int *)(*pcVar2)();
    return piVar5;
  }
  local_58.DataPtr = param_1->DataPtr;
  local_58.Size = param_1->Size;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_78.DataPtr = (wchar_t *)0x0;
  local_78.Size = 0;
  local_88.DataPtr = (wchar_t *)0x0;
  local_88.Size = 0;
  FPathViews::SplitFirstComponent(&local_58,&local_78,&local_88);
  local_48._12_4_ = local_78._12_4_;
  local_48.Size = local_78.Size;
  local_48.DataPtr = local_78.DataPtr;
  iVar4 = UE::DirectoryTree::FindInsertionIndex
                    (this->NumChildNodesAndFlags & 0x7fffffff,&this->RelPaths,&local_48,local_res8);
  if (local_res8[0] != false) {
    local_28.DataPtr = param_1->DataPtr;
    local_28.Size = param_1->Size;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    this_00 = (this->ChildNodes).Ptr + iVar4;
    pFVar1 = (this->RelPaths).Ptr;
    local_68 = pFVar1[iVar4].Data.AllocatorInstance.Data;
    iVar4 = pFVar1[iVar4].Data.ArrayNum;
    iStack_60 = iVar4 + -1;
    if (iVar4 == 0) {
      iStack_60 = 0;
    }
    local_38._12_4_ = uStack_5c;
    local_38.Size = iStack_60;
    local_38.DataPtr = (wchar_t *)local_68;
    bVar3 = FPathViews::TryMakeChildPathRelativeTo(&local_28,&local_38,&local_88);
    if (bVar3) {
      if (local_88.Size != 0) {
        local_18._12_4_ = local_88._12_4_;
        local_18.Size = local_88.Size;
        local_18.DataPtr = local_88.DataPtr;
        piVar5 = Find(this_00,&local_18);
        return piVar5;
      }
      if ((int)this_00->NumChildNodesAndFlags < 0) {
        return (int *)this_00;
      }
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}

// Find @ 141b40cf0

FMoveConstructOnly * __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FTreeNode::Find
          (void *this,TStringView<wchar_t> *param_1)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMoveConstructOnly *pFVar5;
  longlong lVar6;
  bool local_res8 [8];
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  if ((param_1->Size == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InRelPath.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x443,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FMoveConstructOnly *)(*pcVar2)();
    return pFVar5;
  }
  local_58.DataPtr = param_1->DataPtr;
  local_58.Size = param_1->Size;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_78.DataPtr = (wchar_t *)0x0;
  local_78.Size = 0;
  local_88.DataPtr = (wchar_t *)0x0;
  local_88.Size = 0;
  FPathViews::SplitFirstComponent(&local_58,&local_78,&local_88);
  local_48._12_4_ = local_78._12_4_;
  local_48.Size = local_78.Size;
  local_48.DataPtr = local_78.DataPtr;
  iVar4 = UE::DirectoryTree::FindInsertionIndex
                    (*(uint *)((longlong)this + 0x18) & 0x7fffffff,
                     (TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *)((longlong)this + 8),
                     &local_48,local_res8);
  if (local_res8[0] != false) {
    local_28.DataPtr = param_1->DataPtr;
    local_28.Size = param_1->Size;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    lVar6 = (longlong)iVar4;
    pFVar5 = (FMoveConstructOnly *)(*(longlong *)((longlong)this + 0x10) + lVar6 * 0x20);
    pFVar1 = ((TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *)((longlong)this + 8))->Ptr;
    local_68 = pFVar1[lVar6].Data.AllocatorInstance.Data;
    iVar4 = pFVar1[lVar6].Data.ArrayNum;
    iStack_60 = iVar4 + -1;
    if (iVar4 == 0) {
      iStack_60 = 0;
    }
    local_38._12_4_ = uStack_5c;
    local_38.Size = iStack_60;
    local_38.DataPtr = (wchar_t *)local_68;
    bVar3 = FPathViews::TryMakeChildPathRelativeTo(&local_28,&local_38,&local_88);
    if (bVar3) {
      if (local_88.Size != 0) {
        local_18._12_4_ = local_88._12_4_;
        local_18.Size = local_88.Size;
        local_18.DataPtr = local_88.DataPtr;
        pFVar5 = Find(pFVar5,&local_18);
        return pFVar5;
      }
      if (pFVar5[6].Value < 0) {
        return pFVar5;
      }
      return (FMoveConstructOnly *)0x0;
    }
  }
  return (FMoveConstructOnly *)0x0;
}

// FindOrAdd @ 141b42890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * __thiscall
TDirectoryTree<int>::FTreeNode::FindOrAdd
          (FTreeNode *this,TStringView<wchar_t> *param_1,bool *param_2)

{
  wchar_t *pwVar1;
  code *pcVar2;
  FTreeNode *pFVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  FString *pFVar9;
  void *pvVar10;
  FString *pFVar11;
  uint uVar12;
  FTreeNode *this_00;
  int iVar13;
  ulonglong uVar14;
  ulong64 uVar15;
  longlong lVar16;
  FTreeNode *this_01;
  FScriptContainerElement *pFVar17;
  undefined8 uVar18;
  undefined1 auStack_aa8 [32];
  int local_a88;
  wchar_t *local_a80;
  bool local_a78 [8];
  bool *local_a70;
  TStringView<wchar_t> local_a68;
  FString local_a58;
  FString local_a48;
  FString local_a38;
  FString *local_a28;
  TStringView<wchar_t> local_a18;
  TStringView<wchar_t> local_a08;
  TStringView<wchar_t> local_9f8;
  FScriptContainerElement *local_9e8;
  int iStack_9e0;
  undefined4 uStack_9dc;
  TStringView<wchar_t> local_9d8;
  TStringView<wchar_t> local_9c8;
  TStringView<wchar_t> local_9b8;
  TStringView<wchar_t> local_9a8;
  TStringView<wchar_t> local_998;
  TStringView<wchar_t> local_988;
  TStringView<wchar_t> local_978;
  TStringView<wchar_t> local_968;
  FString local_958;
  TStringView<wchar_t> local_948;
  TStringView<wchar_t> local_938;
  TStringView<wchar_t> local_928;
  TStringView<wchar_t> local_918;
  FString local_908;
  TStringView<wchar_t> local_8f8;
  FString local_8e8;
  TStringView<wchar_t> local_8d8;
  FTreeNode local_8c8;
  FTreeNode local_8a8;
  FTreeNode local_888;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_aa8;
  local_978.DataPtr = param_1->DataPtr;
  local_978.Size = param_1->Size;
  local_978._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_9d8.DataPtr = (wchar_t *)0x0;
  local_9d8.Size = 0;
  local_9f8.DataPtr = (wchar_t *)0x0;
  local_9f8.Size = 0;
  local_a70 = param_2;
  FPathViews::SplitFirstComponent(&local_978,&local_9d8,&local_9f8);
  if ((local_9d8.Size == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FirstComponent.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x399,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    piVar8 = (int *)(*pcVar2)();
    return piVar8;
  }
  local_968._12_4_ = local_9d8._12_4_;
  local_968.Size = local_9d8.Size;
  local_968.DataPtr = local_9d8.DataPtr;
  iVar6 = UE::DirectoryTree::FindInsertionIndex
                    (this->NumChildNodesAndFlags & 0x7fffffff,&this->RelPaths,&local_968,local_a78);
  if (local_a78[0] == false) {
    uVar18 = *(undefined8 *)&param_1->Size;
    pwVar1 = param_1->DataPtr;
    local_8a8.RelPaths.Ptr = (FString *)0x0;
    local_8a8.ChildNodes.Ptr = (FTreeNode *)0x0;
    *param_2 = false;
    local_8a8.Value.Pad[0] = '\0';
    local_8a8.Value.Pad[1] = '\0';
    local_8a8.Value.Pad[2] = '\0';
    local_8a8.Value.Pad[3] = '\0';
    local_8a8._4_4_ = 0;
    local_8a8.NumChildNodesAndFlags = 0;
    local_8a8.CapacityChildNodes = 0;
    local_a58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a58.Data.ArrayNum = 0;
    local_a58.Data.ArrayMax = 0;
    pFVar9 = ::FString::ConstructFromPtrSize(&local_958,pwVar1,(int)uVar18);
    if (&local_a58 != pFVar9) {
      local_a58.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a58.Data.ArrayNum = (pFVar9->Data).ArrayNum;
      local_a58.Data.ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
    if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.Data.AllocatorInstance.Data);
    }
    this = InsertChildNode(this,iVar6,&local_a58,&local_8a8);
    if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a58.Data.AllocatorInstance.Data);
    }
    ~FTreeNode(&local_8a8);
    uVar12 = this->NumChildNodesAndFlags;
    if ((int)uVar12 < 0) {
      uVar12 = uVar12 & 0x7fffffff;
    }
    this->NumChildNodesAndFlags = uVar12 | 0x80000000;
    *(undefined4 *)(this->Value).Pad = 0;
  }
  else {
    iVar13 = 0;
    local_9b8.DataPtr = (wchar_t *)0x0;
    local_9b8.Size = 0;
    local_a28 = (this->RelPaths).Ptr + iVar6;
    local_a68.DataPtr = (wchar_t *)0x0;
    local_a68._8_8_ = (ulonglong)(uint)local_a68._12_4_ << 0x20;
    this_01 = (this->ChildNodes).Ptr + iVar6;
    local_9e8 = (local_a28->Data).AllocatorInstance.Data;
    iVar6 = (local_a28->Data).ArrayNum;
    iStack_9e0 = iVar6 + -1;
    if (iVar6 == 0) {
      iStack_9e0 = 0;
    }
    local_948._12_4_ = uStack_9dc;
    local_948.Size = iStack_9e0;
    local_948.DataPtr = (wchar_t *)local_9e8;
    FPathViews::SplitFirstComponent(&local_948,&local_9b8,&local_a68);
    if ((local_9b8.Size == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ExistingFirstComponent.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x3ab,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      piVar8 = (int *)(*pcVar2)();
      return piVar8;
    }
    local_a88 = param_1->Size;
    uVar12 = 1;
    if (-1 < local_a88) {
      local_8d8.DataPtr._0_4_ = local_9f8.DataPtr._0_4_;
      local_8d8.DataPtr._4_4_ = local_9f8.DataPtr._4_4_;
      do {
        if (local_a68.Size == 0) {
          if (local_9f8.Size != 0) {
            local_8d8.Size = local_9f8.Size;
            piVar8 = FindOrAdd(this_01,&local_8d8,local_a70);
            return piVar8;
          }
          *local_a70 = SUB41(this_01->NumChildNodesAndFlags >> 0x1f,0);
          if ((int)this_01->NumChildNodesAndFlags < 0) {
            return (int *)this_01;
          }
          this_01->NumChildNodesAndFlags = this_01->NumChildNodesAndFlags | 0x80000000;
          *(undefined4 *)(this_01->Value).Pad = 0;
          return (int *)this_01;
        }
        if (local_9f8.Size == 0) {
          local_8c8.NumChildNodesAndFlags = 0;
          local_8c8.CapacityChildNodes = 0;
          local_8c8.RelPaths.Ptr = (FString *)0x0;
          local_8c8.ChildNodes.Ptr = (FTreeNode *)0x0;
          *local_a70 = false;
          operator=(&local_8c8,this_01);
          local_a38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a38.Data.ArrayNum = 0;
          local_a38.Data.ArrayMax = 0;
          pFVar9 = ::FString::ConstructFromPtrSize(&local_8e8,local_a68.DataPtr,local_a68.Size);
          if (&local_a38 != pFVar9) {
            local_a38.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
            (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a38.Data.ArrayNum = (pFVar9->Data).ArrayNum;
            local_a38.Data.ArrayMax = (pFVar9->Data).ArrayMax;
            (pFVar9->Data).ArrayNum = 0;
            (pFVar9->Data).ArrayMax = 0;
          }
          if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
          }
          Reset(this_01);
          uVar12 = this_01->NumChildNodesAndFlags;
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 & 0x7fffffff;
          }
          uVar18 = *(undefined8 *)&param_1->Size;
          pwVar1 = param_1->DataPtr;
          this_01->NumChildNodesAndFlags = uVar12 | 0x80000000;
          *(undefined4 *)(this_01->Value).Pad = 0;
          ::FString::AssignRange(local_a28,pwVar1,(int)uVar18);
          InsertChildNode(this_01,0,&local_a38,&local_8c8);
          if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a38.Data.AllocatorInstance.Data);
          }
          if (local_8c8.ChildNodes.Ptr != (FTreeNode *)0x0) {
            lVar16 = *(longlong *)&local_8c8.ChildNodes.Ptr[-1].NumChildNodesAndFlags;
            pFVar3 = local_8c8.ChildNodes.Ptr + -1;
            this_00 = local_8c8.ChildNodes.Ptr + lVar16;
            for (; lVar16 != 0; lVar16 = lVar16 + -1) {
              this_00 = this_00 + -1;
              ~FTreeNode(this_00);
            }
            operator_delete__(&pFVar3->NumChildNodesAndFlags,
                              *(longlong *)&pFVar3->NumChildNodesAndFlags * 0x20 + 8);
          }
          if (local_8c8.RelPaths.Ptr == (FString *)0x0) {
            return (int *)this_01;
          }
          lVar16 = *(longlong *)&local_8c8.RelPaths.Ptr[-1].Data.ArrayNum;
          piVar8 = &local_8c8.RelPaths.Ptr[-1].Data.ArrayNum;
          pFVar9 = local_8c8.RelPaths.Ptr + lVar16;
          while (lVar16 != 0) {
            pFVar17 = pFVar9[-1].Data.AllocatorInstance.Data;
            pFVar9 = pFVar9 + -1;
            lVar16 = lVar16 + -1;
            if (pFVar17 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar17);
            }
          }
          operator_delete__(piVar8,*(longlong *)piVar8 * 0x10 + 8);
          return (int *)this_01;
        }
        local_a08.DataPtr = (wchar_t *)0x0;
        local_a08.Size = 0;
        local_9a8.DataPtr = (wchar_t *)0x0;
        local_9a8.Size = 0;
        local_938.DataPtr._0_4_ = local_8d8.DataPtr._0_4_;
        local_938.DataPtr._4_4_ = local_8d8.DataPtr._4_4_;
        local_938.Size = local_9f8.Size;
        FPathViews::SplitFirstComponent(&local_938,&local_a08,&local_9a8);
        if ((local_a08.Size == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!NextFirstComponent.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x3d8,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          piVar8 = (int *)(*pcVar2)();
          return piVar8;
        }
        local_928.DataPtr = local_a68.DataPtr;
        local_928.Size = local_a68.Size;
        local_928._12_4_ = local_a68._12_4_;
        local_a18.DataPtr = (wchar_t *)0x0;
        local_a18.Size = 0;
        local_998.DataPtr = (wchar_t *)0x0;
        local_998.Size = 0;
        FPathViews::SplitFirstComponent(&local_928,&local_a18,&local_998);
        if ((local_a18.Size == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!NextExistingFirstComponent.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x3dc,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          piVar8 = (int *)(*pcVar2)();
          return piVar8;
        }
        iVar4 = local_a08.Size;
        iVar6 = local_a18.Size;
        if (((local_a08.Size != local_a18.Size) ||
            (((local_a08.Size != 0 && (local_a18.Size != 0)) &&
             (iVar7 = FGenericPlatformStricmp::Strnicmp
                                (local_a08.DataPtr,local_a18.DataPtr,(longlong)local_a18.Size),
             iVar7 != 0)))) || (iVar4 != iVar6)) {
          local_868.Base = local_848;
          local_868.CurPos = local_848;
          local_868.bIsDynamic = false;
          local_868.bIsExternal = false;
          local_868.End = (wchar_t *)local_48;
          local_9e8 = (local_a28->Data).AllocatorInstance.Data;
          iVar6 = (local_a28->Data).ArrayNum;
          iStack_9e0 = iVar6 + -1;
          if (iVar6 == 0) {
            iStack_9e0 = 0;
          }
          if (0 < (int)uVar12) {
            uVar18._4_4_ = uStack_9dc;
            uVar18._0_4_ = iStack_9e0;
            uVar14 = (ulonglong)uVar12;
            pFVar17 = local_9e8;
            do {
              local_9c8.DataPtr = (wchar_t *)0x0;
              local_9c8.Size = 0;
              local_988.DataPtr = (wchar_t *)0x0;
              local_988.Size = 0;
              local_918.DataPtr = (wchar_t *)pFVar17;
              local_918._8_8_ = uVar18;
              FPathViews::SplitFirstComponent(&local_918,&local_9c8,&local_988);
              if ((((int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1) != 0) &&
                  (local_868.CurPos[-1] != L'/')) && (local_868.CurPos[-1] != L'\\')) {
                if (local_868.End < local_868.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_868,1);
                }
                *local_868.CurPos = L'/';
                local_868.CurPos = local_868.CurPos + 1;
              }
              iVar6 = local_9c8.Size;
              pwVar1 = local_9c8.DataPtr;
              uVar15 = (ulong64)local_9c8.Size;
              if (local_868.End < local_868.CurPos + uVar15) {
                TStringBuilderBase<wchar_t>::Extend(&local_868,uVar15);
              }
              if (iVar6 != 0) {
                pvVar10 = FGenericPlatformString::Memcpy(local_868.CurPos,pwVar1,uVar15 * 2);
                local_868.CurPos = (wchar_t *)((longlong)pvVar10 + uVar15 * 2);
              }
              uVar18._4_4_ = local_988._12_4_;
              uVar18._0_4_ = local_988.Size;
              uVar14 = uVar14 - 1;
              pFVar17 = (FScriptContainerElement *)local_988.DataPtr;
            } while (uVar14 != 0);
          }
          pFVar9 = local_a28;
          local_888.NumChildNodesAndFlags = 0;
          local_888.CapacityChildNodes = 0;
          local_888.RelPaths.Ptr = (FString *)0x0;
          local_888.ChildNodes.Ptr = (FTreeNode *)0x0;
          operator=(&local_888,this_01);
          local_a48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a48.Data.ArrayNum = 0;
          local_a48.Data.ArrayMax = 0;
          pFVar11 = ::FString::ConstructFromPtrSize(&local_908,local_a68.DataPtr,local_a68.Size);
          if (&local_a48 != pFVar11) {
            local_a48.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
            (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a48.Data.ArrayNum = (pFVar11->Data).ArrayNum;
            local_a48.Data.ArrayMax = (pFVar11->Data).ArrayMax;
            (pFVar11->Data).ArrayNum = 0;
            (pFVar11->Data).ArrayMax = 0;
          }
          if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_908.Data.AllocatorInstance.Data);
          }
          Reset(this_01);
          ::FString::AssignRange
                    (pFVar9,local_868.Base,
                     (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1));
          InsertChildNode(this_01,0,&local_a48,&local_888);
          local_8f8._12_4_ = local_9f8._12_4_;
          local_8f8.Size = local_9f8.Size;
          local_8f8.DataPtr = local_9f8.DataPtr;
          piVar8 = FindOrAdd(this_01,&local_8f8,local_a70);
          if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a48.Data.AllocatorInstance.Data);
          }
          ~FTreeNode(&local_888);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
          return piVar8;
        }
        local_9f8.Size = local_9a8.Size;
        local_9f8._12_4_ = local_9a8._12_4_;
        uVar12 = uVar12 + 1;
        local_a68.DataPtr = local_998.DataPtr;
        local_a68._8_8_ = CONCAT44(local_998._12_4_,local_998.Size);
        iVar13 = iVar13 + 1;
        local_a88 = param_1->Size;
        local_9f8.DataPtr = local_9a8.DataPtr;
        local_8d8.DataPtr._0_4_ = local_9a8.DataPtr._0_4_;
        local_8d8.DataPtr._4_4_ = local_9a8.DataPtr._4_4_;
      } while (iVar13 <= local_a88);
    }
    local_a80 = param_1->DataPtr;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                       ,0x404,L"Infinite loop trying to split path %.*s into components.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      piVar8 = (int *)(*pcVar2)();
      return piVar8;
    }
  }
  return (int *)this;
}

// FindOrAdd @ 141b430c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMoveConstructOnly * __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FTreeNode::FindOrAdd
          (void *this,TStringView<wchar_t> *param_1,bool *param_2)

{
  int *piVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  FTreeNode *pFVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FMoveConstructOnly *pFVar9;
  FString *pFVar10;
  void *pvVar11;
  FString *pFVar12;
  uint uVar13;
  FTreeNode *this_00;
  ulonglong uVar14;
  ulong64 uVar15;
  longlong lVar16;
  int iVar17;
  FTreeNode *this_01;
  FScriptContainerElement *pFVar18;
  undefined8 uVar19;
  undefined1 auStack_aa8 [32];
  int local_a88;
  wchar_t *local_a80;
  bool local_a78 [8];
  bool *local_a70;
  TStringView<wchar_t> local_a68;
  FString local_a58;
  FString local_a48;
  FString local_a38;
  FString *local_a28;
  TStringView<wchar_t> local_a18;
  TStringView<wchar_t> local_a08;
  TStringView<wchar_t> local_9f8;
  FScriptContainerElement *local_9e8;
  int iStack_9e0;
  undefined4 uStack_9dc;
  TStringView<wchar_t> local_9d8;
  TStringView<wchar_t> local_9c8;
  TStringView<wchar_t> local_9b8;
  TStringView<wchar_t> local_9a8;
  TStringView<wchar_t> local_998;
  TStringView<wchar_t> local_988;
  TStringView<wchar_t> local_978;
  TStringView<wchar_t> local_968;
  FString local_958;
  TStringView<wchar_t> local_948;
  TStringView<wchar_t> local_938;
  TStringView<wchar_t> local_928;
  TStringView<wchar_t> local_918;
  FString local_908;
  TStringView<wchar_t> local_8f8;
  FString local_8e8;
  TStringView<wchar_t> local_8d8;
  FTreeNode local_8c8;
  FTreeNode local_8a8;
  FTreeNode local_888;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_aa8;
  local_978.DataPtr = param_1->DataPtr;
  local_978.Size = param_1->Size;
  local_978._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_9d8.DataPtr = (wchar_t *)0x0;
  local_9d8.Size = 0;
  local_9f8.DataPtr = (wchar_t *)0x0;
  local_9f8.Size = 0;
  local_a70 = param_2;
  FPathViews::SplitFirstComponent(&local_978,&local_9d8,&local_9f8);
  if ((local_9d8.Size == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FirstComponent.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x399,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FMoveConstructOnly *)(*pcVar3)();
    return pFVar9;
  }
  local_968._12_4_ = local_9d8._12_4_;
  local_968.Size = local_9d8.Size;
  local_968.DataPtr = local_9d8.DataPtr;
  iVar7 = UE::DirectoryTree::FindInsertionIndex
                    (*(uint *)((longlong)this + 0x18) & 0x7fffffff,
                     (TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *)((longlong)this + 8),
                     &local_968,local_a78);
  if (local_a78[0] == false) {
    uVar19 = *(undefined8 *)&param_1->Size;
    pwVar2 = param_1->DataPtr;
    local_8a8.RelPaths.Ptr = (FString *)0x0;
    local_8a8.ChildNodes.Ptr = (FTreeNode *)0x0;
    *param_2 = false;
    local_8a8.Value.Pad[0] = '\0';
    local_8a8.Value.Pad[1] = '\0';
    local_8a8.Value.Pad[2] = '\0';
    local_8a8.Value.Pad[3] = '\0';
    local_8a8._4_4_ = 0;
    local_8a8.NumChildNodesAndFlags = 0;
    local_8a8.CapacityChildNodes = 0;
    local_a58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a58.Data.ArrayNum = 0;
    local_a58.Data.ArrayMax = 0;
    pFVar10 = ::FString::ConstructFromPtrSize(&local_958,pwVar2,(int)uVar19);
    if (&local_a58 != pFVar10) {
      local_a58.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a58.Data.ArrayNum = (pFVar10->Data).ArrayNum;
      local_a58.Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.Data.AllocatorInstance.Data);
    }
    this = InsertChildNode(this,iVar7,&local_a58,&local_8a8);
    if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a58.Data.AllocatorInstance.Data);
    }
    ~FTreeNode(&local_8a8);
    uVar13 = ((FTreeNode *)this)->NumChildNodesAndFlags;
    if ((int)uVar13 < 0) {
      uVar13 = uVar13 & 0x7fffffff;
    }
    *(undefined4 *)(((FTreeNode *)this)->Value).Pad = 0x1b5;
    ((FTreeNode *)this)->NumChildNodesAndFlags = uVar13 | 0x80000000;
  }
  else {
    iVar17 = 0;
    local_9b8.DataPtr = (wchar_t *)0x0;
    local_a28 = (FString *)(*(longlong *)((longlong)this + 8) + (longlong)iVar7 * 0x10);
    this_01 = (FTreeNode *)(*(longlong *)((longlong)this + 0x10) + (longlong)iVar7 * 0x20);
    local_9b8.Size = 0;
    local_a68.DataPtr = (wchar_t *)0x0;
    local_a68._8_8_ = (ulonglong)(uint)local_a68._12_4_ << 0x20;
    local_9e8 = (local_a28->Data).AllocatorInstance.Data;
    iVar7 = (local_a28->Data).ArrayNum;
    iStack_9e0 = iVar7 + -1;
    if (iVar7 == 0) {
      iStack_9e0 = 0;
    }
    local_948._12_4_ = uStack_9dc;
    local_948.Size = iStack_9e0;
    local_948.DataPtr = (wchar_t *)local_9e8;
    FPathViews::SplitFirstComponent(&local_948,&local_9b8,&local_a68);
    if ((local_9b8.Size == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ExistingFirstComponent.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x3ab,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FMoveConstructOnly *)(*pcVar3)();
      return pFVar9;
    }
    local_a88 = param_1->Size;
    uVar13 = 1;
    if (-1 < local_a88) {
      local_8d8.DataPtr._0_4_ = local_9f8.DataPtr._0_4_;
      local_8d8.DataPtr._4_4_ = local_9f8.DataPtr._4_4_;
      do {
        if (local_a68.Size == 0) {
          if (local_9f8.Size != 0) {
            local_8d8.Size = local_9f8.Size;
            pFVar9 = FindOrAdd(this_01,&local_8d8,local_a70);
            return pFVar9;
          }
          *local_a70 = SUB41(this_01->NumChildNodesAndFlags >> 0x1f,0);
          if ((int)this_01->NumChildNodesAndFlags < 0) {
            return (FMoveConstructOnly *)this_01;
          }
          this_01->NumChildNodesAndFlags = this_01->NumChildNodesAndFlags | 0x80000000;
          *(undefined4 *)(this_01->Value).Pad = 0x1b5;
          return (FMoveConstructOnly *)this_01;
        }
        if (local_9f8.Size == 0) {
          local_8c8.NumChildNodesAndFlags = 0;
          local_8c8.CapacityChildNodes = 0;
          local_8c8.RelPaths.Ptr = (FString *)0x0;
          local_8c8.ChildNodes.Ptr = (FTreeNode *)0x0;
          *local_a70 = false;
          operator=(&local_8c8,this_01);
          local_a38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a38.Data.ArrayNum = 0;
          local_a38.Data.ArrayMax = 0;
          pFVar10 = ::FString::ConstructFromPtrSize(&local_8e8,local_a68.DataPtr,local_a68.Size);
          if (&local_a38 != pFVar10) {
            local_a38.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
            (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a38.Data.ArrayNum = (pFVar10->Data).ArrayNum;
            local_a38.Data.ArrayMax = (pFVar10->Data).ArrayMax;
            (pFVar10->Data).ArrayNum = 0;
            (pFVar10->Data).ArrayMax = 0;
          }
          if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
          }
          Reset(this_01);
          uVar13 = this_01->NumChildNodesAndFlags;
          if ((int)uVar13 < 0) {
            uVar13 = uVar13 & 0x7fffffff;
          }
          uVar19 = *(undefined8 *)&param_1->Size;
          pwVar2 = param_1->DataPtr;
          this_01->NumChildNodesAndFlags = uVar13 | 0x80000000;
          *(undefined4 *)(this_01->Value).Pad = 0x1b5;
          ::FString::AssignRange(local_a28,pwVar2,(int)uVar19);
          InsertChildNode(this_01,0,&local_a38,&local_8c8);
          if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a38.Data.AllocatorInstance.Data);
          }
          if (local_8c8.ChildNodes.Ptr != (FTreeNode *)0x0) {
            lVar16 = *(longlong *)&local_8c8.ChildNodes.Ptr[-1].NumChildNodesAndFlags;
            pFVar4 = local_8c8.ChildNodes.Ptr + -1;
            this_00 = local_8c8.ChildNodes.Ptr + lVar16;
            for (; lVar16 != 0; lVar16 = lVar16 + -1) {
              this_00 = this_00 + -1;
              ~FTreeNode(this_00);
            }
            operator_delete__(&pFVar4->NumChildNodesAndFlags,
                              *(longlong *)&pFVar4->NumChildNodesAndFlags * 0x20 + 8);
          }
          if (local_8c8.RelPaths.Ptr == (FString *)0x0) {
            return (FMoveConstructOnly *)this_01;
          }
          lVar16 = *(longlong *)&local_8c8.RelPaths.Ptr[-1].Data.ArrayNum;
          piVar1 = &local_8c8.RelPaths.Ptr[-1].Data.ArrayNum;
          pFVar10 = local_8c8.RelPaths.Ptr + lVar16;
          while (lVar16 != 0) {
            pFVar18 = pFVar10[-1].Data.AllocatorInstance.Data;
            pFVar10 = pFVar10 + -1;
            lVar16 = lVar16 + -1;
            if (pFVar18 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar18);
            }
          }
          operator_delete__(piVar1,*(longlong *)piVar1 * 0x10 + 8);
          return (FMoveConstructOnly *)this_01;
        }
        local_a08.DataPtr = (wchar_t *)0x0;
        local_a08.Size = 0;
        local_9a8.DataPtr = (wchar_t *)0x0;
        local_9a8.Size = 0;
        local_938.DataPtr._0_4_ = local_8d8.DataPtr._0_4_;
        local_938.DataPtr._4_4_ = local_8d8.DataPtr._4_4_;
        local_938.Size = local_9f8.Size;
        FPathViews::SplitFirstComponent(&local_938,&local_a08,&local_9a8);
        if ((local_a08.Size == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!NextFirstComponent.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x3d8,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FMoveConstructOnly *)(*pcVar3)();
          return pFVar9;
        }
        local_928.DataPtr = local_a68.DataPtr;
        local_928.Size = local_a68.Size;
        local_928._12_4_ = local_a68._12_4_;
        local_a18.DataPtr = (wchar_t *)0x0;
        local_a18.Size = 0;
        local_998.DataPtr = (wchar_t *)0x0;
        local_998.Size = 0;
        FPathViews::SplitFirstComponent(&local_928,&local_a18,&local_998);
        if ((local_a18.Size == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!NextExistingFirstComponent.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x3dc,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FMoveConstructOnly *)(*pcVar3)();
          return pFVar9;
        }
        iVar5 = local_a08.Size;
        iVar7 = local_a18.Size;
        if (((local_a08.Size != local_a18.Size) ||
            (((local_a08.Size != 0 && (local_a18.Size != 0)) &&
             (iVar8 = FGenericPlatformStricmp::Strnicmp
                                (local_a08.DataPtr,local_a18.DataPtr,(longlong)local_a18.Size),
             iVar8 != 0)))) || (iVar5 != iVar7)) {
          pFVar10 = local_a28;
          local_868.Base = local_848;
          local_868.CurPos = local_848;
          local_868.bIsDynamic = false;
          local_868.bIsExternal = false;
          local_868.End = (wchar_t *)local_48;
          local_9e8 = (local_a28->Data).AllocatorInstance.Data;
          iVar7 = (local_a28->Data).ArrayNum;
          iStack_9e0 = iVar7 + -1;
          if (iVar7 == 0) {
            iStack_9e0 = 0;
          }
          if (0 < (int)uVar13) {
            uVar19._4_4_ = uStack_9dc;
            uVar19._0_4_ = iStack_9e0;
            uVar14 = (ulonglong)uVar13;
            pFVar18 = local_9e8;
            do {
              local_9c8.DataPtr = (wchar_t *)0x0;
              local_9c8.Size = 0;
              local_988.DataPtr = (wchar_t *)0x0;
              local_988.Size = 0;
              local_918.DataPtr = (wchar_t *)pFVar18;
              local_918._8_8_ = uVar19;
              FPathViews::SplitFirstComponent(&local_918,&local_9c8,&local_988);
              if ((((int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1) != 0) &&
                  (local_868.CurPos[-1] != L'/')) && (local_868.CurPos[-1] != L'\\')) {
                if (local_868.End < local_868.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_868,1);
                }
                *local_868.CurPos = L'/';
                local_868.CurPos = local_868.CurPos + 1;
              }
              iVar7 = local_9c8.Size;
              pwVar2 = local_9c8.DataPtr;
              uVar15 = (ulong64)local_9c8.Size;
              if (local_868.End < local_868.CurPos + uVar15) {
                TStringBuilderBase<wchar_t>::Extend(&local_868,uVar15);
              }
              if (iVar7 != 0) {
                pvVar11 = FGenericPlatformString::Memcpy(local_868.CurPos,pwVar2,uVar15 * 2);
                local_868.CurPos = (wchar_t *)((longlong)pvVar11 + uVar15 * 2);
              }
              uVar19._4_4_ = local_988._12_4_;
              uVar19._0_4_ = local_988.Size;
              uVar14 = uVar14 - 1;
              pFVar18 = (FScriptContainerElement *)local_988.DataPtr;
            } while (uVar14 != 0);
          }
          local_888.NumChildNodesAndFlags = 0;
          local_888.CapacityChildNodes = 0;
          local_888.RelPaths.Ptr = (FString *)0x0;
          local_888.ChildNodes.Ptr = (FTreeNode *)0x0;
          operator=(&local_888,this_01);
          local_a48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a48.Data.ArrayNum = 0;
          local_a48.Data.ArrayMax = 0;
          pFVar12 = ::FString::ConstructFromPtrSize(&local_908,local_a68.DataPtr,local_a68.Size);
          if (&local_a48 != pFVar12) {
            local_a48.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
            (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a48.Data.ArrayNum = (pFVar12->Data).ArrayNum;
            local_a48.Data.ArrayMax = (pFVar12->Data).ArrayMax;
            (pFVar12->Data).ArrayNum = 0;
            (pFVar12->Data).ArrayMax = 0;
          }
          if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_908.Data.AllocatorInstance.Data);
          }
          Reset(this_01);
          ::FString::AssignRange
                    (pFVar10,local_868.Base,
                     (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1));
          InsertChildNode(this_01,0,&local_a48,&local_888);
          local_8f8._12_4_ = local_9f8._12_4_;
          local_8f8.Size = local_9f8.Size;
          local_8f8.DataPtr = local_9f8.DataPtr;
          pFVar9 = FindOrAdd(this_01,&local_8f8,local_a70);
          if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a48.Data.AllocatorInstance.Data);
          }
          ~FTreeNode(&local_888);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
          return pFVar9;
        }
        local_9f8.Size = local_9a8.Size;
        local_9f8._12_4_ = local_9a8._12_4_;
        uVar13 = uVar13 + 1;
        local_a68.DataPtr = local_998.DataPtr;
        local_a68._8_8_ = CONCAT44(local_998._12_4_,local_998.Size);
        iVar17 = iVar17 + 1;
        local_a88 = param_1->Size;
        local_9f8.DataPtr = local_9a8.DataPtr;
        local_8d8.DataPtr._0_4_ = local_9a8.DataPtr._0_4_;
        local_8d8.DataPtr._4_4_ = local_9a8.DataPtr._4_4_;
      } while (iVar17 <= local_a88);
    }
    local_a80 = param_1->DataPtr;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                       ,0x404,L"Infinite loop trying to split path %.*s into components.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FMoveConstructOnly *)(*pcVar3)();
      return pFVar9;
    }
  }
  return this;
}

// InsertChildNode @ 141b44f80

FTreeNode * __thiscall
TDirectoryTree<int>::FTreeNode::InsertChildNode
          (FTreeNode *this,int param_1,FString *param_2,FTreeNode *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FTreeNode *pFVar8;
  uint uVar9;
  undefined8 *puVar10;
  FString *pFVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  uVar9 = this->NumChildNodesAndFlags & 0x7fffffff;
  if (((param_1 < 0) || ((int)uVar9 < param_1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= InsertionIndex && InsertionIndex <= NumChildNodes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x5fd,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FTreeNode *)(*pcVar5)();
    return pFVar8;
  }
  uVar1 = uVar9 + 1;
  if (((int)uVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((uint32)(NumChildNodes + 1)) & FlagsMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x5fe,L"Overflow"), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FTreeNode *)(*pcVar5)();
    return pFVar8;
  }
  uVar3 = this->CapacityChildNodes;
  if (uVar9 == uVar3) {
    if (uVar3 == 0) {
      iVar7 = 1;
    }
    else if ((int)uVar3 < 8) {
      iVar7 = uVar3 * 2;
    }
    else {
      iVar7 = (int)(uVar3 * 3) / 2;
      if ((iVar7 <= (int)uVar3) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewCapacity > CapacityChildNodes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                             ,0x60e,L"Overflow"), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FTreeNode *)(*pcVar5)();
        return pFVar8;
      }
    }
    Realloc(this,iVar7);
    if ((this->CapacityChildNodes <= (int)uVar9) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumChildNodes < CapacityChildNodes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x611,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FTreeNode *)(*pcVar5)();
      return pFVar8;
    }
  }
  if (param_1 < (int)uVar9) {
    lVar15 = (ulonglong)uVar9 << 5;
    lVar14 = (ulonglong)uVar9 << 4;
    lVar12 = (ulonglong)uVar9 << 5;
    uVar13 = (ulonglong)(uVar9 - param_1);
    do {
      puVar10 = (undefined8 *)
                ((longlong)&(((this->RelPaths).Ptr)->Data).AllocatorInstance.Data + lVar14);
      puVar2 = puVar10 + -2;
      if (puVar10 != puVar2) {
        if ((void *)*puVar10 != (void *)0x0) {
          FMemory::Free((void *)*puVar10);
        }
        *puVar10 = *puVar2;
        *puVar2 = 0;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar10 + -1);
        *(undefined4 *)((longlong)puVar10 + 0xc) = *(undefined4 *)((longlong)puVar10 + -4);
        puVar10[-1] = 0;
      }
      pFVar8 = (this->ChildNodes).Ptr;
      operator=((FTreeNode *)((pFVar8->Value).Pad + lVar15),
                (FTreeNode *)(pFVar8[-1].Value.Pad + lVar12));
      lVar12 = lVar12 + -0x20;
      lVar14 = lVar14 + -0x10;
      lVar15 = lVar15 + -0x20;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  pFVar11 = (this->RelPaths).Ptr + param_1;
  if (pFVar11 != param_2) {
    pFVar4 = (pFVar11->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar11->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar11->Data).ArrayNum = (param_2->Data).ArrayNum;
    (pFVar11->Data).ArrayMax = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
  }
  operator=((this->ChildNodes).Ptr + param_1,param_3);
  if (((int)uVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= InNumChildNodes && (InNumChildNodes & FlagsMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x353,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FTreeNode *)(*pcVar5)();
    return pFVar8;
  }
  this->NumChildNodesAndFlags = this->NumChildNodesAndFlags & 0x80000000 | uVar1;
  return (this->ChildNodes).Ptr + param_1;
}

// InsertChildNode @ 141b45200

FTreeNode * __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FTreeNode::
InsertChildNode(void *this,int param_1,FString *param_2,FTreeNode *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FTreeNode *pFVar8;
  uint uVar9;
  undefined8 *puVar10;
  FString *pFVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  uVar9 = *(uint *)((longlong)this + 0x18) & 0x7fffffff;
  if (((param_1 < 0) || ((int)uVar9 < param_1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= InsertionIndex && InsertionIndex <= NumChildNodes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x5fd,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FTreeNode *)(*pcVar5)();
    return pFVar8;
  }
  uVar1 = uVar9 + 1;
  if (((int)uVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((uint32)(NumChildNodes + 1)) & FlagsMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x5fe,L"Overflow"), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FTreeNode *)(*pcVar5)();
    return pFVar8;
  }
  uVar3 = *(uint *)((longlong)this + 0x1c);
  if (uVar9 == uVar3) {
    if (uVar3 == 0) {
      iVar7 = 1;
    }
    else if ((int)uVar3 < 8) {
      iVar7 = uVar3 * 2;
    }
    else {
      iVar7 = (int)(uVar3 * 3) / 2;
      if ((iVar7 <= (int)uVar3) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewCapacity > CapacityChildNodes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                             ,0x60e,L"Overflow"), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FTreeNode *)(*pcVar5)();
        return pFVar8;
      }
    }
    Realloc(this,iVar7);
    if ((*(int *)((longlong)this + 0x1c) <= (int)uVar9) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumChildNodes < CapacityChildNodes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x611,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FTreeNode *)(*pcVar5)();
      return pFVar8;
    }
  }
  if (param_1 < (int)uVar9) {
    lVar15 = (ulonglong)uVar9 << 5;
    lVar14 = (ulonglong)uVar9 << 4;
    lVar12 = (ulonglong)uVar9 << 5;
    uVar13 = (ulonglong)(uVar9 - param_1);
    do {
      puVar10 = (undefined8 *)(*(longlong *)((longlong)this + 8) + lVar14);
      puVar2 = puVar10 + -2;
      if (puVar10 != puVar2) {
        if ((void *)*puVar10 != (void *)0x0) {
          FMemory::Free((void *)*puVar10);
        }
        *puVar10 = *puVar2;
        *puVar2 = 0;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar10 + -1);
        *(undefined4 *)((longlong)puVar10 + 0xc) = *(undefined4 *)((longlong)puVar10 + -4);
        puVar10[-1] = 0;
      }
      operator=((void *)(lVar15 + *(longlong *)((longlong)this + 0x10)),
                (FTreeNode *)(*(longlong *)((longlong)this + 0x10) + -0x20 + lVar12));
      lVar12 = lVar12 + -0x20;
      lVar14 = lVar14 + -0x10;
      lVar15 = lVar15 + -0x20;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  pFVar11 = (FString *)((longlong)param_1 * 0x10 + *(longlong *)((longlong)this + 8));
  if (pFVar11 != param_2) {
    pFVar4 = (pFVar11->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar11->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar11->Data).ArrayNum = (param_2->Data).ArrayNum;
    (pFVar11->Data).ArrayMax = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
  }
  lVar12 = (longlong)param_1 * 0x20;
  operator=((void *)(*(longlong *)((longlong)this + 0x10) + lVar12),param_3);
  if (((int)uVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= InNumChildNodes && (InNumChildNodes & FlagsMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x353,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FTreeNode *)(*pcVar5)();
    return pFVar8;
  }
  *(uint *)((longlong)this + 0x18) = *(uint *)((longlong)this + 0x18) & 0x80000000 | uVar1;
  return (FTreeNode *)(*(longlong *)((longlong)this + 0x10) + lVar12);
}

// Realloc @ 141b49080

void __thiscall TDirectoryTree<int>::FTreeNode::Realloc(FTreeNode *this,int param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  bool bVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  ulonglong *puVar8;
  FTreeNode *pFVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar13;
  FTreeNode *pFVar14;
  longlong lVar15;
  FTreeNode *pFVar16;
  FTreeNode *pFVar12;
  
  uVar11 = (ulonglong)param_1;
  if (this->CapacityChildNodes != param_1) {
    uVar13 = this->NumChildNodesAndFlags & 0x7fffffff;
    if ((param_1 < (int)uVar13) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumChildNodes <= NewCapacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x64c,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (0 < param_1) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar11;
      uVar6 = SUB168(ZEXT816(0x10) * auVar2,0);
      if (SUB168(ZEXT816(0x10) * auVar2,8) != 0) {
        uVar6 = 0xffffffffffffffff;
      }
      uVar7 = uVar6 + 8;
      if (0xfffffffffffffff7 < uVar6) {
        uVar7 = 0xffffffffffffffff;
      }
      puVar8 = operator_new__(uVar7);
      iVar10 = 0;
      pFVar12 = (FTreeNode *)0x0;
      pFVar16 = pFVar12;
      if (puVar8 != (ulonglong *)0x0) {
        pFVar16 = (FTreeNode *)(puVar8 + 1);
        *puVar8 = uVar11;
        pFVar9 = pFVar16;
        uVar6 = uVar11;
        do {
          *(undefined8 *)pFVar9 = 0;
          (pFVar9->RelPaths).Ptr = (FString *)0x0;
          pFVar9 = (FTreeNode *)&pFVar9->ChildNodes;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar11;
      uVar6 = SUB168(ZEXT816(0x20) * auVar3,0);
      if (SUB168(ZEXT816(0x20) * auVar3,8) != 0) {
        uVar6 = 0xffffffffffffffff;
      }
      uVar7 = uVar6 + 8;
      if (0xfffffffffffffff7 < uVar6) {
        uVar7 = 0xffffffffffffffff;
      }
      puVar8 = operator_new__(uVar7);
      if (puVar8 != (ulonglong *)0x0) {
        pFVar12 = (FTreeNode *)(puVar8 + 1);
        *puVar8 = uVar11;
        puVar8 = puVar8 + 3;
        do {
          puVar8[-1] = 0;
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = puVar8 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      uVar11 = (ulonglong)uVar13;
      pFVar9 = pFVar16;
      if (uVar13 != 0) {
        do {
          pFVar14 = (FTreeNode *)
                    (((longlong)(this->RelPaths).Ptr - (longlong)pFVar16) + (longlong)pFVar9);
          if (pFVar9 != pFVar14) {
            if (*(void **)pFVar9 != (void *)0x0) {
              FMemory::Free(*(void **)pFVar9);
            }
            uVar4 = *(undefined4 *)&pFVar14->field_0x4;
            pFVar9->Value = (TTypeCompatibleBytes<int>)(pFVar14->Value).Pad[0];
            *(undefined4 *)&pFVar9->field_0x4 = uVar4;
            *(undefined8 *)pFVar14 = 0;
            *(undefined4 *)&(pFVar9->RelPaths).Ptr = *(undefined4 *)&(pFVar14->RelPaths).Ptr;
            *(undefined4 *)((longlong)&(pFVar9->RelPaths).Ptr + 4) =
                 *(undefined4 *)((longlong)&(pFVar14->RelPaths).Ptr + 4);
            (pFVar14->RelPaths).Ptr = (FString *)0x0;
          }
          operator=(pFVar12 + iVar10,(this->ChildNodes).Ptr + iVar10);
          iVar10 = iVar10 + 1;
          uVar11 = uVar11 - 1;
          pFVar9 = (FTreeNode *)&pFVar9->ChildNodes;
        } while (uVar11 != 0);
      }
      pFVar9 = (this->ChildNodes).Ptr;
      (this->ChildNodes).Ptr = pFVar12;
      if (pFVar9 != (FTreeNode *)0x0) {
        lVar15 = *(longlong *)&pFVar9[-1].NumChildNodesAndFlags;
        pFVar12 = pFVar9 + lVar15;
        for (; lVar15 != 0; lVar15 = lVar15 + -1) {
          pFVar12 = pFVar12 + -1;
          ~FTreeNode(pFVar12);
        }
        operator_delete__(&pFVar9[-1].NumChildNodesAndFlags,
                          *(longlong *)&pFVar9[-1].NumChildNodesAndFlags * 0x20 + 8);
      }
      TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset<FString>
                (&this->RelPaths,(FString *)pFVar16);
      this->CapacityChildNodes = param_1;
      return;
    }
    TUniquePtr<TDirectoryTree<int>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<int>::FTreeNode_[0]>_>
    ::Reset(&this->ChildNodes,(void *)0x0);
    TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset(&this->RelPaths,(void *)0x0);
    this->CapacityChildNodes = param_1;
  }
  return;
}

// Realloc @ 141b492c0

void __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FTreeNode::Realloc
          (void *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  ulonglong *puVar9;
  FString *pFVar10;
  int iVar11;
  ulonglong uVar12;
  void *this_00;
  uint uVar14;
  FString *pFVar15;
  longlong lVar16;
  FString *pFVar17;
  FString *pFVar13;
  
  uVar12 = (ulonglong)param_1;
  if (*(int *)((longlong)this + 0x1c) != param_1) {
    uVar14 = *(uint *)((longlong)this + 0x18) & 0x7fffffff;
    if ((param_1 < (int)uVar14) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumChildNodes <= NewCapacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x64c,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (0 < param_1) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar12;
      uVar7 = SUB168(ZEXT816(0x10) * auVar4,0);
      if (SUB168(ZEXT816(0x10) * auVar4,8) != 0) {
        uVar7 = 0xffffffffffffffff;
      }
      uVar8 = uVar7 + 8;
      if (0xfffffffffffffff7 < uVar7) {
        uVar8 = 0xffffffffffffffff;
      }
      puVar9 = operator_new__(uVar8);
      iVar11 = 0;
      pFVar13 = (FString *)0x0;
      pFVar17 = pFVar13;
      if (puVar9 != (ulonglong *)0x0) {
        pFVar17 = (FString *)(puVar9 + 1);
        *puVar9 = uVar12;
        pFVar10 = pFVar17;
        uVar7 = uVar12;
        do {
          (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar10->Data).ArrayNum = 0;
          (pFVar10->Data).ArrayMax = 0;
          pFVar10 = pFVar10 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar12;
      uVar7 = SUB168(ZEXT816(0x20) * auVar5,0);
      if (SUB168(ZEXT816(0x20) * auVar5,8) != 0) {
        uVar7 = 0xffffffffffffffff;
      }
      uVar8 = uVar7 + 8;
      if (0xfffffffffffffff7 < uVar7) {
        uVar8 = 0xffffffffffffffff;
      }
      puVar9 = operator_new__(uVar8);
      if (puVar9 != (ulonglong *)0x0) {
        pFVar13 = (FString *)(puVar9 + 1);
        *puVar9 = uVar12;
        puVar9 = puVar9 + 3;
        do {
          puVar9[-1] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9 = puVar9 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      uVar12 = (ulonglong)uVar14;
      pFVar10 = pFVar17;
      if (uVar14 != 0) {
        do {
          pFVar15 = (FString *)
                    ((*(longlong *)((longlong)this + 8) - (longlong)pFVar17) + (longlong)pFVar10);
          if (pFVar10 != pFVar15) {
            pFVar1 = (pFVar10->Data).AllocatorInstance.Data;
            if (pFVar1 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar1);
            }
            (pFVar10->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
            (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar10->Data).ArrayNum = (pFVar15->Data).ArrayNum;
            (pFVar10->Data).ArrayMax = (pFVar15->Data).ArrayMax;
            (pFVar15->Data).ArrayNum = 0;
            (pFVar15->Data).ArrayMax = 0;
          }
          operator=(pFVar13 + (longlong)iVar11 * 2,
                    (FTreeNode *)(*(longlong *)((longlong)this + 0x10) + (longlong)iVar11 * 0x20));
          iVar11 = iVar11 + 1;
          uVar12 = uVar12 - 1;
          pFVar10 = pFVar10 + 1;
        } while (uVar12 != 0);
      }
      lVar2 = *(longlong *)((longlong)this + 0x10);
      *(FString **)((longlong)this + 0x10) = pFVar13;
      if (lVar2 != 0) {
        lVar16 = *(longlong *)(lVar2 + -8);
        this_00 = (void *)(lVar16 * 0x20 + lVar2);
        for (; lVar16 != 0; lVar16 = lVar16 + -1) {
          this_00 = (void *)((longlong)this_00 + -0x20);
          ~FTreeNode(this_00);
        }
        operator_delete__((void *)(lVar2 + -8),*(longlong *)(lVar2 + -8) * 0x20 + 8);
      }
      TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset<FString>
                ((TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *)((longlong)this + 8),
                 pFVar17);
      *(int *)((longlong)this + 0x1c) = param_1;
      return;
    }
    TUniquePtr<TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FTreeNode_[0]>_>
    ::Reset((void *)((longlong)this + 0x10),(void *)0x0);
    TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset
              ((TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *)((longlong)this + 8),
               (void *)0x0);
    *(int *)((longlong)this + 0x1c) = param_1;
  }
  return;
}

// Remove @ 141b4ac70

void __thiscall
TDirectoryTree<int>::FTreeNode::Remove(FTreeNode *this,TStringView<wchar_t> *param_1,bool *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FTreeNode *this_00;
  FString *pFVar6;
  bool local_res8 [8];
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  if ((param_1->Size == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InRelPath.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x40b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_78.DataPtr = param_1->DataPtr;
  local_78.Size = param_1->Size;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_98.DataPtr = (wchar_t *)0x0;
  local_98.Size = 0;
  local_a8.DataPtr = (wchar_t *)0x0;
  local_a8.Size = 0;
  FPathViews::SplitFirstComponent(&local_78,&local_98,&local_a8);
  local_68._12_4_ = local_98._12_4_;
  local_68.Size = local_98.Size;
  local_68.DataPtr = local_98.DataPtr;
  iVar4 = UE::DirectoryTree::FindInsertionIndex
                    (this->NumChildNodesAndFlags & 0x7fffffff,&this->RelPaths,&local_68,local_res8);
  if (local_res8[0] != false) {
    local_48.DataPtr = param_1->DataPtr;
    local_48.Size = param_1->Size;
    local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pFVar6 = (this->RelPaths).Ptr + iVar4;
    this_00 = (this->ChildNodes).Ptr + iVar4;
    local_88 = (pFVar6->Data).AllocatorInstance.Data;
    iVar1 = (pFVar6->Data).ArrayNum;
    iStack_80 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_80 = 0;
    }
    local_58._12_4_ = uStack_7c;
    local_58.Size = iStack_80;
    local_58.DataPtr = (wchar_t *)local_88;
    bVar3 = FPathViews::TryMakeChildPathRelativeTo(&local_48,&local_58,&local_a8);
    if (bVar3) {
      if (local_a8.Size != 0) {
        local_38._12_4_ = local_a8._12_4_;
        local_38.Size = local_a8.Size;
        local_38.DataPtr = local_a8.DataPtr;
        Remove(this_00,&local_38,param_2);
        if (*param_2 == false) {
          return;
        }
        ConditionalCompactNode(pFVar6,this_00);
        return;
      }
      *param_2 = SUB41(this_00->NumChildNodesAndFlags >> 0x1f,0);
      uVar5 = this_00->NumChildNodesAndFlags & 0x7fffffff;
      if (uVar5 == 0) {
        RemoveChildNodeAt(this,iVar4);
        return;
      }
      if (-1 < (int)this_00->NumChildNodesAndFlags) {
        return;
      }
      this_00->NumChildNodesAndFlags = uVar5;
      ConditionalCompactNode(pFVar6,this_00);
      return;
    }
  }
  *param_2 = false;
  return;
}

// RemoveChildNodeAt @ 141b4bef0

void __thiscall TDirectoryTree<int>::FTreeNode::RemoveChildNodeAt(FTreeNode *this,int param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  FTreeNode *this_00;
  undefined8 *puVar5;
  longlong lVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar9 = this->NumChildNodesAndFlags & 0x7fffffff;
  if (((param_1 < 0) || ((int)uVar9 <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= RemoveIndex && RemoveIndex < NumChildNodes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x623,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = uVar9 - 1;
  if (param_1 < (int)uVar1) {
    uVar8 = (ulonglong)(uVar1 - param_1);
    lVar6 = (longlong)param_1 << 4;
    lVar10 = (longlong)param_1 << 5;
    do {
      puVar5 = (undefined8 *)
               ((longlong)&(((this->RelPaths).Ptr)->Data).AllocatorInstance.Data + lVar6);
      puVar2 = puVar5 + 2;
      if (puVar5 != puVar2) {
        if ((void *)*puVar5 != (void *)0x0) {
          FMemory::Free((void *)*puVar5);
        }
        *puVar5 = *puVar2;
        *puVar2 = 0;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar5 + 3);
        *(undefined4 *)((longlong)puVar5 + 0xc) = *(undefined4 *)((longlong)puVar5 + 0x1c);
        puVar5[3] = 0;
      }
      this_00 = (FTreeNode *)((((this->ChildNodes).Ptr)->Value).Pad + lVar10);
      operator=(this_00,this_00 + 1);
      lVar10 = lVar10 + 0x20;
      lVar6 = lVar6 + 0x10;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  puVar7 = &this->NumChildNodesAndFlags;
  ::FString::Empty((this->RelPaths).Ptr + ((ulonglong)uVar9 - 1));
  Reset((this->ChildNodes).Ptr + ((ulonglong)uVar9 - 1));
  if (((int)uVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= InNumChildNodes && (InNumChildNodes & FlagsMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x353,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *puVar7 = *puVar7 & 0x80000000;
  *puVar7 = *puVar7 | uVar1;
  return;
}

// Reset @ 141b4cad0

void __thiscall TDirectoryTree<int>::FTreeNode::Reset(FTreeNode *this)

{
  FTreeNode *pFVar1;
  FTreeNode *this_00;
  longlong lVar2;
  
  if ((int)this->NumChildNodesAndFlags < 0) {
    this->NumChildNodesAndFlags = this->NumChildNodesAndFlags & 0x7fffffff;
  }
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset(&this->RelPaths,(void *)0x0);
  pFVar1 = (this->ChildNodes).Ptr;
  (this->ChildNodes).Ptr = (FTreeNode *)0x0;
  if (pFVar1 != (FTreeNode *)0x0) {
    lVar2 = *(longlong *)&pFVar1[-1].NumChildNodesAndFlags;
    this_00 = pFVar1 + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      this_00 = this_00 + -1;
      ~FTreeNode(this_00);
    }
    operator_delete__(&pFVar1[-1].NumChildNodesAndFlags,
                      *(longlong *)&pFVar1[-1].NumChildNodesAndFlags * 0x20 + 8);
  }
  this->NumChildNodesAndFlags = 0;
  this->CapacityChildNodes = 0;
  return;
}

// Reset @ 141b4cb80

void __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FTreeNode::Reset
          (void *this)

{
  longlong lVar1;
  void *this_00;
  longlong lVar2;
  
  if ((int)*(uint *)((longlong)this + 0x18) < 0) {
    *(uint *)((longlong)this + 0x18) = *(uint *)((longlong)this + 0x18) & 0x7fffffff;
  }
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset
            ((TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *)((longlong)this + 8),
             (void *)0x0);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)this + 0x10) = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
    this_00 = (void *)(lVar2 * 0x20 + lVar1);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      this_00 = (void *)((longlong)this_00 + -0x20);
      ~FTreeNode(this_00);
    }
    operator_delete__((longlong *)(lVar1 + -8),*(longlong *)(lVar1 + -8) * 0x20 + 8);
  }
  *(undefined8 *)((longlong)this + 0x18) = 0;
  return;
}

// TryFindClosestPath @ 141bb9f80

int * __thiscall
TDirectoryTree<int>::FTreeNode::TryFindClosestPath
          (FTreeNode *this,TStringView<wchar_t> *param_1,TStringBuilderBase<wchar_t> *param_2,
          wchar_t param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  FTreeNode *this_00;
  FString *pFVar8;
  bool local_res8 [8];
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  if ((param_1->Size == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InRelPath.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x58c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    piVar7 = (int *)(*pcVar3)();
    return piVar7;
  }
  local_78.DataPtr = param_1->DataPtr;
  local_78.Size = param_1->Size;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_98.DataPtr = (wchar_t *)0x0;
  local_98.Size = 0;
  local_a8.DataPtr = (wchar_t *)0x0;
  local_a8.Size = 0;
  FPathViews::SplitFirstComponent(&local_78,&local_98,&local_a8);
  local_68._12_4_ = local_98._12_4_;
  local_68.Size = local_98.Size;
  local_68.DataPtr = local_98.DataPtr;
  iVar5 = UE::DirectoryTree::FindInsertionIndex
                    (this->NumChildNodesAndFlags & 0x7fffffff,&this->RelPaths,&local_68,local_res8);
  if (local_res8[0] != false) {
    local_48.DataPtr = param_1->DataPtr;
    local_48.Size = param_1->Size;
    local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
    this_00 = (this->ChildNodes).Ptr + iVar5;
    pFVar8 = (this->RelPaths).Ptr + iVar5;
    local_88 = (pFVar8->Data).AllocatorInstance.Data;
    iVar5 = (pFVar8->Data).ArrayNum;
    iStack_80 = iVar5 + -1;
    if (iVar5 == 0) {
      iStack_80 = 0;
    }
    local_58._12_4_ = uStack_7c;
    local_58.Size = iStack_80;
    local_58.DataPtr = (wchar_t *)local_88;
    bVar4 = FPathViews::TryMakeChildPathRelativeTo(&local_48,&local_58,&local_a8);
    if (bVar4) {
      if (local_a8.Size == 0) {
        if ((int)this_00->NumChildNodesAndFlags < 0) {
          if (param_2 == (TStringBuilderBase<wchar_t> *)0x0) {
            return (int *)this_00;
          }
          pwVar1 = param_2->CurPos;
          pwVar2 = param_2->Base;
          FPathViews::Append<wchar_t,FString_const_&>(param_2,pFVar8);
          UE::DirectoryTree::FixupPathSeparator
                    (param_2,(int)((longlong)pwVar1 - (longlong)pwVar2 >> 1),param_3);
          return (int *)this_00;
        }
      }
      else {
        iVar5 = -1;
        if (param_2 != (TStringBuilderBase<wchar_t> *)0x0) {
          pwVar1 = param_2->CurPos;
          pwVar2 = param_2->Base;
          FPathViews::Append<wchar_t,FString_const_&>(param_2,pFVar8);
          iVar5 = (int)((longlong)pwVar1 - (longlong)pwVar2 >> 1);
          UE::DirectoryTree::FixupPathSeparator(param_2,iVar5,param_3);
        }
        local_38._12_4_ = local_a8._12_4_;
        local_38.Size = local_a8.Size;
        local_38.DataPtr = local_a8.DataPtr;
        piVar7 = TryFindClosestPath(this_00,&local_38,param_2,param_3);
        if (piVar7 != (int *)0x0) {
          return piVar7;
        }
        if ((int)this_00->NumChildNodesAndFlags < 0) {
          return (int *)this_00;
        }
        if (param_2 != (TStringBuilderBase<wchar_t> *)0x0) {
          iVar6 = (int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1);
          iVar5 = iVar6 - iVar5;
          if ((iVar6 < iVar5) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount <= Len()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                 ,0xe8,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            piVar7 = (int *)(*pcVar3)();
            return piVar7;
          }
          param_2->CurPos = param_2->CurPos + -(longlong)iVar5;
        }
      }
    }
  }
  return (int *)0x0;
}

// TryGetChildren @ 141bba4f0

/* WARNING: Removing unreachable block (ram,0x000141bba770) */
/* WARNING: Removing unreachable block (ram,0x000141bbab63) */
/* WARNING: Removing unreachable block (ram,0x000141bbb2ee) */
/* WARNING: Removing unreachable block (ram,0x000141bbb54d) */
/* WARNING: Removing unreachable block (ram,0x000141bba942) */
/* WARNING: Removing unreachable block (ram,0x000141bbb120) */

bool __thiscall
TDirectoryTree<int>::FTreeNode::TryGetChildren
          (FTreeNode *this,TStringBuilderBase<wchar_t> *param_1,wchar_t param_2,
          TStringView<wchar_t> *param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4,
          EDirectoryTreeGetFlags param_5)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  void *pvVar13;
  wchar_t *pwVar14;
  FString *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulong64 uVar19;
  FTreeNode *pFVar20;
  bool local_res20 [8];
  TStringView<wchar_t> local_2d8;
  longlong local_2c8;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  TStringView<wchar_t> local_258;
  TStringView<wchar_t> local_248;
  TStringView<wchar_t> local_238;
  FTreeNode *local_228;
  longlong local_220;
  longlong local_218;
  TStringView<wchar_t> local_208;
  TStringView<wchar_t> local_1f8;
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  ulonglong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  wchar_t *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  if (param_3->Size == 0) {
    uVar9 = this->NumChildNodesAndFlags & 0x7fffffff;
    local_1c8 = (ulonglong)uVar9;
    if (uVar9 == 0) {
LAB_141bbb59a:
      bVar7 = true;
    }
    else {
      local_2c8 = 0;
      local_220 = 0;
      local_218 = 0;
      do {
        local_228 = (FTreeNode *)((((this->ChildNodes).Ptr)->Value).Pad + local_218);
        puVar17 = (undefined8 *)
                  ((longlong)&(((this->RelPaths).Ptr)->Data).AllocatorInstance.Data + local_2c8);
        if ((param_5 & ImpliedChildren) == None) {
          pwVar14 = param_1->CurPos;
          iVar10 = (int)((longlong)pwVar14 - (longlong)param_1->Base >> 1);
          if (((iVar10 != 0) && (pwVar14[-1] != L'/')) && (pwVar14[-1] != L'\\')) {
            if (param_1->End < pwVar14 + 1) {
              TStringBuilderBase<wchar_t>::Extend(param_1,1);
            }
            *param_1->CurPos = L'/';
            param_1->CurPos = param_1->CurPos + 1;
            pwVar14 = param_1->CurPos;
          }
          pvVar13 = (void *)*puVar17;
          iVar11 = *(int *)(puVar17 + 1) + -1;
          if (*(int *)(puVar17 + 1) == 0) {
            iVar11 = 0;
          }
          uVar19 = (ulong64)iVar11;
          if (param_1->End < pwVar14 + uVar19) {
            TStringBuilderBase<wchar_t>::Extend(param_1,uVar19);
            pwVar14 = param_1->CurPos;
          }
          if (iVar11 != 0) {
            pvVar13 = FGenericPlatformString::Memcpy(pwVar14,pvVar13,uVar19 * 2);
            param_1->CurPos = (wchar_t *)((longlong)pvVar13 + uVar19 * 2);
          }
          UE::DirectoryTree::FixupPathSeparator(param_1,iVar10,param_2);
          pFVar20 = local_228;
          if ((int)local_228->NumChildNodesAndFlags < 0) {
            if (param_1->End < param_1->CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(param_1,1);
            }
            *param_1->CurPos = L'\0';
            ::FString::FString(&local_2c0,param_1->Base);
            pFVar16 = (param_4->AllocatorInstance).Data;
            if (((pFVar16 <= (FScriptContainerElement *)&local_2c0) &&
                ((FScriptContainerElement *)&local_2c0 <
                 pFVar16 + (longlong)param_4->ArrayMax * 0x10)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            iVar11 = param_4->ArrayNum;
            if (iVar11 == param_4->ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
            }
            param_4->ArrayNum = iVar11 + 1;
            pFVar16 = (param_4->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
            *(undefined8 *)pFVar16 = 0;
            *(FScriptContainerElement **)pFVar16 = local_2c0.Data.AllocatorInstance.Data;
            local_2c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar16 + 8) = local_2c0.Data.ArrayNum;
            *(int *)(pFVar16 + 0xc) = local_2c0.Data.ArrayMax;
            local_2c0.Data.ArrayNum = 0;
            local_2c0.Data.ArrayMax = 0;
          }
          if ((-1 < (int)pFVar20->NumChildNodesAndFlags) || ((param_5 & Recursive) != None)) {
            uStack_1a0 = 0;
            local_1a8 = 0;
            local_108.DataPtr = (wchar_t *)0x0;
            local_108.Size = 0;
            local_108._12_4_ = 0;
            TryGetChildren(pFVar20,param_1,param_2,&local_108,param_4,param_5);
          }
          iVar11 = (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1);
          iVar10 = iVar11 - iVar10;
        }
        else {
          local_158 = (wchar_t *)*puVar17;
          local_248.DataPtr = (wchar_t *)0x0;
          local_248.Size = 0;
          local_238.DataPtr = (wchar_t *)0x0;
          local_238.Size = 0;
          iStack_150 = *(int *)(puVar17 + 1) + -1;
          if (*(int *)(puVar17 + 1) == 0) {
            iStack_150 = 0;
          }
          local_138._12_4_ = uStack_14c;
          local_138.Size = iStack_150;
          local_138.DataPtr = local_158;
          FPathViews::SplitFirstComponent(&local_138,&local_248,&local_238);
          pwVar14 = param_1->CurPos;
          lVar18 = (longlong)pwVar14 - (longlong)param_1->Base >> 1;
          local_1c0 = lVar18;
          if ((((int)lVar18 != 0) && (pwVar14[-1] != L'/')) && (pwVar14[-1] != L'\\')) {
            if (param_1->End < pwVar14 + 1) {
              TStringBuilderBase<wchar_t>::Extend(param_1,1);
            }
            *param_1->CurPos = L'/';
            param_1->CurPos = param_1->CurPos + 1;
            pwVar14 = param_1->CurPos;
          }
          iVar10 = local_248.Size;
          pwVar4 = local_248.DataPtr;
          uVar19 = (ulong64)local_248.Size;
          if (param_1->End < pwVar14 + uVar19) {
            TStringBuilderBase<wchar_t>::Extend(param_1,uVar19);
            pwVar14 = param_1->CurPos;
          }
          if (iVar10 != 0) {
            pvVar13 = FGenericPlatformString::Memcpy(pwVar14,pwVar4,uVar19 * 2);
            param_1->CurPos = (wchar_t *)((longlong)pvVar13 + uVar19 * 2);
          }
          UE::DirectoryTree::FixupPathSeparator(param_1,(int)lVar18,param_2);
          if (param_1->End < param_1->CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(param_1,1);
          }
          *param_1->CurPos = L'\0';
          ::FString::FString(&local_2b0,param_1->Base);
          pFVar16 = (param_4->AllocatorInstance).Data;
          if (((pFVar16 <= (FScriptContainerElement *)&local_2b0) &&
              ((FScriptContainerElement *)&local_2b0 < pFVar16 + (longlong)param_4->ArrayMax * 0x10)
              ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          iVar10 = param_4->ArrayNum;
          if (iVar10 == param_4->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar10 + 1;
          pFVar16 = (param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
          *(undefined8 *)pFVar16 = 0;
          *(FScriptContainerElement **)pFVar16 = local_2b0.Data.AllocatorInstance.Data;
          *(int *)(pFVar16 + 8) = local_2b0.Data.ArrayNum;
          *(int *)(pFVar16 + 0xc) = local_2b0.Data.ArrayMax;
          local_2b0.Data.ArrayNum = 0;
          local_2b0.Data.ArrayMax = 0;
          local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if ((param_5 & Recursive) != None) {
            while (local_238.Size != 0) {
              local_128._12_4_ = local_238._12_4_;
              local_128.Size = local_238.Size;
              local_128.DataPtr = local_238.DataPtr;
              FPathViews::SplitFirstComponent(&local_128,&local_248,&local_238);
              pwVar14 = param_1->CurPos;
              iVar10 = (int)((longlong)pwVar14 - (longlong)param_1->Base >> 1);
              if (((iVar10 != 0) && (pwVar14[-1] != L'/')) && (pwVar14[-1] != L'\\')) {
                if (param_1->End < pwVar14 + 1) {
                  TStringBuilderBase<wchar_t>::Extend(param_1,1);
                }
                *param_1->CurPos = L'/';
                param_1->CurPos = param_1->CurPos + 1;
                pwVar14 = param_1->CurPos;
              }
              iVar11 = local_248.Size;
              pwVar4 = local_248.DataPtr;
              uVar19 = (ulong64)local_248.Size;
              if (param_1->End < pwVar14 + uVar19) {
                TStringBuilderBase<wchar_t>::Extend(param_1,uVar19);
                pwVar14 = param_1->CurPos;
              }
              if (iVar11 != 0) {
                pvVar13 = FGenericPlatformString::Memcpy(pwVar14,pwVar4,uVar19 * 2);
                param_1->CurPos = (wchar_t *)((longlong)pvVar13 + uVar19 * 2);
              }
              UE::DirectoryTree::FixupPathSeparator(param_1,iVar10,param_2);
              if (param_1->End < param_1->CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(param_1,1);
              }
              *param_1->CurPos = L'\0';
              ::FString::FString(&local_2a0,param_1->Base);
              pFVar16 = (param_4->AllocatorInstance).Data;
              piVar1 = &param_4->ArrayMax;
              if (((pFVar16 <= (FScriptContainerElement *)&local_2a0) &&
                  ((FScriptContainerElement *)&local_2a0 < pFVar16 + (longlong)*piVar1 * 0x10)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
              iVar10 = param_4->ArrayNum;
              if (iVar10 == *piVar1) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&param_4->AllocatorInstance,piVar1);
              }
              param_4->ArrayNum = iVar10 + 1;
              pFVar16 = (param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
              *(undefined8 *)pFVar16 = 0;
              *(FScriptContainerElement **)pFVar16 = local_2a0.Data.AllocatorInstance.Data;
              local_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              *(int *)(pFVar16 + 8) = local_2a0.Data.ArrayNum;
              *(int *)(pFVar16 + 0xc) = local_2a0.Data.ArrayMax;
              local_2a0.Data.ArrayNum = 0;
              local_2a0.Data.ArrayMax = 0;
              lVar18 = local_1c0;
            }
            uStack_1b0 = 0;
            local_1b8 = 0;
            local_118.DataPtr = (wchar_t *)0x0;
            local_118.Size = 0;
            local_118._12_4_ = 0;
            TryGetChildren(local_228,param_1,param_2,&local_118,param_4,param_5);
          }
          iVar11 = (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1);
          iVar10 = iVar11 - (int)lVar18;
        }
        if ((iVar11 < iVar10) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount <= Len()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                               ,0xe8,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        local_220 = local_220 + 1;
        local_218 = local_218 + 0x20;
        local_2c8 = local_2c8 + 0x10;
        param_1->CurPos = param_1->CurPos + -(longlong)iVar10;
      } while (local_220 < (longlong)local_1c8);
      bVar7 = true;
    }
  }
  else {
    local_f8.DataPtr = param_3->DataPtr;
    local_f8.Size = param_3->Size;
    local_f8._12_4_ = *(undefined4 *)&param_3->field_0xc;
    iVar11 = 0;
    local_1e8.DataPtr = (wchar_t *)0x0;
    local_1e8.Size = 0;
    local_1d8.DataPtr = (wchar_t *)0x0;
    local_1d8.Size = 0;
    FPathViews::SplitFirstComponent(&local_f8,&local_1e8,&local_1d8);
    local_e8._12_4_ = local_1e8._12_4_;
    local_e8.Size = local_1e8.Size;
    local_e8.DataPtr = local_1e8.DataPtr;
    iVar10 = UE::DirectoryTree::FindInsertionIndex
                       (this->NumChildNodesAndFlags & 0x7fffffff,&this->RelPaths,&local_e8,
                        local_res20);
    if (local_res20[0] != false) {
      local_258.DataPtr = (wchar_t *)0x0;
      pFVar15 = (this->RelPaths).Ptr + iVar10;
      local_258.Size = 0;
      local_2d8.DataPtr = (wchar_t *)0x0;
      local_2d8.Size = 0;
      local_148 = (pFVar15->Data).AllocatorInstance.Data;
      iVar2 = (pFVar15->Data).ArrayNum;
      pFVar20 = (this->ChildNodes).Ptr + iVar10;
      iStack_140 = iVar2 + -1;
      if (iVar2 == 0) {
        iStack_140 = 0;
      }
      local_d8._12_4_ = uStack_13c;
      local_d8.Size = iStack_140;
      local_d8.DataPtr = (wchar_t *)local_148;
      FPathViews::SplitFirstComponent(&local_d8,&local_258,&local_2d8);
      local_c8._12_4_ = local_258._12_4_;
      local_c8.Size = local_258.Size;
      local_b8._12_4_ = local_1e8._12_4_;
      local_b8.Size = local_1e8.Size;
      local_c8.DataPtr = local_258.DataPtr;
      local_b8.DataPtr = local_1e8.DataPtr;
      bVar7 = FPathViews::Equals(&local_b8,&local_c8);
      if ((!bVar7) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("FPathViews::Equals(FirstComponent, ExistingFirstComponent)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                             ,0x512,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      if (-1 < param_3->Size) {
        local_48.DataPtr._0_4_ = local_1d8.DataPtr._0_4_;
        local_48.DataPtr._4_4_ = local_1d8.DataPtr._4_4_;
        local_88.DataPtr._0_4_ = local_2d8.DataPtr._0_4_;
        local_88.DataPtr._4_4_ = local_2d8.DataPtr._4_4_;
        do {
          if (local_2d8.Size == 0) {
            if (((local_1d8.Size != 0) || ((param_5 & ImpliedParent) != None)) ||
               ((int)pFVar20->NumChildNodesAndFlags < 0)) {
              local_48.Size = local_1d8.Size;
              bVar7 = TryGetChildren(pFVar20,param_1,param_2,&local_48,param_4,param_5);
              return bVar7;
            }
            goto LAB_141bbaf3d;
          }
          if (local_1d8.Size == 0) {
            if ((param_5 & ImpliedParent) == None) goto LAB_141bbaf3d;
            if ((param_5 & ImpliedChildren) != None) {
              local_88.Size = local_2d8.Size;
              FPathViews::SplitFirstComponent(&local_88,&local_258,&local_2d8);
              pwVar14 = param_1->CurPos;
              local_2c8 = (longlong)pwVar14 - (longlong)param_1->Base >> 1;
              if ((((int)local_2c8 != 0) && (pwVar14[-1] != L'/')) && (pwVar14[-1] != L'\\')) {
                if (param_1->End < pwVar14 + 1) {
                  TStringBuilderBase<wchar_t>::Extend(param_1,1);
                }
                *param_1->CurPos = L'/';
                param_1->CurPos = param_1->CurPos + 1;
                pwVar14 = param_1->CurPos;
              }
              iVar10 = local_258.Size;
              pwVar4 = local_258.DataPtr;
              uVar19 = (ulong64)local_258.Size;
              if (param_1->End < pwVar14 + uVar19) {
                TStringBuilderBase<wchar_t>::Extend(param_1,uVar19);
                pwVar14 = param_1->CurPos;
              }
              if (iVar10 != 0) {
                pvVar13 = FGenericPlatformString::Memcpy(pwVar14,pwVar4,uVar19 * 2);
                param_1->CurPos = (wchar_t *)((longlong)pvVar13 + uVar19 * 2);
              }
              iVar10 = (int)local_2c8;
              UE::DirectoryTree::FixupPathSeparator(param_1,iVar10,param_2);
              pwVar14 = TStringBuilderBase<wchar_t>::operator*(param_1);
              ::FString::FString(&local_290,pwVar14);
              pFVar16 = (param_4->AllocatorInstance).Data;
              if (((pFVar16 <= (FScriptContainerElement *)&local_290) &&
                  ((FScriptContainerElement *)&local_290 <
                   pFVar16 + (longlong)param_4->ArrayMax * 0x10)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
              iVar11 = param_4->ArrayNum;
              if (iVar11 == param_4->ArrayMax) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
              }
              param_4->ArrayNum = iVar11 + 1;
              pFVar16 = (param_4->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
              *(undefined8 *)pFVar16 = 0;
              *(FScriptContainerElement **)pFVar16 = local_290.Data.AllocatorInstance.Data;
              *(int *)(pFVar16 + 8) = local_290.Data.ArrayNum;
              *(int *)(pFVar16 + 0xc) = local_290.Data.ArrayMax;
              local_290.Data.ArrayNum = 0;
              local_290.Data.ArrayMax = 0;
              local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if ((param_5 & Recursive) != None) {
                FVar5.Data = local_280.Data.AllocatorInstance.Data;
                uVar6 = local_280.Data._8_8_;
                if (local_2d8.Size != 0) {
                  do {
                    local_280.Data._8_8_ = uVar6;
                    local_280.Data.AllocatorInstance.Data = FVar5.Data;
                    local_78._12_4_ = local_2d8._12_4_;
                    local_78.Size = local_2d8.Size;
                    local_78.DataPtr = local_2d8.DataPtr;
                    FPathViews::SplitFirstComponent(&local_78,&local_258,&local_2d8);
                    pwVar14 = param_1->CurPos;
                    iVar10 = (int)((longlong)pwVar14 - (longlong)param_1->Base >> 1);
                    if (((iVar10 != 0) && (pwVar14[-1] != L'/')) && (pwVar14[-1] != L'\\')) {
                      if (param_1->End < pwVar14 + 1) {
                        TStringBuilderBase<wchar_t>::Extend(param_1,1);
                      }
                      *param_1->CurPos = L'/';
                      param_1->CurPos = param_1->CurPos + 1;
                      pwVar14 = param_1->CurPos;
                    }
                    iVar11 = local_258.Size;
                    pwVar4 = local_258.DataPtr;
                    uVar19 = (ulong64)local_258.Size;
                    if (param_1->End < pwVar14 + uVar19) {
                      TStringBuilderBase<wchar_t>::Extend(param_1,uVar19);
                      pwVar14 = param_1->CurPos;
                    }
                    if (iVar11 != 0) {
                      pvVar13 = FGenericPlatformString::Memcpy(pwVar14,pwVar4,uVar19 * 2);
                      param_1->CurPos = (wchar_t *)((longlong)pvVar13 + uVar19 * 2);
                    }
                    UE::DirectoryTree::FixupPathSeparator(param_1,iVar10,param_2);
                    if (param_1->End < param_1->CurPos + 1) {
                      TStringBuilderBase<wchar_t>::Extend(param_1,1);
                    }
                    *param_1->CurPos = L'\0';
                    ::FString::FString(&local_280,param_1->Base);
                    pFVar16 = (param_4->AllocatorInstance).Data;
                    piVar1 = &param_4->ArrayMax;
                    if (((pFVar16 <= (FScriptContainerElement *)&local_280) &&
                        ((FScriptContainerElement *)&local_280 < pFVar16 + (longlong)*piVar1 * 0x10)
                        ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar7)) {
                      pcVar3 = (code *)swi(3);
                      uVar8 = (*pcVar3)();
                      return (bool)uVar8;
                    }
                    iVar10 = param_4->ArrayNum;
                    if (iVar10 == *piVar1) {
                      iVar10 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,&param_4->AllocatorInstance,piVar1);
                    }
                    param_4->ArrayNum = iVar10 + 1;
                    pFVar16 = (param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
                    *(undefined8 *)pFVar16 = 0;
                    *(FScriptContainerElement **)pFVar16 = local_280.Data.AllocatorInstance.Data;
                    local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    FVar5.Data = local_280.Data.AllocatorInstance.Data;
                    *(int *)(pFVar16 + 8) = local_280.Data.ArrayNum;
                    *(int *)(pFVar16 + 0xc) = local_280.Data.ArrayMax;
                    local_280.Data.ArrayNum = 0;
                    local_280.Data.ArrayMax = 0;
                    uVar6 = local_280.Data._8_8_;
                    local_280.Data.ArrayNum = 0;
                    local_280.Data.ArrayMax = 0;
                    local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  } while (local_2d8.Size != 0);
                  iVar10 = (int)local_2c8;
                }
                uStack_170 = 0;
                local_178 = 0;
                local_68.DataPtr = (wchar_t *)0x0;
                local_68.Size = 0;
                local_68._12_4_ = 0;
                TryGetChildren(pFVar20,param_1,param_2,&local_68,param_4,param_5);
              }
              iVar11 = (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1);
              iVar10 = iVar11 - iVar10;
              if ((iVar11 < iVar10) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount <= Len()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                     ,0xe8,L""), bVar7)) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
              param_1->CurPos = param_1->CurPos + -(longlong)iVar10;
              return true;
            }
            if (((int)pFVar20->NumChildNodesAndFlags < 0) || ((param_5 & Recursive) != None)) {
              pwVar14 = param_1->CurPos;
              iVar10 = (int)((longlong)pwVar14 - (longlong)param_1->Base >> 1);
              if ((iVar10 != 0) && ((pwVar14[-1] != L'/' && (pwVar14[-1] != L'\\')))) {
                if (param_1->End < pwVar14 + 1) {
                  TStringBuilderBase<wchar_t>::Extend(param_1,1);
                }
                *param_1->CurPos = L'/';
                param_1->CurPos = param_1->CurPos + 1;
                pwVar14 = param_1->CurPos;
              }
              iVar11 = local_2d8.Size;
              pwVar4 = local_2d8.DataPtr;
              uVar19 = (ulong64)local_2d8.Size;
              if (param_1->End < pwVar14 + uVar19) {
                TStringBuilderBase<wchar_t>::Extend(param_1,uVar19);
              }
              if (iVar11 != 0) {
                pvVar13 = FGenericPlatformString::Memcpy(param_1->CurPos,pwVar4,uVar19 * 2);
                param_1->CurPos = (wchar_t *)((longlong)pvVar13 + uVar19 * 2);
              }
              UE::DirectoryTree::FixupPathSeparator(param_1,iVar10,param_2);
              if ((int)pFVar20->NumChildNodesAndFlags < 0) {
                pwVar14 = TStringBuilderBase<wchar_t>::operator*(param_1);
                ::FString::FString(&local_270,pwVar14);
                pFVar16 = (param_4->AllocatorInstance).Data;
                if (((pFVar16 <= (FScriptContainerElement *)&local_270) &&
                    ((FScriptContainerElement *)&local_270 <
                     pFVar16 + (longlong)param_4->ArrayMax * 0x10)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  uVar8 = (*pcVar3)();
                  return (bool)uVar8;
                }
                iVar10 = param_4->ArrayNum;
                if (iVar10 == param_4->ArrayMax) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
                }
                param_4->ArrayNum = iVar10 + 1;
                pFVar16 = (param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
                *(undefined8 *)pFVar16 = 0;
                *(FScriptContainerElement **)pFVar16 = local_270.Data.AllocatorInstance.Data;
                *(int *)(pFVar16 + 8) = local_270.Data.ArrayNum;
                *(int *)(pFVar16 + 0xc) = local_270.Data.ArrayMax;
                local_270.Data.ArrayNum = 0;
                local_270.Data.ArrayMax = 0;
                local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              }
              if ((param_5 & Recursive) != None) {
                uStack_160 = 0;
                local_168 = 0;
                local_58.DataPtr = (wchar_t *)0x0;
                local_58.Size = 0;
                local_58._12_4_ = 0;
                TryGetChildren(pFVar20,param_1,param_2,&local_58,param_4,param_5);
              }
            }
            goto LAB_141bbb59a;
          }
          local_1f8.DataPtr = (wchar_t *)0x0;
          local_1f8.Size = 0;
          local_198.DataPtr = (wchar_t *)0x0;
          local_198.Size = 0;
          local_a8.DataPtr._0_4_ = local_48.DataPtr._0_4_;
          local_a8.DataPtr._4_4_ = local_48.DataPtr._4_4_;
          local_a8.Size = local_1d8.Size;
          FPathViews::SplitFirstComponent(&local_a8,&local_1f8,&local_198);
          if ((local_1f8.Size == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!NextFirstComponent.IsEmpty()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                                 ,0x56c,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          local_98._12_4_ = local_2d8._12_4_;
          local_98.Size = local_2d8.Size;
          local_98.DataPtr = local_2d8.DataPtr;
          local_208.DataPtr = (wchar_t *)0x0;
          local_208.Size = 0;
          local_188.DataPtr = (wchar_t *)0x0;
          local_188.Size = 0;
          FPathViews::SplitFirstComponent(&local_98,&local_208,&local_188);
          if ((local_208.Size == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!NextExistingFirstComponent.IsEmpty()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                                 ,0x570,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          iVar2 = local_1f8.Size;
          iVar10 = local_208.Size;
          if ((local_1f8.Size != local_208.Size) ||
             ((((local_1f8.Size != 0 && (local_208.Size != 0)) &&
               (iVar12 = FGenericPlatformStricmp::Strnicmp
                                   (local_1f8.DataPtr,local_208.DataPtr,(longlong)local_208.Size),
               iVar12 != 0)) || (iVar2 != iVar10)))) goto LAB_141bbaf3d;
          local_1d8.Size = local_198.Size;
          iVar11 = iVar11 + 1;
          local_2d8.Size = local_188.Size;
          local_2d8._12_4_ = local_188._12_4_;
          local_1d8.DataPtr = local_198.DataPtr;
          local_1d8._12_4_ = local_198._12_4_;
          local_2d8.DataPtr = local_188.DataPtr;
          local_48.DataPtr._0_4_ = local_198.DataPtr._0_4_;
          local_48.DataPtr._4_4_ = local_198.DataPtr._4_4_;
          local_88.DataPtr._0_4_ = local_188.DataPtr._0_4_;
          local_88.DataPtr._4_4_ = local_188.DataPtr._4_4_;
        } while (iVar11 <= param_3->Size);
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x581,L"Infinite loop trying to split path %.*s into components.");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x584,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
    }
LAB_141bbaf3d:
    bVar7 = false;
  }
  return bVar7;
}

// TryGetChildren @ 141bbb600

/* WARNING: Removing unreachable block (ram,0x000141bbb880) */
/* WARNING: Removing unreachable block (ram,0x000141bbbc73) */
/* WARNING: Removing unreachable block (ram,0x000141bbc3fe) */
/* WARNING: Removing unreachable block (ram,0x000141bbc65d) */
/* WARNING: Removing unreachable block (ram,0x000141bbba52) */
/* WARNING: Removing unreachable block (ram,0x000141bbc230) */

bool __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FTreeNode::
TryGetChildren(void *this,TStringBuilderBase<wchar_t> *param_1,wchar_t param_2,
              TStringView<wchar_t> *param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4,
              EDirectoryTreeGetFlags param_5)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  void *pvVar13;
  void *pvVar14;
  wchar_t *pwVar15;
  FScriptContainerElement *pFVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulong64 uVar19;
  bool local_res20 [8];
  TStringView<wchar_t> local_2d8;
  longlong local_2c8;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  TStringView<wchar_t> local_258;
  TStringView<wchar_t> local_248;
  TStringView<wchar_t> local_238;
  void *local_228;
  longlong local_220;
  longlong local_218;
  TStringView<wchar_t> local_208;
  TStringView<wchar_t> local_1f8;
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  ulonglong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  wchar_t *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  wchar_t *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  if (param_3->Size == 0) {
    uVar9 = *(uint *)((longlong)this + 0x18) & 0x7fffffff;
    local_1c8 = (ulonglong)uVar9;
    if (uVar9 == 0) {
LAB_141bbc6aa:
      bVar7 = true;
    }
    else {
      local_2c8 = 0;
      local_220 = 0;
      local_218 = 0;
      do {
        local_228 = (void *)(*(longlong *)((longlong)this + 0x10) + local_218);
        puVar17 = (undefined8 *)(*(longlong *)((longlong)this + 8) + local_2c8);
        if ((param_5 & ImpliedChildren) == None) {
          pwVar15 = param_1->CurPos;
          iVar10 = (int)((longlong)pwVar15 - (longlong)param_1->Base >> 1);
          if (((iVar10 != 0) && (pwVar15[-1] != L'/')) && (pwVar15[-1] != L'\\')) {
            if (param_1->End < pwVar15 + 1) {
              TStringBuilderBase<wchar_t>::Extend(param_1,1);
            }
            *param_1->CurPos = L'/';
            param_1->CurPos = param_1->CurPos + 1;
            pwVar15 = param_1->CurPos;
          }
          pvVar13 = (void *)*puVar17;
          iVar11 = *(int *)(puVar17 + 1) + -1;
          if (*(int *)(puVar17 + 1) == 0) {
            iVar11 = 0;
          }
          uVar19 = (ulong64)iVar11;
          if (param_1->End < pwVar15 + uVar19) {
            TStringBuilderBase<wchar_t>::Extend(param_1,uVar19);
            pwVar15 = param_1->CurPos;
          }
          if (iVar11 != 0) {
            pvVar13 = FGenericPlatformString::Memcpy(pwVar15,pvVar13,uVar19 * 2);
            param_1->CurPos = (wchar_t *)((longlong)pvVar13 + uVar19 * 2);
          }
          UE::DirectoryTree::FixupPathSeparator(param_1,iVar10,param_2);
          pvVar13 = local_228;
          if (*(int *)((longlong)local_228 + 0x18) < 0) {
            if (param_1->End < param_1->CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(param_1,1);
            }
            *param_1->CurPos = L'\0';
            ::FString::FString(&local_2c0,param_1->Base);
            pFVar16 = (param_4->AllocatorInstance).Data;
            if (((pFVar16 <= (FScriptContainerElement *)&local_2c0) &&
                ((FScriptContainerElement *)&local_2c0 <
                 pFVar16 + (longlong)param_4->ArrayMax * 0x10)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            iVar11 = param_4->ArrayNum;
            if (iVar11 == param_4->ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
            }
            param_4->ArrayNum = iVar11 + 1;
            pFVar16 = (param_4->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
            *(undefined8 *)pFVar16 = 0;
            *(FScriptContainerElement **)pFVar16 = local_2c0.Data.AllocatorInstance.Data;
            local_2c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar16 + 8) = local_2c0.Data.ArrayNum;
            *(int *)(pFVar16 + 0xc) = local_2c0.Data.ArrayMax;
            local_2c0.Data.ArrayNum = 0;
            local_2c0.Data.ArrayMax = 0;
          }
          if ((-1 < *(int *)((longlong)pvVar13 + 0x18)) || ((param_5 & Recursive) != None)) {
            uStack_1a0 = 0;
            local_1a8 = 0;
            local_108.DataPtr = (wchar_t *)0x0;
            local_108.Size = 0;
            local_108._12_4_ = 0;
            TryGetChildren(pvVar13,param_1,param_2,&local_108,param_4,param_5);
          }
          iVar11 = (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1);
          iVar10 = iVar11 - iVar10;
        }
        else {
          local_158 = (wchar_t *)*puVar17;
          local_248.DataPtr = (wchar_t *)0x0;
          local_248.Size = 0;
          local_238.DataPtr = (wchar_t *)0x0;
          local_238.Size = 0;
          iStack_150 = *(int *)(puVar17 + 1) + -1;
          if (*(int *)(puVar17 + 1) == 0) {
            iStack_150 = 0;
          }
          local_138._12_4_ = uStack_14c;
          local_138.Size = iStack_150;
          local_138.DataPtr = local_158;
          FPathViews::SplitFirstComponent(&local_138,&local_248,&local_238);
          pwVar15 = param_1->CurPos;
          lVar18 = (longlong)pwVar15 - (longlong)param_1->Base >> 1;
          local_1c0 = lVar18;
          if ((((int)lVar18 != 0) && (pwVar15[-1] != L'/')) && (pwVar15[-1] != L'\\')) {
            if (param_1->End < pwVar15 + 1) {
              TStringBuilderBase<wchar_t>::Extend(param_1,1);
            }
            *param_1->CurPos = L'/';
            param_1->CurPos = param_1->CurPos + 1;
            pwVar15 = param_1->CurPos;
          }
          iVar10 = local_248.Size;
          pwVar4 = local_248.DataPtr;
          uVar19 = (ulong64)local_248.Size;
          if (param_1->End < pwVar15 + uVar19) {
            TStringBuilderBase<wchar_t>::Extend(param_1,uVar19);
            pwVar15 = param_1->CurPos;
          }
          if (iVar10 != 0) {
            pvVar13 = FGenericPlatformString::Memcpy(pwVar15,pwVar4,uVar19 * 2);
            param_1->CurPos = (wchar_t *)((longlong)pvVar13 + uVar19 * 2);
          }
          UE::DirectoryTree::FixupPathSeparator(param_1,(int)lVar18,param_2);
          if (param_1->End < param_1->CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(param_1,1);
          }
          *param_1->CurPos = L'\0';
          ::FString::FString(&local_2b0,param_1->Base);
          pFVar16 = (param_4->AllocatorInstance).Data;
          if (((pFVar16 <= (FScriptContainerElement *)&local_2b0) &&
              ((FScriptContainerElement *)&local_2b0 < pFVar16 + (longlong)param_4->ArrayMax * 0x10)
              ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          iVar10 = param_4->ArrayNum;
          if (iVar10 == param_4->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar10 + 1;
          pFVar16 = (param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
          *(undefined8 *)pFVar16 = 0;
          *(FScriptContainerElement **)pFVar16 = local_2b0.Data.AllocatorInstance.Data;
          *(int *)(pFVar16 + 8) = local_2b0.Data.ArrayNum;
          *(int *)(pFVar16 + 0xc) = local_2b0.Data.ArrayMax;
          local_2b0.Data.ArrayNum = 0;
          local_2b0.Data.ArrayMax = 0;
          local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if ((param_5 & Recursive) != None) {
            while (local_238.Size != 0) {
              local_128._12_4_ = local_238._12_4_;
              local_128.Size = local_238.Size;
              local_128.DataPtr = local_238.DataPtr;
              FPathViews::SplitFirstComponent(&local_128,&local_248,&local_238);
              pwVar15 = param_1->CurPos;
              iVar10 = (int)((longlong)pwVar15 - (longlong)param_1->Base >> 1);
              if (((iVar10 != 0) && (pwVar15[-1] != L'/')) && (pwVar15[-1] != L'\\')) {
                if (param_1->End < pwVar15 + 1) {
                  TStringBuilderBase<wchar_t>::Extend(param_1,1);
                }
                *param_1->CurPos = L'/';
                param_1->CurPos = param_1->CurPos + 1;
                pwVar15 = param_1->CurPos;
              }
              iVar11 = local_248.Size;
              pwVar4 = local_248.DataPtr;
              uVar19 = (ulong64)local_248.Size;
              if (param_1->End < pwVar15 + uVar19) {
                TStringBuilderBase<wchar_t>::Extend(param_1,uVar19);
                pwVar15 = param_1->CurPos;
              }
              if (iVar11 != 0) {
                pvVar13 = FGenericPlatformString::Memcpy(pwVar15,pwVar4,uVar19 * 2);
                param_1->CurPos = (wchar_t *)((longlong)pvVar13 + uVar19 * 2);
              }
              UE::DirectoryTree::FixupPathSeparator(param_1,iVar10,param_2);
              if (param_1->End < param_1->CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(param_1,1);
              }
              *param_1->CurPos = L'\0';
              ::FString::FString(&local_2a0,param_1->Base);
              pFVar16 = (param_4->AllocatorInstance).Data;
              piVar1 = &param_4->ArrayMax;
              if (((pFVar16 <= (FScriptContainerElement *)&local_2a0) &&
                  ((FScriptContainerElement *)&local_2a0 < pFVar16 + (longlong)*piVar1 * 0x10)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
              iVar10 = param_4->ArrayNum;
              if (iVar10 == *piVar1) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&param_4->AllocatorInstance,piVar1);
              }
              param_4->ArrayNum = iVar10 + 1;
              pFVar16 = (param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
              *(undefined8 *)pFVar16 = 0;
              *(FScriptContainerElement **)pFVar16 = local_2a0.Data.AllocatorInstance.Data;
              local_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              *(int *)(pFVar16 + 8) = local_2a0.Data.ArrayNum;
              *(int *)(pFVar16 + 0xc) = local_2a0.Data.ArrayMax;
              local_2a0.Data.ArrayNum = 0;
              local_2a0.Data.ArrayMax = 0;
              lVar18 = local_1c0;
            }
            uStack_1b0 = 0;
            local_1b8 = 0;
            local_118.DataPtr = (wchar_t *)0x0;
            local_118.Size = 0;
            local_118._12_4_ = 0;
            TryGetChildren(local_228,param_1,param_2,&local_118,param_4,param_5);
          }
          iVar11 = (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1);
          iVar10 = iVar11 - (int)lVar18;
        }
        if ((iVar11 < iVar10) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount <= Len()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                               ,0xe8,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        local_220 = local_220 + 1;
        local_218 = local_218 + 0x20;
        local_2c8 = local_2c8 + 0x10;
        param_1->CurPos = param_1->CurPos + -(longlong)iVar10;
      } while (local_220 < (longlong)local_1c8);
      bVar7 = true;
    }
  }
  else {
    local_f8.DataPtr = param_3->DataPtr;
    local_f8.Size = param_3->Size;
    local_f8._12_4_ = *(undefined4 *)&param_3->field_0xc;
    iVar11 = 0;
    local_1e8.DataPtr = (wchar_t *)0x0;
    local_1e8.Size = 0;
    local_1d8.DataPtr = (wchar_t *)0x0;
    local_1d8.Size = 0;
    FPathViews::SplitFirstComponent(&local_f8,&local_1e8,&local_1d8);
    local_e8._12_4_ = local_1e8._12_4_;
    local_e8.Size = local_1e8.Size;
    local_e8.DataPtr = local_1e8.DataPtr;
    iVar10 = UE::DirectoryTree::FindInsertionIndex
                       (*(uint *)((longlong)this + 0x18) & 0x7fffffff,
                        (TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *)((longlong)this + 8)
                        ,&local_e8,local_res20);
    if (local_res20[0] != false) {
      local_258.DataPtr = (wchar_t *)0x0;
      puVar17 = (undefined8 *)((longlong)iVar10 * 0x10 + *(longlong *)((longlong)this + 8));
      local_258.Size = 0;
      local_2d8.DataPtr = (wchar_t *)0x0;
      local_2d8.Size = 0;
      local_148 = (wchar_t *)*puVar17;
      iVar2 = *(int *)(puVar17 + 1);
      pvVar13 = (void *)((longlong)iVar10 * 0x20 + *(longlong *)((longlong)this + 0x10));
      iStack_140 = iVar2 + -1;
      if (iVar2 == 0) {
        iStack_140 = 0;
      }
      local_d8._12_4_ = uStack_13c;
      local_d8.Size = iStack_140;
      local_d8.DataPtr = local_148;
      FPathViews::SplitFirstComponent(&local_d8,&local_258,&local_2d8);
      local_c8._12_4_ = local_258._12_4_;
      local_c8.Size = local_258.Size;
      local_b8._12_4_ = local_1e8._12_4_;
      local_b8.Size = local_1e8.Size;
      local_c8.DataPtr = local_258.DataPtr;
      local_b8.DataPtr = local_1e8.DataPtr;
      bVar7 = FPathViews::Equals(&local_b8,&local_c8);
      if ((!bVar7) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("FPathViews::Equals(FirstComponent, ExistingFirstComponent)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                             ,0x512,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      if (-1 < param_3->Size) {
        local_48.DataPtr._0_4_ = local_1d8.DataPtr._0_4_;
        local_48.DataPtr._4_4_ = local_1d8.DataPtr._4_4_;
        local_88.DataPtr._0_4_ = local_2d8.DataPtr._0_4_;
        local_88.DataPtr._4_4_ = local_2d8.DataPtr._4_4_;
        do {
          if (local_2d8.Size == 0) {
            if (((local_1d8.Size != 0) || ((param_5 & ImpliedParent) != None)) ||
               (*(int *)((longlong)pvVar13 + 0x18) < 0)) {
              local_48.Size = local_1d8.Size;
              bVar7 = TryGetChildren(pvVar13,param_1,param_2,&local_48,param_4,param_5);
              return bVar7;
            }
            goto LAB_141bbc04d;
          }
          if (local_1d8.Size == 0) {
            if ((param_5 & ImpliedParent) == None) goto LAB_141bbc04d;
            if ((param_5 & ImpliedChildren) != None) {
              local_88.Size = local_2d8.Size;
              FPathViews::SplitFirstComponent(&local_88,&local_258,&local_2d8);
              pwVar15 = param_1->CurPos;
              local_2c8 = (longlong)pwVar15 - (longlong)param_1->Base >> 1;
              if ((((int)local_2c8 != 0) && (pwVar15[-1] != L'/')) && (pwVar15[-1] != L'\\')) {
                if (param_1->End < pwVar15 + 1) {
                  TStringBuilderBase<wchar_t>::Extend(param_1,1);
                }
                *param_1->CurPos = L'/';
                param_1->CurPos = param_1->CurPos + 1;
                pwVar15 = param_1->CurPos;
              }
              iVar10 = local_258.Size;
              pwVar4 = local_258.DataPtr;
              uVar19 = (ulong64)local_258.Size;
              if (param_1->End < pwVar15 + uVar19) {
                TStringBuilderBase<wchar_t>::Extend(param_1,uVar19);
                pwVar15 = param_1->CurPos;
              }
              if (iVar10 != 0) {
                pvVar14 = FGenericPlatformString::Memcpy(pwVar15,pwVar4,uVar19 * 2);
                param_1->CurPos = (wchar_t *)((longlong)pvVar14 + uVar19 * 2);
              }
              iVar10 = (int)local_2c8;
              UE::DirectoryTree::FixupPathSeparator(param_1,iVar10,param_2);
              pwVar15 = TStringBuilderBase<wchar_t>::operator*(param_1);
              ::FString::FString(&local_290,pwVar15);
              pFVar16 = (param_4->AllocatorInstance).Data;
              if (((pFVar16 <= (FScriptContainerElement *)&local_290) &&
                  ((FScriptContainerElement *)&local_290 <
                   pFVar16 + (longlong)param_4->ArrayMax * 0x10)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
              iVar11 = param_4->ArrayNum;
              if (iVar11 == param_4->ArrayMax) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
              }
              param_4->ArrayNum = iVar11 + 1;
              pFVar16 = (param_4->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
              *(undefined8 *)pFVar16 = 0;
              *(FScriptContainerElement **)pFVar16 = local_290.Data.AllocatorInstance.Data;
              *(int *)(pFVar16 + 8) = local_290.Data.ArrayNum;
              *(int *)(pFVar16 + 0xc) = local_290.Data.ArrayMax;
              local_290.Data.ArrayNum = 0;
              local_290.Data.ArrayMax = 0;
              local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if ((param_5 & Recursive) != None) {
                FVar5.Data = local_280.Data.AllocatorInstance.Data;
                uVar6 = local_280.Data._8_8_;
                if (local_2d8.Size != 0) {
                  do {
                    local_280.Data._8_8_ = uVar6;
                    local_280.Data.AllocatorInstance.Data = FVar5.Data;
                    local_78._12_4_ = local_2d8._12_4_;
                    local_78.Size = local_2d8.Size;
                    local_78.DataPtr = local_2d8.DataPtr;
                    FPathViews::SplitFirstComponent(&local_78,&local_258,&local_2d8);
                    pwVar15 = param_1->CurPos;
                    iVar10 = (int)((longlong)pwVar15 - (longlong)param_1->Base >> 1);
                    if (((iVar10 != 0) && (pwVar15[-1] != L'/')) && (pwVar15[-1] != L'\\')) {
                      if (param_1->End < pwVar15 + 1) {
                        TStringBuilderBase<wchar_t>::Extend(param_1,1);
                      }
                      *param_1->CurPos = L'/';
                      param_1->CurPos = param_1->CurPos + 1;
                      pwVar15 = param_1->CurPos;
                    }
                    iVar11 = local_258.Size;
                    pwVar4 = local_258.DataPtr;
                    uVar19 = (ulong64)local_258.Size;
                    if (param_1->End < pwVar15 + uVar19) {
                      TStringBuilderBase<wchar_t>::Extend(param_1,uVar19);
                      pwVar15 = param_1->CurPos;
                    }
                    if (iVar11 != 0) {
                      pvVar14 = FGenericPlatformString::Memcpy(pwVar15,pwVar4,uVar19 * 2);
                      param_1->CurPos = (wchar_t *)((longlong)pvVar14 + uVar19 * 2);
                    }
                    UE::DirectoryTree::FixupPathSeparator(param_1,iVar10,param_2);
                    if (param_1->End < param_1->CurPos + 1) {
                      TStringBuilderBase<wchar_t>::Extend(param_1,1);
                    }
                    *param_1->CurPos = L'\0';
                    ::FString::FString(&local_280,param_1->Base);
                    pFVar16 = (param_4->AllocatorInstance).Data;
                    piVar1 = &param_4->ArrayMax;
                    if (((pFVar16 <= (FScriptContainerElement *)&local_280) &&
                        ((FScriptContainerElement *)&local_280 < pFVar16 + (longlong)*piVar1 * 0x10)
                        ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar7)) {
                      pcVar3 = (code *)swi(3);
                      uVar8 = (*pcVar3)();
                      return (bool)uVar8;
                    }
                    iVar10 = param_4->ArrayNum;
                    if (iVar10 == *piVar1) {
                      iVar10 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,&param_4->AllocatorInstance,piVar1);
                    }
                    param_4->ArrayNum = iVar10 + 1;
                    pFVar16 = (param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
                    *(undefined8 *)pFVar16 = 0;
                    *(FScriptContainerElement **)pFVar16 = local_280.Data.AllocatorInstance.Data;
                    local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    FVar5.Data = local_280.Data.AllocatorInstance.Data;
                    *(int *)(pFVar16 + 8) = local_280.Data.ArrayNum;
                    *(int *)(pFVar16 + 0xc) = local_280.Data.ArrayMax;
                    local_280.Data.ArrayNum = 0;
                    local_280.Data.ArrayMax = 0;
                    uVar6 = local_280.Data._8_8_;
                    local_280.Data.ArrayNum = 0;
                    local_280.Data.ArrayMax = 0;
                    local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  } while (local_2d8.Size != 0);
                  iVar10 = (int)local_2c8;
                }
                uStack_170 = 0;
                local_178 = 0;
                local_68.DataPtr = (wchar_t *)0x0;
                local_68.Size = 0;
                local_68._12_4_ = 0;
                TryGetChildren(pvVar13,param_1,param_2,&local_68,param_4,param_5);
              }
              iVar11 = (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1);
              iVar10 = iVar11 - iVar10;
              if ((iVar11 < iVar10) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount <= Len()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                     ,0xe8,L""), bVar7)) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
              param_1->CurPos = param_1->CurPos + -(longlong)iVar10;
              return true;
            }
            if ((*(int *)((longlong)pvVar13 + 0x18) < 0) || ((param_5 & Recursive) != None)) {
              pwVar15 = param_1->CurPos;
              iVar10 = (int)((longlong)pwVar15 - (longlong)param_1->Base >> 1);
              if ((iVar10 != 0) && ((pwVar15[-1] != L'/' && (pwVar15[-1] != L'\\')))) {
                if (param_1->End < pwVar15 + 1) {
                  TStringBuilderBase<wchar_t>::Extend(param_1,1);
                }
                *param_1->CurPos = L'/';
                param_1->CurPos = param_1->CurPos + 1;
                pwVar15 = param_1->CurPos;
              }
              iVar11 = local_2d8.Size;
              pwVar4 = local_2d8.DataPtr;
              uVar19 = (ulong64)local_2d8.Size;
              if (param_1->End < pwVar15 + uVar19) {
                TStringBuilderBase<wchar_t>::Extend(param_1,uVar19);
              }
              if (iVar11 != 0) {
                pvVar14 = FGenericPlatformString::Memcpy(param_1->CurPos,pwVar4,uVar19 * 2);
                param_1->CurPos = (wchar_t *)((longlong)pvVar14 + uVar19 * 2);
              }
              UE::DirectoryTree::FixupPathSeparator(param_1,iVar10,param_2);
              if (*(int *)((longlong)pvVar13 + 0x18) < 0) {
                pwVar15 = TStringBuilderBase<wchar_t>::operator*(param_1);
                ::FString::FString(&local_270,pwVar15);
                pFVar16 = (param_4->AllocatorInstance).Data;
                if (((pFVar16 <= (FScriptContainerElement *)&local_270) &&
                    ((FScriptContainerElement *)&local_270 <
                     pFVar16 + (longlong)param_4->ArrayMax * 0x10)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  uVar8 = (*pcVar3)();
                  return (bool)uVar8;
                }
                iVar10 = param_4->ArrayNum;
                if (iVar10 == param_4->ArrayMax) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
                }
                param_4->ArrayNum = iVar10 + 1;
                pFVar16 = (param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
                *(undefined8 *)pFVar16 = 0;
                *(FScriptContainerElement **)pFVar16 = local_270.Data.AllocatorInstance.Data;
                *(int *)(pFVar16 + 8) = local_270.Data.ArrayNum;
                *(int *)(pFVar16 + 0xc) = local_270.Data.ArrayMax;
                local_270.Data.ArrayNum = 0;
                local_270.Data.ArrayMax = 0;
                local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              }
              if ((param_5 & Recursive) != None) {
                uStack_160 = 0;
                local_168 = 0;
                local_58.DataPtr = (wchar_t *)0x0;
                local_58.Size = 0;
                local_58._12_4_ = 0;
                TryGetChildren(pvVar13,param_1,param_2,&local_58,param_4,param_5);
              }
            }
            goto LAB_141bbc6aa;
          }
          local_1f8.DataPtr = (wchar_t *)0x0;
          local_1f8.Size = 0;
          local_198.DataPtr = (wchar_t *)0x0;
          local_198.Size = 0;
          local_a8.DataPtr._0_4_ = local_48.DataPtr._0_4_;
          local_a8.DataPtr._4_4_ = local_48.DataPtr._4_4_;
          local_a8.Size = local_1d8.Size;
          FPathViews::SplitFirstComponent(&local_a8,&local_1f8,&local_198);
          if ((local_1f8.Size == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!NextFirstComponent.IsEmpty()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                                 ,0x56c,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          local_98._12_4_ = local_2d8._12_4_;
          local_98.Size = local_2d8.Size;
          local_98.DataPtr = local_2d8.DataPtr;
          local_208.DataPtr = (wchar_t *)0x0;
          local_208.Size = 0;
          local_188.DataPtr = (wchar_t *)0x0;
          local_188.Size = 0;
          FPathViews::SplitFirstComponent(&local_98,&local_208,&local_188);
          if ((local_208.Size == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!NextExistingFirstComponent.IsEmpty()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                                 ,0x570,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          iVar2 = local_1f8.Size;
          iVar10 = local_208.Size;
          if ((local_1f8.Size != local_208.Size) ||
             ((((local_1f8.Size != 0 && (local_208.Size != 0)) &&
               (iVar12 = FGenericPlatformStricmp::Strnicmp
                                   (local_1f8.DataPtr,local_208.DataPtr,(longlong)local_208.Size),
               iVar12 != 0)) || (iVar2 != iVar10)))) goto LAB_141bbc04d;
          local_1d8.Size = local_198.Size;
          iVar11 = iVar11 + 1;
          local_2d8.Size = local_188.Size;
          local_2d8._12_4_ = local_188._12_4_;
          local_1d8.DataPtr = local_198.DataPtr;
          local_1d8._12_4_ = local_198._12_4_;
          local_2d8.DataPtr = local_188.DataPtr;
          local_48.DataPtr._0_4_ = local_198.DataPtr._0_4_;
          local_48.DataPtr._4_4_ = local_198.DataPtr._4_4_;
          local_88.DataPtr._0_4_ = local_188.DataPtr._0_4_;
          local_88.DataPtr._4_4_ = local_188.DataPtr._4_4_;
        } while (iVar11 <= param_3->Size);
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x581,L"Infinite loop trying to split path %.*s into components.");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x584,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
    }
LAB_141bbc04d:
    bVar7 = false;
  }
  return bVar7;
}

