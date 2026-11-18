// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HttpReplayStreaming
// Functions: 78

// TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString> @ 146cb5de0

TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
* __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
::
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
           *this,TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
                 *param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFKeepReplayResult___ZUFDefaultDelegateUserPolicy____VFString____6B_
  ;
  TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> *)
             &this->_padding_,
             (TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> *)
             &param_1->_padding_);
  ::FString::FString((FString *)&this->_padding_,(FString *)&param_1->_padding_);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFKeepReplayResult___ZUFDefaultDelegateUserPolicy____VFString____6B_
  ;
  this->UserObject = param_1->UserObject;
  this->MethodPtr = param_1->MethodPtr;
  return this;
}

// CreateCopy @ 146cb9ee0

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_24d604f6 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146cb9f70

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_24d604f6 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146cb9fc0

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_24d604f6 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146cba070

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__H_N__6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__H_N__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_517f4466 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146cba100

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__H_N__6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__H_N__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_517f4466 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146cba160

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__H_N__6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__H_N__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_517f4466 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146cba210

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFDownloadHeaderResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy> *)
               (puVar1 + 1),
               (TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy> *)
               &this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFDownloadHeaderResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->UserObject;
    *(pmf_da18484e *)(puVar1 + 6) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146cba2b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFDownloadHeaderResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy> *)
               (puVar1 + 1),
               (TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy> *)
               &this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFDownloadHeaderResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->UserObject;
    *(pmf_da18484e *)(puVar1 + 6) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146cba320

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFDownloadHeaderResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy> *)
               (puVar3 + 1),
               (TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy> *)
               &this->_padding_);
    puVar3[4] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFDownloadHeaderResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[5] = this->UserObject;
    *(pmf_da18484e *)(puVar3 + 6) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146cba3e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateEventsResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy> *
               )(puVar1 + 1),
               (TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy> *
               )&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateEventsResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->UserObject;
    *(pmf_7c845dfc *)(puVar1 + 6) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146cba480

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateEventsResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy> *
               )(puVar1 + 1),
               (TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy> *
               )&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateEventsResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->UserObject;
    *(pmf_7c845dfc *)(puVar1 + 6) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146cba4f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateEventsResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy> *
               )(puVar3 + 1),
               (TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy> *
               )&this->_padding_);
    puVar3[4] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateEventsResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[5] = this->UserObject;
    *(pmf_7c845dfc *)(puVar3 + 6) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146cba5b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 1),
               (TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
                *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->UserObject;
    *(pmf_fbf10a94 *)(puVar1 + 6) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146cba650

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 1),
               (TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
                *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->UserObject;
    *(pmf_fbf10a94 *)(puVar1 + 6) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146cba6c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
                *)(puVar3 + 1),
               (TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
                *)&this->_padding_);
    puVar3[4] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[5] = this->UserObject;
    *(pmf_fbf10a94 *)(puVar3 + 6) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146cba780

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
       *)0x0) {
    TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146cba7f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
       *)0x0) {
    TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 146cba830

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
  *this_00;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 !=
      (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
       *)0x0) {
    TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146cba8c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFRequestEventDataResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 1),
               (TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
                *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFRequestEventDataResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->UserObject;
    *(pmf_eb2800ae *)(puVar1 + 6) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146cba960

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFRequestEventDataResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 1),
               (TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
                *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFRequestEventDataResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->UserObject;
    *(pmf_eb2800ae *)(puVar1 + 6) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146cba9d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFRequestEventDataResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
                *)(puVar3 + 1),
               (TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
                *)&this->_padding_);
    puVar3[4] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFRequestEventDataResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[5] = this->UserObject;
    *(pmf_eb2800ae *)(puVar3 + 6) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146cbc520

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
          *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
         bool param_3)

