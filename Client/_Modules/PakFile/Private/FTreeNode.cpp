// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 13

// FTreeNode @ 142a53f00

FTreeNode * __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FTreeNode::FTreeNode(FTreeNode *this,FTreeNode *param_1)

{
  (this->RelPaths).Ptr = (FString *)0x0;
  (this->ChildNodes).Ptr = (FTreeNode *)0x0;
  this->NumChildNodesAndFlags = 0;
  this->CapacityChildNodes = 0;
  operator=(this,param_1);
  return this;
}

// FTreeNode @ 142a53f30

FTreeNode * __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FTreeNode::FTreeNode(FTreeNode *this)

{
  (this->RelPaths).Ptr = (FString *)0x0;
  (this->ChildNodes).Ptr = (FTreeNode *)0x0;
  this->NumChildNodesAndFlags = 0;
  this->CapacityChildNodes = 0;
  return this;
}

// ~FTreeNode @ 142a57750

void __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FTreeNode::~FTreeNode(FTreeNode *this)

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
                      *(longlong *)&pFVar2[-1].NumChildNodesAndFlags * 0x68 + 8);
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

// operator= @ 142a581b0

FTreeNode * __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FTreeNode::operator=(FTreeNode *this,FTreeNode *param_1)

{
  uchar *puVar1;
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *pTVar2;
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *pTVar3;
  TUniquePtr<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FTreeNode_[0]>_>
  *pTVar4;
  TUniquePtr<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FTreeNode_[0]>_>
  *pTVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  FTreeNode *pFVar11;
  longlong lVar12;
  FTreeNode *this_00;
  FString *pFVar13;
  
  uVar6 = this->NumChildNodesAndFlags;
  if ((int)param_1->NumChildNodesAndFlags < 0) {
    if ((int)uVar6 < 0) {
      this->NumChildNodesAndFlags = uVar6 & 0x7fffffff;
      (this->Value).Pad[0x48] = '\0';
      (this->Value).Pad[0x49] = '\0';
      (this->Value).Pad[0x4a] = '\0';
      (this->Value).Pad[0x4b] = '\0';
      pvVar8 = *(void **)((this->Value).Pad + 0x40);
      if (pvVar8 != (void *)0x0) {
        FMemory::Free(pvVar8);
      }
      TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this);
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
    (this->Value).Pad[0x20] = '\0';
    (this->Value).Pad[0x21] = '\0';
    (this->Value).Pad[0x22] = '\0';
    (this->Value).Pad[0x23] = '\0';
    (this->Value).Pad[0x24] = '\0';
    (this->Value).Pad[0x25] = '\0';
    (this->Value).Pad[0x26] = '\0';
    (this->Value).Pad[0x27] = '\0';
    (this->Value).Pad[0x28] = '\0';
    (this->Value).Pad[0x29] = '\0';
    (this->Value).Pad[0x2a] = '\0';
    (this->Value).Pad[0x2b] = '\0';
    (this->Value).Pad[0x2c] = 0x80;
    (this->Value).Pad[0x2d] = '\0';
    (this->Value).Pad[0x2e] = '\0';
    (this->Value).Pad[0x2f] = '\0';
    (this->Value).Pad[0x30] = 0xff;
    (this->Value).Pad[0x31] = 0xff;
    (this->Value).Pad[0x32] = 0xff;
    (this->Value).Pad[0x33] = 0xff;
    (this->Value).Pad[0x34] = '\0';
    (this->Value).Pad[0x35] = '\0';
    (this->Value).Pad[0x36] = '\0';
    (this->Value).Pad[0x37] = '\0';
    (this->Value).Pad[0x40] = '\0';
    (this->Value).Pad[0x41] = '\0';
    (this->Value).Pad[0x42] = '\0';
    (this->Value).Pad[0x43] = '\0';
    (this->Value).Pad[0x44] = '\0';
    (this->Value).Pad[0x45] = '\0';
    (this->Value).Pad[0x46] = '\0';
    (this->Value).Pad[0x47] = '\0';
    (this->Value).Pad[0x48] = '\0';
    (this->Value).Pad[0x49] = '\0';
    (this->Value).Pad[0x4a] = '\0';
    (this->Value).Pad[0x4b] = '\0';
    TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                *)this,(TSet<TTuple<FUtf8String,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>,FDefaultSetAllocator>
                        *)param_1);
    uVar6 = param_1->NumChildNodesAndFlags;
    if ((int)uVar6 < 0) {
      param_1->NumChildNodesAndFlags = uVar6 & 0x7fffffff;
      (param_1->Value).Pad[0x48] = '\0';
      (param_1->Value).Pad[0x49] = '\0';
      (param_1->Value).Pad[0x4a] = '\0';
      (param_1->Value).Pad[0x4b] = '\0';
      pvVar8 = *(void **)((param_1->Value).Pad + 0x40);
      if (pvVar8 != (void *)0x0) {
        FMemory::Free(pvVar8);
      }
      TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)param_1);
    }
  }
  else if ((int)uVar6 < 0) {
    this->NumChildNodesAndFlags = uVar6 & 0x7fffffff;
    (this->Value).Pad[0x48] = '\0';
    (this->Value).Pad[0x49] = '\0';
    (this->Value).Pad[0x4a] = '\0';
    (this->Value).Pad[0x4b] = '\0';
    pvVar8 = *(void **)((this->Value).Pad + 0x40);
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)((this->Value).Pad + 8));
    puVar1 = (this->Value).Pad + 0xc;
    (this->Value).Pad[8] = '\0';
    (this->Value).Pad[9] = '\0';
    (this->Value).Pad[10] = '\0';
    (this->Value).Pad[0xb] = '\0';
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
    }
    (this->Value).Pad[0x30] = 0xff;
    (this->Value).Pad[0x31] = 0xff;
    (this->Value).Pad[0x32] = 0xff;
    (this->Value).Pad[0x33] = 0xff;
    (this->Value).Pad[0x34] = '\0';
    (this->Value).Pad[0x35] = '\0';
    (this->Value).Pad[0x36] = '\0';
    (this->Value).Pad[0x37] = '\0';
    iVar7 = *(int *)((this->Value).Pad + 0x2c);
    (this->Value).Pad[0x28] = '\0';
    (this->Value).Pad[0x29] = '\0';
    (this->Value).Pad[0x2a] = '\0';
    (this->Value).Pad[0x2b] = '\0';
    if ((iVar7 < 0) || (0x80 < iVar7)) {
      (this->Value).Pad[0x2c] = 0x80;
      (this->Value).Pad[0x2d] = '\0';
      (this->Value).Pad[0x2e] = '\0';
      (this->Value).Pad[0x2f] = '\0';
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)((this->Value).Pad + 0x10),0);
    }
    pvVar8 = *(void **)((this->Value).Pad + 0x20);
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    pvVar8 = *(void **)(this->Value).Pad;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
  }
  pTVar2 = &param_1->RelPaths;
  pTVar3 = &this->RelPaths;
  if (pTVar3 != pTVar2) {
    pFVar9 = pTVar3->Ptr;
    pTVar3->Ptr = pTVar2->Ptr;
    pTVar2->Ptr = (FString *)0x0;
    if (pFVar9 != (FString *)0x0) {
      lVar12 = *(longlong *)&pFVar9[-1].Data.ArrayNum;
      pFVar13 = pFVar9 + lVar12;
      while (lVar12 != 0) {
        pFVar10 = pFVar13[-1].Data.AllocatorInstance.Data;
        pFVar13 = pFVar13 + -1;
        lVar12 = lVar12 + -1;
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar10);
        }
      }
      operator_delete__(&pFVar9[-1].Data.ArrayNum,*(longlong *)&pFVar9[-1].Data.ArrayNum * 0x10 + 8)
      ;
    }
  }
  pTVar4 = &param_1->ChildNodes;
  pTVar5 = &this->ChildNodes;
  if (pTVar5 != pTVar4) {
    pFVar11 = pTVar5->Ptr;
    pTVar5->Ptr = pTVar4->Ptr;
    pTVar4->Ptr = (FTreeNode *)0x0;
    if (pFVar11 != (FTreeNode *)0x0) {
      lVar12 = *(longlong *)&pFVar11[-1].NumChildNodesAndFlags;
      this_00 = pFVar11 + lVar12;
      for (; lVar12 != 0; lVar12 = lVar12 + -1) {
        this_00 = this_00 + -1;
        ~FTreeNode(this_00);
      }
      operator_delete__(&pFVar11[-1].NumChildNodesAndFlags,
                        *(longlong *)&pFVar11[-1].NumChildNodesAndFlags * 0x68 + 8);
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

// Find @ 142a6e070

TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
* __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FTreeNode::Find(FTreeNode *this,TStringView<wchar_t> *param_1)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *pTVar5;
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
    pTVar5 = (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
              *)(*pcVar2)();
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
        return (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                *)this_00;
      }
      return (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
              *)0x0;
    }
  }
  return (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
          *)0x0;
}

