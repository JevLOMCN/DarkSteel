// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 14

// FTreeNode @ 142ad7aa0

FTreeNode * __thiscall
TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::
FTreeNode(FTreeNode *this,FTreeNode *param_1)

{
  (this->RelPaths).Ptr = (FString *)0x0;
  (this->ChildNodes).Ptr = (FTreeNode *)0x0;
  this->NumChildNodesAndFlags = 0;
  this->CapacityChildNodes = 0;
  operator=(this,param_1);
  return this;
}

// FTreeNode @ 142ad7ad0

FTreeNode * __thiscall
TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::
FTreeNode(FTreeNode *this)

{
  (this->RelPaths).Ptr = (FString *)0x0;
  (this->ChildNodes).Ptr = (FTreeNode *)0x0;
  this->NumChildNodesAndFlags = 0;
  this->CapacityChildNodes = 0;
  return this;
}

// ~FTreeNode @ 142adaf80

void __thiscall
TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::
~FTreeNode(FTreeNode *this)

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

// operator= @ 142adc400

FTreeNode * __thiscall
TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::
operator=(FTreeNode *this,FTreeNode *param_1)

{
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *pTVar1;
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *pTVar2;
  TUniquePtr<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0]>_>
  *pTVar3;
  TUniquePtr<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0]>_>
  *pTVar4;
  uint uVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  FTreeNode *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FString *pFVar10;
  longlong lVar11;
  FTreeNode *this_00;
  
  uVar5 = this->NumChildNodesAndFlags;
  if ((int)param_1->NumChildNodesAndFlags < 0) {
    if ((int)uVar5 < 0) {
      this->NumChildNodesAndFlags = uVar5 & 0x7fffffff;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((this->Value).Pad + 8));
    }
    this->NumChildNodesAndFlags = this->NumChildNodesAndFlags | 0x80000000;
    *(undefined8 *)(this->Value).Pad = *(undefined8 *)(param_1->Value).Pad;
    *(undefined8 *)((this->Value).Pad + 8) = *(undefined8 *)((param_1->Value).Pad + 8);
    (param_1->Value).Pad[8] = '\0';
    (param_1->Value).Pad[9] = '\0';
    (param_1->Value).Pad[10] = '\0';
    (param_1->Value).Pad[0xb] = '\0';
    (param_1->Value).Pad[0xc] = '\0';
    (param_1->Value).Pad[0xd] = '\0';
    (param_1->Value).Pad[0xe] = '\0';
    (param_1->Value).Pad[0xf] = '\0';
    uVar5 = param_1->NumChildNodesAndFlags;
    (param_1->Value).Pad[0] = '\0';
    (param_1->Value).Pad[1] = '\0';
    (param_1->Value).Pad[2] = '\0';
    (param_1->Value).Pad[3] = '\0';
    (param_1->Value).Pad[4] = '\0';
    (param_1->Value).Pad[5] = '\0';
    (param_1->Value).Pad[6] = '\0';
    (param_1->Value).Pad[7] = '\0';
    if (-1 < (int)uVar5) goto LAB_142adc487;
    param_1->NumChildNodesAndFlags = uVar5 & 0x7fffffff;
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (-1 < (int)uVar5) goto LAB_142adc487;
    this->NumChildNodesAndFlags = uVar5 & 0x7fffffff;
    pTVar9 = *(TReferenceControllerBase<1> **)((this->Value).Pad + 8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
LAB_142adc487:
  pTVar1 = &param_1->RelPaths;
  pTVar2 = &this->RelPaths;
  if (pTVar2 != pTVar1) {
    pFVar6 = pTVar2->Ptr;
    pTVar2->Ptr = pTVar1->Ptr;
    pTVar1->Ptr = (FString *)0x0;
    if (pFVar6 != (FString *)0x0) {
      lVar11 = *(longlong *)&pFVar6[-1].Data.ArrayNum;
      pFVar10 = pFVar6 + lVar11;
      while (lVar11 != 0) {
        pFVar7 = pFVar10[-1].Data.AllocatorInstance.Data;
        pFVar10 = pFVar10 + -1;
        lVar11 = lVar11 + -1;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
      }
      operator_delete__(&pFVar6[-1].Data.ArrayNum,*(longlong *)&pFVar6[-1].Data.ArrayNum * 0x10 + 8)
      ;
    }
  }
  pTVar3 = &param_1->ChildNodes;
  pTVar4 = &this->ChildNodes;
  if (pTVar4 != pTVar3) {
    pFVar8 = pTVar4->Ptr;
    pTVar4->Ptr = pTVar3->Ptr;
    pTVar3->Ptr = (FTreeNode *)0x0;
    if (pFVar8 != (FTreeNode *)0x0) {
      lVar11 = *(longlong *)&pFVar8[-1].NumChildNodesAndFlags;
      this_00 = pFVar8 + lVar11;
      for (; lVar11 != 0; lVar11 = lVar11 + -1) {
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

// ConditionalCompactNode @ 142aed950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::
ConditionalCompactNode(FString *param_1,FTreeNode *param_2)

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
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
  }
  return;
}

// Find @ 142af5f70

TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> * __thiscall
TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::Find
          (FTreeNode *this,TStringView<wchar_t> *param_1)

{
  FTreeNode *this_00;
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *pTVar5;
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
    pTVar5 = (TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *)(*pcVar2)();
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
        return (TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *)this_00;
      }
      return (TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *)0x0;
    }
  }
  return (TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *)0x0;
}

