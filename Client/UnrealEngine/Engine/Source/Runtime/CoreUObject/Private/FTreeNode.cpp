// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 13

// FTreeNode @ 141e864b0

FTreeNode * __thiscall
TDirectoryTree<FMountPoint_*>::FTreeNode::FTreeNode(FTreeNode *this,FTreeNode *param_1)

{
  (this->RelPaths).Ptr = (FString *)0x0;
  (this->ChildNodes).Ptr = (FTreeNode *)0x0;
  this->NumChildNodesAndFlags = 0;
  this->CapacityChildNodes = 0;
  operator=(this,param_1);
  return this;
}

// FTreeNode @ 141e864e0

FTreeNode * __thiscall TDirectoryTree<FMountPoint_*>::FTreeNode::FTreeNode(FTreeNode *this)

{
  (this->RelPaths).Ptr = (FString *)0x0;
  (this->ChildNodes).Ptr = (FTreeNode *)0x0;
  this->NumChildNodesAndFlags = 0;
  this->CapacityChildNodes = 0;
  return this;
}

// ~FTreeNode @ 141e88340

void __thiscall TDirectoryTree<FMountPoint_*>::FTreeNode::~FTreeNode(FTreeNode *this)

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

// operator= @ 141e88a00

FTreeNode * __thiscall
TDirectoryTree<FMountPoint_*>::FTreeNode::operator=(FTreeNode *this,FTreeNode *param_1)

{
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *pTVar1;
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *pTVar2;
  int *piVar3;
  TUniquePtr<TDirectoryTree<FMountPoint_*>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<FMountPoint_*>::FTreeNode_[0]>_>
  *pTVar4;
  TUniquePtr<TDirectoryTree<FMountPoint_*>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<FMountPoint_*>::FTreeNode_[0]>_>
  *pTVar5;
  FScriptContainerElement *pFVar6;
  FTreeNode *pFVar7;
  longlong lVar8;
  FTreeNode *this_00;
  FString *pFVar9;
  uint uVar10;
  
  uVar10 = this->NumChildNodesAndFlags;
  if ((int)param_1->NumChildNodesAndFlags < 0) {
    if ((int)uVar10 < 0) {
      uVar10 = uVar10 & 0x7fffffff;
    }
    this->NumChildNodesAndFlags = uVar10 | 0x80000000;
    *(undefined8 *)(this->Value).Pad = *(undefined8 *)(param_1->Value).Pad;
    if ((int)param_1->NumChildNodesAndFlags < 0) {
      param_1->NumChildNodesAndFlags = param_1->NumChildNodesAndFlags & 0x7fffffff;
    }
  }
  else if ((int)uVar10 < 0) {
    this->NumChildNodesAndFlags = uVar10 & 0x7fffffff;
  }
  pTVar1 = &param_1->RelPaths;
  pTVar2 = &this->RelPaths;
  if (pTVar2 != pTVar1) {
    pFVar9 = pTVar2->Ptr;
    pTVar2->Ptr = pTVar1->Ptr;
    pTVar1->Ptr = (FString *)0x0;
    if (pFVar9 != (FString *)0x0) {
      lVar8 = *(longlong *)&pFVar9[-1].Data.ArrayNum;
      piVar3 = &pFVar9[-1].Data.ArrayNum;
      pFVar9 = pFVar9 + lVar8;
      while (lVar8 != 0) {
        pFVar6 = pFVar9[-1].Data.AllocatorInstance.Data;
        pFVar9 = pFVar9 + -1;
        lVar8 = lVar8 + -1;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
      }
      operator_delete__(piVar3,*(longlong *)piVar3 * 0x10 + 8);
    }
  }
  pTVar4 = &param_1->ChildNodes;
  pTVar5 = &this->ChildNodes;
  if (pTVar5 != pTVar4) {
    pFVar7 = pTVar5->Ptr;
    pTVar5->Ptr = pTVar4->Ptr;
    pTVar4->Ptr = (FTreeNode *)0x0;
    if (pFVar7 != (FTreeNode *)0x0) {
      lVar8 = *(longlong *)&pFVar7[-1].NumChildNodesAndFlags;
      this_00 = pFVar7 + lVar8;
      for (; lVar8 != 0; lVar8 = lVar8 + -1) {
        this_00 = this_00 + -1;
        ~FTreeNode(this_00);
      }
      operator_delete__(&pFVar7[-1].NumChildNodesAndFlags,
                        *(longlong *)&pFVar7[-1].NumChildNodesAndFlags * 0x20 + 8);
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

// ConditionalCompactNode @ 141e92260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
TDirectoryTree<FMountPoint_*>::FTreeNode::ConditionalCompactNode
          (FString *param_1,FTreeNode *param_2)

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

// Find @ 141e9aa60

FMountPoint ** __thiscall
TDirectoryTree<FMountPoint_*>::FTreeNode::Find(FTreeNode *this,TStringView<wchar_t> *param_1)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMountPoint **ppFVar5;
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
    ppFVar5 = (FMountPoint **)(*pcVar2)();
    return ppFVar5;
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
        ppFVar5 = Find(this_00,&local_18);
        return ppFVar5;
      }
      if ((int)this_00->NumChildNodesAndFlags < 0) {
        return (FMountPoint **)this_00;
      }
      return (FMountPoint **)0x0;
    }
  }
  return (FMountPoint **)0x0;
}