// FindOrAdd @ 142a6f7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
* __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FTreeNode::FindOrAdd(FTreeNode *this,TStringView<wchar_t> *param_1,bool *param_2)

{
  wchar_t *pwVar1;
  code *pcVar2;
  int iVar3;
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> TVar4;
  TUniquePtr<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FTreeNode_[0]>_>
  TVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *pTVar9;
  FString *pFVar10;
  FString *pFVar11;
  ulonglong uVar12;
  longlong lVar13;
  FTreeNode *this_00;
  uint uVar14;
  int iVar15;
  FTreeNode *this_01;
  FScriptContainerElement *pFVar16;
  undefined8 uVar17;
  undefined1 auStack_b88 [32];
  int local_b68;
  wchar_t *local_b60;
  bool local_b58 [8];
  bool *local_b50;
  TStringView<wchar_t> local_b48;
  FString local_b38;
  FString local_b28;
  FString local_b18;
  FString *local_b08;
  TStringView<wchar_t> local_af8;
  TStringView<wchar_t> local_ae8;
  TStringView<wchar_t> local_ad8;
  FScriptContainerElement *local_ac8;
  int iStack_ac0;
  undefined4 uStack_abc;
  TStringView<wchar_t> local_ab8;
  TStringView<wchar_t> local_aa8;
  TStringView<wchar_t> local_a98;
  TStringView<wchar_t> local_a88;
  TStringView<wchar_t> local_a78;
  TStringView<wchar_t> local_a68;
  TStringView<wchar_t> local_a58;
  TStringView<wchar_t> local_a48;
  FString local_a38;
  TStringView<wchar_t> local_a28;
  TStringView<wchar_t> local_a18;
  TStringView<wchar_t> local_a08;
  TStringView<wchar_t> local_9f8;
  FString local_9e8;
  TStringView<wchar_t> local_9d8;
  FString local_9c8;
  TStringView<wchar_t> local_9b8;
  FTreeNode local_9a8;
  FTreeNode local_940;
  FTreeNode local_8d8;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_b88;
  local_a58.DataPtr = param_1->DataPtr;
  local_a58.Size = param_1->Size;
  local_a58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_ab8.DataPtr = (wchar_t *)0x0;
  local_ab8.Size = 0;
  local_ad8.DataPtr = (wchar_t *)0x0;
  local_ad8.Size = 0;
  local_b50 = param_2;
  FPathViews::SplitFirstComponent(&local_a58,&local_ab8,&local_ad8);
  if ((local_ab8.Size == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FirstComponent.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x399,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
              *)(*pcVar2)();
    return pTVar9;
  }
  local_a48._12_4_ = local_ab8._12_4_;
  local_a48.Size = local_ab8.Size;
  local_a48.DataPtr = local_ab8.DataPtr;
  iVar7 = UE::DirectoryTree::FindInsertionIndex
                    (this->NumChildNodesAndFlags & 0x7fffffff,&this->RelPaths,&local_a48,local_b58);
  if (local_b58[0] == false) {
    uVar17 = *(undefined8 *)&param_1->Size;
    pwVar1 = param_1->DataPtr;
    local_9a8.Value.Pad[0] = '\0';
    local_9a8.Value.Pad[1] = '\0';
    local_9a8.Value.Pad[2] = '\0';
    local_9a8.Value.Pad[3] = '\0';
    local_9a8.Value.Pad[4] = '\0';
    local_9a8.Value.Pad[5] = '\0';
    local_9a8.Value.Pad[6] = '\0';
    local_9a8.Value.Pad[7] = '\0';
    local_9a8.Value.Pad[8] = '\0';
    local_9a8.Value.Pad[9] = '\0';
    local_9a8.Value.Pad[10] = '\0';
    local_9a8.Value.Pad[0xb] = '\0';
    local_9a8.Value.Pad[0xc] = '\0';
    local_9a8.Value.Pad[0xd] = '\0';
    local_9a8.Value.Pad[0xe] = '\0';
    local_9a8.Value.Pad[0xf] = '\0';
    *param_2 = false;
    local_9a8.Value.Pad[0x10] = '\0';
    local_9a8.Value.Pad[0x11] = '\0';
    local_9a8.Value.Pad[0x12] = '\0';
    local_9a8.Value.Pad[0x13] = '\0';
    local_9a8.Value.Pad[0x14] = '\0';
    local_9a8.Value.Pad[0x15] = '\0';
    local_9a8.Value.Pad[0x16] = '\0';
    local_9a8.Value.Pad[0x17] = '\0';
    local_9a8.Value.Pad[0x18] = '\0';
    local_9a8.Value.Pad[0x19] = '\0';
    local_9a8.Value.Pad[0x1a] = '\0';
    local_9a8.Value.Pad[0x1b] = '\0';
    local_9a8.Value.Pad[0x1c] = '\0';
    local_9a8.Value.Pad[0x1d] = '\0';
    local_9a8.Value.Pad[0x1e] = '\0';
    local_9a8.Value.Pad[0x1f] = '\0';
    local_9a8.NumChildNodesAndFlags = 0;
    local_9a8.CapacityChildNodes = 0;
    local_9a8.Value.Pad[0x20] = '\0';
    local_9a8.Value.Pad[0x21] = '\0';
    local_9a8.Value.Pad[0x22] = '\0';
    local_9a8.Value.Pad[0x23] = '\0';
    local_9a8.Value.Pad[0x24] = '\0';
    local_9a8.Value.Pad[0x25] = '\0';
    local_9a8.Value.Pad[0x26] = '\0';
    local_9a8.Value.Pad[0x27] = '\0';
    local_9a8.Value.Pad[0x28] = '\0';
    local_9a8.Value.Pad[0x29] = '\0';
    local_9a8.Value.Pad[0x2a] = '\0';
    local_9a8.Value.Pad[0x2b] = '\0';
    local_9a8.Value.Pad[0x2c] = '\0';
    local_9a8.Value.Pad[0x2d] = '\0';
    local_9a8.Value.Pad[0x2e] = '\0';
    local_9a8.Value.Pad[0x2f] = '\0';
    local_b38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_9a8.Value.Pad[0x30] = '\0';
    local_9a8.Value.Pad[0x31] = '\0';
    local_9a8.Value.Pad[0x32] = '\0';
    local_9a8.Value.Pad[0x33] = '\0';
    local_9a8.Value.Pad[0x34] = '\0';
    local_9a8.Value.Pad[0x35] = '\0';
    local_9a8.Value.Pad[0x36] = '\0';
    local_9a8.Value.Pad[0x37] = '\0';
    local_9a8.Value.Pad[0x38] = '\0';
    local_9a8.Value.Pad[0x39] = '\0';
    local_9a8.Value.Pad[0x3a] = '\0';
    local_9a8.Value.Pad[0x3b] = '\0';
    local_9a8.Value.Pad[0x3c] = '\0';
    local_9a8.Value.Pad[0x3d] = '\0';
    local_9a8.Value.Pad[0x3e] = '\0';
    local_9a8.Value.Pad[0x3f] = '\0';
    local_b38.Data.ArrayNum = 0;
    local_b38.Data.ArrayMax = 0;
    local_9a8.Value.Pad[0x40] = '\0';
    local_9a8.Value.Pad[0x41] = '\0';
    local_9a8.Value.Pad[0x42] = '\0';
    local_9a8.Value.Pad[0x43] = '\0';
    local_9a8.Value.Pad[0x44] = '\0';
    local_9a8.Value.Pad[0x45] = '\0';
    local_9a8.Value.Pad[0x46] = '\0';
    local_9a8.Value.Pad[0x47] = '\0';
    local_9a8.Value.Pad[0x48] = '\0';
    local_9a8.Value.Pad[0x49] = '\0';
    local_9a8.Value.Pad[0x4a] = '\0';
    local_9a8.Value.Pad[0x4b] = '\0';
    local_9a8.Value.Pad[0x4c] = '\0';
    local_9a8.Value.Pad[0x4d] = '\0';
    local_9a8.Value.Pad[0x4e] = '\0';
    local_9a8.Value.Pad[0x4f] = '\0';
    local_9a8.RelPaths.Ptr = (FString *)0x0;
    local_9a8.ChildNodes.Ptr = (FTreeNode *)0x0;
    pFVar10 = ::FString::ConstructFromPtrSize(&local_a38,pwVar1,(int)uVar17);
    if (&local_b38 != pFVar10) {
      local_b38.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b38.Data.ArrayNum = (pFVar10->Data).ArrayNum;
      local_b38.Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a38.Data.AllocatorInstance.Data);
    }
    this = InsertChildNode(this,iVar7,&local_b38,&local_9a8);
    if (local_b38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b38.Data.AllocatorInstance.Data);
    }
    ~FTreeNode(&local_9a8);
    SetDefaultValue(this);
  }
  else {
    iVar15 = 0;
    local_a98.DataPtr = (wchar_t *)0x0;
    this_01 = (this->ChildNodes).Ptr + iVar7;
    local_b08 = (this->RelPaths).Ptr + iVar7;
    local_a98.Size = 0;
    local_b48.DataPtr = (wchar_t *)0x0;
    local_b48._8_8_ = (ulonglong)(uint)local_b48._12_4_ << 0x20;
    local_ac8 = (local_b08->Data).AllocatorInstance.Data;
    iVar7 = (local_b08->Data).ArrayNum;
    iStack_ac0 = iVar7 + -1;
    if (iVar7 == 0) {
      iStack_ac0 = 0;
    }
    local_a28._12_4_ = uStack_abc;
    local_a28.Size = iStack_ac0;
    local_a28.DataPtr = (wchar_t *)local_ac8;
    FPathViews::SplitFirstComponent(&local_a28,&local_a98,&local_b48);
    if ((local_a98.Size == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ExistingFirstComponent.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x3ab,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                *)(*pcVar2)();
      return pTVar9;
    }
    local_b68 = param_1->Size;
    uVar14 = 1;
    if (-1 < local_b68) {
      local_9b8.DataPtr._0_4_ = local_ad8.DataPtr._0_4_;
      local_9b8.DataPtr._4_4_ = local_ad8.DataPtr._4_4_;
      do {
        if (local_b48.Size == 0) {
          if (local_ad8.Size != 0) {
            local_9b8.Size = local_ad8.Size;
            pTVar9 = FindOrAdd(this_01,&local_9b8,local_b50);
            return pTVar9;
          }
          *local_b50 = SUB41(this_01->NumChildNodesAndFlags >> 0x1f,0);
          if ((int)this_01->NumChildNodesAndFlags < 0) {
            return (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                    *)this_01;
          }
          SetDefaultValue(this_01);
          return (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                  *)this_01;
        }
        if (local_ad8.Size == 0) {
          local_940.NumChildNodesAndFlags = 0;
          local_940.CapacityChildNodes = 0;
          local_940.RelPaths.Ptr = (FString *)0x0;
          local_940.ChildNodes.Ptr = (FTreeNode *)0x0;
          *local_b50 = false;
          operator=(&local_940,this_01);
          local_b18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b18.Data.ArrayNum = 0;
          local_b18.Data.ArrayMax = 0;
          pFVar10 = ::FString::ConstructFromPtrSize(&local_9c8,local_b48.DataPtr,local_b48.Size);
          if (&local_b18 != pFVar10) {
            local_b18.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
            (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_b18.Data.ArrayNum = (pFVar10->Data).ArrayNum;
            local_b18.Data.ArrayMax = (pFVar10->Data).ArrayMax;
            (pFVar10->Data).ArrayNum = 0;
            (pFVar10->Data).ArrayMax = 0;
          }
          if (local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
          }
          Reset(this_01);
          SetDefaultValue(this_01);
          ::FString::AssignRange(local_b08,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
          InsertChildNode(this_01,0,&local_b18,&local_940);
          if (local_b18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b18.Data.AllocatorInstance.Data);
          }
          TVar5.Ptr = local_940.ChildNodes.Ptr;
          if (local_940.ChildNodes.Ptr != (FTreeNode *)0x0) {
            lVar13 = *(longlong *)&local_940.ChildNodes.Ptr[-1].NumChildNodesAndFlags;
            this_00 = local_940.ChildNodes.Ptr + lVar13;
            for (; lVar13 != 0; lVar13 = lVar13 + -1) {
              this_00 = this_00 + -1;
              ~FTreeNode(this_00);
            }
            operator_delete__(&TVar5.Ptr[-1].NumChildNodesAndFlags,
                              *(longlong *)&TVar5.Ptr[-1].NumChildNodesAndFlags * 0x68 + 8);
          }
          TVar4.Ptr = local_940.RelPaths.Ptr;
          if (local_940.RelPaths.Ptr == (FString *)0x0) {
            return (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                    *)this_01;
          }
          lVar13 = *(longlong *)&local_940.RelPaths.Ptr[-1].Data.ArrayNum;
          pFVar10 = local_940.RelPaths.Ptr + lVar13;
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
          return (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                  *)this_01;
        }
        local_ae8.DataPtr = (wchar_t *)0x0;
        local_ae8.Size = 0;
        local_a88.DataPtr = (wchar_t *)0x0;
        local_a88.Size = 0;
        local_a18.DataPtr._0_4_ = local_9b8.DataPtr._0_4_;
        local_a18.DataPtr._4_4_ = local_9b8.DataPtr._4_4_;
        local_a18.Size = local_ad8.Size;
        FPathViews::SplitFirstComponent(&local_a18,&local_ae8,&local_a88);
        if ((local_ae8.Size == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!NextFirstComponent.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x3d8,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                    *)(*pcVar2)();
          return pTVar9;
        }
        local_a08.DataPtr = local_b48.DataPtr;
        local_a08.Size = local_b48.Size;
        local_a08._12_4_ = local_b48._12_4_;
        local_af8.DataPtr = (wchar_t *)0x0;
        local_af8.Size = 0;
        local_a78.DataPtr = (wchar_t *)0x0;
        local_a78.Size = 0;
        FPathViews::SplitFirstComponent(&local_a08,&local_af8,&local_a78);
        if ((local_af8.Size == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!NextExistingFirstComponent.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x3dc,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                    *)(*pcVar2)();
          return pTVar9;
        }
        iVar3 = local_ae8.Size;
        iVar7 = local_af8.Size;
        if (((local_ae8.Size != local_af8.Size) ||
            (((local_ae8.Size != 0 && (local_af8.Size != 0)) &&
             (iVar8 = FGenericPlatformStricmp::Strnicmp
                                (local_ae8.DataPtr,local_af8.DataPtr,(longlong)local_af8.Size),
             iVar8 != 0)))) || (iVar3 != iVar7)) {
          pFVar10 = local_b08;
          local_868.Base = local_848;
          local_868.CurPos = local_848;
          local_868.bIsDynamic = false;
          local_868.bIsExternal = false;
          local_868.End = (wchar_t *)local_48;
          local_ac8 = (local_b08->Data).AllocatorInstance.Data;
          iVar7 = (local_b08->Data).ArrayNum;
          iStack_ac0 = iVar7 + -1;
          if (iVar7 == 0) {
            iStack_ac0 = 0;
          }
          if (0 < (int)uVar14) {
            uVar17._4_4_ = uStack_abc;
            uVar17._0_4_ = iStack_ac0;
            uVar12 = (ulonglong)uVar14;
            pFVar16 = local_ac8;
            do {
              local_aa8.DataPtr = (wchar_t *)0x0;
              local_aa8.Size = 0;
              local_a68.DataPtr = (wchar_t *)0x0;
              local_a68.Size = 0;
              local_9f8.DataPtr = (wchar_t *)pFVar16;
              local_9f8._8_8_ = uVar17;
              FPathViews::SplitFirstComponent(&local_9f8,&local_aa8,&local_a68);
              if ((((int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1) != 0) &&
                  (local_868.CurPos[-1] != L'/')) && (local_868.CurPos[-1] != L'\\')) {
                if (local_868.End < local_868.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_868,1);
                }
                *local_868.CurPos = L'/';
                local_868.CurPos = local_868.CurPos + 1;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (&local_868,local_aa8.DataPtr,local_aa8.Size);
              uVar17._4_4_ = local_a68._12_4_;
              uVar17._0_4_ = local_a68.Size;
              uVar12 = uVar12 - 1;
              pFVar16 = (FScriptContainerElement *)local_a68.DataPtr;
            } while (uVar12 != 0);
          }
          local_8d8.NumChildNodesAndFlags = 0;
          local_8d8.CapacityChildNodes = 0;
          local_8d8.RelPaths.Ptr = (FString *)0x0;
          local_8d8.ChildNodes.Ptr = (FTreeNode *)0x0;
          operator=(&local_8d8,this_01);
          local_b28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b28.Data.ArrayNum = 0;
          local_b28.Data.ArrayMax = 0;
          pFVar11 = ::FString::ConstructFromPtrSize(&local_9e8,local_b48.DataPtr,local_b48.Size);
          if (&local_b28 != pFVar11) {
            local_b28.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
            (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_b28.Data.ArrayNum = (pFVar11->Data).ArrayNum;
            local_b28.Data.ArrayMax = (pFVar11->Data).ArrayMax;
            (pFVar11->Data).ArrayNum = 0;
            (pFVar11->Data).ArrayMax = 0;
          }
          if (local_9e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_9e8.Data.AllocatorInstance.Data);
          }
          Reset(this_01);
          ::FString::AssignRange
                    (pFVar10,local_868.Base,
                     (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1));
          InsertChildNode(this_01,0,&local_b28,&local_8d8);
          local_9d8._12_4_ = local_ad8._12_4_;
          local_9d8.Size = local_ad8.Size;
          local_9d8.DataPtr = local_ad8.DataPtr;
          pTVar9 = FindOrAdd(this_01,&local_9d8,local_b50);
          if (local_b28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b28.Data.AllocatorInstance.Data);
          }
          ~FTreeNode(&local_8d8);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
          return pTVar9;
        }
        local_ad8.Size = local_a88.Size;
        local_ad8._12_4_ = local_a88._12_4_;
        uVar14 = uVar14 + 1;
        local_b48.DataPtr = local_a78.DataPtr;
        local_b48._8_8_ = CONCAT44(local_a78._12_4_,local_a78.Size);
        iVar15 = iVar15 + 1;
        local_b68 = param_1->Size;
        local_ad8.DataPtr = local_a88.DataPtr;
        local_9b8.DataPtr._0_4_ = local_a88.DataPtr._0_4_;
        local_9b8.DataPtr._4_4_ = local_a88.DataPtr._4_4_;
      } while (iVar15 <= local_b68);
    }
    local_b60 = param_1->DataPtr;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                       ,0x404,L"Infinite loop trying to split path %.*s into components.");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                *)(*pcVar2)();
      return pTVar9;
    }
  }
  return (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
          *)this;
}

