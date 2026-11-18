// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 10

// FTreeNode @ 148cb4e80

FTreeNode * __thiscall
TDirectoryTree<FString>::FTreeNode::FTreeNode(FTreeNode *this,FTreeNode *param_1)

{
  (this->RelPaths).Ptr = (FString *)0x0;
  (this->ChildNodes).Ptr = (FTreeNode *)0x0;
  this->NumChildNodesAndFlags = 0;
  this->CapacityChildNodes = 0;
  operator=(this,param_1);
  return this;
}

// FTreeNode @ 148cb4eb0

FTreeNode * __thiscall TDirectoryTree<FString>::FTreeNode::FTreeNode(FTreeNode *this)

{
  (this->RelPaths).Ptr = (FString *)0x0;
  (this->ChildNodes).Ptr = (FTreeNode *)0x0;
  this->NumChildNodesAndFlags = 0;
  this->CapacityChildNodes = 0;
  return this;
}

// ~FTreeNode @ 148cb6ab0

void __thiscall TDirectoryTree<FString>::FTreeNode::~FTreeNode(FTreeNode *this)

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

// operator= @ 148cb6e70

FTreeNode * __thiscall
TDirectoryTree<FString>::FTreeNode::operator=(FTreeNode *this,FTreeNode *param_1)

{
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *pTVar1;
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *pTVar2;
  int *piVar3;
  TUniquePtr<TDirectoryTree<FString>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<FString>::FTreeNode_[0]>_>
  *pTVar4;
  TUniquePtr<TDirectoryTree<FString>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<FString>::FTreeNode_[0]>_>
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
    (param_1->Value).Pad[8] = '\0';
    (param_1->Value).Pad[9] = '\0';
    (param_1->Value).Pad[10] = '\0';
    (param_1->Value).Pad[0xb] = '\0';
    (param_1->Value).Pad[0xc] = '\0';
    (param_1->Value).Pad[0xd] = '\0';
    (param_1->Value).Pad[0xe] = '\0';
    (param_1->Value).Pad[0xf] = '\0';
    if (-1 < (int)param_1->NumChildNodesAndFlags) goto LAB_148cb6f03;
    param_1->NumChildNodesAndFlags = param_1->NumChildNodesAndFlags & 0x7fffffff;
    pvVar9 = *(void **)(param_1->Value).Pad;
  }
  else {
    if (-1 < (int)uVar6) goto LAB_148cb6f03;
    this->NumChildNodesAndFlags = uVar6 & 0x7fffffff;
    pvVar9 = *(void **)(this->Value).Pad;
  }
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
LAB_148cb6f03:
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

// FindOrAdd @ 148cc4340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
TDirectoryTree<FString>::FTreeNode::FindOrAdd
          (FTreeNode *this,TStringView<wchar_t> *param_1,bool *param_2)

