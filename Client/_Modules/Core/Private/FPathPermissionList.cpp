// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 43

// FPathPermissionList @ 141917230

FPathPermissionList * __thiscall
FPathPermissionList::FPathPermissionList(FPathPermissionList *this,EPathPermissionListType param_1)

{
  (this->DenyTree).PathSeparator = L'/';
  (this->DenyTree).bPathSeparatorInitialized = false;
  (this->DenyTree).bNeedDriveWithoutPathFixup = false;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->DenyTree).Root.RelPaths.Ptr = (FString *)0x0;
  (this->DenyTree).Root.ChildNodes.Ptr = (FTreeNode *)0x0;
  (this->DenyTree).Root.NumChildNodesAndFlags = 0;
  (this->DenyTree).Root.CapacityChildNodes = 0;
  (this->DenyTree).NumPaths = 0;
  this->_padding_ = (longlong)&___7FPathPermissionList__6B_;
  (this->AllowTree).Root.RelPaths.Ptr = (FString *)0x0;
  (this->AllowTree).Root.ChildNodes.Ptr = (FTreeNode *)0x0;
  (this->AllowTree).Root.NumChildNodesAndFlags = 0;
  (this->AllowTree).Root.CapacityChildNodes = 0;
  (this->AllowTree).NumPaths = 0;
  (this->AllowTree).PathSeparator = L'/';
  (this->AllowTree).bPathSeparatorInitialized = false;
  (this->AllowTree).bNeedDriveWithoutPathFixup = false;
  (this->DenyListAll).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DenyListAll).ArrayNum = 0;
  (this->DenyListAll).ArrayMax = 0;
  *(undefined8 *)&this->OnFilterChangedDelegate = 0;
  *(undefined8 *)&(this->OnFilterChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnFilterChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnFilterChangedDelegate).field_0x18 = 2;
  this->bSuppressOnFilterChanged = false;
  this->ListType = param_1;
  return this;
}

// ~FPathPermissionList @ 14191bf90

void __thiscall FPathPermissionList::~FPathPermissionList(FPathPermissionList *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FPathPermissionList__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnFilterChangedDelegate).field_0x8,
             *(int *)&(this->OnFilterChangedDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnFilterChangedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFilterChangedDelegate);
  pFVar4 = (this->DenyListAll).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::~FTreeNode
            (&(this->AllowTree).Root);
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::~FTreeNode
            (&(this->DenyTree).Root);
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// operator() @ 14191f180

void __thiscall
`FPathPermissionList::ToString'::__l2::<lambda_1>::operator()
          (void *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  int iVar2;
  int iVar3;
  TStringBuilderBase<wchar_t> *pTVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  FString *pFVar7;
  FName *pFVar8;
  int iVar9;
  FName local_res8;
  FString local_38;
  
  AlgoImpl::
  IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
            ((FName *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
             local_res8.ComparisonIndex.Value._0_1_,(FNameLexicalLess *)&local_res8);
  pTVar4 = *(TStringBuilderBase<wchar_t> **)this;
  if (pTVar4->End < pTVar4->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar4,1);
  }
  bVar6 = true;
  *pTVar4->CurPos = L'(';
  pTVar4->CurPos = pTVar4->CurPos + 1;
  pFVar8 = (FName *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar8 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar8 == pFVar1) break;
    local_res8 = *pFVar8;
    if (bVar6) {
      bVar6 = false;
    }
    else {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(*(TStringBuilderBase<wchar_t> **)this,L", ",2);
    }
    pTVar4 = *(TStringBuilderBase<wchar_t> **)this;
    pFVar7 = ::FName::ToString(&local_res8,&local_38);
    iVar3 = (pFVar7->Data).ArrayNum;
    iVar9 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar9 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (pTVar4,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar9);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar8 = pFVar8 + 1;
  }
  pTVar4 = *(TStringBuilderBase<wchar_t> **)this;
  if (pTVar4->End < pTVar4->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar4,1);
  }
  *pTVar4->CurPos = L')';
  pTVar4->CurPos = pTVar4->CurPos + 1;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// operator() @ 141921400

void __thiscall
`FPathPermissionList::ToString'::__l2::<lambda_2>::operator()
          (void *this,TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *param_1)

{
  FName *pFVar1;
  FIdentityFunctor FVar2;
  int iVar3;
  TStringBuilderBase<wchar_t> *pTVar4;
  undefined8 *puVar5;
  FScriptContainerElement *_Src;
  bool bVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  FString *pFVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  int iVar13;
  int iVar14;
  ForAnyElementType FVar15;
  FName local_res18;
  undefined1 local_res20 [8];
  ForAnyElementType local_98;
  undefined8 uStack_90;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  
  uStack_90 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_78.DataPtr = (wchar_t *)0x0;
  local_78.Size = 0;
  local_78._12_4_ = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::TryGetChildren
            (param_1,&local_78,&local_88,ImpliedParent|Recursive);
  AlgoImpl::IntroSortInternal<FString,int,FIdentityFunctor,TLess<void>_>
            ((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum,
             local_res18.ComparisonIndex.Value._0_1_,
             (TLess<void>)local_res18.ComparisonIndex.Value._0_1_);
  uVar7 = local_88._8_8_;
  uVar8 = (ulonglong)local_88.ArrayNum;
  pFVar11 = local_88.AllocatorInstance.Data + uVar8 * 0x10;
  FVar15.Data = local_88.AllocatorInstance.Data;
  FVar2 = local_res18.ComparisonIndex.Value._0_1_;
  while( true ) {
    if (local_88.ArrayNum != (int)uVar8) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res18);
    }
    if (FVar15.Data == pFVar11) break;
    pTVar4 = *(TStringBuilderBase<wchar_t> **)this;
    if (pTVar4->End < pTVar4->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar4,1);
    }
    *pTVar4->CurPos = L'\t';
    pTVar4->CurPos = pTVar4->CurPos + 1;
    pTVar4 = *(TStringBuilderBase<wchar_t> **)this;
    if (pTVar4->End < pTVar4->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar4,1);
    }
    *pTVar4->CurPos = L'\"';
    pTVar4->CurPos = pTVar4->CurPos + 1;
    iVar13 = *(int *)(FVar15.Data + 8) + -1;
    if (*(int *)(FVar15.Data + 8) == 0) {
      iVar13 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (*(TStringBuilderBase<wchar_t> **)this,*(wchar_t **)FVar15.Data,iVar13);
    pTVar4 = *(TStringBuilderBase<wchar_t> **)this;
    if (pTVar4->End < pTVar4->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar4,1);
    }
    *pTVar4->CurPos = L'\"';
    pTVar4->CurPos = pTVar4->CurPos + 1;
    pTVar4 = *(TStringBuilderBase<wchar_t> **)this;
    if (pTVar4->End < pTVar4->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar4,1);
    }
    *pTVar4->CurPos = L' ';
    pTVar4->CurPos = pTVar4->CurPos + 1;
    local_78.DataPtr = *(wchar_t **)FVar15.Data;
    puVar5 = *(undefined8 **)((longlong)this + 8);
    local_68.Size = *(int *)(FVar15.Data + 8) + -1;
    if (*(int *)(FVar15.Data + 8) == 0) {
      local_68.Size = 0;
    }
    local_78.Size = local_68.Size;
    local_68._12_4_ = local_78._12_4_;
    local_68.DataPtr = local_78.DataPtr;
    pTVar9 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find(param_1,&local_68);
    local_98.Data = (FScriptContainerElement *)0x0;
    iVar13 = pTVar9->ArrayNum;
    _Src = (pTVar9->AllocatorInstance).Data;
    uStack_90 = CONCAT44(uStack_90._4_4_,iVar13);
    if (iVar13 == 0) {
      uStack_90 = 0;
      uStack_90._0_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar13,0,&local_98,iVar13,(int *)((longlong)&uStack_90 + 4));
      memcpy(local_98.Data,_Src,(longlong)iVar13 << 3);
    }
    AlgoImpl::
    IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
              ((FName *)local_98.Data,(int)uStack_90,FVar2,(FNameLexicalLess *)local_res20);
    pTVar4 = (TStringBuilderBase<wchar_t> *)*puVar5;
    if (pTVar4->End < pTVar4->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar4,1);
    }
    bVar6 = true;
    *pTVar4->CurPos = L'(';
    pTVar4->CurPos = pTVar4->CurPos + 1;
    iVar13 = (int)uStack_90;
    uVar8 = (ulonglong)(int)uStack_90;
    pFVar1 = (FName *)(local_98.Data + uVar8 * 8);
    FVar12.Data = local_98.Data;
    while( true ) {
      if ((int)uVar8 != iVar13) {
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res18);
      }
      if ((FName *)FVar12.Data == pFVar1) break;
      local_res18 = *(FName *)FVar12.Data;
      if (bVar6) {
        bVar6 = false;
      }
      else {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)*puVar5,L", ",2);
      }
      pTVar4 = (TStringBuilderBase<wchar_t> *)*puVar5;
      pFVar10 = ::FName::ToString(&local_res18,&local_58);
      iVar3 = (pFVar10->Data).ArrayNum;
      iVar14 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar14 = 0;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (pTVar4,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar14);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      uVar8 = uStack_90 & 0xffffffff;
      FVar12.Data = FVar12.Data + 8;
    }
    pTVar4 = (TStringBuilderBase<wchar_t> *)*puVar5;
    FVar2 = local_res18.ComparisonIndex.Value._0_1_;
    if (pTVar4->End < pTVar4->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar4,1);
    }
    *pTVar4->CurPos = L')';
    pTVar4->CurPos = pTVar4->CurPos + 1;
    if ((FName *)local_98.Data != (FName *)0x0) {
      FMemory::Free(local_98.Data);
    }
    pTVar4 = *(TStringBuilderBase<wchar_t> **)this;
    if (pTVar4->End < pTVar4->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar4,1);
    }
    FVar15.Data = FVar15.Data + 0x10;
    *pTVar4->CurPos = L'\n';
    pTVar4->CurPos = pTVar4->CurPos + 1;
    uVar8 = uVar7 & 0xffffffff;
  }
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// AddAllowListItem @ 1419244b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPathPermissionList::AddAllowListItem(FPathPermissionList *this,FName param_1,FName param_2)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  int iVar3;
  undefined1 auStack_8b8 [32];
  FName local_898 [2];
  TStringView<wchar_t> local_888;
  TStringView<wchar_t> local_878;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_8b8;
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_868.End = local_32;
  local_898[0] = param_2;
  ::FName::AppendString(local_898,&local_868);
  pwVar2 = local_868.Base;
  uVar1 = local_888._12_4_;
  iVar3 = (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
  local_888.Size = iVar3;
  local_888.DataPtr = local_868.Base;
  local_898[0] = param_1;
  VerifyItemMatchesListType(this,&local_888);
  local_878.DataPtr = pwVar2;
  local_878.Size = iVar3;
  local_878._12_4_ = uVar1;
  this_00 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FindOrAdd
                      (&this->AllowTree,&local_878,(bool *)0x0);
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this_00,local_898);
  if (this->bSuppressOnFilterChanged == false) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnFilterChangedDelegate);
  }
  if (local_868.bIsDynamic != false) {
    FMemory::Free(local_868.Base);
  }
  return true;
}

// AddAllowListItem @ 1419245d0

bool __thiscall
FPathPermissionList::AddAllowListItem(FPathPermissionList *this,FName param_1,wchar_t *param_2)

