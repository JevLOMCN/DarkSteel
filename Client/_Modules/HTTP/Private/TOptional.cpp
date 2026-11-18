// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 7

// ~TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>_> @ 14314f820

void __thiscall
TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>_>
::
~TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>_>
          (TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>_>
           *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  if (this->bIsSet != false) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    if ((*(int *)&(this->TypedValue).field_0x30 != 0) &&
       (puVar1 = *(undefined8 **)&(this->TypedValue).field_0x28, puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->TypedValue).field_0x28,0,0,0x10);
      *(undefined4 *)&(this->TypedValue).field_0x30 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    pvVar2 = *(void **)&(this->TypedValue).field_0x28;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00014314f88f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DeleteCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
  return;
}

// ~TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>_> @ 14314f8b0

void __thiscall
TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>_>::
~TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>_>
          (TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>_>
           *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  if (this->bIsSet != false) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    if ((*(int *)&(this->TypedValue).field_0x30 != 0) &&
       (puVar1 = *(undefined8 **)&(this->TypedValue).field_0x28, puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->TypedValue).field_0x28,0,0,0x10);
      *(undefined4 *)&(this->TypedValue).field_0x30 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    pvVar2 = *(void **)&(this->TypedValue).field_0x28;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00014314f91f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DeleteCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
  return;
}

// ~TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>_> @ 14314f940

void __thiscall
TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>_>
::
~TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>_>
          (TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>_>
           *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  if (this->bIsSet != false) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    if ((*(int *)&(this->TypedValue).field_0x30 != 0) &&
       (puVar1 = *(undefined8 **)&(this->TypedValue).field_0x28, puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->TypedValue).field_0x28,0,0,0x10);
      *(undefined4 *)&(this->TypedValue).field_0x30 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    pvVar2 = *(void **)&(this->TypedValue).field_0x28;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00014314f9af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DeleteCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
  return;
}

// ~TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>_> @ 14314f9d0

void __thiscall
TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>_>
::
~TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>_>
          (TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>_>
           *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  if (this->bIsSet != false) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    if ((*(int *)&(this->TypedValue).field_0x30 != 0) &&
       (puVar1 = *(undefined8 **)&(this->TypedValue).field_0x28, puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->TypedValue).field_0x28,0,0,0x10);
      *(undefined4 *)&(this->TypedValue).field_0x30 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    pvVar2 = *(void **)&(this->TypedValue).field_0x28;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00014314fa3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DeleteCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
  return;
}

// ~TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>_> @ 14314fa60

void __thiscall
TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>_>
::
~TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>_>
          (TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>_>
           *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  if (this->bIsSet != false) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    if ((*(int *)&(this->TypedValue).field_0x30 != 0) &&
       (puVar1 = *(undefined8 **)&(this->TypedValue).field_0x28, puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->TypedValue).field_0x28,0,0,0x10);
      *(undefined4 *)&(this->TypedValue).field_0x30 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    pvVar2 = *(void **)&(this->TypedValue).field_0x28;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00014314facf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DeleteCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
  return;
}

// operator-> @ 143151460

TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits> *
__thiscall
TOptional<UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>_>
::operator->(TOptional<UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>_>
             *this)

{
  code *pcVar1;
  bool bVar2;
  TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>
  *pTVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->TypedValue;
}

// GetValue @ 143166380

Type * __thiscall TOptional<enum_EHttpRequestStatus::Type>::GetValue(void *this)

{
  code *pcVar1;
  bool bVar2;
  Type *pTVar3;
  
  if (*(char *)((longlong)this + 4) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (Type *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