{
  int *piVar1;
  FTreeNode *this_00;
  wchar_t *pwVar2;
  void *pvVar3;
  code *pcVar4;
  FTreeNode *pFVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FString *pFVar10;
  FString *pFVar11;
  ulonglong uVar12;
  longlong lVar13;
  FTreeNode *this_01;
  uint uVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  undefined8 uVar17;
  undefined1 auStack_ac8 [32];
  int local_aa8;
  wchar_t *local_aa0;
  bool local_a98 [8];
  bool *local_a90;
  TStringView<wchar_t> local_a88;
  FString local_a78;
  FString local_a68;
  FString local_a58;
  FString *local_a48;
  TStringView<wchar_t> local_a38;
  TStringView<wchar_t> local_a28;
  TStringView<wchar_t> local_a18;
  FScriptContainerElement *local_a08;
  int iStack_a00;
  undefined4 uStack_9fc;
  TStringView<wchar_t> local_9f8;
  TStringView<wchar_t> local_9e8;
  TStringView<wchar_t> local_9d8;
  TStringView<wchar_t> local_9c8;
  TStringView<wchar_t> local_9b8;
  TStringView<wchar_t> local_9a8;
  TStringView<wchar_t> local_998;
  TStringView<wchar_t> local_988;
  FString local_978;
  TStringView<wchar_t> local_968;
  TStringView<wchar_t> local_958;
  TStringView<wchar_t> local_948;
  TStringView<wchar_t> local_938;
  FString local_928;
  TStringView<wchar_t> local_918;
  FString local_908;
  TStringView<wchar_t> local_8f8;
  FTreeNode local_8e8;
  FTreeNode local_8c0;
  FTreeNode local_898;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_ac8;
  local_998.DataPtr = param_1->DataPtr;
  local_998.Size = param_1->Size;
  local_998._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar15 = 0;
  local_9f8.DataPtr = (wchar_t *)0x0;
  local_9f8.Size = 0;
  local_a18.DataPtr = (wchar_t *)0x0;
  local_a18.Size = 0;
  local_a90 = param_2;
  FPathViews::SplitFirstComponent(&local_998,&local_9f8,&local_a18);
  if ((local_9f8.Size == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FirstComponent.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x399,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FString *)(*pcVar4)();
    return pFVar10;
  }
  local_988._12_4_ = local_9f8._12_4_;
  local_988.Size = local_9f8.Size;
  local_988.DataPtr = local_9f8.DataPtr;
  iVar8 = UE::DirectoryTree::FindInsertionIndex
                    (this->NumChildNodesAndFlags & 0x7fffffff,&this->RelPaths,&local_988,local_a98);
  if (local_a98[0] == false) {
    uVar17 = *(undefined8 *)&param_1->Size;
    pwVar2 = param_1->DataPtr;
    local_8e8.Value.Pad[8] = '\0';
    local_8e8.Value.Pad[9] = '\0';
    local_8e8.Value.Pad[10] = '\0';
    local_8e8.Value.Pad[0xb] = '\0';
    local_8e8.Value.Pad[0xc] = '\0';
    local_8e8.Value.Pad[0xd] = '\0';
    local_8e8.Value.Pad[0xe] = '\0';
    local_8e8.Value.Pad[0xf] = '\0';
    local_8e8.RelPaths.Ptr = (FString *)0x0;
    *param_2 = false;
    local_8e8.Value.Pad[0] = '\0';
    local_8e8.Value.Pad[1] = '\0';
    local_8e8.Value.Pad[2] = '\0';
    local_8e8.Value.Pad[3] = '\0';
    local_8e8.Value.Pad[4] = '\0';
    local_8e8.Value.Pad[5] = '\0';
    local_8e8.Value.Pad[6] = '\0';
    local_8e8.Value.Pad[7] = '\0';
    local_8e8.ChildNodes.Ptr = (FTreeNode *)0x0;
    local_8e8.NumChildNodesAndFlags = 0;
    local_8e8.CapacityChildNodes = 0;
    local_a78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a78.Data.ArrayNum = 0;
    local_a78.Data.ArrayMax = 0;
    pFVar10 = ::FString::ConstructFromPtrSize(&local_978,pwVar2,(int)uVar17);
    if (&local_a78 != pFVar10) {
      local_a78.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a78.Data.ArrayNum = (pFVar10->Data).ArrayNum;
      local_a78.Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_978.Data.AllocatorInstance.Data);
    }
    this = InsertChildNode(this,iVar8,&local_a78,&local_8e8);
    if (local_a78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a78.Data.AllocatorInstance.Data);
    }
    ~FTreeNode(&local_8e8);
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
    local_9d8.DataPtr = (wchar_t *)0x0;
    this_00 = (this->ChildNodes).Ptr + iVar8;
    local_a48 = (this->RelPaths).Ptr + iVar8;
    local_9d8.Size = 0;
    local_a88.DataPtr = (wchar_t *)0x0;
    local_a88._8_8_ = (ulonglong)(uint)local_a88._12_4_ << 0x20;
    local_a08 = (local_a48->Data).AllocatorInstance.Data;
    iVar8 = (local_a48->Data).ArrayNum;
    iStack_a00 = iVar8 + -1;
    if (iVar8 == 0) {
      iStack_a00 = 0;
    }
    local_968._12_4_ = uStack_9fc;
    local_968.Size = iStack_a00;
    local_968.DataPtr = (wchar_t *)local_a08;
    FPathViews::SplitFirstComponent(&local_968,&local_9d8,&local_a88);
    if ((local_9d8.Size == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ExistingFirstComponent.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x3ab,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FString *)(*pcVar4)();
      return pFVar10;
    }
    local_aa8 = param_1->Size;
    uVar14 = 1;
    if (-1 < local_aa8) {
      local_8f8.DataPtr._0_4_ = local_a18.DataPtr._0_4_;
      local_8f8.DataPtr._4_4_ = local_a18.DataPtr._4_4_;
      do {
        if (local_a88.Size == 0) {
          if (local_a18.Size != 0) {
            local_8f8.Size = local_a18.Size;
            pFVar10 = FindOrAdd(this_00,&local_8f8,local_a90);
            return pFVar10;
          }
          *local_a90 = SUB41(this_00->NumChildNodesAndFlags >> 0x1f,0);
          if ((int)this_00->NumChildNodesAndFlags < 0) {
            return (FString *)this_00;
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
          return (FString *)this_00;
        }
        if (local_a18.Size == 0) {
          local_8c0.NumChildNodesAndFlags = 0;
          local_8c0.CapacityChildNodes = 0;
          local_8c0.RelPaths.Ptr = (FString *)0x0;
          local_8c0.ChildNodes.Ptr = (FTreeNode *)0x0;
          *local_a90 = false;
          operator=(&local_8c0,this_00);
          local_a58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a58.Data.ArrayNum = 0;
          local_a58.Data.ArrayMax = 0;
          pFVar10 = ::FString::ConstructFromPtrSize(&local_908,local_a88.DataPtr,local_a88.Size);
          if (&local_a58 != pFVar10) {
            local_a58.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
            (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a58.Data.ArrayNum = (pFVar10->Data).ArrayNum;
            local_a58.Data.ArrayMax = (pFVar10->Data).ArrayMax;
            (pFVar10->Data).ArrayNum = 0;
            (pFVar10->Data).ArrayMax = 0;
          }
          if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_908.Data.AllocatorInstance.Data);
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
          TUniquePtr<TDirectoryTree<FString>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<FString>::FTreeNode_[0]>_>
          ::Reset(&this_00->ChildNodes,(void *)0x0);
          uVar17 = *(undefined8 *)&param_1->Size;
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
          ::FString::AssignRange(local_a48,pwVar2,(int)uVar17);
          InsertChildNode(this_00,0,&local_a58,&local_8c0);
          if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a58.Data.AllocatorInstance.Data);
          }
          if (local_8c0.ChildNodes.Ptr != (FTreeNode *)0x0) {
            lVar13 = *(longlong *)&local_8c0.ChildNodes.Ptr[-1].NumChildNodesAndFlags;
            pFVar5 = local_8c0.ChildNodes.Ptr + -1;
            this_01 = local_8c0.ChildNodes.Ptr + lVar13;
            for (; lVar13 != 0; lVar13 = lVar13 + -1) {
              this_01 = this_01 + -1;
              ~FTreeNode(this_01);
            }
            operator_delete__(&pFVar5->NumChildNodesAndFlags,
                              *(longlong *)&pFVar5->NumChildNodesAndFlags * 0x28 + 8);
          }
          if (local_8c0.RelPaths.Ptr == (FString *)0x0) {
            return (FString *)this_00;
          }
          lVar13 = *(longlong *)&local_8c0.RelPaths.Ptr[-1].Data.ArrayNum;
          piVar1 = &local_8c0.RelPaths.Ptr[-1].Data.ArrayNum;
          pFVar10 = local_8c0.RelPaths.Ptr + lVar13;
          while (lVar13 != 0) {
            pFVar16 = pFVar10[-1].Data.AllocatorInstance.Data;
            pFVar10 = pFVar10 + -1;
            lVar13 = lVar13 + -1;
            if (pFVar16 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar16);
            }
          }
          operator_delete__(piVar1,*(longlong *)piVar1 * 0x10 + 8);
          return (FString *)this_00;
        }
        local_a28.DataPtr = (wchar_t *)0x0;
        local_a28.Size = 0;
        local_9c8.DataPtr = (wchar_t *)0x0;
        local_9c8.Size = 0;
        local_958.DataPtr._0_4_ = local_8f8.DataPtr._0_4_;
        local_958.DataPtr._4_4_ = local_8f8.DataPtr._4_4_;
        local_958.Size = local_a18.Size;
        FPathViews::SplitFirstComponent(&local_958,&local_a28,&local_9c8);
        if ((local_a28.Size == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!NextFirstComponent.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x3d8,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FString *)(*pcVar4)();
          return pFVar10;
        }
        local_948.DataPtr = local_a88.DataPtr;
        local_948.Size = local_a88.Size;
        local_948._12_4_ = local_a88._12_4_;
        local_a38.DataPtr = (wchar_t *)0x0;
        local_a38.Size = 0;
        local_9b8.DataPtr = (wchar_t *)0x0;
        local_9b8.Size = 0;
        FPathViews::SplitFirstComponent(&local_948,&local_a38,&local_9b8);
        if ((local_a38.Size == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!NextExistingFirstComponent.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x3dc,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FString *)(*pcVar4)();
          return pFVar10;
        }
        iVar6 = local_a28.Size;
        iVar8 = local_a38.Size;
        if (((local_a28.Size != local_a38.Size) ||
            (((local_a28.Size != 0 && (local_a38.Size != 0)) &&
             (iVar9 = FGenericPlatformStricmp::Strnicmp
                                (local_a28.DataPtr,local_a38.DataPtr,(longlong)local_a38.Size),
             iVar9 != 0)))) || (iVar6 != iVar8)) {
          pFVar10 = local_a48;
          local_868.Base = local_848;
          local_868.CurPos = local_848;
          local_868.bIsDynamic = false;
          local_868.bIsExternal = false;
          local_868.End = (wchar_t *)local_48;
          local_a08 = (local_a48->Data).AllocatorInstance.Data;
          iVar15 = (local_a48->Data).ArrayNum;
          iStack_a00 = iVar15 + -1;
          if (iVar15 == 0) {
            iStack_a00 = 0;
          }
          if (0 < (int)uVar14) {
            uVar17._4_4_ = uStack_9fc;
            uVar17._0_4_ = iStack_a00;
            uVar12 = (ulonglong)uVar14;
            pFVar16 = local_a08;
            do {
              local_9e8.DataPtr = (wchar_t *)0x0;
              local_9e8.Size = 0;
              local_9a8.DataPtr = (wchar_t *)0x0;
              local_9a8.Size = 0;
              local_938.DataPtr = (wchar_t *)pFVar16;
              local_938._8_8_ = uVar17;
              FPathViews::SplitFirstComponent(&local_938,&local_9e8,&local_9a8);
              if ((((int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1) != 0) &&
                  (local_868.CurPos[-1] != L'/')) && (local_868.CurPos[-1] != L'\\')) {
                if (local_868.End < local_868.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_868,1);
                }
                *local_868.CurPos = L'/';
                local_868.CurPos = local_868.CurPos + 1;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (&local_868,local_9e8.DataPtr,local_9e8.Size);
              uVar17._4_4_ = local_9a8._12_4_;
              uVar17._0_4_ = local_9a8.Size;
              uVar12 = uVar12 - 1;
              pFVar16 = (FScriptContainerElement *)local_9a8.DataPtr;
            } while (uVar12 != 0);
          }
          local_898.NumChildNodesAndFlags = 0;
          local_898.CapacityChildNodes = 0;
          local_898.RelPaths.Ptr = (FString *)0x0;
          local_898.ChildNodes.Ptr = (FTreeNode *)0x0;
          operator=(&local_898,this_00);
          local_a68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a68.Data.ArrayNum = 0;
          local_a68.Data.ArrayMax = 0;
          pFVar11 = ::FString::ConstructFromPtrSize(&local_928,local_a88.DataPtr,local_a88.Size);
          if (&local_a68 != pFVar11) {
            local_a68.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
            (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a68.Data.ArrayNum = (pFVar11->Data).ArrayNum;
            local_a68.Data.ArrayMax = (pFVar11->Data).ArrayMax;
            (pFVar11->Data).ArrayNum = 0;
            (pFVar11->Data).ArrayMax = 0;
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
          TUniquePtr<TDirectoryTree<FString>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<FString>::FTreeNode_[0]>_>
          ::Reset(&this_00->ChildNodes,(void *)0x0);
          this_00->NumChildNodesAndFlags = 0;
          this_00->CapacityChildNodes = 0;
          ::FString::AssignRange
                    (pFVar10,local_868.Base,
                     (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1));
          InsertChildNode(this_00,0,&local_a68,&local_898);
          local_918._12_4_ = local_a18._12_4_;
          local_918.Size = local_a18.Size;
          local_918.DataPtr = local_a18.DataPtr;
          pFVar10 = FindOrAdd(this_00,&local_918,local_a90);
          if (local_a68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a68.Data.AllocatorInstance.Data);
          }
          ~FTreeNode(&local_898);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
          return pFVar10;
        }
        local_a18.Size = local_9c8.Size;
        local_a18._12_4_ = local_9c8._12_4_;
        uVar14 = uVar14 + 1;
        local_a88.DataPtr = local_9b8.DataPtr;
        local_a88._8_8_ = CONCAT44(local_9b8._12_4_,local_9b8.Size);
        iVar15 = iVar15 + 1;
        local_aa8 = param_1->Size;
        local_a18.DataPtr = local_9c8.DataPtr;
        local_8f8.DataPtr._0_4_ = local_9c8.DataPtr._0_4_;
        local_8f8.DataPtr._4_4_ = local_9c8.DataPtr._4_4_;
      } while (iVar15 <= local_aa8);
    }
    local_aa0 = param_1->DataPtr;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                       ,0x404,L"Infinite loop trying to split path %.*s into components.");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FString *)(*pcVar4)();
      return pFVar10;
    }
  }
  return (FString *)this;
}

