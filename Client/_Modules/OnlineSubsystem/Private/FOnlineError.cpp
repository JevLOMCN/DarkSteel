// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 25

// FOnlineError @ 14eb30880

FOnlineError * __thiscall
FOnlineError::FOnlineError
          (FOnlineError *this,EOnlineErrorResult param_1,FString *param_2,FText *param_3)

{
  (this->ErrorRaw).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorRaw).Data.ArrayNum = 0;
  (this->ErrorRaw).Data.ArrayMax = 0;
  (this->ErrorCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorCode).Data.ArrayNum = 0;
  (this->ErrorCode).Data.ArrayMax = 0;
  FText::FText(&this->ErrorMessage);
  this->Result = param_1;
  SetFromErrorCode(this,param_1,param_2,param_3);
  return this;
}

// FOnlineError @ 14eb308f0

FOnlineError * __thiscall FOnlineError::FOnlineError(FOnlineError *this,FString *param_1)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  this->bSucceeded = false;
  pFVar1 = &this->ErrorCode;
  (this->ErrorRaw).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorRaw).Data.ArrayNum = 0;
  (this->ErrorRaw).Data.ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorCode).Data.ArrayNum = 0;
  (this->ErrorCode).Data.ArrayMax = 0;
  FText::FText(&this->ErrorMessage);
  this->Result = FailExtended;
  if (pFVar1 != param_1) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ErrorCode).Data.ArrayNum = (param_1->Data).ArrayNum;
    (this->ErrorCode).Data.ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  iVar2 = (this->ErrorCode).Data.ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(&this->ErrorRaw,(wchar_t *)(pFVar1->Data).AllocatorInstance.Data,iVar4);
  this->Result = FailExtended;
  return this;
}

// FOnlineError @ 14eb309b0

FOnlineError * __thiscall FOnlineError::FOnlineError(FOnlineError *this,FString *param_1)

{
  this->bSucceeded = false;
  (this->ErrorRaw).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorRaw).Data.ArrayNum = 0;
  (this->ErrorRaw).Data.ArrayMax = 0;
  (this->ErrorCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorCode).Data.ArrayNum = 0;
  (this->ErrorCode).Data.ArrayMax = 0;
  FText::FText(&this->ErrorMessage);
  this->Result = FailExtended;
  ::FString::operator=(&this->ErrorCode,param_1);
  ::FString::operator=(&this->ErrorRaw,param_1);
  this->Result = FailExtended;
  return this;
}

// FOnlineError @ 14eb30a30

FOnlineError * __thiscall FOnlineError::FOnlineError(FOnlineError *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FString *pFVar3;
  FString *pFVar4;
  undefined1 local_res8 [8];
  FString local_38;
  TOptional<FString>_u_0 local_28;
  
  this->bSucceeded = false;
  (this->ErrorRaw).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorRaw).Data.ArrayNum = 0;
  (this->ErrorRaw).Data.ArrayMax = 0;
  (this->ErrorCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorCode).Data.ArrayNum = 0;
  (this->ErrorCode).Data.ArrayMax = 0;
  FText::FText(&this->ErrorMessage);
  this->Result = FailExtended;
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->ErrorMessage).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->ErrorMessage).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->ErrorMessage).Flags = param_1->Flags;
  pFVar3 = (FString *)FTextInspector::GetKey((TOptional<FString> *)&local_28.TypedValue,param_1);
  ::FString::FString(&local_38,L"GenericError");
  pFVar4 = &local_38;
  if (*(int *)((longlong)&pFVar3->Data + 0xc) != -1) {
    pFVar4 = pFVar3;
  }
  ::FString::operator=(&this->ErrorCode,pFVar4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  pFVar4 = FText::ToString(param_1);
  ::FString::operator=(&this->ErrorRaw,pFVar4);
  this->Result = FailExtended;
  return this;
}

// FOnlineError @ 14eb30b40

FOnlineError * __thiscall FOnlineError::FOnlineError(FOnlineError *this,int param_1)

{
  this->bSucceeded = false;
  (this->ErrorRaw).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorRaw).Data.ArrayNum = 0;
  (this->ErrorRaw).Data.ArrayMax = 0;
  (this->ErrorCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorCode).Data.ArrayNum = 0;
  (this->ErrorCode).Data.ArrayMax = 0;
  FText::FText(&this->ErrorMessage);
  this->Result = FailExtended;
  SetFromErrorCode(this,param_1);
  return this;
}