// FindOrAdd @ 142af6c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> * __thiscall
TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::
FindOrAdd(FTreeNode *this,TStringView<wchar_t> *param_1,bool *param_2)

{
  FTreeNode *this_00;
  wchar_t *pwVar1;
  code *pcVar2;
  int iVar3;
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> TVar4;
  TUniquePtr<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0]>_>
  TVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *pTVar9;
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
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FirstComponent.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x399,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *)(*pcVar2)();
    return pTVar9;
  }
  local_988._12_4_ = local_9f8._12_4_;
  local_988.Size = local_9f8.Size;
  local_988.DataPtr = local_9f8.DataPtr;
  iVar7 = UE::DirectoryTree::FindInsertionIndex
                    (this->NumChildNodesAndFlags & 0x7fffffff,&this->RelPaths,&local_988,local_a98);
  if (local_a98[0] == false) {
    uVar17 = *(undefined8 *)&param_1->Size;
    pwVar1 = param_1->DataPtr;
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
    pFVar10 = ::FString::ConstructFromPtrSize(&local_978,pwVar1,(int)uVar17);
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
    this = InsertChildNode(this,iVar7,&local_a78,&local_8e8);
    if (local_a78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a78.Data.AllocatorInstance.Data);
    }
    ~FTreeNode(&local_8e8);
    if ((int)this->NumChildNodesAndFlags < 0) {
      this->NumChildNodesAndFlags = this->NumChildNodesAndFlags & 0x7fffffff;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((this->Value).Pad + 8));
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
    this_00 = (this->ChildNodes).Ptr + iVar7;
    local_a48 = (this->RelPaths).Ptr + iVar7;
    local_9d8.Size = 0;
    local_a88.DataPtr = (wchar_t *)0x0;
    local_a88._8_8_ = (ulonglong)(uint)local_a88._12_4_ << 0x20;
    local_a08 = (local_a48->Data).AllocatorInstance.Data;
    iVar7 = (local_a48->Data).ArrayNum;
    iStack_a00 = iVar7 + -1;
    if (iVar7 == 0) {
      iStack_a00 = 0;
    }
    local_968._12_4_ = uStack_9fc;
    local_968.Size = iStack_a00;
    local_968.DataPtr = (wchar_t *)local_a08;
    FPathViews::SplitFirstComponent(&local_968,&local_9d8,&local_a88);
    if ((local_9d8.Size == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ExistingFirstComponent.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x3ab,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *)(*pcVar2)();
      return pTVar9;
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
            pTVar9 = FindOrAdd(this_00,&local_8f8,local_a90);
            return pTVar9;
          }
          *local_a90 = SUB41(this_00->NumChildNodesAndFlags >> 0x1f,0);
          if ((int)this_00->NumChildNodesAndFlags < 0) {
            return (TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *)this_00;
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
          return (TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *)this_00;
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
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((this_00->Value).Pad + 8));
          }
          TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset
                    (&this_00->RelPaths,(void *)0x0);
          TUniquePtr<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0]>_>
          ::Reset(&this_00->ChildNodes,(void *)0x0);
          uVar17 = *(undefined8 *)&param_1->Size;
          pwVar1 = param_1->DataPtr;
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
          ::FString::AssignRange(local_a48,pwVar1,(int)uVar17);
          InsertChildNode(this_00,0,&local_a58,&local_8c0);
          if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a58.Data.AllocatorInstance.Data);
          }
          TVar5.Ptr = local_8c0.ChildNodes.Ptr;
          if (local_8c0.ChildNodes.Ptr != (FTreeNode *)0x0) {
            lVar13 = *(longlong *)&local_8c0.ChildNodes.Ptr[-1].NumChildNodesAndFlags;
            this_01 = local_8c0.ChildNodes.Ptr + lVar13;
            for (; lVar13 != 0; lVar13 = lVar13 + -1) {
              this_01 = this_01 + -1;
              ~FTreeNode(this_01);
            }
            operator_delete__(&TVar5.Ptr[-1].NumChildNodesAndFlags,
                              *(longlong *)&TVar5.Ptr[-1].NumChildNodesAndFlags * 0x28 + 8);
          }
          TVar4.Ptr = local_8c0.RelPaths.Ptr;
          if (local_8c0.RelPaths.Ptr == (FString *)0x0) {
            return (TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *)this_00;
          }
          lVar13 = *(longlong *)&local_8c0.RelPaths.Ptr[-1].Data.ArrayNum;
          pFVar10 = local_8c0.RelPaths.Ptr + lVar13;
          while (lVar13 != 0) {
            pFVar16 = pFVar10[-1].Data.AllocatorInstance.Data;
            pFVar10 = pFVar10 + -1;
            lVar13 = lVar13 + -1;
            if (pFVar16 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar16);
            }
          }
          operator_delete__(&TVar4.Ptr[-1].Data.ArrayNum,
                            *(longlong *)&TVar4.Ptr[-1].Data.ArrayNum * 0x10 + 8);
          return (TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *)this_00;
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
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!NextFirstComponent.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x3d8,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *)(*pcVar2)()
          ;
          return pTVar9;
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
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!NextExistingFirstComponent.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x3dc,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *)(*pcVar2)()
          ;
          return pTVar9;
        }
        iVar3 = local_a28.Size;
        iVar7 = local_a38.Size;
        if (((local_a28.Size != local_a38.Size) ||
            (((local_a28.Size != 0 && (local_a38.Size != 0)) &&
             (iVar8 = FGenericPlatformStricmp::Strnicmp
                                (local_a28.DataPtr,local_a38.DataPtr,(longlong)local_a38.Size),
             iVar8 != 0)))) || (iVar3 != iVar7)) {
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
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((this_00->Value).Pad + 8));
          }
          TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset
                    (&this_00->RelPaths,(void *)0x0);
          TUniquePtr<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0]>_>
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
          pTVar9 = FindOrAdd(this_00,&local_918,local_a90);
          if (local_a68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a68.Data.AllocatorInstance.Data);
          }
          ~FTreeNode(&local_898);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
          return pTVar9;
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
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                       ,0x404,L"Infinite loop trying to split path %.*s into components.");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  return (TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *)this;
}