// GetAllocatedSize @ 142a72380

ulong64 __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FTreeNode::GetAllocatedSize(FTreeNode *this)

{
  uint uVar1;
  ulong64 uVar2;
  FString *pFVar3;
  ulong64 uVar4;
  FTreeNode *pFVar5;
  FTreeNode *this_00;
  FString *pFVar6;
  
  pFVar3 = (this->RelPaths).Ptr;
  uVar4 = (longlong)this->CapacityChildNodes * 0x78;
  uVar1 = this->NumChildNodesAndFlags & 0x7fffffff;
  pFVar6 = pFVar3 + uVar1;
  for (; pFVar3 != pFVar6; pFVar3 = pFVar3 + 1) {
    uVar4 = uVar4 + (longlong)(pFVar3->Data).ArrayMax * 2;
  }
  this_00 = (this->ChildNodes).Ptr;
  pFVar5 = this_00 + uVar1;
  for (; this_00 != pFVar5; this_00 = this_00 + 1) {
    uVar2 = GetAllocatedSize(this_00);
    uVar4 = uVar4 + uVar2;
  }
  return uVar4;
}

// InsertChildNode @ 142a7edb0

FTreeNode * __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FTreeNode::InsertChildNode(FTreeNode *this,int param_1,FString *param_2,FTreeNode *param_3)

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
    lVar15 = (ulonglong)uVar9 * 0x68;
    lVar12 = (ulonglong)uVar9 * 0x68;
    lVar14 = (ulonglong)uVar9 << 4;
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
      lVar12 = lVar12 + -0x68;
      lVar14 = lVar14 + -0x10;
      lVar15 = lVar15 + -0x68;
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