// FindOrAdd @ 141e9c870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMountPoint ** __thiscall
TDirectoryTree<FMountPoint_*>::FTreeNode::FindOrAdd
          (FTreeNode *this,TStringView<wchar_t> *param_1,bool *param_2)

{
  int *piVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  FTreeNode *pFVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FMountPoint **ppFVar9;
  FString *pFVar10;
  FString *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  FTreeNode *this_00;
  int iVar14;
  longlong lVar15;
  FTreeNode *this_01;
  FScriptContainerElement *pFVar16;
  undefined8 uVar17;
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
    ppFVar9 = (FMountPoint **)(*pcVar3)();
    return ppFVar9;
  }
  local_968._12_4_ = local_9d8._12_4_;
  local_968.Size = local_9d8.Size;
  local_968.DataPtr = local_9d8.DataPtr;
  iVar7 = UE::DirectoryTree::FindInsertionIndex
                    (this->NumChildNodesAndFlags & 0x7fffffff,&this->RelPaths,&local_968,local_a78);
  if (local_a78[0] == false) {
    uVar17 = *(undefined8 *)&param_1->Size;
    pwVar2 = param_1->DataPtr;
    local_8a8.RelPaths.Ptr = (FString *)0x0;
    local_8a8.ChildNodes.Ptr = (FTreeNode *)0x0;
    *param_2 = false;
    local_8a8.Value.Pad[0] = '\0';
    local_8a8.Value.Pad[1] = '\0';
    local_8a8.Value.Pad[2] = '\0';
    local_8a8.Value.Pad[3] = '\0';
    local_8a8.Value.Pad[4] = '\0';
    local_8a8.Value.Pad[5] = '\0';
    local_8a8.Value.Pad[6] = '\0';
    local_8a8.Value.Pad[7] = '\0';
    local_8a8.NumChildNodesAndFlags = 0;
    local_8a8.CapacityChildNodes = 0;
    local_a58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a58.Data.ArrayNum = 0;
    local_a58.Data.ArrayMax = 0;
    pFVar10 = ::FString::ConstructFromPtrSize(&local_958,pwVar2,(int)uVar17);
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
    uVar12 = this->NumChildNodesAndFlags;
    if ((int)uVar12 < 0) {
      uVar12 = uVar12 & 0x7fffffff;
    }
    this->NumChildNodesAndFlags = uVar12 | 0x80000000;
    *(undefined8 *)(this->Value).Pad = 0;
  }
  else {
    iVar14 = 0;
    local_9b8.DataPtr = (wchar_t *)0x0;
    local_9b8.Size = 0;
    local_a28 = (this->RelPaths).Ptr + iVar7;
    local_a68.DataPtr = (wchar_t *)0x0;
    local_a68._8_8_ = (ulonglong)(uint)local_a68._12_4_ << 0x20;
    this_01 = (this->ChildNodes).Ptr + iVar7;
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
      ppFVar9 = (FMountPoint **)(*pcVar3)();
      return ppFVar9;
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
            ppFVar9 = FindOrAdd(this_01,&local_8d8,local_a70);
            return ppFVar9;
          }
          *local_a70 = SUB41(this_01->NumChildNodesAndFlags >> 0x1f,0);
          if ((int)this_01->NumChildNodesAndFlags < 0) {
            return (FMountPoint **)this_01;
          }
          this_01->NumChildNodesAndFlags = this_01->NumChildNodesAndFlags | 0x80000000;
          *(undefined8 *)(this_01->Value).Pad = 0;
          return (FMountPoint **)this_01;
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
          uVar12 = this_01->NumChildNodesAndFlags;
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 & 0x7fffffff;
          }
          uVar17 = *(undefined8 *)&param_1->Size;
          pwVar2 = param_1->DataPtr;
          this_01->NumChildNodesAndFlags = uVar12 | 0x80000000;
          *(undefined8 *)(this_01->Value).Pad = 0;
          ::FString::AssignRange(local_a28,pwVar2,(int)uVar17);
          InsertChildNode(this_01,0,&local_a38,&local_8c8);
          if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a38.Data.AllocatorInstance.Data);
          }
          if (local_8c8.ChildNodes.Ptr != (FTreeNode *)0x0) {
            lVar15 = *(longlong *)&local_8c8.ChildNodes.Ptr[-1].NumChildNodesAndFlags;
            pFVar4 = local_8c8.ChildNodes.Ptr + -1;
            this_00 = local_8c8.ChildNodes.Ptr + lVar15;
            for (; lVar15 != 0; lVar15 = lVar15 + -1) {
              this_00 = this_00 + -1;
              ~FTreeNode(this_00);
            }
            operator_delete__(&pFVar4->NumChildNodesAndFlags,
                              *(longlong *)&pFVar4->NumChildNodesAndFlags * 0x20 + 8);
          }
          if (local_8c8.RelPaths.Ptr == (FString *)0x0) {
            return (FMountPoint **)this_01;
          }
          lVar15 = *(longlong *)&local_8c8.RelPaths.Ptr[-1].Data.ArrayNum;
          piVar1 = &local_8c8.RelPaths.Ptr[-1].Data.ArrayNum;
          pFVar10 = local_8c8.RelPaths.Ptr + lVar15;
          while (lVar15 != 0) {
            pFVar16 = pFVar10[-1].Data.AllocatorInstance.Data;
            pFVar10 = pFVar10 + -1;
            lVar15 = lVar15 + -1;
            if (pFVar16 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar16);
            }
          }
          operator_delete__(piVar1,*(longlong *)piVar1 * 0x10 + 8);
          return (FMountPoint **)this_01;
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
          ppFVar9 = (FMountPoint **)(*pcVar3)();
          return ppFVar9;
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
          ppFVar9 = (FMountPoint **)(*pcVar3)();
          return ppFVar9;
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
          if (0 < (int)uVar12) {
            uVar17._4_4_ = uStack_9dc;
            uVar17._0_4_ = iStack_9e0;
            uVar13 = (ulonglong)uVar12;
            pFVar16 = local_9e8;
            do {
              local_9c8.DataPtr = (wchar_t *)0x0;
              local_9c8.Size = 0;
              local_988.DataPtr = (wchar_t *)0x0;
              local_988.Size = 0;
              local_918.DataPtr = (wchar_t *)pFVar16;
              local_918._8_8_ = uVar17;
              FPathViews::SplitFirstComponent(&local_918,&local_9c8,&local_988);
              if ((((int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1) != 0) &&
                  (local_868.CurPos[-1] != L'/')) && (local_868.CurPos[-1] != L'\\')) {
                if (local_868.End < local_868.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_868,1);
                }
                *local_868.CurPos = L'/';
                local_868.CurPos = local_868.CurPos + 1;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (&local_868,local_9c8.DataPtr,local_9c8.Size);
              uVar17._4_4_ = local_988._12_4_;
              uVar17._0_4_ = local_988.Size;
              uVar13 = uVar13 - 1;
              pFVar16 = (FScriptContainerElement *)local_988.DataPtr;
            } while (uVar13 != 0);
          }
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
                    (pFVar10,local_868.Base,
                     (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1));
          InsertChildNode(this_01,0,&local_a48,&local_888);
          local_8f8._12_4_ = local_9f8._12_4_;
          local_8f8.Size = local_9f8.Size;
          local_8f8.DataPtr = local_9f8.DataPtr;
          ppFVar9 = FindOrAdd(this_01,&local_8f8,local_a70);
          if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a48.Data.AllocatorInstance.Data);
          }
          ~FTreeNode(&local_888);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
          return ppFVar9;
        }
        local_9f8.Size = local_9a8.Size;
        local_9f8._12_4_ = local_9a8._12_4_;
        uVar12 = uVar12 + 1;
        local_a68.DataPtr = local_998.DataPtr;
        local_a68._8_8_ = CONCAT44(local_998._12_4_,local_998.Size);
        iVar14 = iVar14 + 1;
        local_a88 = param_1->Size;
        local_9f8.DataPtr = local_9a8.DataPtr;
        local_8d8.DataPtr._0_4_ = local_9a8.DataPtr._0_4_;
        local_8d8.DataPtr._4_4_ = local_9a8.DataPtr._4_4_;
      } while (iVar14 <= local_a88);
    }
    local_a80 = param_1->DataPtr;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                       ,0x404,L"Infinite loop trying to split path %.*s into components.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      ppFVar9 = (FMountPoint **)(*pcVar3)();
      return ppFVar9;
    }
  }
  return (FMountPoint **)this;
}