// InsertChildNode @ 142b03c20

FTreeNode * __thiscall
TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::
InsertChildNode(FTreeNode *this,int param_1,FString *param_2,FTreeNode *param_3)

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

// Realloc @ 142b0fb30

void __thiscall
TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::
Realloc(FTreeNode *this,int param_1)

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
    TUniquePtr<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0]>_>
    ::Reset(&this->ChildNodes,(void *)0x0);
    TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset(&this->RelPaths,(void *)0x0);
    this->CapacityChildNodes = param_1;
  }
  return;
}

// Remove @ 142b13c70

void __thiscall
TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::
Remove(FTreeNode *this,TStringView<wchar_t> *param_1,bool *param_2)

{
  FTreeNode *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
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
    this_00 = (this->ChildNodes).Ptr + iVar4;
    pFVar6 = (this->RelPaths).Ptr + iVar4;
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
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((this_00->Value).Pad + 8));
      ConditionalCompactNode(pFVar6,this_00);
      return;
    }
  }
  *param_2 = false;
  return;
}

// RemoveChildNodeAt @ 142b14e20

void __thiscall
TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::
RemoveChildNodeAt(FTreeNode *this,int param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  FTreeNode *pFVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar8 = this->NumChildNodesAndFlags & 0x7fffffff;
  if (((param_1 < 0) || ((int)uVar8 <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= RemoveIndex && RemoveIndex < NumChildNodes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x623,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = uVar8 - 1;
  if (param_1 < (int)uVar1) {
    lVar9 = (longlong)param_1 * 0x28;
    lVar7 = (longlong)param_1 << 4;
    uVar10 = (ulonglong)(uVar1 - param_1);
    do {
      puVar6 = (undefined8 *)
               ((longlong)&(((this->RelPaths).Ptr)->Data).AllocatorInstance.Data + lVar7);
      puVar2 = puVar6 + 2;
      if (puVar6 != puVar2) {
        if ((void *)*puVar6 != (void *)0x0) {
          FMemory::Free((void *)*puVar6);
        }
        *puVar6 = *puVar2;
        *puVar2 = 0;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar6 + 3);
        *(undefined4 *)((longlong)puVar6 + 0xc) = *(undefined4 *)((longlong)puVar6 + 0x1c);
        puVar6[3] = 0;
      }
      pFVar5 = (FTreeNode *)((((this->ChildNodes).Ptr)->Value).Pad + lVar9);
      operator=(pFVar5,pFVar5 + 1);
      lVar9 = lVar9 + 0x28;
      lVar7 = lVar7 + 0x10;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  lVar7 = (ulonglong)uVar8 - 1;
  ::FString::Empty((this->RelPaths).Ptr + lVar7);
  pFVar5 = (this->ChildNodes).Ptr;
  if ((int)pFVar5[lVar7].NumChildNodesAndFlags < 0) {
    pFVar5[lVar7].NumChildNodesAndFlags = pFVar5[lVar7].NumChildNodesAndFlags & 0x7fffffff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar5[lVar7].Value.Pad + 8));
  }
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset(&pFVar5[lVar7].RelPaths,(void *)0x0);
  TUniquePtr<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0]>_>
  ::Reset(&pFVar5[lVar7].ChildNodes,(void *)0x0);
  pFVar5[lVar7].NumChildNodesAndFlags = 0;
  pFVar5[lVar7].CapacityChildNodes = 0;
  if (((int)uVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= InNumChildNodes && (InNumChildNodes & FlagsMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x353,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->NumChildNodesAndFlags = this->NumChildNodesAndFlags & 0x80000000 | uVar1;
  return;
}

// Reset @ 142b18020

void __thiscall
TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::
Reset(FTreeNode *this)

{
  if ((int)this->NumChildNodesAndFlags < 0) {
    this->NumChildNodesAndFlags = this->NumChildNodesAndFlags & 0x7fffffff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->Value).Pad + 8));
  }
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset(&this->RelPaths,(void *)0x0);
  TUniquePtr<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0]>_>
  ::Reset(&this->ChildNodes,(void *)0x0);
  this->NumChildNodesAndFlags = 0;
  this->CapacityChildNodes = 0;
  return;
}