{
  size_t sVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  FName local_res8;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28 [2];
  
  local_28[0].Size = 0;
  if (param_2 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_2);
    local_28[0].Size = (int)sVar1;
  }
  local_38._12_4_ = local_28[0]._12_4_;
  local_38.Size = local_28[0].Size;
  local_res8 = param_1;
  local_38.DataPtr = param_2;
  VerifyItemMatchesListType(this,&local_38);
  local_28[0].DataPtr = param_2;
  this_00 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FindOrAdd
                      (&this->AllowTree,local_28,(bool *)0x0);
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this_00,&local_res8);
  if (this->bSuppressOnFilterChanged == false) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnFilterChangedDelegate);
  }
  return true;
}

// AddAllowListItem @ 141924680

bool __thiscall
FPathPermissionList::AddAllowListItem
          (FPathPermissionList *this,FName param_1,TStringView<wchar_t> *param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  FName local_res10 [3];
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.Size = param_2->Size;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_res10[0] = param_1;
  VerifyItemMatchesListType(this,&local_28);
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  this_00 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FindOrAdd
                      (&this->AllowTree,&local_18,(bool *)0x0);
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this_00,local_res10);
  if (this->bSuppressOnFilterChanged == false) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnFilterChangedDelegate);
  }
  return true;
}

// AddDenyListAll @ 141924ce0

bool __thiscall FPathPermissionList::AddDenyListAll(FPathPermissionList *this,FName param_1)

{
  int iVar1;
  bool bVar2;
  FName local_res10;
  
  iVar1 = (this->DenyListAll).ArrayNum;
  local_res10 = param_1;
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            (&this->DenyListAll,&local_res10);
  bVar2 = iVar1 != (this->DenyListAll).ArrayNum;
  if ((bVar2) && (this->bSuppressOnFilterChanged == false)) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnFilterChangedDelegate);
  }
  return bVar2;
}

// AddDenyListItem @ 141924d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPathPermissionList::AddDenyListItem(FPathPermissionList *this,FName param_1,FName param_2)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  int iVar3;
  bool bVar4;
  undefined1 auStack_8b8 [32];
  bool local_898 [8];
  FName local_890;
  TStringView<wchar_t> local_888;
  TStringView<wchar_t> local_878;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_8b8;
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_868.End = local_32;
  local_890 = param_2;
  ::FName::AppendString(&local_890,&local_868);
  pwVar2 = local_868.Base;
  uVar1 = local_888._12_4_;
  iVar3 = (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
  local_888.Size = iVar3;
  local_888.DataPtr = local_868.Base;
  local_890 = param_1;
  VerifyItemMatchesListType(this,&local_888);
  local_898[0] = false;
  local_878.DataPtr = pwVar2;
  local_878.Size = iVar3;
  local_878._12_4_ = uVar1;
  this_00 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FindOrAdd
                      (&this->DenyTree,&local_878,local_898);
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this_00,&local_890);
  bVar4 = local_898[0] == false;
  if ((local_898[0] == false) && (this->bSuppressOnFilterChanged == false)) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnFilterChangedDelegate);
  }
  if (local_868.bIsDynamic != false) {
    FMemory::Free(local_868.Base);
  }
  return bVar4;
}

// AddDenyListItem @ 141924e90

bool __thiscall
FPathPermissionList::AddDenyListItem(FPathPermissionList *this,FName param_1,wchar_t *param_2)

{
  size_t sVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  bool bVar2;
  bool local_res8 [8];
  FName local_res10;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28 [2];
  
  local_28[0].Size = 0;
  if (param_2 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_2);
    local_28[0].Size = (int)sVar1;
  }
  local_38._12_4_ = local_28[0]._12_4_;
  local_38.Size = local_28[0].Size;
  local_res10 = param_1;
  local_38.DataPtr = param_2;
  VerifyItemMatchesListType(this,&local_38);
  local_res8[0] = false;
  local_28[0].DataPtr = param_2;
  this_00 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FindOrAdd
                      (&this->DenyTree,local_28,local_res8);
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this_00,&local_res10);
  bVar2 = local_res8[0] == false;
  if ((local_res8[0] == false) && (this->bSuppressOnFilterChanged == false)) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnFilterChangedDelegate);
  }
  return bVar2;
}

// AddDenyListItem @ 141924f60

bool __thiscall
FPathPermissionList::AddDenyListItem
          (FPathPermissionList *this,FName param_1,TStringView<wchar_t> *param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  bool bVar1;
  bool local_res8 [8];
  FName local_res10;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.Size = param_2->Size;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_res10 = param_1;
  VerifyItemMatchesListType(this,&local_28);
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_res8[0] = false;
  this_00 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FindOrAdd
                      (&this->DenyTree,&local_18,local_res8);
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this_00,&local_res10);
  bVar1 = local_res8[0] == false;
  if ((local_res8[0] == false) && (this->bSuppressOnFilterChanged == false)) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnFilterChangedDelegate);
  }
  return bVar1;
}

// Append @ 141926290