// FOnlineError @ 14eb30b90

FOnlineError * __thiscall FOnlineError::FOnlineError(FOnlineError *this,wchar_t *param_1)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FString *pFVar4;
  int iVar5;
  FString local_18;
  
  pFVar4 = ::FString::FString(&local_18,param_1);
  this->bSucceeded = false;
  pFVar1 = &this->ErrorCode;
  (this->ErrorRaw).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorRaw).Data.ArrayNum = 0;
  (this->ErrorRaw).Data.ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorCode).Data.ArrayNum = 0;
  (this->ErrorCode).Data.ArrayMax = 0;
  FText::FText(&this->ErrorMessage);
  this->Result = FailExtended;
  if (pFVar1 != pFVar4) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ErrorCode).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->ErrorCode).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  iVar2 = (this->ErrorCode).Data.ArrayNum;
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = 0;
  }
  ::FString::AssignRange(&this->ErrorRaw,(wchar_t *)(pFVar1->Data).AllocatorInstance.Data,iVar5);
  this->Result = FailExtended;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// FOnlineError @ 14eb30c60

FOnlineError * __thiscall FOnlineError::FOnlineError(FOnlineError *this,EOnlineErrorResult param_1)

{
  FText *pFVar1;
  FString *pFVar2;
  FString local_28;
  FText local_18;
  
  (this->ErrorRaw).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorRaw).Data.ArrayNum = 0;
  (this->ErrorRaw).Data.ArrayMax = 0;
  (this->ErrorCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorCode).Data.ArrayNum = 0;
  (this->ErrorCode).Data.ArrayMax = 0;
  FText::FText(&this->ErrorMessage);
  this->Result = param_1;
  pFVar1 = DefaultErrorMsg(&local_18,param_1);
  pFVar2 = DefaultErrorCode(&local_28,this->Result);
  SetFromErrorCode(this,this->Result,pFVar2,pFVar1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return this;
}

// FOnlineError @ 14eb30d00

FOnlineError * __thiscall FOnlineError::FOnlineError(FOnlineError *this,bool param_1)

{
  this->bSucceeded = param_1;
  (this->ErrorRaw).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorRaw).Data.ArrayNum = 0;
  (this->ErrorRaw).Data.ArrayMax = 0;
  (this->ErrorCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorCode).Data.ArrayNum = 0;
  (this->ErrorCode).Data.ArrayMax = 0;
  FText::FText(&this->ErrorMessage);
  this->Result = Unknown;
  return this;
}

// CreateError @ 14ebec740

FOnlineError * __cdecl
FOnlineError::CreateError
          (FOnlineError *__return_storage_ptr__,FString *param_1,EOnlineErrorResult param_2,
          FString *param_3,FText *param_4)