// Realloc @ 142a92540

void __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FTreeNode::Realloc(FTreeNode *this,int param_1)

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
          pFVar11 = (FTreeNode *)((pFVar11->Value).Pad + 0x10);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar13;
      uVar8 = SUB168(ZEXT816(0x68) * auVar6,0);
      if (SUB168(ZEXT816(0x68) * auVar6,8) != 0) {
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
        puVar10 = puVar10 + 0xc;
        do {
          puVar10[-1] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10 = puVar10 + 0xd;
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
          pFVar11 = (FTreeNode *)((pFVar11->Value).Pad + 0x10);
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
                          *(longlong *)&pFVar11[-1].NumChildNodesAndFlags * 0x68 + 8);
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
    TUniquePtr<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FTreeNode_[0]>_>
    ::Reset(&this->ChildNodes,(void *)0x0);
    TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset(&this->RelPaths,(void *)0x0);
    this->CapacityChildNodes = param_1;
  }
  return;
}

// Reset @ 142a99ee0

void __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FTreeNode::Reset(FTreeNode *this)

{
  void *pvVar1;
  FTreeNode *pFVar2;
  FTreeNode *this_00;
  longlong lVar3;
  
  if ((int)this->NumChildNodesAndFlags < 0) {
    this->NumChildNodesAndFlags = this->NumChildNodesAndFlags & 0x7fffffff;
    (this->Value).Pad[0x48] = '\0';
    (this->Value).Pad[0x49] = '\0';
    (this->Value).Pad[0x4a] = '\0';
    (this->Value).Pad[0x4b] = '\0';
    pvVar1 = *(void **)((this->Value).Pad + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this);
  }
  TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset(&this->RelPaths,(void *)0x0);
  pFVar2 = (this->ChildNodes).Ptr;
  (this->ChildNodes).Ptr = (FTreeNode *)0x0;
  if (pFVar2 != (FTreeNode *)0x0) {
    lVar3 = *(longlong *)&pFVar2[-1].NumChildNodesAndFlags;
    this_00 = pFVar2 + lVar3;
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      this_00 = this_00 + -1;
      ~FTreeNode(this_00);
    }
    operator_delete__(&pFVar2[-1].NumChildNodesAndFlags,
                      *(longlong *)&pFVar2[-1].NumChildNodesAndFlags * 0x68 + 8);
  }
  this->NumChildNodesAndFlags = 0;
  this->CapacityChildNodes = 0;
  return;
}

