// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 20

// TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock><> @ 142cccbd0

TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock> * __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock>::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock><>
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock> *this)

{
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Editor__DataStorage__Queries__Private__IContextContractCombinerImpl<UE::Editor::DataStorage::Queries::ISingleRowInfo>__
  ;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Editor__DataStorage__Queries__Private__IContextContractCombinerImpl<UE::Editor::DataStorage::Queries::IRowBatchInfo>__
  ;
  FQueryContextMock::FQueryContextMock(&this->Implementation);
  return this;
}

// TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_><> @ 142cccc10

TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
* __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_><>
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Editor__DataStorage__Queries__Private__IContextContractCombinerImpl<UE::Editor::DataStorage::Queries::ISingleRowInfo>__
  ;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Editor__DataStorage__Queries__Private__IContextContractCombinerImpl<UE::Editor::DataStorage::Queries::IRowBatchInfo>__
  ;
  FQueryContextMock::FQueryContextMock(&this->Implementation);
  return this;
}

// CheckCompatiblity<void> @ 142cd5a40

bool __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock>::CheckCompatiblity<void>
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock> *this,
          TQueryFunction<void> *param_1)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FName *this_00;
  bool bVar5;
  FString local_18;
  
  this_00 = *(FName **)param_1;
  bVar5 = true;
  pFVar1 = this_00 + *(int *)&param_1->field_0x8;
  do {
    if (this_00 == pFVar1) {
      return bVar5;
    }
    if ((ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name != *this_00) &&
       (IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name != *this_00)) {
      bVar5 = false;
      ::FName::ToString(this_00,&local_18);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementQueryContextImplementation.inl"
                         ,0xa3,
                         L"Requested query context \'%s\' is not supported by query context implementation."
                        );
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    this_00 = this_00 + 1;
  } while( true );
}

// CheckCompatiblity<void> @ 142cd5b10

bool __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
::CheckCompatiblity<void>
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
           *this,TQueryFunction<void> *param_1)

{
  FName *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FName *this_00;
  bool bVar6;
  FString local_18;
  
  this_00 = *(FName **)param_1;
  bVar6 = true;
  pFVar1 = this_00 + *(int *)&param_1->field_0x8;
  do {
    if (this_00 == pFVar1) {
      return bVar6;
    }
    FVar2 = *this_00;
    if ((ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name != FVar2) &&
       ((IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name != FVar2 ||
        (ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name != FVar2)))) {
      bVar6 = false;
      ::FName::ToString(this_00,&local_18);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementQueryContextImplementation.inl"
                         ,0xa3,
                         L"Requested query context \'%s\' is not supported by query context implementation."
                        );
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    this_00 = this_00 + 1;
  } while( true );
}

// ~TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock> @ 142ce5450

void __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock>::
~TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock>
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock> *this)

{
  FQueryContextMock::~FQueryContextMock(&this->Implementation);
  return;
}

// ~TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_> @ 142ce5460

void __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
::
~TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
           *this)

{
  FQueryContextMock::~FQueryContextMock(&this->Implementation);
  return;
}

// CurrentBatchTableHasColumns @ 142cf47b0

bool __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock>::CurrentBatchTableHasColumns
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock> *this,
          TArrayView<UScriptStruct_const_*_const,int> *param_1)

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
            (*(void **)&(this->Implementation).RowBatchInfo_GetBatchRowHandles_Mock.field_0x28);
  pcVar1 = *(code **)&(this->Implementation).RowBatchInfo_GetBatchRowHandles_Mock.field_0x28;
  plVar2 = *(longlong **)
            &(this->Implementation).RowBatchInfo_CurrentBatchTableHasColumns_Mock.field_0x20;
  plVar5 = (longlong *)
           &(this->Implementation).RowBatchInfo_CurrentBatchTableHasColumns_Mock.field_0x8;
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  uVar3 = (*pcVar1)(uVar4,&local_18);
  return (bool)uVar3;
}

// CurrentBatchTableHasColumns @ 142cf4810

bool __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
::CurrentBatchTableHasColumns
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
           *this,TArrayView<UScriptStruct_const_*_const,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementQueryCapabilities.inl"
                     ,0x2a,
                     L"Function \'CurrentBatchTableHasColumns\' in capability \'RowBatchInfo\' is not supported by the current query context implementation."
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// CurrentRowHasColumns @ 142cf48b0

bool __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock>::CurrentRowHasColumns
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock> *this,
          TArrayView<UScriptStruct_const_*_const,int> *param_1)

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
  Core::Private::Function::CheckCallable
            (*(void **)&(this->Implementation).SingleRowInfo_CurrentRowHasColumns_Mock);
  plVar1 = *(longlong **)&(this->Implementation).SingleRowInfo_CurrentRowHasColumns_Mock.field_0x28;
  pcVar2 = *(code **)&(this->Implementation).SingleRowInfo_CurrentRowHasColumns_Mock;
  plVar5 = (longlong *)&(this->Implementation).SingleRowInfo_CurrentRowHasColumns_Mock.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  uVar3 = (*pcVar2)(uVar4,&local_18);
  return (bool)uVar3;
}

// CurrentRowHasColumns @ 142cf4910