{
  FString *this;
  int *piVar1;
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  int iVar2;
  longlong lVar3;
  FString local_38;
  FString local_28;
  
  this = &__return_storage_ptr__->ErrorCode;
  (__return_storage_ptr__->ErrorRaw).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->ErrorCode).Data.ArrayMax;
  (__return_storage_ptr__->ErrorRaw).Data.ArrayNum = 0;
  (__return_storage_ptr__->ErrorRaw).Data.ArrayMax = 0;
  *piVar1 = 0;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ErrorCode).Data.ArrayNum = 0;
  FText::FText(&__return_storage_ptr__->ErrorMessage);
  __return_storage_ptr__->Result = param_2;
  SetFromErrorCode(__return_storage_ptr__,param_2,param_3,param_4);
  if ((1 < (__return_storage_ptr__->ErrorCode).Data.ArrayNum) &&
     (iVar2 = ::FString::Find(this,L"com.",4,IgnoreCase,FromStart,-1), iVar2 == -1)) {
    if (((param_1->Data).ArrayNum < 2) &&
       ((param_1 = &DefaultNamespace,
        *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0 && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)))) {
      ::FString::FString(&DefaultNamespace,L"errors.com.epicgames.online.generic");
      atexit(`FOnlineError::GetDefaultErrorNamespace'::__l2::
             _dynamic_atexit_destructor_for__DefaultNamespace__);
      _Init_thread_footer(&::_TSS0);
    }
    local_38.Data.ArrayNum = (param_1->Data).ArrayNum;
    lVar3 = (longlong)local_38.Data.ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
    }
    ::FString::AppendChars(&local_38,L".",1);
    ::FString::ConcatFF(&local_28,&local_38,this);
    _Src_00.Data = local_28.Data.AllocatorInstance.Data;
    if (this != &local_28) {
      iVar2 = *piVar1;
      (__return_storage_ptr__->ErrorCode).Data.ArrayNum = local_28.Data.ArrayNum;
      if ((local_28.Data.ArrayNum == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_28.Data.ArrayNum,iVar2,(ForAnyElementType *)this,local_28.Data.ArrayNum
                   ,piVar1);
        if (local_28.Data.ArrayNum != 0) {
          memcpy((this->Data).AllocatorInstance.Data,_Src_00.Data,
                 (longlong)local_28.Data.ArrayNum * 2);
        }
      }
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// CreateError @ 14ebec990

FOnlineError * __cdecl
FOnlineError::CreateError
          (FOnlineError *__return_storage_ptr__,FString *param_1,EOnlineErrorResult param_2)

{
  FText *pFVar1;
  FString *pFVar2;
  FString local_28;
  FText local_18;
  
  pFVar1 = DefaultErrorMsg(&local_18,param_2);
  pFVar2 = DefaultErrorCode(&local_28,param_2);
  CreateError(__return_storage_ptr__,param_1,param_2,pFVar2,pFVar1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// DefaultErrorCode @ 14ebecc50

FString * __cdecl
FOnlineError::DefaultErrorCode(FString *__return_storage_ptr__,EOnlineErrorResult param_1)

{
  switch(param_1) {
  case Success:
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  case NoConnection:
    ::FString::FString(__return_storage_ptr__,L"no_connection");
    return __return_storage_ptr__;
  case RequestFailure:
    ::FString::FString(__return_storage_ptr__,L"request_failure");
    return __return_storage_ptr__;
  case InvalidCreds:
    ::FString::FString(__return_storage_ptr__,L"invalid_creds");
    return __return_storage_ptr__;
  case InvalidUser:
    ::FString::FString(__return_storage_ptr__,L"invalid_user");
    return __return_storage_ptr__;
  case InvalidAuth:
    ::FString::FString(__return_storage_ptr__,L"invalid_auth");
    return __return_storage_ptr__;
  case AccessDenied:
    ::FString::FString(__return_storage_ptr__,L"access_denied");
    return __return_storage_ptr__;
  case TooManyRequests:
    ::FString::FString(__return_storage_ptr__,L"too_many_requests");
    return __return_storage_ptr__;
  case AlreadyPending:
    ::FString::FString(__return_storage_ptr__,L"already_pending");
    return __return_storage_ptr__;
  case InvalidParams:
    ::FString::FString(__return_storage_ptr__,L"invalid_params");
    return __return_storage_ptr__;
  case CantParse:
    ::FString::FString(__return_storage_ptr__,L"cant_parse");
    return __return_storage_ptr__;
  case InvalidResults:
    ::FString::FString(__return_storage_ptr__,L"invalid_results");
    return __return_storage_ptr__;
  case IncompatibleVersion:
    ::FString::FString(__return_storage_ptr__,L"incompatible_version");
    return __return_storage_ptr__;
  case NotConfigured:
    ::FString::FString(__return_storage_ptr__,L"not_configured");
    return __return_storage_ptr__;
  case NotImplemented:
    ::FString::FString(__return_storage_ptr__,L"not_implemented");
    return __return_storage_ptr__;
  case MissingInterface:
    ::FString::FString(__return_storage_ptr__,L"missing_interface");
    return __return_storage_ptr__;
  case Canceled:
    ::FString::FString(__return_storage_ptr__,L"canceled");
    return __return_storage_ptr__;
  case FailExtended:
    ::FString::FString(__return_storage_ptr__,L"fail_extended");
    return __return_storage_ptr__;
  default:
    ::FString::FString(__return_storage_ptr__,L"unknown_error_result");
    return __return_storage_ptr__;
  }
}

// DefaultErrorMsg @ 14ebece90

FText * __cdecl
FOnlineError::DefaultErrorMsg(FText *__return_storage_ptr__,EOnlineErrorResult param_1)

{
  FText *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case Success:
    pFVar1 = FText::GetEmpty();
    FText::FText(__return_storage_ptr__,pFVar1);
    return __return_storage_ptr__;
  case NoConnection:
    pwVar3 = L"No valid connection";
    pwVar2 = L"NotConnected";
    break;
  case RequestFailure:
    pwVar3 = L"Failed to send request";
    pwVar2 = L"RequestFailure";
    break;
  case InvalidCreds:
    pwVar3 = L"Invalid credentials";
    pwVar2 = L"InvalidCreds";
    break;
  case InvalidUser:
    pwVar3 = L"No valid user";
    pwVar2 = L"InvalidUser";
    break;
  case InvalidAuth:
    pwVar3 = L"No valid auth";
    pwVar2 = L"InvalidAuth";
    break;
  case AccessDenied:
    pwVar3 = L"Access denied";
    pwVar2 = L"AccessDenied";
    break;
  case TooManyRequests:
    pwVar3 = L"Too many requests";
    pwVar2 = L"TooManyRequests";
    break;
  case AlreadyPending:
    pwVar3 = L"Request already pending";
    pwVar2 = L"AlreadyPending";
    break;
  case InvalidParams:
    pwVar3 = L"Invalid params specified";
    pwVar2 = L"InvalidParams";
    break;
  case CantParse:
    pwVar3 = L"Cannot parse results";
    pwVar2 = L"CantParse";
    break;
  case InvalidResults:
    pwVar3 = L"Results were invalid";
    pwVar2 = L"InvalidResults";
    break;
  case IncompatibleVersion:
    pwVar3 = L"Incompatible client version";
    pwVar2 = L"IncompatibleVersion";
    break;
  case NotConfigured:
    pwVar3 = L"No valid configuration";
    pwVar2 = L"NotConfigured";
    break;
  case NotImplemented:
    pwVar3 = L"Not implemented";
    pwVar2 = L"NotImplemented";
    break;
  case MissingInterface:
    pwVar3 = L"Interface not found";
    pwVar2 = L"MissingInterface";
    break;
  case Canceled:
    pwVar3 = L"Operation was canceled";
    pwVar2 = L"Canceled";
    break;
  case FailExtended:
    pwVar3 = L"Extended error";
    pwVar2 = L"FailExtended";
    break;
  default:
    pwVar3 = L"Unknown error";
    pwVar2 = L"Unknown";
  }
  FText::AsLocalizable_Advanced_LocText(__return_storage_ptr__,L"OnlineError",pwVar2,pwVar3);
  return __return_storage_ptr__;
}

// GetDefaultErrorNamespace @ 14ebff860

FString * __cdecl FOnlineError::GetDefaultErrorNamespace(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&DefaultNamespace,L"errors.com.epicgames.online.generic");
      atexit(`FOnlineError::GetDefaultErrorNamespace'::__l2::
             _dynamic_atexit_destructor_for__DefaultNamespace__);
      _Init_thread_footer(&::_TSS0);
      return &DefaultNamespace;
    }
  }
  return &DefaultNamespace;
}