// SetDefaultValue @ 142a9fd90

void __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FTreeNode::SetDefaultValue(FTreeNode *this)

{
  void *pvVar1;
  
  if ((int)this->NumChildNodesAndFlags < 0) {
    this->NumChildNodesAndFlags = this->NumChildNodesAndFlags & 0x7fffffff;
    (this->Value).Pad[0x48] = '\0';
    (this->Value).Pad[0x49] = '\0';
    (this->Value).Pad[0x4a] = '\0';
    (this->Value).Pad[0x4b] = '\0';
    pvVar1 = *(void **)((this->Value).Pad + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this);
  }
  this->NumChildNodesAndFlags = this->NumChildNodesAndFlags | 0x80000000;
  (this->Value).Pad[0x10] = '\0';
  (this->Value).Pad[0x11] = '\0';
  (this->Value).Pad[0x12] = '\0';
  (this->Value).Pad[0x13] = '\0';
  (this->Value).Pad[0x14] = '\0';
  (this->Value).Pad[0x15] = '\0';
  (this->Value).Pad[0x16] = '\0';
  (this->Value).Pad[0x17] = '\0';
  (this->Value).Pad[0x18] = '\0';
  (this->Value).Pad[0x19] = '\0';
  (this->Value).Pad[0x1a] = '\0';
  (this->Value).Pad[0x1b] = '\0';
  (this->Value).Pad[0x1c] = '\0';
  (this->Value).Pad[0x1d] = '\0';
  (this->Value).Pad[0x1e] = '\0';
  (this->Value).Pad[0x1f] = '\0';
  (this->Value).Pad[0x38] = '\0';
  (this->Value).Pad[0x39] = '\0';
  (this->Value).Pad[0x3a] = '\0';
  (this->Value).Pad[0x3b] = '\0';
  (this->Value).Pad[0x3c] = '\0';
  (this->Value).Pad[0x3d] = '\0';
  (this->Value).Pad[0x3e] = '\0';
  (this->Value).Pad[0x3f] = '\0';
  (this->Value).Pad[0x48] = '\0';
  (this->Value).Pad[0x49] = '\0';
  (this->Value).Pad[0x4a] = '\0';
  (this->Value).Pad[0x4b] = '\0';
  (this->Value).Pad[0x4c] = '\0';
  (this->Value).Pad[0x4d] = '\0';
  (this->Value).Pad[0x4e] = '\0';
  (this->Value).Pad[0x4f] = '\0';
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
  (this->Value).Pad[0x20] = '\0';
  (this->Value).Pad[0x21] = '\0';
  (this->Value).Pad[0x22] = '\0';
  (this->Value).Pad[0x23] = '\0';
  (this->Value).Pad[0x24] = '\0';
  (this->Value).Pad[0x25] = '\0';
  (this->Value).Pad[0x26] = '\0';
  (this->Value).Pad[0x27] = '\0';
  (this->Value).Pad[0x28] = '\0';
  (this->Value).Pad[0x29] = '\0';
  (this->Value).Pad[0x2a] = '\0';
  (this->Value).Pad[0x2b] = '\0';
  (this->Value).Pad[0x2c] = 0x80;
  (this->Value).Pad[0x2d] = '\0';
  (this->Value).Pad[0x2e] = '\0';
  (this->Value).Pad[0x2f] = '\0';
  (this->Value).Pad[0x34] = '\0';
  (this->Value).Pad[0x35] = '\0';
  (this->Value).Pad[0x36] = '\0';
  (this->Value).Pad[0x37] = '\0';
  (this->Value).Pad[0x30] = 0xff;
  (this->Value).Pad[0x31] = 0xff;
  (this->Value).Pad[0x32] = 0xff;
  (this->Value).Pad[0x33] = 0xff;
  (this->Value).Pad[0x40] = '\0';
  (this->Value).Pad[0x41] = '\0';
  (this->Value).Pad[0x42] = '\0';
  (this->Value).Pad[0x43] = '\0';
  (this->Value).Pad[0x44] = '\0';
  (this->Value).Pad[0x45] = '\0';
  (this->Value).Pad[0x46] = '\0';
  (this->Value).Pad[0x47] = '\0';
  (this->Value).Pad[0x48] = '\0';
  (this->Value).Pad[0x49] = '\0';
  (this->Value).Pad[0x4a] = '\0';
  (this->Value).Pad[0x4b] = '\0';
  return;
}