// Shrink @ 142b22550

void __thiscall
TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::
Shrink(FTreeNode *this)

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

// TryGetChildren @ 142b26c70

/* WARNING: Removing unreachable block (ram,0x000142b27994) */
/* WARNING: Removing unreachable block (ram,0x000142b277f5) */
/* WARNING: Removing unreachable block (ram,0x000142b2727b) */
/* WARNING: Removing unreachable block (ram,0x000142b26ec6) */
/* WARNING: Removing unreachable block (ram,0x000142b27b65) */
/* WARNING: Removing unreachable block (ram,0x000142b27059) */

bool __thiscall
TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::
TryGetChildren(FTreeNode *this,TStringBuilderBase<wchar_t> *param_1,wchar_t param_2,
              TStringView<wchar_t> *param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4,
              EDirectoryTreeGetFlags param_5)

{
  wchar_t **ppwVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  wchar_t *pwVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  FTreeNode *pFVar15;
  longlong lVar16;
  ulonglong uVar17;
  bool local_res20 [8];
  TStringView<wchar_t> local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  TStringView<wchar_t> local_268;
  ulonglong local_258;
  TStringView<wchar_t> local_250;
  TStringView<wchar_t> local_238;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  TStringView<wchar_t> local_208;
  TStringView<wchar_t> local_1f8;
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  longlong local_1c8;
  FTreeNode *local_1c0;
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
    uVar8 = this->NumChildNodesAndFlags & 0x7fffffff;
    local_258 = (ulonglong)uVar8;
    if (uVar8 == 0) {
LAB_142b27bad:
      bVar6 = true;
    }
    else {
      local_228 = 0;
      local_218 = 0;
      local_220 = 0;
      do {
        pFVar15 = (FTreeNode *)((((this->ChildNodes).Ptr)->Value).Pad + local_220);
        puVar14 = (undefined8 *)
                  ((longlong)&(((this->RelPaths).Ptr)->Data).AllocatorInstance.Data + local_218);
        local_1c0 = pFVar15;
        if ((param_5 & ImpliedChildren) == None) {
          pwVar12 = param_1->CurPos;
          iVar9 = (int)((longlong)pwVar12 - (longlong)param_1->Base >> 1);
          if (((iVar9 != 0) && (pwVar12[-1] != L'/')) && (pwVar12[-1] != L'\\')) {
            if (param_1->End < pwVar12 + 1) {
              TStringBuilderBase<wchar_t>::Extend(param_1,1);
            }
            *param_1->CurPos = L'/';
            param_1->CurPos = param_1->CurPos + 1;
          }
          iVar10 = *(int *)(puVar14 + 1) + -1;
          if (*(int *)(puVar14 + 1) == 0) {
            iVar10 = 0;
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,(wchar_t *)*puVar14,iVar10);
          UE::DirectoryTree::FixupPathSeparator(param_1,iVar9,param_2);
          if ((int)pFVar15->NumChildNodesAndFlags < 0) {
            if (param_1->End < param_1->CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(param_1,1);
            }
            *param_1->CurPos = L'\0';
            ::FString::FString(&local_2c8,param_1->Base);
            pFVar13 = (param_4->AllocatorInstance).Data;
            if (((pFVar13 <= (FScriptContainerElement *)&local_2c8) &&
                ((FScriptContainerElement *)&local_2c8 <
                 pFVar13 + (longlong)param_4->ArrayMax * 0x10)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            iVar10 = param_4->ArrayNum;
            if (iVar10 == param_4->ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
            }
            param_4->ArrayNum = iVar10 + 1;
            pFVar13 = (param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
            *(undefined8 *)pFVar13 = 0;
            *(FScriptContainerElement **)pFVar13 = local_2c8.Data.AllocatorInstance.Data;
            local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar13 + 8) = local_2c8.Data.ArrayNum;
            *(int *)(pFVar13 + 0xc) = local_2c8.Data.ArrayMax;
            local_2c8.Data.ArrayNum = 0;
            local_2c8.Data.ArrayMax = 0;
          }
          if ((-1 < (int)pFVar15->NumChildNodesAndFlags) || ((param_5 & Recursive) != None)) {
            uStack_1a0 = 0;
            local_1a8 = 0;
            local_108.DataPtr = (wchar_t *)0x0;
            local_108.Size = 0;
            local_108._12_4_ = 0;
            TryGetChildren(pFVar15,param_1,param_2,&local_108,param_4,param_5);
          }
          iVar10 = (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1);
          iVar9 = iVar10 - iVar9;
          if ((iVar10 < iVar9) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount <= Len()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                 ,0xe8,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
        }
        else {
          local_158 = (wchar_t *)*puVar14;
          local_250.DataPtr = (wchar_t *)0x0;
          local_250.Size = 0;
          local_238.DataPtr = (wchar_t *)0x0;
          local_238.Size = 0;
          iStack_150 = *(int *)(puVar14 + 1) + -1;
          if (*(int *)(puVar14 + 1) == 0) {
            iStack_150 = 0;
          }
          local_138._12_4_ = uStack_14c;
          local_138.Size = iStack_150;
          local_138.DataPtr = local_158;
          FPathViews::SplitFirstComponent(&local_138,&local_250,&local_238);
          pwVar12 = param_1->CurPos;
          lVar16 = (longlong)pwVar12 - (longlong)param_1->Base >> 1;
          local_1c8 = lVar16;
          if ((((int)lVar16 != 0) && (pwVar12[-1] != L'/')) && (pwVar12[-1] != L'\\')) {
            if (param_1->End < pwVar12 + 1) {
              TStringBuilderBase<wchar_t>::Extend(param_1,1);
            }
            *param_1->CurPos = L'/';
            param_1->CurPos = param_1->CurPos + 1;
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,local_250.DataPtr,local_250.Size);
          UE::DirectoryTree::FixupPathSeparator(param_1,(int)lVar16,param_2);
          ppwVar1 = &param_1->End;
          if (*ppwVar1 < param_1->CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(param_1,1);
          }
          *param_1->CurPos = L'\0';
          ::FString::FString(&local_2b8,param_1->Base);
          pFVar13 = (param_4->AllocatorInstance).Data;
          if (((pFVar13 <= (FScriptContainerElement *)&local_2b8) &&
              ((FScriptContainerElement *)&local_2b8 < pFVar13 + (longlong)param_4->ArrayMax * 0x10)
              ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          iVar9 = param_4->ArrayNum;
          if (iVar9 == param_4->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar9 + 1;
          pFVar13 = (param_4->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
          *(undefined8 *)pFVar13 = 0;
          *(FScriptContainerElement **)pFVar13 = local_2b8.Data.AllocatorInstance.Data;
          *(int *)(pFVar13 + 8) = local_2b8.Data.ArrayNum;
          *(int *)(pFVar13 + 0xc) = local_2b8.Data.ArrayMax;
          local_2b8.Data.ArrayNum = 0;
          local_2b8.Data.ArrayMax = 0;
          local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if ((param_5 & Recursive) != None) {
            while (local_238.Size != 0) {
              local_128._12_4_ = local_238._12_4_;
              local_128.Size = local_238.Size;
              local_128.DataPtr = local_238.DataPtr;
              FPathViews::SplitFirstComponent(&local_128,&local_250,&local_238);
              pwVar12 = param_1->CurPos;
              iVar9 = (int)((longlong)pwVar12 - (longlong)param_1->Base >> 1);
              if (((iVar9 != 0) && (pwVar12[-1] != L'/')) && (pwVar12[-1] != L'\\')) {
                if (*ppwVar1 < pwVar12 + 1) {
                  TStringBuilderBase<wchar_t>::Extend(param_1,1);
                }
                *param_1->CurPos = L'/';
                param_1->CurPos = param_1->CurPos + 1;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (param_1,local_250.DataPtr,local_250.Size);
              UE::DirectoryTree::FixupPathSeparator(param_1,iVar9,param_2);
              if (*ppwVar1 < param_1->CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(param_1,1);
              }
              *param_1->CurPos = L'\0';
              ::FString::FString(&local_2a8,param_1->Base);
              pFVar13 = (param_4->AllocatorInstance).Data;
              if (((pFVar13 <= (FScriptContainerElement *)&local_2a8) &&
                  ((FScriptContainerElement *)&local_2a8 <
                   pFVar13 + (longlong)param_4->ArrayMax * 0x10)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              iVar9 = param_4->ArrayNum;
              if (iVar9 == param_4->ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
              }
              param_4->ArrayNum = iVar9 + 1;
              pFVar13 = (param_4->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
              *(undefined8 *)pFVar13 = 0;
              *(FScriptContainerElement **)pFVar13 = local_2a8.Data.AllocatorInstance.Data;
              local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              *(int *)(pFVar13 + 8) = local_2a8.Data.ArrayNum;
              *(int *)(pFVar13 + 0xc) = local_2a8.Data.ArrayMax;
              local_2a8.Data.ArrayNum = 0;
              local_2a8.Data.ArrayMax = 0;
              lVar16 = local_1c8;
            }
            uStack_1b0 = 0;
            local_1b8 = 0;
            local_118.DataPtr = (wchar_t *)0x0;
            local_118.Size = 0;
            local_118._12_4_ = 0;
            TryGetChildren(local_1c0,param_1,param_2,&local_118,param_4,param_5);
          }
          iVar10 = (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1);
          iVar9 = iVar10 - (int)lVar16;
          if ((iVar10 < iVar9) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount <= Len()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                 ,0xe8,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
        }
        local_228 = local_228 + 1;
        local_220 = local_220 + 0x28;
        local_218 = local_218 + 0x10;
        param_1->CurPos = param_1->CurPos + -(longlong)iVar9;
      } while (local_228 < (longlong)local_258);
      bVar6 = true;
    }
  }
  else {
    local_f8.DataPtr = param_3->DataPtr;
    local_f8.Size = param_3->Size;
    local_f8._12_4_ = *(undefined4 *)&param_3->field_0xc;
    iVar10 = 0;
    local_1e8.DataPtr = (wchar_t *)0x0;
    local_1e8.Size = 0;
    local_1d8.DataPtr = (wchar_t *)0x0;
    local_1d8.Size = 0;
    FPathViews::SplitFirstComponent(&local_f8,&local_1e8,&local_1d8);
    local_e8._12_4_ = local_1e8._12_4_;
    local_e8.Size = local_1e8.Size;
    local_e8.DataPtr = local_1e8.DataPtr;
    iVar9 = UE::DirectoryTree::FindInsertionIndex
                      (this->NumChildNodesAndFlags & 0x7fffffff,&this->RelPaths,&local_e8,
                       local_res20);
    if (local_res20[0] != false) {
      local_268.DataPtr = (wchar_t *)0x0;
      local_268.Size = 0;
      local_2d8.DataPtr = (wchar_t *)0x0;
      pFVar15 = (this->ChildNodes).Ptr + iVar9;
      local_2d8.Size = 0;
      pFVar2 = (this->RelPaths).Ptr;
      local_148 = pFVar2[iVar9].Data.AllocatorInstance.Data;
      iVar9 = pFVar2[iVar9].Data.ArrayNum;
      iStack_140 = iVar9 + -1;
      if (iVar9 == 0) {
        iStack_140 = 0;
      }
      local_d8._12_4_ = uStack_13c;
      local_d8.Size = iStack_140;
      local_d8.DataPtr = (wchar_t *)local_148;
      FPathViews::SplitFirstComponent(&local_d8,&local_268,&local_2d8);
      local_c8._12_4_ = local_268._12_4_;
      local_c8.Size = local_268.Size;
      local_b8._12_4_ = local_1e8._12_4_;
      local_b8.Size = local_1e8.Size;
      local_c8.DataPtr = local_268.DataPtr;
      local_b8.DataPtr = local_1e8.DataPtr;
      bVar6 = FPathViews::Equals(&local_b8,&local_c8);
      if ((!bVar6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("FPathViews::Equals(FirstComponent, ExistingFirstComponent)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                             ,0x512,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if (-1 < param_3->Size) {
        local_48.DataPtr._0_4_ = local_1d8.DataPtr._0_4_;
        local_48.DataPtr._4_4_ = local_1d8.DataPtr._4_4_;
        local_88.DataPtr._0_4_ = local_2d8.DataPtr._0_4_;
        local_88.DataPtr._4_4_ = local_2d8.DataPtr._4_4_;
        do {
          if (local_2d8.Size == 0) {
            if (((local_1d8.Size != 0) || ((param_5 & ImpliedParent) != None)) ||
               ((int)pFVar15->NumChildNodesAndFlags < 0)) {
              local_48.Size = local_1d8.Size;
              bVar6 = TryGetChildren(pFVar15,param_1,param_2,&local_48,param_4,param_5);
              return bVar6;
            }
            goto LAB_142b2765d;
          }
          if (local_1d8.Size == 0) {
            if ((param_5 & ImpliedParent) == None) goto LAB_142b2765d;
            if ((param_5 & ImpliedChildren) != None) {
              local_88.Size = local_2d8.Size;
              FPathViews::SplitFirstComponent(&local_88,&local_268,&local_2d8);
              pwVar12 = param_1->CurPos;
              uVar17 = (longlong)pwVar12 - (longlong)param_1->Base >> 1;
              local_258 = uVar17;
              if ((((int)uVar17 != 0) && (pwVar12[-1] != L'/')) && (pwVar12[-1] != L'\\')) {
                if (param_1->End < pwVar12 + 1) {
                  TStringBuilderBase<wchar_t>::Extend(param_1,1);
                }
                *param_1->CurPos = L'/';
                param_1->CurPos = param_1->CurPos + 1;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (param_1,local_268.DataPtr,local_268.Size);
              UE::DirectoryTree::FixupPathSeparator(param_1,(int)uVar17,param_2);
              pwVar12 = TStringBuilderBase<wchar_t>::operator*(param_1);
              ::FString::FString(&local_298,pwVar12);
              pFVar13 = (param_4->AllocatorInstance).Data;
              if (((pFVar13 <= (FScriptContainerElement *)&local_298) &&
                  ((FScriptContainerElement *)&local_298 <
                   pFVar13 + (longlong)param_4->ArrayMax * 0x10)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              iVar9 = param_4->ArrayNum;
              if (iVar9 == param_4->ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
              }
              param_4->ArrayNum = iVar9 + 1;
              pFVar13 = (param_4->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
              *(undefined8 *)pFVar13 = 0;
              *(FScriptContainerElement **)pFVar13 = local_298.Data.AllocatorInstance.Data;
              *(int *)(pFVar13 + 8) = local_298.Data.ArrayNum;
              *(int *)(pFVar13 + 0xc) = local_298.Data.ArrayMax;
              local_298.Data.ArrayNum = 0;
              local_298.Data.ArrayMax = 0;
              local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if ((param_5 & Recursive) != None) {
                while (local_2d8.Size != 0) {
                  local_78._12_4_ = local_2d8._12_4_;
                  local_78.Size = local_2d8.Size;
                  local_78.DataPtr = local_2d8.DataPtr;
                  FPathViews::SplitFirstComponent(&local_78,&local_268,&local_2d8);
                  pwVar12 = param_1->CurPos;
                  iVar9 = (int)((longlong)pwVar12 - (longlong)param_1->Base >> 1);
                  if (((iVar9 != 0) && (pwVar12[-1] != L'/')) && (pwVar12[-1] != L'\\')) {
                    if (param_1->End < pwVar12 + 1) {
                      TStringBuilderBase<wchar_t>::Extend(param_1,1);
                    }
                    *param_1->CurPos = L'/';
                    param_1->CurPos = param_1->CurPos + 1;
                  }
                  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                            (param_1,local_268.DataPtr,local_268.Size);
                  UE::DirectoryTree::FixupPathSeparator(param_1,iVar9,param_2);
                  if (param_1->End < param_1->CurPos + 1) {
                    TStringBuilderBase<wchar_t>::Extend(param_1,1);
                  }
                  *param_1->CurPos = L'\0';
                  ::FString::FString(&local_288,param_1->Base);
                  pFVar13 = (param_4->AllocatorInstance).Data;
                  if (((pFVar13 <= (FScriptContainerElement *)&local_288) &&
                      ((FScriptContainerElement *)&local_288 <
                       pFVar13 + (longlong)param_4->ArrayMax * 0x10)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    uVar7 = (*pcVar4)();
                    return (bool)uVar7;
                  }
                  iVar9 = param_4->ArrayNum;
                  if (iVar9 == param_4->ArrayMax) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
                  }
                  param_4->ArrayNum = iVar9 + 1;
                  pFVar13 = (param_4->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
                  *(undefined8 *)pFVar13 = 0;
                  *(FScriptContainerElement **)pFVar13 = local_288.Data.AllocatorInstance.Data;
                  *(int *)(pFVar13 + 8) = local_288.Data.ArrayNum;
                  *(int *)(pFVar13 + 0xc) = local_288.Data.ArrayMax;
                  local_288.Data.ArrayNum = 0;
                  local_288.Data.ArrayMax = 0;
                  local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  uVar17 = local_258;
                }
                uStack_170 = 0;
                local_178 = 0;
                local_68.DataPtr = (wchar_t *)0x0;
                local_68.Size = 0;
                local_68._12_4_ = 0;
                TryGetChildren(pFVar15,param_1,param_2,&local_68,param_4,param_5);
              }
              iVar9 = (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1);
              iVar10 = iVar9 - (int)uVar17;
              if ((iVar9 < iVar10) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount <= Len()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                     ,0xe8,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              param_1->CurPos = param_1->CurPos + -(longlong)iVar10;
              return true;
            }
            if (((int)pFVar15->NumChildNodesAndFlags < 0) || ((param_5 & Recursive) != None)) {
              pwVar12 = param_1->CurPos;
              pwVar3 = param_1->Base;
              FPathViews::Append<wchar_t,TStringView<wchar_t>_&>(param_1,&local_2d8);
              UE::DirectoryTree::FixupPathSeparator
                        (param_1,(int)((longlong)pwVar12 - (longlong)pwVar3 >> 1),param_2);
              if ((int)pFVar15->NumChildNodesAndFlags < 0) {
                pwVar12 = TStringBuilderBase<wchar_t>::operator*(param_1);
                ::FString::FString(&local_278,pwVar12);
                pFVar13 = (param_4->AllocatorInstance).Data;
                if (((pFVar13 <= (FScriptContainerElement *)&local_278) &&
                    ((FScriptContainerElement *)&local_278 <
                     pFVar13 + (longlong)param_4->ArrayMax * 0x10)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  uVar7 = (*pcVar4)();
                  return (bool)uVar7;
                }
                iVar9 = param_4->ArrayNum;
                if (iVar9 == param_4->ArrayMax) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
                }
                param_4->ArrayNum = iVar9 + 1;
                pFVar13 = (param_4->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
                *(undefined8 *)pFVar13 = 0;
                *(FScriptContainerElement **)pFVar13 = local_278.Data.AllocatorInstance.Data;
                local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                *(int *)(pFVar13 + 8) = local_278.Data.ArrayNum;
                *(int *)(pFVar13 + 0xc) = local_278.Data.ArrayMax;
                local_278.Data.ArrayNum = 0;
                local_278.Data.ArrayMax = 0;
              }
              if ((param_5 & Recursive) != None) {
                uStack_160 = 0;
                local_168 = 0;
                local_58.DataPtr = (wchar_t *)0x0;
                local_58.Size = 0;
                local_58._12_4_ = 0;
                TryGetChildren(pFVar15,param_1,param_2,&local_58,param_4,param_5);
              }
            }
            goto LAB_142b27bad;
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
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("!NextFirstComponent.IsEmpty()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                                 ,0x56c,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
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
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("!NextExistingFirstComponent.IsEmpty()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                                 ,0x570,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          iVar5 = local_1f8.Size;
          iVar9 = local_208.Size;
          if ((local_1f8.Size != local_208.Size) ||
             ((((local_1f8.Size != 0 && (local_208.Size != 0)) &&
               (iVar11 = FGenericPlatformStricmp::Strnicmp
                                   (local_1f8.DataPtr,local_208.DataPtr,(longlong)local_208.Size),
               iVar11 != 0)) || (iVar5 != iVar9)))) goto LAB_142b2765d;
          local_1d8.Size = local_198.Size;
          iVar10 = iVar10 + 1;
          local_2d8.Size = local_188.Size;
          local_2d8._12_4_ = local_188._12_4_;
          local_1d8.DataPtr = local_198.DataPtr;
          local_1d8._12_4_ = local_198._12_4_;
          local_2d8.DataPtr = local_188.DataPtr;
          local_48.DataPtr._0_4_ = local_198.DataPtr._0_4_;
          local_48.DataPtr._4_4_ = local_198.DataPtr._4_4_;
          local_88.DataPtr._0_4_ = local_188.DataPtr._0_4_;
          local_88.DataPtr._4_4_ = local_188.DataPtr._4_4_;
        } while (iVar10 <= param_3->Size);
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x581,L"Infinite loop trying to split path %.*s into components.");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x584,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
LAB_142b2765d:
    bVar6 = false;
  }
  return bVar6;
}

