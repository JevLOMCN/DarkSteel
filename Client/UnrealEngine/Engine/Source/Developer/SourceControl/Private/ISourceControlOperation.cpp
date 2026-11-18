// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 16

// Create<FCheckIn> @ 146af7fb0

TSharedRef<FCheckIn,1> * __cdecl
ISourceControlOperation::Create<FCheckIn>(TSharedRef<FCheckIn,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FCheckIn *pFVar3;
  TSharedRef<FCheckIn,1> *pTVar4;
  TRawPtrProxy<FCheckIn> local_res8;
  
  pFVar3 = ::operator_new(0x80);
  if (pFVar3 != (FCheckIn *)0x0) {
    pFVar3->_padding_ = 0;
    *(undefined8 *)((longlong)&pFVar3->_padding_ + 4) = 0;
    *(undefined8 *)((longlong)&(pFVar3->Description).TextData.Reference + 4) = 0;
    *(undefined8 *)&(pFVar3->Description).field_0xc = 0;
    *(undefined8 *)((longlong)&(pFVar3->SuccessMessage).TextData.Reference + 4) = 0;
    *(undefined8 *)&(pFVar3->SuccessMessage).field_0xc = 0;
    *(undefined4 *)&pFVar3->field_0x7c = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FCheckIn__6B_;
    FText::FText(&pFVar3->Description);
    FText::FText(&pFVar3->SuccessMessage);
    pFVar3->bKeepCheckedOut = false;
    if ((((pFVar3->_padding_ != 0) && (pFVar3->_padding_ != 0)) &&
        (0 < *(int *)(pFVar3->_padding_ + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedRef<FCheckIn,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_res8.Object = pFVar3;
  TSharedRef<FCheckIn,1>::TSharedRef<FCheckIn,1><FCheckIn>(__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// Create<FCheckOut> @ 146af80a0

TSharedRef<FCheckOut,1> * __cdecl
ISourceControlOperation::Create<FCheckOut>(TSharedRef<FCheckOut,1> *__return_storage_ptr__)

{
  FCheckOut *pFVar1;
  TRawPtrProxy<FCheckOut> local_res8 [4];
  
  pFVar1 = ::operator_new(0x58);
  local_res8[0].Object = (FCheckOut *)0x0;
  if (pFVar1 != (FCheckOut *)0x0) {
    *(undefined8 *)&pFVar1->field_0x48 = 0;
    *(undefined8 *)&pFVar1->field_0x50 = 0;
    *(undefined8 *)&pFVar1->field_0x8 = 0;
    *(undefined8 *)&pFVar1->field_0x10 = 0;
    *(undefined8 *)&pFVar1->field_0x18 = 0;
    *(undefined8 *)&pFVar1->field_0x20 = 0;
    *(undefined8 *)&pFVar1->field_0x28 = 0;
    *(undefined8 *)&pFVar1->field_0x30 = 0;
    *(undefined8 *)&pFVar1->field_0x38 = 0;
    *(undefined8 *)&pFVar1->field_0x40 = 0;
    *(undefined ***)pFVar1 = &___7FCheckOut__6B_;
    local_res8[0].Object = pFVar1;
  }
  TSharedRef<FCheckOut,1>::TSharedRef<FCheckOut,1><FCheckOut>(__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// Create<FDelete> @ 146af8120

TSharedRef<FDelete,1> * __cdecl
ISourceControlOperation::Create<FDelete>(TSharedRef<FDelete,1> *__return_storage_ptr__)

{
  FDelete *pFVar1;
  TRawPtrProxy<FDelete> local_res8 [4];
  
  pFVar1 = ::operator_new(0x58);
  local_res8[0].Object = (FDelete *)0x0;
  if (pFVar1 != (FDelete *)0x0) {
    *(undefined8 *)&pFVar1->field_0x48 = 0;
    *(undefined8 *)&pFVar1->field_0x50 = 0;
    *(undefined8 *)&pFVar1->field_0x8 = 0;
    *(undefined8 *)&pFVar1->field_0x10 = 0;
    *(undefined8 *)&pFVar1->field_0x18 = 0;
    *(undefined8 *)&pFVar1->field_0x20 = 0;
    *(undefined8 *)&pFVar1->field_0x28 = 0;
    *(undefined8 *)&pFVar1->field_0x30 = 0;
    *(undefined8 *)&pFVar1->field_0x38 = 0;
    *(undefined8 *)&pFVar1->field_0x40 = 0;
    *(undefined ***)pFVar1 = &___7FDelete__6B_;
    local_res8[0].Object = pFVar1;
  }
  TSharedRef<FDelete,1>::TSharedRef<FDelete,1><FDelete>(__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// Create<FMarkForAdd> @ 146af81a0

TSharedRef<FMarkForAdd,1> * __cdecl
ISourceControlOperation::Create<FMarkForAdd>(TSharedRef<FMarkForAdd,1> *__return_storage_ptr__)

{
  FMarkForAdd *pFVar1;
  TRawPtrProxy<FMarkForAdd> local_res8 [4];
  
  pFVar1 = ::operator_new(0x58);
  local_res8[0].Object = (FMarkForAdd *)0x0;
  if (pFVar1 != (FMarkForAdd *)0x0) {
    *(undefined8 *)&pFVar1->field_0x48 = 0;
    *(undefined8 *)&pFVar1->field_0x50 = 0;
    *(undefined8 *)&pFVar1->field_0x8 = 0;
    *(undefined8 *)&pFVar1->field_0x10 = 0;
    *(undefined8 *)&pFVar1->field_0x18 = 0;
    *(undefined8 *)&pFVar1->field_0x20 = 0;
    *(undefined8 *)&pFVar1->field_0x28 = 0;
    *(undefined8 *)&pFVar1->field_0x30 = 0;
    *(undefined8 *)&pFVar1->field_0x38 = 0;
    *(undefined8 *)&pFVar1->field_0x40 = 0;
    *(undefined ***)pFVar1 = &___7FMarkForAdd__6B_;
    local_res8[0].Object = pFVar1;
  }
  TSharedRef<FMarkForAdd,1>::TSharedRef<FMarkForAdd,1><FMarkForAdd>
            (__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// Create<FRevert> @ 146af8220

TSharedRef<FRevert,1> * __cdecl
ISourceControlOperation::Create<FRevert>(TSharedRef<FRevert,1> *__return_storage_ptr__)

{
  FRevert *pFVar1;
  TRawPtrProxy<FRevert> local_res8 [4];
  
  pFVar1 = ::operator_new(0x70);
  local_res8[0].Object = (FRevert *)0x0;
  if (pFVar1 != (FRevert *)0x0) {
    pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    *(undefined4 *)&pFVar1->field_0x5a = 0;
    *(undefined2 *)&pFVar1->field_0x5e = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FRevert__6B_;
    pFVar1->bIsSoftRevert = false;
    pFVar1->bIsRevertAll = false;
    (pFVar1->DeletedFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->DeletedFiles).ArrayNum = 0;
    (pFVar1->DeletedFiles).ArrayMax = 0;
    local_res8[0].Object = pFVar1;
  }
  TSharedRef<FRevert,1>::TSharedRef<FRevert,1><FRevert>(__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// Create<FUpdateStatus> @ 146af82b0

TSharedRef<FUpdateStatus,1> * __cdecl
ISourceControlOperation::Create<FUpdateStatus>(TSharedRef<FUpdateStatus,1> *__return_storage_ptr__)

{
  FUpdateStatus *pFVar1;
  TRawPtrProxy<FUpdateStatus> local_res8 [4];
  
  pFVar1 = ::operator_new(0x60);
  local_res8[0].Object = (FUpdateStatus *)0x0;
  if (pFVar1 != (FUpdateStatus *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FUpdateStatus__6B_;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->bUpdateHistory = false;
    pFVar1->bGetOpenedOnly = false;
    pFVar1->bUpdateModifiedState = false;
    pFVar1->bUpdateModifiedStateToLocalRevision = false;
    pFVar1->bCheckingAllFiles = false;
    pFVar1->bForceQuiet = false;
    pFVar1->bForceUpdate = false;
    pFVar1->bSetRequireDirPathEndWithSeparator = false;
    local_res8[0].Object = pFVar1;
  }
  TSharedRef<FUpdateStatus,1>::TSharedRef<FUpdateStatus,1><FUpdateStatus>
            (__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// ~ISourceControlOperation @ 146b012e0

void __thiscall ISourceControlOperation::~ISourceControlOperation(ISourceControlOperation *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7ISourceControlOperation__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146b0130a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// AddErrorMessge @ 146b04830

void __thiscall
ISourceControlOperation::AddErrorMessge(ISourceControlOperation *this,FText *param_1)

{
  return;
}

// AddInfoMessge @ 146b04920

void __thiscall ISourceControlOperation::AddInfoMessge(ISourceControlOperation *this,FText *param_1)

{
  return;
}

// AddTag @ 146b04b30

void __thiscall ISourceControlOperation::AddTag(ISourceControlOperation *this,FString *param_1)

{
  return;
}

// AppendResultInfo @ 146b05060

void __thiscall
ISourceControlOperation::AppendResultInfo
          (ISourceControlOperation *this,FSourceControlResultInfo *param_1)

{
  return;
}

// CanBeCalledFromBackgroundThreads @ 146b05770

bool __thiscall
ISourceControlOperation::CanBeCalledFromBackgroundThreads(ISourceControlOperation *this)

{
  return false;
}

// GetInProgressString @ 146b183a0

FText * __thiscall
ISourceControlOperation::GetInProgressString
          (ISourceControlOperation *this,FText *__return_storage_ptr__)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetResultInfo @ 146b19740

FSourceControlResultInfo * __thiscall
ISourceControlOperation::GetResultInfo(ISourceControlOperation *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_FSourceControlResultInfo_const&___ptr64___cdecl_ISourceControlOperation::GetResultInfo(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_FSourceControlResultInfo_const&___ptr64___cdecl_ISourceControlOperation::GetResultInfo(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_FSourceControlResultInfo_const&___ptr64___cdecl_ISourceControlOperation::GetResultInfo(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`ISourceControlOperation::GetResultInfo'::__l2::
             _dynamic_atexit_destructor_for__ResultInfo__);
      _Init_thread_footer(&`public:_virtual_struct_FSourceControlResultInfo_const&___ptr64___cdecl_ISourceControlOperation::GetResultInfo(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_virtual_struct_FSourceControlResultInfo_const&___ptr64___cdecl_ISourceControlOperation::GetResultInfo(void)const___ptr64'
          ::__l2::ResultInfo;
}

// ShouldLogErrors @ 146b259b0

bool __thiscall ISourceControlOperation::ShouldLogErrors(ISourceControlOperation *this)

{
  return true;
}

// ShouldLogInfos @ 146b259d0

bool __thiscall ISourceControlOperation::ShouldLogInfos(ISourceControlOperation *this)

{
  return true;
}