// Shrink @ 142aa04d0

void __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FTreeNode::Shrink(FTreeNode *this)

{
  uint uVar1;
  FString *this_00;
  FTreeNode *this_01;
  FString *pFVar2;
  FTreeNode *pFVar3;
  
  uVar1 = this->NumChildNodesAndFlags & 0x7fffffff;
  Realloc(this,uVar1);
  this_00 = (this->RelPaths).Ptr;
  pFVar2 = this_00 + uVar1;
  for (; this_00 != pFVar2; this_00 = this_00 + 1) {
    ::FString::Shrink(this_00);
  }
  this_01 = (this->ChildNodes).Ptr;
  pFVar3 = this_01 + uVar1;
  for (; this_01 != pFVar3; this_01 = this_01 + 1) {
    Shrink(this_01);
  }
  return;
}

// TryGetChildren @ 142aa5620

/* WARNING: Removing unreachable block (ram,0x000142aa6344) */
/* WARNING: Removing unreachable block (ram,0x000142aa61a5) */
/* WARNING: Removing unreachable block (ram,0x000142aa5c2b) */
/* WARNING: Removing unreachable block (ram,0x000142aa5876) */
/* WARNING: Removing unreachable block (ram,0x000142aa6515) */
/* WARNING: Removing unreachable block (ram,0x000142aa5a09) */

