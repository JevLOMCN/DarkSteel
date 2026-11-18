// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 12

// <lambda_invoker_cdecl> @ 142ccca30

bool __cdecl
`UE::Editor::DataStorage::Queries::FQueryContextMock::FQueryContextMock'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(TArrayView<UScriptStruct_const_*_const,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementQueryCapabilities.inl"
                     ,0x10,
                     L"Context function CurrentRowHasColumns in capability SingleRowInfo was unexpectedly called."
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 142cccac0

ulong64 __cdecl
`UE::Editor::DataStorage::Queries::FQueryContextMock::FQueryContextMock'::__l2::<lambda_2>::
<lambda_invoker_cdecl>(void)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementQueryCapabilities.inl"
                     ,0x12,
                     L"Context function GetCurrentRow in capability SingleRowInfo was unexpectedly called."
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}

// <lambda_invoker_cdecl> @ 142cccb00

uint __cdecl
`UE::Editor::DataStorage::Queries::FQueryContextMock::FQueryContextMock'::__l2::<lambda_3>::
<lambda_invoker_cdecl>(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementQueryCapabilities.inl"
                     ,0x26,
                     L"Context function GetBatchRowCount in capability RowBatchInfo was unexpectedly called."
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}

// <lambda_invoker_cdecl> @ 142cccb40

TArrayView<unsigned___int64_const_,int> * __cdecl
`UE::Editor::DataStorage::Queries::FQueryContextMock::FQueryContextMock'::__l2::<lambda_4>::
<lambda_invoker_cdecl>(TArrayView<unsigned___int64_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned___int64_const_,int> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementQueryCapabilities.inl"
                     ,0x28,
                     L"Context function GetBatchRowHandles in capability RowBatchInfo was unexpectedly called."
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArrayView<unsigned___int64_const_,int> *)(*pcVar1)();
    return pTVar3;
  }
  __return_storage_ptr__->DataPtr = (ulong64 *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 142cccb90

bool __cdecl
`UE::Editor::DataStorage::Queries::FQueryContextMock::FQueryContextMock'::__l2::<lambda_5>::
<lambda_invoker_cdecl>(TArrayView<UScriptStruct_const_*_const,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementQueryCapabilities.inl"
                     ,0x2a,
                     L"Context function CurrentBatchTableHasColumns in capability RowBatchInfo was unexpectedly called."
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// FQueryContextMock @ 142ce2400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FQueryContextMock * __thiscall
UE::Editor::DataStorage::Queries::FQueryContextMock::FQueryContextMock(FQueryContextMock *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Editor__DataStorage__Queries__ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>__
  ;
  *(undefined8 *)&this->SingleRowInfo_CurrentRowHasColumns_Mock = 0;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Editor__DataStorage__Queries__IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>__
  ;
  *(undefined8 *)&(this->SingleRowInfo_CurrentRowHasColumns_Mock).field_0x28 = 0;
  *(undefined8 *)&this->SingleRowInfo_GetCurrentRow_Mock = 0;
  *(undefined8 *)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x28 = 0;
  *(undefined8 *)&this->RowBatchInfo_GetBatchRowCount_Mock = 0;
  *(undefined8 *)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x28 = 0;
  *(undefined8 *)&this->RowBatchInfo_GetBatchRowHandles_Mock = 0;
  *(undefined8 *)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x28 = 0;
  *(undefined8 *)&this->RowBatchInfo_CurrentBatchTableHasColumns_Mock = 0;
  *(undefined8 *)&(this->RowBatchInfo_CurrentBatchTableHasColumns_Mock).field_0x28 = 0;
  local_58 = *(longlong *)&this->SingleRowInfo_CurrentRowHasColumns_Mock;
  uVar2 = *(undefined8 *)&(this->SingleRowInfo_CurrentRowHasColumns_Mock).field_0x8;
  local_48 = *(longlong *)&(this->SingleRowInfo_CurrentRowHasColumns_Mock).field_0x10;
  uStack_40 = *(undefined8 *)&(this->SingleRowInfo_CurrentRowHasColumns_Mock).field_0x18;
  uVar1 = *(undefined8 *)&(this->SingleRowInfo_CurrentRowHasColumns_Mock).field_0x20;
  plStack_30 = *(longlong **)&(this->SingleRowInfo_CurrentRowHasColumns_Mock).field_0x28;
  *(code **)&this->SingleRowInfo_CurrentRowHasColumns_Mock =
       Core::Private::Function::
       TFunctionRefCaller<bool_(__cdecl*)(TArrayView<UScriptStruct_const_*_const,int>),bool,TArrayView<UScriptStruct_const_*_const,int>_>
       ::Call;
  *(undefined8 *)&(this->SingleRowInfo_CurrentRowHasColumns_Mock).field_0x8 = uStack_50;
  *(undefined4 *)&(this->SingleRowInfo_CurrentRowHasColumns_Mock).field_0x10 = 0x509d9708;
  *(undefined4 *)&(this->SingleRowInfo_CurrentRowHasColumns_Mock).field_0x14 = 1;
  *(undefined4 *)&(this->SingleRowInfo_CurrentRowHasColumns_Mock).field_0x18 = 0x42ccca30;
  *(undefined4 *)&(this->SingleRowInfo_CurrentRowHasColumns_Mock).field_0x1c = 1;
  *(undefined4 *)&(this->SingleRowInfo_CurrentRowHasColumns_Mock).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->SingleRowInfo_CurrentRowHasColumns_Mock).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->SingleRowInfo_CurrentRowHasColumns_Mock).field_0x28 = 0;
  *(undefined4 *)&(this->SingleRowInfo_CurrentRowHasColumns_Mock).field_0x2c = 0;
  local_38 = uVar1;
  uStack_50 = uVar2;
  if (local_58 != 0) {
    plVar3 = &local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar3 = plStack_30;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_58 = *(longlong *)&this->SingleRowInfo_GetCurrentRow_Mock;
  uVar2 = *(undefined8 *)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x8;
  local_48 = *(longlong *)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x10;
  uStack_40 = *(undefined8 *)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x18;
  uVar1 = *(undefined8 *)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x20;
  plStack_30 = *(longlong **)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x28;
  *(code **)&this->SingleRowInfo_GetCurrentRow_Mock =
       Core::Private::Function::
       TFunctionRefCaller<unsigned___int64_(__cdecl*)(void),unsigned___int64>::Call;
  *(undefined8 *)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x8 = uStack_50;
  *(undefined4 *)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x10 = 0x509d9728;
  *(undefined4 *)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x14 = 1;
  *(undefined4 *)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x18 = 0x42cccac0;
  *(undefined4 *)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x1c = 1;
  *(undefined4 *)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x28 = 0;
  *(undefined4 *)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x2c = 0;
  local_38 = uVar1;
  uStack_50 = uVar2;
  if (local_58 != 0) {
    plVar3 = &local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar3 = plStack_30;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_58 = *(longlong *)&this->RowBatchInfo_GetBatchRowCount_Mock;
  uVar2 = *(undefined8 *)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x8;
  local_48 = *(longlong *)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x10;
  uStack_40 = *(undefined8 *)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x18;
  uVar1 = *(undefined8 *)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x20;
  plStack_30 = *(longlong **)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x28;
  *(code **)&this->RowBatchInfo_GetBatchRowCount_Mock =
       Core::Private::Function::TFunctionRefCaller<unsigned_int_(__cdecl*)(void),unsigned_int>::Call
  ;
  *(undefined8 *)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x8 = uStack_50;
  *(undefined4 *)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x10 = 0x509d9748;
  *(undefined4 *)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x14 = 1;
  *(undefined4 *)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x18 = 0x42cccb00;
  *(undefined4 *)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x1c = 1;
  *(undefined4 *)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x28 = 0;
  *(undefined4 *)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x2c = 0;
  local_38 = uVar1;
  uStack_50 = uVar2;
  if (local_58 != 0) {
    plVar3 = &local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar3 = plStack_30;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_58 = *(longlong *)&this->RowBatchInfo_GetBatchRowHandles_Mock;
  uVar2 = *(undefined8 *)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x8;
  local_48 = *(longlong *)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x10;
  uStack_40 = *(undefined8 *)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x18;
  uVar1 = *(undefined8 *)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x20;
  plStack_30 = *(longlong **)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x28;
  *(code **)&this->RowBatchInfo_GetBatchRowHandles_Mock =
       Core::Private::Function::
       TFunctionRefCaller<TArrayView<unsigned___int64_const_,int>_(__cdecl*)(void),TArrayView<unsigned___int64_const_,int>_>
       ::Call;
  *(undefined8 *)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x8 = uStack_50;
  *(undefined4 *)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x10 = 0x509d9768;
  *(undefined4 *)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x14 = 1;
  *(undefined4 *)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x18 = 0x42cccb40;
  *(undefined4 *)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x1c = 1;
  *(undefined4 *)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x28 = 0;
  *(undefined4 *)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x2c = 0;
  local_38 = uVar1;
  uStack_50 = uVar2;
  if (local_58 != 0) {
    plVar3 = &local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar3 = plStack_30;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_58 = *(longlong *)&this->RowBatchInfo_CurrentBatchTableHasColumns_Mock;
  uVar2 = *(undefined8 *)&(this->RowBatchInfo_CurrentBatchTableHasColumns_Mock).field_0x8;
  local_48 = *(longlong *)&(this->RowBatchInfo_CurrentBatchTableHasColumns_Mock).field_0x10;
  uStack_40 = *(undefined8 *)&(this->RowBatchInfo_CurrentBatchTableHasColumns_Mock).field_0x18;
  uVar1 = *(undefined8 *)&(this->RowBatchInfo_CurrentBatchTableHasColumns_Mock).field_0x20;
  plStack_30 = *(longlong **)&(this->RowBatchInfo_CurrentBatchTableHasColumns_Mock).field_0x28;
  *(code **)&this->RowBatchInfo_CurrentBatchTableHasColumns_Mock =
       Core::Private::Function::
       TFunctionRefCaller<bool_(__cdecl*)(TArrayView<UScriptStruct_const_*_const,int>),bool,TArrayView<UScriptStruct_const_*_const,int>_>
       ::Call;
  *(undefined8 *)&(this->RowBatchInfo_CurrentBatchTableHasColumns_Mock).field_0x8 = uStack_50;
  *(undefined4 *)&(this->RowBatchInfo_CurrentBatchTableHasColumns_Mock).field_0x10 = 0x509d9708;
  *(undefined4 *)&(this->RowBatchInfo_CurrentBatchTableHasColumns_Mock).field_0x14 = 1;
  *(undefined4 *)&(this->RowBatchInfo_CurrentBatchTableHasColumns_Mock).field_0x18 = 0x42cccb90;
  *(undefined4 *)&(this->RowBatchInfo_CurrentBatchTableHasColumns_Mock).field_0x1c = 1;
  *(undefined4 *)&(this->RowBatchInfo_CurrentBatchTableHasColumns_Mock).field_0x20 =
       (undefined4)local_38;
  *(undefined4 *)&(this->RowBatchInfo_CurrentBatchTableHasColumns_Mock).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->RowBatchInfo_CurrentBatchTableHasColumns_Mock).field_0x28 = 0;
  *(undefined4 *)&(this->RowBatchInfo_CurrentBatchTableHasColumns_Mock).field_0x2c = 0;
  local_38 = uVar1;
  if (local_58 != 0) {
    plVar3 = &local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar3 = plStack_30;
    }
    uStack_50 = uVar2;
    (**(code **)(*plVar3 + 0x10))();
  }
  return this;
}

// ~FQueryContextMock @ 142ce56a0

void __thiscall
UE::Editor::DataStorage::Queries::FQueryContextMock::~FQueryContextMock(FQueryContextMock *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->RowBatchInfo_CurrentBatchTableHasColumns_Mock != 0) {
    plVar1 = *(longlong **)&(this->RowBatchInfo_CurrentBatchTableHasColumns_Mock).field_0x28;
    plVar2 = (longlong *)&(this->RowBatchInfo_CurrentBatchTableHasColumns_Mock).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->RowBatchInfo_GetBatchRowHandles_Mock != 0) {
    plVar1 = *(longlong **)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x28;
    plVar2 = (longlong *)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->RowBatchInfo_GetBatchRowCount_Mock != 0) {
    plVar1 = *(longlong **)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x28;
    plVar2 = (longlong *)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->SingleRowInfo_GetCurrentRow_Mock != 0) {
    plVar1 = *(longlong **)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x28;
    plVar2 = (longlong *)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->SingleRowInfo_CurrentRowHasColumns_Mock != 0) {
    plVar1 = *(longlong **)&(this->SingleRowInfo_CurrentRowHasColumns_Mock).field_0x28;
    plVar2 = (longlong *)&(this->SingleRowInfo_CurrentRowHasColumns_Mock).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x000142ce5746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// CurrentBatchTableHasColumns @ 142cf4850

bool __thiscall
UE::Editor::DataStorage::Queries::FQueryContextMock::CurrentBatchTableHasColumns
          (FQueryContextMock *this,TArrayView<UScriptStruct_const_*_const,int> *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  UScriptStruct **local_18;
  undefined8 uStack_10;
  
  local_18 = param_1->DataPtr;
  uStack_10 = *(undefined8 *)&param_1->ArrayNum;
  Core::Private::Function::CheckCallable
            (*(void **)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x28);
  pcVar1 = *(code **)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x28;
  plVar2 = *(longlong **)&(this->RowBatchInfo_CurrentBatchTableHasColumns_Mock).field_0x20;
  plVar5 = (longlong *)&(this->RowBatchInfo_CurrentBatchTableHasColumns_Mock).field_0x8;
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  uVar3 = (*pcVar1)(uVar4,&local_18);
  return (bool)uVar3;
}

// CurrentRowHasColumns @ 142cf4970

bool __thiscall
UE::Editor::DataStorage::Queries::FQueryContextMock::CurrentRowHasColumns
          (FQueryContextMock *this,TArrayView<UScriptStruct_const_*_const,int> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  UScriptStruct **local_18;
  undefined8 uStack_10;
  
  local_18 = param_1->DataPtr;
  uStack_10 = *(undefined8 *)&param_1->ArrayNum;
  Core::Private::Function::CheckCallable(*(void **)&this->SingleRowInfo_CurrentRowHasColumns_Mock);
  plVar1 = *(longlong **)&(this->SingleRowInfo_CurrentRowHasColumns_Mock).field_0x28;
  pcVar2 = *(code **)&this->SingleRowInfo_CurrentRowHasColumns_Mock;
  plVar5 = (longlong *)&(this->SingleRowInfo_CurrentRowHasColumns_Mock).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  uVar3 = (*pcVar2)(uVar4,&local_18);
  return (bool)uVar3;
}

// GetBatchRowCount @ 142cf5280

uint __thiscall
UE::Editor::DataStorage::Queries::FQueryContextMock::GetBatchRowCount(FQueryContextMock *this)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  Core::Private::Function::CheckCallable
            (*(void **)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x28);
  UNRECOVERED_JUMPTABLE = *(code **)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x28;
  plVar1 = *(longlong **)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x20;
  plVar4 = (longlong *)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x8;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000142cf52bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return uVar2;
}

// GetBatchRowHandles @ 142cf5390

TArrayView<unsigned___int64_const_,int> * __thiscall
UE::Editor::DataStorage::Queries::FQueryContextMock::GetBatchRowHandles
          (FQueryContextMock *this,TArrayView<unsigned___int64_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  Core::Private::Function::CheckCallable
            (*(void **)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x28);
  pcVar1 = *(code **)&(this->RowBatchInfo_GetBatchRowCount_Mock).field_0x28;
  plVar2 = *(longlong **)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x20;
  plVar4 = (longlong *)&(this->RowBatchInfo_GetBatchRowHandles_Mock).field_0x8;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// GetCurrentRow @ 142cf57c0

ulong64 __thiscall
UE::Editor::DataStorage::Queries::FQueryContextMock::GetCurrentRow(FQueryContextMock *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong64 uVar3;
  longlong *plVar4;
  
  Core::Private::Function::CheckCallable(*(void **)&this->SingleRowInfo_GetCurrentRow_Mock);
  plVar1 = *(longlong **)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->SingleRowInfo_GetCurrentRow_Mock;
  plVar4 = (longlong *)&(this->SingleRowInfo_GetCurrentRow_Mock).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000142cf57ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar2);
  return uVar3;
}

