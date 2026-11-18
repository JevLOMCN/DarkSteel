// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MobilePatchingUtils
// Functions: 2

// ApplyAfter<void_(__cdecl*const_&)(TSharedRef<IBuildInstaller,1>_const_&,UMobilePendingContent_*,FOnContentInstallSucceeded,FOnContentInstallFailed),TSharedRef<IBuildInstaller,1>_const_&> @ 14f03c490

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UMobilePendingContent_*,FOnContentInstallSucceeded,FOnContentInstallFailed>
::
ApplyAfter<void_(__cdecl*const_&)(TSharedRef<IBuildInstaller,1>_const_&,UMobilePendingContent_*,FOnContentInstallSucceeded,FOnContentInstallFailed),TSharedRef<IBuildInstaller,1>_const_&>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UMobilePendingContent_*,FOnContentInstallSucceeded,FOnContentInstallFailed>
           *this,_func___cdecl_void_TSharedRef<IBuildInstaller,1>_ptr_UMobilePendingContent_ptr_FOnContentInstallSucceeded_FOnContentInstallFailed
                 **param_1,TSharedRef<IBuildInstaller,1> *param_2)

{
  _func___cdecl_void_TSharedRef<IBuildInstaller,1>_ptr_UMobilePendingContent_ptr_FOnContentInstallSucceeded_FOnContentInstallFailed
  *p_Var1;
  FOnContentInstallFailed local_58;
  FOnContentInstallSucceeded local_40;
  FReadAccessScope local_28;
  
  p_Var1 = *param_1;
  local_58._0_8_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x20,&local_28);
  local_58._8_8_ = *(undefined8 *)&this->field_0x28;
  local_58._16_8_ = *(undefined8 *)&this->field_0x30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  local_40._0_8_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x8,&local_28);
  local_40._8_8_ = *(undefined8 *)&this->field_0x10;
  local_40._16_8_ = *(undefined8 *)&this->field_0x18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  (*p_Var1)(param_2,*(UMobilePendingContent **)this,&local_40,&local_58);
  return;
}

// ApplyAfter<void_(__cdecl*const_&)(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool,UMobilePendingContent_*,FOnRequestContentSucceeded,FOnRequestContentFailed),TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool> @ 14f03c550

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UMobilePendingContent_*,FOnRequestContentSucceeded,FOnRequestContentFailed>
::
ApplyAfter<void_(__cdecl*const_&)(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool,UMobilePendingContent_*,FOnRequestContentSucceeded,FOnRequestContentFailed),TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UMobilePendingContent_*,FOnRequestContentSucceeded,FOnRequestContentFailed>
           *this,_func___cdecl_void_TSharedPtr<IHttpRequest,1>_TSharedPtr<IHttpResponse,1>_bool_UMobilePendingContent_ptr_FOnRequestContentSucceeded_FOnRequestContentFailed
                 **param_1,TSharedPtr<IHttpRequest,1> *param_2,TSharedPtr<IHttpResponse,1> *param_3,
          bool *param_4)

{
  bool bVar1;
  _func___cdecl_void_TSharedPtr<IHttpRequest,1>_TSharedPtr<IHttpResponse,1>_bool_UMobilePendingContent_ptr_FOnRequestContentSucceeded_FOnRequestContentFailed
  *p_Var2;
  UMobilePendingContent *pUVar3;
  TSharedPtr<IHttpResponse,1> local_88;
  TSharedPtr<IHttpRequest,1> local_78;
  FOnRequestContentFailed local_68;
  FOnRequestContentSucceeded local_50;
  FReadAccessScope local_38;
  
  p_Var2 = *param_1;
  local_68._0_8_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x20,&local_38);
  local_68._8_8_ = *(undefined8 *)&this->field_0x28;
  local_68._16_8_ = *(undefined8 *)&this->field_0x30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  local_50._0_8_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x8,&local_38);
  local_50._8_8_ = *(undefined8 *)&this->field_0x10;
  local_50._16_8_ = *(undefined8 *)&this->field_0x18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  pUVar3 = *(UMobilePendingContent **)this;
  bVar1 = *param_4;
  local_88.Object = param_3->Object;
  local_88.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  (param_3->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_3->Object = (IHttpResponse *)0x0;
  local_78.Object = param_2->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IHttpRequest *)0x0;
  (*p_Var2)(&local_78,&local_88,bVar1,pUVar3,&local_50,&local_68);
  return;
}

