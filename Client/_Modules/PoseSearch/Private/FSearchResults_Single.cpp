// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 3

// FSearchResults_Single @ 14a919e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSearchResults_Single * __thiscall
UE::PoseSearch::FSearchResults_Single::FSearchResults_Single(FSearchResults_Single *this)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  FSearchResults::FSearchResults((FSearchResults *)this);
  this->_padding_ = (longlong)&___7FSearchResults_Single_PoseSearch_UE__6B_;
  *(undefined4 *)&this->SingleSearchResult = 0xffffffff;
  *(undefined8 *)&(this->SingleSearchResult).field_0x4 = 0;
  (this->SingleSearchResult).PoseCost.TotalCost = 3.4028235e+38;
  (this->SingleSearchResult).EventPoseIdx = -1;
  (this->SingleSearchResult).AssetTime = 3.4028235e+38;
  (this->SingleSearchResult).bIsContinuingPoseSearch = false;
  local_48 = this->_padding_;
  lVar2 = this->_padding_;
  local_38 = this->_padding_;
  lStack_30 = this->_padding_;
  lVar1 = this->_padding_;
  plStack_20 = (longlong *)this->_padding_;
  this->_padding_ =
       (longlong)
       Core::Private::Function::
       TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_1>,void,UE::PoseSearch::FSearchResult_const_&>
       ::Call;
  this->_padding_ = lStack_40;
  *(undefined4 *)&this->_padding_ = 0x52280c90;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = (longlong)this;
  *(undefined4 *)&this->_padding_ = (undefined4)local_28;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_28._4_4_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  local_28 = lVar1;
  lStack_40 = lVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = this->_padding_;
  lVar2 = this->_padding_;
  local_38 = this->_padding_;
  lStack_30 = this->_padding_;
  lVar1 = this->_padding_;
  plStack_20 = (longlong *)this->_padding_;
  this->_padding_ =
       (longlong)
       Core::Private::Function::
       TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_2>,void>
       ::Call;
  this->_padding_ = lStack_40;
  *(undefined4 *)&this->_padding_ = 0x52280cb0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = (longlong)this;
  *(undefined4 *)&this->_padding_ = (undefined4)local_28;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_28._4_4_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  local_28 = lVar1;
  lStack_40 = lVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = this->_padding_;
  lVar2 = this->_padding_;
  local_38 = this->_padding_;
  lStack_30 = this->_padding_;
  lVar1 = this->_padding_;
  plStack_20 = (longlong *)this->_padding_;
  this->_padding_ =
       (longlong)
       Core::Private::Function::
       TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_3>,UE::PoseSearch::FSearchResult>
       ::Call;
  this->_padding_ = lStack_40;
  *(undefined4 *)&this->_padding_ = 0x52280cd0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = (longlong)this;
  *(undefined4 *)&this->_padding_ = (undefined4)local_28;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_28._4_4_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  local_28 = lVar1;
  lStack_40 = lVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = this->_padding_;
  lVar2 = this->_padding_;
  local_38 = this->_padding_;
  lStack_30 = this->_padding_;
  lVar1 = this->_padding_;
  plStack_20 = (longlong *)this->_padding_;
  this->_padding_ =
       (longlong)
       Core::Private::Function::
       TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_4>,bool,float>
       ::Call;
  this->_padding_ = lStack_40;
  *(undefined4 *)&this->_padding_ = 0x52280cf0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = (longlong)this;
  *(undefined4 *)&this->_padding_ = (undefined4)local_28;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_28._4_4_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  local_28 = lVar1;
  lStack_40 = lVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = this->_padding_;
  lVar2 = this->_padding_;
  local_38 = this->_padding_;
  lStack_30 = this->_padding_;
  lVar1 = this->_padding_;
  plStack_20 = (longlong *)this->_padding_;
  this->_padding_ =
       (longlong)
       Core::Private::Function::
       TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_5>,bool,TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>_>
       ::Call;
  this->_padding_ = lStack_40;
  *(undefined4 *)&this->_padding_ = 0x52280d10;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = (longlong)this;
  *(undefined4 *)&this->_padding_ = (undefined4)local_28;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_28._4_4_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  local_28 = lVar1;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    lStack_40 = lVar2;
    (**(code **)(*plVar3 + 0x10))();
  }
  return this;
}

// operator() @ 14a91cd70

void __thiscall
`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_1>::operator()
          (void *this,FSearchResult *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  
  if (*(int *)param_1 != -1) {
    bVar4 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                       &param_1->field_0x4,(void *)0x0);
    if (!bVar4) goto LAB_14a91cdba;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("SearchResult.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchResult.cpp"
                     ,0xe8,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14a91cdba:
  lVar1 = *(longlong *)this;
  if ((param_1->PoseCost).TotalCost <= *(float *)(lVar1 + 0x10c) &&
      *(float *)(lVar1 + 0x10c) != (param_1->PoseCost).TotalCost) {
    uVar3 = *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)(lVar1 + 0x100) = *(undefined8 *)param_1;
    *(undefined8 *)(lVar1 + 0x108) = uVar3;
    *(undefined8 *)(lVar1 + 0x110) = *(undefined8 *)&param_1->EventPoseIdx;
    *(undefined4 *)(lVar1 + 0x118) = *(undefined4 *)&param_1->bIsContinuingPoseSearch;
  }
  return;
}

// operator() @ 14a91e170

void __thiscall
`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_2>::operator()
          (void *this)

{
  longlong lVar1;
  bool bVar2;
  UPoseSearchDatabase *this_00;
  float fVar3;
  
  if (((*(int *)(*(longlong *)this + 0x100) != -1) &&
      (bVar2 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                          (*(longlong *)this + 0x104),(void *)0x0), !bVar2)) &&
     (lVar1 = *(longlong *)this, __real_7f7fffff == *(float *)(lVar1 + 0x114))) {
    this_00 = (UPoseSearchDatabase *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar1 + 0x104));
    fVar3 = UPoseSearchDatabase::GetNormalizedAssetTime(this_00,*(int *)(*(longlong *)this + 0x100))
    ;
    UE::PoseSearch::FSearchResult::SetAssetTime((FSearchResult *)(lVar1 + 0x100),fVar3);
  }
  return;
}

