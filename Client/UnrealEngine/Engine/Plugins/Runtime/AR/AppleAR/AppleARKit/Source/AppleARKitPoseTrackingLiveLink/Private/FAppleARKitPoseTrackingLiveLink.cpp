// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitPoseTrackingLiveLink
// Functions: 5

// FAppleARKitPoseTrackingLiveLink @ 14cfe31b0

FAppleARKitPoseTrackingLiveLink * __thiscall
FAppleARKitPoseTrackingLiveLink::FAppleARKitPoseTrackingLiveLink
          (FAppleARKitPoseTrackingLiveLink *this)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->LiveLinkSource).Object = (ILiveLinkSourceARKitPoseTracking *)0x0;
  (this->LiveLinkSource).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PoseTrackingLiveLinkSubjectName).ComparisonIndex = 0;
  (this->PoseTrackingLiveLinkSubjectName).Number = 0;
  this->_padding_ = (longlong)&___7FAppleARKitPoseTrackingLiveLink__6B_;
  pFVar1 = FGenericPlatformMisc::GetDeviceId(&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&this->LocalDeviceId,pwVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FAppleARKitPoseTrackingLiveLink @ 14cfe4080

void __thiscall
FAppleARKitPoseTrackingLiveLink::~FAppleARKitPoseTrackingLiveLink
          (FAppleARKitPoseTrackingLiveLink *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7FAppleARKitPoseTrackingLiveLink__6B_;
  if (GIsRequestingExit == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEngineExitRequested()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKitPoseTrackingLiveLink\\Private\\AppleARKitPoseTrackingLiveLinkImpl.cpp"
                       ,0x11,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LiveLinkSource).SharedReferenceCount.ReferenceController);
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014cfe40f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// GetRefPoseTransforms @ 14cfe5d40

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
FAppleARKitPoseTrackingLiveLink::GetRefPoseTransforms(FAppleARKitPoseTrackingLiveLink *this)

{
  ILiveLinkSourceARKitPoseTracking *pIVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pIVar1 = (this->LiveLinkSource).Object;
  if (pIVar1 != (ILiveLinkSourceARKitPoseTracking *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cfe5d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pTVar2 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             (**(code **)((longlong)*pIVar1 + 0x78))();
    return pTVar2;
  }
  return (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0;
}

// Init @ 14cfe5f20

void __thiscall FAppleARKitPoseTrackingLiveLink::Init(FAppleARKitPoseTrackingLiveLink *this)

{
  code *UNRECOVERED_JUMPTABLE;
  IModularFeatures *pIVar1;
  longlong *plVar2;
  
  pIVar1 = IModularFeatures::Get();
  plVar2 = &this->_padding_;
  if (this == (FAppleARKitPoseTrackingLiveLink *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 0x28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"AppleARKitPoseTrackingLiveLink");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014cfe5f9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (pIVar1,`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                    ::__l2::FeatureName,plVar2);
  return;
}

// Shutdown @ 14cfe66f0

void __thiscall FAppleARKitPoseTrackingLiveLink::Shutdown(FAppleARKitPoseTrackingLiveLink *this)

{
  code *UNRECOVERED_JUMPTABLE;
  IModularFeatures *pIVar1;
  longlong *plVar2;
  
  pIVar1 = IModularFeatures::Get();
  plVar2 = &this->_padding_;
  if (this == (FAppleARKitPoseTrackingLiveLink *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"AppleARKitPoseTrackingLiveLink");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014cfe676a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (pIVar1,`public:_static_class_FName___cdecl_IAppleARKitPoseTrackingLiveLink::GetModularFeatureName(void)'
                    ::__l2::FeatureName,plVar2);
  return;
}