bool __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
::CurrentRowHasColumns
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
           *this,TArrayView<UScriptStruct_const_*_const,int> *param_1)

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
  Core::Private::Function::CheckCallable
            (*(void **)&(this->Implementation).SingleRowInfo_CurrentRowHasColumns_Mock);
  plVar1 = *(longlong **)&(this->Implementation).SingleRowInfo_CurrentRowHasColumns_Mock.field_0x28;
  pcVar2 = *(code **)&(this->Implementation).SingleRowInfo_CurrentRowHasColumns_Mock;
  plVar5 = (longlong *)&(this->Implementation).SingleRowInfo_CurrentRowHasColumns_Mock.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  uVar3 = (*pcVar2)(uVar4,&local_18);
  return (bool)uVar3;
}

// GetBatchRowCount @ 142cf51f0

uint __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock>::GetBatchRowCount
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  Core::Private::Function::CheckCallable
            (*(void **)&(this->Implementation).SingleRowInfo_GetCurrentRow_Mock.field_0x28);
  UNRECOVERED_JUMPTABLE =
       *(code **)&(this->Implementation).SingleRowInfo_GetCurrentRow_Mock.field_0x28;
  plVar1 = *(longlong **)&(this->Implementation).RowBatchInfo_GetBatchRowCount_Mock.field_0x20;
  plVar4 = (longlong *)&(this->Implementation).RowBatchInfo_GetBatchRowCount_Mock.field_0x8;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000142cf5232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar3);
  return uVar2;
}

// GetBatchRowCount @ 142cf5240

uint __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
::GetBatchRowCount(TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
                   *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementQueryCapabilities.inl"
                     ,0x26,
                     L"Function \'GetBatchRowCount\' in capability \'RowBatchInfo\' is not supported by the current query context implementation."
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}

// GetBatchRowHandles @ 142cf52d0

TArrayView<unsigned___int64_const_,int> * __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock>::GetBatchRowHandles
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock> *this,
          TArrayView<unsigned___int64_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  Core::Private::Function::CheckCallable
            (*(void **)&(this->Implementation).RowBatchInfo_GetBatchRowCount_Mock.field_0x28);
  pcVar1 = *(code **)&(this->Implementation).RowBatchInfo_GetBatchRowCount_Mock.field_0x28;
  plVar2 = *(longlong **)&(this->Implementation).RowBatchInfo_GetBatchRowHandles_Mock.field_0x20;
  plVar4 = (longlong *)&(this->Implementation).RowBatchInfo_GetBatchRowHandles_Mock.field_0x8;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// GetBatchRowHandles @ 142cf5340

TArrayView<unsigned___int64_const_,int> * __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
::GetBatchRowHandles
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
           *this,TArrayView<unsigned___int64_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<unsigned___int64_const_,int> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementQueryCapabilities.inl"
                     ,0x28,
                     L"Function \'GetBatchRowHandles\' in capability \'RowBatchInfo\' is not supported by the current query context implementation."
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

// GetContextImplementation @ 142cf5700

FQueryContextMock * __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock>::GetContextImplementation
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock> *this)

{
  return &this->Implementation;
}

// GetContextImplementation @ 142cf5710

FQueryContextMock * __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
::GetContextImplementation
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
           *this)

{
  return &this->Implementation;
}

// GetCurrentRow @ 142cf5720

ulong64 __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock>::GetCurrentRow
          (TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock> *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong64 uVar3;
  longlong *plVar4;
  
  Core::Private::Function::CheckCallable
            (*(void **)&(this->Implementation).SingleRowInfo_GetCurrentRow_Mock);
  plVar1 = *(longlong **)&(this->Implementation).SingleRowInfo_GetCurrentRow_Mock.field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&(this->Implementation).SingleRowInfo_GetCurrentRow_Mock;
  plVar4 = (longlong *)&(this->Implementation).SingleRowInfo_GetCurrentRow_Mock.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000142cf575f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar2);
  return uVar3;
}

// GetCurrentRow @ 142cf5770

ulong64 __thiscall
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
::GetCurrentRow(TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
                *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong64 uVar3;
  longlong *plVar4;
  
  Core::Private::Function::CheckCallable
            (*(void **)&(this->Implementation).SingleRowInfo_GetCurrentRow_Mock);
  plVar1 = *(longlong **)&(this->Implementation).SingleRowInfo_GetCurrentRow_Mock.field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&(this->Implementation).SingleRowInfo_GetCurrentRow_Mock;
  plVar4 = (longlong *)&(this->Implementation).SingleRowInfo_GetCurrentRow_Mock.field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000142cf57af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar2);
  return uVar3;
}

// SupportsCapability @ 142cfe7f0

bool __cdecl
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock>::SupportsCapability
          (FName *param_1)

{
  if ((ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name != *param_1) &&
     (IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name != *param_1)) {
    return false;
  }
  return true;
}

// SupportsCapability @ 142cfe820

bool __cdecl
UE::Editor::DataStorage::Queries::
TQueryContextImpl<UE::Editor::DataStorage::Queries::FQueryContextMock,UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
::SupportsCapability(FName *param_1)

{
  FName FVar1;
  
  FVar1 = *param_1;
  if ((ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name != FVar1) &&
     ((IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name != FVar1 ||
      (ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name != FVar1)))) {
    return false;
  }
  return true;
}