// InsertChildNode @ 148ccb440

FTreeNode * __thiscall
TDirectoryTree<FString>::FTreeNode::InsertChildNode
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

// Realloc @ 148cd7a60

void __thiscall TDirectoryTree<FString>::FTreeNode::Realloc(FTreeNode *this,int param_1)

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
    TUniquePtr<TDirectoryTree<FString>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<FString>::FTreeNode_[0]>_>
    ::Reset(&this->ChildNodes,(void *)0x0);
    TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset(&this->RelPaths,(void *)0x0);
    this->CapacityChildNodes = param_1;
  }
  return;
}

// Reset @ 148cdb0c0

void __thiscall TDirectoryTree<FString>::FTreeNode::Reset(FTreeNode *this)

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
  TUniquePtr<TDirectoryTree<FString>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<FString>::FTreeNode_[0]>_>
  ::Reset(&this->ChildNodes,(void *)0x0);
  this->NumChildNodesAndFlags = 0;
  this->CapacityChildNodes = 0;
  return;
}

// Shrink @ 148cdf940

void __thiscall TDirectoryTree<FString>::FTreeNode::Shrink(FTreeNode *this)

{
  FTreeNode *pFVar1;
  uint uVar2;
  FString *this_00;
  FTreeNode *this_01;
  FString *pFVar3;
  
  uVar2 = this->NumChildNodesAndFlags & 0x7fffffff;
  Realloc(this,uVar2);
  this_00 = (this->RelPaths).Ptr;
  pFVar3 = this_00 + uVar2;
  for (; this_00 != pFVar3; this_00 = this_00 + 1) {
    ::FString::Shrink(this_00);
  }
  this_01 = (this->ChildNodes).Ptr;
  pFVar1 = this_01 + uVar2;
  for (; this_01 != pFVar1; this_01 = this_01 + 1) {
    Shrink(this_01);
  }
  return;
}