{
  pmf_24d604f6 pVar1;
  FHttpNetworkReplayStreamer *pFVar2;
  FHttpNetworkReplayStreamer *local_res8;
  IHttpResponse *local_28;
  TReferenceControllerBase<1> *local_20;
  IHttpRequest *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FHttpNetworkReplayStreamer,FHttpNetworkReplayStreamer_*_&>
                     (&local_res8);
  local_28 = param_2->Object;
  pVar1 = this->MethodPtr;
  param_2->Object = (IHttpResponse *)0x0;
  local_20 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  (*(code *)pVar1)(pFVar2,&local_18,&local_28,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 146cbc5e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
::Execute(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
          *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
         bool param_3)

{
  undefined1 uVar1;
  pmf_517f4466 pVar2;
  longlong lVar3;
  FHttpNetworkReplayStreamer *pFVar4;
  FHttpNetworkReplayStreamer *local_res8;
  IHttpResponse *local_38;
  TReferenceControllerBase<1> *local_30;
  IHttpRequest *local_28;
  TReferenceControllerBase<1> *local_20;
  
  local_res8 = this->UserObject;
  pFVar4 = UE::Core::Private::
           DereferenceIfNecessary<FHttpNetworkReplayStreamer,FHttpNetworkReplayStreamer_*_&>
                     (&local_res8);
  local_38 = param_2->Object;
  uVar1 = *(undefined1 *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  pVar2 = this->MethodPtr;
  param_2->Object = (IHttpResponse *)0x0;
  local_30 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  local_28 = param_1->Object;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  (*(code *)pVar2)(pFVar4,&local_28,&local_38,param_3,(int)lVar3,uVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 146cbc6b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
::Execute(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
          *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
         bool param_3)

{
  pmf_da18484e pVar1;
  FHttpNetworkReplayStreamer *pFVar2;
  TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy> *pTVar3;
  FHttpNetworkReplayStreamer *local_res8;
  IHttpResponse *local_58;
  TReferenceControllerBase<1> *local_50;
  IHttpRequest *local_48;
  TReferenceControllerBase<1> *local_40;
  TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy> local_38;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FHttpNetworkReplayStreamer,FHttpNetworkReplayStreamer_*_&>
                     (&local_res8);
  pVar1 = this->MethodPtr;
  pTVar3 = TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>
                     (&local_38,
                      (TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>
                       *)&this->_padding_);
  local_58 = param_2->Object;
  local_50 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IHttpResponse *)0x0;
  local_48 = param_1->Object;
  local_40 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  (*(code *)pVar1)(pFVar2,&local_48,&local_58,param_3,pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 146cbc780

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
::Execute(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
          *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
         bool param_3)

{
  pmf_7c845dfc pVar1;
  FHttpNetworkReplayStreamer *pFVar2;
  TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy> *pTVar3;
  FHttpNetworkReplayStreamer *local_res8;
  IHttpResponse *local_58;
  TReferenceControllerBase<1> *local_50;
  IHttpRequest *local_48;
  TReferenceControllerBase<1> *local_40;
  TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy> local_38;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FHttpNetworkReplayStreamer,FHttpNetworkReplayStreamer_*_&>
                     (&local_res8);
  pVar1 = this->MethodPtr;
  pTVar3 = TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
                     (&local_38,
                      (TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
                       *)&this->_padding_);
  local_58 = param_2->Object;
  local_50 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IHttpResponse *)0x0;
  local_48 = param_1->Object;
  local_40 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  (*(code *)pVar1)(pFVar2,&local_48,&local_58,param_3,pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 146cbc850

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
::Execute(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
          *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
         bool param_3)

{
  pmf_fbf10a94 pVar1;
  FHttpNetworkReplayStreamer *pFVar2;
  TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy> *pTVar3;
  FHttpNetworkReplayStreamer *local_res8;
  IHttpResponse *local_58;
  TReferenceControllerBase<1> *local_50;
  IHttpRequest *local_48;
  TReferenceControllerBase<1> *local_40;
  TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy> local_38;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FHttpNetworkReplayStreamer,FHttpNetworkReplayStreamer_*_&>
                     (&local_res8);
  pVar1 = this->MethodPtr;
  pTVar3 = TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
                     (&local_38,
                      (TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
                       *)&this->_padding_);
  local_58 = param_2->Object;
  local_50 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IHttpResponse *)0x0;
  local_48 = param_1->Object;
  local_40 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  (*(code *)pVar1)(pFVar2,&local_48,&local_58,param_3,pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 146cbc920

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
::Execute(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
          *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
         bool param_3)

{
  pmf_caf9bf65 pVar1;
  FHttpNetworkReplayStreamer *pFVar2;
  FString *pFVar3;
  TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> *pTVar4;
  FHttpNetworkReplayStreamer *local_res8;
  IHttpResponse *local_78;
  TReferenceControllerBase<1> *local_70;
  IHttpRequest *local_68;
  TReferenceControllerBase<1> *local_60;
  FString local_58;
  TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> local_48;
  
  local_res8 = this->UserObject;
  pVar1 = this->MethodPtr;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FHttpNetworkReplayStreamer,FHttpNetworkReplayStreamer_*_&>
                     (&local_res8);
  pFVar3 = ::FString::FString(&local_58,(FString *)&this->_padding_);
  pTVar4 = TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>
                     (&local_48,
                      (TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>
                       *)&this->_padding_);
  local_78 = param_2->Object;
  local_70 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IHttpResponse *)0x0;
  local_68 = param_1->Object;
  local_60 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  (*(code *)pVar1)(pFVar2,&local_68,&local_78,param_3,pTVar4,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 146cbca10

void __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
::Execute(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
          *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
         bool param_3)

{
  pmf_eb2800ae pVar1;
  FHttpNetworkReplayStreamer *pFVar2;
  TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy> *pTVar3;
  FHttpNetworkReplayStreamer *local_res8;
  IHttpResponse *local_58;
  TReferenceControllerBase<1> *local_50;
  IHttpRequest *local_48;
  TReferenceControllerBase<1> *local_40;
  TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy> local_38;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FHttpNetworkReplayStreamer,FHttpNetworkReplayStreamer_*_&>
                     (&local_res8);
  pVar1 = this->MethodPtr;
  pTVar3 = TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
                     (&local_38,
                      (TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
                       *)&this->_padding_);
  local_58 = param_2->Object;
  local_50 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IHttpResponse *)0x0;
  local_48 = param_1->Object;
  local_40 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  (*(code *)pVar1)(pFVar2,&local_48,&local_58,param_3,pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// ExecuteIfSafe @ 146cbcb60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
                *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
               bool param_3)

{
  pmf_24d604f6 pVar1;
  FHttpNetworkReplayStreamer *pFVar2;
  FHttpNetworkReplayStreamer *local_res8;
  IHttpResponse *local_28;
  TReferenceControllerBase<1> *local_20;
  IHttpRequest *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FHttpNetworkReplayStreamer,FHttpNetworkReplayStreamer_*_&>
                     (&local_res8);
  local_28 = param_2->Object;
  pVar1 = this->MethodPtr;
  param_2->Object = (IHttpResponse *)0x0;
  local_20 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  (*(code *)pVar1)(pFVar2,&local_18,&local_28,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 146cbcc20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
                *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
               bool param_3)

{
  undefined1 uVar1;
  pmf_517f4466 pVar2;
  longlong lVar3;
  FHttpNetworkReplayStreamer *pFVar4;
  FHttpNetworkReplayStreamer *local_res8;
  IHttpResponse *local_38;
  TReferenceControllerBase<1> *local_30;
  IHttpRequest *local_28;
  TReferenceControllerBase<1> *local_20;
  
  local_res8 = this->UserObject;
  pFVar4 = UE::Core::Private::
           DereferenceIfNecessary<FHttpNetworkReplayStreamer,FHttpNetworkReplayStreamer_*_&>
                     (&local_res8);
  local_38 = param_2->Object;
  uVar1 = *(undefined1 *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  pVar2 = this->MethodPtr;
  param_2->Object = (IHttpResponse *)0x0;
  local_30 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  local_28 = param_1->Object;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  (*(code *)pVar2)(pFVar4,&local_28,&local_38,param_3,(int)lVar3,uVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 146cbccf0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
                *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
               bool param_3)

{
  pmf_da18484e pVar1;
  FHttpNetworkReplayStreamer *pFVar2;
  TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy> *pTVar3;
  FHttpNetworkReplayStreamer *local_res8;
  IHttpResponse *local_58;
  TReferenceControllerBase<1> *local_50;
  IHttpRequest *local_48;
  TReferenceControllerBase<1> *local_40;
  TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy> local_38;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FHttpNetworkReplayStreamer,FHttpNetworkReplayStreamer_*_&>
                     (&local_res8);
  pVar1 = this->MethodPtr;
  pTVar3 = TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>
                     (&local_38,
                      (TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>
                       *)&this->_padding_);
  local_58 = param_2->Object;
  local_50 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IHttpResponse *)0x0;
  local_48 = param_1->Object;
  local_40 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  (*(code *)pVar1)(pFVar2,&local_48,&local_58,param_3,pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 146cbcdc0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
                *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
               bool param_3)

{
  pmf_7c845dfc pVar1;
  FHttpNetworkReplayStreamer *pFVar2;
  TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy> *pTVar3;
  FHttpNetworkReplayStreamer *local_res8;
  IHttpResponse *local_58;
  TReferenceControllerBase<1> *local_50;
  IHttpRequest *local_48;
  TReferenceControllerBase<1> *local_40;
  TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy> local_38;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FHttpNetworkReplayStreamer,FHttpNetworkReplayStreamer_*_&>
                     (&local_res8);
  pVar1 = this->MethodPtr;
  pTVar3 = TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
                     (&local_38,
                      (TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
                       *)&this->_padding_);
  local_58 = param_2->Object;
  local_50 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IHttpResponse *)0x0;
  local_48 = param_1->Object;
  local_40 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  (*(code *)pVar1)(pFVar2,&local_48,&local_58,param_3,pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 146cbce90

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
                *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
               bool param_3)

{
  pmf_fbf10a94 pVar1;
  FHttpNetworkReplayStreamer *pFVar2;
  TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy> *pTVar3;
  FHttpNetworkReplayStreamer *local_res8;
  IHttpResponse *local_58;
  TReferenceControllerBase<1> *local_50;
  IHttpRequest *local_48;
  TReferenceControllerBase<1> *local_40;
  TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy> local_38;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FHttpNetworkReplayStreamer,FHttpNetworkReplayStreamer_*_&>
                     (&local_res8);
  pVar1 = this->MethodPtr;
  pTVar3 = TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
                     (&local_38,
                      (TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
                       *)&this->_padding_);
  local_58 = param_2->Object;
  local_50 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IHttpResponse *)0x0;
  local_48 = param_1->Object;
  local_40 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  (*(code *)pVar1)(pFVar2,&local_48,&local_58,param_3,pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 146cbcf60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
                *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
               bool param_3)

{
  pmf_caf9bf65 pVar1;
  FHttpNetworkReplayStreamer *pFVar2;
  FString *pFVar3;
  TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> *pTVar4;
  FHttpNetworkReplayStreamer *local_res8;
  IHttpResponse *local_78;
  TReferenceControllerBase<1> *local_70;
  IHttpRequest *local_68;
  TReferenceControllerBase<1> *local_60;
  FString local_58;
  TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> local_48;
  
  local_res8 = this->UserObject;
  pVar1 = this->MethodPtr;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FHttpNetworkReplayStreamer,FHttpNetworkReplayStreamer_*_&>
                     (&local_res8);
  pFVar3 = ::FString::FString(&local_58,(FString *)&this->_padding_);
  pTVar4 = TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>
                     (&local_48,
                      (TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>
                       *)&this->_padding_);
  local_78 = param_2->Object;
  local_70 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IHttpResponse *)0x0;
  local_68 = param_1->Object;
  local_60 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  (*(code *)pVar1)(pFVar2,&local_68,&local_78,param_3,pTVar4,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 146cbd050

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
                *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
               bool param_3)

{
  pmf_eb2800ae pVar1;
  FHttpNetworkReplayStreamer *pFVar2;
  TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy> *pTVar3;
  FHttpNetworkReplayStreamer *local_res8;
  IHttpResponse *local_58;
  TReferenceControllerBase<1> *local_50;
  IHttpRequest *local_48;
  TReferenceControllerBase<1> *local_40;
  TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy> local_38;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FHttpNetworkReplayStreamer,FHttpNetworkReplayStreamer_*_&>
                     (&local_res8);
  pVar1 = this->MethodPtr;
  pTVar3 = TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
                     (&local_38,
                      (TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
                       *)&this->_padding_);
  local_58 = param_2->Object;
  local_50 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IHttpResponse *)0x0;
  local_48 = param_1->Object;
  local_40 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  (*(code *)pVar1)(pFVar2,&local_48,&local_58,param_3,pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146cbdac0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146cbdad0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146cbdae0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146cbdaf0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146cbdb00

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146cbdb10

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146cbdb20

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 146cbdc70

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 146cbdc80

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 146cbdc90

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 146cbdca0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 146cbdcb0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 146cbdcc0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 146cbdcd0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 146cbdda0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146cbddb0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
::GetUObject(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146cbddc0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146cbddd0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146cbdde0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146cbddf0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
::GetUObject(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146cbde00

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146cbe9d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 146cbe9e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 146cbe9f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 146cbea00

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 146cbea10

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 146cbea20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 146cbea30

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 146cc4a00

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146cc4a10

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146cc4a20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146cc4a30

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146cc4a40

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146cc4a50

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146cc4a60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146cc92f0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146cc9300

FName __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146cc9310

FName __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146cc9320

FName __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146cc9330

FName __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146cc9340

FName __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146cc9350

FName __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

