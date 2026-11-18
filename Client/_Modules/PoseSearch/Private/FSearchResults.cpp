// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 7

// ~FSearchResults @ 14a8addb0

void __thiscall UE::PoseSearch::FSearchResults::~FSearchResults(FSearchResults *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7FSearchResults_PoseSearch_UE__6B_;
  if (*(longlong *)&this->IterateOverSearchResults != 0) {
    plVar1 = *(longlong **)&(this->IterateOverSearchResults).field_0x28;
    plVar2 = (longlong *)&(this->IterateOverSearchResults).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->ShouldPerformSearch != 0) {
    plVar1 = *(longlong **)&(this->ShouldPerformSearch).field_0x28;
    plVar2 = (longlong *)&(this->ShouldPerformSearch).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->GetBestResult != 0) {
    plVar1 = *(longlong **)&(this->GetBestResult).field_0x28;
    plVar2 = (longlong *)&(this->GetBestResult).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->FinalizeResults != 0) {
    plVar1 = *(longlong **)&(this->FinalizeResults).field_0x28;
    plVar2 = (longlong *)&(this->FinalizeResults).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->UpdateWith != 0) {
    plVar1 = *(longlong **)&(this->UpdateWith).field_0x28;
    plVar2 = (longlong *)&(this->UpdateWith).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014a8ade60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 14a90ee60

void __cdecl
`UE::PoseSearch::FSearchResults::FSearchResults'::__l1::<lambda_24_>::<lambda_invoker_cdecl>
          (FSearchResult *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 14a90ee70

void __cdecl
`UE::PoseSearch::FSearchResults::FSearchResults'::__l1::<lambda_25_>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 14a90ee80

FSearchResult * __cdecl
`UE::PoseSearch::FSearchResults::FSearchResults'::__l1::<lambda_26_>::<lambda_invoker_cdecl>
          (FSearchResult *__return_storage_ptr__)

{
  *(undefined2 *)&__return_storage_ptr__->field_0x19 = 0;
  __return_storage_ptr__->field_0x1b = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x4 = 0;
  __return_storage_ptr__->bIsContinuingPoseSearch = false;
  *(undefined4 *)__return_storage_ptr__ = 0xffffffff;
  (__return_storage_ptr__->PoseCost).TotalCost = 3.4028235e+38;
  __return_storage_ptr__->EventPoseIdx = -1;
  __return_storage_ptr__->AssetTime = 3.4028235e+38;
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 14a90eec0

bool __cdecl
`UE::PoseSearch::FSearchResults::FSearchResults'::__l1::<lambda_27_>::<lambda_invoker_cdecl>
          (float param_1)

{
  return true;
}

// <lambda_invoker_cdecl> @ 14a90eed0

bool __cdecl
`UE::PoseSearch::FSearchResults::FSearchResults'::__l1::<lambda_28_>::<lambda_invoker_cdecl>
          (TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)> *param_1)

{
  return true;
}

// FSearchResults @ 14a919680

FSearchResults * __thiscall UE::PoseSearch::FSearchResults::FSearchResults(FSearchResults *this)

{
  undefined1 *puVar1;
  
  this->_padding_ = (longlong)&___7FSearchResults_PoseSearch_UE__6B_;
  *(undefined8 *)&this->UpdateWith = 0;
  *(undefined8 *)&(this->UpdateWith).field_0x28 = 0;
  *(undefined ***)&(this->UpdateWith).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6AXAEBUFSearchResult_PoseSearch_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->UpdateWith).field_0x18;
  *(code **)puVar1 =
       `UE::PoseSearch::FSearchResults::FSearchResults'::__l1::<lambda_24_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->UpdateWith =
         Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(UE::PoseSearch::FSearchResult_const_&),void,UE::PoseSearch::FSearchResult_const_&>
         ::Call;
  }
  *(undefined8 *)&this->FinalizeResults = 0;
  *(undefined8 *)&(this->FinalizeResults).field_0x28 = 0;
  *(undefined ***)&(this->FinalizeResults).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->FinalizeResults).field_0x18;
  *(code **)puVar1 =
       `UE::PoseSearch::FSearchResults::FSearchResults'::__l1::<lambda_25_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->FinalizeResults =
         Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  }
  *(undefined8 *)&this->GetBestResult = 0;
  *(undefined8 *)&(this->GetBestResult).field_0x28 = 0;
  *(undefined ***)&(this->GetBestResult).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_AUFSearchResult_PoseSearch_UE__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->GetBestResult).field_0x18;
  *(code **)puVar1 =
       `UE::PoseSearch::FSearchResults::FSearchResults'::__l1::<lambda_26_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetBestResult =
         Core::Private::Function::
         TFunctionRefCaller<UE::PoseSearch::FSearchResult_(__cdecl*)(void),UE::PoseSearch::FSearchResult>
         ::Call;
  }
  *(undefined8 *)&this->ShouldPerformSearch = 0;
  *(undefined8 *)&(this->ShouldPerformSearch).field_0x28 = 0;
  *(undefined ***)&(this->ShouldPerformSearch).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NM_Z_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ShouldPerformSearch).field_0x18;
  *(code **)puVar1 =
       `UE::PoseSearch::FSearchResults::FSearchResults'::__l1::<lambda_27_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldPerformSearch =
         Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(float),bool,float>::Call;
  }
  *(undefined8 *)&this->IterateOverSearchResults = 0;
  *(undefined8 *)&(this->IterateOverSearchResults).field_0x28 = 0;
  *(undefined ***)&(this->IterateOverSearchResults).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NV__TFunctionRef___A6A_NAEBUFSearchResult_PoseSearch_UE___Z___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->IterateOverSearchResults).field_0x18;
  *(code **)puVar1 =
       `UE::PoseSearch::FSearchResults::FSearchResults'::__l1::<lambda_28_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->IterateOverSearchResults =
         Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>),bool,TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>_>
         ::Call;
  }
  return this;
}