// GetErrorLegacy @ 14ebffdf0

FString * __thiscall
FOnlineError::GetErrorLegacy(FOnlineError *this,FString *__return_storage_ptr__)

{
  FText::ToString(&this->ErrorMessage);
  ::FString::PrintfImpl(__return_storage_ptr__,L"errorpath=%s errormessage=%s");
  return __return_storage_ptr__;
}

// GetGenericErrorCode @ 14ec00350

FString * __cdecl FOnlineError::GetGenericErrorCode(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GenericError");
  return __return_storage_ptr__;
}

// SetFromErrorCode @ 14ec11c20

void __thiscall FOnlineError::SetFromErrorCode(FOnlineError *this,EOnlineErrorResult param_1)

{
  FText *pFVar1;
  FString *pFVar2;
  FString local_28;
  FText local_18;
  
  pFVar1 = DefaultErrorMsg(&local_18,this->Result);
  pFVar2 = DefaultErrorCode(&local_28,this->Result);
  SetFromErrorCode(this,this->Result,pFVar2,pFVar1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetFromErrorCode @ 14ec11c90

void __thiscall
FOnlineError::SetFromErrorCode(FOnlineError *this,EOnlineErrorResult param_1,FString *param_2)

{
  FText *pFVar1;
  
  pFVar1 = FText::GetEmpty();
  SetFromErrorCode(this,this->Result,param_2,pFVar1);
  return;
}

// SetFromErrorCode @ 14ec11cd0

void __thiscall
FOnlineError::SetFromErrorCode
          (FOnlineError *this,EOnlineErrorResult param_1,FString *param_2,FText *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  bool bVar5;
  FString *pFVar6;
  FText *pFVar7;
  int iVar8;
  undefined1 local_res10 [8];
  FText local_28;
  undefined8 local_18 [2];
  
  this->bSucceeded = param_1 == Success;
  if ((param_1 == Unknown) || (param_1 == Success)) {
    pFVar6 = &this->ErrorRaw;
    this->Result = param_1;
    if (pFVar6 != (FString *)local_18) {
      pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->ErrorRaw).Data.ArrayNum = 0;
      (this->ErrorRaw).Data.ArrayMax = 0;
    }
    iVar1 = (this->ErrorRaw).Data.ArrayNum;
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    ::FString::AssignRange(&this->ErrorCode,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar8);
    pFVar7 = FText::GetEmpty();
    pIVar3 = (this->ErrorMessage).TextData.Reference;
    pIVar4 = (pFVar7->TextData).Reference;
    if (pIVar3 != pIVar4) {
      (this->ErrorMessage).TextData.Reference = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res10);
      }
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
    }
    (this->ErrorMessage).Flags = pFVar7->Flags;
  }
  else {
    this->Result = param_1;
    ::FString::operator=(&this->ErrorRaw,param_2);
    if ((param_2->Data).ArrayNum < 2) {
      pFVar6 = DefaultErrorCode((FString *)&local_28,this->Result);
      ::FString::operator=(&this->ErrorCode,pFVar6);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_28.TextData.Reference);
      }
    }
    else {
      ::FString::operator=(&this->ErrorCode,param_2);
    }
    bVar5 = FText::IsEmpty(param_3);
    if (!bVar5) {
      FText::operator=(&this->ErrorMessage,param_3);
      return;
    }
    pFVar7 = DefaultErrorMsg(&local_28,this->Result);
    FText::operator=(&this->ErrorMessage,pFVar7);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      return;
    }
  }
  return;
}

