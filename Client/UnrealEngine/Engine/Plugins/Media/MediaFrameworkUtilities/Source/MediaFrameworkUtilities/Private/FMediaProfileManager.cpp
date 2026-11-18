// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 9

// FMediaProfileManager @ 14d7d0640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FMediaProfileManager * __thiscall
FMediaProfileManager::FMediaProfileManager(FMediaProfileManager *this)

{
  bool bVar1;
  char cVar2;
  UMediaProfileSettings *pUVar3;
  TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_> *pTVar5;
  wchar_t *pwVar6;
  TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_> local_18;
  
  this->_padding_ = (longlong)&___7IMediaProfileManager__6B_;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__IMediaProfileManager__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  (this->MediaSourceProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MediaSourceProxies).ArrayNum = 0;
  (this->MediaSourceProxies).ArrayMax = 0;
  (this->MediaOutputProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MediaOutputProxies).ArrayNum = 0;
  (this->MediaOutputProxies).ArrayMax = 0;
  (this->CurrentMediaProfile).field0_0x0.DebugPtr = (UMediaProfile *)0x0;
  *(undefined8 *)&this->MediaProfileChangedDelegate = 0;
  *(undefined8 *)&(this->MediaProfileChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->MediaProfileChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->MediaProfileChangedDelegate).field_0x18 = 2;
  bVar1 = UObjectInitialized();
  if (bVar1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       ) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar6 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar6,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
    }
    if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
        && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
            == false)) && (GEngine != (UEngine *)0x0)) {
      cVar2 = (**(code **)(GEngine->_padding_ + 0x2c0))();
      if (cVar2 != '\0') {
        pUVar3 = GetDefault<UMediaProfileSettings>();
        pTVar4 = UMediaProfileSettings::LoadMediaSourceProxies(pUVar3,&local_18);
        TArray<TObjectPtr<UProxyMediaSource>,TSizedDefaultAllocator<32>_>::operator=
                  (&this->MediaSourceProxies,
                   (TArray<TObjectPtr<UProxyMediaSource>,TSizedDefaultAllocator<32>_> *)pTVar4);
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
        pUVar3 = GetDefault<UMediaProfileSettings>();
        pTVar5 = UMediaProfileSettings::LoadMediaOutputProxies
                           (pUVar3,(TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_> *)
                                   &local_18);
        TArray<TObjectPtr<UProxyMediaOutput>,TSizedDefaultAllocator<32>_>::operator=
                  (&this->MediaOutputProxies,
                   (TArray<TObjectPtr<UProxyMediaOutput>,TSizedDefaultAllocator<32>_> *)pTVar5);
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
      }
    }
  }
  return this;
}

// ~FMediaProfileManager @ 14d7d1a40

void __thiscall FMediaProfileManager::~FMediaProfileManager(FMediaProfileManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__IMediaProfileManager__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MediaProfileChangedDelegate).field_0x8,
             *(int *)&(this->MediaProfileChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->MediaProfileChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MediaProfileChangedDelegate);
  pFVar2 = (this->MediaOutputProxies).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MediaSourceProxies).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&___7IMediaProfileManager__6B_;
  return;
}

// AddReferencedObjects @ 14d7d33e0

void __thiscall
FMediaProfileManager::AddReferencedObjects(FMediaProfileManager *this,FReferenceCollector *param_1)

{
  undefined8 uVar1;
  
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&(this->MediaOutputProxies).ArrayNum,0,0);
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,this->_padding_,
             *(undefined4 *)&(this->MediaSourceProxies).AllocatorInstance.Data,0,0);
  uVar1._0_4_ = (this->MediaSourceProxies).ArrayNum;
  uVar1._4_4_ = (this->MediaSourceProxies).ArrayMax;
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,uVar1,*(undefined4 *)&(this->MediaOutputProxies).AllocatorInstance.Data,0,0);
  return;
}

// GetAllMediaOutputProxy @ 14d7d80b0

TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_> * __thiscall
FMediaProfileManager::GetAllMediaOutputProxy
          (FMediaProfileManager *this,
          TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->MediaOutputProxies).AllocatorInstance.Data;
  iVar2 = (this->MediaOutputProxies).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MediaOutputProxies).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UProxyMediaOutput>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (this->MediaOutputProxies).ArrayNum;
  pFVar1 = (this->MediaOutputProxies).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar2;
  if (iVar2 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,pFVar1,(longlong)iVar2 << 3);
  }
  return __return_storage_ptr__;
}