bool __thiscall FPathPermissionList::Append(FPathPermissionList *this,FPathPermissionList *param_1)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *pTVar3;
  undefined4 uVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  FName *pFVar12;
  FName *pFVar13;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *pTVar14;
  ForAnyElementType FVar15;
  bool bVar16;
  FName local_res8;
  FPathPermissionList *local_res10;
  bool local_res18;
  uint local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_e8;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *local_d8;
  undefined8 uStack_d0;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  wchar_t *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FName local_88 [2];
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68 [2];
  
  local_res10 = param_1;
  if (this->ListType != param_1->ListType) {
    `FPathPermissionList::Append'::__l2::<lambda_1>::operator()(&local_res8);
  }
  local_res18 = this->bSuppressOnFilterChanged;
  pTVar14 = &param_1->DenyTree;
  uStack_d0 = 0;
  local_b8.DataPtr = (wchar_t *)0x0;
  local_b8.Size = 0;
  local_b8._12_4_ = 0;
  bVar11 = false;
  this->bSuppressOnFilterChanged = true;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  local_d8 = pTVar14;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::TryGetChildren
            (pTVar14,&local_b8,&local_e8,ImpliedParent|Recursive);
  uVar10 = (ulonglong)local_e8.ArrayNum;
  local_c8 = (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)
             (local_e8.AllocatorInstance.Data + uVar10 * 0x10);
  local_res20 = local_e8.ArrayNum;
  uVar8 = uVar10;
  FVar15.Data = local_e8.AllocatorInstance.Data;
  while( true ) {
    pTVar3 = local_c8;
    iVar9 = (int)uVar8;
    if ((int)uVar8 != (int)uVar10) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
      iVar9 = local_e8.ArrayNum;
    }
    if ((TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)FVar15.Data == pTVar3) break;
    local_98 = *(wchar_t **)FVar15.Data;
    iStack_90 = *(int *)(FVar15.Data + 8) + -1;
    if (*(int *)(FVar15.Data + 8) == 0) {
      iStack_90 = 0;
    }
    local_78._12_4_ = uStack_8c;
    local_78.Size = iStack_90;
    local_78.DataPtr = local_98;
    pTVar5 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find(pTVar14,&local_78);
    pFVar12 = (FName *)(pTVar5->AllocatorInstance).Data;
    iVar9 = pTVar5->ArrayNum;
    local_78.DataPtr = (wchar_t *)(pFVar12 + iVar9);
    while( true ) {
      pwVar1 = local_78.DataPtr;
      if (pTVar5->ArrayNum != iVar9) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (pFVar12 == (FName *)pwVar1) break;
      pwVar1 = *(wchar_t **)FVar15.Data;
      iVar7 = *(int *)(FVar15.Data + 8) + -1;
      if (*(int *)(FVar15.Data + 8) == 0) {
        iVar7 = 0;
      }
      local_88[0] = *pFVar12;
      uVar4 = local_b8._12_4_;
      local_b8.Size = iVar7;
      local_68[0].Size = iVar7;
      local_68[0]._12_4_ = local_b8._12_4_;
      local_b8.DataPtr = pwVar1;
      local_68[0].DataPtr = pwVar1;
      VerifyItemMatchesListType(this,local_68);
      local_res8 = (FName)((ulonglong)local_res8 & 0xffffffffffffff00);
      local_a8.Size = iVar7;
      local_a8._12_4_ = uVar4;
      local_a8.DataPtr = pwVar1;
      pTVar6 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FindOrAdd
                         (&this->DenyTree,&local_a8,(bool *)&local_res8);
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(pTVar6,local_88);
      bVar16 = (char)local_res8.ComparisonIndex.Value == '\0';
      if (((char)local_res8.ComparisonIndex.Value == '\0') &&
         (this->bSuppressOnFilterChanged == false)) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnFilterChangedDelegate);
      }
      bVar11 = (bool)(bVar11 | bVar16);
      pFVar12 = pFVar12 + 1;
    }
    uVar8 = local_e8._8_8_ & 0xffffffff;
    FVar15.Data = FVar15.Data + 0x10;
    uVar10 = (ulonglong)local_res20;
    pTVar14 = local_d8;
  }
  if ((longlong)local_e8._8_8_ < 0) {
    DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,iVar9);
    bVar16 = local_e8.ArrayMax != 0;
    local_e8._8_8_ = (ulonglong)(uint)local_e8.ArrayMax << 0x20;
    if (bVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_e8.AllocatorInstance,0,&local_e8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,iVar9);
    local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
  }
  pTVar14 = &local_res10->AllowTree;
  uStack_d0 = 0;
  local_d8 = (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_a8.DataPtr = (wchar_t *)0x0;
  local_a8.Size = 0;
  local_a8._12_4_ = 0;
  local_c8 = pTVar14;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::TryGetChildren
            (pTVar14,&local_a8,&local_e8,ImpliedParent|Recursive);
  uVar10 = (ulonglong)local_e8.ArrayNum;
  local_d8 = (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)
             (local_e8.AllocatorInstance.Data + uVar10 * 0x10);
  local_res20 = local_e8.ArrayNum;
  uVar8 = uVar10;
  FVar15.Data = local_e8.AllocatorInstance.Data;
  while( true ) {
    pTVar3 = local_d8;
    if ((int)uVar10 != (int)uVar8) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if ((TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)FVar15.Data == pTVar3) break;
    local_b8.DataPtr = *(wchar_t **)FVar15.Data;
    local_a8.Size = *(int *)(FVar15.Data + 8) + -1;
    if (*(int *)(FVar15.Data + 8) == 0) {
      local_a8.Size = 0;
    }
    local_b8.Size = local_a8.Size;
    local_a8._12_4_ = local_b8._12_4_;
    local_a8.DataPtr = local_b8.DataPtr;
    pTVar5 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find(pTVar14,&local_a8);
    pFVar13 = (FName *)(pTVar5->AllocatorInstance).Data;
    iVar9 = pTVar5->ArrayNum;
    pFVar12 = pFVar13 + iVar9;
    while( true ) {
      if (pTVar5->ArrayNum != iVar9) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (pFVar13 == pFVar12) break;
      pwVar1 = *(wchar_t **)FVar15.Data;
      iStack_90 = *(int *)(FVar15.Data + 8) + -1;
      if (*(int *)(FVar15.Data + 8) == 0) {
        iStack_90 = 0;
      }
      local_res8 = *pFVar13;
      uVar2._4_4_ = uStack_8c;
      uVar2._0_4_ = iStack_90;
      local_a8.DataPtr = pwVar1;
      local_a8._8_8_ = uVar2;
      local_98 = pwVar1;
      VerifyItemMatchesListType(this,&local_a8);
      local_68[0].DataPtr = pwVar1;
      local_68[0]._8_8_ = uVar2;
      pTVar6 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FindOrAdd
                         (&this->AllowTree,local_68,(bool *)0x0);
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(pTVar6,&local_res8);
      if (this->bSuppressOnFilterChanged == false) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnFilterChangedDelegate);
      }
      bVar11 = true;
      pFVar13 = pFVar13 + 1;
    }
    uVar10 = local_e8._8_8_ & 0xffffffff;
    FVar15.Data = FVar15.Data + 0x10;
    uVar8 = (ulonglong)local_res20;
    pTVar14 = local_c8;
  }
  pFVar13 = (FName *)(local_res10->DenyListAll).AllocatorInstance.Data;
  iVar9 = (local_res10->DenyListAll).ArrayNum;
  pFVar12 = pFVar13 + iVar9;
  while( true ) {
    if ((local_res10->DenyListAll).ArrayNum != iVar9) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar13 == pFVar12) break;
    local_res8 = *pFVar13;
    iVar7 = (this->DenyListAll).ArrayNum;
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
              (&this->DenyListAll,&local_res8);
    bVar16 = iVar7 != (this->DenyListAll).ArrayNum;
    if ((bVar16) && (this->bSuppressOnFilterChanged == false)) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnFilterChangedDelegate);
    }
    bVar11 = (bool)(bVar11 | bVar16);
    pFVar13 = pFVar13 + 1;
  }
  DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  this->bSuppressOnFilterChanged = local_res18;
  if ((bVar11 != false) && (local_res18 == false)) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnFilterChangedDelegate);
  }
  return bVar11;
}

// CombinePathFilters @ 14192d530

FPathPermissionList * __thiscall
FPathPermissionList::CombinePathFilters
          (FPathPermissionList *this,FPathPermissionList *__return_storage_ptr__,
          FPathPermissionList *param_1)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  bool bVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  FName *pFVar16;
  FName FVar17;
  FName FVar18;
  FName FVar19;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *pTVar20;
  FName FVar21;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  FName local_c8;
  undefined8 uStack_c0;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  FName local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68 [2];
  
  (__return_storage_ptr__->DenyTree).PathSeparator = L'/';
  (__return_storage_ptr__->DenyTree).bPathSeparatorInitialized = false;
  (__return_storage_ptr__->DenyTree).bNeedDriveWithoutPathFixup = false;
  __return_storage_ptr__->_padding_ = 0;
  this_00 = &__return_storage_ptr__->OnFilterChangedDelegate;
  __return_storage_ptr__->_padding_ = 0;
  FVar18 = (FName)&this->DenyTree;
  (__return_storage_ptr__->DenyTree).Root.RelPaths.Ptr = (FString *)0x0;
  (__return_storage_ptr__->DenyTree).Root.ChildNodes.Ptr = (FTreeNode *)0x0;
  (__return_storage_ptr__->DenyTree).Root.NumChildNodesAndFlags = 0;
  (__return_storage_ptr__->DenyTree).Root.CapacityChildNodes = 0;
  (__return_storage_ptr__->DenyTree).NumPaths = 0;
  __return_storage_ptr__->_padding_ = (longlong)&___7FPathPermissionList__6B_;
  (__return_storage_ptr__->AllowTree).Root.RelPaths.Ptr = (FString *)0x0;
  (__return_storage_ptr__->AllowTree).Root.ChildNodes.Ptr = (FTreeNode *)0x0;
  (__return_storage_ptr__->AllowTree).Root.NumChildNodesAndFlags = 0;
  (__return_storage_ptr__->AllowTree).Root.CapacityChildNodes = 0;
  (__return_storage_ptr__->AllowTree).NumPaths = 0;
  (__return_storage_ptr__->AllowTree).PathSeparator = L'/';
  (__return_storage_ptr__->AllowTree).bPathSeparatorInitialized = false;
  (__return_storage_ptr__->AllowTree).bNeedDriveWithoutPathFixup = false;
  (__return_storage_ptr__->DenyListAll).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->DenyListAll).ArrayNum = 0;
  (__return_storage_ptr__->DenyListAll).ArrayMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OnFilterChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OnFilterChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OnFilterChangedDelegate).field_0x18 = 2;
  __return_storage_ptr__->bSuppressOnFilterChanged = false;
  __return_storage_ptr__->ListType = Default;
  local_res18 = (FName)param_1;
  TArray<FName,TSizedDefaultAllocator<32>_>::Append<FName,TSizedDefaultAllocator<32>_>
            (&__return_storage_ptr__->DenyListAll,&this->DenyListAll);
  TArray<FName,TSizedDefaultAllocator<32>_>::Append<FName,TSizedDefaultAllocator<32>_>
            (&__return_storage_ptr__->DenyListAll,&param_1->DenyListAll);
  uStack_c0 = 0;
  local_a8.DataPtr = (wchar_t *)0x0;
  local_a8.Size = 0;
  local_a8._12_4_ = 0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  local_c8 = FVar18;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::TryGetChildren
            ((TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)FVar18,&local_a8,
             &local_d8,ImpliedParent|Recursive);
  uVar14 = (ulonglong)local_d8.ArrayNum;
  local_78 = (FName)(uVar14 * 0x10 + (longlong)local_d8.AllocatorInstance.Data);
  local_res20.ComparisonIndex.Value = local_d8.ArrayNum;
  uVar11 = uVar14;
  FVar17 = (FName)local_d8.AllocatorInstance.Data;
  while( true ) {
    FVar21 = local_78;
    iVar13 = (int)uVar11;
    if ((int)uVar11 != (int)uVar14) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
      iVar13 = local_d8.ArrayNum;
    }
    if (FVar17 == FVar21) break;
    local_98 = *(TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> **)FVar17;
    iVar13 = *(int *)&((FScriptContainerElement *)((longlong)FVar17 + 8))->field_0x0;
    iStack_90 = iVar13 + -1;
    if (iVar13 == 0) {
      iStack_90 = 0;
    }
    local_88._12_4_ = uStack_8c;
    local_88.Size = iStack_90;
    local_88.DataPtr = (wchar_t *)local_98;
    pTVar9 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find
                       ((TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)FVar18,
                        &local_88);
    pFVar15 = (pTVar9->AllocatorInstance).Data;
    iVar13 = pTVar9->ArrayNum;
    pFVar1 = pFVar15 + (longlong)iVar13 * 8;
    while( true ) {
      if (pTVar9->ArrayNum != iVar13) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
      }
      if (pFVar15 == pFVar1) break;
      pTVar20 = *(TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> **)FVar17;
      iVar3 = *(int *)&((FScriptContainerElement *)((longlong)FVar17 + 8))->field_0x0;
      iVar12 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar12 = 0;
      }
      local_88.DataPtr = *(wchar_t **)pFVar15;
      uVar7 = local_a8._12_4_;
      local_a8.Size = iVar12;
      local_68[0].Size = iVar12;
      local_68[0]._12_4_ = local_a8._12_4_;
      local_a8.DataPtr = (wchar_t *)pTVar20;
      local_68[0].DataPtr = (wchar_t *)pTVar20;
      VerifyItemMatchesListType(__return_storage_ptr__,local_68);
      local_res10 = (FName)((ulonglong)local_res10 & 0xffffffffffffff00);
      local_b8.Size = iVar12;
      local_b8._12_4_ = uVar7;
      local_b8.DataPtr = (wchar_t *)pTVar20;
      pTVar10 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FindOrAdd
                          (&__return_storage_ptr__->DenyTree,&local_b8,(bool *)&local_res10);
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                (pTVar10,(FName *)&local_88);
      if (((char)local_res10.ComparisonIndex.Value == '\0') &&
         (__return_storage_ptr__->bSuppressOnFilterChanged == false)) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(this_00);
      }
      pFVar15 = pFVar15 + 8;
    }
    uVar11 = local_d8._8_8_ & 0xffffffff;
    FVar17 = (FName)((longlong)FVar17 + 0x10);
    uVar14 = (ulonglong)local_res20 & 0xffffffff;
    FVar18 = local_c8;
  }
  if ((longlong)local_d8._8_8_ < 0) {
    DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,iVar13);
    iVar13 = local_d8.ArrayMax;
    local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
    if (iVar13 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_d8.AllocatorInstance,0,&local_d8.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,iVar13);
    local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  }
  pTVar20 = (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)
            ((longlong)local_res18 + 0x18);
  uStack_c0 = 0;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  local_b8.DataPtr = (wchar_t *)0x0;
  local_b8.Size = 0;
  local_b8._12_4_ = 0;
  local_88.DataPtr = (wchar_t *)pTVar20;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::TryGetChildren
            (pTVar20,&local_b8,&local_d8,ImpliedParent|Recursive);
  uVar11 = (ulonglong)local_d8.ArrayNum;
  local_78 = (FName)(uVar11 * 0x10 + (longlong)local_d8.AllocatorInstance.Data);
  local_res20.ComparisonIndex.Value = local_d8.ArrayNum;
  FVar18 = (FName)local_d8.AllocatorInstance.Data;
  while( true ) {
    FVar17 = local_78;
    if (local_d8.ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    FVar21 = local_res18;
    if (FVar18 == FVar17) break;
    local_b8.DataPtr = *(wchar_t **)FVar18;
    iVar13 = *(int *)&((FScriptContainerElement *)((longlong)FVar18 + 8))->field_0x0;
    local_b8.Size = iVar13 + -1;
    if (iVar13 == 0) {
      local_b8.Size = 0;
    }
    local_a8.Size = local_b8.Size;
    local_b8._12_4_ = local_a8._12_4_;
    local_a8.DataPtr = local_b8.DataPtr;
    pTVar9 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find(pTVar20,&local_b8);
    pFVar16 = (FName *)(pTVar9->AllocatorInstance).Data;
    iVar13 = pTVar9->ArrayNum;
    pFVar2 = pFVar16 + iVar13;
    while( true ) {
      if (pTVar9->ArrayNum != iVar13) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
      }
      if (pFVar16 == pFVar2) break;
      pTVar20 = *(TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> **)FVar18;
      iVar12 = *(int *)&((FScriptContainerElement *)((longlong)FVar18 + 8))->field_0x0;
      iStack_90 = iVar12 + -1;
      if (iVar12 == 0) {
        iStack_90 = 0;
      }
      local_c8 = *pFVar16;
      uVar5._4_4_ = uStack_8c;
      uVar5._0_4_ = iStack_90;
      local_b8.DataPtr = (wchar_t *)pTVar20;
      local_b8._8_8_ = uVar5;
      local_98 = pTVar20;
      VerifyItemMatchesListType(__return_storage_ptr__,&local_b8);
      local_res10 = (FName)((ulonglong)local_res10 & 0xffffffffffffff00);
      local_68[0].DataPtr = (wchar_t *)pTVar20;
      local_68[0]._8_8_ = uVar5;
      pTVar10 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FindOrAdd
                          (&__return_storage_ptr__->DenyTree,local_68,(bool *)&local_res10);
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(pTVar10,&local_c8);
      if (((char)local_res10.ComparisonIndex.Value == '\0') &&
         (__return_storage_ptr__->bSuppressOnFilterChanged == false)) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(this_00);
      }
      pFVar16 = pFVar16 + 1;
    }
    FVar18 = (FName)((longlong)FVar18 + 0x10);
    uVar11 = (ulonglong)local_res20 & 0xffffffff;
    pTVar20 = (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)local_88.DataPtr;
  }
  FVar18 = (FName)&this->AllowTree;
  uVar4 = (this->AllowTree).Root.NumChildNodesAndFlags;
  local_78 = FVar18;
  if (((((int)uVar4 < 0) || ((uVar4 & 0x7fffffff) != 0)) ||
      ((int)*(uint *)((longlong)local_res18 + 0x68) < 0)) ||
     ((*(uint *)((longlong)local_res18 + 0x68) & 0x7fffffff) != 0)) {
    if ((longlong)local_d8._8_8_ < 0) {
      DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
      bVar8 = local_d8.ArrayMax != 0;
      local_d8._8_8_ = (ulonglong)(uint)local_d8.ArrayMax << 0x20;
      if (bVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&local_d8.AllocatorInstance,0,&local_d8.ArrayMax);
      }
    }
    else {
      DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
      local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
    }
    uStack_c0 = 0;
    local_c8.ComparisonIndex.Value = 0;
    local_c8.Number = 0;
    local_b8.DataPtr = (wchar_t *)0x0;
    local_b8.Size = 0;
    local_b8._12_4_ = 0;
    TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::TryGetChildren
              ((TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)FVar18,&local_b8,
               &local_d8,ImpliedParent|Recursive);
    uVar14 = (ulonglong)local_d8.ArrayNum;
    FVar17 = (FName)(uVar14 * 0x10 + (longlong)local_d8.AllocatorInstance.Data);
    local_res20.ComparisonIndex.Value = local_d8.ArrayNum;
    uVar11 = uVar14;
    FVar19 = (FName)local_d8.AllocatorInstance.Data;
    local_c8 = FVar17;
    while( true ) {
      iVar13 = (int)uVar11;
      if ((int)uVar11 != (int)uVar14) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
        iVar13 = local_d8.ArrayNum;
      }
      if (FVar19 == FVar17) break;
      local_b8.DataPtr = *(wchar_t **)FVar19;
      iVar13 = *(int *)&((FScriptContainerElement *)((longlong)FVar19 + 8))->field_0x0;
      local_b8.Size = iVar13 + -1;
      if (iVar13 == 0) {
        local_b8.Size = 0;
      }
      local_a8.Size = local_b8.Size;
      local_b8._12_4_ = local_a8._12_4_;
      local_a8.DataPtr = local_b8.DataPtr;
      bVar8 = PassesStartsWithFilter((FPathPermissionList *)FVar21,&local_b8,true);
      if (bVar8) {
        local_b8.DataPtr = *(wchar_t **)FVar19;
        iVar13 = *(int *)&((FScriptContainerElement *)((longlong)FVar19 + 8))->field_0x0;
        iStack_90 = iVar13 + -1;
        if (iVar13 == 0) {
          iStack_90 = 0;
        }
        local_b8._12_4_ = uStack_8c;
        local_b8.Size = iStack_90;
        local_98 = (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)local_b8.DataPtr;
        pTVar9 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find
                           ((TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)FVar18,
                            &local_b8);
        pFVar16 = (FName *)(pTVar9->AllocatorInstance).Data;
        iVar13 = pTVar9->ArrayNum;
        pFVar2 = pFVar16 + iVar13;
        while( true ) {
          if (pTVar9->ArrayNum != iVar13) {
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_res10);
          }
          FVar17 = local_c8;
          FVar18 = local_78;
          FVar21 = local_res18;
          if (pFVar16 == pFVar2) break;
          pTVar20 = *(TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> **)FVar19;
          iVar3 = *(int *)&((FScriptContainerElement *)((longlong)FVar19 + 8))->field_0x0;
          iVar12 = iVar3 + -1;
          if (iVar3 == 0) {
            iVar12 = 0;
          }
          local_res10 = *pFVar16;
          uVar7 = local_88._12_4_;
          local_88.Size = iVar12;
          local_b8.Size = iVar12;
          local_b8._12_4_ = local_88._12_4_;
          local_b8.DataPtr = (wchar_t *)pTVar20;
          local_88.DataPtr = (wchar_t *)pTVar20;
          VerifyItemMatchesListType(__return_storage_ptr__,&local_b8);
          local_68[0].Size = iVar12;
          local_68[0]._12_4_ = uVar7;
          local_68[0].DataPtr = (wchar_t *)pTVar20;
          pTVar10 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FindOrAdd
                              (&__return_storage_ptr__->AllowTree,local_68,(bool *)0x0);
          TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                    (pTVar10,&local_res10);
          if (__return_storage_ptr__->bSuppressOnFilterChanged == false) {
            TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(this_00);
          }
          pFVar16 = pFVar16 + 1;
        }
      }
      uVar11 = local_d8._8_8_ & 0xffffffff;
      FVar19 = (FName)((longlong)FVar19 + 0x10);
      uVar14 = (ulonglong)local_res20 & 0xffffffff;
    }
    if ((longlong)local_d8._8_8_ < 0) {
      DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,iVar13);
      bVar8 = local_d8.ArrayMax != 0;
      local_d8._8_8_ = (ulonglong)(uint)local_d8.ArrayMax << 0x20;
      if (bVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&local_d8.AllocatorInstance,0,&local_d8.ArrayMax);
      }
    }
    else {
      DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,iVar13);
      local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
    }
    FVar21 = (FName)((longlong)FVar21 + 0x48);
    uStack_c0 = 0;
    local_b8.DataPtr = (wchar_t *)0x0;
    local_b8.Size = 0;
    local_b8._12_4_ = 0;
    local_c8 = FVar21;
    TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::TryGetChildren
              ((TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)FVar21,&local_b8,
               &local_d8,ImpliedParent|Recursive);
    uVar11 = (ulonglong)local_d8.ArrayNum;
    FVar18 = (FName)(uVar11 * 0x10 + (longlong)local_d8.AllocatorInstance.Data);
    local_res10.ComparisonIndex.Value = local_d8.ArrayNum;
    FVar17 = (FName)local_d8.AllocatorInstance.Data;
    local_res20 = FVar18;
    while( true ) {
      if (local_d8.ArrayNum != (int)uVar11) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res18);
      }
      if (FVar17 == FVar18) break;
      local_b8.DataPtr = *(wchar_t **)FVar17;
      iVar13 = *(int *)&((FScriptContainerElement *)((longlong)FVar17 + 8))->field_0x0;
      local_b8.Size = iVar13 + -1;
      if (iVar13 == 0) {
        local_b8.Size = 0;
      }
      local_a8.Size = local_b8.Size;
      local_b8._12_4_ = local_a8._12_4_;
      local_a8.DataPtr = local_b8.DataPtr;
      bVar8 = PassesStartsWithFilter(this,&local_b8,true);
      if (bVar8) {
        local_b8.DataPtr = *(wchar_t **)FVar17;
        iVar13 = *(int *)&((FScriptContainerElement *)((longlong)FVar17 + 8))->field_0x0;
        iStack_90 = iVar13 + -1;
        if (iVar13 == 0) {
          iStack_90 = 0;
        }
        local_b8._12_4_ = uStack_8c;
        local_b8.Size = iStack_90;
        local_98 = (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)local_b8.DataPtr;
        pTVar9 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find
                           ((TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)FVar21,
                            &local_b8);
        pFVar16 = (FName *)(pTVar9->AllocatorInstance).Data;
        iVar13 = pTVar9->ArrayNum;
        pFVar2 = pFVar16 + iVar13;
        while( true ) {
          if (pTVar9->ArrayNum != iVar13) {
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_res18);
          }
          FVar18 = local_res20;
          FVar21 = local_c8;
          if (pFVar16 == pFVar2) break;
          pTVar20 = *(TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> **)FVar17;
          iVar12 = *(int *)&((FScriptContainerElement *)((longlong)FVar17 + 8))->field_0x0;
          iStack_70 = iVar12 + -1;
          if (iVar12 == 0) {
            iStack_70 = 0;
          }
          local_res18 = *pFVar16;
          uVar6._4_4_ = uStack_6c;
          uVar6._0_4_ = iStack_70;
          local_b8.DataPtr = (wchar_t *)pTVar20;
          local_b8._8_8_ = uVar6;
          local_78 = (FName)pTVar20;
          VerifyItemMatchesListType(__return_storage_ptr__,&local_b8);
          local_68[0].DataPtr = (wchar_t *)pTVar20;
          local_68[0]._8_8_ = uVar6;
          pTVar10 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FindOrAdd
                              (&__return_storage_ptr__->AllowTree,local_68,(bool *)0x0);
          TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                    (pTVar10,&local_res18);
          if (__return_storage_ptr__->bSuppressOnFilterChanged == false) {
            TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(this_00);
          }
          pFVar16 = pFVar16 + 1;
        }
      }
      uVar11 = (ulonglong)local_res10 & 0xffffffff;
      FVar17 = (FName)((longlong)FVar17 + 0x10);
    }
    uVar4 = (__return_storage_ptr__->AllowTree).Root.NumChildNodesAndFlags;
    if ((-1 < (int)uVar4) && ((uVar4 & 0x7fffffff) == 0)) {
      iVar13 = (__return_storage_ptr__->DenyListAll).ArrayNum;
      local_res18.ComparisonIndex.Value = 0;
      local_res18.Number = 0;
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                (&__return_storage_ptr__->DenyListAll,&local_res18);
      if ((iVar13 != (__return_storage_ptr__->DenyListAll).ArrayNum) &&
         (__return_storage_ptr__->bSuppressOnFilterChanged == false)) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(this_00);
      }
    }
  }
  DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if ((FName)local_d8.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ContainsDenyListItem @ 14192f480

bool __thiscall
FPathPermissionList::ContainsDenyListItem(FPathPermissionList *this,TStringView<wchar_t> *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar1 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find
                     (&this->DenyTree,&local_18);
  return pTVar1 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetAllowList @ 141945400

TMap<FString,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall FPathPermissionList::GetAllowList(FPathPermissionList *this)

{
  return &EmptyDeprecatedList;
}

// GetAllowListEntries @ 141945410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FPathPermissionList::GetAllowListEntries
          (FPathPermissionList *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined1 auStackY_8d8 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_8a8;
  TStringView<wchar_t> local_898;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [16];
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStackY_8d8;
  local_888.Base = local_868;
  local_888.CurPos = local_868;
  local_888.End = (wchar_t *)&local_848;
  local_8a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8a8.ArrayNum = 0;
  local_8a8.ArrayMax = 0;
  local_898.DataPtr = (wchar_t *)0x0;
  local_898.Size = 0;
  local_898._12_4_ = 0;
  local_888.bIsDynamic = false;
  local_888.bIsExternal = false;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::NormalizePathForReading
            (&this->AllowTree,&local_898,&local_888);
  local_848.Base = local_828;
  local_848.CurPos = local_828;
  local_848.End = (wchar_t *)local_28;
  local_848.bIsDynamic = false;
  local_848.bIsExternal = false;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::TryGetChildren
            (&(this->AllowTree).Root,&local_848,(this->AllowTree).PathSeparator,&local_898,
             &local_8a8,ImpliedParent|Recursive);
  if (local_848.bIsDynamic != false) {
    FMemory::Free(local_848.Base);
  }
  if (local_888.bIsDynamic != false) {
    FMemory::Free(local_888.Base);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_8a8.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = local_8a8.ArrayNum;
  __return_storage_ptr__->ArrayMax = local_8a8.ArrayMax;
  local_8a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8a8.ArrayNum = 0;
  local_8a8.ArrayMax = 0;
  DestructItems<FString,int>((FString *)0x0,0);
  if (local_8a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDenyList @ 141946640

TMap<FString,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall FPathPermissionList::GetDenyList(FPathPermissionList *this)

{
  return &EmptyDeprecatedList;
}

// GetDenyListEntries @ 141946650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FPathPermissionList::GetDenyListEntries
          (FPathPermissionList *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined1 auStackY_8d8 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_8a8;
  TStringView<wchar_t> local_898;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [16];
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStackY_8d8;
  local_888.Base = local_868;
  local_888.CurPos = local_868;
  local_888.End = (wchar_t *)&local_848;
  local_8a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8a8.ArrayNum = 0;
  local_8a8.ArrayMax = 0;
  local_898.DataPtr = (wchar_t *)0x0;
  local_898.Size = 0;
  local_898._12_4_ = 0;
  local_888.bIsDynamic = false;
  local_888.bIsExternal = false;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::NormalizePathForReading
            (&this->DenyTree,&local_898,&local_888);
  local_848.Base = local_828;
  local_848.CurPos = local_828;
  local_848.End = (wchar_t *)local_28;
  local_848.bIsDynamic = false;
  local_848.bIsExternal = false;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::TryGetChildren
            (&(this->DenyTree).Root,&local_848,(this->DenyTree).PathSeparator,&local_898,&local_8a8,
             ImpliedParent|Recursive);
  if (local_848.bIsDynamic != false) {
    FMemory::Free(local_848.Base);
  }
  if (local_888.bIsDynamic != false) {
    FMemory::Free(local_888.Base);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_8a8.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = local_8a8.ArrayNum;
  __return_storage_ptr__->ArrayMax = local_8a8.ArrayMax;
  local_8a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8a8.ArrayNum = 0;
  local_8a8.ArrayMax = 0;
  DestructItems<FString,int>((FString *)0x0,0);
  if (local_8a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetOwnerNames @ 141948da0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FPathPermissionList::GetOwnerNames
          (FPathPermissionList *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName *pFVar1;
  FPathPermissionList *pFVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FName *pFVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  FPathPermissionList *local_res8;
  FName local_res10;
  uint local_res18;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  
  pTVar7 = &this->DenyTree;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_68.DataPtr = (wchar_t *)0x0;
  local_68.Size = 0;
  local_68._12_4_ = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_res8 = this;
  local_res20 = pTVar7;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::TryGetChildren
            (pTVar7,&local_68,&local_78,ImpliedParent|Recursive);
  uVar6 = (ulonglong)local_78.ArrayNum;
  pFVar10 = local_78.AllocatorInstance.Data + uVar6 * 0x10;
  local_res18 = local_78.ArrayNum;
  uVar4 = uVar6;
  FVar9.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    iVar5 = (int)uVar4;
    if ((int)uVar4 != (int)uVar6) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
      iVar5 = local_78.ArrayNum;
    }
    if (FVar9.Data == pFVar10) break;
    local_68.DataPtr = *(wchar_t **)FVar9.Data;
    local_58.Size = *(int *)(FVar9.Data + 8) + -1;
    if (*(int *)(FVar9.Data + 8) == 0) {
      local_58.Size = 0;
    }
    local_68.Size = local_58.Size;
    local_58._12_4_ = local_68._12_4_;
    local_58.DataPtr = local_68.DataPtr;
    pTVar3 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find(pTVar7,&local_58);
    pFVar8 = (FName *)(pTVar3->AllocatorInstance).Data;
    iVar5 = pTVar3->ArrayNum;
    pFVar1 = pFVar8 + iVar5;
    while( true ) {
      if (pTVar3->ArrayNum != iVar5) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
      }
      if (pFVar8 == pFVar1) break;
      local_res10 = *pFVar8;
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                (__return_storage_ptr__,&local_res10);
      pFVar8 = pFVar8 + 1;
    }
    uVar4 = local_78._8_8_ & 0xffffffff;
    FVar9.Data = FVar9.Data + 0x10;
    uVar6 = (ulonglong)local_res18;
    pTVar7 = local_res20;
  }
  if ((longlong)local_78._8_8_ < 0) {
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,iVar5);
    bVar11 = local_78.ArrayMax != 0;
    local_78._8_8_ = (ulonglong)(uint)local_78.ArrayMax << 0x20;
    if (bVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_78.AllocatorInstance,0,&local_78.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,iVar5);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  }
  pTVar7 = &local_res8->AllowTree;
  local_68.Size = 0;
  local_68._12_4_ = 0;
  local_68.DataPtr = (wchar_t *)0x0;
  local_58.DataPtr = (wchar_t *)0x0;
  local_58.Size = 0;
  local_58._12_4_ = 0;
  local_res20 = pTVar7;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::TryGetChildren
            (pTVar7,&local_58,&local_78,ImpliedParent|Recursive);
  uVar6 = (ulonglong)local_78.ArrayNum;
  pFVar10 = local_78.AllocatorInstance.Data + uVar6 * 0x10;
  local_res18 = local_78.ArrayNum;
  uVar4 = uVar6;
  FVar9.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar6 != (int)uVar4) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    pFVar2 = local_res8;
    if (FVar9.Data == pFVar10) break;
    local_68.DataPtr = *(wchar_t **)FVar9.Data;
    local_58.Size = *(int *)(FVar9.Data + 8) + -1;
    if (*(int *)(FVar9.Data + 8) == 0) {
      local_58.Size = 0;
    }
    local_68.Size = local_58.Size;
    local_58._12_4_ = local_68._12_4_;
    local_58.DataPtr = local_68.DataPtr;
    pTVar3 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find(pTVar7,&local_58);
    pFVar8 = (FName *)(pTVar3->AllocatorInstance).Data;
    iVar5 = pTVar3->ArrayNum;
    pFVar1 = pFVar8 + iVar5;
    while( true ) {
      if (pTVar3->ArrayNum != iVar5) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
      }
      if (pFVar8 == pFVar1) break;
      local_res10 = *pFVar8;
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                (__return_storage_ptr__,&local_res10);
      pFVar8 = pFVar8 + 1;
    }
    uVar6 = local_78._8_8_ & 0xffffffff;
    FVar9.Data = FVar9.Data + 0x10;
    uVar4 = (ulonglong)local_res18;
    pTVar7 = local_res20;
  }
  pFVar8 = (FName *)(local_res8->DenyListAll).AllocatorInstance.Data;
  iVar5 = (local_res8->DenyListAll).ArrayNum;
  pFVar1 = pFVar8 + iVar5;
  while( true ) {
    if ((pFVar2->DenyListAll).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar8 == pFVar1) break;
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
              (__return_storage_ptr__,pFVar8);
    pFVar8 = pFVar8 + 1;
  }
  DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HasAllowListEntries @ 14194cfe0

bool __thiscall FPathPermissionList::HasAllowListEntries(FPathPermissionList *this)

{
  uint uVar1;
  
  uVar1 = (this->AllowTree).Root.NumChildNodesAndFlags;
  if ((-1 < (int)uVar1) && ((uVar1 & 0x7fffffff) == 0)) {
    return false;
  }
  return true;
}

// HasDenyListEntries @ 14194d000

bool __thiscall FPathPermissionList::HasDenyListEntries(FPathPermissionList *this)

{
  uint uVar1;
  
  uVar1 = (this->DenyTree).Root.NumChildNodesAndFlags;
  if ((-1 < (int)uVar1) && ((uVar1 & 0x7fffffff) == 0)) {
    return false;
  }
  return true;
}

// HasFiltering @ 14194d020

bool __thiscall FPathPermissionList::HasFiltering(FPathPermissionList *this)

{
  uint uVar1;
  
  uVar1 = (this->DenyTree).Root.NumChildNodesAndFlags;
  if ((-1 < (int)uVar1) && ((uVar1 & 0x7fffffff) == 0)) {
    uVar1 = (this->AllowTree).Root.NumChildNodesAndFlags;
    if ((-1 < (int)uVar1) && (((uVar1 & 0x7fffffff) == 0 && ((this->DenyListAll).ArrayNum < 1)))) {
      return false;
    }
  }
  return true;
}

// PassesFilter @ 14195a460

bool __thiscall FPathPermissionList::PassesFilter(FPathPermissionList *this,wchar_t *param_1)

{
  bool bVar1;
  size_t sVar2;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    local_18.Size = (int)sVar2;
  }
  bVar1 = PassesFilter(this,&local_18);
  return bVar1;
}

// PassesFilter @ 14195a4b0

bool __thiscall
FPathPermissionList::PassesFilter(FPathPermissionList *this,TStringView<wchar_t> *param_1)

{
  uint uVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  TStringView<wchar_t> local_18;
  
  if (0 < (this->DenyListAll).ArrayNum) {
    return false;
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  VerifyItemMatchesListType(this,&local_18);
  uVar1 = (this->AllowTree).Root.NumChildNodesAndFlags;
  if (((int)uVar1 < 0) || ((uVar1 & 0x7fffffff) != 0)) {
    local_18.DataPtr = param_1->DataPtr;
    local_18.Size = param_1->Size;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pTVar2 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find
                       (&this->AllowTree,&local_18);
    if (pTVar2 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
      return false;
    }
  }
  else {
    uVar1 = (this->DenyTree).Root.NumChildNodesAndFlags;
    if ((-1 < (int)uVar1) && ((uVar1 & 0x7fffffff) == 0)) {
      return true;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar2 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find
                     (&this->DenyTree,&local_18);
  return pTVar2 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
}

// PassesFilter @ 14195a570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FPathPermissionList::PassesFilter(FPathPermissionList *this,FName param_1)

{
  bool bVar1;
  undefined1 auStack_888 [32];
  TStringView<wchar_t> local_868;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_858.Base = local_838;
  local_858.CurPos = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.End = local_22;
  local_868.DataPtr = (wchar_t *)param_1;
  ::FName::AppendString((FName *)&local_868,&local_858);
  local_868.Size = (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1);
  local_868.DataPtr = local_858.Base;
  bVar1 = PassesFilter(this,&local_868);
  if (local_858.bIsDynamic != false) {
    FMemory::Free(local_858.Base);
  }
  return bVar1;
}

// PassesStartsWithFilter @ 14195a640

bool __thiscall
FPathPermissionList::PassesStartsWithFilter(FPathPermissionList *this,wchar_t *param_1,bool param_2)

{
  bool bVar1;
  size_t sVar2;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    local_18.Size = (int)sVar2;
  }
  bVar1 = PassesStartsWithFilter(this,&local_18,param_2);
  return bVar1;
}

// PassesStartsWithFilter @ 14195a6a0

bool __thiscall
FPathPermissionList::PassesStartsWithFilter
          (FPathPermissionList *this,TStringView<wchar_t> *param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  char cVar5;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *this_00;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  VerifyItemMatchesListType(this,&local_18);
  uVar1 = (this->DenyTree).Root.NumChildNodesAndFlags;
  if (((((int)uVar1 < 0) || ((uVar1 & 0x7fffffff) != 0)) ||
      (uVar2 = (this->AllowTree).Root.NumChildNodesAndFlags, (int)uVar2 < 0)) ||
     (((uVar2 & 0x7fffffff) != 0 || (0 < (this->DenyListAll).ArrayNum)))) {
    if ((this->DenyListAll).ArrayNum < 1) {
      if (((int)uVar1 < 0) || ((uVar1 & 0x7fffffff) != 0)) {
        local_18.DataPtr = param_1->DataPtr;
        local_18.Size = param_1->Size;
        local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
        pTVar4 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FindClosestValue
                           (&this->DenyTree,&local_18);
        if (pTVar4 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_14195a7dc;
      }
      uVar1 = (this->AllowTree).Root.NumChildNodesAndFlags;
      this_00 = &this->AllowTree;
      if (((int)uVar1 < 0) || ((uVar1 & 0x7fffffff) != 0)) {
        local_18.DataPtr = param_1->DataPtr;
        local_18.Size = param_1->Size;
        local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
        pTVar4 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FindClosestValue
                           (this_00,&local_18);
        if (pTVar4 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_14195a7b1;
        if (param_2) {
          local_18.DataPtr = param_1->DataPtr;
          local_18.Size = param_1->Size;
          local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
          bVar3 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::ContainsChildPaths
                            (this_00,&local_18);
          if (bVar3) goto LAB_14195a7b1;
        }
        local_18.DataPtr = param_1->DataPtr;
        local_18.Size = param_1->Size;
        local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
        bVar3 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::ContainsChildPaths
                          (this_00,&local_18);
        cVar5 = !bVar3;
      }
      else {
LAB_14195a7b1:
        local_18.DataPtr = param_1->DataPtr;
        local_18.Size = param_1->Size;
        local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
        bVar3 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::ContainsChildPaths
                          (&this->DenyTree,&local_18);
        cVar5 = !bVar3 + '\x02';
      }
      if ((cVar5 != '\0') && (cVar5 != '\x01')) goto LAB_14195a7d8;
    }
LAB_14195a7dc:
    bVar3 = false;
  }
  else {
LAB_14195a7d8:
    bVar3 = true;
  }
  return bVar3;
}

// PassesStartsWithFilter @ 14195a800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPathPermissionList::PassesStartsWithFilter(FPathPermissionList *this,FName param_1,bool param_2)

{
  bool bVar1;
  undefined1 auStack_888 [32];
  TStringView<wchar_t> local_868;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_858.Base = local_838;
  local_858.CurPos = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.End = local_22;
  local_868.DataPtr = (wchar_t *)param_1;
  ::FName::AppendString((FName *)&local_868,&local_858);
  local_868.Size = (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1);
  local_868.DataPtr = local_858.Base;
  bVar1 = PassesStartsWithFilter(this,&local_868,param_2);
  if (local_858.bIsDynamic != false) {
    FMemory::Free(local_858.Base);
  }
  return bVar1;
}

// PassesStartsWithFilterRecursive @ 14195a8e0

EPathPermissionPrefixResult __thiscall
FPathPermissionList::PassesStartsWithFilterRecursive
          (FPathPermissionList *this,TStringView<wchar_t> *param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *this_00;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  VerifyItemMatchesListType(this,&local_18);
  uVar1 = (this->DenyTree).Root.NumChildNodesAndFlags;
  if (((((int)uVar1 < 0) || ((uVar1 & 0x7fffffff) != 0)) ||
      (uVar2 = (this->AllowTree).Root.NumChildNodesAndFlags, (int)uVar2 < 0)) ||
     ((uVar2 & 0x7fffffff) != 0)) {
    if ((this->DenyListAll).ArrayNum < 1) {
      if (((int)uVar1 < 0) || ((uVar1 & 0x7fffffff) != 0)) {
        local_18.DataPtr = param_1->DataPtr;
        local_18.Size = param_1->Size;
        local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
        pTVar4 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FindClosestValue
                           (&this->DenyTree,&local_18);
        if (pTVar4 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
          return FailRecursive;
        }
      }
      uVar1 = (this->AllowTree).Root.NumChildNodesAndFlags;
      this_00 = &this->AllowTree;
      if (((int)uVar1 < 0) || ((uVar1 & 0x7fffffff) != 0)) {
        local_18.DataPtr = param_1->DataPtr;
        local_18.Size = param_1->Size;
        local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
        pTVar4 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FindClosestValue
                           (this_00,&local_18);
        if (pTVar4 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
          if (param_2) {
            local_18.DataPtr = param_1->DataPtr;
            local_18.Size = param_1->Size;
            local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
            bVar3 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::ContainsChildPaths
                              (this_00,&local_18);
            if (bVar3) goto LAB_14195a9a6;
          }
          local_18.DataPtr = param_1->DataPtr;
          local_18.Size = param_1->Size;
          local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
          bVar3 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::ContainsChildPaths
                            (this_00,&local_18);
          return bVar3 ^ FailRecursive;
        }
      }
LAB_14195a9a6:
      local_18.DataPtr = param_1->DataPtr;
      local_18.Size = param_1->Size;
      local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
      bVar3 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::ContainsChildPaths
                        (&this->DenyTree,&local_18);
      return (bVar3 ^ 1) + Pass;
    }
  }
  else if ((this->DenyListAll).ArrayNum < 1) {
    return PassRecursive;
  }
  return FailRecursive;
}

// RemoveAllowListItem @ 141965000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPathPermissionList::RemoveAllowListItem(FPathPermissionList *this,FName param_1,FName param_2)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  int iVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  bool bVar4;
  undefined1 auStack_8a8 [32];
  FName local_888 [2];
  TStringView<wchar_t> local_878;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_8a8;
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_868.End = local_32;
  local_888[0] = param_2;
  ::FName::AppendString(local_888,&local_868);
  pwVar2 = local_868.Base;
  local_878.Size = (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
  uVar1 = local_878._8_8_;
  local_878.DataPtr = local_868.Base;
  local_888[0] = param_1;
  this_00 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find
                      (&this->AllowTree,&local_878);
  if (this_00 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar3 = TArray<FName,TSizedDefaultAllocator<32>_>::Remove(this_00,local_888);
    if ((iVar3 == 1) && (this_00->ArrayNum == 0)) {
      local_878.DataPtr = pwVar2;
      local_878._8_8_ = uVar1;
      TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Remove
                (&this->AllowTree,&local_878,(bool *)0x0);
      if (this->bSuppressOnFilterChanged == false) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnFilterChangedDelegate);
      }
      bVar4 = true;
      goto LAB_1419650f1;
    }
  }
  bVar4 = false;
LAB_1419650f1:
  if (local_868.bIsDynamic != false) {
    FMemory::Free(local_868.Base);
  }
  return bVar4;
}

// RemoveAllowListItem @ 141965140

bool __thiscall
FPathPermissionList::RemoveAllowListItem(FPathPermissionList *this,FName param_1,wchar_t *param_2)

{
  undefined8 uVar1;
  int iVar2;
  size_t sVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  FName local_res8;
  TStringView<wchar_t> local_28 [2];
  
  local_28[0].Size = 0;
  if (param_2 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_2);
    local_28[0].Size = (int)sVar3;
  }
  uVar1 = local_28[0]._8_8_;
  local_res8 = param_1;
  local_28[0].DataPtr = param_2;
  this_00 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find
                      (&this->AllowTree,local_28);
  if (((this_00 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) &&
      (iVar2 = TArray<FName,TSizedDefaultAllocator<32>_>::Remove(this_00,&local_res8), iVar2 == 1))
     && (this_00->ArrayNum == 0)) {
    local_28[0].DataPtr = param_2;
    local_28[0]._8_8_ = uVar1;
    TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Remove
              (&this->AllowTree,local_28,(bool *)0x0);
    if (this->bSuppressOnFilterChanged == false) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnFilterChangedDelegate);
    }
    return true;
  }
  return false;
}

// RemoveAllowListItem @ 141965210

bool __thiscall
FPathPermissionList::RemoveAllowListItem
          (FPathPermissionList *this,FName param_1,TStringView<wchar_t> *param_2)

{
  int iVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  FName local_res10;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_res10 = param_1;
  this_00 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find
                      (&this->AllowTree,&local_18);
  if (((this_00 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) &&
      (iVar1 = TArray<FName,TSizedDefaultAllocator<32>_>::Remove(this_00,&local_res10), iVar1 == 1))
     && (this_00->ArrayNum == 0)) {
    local_18.DataPtr = param_2->DataPtr;
    local_18.Size = param_2->Size;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Remove
              (&this->AllowTree,&local_18,(bool *)0x0);
    if (this->bSuppressOnFilterChanged == false) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnFilterChangedDelegate);
    }
    return true;
  }
  return false;
}

// RemoveDenyListItem @ 141965b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPathPermissionList::RemoveDenyListItem(FPathPermissionList *this,FName param_1,FName param_2)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  int iVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  bool bVar4;
  undefined1 auStack_8a8 [32];
  FName local_888 [2];
  TStringView<wchar_t> local_878;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_8a8;
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_868.End = local_32;
  local_888[0] = param_2;
  ::FName::AppendString(local_888,&local_868);
  pwVar2 = local_868.Base;
  local_878.Size = (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
  uVar1 = local_878._8_8_;
  local_878.DataPtr = local_868.Base;
  local_888[0] = param_1;
  this_00 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find
                      (&this->DenyTree,&local_878);
  if (this_00 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar3 = TArray<FName,TSizedDefaultAllocator<32>_>::Remove(this_00,local_888);
    if ((iVar3 == 1) && (this_00->ArrayNum == 0)) {
      local_878.DataPtr = pwVar2;
      local_878._8_8_ = uVar1;
      TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Remove
                (&this->DenyTree,&local_878,(bool *)0x0);
      if (this->bSuppressOnFilterChanged == false) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnFilterChangedDelegate);
      }
      bVar4 = true;
      goto LAB_141965c61;
    }
  }
  bVar4 = false;
LAB_141965c61:
  if (local_868.bIsDynamic != false) {
    FMemory::Free(local_868.Base);
  }
  return bVar4;
}

// RemoveDenyListItem @ 141965cb0

bool __thiscall
FPathPermissionList::RemoveDenyListItem(FPathPermissionList *this,FName param_1,wchar_t *param_2)

{
  undefined8 uVar1;
  int iVar2;
  size_t sVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  FName local_res8;
  TStringView<wchar_t> local_28 [2];
  
  local_28[0].Size = 0;
  if (param_2 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_2);
    local_28[0].Size = (int)sVar3;
  }
  uVar1 = local_28[0]._8_8_;
  local_res8 = param_1;
  local_28[0].DataPtr = param_2;
  this_00 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find
                      (&this->DenyTree,local_28);
  if (((this_00 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) &&
      (iVar2 = TArray<FName,TSizedDefaultAllocator<32>_>::Remove(this_00,&local_res8), iVar2 == 1))
     && (this_00->ArrayNum == 0)) {
    local_28[0].DataPtr = param_2;
    local_28[0]._8_8_ = uVar1;
    TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Remove
              (&this->DenyTree,local_28,(bool *)0x0);
    if (this->bSuppressOnFilterChanged == false) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnFilterChangedDelegate);
    }
    return true;
  }
  return false;
}

// RemoveDenyListItem @ 141965d80

bool __thiscall
FPathPermissionList::RemoveDenyListItem
          (FPathPermissionList *this,FName param_1,TStringView<wchar_t> *param_2)

{
  int iVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  FName local_res10;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_res10 = param_1;
  this_00 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find
                      (&this->DenyTree,&local_18);
  if (((this_00 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) &&
      (iVar1 = TArray<FName,TSizedDefaultAllocator<32>_>::Remove(this_00,&local_res10), iVar1 == 1))
     && (this_00->ArrayNum == 0)) {
    local_18.DataPtr = param_2->DataPtr;
    local_18.Size = param_2->Size;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Remove
              (&this->DenyTree,&local_18,(bool *)0x0);
    if (this->bSuppressOnFilterChanged == false) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnFilterChangedDelegate);
    }
    return true;
  }
  return false;
}

// RemoveDenyListItemAndGetOwners @ 141965e30

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FPathPermissionList::RemoveDenyListItemAndGetOwners
          (FPathPermissionList *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  TStringView<wchar_t> local_28;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar4 = TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find
                     (&this->DenyTree,&local_28);
  if (pTVar4 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    local_28.DataPtr = param_1->DataPtr;
    local_28.Size = param_1->Size;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pFVar3 = (pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar1 = pTVar4->ArrayNum;
    iVar2 = pTVar4->ArrayMax;
    pTVar4->ArrayNum = 0;
    pTVar4->ArrayMax = 0;
    TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Remove
              (&this->DenyTree,&local_28,(bool *)0x0);
    if (this->bSuppressOnFilterChanged == false) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnFilterChangedDelegate);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = pFVar3;
    __return_storage_ptr__->ArrayNum = iVar1;
    __return_storage_ptr__->ArrayMax = iVar2;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// ToString @ 1419722e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FPathPermissionList::ToString(FPathPermissionList *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  FString *pFVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStackY_20e8 [32];
  TArray<FName,TSizedDefaultAllocator<32>_> local_20a8;
  wchar_t **local_2098;
  wchar_t **local_2090;
  wchar_t ***local_2088;
  FString local_2080;
  wchar_t *local_2068;
  wchar_t *local_2060;
  wchar_t *local_2058;
  char local_2050;
  char cStack_204f;
  wchar_t local_2048 [4096];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_20e8;
  local_2068 = local_2048;
  local_2098 = &local_2068;
  local_2060 = local_2048;
  local_2058 = (wchar_t *)local_48;
  local_2050 = '\0';
  cStack_204f = '\0';
  if ((this->DenyListAll).ArrayNum != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(local_2048,L"Deny All ",0x12);
    local_20a8.ArrayNum = (this->DenyListAll).ArrayNum;
    lVar10 = (longlong)local_20a8.ArrayNum;
    local_2060 = (wchar_t *)((longlong)pvVar5 + 0x12);
    pFVar2 = (this->DenyListAll).AllocatorInstance.Data;
    local_20a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_20a8.ArrayNum == 0) {
      local_20a8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_20a8.ArrayNum,0,&local_20a8.AllocatorInstance,local_20a8.ArrayNum,
                 &local_20a8.ArrayMax);
      memcpy(local_20a8.AllocatorInstance.Data,pFVar2,lVar10 << 3);
    }
    `FPathPermissionList::ToString'::__l2::<lambda_1>::operator()(&local_2098,&local_20a8);
    if (local_2058 < local_2060 + 1) {
      if ((cStack_204f != '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bIsExternal",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\StringBuilder.cpp"
                             ,0x24,
                             L"Extending the capacity of an external string builder is not supported. Size = %I64u Capacity = %I64u ExtraCapacity = %I64u."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      uVar9 = (longlong)local_2058 - (longlong)local_2068 >> 1;
      uVar9 = uVar9 >> 1 | uVar9;
      uVar9 = uVar9 >> 2 | uVar9;
      uVar9 = uVar9 >> 4 | uVar9;
      uVar9 = uVar9 >> 8 | uVar9;
      uVar7 = (uVar9 >> 0x10 | uVar9) + 1;
      uVar9 = 0x20;
      if (0x20 < uVar7) {
        uVar9 = uVar7;
      }
      pwVar8 = FMemory::Malloc(uVar9 * 2,2);
      lVar10 = (longlong)local_2060 - (longlong)local_2068 >> 1;
      if (lVar10 != 0) {
        memcpy(pwVar8,local_2068,lVar10 * 2);
      }
      if (local_2050 != '\0') {
        FMemory::Free(local_2068);
      }
      local_2060 = pwVar8 + lVar10;
      local_2058 = pwVar8 + uVar9;
      local_2050 = '\x01';
      local_2068 = pwVar8;
    }
    pvVar5 = FGenericPlatformString::Memcpy(local_2060,L"\n",2);
    local_2060 = (wchar_t *)((longlong)pvVar5 + 2);
  }
  uVar1 = (this->DenyTree).Root.NumChildNodesAndFlags;
  local_2090 = &local_2068;
  local_2088 = &local_2098;
  if (((int)uVar1 < 0) || ((uVar1 & 0x7fffffff) != 0)) {
    if (local_2058 < local_2060 + 10) {
      if ((cStack_204f != '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bIsExternal",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\StringBuilder.cpp"
                             ,0x24,
                             L"Extending the capacity of an external string builder is not supported. Size = %I64u Capacity = %I64u ExtraCapacity = %I64u."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      uVar9 = ((longlong)local_2058 - (longlong)local_2068 >> 1) + 9;
      uVar9 = uVar9 >> 1 | uVar9;
      uVar9 = uVar9 >> 2 | uVar9;
      uVar9 = uVar9 >> 4 | uVar9;
      uVar9 = uVar9 >> 8 | uVar9;
      uVar7 = (uVar9 >> 0x10 | uVar9) + 1;
      uVar9 = 0x20;
      if (0x20 < uVar7) {
        uVar9 = uVar7;
      }
      pwVar8 = FMemory::Malloc(uVar9 * 2,2);
      lVar10 = (longlong)local_2060 - (longlong)local_2068 >> 1;
      if (lVar10 != 0) {
        memcpy(pwVar8,local_2068,lVar10 * 2);
      }
      if (local_2050 != '\0') {
        FMemory::Free(local_2068);
      }
      local_2060 = pwVar8 + lVar10;
      local_2058 = pwVar8 + uVar9;
      local_2050 = '\x01';
      local_2068 = pwVar8;
    }
    pvVar5 = FGenericPlatformString::Memcpy(local_2060,L"Deny List\n",0x14);
    local_2060 = (wchar_t *)((longlong)pvVar5 + 0x14);
    `FPathPermissionList::ToString'::__l2::<lambda_2>::operator()(&local_2090,&this->DenyTree);
  }
  uVar1 = (this->AllowTree).Root.NumChildNodesAndFlags;
  if (((int)uVar1 < 0) || ((uVar1 & 0x7fffffff) != 0)) {
    if (local_2058 < local_2060 + 0xb) {
      if ((cStack_204f != '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bIsExternal",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\StringBuilder.cpp"
                             ,0x24,
                             L"Extending the capacity of an external string builder is not supported. Size = %I64u Capacity = %I64u ExtraCapacity = %I64u."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      uVar9 = ((longlong)local_2058 - (longlong)local_2068 >> 1) + 10;
      uVar9 = uVar9 >> 1 | uVar9;
      uVar9 = uVar9 >> 2 | uVar9;
      uVar9 = uVar9 >> 4 | uVar9;
      uVar9 = uVar9 >> 8 | uVar9;
      uVar7 = (uVar9 >> 0x10 | uVar9) + 1;
      uVar9 = 0x20;
      if (0x20 < uVar7) {
        uVar9 = uVar7;
      }
      pwVar8 = FMemory::Malloc(uVar9 * 2,2);
      lVar10 = (longlong)local_2060 - (longlong)local_2068 >> 1;
      if (lVar10 != 0) {
        memcpy(pwVar8,local_2068,lVar10 * 2);
      }
      if (local_2050 != '\0') {
        FMemory::Free(local_2068);
      }
      local_2060 = pwVar8 + lVar10;
      local_2058 = pwVar8 + uVar9;
      local_2050 = '\x01';
      local_2068 = pwVar8;
    }
    pvVar5 = FGenericPlatformString::Memcpy(local_2060,L"Allow List\n",0x16);
    local_2060 = (wchar_t *)((longlong)pvVar5 + 0x16);
    `FPathPermissionList::ToString'::__l2::<lambda_2>::operator()(&local_2090,&this->AllowTree);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar6 = ::FString::ConstructFromPtrSize
                     (&local_2080,local_2068,(int)((longlong)local_2060 - (longlong)local_2068 >> 1)
                     );
  if (__return_storage_ptr__ != pFVar6) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_2080.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2080.Data.AllocatorInstance.Data);
  }
  if (local_2050 != '\0') {
    FMemory::Free(local_2068);
  }
  return __return_storage_ptr__;
}

// UnregisterOwner @ 14197ab20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FPathPermissionList::UnregisterOwner(FPathPermissionList *this,FName param_1)

{
  FName *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  FPathPermissionList *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FName FVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *pTVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  int iVar14;
  int iVar15;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *pTVar16;
  int iVar17;
  FName local_res10;
  undefined1 auStackY_248 [32];
  byte local_1f8;
  undefined1 local_1f7;
  undefined1 local_1f6 [6];
  TArray<FString,TSizedDefaultAllocator<32>_> local_1f0;
  uint local_1e0;
  FScriptContainerElement *local_1d8;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *local_1d0;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *local_1c8;
  FScriptContainerElement *local_1c0;
  FPathPermissionList *local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  wchar_t *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  TStringView<wchar_t> local_178;
  wchar_t *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  wchar_t *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  TStringView<wchar_t> local_148;
  wchar_t *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringBuilderBase<wchar_t> local_c8;
  wchar_t local_a8 [16];
  TStringBuilderBase<wchar_t> local_88;
  wchar_t local_68 [16];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_248;
  pTVar16 = &this->DenyTree;
  uStack_1a0 = 0;
  local_1a8 = 0;
  local_128.DataPtr = (wchar_t *)0x0;
  local_128.Size = 0;
  local_128._12_4_ = 0;
  local_1f8 = 0;
  local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.ArrayNum = 0;
  local_1f0.ArrayMax = 0;
  local_res10 = param_1;
  local_1c8 = pTVar16;
  local_1b8 = this;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::TryGetChildren
            (pTVar16,&local_128,&local_1f0,ImpliedParent|Recursive);
  uVar10 = (ulonglong)local_1f0.ArrayNum;
  local_1c0 = local_1f0.AllocatorInstance.Data + uVar10 * 0x10;
  local_1e0 = local_1f0.ArrayNum;
  uVar9 = uVar10;
  FVar13.Data = local_1f0.AllocatorInstance.Data;
  while( true ) {
    pFVar3 = local_1c0;
    iVar7 = (int)uVar9;
    local_1d8 = FVar13.Data;
    if ((int)uVar9 != (int)uVar10) {
      local_1f6[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1f6);
      iVar7 = local_1f0.ArrayNum;
    }
    if (FVar13.Data == pFVar3) break;
    local_188 = *(wchar_t **)FVar13.Data;
    iStack_180 = *(int *)(FVar13.Data + 8) + -1;
    if (*(int *)(FVar13.Data + 8) == 0) {
      iStack_180 = 0;
    }
    local_178._12_4_ = uStack_17c;
    local_178.Size = iStack_180;
    local_178.DataPtr = local_188;
    if (iStack_180 == 0) {
      pTVar11 = pTVar16;
      local_1d0 = pTVar16;
      if (-1 < (int)(pTVar16->Root).NumChildNodesAndFlags) {
        pTVar11 = (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)0x0;
        local_1d0 = pTVar11;
      }
    }
    else {
      local_c8.Base = local_a8;
      local_c8.bIsDynamic = false;
      local_c8.bIsExternal = false;
      local_c8.CurPos = local_a8;
      local_c8.End = (wchar_t *)&local_88;
      TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::NormalizePathForReading
                (pTVar16,&local_178,&local_c8);
      local_118.DataPtr = local_178.DataPtr;
      local_118.Size = local_178.Size;
      local_118._12_4_ = local_178._12_4_;
      pTVar11 = (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)
                TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::Find
                          (&pTVar16->Root,&local_118);
      local_1d0 = pTVar11;
      if (local_c8.bIsDynamic != false) {
        FMemory::Free(local_c8.Base);
      }
    }
    pFVar1 = *(FName **)(pTVar11->Root).Value.Pad;
    if (((pFVar1 <= &local_res10) &&
        (&local_res10 < pFVar1 + *(int *)((longlong)(pTVar11->Root).Value.Pad + 0xc))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    iVar7 = *(int *)((longlong)(pTVar11->Root).Value.Pad + 8);
    if (iVar7 == 0) {
LAB_14197ada8:
      pFVar3 = local_1d8;
      local_168 = *(wchar_t **)local_1d8;
      iStack_160 = *(int *)(local_1d8 + 8) + -1;
      if (*(int *)(local_1d8 + 8) == 0) {
        iStack_160 = 0;
      }
      local_108._12_4_ = uStack_15c;
      local_108.Size = iStack_160;
      local_108.DataPtr = local_168;
      TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Remove
                (pTVar16,&local_108,(bool *)0x0);
      uVar9 = local_1f0._8_8_ & 0xffffffff;
      FVar13.Data = pFVar3 + 0x10;
      uVar10 = (ulonglong)local_1e0;
      local_1f8 = 1;
    }
    else {
      pFVar1 = *(FName **)(pTVar11->Root).Value.Pad;
      iVar17 = 0;
      lVar12 = 0;
      bVar5 = *pFVar1 != local_res10;
      FVar8 = local_res10;
      iVar14 = 0;
      do {
        iVar15 = iVar14;
        do {
          lVar12 = lVar12 + 1;
          iVar15 = iVar15 + 1;
          if (iVar7 <= lVar12) break;
        } while (bVar5 == (pFVar1[lVar12] != FVar8));
        if (bVar5 != false) {
          if (iVar17 != iVar14) {
            memmove(pFVar1 + iVar17,pFVar1 + iVar14,(longlong)(iVar15 - iVar14) << 3);
            FVar8 = local_res10;
          }
          iVar17 = iVar17 + (iVar15 - iVar14);
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar14 = iVar15;
      } while (lVar12 < iVar7);
      *(int *)((longlong)(local_1d0->Root).Value.Pad + 8) = iVar17;
      pTVar16 = local_1c8;
      if (iVar17 == 0) goto LAB_14197ada8;
      FVar13.Data = local_1d8 + 0x10;
      uVar9 = local_1f0._8_8_ & 0xffffffff;
      uVar10 = (ulonglong)local_1e0;
    }
  }
  if ((longlong)local_1f0._8_8_ < 0) {
    DestructItems<FString,int>((FString *)local_1f0.AllocatorInstance.Data,iVar7);
    iVar7 = local_1f0.ArrayMax;
    local_1f0._8_8_ = local_1f0._8_8_ & 0xffffffff00000000;
    if (iVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_1f0.AllocatorInstance,0,&local_1f0.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_1f0.AllocatorInstance.Data,iVar7);
    local_1f0._8_8_ = local_1f0._8_8_ & 0xffffffff00000000;
  }
  pTVar16 = &local_1b8->AllowTree;
  uStack_190 = 0;
  local_198 = 0;
  local_f8.DataPtr = (wchar_t *)0x0;
  local_f8.Size = 0;
  local_f8._12_4_ = 0;
  local_1d0 = pTVar16;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::TryGetChildren
            (pTVar16,&local_f8,&local_1f0,ImpliedParent|Recursive);
  uVar10 = (ulonglong)local_1f0.ArrayNum;
  local_1c0 = local_1f0.AllocatorInstance.Data + uVar10 * 0x10;
  local_1e0 = local_1f0.ArrayNum;
  uVar9 = uVar10;
  FVar13.Data = local_1f0.AllocatorInstance.Data;
  do {
    while( true ) {
      pFVar3 = local_1c0;
      local_1d8 = FVar13.Data;
      if ((int)uVar10 != (int)uVar9) {
        local_1f7 = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1f7);
      }
      pFVar4 = local_1b8;
      if (FVar13.Data == pFVar3) {
        iVar7 = TArray<FName,TSizedDefaultAllocator<32>_>::Remove
                          (&local_1b8->DenyListAll,&local_res10);
        bVar5 = (bool)(local_1f8 | 0 < iVar7);
        if ((bVar5 != false) && (pFVar4->bSuppressOnFilterChanged == false)) {
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    (&pFVar4->OnFilterChangedDelegate);
        }
        DestructItems<FString,int>((FString *)local_1f0.AllocatorInstance.Data,local_1f0.ArrayNum);
        if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.AllocatorInstance.Data);
        }
        return bVar5;
      }
      local_158 = *(wchar_t **)FVar13.Data;
      iStack_150 = *(int *)(FVar13.Data + 8) + -1;
      if (*(int *)(FVar13.Data + 8) == 0) {
        iStack_150 = 0;
      }
      local_148._12_4_ = uStack_14c;
      local_148.Size = iStack_150;
      local_148.DataPtr = local_158;
      if (iStack_150 == 0) {
        pTVar11 = pTVar16;
        local_1c8 = pTVar16;
        if (-1 < (int)(pTVar16->Root).NumChildNodesAndFlags) {
          pTVar11 = (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)0x0;
          local_1c8 = pTVar11;
        }
      }
      else {
        local_88.Base = local_68;
        local_88.bIsDynamic = false;
        local_88.bIsExternal = false;
        local_88.CurPos = local_68;
        local_88.End = (wchar_t *)local_48;
        TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::NormalizePathForReading
                  (pTVar16,&local_148,&local_88);
        local_e8.DataPtr = local_148.DataPtr;
        local_e8.Size = local_148.Size;
        local_e8._12_4_ = local_148._12_4_;
        pTVar11 = (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)
                  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::Find
                            (&pTVar16->Root,&local_e8);
        local_1c8 = pTVar11;
        if (local_88.bIsDynamic != false) {
          FMemory::Free(local_88.Base);
        }
      }
      pFVar1 = *(FName **)(pTVar11->Root).Value.Pad;
      if (((pFVar1 <= &local_res10) &&
          (&local_res10 < pFVar1 + *(int *)((longlong)(pTVar11->Root).Value.Pad + 0xc))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      iVar7 = *(int *)((longlong)(pTVar11->Root).Value.Pad + 8);
      if (iVar7 != 0) break;
LAB_14197b0a8:
      pFVar3 = local_1d8;
      local_138 = *(wchar_t **)local_1d8;
      iStack_130 = *(int *)(local_1d8 + 8) + -1;
      if (*(int *)(local_1d8 + 8) == 0) {
        iStack_130 = 0;
      }
      local_d8._12_4_ = uStack_12c;
      local_d8.Size = iStack_130;
      local_d8.DataPtr = local_138;
      TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Remove
                (pTVar16,&local_d8,(bool *)0x0);
      uVar10 = local_1f0._8_8_ & 0xffffffff;
      FVar13.Data = pFVar3 + 0x10;
      uVar9 = (ulonglong)local_1e0;
      local_1f8 = 1;
    }
    pFVar1 = *(FName **)(pTVar11->Root).Value.Pad;
    iVar17 = 0;
    lVar12 = 0;
    bVar5 = *pFVar1 != local_res10;
    FVar8 = local_res10;
    iVar14 = 0;
    do {
      iVar15 = iVar14;
      do {
        lVar12 = lVar12 + 1;
        iVar15 = iVar15 + 1;
        if (iVar7 <= lVar12) break;
      } while (bVar5 == (pFVar1[lVar12] != FVar8));
      if (bVar5 != false) {
        if (iVar17 != iVar14) {
          memmove(pFVar1 + iVar17,pFVar1 + iVar14,(longlong)(iVar15 - iVar14) << 3);
          FVar8 = local_res10;
        }
        iVar17 = iVar17 + (iVar15 - iVar14);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar14 = iVar15;
    } while (lVar12 < iVar7);
    *(int *)((longlong)(local_1c8->Root).Value.Pad + 8) = iVar17;
    pTVar16 = local_1d0;
    if (iVar17 == 0) goto LAB_14197b0a8;
    FVar13.Data = local_1d8 + 0x10;
    uVar10 = local_1f0._8_8_ & 0xffffffff;
    uVar9 = (ulonglong)local_1e0;
  } while( true );
}

// UnregisterOwners @ 14197b1a0

bool __thiscall
FPathPermissionList::UnregisterOwners
          (FPathPermissionList *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  FName *pFVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  bVar2 = this->bSuppressOnFilterChanged;
  this->bSuppressOnFilterChanged = true;
  pFVar5 = (FName *)(param_1->AllocatorInstance).Data;
  bVar6 = false;
  iVar3 = param_1->ArrayNum;
  pFVar1 = pFVar5 + iVar3;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar1) break;
    bVar4 = UnregisterOwner(this,*pFVar5);
    bVar6 = (bool)(bVar6 | bVar4);
    pFVar5 = pFVar5 + 1;
  }
  this->bSuppressOnFilterChanged = bVar2;
  if ((bVar6 != false) && (bVar2 == false)) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnFilterChangedDelegate);
  }
  return bVar6;
}

// UnregisterOwnersAndAppend @ 14197b250

bool __thiscall
FPathPermissionList::UnregisterOwnersAndAppend
          (FPathPermissionList *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          FPathPermissionList *param_2)

{
  FName *pFVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  FName *pFVar5;
  byte bVar6;
  undefined1 local_res8 [8];
  
  bVar2 = this->bSuppressOnFilterChanged;
  this->bSuppressOnFilterChanged = true;
  pFVar5 = (FName *)(param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  bVar6 = 0;
  pFVar1 = pFVar5 + iVar3;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar1) break;
    bVar4 = UnregisterOwner(this,*pFVar5);
    bVar6 = bVar6 | bVar4;
    pFVar5 = pFVar5 + 1;
  }
  this->bSuppressOnFilterChanged = true;
  bVar4 = Append(this,param_2);
  this->bSuppressOnFilterChanged = bVar2;
  if (((bool)(bVar4 | bVar6) != false) && (bVar2 == false)) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnFilterChangedDelegate);
  }
  return (bool)(bVar4 | bVar6);
}

// VerifyItemMatchesListType @ 14197c740

/* WARNING: Removing unreachable block (ram,0x00014197c7bd) */

void __thiscall
FPathPermissionList::VerifyItemMatchesListType
          (FPathPermissionList *this,TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  int iVar4;
  TStringView<wchar_t> *local_res8;
  
  if (this->ListType == ClassPaths) {
    pwVar2 = param_1->DataPtr;
    iVar4 = (int)*(undefined8 *)&param_1->Size;
    if (iVar4 != 0) {
      if ((iVar4 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((*pwVar2 != L'/') &&
         ((iVar4 != 4 || (iVar4 = FGenericPlatformStricmp::Strnicmp(pwVar2,L"None",4), iVar4 != 0)))
         ) {
        local_res8 = param_1;
        `FPathPermissionList::VerifyItemMatchesListType'::__l5::<lambda_1>::operator()(&local_res8);
      }
    }
  }
  return;
}

// operator() @ 15047ed30

bool __thiscall `FPathPermissionList::Append'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5596217008002694758>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5596217008002694758>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15047ee90

bool __thiscall
`FPathPermissionList::VerifyItemMatchesListType'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5596217008002694614>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5596217008002694614>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

