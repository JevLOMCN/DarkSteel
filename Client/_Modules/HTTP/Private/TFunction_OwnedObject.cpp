// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 61

// ~TFunction_OwnedObject<FString_(__cdecl*)(void),0,0> @ 14314f3a0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FString_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<FString_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<FString_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_AVFString__XZ_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 1431586c0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FString_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<FString_(__cdecl*)(void),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6A_AVFString__XZ_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_FString **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1431586e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::CancelRequest'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FHttpRequestCommon::CancelRequest'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143158710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCurlMultiPollEventLoopHttpThread::CreateEventLoop'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 143158750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRetrySystem::FManager::HttpRequestTimeoutAfterDelay'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FHttpRetrySystem::FManager::HttpRequestTimeoutAfterDelay'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar2 + 3) = *(undefined1 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1431587c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::ResetTickTimer'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 143158800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRetrySystem::FManager::RetryHttpRequestWithDelay'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FHttpRetrySystem::FManager::RetryHttpRequestWithDelay'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar2 + 3) = *(undefined1 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 143158870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::StartActivityTimeoutTimerBy'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FHttpRequestCommon::StartActivityTimeoutTimerBy'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1431588a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::StartTotalTimeoutTimer'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FHttpRequestCommon::StartTotalTimeoutTimer'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1431588d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::AddRequest'::__l5::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 143158910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::CancelRequest'::__l5::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 143158950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullHttpRequest::CancelRequest'::__l5::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FNullHttpRequest::CancelRequest'::`5'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143158980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::__l5::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1431589c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::TriggerMockResponse'::__l8::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FHttpRequestCommon::TriggerMockResponse'::`8'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1431589f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::TriggerStatusCodeReceivedDelegate'::__l9::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FHttpRequestCommon::TriggerStatusCodeReceivedDelegate'::`9'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 143158a50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::__l10::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::`10'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143158a80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCurlSocketEventLoopHttpThread::HandleCurlSocketCallback'::__l23::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 143158ac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCurlSocketEventLoopHttpThread::HandleCurlTimerCallback'::__l23::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 143158b00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::__l5::<lambda_2>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 143158b40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::__l17::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::`17'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143158b70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::__l15::<lambda_3>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 14315c4a0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FString_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<FString_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014315c4a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14315c4b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::CancelRequest'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014315c4b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14315c4c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCurlMultiPollEventLoopHttpThread::CreateEventLoop'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014315c4c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14315c4d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRetrySystem::FManager::HttpRequestTimeoutAfterDelay'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14315c500

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::ResetTickTimer'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014315c505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14315c510

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRetrySystem::FManager::RetryHttpRequestWithDelay'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14315c540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::StartActivityTimeoutTimerBy'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014315c545. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14315c550

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::StartTotalTimeoutTimer'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014315c555. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14315c560

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::AddRequest'::__l5::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014315c565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14315c570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::CancelRequest'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014315c575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14315c580

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullHttpRequest::CancelRequest'::__l5::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014315c585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14315c590

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::__l5::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014315c595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14315c5a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::TriggerMockResponse'::__l8::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014315c5a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14315c5b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::TriggerStatusCodeReceivedDelegate'::__l9::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14315c5e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::__l10::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014315c5e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14315c5f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCurlSocketEventLoopHttpThread::HandleCurlSocketCallback'::__l23::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014315c5f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14315c600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCurlSocketEventLoopHttpThread::HandleCurlTimerCallback'::__l23::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014315c605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14315c610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::__l5::<lambda_2>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014315c615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14315c620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::__l17::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014315c625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14315c630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::__l15::<lambda_3>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014315c635. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 143160c20

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FString_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<FString_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 143160c30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::CancelRequest'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143160c40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCurlMultiPollEventLoopHttpThread::CreateEventLoop'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143160c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRetrySystem::FManager::HttpRequestTimeoutAfterDelay'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143160c60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::ResetTickTimer'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143160c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRetrySystem::FManager::RetryHttpRequestWithDelay'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143160c80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::StartActivityTimeoutTimerBy'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143160c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::StartTotalTimeoutTimer'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143160ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::AddRequest'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143160cb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::CancelRequest'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143160cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullHttpRequest::CancelRequest'::__l5::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143160cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143160ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::TriggerMockResponse'::__l8::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143160cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::TriggerStatusCodeReceivedDelegate'::__l9::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143160d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::__l10::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143160d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCurlSocketEventLoopHttpThread::HandleCurlSocketCallback'::__l23::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143160d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCurlSocketEventLoopHttpThread::HandleCurlTimerCallback'::__l23::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143160d30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::__l5::<lambda_2>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143160d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::__l17::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 143160d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::__l15::<lambda_3>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