// InsertChildNode @ 141ea64c0

FTreeNode * __thiscall
TDirectoryTree<FMountPoint_*>::FTreeNode::InsertChildNode
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

// Realloc @ 141eb0ea0

void __thiscall TDirectoryTree<FMountPoint_*>::FTreeNode::Realloc(FTreeNode *this,int param_1)

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
  FString *pFVar15;
  uint uVar16;
  FTreeNode *pFVar17;
  longlong lVar18;
  FTreeNode *pFVar19;
  FTreeNode *pFVar14;
  
  uVar13 = (ulonglong)param_1;
  if (this->CapacityChildNodes != param_1) {
    uVar16 = this->NumChildNodesAndFlags & 0x7fffffff;
    if ((param_1 < (int)uVar16) &&
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
          *(undefined8 *)(pFVar11->Value).Pad = 0;
          (pFVar11->RelPaths).Ptr = (FString *)0x0;
          pFVar11 = (FTreeNode *)&pFVar11->ChildNodes;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar13;
      uVar8 = SUB168(ZEXT816(0x20) * auVar6,0);
      if (SUB168(ZEXT816(0x20) * auVar6,8) != 0) {
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
        puVar10 = puVar10 + 3;
        do {
          puVar10[-1] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10 = puVar10 + 4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      uVar13 = (ulonglong)uVar16;
      pFVar11 = pFVar19;
      if (uVar16 != 0) {
        do {
          pFVar17 = (FTreeNode *)
                    (((longlong)pFVar11 - (longlong)pFVar19) + (longlong)(this->RelPaths).Ptr);
          if (pFVar11 != pFVar17) {
            pvVar1 = *(void **)(pFVar11->Value).Pad;
            if (pvVar1 != (void *)0x0) {
              FMemory::Free(pvVar1);
            }
            *(undefined8 *)(pFVar11->Value).Pad = *(undefined8 *)(pFVar17->Value).Pad;
            *(undefined8 *)(pFVar17->Value).Pad = 0;
            *(undefined4 *)&(pFVar11->RelPaths).Ptr = *(undefined4 *)&(pFVar17->RelPaths).Ptr;
            *(undefined4 *)((longlong)&(pFVar11->RelPaths).Ptr + 4) =
                 *(undefined4 *)((longlong)&(pFVar17->RelPaths).Ptr + 4);
            (pFVar17->RelPaths).Ptr = (FString *)0x0;
          }
          operator=(pFVar14 + iVar12,(this->ChildNodes).Ptr + iVar12);
          iVar12 = iVar12 + 1;
          uVar13 = uVar13 - 1;
          pFVar11 = (FTreeNode *)&pFVar11->ChildNodes;
        } while (uVar13 != 0);
      }
      pFVar11 = (this->ChildNodes).Ptr;
      (this->ChildNodes).Ptr = pFVar14;
      if (pFVar11 != (FTreeNode *)0x0) {
        lVar18 = *(longlong *)&pFVar11[-1].NumChildNodesAndFlags;
        pFVar14 = pFVar11 + lVar18;
        for (; lVar18 != 0; lVar18 = lVar18 + -1) {
          pFVar14 = pFVar14 + -1;
          ~FTreeNode(pFVar14);
        }
        operator_delete__(&pFVar11[-1].NumChildNodesAndFlags,
                          *(longlong *)&pFVar11[-1].NumChildNodesAndFlags * 0x20 + 8);
      }
      pFVar2 = (this->RelPaths).Ptr;
      (this->RelPaths).Ptr = (FString *)pFVar19;
      if (pFVar2 != (FString *)0x0) {
        lVar18 = *(longlong *)&pFVar2[-1].Data.ArrayNum;
        pFVar15 = pFVar2 + lVar18;
        while (lVar18 != 0) {
          pFVar3 = pFVar15[-1].Data.AllocatorInstance.Data;
          pFVar15 = pFVar15 + -1;
          lVar18 = lVar18 + -1;
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
    TUniquePtr<TDirectoryTree<FMountPoint_*>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<FMountPoint_*>::FTreeNode_[0]>_>
    ::Reset(&this->ChildNodes,(void *)0x0);
    TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset(&this->RelPaths,(void *)0x0);
    this->CapacityChildNodes = param_1;
  }
  return;
}

// Remove @ 141eb43f0

void __thiscall
TDirectoryTree<FMountPoint_*>::FTreeNode::Remove
          (FTreeNode *this,TStringView<wchar_t> *param_1,bool *param_2)

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

// RemoveChildNodeAt @ 141eb4950

void __thiscall
TDirectoryTree<FMountPoint_*>::FTreeNode::RemoveChildNodeAt(FTreeNode *this,int param_1)

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

// Reset @ 141eb6d20

void __thiscall TDirectoryTree<FMountPoint_*>::FTreeNode::Reset(FTreeNode *this)

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

// TryFindClosestPath @ 141ec1110

FMountPoint ** __thiscall
TDirectoryTree<FMountPoint_*>::FTreeNode::TryFindClosestPath
          (FTreeNode *this,TStringView<wchar_t> *param_1,TStringBuilderBase<wchar_t> *param_2,
          wchar_t param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FMountPoint **ppFVar7;
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
    ppFVar7 = (FMountPoint **)(*pcVar3)();
    return ppFVar7;
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
            return (FMountPoint **)this_00;
          }
          pwVar1 = param_2->CurPos;
          pwVar2 = param_2->Base;
          FPathViews::Append<wchar_t,FString_const_&>(param_2,pFVar8);
          UE::DirectoryTree::FixupPathSeparator
                    (param_2,(int)((longlong)pwVar1 - (longlong)pwVar2 >> 1),param_3);
          return (FMountPoint **)this_00;
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
        ppFVar7 = TryFindClosestPath(this_00,&local_38,param_2,param_3);
        if (ppFVar7 != (FMountPoint **)0x0) {
          return ppFVar7;
        }
        if ((int)this_00->NumChildNodesAndFlags < 0) {
          return (FMountPoint **)this_00;
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
            ppFVar7 = (FMountPoint **)(*pcVar3)();
            return ppFVar7;
          }
          param_2->CurPos = param_2->CurPos + -(longlong)iVar5;
        }
      }
    }
  }
  return (FMountPoint **)0x0;
}

