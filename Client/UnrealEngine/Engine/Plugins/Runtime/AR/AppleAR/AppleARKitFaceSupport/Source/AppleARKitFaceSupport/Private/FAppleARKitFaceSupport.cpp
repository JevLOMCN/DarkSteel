// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 7

// FAppleARKitFaceSupport @ 14d282bb0

FAppleARKitFaceSupport * __thiscall
FAppleARKitFaceSupport::FAppleARKitFaceSupport(FAppleARKitFaceSupport *this)

{
  FString *pFVar1;
  FName *pFVar2;
  wchar_t *pwVar3;
  FName local_res8;
  FString local_18;
  
  this->_padding_ = (longlong)&___7IAppleARKitFaceSupport__6B_;
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__IAppleARKitFaceSupport__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->LiveLinkSource).Object = (ILiveLinkSourceARKit *)0x0;
  (this->LiveLinkSource).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LocalDeviceId).ComparisonIndex = 0;
  (this->LocalDeviceId).Number = 0;
  (this->RemoteLiveLinkPublisher).Object = (IARKitBlendShapePublisher *)0x0;
  (this->RemoteLiveLinkPublisher).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LiveLinkFileWriter).Object = (IARKitBlendShapePublisher *)0x0;
  (this->LiveLinkFileWriter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->TimecodeProvider = (UTimecodeProvider *)0x0;
  (this->LastSessionId).A = 0;
  (this->LastSessionId).B = 0;
  (this->LastSessionId).C = 0;
  (this->LastSessionId).D = 0;
  *(undefined8 *)&this->AnchorIdToSubjectName = 0;
  *(undefined8 *)&(this->AnchorIdToSubjectName).field_0x8 = 0;
  *(undefined8 *)&(this->AnchorIdToSubjectName).field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  *(undefined4 *)&(this->AnchorIdToSubjectName).field_0x28 = 0;
  *(undefined4 *)&(this->AnchorIdToSubjectName).field_0x2c = 0x80;
  *(undefined4 *)&(this->AnchorIdToSubjectName).field_0x34 = 0;
  *(undefined4 *)&(this->AnchorIdToSubjectName).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AnchorIdToSubjectName).field_0x40 = 0;
  *(undefined4 *)&(this->AnchorIdToSubjectName).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AnchorIdLock,4000);
  this->bFaceMirrored = false;
  pFVar1 = FGenericPlatformMisc::GetDeviceId(&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_res8,pwVar3);
  this->LocalDeviceId = *pFVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FAppleARKitFaceSupport @ 14d283e50

void __thiscall FAppleARKitFaceSupport::~FAppleARKitFaceSupport(FAppleARKitFaceSupport *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  
  this->_padding_ = (longlong)&_vftable__for__IAppleARKitFaceSupport__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  if (GIsRequestingExit == false) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEngineExitRequested()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKitFaceSupport\\Source\\AppleARKitFaceSupport\\Private\\AppleARKitFaceSupportImpl.cpp"
                       ,0x5a,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AnchorIdLock);
  *(undefined4 *)&(this->AnchorIdToSubjectName).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AnchorIdToSubjectName).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnchorIdToSubjectName);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LiveLinkFileWriter).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RemoteLiveLinkPublisher).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LiveLinkSource).SharedReferenceCount.ReferenceController);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  return;
}

// Exec_Runtime @ 14d286ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FAppleARKitFaceSupport::Exec_Runtime
          (FAppleARKitFaceSupport *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  FName *pFVar1;
  bool bVar2;
  wchar_t *local_res18 [2];
  FString local_28;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_res18[0] = param_2;
  bVar2 = FParse::Command(local_res18,L"LiveLinkFaceAR",true);
  if (bVar2) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    bVar2 = FParse::Value(local_res18[0],L"SendTo=",&local_28,true,(wchar_t **)0x0);
    if (bVar2) {
      pFVar1 = &this->LocalDeviceId;
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pFVar1 != (FName *)&local_18) {
        pFVar1->ComparisonIndex = 0;
        pFVar1->Number = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&this->RemoteLiveLinkPublisher,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return true;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetNumberOfTrackedFacesSupported @ 14d2877e0

int __thiscall
FAppleARKitFaceSupport::GetNumberOfTrackedFacesSupported(FAppleARKitFaceSupport *this)

{
  return 1;
}

// Init @ 14d288180

void __thiscall FAppleARKitFaceSupport::Init(FAppleARKitFaceSupport *this)

{
  code *UNRECOVERED_JUMPTABLE;
  IModularFeatures *pIVar1;
  longlong *plVar2;
  
  pIVar1 = IModularFeatures::Get();
  plVar2 = &this->_padding_;
  if (this == (FAppleARKitFaceSupport *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 0x28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"AppleARKitFaceSupport");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d2881fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (pIVar1,`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                    ::__l2::FeatureName,plVar2);
  return;
}

// InitRealtimeProviders @ 14d288240

void __thiscall FAppleARKitFaceSupport::InitRealtimeProviders(FAppleARKitFaceSupport *this)

{
  if (bNeedsInit) {
    bNeedsInit = false;
  }
  return;
}

// Shutdown @ 14d28b2e0

void __thiscall FAppleARKitFaceSupport::Shutdown(FAppleARKitFaceSupport *this)

{
  TSharedPtr<IARKitBlendShapePublisher,1> *pTVar1;
  IARKitBlendShapePublisher *pIVar2;
  code *UNRECOVERED_JUMPTABLE;
  IModularFeatures *pIVar3;
  longlong *plVar4;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->RemoteLiveLinkPublisher;
  if (pTVar1->Object != (IARKitBlendShapePublisher *)0x0) {
    (**(code **)((longlong)*pTVar1->Object + 0x10))();
  }
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<IARKitBlendShapePublisher,1> *)&local_28) {
    pTVar1->Object = (IARKitBlendShapePublisher *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->RemoteLiveLinkPublisher).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  pIVar2 = (this->LiveLinkFileWriter).Object;
  if (pIVar2 != (IARKitBlendShapePublisher *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LiveLinkFileWriter != (TSharedPtr<IARKitBlendShapePublisher,1> *)&local_18) {
    (this->LiveLinkFileWriter).Object = (IARKitBlendShapePublisher *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LiveLinkFileWriter).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  pIVar3 = IModularFeatures::Get();
  plVar4 = &this->_padding_;
  if (this == (FAppleARKitFaceSupport *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar3 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"AppleARKitFaceSupport");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d28b3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (pIVar3,`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                    ::__l2::FeatureName,plVar4);
  return;
}