bool __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FTreeNode::TryGetChildren
          (FTreeNode *this,TStringBuilderBase<wchar_t> *param_1,wchar_t param_2,
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
  longlong lVar15;
  ulonglong uVar16;
  FTreeNode *pFVar17;
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
LAB_142aa655d:
      bVar6 = true;
    }
    else {
      local_228 = 0;
      local_218 = 0;
      local_220 = 0;
      do {
        pFVar17 = (FTreeNode *)((((this->ChildNodes).Ptr)->Value).Pad + local_220);
        puVar14 = (undefined8 *)
                  ((longlong)&(((this->RelPaths).Ptr)->Data).AllocatorInstance.Data + local_218);
        local_1c0 = pFVar17;
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
          if ((int)pFVar17->NumChildNodesAndFlags < 0) {
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
          if ((-1 < (int)pFVar17->NumChildNodesAndFlags) || ((param_5 & Recursive) != None)) {
            uStack_1a0 = 0;
            local_1a8 = 0;
            local_108.DataPtr = (wchar_t *)0x0;
            local_108.Size = 0;
            local_108._12_4_ = 0;
            TryGetChildren(pFVar17,param_1,param_2,&local_108,param_4,param_5);
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
          lVar15 = (longlong)pwVar12 - (longlong)param_1->Base >> 1;
          local_1c8 = lVar15;
          if ((((int)lVar15 != 0) && (pwVar12[-1] != L'/')) && (pwVar12[-1] != L'\\')) {
            if (param_1->End < pwVar12 + 1) {
              TStringBuilderBase<wchar_t>::Extend(param_1,1);
            }
            *param_1->CurPos = L'/';
            param_1->CurPos = param_1->CurPos + 1;
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,local_250.DataPtr,local_250.Size);
          UE::DirectoryTree::FixupPathSeparator(param_1,(int)lVar15,param_2);
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
              lVar15 = local_1c8;
            }
            uStack_1b0 = 0;
            local_1b8 = 0;
            local_118.DataPtr = (wchar_t *)0x0;
            local_118.Size = 0;
            local_118._12_4_ = 0;
            TryGetChildren(local_1c0,param_1,param_2,&local_118,param_4,param_5);
          }
          iVar10 = (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1);
          iVar9 = iVar10 - (int)lVar15;
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
        local_220 = local_220 + 0x68;
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
      pFVar2 = (this->RelPaths).Ptr;
      local_268.DataPtr = (wchar_t *)0x0;
      pFVar17 = (this->ChildNodes).Ptr + iVar9;
      local_268.Size = 0;
      local_2d8.DataPtr = (wchar_t *)0x0;
      local_2d8.Size = 0;
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
               ((int)pFVar17->NumChildNodesAndFlags < 0)) {
              local_48.Size = local_1d8.Size;
              bVar6 = TryGetChildren(pFVar17,param_1,param_2,&local_48,param_4,param_5);
              return bVar6;
            }
            goto LAB_142aa600d;
          }
          if (local_1d8.Size == 0) {
            if ((param_5 & ImpliedParent) == None) goto LAB_142aa600d;
            if ((param_5 & ImpliedChildren) != None) {
              local_88.Size = local_2d8.Size;
              FPathViews::SplitFirstComponent(&local_88,&local_268,&local_2d8);
              pwVar12 = param_1->CurPos;
              uVar16 = (longlong)pwVar12 - (longlong)param_1->Base >> 1;
              local_258 = uVar16;
              if ((((int)uVar16 != 0) && (pwVar12[-1] != L'/')) && (pwVar12[-1] != L'\\')) {
                if (param_1->End < pwVar12 + 1) {
                  TStringBuilderBase<wchar_t>::Extend(param_1,1);
                }
                *param_1->CurPos = L'/';
                param_1->CurPos = param_1->CurPos + 1;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (param_1,local_268.DataPtr,local_268.Size);
              UE::DirectoryTree::FixupPathSeparator(param_1,(int)uVar16,param_2);
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
                  uVar16 = local_258;
                }
                uStack_170 = 0;
                local_178 = 0;
                local_68.DataPtr = (wchar_t *)0x0;
                local_68.Size = 0;
                local_68._12_4_ = 0;
                TryGetChildren(pFVar17,param_1,param_2,&local_68,param_4,param_5);
              }
              iVar9 = (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1);
              iVar10 = iVar9 - (int)uVar16;
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
            if (((int)pFVar17->NumChildNodesAndFlags < 0) || ((param_5 & Recursive) != None)) {
              pwVar12 = param_1->CurPos;
              pwVar3 = param_1->Base;
              FPathViews::Append<wchar_t,TStringView<wchar_t>_&>(param_1,&local_2d8);
              UE::DirectoryTree::FixupPathSeparator
                        (param_1,(int)((longlong)pwVar12 - (longlong)pwVar3 >> 1),param_2);
              if ((int)pFVar17->NumChildNodesAndFlags < 0) {
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
                TryGetChildren(pFVar17,param_1,param_2,&local_58,param_4,param_5);
              }
            }
            goto LAB_142aa655d;
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
               iVar11 != 0)) || (iVar5 != iVar9)))) goto LAB_142aa600d;
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
LAB_142aa600d:
    bVar6 = false;
  }
  return bVar6;
}