// GetAllMediaSourceProxy @ 14d7d8190

TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_> * __thiscall
FMediaProfileManager::GetAllMediaSourceProxy
          (FMediaProfileManager *this,
          TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->MediaSourceProxies).AllocatorInstance.Data;
  iVar2 = (this->MediaSourceProxies).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MediaSourceProxies).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UProxyMediaSource>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (this->MediaSourceProxies).ArrayNum;
  pFVar1 = (this->MediaSourceProxies).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar2;
  if (iVar2 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,pFVar1,(longlong)iVar2 << 3);
  }
  return __return_storage_ptr__;
}

// GetCurrentMediaProfile @ 14d7d8380

UMediaProfile * __thiscall FMediaProfileManager::GetCurrentMediaProfile(FMediaProfileManager *this)

{
  return (this->CurrentMediaProfile).field0_0x0.DebugPtr;
}

// GetReferencerName @ 14d7daf20

FString * __thiscall
FMediaProfileManager::GetReferencerName(FMediaProfileManager *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FMediaProfileManager");
  return __return_storage_ptr__;
}

// OnMediaProfileChanged @ 14d7dd1d0

TMulticastDelegate<void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy> *
__thiscall FMediaProfileManager::OnMediaProfileChanged(FMediaProfileManager *this)

{
  return &this->MediaProfileChangedDelegate;
}

// SetCurrentMediaProfile @ 14d7e12d0

void __thiscall
FMediaProfileManager::SetCurrentMediaProfile(FMediaProfileManager *this,UMediaProfile *param_1)

{
  undefined1 *puVar1;
  UMediaProfile *pUVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UClass *pUVar10;
  TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  longlong lVar14;
  TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_> local_58;
  TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_> local_48;
  FDestructionSentinel local_38;
  
  pUVar10 = UMediaProfileSettings::StaticClass();
  if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar10);
  }
  pTVar11 = UMediaProfileSettings::LoadMediaSourceProxies
                      ((UMediaProfileSettings *)(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr,
                       &local_58);
  TArray<TObjectPtr<UProxyMediaSource>,TSizedDefaultAllocator<32>_>::operator=
            (&this->MediaSourceProxies,
             (TArray<TObjectPtr<UProxyMediaSource>,TSizedDefaultAllocator<32>_> *)pTVar11);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  pUVar10 = UMediaProfileSettings::StaticClass();
  if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar10);
  }
  pTVar12 = UMediaProfileSettings::LoadMediaOutputProxies
                      ((UMediaProfileSettings *)(pUVar10->ClassDefaultObject).field0_0x0.DebugPtr,
                       &local_48);
  TArray<TObjectPtr<UProxyMediaOutput>,TSizedDefaultAllocator<32>_>::operator=
            (&this->MediaOutputProxies,
             (TArray<TObjectPtr<UProxyMediaOutput>,TSizedDefaultAllocator<32>_> *)pTVar12);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  pUVar2 = (this->CurrentMediaProfile).field0_0x0.DebugPtr;
  if (param_1 != pUVar2) {
    if (pUVar2 != (UMediaProfile *)0x0) {
      (**(code **)(pUVar2->_padding_ + 0x2b8))(pUVar2);
    }
    if (param_1 != (UMediaProfile *)0x0) {
      (**(code **)(param_1->_padding_ + 0x2b0))(param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaProfile *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->CurrentMediaProfile).field0_0x0.DebugPtr = param_1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->MediaProfileChangedDelegate,(FWriteAccessScope *)&local_38);
    puVar1 = &(this->MediaProfileChangedDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar6 = false;
    uVar13 = *(int *)&(this->MediaProfileChangedDelegate).field_0x10 - 1;
    if (-1 < (int)uVar13) {
      lVar14 = (longlong)(int)uVar13 << 4;
      bVar6 = false;
      do {
        uVar9 = 0;
        if ((int)uVar13 < *(int *)&(this->MediaProfileChangedDelegate).field_0x10) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&(this->MediaProfileChangedDelegate).field_0x8;
        if (((*(int *)(lVar14 + 8 + lVar3) == 0) ||
            (plVar4 = *(longlong **)(lVar14 + lVar3), plVar4 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,pUVar2,param_1), cVar8 == '\0')) {
          bVar6 = true;
        }
        lVar14 = lVar14 + -0x10;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
    }
    puVar1 = &(this->MediaProfileChangedDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->MediaProfileChangedDelegate,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