// TryFindClosestPath @ 148ce0c50

FString * __thiscall
TDirectoryTree<FString>::FTreeNode::TryFindClosestPath
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
  FString *pFVar7;
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
    pFVar7 = (FString *)(*pcVar3)();
    return pFVar7;
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
    pFVar7 = (this->RelPaths).Ptr + iVar5;
    local_78 = (pFVar7->Data).AllocatorInstance.Data;
    iVar5 = (pFVar7->Data).ArrayNum;
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
            return (FString *)this_00;
          }
          pwVar1 = param_2->CurPos;
          pwVar2 = param_2->Base;
          FPathViews::Append<wchar_t,FString_const_&>(param_2,pFVar7);
          UE::DirectoryTree::FixupPathSeparator
                    (param_2,(int)((longlong)pwVar1 - (longlong)pwVar2 >> 1),param_3);
          return (FString *)this_00;
        }
      }
      else {
        iVar5 = -1;
        if (param_2 != (TStringBuilderBase<wchar_t> *)0x0) {
          pwVar1 = param_2->CurPos;
          pwVar2 = param_2->Base;
          FPathViews::Append<wchar_t,FString_const_&>(param_2,pFVar7);
          iVar5 = (int)((longlong)pwVar1 - (longlong)pwVar2 >> 1);
          UE::DirectoryTree::FixupPathSeparator(param_2,iVar5,param_3);
        }
        local_28._12_4_ = local_98._12_4_;
        local_28.Size = local_98.Size;
        local_28.DataPtr = local_98.DataPtr;
        pFVar7 = TryFindClosestPath(this_00,&local_28,param_2,param_3);
        if (pFVar7 != (FString *)0x0) {
          return pFVar7;
        }
        if ((int)this_00->NumChildNodesAndFlags < 0) {
          return (FString *)this_00;
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
            pFVar7 = (FString *)(*pcVar3)();
            return pFVar7;
          }
          param_2->CurPos = param_2->CurPos + -(longlong)iVar5;
        }
      }
    }
  }
  return (FString *)0x0;
}