// SetFromErrorCode @ 14ec11e50

void __thiscall FOnlineError::SetFromErrorCode(FOnlineError *this,FString *param_1)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar1 = &this->ErrorCode;
  if (pFVar1 != param_1) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ErrorCode).Data.ArrayNum = (param_1->Data).ArrayNum;
    (this->ErrorCode).Data.ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  iVar2 = (this->ErrorCode).Data.ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(&this->ErrorRaw,(wchar_t *)(pFVar1->Data).AllocatorInstance.Data,iVar4);
  this->Result = FailExtended;
  return;
}

// SetFromErrorCode @ 14ec11ee0

void __thiscall FOnlineError::SetFromErrorCode(FOnlineError *this,FString *param_1)

{
  ::FString::operator=(&this->ErrorCode,param_1);
  ::FString::operator=(&this->ErrorRaw,param_1);
  this->Result = FailExtended;
  return;
}

// SetFromErrorCode @ 14ec11f20

void __thiscall FOnlineError::SetFromErrorCode(FOnlineError *this,int param_1)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"0x%0.8X");
  pFVar1 = &this->ErrorCode;
  if (pFVar1 != &local_18) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (this->ErrorCode).Data.ArrayNum = local_18.Data.ArrayNum;
    (this->ErrorCode).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar2 = (this->ErrorCode).Data.ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(&this->ErrorRaw,(wchar_t *)(pFVar1->Data).AllocatorInstance.Data,iVar4);
  return;
}

// SetFromErrorMessage @ 14ec11fd0

void __thiscall FOnlineError::SetFromErrorMessage(FOnlineError *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FString *pFVar3;
  FString *pFVar4;
  undefined1 local_res8 [8];
  FString local_28;
  TOptional<FString>_u_0 local_18;
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->ErrorMessage).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->ErrorMessage).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->ErrorMessage).Flags = param_1->Flags;
  pFVar3 = (FString *)FTextInspector::GetKey((TOptional<FString> *)&local_18.TypedValue,param_1);
  ::FString::FString(&local_28,L"GenericError");
  pFVar4 = &local_28;
  if (*(int *)((longlong)&pFVar3->Data + 0xc) != -1) {
    pFVar4 = pFVar3;
  }
  ::FString::operator=(&this->ErrorCode,pFVar4);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((local_18.TypedValue.Data.ArrayMax != -1) &&
     (local_18.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_18.TypedValue.Data.AllocatorInstance.Data);
  }
  pFVar4 = FText::ToString(param_1);
  ::FString::operator=(&this->ErrorRaw,pFVar4);
  this->Result = FailExtended;
  return;
}

// SetFromErrorMessage @ 14ec120b0

void __thiscall FOnlineError::SetFromErrorMessage(FOnlineError *this,FText *param_1,int param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->ErrorMessage).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->ErrorMessage).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->ErrorMessage).Flags = param_1->Flags;
  SetFromErrorCode(this,param_2);
  return;
}

// Success @ 14ec13140

FOnlineError * __cdecl FOnlineError::Success(void)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  bool bVar3;
  FText *pFVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FText local_38;
  FString local_28;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::FText(&Error.ErrorMessage);
      Error.Result = Success;
      pFVar4 = DefaultErrorMsg(&local_18,Success);
      pFVar5 = DefaultErrorCode(&local_28,Error.Result);
      Error.bSucceeded = Error.Result == Success;
      if ((Error.Result == Unknown) || (Error.Result == Success)) {
        if (Error.ErrorRaw.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(Error.ErrorRaw.Data.AllocatorInstance.Data);
        }
        Error.ErrorRaw.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        Error.ErrorRaw.Data.ArrayNum = 0;
        Error.ErrorRaw.Data.ArrayMax = 0;
        ::FString::AssignRange(&Error.ErrorCode,(wchar_t *)0x0,0);
        pFVar4 = FText::GetEmpty();
        TVar2 = Error.ErrorMessage.TextData;
        pIVar1 = (pFVar4->TextData).Reference;
        if (Error.ErrorMessage.TextData.Reference != pIVar1) {
          Error.ErrorMessage.TextData.Reference = pIVar1;
          if (pIVar1 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
          }
          if (TVar2.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
          }
        }
        Error.ErrorMessage.Flags = pFVar4->Flags;
      }
      else {
        ::FString::operator=(&Error.ErrorRaw,pFVar5);
        if ((pFVar5->Data).ArrayNum < 2) {
          pFVar5 = DefaultErrorCode((FString *)&local_38,Error.Result);
          if (pFVar5 != &Error.ErrorCode) {
            if (Error.ErrorCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(Error.ErrorCode.Data.AllocatorInstance.Data);
            }
            Error.ErrorCode.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
            (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            Error.ErrorCode.Data.ArrayNum = (pFVar5->Data).ArrayNum;
            Error.ErrorCode.Data.ArrayMax = (pFVar5->Data).ArrayMax;
            (pFVar5->Data).ArrayNum = 0;
            (pFVar5->Data).ArrayMax = 0;
          }
          if (local_38.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_38.TextData.Reference);
          }
        }
        else {
          ::FString::operator=(&Error.ErrorCode,pFVar5);
        }
        bVar3 = FText::IsEmpty(pFVar4);
        if (bVar3) {
          pFVar4 = DefaultErrorMsg(&local_38,Error.Result);
          FText::operator=(&Error.ErrorMessage,pFVar4);
          if (local_38.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
          }
        }
        else {
          FText::operator=(&Error.ErrorMessage,pFVar4);
        }
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      atexit(`FOnlineError::Success'::__l2::_dynamic_atexit_destructor_for__Error__);
      _Init_thread_footer(&::_TSS0);
      return &Error;
    }
  }
  return &Error;
}

// ToLogString @ 14ec165b0

FString * __thiscall FOnlineError::ToLogString(FOnlineError *this,FString *__return_storage_ptr__)

{
  if (this->bSucceeded != false) {
    ::FString::FString(__return_storage_ptr__,L"Succeeded");
    return __return_storage_ptr__;
  }
  FText::ToString(&this->ErrorMessage);
  ::FString::PrintfImpl(__return_storage_ptr__,L"Failure ErrorCode=%s, Message=%s, Raw=%s");
  return __return_storage_ptr__;
}

