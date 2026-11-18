// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 112

// FLiveLinkClient @ 14d010b20

FLiveLinkClient * __thiscall
FLiveLinkClient::FLiveLinkClient
          (FLiveLinkClient *this,
          TMulticastDelegate<void___cdecl(ELiveLinkTickType),FDefaultTSDelegateUserPolicy> *param_1)

{
  FLiveLinkSourceCollection *this_00;
  FLiveLinkSourceCollection *pFVar1;
  
  this->_padding_ = (longlong)&___7FLiveLinkClient__6B_;
  this_00 = ::operator_new(0x1f0);
  pFVar1 = (FLiveLinkSourceCollection *)0x0;
  if (this_00 != (FLiveLinkSourceCollection *)0x0) {
    pFVar1 = FLiveLinkSourceCollection::FLiveLinkSourceCollection(this_00);
  }
  (this->Collection).Ptr = pFVar1;
  (this->RebroadcastLiveLinkProvider).Object = (ILiveLinkProvider *)0x0;
  (this->RebroadcastLiveLinkProvider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->PendingFramesCriticalSection,4000);
  (this->SubjectStaticToPush).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubjectStaticToPush).ArrayNum = 0;
  (this->SubjectStaticToPush).ArrayMax = 0;
  (this->SubjectFrameToPush).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubjectFrameToPush).ArrayNum = 0;
  (this->SubjectFrameToPush).ArrayMax = 0;
  *(undefined8 *)&this->EnabledSubjects = 0;
  *(undefined8 *)&(this->EnabledSubjects).field_0x8 = 0;
  *(undefined8 *)&(this->EnabledSubjects).field_0x20 = 0;
  *(undefined4 *)&(this->EnabledSubjects).field_0x28 = 0;
  *(undefined4 *)&(this->EnabledSubjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->EnabledSubjects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EnabledSubjects).field_0x34 = 0;
  *(undefined8 *)&(this->EnabledSubjects).field_0x40 = 0;
  *(undefined4 *)&(this->EnabledSubjects).field_0x48 = 0;
  *(undefined8 *)&this->SubjectFrameAddedHandles = 0;
  *(undefined8 *)&(this->SubjectFrameAddedHandles).field_0x8 = 0;
  *(undefined8 *)&(this->SubjectFrameAddedHandles).field_0x20 = 0;
  *(undefined4 *)&(this->SubjectFrameAddedHandles).field_0x28 = 0;
  *(undefined4 *)&(this->SubjectFrameAddedHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubjectFrameAddedHandles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubjectFrameAddedHandles).field_0x34 = 0;
  *(undefined8 *)&(this->SubjectFrameAddedHandles).field_0x40 = 0;
  *(undefined4 *)&(this->SubjectFrameAddedHandles).field_0x48 = 0;
  *(undefined8 *)&this->SubjectFrameReceivedHandles = 0;
  *(undefined8 *)&(this->SubjectFrameReceivedHandles).field_0x8 = 0;
  *(undefined8 *)&(this->SubjectFrameReceivedHandles).field_0x20 = 0;
  *(undefined4 *)&(this->SubjectFrameReceivedHandles).field_0x28 = 0;
  *(undefined4 *)&(this->SubjectFrameReceivedHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubjectFrameReceivedHandles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubjectFrameReceivedHandles).field_0x34 = 0;
  *(undefined8 *)&(this->SubjectFrameReceivedHandles).field_0x40 = 0;
  *(undefined4 *)&(this->SubjectFrameReceivedHandles).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->SubjectFrameReceivedHandleseCriticalSection,4000);
  *(undefined8 *)&this->OnLiveLinkTickedDelegate = 0;
  *(undefined8 *)&(this->OnLiveLinkTickedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnLiveLinkTickedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnLiveLinkTickedDelegate).field_0x18 = 2;
  (this->RebroadcastLiveLinkProviderName).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RebroadcastLiveLinkProviderName).Data.ArrayNum = 0;
  (this->RebroadcastLiveLinkProviderName).Data.ArrayMax = 0;
  *(undefined8 *)&(this->RebroadcastedSubjects).Elements = 0;
  *(undefined8 *)&(this->RebroadcastedSubjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RebroadcastedSubjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RebroadcastedSubjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RebroadcastedSubjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RebroadcastedSubjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RebroadcastedSubjects).Elements.field_0x34 = 0;
  (this->RebroadcastedSubjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RebroadcastedSubjects).HashSize = 0;
  this->bPreProcessRebroadcastFrames = false;
  this->bTranslateRebroadcastFrames = false;
  this->bEnableParentSubjects = false;
  TMulticastDelegateRegistration<void___cdecl(enum_ELiveLinkTickType),FDefaultTSDelegateUserPolicy>
  ::AddRaw<FLiveLinkClient>(param_1,(FLiveLinkClient *)&stack0x00000008,(pmf_b2034631 *)this);
  Initialize(this);
  return this;
}

// FLiveLinkClient @ 14d010d30

FLiveLinkClient * __thiscall
FLiveLinkClient::FLiveLinkClient
          (FLiveLinkClient *this,
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  FLiveLinkSourceCollection *this_00;
  FLiveLinkSourceCollection *pFVar1;
  code *local_18;
  undefined8 uStack_10;
  
  this->_padding_ = (longlong)&___7FLiveLinkClient__6B_;
  this_00 = ::operator_new(0x1f0);
  pFVar1 = (FLiveLinkSourceCollection *)0x0;
  if (this_00 != (FLiveLinkSourceCollection *)0x0) {
    pFVar1 = FLiveLinkSourceCollection::FLiveLinkSourceCollection(this_00);
  }
  (this->Collection).Ptr = pFVar1;
  (this->RebroadcastLiveLinkProvider).Object = (ILiveLinkProvider *)0x0;
  (this->RebroadcastLiveLinkProvider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->PendingFramesCriticalSection,4000);
  (this->SubjectStaticToPush).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubjectStaticToPush).ArrayNum = 0;
  (this->SubjectStaticToPush).ArrayMax = 0;
  (this->SubjectFrameToPush).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubjectFrameToPush).ArrayNum = 0;
  (this->SubjectFrameToPush).ArrayMax = 0;
  *(undefined8 *)&this->EnabledSubjects = 0;
  *(undefined8 *)&(this->EnabledSubjects).field_0x8 = 0;
  *(undefined8 *)&(this->EnabledSubjects).field_0x20 = 0;
  *(undefined4 *)&(this->EnabledSubjects).field_0x28 = 0;
  *(undefined4 *)&(this->EnabledSubjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->EnabledSubjects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EnabledSubjects).field_0x34 = 0;
  *(undefined8 *)&(this->EnabledSubjects).field_0x40 = 0;
  *(undefined4 *)&(this->EnabledSubjects).field_0x48 = 0;
  *(undefined8 *)&this->SubjectFrameAddedHandles = 0;
  *(undefined8 *)&(this->SubjectFrameAddedHandles).field_0x8 = 0;
  *(undefined8 *)&(this->SubjectFrameAddedHandles).field_0x20 = 0;
  *(undefined4 *)&(this->SubjectFrameAddedHandles).field_0x28 = 0;
  *(undefined4 *)&(this->SubjectFrameAddedHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubjectFrameAddedHandles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubjectFrameAddedHandles).field_0x34 = 0;
  *(undefined8 *)&(this->SubjectFrameAddedHandles).field_0x40 = 0;
  *(undefined4 *)&(this->SubjectFrameAddedHandles).field_0x48 = 0;
  *(undefined8 *)&this->SubjectFrameReceivedHandles = 0;
  *(undefined8 *)&(this->SubjectFrameReceivedHandles).field_0x8 = 0;
  *(undefined8 *)&(this->SubjectFrameReceivedHandles).field_0x20 = 0;
  *(undefined4 *)&(this->SubjectFrameReceivedHandles).field_0x28 = 0;
  *(undefined4 *)&(this->SubjectFrameReceivedHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubjectFrameReceivedHandles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubjectFrameReceivedHandles).field_0x34 = 0;
  *(undefined8 *)&(this->SubjectFrameReceivedHandles).field_0x40 = 0;
  *(undefined4 *)&(this->SubjectFrameReceivedHandles).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->SubjectFrameReceivedHandleseCriticalSection,4000);
  *(undefined8 *)&this->OnLiveLinkTickedDelegate = 0;
  *(undefined8 *)&(this->OnLiveLinkTickedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnLiveLinkTickedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnLiveLinkTickedDelegate).field_0x18 = 2;
  (this->RebroadcastLiveLinkProviderName).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RebroadcastLiveLinkProviderName).Data.ArrayNum = 0;
  (this->RebroadcastLiveLinkProviderName).Data.ArrayMax = 0;
  *(undefined8 *)&(this->RebroadcastedSubjects).Elements = 0;
  *(undefined8 *)&(this->RebroadcastedSubjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RebroadcastedSubjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RebroadcastedSubjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RebroadcastedSubjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RebroadcastedSubjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RebroadcastedSubjects).Elements.field_0x34 = 0;
  (this->RebroadcastedSubjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
  (this->RebroadcastedSubjects).HashSize = 0;
  local_18 = Tick;
  this->bPreProcessRebroadcastFrames = false;
  this->bTranslateRebroadcastFrames = false;
  this->bEnableParentSubjects = false;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FLiveLinkClient,enum_ELiveLinkTickType>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             param_1,(FLiveLinkClient *)&stack0x00000018,(pmf_b2034631 *)this,
             (ELiveLinkTickType *)&local_18);
  Initialize(this);
  return this;
}

// FLiveLinkClient @ 14d010f50

FLiveLinkClient * __thiscall
FLiveLinkClient::FLiveLinkClient
          (FLiveLinkClient *this,
          TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *param_1)

{
  FLiveLinkSourceCollection *this_00;
  FLiveLinkSourceCollection *pFVar1;
  code *local_18;
  undefined8 uStack_10;
  
  this->_padding_ = (longlong)&___7FLiveLinkClient__6B_;
  this_00 = ::operator_new(0x1f0);
  pFVar1 = (FLiveLinkSourceCollection *)0x0;
  if (this_00 != (FLiveLinkSourceCollection *)0x0) {
    pFVar1 = FLiveLinkSourceCollection::FLiveLinkSourceCollection(this_00);
  }
  (this->Collection).Ptr = pFVar1;
  (this->RebroadcastLiveLinkProvider).Object = (ILiveLinkProvider *)0x0;
  (this->RebroadcastLiveLinkProvider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->PendingFramesCriticalSection,4000);
  (this->SubjectStaticToPush).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubjectStaticToPush).ArrayNum = 0;
  (this->SubjectStaticToPush).ArrayMax = 0;
  (this->SubjectFrameToPush).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubjectFrameToPush).ArrayNum = 0;
  (this->SubjectFrameToPush).ArrayMax = 0;
  *(undefined8 *)&this->EnabledSubjects = 0;
  *(undefined8 *)&(this->EnabledSubjects).field_0x8 = 0;
  *(undefined8 *)&(this->EnabledSubjects).field_0x20 = 0;
  *(undefined4 *)&(this->EnabledSubjects).field_0x28 = 0;
  *(undefined4 *)&(this->EnabledSubjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->EnabledSubjects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EnabledSubjects).field_0x34 = 0;
  *(undefined8 *)&(this->EnabledSubjects).field_0x40 = 0;
  *(undefined4 *)&(this->EnabledSubjects).field_0x48 = 0;
  *(undefined8 *)&this->SubjectFrameAddedHandles = 0;
  *(undefined8 *)&(this->SubjectFrameAddedHandles).field_0x8 = 0;
  *(undefined8 *)&(this->SubjectFrameAddedHandles).field_0x20 = 0;
  *(undefined4 *)&(this->SubjectFrameAddedHandles).field_0x28 = 0;
  *(undefined4 *)&(this->SubjectFrameAddedHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubjectFrameAddedHandles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubjectFrameAddedHandles).field_0x34 = 0;
  *(undefined8 *)&(this->SubjectFrameAddedHandles).field_0x40 = 0;
  *(undefined4 *)&(this->SubjectFrameAddedHandles).field_0x48 = 0;
  *(undefined8 *)&this->SubjectFrameReceivedHandles = 0;
  *(undefined8 *)&(this->SubjectFrameReceivedHandles).field_0x8 = 0;
  *(undefined8 *)&(this->SubjectFrameReceivedHandles).field_0x20 = 0;
  *(undefined4 *)&(this->SubjectFrameReceivedHandles).field_0x28 = 0;
  *(undefined4 *)&(this->SubjectFrameReceivedHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubjectFrameReceivedHandles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubjectFrameReceivedHandles).field_0x34 = 0;
  *(undefined8 *)&(this->SubjectFrameReceivedHandles).field_0x40 = 0;
  *(undefined4 *)&(this->SubjectFrameReceivedHandles).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->SubjectFrameReceivedHandleseCriticalSection,4000);
  *(undefined8 *)&this->OnLiveLinkTickedDelegate = 0;
  *(undefined8 *)&(this->OnLiveLinkTickedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnLiveLinkTickedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnLiveLinkTickedDelegate).field_0x18 = 2;
  (this->RebroadcastLiveLinkProviderName).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RebroadcastLiveLinkProviderName).Data.ArrayNum = 0;
  (this->RebroadcastLiveLinkProviderName).Data.ArrayMax = 0;
  *(undefined8 *)&(this->RebroadcastedSubjects).Elements = 0;
  *(undefined8 *)&(this->RebroadcastedSubjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RebroadcastedSubjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RebroadcastedSubjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RebroadcastedSubjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RebroadcastedSubjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RebroadcastedSubjects).Elements.field_0x34 = 0;
  (this->RebroadcastedSubjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
  (this->RebroadcastedSubjects).HashSize = 0;
  local_18 = Tick;
  this->bPreProcessRebroadcastFrames = false;
  this->bTranslateRebroadcastFrames = false;
  this->bEnableParentSubjects = false;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
  AddRaw<FLiveLinkClient,enum_ELiveLinkTickType>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
             param_1,(FLiveLinkClient *)&stack0x00000018,(pmf_b2034631 *)this,
             (ELiveLinkTickType *)&local_18);
  Initialize(this);
  return this;
}

// FLiveLinkClient @ 14d011170

FLiveLinkClient * __thiscall FLiveLinkClient::FLiveLinkClient(FLiveLinkClient *this)

{
  FLiveLinkClient(this,&FCoreDelegates::OnSamplingInput);
  this->_padding_ = (longlong)&___7FLiveLinkClient__6B_;
  return this;
}

// ~FLiveLinkClient @ 14d015e00

void __thiscall FLiveLinkClient::~FLiveLinkClient(FLiveLinkClient *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  FLiveLinkSourceCollection *this_00;
  
  this->_padding_ = (longlong)&___7FLiveLinkClient__6B_;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPreExit,this);
  Shutdown(this);
  (this->RebroadcastedSubjects).HashSize = 0;
  FVar1 = (this->RebroadcastedSubjects).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FLiveLinkSubjectKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLiveLinkSubjectKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RebroadcastedSubjects).Elements);
  pFVar2 = (this->RebroadcastLiveLinkProviderName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLiveLinkTickedDelegate).field_0x8,
             *(int *)&(this->OnLiveLinkTickedDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnLiveLinkTickedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLiveLinkTickedDelegate);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SubjectFrameReceivedHandleseCriticalSection);
  *(undefined4 *)&(this->SubjectFrameReceivedHandles).field_0x48 = 0;
  pvVar3 = *(void **)&(this->SubjectFrameReceivedHandles).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubjectFrameReceivedHandles);
  *(undefined4 *)&(this->SubjectFrameAddedHandles).field_0x48 = 0;
  pvVar3 = *(void **)&(this->SubjectFrameAddedHandles).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubjectFrameAddedHandles);
  *(undefined4 *)&(this->EnabledSubjects).field_0x48 = 0;
  pvVar3 = *(void **)&(this->EnabledSubjects).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FLiveLinkSubjectName,FLiveLinkSubjectKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FLiveLinkSubjectName,FLiveLinkSubjectKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FLiveLinkSubjectName,FLiveLinkSubjectKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EnabledSubjects);
  DestructItems<FLiveLinkClient::FPendingSubjectFrame,int>
            ((FPendingSubjectFrame *)(this->SubjectFrameToPush).AllocatorInstance.Data,
             (this->SubjectFrameToPush).ArrayNum);
  pFVar2 = (this->SubjectFrameToPush).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FLiveLinkClient::FPendingSubjectStatic,int>
            ((FPendingSubjectStatic *)(this->SubjectStaticToPush).AllocatorInstance.Data,
             (this->SubjectStaticToPush).ArrayNum);
  pFVar2 = (this->SubjectStaticToPush).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PendingFramesCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RebroadcastLiveLinkProvider).SharedReferenceCount.ReferenceController);
  this_00 = (this->Collection).Ptr;
  if (this_00 != (FLiveLinkSourceCollection *)0x0) {
    FLiveLinkSourceCollection::~FLiveLinkSourceCollection(this_00);
    ::operator_delete(this_00,0x1f0);
  }
  this->_padding_ = (longlong)&___7ILiveLinkClient__6B_;
  return;
}

// operator() @ 14d018ca0

void __thiscall
`FLiveLinkClient::BuildThisTicksSubjectSnapshot'::__l2::<lambda_1>::operator()
          (void *this,FLiveLinkSubject *param_1,FLiveLinkCollectionSourceItem *param_2,
          FLiveLinkCollectionSubjectItem *param_3)

{
  ULiveLinkSubjectSettings *pUVar1;
  ULiveLinkSourceSettings *pUVar2;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this_00;
  char cVar3;
  int iVar4;
  ulong64 uVar5;
  FLiveLinkSubjectName *local_28;
  FLiveLinkCollectionSubjectItem *local_20;
  
  if (param_3->bEnabled == false) {
    cVar3 = (**(code **)(param_1->_padding_ + 0xa0))();
    if (cVar3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014d018d9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1->_padding_ + 0x20))(param_1);
      return;
    }
  }
  else {
    pUVar1 = (ULiveLinkSubjectSettings *)(param_3->Setting).Object;
    pUVar2 = (ULiveLinkSourceSettings *)(param_2->Setting).Object;
    FLiveLinkSubject::CacheSettings(param_1,pUVar2,pUVar1);
    (**(code **)(param_1->_padding_ + 0x10))(param_1);
    TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>::
    Emplace<FLiveLinkSubjectKey_const_&>
              (*(TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
                 **)((longlong)this + 0x10),(FLiveLinkSubjectKey *)&stack0x00000020,(bool *)param_3)
    ;
    local_28 = &(param_3->Key).SubjectName;
    local_20 = param_3;
    TSet<TTuple<FLiveLinkSubjectName,FLiveLinkSubjectKey>,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FLiveLinkSubjectName_const_&,FLiveLinkSubjectKey_const_&>_>
              ((TSet<TTuple<FLiveLinkSubjectName,FLiveLinkSubjectKey>,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
                *)(*(longlong *)this + 0x68),
               (TPairInitializer<FLiveLinkSubjectName_const_&,FLiveLinkSubjectKey_const_&> *)
               &stack0x00000020,(bool *)&local_28);
    cVar3 = (**(code **)(param_1->_padding_ + 0x40))(param_1);
    if ((cVar3 != '\0') && (0 < (pUVar1->FrameRate).Denominator)) {
      this_00 = *(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> **)((longlong)this + 8);
      uVar5 = CityHash64((char *)param_3,0x10);
      iVar4 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                        (this_00,(uint)uVar5,(FGuid *)param_3);
      if (iVar4 == -1) {
        (pUVar2->BufferSettings).DetectedFrameRate = pUVar1->FrameRate;
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                  (*(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> **)
                    ((longlong)this + 8),(FGuid *)&stack0x00000020,(bool *)param_3);
      }
    }
  }
  return;
}

// operator() @ 14d018e70

void __thiscall
`FLiveLinkClient::GetDisplayableSources'::__l2::<lambda_1>::operator()
          (void *this,FLiveLinkCollectionSourceItem *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  
  if ((param_1->Source).Object == (ILiveLinkSource *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar7 = (**(code **)((longlong)*(param_1->Source).Object + 0x20))();
  if ((cVar7 != '\0') ||
     ((*(char *)((longlong)this + 8) != '\0' && (param_1->bIsVirtualSource != false)))) {
    pFVar2 = *(ForAnyElementType **)this;
    if (((FLiveLinkCollectionSourceItem *)pFVar2->Data <= param_1) &&
       (param_1 < (FLiveLinkCollectionSourceItem *)
                  (&((FLiveLinkCollectionSourceItem *)pFVar2->Data)->Guid +
                  *(int *)((longlong)&pFVar2[1].Data + 4)))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar8 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar8 + 1;
    uVar5 = *(undefined8 *)&(param_1->Guid).C;
    pFVar3 = pFVar2->Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x10) = *(undefined8 *)&param_1->Guid;
    *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x10 + 8) = uVar5;
  }
  return;
}

// operator() @ 14d018f80

void __thiscall
`FLiveLinkClient::GetSources'::__l2::<lambda_1>::operator()
          (void *this,FLiveLinkCollectionSourceItem *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  
  if (((param_1->bPendingKill == false) || (*(char *)((longlong)this + 8) != '\0')) &&
     (param_1->bIsVirtualSource == false)) {
    pFVar2 = *(ForAnyElementType **)this;
    if (((FLiveLinkCollectionSourceItem *)pFVar2->Data <= param_1) &&
       (param_1 < (FLiveLinkCollectionSourceItem *)
                  (&((FLiveLinkCollectionSourceItem *)pFVar2->Data)->Guid +
                  *(int *)((longlong)&pFVar2[1].Data + 4)))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    uVar5 = *(undefined8 *)&(param_1->Guid).C;
    pFVar3 = pFVar2->Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10) = *(undefined8 *)&param_1->Guid;
    *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = uVar5;
  }
  return;
}

// operator() @ 14d019050

void __thiscall
`FLiveLinkClient::GetSubjects'::__l2::<lambda_1>::operator()
          (void *this,FLiveLinkCollectionSourceItem *param_1,FLiveLinkCollectionSubjectItem *param_2
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  
  if (((param_2->bEnabled != false) || (*(char *)((longlong)this + 8) != '\0')) &&
     ((*(char *)((longlong)this + 9) != '\0' || ((param_2->VirtualSubject).Object == (UObject *)0x0)
      ))) {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
    if (((FLiveLinkCollectionSubjectItem *)pFVar3->Data <= param_2) &&
       (param_2 < (FLiveLinkCollectionSubjectItem *)
                  (&((FLiveLinkCollectionSubjectItem *)pFVar3->Data)->Key +
                  *(int *)((longlong)&pFVar3[1].Data + 4)))) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x418,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar8 + 1;
    uVar6 = *(undefined8 *)&(param_2->Key).Source.C;
    pFVar4 = pFVar3->Data;
    pFVar2 = pFVar4 + (longlong)iVar8 * 0x18;
    *(undefined8 *)pFVar2 = *(undefined8 *)&(param_2->Key).Source;
    *(undefined8 *)(pFVar2 + 8) = uVar6;
    *(FName *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = (param_2->Key).SubjectName.Name;
  }
  return;
}

// operator() @ 14d019130

void __thiscall
`FLiveLinkClient::GetSubjectsSupportingRole'::__l2::<lambda_1>::operator()
          (void *this,FLiveLinkCollectionSourceItem *param_1,FLiveLinkCollectionSubjectItem *param_2
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  ForAnyElementType *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  FLiveLinkSubject *pFVar11;
  UObject *local_res8;
  
  pUVar3 = (param_2->VirtualSubject).Object;
  if (pUVar3 == (UObject *)0x0) {
    pFVar11 = (param_2->LiveSubject).Ptr;
  }
  else {
    pFVar11 = (FLiveLinkSubject *)(pUVar3 + 1);
  }
  local_res8 = *(UObject **)((longlong)this + 0x10);
  pcVar4 = *(code **)(pFVar11->_padding_ + 0x38);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  cVar8 = (*pcVar4)(pFVar11,&local_res8);
  if (((cVar8 != '\0') &&
      ((param_2->bEnabled != false || (*(char *)((longlong)this + 0x18) != '\0')))) &&
     ((*(char *)((longlong)this + 0x19) != '\0' ||
      ((param_2->VirtualSubject).Object == (UObject *)0x0)))) {
    pFVar5 = *(ForAnyElementType **)((longlong)this + 8);
    if (((FLiveLinkCollectionSubjectItem *)pFVar5->Data <= param_2) &&
       (param_2 < (FLiveLinkCollectionSubjectItem *)
                  (&((FLiveLinkCollectionSubjectItem *)pFVar5->Data)->Key +
                  *(int *)((longlong)&pFVar5[1].Data + 4)))) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar10 = *(int *)&pFVar5[1].Data;
    piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,pFVar5,piVar1);
    }
    *(int *)&pFVar5[1].Data = iVar10 + 1;
    uVar7 = *(undefined8 *)&(param_2->Key).Source.C;
    pFVar6 = pFVar5->Data;
    pFVar2 = pFVar6 + (longlong)iVar10 * 0x18;
    *(undefined8 *)pFVar2 = *(undefined8 *)&(param_2->Key).Source;
    *(undefined8 *)(pFVar2 + 8) = uVar7;
    *(FName *)(pFVar6 + (longlong)iVar10 * 0x18 + 0x10) = (param_2->Key).SubjectName.Name;
  }
  return;
}

// operator() @ 14d019270

void __thiscall
`FLiveLinkClient::GetVirtualSources'::__l2::<lambda_1>::operator()
          (void *this,FLiveLinkCollectionSourceItem *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  
  if (((param_1->bPendingKill == false) || (*(char *)((longlong)this + 8) != '\0')) &&
     (param_1->bIsVirtualSource != false)) {
    pFVar2 = *(ForAnyElementType **)this;
    if (((FLiveLinkCollectionSourceItem *)pFVar2->Data <= param_1) &&
       (param_1 < (FLiveLinkCollectionSourceItem *)
                  (&((FLiveLinkCollectionSourceItem *)pFVar2->Data)->Guid +
                  *(int *)((longlong)&pFVar2[1].Data + 4)))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    uVar5 = *(undefined8 *)&(param_1->Guid).C;
    pFVar3 = pFVar2->Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10) = *(undefined8 *)&param_1->Guid;
    *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = uVar5;
  }
  return;
}

// operator() @ 14d01a780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLiveLinkClient::PushSubjectFrameData_Internal'::__l70::<lambda_1>::operator()
          (void *this,FLiveLinkCollectionSourceItem *param_1,FLiveLinkCollectionSubjectItem *param_2
          )

{
  undefined8 *puVar1;
  UObject *pUVar2;
  FName FVar3;
  FLiveLinkSubject *pFVar4;
  FLiveLinkSubject *this_00;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  double *pdVar9;
  longlong lVar10;
  longlong lVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  longlong *plVar14;
  FFrameNumber local_res8 [2];
  undefined8 local_res10;
  UObject *local_res20;
  FLiveLinkSubjectKey local_158;
  FString local_140;
  FString local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  FName local_110;
  FString local_108;
  FString local_f8;
  FLiveLinkSubjectFrameData local_e8;
  FTimecode local_98 [4];
  
  pwVar13 = L"";
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_120 = *puVar1;
  uStack_118 = puVar1[1];
  local_110 = *(FName *)(puVar1 + 2);
  if (((param_1->Setting).Object == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar2 = (param_1->Setting).Object;
  FVar3.ComparisonIndex.Value = *(uint *)&pUVar2[4].field_0x10;
  FVar3.Number = *(uint *)&pUVar2[4].field_0x14;
  if (local_110 == FVar3) {
    plVar14 = (longlong *)(*(longlong *)((longlong)this + 8) + 0x18);
    pFVar4 = (param_2->LiveSubject).Ptr;
    if (pFVar4 != (FLiveLinkSubject *)0x0) {
      FStructOnScope::FStructOnScope((FStructOnScope *)&local_e8);
      FStructOnScope::FStructOnScope(&local_e8.FrameData.WrappedStruct);
      this_00 = (param_2->LiveSubject).Ptr;
      local_res20 = *(UObject **)&(param_2->Setting).Object[2].field_0x8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res20);
      }
      pdVar9 = (double *)
               (**(code **)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) + 0x18))();
      bVar8 = FLiveLinkSubject::EvaluateFrameAtWorldTime
                        (this_00,*pdVar9,(TSubclassOf<ULiveLinkRole>)&local_res20,&local_e8);
      if (bVar8) {
        lVar10 = (**(code **)(*plVar14 + 0x10))(plVar14);
        lVar11 = (**(code **)(*plVar14 + 0x10))(plVar14);
        local_res8[0].Value = *(int *)(lVar11 + 0x60);
        FTimecode::FromFrameNumber(local_98,local_res8,(FFrameRate *)(lVar10 + 0x68));
        if (5 < (byte)LogLiveLink._0_1_) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          (**(code **)(*plVar14 + 0x10))(plVar14);
          (**(code **)(*plVar14 + 0x10))(plVar14);
          (**(code **)(*plVar14 + 0x10))(plVar14);
          FTimecode::ToString(local_98,&local_108,false,false);
          ::FName::ToString(&(param_2->Key).SubjectName.Name,&local_130);
          ::FName::ToString(&local_110,&local_140);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
        }
        lVar10 = (**(code **)(*plVar14 + 0x10))(plVar14);
        uVar5 = *(undefined8 *)(lVar10 + 0x60);
        uVar7 = *(undefined8 *)(lVar10 + 0x68);
        lVar10 = (**(code **)(local_e8.FrameData.WrappedStruct._padding_ + 0x18))
                           (&local_e8.FrameData);
        *(undefined8 *)(lVar10 + 0x60) = uVar5;
        *(undefined8 *)(lVar10 + 0x68) = uVar7;
        lVar10 = (**(code **)(*plVar14 + 0x10))(plVar14);
        uVar5 = *(undefined8 *)(lVar10 + 0x68);
        lVar10 = (**(code **)(local_e8.FrameData.WrappedStruct._padding_ + 0x18))
                           (&local_e8.FrameData);
        *(undefined8 *)(lVar10 + 0x68) = uVar5;
        FLiveLinkClient::HandleSubjectRebroadcast
                  (*(FLiveLinkClient **)this,(ILiveLinkSubject *)pFVar4,&local_e8.FrameData);
      }
      else {
        pFVar12 = ::FName::ToString(&local_110,&local_f8);
        if ((pFVar12->Data).ArrayNum != 0) {
          pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
        local_158.Source.A = 0;
        local_158.Source.B = 0;
        local_158.Source.C = 0;
        local_158.Source.D = 0;
        local_158.SubjectName.Name.ComparisonIndex.Value = 0;
        local_158.SubjectName.Name.Number = 0;
        local_res10 = 0;
        FLiveLinkLog::Log_Internal<wchar_t_const_*>
                  (Warning,(FName)0x0,&local_158,
                   (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152a9bd20,pwVar13);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
      FStructOnScope::~FStructOnScope(&local_e8.FrameData.WrappedStruct);
      FStructOnScope::~FStructOnScope((FStructOnScope *)&local_e8);
    }
  }
  return;
}

// operator() @ 14d01afc0

void __thiscall
`FLiveLinkClient::BuildThisTicksSubjectSnapshot'::__l2::<lambda_2>::operator()
          (void *this,ULiveLinkVirtualSubject *param_1,FLiveLinkCollectionSourceItem *param_2,
          FLiveLinkCollectionSubjectItem *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  FName FVar7;
  UObject *pUVar8;
  FName FVar9;
  FLiveLinkClient *this_00;
  code *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  char cVar13;
  FLiveLinkSubjectKey *pFVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  longlong *plVar20;
  uint *puVar21;
  undefined1 local_118 [4];
  undefined8 local_114;
  undefined8 local_10c;
  int local_104;
  int local_100;
  undefined1 local_fc [20];
  longlong *local_e8;
  int iStack_e0;
  uint uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FLiveLinkSubjectName *local_88;
  FLiveLinkCollectionSubjectItem *local_80;
  undefined1 local_78 [52];
  undefined4 local_44;
  
  if (param_3->bEnabled == false) {
                    /* WARNING: Could not recover jumptable at 0x00014d01b375. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x20))(&param_1->_padding_);
    return;
  }
  if (((param_2->Setting).Object == (UObject *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                          ,0x67,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar16 = 0;
  local_114 = 0;
  if ((*(longlong *)&(param_2->Setting).Object[4].field_0x10 == 0) &&
     (local_10c = 0, (param_1->SyncSubject).Name == (FName)0x0)) {
LAB_14d01b2b3:
    (**(code **)(param_1->_padding_ + 0x10))(&param_1->_padding_);
    TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>::
    Emplace<FLiveLinkSubjectKey_const_&>
              (*(TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
                 **)((longlong)this + 0x10),(FLiveLinkSubjectKey *)local_fc,(bool *)param_3);
    cVar13 = (**(code **)(param_1->_padding_ + 0x40))(&param_1->_padding_);
    if (cVar13 != '\0') {
      this_00 = *(FLiveLinkClient **)this;
      pFVar14 = (FLiveLinkSubjectKey *)
                (**(code **)(param_1->_padding_ + 0x28))(&param_1->_padding_,local_78);
      FLiveLinkClient::BroadcastFrameDataUpdate
                (this_00,pFVar14,&(param_1->CurrentFrameSnapshot).FrameData);
    }
  }
  else if ((param_3->bEnabled != false) &&
          (cVar13 = (**(code **)(param_1->_padding_ + 0xa0))(&param_1->_padding_), cVar13 == '\0'))
  {
    plVar5 = *(longlong **)((longlong)this + 8);
    uStack_dc = 1;
    iVar3 = (int)plVar5[5];
    plVar1 = plVar5 + 2;
    local_c8 = 0;
    iStack_cc = iVar16;
    if (iVar3 != 0) {
      puVar21 = (uint *)plVar5[4];
      if ((uint *)plVar5[4] == (uint *)0x0) {
        puVar21 = (uint *)plVar1;
      }
      uVar19 = *puVar21;
      local_c8 = 0;
      iVar16 = 0;
      while (uVar19 == 0) {
        lVar15 = (longlong)iVar16;
        local_c8 = local_c8 + 0x20;
        iVar16 = iVar16 + 1;
        iStack_cc = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14d01b0fe;
        uVar19 = puVar21[lVar15 + 1];
      }
      uStack_dc = -uVar19 & uVar19;
      uVar2 = (ulonglong)uStack_dc * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_104 = (int)lVar15;
      iStack_cc = local_c8 + -1 + local_104;
      if (iVar3 < iStack_cc) {
        iStack_cc = iVar3;
      }
    }
LAB_14d01b0fe:
    uVar19 = (uint)plVar5[5];
    uStack_c4 = local_44;
    iStack_c0 = (int)plVar5[1] - *(int *)((longlong)plVar5 + 0x34);
    uVar18 = uVar19 & 0xffffffe0;
    TStack_b0._padding_ = CONCAT44(uStack_dc,iVar16);
    uStack_d0 = 0xffffffff;
    TStack_b0.CurrentBitIndex = iStack_cc;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar19 >> 5;
    TStack_b0._28_4_ = local_44;
    TStack_b0.BaseBitIndex = local_c8;
    uStack_90 = CONCAT44(uStack_bc,iStack_c0);
    local_fc._12_8_ = plVar5;
    local_e8 = plVar5;
    iStack_e0 = iVar16;
    local_d8 = plVar1;
    local_b8 = plVar5;
    TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
    if ((((int)uVar19 < 0) || (iVar3 < (int)uVar19)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar11 = local_fc._12_8_;
    uVar4 = (uint)plVar5[5];
    if (uVar19 != uVar4) {
      plVar20 = (longlong *)plVar5[4];
      if ((longlong *)plVar5[4] == (longlong *)0x0) {
        plVar20 = plVar1;
      }
      uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)((longlong)plVar20 + (longlong)iVar17 * 4);
      while (uVar19 == 0) {
        lVar15 = (longlong)iVar17;
        uVar18 = uVar18 + 0x20;
        iVar17 = iVar17 + 1;
        uVar19 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_14d01b210;
        uVar19 = *(uint *)((longlong)plVar20 + lVar15 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_100 = (int)lVar15;
      uVar19 = local_100 + -1 + uVar18;
      if ((int)uVar4 < (int)uVar19) {
        uVar19 = uVar4;
      }
    }
LAB_14d01b210:
    do {
      plVar5 = local_b8;
      if ((int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34) != (int)uStack_90) {
        local_118[0] = 0;
        `TSparseArray<TSparseSetElement<FLiveLinkSubjectKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
      }
      lVar15 = (longlong)TStack_b0.CurrentBitIndex;
      if (((TStack_b0.CurrentBitIndex == uVar19) &&
          (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) &&
         (plVar5 == (longlong *)uVar11)) break;
      lVar6 = *plVar5;
      if (((param_2->Setting).Object == (UObject *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                              ,0x67,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FVar7 = *(FName *)(lVar15 * 0x20 + 0x10 + lVar6);
      pUVar8 = (param_2->Setting).Object;
      FVar9.ComparisonIndex.Value = *(uint *)&pUVar8[4].field_0x10;
      FVar9.Number = *(uint *)&pUVar8[4].field_0x14;
      if ((FVar9 == FVar7) || ((param_1->SyncSubject).Name == FVar7)) goto LAB_14d01b2b3;
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    } while( true );
  }
  local_88 = &(param_3->Key).SubjectName;
  local_80 = param_3;
  TSet<TTuple<FLiveLinkSubjectName,FLiveLinkSubjectKey>,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FLiveLinkSubjectName_const_&,FLiveLinkSubjectKey_const_&>_>
            ((TSet<TTuple<FLiveLinkSubjectName,FLiveLinkSubjectKey>,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
              *)(*(longlong *)this + 0x68),
             (TPairInitializer<FLiveLinkSubjectName_const_&,FLiveLinkSubjectKey_const_&> *)
             (local_fc + 4),(bool *)&local_88);
  return;
}

// operator() @ 14d01b380

void __thiscall
`FLiveLinkClient::RebroadcastSubjects'::__l2::<lambda_2>::operator()
          (void *this,FLiveLinkSubject *param_1,FLiveLinkCollectionSourceItem *param_2,
          FLiveLinkCollectionSubjectItem *param_3)

{
  FName FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong64 uVar10;
  undefined8 uVar11;
  undefined1 local_res18 [16];
  FLiveLinkSubjectFrameData local_68;
  
  if (((param_2->Setting).Object == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((((param_2->Setting).Object[3].field_0x18 != '\0') && (param_3->bEnabled != false)) &&
     (cVar5 = (**(code **)(param_1->_padding_ + 0xa0))(param_1), cVar5 == '\0')) {
    uVar10 = CityHash64((char *)param_3,0x10);
    FVar1 = (param_3->Key).SubjectName.Name;
    uVar6 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    iVar7 = TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>::
            FindIndexByHash<FLiveLinkSubjectKey>
                      ((TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
                        *)((longlong)this + 8),(uVar6 + FVar1.Number) * 0xd + (int)uVar10,
                       &param_3->Key);
    if (iVar7 != -1) {
      iVar8 = ILiveLinkSubject::GetSnapshotFrameId((ILiveLinkSubject *)param_1);
      iVar7 = param_1->LastRebroadcastFrameId;
      iVar9 = ILiveLinkSubject::GetSnapshotFrameId((ILiveLinkSubject *)param_1);
      if ((iVar9 != iVar7) || (iVar8 == -1)) {
        FStructOnScope::FStructOnScope((FStructOnScope *)&local_68);
        FStructOnScope::FStructOnScope(&local_68.FrameData.WrappedStruct);
        lVar2 = param_1->_padding_;
        uVar11 = (**(code **)(lVar2 + 0x30))(param_1,local_res18);
        cVar5 = (**(code **)(lVar2 + 0x18))(param_1,uVar11,&local_68);
        if ((cVar5 != '\0') &&
           (bVar4 = FLiveLinkClient::HandleSubjectRebroadcast
                              (*(FLiveLinkClient **)this,
                               (ILiveLinkSubject *)(param_3->LiveSubject).Ptr,&local_68), bVar4)) {
          param_1->LastRebroadcastFrameId = iVar8;
        }
        FStructOnScope::~FStructOnScope(&local_68.FrameData.WrappedStruct);
        FStructOnScope::~FStructOnScope((FStructOnScope *)&local_68);
      }
    }
  }
  return;
}

// AddSource @ 14d021010

/* WARNING: Removing unreachable block (ram,0x00014d0213a8) */
/* WARNING: Removing unreachable block (ram,0x00014d021296) */

FGuid * __thiscall
FLiveLinkClient::AddSource
          (FLiveLinkClient *this,FGuid *__return_storage_ptr__,
          TSharedPtr<ILiveLinkSource,1> *param_1)

{
  int iVar1;
  FLiveLinkSourceCollection *this_00;
  ILiveLinkSource *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  FGuid *pFVar10;
  FLiveLinkCollectionSourceItem *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  longlong *plVar13;
  UClass *pUVar14;
  UPackage *pUVar15;
  ULiveLinkSourceSettings *this_01;
  FLiveLinkTimedDataInput *pFVar16;
  ULiveLinkSourceSettings *pUVar17;
  undefined1 local_res10 [8];
  FSharedReferencer<1> local_e8;
  undefined2 local_e0;
  undefined8 local_d8;
  FSharedReferencer<1> local_d0;
  TSharedPtr<ILiveLinkSource,1> local_c8;
  FLiveLinkCollectionSourceItem local_b8;
  FGuid local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FGuid local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (((this->Collection).Ptr == (FLiveLinkSourceCollection *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Collection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                         ,0x253,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FGuid *)(*pcVar5)();
    return pFVar10;
  }
  local_c8.Object = param_1->Object;
  this_00 = (this->Collection).Ptr;
  local_c8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar11 = FLiveLinkSourceCollection::FindSource(this_00,&local_c8);
  if (pFVar11 != (FLiveLinkCollectionSourceItem *)0x0) goto LAB_14d0213b0;
  pFVar10 = FGuid::NewGuid(&local_58);
  pIVar2 = param_1->Object;
  uVar6._0_4_ = pFVar10->A;
  uVar6._4_4_ = pFVar10->B;
  uVar7._0_4_ = pFVar10->C;
  uVar7._4_4_ = pFVar10->D;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  local_e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_e0 = 0;
  __return_storage_ptr__->A = (uint)uVar6;
  __return_storage_ptr__->B = uVar6._4_4_;
  __return_storage_ptr__->C = (uint)uVar7;
  __return_storage_ptr__->D = uVar7._4_4_;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = 0;
  uStack_40 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar12 = ::operator_new(0xa8);
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    local_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar16 = (FLiveLinkTimedDataInput *)&DAT_00000010;
  }
  else {
    local_78.A = __return_storage_ptr__->A;
    local_78.B = __return_storage_ptr__->B;
    local_78.C = __return_storage_ptr__->C;
    local_78.D = __return_storage_ptr__->D;
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFLiveLinkTimedDataInput___00_SharedPointerInternals__6B_
    ;
    FLiveLinkTimedDataInput::FLiveLinkTimedDataInput
              ((FLiveLinkTimedDataInput *)(pTVar12 + 1),this,&local_78);
    pFVar16 = (FLiveLinkTimedDataInput *)(pTVar12 + 1);
    if ((pFVar16 == (FLiveLinkTimedDataInput *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FGuid *)(*pcVar5)();
      return pFVar10;
    }
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    local_d0.ReferenceController = pTVar12;
  }
  FVar8.ReferenceController = local_d0.ReferenceController;
  local_d8 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_e8,&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  if ((param_1->Object == (ILiveLinkSource *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FGuid *)(*pcVar5)();
    return pFVar10;
  }
  plVar13 = (longlong *)
            (**(code **)((longlong)*param_1->Object + 0x58))(param_1->Object,local_res10);
  lVar4 = *plVar13;
  if ((lVar4 == 0) ||
     (pUVar14 = Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister(), pUVar14 == (UClass *)0x0))
  {
LAB_14d021239:
    pUVar14 = Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister();
  }
  else {
    iVar1 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar14->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((!bVar9) || (pUVar14 = (UClass *)*plVar13, pUVar14 == (UClass *)0x0)) goto LAB_14d021239;
  }
  pUVar15 = GetTransientPackage();
  this_01 = NewObject<ULiveLinkSourceSettings>
                      ((UObject *)pUVar15,pUVar14,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  pUVar17 = (ULiveLinkSourceSettings *)0x0;
  if (this_01 != (ULiveLinkSourceSettings *)0x0) {
    UObjectBase::AddRef((UObjectBase *)this_01);
    pUVar17 = this_01;
  }
  local_b8.TimedData.SharedReferenceCount.ReferenceController = local_e8.ReferenceController;
  local_b8.bPendingKill = (bool)(undefined1)local_e0;
  local_b8.bIsVirtualSource = (bool)local_e0._1_1_;
  local_e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b8.Guid._0_8_ = uVar6;
  local_b8.Guid._8_8_ = uVar7;
  local_b8.Setting.Object = (UObject *)pUVar17;
  local_b8.Source.Object = pIVar2;
  local_b8.Source.SharedReferenceCount.ReferenceController = pTVar3;
  local_b8.TimedData.Object = pFVar16;
  FLiveLinkSourceCollection::AddSource((this->Collection).Ptr,&local_b8);
  if ((param_1->Object == (ILiveLinkSource *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FGuid *)(*pcVar5)();
    return pFVar10;
  }
  local_68._0_4_ = __return_storage_ptr__->A;
  local_68._4_4_ = __return_storage_ptr__->B;
  uStack_60._0_4_ = __return_storage_ptr__->C;
  uStack_60._4_4_ = __return_storage_ptr__->D;
  (**(code **)((longlong)*param_1->Object + 8))(param_1->Object,this,&local_68);
  if ((param_1->Object == (ILiveLinkSource *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FGuid *)(*pcVar5)();
    return pFVar10;
  }
  (**(code **)((longlong)*param_1->Object + 0x10))(param_1->Object,pUVar17);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_14d0213b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// AddVirtualSubject @ 14d022550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FLiveLinkClient::AddVirtualSubject
          (FLiveLinkClient *this,FLiveLinkSubjectKey *param_1,
          TSubclassOf<ULiveLinkVirtualSubject> param_2)

{
  FName FVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  FName FVar7;
  UClass *pUVar8;
  FLiveLinkCollectionSourceItem *pFVar9;
  FLiveLinkCollectionSubjectItem *pFVar10;
  FString *pFVar11;
  UClass *pUVar12;
  UPackage *pUVar13;
  UClass *pUVar14;
  undefined8 uVar15;
  longlong *plVar16;
  wchar_t *pwVar17;
  bool bVar18;
  undefined1 auStack_188 [32];
  FName local_168;
  undefined8 uStack_160;
  FName local_158;
  FGuid local_148;
  FName local_138;
  FLiveLinkCollectionSubjectItem local_128;
  undefined1 local_e8 [128];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_188;
  bVar18 = false;
  if (((((this->Collection).Ptr != (FLiveLinkSourceCollection *)0x0) &&
       ((param_1->SubjectName).Name != (FName)0x0)) &&
      (lVar3 = *(longlong *)param_2.Class.field0_0x0, lVar3 != 0)) &&
     (pUVar8 = Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister(), pUVar8 != (UClass *)0x0)) {
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar8->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (*(longlong *)param_2.Class.field0_0x0 != 0)) {
      local_168.ComparisonIndex.Value = (param_1->Source).A;
      local_168.Number = (param_1->Source).B;
      uStack_160._0_4_ = (param_1->Source).C;
      uStack_160._4_4_ = (param_1->Source).D;
      pFVar9 = FLiveLinkSourceCollection::FindSource((this->Collection).Ptr,(FGuid *)&local_168);
      if ((pFVar9 == (FLiveLinkCollectionSourceItem *)0x0) || (pFVar9->bPendingKill != false)) {
        FLiveLinkLog::Warning<>((TCheckedFormatStringPrivate<wchar_t>)0x152a9c2d0);
      }
      else {
        local_168.ComparisonIndex.Value = (param_1->Source).A;
        local_168.Number = (param_1->Source).B;
        uStack_160._0_4_ = (param_1->Source).C;
        uStack_160._4_4_ = (param_1->Source).D;
        local_158 = (param_1->SubjectName).Name;
        pFVar10 = FLiveLinkSourceCollection::FindSubject
                            ((this->Collection).Ptr,(FLiveLinkSubjectKey *)&local_168);
        if ((pFVar10 == (FLiveLinkCollectionSubjectItem *)0x0) ||
           ((pFVar10->VirtualSubject).Object == (UObject *)0x0)) {
          lVar3 = *(longlong *)param_2.Class.field0_0x0;
          pUVar8 = (UClass *)0x0;
          local_168.ComparisonIndex.Value = 0;
          local_168.Number = 0;
          pUVar14 = pUVar8;
          if ((lVar3 != 0) &&
             (pUVar12 = Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister(),
             pUVar12 != (UClass *)0x0)) {
            iVar2 = (int)pUVar12->_padding_;
            if ((*(int *)(lVar3 + 0x38) < iVar2) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar12->_padding_)) {
              bVar18 = false;
            }
            else {
              bVar18 = true;
            }
            if (bVar18) {
              pUVar14 = *(UClass **)param_2.Class.field0_0x0;
            }
          }
          pUVar13 = GetTransientPackage();
          FVar1 = local_168;
          if (local_168 == (FName)0x0) {
            FObjectInitializer::AssertIfInConstructor
                      ((UObject *)pUVar13,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
          }
          pUVar12 = Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister();
          CheckIsClassChildOf_Internal(pUVar12,pUVar14);
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_e8,pUVar14);
          FVar7 = local_168;
          local_e8._48_8_ = (FObjectInstancingGraph *)0x0;
          local_e8._56_8_ = (UPackage *)0x0;
          local_168.ComparisonIndex = FVar1.ComparisonIndex.Value;
          local_168.Number = FVar1.Number;
          local_e8._16_4_ = local_168.ComparisonIndex.Value;
          local_e8._20_4_ = local_168.Number;
          local_e8._24_4_ = RF_NoFlags;
          local_e8._40_8_ = (UObject *)0x0;
          local_e8[0x20] = false;
          local_168 = FVar7;
          local_e8._8_8_ = pUVar13;
          pUVar14 = (UClass *)
                    StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_e8);
          if (local_e8._64_8_ != 0) {
            plVar16 = (longlong *)(local_e8 + 0x50);
            if ((longlong *)local_e8._104_8_ != (longlong *)0x0) {
              plVar16 = (longlong *)local_e8._104_8_;
            }
            (**(code **)(*plVar16 + 0x10))();
          }
          pFVar10 = FLiveLinkSourceCollection::FindEnabledSubject
                              ((this->Collection).Ptr,
                               (FLiveLinkSubjectName)(param_1->SubjectName).Name);
          uVar4._0_4_ = (param_1->Source).A;
          uVar4._4_4_ = (param_1->Source).B;
          uVar5._0_4_ = (param_1->Source).C;
          uVar5._4_4_ = (param_1->Source).D;
          FVar1 = (param_1->SubjectName).Name;
          if (pUVar14 != (UClass *)0x0) {
            UObjectBase::AddRef((UObjectBase *)pUVar14);
            pUVar8 = pUVar14;
          }
          lVar3 = pUVar14->_padding_;
          uVar15 = (**(code **)(lVar3 + 0x30))(&pUVar14->_padding_,&local_168);
          local_148._0_8_ = uVar4;
          local_148._8_8_ = uVar5;
          local_138 = FVar1;
          (**(code **)(lVar3 + 8))(&pUVar14->_padding_,&local_148,uVar15,this);
          local_128.Setting.Object = (UObject *)0x0;
          local_128.LiveSubject.Ptr = (FLiveLinkSubject *)0x0;
          local_128.bPendingKill = false;
          local_128.Key.Source._0_8_ = uVar4;
          local_128.Key.Source._8_8_ = uVar5;
          local_128.Key.SubjectName.Name = FVar1;
          local_128.bEnabled = pFVar10 == (FLiveLinkCollectionSubjectItem *)0x0;
          local_128.VirtualSubject.Object = (UObject *)pUVar8;
          FLiveLinkSourceCollection::AddSubject((this->Collection).Ptr,&local_128);
          bVar18 = true;
        }
        else {
          pFVar11 = ::FName::ToString(&(param_1->SubjectName).Name,(FString *)&local_168);
          if ((pFVar11->Data).ArrayNum == 0) {
            pwVar17 = L"";
          }
          else {
            pwVar17 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
          FLiveLinkLog::Warning<wchar_t_const_*>
                    ((TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152a9c350,pwVar17);
          if (local_168 != (FName)0x0) {
            FMemory::Free((void *)local_168);
          }
        }
      }
    }
  }
  return bVar18;
}

// AddVirtualSubjectSource @ 14d022850

/* WARNING: Removing unreachable block (ram,0x00014d022bd9) */
/* WARNING: Removing unreachable block (ram,0x00014d0229c6) */

FGuid * __thiscall
FLiveLinkClient::AddVirtualSubjectSource
          (FLiveLinkClient *this,FGuid *__return_storage_ptr__,FName param_1)

{
  FLiveLinkSourceCollection *this_00;
  FLiveLinkVirtualSubjectSource *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  FGuid *pFVar7;
  FLiveLinkCollectionSourceItem *pFVar8;
  TSharedRef<FLiveLinkVirtualSubjectSource,1> *pTVar9;
  UClass *pUVar10;
  UPackage *pUVar11;
  ULiveLinkVirtualSubjectSourceSettings *this_01;
  TReferenceControllerBase<1> *pTVar12;
  FString *pFVar13;
  atomic<int> *paVar14;
  wchar_t *pwVar15;
  FName local_res18;
  FLiveLinkTimedDataInput *local_res20;
  ULiveLinkVirtualSubjectSourceSettings *local_158;
  FSharedReferencer<1> local_148;
  FLiveLinkTimedDataInput *pFStack_140;
  FSharedReferencer<1> local_138;
  undefined2 local_130;
  undefined8 local_128;
  undefined8 local_120;
  FSharedReferencer<1> local_118;
  FLiveLinkSubjectKey local_110;
  TReferenceControllerBase<1> *local_f8;
  undefined8 local_f0;
  FSharedReferencer<1> local_e8 [2];
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  FLiveLinkCollectionSourceItem local_c8;
  TSharedRef<FLiveLinkVirtualSubjectSource,1> local_88;
  FGuid local_78;
  FString local_68;
  FGuid local_58;
  
  pwVar15 = L"";
  local_res18 = param_1;
  if (((this->Collection).Ptr == (FLiveLinkSourceCollection *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Collection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                         ,0x26f,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FGuid *)(*pcVar2)();
    return pFVar7;
  }
  this_00 = (this->Collection).Ptr;
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  pFVar8 = FLiveLinkSourceCollection::FindVirtualSource(this_00,local_res18);
  if (pFVar8 == (FLiveLinkCollectionSourceItem *)0x0) {
    pTVar9 = MakeShared<FLiveLinkVirtualSubjectSource,1>(&local_88);
    local_e8[0].ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar9->Object;
    if (local_e8[0].ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar14 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar14 = &(local_e8[0].ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar14 = (atomic<int>)((int)*paVar14 + 1);
      UNLOCK();
    }
    local_f8 = local_e8[0].ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    pFVar7 = FGuid::NewGuid(&local_58);
    local_158 = (ULiveLinkVirtualSubjectSourceSettings *)0x0;
    local_148.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFStack_140 = (FLiveLinkTimedDataInput *)0x0;
    local_138.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_130 = 0;
    uVar3._0_4_ = pFVar7->A;
    uVar3._4_4_ = pFVar7->B;
    uVar4._0_4_ = pFVar7->C;
    uVar4._4_4_ = pFVar7->D;
    __return_storage_ptr__->A = (uint)uVar3;
    __return_storage_ptr__->B = uVar3._4_4_;
    __return_storage_ptr__->C = (uint)uVar4;
    __return_storage_ptr__->D = uVar4._4_4_;
    if (local_e8[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar14 = (atomic<int>)((int)*paVar14 + 1);
      UNLOCK();
    }
    local_f0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_148,local_e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8[0].ReferenceController);
    pUVar10 = ULiveLinkVirtualSubjectSourceSettings::StaticClass();
    pUVar11 = GetTransientPackage();
    this_01 = NewObject<ULiveLinkVirtualSubjectSourceSettings>
                        ((UObject *)pUVar11,pUVar10,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                         (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    this_01->SourceName = local_res18;
    UObjectBase::AddRef((UObjectBase *)this_01);
    if (this_01 != (ULiveLinkVirtualSubjectSourceSettings *)0x0) {
      UObjectBase::AddRef((UObjectBase *)this_01);
      local_158 = this_01;
    }
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_01);
    local_130 = CONCAT11(1,(undefined1)local_130);
    pTVar12 = ::operator_new(0xa8);
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      local_118.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFStack_140 = (FLiveLinkTimedDataInput *)&DAT_00000010;
    }
    else {
      local_78.A = __return_storage_ptr__->A;
      local_78.B = __return_storage_ptr__->B;
      local_78.C = __return_storage_ptr__->C;
      local_78.D = __return_storage_ptr__->D;
      pTVar12->SharedReferenceCount = (atomic<int>)0x1;
      pTVar12->WeakReferenceCount = (atomic<int>)0x1;
      pTVar12->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFLiveLinkTimedDataInput___00_SharedPointerInternals__6B_
      ;
      FLiveLinkTimedDataInput::FLiveLinkTimedDataInput
                ((FLiveLinkTimedDataInput *)(pTVar12 + 1),this,&local_78);
      local_res20 = (FLiveLinkTimedDataInput *)(pTVar12 + 1);
      if ((local_res20 == (FLiveLinkTimedDataInput *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FGuid *)(*pcVar2)();
        return pFVar7;
      }
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
      pFStack_140 = local_res20;
      local_118.ReferenceController = pTVar12;
    }
    FVar5.ReferenceController = local_118.ReferenceController;
    local_120 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_138,&local_118);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    local_c8.Setting.Object = (UObject *)local_158;
    local_c8.Source.SharedReferenceCount.ReferenceController = local_148.ReferenceController;
    local_c8.TimedData.Object = pFStack_140;
    local_c8.TimedData.SharedReferenceCount.ReferenceController = local_138.ReferenceController;
    local_c8.bPendingKill = (bool)(undefined1)local_130;
    local_c8.bIsVirtualSource = (bool)local_130._1_1_;
    local_148.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_138.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFStack_140 = (FLiveLinkTimedDataInput *)0x0;
    local_c8.Guid._0_8_ = uVar3;
    local_c8.Guid._8_8_ = uVar4;
    local_c8.Source.Object = (ILiveLinkSource *)pFVar1;
    FLiveLinkSourceCollection::AddSource((this->Collection).Ptr,&local_c8);
    if ((pFVar1 == (FLiveLinkVirtualSubjectSource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FGuid *)(*pcVar2)();
      return pFVar7;
    }
    local_d8 = __return_storage_ptr__->A;
    uStack_d4 = __return_storage_ptr__->B;
    uStack_d0 = __return_storage_ptr__->C;
    uStack_cc = __return_storage_ptr__->D;
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,this,&local_d8);
    if ((pFVar1 == (FLiveLinkVirtualSubjectSource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FGuid *)(*pcVar2)();
      return pFVar7;
    }
    (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,this_01);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f8);
  }
  else {
    pFVar13 = ::FName::ToString(&local_res18,&local_68);
    if ((pFVar13->Data).ArrayNum != 0) {
      pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    local_110.Source.A = 0;
    local_110.Source.B = 0;
    local_110.Source.C = 0;
    local_110.Source.D = 0;
    local_110.SubjectName.Name.ComparisonIndex.Value = 0;
    local_110.SubjectName.Name.Number = 0;
    local_128 = 0;
    FLiveLinkLog::Log_Internal<wchar_t_const_*>
              (Warning,(FName)0x0,&local_110,
               (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152a9b280,pwVar15);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// BroadcastFrameDataUpdate @ 14d025260

void __thiscall
FLiveLinkClient::BroadcastFrameDataUpdate
          (FLiveLinkClient *this,FLiveLinkSubjectKey *param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FSubjectFramesReceivedHandles *pFVar1;
  FLiveLinkSubjectKey local_28;
  
  lpCriticalSection = &this->SubjectFrameReceivedHandleseCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = TMapBase<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,0>_>
             ::Find((TMapBase<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,0>_>
                     *)&this->SubjectFrameReceivedHandles,param_1);
    if (pFVar1 != (FSubjectFramesReceivedHandles *)0x0) {
      TMulticastDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
      ::Broadcast(&pFVar1->OnFrameDataReceived,param_2);
    }
    local_28.Source.A = 0;
    local_28.Source.B = 0;
    local_28.Source.C = 0;
    local_28.Source.D = 0;
    local_28.SubjectName.Name = UE::LiveLink::Private::ALL_SUBJECTS_DELEGATE_TOKEN;
    pFVar1 = TMapBase<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,0>_>
             ::Find((TMapBase<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,0>_>
                     *)&this->SubjectFrameReceivedHandles,&local_28);
    if (pFVar1 != (FSubjectFramesReceivedHandles *)0x0) {
      TMulticastDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
      ::Broadcast(&pFVar1->OnFrameDataReceived,param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00014d025307. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// BuildThisTicksSubjectSnapshot @ 14d027fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator> * __thiscall
FLiveLinkClient::BuildThisTicksSubjectSnapshot
          (FLiveLinkClient *this,
          TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,
          TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
          *param_1)

{
  ulonglong uVar1;
  undefined1 auStackY_d8 [32];
  code *local_a8;
  FLiveLinkClient **local_a0;
  FLiveLinkClient *local_98;
  TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator> *local_90;
  TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator> *local_88;
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  TSet<TTuple<FLiveLinkSubjectName,FLiveLinkSubjectKey>,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FLiveLinkSubjectName,FLiveLinkSubjectKey>,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
           *)&this->EnabledSubjects);
  local_68.MaxBits = 0x80;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  local_90 = (TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
              *)&local_78;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  local_a0 = &local_98;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLiveLinkClient::BuildThisTicksSubjectSnapshot'::__l2::<lambda_1>,void,FLiveLinkSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
             ::Call;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  __return_storage_ptr__->HashSize = 0;
  local_98 = this;
  local_88 = __return_storage_ptr__;
  ForEachLiveSubject(this,(TFunctionRef<void___cdecl(FLiveLinkSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&)>
                           *)&local_a8);
  local_a0 = &local_98;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLiveLinkClient::BuildThisTicksSubjectSnapshot'::__l2::<lambda_2>,void,ULiveLinkVirtualSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
             ::Call;
  local_98 = this;
  local_90 = param_1;
  local_88 = __return_storage_ptr__;
  ForEachVirtualSubject
            (this,(TFunctionRef<void___cdecl(ULiveLinkVirtualSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&)>
                   *)&local_a8);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar1 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return __return_storage_ptr__;
}

// CacheSubjectSettings @ 14d028e80

void __thiscall
FLiveLinkClient::CacheSubjectSettings
          (FLiveLinkClient *this,FLiveLinkSubjectKey *param_1,ULiveLinkSubjectSettings *param_2)

{
  return;
}

// CacheValues @ 14d028e90

void __thiscall FLiveLinkClient::CacheValues(FLiveLinkClient *this)

{
  return;
}

// ClearAllSubjectsFrames_AnyThread @ 14d029690

void __thiscall FLiveLinkClient::ClearAllSubjectsFrames_AnyThread(FLiveLinkClient *this)

{
  FLiveLinkSourceCollection *this_00;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  this_00 = (this->Collection).Ptr;
  if (this_00 != (FLiveLinkSourceCollection *)0x0) {
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FLiveLinkClient::ClearAllSubjectsFrames_AnyThread'::__l5::<lambda_1>,void,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
               ::Call;
    FLiveLinkSourceCollection::ForEachSubject
              (this_00,(TFunctionRef<void___cdecl(FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&)>
                        *)&local_18);
  }
  return;
}

// ClearOverrideStaticData_AnyThread @ 14d029840

void __thiscall
FLiveLinkClient::ClearOverrideStaticData_AnyThread
          (FLiveLinkClient *this,FLiveLinkSubjectKey *param_1)

{
  FLiveLinkCollectionSubjectItem *pFVar1;
  FLiveLinkSubjectKey local_28;
  
  local_28.Source.A = (param_1->Source).A;
  local_28.Source.B = (param_1->Source).B;
  local_28.Source.C = (param_1->Source).C;
  local_28.Source.D = (param_1->Source).D;
  local_28.SubjectName.Name = (param_1->SubjectName).Name;
  pFVar1 = FLiveLinkSourceCollection::FindSubject((this->Collection).Ptr,&local_28);
  if (pFVar1 != (FLiveLinkCollectionSubjectItem *)0x0) {
    LOCK();
    ((pFVar1->LiveSubject).Ptr)->bClearOverrideStaticData = (atomic<bool>)0x1;
    UNLOCK();
  }
  return;
}

// ClearSubjectsFrames_AnyThread @ 14d0298b0

void __thiscall
FLiveLinkClient::ClearSubjectsFrames_AnyThread(FLiveLinkClient *this,FLiveLinkSubjectKey *param_1)

{
  FLiveLinkSourceCollection *this_00;
  UObject *pUVar1;
  FLiveLinkCollectionSubjectItem *pFVar2;
  FLiveLinkSubject *pFVar3;
  FLiveLinkSubjectKey local_28;
  
  this_00 = (this->Collection).Ptr;
  if (this_00 != (FLiveLinkSourceCollection *)0x0) {
    local_28.Source.A = (param_1->Source).A;
    local_28.Source.B = (param_1->Source).B;
    local_28.Source.C = (param_1->Source).C;
    local_28.Source.D = (param_1->Source).D;
    local_28.SubjectName.Name = (param_1->SubjectName).Name;
    pFVar2 = FLiveLinkSourceCollection::FindSubject(this_00,&local_28);
    if (pFVar2 != (FLiveLinkCollectionSubjectItem *)0x0) {
      UE::FRecursiveMutex::Lock(&this_00->SubjectsLock);
      pUVar1 = (pFVar2->VirtualSubject).Object;
      if (pUVar1 == (UObject *)0x0) {
        pFVar3 = (pFVar2->LiveSubject).Ptr;
      }
      else {
        pFVar3 = (FLiveLinkSubject *)(pUVar1 + 1);
      }
      (**(code **)(pFVar3->_padding_ + 0x20))();
      UE::FRecursiveMutex::Unlock(&this_00->SubjectsLock);
    }
  }
  return;
}

// ClearSubjectsFrames_AnyThread @ 14d029930

void __thiscall
FLiveLinkClient::ClearSubjectsFrames_AnyThread(FLiveLinkClient *this,FLiveLinkSubjectName param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  FLiveLinkSubjectKey *pFVar1;
  FName local_res10 [3];
  
  local_res10[0] = param_1.Name;
  pFVar1 = TMapBase<FLiveLinkSubjectName,FLiveLinkSubjectKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>_>
           ::Find((TMapBase<FLiveLinkSubjectName,FLiveLinkSubjectKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>_>
                   *)&this->EnabledSubjects,(FLiveLinkSubjectName *)local_res10);
  if (pFVar1 != (FLiveLinkSubjectKey *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00014d029965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(this,pFVar1,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// CreateSource @ 14d036040

/* WARNING: Type propagation algorithm not settling */

bool __thiscall FLiveLinkClient::CreateSource(FLiveLinkClient *this,FLiveLinkSourcePreset *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ULiveLinkSourceSettings *pUVar6;
  UObject *pUVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  FLiveLinkCollectionSourceItem *pFVar12;
  UClass *pUVar13;
  TSharedRef<FLiveLinkVirtualSubjectSource,1> *pTVar14;
  UClass *pUVar15;
  FLiveLinkVirtualSubjectSource **ppFVar16;
  TReferenceControllerBase<1> *pTVar17;
  longlong *plVar18;
  FString *pFVar19;
  wchar_t *pwVar20;
  UPackage *pUVar21;
  FCopyPropertiesForUnrelatedObjectsParams *pFVar22;
  UClass *pUVar23;
  UClass *pUVar24;
  ForAnyElementType FVar25;
  FLiveLinkTimedDataInput *pFVar26;
  FSharedReferencer<1> FVar27;
  ForAnyElementType FVar28;
  FLiveLinkVirtualSubjectSource *pFVar29;
  FLiveLinkVirtualSubjectSource *local_238;
  FSharedReferencer<1> FStack_230;
  FGuid local_228;
  UObject *local_218;
  FLiveLinkVirtualSubjectSource *pFStack_210;
  TReferenceControllerBase<1> *local_208;
  FLiveLinkTimedDataInput *pFStack_200;
  FSharedReferencer<1> local_1f8;
  undefined2 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  FSharedReferencer<1> local_1c8;
  FLiveLinkSubjectKey local_1c0;
  FLiveLinkSubjectKey local_1a8;
  FLiveLinkSubjectKey local_190;
  FLiveLinkSubjectKey local_178;
  FName local_160;
  FName local_158;
  undefined8 local_150;
  FSharedReferencer<1> local_148;
  FString local_140;
  FString local_130;
  FLiveLinkCollectionSourceItem local_120;
  undefined1 local_e0 [8];
  FGuid local_d8;
  TSharedRef<FLiveLinkVirtualSubjectSource,1> local_c8;
  undefined1 local_b8 [8];
  TReferenceControllerBase<1> *local_b0;
  FGuid local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  TReferenceControllerBase<1> *pTStack_80;
  FCopyPropertiesForUnrelatedObjectsParams local_78;
  
  if (((this->Collection).Ptr == (FLiveLinkSourceCollection *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Collection",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                          ,0x290,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  if ((param_1->Settings).field0_0x0.DebugPtr == (ULiveLinkSourceSettings *)0x0) {
    local_1c0.Source.A = 0;
    local_1c0.Source.B = 0;
    local_1c0.Source.C = 0;
    local_1c0.Source.D = 0;
    local_1c0.SubjectName.Name.ComparisonIndex.Value = 0;
    local_1c0.SubjectName.Name.Number = 0;
    FLiveLinkLog::Log_Internal<>
              (Warning,(FName)0x0,&local_1c0,(TCheckedFormatStringPrivate<wchar_t>)0x152a9b320);
    return false;
  }
  uVar1 = (param_1->Guid).D;
  uVar2 = (param_1->Guid).A;
  uVar3 = (param_1->Guid).B;
  uVar4 = (param_1->Guid).C;
  if (((uVar2 == 0x4ed2dc4e && uVar1 == 0xa8b24a5a) && uVar3 == 0xcc5911ce) && uVar4 == 0x4af0635d)
  {
    local_1a8.Source.A = 0;
    local_1a8.Source.B = 0;
    local_1a8.Source.C = 0;
    local_1a8.Source.D = 0;
    local_1a8.SubjectName.Name.ComparisonIndex.Value = 0;
    local_1a8.SubjectName.Name.Number = 0;
    FLiveLinkLog::Log_Internal<>
              (Warning,(FName)0x0,&local_1a8,(TCheckedFormatStringPrivate<wchar_t>)0x152a9b390);
    return false;
  }
  if (((uVar1 == 0 && uVar3 == 0) && uVar2 == 0) && uVar4 == 0) {
    local_190.Source.A = 0;
    local_190.Source.B = 0;
    local_190.Source.C = 0;
    local_190.Source.D = 0;
    local_190.SubjectName.Name.ComparisonIndex.Value = 0;
    local_190.SubjectName.Name.Number = 0;
    FLiveLinkLog::Log_Internal<>
              (Warning,(FName)0x0,&local_190,(TCheckedFormatStringPrivate<wchar_t>)0x152a9b460);
    return false;
  }
  local_d8.A = (param_1->Guid).A;
  local_d8.B = (param_1->Guid).B;
  local_d8.C = (param_1->Guid).C;
  local_d8.D = (param_1->Guid).D;
  pFVar12 = FLiveLinkSourceCollection::FindSource((this->Collection).Ptr,&local_d8);
  if (pFVar12 != (FLiveLinkCollectionSourceItem *)0x0) {
    FLiveLinkLog::Warning<>((TCheckedFormatStringPrivate<wchar_t>)0x152a9b4c0);
    return false;
  }
  local_238 = (FLiveLinkVirtualSubjectSource *)0x0;
  FStack_230.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_208 = (TReferenceControllerBase<1> *)0x0;
  pFStack_200 = (FLiveLinkTimedDataInput *)0x0;
  pUVar24 = (UClass *)0x0;
  local_228.A = (param_1->Guid).A;
  local_228.B = (param_1->Guid).B;
  local_228.C = (param_1->Guid).C;
  local_228.D = (param_1->Guid).D;
  local_218 = (UObject *)0x0;
  pFStack_210 = (FLiveLinkVirtualSubjectSource *)0x0;
  local_1f8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1f0 = 0;
  pUVar13 = ULiveLinkVirtualSubjectSourceSettings::StaticClass();
  pUVar6 = (param_1->Settings).field0_0x0.DebugPtr;
  if ((UClass *)pUVar6->_padding_ != pUVar13) {
    pUVar13 = (pUVar6->Factory).Class.field0_0x0.DebugPtr;
    if ((pUVar13 == (UClass *)0x0) ||
       (pUVar23 = Z_Construct_UClass_ULiveLinkSourceFactory_NoRegister(), pUVar23 == (UClass *)0x0))
    {
LAB_14d03683f:
      pwVar20 = L"Create Source Failure: The factory is not defined.";
    }
    else {
      iVar5 = (int)pUVar23->_padding_;
      if (((int)pUVar13->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar23->_padding_)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if ((!bVar10) || ((pUVar6->Factory).Class.field0_0x0.DebugPtr == (UClass *)0x0))
      goto LAB_14d03683f;
      pUVar6 = (param_1->Settings).field0_0x0.DebugPtr;
      pUVar13 = (pUVar6->Factory).Class.field0_0x0.DebugPtr;
      pUVar23 = pUVar24;
      if ((pUVar13 != (UClass *)0x0) &&
         (pUVar15 = Z_Construct_UClass_ULiveLinkSourceFactory_NoRegister(), pUVar15 != (UClass *)0x0
         )) {
        iVar5 = (int)pUVar15->_padding_;
        if (((int)pUVar13->_padding_ < iVar5) ||
           ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
            &pUVar15->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) {
          pUVar23 = (pUVar6->Factory).Class.field0_0x0.DebugPtr;
        }
      }
      pUVar13 = Z_Construct_UClass_ULiveLinkSourceFactory_NoRegister();
      if (pUVar23 == pUVar13) goto LAB_14d03683f;
      pUVar6 = (param_1->Settings).field0_0x0.DebugPtr;
      pUVar13 = (pUVar6->Factory).Class.field0_0x0.DebugPtr;
      pUVar23 = pUVar24;
      if ((pUVar13 != (UClass *)0x0) &&
         (pUVar15 = Z_Construct_UClass_ULiveLinkSourceFactory_NoRegister(), pUVar15 != (UClass *)0x0
         )) {
        iVar5 = (int)pUVar15->_padding_;
        if (((int)pUVar13->_padding_ < iVar5) ||
           ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
            &pUVar15->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) {
          pUVar23 = (pUVar6->Factory).Class.field0_0x0.DebugPtr;
        }
      }
      if ((pUVar23->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar23);
      }
      pUVar7 = (pUVar23->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar13 = Z_Construct_UClass_ULiveLinkSourceFactory_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar5) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
           &pUVar13->_padding_)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Ret->IsA(T::StaticClass())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                              ,0x1181,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      ppFVar16 = (FLiveLinkVirtualSubjectSource **)
                 (**(code **)(*(longlong *)pUVar7 + 0x2e0))
                           (pUVar7,local_b8,
                            &((param_1->Settings).field0_0x0.DebugPtr)->ConnectionString);
      if (&local_238 != ppFVar16) {
        local_238 = *ppFVar16;
        *ppFVar16 = (FLiveLinkVirtualSubjectSource *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&FStack_230,(FSharedReferencer<1> *)(ppFVar16 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
      pFVar29 = local_238;
      if (local_238 != (FLiveLinkVirtualSubjectSource *)0x0) {
        pTVar17 = ::operator_new(0xa8);
        if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
          local_1c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar26 = (FLiveLinkTimedDataInput *)&DAT_00000010;
        }
        else {
          pTVar17->SharedReferenceCount = (atomic<int>)0x1;
          pTVar17->WeakReferenceCount = (atomic<int>)0x1;
          pTVar17->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFLiveLinkTimedDataInput___00_SharedPointerInternals__6B_
          ;
          local_a8.A = (param_1->Guid).A;
          local_a8.B = (param_1->Guid).B;
          local_a8.C = (param_1->Guid).C;
          local_a8.D = (param_1->Guid).D;
          FLiveLinkTimedDataInput::FLiveLinkTimedDataInput
                    ((FLiveLinkTimedDataInput *)(pTVar17 + 1),this,&local_a8);
          pFVar26 = (FLiveLinkTimedDataInput *)(pTVar17 + 1);
          if ((pFVar26 == (FLiveLinkTimedDataInput *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          LOCK();
          pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
          UNLOCK();
          local_1c8.ReferenceController = pTVar17;
        }
        FVar27.ReferenceController = local_1c8.ReferenceController;
        local_1d0 = 0;
        pFStack_200 = pFVar26;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1f8,&local_1c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1c8.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar27.ReferenceController);
        goto LAB_14d0364d3;
      }
      pwVar20 = L"Create Source Failure: The source couldn\'t be created by the factory.";
    }
    FLiveLinkLog::Warning<>((TCheckedFormatStringPrivate<wchar_t>)pwVar20);
    bVar10 = false;
    FVar27.ReferenceController = FStack_230.ReferenceController;
    goto LAB_14d036852;
  }
  pTVar14 = MakeShared<FLiveLinkVirtualSubjectSource,1>(&local_c8);
  local_148.ReferenceController = (pTVar14->SharedReferenceCount).ReferenceController;
  local_238 = pTVar14->Object;
  if (local_148.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_148.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_150 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_230,&local_148);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  local_1f0 = CONCAT11(1,(undefined1)local_1f0);
  pFVar29 = local_238;
LAB_14d0364d3:
  pTStack_80 = local_208;
  local_88 = pFStack_210;
  FVar27.ReferenceController = FStack_230.ReferenceController;
  if (FStack_230.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_230.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_230.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFStack_210 = local_238;
  local_208 = FStack_230.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  if ((pFVar29 == (FLiveLinkVirtualSubjectSource *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  plVar18 = (longlong *)(**(code **)(pFVar29->_padding_ + 0x58))(pFVar29,local_e0);
  lVar8 = *plVar18;
  if ((lVar8 == 0) ||
     (pUVar13 = Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister(), pUVar13 == (UClass *)0x0))
  {
LAB_14d0366ea:
    local_1d8 = 0;
    pUVar21 = GetTransientPackage();
    pUVar6 = (param_1->Settings).field0_0x0.DebugPtr;
    pUVar13 = Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister();
    pUVar23 = (UClass *)
              DuplicateObject_Internal(pUVar13,(UObject *)pUVar6,(UObject *)pUVar21,(FName)0x0);
    pUVar13 = pUVar24;
    if (pUVar23 != (UClass *)0x0) {
      UObjectBase::AddRef((UObjectBase *)pUVar23);
      pUVar13 = pUVar23;
    }
    pUVar24 = pUVar13;
    if (local_218 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_218);
    }
  }
  else {
    iVar5 = (int)pUVar13->_padding_;
    if ((*(int *)(lVar8 + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar13->_padding_)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (((!bVar10) || (pUVar13 = (UClass *)*plVar18, pUVar13 == (UClass *)0x0)) ||
       (pUVar13 == (UClass *)((param_1->Settings).field0_0x0.DebugPtr)->_padding_))
    goto LAB_14d0366ea;
    local_160 = (FName)pUVar13->_padding_;
    ::FName::ToString(&local_160,&local_130);
    FVar25.Data = (FScriptContainerElement *)L"";
    if (local_130.Data.ArrayNum != 0) {
      FVar25.Data = local_130.Data.AllocatorInstance.Data;
    }
    local_158 = *(FName *)(((param_1->Settings).field0_0x0.DebugPtr)->_padding_ + 0x18);
    ::FName::ToString(&local_158,&local_140);
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_140.Data.ArrayNum != 0) {
      FVar28.Data = local_140.Data.AllocatorInstance.Data;
    }
    pFVar19 = FText::ToString(&param_1->SourceType);
    if ((pFVar19->Data).ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
    }
    local_178.Source.A = 0;
    local_178.Source.B = 0;
    local_178.Source.C = 0;
    local_178.Source.D = 0;
    local_178.SubjectName.Name.ComparisonIndex.Value = 0;
    local_178.SubjectName.Name.Number = 0;
    local_1e8 = 0;
    FLiveLinkLog::Log_Internal<wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
              (Info,(FName)0x0,&local_178,
               (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
               )0x152a9b620,pwVar20,(wchar_t *)FVar28.Data,(wchar_t *)FVar25.Data);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    local_1e0 = 0;
    pUVar21 = GetTransientPackage();
    pUVar13 = (UClass *)
              NewObject<ULiveLinkSourceSettings>
                        ((UObject *)pUVar21,pUVar13,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                         (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pFVar22 = UEngine::FCopyPropertiesForUnrelatedObjectsParams::
              FCopyPropertiesForUnrelatedObjectsParams(&local_78);
    UEngine::CopyPropertiesForUnrelatedObjects
              ((UObject *)(param_1->Settings).field0_0x0.DebugPtr,(UObject *)pUVar13,pFVar22);
    if (pUVar13 != (UClass *)0x0) {
      UObjectBase::AddRef((UObjectBase *)pUVar13);
      pUVar24 = pUVar13;
    }
    if (local_218 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_218);
    }
  }
  local_120.Source.Object = (ILiveLinkSource *)pFStack_210;
  local_120.Source.SharedReferenceCount.ReferenceController = local_208;
  local_120.TimedData.Object = pFStack_200;
  local_120.TimedData.SharedReferenceCount.ReferenceController = local_1f8.ReferenceController;
  local_120.bPendingKill = (bool)(undefined1)local_1f0;
  local_120.bIsVirtualSource = (bool)local_1f0._1_1_;
  local_120.Guid.A = local_228.A;
  local_120.Guid.B = local_228.B;
  local_120.Guid.C = local_228.C;
  local_120.Guid.D = local_228.D;
  local_218 = (UObject *)0x0;
  local_208 = (TReferenceControllerBase<1> *)0x0;
  pFStack_210 = (FLiveLinkVirtualSubjectSource *)0x0;
  local_1f8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFStack_200 = (FLiveLinkTimedDataInput *)0x0;
  local_120.Setting.Object = (UObject *)pUVar24;
  FLiveLinkSourceCollection::AddSource((this->Collection).Ptr,&local_120);
  if ((pFVar29 == (FLiveLinkVirtualSubjectSource *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  local_98._0_4_ = (param_1->Guid).A;
  local_98._4_4_ = (param_1->Guid).B;
  uStack_90._0_4_ = (param_1->Guid).C;
  uStack_90._4_4_ = (param_1->Guid).D;
  (**(code **)(pFVar29->_padding_ + 8))(pFVar29,this,&local_98);
  if ((pFVar29 == (FLiveLinkVirtualSubjectSource *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  (**(code **)(pFVar29->_padding_ + 0x10))(pFVar29,pUVar13);
  bVar10 = true;
LAB_14d036852:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_208);
  if (local_218 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_218);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar27.ReferenceController);
  return bVar10;
}

// CreateSubject @ 14d0372e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FLiveLinkClient::CreateSubject(FLiveLinkClient *this,FLiveLinkSubjectPreset *param_1)

{
  FName FVar1;
  int iVar2;
  ULiveLinkVirtualSubject *pUVar3;
  ILiveLinkFrameInterpolationProcessorWorker *pIVar4;
  ULiveLinkSubjectSettings *pUVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 uVar11;
  UClass *pUVar12;
  FLiveLinkSubject *pFVar13;
  FLiveLinkCollectionSourceItem *pFVar14;
  FLiveLinkCollectionSubjectItem *pFVar15;
  UPackage *pUVar16;
  UClass *pUVar17;
  TObjectPtr<UClass>_u_0 TVar18;
  undefined8 uVar19;
  UObjectBase *this_00;
  UObject *pUVar20;
  wchar_t *pwVar21;
  longlong *plVar22;
  TObjectPtr<UClass>_u_0 TVar23;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  FLiveLinkSubjectKey local_290;
  TObjectPtr<UClass>_u_0 local_278;
  TSharedPtr<FLiveLinkTimedDataInput,1> local_270;
  FLiveLinkCollectionSubjectItem local_260;
  undefined1 local_228 [16];
  FGuid local_218;
  FLiveLinkSubjectKey local_208;
  FLiveLinkSubjectKey local_1e8;
  FGuid local_1c8;
  FName local_1b8;
  FLiveLinkSubjectKey local_1a8;
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  FName local_178;
  uint local_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  FName local_158;
  FLiveLinkSubjectKey local_148;
  FLiveLinkCollectionSubjectItem local_128;
  undefined1 local_e8 [128];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  if (((this->Collection).Ptr == (FLiveLinkSourceCollection *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Collection",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                          ,0x500,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  pUVar17 = (param_1->Role).Class.field0_0x0.DebugPtr;
  TVar23.DebugPtr = (UClass *)0x0;
  if ((pUVar17 != (UClass *)0x0) &&
     (pUVar12 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar12 != (UClass *)0x0)) {
    iVar2 = (int)pUVar12->_padding_;
    if (((int)pUVar17->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar2 * 8) !=
        &pUVar12->_padding_)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if ((bVar10) && (pUVar17 = (param_1->Role).Class.field0_0x0.DebugPtr, pUVar17 != (UClass *)0x0))
    {
      pUVar12 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
      TVar18.DebugPtr = TVar23.DebugPtr;
      if (pUVar12 != (UClass *)0x0) {
        iVar2 = (int)pUVar12->_padding_;
        if (((int)pUVar17->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar12->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) {
          TVar18.DebugPtr = (param_1->Role).Class.field0_0x0.DebugPtr;
        }
      }
      pFVar13 = (FLiveLinkSubject *)Z_Construct_UClass_ULiveLinkRole_NoRegister();
      if ((FLiveLinkSubject *)TVar18.DebugPtr != pFVar13) {
        if (((((param_1->Key).Source.C == 0x4af0635d && (param_1->Key).Source.D == 0xa8b24a5a) &&
             (param_1->Key).Source.B == 0xcc5911ce) && (param_1->Key).Source.A == 0x4ed2dc4e) &&
           ((param_1->VirtualSubject).field0_0x0.DebugPtr == (ULiveLinkVirtualSubject *)0x0)) {
          FLiveLinkLog::Warning<>((TCheckedFormatStringPrivate<wchar_t>)0x152a9c060);
          return false;
        }
        if ((param_1->Key).SubjectName.Name == (FName)0x0) {
          FLiveLinkLog::Warning<>((TCheckedFormatStringPrivate<wchar_t>)0x152a9c0e0);
          return false;
        }
        local_218.A = (param_1->Key).Source.A;
        local_218.B = (param_1->Key).Source.B;
        local_218.C = (param_1->Key).Source.C;
        local_218.D = (param_1->Key).Source.D;
        pFVar14 = FLiveLinkSourceCollection::FindSource((this->Collection).Ptr,&local_218);
        if ((pFVar14 != (FLiveLinkCollectionSourceItem *)0x0) && (pFVar14->bPendingKill == false)) {
          local_208.Source.A = (param_1->Key).Source.A;
          local_208.Source.B = (param_1->Key).Source.B;
          local_208.Source.C = (param_1->Key).Source.C;
          local_208.Source.D = (param_1->Key).Source.D;
          local_208.SubjectName.Name = (param_1->Key).SubjectName.Name;
          pFVar15 = FLiveLinkSourceCollection::FindSubject((this->Collection).Ptr,&local_208);
          if (pFVar15 != (FLiveLinkCollectionSubjectItem *)0x0) {
            if (pFVar15->bPendingKill == false) {
              pwVar21 = L"Create Subject Failure: The subject already exist.";
              goto LAB_14d0375a0;
            }
            local_1e8.Source.A = (param_1->Key).Source.A;
            local_1e8.Source.B = (param_1->Key).Source.B;
            local_1e8.Source.C = (param_1->Key).Source.C;
            local_1e8.Source.D = (param_1->Key).Source.D;
            local_1e8.SubjectName.Name = (param_1->Key).SubjectName.Name;
            FLiveLinkSourceCollection::RemoveSubject((this->Collection).Ptr,&local_1e8);
          }
          if ((param_1->VirtualSubject).field0_0x0.DebugPtr == (ULiveLinkVirtualSubject *)0x0) {
            if ((param_1->Settings).field0_0x0.DebugPtr == (ULiveLinkSubjectSettings *)0x0) {
              pUVar20 = GetTransientPackageAsObject();
              FObjectInitializer::AssertIfInConstructor
                        (pUVar20,
                         L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                        );
              pUVar17 = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
              FStaticConstructObjectParameters::FStaticConstructObjectParameters
                        ((FStaticConstructObjectParameters *)local_e8,pUVar17);
              local_e8._8_8_ = pUVar20;
              this_00 = (UObjectBase *)
                        StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_e8)
              ;
              if (local_e8._64_8_ != 0) {
                plVar22 = (longlong *)(local_e8 + 0x50);
                if ((longlong *)local_e8._104_8_ != (longlong *)0x0) {
                  plVar22 = (longlong *)local_e8._104_8_;
                }
                (**(code **)(*plVar22 + 0x10))();
              }
            }
            else {
              local_2a0 = 0;
              pUVar16 = GetTransientPackage();
              pUVar5 = (param_1->Settings).field0_0x0.DebugPtr;
              pUVar17 = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
              this_00 = (UObjectBase *)
                        DuplicateObject_Internal
                                  (pUVar17,(UObject *)pUVar5,(UObject *)pUVar16,(FName)0x0);
            }
            local_188 = (param_1->Key).Source.A;
            uStack_184 = (param_1->Key).Source.B;
            uStack_180 = (param_1->Key).Source.C;
            uStack_17c = (param_1->Key).Source.D;
            local_178 = (param_1->Key).SubjectName.Name;
            (**(code **)(this_00->_padding_ + 0x2b0))(this_00,&local_188);
            pFVar13 = ::operator_new(0x260);
            TVar18.DebugPtr = TVar23.DebugPtr;
            if (pFVar13 != (FLiveLinkSubject *)0x0) {
              local_270.Object = (pFVar14->TimedData).Object;
              local_270.SharedReferenceCount.ReferenceController =
                   (pFVar14->TimedData).SharedReferenceCount.ReferenceController;
              if (local_270.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_270.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_270.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              TVar18.DebugPtr = (UClass *)FLiveLinkSubject::FLiveLinkSubject(pFVar13,&local_270);
            }
            uVar19._0_4_ = (param_1->Key).Source.A;
            uVar19._4_4_ = (param_1->Key).Source.B;
            uVar9._0_4_ = (param_1->Key).Source.C;
            uVar9._4_4_ = (param_1->Key).Source.D;
            FVar1 = (param_1->Key).SubjectName.Name;
            UObjectBase::AddRef(this_00);
            pUVar17 = (param_1->Role).Class.field0_0x0.DebugPtr;
            pcVar6 = *(code **)((TVar18.DebugPtr)->_padding_ + 8);
            if ((pUVar17 != (UClass *)0x0) &&
               (pUVar12 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar12 != (UClass *)0x0))
            {
              iVar2 = (int)pUVar12->_padding_;
              if (((int)pUVar17->_padding_ < iVar2) ||
                 ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar2 * 8) !=
                  &pUVar12->_padding_)) {
                bVar10 = false;
              }
              else {
                bVar10 = true;
              }
              if (bVar10) {
                TVar23 = (TObjectPtr<UClass>_u_0)(param_1->Role).Class.field0_0x0.DebugPtr;
              }
            }
            local_278 = TVar23;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((FLiveLinkSubject *)TVar23.DebugPtr != (FLiveLinkSubject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
            }
            local_168 = (param_1->Key).Source.A;
            uStack_164 = (param_1->Key).Source.B;
            uStack_160 = (param_1->Key).Source.C;
            uStack_15c = (param_1->Key).Source.D;
            local_158 = (param_1->Key).SubjectName.Name;
            (*pcVar6)(TVar18.DebugPtr,&local_168,&local_278,this);
            local_260.bEnabled = false;
            local_260.bPendingKill = false;
            local_260.VirtualSubject.Object = (UObject *)0x0;
            local_260.Key.Source._0_8_ = uVar19;
            local_260.Key.Source._8_8_ = uVar9;
            local_260.Key.SubjectName.Name = FVar1;
            local_260.Setting.Object = (UObject *)this_00;
            local_260.LiveSubject.Ptr = (FLiveLinkSubject *)TVar18;
            FLiveLinkSourceCollection::AddSubject((this->Collection).Ptr,&local_260);
            local_148.Source.A = (param_1->Key).Source.A;
            local_148.Source.B = (param_1->Key).Source.B;
            local_148.Source.C = (param_1->Key).Source.C;
            local_148.Source.D = (param_1->Key).Source.D;
            local_148.SubjectName.Name = (param_1->Key).SubjectName.Name;
            FLiveLinkSourceCollection::SetSubjectEnabled
                      ((this->Collection).Ptr,&local_148,param_1->bEnabled);
          }
          else {
            local_2a8 = 0;
            pUVar16 = GetTransientPackage();
            pUVar3 = (param_1->VirtualSubject).field0_0x0.DebugPtr;
            pUVar17 = Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister();
            TVar18.DebugPtr =
                 (UClass *)
                 DuplicateObject_Internal(pUVar17,(UObject *)pUVar3,(UObject *)pUVar16,(FName)0x0);
            FVar1 = (param_1->Key).SubjectName.Name;
            uVar7._0_4_ = (param_1->Key).Source.A;
            uVar7._4_4_ = (param_1->Key).Source.B;
            uVar8._0_4_ = (param_1->Key).Source.C;
            uVar8._4_4_ = (param_1->Key).Source.D;
            if ((FLiveLinkSubject *)TVar18.DebugPtr != (FLiveLinkSubject *)0x0) {
              UObjectBase::AddRef((UObjectBase *)TVar18.DebugPtr);
              TVar23.DebugPtr = TVar18.DebugPtr;
            }
            pIVar4 = ((TSharedPtr<ILiveLinkFrameInterpolationProcessorWorker,1> *)
                     &(TVar18.DebugPtr)->_padding_)->Object;
            uVar19 = (*(code *)pIVar4[6])
                               ((TSharedPtr<ILiveLinkFrameInterpolationProcessorWorker,1> *)
                                &(TVar18.DebugPtr)->_padding_,local_228);
            local_1c8._0_8_ = uVar7;
            local_1c8._8_8_ = uVar8;
            local_1b8 = FVar1;
            (*(code *)pIVar4[1])
                      ((TSharedPtr<ILiveLinkFrameInterpolationProcessorWorker,1> *)
                       &(TVar18.DebugPtr)->_padding_,&local_1c8,uVar19,this);
            local_128.Setting.Object = (UObject *)0x0;
            local_128.LiveSubject.Ptr = (FLiveLinkSubject *)0x0;
            local_128.bEnabled = false;
            local_128.bPendingKill = false;
            local_128.Key.Source._0_8_ = uVar7;
            local_128.Key.Source._8_8_ = uVar8;
            local_128.Key.SubjectName.Name = FVar1;
            local_128.VirtualSubject.Object = (UObject *)TVar23;
            FLiveLinkSourceCollection::AddSubject((this->Collection).Ptr,&local_128);
            local_1a8.Source.A = (param_1->Key).Source.A;
            local_1a8.Source.B = (param_1->Key).Source.B;
            local_1a8.Source.C = (param_1->Key).Source.C;
            local_1a8.Source.D = (param_1->Key).Source.D;
            local_1a8.SubjectName.Name = (param_1->Key).SubjectName.Name;
            FLiveLinkSourceCollection::SetSubjectEnabled
                      ((this->Collection).Ptr,&local_1a8,param_1->bEnabled);
          }
          return true;
        }
        pwVar21 = L"Create Subject Failure: The source doesn\'t exist.";
LAB_14d0375a0:
        FLiveLinkLog::Warning<>((TCheckedFormatStringPrivate<wchar_t>)pwVar21);
        return false;
      }
    }
  }
  local_290.Source.A = 0;
  local_290.Source.B = 0;
  local_290.Source.C = 0;
  local_290.Source.D = 0;
  local_290.SubjectName.Name.ComparisonIndex.Value = 0;
  local_290.SubjectName.Name.Number = 0;
  local_298 = 0;
  FLiveLinkLog::Log_Internal<>
            (Warning,(FName)0x0,&local_290,(TCheckedFormatStringPrivate<wchar_t>)0x152a9bff0);
  return false;
}

// DoPendingWork @ 14d03a4e0

void __thiscall
FLiveLinkClient::DoPendingWork
          (FLiveLinkClient *this,
          TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FPendingSubjectStatic *pFVar5;
  FPendingSubjectFrame *pFVar6;
  FPendingSubjectStatic *pFVar7;
  FPendingSubjectFrame *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  if ((this->Collection).Ptr == (FLiveLinkSourceCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                       ,0x85,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FLiveLinkSourceCollection::RemovePendingKill((this->Collection).Ptr);
  lpCriticalSection = &this->PendingFramesCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = (this->SubjectStaticToPush).ArrayNum;
    pFVar5 = (FPendingSubjectStatic *)(this->SubjectStaticToPush).AllocatorInstance.Data;
    pFVar7 = pFVar5 + iVar2;
    while( true ) {
      if ((this->SubjectStaticToPush).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FLiveLinkClient::FPendingSubjectStatic,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar7) break;
      TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>::
      Emplace<FLiveLinkSubjectKey_const_&>
                (param_1,(FLiveLinkSubjectKey *)(local_res18 + 8),(bool *)pFVar5);
      PushSubjectStaticData_Internal(this,pFVar5);
      pFVar5 = pFVar5 + 1;
    }
    piVar1 = &(this->SubjectStaticToPush).ArrayMax;
    pFVar5 = (FPendingSubjectStatic *)(this->SubjectStaticToPush).AllocatorInstance.Data;
    iVar2 = (this->SubjectStaticToPush).ArrayNum;
    if ((this->SubjectStaticToPush).ArrayMax < 0) {
      DestructItems<FLiveLinkClient::FPendingSubjectStatic,int>(pFVar5,iVar2);
      (this->SubjectStaticToPush).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x98,8,0,&(this->SubjectStaticToPush).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FLiveLinkClient::FPendingSubjectStatic,int>(pFVar5,iVar2);
      (this->SubjectStaticToPush).ArrayNum = 0;
    }
    iVar2 = (this->SubjectFrameToPush).ArrayNum;
    pFVar6 = (FPendingSubjectFrame *)(this->SubjectFrameToPush).AllocatorInstance.Data;
    pFVar8 = pFVar6 + iVar2;
    while( true ) {
      if ((this->SubjectFrameToPush).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FLiveLinkClient::FPendingSubjectFrame,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar6 == pFVar8) break;
      TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>::
      Emplace<FLiveLinkSubjectKey_const_&>
                (param_1,(FLiveLinkSubjectKey *)&stack0xffffffffffffffb8,(bool *)pFVar6);
      PushSubjectFrameData_Internal(this,pFVar6);
      pFVar6 = pFVar6 + 1;
    }
    piVar1 = &(this->SubjectFrameToPush).ArrayMax;
    pFVar6 = (FPendingSubjectFrame *)(this->SubjectFrameToPush).AllocatorInstance.Data;
    iVar2 = (this->SubjectFrameToPush).ArrayNum;
    if ((this->SubjectFrameToPush).ArrayMax < 0) {
      DestructItems<FLiveLinkClient::FPendingSubjectFrame,int>(pFVar6,iVar2);
      (this->SubjectFrameToPush).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,0,&(this->SubjectFrameToPush).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FLiveLinkClient::FPendingSubjectFrame,int>(pFVar6,iVar2);
      (this->SubjectFrameToPush).ArrayNum = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014d03a6c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DoesSubjectSupportsRole_AnyThread @ 14d03a930

bool __thiscall
FLiveLinkClient::DoesSubjectSupportsRole_AnyThread
          (FLiveLinkClient *this,FLiveLinkSubjectKey *param_1,TSubclassOf<ULiveLinkRole> param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  undefined1 uVar3;
  FLiveLinkCollectionSubjectItem *pFVar4;
  FLiveLinkSubject *pFVar5;
  UObject *local_res8;
  FLiveLinkSubjectKey local_28;
  
  local_28.Source.A = (param_1->Source).A;
  local_28.Source.B = (param_1->Source).B;
  local_28.Source.C = (param_1->Source).C;
  local_28.Source.D = (param_1->Source).D;
  local_28.SubjectName.Name = (param_1->SubjectName).Name;
  pFVar4 = FLiveLinkSourceCollection::FindSubject((this->Collection).Ptr,&local_28);
  if (pFVar4 != (FLiveLinkCollectionSubjectItem *)0x0) {
    pUVar1 = (pFVar4->VirtualSubject).Object;
    if (pUVar1 == (UObject *)0x0) {
      pFVar5 = (pFVar4->LiveSubject).Ptr;
    }
    else {
      pFVar5 = (FLiveLinkSubject *)(pUVar1 + 1);
    }
    local_res8 = *(UObject **)param_2.Class.field0_0x0;
    pcVar2 = *(code **)(pFVar5->_padding_ + 0x38);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    uVar3 = (*pcVar2)(pFVar5,&local_res8);
    return (bool)uVar3;
  }
  return false;
}

// DoesSubjectSupportsRole_AnyThread @ 14d03a9d0

bool __thiscall
FLiveLinkClient::DoesSubjectSupportsRole_AnyThread
          (FLiveLinkClient *this,FLiveLinkSubjectName param_1,TSubclassOf<ULiveLinkRole> param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  undefined1 uVar3;
  FLiveLinkCollectionSubjectItem *pFVar4;
  FLiveLinkSubject *pFVar5;
  UObject *local_res8;
  
  pFVar4 = FLiveLinkSourceCollection::FindEnabledSubject((this->Collection).Ptr,param_1);
  if (pFVar4 != (FLiveLinkCollectionSubjectItem *)0x0) {
    pUVar1 = (pFVar4->VirtualSubject).Object;
    if (pUVar1 == (UObject *)0x0) {
      pFVar5 = (pFVar4->LiveSubject).Ptr;
    }
    else {
      pFVar5 = (FLiveLinkSubject *)(pUVar1 + 1);
    }
    local_res8 = *(UObject **)param_2.Class.field0_0x0;
    pcVar2 = *(code **)(pFVar5->_padding_ + 0x38);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    uVar3 = (*pcVar2)(pFVar5,&local_res8);
    return (bool)uVar3;
  }
  return false;
}

// EvaluateFrameAtSceneTime_AnyThread @ 14d03b880

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLiveLinkClient::EvaluateFrameAtSceneTime_AnyThread
          (FLiveLinkClient *this,FLiveLinkSubjectName param_1,FQualifiedFrameTime *param_2,
          TSubclassOf<ULiveLinkRole> param_3,FLiveLinkSubjectFrameData *param_4)

{
  int *piVar1;
  FLiveLinkSubject *this_00;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_LiveLink_EvaluateFrame> FVar9;
  FLiveLinkSubjectKey *pFVar10;
  FLiveLinkCollectionSubjectItem *pFVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  LARGE_INTEGER LVar12;
  undefined4 uVar13;
  UObject *pUVar14;
  LARGE_INTEGER local_res8;
  FName local_res10;
  undefined1 local_68 [16];
  FName local_58;
  LARGE_INTEGER local_48;
  
  uVar13 = 0;
  FVar9 = StatPtr_STAT_LiveLink_EvaluateFrame;
  local_res10 = param_1.Name;
  if (StatPtr_STAT_LiveLink_EvaluateFrame ==
      (FThreadSafeStaticStat<FStat_STAT_LiveLink_EvaluateFrame>)0x0) {
    pFVar8 = ::FName::FName((FName *)local_68,"STAT_LiveLink_EvaluateFrame");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_LiveLink_EvaluateFrame>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LiveLink_EvaluateFrame,*pFVar8,
                       L"LiveLink - EvaluateFrame","STATGROUP_LiveLink","STATCAT_Advanced",
                       L"Live Link",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar12 = *(LARGE_INTEGER *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_48.s.LowPart = 0;
  local_48.s.HighPart = 0;
  if ((LVar12.s.LowPart != 0) || (LVar12.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                   ,0x764);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar12;
      local_48 = LVar12;
      FThreadStats::AddMessage((FName)LVar12.s,CycleScopeStart);
      bVar5 = true;
      uVar13 = local_48._0_4_;
      goto LAB_14d03b9cd;
    }
  }
  bVar5 = false;
  LVar12 = local_48;
LAB_14d03b9cd:
  uVar7 = 0;
  pFVar10 = TMapBase<FLiveLinkSubjectName,FLiveLinkSubjectKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>_>
            ::Find((TMapBase<FLiveLinkSubjectName,FLiveLinkSubjectKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>_>
                    *)&this->EnabledSubjects,(FLiveLinkSubjectName *)&local_res10);
  if (pFVar10 == (FLiveLinkSubjectKey *)0x0) {
    if (5 < (byte)LogLiveLink._0_1_) {
      ::FName::ToString(&local_res10,(FString *)local_68);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
      if ((FName)local_68._0_8_ != (FName)0x0) {
        FMemory::Free((void *)local_68._0_8_);
      }
    }
  }
  else {
    local_68._0_4_ = (pFVar10->Source).A;
    local_68._4_4_ = (pFVar10->Source).B;
    local_68._8_4_ = (pFVar10->Source).C;
    local_68._12_4_ = (pFVar10->Source).D;
    local_58 = (pFVar10->SubjectName).Name;
    pFVar11 = FLiveLinkSourceCollection::FindSubject
                        ((this->Collection).Ptr,(FLiveLinkSubjectKey *)local_68);
    uVar7 = 0;
    if (pFVar11 != (FLiveLinkCollectionSubjectItem *)0x0) {
      this_00 = (pFVar11->LiveSubject).Ptr;
      local_res8 = *(LARGE_INTEGER *)param_3.Class.field0_0x0;
      if (this_00 == (FLiveLinkSubject *)0x0) {
        pUVar2 = (pFVar11->VirtualSubject).Object;
        pUVar14 = pUVar2 + 1;
        if (pUVar2 == (UObject *)0x0) {
          pUVar14 = (UObject *)0x0;
        }
        pcVar3 = *(code **)(*(longlong *)pUVar14 + 0x18);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((FName)local_res8.QuadPart != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res8);
        }
        uVar7 = (*pcVar3)(pUVar14,&local_res8);
      }
      else {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((FName)local_res8.QuadPart != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res8);
        }
        uVar7 = FLiveLinkSubject::EvaluateFrameAtSceneTime
                          (this_00,param_2,(TSubclassOf<ULiveLinkRole>)&local_res8,param_4);
      }
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && ((FName)LVar12.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_68._8_8_ = CONCAT44(LVar12.s.HighPart,uVar13) & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(&local_res8);
      local_68._0_8_ = local_res8.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(this_01,(FStatMessage *)local_68);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return (bool)uVar7;
}

// EvaluateFrameAtWorldTime_AnyThread @ 14d03c2b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLiveLinkClient::EvaluateFrameAtWorldTime_AnyThread
          (FLiveLinkClient *this,FLiveLinkSubjectName param_1,double param_2,
          TSubclassOf<ULiveLinkRole> param_3,FLiveLinkSubjectFrameData *param_4)

{
  int *piVar1;
  FLiveLinkSubject *this_00;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_LiveLink_EvaluateFrame> FVar9;
  FLiveLinkSubjectKey *pFVar10;
  FLiveLinkCollectionSubjectItem *pFVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  LARGE_INTEGER LVar12;
  undefined4 uVar13;
  UObject *pUVar14;
  LARGE_INTEGER local_res8;
  FName local_res10;
  undefined1 local_68 [16];
  FName local_58;
  LARGE_INTEGER local_48;
  
  uVar13 = 0;
  FVar9 = StatPtr_STAT_LiveLink_EvaluateFrame;
  local_res10 = param_1.Name;
  if (StatPtr_STAT_LiveLink_EvaluateFrame ==
      (FThreadSafeStaticStat<FStat_STAT_LiveLink_EvaluateFrame>)0x0) {
    pFVar8 = ::FName::FName((FName *)local_68,"STAT_LiveLink_EvaluateFrame");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_LiveLink_EvaluateFrame>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LiveLink_EvaluateFrame,*pFVar8,
                       L"LiveLink - EvaluateFrame","STATGROUP_LiveLink","STATCAT_Advanced",
                       L"Live Link",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar12 = *(LARGE_INTEGER *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_48.s.LowPart = 0;
  local_48.s.HighPart = 0;
  if ((LVar12.s.LowPart != 0) || (LVar12.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                   ,0x73a);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar12;
      local_48 = LVar12;
      FThreadStats::AddMessage((FName)LVar12.s,CycleScopeStart);
      bVar5 = true;
      uVar13 = local_48._0_4_;
      goto LAB_14d03c402;
    }
  }
  bVar5 = false;
  LVar12 = local_48;
LAB_14d03c402:
  uVar7 = 0;
  pFVar10 = TMapBase<FLiveLinkSubjectName,FLiveLinkSubjectKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>_>
            ::Find((TMapBase<FLiveLinkSubjectName,FLiveLinkSubjectKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>_>
                    *)&this->EnabledSubjects,(FLiveLinkSubjectName *)&local_res10);
  if (pFVar10 == (FLiveLinkSubjectKey *)0x0) {
    if (5 < (byte)LogLiveLink._0_1_) {
      ::FName::ToString(&local_res10,(FString *)local_68);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
      if ((FName)local_68._0_8_ != (FName)0x0) {
        FMemory::Free((void *)local_68._0_8_);
      }
    }
  }
  else {
    local_68._0_4_ = (pFVar10->Source).A;
    local_68._4_4_ = (pFVar10->Source).B;
    local_68._8_4_ = (pFVar10->Source).C;
    local_68._12_4_ = (pFVar10->Source).D;
    local_58 = (pFVar10->SubjectName).Name;
    pFVar11 = FLiveLinkSourceCollection::FindSubject
                        ((this->Collection).Ptr,(FLiveLinkSubjectKey *)local_68);
    uVar7 = 0;
    if (pFVar11 != (FLiveLinkCollectionSubjectItem *)0x0) {
      this_00 = (pFVar11->LiveSubject).Ptr;
      local_res8 = *(LARGE_INTEGER *)param_3.Class.field0_0x0;
      if (this_00 == (FLiveLinkSubject *)0x0) {
        pUVar2 = (pFVar11->VirtualSubject).Object;
        pUVar14 = pUVar2 + 1;
        if (pUVar2 == (UObject *)0x0) {
          pUVar14 = (UObject *)0x0;
        }
        pcVar3 = *(code **)(*(longlong *)pUVar14 + 0x18);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((FName)local_res8.QuadPart != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res8);
        }
        uVar7 = (*pcVar3)(pUVar14,&local_res8);
      }
      else {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((FName)local_res8.QuadPart != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res8);
        }
        uVar7 = FLiveLinkSubject::EvaluateFrameAtWorldTime
                          (this_00,param_2,(TSubclassOf<ULiveLinkRole>)&local_res8,param_4);
      }
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && ((FName)LVar12.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_68._8_8_ = CONCAT44(LVar12.s.HighPart,uVar13) & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(&local_res8);
      local_68._0_8_ = local_res8.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(this_01,(FStatMessage *)local_68);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return (bool)uVar7;
}

// EvaluateFrameFromSource_AnyThread @ 14d03c600

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLiveLinkClient::EvaluateFrameFromSource_AnyThread
          (FLiveLinkClient *this,FLiveLinkSubjectKey *param_1,TSubclassOf<ULiveLinkRole> param_2,
          FLiveLinkSubjectFrameData *param_3)

{
  int *piVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_LiveLink_EvaluateFrame> FVar9;
  FLiveLinkCollectionSubjectItem *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar11;
  FNameEntryId FVar12;
  FLiveLinkSubject *pFVar13;
  LARGE_INTEGER local_res8;
  FName local_res10;
  undefined1 local_58 [16];
  FName local_48;
  
  FVar12.Value = 0;
  FVar9 = StatPtr_STAT_LiveLink_EvaluateFrame;
  if (StatPtr_STAT_LiveLink_EvaluateFrame ==
      (FThreadSafeStaticStat<FStat_STAT_LiveLink_EvaluateFrame>)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"STAT_LiveLink_EvaluateFrame");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_LiveLink_EvaluateFrame>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LiveLink_EvaluateFrame,*pFVar8,
                       L"LiveLink - EvaluateFrame","STATGROUP_LiveLink","STATCAT_Advanced",
                       L"Live Link",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar11 = *(LARGE_INTEGER *)FVar9;
  bVar4 = false;
  bVar6 = false;
  if ((LVar11.s.LowPart != 0) || (LVar11.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                   ,0x6f7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar11;
      FThreadStats::AddMessage((FName)LVar11.s,CycleScopeStart);
      bVar5 = true;
      FVar12.Value = LVar11.s.LowPart;
      goto LAB_14d03c769;
    }
  }
  bVar5 = false;
  LVar11._0_4_ = 0;
  LVar11._4_4_ = 0;
LAB_14d03c769:
  local_58._0_8_ = *(undefined8 *)&param_1->Source;
  local_58._8_4_ = (param_1->Source).C;
  local_58._12_4_ = (param_1->Source).D;
  local_48 = (param_1->SubjectName).Name;
  pFVar10 = FLiveLinkSourceCollection::FindSubject
                      ((this->Collection).Ptr,(FLiveLinkSubjectKey *)local_58);
  if (pFVar10 == (FLiveLinkCollectionSubjectItem *)0x0) {
    uVar7 = 0;
  }
  else {
    pUVar2 = (pFVar10->VirtualSubject).Object;
    if (pUVar2 == (UObject *)0x0) {
      pFVar13 = (pFVar10->LiveSubject).Ptr;
    }
    else {
      pFVar13 = (FLiveLinkSubject *)(pUVar2 + 1);
    }
    local_res8 = *(LARGE_INTEGER *)param_2.Class.field0_0x0;
    pcVar3 = *(code **)(pFVar13->_padding_ + 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((FName)local_res8.QuadPart != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    uVar7 = (*pcVar3)(pFVar13,&local_res8);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && ((FName)LVar11.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58._8_8_ =
           CONCAT44(LVar11.s.HighPart,FVar12.Value) & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(&local_res8);
      local_58._0_8_ = local_res8.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return (bool)uVar7;
}

// EvaluateFrame_AnyThread @ 14d03c8e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLiveLinkClient::EvaluateFrame_AnyThread
          (FLiveLinkClient *this,FLiveLinkSubjectName param_1,TSubclassOf<ULiveLinkRole> param_2,
          FLiveLinkSubjectFrameData *param_3)

{
  int *piVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_LiveLink_EvaluateFrame> FVar9;
  FLiveLinkSubjectKey *pFVar10;
  FLiveLinkCollectionSubjectItem *pFVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar12;
  FLiveLinkSubject *pFVar13;
  undefined4 uVar14;
  LARGE_INTEGER local_res8;
  FName local_res10;
  undefined1 local_68 [16];
  FName local_58;
  LARGE_INTEGER local_48;
  
  uVar14 = 0;
  FVar9 = StatPtr_STAT_LiveLink_EvaluateFrame;
  local_res10 = param_1.Name;
  if (StatPtr_STAT_LiveLink_EvaluateFrame ==
      (FThreadSafeStaticStat<FStat_STAT_LiveLink_EvaluateFrame>)0x0) {
    pFVar8 = ::FName::FName((FName *)local_68,"STAT_LiveLink_EvaluateFrame");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_LiveLink_EvaluateFrame>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LiveLink_EvaluateFrame,*pFVar8,
                       L"LiveLink - EvaluateFrame","STATGROUP_LiveLink","STATCAT_Advanced",
                       L"Live Link",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar12 = *(LARGE_INTEGER *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_48.s.LowPart = 0;
  local_48.s.HighPart = 0;
  if ((LVar12.s.LowPart != 0) || (LVar12.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                   ,0x717);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar12;
      local_48 = LVar12;
      FThreadStats::AddMessage((FName)LVar12.s,CycleScopeStart);
      bVar5 = true;
      uVar14 = local_48._0_4_;
      goto LAB_14d03ca2d;
    }
  }
  bVar5 = false;
  LVar12 = local_48;
LAB_14d03ca2d:
  uVar7 = 0;
  pFVar10 = TMapBase<FLiveLinkSubjectName,FLiveLinkSubjectKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>_>
            ::Find((TMapBase<FLiveLinkSubjectName,FLiveLinkSubjectKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>_>
                    *)&this->EnabledSubjects,(FLiveLinkSubjectName *)&local_res10);
  if (pFVar10 == (FLiveLinkSubjectKey *)0x0) {
    if (5 < (byte)LogLiveLink._0_1_) {
      ::FName::ToString(&local_res10,(FString *)local_68);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
      if ((FName)local_68._0_8_ != (FName)0x0) {
        FMemory::Free((void *)local_68._0_8_);
      }
    }
  }
  else {
    local_68._0_4_ = (pFVar10->Source).A;
    local_68._4_4_ = (pFVar10->Source).B;
    local_68._8_4_ = (pFVar10->Source).C;
    local_68._12_4_ = (pFVar10->Source).D;
    local_58 = (pFVar10->SubjectName).Name;
    pFVar11 = FLiveLinkSourceCollection::FindSubject
                        ((this->Collection).Ptr,(FLiveLinkSubjectKey *)local_68);
    if (pFVar11 != (FLiveLinkCollectionSubjectItem *)0x0) {
      pUVar2 = (pFVar11->VirtualSubject).Object;
      if (pUVar2 == (UObject *)0x0) {
        pFVar13 = (pFVar11->LiveSubject).Ptr;
      }
      else {
        pFVar13 = (FLiveLinkSubject *)(pUVar2 + 1);
      }
      local_res8 = *(LARGE_INTEGER *)param_2.Class.field0_0x0;
      pcVar3 = *(code **)(pFVar13->_padding_ + 0x18);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((FName)local_res8.QuadPart != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      uVar7 = (*pcVar3)(pFVar13,&local_res8);
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && ((FName)LVar12.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68._8_8_ = CONCAT44(LVar12.s.HighPart,uVar14) & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(&local_res8);
      local_68._0_8_ = local_res8.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_68);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return (bool)uVar7;
}

// ForEachLiveSubject @ 14d042980

void __thiscall
FLiveLinkClient::ForEachLiveSubject
          (FLiveLinkClient *this,
          TFunctionRef<void___cdecl(FLiveLinkSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&)>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  
  if ((this->Collection).Ptr == (FLiveLinkSourceCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                       ,0x1fc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28 = *(undefined8 *)param_1;
  local_20 = *(undefined8 *)&param_1->field_0x8;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLiveLinkClient::ForEachLiveSubject'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
             ::Call;
  FLiveLinkSourceCollection::ForEachSubject
            ((this->Collection).Ptr,
             (TFunctionRef<void___cdecl(FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&)>
              *)&local_18);
  return;
}

// ForEachVirtualSubject @ 14d042f50

void __thiscall
FLiveLinkClient::ForEachVirtualSubject
          (FLiveLinkClient *this,
          TFunctionRef<void___cdecl(ULiveLinkVirtualSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&)>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  
  if ((this->Collection).Ptr == (FLiveLinkSourceCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                       ,0x209,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28 = *(undefined8 *)param_1;
  local_20 = *(undefined8 *)&param_1->field_0x8;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLiveLinkClient::ForEachVirtualSubject'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
             ::Call;
  FLiveLinkSourceCollection::ForEachSubject
            ((this->Collection).Ptr,
             (TFunctionRef<void___cdecl(FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&)>
              *)&local_18);
  return;
}

// ForceTick @ 14d042fe0

void __thiscall FLiveLinkClient::ForceTick(FLiveLinkClient *this)

{
  Tick(this,Default);
  return;
}

// GetDisplayableSources @ 14d04b7b0

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
FLiveLinkClient::GetDisplayableSources
          (FLiveLinkClient *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_> *local_28;
  undefined1 local_20;
  code *local_18;
  TArray<FGuid,TSizedDefaultAllocator<32>_> **local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLiveLinkClient::GetDisplayableSources'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&>
             ::Call;
  local_28 = __return_storage_ptr__;
  local_20 = param_1;
  FLiveLinkSourceCollection::ForEachSource
            ((this->Collection).Ptr,
             (TFunctionRef<void___cdecl(FLiveLinkCollectionSourceItem_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetRebroadcastLiveLinkProvider @ 14d053370

TSharedPtr<ILiveLinkProvider,1> * __thiscall
FLiveLinkClient::GetRebroadcastLiveLinkProvider
          (FLiveLinkClient *this,TSharedPtr<ILiveLinkProvider,1> *__return_storage_ptr__)

{
  ILiveLinkProvider::CreateLiveLinkProvider
            (__return_storage_ptr__,&this->RebroadcastLiveLinkProviderName);
  return __return_storage_ptr__;
}

// GetRebroadcastName @ 14d0533a0

FName __thiscall
FLiveLinkClient::GetRebroadcastName(FLiveLinkClient *this,FLiveLinkSubjectKey *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  longlong in_R8;
  undefined1 local_res8 [8];
  
  uVar2 = *(undefined8 *)(in_R8 + 0x10);
  (param_1->Source).A = (int)uVar2;
  (param_1->Source).B = (int)((ulonglong)uVar2 >> 0x20);
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x170))();
  if (plVar3 != (longlong *)0x0) {
    pUVar4 = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(plVar3[2] + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar3[2] + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      pUVar4 = Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if (*(int *)(plVar3[2] + 0x38) < iVar1) {
        return (FName)param_1;
      }
      if ((longlong *)*(undefined1 **)(*(longlong *)(plVar3[2] + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_) {
        return (FName)param_1;
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x2c0))(plVar3,local_res8);
    }
    else {
      puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x2b8))(plVar3,local_res8);
    }
    uVar2 = *puVar5;
    (param_1->Source).A = (int)uVar2;
    (param_1->Source).B = (int)((ulonglong)uVar2 >> 0x20);
  }
  return (FName)param_1;
}

// GetSourceMachineName @ 14d055520

FText * __thiscall
FLiveLinkClient::GetSourceMachineName
          (FLiveLinkClient *this,FText *__return_storage_ptr__,FGuid *param_1)

{
  FLiveLinkSourceCollection *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  FText *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  pFVar1 = (this->Collection).Ptr;
  UE::FRecursiveMutex::Lock(&pFVar1->SourcesLock);
  uVar3 = param_1->A;
  uVar4 = param_1->B;
  uVar5 = param_1->C;
  uVar6 = param_1->D;
  pFVar9 = (pFVar1->Sources).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)(pFVar1->Sources).ArrayNum * 0x40;
  do {
    if (pFVar9 == pFVar10) {
      UE::FRecursiveMutex::Unlock(&pFVar1->SourcesLock);
LAB_14d0555b3:
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"TempLocTextLiveLink",L"InvalidSourceMachineName",
                 L"Invalid Source Machine Name");
      return __return_storage_ptr__;
    }
    if (((uVar6 == *(int *)(pFVar9 + 0xc) && uVar5 == *(int *)(pFVar9 + 8)) &&
        uVar4 == *(int *)(pFVar9 + 4)) && uVar3 == *(int *)pFVar9) {
      UE::FRecursiveMutex::Unlock(&pFVar1->SourcesLock);
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        if ((*(longlong *)(pFVar9 + 0x18) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FText *)(*pcVar2)();
          return pFVar8;
        }
        (**(code **)(**(longlong **)(pFVar9 + 0x18) + 0x40))
                  (*(longlong **)(pFVar9 + 0x18),__return_storage_ptr__);
        return __return_storage_ptr__;
      }
      goto LAB_14d0555b3;
    }
    pFVar9 = pFVar9 + 0x40;
  } while( true );
}

// GetSourceNameOverride @ 14d0557a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FLiveLinkClient::GetSourceNameOverride
          (FLiveLinkClient *this,FText *__return_storage_ptr__,FLiveLinkSubjectKey *param_1)

{
  int iVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  UClass *pUVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_e8;
  TRefCountPtr<ITextData> local_d8;
  uint local_d0;
  FText local_c8;
  FTextFormat local_b8;
  FText local_a8;
  FFormatArgumentValue local_98;
  undefined4 local_78;
  FText local_68;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  local_58 = (param_1->Source).A;
  uStack_54 = (param_1->Source).B;
  uStack_50 = (param_1->Source).C;
  uStack_4c = (param_1->Source).D;
  (**(code **)(this->_padding_ + 0x50))(local_58,&local_d8,&local_58);
  (__return_storage_ptr__->TextData).Reference = local_d8.Reference;
  if (local_d8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.Reference + 8))(local_d8.Reference,local_res8);
  }
  __return_storage_ptr__->Flags = local_d0;
  lVar5 = (**(code **)(this->_padding_ + 0x170))(this,param_1);
  if (lVar5 != 0) {
    pUVar6 = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8)
         == &pUVar6->_padding_)) && (*(longlong *)(lVar5 + 0x6c) != 0)) {
      local_c8.TextData.Reference = local_d8.Reference;
      if (local_d8.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.Reference + 8))(local_d8.Reference,local_res10);
      }
      local_c8.Flags = local_d0;
      pFVar7 = FText::FromName(&local_38,(FName *)(lVar5 + 0x6c));
      pFVar8 = FText::AsCultureInvariant(&local_48,L"{0} ({1})");
      pFVar9 = FTextFormat::FTextFormat(&local_28,pFVar8,Default);
      local_98.Type = Text;
      FText::FText((FText *)&local_98.TextValue,pFVar7);
      if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FText *)(*pcVar3)();
          return pFVar7;
        }
      }
      local_78 = 4;
      FText::FText(&local_68,&local_c8);
      if (local_68.TextData.Reference == (ITextData *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FText *)(*pcVar3)();
          return pFVar7;
        }
      }
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_e8.AllocatorInstance,2,&local_e8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_e8.AllocatorInstance.Data,&local_98,2);
      local_b8.TextFormatData.Object = (pFVar9->TextFormatData).Object;
      local_b8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_b8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_a8,&local_b8,&local_e8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
      if ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar2 = (pFVar7->TextData).Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      FText::operator=(__return_storage_ptr__,&local_a8);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
    }
  }
  if (local_d8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetSourcePreset @ 14d055a60

FLiveLinkSourcePreset * __thiscall
FLiveLinkClient::GetSourcePreset
          (FLiveLinkClient *this,FLiveLinkSourcePreset *__return_storage_ptr__,FGuid *param_1,
          UObject *param_2)

{
  FLiveLinkSourceCollection *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  FLiveLinkSourcePreset *pFVar12;
  ILiveLinkSource *pIVar13;
  FText *pFVar14;
  ITextData IVar15;
  UClass *pUVar16;
  ULiveLinkSourceSettings *pUVar17;
  ITextData *pIVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  int local_58;
  int iStack_54;
  int iStack_4c;
  FText local_48;
  ITextData *local_38 [2];
  
  if (((this->Collection).Ptr == (FLiveLinkSourceCollection *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Collection",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                          ,0x34d,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pFVar12 = (FLiveLinkSourcePreset *)(*pcVar3)();
    return pFVar12;
  }
  if (param_2 == (UObject *)0x0) {
    param_2 = (UObject *)GetTransientPackage();
  }
  (__return_storage_ptr__->Guid).A = 0;
  (__return_storage_ptr__->Guid).B = 0;
  (__return_storage_ptr__->Guid).C = 0;
  (__return_storage_ptr__->Guid).D = 0;
  (__return_storage_ptr__->Settings).field0_0x0.DebugPtr = (ULiveLinkSourceSettings *)0x0;
  FText::FText(&__return_storage_ptr__->SourceType);
  pFVar1 = (this->Collection).Ptr;
  UE::FRecursiveMutex::Lock(&pFVar1->SourcesLock);
  uVar4 = param_1->A;
  uVar5 = param_1->B;
  uVar6 = param_1->C;
  uVar7 = param_1->D;
  pFVar20 = (pFVar1->Sources).AllocatorInstance.Data;
  pFVar19 = pFVar20 + (longlong)(pFVar1->Sources).ArrayNum * 0x40;
  while( true ) {
    if (pFVar20 == pFVar19) {
      UE::FRecursiveMutex::Unlock(&pFVar1->SourcesLock);
      return __return_storage_ptr__;
    }
    if (((uVar7 == *(int *)(pFVar20 + 0xc) && uVar6 == *(int *)(pFVar20 + 8)) &&
        uVar5 == *(int *)(pFVar20 + 4)) && uVar4 == *(int *)pFVar20) break;
    pFVar20 = pFVar20 + 0x40;
  }
  UE::FRecursiveMutex::Unlock(&pFVar1->SourcesLock);
  if (pFVar20 == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  if (((*(int *)(pFVar20 + 8) == 0x4af0635d && *(int *)(pFVar20 + 0xc) == -0x574db5a6) &&
      *(int *)(pFVar20 + 4) == -0x33a6ee32) && *(int *)pFVar20 == 0x4ed2dc4e) {
    return __return_storage_ptr__;
  }
  if (*(longlong *)(pFVar20 + 0x10) == 0) {
    return __return_storage_ptr__;
  }
  if (*(longlong *)(pFVar20 + 0x18) == 0) {
    return __return_storage_ptr__;
  }
  uVar8 = *(undefined8 *)pFVar20;
  uVar9 = *(undefined8 *)(pFVar20 + 8);
  (__return_storage_ptr__->Guid).A = (int)uVar8;
  (__return_storage_ptr__->Guid).B = (int)((ulonglong)uVar8 >> 0x20);
  (__return_storage_ptr__->Guid).C = (int)uVar9;
  (__return_storage_ptr__->Guid).D = (int)((ulonglong)uVar9 >> 0x20);
  pIVar13 = TSharedPtr<ILiveLinkSource,1>::operator->
                      ((TSharedPtr<ILiveLinkSource,1> *)(pFVar20 + 0x18));
  cVar11 = (**(code **)((longlong)*pIVar13 + 0x20))(pIVar13);
  if (cVar11 == '\0') {
    pFVar14 = FText::GetEmpty();
    pIVar18 = (pFVar14->TextData).Reference;
    local_48.TextData.Reference = pIVar18;
    if (pIVar18 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar18 + 8))(pIVar18,local_res8);
    }
    local_48.Flags = pFVar14->Flags;
    FText::operator=(&__return_storage_ptr__->SourceType,&local_48);
    if (pIVar18 == (ITextData *)0x0) goto LAB_14d055c46;
    IVar15 = *pIVar18;
  }
  else {
    pIVar13 = TSharedPtr<ILiveLinkSource,1>::operator->
                        ((TSharedPtr<ILiveLinkSource,1> *)(pFVar20 + 0x18));
    pFVar14 = (FText *)(**(code **)((longlong)*pIVar13 + 0x38))(pIVar13,local_38);
    FText::operator=(&__return_storage_ptr__->SourceType,pFVar14);
    if (local_38[0] == (ITextData *)0x0) goto LAB_14d055c46;
    IVar15 = *local_38[0];
    pIVar18 = local_38[0];
  }
  (**(code **)((longlong)IVar15 + 0x10))(pIVar18);
LAB_14d055c46:
  pUVar2 = *(UObject **)(pFVar20 + 0x10);
  local_res10 = 0;
  pUVar16 = Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister();
  pUVar17 = (ULiveLinkSourceSettings *)DuplicateObject_Internal(pUVar16,pUVar2,param_2,(FName)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar17 != (ULiveLinkSourceSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  (__return_storage_ptr__->Settings).field0_0x0.DebugPtr = pUVar17;
  return __return_storage_ptr__;
}

// GetSourceSettings @ 14d055c90

ULiveLinkSourceSettings * __thiscall
FLiveLinkClient::GetSourceSettings(FLiveLinkClient *this,FGuid *param_1)

{
  FLiveLinkSourceCollection *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  pFVar1 = (this->Collection).Ptr;
  uVar2 = param_1->A;
  uVar3 = param_1->B;
  uVar4 = param_1->C;
  uVar5 = param_1->D;
  UE::FRecursiveMutex::Lock(&pFVar1->SourcesLock);
  pFVar7 = (pFVar1->Sources).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)(pFVar1->Sources).ArrayNum * 0x40;
  if (pFVar7 != pFVar6) {
    do {
      if (((uVar3 == *(int *)(pFVar7 + 4) && uVar4 == *(int *)(pFVar7 + 8)) &&
          uVar5 == *(int *)(pFVar7 + 0xc)) && uVar2 == *(int *)pFVar7) {
        UE::FRecursiveMutex::Unlock(&pFVar1->SourcesLock);
        if (pFVar7 == (FScriptContainerElement *)0x0) {
          return (ULiveLinkSourceSettings *)0x0;
        }
        return *(ULiveLinkSourceSettings **)(pFVar7 + 0x10);
      }
      pFVar7 = pFVar7 + 0x40;
    } while (pFVar7 != pFVar6);
  }
  UE::FRecursiveMutex::Unlock(&pFVar1->SourcesLock);
  return (ULiveLinkSourceSettings *)0x0;
}

// GetSourceStatus @ 14d055da0

FText * __thiscall
FLiveLinkClient::GetSourceStatus(FLiveLinkClient *this,FText *__return_storage_ptr__,FGuid *param_1)

{
  FLiveLinkSourceCollection *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  FText *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  pFVar1 = (this->Collection).Ptr;
  UE::FRecursiveMutex::Lock(&pFVar1->SourcesLock);
  uVar3 = param_1->A;
  uVar4 = param_1->B;
  uVar5 = param_1->C;
  uVar6 = param_1->D;
  pFVar9 = (pFVar1->Sources).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)(pFVar1->Sources).ArrayNum * 0x40;
  do {
    if (pFVar9 == pFVar10) {
      UE::FRecursiveMutex::Unlock(&pFVar1->SourcesLock);
LAB_14d055e33:
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"TempLocTextLiveLink",L"InvalidSourceStatus",
                 L"Invalid Source Status");
      return __return_storage_ptr__;
    }
    if (((uVar6 == *(int *)(pFVar9 + 0xc) && uVar5 == *(int *)(pFVar9 + 8)) &&
        uVar4 == *(int *)(pFVar9 + 4)) && uVar3 == *(int *)pFVar9) {
      UE::FRecursiveMutex::Unlock(&pFVar1->SourcesLock);
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        if ((*(longlong *)(pFVar9 + 0x18) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FText *)(*pcVar2)();
          return pFVar8;
        }
        (**(code **)(**(longlong **)(pFVar9 + 0x18) + 0x48))
                  (*(longlong **)(pFVar9 + 0x18),__return_storage_ptr__);
        return __return_storage_ptr__;
      }
      goto LAB_14d055e33;
    }
    pFVar9 = pFVar9 + 0x40;
  } while( true );
}

// GetSourceToolTip @ 14d055fe0

FText * __thiscall
FLiveLinkClient::GetSourceToolTip
          (FLiveLinkClient *this,FText *__return_storage_ptr__,FGuid *param_1)

{
  FLiveLinkSourceCollection *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  FText *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  pFVar1 = (this->Collection).Ptr;
  UE::FRecursiveMutex::Lock(&pFVar1->SourcesLock);
  uVar3 = param_1->A;
  uVar4 = param_1->B;
  uVar5 = param_1->C;
  uVar6 = param_1->D;
  pFVar9 = (pFVar1->Sources).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)(pFVar1->Sources).ArrayNum * 0x40;
  do {
    if (pFVar9 == pFVar10) {
      UE::FRecursiveMutex::Unlock(&pFVar1->SourcesLock);
LAB_14d056073:
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"TempLocTextLiveLink",L"InvalidSourceToolTip",
                 L"Invalid Source ToolTip");
      return __return_storage_ptr__;
    }
    if (((uVar6 == *(int *)(pFVar9 + 0xc) && uVar5 == *(int *)(pFVar9 + 8)) &&
        uVar4 == *(int *)(pFVar9 + 4)) && uVar3 == *(int *)pFVar9) {
      UE::FRecursiveMutex::Unlock(&pFVar1->SourcesLock);
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        if ((*(longlong *)(pFVar9 + 0x18) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FText *)(*pcVar2)();
          return pFVar8;
        }
        (**(code **)(**(longlong **)(pFVar9 + 0x18) + 0x50))
                  (*(longlong **)(pFVar9 + 0x18),__return_storage_ptr__);
        return __return_storage_ptr__;
      }
      goto LAB_14d056073;
    }
    pFVar9 = pFVar9 + 0x40;
  } while( true );
}

// GetSourceType @ 14d0561d0

FText * __thiscall
FLiveLinkClient::GetSourceType(FLiveLinkClient *this,FText *__return_storage_ptr__,FGuid *param_1)

{
  FLiveLinkSourceCollection *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  FText *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  pFVar1 = (this->Collection).Ptr;
  UE::FRecursiveMutex::Lock(&pFVar1->SourcesLock);
  uVar3 = param_1->A;
  uVar4 = param_1->B;
  uVar5 = param_1->C;
  uVar6 = param_1->D;
  pFVar9 = (pFVar1->Sources).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)(pFVar1->Sources).ArrayNum * 0x40;
  do {
    if (pFVar9 == pFVar10) {
      UE::FRecursiveMutex::Unlock(&pFVar1->SourcesLock);
LAB_14d056263:
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"TempLocTextLiveLink",L"InvalidSourceType",
                 L"Invalid Source Type");
      return __return_storage_ptr__;
    }
    if (((uVar6 == *(int *)(pFVar9 + 0xc) && uVar5 == *(int *)(pFVar9 + 8)) &&
        uVar4 == *(int *)(pFVar9 + 4)) && uVar3 == *(int *)pFVar9) {
      UE::FRecursiveMutex::Unlock(&pFVar1->SourcesLock);
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        if ((*(longlong *)(pFVar9 + 0x18) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FText *)(*pcVar2)();
          return pFVar8;
        }
        (**(code **)(**(longlong **)(pFVar9 + 0x18) + 0x38))
                  (*(longlong **)(pFVar9 + 0x18),__return_storage_ptr__);
        return __return_storage_ptr__;
      }
      goto LAB_14d056263;
    }
    pFVar9 = pFVar9 + 0x40;
  } while( true );
}

// GetSources @ 14d0564b0

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
FLiveLinkClient::GetSources
          (FLiveLinkClient *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *local_28;
  undefined1 local_20;
  code *local_18;
  TArray<FGuid,TSizedDefaultAllocator<32>_> **local_10;
  
  if ((this->Collection).Ptr == (FLiveLinkSourceCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                       ,0x32c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLiveLinkClient::GetSources'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&>
             ::Call;
  local_28 = __return_storage_ptr__;
  local_20 = param_1;
  FLiveLinkSourceCollection::ForEachSource
            ((this->Collection).Ptr,
             (TFunctionRef<void___cdecl(FLiveLinkCollectionSourceItem_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetSubjectDisplayName @ 14d0566c0

FText * __thiscall
FLiveLinkClient::GetSubjectDisplayName
          (FLiveLinkClient *this,FText *__return_storage_ptr__,FLiveLinkSubjectKey *param_1)

{
  int iVar1;
  FLiveLinkCollectionSubjectItem *pFVar2;
  UClass *pUVar3;
  FText *pFVar4;
  UObject *pUVar5;
  longlong *plVar6;
  FLiveLinkSubjectKey local_28;
  
  FText::FText(__return_storage_ptr__);
  local_28.Source._0_8_ = *(undefined8 *)&param_1->Source;
  local_28.Source.C = (param_1->Source).C;
  local_28.Source.D = (param_1->Source).D;
  local_28.SubjectName.Name = (param_1->SubjectName).Name;
  pFVar2 = FLiveLinkSourceCollection::FindSubject((this->Collection).Ptr,&local_28);
  if (pFVar2 == (FLiveLinkCollectionSubjectItem *)0x0) {
    return __return_storage_ptr__;
  }
  pUVar5 = (pFVar2->VirtualSubject).Object;
  if ((pUVar5 == (UObject *)0x0) && (pUVar5 = (pFVar2->Setting).Object, pUVar5 == (UObject *)0x0)) {
    plVar6 = (longlong *)&DAT_00000010;
  }
  else {
    pUVar3 = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
    plVar6 = (longlong *)&pUVar5->field_0x10;
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      pFVar4 = (FText *)(**(code **)(*(longlong *)pUVar5 + 0x2c0))(pUVar5,&local_28);
      goto LAB_14d056792;
    }
  }
  if (pUVar5 == (UObject *)0x0) {
    return __return_storage_ptr__;
  }
  pUVar3 = Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if (*(int *)(*plVar6 + 0x38) < iVar1) {
    return __return_storage_ptr__;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(*plVar6 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_) {
    return __return_storage_ptr__;
  }
  pFVar4 = (FText *)(**(code **)(*(longlong *)pUVar5 + 0x2b8))(pUVar5,&local_28);
LAB_14d056792:
  FText::operator=(__return_storage_ptr__,pFVar4);
  if ((longlong *)local_28.Source._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_28.Source._0_8_ + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetSubjectFrameTimes @ 14d0567d0

TArray<FLiveLinkTime,TSizedDefaultAllocator<32>_> * __thiscall
FLiveLinkClient::GetSubjectFrameTimes
          (FLiveLinkClient *this,
          TArray<FLiveLinkTime,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FLiveLinkSubjectKey *param_1)

{
  UObject *pUVar1;
  FLiveLinkSubject *pFVar2;
  FLiveLinkCollectionSubjectItem *pFVar3;
  FLiveLinkSubjectKey local_28;
  
  local_28.Source.A = (param_1->Source).A;
  local_28.Source.B = (param_1->Source).B;
  local_28.Source.C = (param_1->Source).C;
  local_28.Source.D = (param_1->Source).D;
  local_28.SubjectName.Name = (param_1->SubjectName).Name;
  pFVar3 = FLiveLinkSourceCollection::FindSubject((this->Collection).Ptr,&local_28);
  if (pFVar3 == (FLiveLinkCollectionSubjectItem *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar1 = (pFVar3->VirtualSubject).Object;
  if (pUVar1 != (UObject *)0x0) {
    (**(code **)(*(longlong *)(pUVar1 + 1) + 0x58))(pUVar1 + 1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  pFVar2 = (pFVar3->LiveSubject).Ptr;
  (**(code **)(pFVar2->_padding_ + 0x58))(pFVar2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSubjectFrameTimes @ 14d056850

TArray<FLiveLinkTime,TSizedDefaultAllocator<32>_> * __thiscall
FLiveLinkClient::GetSubjectFrameTimes
          (FLiveLinkClient *this,
          TArray<FLiveLinkTime,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FLiveLinkSubjectName param_1)

{
  UObject *pUVar1;
  FLiveLinkSubject *pFVar2;
  FLiveLinkCollectionSubjectItem *pFVar3;
  
  pFVar3 = FLiveLinkSourceCollection::FindEnabledSubject((this->Collection).Ptr,param_1);
  if (pFVar3 == (FLiveLinkCollectionSubjectItem *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar1 = (pFVar3->VirtualSubject).Object;
  if (pUVar1 != (UObject *)0x0) {
    (**(code **)(*(longlong *)(pUVar1 + 1) + 0x58))(pUVar1 + 1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  pFVar2 = (pFVar3->LiveSubject).Ptr;
  (**(code **)(pFVar2->_padding_ + 0x58))(pFVar2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSubjectPreset @ 14d056a20

FLiveLinkSubjectPreset * __thiscall
FLiveLinkClient::GetSubjectPreset
          (FLiveLinkClient *this,FLiveLinkSubjectPreset *__return_storage_ptr__,
          FLiveLinkSubjectKey *param_1,UObject *param_2)

{
  UObject *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FLiveLinkCollectionSubjectItem *pFVar6;
  undefined8 *puVar7;
  UClass *pUVar8;
  ULiveLinkVirtualSubject *pUVar9;
  ULiveLinkSubjectSettings *pUVar10;
  FLiveLinkSubject *pFVar11;
  FName local_res8;
  FLiveLinkSubjectKey local_38;
  
  if (param_2 == (UObject *)0x0) {
    param_2 = (UObject *)GetTransientPackage();
  }
  (__return_storage_ptr__->Key).Source.A = 0;
  (__return_storage_ptr__->Key).Source.B = 0;
  (__return_storage_ptr__->Key).Source.C = 0;
  (__return_storage_ptr__->Key).Source.D = 0;
  (__return_storage_ptr__->Key).SubjectName.Name = (FName)0x0;
  (__return_storage_ptr__->Role).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (__return_storage_ptr__->Settings).field0_0x0.DebugPtr = (ULiveLinkSubjectSettings *)0x0;
  (__return_storage_ptr__->VirtualSubject).field0_0x0.DebugPtr = (ULiveLinkVirtualSubject *)0x0;
  __return_storage_ptr__->bEnabled = false;
  local_38.Source.A = (param_1->Source).A;
  local_38.Source.B = (param_1->Source).B;
  local_38.Source.C = (param_1->Source).C;
  local_38.Source.D = (param_1->Source).D;
  local_38.SubjectName.Name = (param_1->SubjectName).Name;
  pFVar6 = FLiveLinkSourceCollection::FindSubject((this->Collection).Ptr,&local_38);
  if (pFVar6 != (FLiveLinkCollectionSubjectItem *)0x0) {
    uVar2 = (pFVar6->Key).Source.A;
    uVar3 = (pFVar6->Key).Source.B;
    uVar4 = (pFVar6->Key).Source.C;
    uVar5 = (pFVar6->Key).Source.D;
    (__return_storage_ptr__->Key).Source.A = uVar2;
    (__return_storage_ptr__->Key).Source.B = uVar3;
    (__return_storage_ptr__->Key).Source.C = uVar4;
    (__return_storage_ptr__->Key).Source.D = uVar5;
    (__return_storage_ptr__->Key).SubjectName.Name = (pFVar6->Key).SubjectName.Name;
    pUVar1 = (pFVar6->VirtualSubject).Object;
    if (pUVar1 == (UObject *)0x0) {
      pFVar11 = (pFVar6->LiveSubject).Ptr;
    }
    else {
      pFVar11 = (FLiveLinkSubject *)(pUVar1 + 1);
    }
    puVar7 = (undefined8 *)(**(code **)(pFVar11->_padding_ + 0x30))(uVar2,&local_res8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)*puVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)*puVar7);
    }
    (__return_storage_ptr__->Role).Class.field0_0x0.DebugPtr = (UClass *)*puVar7;
    __return_storage_ptr__->bEnabled = pFVar6->bEnabled;
    pUVar1 = (pFVar6->VirtualSubject).Object;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    if (pUVar1 == (UObject *)0x0) {
      pUVar1 = (pFVar6->Setting).Object;
      pUVar8 = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
      pUVar10 = (ULiveLinkSubjectSettings *)
                DuplicateObject_Internal(pUVar8,pUVar1,param_2,local_res8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar10 != (ULiveLinkSubjectSettings *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      (__return_storage_ptr__->Settings).field0_0x0.DebugPtr = pUVar10;
    }
    else {
      pUVar8 = Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister();
      pUVar9 = (ULiveLinkVirtualSubject *)DuplicateObject_Internal(pUVar8,pUVar1,param_2,(FName)0x0)
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar9 != (ULiveLinkVirtualSubject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (__return_storage_ptr__->VirtualSubject).field0_0x0.DebugPtr = pUVar9;
    }
  }
  return __return_storage_ptr__;
}

// GetSubjectRole_AnyThread @ 14d056b90

TSubclassOf<ULiveLinkRole> __thiscall
FLiveLinkClient::GetSubjectRole_AnyThread(FLiveLinkClient *this,FLiveLinkSubjectKey *param_1)

{
  UObject *pUVar1;
  FLiveLinkSubject *pFVar2;
  FLiveLinkCollectionSubjectItem *pFVar3;
  undefined8 *in_R8;
  FLiveLinkSubjectKey local_28;
  
  local_28.Source._0_8_ = *in_R8;
  local_28.Source._8_8_ = in_R8[1];
  local_28.SubjectName.Name = *(FName *)(in_R8 + 2);
  pFVar3 = FLiveLinkSourceCollection::FindSubject((this->Collection).Ptr,&local_28);
  if (pFVar3 == (FLiveLinkCollectionSubjectItem *)0x0) {
    (param_1->Source).A = 0;
    (param_1->Source).B = 0;
    return (TSubclassOf<ULiveLinkRole>)(TObjectPtr<UClass>)param_1;
  }
  pUVar1 = (pFVar3->VirtualSubject).Object;
  if (pUVar1 != (UObject *)0x0) {
    (**(code **)(*(longlong *)(pUVar1 + 1) + 0x30))(pUVar1 + 1,param_1);
    return (TSubclassOf<ULiveLinkRole>)(TObjectPtr<UClass>)param_1;
  }
  pFVar2 = (pFVar3->LiveSubject).Ptr;
  (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,param_1);
  return (TSubclassOf<ULiveLinkRole>)(TObjectPtr<UClass>)param_1;
}

// GetSubjectRole_AnyThread @ 14d056c10

TSubclassOf<ULiveLinkRole> __thiscall
FLiveLinkClient::GetSubjectRole_AnyThread(FLiveLinkClient *this,FLiveLinkSubjectName param_1)

{
  UObject *pUVar1;
  FLiveLinkSubject *pFVar2;
  FLiveLinkCollectionSubjectItem *pFVar3;
  FLiveLinkSubjectName in_R8;
  
  pFVar3 = FLiveLinkSourceCollection::FindEnabledSubject((this->Collection).Ptr,in_R8);
  if (pFVar3 == (FLiveLinkCollectionSubjectItem *)0x0) {
    *(undefined8 *)param_1.Name = 0;
    return (TSubclassOf<ULiveLinkRole>)param_1.Name;
  }
  pUVar1 = (pFVar3->VirtualSubject).Object;
  if (pUVar1 != (UObject *)0x0) {
    (**(code **)(*(longlong *)(pUVar1 + 1) + 0x30))(pUVar1 + 1,param_1.Name);
    return (TSubclassOf<ULiveLinkRole>)param_1.Name;
  }
  pFVar2 = (pFVar3->LiveSubject).Ptr;
  (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,param_1.Name);
  return (TSubclassOf<ULiveLinkRole>)param_1.Name;
}

// GetSubjectSettings @ 14d056c80

UObject * __thiscall
FLiveLinkClient::GetSubjectSettings(FLiveLinkClient *this,FLiveLinkSubjectKey *param_1)

{
  FLiveLinkCollectionSubjectItem *pFVar1;
  UObject *pUVar2;
  FLiveLinkSubjectKey local_28;
  
  local_28.Source.A = (param_1->Source).A;
  local_28.Source.B = (param_1->Source).B;
  local_28.Source.C = (param_1->Source).C;
  local_28.Source.D = (param_1->Source).D;
  local_28.SubjectName.Name = (param_1->SubjectName).Name;
  pFVar1 = FLiveLinkSourceCollection::FindSubject((this->Collection).Ptr,&local_28);
  pUVar2 = (UObject *)0x0;
  if ((pFVar1 != (FLiveLinkCollectionSubjectItem *)0x0) &&
     (pUVar2 = (pFVar1->VirtualSubject).Object, pUVar2 == (UObject *)0x0)) {
    return (pFVar1->Setting).Object;
  }
  return pUVar2;
}

// GetSubjectState @ 14d056cd0

ELiveLinkSubjectState __thiscall
FLiveLinkClient::GetSubjectState(FLiveLinkClient *this,FLiveLinkSubjectName param_1)

{
  FLiveLinkSubject *pFVar1;
  UObject *pUVar2;
  char cVar3;
  FLiveLinkSubjectKey *pFVar4;
  FLiveLinkCollectionSubjectItem *pFVar5;
  byte local_res8 [8];
  FName local_res10;
  byte *local_res18 [2];
  FLiveLinkSubjectKey local_28;
  
  local_res10 = param_1.Name;
  pFVar4 = TMapBase<FLiveLinkSubjectName,FLiveLinkSubjectKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>_>
           ::Find((TMapBase<FLiveLinkSubjectName,FLiveLinkSubjectKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>_>
                   *)&this->EnabledSubjects,(FLiveLinkSubjectName *)&local_res10);
  if (pFVar4 != (FLiveLinkSubjectKey *)0x0) {
    local_28.Source.A = (pFVar4->Source).A;
    local_28.Source.B = (pFVar4->Source).B;
    local_28.Source.C = (pFVar4->Source).C;
    local_28.Source.D = (pFVar4->Source).D;
    local_28.SubjectName.Name = (pFVar4->SubjectName).Name;
    pFVar5 = FLiveLinkSourceCollection::FindSubject((this->Collection).Ptr,&local_28);
    if (pFVar5 != (FLiveLinkCollectionSubjectItem *)0x0) {
      pFVar1 = (pFVar5->LiveSubject).Ptr;
      if (pFVar1 != (FLiveLinkSubject *)0x0) {
        cVar3 = (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1);
        if (cVar3 != '\0') {
          return Paused;
        }
        local_res8[0] = (**(code **)(pFVar1->_padding_ + 8))(&pFVar1->_padding_);
        if (local_res8[0] == 0) {
          return Connected;
        }
        if (local_res8[0] == 1) {
          return Unresponsive;
        }
        if (local_res8[0] == 2) {
          return Disconnected;
        }
        local_res18[0] = local_res8;
        `FLiveLinkClient::GetSubjectState'::__l34::<lambda_1>::operator()(local_res18);
        return Unknown;
      }
      pUVar2 = (pFVar5->VirtualSubject).Object;
      if ((pUVar2 != (UObject *)0x0) && (pFVar5->bEnabled != false)) {
        cVar3 = (**(code **)(*(longlong *)(pUVar2 + 1) + 0xa0))(pUVar2 + 1);
        if (cVar3 != '\0') {
          return Paused;
        }
        cVar3 = (**(code **)(*(longlong *)(pUVar2 + 1) + 0x40))(pUVar2 + 1);
        if (cVar3 != '\0') {
          return Connected;
        }
      }
    }
  }
  return InvalidOrDisabled;
}

// GetSubjectStaticData_AnyThread @ 14d056dd0

FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> * __thiscall
FLiveLinkClient::GetSubjectStaticData_AnyThread
          (FLiveLinkClient *this,FLiveLinkSubjectKey *param_1,bool param_2)

{
  FLiveLinkSubject *pFVar1;
  FLiveLinkCollectionSubjectItem *pFVar2;
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *pFVar3;
  FLiveLinkSubjectKey local_28;
  
  local_28.Source.A = (param_1->Source).A;
  local_28.Source.B = (param_1->Source).B;
  local_28.Source.C = (param_1->Source).C;
  local_28.Source.D = (param_1->Source).D;
  local_28.SubjectName.Name = (param_1->SubjectName).Name;
  pFVar2 = FLiveLinkSourceCollection::FindSubject((this->Collection).Ptr,&local_28);
  if ((pFVar2 != (FLiveLinkCollectionSubjectItem *)0x0) &&
     (pFVar1 = (pFVar2->LiveSubject).Ptr, pFVar1 != (FLiveLinkSubject *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014d056e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar3 = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)
             (**(code **)(pFVar1->_padding_ + 0x50))(pFVar1,param_2);
    return pFVar3;
  }
  return (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0;
}

// GetSubjectTranslatedRole_AnyThread @ 14d056e30

TSubclassOf<ULiveLinkRole> __thiscall
FLiveLinkClient::GetSubjectTranslatedRole_AnyThread
          (FLiveLinkClient *this,FLiveLinkSubjectKey *param_1)

{
  FLiveLinkSubject *pFVar1;
  code *pcVar2;
  bool bVar3;
  UClass *this_00;
  FLiveLinkCollectionSubjectItem *pFVar4;
  TSubclassOf<ULiveLinkRole> TVar5;
  ILiveLinkFrameTranslatorWorker *pIVar6;
  undefined8 *in_R8;
  TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *local_38;
  int local_30;
  FLiveLinkSubjectKey local_28;
  
  this_00 = ULiveLinkSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr[4].field_0x11 != '\0') {
    local_28.Source._0_8_ = *in_R8;
    local_28.Source._8_8_ = in_R8[1];
    local_28.SubjectName.Name = *(FName *)(in_R8 + 2);
    pFVar4 = FLiveLinkSourceCollection::FindSubject((this->Collection).Ptr,&local_28);
    if ((pFVar4 != (FLiveLinkCollectionSubjectItem *)0x0) &&
       (pFVar1 = (pFVar4->LiveSubject).Ptr, pFVar1 != (FLiveLinkSubject *)0x0)) {
      (**(code **)(pFVar1->_padding_ + 0x60))(pFVar1,&local_38);
      if (local_30 != 0) {
        if ((local_30 < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          TVar5.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar2)();
          return (TSubclassOf<ULiveLinkRole>)TVar5.Class.field0_0x0;
        }
        if (local_38->Object != (ILiveLinkFrameTranslatorWorker *)0x0) {
          if ((local_30 < 1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            TVar5.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar2)();
            return (TSubclassOf<ULiveLinkRole>)TVar5.Class.field0_0x0;
          }
          pIVar6 = TSharedPtr<ILiveLinkFrameTranslatorWorker,1>::operator->(local_38);
          (**(code **)((longlong)*pIVar6 + 8))(pIVar6,param_1);
          DestructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int>(local_38,local_30);
          if (local_38 == (TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *)0x0) {
            return (TSubclassOf<ULiveLinkRole>)(TObjectPtr<UClass>)param_1;
          }
          FMemory::Free(local_38);
          return (TSubclassOf<ULiveLinkRole>)(TObjectPtr<UClass>)param_1;
        }
      }
      DestructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int>(local_38,local_30);
      if (local_38 != (TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
  (param_1->Source).A = 0;
  (param_1->Source).B = 0;
  return (TSubclassOf<ULiveLinkRole>)(TObjectPtr<UClass>)param_1;
}

// GetSubjects @ 14d056fc0

TArray<FLiveLinkSubjectKey,TSizedDefaultAllocator<32>_> * __thiscall
FLiveLinkClient::GetSubjects
          (FLiveLinkClient *this,
          TArray<FLiveLinkSubjectKey,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1,bool param_2)

{
  int *piVar1;
  FRecursiveMutex *this_00;
  uint uVar2;
  FLiveLinkSourceCollection *pFVar3;
  code *local_48;
  FLiveLinkClient **local_40;
  FLiveLinkClient *local_38;
  undefined1 local_30;
  undefined1 local_2f;
  TArray<FLiveLinkSubjectKey,TSizedDefaultAllocator<32>_> *local_28;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  pFVar3 = (this->Collection).Ptr;
  this_00 = &pFVar3->SubjectsLock;
  UE::FRecursiveMutex::Lock(this_00);
  uVar2 = (pFVar3->Subjects).ArrayNum;
  UE::FRecursiveMutex::Unlock(this_00);
  if (-1 < (int)uVar2) {
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,uVar2,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`FLiveLinkClient::GetSubjects'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
               ::Call;
    local_38 = this;
    local_30 = param_1;
    local_2f = param_2;
    local_28 = __return_storage_ptr__;
    FLiveLinkSourceCollection::ForEachSubject
              ((this->Collection).Ptr,
               (TFunctionRef<void___cdecl(FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&)>
                *)&local_48);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// GetSubjectsSupportingRole @ 14d0570b0

TArray<FLiveLinkSubjectKey,TSizedDefaultAllocator<32>_> * __thiscall
FLiveLinkClient::GetSubjectsSupportingRole
          (FLiveLinkClient *this,
          TArray<FLiveLinkSubjectKey,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSubclassOf<ULiveLinkRole> param_1,bool param_2,bool param_3)

{
  FLiveLinkSourceCollection *this_00;
  code *local_38;
  FLiveLinkClient **local_30;
  FLiveLinkClient *local_28;
  TArray<FLiveLinkSubjectKey,TSizedDefaultAllocator<32>_> *local_20;
  UObject *local_18;
  undefined1 local_10;
  bool local_f;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (this->Collection).Ptr;
  local_18 = *(UObject **)param_1.Class.field0_0x0;
  local_28 = this;
  local_20 = __return_storage_ptr__;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_18);
  }
  local_f = param_3;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLiveLinkClient::GetSubjectsSupportingRole'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
             ::Call;
  local_10 = param_2;
  FLiveLinkSourceCollection::ForEachSubject
            (this_00,(TFunctionRef<void___cdecl(FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&)>
                      *)&local_38);
  return __return_storage_ptr__;
}

// GetTimeSyncData @ 14d0571f0

FLiveLinkSubjectTimeSyncData * __thiscall
FLiveLinkClient::GetTimeSyncData
          (FLiveLinkClient *this,FLiveLinkSubjectTimeSyncData *__return_storage_ptr__,
          FLiveLinkSubjectName param_1)

{
  FLiveLinkSubject *this_00;
  FLiveLinkCollectionSubjectItem *pFVar1;
  
  pFVar1 = FLiveLinkSourceCollection::FindEnabledSubject((this->Collection).Ptr,param_1);
  if ((pFVar1 != (FLiveLinkCollectionSubjectItem *)0x0) &&
     (this_00 = (pFVar1->LiveSubject).Ptr, this_00 != (FLiveLinkSubject *)0x0)) {
    FLiveLinkSubject::GetTimeSyncData(this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  *(undefined2 *)&__return_storage_ptr__->field_0x1 = 0;
  __return_storage_ptr__->field_0x3 = 0;
  __return_storage_ptr__->bIsValid = false;
  (__return_storage_ptr__->OldestSampleTime).FrameNumber = 0;
  (__return_storage_ptr__->OldestSampleTime).SubFrame = 0.0;
  (__return_storage_ptr__->NewestSampleTime).FrameNumber = 0;
  (__return_storage_ptr__->NewestSampleTime).SubFrame = 0.0;
  (__return_storage_ptr__->SampleFrameRate).Numerator = 60000;
  (__return_storage_ptr__->SampleFrameRate).Denominator = 1;
  return __return_storage_ptr__;
}

// GetVirtualSources @ 14d057ed0

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
FLiveLinkClient::GetVirtualSources
          (FLiveLinkClient *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *local_28;
  undefined1 local_20;
  code *local_18;
  TArray<FGuid,TSizedDefaultAllocator<32>_> **local_10;
  
  if ((this->Collection).Ptr == (FLiveLinkSourceCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                       ,0x33c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLiveLinkClient::GetVirtualSources'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&>
             ::Call;
  local_28 = __return_storage_ptr__;
  local_20 = param_1;
  FLiveLinkSourceCollection::ForEachSource
            ((this->Collection).Ptr,
             (TFunctionRef<void___cdecl(FLiveLinkCollectionSourceItem_&)> *)&local_18);
  return __return_storage_ptr__;
}

// HandleSubjectRebroadcast @ 14d059040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLiveLinkClient::HandleSubjectRebroadcast
          (FLiveLinkClient *this,ILiveLinkSubject *param_1,FLiveLinkSubjectFrameData *param_2)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  TSharedPtr<ILiveLinkProvider,1> *pTVar5;
  undefined8 *puVar6;
  FString *pFVar7;
  ILiveLinkProvider *pIVar8;
  bool *pbVar9;
  FName *pFVar10;
  undefined1 auStack_148 [32];
  TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
  *local_128;
  code *local_118 [2];
  undefined1 local_108 [16];
  FName local_f8;
  UObject *local_e8 [2];
  UObject *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_b8 [32];
  TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  cVar2 = (**(code **)((longlong)*param_1 + 0x70))(param_1);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)((longlong)*param_1 + 0x78))(param_1);
    if (cVar2 != '\0') {
      pFVar10 = (FName *)(**(code **)((longlong)*param_1 + 0x28))(param_1,local_b8);
      local_108._0_8_ = *pFVar10;
      local_108._8_8_ = pFVar10[1];
      local_f8 = pFVar10[2];
      RemoveRebroadcastedSubject(this,(FLiveLinkSubjectKey *)local_108);
      (**(code **)((longlong)*param_1 + 0x80))(param_1,0);
    }
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*param_1 + 0x50))(param_1,1);
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if ((lVar4 != 0) &&
       (lVar4 = (**(code **)((param_2->FrameData).WrappedStruct._padding_ + 0x10))
                          (&param_2->FrameData), lVar4 != 0)) {
      if ((this->RebroadcastLiveLinkProvider).Object == (ILiveLinkProvider *)0x0) {
        pTVar5 = (TSharedPtr<ILiveLinkProvider,1> *)
                 (**(code **)(this->_padding_ + 0x240))(this,local_108);
        TSharedPtr<ILiveLinkProvider,1>::operator=(&this->RebroadcastLiveLinkProvider,pTVar5);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_108._8_8_);
        if ((this->RebroadcastLiveLinkProvider).Object == (ILiveLinkProvider *)0x0) {
          if ((byte)LogLiveLink._0_1_ < 3) {
            return false;
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
          return false;
        }
      }
      (**(code **)((longlong)*param_1 + 0x30))(param_1,local_e8);
      (**(code **)((longlong)*param_1 + 0x28))(param_1,&local_d8);
      GetRebroadcastName(this,(FLiveLinkSubjectKey *)local_118);
      pcVar1 = *(code **)(this->_padding_ + 0x50);
      puVar6 = (undefined8 *)(**(code **)((longlong)*param_1 + 0x28))(param_1,local_b8);
      local_d8 = (UObject *)*puVar6;
      uStack_d0 = *(undefined4 *)(puVar6 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      (*pcVar1)(this,local_108,&local_d8);
      local_98.Pairs.Elements._44_4_ = 0x80;
      local_98.Pairs.Elements._0_8_ = 0;
      local_98.Pairs.Elements._8_8_ = 0;
      local_98.Pairs.Elements._32_8_ = 0;
      local_98.Pairs.Elements._40_4_ = 0;
      local_98.Pairs.Elements._52_4_ = 0;
      local_98.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.Pairs.HashSize = 0;
      local_98.Pairs.Elements._48_4_ = 0xffffffff;
      pFVar7 = FText::ToString((FText *)local_108);
      TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
      Emplace<FName_const_&,FString_const_&>
                (&local_98,&FLiveLinkMessageAnnotation::OriginalSourceAnnotation,pFVar7);
      cVar2 = (**(code **)((longlong)*param_1 + 0x78))(param_1);
      pcVar1 = local_118[0];
      if (cVar2 == '\0') {
        pIVar8 = TSharedPtr<ILiveLinkProvider,1>::operator->(&this->RebroadcastLiveLinkProvider);
        local_118[0] = *(code **)((longlong)*pIVar8 + 8);
        local_d8 = local_e8[0];
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8[0] != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_e8[0]);
        }
        local_128 = &local_98;
        (*local_118[0])(pIVar8,pcVar1,&local_d8,param_2);
        (**(code **)((longlong)*param_1 + 0x80))(param_1,1);
        pbVar9 = (bool *)(**(code **)((longlong)*param_1 + 0x28))(param_1,local_b8);
        TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>::
        Emplace<FLiveLinkSubjectKey>
                  (&this->RebroadcastedSubjects,(FLiveLinkSubjectKey *)local_118,pbVar9);
      }
      pIVar8 = TSharedPtr<ILiveLinkProvider,1>::operator->(&this->RebroadcastLiveLinkProvider);
      (**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,pcVar1,&param_2->FrameData,&local_98);
      local_98.Pairs.HashSize = 0;
      if (local_98.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Pairs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_98);
      if ((FName)local_108._0_8_ != (FName)0x0) {
        (**(code **)(*(longlong *)local_108._0_8_ + 0x10))();
      }
      return true;
    }
  }
  return false;
}

// HandleSubjectRebroadcast @ 14d059320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLiveLinkClient::HandleSubjectRebroadcast
          (FLiveLinkClient *this,ILiveLinkSubject *param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2)

{
  uint *puVar1;
  FName FVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  TSharedPtr<ILiveLinkProvider,1> *pTVar12;
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *pFVar13;
  ILiveLinkFrameTranslatorWorker *pIVar14;
  undefined8 uVar15;
  FName *pFVar16;
  undefined4 *puVar17;
  FString *pFVar18;
  ulonglong uVar19;
  ILiveLinkProvider *pIVar20;
  bool *pbVar21;
  undefined8 *puVar22;
  ForAnyElementType FVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  FName *_Src;
  FScriptContainerElement *pFVar27;
  ForElementType<unsigned_int> FVar28;
  uint uVar29;
  TSharedPtr<ILiveLinkProvider,1> *pTVar30;
  undefined1 auStackY_2f8 [32];
  TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *local_2c8;
  int local_2c0;
  uint local_2b8 [2];
  int local_2b0;
  uint uStack_2ac;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2a8;
  undefined4 local_2a0;
  int iStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  FName local_290;
  FStructOnScope local_288;
  undefined1 local_260 [16];
  FName local_250;
  TSharedPtr<ILiveLinkProvider,1> *local_248;
  FString local_240;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_228;
  FSparseArrayAllocationInfo local_208;
  FText local_1f8;
  FStructOnScope local_1e8;
  FStructOnScope local_1b8;
  FStructOnScope local_190;
  undefined1 local_168 [8];
  TReferenceControllerBase<1> *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FString local_148;
  FLiveLinkSubjectKey local_138;
  undefined1 local_118 [24];
  undefined1 local_100 [24];
  undefined1 local_e8 [24];
  undefined1 local_d0 [24];
  undefined1 local_b8 [32];
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  if ((param_1 == (ILiveLinkSubject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSubject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                         ,0x194,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  cVar7 = (**(code **)((longlong)*param_1 + 0x70))(param_1);
  if (cVar7 == '\0') {
    cVar7 = (**(code **)((longlong)*param_1 + 0x78))(param_1);
    if (cVar7 != '\0') {
      puVar22 = (undefined8 *)(**(code **)((longlong)*param_1 + 0x28))(param_1,local_b8);
      local_138.Source._0_8_ = *puVar22;
      local_138.Source._8_8_ = puVar22[1];
      local_138.SubjectName.Name = *(FName *)(puVar22 + 2);
      RemoveRebroadcastedSubject(this,&local_138);
      (**(code **)((longlong)*param_1 + 0x80))(param_1,0);
    }
    return false;
  }
  plVar10 = (longlong *)(**(code **)((longlong)*param_1 + 0x50))(param_1,1);
  lVar11 = (**(code **)(*plVar10 + 0x10))(plVar10);
  if (lVar11 == 0) {
    return false;
  }
  lVar11 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x10))(param_2);
  if (lVar11 == 0) {
    return false;
  }
  pTVar30 = &this->RebroadcastLiveLinkProvider;
  local_248 = pTVar30;
  if ((this->RebroadcastLiveLinkProvider).Object == (ILiveLinkProvider *)0x0) {
    pTVar12 = (TSharedPtr<ILiveLinkProvider,1> *)
              (**(code **)(this->_padding_ + 0x240))(this,local_168);
    TSharedPtr<ILiveLinkProvider,1>::operator=(pTVar30,pTVar12);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160);
    if (pTVar30->Object == (ILiveLinkProvider *)0x0) {
      if ((byte)LogLiveLink._0_1_ < 3) {
        return false;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
      return false;
    }
  }
  FStructOnScope::FStructOnScope(&local_288);
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::InitializeWith
            ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)&local_288,param_2);
  FStructOnScope::FStructOnScope(&local_1e8);
  pFVar13 = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)
            (**(code **)((longlong)*param_1 + 0x50))(param_1,1);
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::InitializeWith
            ((FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)&local_1e8,pFVar13);
  if (this->bPreProcessRebroadcastFrames != false) {
    (**(code **)((longlong)*param_1 + 0x88))(param_1,&local_1e8,&local_288);
  }
  (**(code **)((longlong)*param_1 + 0x30))(param_1,&local_290);
  _Src = (FName *)0x0;
  if (this->bTranslateRebroadcastFrames != false) {
    (**(code **)((longlong)*param_1 + 0x60))(param_1,&local_2c8);
    if (local_2c0 != 0) {
      if ((local_2c0 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (local_2c8->Object != (ILiveLinkFrameTranslatorWorker *)0x0) {
        FStructOnScope::FStructOnScope(&local_1b8);
        FStructOnScope::FStructOnScope(&local_190);
        if ((local_2c0 < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pIVar14 = TSharedPtr<ILiveLinkFrameTranslatorWorker,1>::operator->(local_2c8);
        pcVar4 = *(code **)((longlong)*pIVar14 + 0x10);
        uVar15 = (**(code **)((longlong)*param_1 + 0x50))(param_1,1);
        cVar7 = (*pcVar4)(pIVar14,uVar15,&local_288,&local_1b8);
        if (cVar7 != '\0') {
          if ((local_2c0 < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pIVar14 = TSharedPtr<ILiveLinkFrameTranslatorWorker,1>::operator->(local_2c8);
          pFVar16 = (FName *)(**(code **)((longlong)*pIVar14 + 8))(pIVar14,local_2b8);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (*pFVar16 != (FName)0x0)) {
            UE::GC::MarkAsReachable((UObject *)*pFVar16);
          }
          local_290 = *pFVar16;
          FStructOnScope::operator=(&local_1e8,&local_1b8);
          (**(code **)(local_288._padding_ + 0x48))(&local_288);
          local_288.ScriptStruct.WeakPtr = local_190.ScriptStruct.WeakPtr;
          local_288.SampleStructMemory = local_190.SampleStructMemory;
          local_288.OwnsMemory = local_190.OwnsMemory;
          local_190.OwnsMemory = false;
          (**(code **)(local_190._padding_ + 0x48))(&local_190);
        }
        FStructOnScope::~FStructOnScope(&local_190);
        FStructOnScope::~FStructOnScope(&local_1b8);
      }
    }
    DestructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int>(local_2c8,local_2c0);
    if (local_2c8 != (TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *)0x0) {
      FMemory::Free(local_2c8);
    }
  }
  (**(code **)((longlong)*param_1 + 0x28))(param_1,local_118);
  GetRebroadcastName(this,(FLiveLinkSubjectKey *)(local_260 + 8));
  pcVar4 = *(code **)(this->_padding_ + 0x50);
  puVar17 = (undefined4 *)(**(code **)((longlong)*param_1 + 0x28))(param_1,local_100);
  local_158 = *puVar17;
  uStack_154 = puVar17[1];
  uStack_150 = puVar17[2];
  uStack_14c = puVar17[3];
  (*pcVar4)(this,&local_1f8,&local_158);
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_98.AllocationFlags.NumBits = 0;
  local_98.AllocationFlags.MaxBits = 0x80;
  local_98.FirstFreeIndex = -1;
  local_98.NumFreeIndices = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  pFVar18 = FText::ToString(&local_1f8);
  if (local_98.NumFreeIndices == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)&local_98,&local_98.Data.ArrayNum,
                       &local_98.Data.ArrayMax);
    iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_98.AllocationFlags,1);
    FVar28 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
    if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar28 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    uVar29 = iVar9 >> 0x1f & 0x1f;
    iVar9 = iVar9 + uVar29;
    puVar1 = (uint *)((longlong)FVar28 + (longlong)(iVar9 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << (((byte)iVar9 & 0x1f) - (char)uVar29 & 0x1f));
    iVar9 = local_98.FirstFreeIndex;
  }
  else {
    local_98.NumFreeIndices = local_98.NumFreeIndices + -1;
    iVar9 = *(int *)(local_98.Data.AllocatorInstance.Data +
                    (longlong)local_98.FirstFreeIndex * 0x20 + 4);
    iVar8 = local_98.FirstFreeIndex;
    if (local_98.NumFreeIndices != 0) {
      *(undefined4 *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar9 * 0x20) = 0xffffffff;
    }
  }
  local_98.FirstFreeIndex = iVar9;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(&local_98,&local_208,iVar8);
  if (local_208.Pointer != (FName *)0x0) {
    *(FName *)local_208.Pointer = FLiveLinkMessageAnnotation::OriginalSourceAnnotation;
    ::FString::FString((FString *)((longlong)local_208.Pointer + 8),pFVar18);
    (((FName *)((longlong)local_208.Pointer + 0x18))->ComparisonIndex).Value = 0xffffffff;
    _Src = local_208.Pointer;
  }
  FVar2 = *_Src;
  local_2b8[0] = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  local_2b8[0] = local_2b8[0] + FVar2.Number;
  iVar8 = local_98.Data.ArrayNum;
  if ((local_98.Data.ArrayNum - local_98.NumFreeIndices != 1) &&
     (local_98.Data.ArrayNum != local_98.NumFreeIndices)) {
    FVar23.Data = local_60;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FVar23.Data = local_58.Data;
    }
    for (iVar9 = *(int *)(FVar23.Data + (ulonglong)(local_50 - 1 & local_2b8[0]) * 4); iVar9 != -1;
        iVar9 = *(int *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar9 * 0x20 + 0x18)) {
      if (*(FName *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar9 * 0x20) == *_Src) {
        if (iVar9 != -1) {
          pFVar27 = local_98.Data.AllocatorInstance.Data + (longlong)iVar9 * 0x20;
          pvVar3 = *(void **)(pFVar27 + 8);
          if (pvVar3 != (void *)0x0) {
            FMemory::Free(pvVar3);
          }
          memmove(pFVar27,_Src,0x18);
          TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized(&local_98,local_208.Index,1);
          local_208.Index = iVar9;
          iVar8 = local_98.Data.ArrayNum;
        }
        if (iVar9 != -1) goto LAB_14d059bba;
        break;
      }
    }
  }
  uVar29 = iVar8 - local_98.NumFreeIndices;
  uVar26 = 1;
  if (3 < uVar29) {
    uVar26 = (ulonglong)((uVar29 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar26 = (ulonglong)(uint)(1 << ((byte)lVar11 & 0x1f));
  }
  uVar25 = (uint)uVar26;
  if (((int)uVar29 < 1) || ((int)uVar25 <= (int)local_50)) {
    uVar29 = local_50 - 1 & local_2b8[0];
    _Src[3].Number = uVar29;
    FVar23.Data = local_60;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FVar23.Data = local_58.Data;
    }
    uVar26 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar29;
    _Src[3].ComparisonIndex.Value = *(uint *)(FVar23.Data + uVar26 * 4);
    *(int *)(FVar23.Data + uVar26 * 4) = local_208.Index;
    goto LAB_14d059bba;
  }
  local_50 = uVar25;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar25 != 0) {
    uVar29 = uVar25;
    if (uVar25 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar29 = 0;
        goto LAB_14d0599b4;
      }
    }
    else {
LAB_14d0599b4:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar29,4);
    }
    if (0 < (int)uVar25) {
      uVar24 = 0;
      do {
        FVar23.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar23.Data = local_58.Data;
        }
        uVar19 = uVar24 & (longlong)(int)uVar25 - 1U;
        uVar24 = uVar24 + 1;
        *(undefined4 *)(FVar23.Data + uVar19 * 4) = 0xffffffff;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_2a8 = &local_98.AllocationFlags;
    uStack_2ac = 1;
    local_2b0 = 0;
    iStack_29c = 0;
    iStack_298 = 0;
    if (local_98.AllocationFlags.NumBits != 0) {
      FVar28 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
      if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar28 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar29 = *(uint *)FVar28;
      iStack_298 = 0;
      local_2b0 = 0;
      while (uVar29 == 0) {
        iStack_298 = iStack_298 + 0x20;
        lVar11 = (longlong)local_2b0;
        local_2b0 = local_2b0 + 1;
        if ((int)(local_98.AllocationFlags.NumBits + -1 +
                 (local_98.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_2b0)
        goto LAB_14d059acf;
        uVar29 = *(uint *)((uchar *)((longlong)FVar28 + 4) + lVar11 * 4);
      }
      uStack_2ac = -uVar29 & uVar29;
      uVar26 = (ulonglong)uStack_2ac * 2 + 1;
      lVar11 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iStack_29c = iStack_298 + -1 + (int)lVar11;
      if (local_98.AllocationFlags.NumBits < iStack_29c) {
LAB_14d059acf:
        iStack_29c = local_98.AllocationFlags.NumBits;
      }
    }
    local_2a0 = 0xffffffff;
    local_230 = &local_98;
    local_228._padding_ = CONCAT44(uStack_2ac,local_2b0);
    local_228.CurrentBitIndex = iStack_29c;
    local_228.UnvisitedBitMask = 0xffffffff;
    local_228._28_4_ = uStack_294;
    local_228.BaseBitIndex = iStack_298;
    iVar8 = iStack_29c;
    local_228.Array = pTStack_2a8;
    if (iStack_29c < local_98.AllocationFlags.NumBits) {
      do {
        pFVar27 = (local_230->Data).AllocatorInstance.Data + (longlong)iVar8 * 0x20;
        uVar15 = *(undefined8 *)pFVar27;
        uVar29 = ::GetTypeHash((FNameEntryId)(uint)uVar15);
        uVar29 = local_50 - 1 & uVar29 + (int)((ulonglong)uVar15 >> 0x20);
        *(uint *)(pFVar27 + 0x1c) = uVar29;
        FVar23.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar23.Data = local_58.Data;
        }
        uVar26 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar29;
        *(undefined4 *)(pFVar27 + 0x18) = *(undefined4 *)(FVar23.Data + uVar26 * 4);
        *(int *)(FVar23.Data + uVar26 * 4) = iVar8;
        local_228.UnvisitedBitMask = local_228.UnvisitedBitMask & ~local_228._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_228);
        iVar8 = local_228.CurrentBitIndex;
      } while (local_228.CurrentBitIndex < (local_228.Array)->NumBits);
    }
  }
LAB_14d059bba:
  cVar7 = (**(code **)((longlong)*param_1 + 0x78))(param_1);
  pTVar30 = local_248;
  if (cVar7 == '\0') {
    pIVar20 = TSharedPtr<ILiveLinkProvider,1>::operator->(&this->RebroadcastLiveLinkProvider);
    pcVar4 = *(code **)((longlong)*pIVar20 + 8);
    local_250 = local_290;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_290 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_290);
    }
    (*pcVar4)(pIVar20,local_260._8_8_,&local_250,&local_1e8);
    (**(code **)((longlong)*param_1 + 0x80))(param_1,1);
    pbVar21 = (bool *)(**(code **)((longlong)*param_1 + 0x28))(param_1,local_e8);
    TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>::
    Emplace<FLiveLinkSubjectKey>
              (&this->RebroadcastedSubjects,(FLiveLinkSubjectKey *)local_260,pbVar21);
    pTVar30 = &this->RebroadcastLiveLinkProvider;
  }
  lVar11 = (**(code **)((longlong)*param_1 + 0x28))(param_1,local_d0);
  ::FName::ToString((FName *)(lVar11 + 0x10),&local_148);
  ::FString::PrintfImpl(&local_240,L"FLiveLinkClient::HandleSubjectRebroadcast %s");
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_240.Data.ArrayNum != 0) {
    FVar23.Data = local_240.Data.AllocatorInstance.Data;
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar23.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
               ,0x1ce);
  }
  if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data.AllocatorInstance.Data);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  pIVar20 = TSharedPtr<ILiveLinkProvider,1>::operator->(pTVar30);
  (**(code **)((longlong)*pIVar20 + 0x18))(pIVar20,local_260._8_8_,&local_288,&local_98);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_98);
  if (local_1f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
  }
  FStructOnScope::~FStructOnScope(&local_1e8);
  FStructOnScope::~FStructOnScope(&local_288);
  return true;
}

// HasPendingSubjectFrames @ 14d059fa0

bool __thiscall FLiveLinkClient::HasPendingSubjectFrames(FLiveLinkClient *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->PendingFramesCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->SubjectFrameToPush).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HasSourceBeenAdded @ 14d05a770

bool __thiscall
FLiveLinkClient::HasSourceBeenAdded(FLiveLinkClient *this,TSharedPtr<ILiveLinkSource,1> *param_1)

{
  FLiveLinkSourceCollection *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FLiveLinkCollectionSourceItem *pFVar5;
  TSharedPtr<ILiveLinkSource,1> local_18;
  
  if ((this->Collection).Ptr == (FLiveLinkSourceCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                       ,0x322,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_18.Object = param_1->Object;
  this_00 = (this->Collection).Ptr;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar5 = FLiveLinkSourceCollection::FindSource(this_00,&local_18);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pFVar5 != (FLiveLinkCollectionSourceItem *)0x0) {
    bVar3 = pFVar5->bPendingKill;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return bVar3 == false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return false;
}

// Initialize @ 14d05ae60

void __thiscall FLiveLinkClient::Initialize(FLiveLinkClient *this)

{
  TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
  *this_00;
  UClass *pUVar1;
  FName local_res8;
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_LiveLink_LiveLinkClient.UniqueName,false,None,Default,
             true);
  local_res8 = LLMTagDeclaration_LiveLink_LiveLinkClient.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res8,true);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
             *)(**(code **)(this->_padding_ + 0x200))(this);
  TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>::
  AddRaw<FLiveLinkClient>(this_00,(FLiveLinkClient *)&local_res8,(pmf_588e29fe *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FLiveLinkClient>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPreExit,(FLiveLinkClient *)&local_res8,(pmf_80453f43 *)this);
  ::FString::operator=(&this->RebroadcastLiveLinkProviderName,L"LiveLink Rebroadcast");
  pUVar1 = ULiveLinkSettings::StaticClass();
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  this->bPreProcessRebroadcastFrames =
       (bool)(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr[4].field_0x10;
  pUVar1 = ULiveLinkSettings::StaticClass();
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffffffffff00);
  this->bTranslateRebroadcastFrames =
       (bool)(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr[4].field_0x11;
  FConfigCacheIni::GetBool
            (GConfig,L"LiveLink",L"bEnableParentSubjects",(bool *)&local_res8,&GEngineIni);
  this->bEnableParentSubjects = local_res8.ComparisonIndex.Value._0_1_;
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// IsSourceStillValid @ 14d0603b0

bool __thiscall FLiveLinkClient::IsSourceStillValid(FLiveLinkClient *this,FGuid *param_1)

{
  FLiveLinkSourceCollection *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  pFVar1 = (this->Collection).Ptr;
  UE::FRecursiveMutex::Lock(&pFVar1->SourcesLock);
  uVar3 = param_1->A;
  uVar4 = param_1->B;
  uVar5 = param_1->C;
  uVar6 = param_1->D;
  pFVar10 = (pFVar1->Sources).AllocatorInstance.Data;
  pFVar9 = pFVar10 + (longlong)(pFVar1->Sources).ArrayNum * 0x40;
  while( true ) {
    if (pFVar10 == pFVar9) {
      UE::FRecursiveMutex::Unlock(&pFVar1->SourcesLock);
      return false;
    }
    if (((uVar6 == *(int *)(pFVar10 + 0xc) && uVar5 == *(int *)(pFVar10 + 8)) &&
        uVar4 == *(int *)(pFVar10 + 4)) && uVar3 == *(int *)pFVar10) break;
    pFVar10 = pFVar10 + 0x40;
  }
  UE::FRecursiveMutex::Unlock(&pFVar1->SourcesLock);
  if (pFVar10 == (FScriptContainerElement *)0x0) {
    return false;
  }
  if ((*(longlong *)(pFVar10 + 0x18) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d06049b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(**(longlong **)(pFVar10 + 0x18) + 0x28))();
  return (bool)uVar8;
}

// IsSubjectEnabled @ 14d0605b0

bool __thiscall
FLiveLinkClient::IsSubjectEnabled(FLiveLinkClient *this,FLiveLinkSubjectKey *param_1,bool param_2)

{
  FRecursiveMutex *this_00;
  FName FVar1;
  FLiveLinkSourceCollection *this_01;
  FLiveLinkSubjectKey *pFVar2;
  FLiveLinkCollectionSubjectItem *pFVar3;
  undefined1 uVar4;
  FLiveLinkSubjectKey local_28;
  
  if (!param_2) {
    this_01 = (this->Collection).Ptr;
    local_28.Source.A = (param_1->Source).A;
    local_28.Source.B = (param_1->Source).B;
    local_28.Source.C = (param_1->Source).C;
    local_28.Source.D = (param_1->Source).D;
    this_00 = &this_01->SubjectsLock;
    FVar1 = (param_1->SubjectName).Name;
    UE::FRecursiveMutex::Lock(this_00);
    local_28.SubjectName.Name = FVar1;
    pFVar3 = FLiveLinkSourceCollection::FindSubject(this_01,&local_28);
    if (pFVar3 == (FLiveLinkCollectionSubjectItem *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = pFVar3->bEnabled;
    }
    UE::FRecursiveMutex::Unlock(this_00);
    return (bool)uVar4;
  }
  pFVar2 = TMapBase<FLiveLinkSubjectName,FLiveLinkSubjectKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>_>
           ::Find((TMapBase<FLiveLinkSubjectName,FLiveLinkSubjectKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>_>
                   *)&this->EnabledSubjects,&param_1->SubjectName);
  if (((pFVar2 != (FLiveLinkSubjectKey *)0x0) &&
      ((pFVar2->SubjectName).Name == (param_1->SubjectName).Name)) &&
     ((((pFVar2->Source).D == (param_1->Source).D && (pFVar2->Source).C == (param_1->Source).C) &&
      (pFVar2->Source).B == (param_1->Source).B) && (pFVar2->Source).A == (param_1->Source).A)) {
    return true;
  }
  return false;
}

// IsSubjectEnabled @ 14d060690

bool __thiscall
FLiveLinkClient::IsSubjectEnabled(FLiveLinkClient *this,FLiveLinkSubjectName param_1)

{
  FLiveLinkSubjectKey *pFVar1;
  FName local_res10 [3];
  
  local_res10[0] = param_1.Name;
  pFVar1 = TMapBase<FLiveLinkSubjectName,FLiveLinkSubjectKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>_>
           ::Find((TMapBase<FLiveLinkSubjectName,FLiveLinkSubjectKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>_>
                   *)&this->EnabledSubjects,(FLiveLinkSubjectName *)local_res10);
  return pFVar1 != (FLiveLinkSubjectKey *)0x0;
}

// IsSubjectTimeSynchronized @ 14d060740

bool __thiscall
FLiveLinkClient::IsSubjectTimeSynchronized(FLiveLinkClient *this,FLiveLinkSubjectKey *param_1)

{
  FLiveLinkSubject *this_00;
  bool bVar1;
  FLiveLinkCollectionSubjectItem *pFVar2;
  FLiveLinkSubjectKey local_28;
  
  local_28.Source.A = (param_1->Source).A;
  local_28.Source.B = (param_1->Source).B;
  local_28.Source.C = (param_1->Source).C;
  local_28.Source.D = (param_1->Source).D;
  local_28.SubjectName.Name = (param_1->SubjectName).Name;
  pFVar2 = FLiveLinkSourceCollection::FindSubject((this->Collection).Ptr,&local_28);
  if ((pFVar2 != (FLiveLinkCollectionSubjectItem *)0x0) &&
     (this_00 = (pFVar2->LiveSubject).Ptr, this_00 != (FLiveLinkSubject *)0x0)) {
    bVar1 = FLiveLinkSubject::IsTimeSynchronized(this_00);
    return bVar1;
  }
  return false;
}

// IsSubjectTimeSynchronized @ 14d060790

bool __thiscall
FLiveLinkClient::IsSubjectTimeSynchronized(FLiveLinkClient *this,FLiveLinkSubjectName param_1)

{
  FLiveLinkSubject *this_00;
  bool bVar1;
  FLiveLinkCollectionSubjectItem *pFVar2;
  
  pFVar2 = FLiveLinkSourceCollection::FindEnabledSubject((this->Collection).Ptr,param_1);
  if ((pFVar2 != (FLiveLinkCollectionSubjectItem *)0x0) &&
     (this_00 = (pFVar2->LiveSubject).Ptr, this_00 != (FLiveLinkSubject *)0x0)) {
    bVar1 = FLiveLinkSubject::IsTimeSynchronized(this_00);
    return bVar1;
  }
  return false;
}

// IsSubjectValid @ 14d0607d0

bool __thiscall FLiveLinkClient::IsSubjectValid(FLiveLinkClient *this,FLiveLinkSubjectKey *param_1)

{
  UObject *pUVar1;
  char cVar2;
  FLiveLinkCollectionSubjectItem *pFVar3;
  FLiveLinkSubject *pFVar4;
  FLiveLinkSubjectKey local_28;
  
  local_28.Source.A = (param_1->Source).A;
  local_28.Source.B = (param_1->Source).B;
  local_28.Source.C = (param_1->Source).C;
  local_28.Source.D = (param_1->Source).D;
  local_28.SubjectName.Name = (param_1->SubjectName).Name;
  pFVar3 = FLiveLinkSourceCollection::FindSubject((this->Collection).Ptr,&local_28);
  if (pFVar3 != (FLiveLinkCollectionSubjectItem *)0x0) {
    pUVar1 = (pFVar3->VirtualSubject).Object;
    if (pUVar1 == (UObject *)0x0) {
      pFVar4 = (pFVar3->LiveSubject).Ptr;
    }
    else {
      pFVar4 = (FLiveLinkSubject *)(pUVar1 + 1);
    }
    cVar2 = (**(code **)(pFVar4->_padding_ + 0x40))();
    if (cVar2 != '\0') {
      if ((pFVar3->VirtualSubject).Object != (UObject *)0x0) {
        return true;
      }
      pFVar4 = (pFVar3->LiveSubject).Ptr;
      if (pFVar4 != (FLiveLinkSubject *)0x0) {
        cVar2 = (**(code **)(pFVar4->_padding_ + 8))(&pFVar4->_padding_);
        return cVar2 == '\0';
      }
    }
  }
  return false;
}

// IsSubjectValid @ 14d060870

bool __thiscall FLiveLinkClient::IsSubjectValid(FLiveLinkClient *this,FLiveLinkSubjectName param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  FLiveLinkSubjectKey *pFVar2;
  FName local_res10 [3];
  
  local_res10[0] = param_1.Name;
  pFVar2 = TMapBase<FLiveLinkSubjectName,FLiveLinkSubjectKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>_>
           ::Find((TMapBase<FLiveLinkSubjectName,FLiveLinkSubjectKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>_>
                   *)&this->EnabledSubjects,(FLiveLinkSubjectName *)local_res10);
  if (pFVar2 != (FLiveLinkSubjectKey *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x110);
                    /* WARNING: Could not recover jumptable at 0x00014d0608a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(this,pFVar2,UNRECOVERED_JUMPTABLE);
    return (bool)uVar1;
  }
  return false;
}

// IsVirtualSubject @ 14d060b20

bool __thiscall
FLiveLinkClient::IsVirtualSubject(FLiveLinkClient *this,FLiveLinkSubjectKey *param_1)

{
  FLiveLinkCollectionSubjectItem *pFVar1;
  FLiveLinkSubjectKey local_28;
  
  local_28.Source.A = (param_1->Source).A;
  local_28.Source.B = (param_1->Source).B;
  local_28.Source.C = (param_1->Source).C;
  local_28.Source.D = (param_1->Source).D;
  local_28.SubjectName.Name = (param_1->SubjectName).Name;
  pFVar1 = FLiveLinkSourceCollection::FindSubject((this->Collection).Ptr,&local_28);
  if (pFVar1 != (FLiveLinkCollectionSubjectItem *)0x0) {
    return (pFVar1->VirtualSubject).Object != (UObject *)0x0;
  }
  return false;
}

// OnLiveLinkSourceAdded @ 14d0665f0

TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy> * __thiscall
FLiveLinkClient::OnLiveLinkSourceAdded(FLiveLinkClient *this)

{
  return &((this->Collection).Ptr)->OnLiveLinkSourceAddedDelegate;
}

// OnLiveLinkSourceRemoved @ 14d066600

TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy> * __thiscall
FLiveLinkClient::OnLiveLinkSourceRemoved(FLiveLinkClient *this)

{
  return &((this->Collection).Ptr)->OnLiveLinkSourceRemovedDelegate;
}

// OnLiveLinkSourcesChanged @ 14d066620

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FLiveLinkClient::OnLiveLinkSourcesChanged(FLiveLinkClient *this)

{
  return &((this->Collection).Ptr)->OnLiveLinkSourcesChangedDelegate;
}

// OnLiveLinkSubjectAdded @ 14d066630

TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy> * __thiscall
FLiveLinkClient::OnLiveLinkSubjectAdded(FLiveLinkClient *this)

{
  return &((this->Collection).Ptr)->OnLiveLinkSubjectAddedDelegate;
}

// OnLiveLinkSubjectEnabledChanged @ 14d0666b0

TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy> * __thiscall
FLiveLinkClient::OnLiveLinkSubjectEnabledChanged(FLiveLinkClient *this)

{
  return &((this->Collection).Ptr)->OnLiveLinkSubjectEnabledDelegate;
}

// OnLiveLinkSubjectRemoved @ 14d0666d0

TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy> * __thiscall
FLiveLinkClient::OnLiveLinkSubjectRemoved(FLiveLinkClient *this)

{
  return &((this->Collection).Ptr)->OnLiveLinkSubjectRemovedDelegate;
}

// OnLiveLinkSubjectStateChanged @ 14d066740

TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,ELiveLinkSubjectState),FDefaultTSDelegateUserPolicy>
* __thiscall FLiveLinkClient::OnLiveLinkSubjectStateChanged(FLiveLinkClient *this)

{
  return &((this->Collection).Ptr)->OnLiveLinkSubjectStateChangedDelegate;
}

// OnLiveLinkSubjectsChanged @ 14d066760

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FLiveLinkClient::OnLiveLinkSubjectsChanged(FLiveLinkClient *this)

{
  return &((this->Collection).Ptr)->OnLiveLinkSubjectsChangedDelegate;
}

// OnLiveLinkTicked @ 14d066770

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FLiveLinkClient::OnLiveLinkTicked(FLiveLinkClient *this)

{
  return &this->OnLiveLinkTickedDelegate;
}

// OnPropertyChanged @ 14d06abc0

void __thiscall
FLiveLinkClient::OnPropertyChanged
          (FLiveLinkClient *this,FGuid *param_1,FPropertyChangedEvent *param_2)

{
  FLiveLinkSourceCollection *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  pFVar1 = (this->Collection).Ptr;
  UE::FRecursiveMutex::Lock(&pFVar1->SourcesLock);
  uVar3 = param_1->A;
  uVar4 = param_1->B;
  uVar5 = param_1->C;
  uVar6 = param_1->D;
  pFVar9 = (pFVar1->Sources).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)(pFVar1->Sources).ArrayNum * 0x40;
  while( true ) {
    if (pFVar9 == pFVar8) {
      UE::FRecursiveMutex::Unlock(&pFVar1->SourcesLock);
      return;
    }
    if (((uVar6 == *(int *)(pFVar9 + 0xc) && uVar5 == *(int *)(pFVar9 + 8)) &&
        uVar4 == *(int *)(pFVar9 + 4)) && uVar3 == *(int *)pFVar9) break;
    pFVar9 = pFVar9 + 0x40;
  }
  UE::FRecursiveMutex::Unlock(&pFVar1->SourcesLock);
  if (pFVar9 == (FScriptContainerElement *)0x0) {
    return;
  }
  if ((*(longlong *)(pFVar9 + 0x18) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (**(code **)(**(longlong **)(pFVar9 + 0x18) + 0x68))
            (*(longlong **)(pFVar9 + 0x18),*(undefined8 *)(pFVar9 + 0x10),param_2);
  return;
}

// OnSubjectRemovedCallback @ 14d06b080

void __thiscall
FLiveLinkClient::OnSubjectRemovedCallback(FLiveLinkClient *this,FLiveLinkSubjectKey *param_1)

{
  FLiveLinkSubjectKey local_28;
  
  local_28.Source.A = (param_1->Source).A;
  local_28.Source.B = (param_1->Source).B;
  local_28.Source.C = (param_1->Source).C;
  local_28.Source.D = (param_1->Source).D;
  local_28.SubjectName.Name = (param_1->SubjectName).Name;
  RemoveRebroadcastedSubject(this,&local_28);
  return;
}

// PauseSubject_AnyThread @ 14d06c7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkClient::PauseSubject_AnyThread(FLiveLinkClient *this,FLiveLinkSubjectName param_1)

{
  FLiveLinkSourceCollection *this_00;
  UObject *pUVar1;
  char cVar2;
  FLiveLinkCollectionSubjectItem *pFVar3;
  void *this_01;
  FLiveLinkSubject *pFVar4;
  FName local_res10 [3];
  FLiveLinkSubjectKey local_28;
  
  this_00 = (this->Collection).Ptr;
  if (this_00 == (FLiveLinkSourceCollection *)0x0) {
    return;
  }
  local_res10[0] = param_1.Name;
  pFVar3 = FLiveLinkSourceCollection::FindSubject(this_00,param_1);
  if (pFVar3 == (FLiveLinkCollectionSubjectItem *)0x0) {
    return;
  }
  cVar2 = (**(code **)(this->_padding_ + 0x108))(this,local_res10[0]);
  if (cVar2 == '\0') {
    if ((byte)LogLiveLink._0_1_ < 3) {
      return;
    }
    ::FName::ToString(local_res10,(FString *)&local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
    if ((void *)local_28.Source._0_8_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_28.Source._0_8_);
    return;
  }
  pFVar4 = (pFVar3->LiveSubject).Ptr;
  if (pFVar4 == (FLiveLinkSubject *)0x0) {
    pUVar1 = (pFVar3->VirtualSubject).Object;
    if (pUVar1 == (UObject *)0x0) goto LAB_14d06c8af;
    pFVar4 = (FLiveLinkSubject *)(pUVar1 + 1);
  }
  (**(code **)(pFVar4->_padding_ + 0xa8))();
LAB_14d06c8af:
  this_01 = (void *)(**(code **)(this->_padding_ + 0x208))(this);
  local_28.Source.A = (pFVar3->Key).Source.A;
  local_28.Source.B = (pFVar3->Key).Source.B;
  local_28.Source.C = (pFVar3->Key).Source.C;
  local_28.Source.D = (pFVar3->Key).Source.D;
  local_28.SubjectName.Name = (pFVar3->Key).SubjectName.Name;
  TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,enum_ELiveLinkSubjectState),FDefaultTSDelegateUserPolicy>
  ::Broadcast(this_01,&local_28,Paused);
  return;
}

// PushPendingSubject_AnyThread @ 14d071690

void __thiscall
FLiveLinkClient::PushPendingSubject_AnyThread(FLiveLinkClient *this,FPendingSubjectStatic *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  longlong lVar3;
  longlong *plVar4;
  FPendingSubjectStatic *pFVar5;
  UClass *pUVar6;
  code *pcVar7;
  undefined8 uVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  FSubjectFramesReceivedHandles *this_00;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  FLiveLinkSubjectKey local_48;
  
  pTVar9 = CVarMaxNewStaticDataPerUpdate.Ref;
  bVar10 = IsInParallelGameThread();
  if (!bVar10) {
    bVar10 = IsInGameThread();
    lVar17 = 4;
    if (!bVar10) goto LAB_14d0716c5;
  }
  lVar17 = 0;
LAB_14d0716c5:
  iVar14 = *(int *)((longlong)pTVar9->ShadowedValue + lVar17);
  lpCriticalSection = &this->PendingFramesCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (iVar14 < (this->SubjectStaticToPush).ArrayNum) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&NAME_TooManyStatic,"LiveLinkClient_TooManyStatic");
        _Init_thread_footer(&::_TSS0);
      }
      local_48.Source.A = 0;
      local_48.Source.B = 0;
      local_48.Source.C = 0;
      local_48.Source.D = 0;
      local_48.SubjectName.Name.ComparisonIndex.Value = 0;
      local_48.SubjectName.Name.Number = 0;
      FLiveLinkLog::Log_Internal<int>
                (Error,NAME_TooManyStatic,&local_48,
                 (TCheckedFormatStringPrivate<wchar_t,int>)0x152a9c490,iVar14);
      return;
    }
    lpCriticalSection_00 = &this->SubjectFrameReceivedHandleseCriticalSection;
    if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      this_00 = TMapBase<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,0>_>
                ::Find((TMapBase<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,0>_>
                        *)&this->SubjectFrameReceivedHandles,&param_1->SubjectKey);
      if (this_00 != (FSubjectFramesReceivedHandles *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)this_00);
        puVar1 = &(this_00->OnStaticDataReceived).field_0x3c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar10 = false;
        uVar15 = *(int *)&(this_00->OnStaticDataReceived).field_0x30 - 1;
        if (-1 < (int)uVar15) {
          lVar17 = (longlong)(int)uVar15 << 4;
          bVar10 = false;
          do {
            uVar13 = 0;
            if ((int)uVar15 < *(int *)&(this_00->OnStaticDataReceived).field_0x30) {
              uVar13 = ~uVar15 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar3 = *(longlong *)&(this_00->OnStaticDataReceived).field_0x28;
            if (((*(int *)(lVar17 + 8 + lVar3) == 0) ||
                (plVar4 = *(longlong **)(lVar17 + lVar3), plVar4 == (longlong *)0x0)) ||
               (cVar12 = (**(code **)(*plVar4 + 0x68))(), cVar12 == '\0')) {
              bVar10 = true;
            }
            lVar17 = lVar17 + -0x10;
            uVar15 = uVar15 - 1;
          } while (-1 < (int)uVar15);
        }
        puVar1 = &(this_00->OnStaticDataReceived).field_0x3c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar10) {
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,false);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      pFVar5 = (FPendingSubjectStatic *)(this->SubjectStaticToPush).AllocatorInstance.Data;
      if (((pFVar5 <= param_1) && (param_1 < pFVar5 + (this->SubjectStaticToPush).ArrayMax)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar14 = (this->SubjectStaticToPush).ArrayNum;
      piVar2 = &(this->SubjectStaticToPush).ArrayMax;
      if (iVar14 == *piVar2) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x898,&(this->SubjectStaticToPush).AllocatorInstance,piVar2);
      }
      pFVar16 = (this->SubjectStaticToPush).AllocatorInstance.Data;
      (this->SubjectStaticToPush).ArrayNum = iVar14 + 1;
      uVar8 = *(undefined8 *)&(param_1->SubjectKey).Source.C;
      pFVar16 = pFVar16 + (longlong)iVar14 * 0x98;
      *(undefined8 *)pFVar16 = *(undefined8 *)&(param_1->SubjectKey).Source;
      *(undefined8 *)(pFVar16 + 8) = uVar8;
      *(FName *)(pFVar16 + 0x10) = (param_1->SubjectKey).SubjectName.Name;
      pUVar6 = (param_1->Role).Class.field0_0x0.DebugPtr;
      *(UClass **)&pFVar16[0x18].field_0x0 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      FStructOnScope::FStructOnScope
                ((FStructOnScope *)(pFVar16 + 0x20),&(param_1->StaticData).WrappedStruct);
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                  *)(pFVar16 + 0x48),
                 (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                  *)&param_1->ExtraMetadata);
                    /* WARNING: Could not recover jumptable at 0x00014d071911. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PushSubjectFrameData_AnyThread @ 14d0719d0

void __thiscall
FLiveLinkClient::PushSubjectFrameData_AnyThread
          (FLiveLinkClient *this,FLiveLinkSubjectKey *param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  FString local_a8;
  FString local_98;
  FLiveLinkSubjectKey local_88;
  undefined8 local_68;
  undefined8 uStack_60;
  FName local_58;
  FStructOnScope local_50;
  
  local_68._0_4_ = (param_1->Source).A;
  local_68._4_4_ = (param_1->Source).B;
  uStack_60._0_4_ = (param_1->Source).C;
  uStack_60._4_4_ = (param_1->Source).D;
  local_58 = (param_1->SubjectName).Name;
  FStructOnScope::FStructOnScope(&local_50,&param_2->WrappedStruct);
  pTVar5 = CVarMaxNewFrameDataPerUpdate.Ref;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    lVar10 = 4;
    if (!bVar6) goto LAB_14d071a36;
  }
  lVar10 = 0;
LAB_14d071a36:
  iVar9 = *(int *)((longlong)pTVar5->ShadowedValue + lVar10);
  ::FName::ToString(&(param_1->SubjectName).Name,&local_98);
  ::FString::PrintfImpl(&local_a8,L"FLiveLinkClient::PushSubjectFrameData_AnyThread %s");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar12.Data = local_a8.Data.AllocatorInstance.Data;
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar12.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
               ,0x43f);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  lpCriticalSection = &this->PendingFramesCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = (this->SubjectFrameToPush).ArrayNum;
    if (iVar9 < iVar2) {
      uVar11 = iVar2 - iVar9;
      uVar8 = 0;
      if ((int)uVar11 <= iVar2) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar11 != 0) {
        TArray<FLiveLinkClient::FPendingSubjectFrame,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->SubjectFrameToPush,0,uVar11);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&NAME_TooManyFrame,"LiveLinkClient_TooManyFrame");
        _Init_thread_footer(&::_TSS0);
      }
      local_88.Source.A = 0;
      local_88.Source.B = 0;
      local_88.Source.C = 0;
      local_88.Source.D = 0;
      local_88.SubjectName.Name.ComparisonIndex.Value = 0;
      local_88.SubjectName.Name.Number = 0;
      FLiveLinkLog::Log_Internal<int>
                (Info,NAME_TooManyFrame,&local_88,
                 (TCheckedFormatStringPrivate<wchar_t,int>)0x152a9bb40,iVar9);
    }
    else {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      BroadcastFrameDataUpdate
                (this,param_1,(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)&local_50);
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar3 = (this->SubjectFrameToPush).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 <
           pFVar3 + (longlong)(this->SubjectFrameToPush).ArrayMax * 0x40)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (this->SubjectFrameToPush).ArrayNum;
      piVar1 = &(this->SubjectFrameToPush).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&(this->SubjectFrameToPush).AllocatorInstance,piVar1);
      }
      (this->SubjectFrameToPush).ArrayNum = iVar9 + 1;
      pFVar3 = (this->SubjectFrameToPush).AllocatorInstance.Data;
      lVar10 = (longlong)iVar9 * 0x40;
      *(undefined8 *)(pFVar3 + lVar10) = local_68;
      *(undefined8 *)(pFVar3 + lVar10 + 8) = uStack_60;
      *(FName *)(pFVar3 + lVar10 + 0x10) = local_58;
      FStructOnScope::FStructOnScope((FStructOnScope *)(pFVar3 + lVar10 + 0x18),&local_50);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FStructOnScope::~FStructOnScope(&local_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PushSubjectFrameData_Internal @ 14d071d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkClient::PushSubjectFrameData_Internal(FLiveLinkClient *this,FPendingSubjectFrame *param_1)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  FLiveLinkSourceCollection *pFVar4;
  FLiveLinkSubject *this_00;
  code *pcVar5;
  double dVar6;
  FQualifiedFrameTime FVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_LiveLink_PushFrameData> FVar12;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FLiveLinkCollectionSubjectItem *pFVar13;
  longlong lVar14;
  UClass *pUVar15;
  undefined8 uVar16;
  ULiveLinkRole *pUVar17;
  FLiveLinkTimedDataInput *this_03;
  FLiveLinkBaseFrameData *pFVar18;
  ULiveLinkSourceSettings *pUVar19;
  FScriptContainerElement *pFVar20;
  FLiveLinkSubjectKey *pFVar21;
  FNameEntryId FVar22;
  FName FVar23;
  longlong *plVar24;
  ForAnyElementType FVar25;
  TObjectPtr<UClass>_u_0 TVar26;
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar27;
  undefined1 uVar28;
  FScriptContainerElement *pFVar29;
  ForAnyElementType FVar30;
  FStructOnScope *local_res8;
  FSubjectFramesAddedHandles *local_res10;
  char local_res18 [8];
  uint local_res20;
  uint uStackX_24;
  TObjectPtr<UClass>_u_0 local_228;
  FColor_u_0 local_220 [2];
  FStructOnScope local_218;
  FName local_1f0;
  FName local_1e8;
  longlong *local_1e0;
  TReferenceControllerBase<1> *local_1d8;
  FName local_1d0;
  FLiveLinkSubjectKey local_1b8;
  FName local_198;
  FName local_190;
  TObjectPtr<UClass>_u_0 local_188;
  TObjectPtr<UClass>_u_0 local_180;
  FName local_178;
  TObjectPtr<UClass>_u_0 local_170;
  TObjectPtr<UClass>_u_0 local_168;
  LARGE_INTEGER local_160;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FStatMessage local_118;
  FLiveLinkClient *local_108;
  FPendingSubjectFrame *local_100;
  code *local_f8;
  FLiveLinkClient **local_f0;
  FName local_e8 [2];
  FLiveLinkSubjectKey local_d8;
  FLiveLinkSubjectKey local_b8;
  FLiveLinkSubjectKey local_98;
  FLiveLinkSubjectKey local_78 [2];
  
  FVar12 = StatPtr_STAT_LiveLink_PushFrameData;
  if (StatPtr_STAT_LiveLink_PushFrameData ==
      (FThreadSafeStaticStat<FStat_STAT_LiveLink_PushFrameData>)0x0) {
    pFVar11 = ::FName::FName(local_e8,"STAT_LiveLink_PushFrameData");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_LiveLink_PushFrameData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LiveLink_PushFrameData,*pFVar11,
                        L"LiveLink - Push FrameData","STATGROUP_LiveLink","STATCAT_Advanced",
                        L"Live Link",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar12;
  uVar28 = 0;
  local_1d0.ComparisonIndex.Value = 0;
  local_1d0.Number = 0;
  local_res20 = local_res20 & 0xffffff00;
  FVar22 = FVar3.ComparisonIndex.Value;
  uVar10 = FVar3.Number;
  if ((FVar22.Value != 0) || (FVar23 = local_1d0, uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_220[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_220[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      uVar28 = 1;
      local_res20 = CONCAT31(local_res20._1_3_,1);
      if (-1 < CpuChannel->Enabled) {
        local_1f0.ComparisonIndex.Value = FVar22.Value;
        local_1f0.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1f0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                   ,0x462);
        uVar28 = 3;
        local_res20 = CONCAT31(local_res20._1_3_,3);
      }
    }
    FVar23 = local_1d0;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar22.Value;
      uStackX_24 = uVar10;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      local_res20 = CONCAT31(local_res20._1_3_,uVar28) | 4;
      FVar23 = FVar3;
    }
  }
  if (((this->Collection).Ptr == (FLiveLinkSourceCollection *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Collection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                         ,0x464,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->Collection).Ptr;
  local_1b8.Source.A = (param_1->SubjectKey).Source.A;
  local_1b8.Source.B = (param_1->SubjectKey).Source.B;
  local_1b8.Source.C = (param_1->SubjectKey).Source.C;
  local_1b8.Source.D = (param_1->SubjectKey).Source.D;
  UE::FRecursiveMutex::Lock(&pFVar4->SourcesLock);
  pFVar29 = (pFVar4->Sources).AllocatorInstance.Data;
  pFVar20 = pFVar29 + (longlong)(pFVar4->Sources).ArrayNum * 0x40;
  if (pFVar29 != pFVar20) {
    do {
      if (((local_1b8.Source.B == *(uint *)(pFVar29 + 4) &&
           local_1b8.Source.C == *(uint *)(pFVar29 + 8)) &&
          local_1b8.Source.D == *(uint *)(pFVar29 + 0xc)) && local_1b8.Source.A == *(uint *)pFVar29)
      {
        UE::FRecursiveMutex::Unlock(&pFVar4->SourcesLock);
        if ((pFVar29 == (FScriptContainerElement *)0x0) ||
           (pFVar29[0x38] != (FScriptContainerElement)0x0)) goto LAB_14d071f4c;
        local_1b8.Source.A = (param_1->SubjectKey).Source.A;
        local_1b8.Source.B = (param_1->SubjectKey).Source.B;
        local_1b8.Source.C = (param_1->SubjectKey).Source.C;
        local_1b8.Source.D = (param_1->SubjectKey).Source.D;
        local_1b8.SubjectName.Name = (param_1->SubjectKey).SubjectName.Name;
        pFVar13 = FLiveLinkSourceCollection::FindSubject((this->Collection).Ptr,&local_1b8);
        if ((pFVar13 == (FLiveLinkCollectionSubjectItem *)0x0) ||
           ((pFVar13->bEnabled == false || (pFVar13->bPendingKill != false)))) goto LAB_14d071f4c;
        this_00 = (pFVar13->LiveSubject).Ptr;
        if (this_00 == (FLiveLinkSubject *)0x0) {
          FLiveLinkLog::Error<>((TCheckedFormatStringPrivate<wchar_t>)0x152a9bda0);
          goto LAB_14d071f4c;
        }
        lVar14 = (**(code **)((this_00->StaticData).WrappedStruct._padding_ + 0x10))
                           (&this_00->StaticData);
        if (((lVar14 == 0) ||
            ((**(code **)(this_00->_padding_ + 0x30))(this_00,&local_228), TVar26 = local_228,
            local_228.DebugPtr == (UClass *)0x0)) ||
           (pUVar15 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar15 == (UClass *)0x0))
        goto LAB_14d071f4c;
        iVar2 = (int)pUVar15->_padding_;
        if (((int)(TVar26.DebugPtr)->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)((TVar26.DebugPtr)->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar15->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if ((!bVar8) || (local_228.DebugPtr == (UClass *)0x0)) goto LAB_14d071f4c;
        FStructOnScope::FStructOnScope(&local_218);
        (**(code **)(this_00->_padding_ + 0x68))(this_00,&local_1e0);
        pFVar27 = &param_1->FrameData;
        if (local_1e0 != (longlong *)0x0) {
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::InitializeWith
                    ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)&local_218,pFVar27);
          plVar24 = local_1e0;
          if ((local_1e0 == (longlong *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), plVar24 = local_1e0, bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcVar5 = *(code **)(*plVar24 + 0x10);
          uVar16 = (**(code **)(this_00->_padding_ + 0x50))(this_00,1);
          (*pcVar5)(plVar24,uVar16,pFVar27);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1d8);
        local_res18[0] = '\x01';
        pUVar17 = TSubclassOf<ULiveLinkRole>::GetDefaultObject
                            ((TSubclassOf<ULiveLinkRole> *)&local_228.ObjectPtr);
        pcVar5 = *(code **)(*(longlong *)pUVar17 + 0x2e0);
        uVar16 = (**(code **)(this_00->_padding_ + 0x50))(this_00,1);
        cVar9 = (*pcVar5)(pUVar17,uVar16,pFVar27,local_res18);
        if (cVar9 == '\0') {
          if (local_res18[0] != '\0') {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              ::FName::FName(&NAME_InvalidFrameData,"LiveLinkClient_InvalidFrameData");
              _Init_thread_footer(&::_TSS0);
            }
            ::FName::ToString(&(param_1->SubjectKey).SubjectName.Name,&local_148);
            TVar26 = local_228;
            FVar30.Data = (FScriptContainerElement *)L"";
            if (local_148.Data.ArrayNum != 0) {
              FVar30.Data = local_148.Data.AllocatorInstance.Data;
            }
            if ((local_228.DebugPtr == (UClass *)0x0) ||
               (pUVar15 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar15 == (UClass *)0x0))
            {
LAB_14d072295:
              local_228.DebugPtr = (UClass *)0x0;
            }
            else {
              iVar2 = (int)pUVar15->_padding_;
              if (((int)(TVar26.DebugPtr)->_padding_ < iVar2) ||
                 ((longlong *)*(undefined1 **)((TVar26.DebugPtr)->_padding_ + (longlong)iVar2 * 8)
                  != &pUVar15->_padding_)) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              if (!bVar8) goto LAB_14d072295;
            }
            local_198 = (FName)(local_228.DebugPtr)->_padding_;
            ::FName::ToString(&local_198,&local_158);
            FVar25.Data = (FScriptContainerElement *)L"";
            if (local_158.Data.ArrayNum != 0) {
              FVar25.Data = local_158.Data.AllocatorInstance.Data;
            }
            FLiveLinkLog::Log_Internal<wchar_t_const_*,wchar_t_const_*>
                      (Error,NAME_InvalidFrameData,&param_1->SubjectKey,
                       (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*>)
                       0x152a9be40,(wchar_t *)FVar25.Data,(wchar_t *)FVar30.Data);
            if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_158.Data.AllocatorInstance.Data);
            }
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
              FStructOnScope::~FStructOnScope(&local_218);
              goto LAB_14d071f4c;
            }
          }
        }
        else {
          lVar14 = (**(code **)(local_218._padding_ + 0x10))(&local_218);
          if (lVar14 != 0) {
            pUVar17 = TSubclassOf<ULiveLinkRole>::GetDefaultObject
                                ((TSubclassOf<ULiveLinkRole> *)&local_228.ObjectPtr);
            pcVar5 = *(code **)(*(longlong *)pUVar17 + 0x2e0);
            uVar16 = (**(code **)(this_00->_padding_ + 0x50))(this_00,0);
            cVar9 = (*pcVar5)(pUVar17,uVar16,&local_218,local_res18);
            if (cVar9 == '\0') {
              if (local_res18[0] == '\0') goto LAB_14d0727a4;
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
                ::FName::FName(&NAME_InvalidFrameData,"LiveLinkClient_InvalidUnmappedFrameData");
                _Init_thread_footer(&::_TSS1);
              }
              ::FName::ToString(&(param_1->SubjectKey).SubjectName.Name,&local_128);
              TVar26 = local_228;
              FVar30.Data = (FScriptContainerElement *)L"";
              if (local_128.Data.ArrayNum != 0) {
                FVar30.Data = local_128.Data.AllocatorInstance.Data;
              }
              if ((local_228.DebugPtr == (UClass *)0x0) ||
                 (pUVar15 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar15 == (UClass *)0x0)
                 ) {
LAB_14d0723fa:
                local_228.DebugPtr = (UClass *)0x0;
              }
              else {
                iVar2 = (int)pUVar15->_padding_;
                if (((int)(TVar26.DebugPtr)->_padding_ < iVar2) ||
                   ((longlong *)*(undefined1 **)((TVar26.DebugPtr)->_padding_ + (longlong)iVar2 * 8)
                    != &pUVar15->_padding_)) {
                  bVar8 = false;
                }
                else {
                  bVar8 = true;
                }
                if (!bVar8) goto LAB_14d0723fa;
              }
              local_190 = (FName)(local_228.DebugPtr)->_padding_;
              ::FName::ToString(&local_190,&local_138);
              FVar25.Data = (FScriptContainerElement *)L"";
              if (local_138.Data.ArrayNum != 0) {
                FVar25.Data = local_138.Data.AllocatorInstance.Data;
              }
              FLiveLinkLog::Log_Internal<wchar_t_const_*,wchar_t_const_*>
                        (Error,NAME_InvalidFrameData,&param_1->SubjectKey,
                         (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*>)
                         0x152a9bf20,(wchar_t *)FVar25.Data,(wchar_t *)FVar30.Data);
              if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_138.Data.AllocatorInstance.Data);
              }
              if (local_128.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
              goto LAB_14d0727a4;
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
              FStructOnScope::~FStructOnScope(&local_218);
              goto LAB_14d071f4c;
            }
          }
          lVar14 = (**(code **)((pFVar27->WrappedStruct)._padding_ + 0x18))(pFVar27);
          if (lVar14 != 0) {
            dVar6 = FWindowsPlatformTime::Seconds();
            lVar14 = (**(code **)((pFVar27->WrappedStruct)._padding_ + 0x18))(pFVar27);
            *(double *)(lVar14 + 0x80) = dVar6;
            FVar7 = FApp::CurrentFrameTime.TypedValue;
            if (FApp::CurrentFrameTime.bIsSet != false) {
              lVar14 = (**(code **)((pFVar27->WrappedStruct)._padding_ + 0x18))(pFVar27);
              *(FQualifiedFrameTime *)(lVar14 + 0x88) = FVar7;
              lVar14 = (**(code **)(local_218._padding_ + 0x10))(&local_218);
              if ((lVar14 != 0) &&
                 (lVar14 = (**(code **)(local_218._padding_ + 0x18))(&local_218), lVar14 != 0)) {
                lVar14 = (**(code **)(local_218._padding_ + 0x18))(&local_218);
                *(FQualifiedFrameTime *)(lVar14 + 0x88) = FVar7;
              }
            }
          }
          this_03 = TSharedPtr<FLiveLinkTimedDataInput,1>::operator->
                              ((TSharedPtr<FLiveLinkTimedDataInput,1> *)(pFVar29 + 0x28));
          pFVar18 = (FLiveLinkBaseFrameData *)
                    (**(code **)((pFVar27->WrappedStruct)._padding_ + 0x18))(pFVar27);
          FLiveLinkTimedDataInput::ProcessNewFrameTimingInfo(this_03,pFVar18);
          local_res10 = TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
                        ::Find((TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
                                *)&this->SubjectFrameAddedHandles,&(param_1->SubjectKey).SubjectName
                              );
          if (local_res10 == (FSubjectFramesAddedHandles *)0x0) {
            local_178 = UE::LiveLink::Private::ALL_SUBJECTS_DELEGATE_TOKEN;
            local_res10 = TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
                          ::Find((TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
                                  *)&this->SubjectFrameAddedHandles,
                                 (FLiveLinkSubjectName *)&local_178);
            if (local_res10 != (FSubjectFramesAddedHandles *)0x0) {
              local_170.DebugPtr = local_228.DebugPtr;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_228.DebugPtr != (UClass *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_228.DebugPtr);
              }
              local_98.Source.A = (pFVar13->Key).Source.A;
              local_98.Source.B = (pFVar13->Key).Source.B;
              local_98.Source.C = (pFVar13->Key).Source.C;
              local_98.Source.D = (pFVar13->Key).Source.D;
              local_98.SubjectName.Name = (pFVar13->Key).SubjectName.Name;
              TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
              ::Broadcast(&local_res10->OnFrameDataAdded,&local_98,
                          (TSubclassOf<ULiveLinkRole>)&local_170,pFVar27);
              lVar14 = (**(code **)(local_218._padding_ + 0x10))(&local_218);
              local_res8 = &local_218;
              if (lVar14 == 0) {
                local_res8 = &pFVar27->WrappedStruct;
              }
              local_168.DebugPtr = local_228.DebugPtr;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_228.DebugPtr != (UClass *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_228.DebugPtr);
              }
              local_78[0].Source.A = (pFVar13->Key).Source.A;
              local_78[0].Source.B = (pFVar13->Key).Source.B;
              local_78[0].Source.C = (pFVar13->Key).Source.C;
              local_78[0].Source.D = (pFVar13->Key).Source.D;
              TVar26.DebugPtr = (UClass *)&local_168;
              local_78[0].SubjectName.Name = (pFVar13->Key).SubjectName.Name;
              pFVar21 = local_78;
              goto LAB_14d0726f0;
            }
          }
          else {
            local_188.DebugPtr = local_228.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_228.DebugPtr != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_228.DebugPtr);
            }
            local_d8.Source.A = (pFVar13->Key).Source.A;
            local_d8.Source.B = (pFVar13->Key).Source.B;
            local_d8.Source.C = (pFVar13->Key).Source.C;
            local_d8.Source.D = (pFVar13->Key).Source.D;
            local_d8.SubjectName.Name = (pFVar13->Key).SubjectName.Name;
            TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
            ::Broadcast(&local_res10->OnFrameDataAdded,&local_d8,
                        (TSubclassOf<ULiveLinkRole>)&local_188,pFVar27);
            lVar14 = (**(code **)(local_218._padding_ + 0x10))(&local_218);
            local_res8 = &local_218;
            if (lVar14 == 0) {
              local_res8 = &pFVar27->WrappedStruct;
            }
            local_180.DebugPtr = local_228.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_228.DebugPtr != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_228.DebugPtr);
            }
            local_b8.Source.A = (pFVar13->Key).Source.A;
            local_b8.Source.B = (pFVar13->Key).Source.B;
            local_b8.Source.C = (pFVar13->Key).Source.C;
            local_b8.Source.D = (pFVar13->Key).Source.D;
            TVar26.DebugPtr = (UClass *)&local_180;
            local_b8.SubjectName.Name = (pFVar13->Key).SubjectName.Name;
            pFVar21 = &local_b8;
LAB_14d0726f0:
            TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
            ::Broadcast(&local_res10->OnUnmappedFrameDataAdded,pFVar21,
                        (TSubclassOf<ULiveLinkRole>)TVar26,
                        (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)local_res8);
          }
          local_1e8.ComparisonIndex.Value = 0;
          local_1e8.Number = 0;
          pUVar19 = TStrongObjectPtr<ULiveLinkSourceSettings,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                    ::operator->((TStrongObjectPtr<ULiveLinkSourceSettings,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                                  *)(pFVar29 + 0x10));
          if ((pUVar19->ParentSubject).Name == local_1e8) {
            cVar9 = (**(code **)(this_00->_padding_ + 0xa0))(this_00);
            if ((cVar9 == '\0') &&
               (pUVar19 = TStrongObjectPtr<ULiveLinkSourceSettings,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                          ::operator->((TStrongObjectPtr<ULiveLinkSourceSettings,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                                        *)(pFVar29 + 0x10)),
               pUVar19->bTransmitEvaluatedData == false)) {
              HandleSubjectRebroadcast(this,(ILiveLinkSubject *)this_00,pFVar27);
            }
            if (this->bEnableParentSubjects != false) {
              local_f0 = &local_108;
              local_f8 = UE::Core::Private::Function::
                         TFunctionRefCaller<`FLiveLinkClient::PushSubjectFrameData_Internal'::__l70::<lambda_1>,void,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
                         ::Call;
              local_108 = this;
              local_100 = param_1;
              FLiveLinkSourceCollection::ForEachSubject
                        ((this->Collection).Ptr,
                         (TFunctionRef<void___cdecl(FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&)>
                          *)&local_f8);
            }
          }
          FLiveLinkSubject::AddFrameData(this_00,pFVar27);
        }
LAB_14d0727a4:
        FStructOnScope::~FStructOnScope(&local_218);
        goto LAB_14d071f4c;
      }
      pFVar29 = pFVar29 + 0x40;
    } while (pFVar29 != pFVar20);
  }
  UE::FRecursiveMutex::Unlock(&pFVar4->SourcesLock);
LAB_14d071f4c:
  uVar10 = local_res20;
  if ((local_res20 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((uVar10 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((((uVar10 & 4) != 0) && (FVar23 != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_118.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_118.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_160);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_160.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_160.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_160.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_160.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_118);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// PushSubjectStaticData_AnyThread @ 14d072860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FLiveLinkClient::PushSubjectStaticData_AnyThread
          (FLiveLinkClient *this,FLiveLinkSubjectKey *param_1,TSubclassOf<ULiveLinkRole> param_2,
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [72];
  undefined1 local_80 [24];
  undefined8 uStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  void *local_40;
  ulonglong uStack_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_c8._0_4_ = (param_1->Source).A;
  local_c8._4_4_ = (param_1->Source).B;
  local_c8._8_4_ = (param_1->Source).C;
  local_c8._12_4_ = (param_1->Source).D;
  local_c8._24_8_ = *(undefined8 *)param_2.Class.field0_0x0;
  local_c8._16_8_ = (param_1->SubjectName).Name;
  if ((UE::GC::GIsIncrementalReachabilityPending) && ((UClass *)local_c8._24_8_ != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c8._24_8_);
  }
  FStructOnScope::FStructOnScope((FStructOnScope *)(local_c8 + 0x20),&param_3->WrappedStruct);
  local_80._0_8_ = (FScriptContainerElement *)0x0;
  local_80._8_8_ = 0;
  local_60 = (void *)0x0;
  uStack_48 = 0;
  local_40 = (void *)0x0;
  local_80._16_8_ = 0;
  uStack_68 = 0;
  uStack_38 = 0;
  uStack_58 = ___xmm_00000000ffffffff0000008000000000;
  local_50 = _UNK_150631d98;
  PushPendingSubject_AnyThread(this,(FPendingSubjectStatic *)local_c8);
  uStack_38 = uStack_38 & 0xffffffff00000000;
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_80,0,local_80._8_4_);
  iVar1 = SUB84(local_80._8_8_,4);
  local_80._8_8_ = local_80._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_80,0,(int *)(local_80 + 0xc));
  }
  uVar2 = uStack_58._4_4_;
  local_50 = 0xffffffff;
  uStack_58 = (ulonglong)uStack_58._4_4_ << 0x20;
  if (0x80 < uVar2) {
    uStack_58 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_80 + 0x10),0);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if ((FScriptContainerElement *)local_80._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_80._0_8_);
  }
  FStructOnScope::~FStructOnScope((FStructOnScope *)(local_c8 + 0x20));
  return;
}

// PushSubjectStaticData_Internal @ 14d0729c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FLiveLinkClient::PushSubjectStaticData_Internal
          (FLiveLinkClient *this,FPendingSubjectStatic *param_1)

{
  ILiveLinkFrameInterpolationProcessorWorker *pIVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  FName FVar6;
  TSubclassOf<ULiveLinkSubjectSettings> TVar7;
  TSubclassOf<ULiveLinkFrameInterpolationProcessor> TVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_LiveLink_PushStaticData> FVar13;
  UClass *pUVar14;
  FLiveLinkSubject *this_00;
  ULiveLinkRole *pUVar15;
  FLiveLinkCollectionSubjectItem *pFVar16;
  UClass *pUVar17;
  TSubclassOf<ULiveLinkRole> *pTVar18;
  FText *pFVar19;
  FString *pFVar20;
  UObject *pUVar21;
  FLiveLinkSubject *pFVar22;
  ULiveLinkSettings *this_01;
  TObjectPtr<UClass>_u_0 TVar23;
  UPackage *pUVar24;
  ULiveLinkFrameInterpolationProcessor *pUVar25;
  longlong *plVar26;
  UClass *pUVar27;
  ILiveLinkFrameInterpolationProcessorWorker IVar28;
  ForAnyElementType FVar29;
  longlong lVar30;
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *pFVar31;
  FSubjectFramesAddedHandles *this_02;
  ulonglong uVar32;
  ForAnyElementType FVar33;
  FLiveLinkSubjectKey *pFVar34;
  wchar_t *pwVar35;
  FName FVar36;
  FLiveLinkSubject *pFVar37;
  wchar_t *pwVar38;
  FName FVar39;
  undefined1 auStackY_618 [32];
  char local_5b8 [2];
  FGCScopeGuard local_5b6 [6];
  FName local_5b0;
  byte local_5a8;
  FLiveLinkClient *local_5a0;
  FName local_598;
  ILiveLinkFrameInterpolationProcessorWorker local_590;
  FColor_u_0 local_588;
  uint local_584;
  FName local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  FName local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  FName local_540;
  undefined8 local_538;
  undefined8 local_530;
  FLiveLinkSubjectKey local_528;
  FLiveLinkSubjectKey local_510;
  FLiveLinkSubjectKey local_4f8;
  FLiveLinkSubjectKey local_4e0;
  FName local_4c8;
  FName local_4c0;
  FName local_4b8;
  FName local_4b0;
  FName local_4a8;
  FLiveLinkCollectionSourceItem *local_4a0;
  TObjectPtr<UClass>_u_0 local_498;
  UClass *local_490;
  UClass *local_488;
  FName local_480;
  UClass *local_478;
  UClass *local_470;
  UClass *local_468;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  UClass *local_3c0;
  FName local_3b8;
  FName local_3b0;
  FLiveLinkSubject *local_3a8 [2];
  uint local_398;
  uint uStack_394;
  uint uStack_390;
  uint uStack_38c;
  FName local_388;
  FLiveLinkRoleProjectSetting local_378;
  TSharedPtr<FLiveLinkTimedDataInput,1> local_350;
  longlong local_340;
  TReferenceControllerBase<1> *local_338;
  FLiveLinkCollectionSubjectItem local_330;
  undefined1 local_2f8 [16];
  FGuid local_2e8;
  longlong *local_2d8 [2];
  longlong *local_2c8 [2];
  undefined1 local_2b8 [8];
  FName local_2b0;
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [8];
  undefined1 local_298 [16];
  FLiveLinkSubjectKey local_288;
  FLiveLinkSubjectKey local_268;
  uint local_248;
  uint uStack_244;
  uint uStack_240;
  uint uStack_23c;
  FName local_238;
  FLiveLinkSubjectKey local_228;
  FLiveLinkSubjectKey local_208;
  FLiveLinkSubjectKey local_1e8;
  FLiveLinkSubjectKey local_1c8;
  FGuid local_1a8;
  FName local_198;
  undefined1 local_168 [128];
  undefined1 local_e8 [128];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_618;
  this_00 = (FLiveLinkSubject *)0x0;
  FVar13 = StatPtr_STAT_LiveLink_PushStaticData;
  local_5a0 = this;
  if (StatPtr_STAT_LiveLink_PushStaticData ==
      (FThreadSafeStaticStat<FStat_STAT_LiveLink_PushStaticData>)0x0) {
    pFVar12 = ::FName::FName(&local_2b0,"STAT_LiveLink_PushStaticData");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_LiveLink_PushStaticData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LiveLink_PushStaticData,*pFVar12,
                        L"LiveLink - Push StaticData","STATGROUP_LiveLink","STATCAT_Advanced",
                        L"Live Link",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_5b0.ComparisonIndex.Value = 0;
  local_5b0.Number = 0;
  local_5a8 = 0;
  FVar36 = *(FName *)FVar13;
  if ((FVar36.ComparisonIndex.Value.Value != 0) || (FVar36.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_588.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_588._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      local_5a8 = local_5a8 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_580.ComparisonIndex.Value = FVar36.ComparisonIndex.Value.Value;
        local_580.Number = FVar36.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_580,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                   ,0x366);
        local_5a8 = local_5a8 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_5b0 = FVar36;
      local_598 = FVar36;
      FThreadStats::AddMessage(FVar36,CycleScopeStart);
      local_5a8 = local_5a8 | 4;
    }
  }
  pwVar38 = L"";
  if (((this->Collection).Ptr == (FLiveLinkSourceCollection *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Collection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                         ,0x368,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_3c0 = (param_1->Role).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_3c0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_3c0);
  }
  bVar9 = FLiveLinkRoleTrait::Validate((TSubclassOf<ULiveLinkRole>)&local_3c0,&param_1->StaticData);
  if (!bVar9) {
    pUVar17 = (param_1->Role).Class.field0_0x0.DebugPtr;
    if ((pUVar17 != (UClass *)0x0) &&
       (pUVar14 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar14 != (UClass *)0x0)) {
      iVar11 = (int)pUVar14->_padding_;
      if (((int)pUVar17->_padding_ < iVar11) ||
         ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar11 * 8) !=
          &pUVar14->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if ((bVar9) && ((param_1->Role).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
        ::FName::ToString(&(param_1->SubjectKey).SubjectName.Name,&local_440);
        pUVar17 = (param_1->Role).Class.field0_0x0.DebugPtr;
        FVar33.Data = (FScriptContainerElement *)L"";
        if (local_440.Data.ArrayNum != 0) {
          FVar33.Data = local_440.Data.AllocatorInstance.Data;
        }
        if ((pUVar17 != (UClass *)0x0) &&
           (pUVar14 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar14 != (UClass *)0x0)) {
          iVar11 = (int)pUVar14->_padding_;
          if (((int)pUVar17->_padding_ < iVar11) ||
             ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar11 * 8) !=
              &pUVar14->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            this_00 = (FLiveLinkSubject *)(param_1->Role).Class.field0_0x0.DebugPtr;
          }
        }
        local_3b8 = (FName)(this_00->FramePreProcessors).AllocatorInstance.Data;
        ::FName::ToString(&local_3b8,&local_450);
        if (local_450.Data.ArrayNum != 0) {
          pwVar38 = (wchar_t *)local_450.Data.AllocatorInstance.Data;
        }
        local_528.Source.A = 0;
        local_528.Source.B = 0;
        local_528.Source.C = 0;
        local_528.Source.D = 0;
        local_528.SubjectName.Name.ComparisonIndex.Value = 0;
        local_528.SubjectName.Name.Number = 0;
        local_578 = 0;
        FLiveLinkLog::Log_Internal<wchar_t_const_*,wchar_t_const_*>
                  (Error,(FName)0x0,&local_528,
                   (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*>)0x152a9b780
                   ,pwVar38,(wchar_t *)FVar33.Data);
        if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_450.Data.AllocatorInstance.Data);
        }
        if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_440.Data.AllocatorInstance.Data);
        }
        goto LAB_14d073ee4;
      }
    }
    ::FName::ToString(&(param_1->SubjectKey).SubjectName.Name,&local_430);
    local_510.Source.A = 0;
    local_510.Source.B = 0;
    if (local_430.Data.ArrayNum != 0) {
      pwVar38 = (wchar_t *)local_430.Data.AllocatorInstance.Data;
    }
    local_510.Source.C = 0;
    local_510.Source.D = 0;
    local_510.SubjectName.Name.ComparisonIndex.Value = 0;
    local_510.SubjectName.Name.Number = 0;
    local_570 = 0;
    FLiveLinkLog::Log_Internal<wchar_t_const_*>
              (Error,(FName)0x0,&local_510,
               (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152a9b700,pwVar38);
    if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_430.Data.AllocatorInstance.Data);
    }
    goto LAB_14d073ee4;
  }
  local_5b8[0] = '\x01';
  pUVar15 = TSubclassOf<ULiveLinkRole>::GetDefaultObject(&param_1->Role);
  cVar10 = (**(code **)(*(longlong *)pUVar15 + 0x2d8))(pUVar15,&param_1->StaticData,local_5b8);
  if (cVar10 == '\0') {
    if (local_5b8[0] != '\0') {
      ::FName::ToString(&(param_1->SubjectKey).SubjectName.Name,&local_420);
      pUVar17 = (param_1->Role).Class.field0_0x0.DebugPtr;
      FVar33.Data = (FScriptContainerElement *)L"";
      if (local_420.Data.ArrayNum != 0) {
        FVar33.Data = local_420.Data.AllocatorInstance.Data;
      }
      if ((pUVar17 != (UClass *)0x0) &&
         (pUVar14 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar14 != (UClass *)0x0)) {
        iVar11 = (int)pUVar14->_padding_;
        if (((int)pUVar17->_padding_ < iVar11) ||
           ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar11 * 8) !=
            &pUVar14->_padding_)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          this_00 = (FLiveLinkSubject *)(param_1->Role).Class.field0_0x0.DebugPtr;
        }
      }
      local_3b0 = (FName)(this_00->FramePreProcessors).AllocatorInstance.Data;
      ::FName::ToString(&local_3b0,&local_460);
      if (local_460.Data.ArrayNum != 0) {
        pwVar38 = (wchar_t *)local_460.Data.AllocatorInstance.Data;
      }
      local_4f8.Source.A = 0;
      local_4f8.Source.B = 0;
      local_4f8.Source.C = 0;
      local_4f8.Source.D = 0;
      local_4f8.SubjectName.Name.ComparisonIndex.Value = 0;
      local_4f8.SubjectName.Name.Number = 0;
      local_568 = 0;
      FLiveLinkLog::Log_Internal<wchar_t_const_*,wchar_t_const_*>
                (Error,(FName)0x0,&local_4f8,
                 (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*>)0x152a9b820,
                 pwVar38,(wchar_t *)FVar33.Data);
      if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_460.Data.AllocatorInstance.Data);
      }
      if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_420.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_14d073ee4;
  }
  local_2e8.A = (param_1->SubjectKey).Source.A;
  local_2e8.B = (param_1->SubjectKey).Source.B;
  local_2e8.C = (param_1->SubjectKey).Source.C;
  local_2e8.D = (param_1->SubjectKey).Source.D;
  local_4a0 = FLiveLinkSourceCollection::FindSource((this->Collection).Ptr,&local_2e8);
  if ((local_4a0 == (FLiveLinkCollectionSourceItem *)0x0) || (local_4a0->bPendingKill != false))
  goto LAB_14d073ee4;
  local_288.Source.A = (param_1->SubjectKey).Source.A;
  local_288.Source.B = (param_1->SubjectKey).Source.B;
  local_288.Source.C = (param_1->SubjectKey).Source.C;
  local_288.Source.D = (param_1->SubjectKey).Source.D;
  local_288.SubjectName.Name = (param_1->SubjectKey).SubjectName.Name;
  pFVar16 = FLiveLinkSourceCollection::FindSubject((this->Collection).Ptr,&local_288);
  pFVar22 = this_00;
  if ((pFVar16 != (FLiveLinkCollectionSubjectItem *)0x0) && (pFVar16->bPendingKill == false)) {
    pFVar22 = (pFVar16->LiveSubject).Ptr;
    pcVar2 = *(code **)(pFVar22->_padding_ + 0x30);
    pUVar17 = TSubclassOf<ULiveLinkRole>::operator*(&param_1->Role);
    pTVar18 = (TSubclassOf<ULiveLinkRole> *)(*pcVar2)(pFVar22,local_2f8);
    pUVar14 = TSubclassOf<ULiveLinkRole>::operator*(pTVar18);
    if (pUVar14 == pUVar17) {
      (**(code **)(pFVar22->_padding_ + 0x20))(pFVar22);
      this = local_5a0;
    }
    else {
      pUVar15 = TSubclassOf<ULiveLinkRole>::GetDefaultObject(&param_1->Role);
      pFVar19 = (FText *)(**(code **)(*(longlong *)pUVar15 + 0x2d0))(pUVar15,local_2c8);
      pFVar20 = FText::ToString(pFVar19);
      if ((pFVar20->Data).ArrayNum == 0) {
        pwVar38 = L"";
      }
      else {
        pwVar38 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
      }
      pTVar18 = (TSubclassOf<ULiveLinkRole> *)
                (**(code **)(pFVar22->_padding_ + 0x30))(pFVar22,local_2a8);
      pUVar15 = TSubclassOf<ULiveLinkRole>::GetDefaultObject(pTVar18);
      pFVar19 = (FText *)(**(code **)(*(longlong *)pUVar15 + 0x2d0))(pUVar15,local_2d8);
      pFVar20 = FText::ToString(pFVar19);
      if ((pFVar20->Data).ArrayNum == 0) {
        pwVar35 = L"";
      }
      else {
        pwVar35 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
      }
      ::FName::ToString(&(param_1->SubjectKey).SubjectName.Name,&local_410);
      FVar33.Data = (FScriptContainerElement *)L"";
      if (local_410.Data.ArrayNum != 0) {
        FVar33.Data = local_410.Data.AllocatorInstance.Data;
      }
      FLiveLinkLog::Warning<wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
                ((TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
                  )0x152a9b8e0,(wchar_t *)FVar33.Data,pwVar35,pwVar38);
      if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_410.Data.AllocatorInstance.Data);
      }
      if (local_2d8[0] != (longlong *)0x0) {
        (**(code **)(*local_2d8[0] + 0x10))();
      }
      if (local_2c8[0] != (longlong *)0x0) {
        (**(code **)(*local_2c8[0] + 0x10))();
      }
      this = local_5a0;
      pUVar21 = (UObject *)(**(code **)(local_5a0->_padding_ + 0x170))(local_5a0,pFVar16);
      pFVar22 = (FLiveLinkSubject *)Cast<ULiveLinkSubjectSettings,UObject>(pUVar21);
      this_00 = (FLiveLinkSubject *)0x0;
      if (pFVar22 != (FLiveLinkSubject *)0x0) {
        UObjectBase::AddRef((UObjectBase *)pFVar22);
        this_00 = pFVar22;
      }
      local_268.Source.A = (param_1->SubjectKey).Source.A;
      local_268.Source.B = (param_1->SubjectKey).Source.B;
      local_268.Source.C = (param_1->SubjectKey).Source.C;
      local_268.Source.D = (param_1->SubjectKey).Source.D;
      local_268.SubjectName.Name = (param_1->SubjectKey).SubjectName.Name;
      FLiveLinkSourceCollection::RemoveSubject((this->Collection).Ptr,&local_268);
      pFVar22 = (FLiveLinkSubject *)0x0;
    }
  }
  pFVar37 = (FLiveLinkSubject *)0x0;
  FGCScopeGuard::FGCScopeGuard(local_5b6);
  if (pFVar22 == (FLiveLinkSubject *)0x0) {
    this_01 = GetDefault<ULiveLinkSettings>();
    pUVar17 = (param_1->Role).Class.field0_0x0.DebugPtr;
    local_3a8[0] = pFVar37;
    if ((pUVar17 != (UClass *)0x0) &&
       (pUVar14 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar14 != (UClass *)0x0)) {
      iVar11 = (int)pUVar14->_padding_;
      if (((int)pUVar17->_padding_ < iVar11) ||
         ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar11 * 8) !=
          &pUVar14->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9) {
        local_3a8[0] = (FLiveLinkSubject *)(param_1->Role).Class.field0_0x0.DebugPtr;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_3a8[0] != (FLiveLinkSubject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_3a8[0]);
    }
    ULiveLinkSettings::GetDefaultSettingForRole
              (this_01,&local_378,(TSubclassOf<ULiveLinkRole>)local_3a8);
    TVar7.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>)local_378.SettingClass;
    if (this_00 == (FLiveLinkSubject *)0x0) {
      if ((local_378.SettingClass.Class.field0_0x0.DebugPtr == (TObjectPtr<UClass>_u_0)0x0) ||
         (pUVar17 = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister(),
         pUVar17 == (UClass *)0x0)) {
LAB_14d073139:
        TVar23.DebugPtr = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
      }
      else {
        iVar11 = (int)pUVar17->_padding_;
        if (((int)*(longlong *)((longlong)TVar7.Class.field0_0x0 + 0x38) < iVar11) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((longlong)TVar7.Class.field0_0x0 + 0x30) + (longlong)iVar11 * 8) !=
            &pUVar17->_padding_)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if ((!bVar9) ||
           (TVar23 = (TObjectPtr<UClass>_u_0)local_378.SettingClass,
           local_378.SettingClass.Class.field0_0x0.DebugPtr == (TObjectPtr<UClass>_u_0)0x0))
        goto LAB_14d073139;
      }
      local_560.ComparisonIndex.Value = 0;
      local_560.Number = 0;
      pUVar24 = GetTransientPackage();
      FVar36 = local_560;
      local_558 = 0;
      if (local_560 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar24,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar17 = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
      CheckIsClassChildOf_Internal(pUVar17,TVar23.DebugPtr);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_168,TVar23.DebugPtr);
      FVar39 = local_560;
      local_168._48_8_ = (FObjectInstancingGraph *)0x0;
      local_168._56_8_ = (UPackage *)0x0;
      local_560.ComparisonIndex = FVar36.ComparisonIndex.Value;
      local_560.Number = FVar36.Number;
      local_168._16_4_ = local_560.ComparisonIndex.Value;
      local_168._20_4_ = local_560.Number;
      local_168._24_4_ = RF_NoFlags;
      local_168._40_8_ = (UObject *)0x0;
      local_168[0x20] = false;
      local_560 = FVar39;
      local_168._8_8_ = pUVar24;
      pFVar22 = (FLiveLinkSubject *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_168);
      if (local_168._64_8_ != 0) {
        plVar26 = (longlong *)(local_168 + 0x50);
        if ((longlong *)local_168._104_8_ != (longlong *)0x0) {
          plVar26 = (longlong *)local_168._104_8_;
        }
        (**(code **)(*plVar26 + 0x10))();
      }
      this_00 = pFVar37;
      if (pFVar22 != (FLiveLinkSubject *)0x0) {
        UObjectBase::AddRef((UObjectBase *)pFVar22);
        this_00 = pFVar22;
      }
      if ((this_00 == (FLiveLinkSubject *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_398 = (param_1->SubjectKey).Source.A;
    uStack_394 = (param_1->SubjectKey).Source.B;
    uStack_390 = (param_1->SubjectKey).Source.C;
    uStack_38c = (param_1->SubjectKey).Source.D;
    local_388 = (param_1->SubjectKey).SubjectName.Name;
    (**(code **)(this_00->_padding_ + 0x2b0))(this_00,&local_398);
    if ((this_00 == (FLiveLinkSubject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TSubclassOf<ULiveLinkRole>::operator=
              ((TSubclassOf<ULiveLinkRole> *)&this_00->StaticData,&param_1->Role);
    pFVar20 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::Find((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                      *)&param_1->ExtraMetadata,FLiveLinkMessageAnnotation::OriginalSourceAnnotation
                    );
    if (pFVar20 != (FString *)0x0) {
      if ((pFVar20->Data).ArrayNum == 0) {
        pwVar38 = L"";
      }
      else {
        pwVar38 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_4c8,pwVar38);
      if ((this_00 == (FLiveLinkSubject *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(FName *)((longlong)&(this_00->StaticData).WrappedStruct.SampleStructMemory + 4) = local_4c8;
    }
    TVar8.Class.field0_0x0 =
         (TObjectPtr<UClass>)(TObjectPtr<UClass>)local_378.FrameInterpolationProcessor;
    if ((local_378.FrameInterpolationProcessor.Class.field0_0x0.DebugPtr ==
         (TObjectPtr<UClass>_u_0)0x0) ||
       (pUVar17 = Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister(),
       pUVar17 == (UClass *)0x0)) {
LAB_14d073472:
      local_378.FrameInterpolationProcessor.Class.field0_0x0 =
           (TObjectPtr<UClass>)
           TSubclassOf<ULiveLinkFrameInterpolationProcessor>::operator*
                     (&this_01->FrameInterpolationProcessor);
      if (local_378.FrameInterpolationProcessor.Class.field0_0x0.DebugPtr !=
          (TObjectPtr<UClass>_u_0)0x0) {
        pUVar25 = UClass::GetDefaultObject<ULiveLinkFrameInterpolationProcessor>
                            ((UClass *)local_378.FrameInterpolationProcessor.Class.field0_0x0);
        pTVar18 = (TSubclassOf<ULiveLinkRole> *)
                  (**(code **)(*(longlong *)pUVar25 + 0x2b0))(pUVar25,local_298);
        pUVar17 = TSubclassOf<ULiveLinkRole>::operator*(pTVar18);
        pUVar14 = TSubclassOf<ULiveLinkRole>::operator*(&param_1->Role);
        if (pUVar17 != (UClass *)0x0) {
          iVar11 = (int)pUVar17->_padding_;
          if (((int)pUVar14->_padding_ < iVar11) ||
             ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar11 * 8) !=
              &pUVar17->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            local_548 = 0;
            goto LAB_14d0734f7;
          }
        }
      }
    }
    else {
      iVar11 = (int)pUVar17->_padding_;
      if (((int)*(longlong *)((longlong)TVar8.Class.field0_0x0 + 0x38) < iVar11) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((longlong)TVar8.Class.field0_0x0 + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar17->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if ((!bVar9) ||
         (local_378.FrameInterpolationProcessor.Class.field0_0x0.DebugPtr ==
          (TObjectPtr<UClass>_u_0)0x0)) goto LAB_14d073472;
      pUVar25 = UClass::GetDefaultObject<ULiveLinkFrameInterpolationProcessor>
                          ((UClass *)local_378.FrameInterpolationProcessor.Class.field0_0x0);
      pTVar18 = (TSubclassOf<ULiveLinkRole> *)
                (**(code **)(*(longlong *)pUVar25 + 0x2b0))(pUVar25,local_2a0);
      pUVar17 = TSubclassOf<ULiveLinkRole>::operator*(pTVar18);
      pUVar14 = TSubclassOf<ULiveLinkRole>::operator*(&param_1->Role);
      if (pUVar17 == (UClass *)0x0) {
LAB_14d0733db:
        pUVar17 = TSubclassOf<ULiveLinkRole>::operator*(&param_1->Role);
        local_4c0 = (FName)pUVar17->_padding_;
        ::FName::ToString(&local_4c0,&local_3f0);
        local_4b8 = *(FName *)((longlong)local_378.FrameInterpolationProcessor.Class.field0_0x0 +
                              0x18);
        FVar33.Data = (FScriptContainerElement *)L"";
        if (local_3f0.Data.ArrayNum != 0) {
          FVar33.Data = local_3f0.Data.AllocatorInstance.Data;
        }
        ::FName::ToString(&local_4b8,&local_400);
        FVar29.Data = (FScriptContainerElement *)L"";
        if (local_400.Data.ArrayNum != 0) {
          FVar29.Data = local_400.Data.AllocatorInstance.Data;
        }
        FLiveLinkLog::Warning<wchar_t_const_*,wchar_t_const_*>
                  ((TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*>)0x152a9b9d0
                   ,(wchar_t *)FVar29.Data,(wchar_t *)FVar33.Data);
        if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_400.Data.AllocatorInstance.Data);
        }
        if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
        }
      }
      else {
        iVar11 = (int)pUVar17->_padding_;
        if (((int)pUVar14->_padding_ < iVar11) ||
           ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar11 * 8) !=
            &pUVar17->_padding_)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (!bVar9) goto LAB_14d0733db;
        local_550 = 0;
LAB_14d0734f7:
        pUVar25 = NewObject<ULiveLinkFrameInterpolationProcessor>
                            ((UObject *)this_00,
                             (UClass *)local_378.FrameInterpolationProcessor.Class.field0_0x0,
                             (FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                             (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        if ((this_00 == (FLiveLinkSubject *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                               ,0x67,L""), bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar25 != (ULiveLinkFrameInterpolationProcessor *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar25);
        }
        (this_00->FrameTranslators).AllocatorInstance.Data = (FScriptContainerElement *)pUVar25;
        if ((this_00 == (FLiveLinkSubject *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                               ,0x67,L""), bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UObjectBaseUtility::AtomicallyClearInternalFlags
                  ((UObjectBaseUtility *)(this_00->FrameTranslators).AllocatorInstance.Data,Async);
      }
    }
    uVar32 = (ulonglong)local_378.FramePreProcessors.ArrayNum;
    local_584 = local_378.FramePreProcessors.ArrayNum;
    local_598 = (FName)((longlong)local_378.FramePreProcessors.AllocatorInstance.Data + uVar32 * 8);
    FVar36 = local_598;
    FVar39 = (FName)local_378.FramePreProcessors.AllocatorInstance;
    while( true ) {
      if (local_378.FramePreProcessors.ArrayNum != (uint)uVar32) {
        local_5b8[1] = 0;
        `TCheckedPointerIterator<TSubclassOf<ULiveLinkFramePreProcessor>_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_5b8 + 1);
      }
      if (FVar39 == FVar36) break;
      pUVar17 = *(UClass **)FVar39;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar17 != (UClass *)0x0) goto LAB_14d0735f0;
LAB_14d073a9d:
        uVar32 = (ulonglong)local_584;
        FVar39 = (FName)((longlong)FVar39 + 8);
      }
      else {
        if (pUVar17 == (UClass *)0x0) goto LAB_14d073a9d;
        UE::GC::MarkAsReachable((UObject *)pUVar17);
LAB_14d0735f0:
        pUVar14 = Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister();
        if (pUVar14 == (UClass *)0x0) goto LAB_14d073a9d;
        iVar11 = (int)pUVar14->_padding_;
        if (((int)pUVar17->_padding_ < iVar11) ||
           ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar11 * 8) !=
            &pUVar14->_padding_)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (!bVar9) goto LAB_14d073a9d;
        pUVar14 = Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister();
        if (pUVar14 == (UClass *)0x0) {
LAB_14d07365b:
          pUVar14 = (UClass *)0x0;
        }
        else {
          iVar11 = (int)pUVar14->_padding_;
          if (((int)pUVar17->_padding_ < iVar11) ||
             ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar11 * 8) !=
              &pUVar14->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          pUVar14 = pUVar17;
          if (!bVar9) goto LAB_14d07365b;
        }
        if ((pUVar14->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar14);
        }
        pUVar21 = (pUVar14->ClassDefaultObject).field0_0x0.DebugPtr;
        pUVar14 = Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister();
        iVar11 = (int)pUVar14->_padding_;
        if (((*(int *)(*(longlong *)&pUVar21->field_0x10 + 0x38) < iVar11) ||
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar21->field_0x10 + 0x30) + (longlong)iVar11 * 8) !=
             &pUVar14->_padding_)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ret->IsA(T::StaticClass())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x1181,L""), bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar26 = (longlong *)(**(code **)(*(longlong *)pUVar21 + 0x2b0))(pUVar21,local_2b8);
        lVar30 = *plVar26;
        if ((lVar30 == 0) ||
           (pUVar14 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar14 == (UClass *)0x0)) {
LAB_14d07370c:
          lVar30 = 0;
        }
        else {
          iVar11 = (int)pUVar14->_padding_;
          if ((*(int *)(lVar30 + 0x38) < iVar11) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar30 + 0x30) + (longlong)iVar11 * 8) !=
              &pUVar14->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (!bVar9) goto LAB_14d07370c;
          lVar30 = *plVar26;
        }
        pUVar14 = (param_1->Role).Class.field0_0x0.DebugPtr;
        if ((pUVar14 == (UClass *)0x0) ||
           (pUVar27 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar27 == (UClass *)0x0)) {
LAB_14d07374d:
          pUVar14 = (UClass *)0x0;
        }
        else {
          iVar11 = (int)pUVar27->_padding_;
          if (((int)pUVar14->_padding_ < iVar11) ||
             ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar11 * 8) !=
              &pUVar27->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (!bVar9) goto LAB_14d07374d;
          pUVar14 = (param_1->Role).Class.field0_0x0.DebugPtr;
        }
        if (lVar30 == 0) {
LAB_14d07396b:
          pUVar14 = (param_1->Role).Class.field0_0x0.DebugPtr;
          if ((pUVar14 == (UClass *)0x0) ||
             (pUVar27 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar27 == (UClass *)0x0)) {
LAB_14d0739aa:
            pUVar14 = (UClass *)0x0;
          }
          else {
            iVar11 = (int)pUVar27->_padding_;
            if (((int)pUVar14->_padding_ < iVar11) ||
               ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar11 * 8) !=
                &pUVar27->_padding_)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (!bVar9) goto LAB_14d0739aa;
            pUVar14 = (param_1->Role).Class.field0_0x0.DebugPtr;
          }
          local_4b0 = (FName)pUVar14->_padding_;
          ::FName::ToString(&local_4b0,&local_3d0);
          FVar33.Data = (FScriptContainerElement *)L"";
          if (local_3d0.Data.ArrayNum != 0) {
            FVar33.Data = local_3d0.Data.AllocatorInstance.Data;
          }
          pUVar14 = Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister();
          if (pUVar14 == (UClass *)0x0) {
LAB_14d073a07:
            pUVar17 = (UClass *)0x0;
          }
          else {
            iVar11 = (int)pUVar14->_padding_;
            if (((int)pUVar17->_padding_ < iVar11) ||
               ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar11 * 8) !=
                &pUVar14->_padding_)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (!bVar9) goto LAB_14d073a07;
          }
          local_4a8 = (FName)pUVar17->_padding_;
          ::FName::ToString(&local_4a8,&local_3e0);
          local_530 = 0;
          FVar29.Data = (FScriptContainerElement *)L"";
          if (local_3e0.Data.ArrayNum != 0) {
            FVar29.Data = local_3e0.Data.AllocatorInstance.Data;
          }
          local_4e0.Source.A = 0;
          local_4e0.Source.B = 0;
          local_4e0.Source.C = 0;
          local_4e0.Source.D = 0;
          local_4e0.SubjectName.Name.ComparisonIndex.Value = 0;
          local_4e0.SubjectName.Name.Number = 0;
          FLiveLinkLog::Log_Internal<wchar_t_const_*,wchar_t_const_*>
                    (Warning,(FName)0x0,&local_4e0,
                     (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*>)
                     0x152a9ba40,(wchar_t *)FVar29.Data,(wchar_t *)FVar33.Data);
          if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
          }
          FVar36 = local_598;
          if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
            FVar36 = local_598;
          }
          goto LAB_14d073a9d;
        }
        if (((int)pUVar14->_padding_ < *(int *)(lVar30 + 0x38)) ||
           (*(longlong *)(pUVar14->_padding_ + (longlong)*(int *)(lVar30 + 0x38) * 8) !=
            lVar30 + 0x30)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (!bVar9) goto LAB_14d07396b;
        if ((this_00 == (FLiveLinkSubject *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                               ,0x67,L""), bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_540.ComparisonIndex.Value = 0;
        local_540.Number = 0;
        pUVar14 = Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister();
        FVar36 = local_540;
        if (pUVar14 == (UClass *)0x0) {
LAB_14d0737dd:
          pUVar17 = (UClass *)0x0;
        }
        else {
          iVar11 = (int)pUVar14->_padding_;
          if (((int)pUVar17->_padding_ < iVar11) ||
             ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar11 * 8) !=
              &pUVar14->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (!bVar9) goto LAB_14d0737dd;
        }
        local_538 = 0;
        if (local_540 == (FName)0x0) {
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)this_00,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
        }
        pUVar14 = Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister();
        CheckIsClassChildOf_Internal(pUVar14,pUVar17);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_e8,pUVar17);
        FVar6 = local_540;
        local_e8._24_4_ = RF_NoFlags;
        local_e8._40_8_ = (UObject *)0x0;
        local_e8[0x20] = false;
        local_e8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_e8._56_8_ = (UPackage *)0x0;
        local_540.ComparisonIndex = FVar36.ComparisonIndex.Value;
        local_540.Number = FVar36.Number;
        local_e8._16_4_ = local_540.ComparisonIndex.Value;
        local_e8._20_4_ = local_540.Number;
        local_540 = FVar6;
        local_e8._8_8_ = this_00;
        IVar28 = (ILiveLinkFrameInterpolationProcessorWorker)
                 StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_e8);
        if (local_e8._64_8_ != 0) {
          plVar26 = (longlong *)(local_e8 + 0x50);
          if ((longlong *)local_e8._104_8_ != (longlong *)0x0) {
            plVar26 = (longlong *)local_e8._104_8_;
          }
          (**(code **)(*plVar26 + 0x10))();
        }
        local_590 = IVar28;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (IVar28 != (ILiveLinkFrameInterpolationProcessorWorker)0x0)) {
          UE::GC::MarkAsReachable((UObject *)IVar28);
        }
        pIVar1 = (this_00->FrameInterpolationProcessor).Object;
        if (((pIVar1 <= &local_590) &&
            (&local_590 <
             pIVar1 + *(int *)((longlong)
                               &(this_00->FrameInterpolationProcessor).SharedReferenceCount.
                                ReferenceController + 4))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar11 = *(int *)&(this_00->FrameInterpolationProcessor).SharedReferenceCount.
                          ReferenceController;
        piVar5 = (int *)((longlong)
                         &(this_00->FrameInterpolationProcessor).SharedReferenceCount.
                          ReferenceController + 4);
        if (iVar11 == *piVar5) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&this_00->FrameInterpolationProcessor,
                              piVar5);
        }
        *(int *)&(this_00->FrameInterpolationProcessor).SharedReferenceCount.ReferenceController =
             iVar11 + 1;
        pIVar1 = (this_00->FrameInterpolationProcessor).Object + iVar11;
        *pIVar1 = local_590;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_590 != (ILiveLinkFrameInterpolationProcessorWorker)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_590);
        }
        UObjectBaseUtility::AtomicallyClearInternalFlags((UObjectBaseUtility *)*pIVar1,Async);
        uVar32 = (ulonglong)local_584;
        FVar39 = (FName)((longlong)FVar39 + 8);
        FVar36 = local_598;
      }
    }
    pFVar16 = FLiveLinkSourceCollection::FindEnabledSubject
                        ((local_5a0->Collection).Ptr,
                         (FLiveLinkSubjectName)(param_1->SubjectKey).SubjectName.Name);
    pFVar22 = ::operator_new(0x260);
    if (pFVar22 == (FLiveLinkSubject *)0x0) {
      pFVar22 = (FLiveLinkSubject *)0x0;
    }
    else {
      local_350.Object = (local_4a0->TimedData).Object;
      local_350.SharedReferenceCount.ReferenceController =
           (local_4a0->TimedData).SharedReferenceCount.ReferenceController;
      if (local_350.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_350.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_350.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar22 = FLiveLinkSubject::FLiveLinkSubject(pFVar22,&local_350);
    }
    uVar3._0_4_ = (param_1->SubjectKey).Source.A;
    uVar3._4_4_ = (param_1->SubjectKey).Source.B;
    uVar4._0_4_ = (param_1->SubjectKey).Source.C;
    uVar4._4_4_ = (param_1->SubjectKey).Source.D;
    FVar36 = (param_1->SubjectKey).SubjectName.Name;
    pFVar37 = (FLiveLinkSubject *)0x0;
    local_1a8._0_8_ = uVar3;
    local_1a8._8_8_ = uVar4;
    local_198 = FVar36;
    if (this_00 != (FLiveLinkSubject *)0x0) {
      UObjectBase::AddRef((UObjectBase *)this_00);
      pFVar37 = this_00;
    }
    pUVar17 = (param_1->Role).Class.field0_0x0.DebugPtr;
    pcVar2 = *(code **)(pFVar22->_padding_ + 8);
    if ((pUVar17 == (UClass *)0x0) ||
       (pUVar14 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar14 == (UClass *)0x0)) {
LAB_14d073b7b:
      local_498.DebugPtr = (UClass *)0x0;
    }
    else {
      iVar11 = (int)pUVar14->_padding_;
      if (((int)pUVar17->_padding_ < iVar11) ||
         ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar11 * 8) !=
          &pUVar14->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (!bVar9) goto LAB_14d073b7b;
      local_498 = (TObjectPtr<UClass>_u_0)(param_1->Role).Class.field0_0x0.DebugPtr;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_498.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_498.DebugPtr);
    }
    this = local_5a0;
    local_248 = (param_1->SubjectKey).Source.A;
    uStack_244 = (param_1->SubjectKey).Source.B;
    uStack_240 = (param_1->SubjectKey).Source.C;
    uStack_23c = (param_1->SubjectKey).Source.D;
    local_238 = (param_1->SubjectKey).SubjectName.Name;
    (*pcVar2)(pFVar22,&local_248,&local_498,local_5a0);
    if ((this_00 == (FLiveLinkSubject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UObjectBaseUtility::AtomicallyClearInternalFlags((UObjectBaseUtility *)this_00,Async);
    local_330.bPendingKill = false;
    local_330.VirtualSubject.Object = (UObject *)0x0;
    local_330.Key.Source._0_8_ = uVar3;
    local_330.Key.Source._8_8_ = uVar4;
    local_330.Key.SubjectName.Name = FVar36;
    local_330.bEnabled = pFVar16 == (FLiveLinkCollectionSubjectItem *)0x0;
    local_330.Setting.Object = (UObject *)pFVar37;
    local_330.LiveSubject.Ptr = pFVar22;
    FLiveLinkSourceCollection::AddSubject((this->Collection).Ptr,&local_330);
    if ((FName)local_378.FramePreProcessors.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_378.FramePreProcessors.AllocatorInstance.Data);
    }
  }
  pFVar31 = &param_1->StaticData;
  if (pFVar22 != (FLiveLinkSubject *)0x0) {
    (**(code **)(pFVar22->_padding_ + 0x68))(pFVar22,&local_340);
    if (local_340 != 0) {
      lVar30 = (**(code **)(this->_padding_ + 0x170))(this,param_1);
      if (lVar30 != 0) {
        pUVar17 = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
        iVar11 = (int)pUVar17->_padding_;
        if (((iVar11 <= *(int *)(*(longlong *)(lVar30 + 0x10) + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar30 + 0x10) + 0x30) + (longlong)iVar11 * 8) ==
             &pUVar17->_padding_)) && (*(longlong *)(lVar30 + 0x50) != 0)) {
          (**(code **)(pFVar22->_padding_ + 0x80))(pFVar22,0);
        }
      }
      pFVar31 = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)
                (**(code **)(pFVar22->_padding_ + 0x50))(pFVar22,0);
      this = local_5a0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_338);
    this_02 = TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
              ::Find((TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
                      *)&this->SubjectFrameAddedHandles,&(param_1->SubjectKey).SubjectName);
    if (this_02 == (FSubjectFramesAddedHandles *)0x0) {
      local_480 = UE::LiveLink::Private::ALL_SUBJECTS_DELEGATE_TOKEN;
      this_02 = TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
                ::Find((TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
                        *)&this->SubjectFrameAddedHandles,(FLiveLinkSubjectName *)&local_480);
      if (this_02 != (FSubjectFramesAddedHandles *)0x0) {
        local_478 = (param_1->Role).Class.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_478 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_478);
        }
        local_1e8.Source.A = (param_1->SubjectKey).Source.A;
        local_1e8.Source.B = (param_1->SubjectKey).Source.B;
        local_1e8.Source.C = (param_1->SubjectKey).Source.C;
        local_1e8.Source.D = (param_1->SubjectKey).Source.D;
        local_1e8.SubjectName.Name = (param_1->SubjectKey).SubjectName.Name;
        TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
        ::Broadcast(&this_02->OnStaticDataAdded,&local_1e8,(TSubclassOf<ULiveLinkRole>)&local_478,
                    &param_1->StaticData);
        local_470 = (param_1->Role).Class.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_470 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_470);
        }
        local_1c8.Source.A = (param_1->SubjectKey).Source.A;
        local_1c8.Source.B = (param_1->SubjectKey).Source.B;
        local_1c8.Source.C = (param_1->SubjectKey).Source.C;
        local_1c8.Source.D = (param_1->SubjectKey).Source.D;
        TVar23.DebugPtr = (UClass *)&local_470;
        local_1c8.SubjectName.Name = (param_1->SubjectKey).SubjectName.Name;
        pFVar34 = &local_1c8;
        goto LAB_14d073e8d;
      }
    }
    else {
      local_490 = (param_1->Role).Class.field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_490 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_490);
      }
      local_228.Source.A = (param_1->SubjectKey).Source.A;
      local_228.Source.B = (param_1->SubjectKey).Source.B;
      local_228.Source.C = (param_1->SubjectKey).Source.C;
      local_228.Source.D = (param_1->SubjectKey).Source.D;
      local_228.SubjectName.Name = (param_1->SubjectKey).SubjectName.Name;
      TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
      ::Broadcast(&this_02->OnStaticDataAdded,&local_228,(TSubclassOf<ULiveLinkRole>)&local_490,
                  &param_1->StaticData);
      local_488 = (param_1->Role).Class.field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_488 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_488);
      }
      local_208.Source.A = (param_1->SubjectKey).Source.A;
      local_208.Source.B = (param_1->SubjectKey).Source.B;
      local_208.Source.C = (param_1->SubjectKey).Source.C;
      local_208.Source.D = (param_1->SubjectKey).Source.D;
      TVar23.DebugPtr = (UClass *)&local_488;
      local_208.SubjectName.Name = (param_1->SubjectKey).SubjectName.Name;
      pFVar34 = &local_208;
LAB_14d073e8d:
      TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
      ::Broadcast(&this_02->OnUnmappedStaticDataAdded,pFVar34,(TSubclassOf<ULiveLinkRole>)TVar23,
                  pFVar31);
    }
    local_468 = (param_1->Role).Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_468 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_468);
    }
    FLiveLinkSubject::SetStaticData
              (pFVar22,(TSubclassOf<ULiveLinkRole>)&local_468,&param_1->StaticData);
  }
  FGCScopeGuard::~FGCScopeGuard(local_5b6);
  if (this_00 != (FLiveLinkSubject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
  }
LAB_14d073ee4:
  if ((local_5a8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_5a8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_5a8 & 4) != 0) {
    FThreadStats::AddMessage(local_5b0,CycleScopeEnd);
  }
  return;
}

// RebroadcastSubjects @ 14d074a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FLiveLinkClient::RebroadcastSubjects
          (FLiveLinkClient *this,
          TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
          *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStackY_e8 [32];
  code *local_b8;
  FLiveLinkClient **local_b0;
  FLiveLinkClient *local_a8 [2];
  FLiveLinkClient *local_98;
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ForElementType<FSetElementId> local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_b0 = local_a8;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLiveLinkClient::RebroadcastSubjects'::__l2::<lambda_1>,void,FLiveLinkSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
             ::Call;
  local_a8[0] = this;
  ForEachLiveSubject(this,(TFunctionRef<void___cdecl(FLiveLinkSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&)>
                           *)&local_b8);
  uVar4 = _UNK_150631d98;
  uVar3 = ___xmm_00000000ffffffff0000008000000000;
  local_68 = ___xmm_00000000ffffffff0000008000000000;
  uStack_60 = _UNK_150631d98;
  local_90._0_8_ = (FScriptContainerElement *)0x0;
  local_90._8_8_ = 0;
  local_70 = (void *)0x0;
  local_50 = (ForElementType<FSetElementId>)0x0;
  local_48 = 0;
  local_98 = this;
  TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>::operator=
            ((TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
              *)local_90,param_1);
  local_b0 = &local_98;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLiveLinkClient::RebroadcastSubjects'::__l2::<lambda_2>,void,FLiveLinkSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
             ::Call;
  ForEachLiveSubject(this,(TFunctionRef<void___cdecl(FLiveLinkSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&)>
                           *)&local_b8);
  local_48 = 0;
  if (local_50 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_50);
  }
  iVar1 = SUB84(local_90._8_8_,4);
  local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
    uVar3 = ___xmm_00000000ffffffff0000008000000000;
    uVar4 = _UNK_150631d98;
  }
  uVar2 = local_68._4_4_;
  uStack_60 = 0xffffffff;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_68 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
    uVar3 = ___xmm_00000000ffffffff0000008000000000;
    uVar4 = _UNK_150631d98;
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
    uVar3 = ___xmm_00000000ffffffff0000008000000000;
    uVar4 = _UNK_150631d98;
  }
  if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
    uVar3 = ___xmm_00000000ffffffff0000008000000000;
    uVar4 = _UNK_150631d98;
  }
  local_90._0_8_ = (FScriptContainerElement *)0x0;
  local_90._8_8_ = 0;
  local_70 = (void *)0x0;
  local_50 = (ForElementType<FSetElementId>)0x0;
  local_48 = 0;
  local_98 = this;
  local_68 = uVar3;
  uStack_60 = uVar4;
  TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>::operator=
            ((TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
              *)local_90,param_1);
  local_b0 = &local_98;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLiveLinkClient::RebroadcastSubjects'::__l2::<lambda_3>,void,ULiveLinkVirtualSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
             ::Call;
  ForEachVirtualSubject
            (this,(TFunctionRef<void___cdecl(ULiveLinkVirtualSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&)>
                   *)&local_b8);
  local_48 = 0;
  if (local_50 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_50);
  }
  iVar1 = SUB84(local_90._8_8_,4);
  local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
  }
  uVar2 = local_68._4_4_;
  uStack_60 = 0xffffffff;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_68 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  return;
}

// RegisterForFrameDataReceived @ 14d075340

void __thiscall
FLiveLinkClient::RegisterForFrameDataReceived
          (FLiveLinkClient *this,FLiveLinkSubjectKey *param_1,
          TDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
          *param_2,TDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                   *param_3,FDelegateHandle *param_4,FDelegateHandle *param_5)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  code *pcVar2;
  FDelegateHandle *pFVar3;
  FDelegateHandle *pFVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  ulong64 uVar8;
  FSubjectFramesReceivedHandles *this_00;
  FDelegateHandle FVar9;
  
  pFVar4 = param_5;
  pFVar3 = param_4;
  lpCriticalSection = &this->SubjectFrameReceivedHandleseCriticalSection;
  param_4->ID = 0;
  param_5->ID = 0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar8 = CityHash64((char *)param_1,0x10);
  FVar1 = (param_1->SubjectName).Name;
  uVar7 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  this_00 = TMapBase<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,0>_>
            ::FindOrAddImpl<FLiveLinkSubjectKey_const_&>
                      ((TMapBase<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,0>_>
                        *)&this->SubjectFrameReceivedHandles,
                       (uVar7 + FVar1.Number) * 0xd + (int)uVar8,param_1);
  if (param_2 ==
      (TDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
       *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_2);
  if ((*(int *)&param_2->field_0x30 == 0) || (*(longlong **)&param_2->field_0x28 == (longlong *)0x0)
     ) {
LAB_14d075448:
    LeaveCriticalSection((LPCRITICAL_SECTION)param_2);
  }
  else {
    cVar6 = (**(code **)(**(longlong **)&param_2->field_0x28 + 0x38))();
    if (cVar6 == '\0') goto LAB_14d075448;
    LeaveCriticalSection((LPCRITICAL_SECTION)param_2);
    FVar9 = TMulticastDelegateRegistration<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
            ::Add((TMulticastDelegateRegistration<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
                   *)this_00,
                  (TDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
                   *)&param_4);
                    /* WARNING: Load size is inaccurate */
    pFVar3->ID = *FVar9.ID;
  }
  if (param_3 ==
      (TDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
       *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_3);
  if ((*(int *)&param_3->field_0x30 != 0) && (*(longlong **)&param_3->field_0x28 != (longlong *)0x0)
     ) {
    cVar6 = (**(code **)(**(longlong **)&param_3->field_0x28 + 0x38))();
    if (cVar6 != '\0') {
      LeaveCriticalSection((LPCRITICAL_SECTION)param_3);
      FVar9 = TMulticastDelegateRegistration<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
              ::Add((TMulticastDelegateRegistration<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                     *)&this_00->OnFrameDataReceived,
                    (TDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                     *)&param_5);
                    /* WARNING: Load size is inaccurate */
      pFVar4->ID = *FVar9.ID;
      goto LAB_14d0754ca;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)param_3);
LAB_14d0754ca:
                    /* WARNING: Could not recover jumptable at 0x00014d0754e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RegisterForSubjectFrames @ 14d075500

bool __thiscall
FLiveLinkClient::RegisterForSubjectFrames
          (FLiveLinkClient *this,FLiveLinkSubjectName param_1,
          TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
          *param_2,TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                   *param_3,FDelegateHandle *param_4,FDelegateHandle *param_5,
          TSubclassOf<ULiveLinkRole> *param_6,
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_7)

{
  UObject *pUVar1;
  FName FVar2;
  uint uVar3;
  FLiveLinkCollectionSubjectItem *pFVar4;
  FSubjectFramesAddedHandles *this_00;
  FDelegateHandle FVar5;
  undefined8 *puVar6;
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *pFVar7;
  longlong lVar8;
  FName *pFVar9;
  FLiveLinkSubject *pFVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  FName local_res10;
  
  local_res10 = param_1.Name;
  pFVar4 = FLiveLinkSourceCollection::FindEnabledSubject((this->Collection).Ptr,param_1);
  FVar2 = local_res10;
  if (pFVar4 == (FLiveLinkCollectionSubjectItem *)0x0) {
    return false;
  }
  uVar3 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  uVar3 = uVar3 + FVar2.Number;
  if (*(int *)&(this->SubjectFrameAddedHandles).field_0x8 !=
      *(int *)&(this->SubjectFrameAddedHandles).field_0x34) {
    puVar11 = *(undefined1 **)&(this->SubjectFrameAddedHandles).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->SubjectFrameAddedHandles).field_0x38;
    }
    uVar12 = *(uint *)(puVar11 +
                      (ulonglong)(*(int *)&(this->SubjectFrameAddedHandles).field_0x48 - 1U & uVar3)
                      * 4);
    if (uVar12 != 0xffffffff) {
      do {
        pFVar9 = (FName *)((longlong)(int)uVar12 * 0x110 +
                          *(longlong *)&this->SubjectFrameAddedHandles);
        if (*pFVar9 == local_res10) {
          if (pFVar9 != (FName *)0x0) {
            this_00 = (FSubjectFramesAddedHandles *)(pFVar9 + 1);
            goto LAB_14d0755c2;
          }
          break;
        }
        uVar12 = pFVar9[0x21].ComparisonIndex.Value;
      } while (uVar12 != 0xffffffff);
    }
  }
  this_00 = TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
            ::EmplaceByHash<FLiveLinkSubjectName_const_&>
                      ((TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
                        *)&this->SubjectFrameAddedHandles,uVar3,(FLiveLinkSubjectName *)&local_res10
                      );
LAB_14d0755c2:
  FVar5 = TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
          ::Add((TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
                 *)this_00,
                (TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
                 *)local_res8);
                    /* WARNING: Load size is inaccurate */
  param_4->ID = *FVar5.ID;
  FVar5 = TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
          ::Add((TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                 *)&this_00->OnFrameDataAdded,
                (TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                 *)local_res8);
                    /* WARNING: Load size is inaccurate */
  param_5->ID = *FVar5.ID;
  pUVar1 = (pFVar4->VirtualSubject).Object;
  if (pUVar1 == (UObject *)0x0) {
    pFVar10 = (pFVar4->LiveSubject).Ptr;
  }
  else {
    pFVar10 = (FLiveLinkSubject *)(pUVar1 + 1);
  }
  puVar6 = (undefined8 *)(**(code **)(pFVar10->_padding_ + 0x30))(pFVar10,local_res8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar6 != (UObject *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)*puVar6);
  }
  (param_6->Class).field0_0x0.DebugPtr = (UClass *)*puVar6;
  if (param_7 != (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0) {
    pUVar1 = (pFVar4->VirtualSubject).Object;
    if (pUVar1 == (UObject *)0x0) {
      pFVar10 = (pFVar4->LiveSubject).Ptr;
    }
    else {
      pFVar10 = (FLiveLinkSubject *)(pUVar1 + 1);
    }
    pFVar7 = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)
             (**(code **)(pFVar10->_padding_ + 0x50))(pFVar10,1);
    lVar8 = (**(code **)((pFVar7->WrappedStruct)._padding_ + 0x10))(pFVar7);
    if (lVar8 != 0) {
      FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::InitializeWith(param_7,pFVar7);
      return true;
    }
    (**(code **)((param_7->WrappedStruct)._padding_ + 0x48))();
  }
  return true;
}

// RegisterGlobalSubjectFramesDelegate @ 14d0756d0

bool __thiscall
FLiveLinkClient::RegisterGlobalSubjectFramesDelegate
          (FLiveLinkClient *this,
          TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
          *param_1,TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                   *param_2,FDelegateHandle *param_3,FDelegateHandle *param_4,bool param_5)

{
  TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
  *pTVar1;
  FName FVar2;
  uint uVar3;
  FSubjectFramesAddedHandles *pFVar4;
  FDelegateHandle FVar5;
  FName *pFVar6;
  FSubjectFramesAddedHandles *this_00;
  undefined1 *puVar7;
  TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
  *pTVar8;
  uint uVar9;
  FName local_res8;
  undefined1 local_28 [16];
  
  FVar2 = UE::LiveLink::Private::ALL_SUBJECTS_DELEGATE_TOKEN;
  local_res8 = UE::LiveLink::Private::ALL_SUBJECTS_DELEGATE_TOKEN;
  uVar3 = ::GetTypeHash(UE::LiveLink::Private::ALL_SUBJECTS_DELEGATE_TOKEN.ComparisonIndex.Value);
  uVar3 = uVar3 + FVar2.Number;
  if (*(int *)&(this->SubjectFrameAddedHandles).field_0x8 !=
      *(int *)&(this->SubjectFrameAddedHandles).field_0x34) {
    puVar7 = *(undefined1 **)&(this->SubjectFrameAddedHandles).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->SubjectFrameAddedHandles).field_0x38;
    }
    uVar9 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(this->SubjectFrameAddedHandles).field_0x48 - 1U & uVar3) *
                               4);
    if (uVar9 != 0xffffffff) {
      do {
        pFVar6 = (FName *)((longlong)(int)uVar9 * 0x110 +
                          *(longlong *)&this->SubjectFrameAddedHandles);
        if (*pFVar6 == local_res8) {
          if (pFVar6 != (FName *)0x0) {
            pFVar4 = (FSubjectFramesAddedHandles *)(pFVar6 + 1);
            goto LAB_14d075786;
          }
          break;
        }
        uVar9 = pFVar6[0x21].ComparisonIndex.Value;
      } while (uVar9 != 0xffffffff);
    }
  }
  pFVar4 = TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
           ::EmplaceByHash<FLiveLinkSubjectName>
                     ((TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
                       *)&this->SubjectFrameAddedHandles,uVar3,(FLiveLinkSubjectName *)&local_res8);
LAB_14d075786:
  pTVar1 = (TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
            *)local_28;
  this_00 = (FSubjectFramesAddedHandles *)&pFVar4->OnUnmappedStaticDataAdded;
  if (!param_5) {
    this_00 = pFVar4;
    pTVar1 = (TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
              *)&stack0x00000020;
  }
  FVar5 = TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
          ::Add((TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
                 *)this_00,pTVar1);
                    /* WARNING: Load size is inaccurate */
  param_3->ID = *FVar5.ID;
  pTVar8 = (TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
            *)&stack0x00000020;
  if (param_5) {
    pTVar8 = (TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
              *)local_28;
  }
  FVar5 = TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
          ::Add((TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                 *)(&pFVar4->OnFrameDataAdded + (ulonglong)param_5 * 2),pTVar8);
                    /* WARNING: Load size is inaccurate */
  param_4->ID = *FVar5.ID;
  return true;
}

// RemoveAllSources @ 14d0782e0

void __thiscall FLiveLinkClient::RemoveAllSources(FLiveLinkClient *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  if ((this->Collection).Ptr == (FLiveLinkSourceCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                       ,0x2f3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLiveLinkClient::RemoveAllSources'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&>
             ::Call;
  FLiveLinkSourceCollection::ForEachSource
            ((this->Collection).Ptr,
             (TFunctionRef<void___cdecl(FLiveLinkCollectionSourceItem_&)> *)&local_18);
  return;
}

// RemoveAllSourcesWithTimeout @ 14d078820

bool __thiscall FLiveLinkClient::RemoveAllSourcesWithTimeout(FLiveLinkClient *this,float param_1)

{
  double dVar1;
  double dVar2;
  float fVar3;
  LARGE_INTEGER local_res8;
  int local_res10 [2];
  LARGE_INTEGER local_res18;
  code *local_48;
  LARGE_INTEGER *local_40;
  
  RemoveAllSources(this);
  QueryPerformanceCounter(&local_res8);
  fVar3 = __real_3b03126f;
  dVar2 = __real_4170000000000000;
  local_40 = &local_res8;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<``FLiveLinkClient::RemoveAllSourcesWithTimeout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&>
             ::Call;
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + (double)param_1 +
          __real_4170000000000000;
  while( true ) {
    local_res8.QuadPart = (LONGLONG)local_res10;
    local_res10[0] = 0;
    FLiveLinkSourceCollection::ForEachSource
              ((this->Collection).Ptr,
               (TFunctionRef<void___cdecl(FLiveLinkCollectionSourceItem_&)> *)&local_48);
    if (local_res10[0] < 1) {
      return true;
    }
    QueryPerformanceCounter(&local_res18);
    if (dVar1 <= (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar2)
    break;
    FWindowsPlatformProcess::Sleep(fVar3);
  }
  return false;
}

// RemoveRebroadcastedSubject @ 14d079500

void __thiscall
FLiveLinkClient::RemoveRebroadcastedSubject(FLiveLinkClient *this,FLiveLinkSubjectKey *param_1)

{
  TSharedPtr<ILiveLinkProvider,1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong64 uVar7;
  undefined8 local_res8;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  
  pTVar1 = &this->RebroadcastLiveLinkProvider;
  if ((this->RebroadcastLiveLinkProvider).Object != (ILiveLinkProvider *)0x0) {
    GetRebroadcastName(this,(FLiveLinkSubjectKey *)&stack0x00000008);
    uVar7 = CityHash64((char *)param_1,0x10);
    FVar2 = (param_1->SubjectName).Name;
    uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    iVar6 = TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>::
            FindIndexByHash<FLiveLinkSubjectKey>
                      (&this->RebroadcastedSubjects,(uVar5 + FVar2.Number) * 0xd + (int)uVar7,
                       param_1);
    if (iVar6 != -1) {
      if ((pTVar1->Object == (ILiveLinkProvider *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)((longlong)*pTVar1->Object + 0x10))(pTVar1->Object,local_res8);
      if (*(int *)&(this->RebroadcastedSubjects).Elements.field_0x8 !=
          *(int *)&(this->RebroadcastedSubjects).Elements.field_0x34) {
        uVar7 = CityHash64((char *)param_1,0x10);
        FVar2 = (param_1->SubjectName).Name;
        uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
        TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>::
        RemoveImpl<FLiveLinkSubjectKey>
                  (&this->RebroadcastedSubjects,(uVar5 + FVar2.Number) * 0xd + (int)uVar7,param_1);
      }
      if (*(int *)&(this->RebroadcastedSubjects).Elements.field_0x8 -
          *(int *)&(this->RebroadcastedSubjects).Elements.field_0x34 < 1) {
        local_28 = 0;
        FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar1 != (TSharedPtr<ILiveLinkProvider,1> *)&local_28) {
          pTVar1->Object = (ILiveLinkProvider *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->RebroadcastLiveLinkProvider).SharedReferenceCount,&FStack_20);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_20.ReferenceController);
      }
    }
  }
  return;
}

// RemoveSource @ 14d0797a0

void __thiscall FLiveLinkClient::RemoveSource(FLiveLinkClient *this,FGuid *param_1)

{
  FLiveLinkSourceCollection *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int local_18;
  int iStack_14;
  int iStack_c;
  
  if (((this->Collection).Ptr == (FLiveLinkSourceCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Collection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                         ,0x2ea,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Collection).Ptr;
  UE::FRecursiveMutex::Lock(&pFVar1->SourcesLock);
  uVar3 = param_1->A;
  uVar4 = param_1->B;
  uVar5 = param_1->C;
  uVar6 = param_1->D;
  pFVar9 = (pFVar1->Sources).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)(pFVar1->Sources).ArrayNum * 0x40;
  while( true ) {
    if (pFVar9 == pFVar8) {
      UE::FRecursiveMutex::Unlock(&pFVar1->SourcesLock);
      return;
    }
    if (((uVar6 == *(int *)(pFVar9 + 0xc) && uVar5 == *(int *)(pFVar9 + 8)) &&
        uVar4 == *(int *)(pFVar9 + 4)) && uVar3 == *(int *)pFVar9) break;
    pFVar9 = pFVar9 + 0x40;
  }
  UE::FRecursiveMutex::Unlock(&pFVar1->SourcesLock);
  if (pFVar9 == (FScriptContainerElement *)0x0) {
    return;
  }
  pFVar9[0x38] = (FScriptContainerElement)0x1;
  return;
}

// RemoveSource @ 14d079890

void __thiscall
FLiveLinkClient::RemoveSource(FLiveLinkClient *this,TSharedPtr<ILiveLinkSource,1> *param_1)

{
  FLiveLinkSourceCollection *this_00;
  code *pcVar1;
  bool bVar2;
  FLiveLinkCollectionSourceItem *pFVar3;
  TSharedPtr<ILiveLinkSource,1> local_18;
  
  if ((this->Collection).Ptr == (FLiveLinkSourceCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                       ,0x2e1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Object = param_1->Object;
  this_00 = (this->Collection).Ptr;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar3 = FLiveLinkSourceCollection::FindSource(this_00,&local_18);
  if (pFVar3 != (FLiveLinkCollectionSourceItem *)0x0) {
    pFVar3->bPendingKill = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RemoveSubject_AnyThread @ 14d07a190

void __thiscall
FLiveLinkClient::RemoveSubject_AnyThread(FLiveLinkClient *this,FLiveLinkSubjectKey *param_1)

{
  FLiveLinkSourceCollection *this_00;
  FLiveLinkCollectionSubjectItem *pFVar1;
  FLiveLinkSubjectKey local_28;
  
  this_00 = (this->Collection).Ptr;
  if (this_00 != (FLiveLinkSourceCollection *)0x0) {
    local_28.Source.A = (param_1->Source).A;
    local_28.Source.B = (param_1->Source).B;
    local_28.Source.C = (param_1->Source).C;
    local_28.Source.D = (param_1->Source).D;
    local_28.SubjectName.Name = (param_1->SubjectName).Name;
    pFVar1 = FLiveLinkSourceCollection::FindSubject(this_00,&local_28);
    if (pFVar1 != (FLiveLinkCollectionSubjectItem *)0x0) {
      pFVar1->bPendingKill = true;
    }
  }
  return;
}

// RemoveVirtualSubject @ 14d07a1d0

void __thiscall
FLiveLinkClient::RemoveVirtualSubject(FLiveLinkClient *this,FLiveLinkSubjectKey *param_1)

{
  FLiveLinkSourceCollection *this_00;
  FLiveLinkSubjectKey local_28;
  
  this_00 = (this->Collection).Ptr;
  if (this_00 != (FLiveLinkSourceCollection *)0x0) {
    local_28.Source.A = (param_1->Source).A;
    local_28.Source.B = (param_1->Source).B;
    local_28.Source.C = (param_1->Source).C;
    local_28.Source.D = (param_1->Source).D;
    local_28.SubjectName.Name = (param_1->SubjectName).Name;
    FLiveLinkSourceCollection::RemoveSubject(this_00,&local_28);
  }
  return;
}

// SetSubjectEnabled @ 14d07f370

void __thiscall
FLiveLinkClient::SetSubjectEnabled(FLiveLinkClient *this,FLiveLinkSubjectKey *param_1,bool param_2)

{
  FLiveLinkSubjectKey local_28;
  
  local_28.Source.A = (param_1->Source).A;
  local_28.Source.B = (param_1->Source).B;
  local_28.Source.C = (param_1->Source).C;
  local_28.Source.D = (param_1->Source).D;
  local_28.SubjectName.Name = (param_1->SubjectName).Name;
  FLiveLinkSourceCollection::SetSubjectEnabled((this->Collection).Ptr,&local_28,param_2);
  return;
}

// Shutdown @ 14d07f910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkClient::Shutdown(FLiveLinkClient *this)

{
  double dVar1;
  bool bVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  FLLMScope local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FMemScope local_res20;
  undefined8 local_38;
  FSharedReferencer<1> aFStack_30 [4];
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_LiveLink_LiveLinkClient.UniqueName,false,None,Default,true
            );
  local_res10 = LLMTagDeclaration_LiveLink_LiveLinkClient.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res10,true);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnSamplingInput,
             this);
  if ((this->RebroadcastLiveLinkProvider).Object != (ILiveLinkProvider *)0x0) {
    local_38 = 0;
    aFStack_30[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->RebroadcastLiveLinkProvider != (TSharedPtr<ILiveLinkProvider,1> *)&local_38) {
      (this->RebroadcastLiveLinkProvider).Object = (ILiveLinkProvider *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->RebroadcastLiveLinkProvider).SharedReferenceCount,aFStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_30[0].ReferenceController);
  }
  if ((this->Collection).Ptr != (FLiveLinkSourceCollection *)0x0) {
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              (**(code **)(this->_padding_ + 0x200))(this);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
    local_res10 = __real_4000000000000000;
    FConfigCacheIni::GetDouble
              (GConfig,L"LiveLink",L"ClientShutdownTimeout",(double *)&local_res10,&GGameIni);
    QueryPerformanceCounter(&local_res18);
    dVar1 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    do {
      bVar2 = FLiveLinkSourceCollection::RequestShutdown((this->Collection).Ptr);
      QueryPerformanceCounter(&local_res18);
      if ((double)local_res10 <
          (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar1) {
        if (2 < (byte)LogLiveLink._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
        }
        break;
      }
    } while (!bVar2);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Tick @ 14d0814f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkClient::Tick(FLiveLinkClient *this,ELiveLinkTickType param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  ulonglong uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_LiveLink_Client_Tick> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  undefined1 auStackY_1d8 [32];
  LARGE_INTEGER local_178;
  undefined1 local_170 [8];
  FStatMessage local_168;
  FName local_158;
  FLiveLinkClient *local_148;
  TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator> *local_140;
  undefined1 *local_138;
  undefined1 local_128 [32];
  void *local_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  void *local_d8;
  undefined8 local_d0;
  TBitArray<FDefaultBitArrayAllocator> local_c8;
  undefined4 local_a8;
  undefined4 local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  FVar8 = StatPtr_STAT_LiveLink_Client_Tick;
  if (StatPtr_STAT_LiveLink_Client_Tick ==
      (FThreadSafeStaticStat<FStat_STAT_LiveLink_Client_Tick>)0x0) {
    pFVar7 = ::FName::FName((FName *)&local_168,"STAT_LiveLink_Client_Tick");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_LiveLink_Client_Tick>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LiveLink_Client_Tick,*pFVar7,
                       L"LiveLink - Client - Tick","STATGROUP_LiveLink","STATCAT_Advanced",
                       L"Live Link",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar2 = false;
  bVar5 = false;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar2 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.s.LowPart = FVar10.Value;
        local_178.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_178.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkClient.cpp"
                   ,0x5e);
        bVar2 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_178.s.LowPart = FVar10.Value;
      local_178.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      goto LAB_14d08164c;
    }
  }
  bVar3 = false;
  FVar11 = local_158;
LAB_14d08164c:
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.NumBits = 0;
  local_c8.MaxBits = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  DoPendingWork(this,(TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
                      *)&local_d8);
  if (param_1 < Triggered) {
    local_168.NameAndInfo = (FStatNameAndInfo)local_170;
    local_168.StatData.Pad =
         (uchar  [8])
         UE::Core::Private::Function::
         TFunctionRefCaller<`FLiveLinkClient::UpdateSources'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&>
         ::Call;
    FLiveLinkSourceCollection::ForEachSource
              ((this->Collection).Ptr,
               (TFunctionRef<void___cdecl(FLiveLinkCollectionSourceItem_&)> *)&local_168);
  }
  TSet<TTuple<FLiveLinkSubjectName,FLiveLinkSubjectKey>,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FLiveLinkSubjectName,FLiveLinkSubjectKey>,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
           *)&this->EnabledSubjects);
  local_140 = (TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
               *)&local_88;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_138 = local_128;
  local_80 = 0;
  local_168.NameAndInfo = (FStatNameAndInfo)&local_148;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_168.StatData.Pad =
       (uchar  [8])
       UE::Core::Private::Function::
       TFunctionRefCaller<`FLiveLinkClient::BuildThisTicksSubjectSnapshot'::__l2::<lambda_1>,void,FLiveLinkSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
       ::Call;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_128._8_8_ = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = (ForElementType<FSetElementId>)0x0;
  local_e0 = 0;
  local_148 = this;
  ForEachLiveSubject(this,(TFunctionRef<void___cdecl(FLiveLinkSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&)>
                           *)&local_168);
  local_138 = local_128;
  local_168.NameAndInfo = (FStatNameAndInfo)&local_148;
  local_168.StatData.Pad =
       (uchar  [8])
       UE::Core::Private::Function::
       TFunctionRefCaller<`FLiveLinkClient::BuildThisTicksSubjectSnapshot'::__l2::<lambda_2>,void,ULiveLinkVirtualSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
       ::Call;
  local_148 = this;
  local_140 = (TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
               *)&local_d8;
  ForEachVirtualSubject
            (this,(TFunctionRef<void___cdecl(ULiveLinkVirtualSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&)>
                   *)&local_168);
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  uVar6 = local_80 >> 0x20;
  local_80 = local_80 & 0xffffffff00000000;
  if ((int)uVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_88,0,(int *)((longlong)&local_80 + 4));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_78.NumBits = 0;
  if (0x80 < (uint)local_78.MaxBits) {
    local_78.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  RebroadcastSubjects(this,(TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
                            *)local_128);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnLiveLinkTickedDelegate);
  local_e0 = 0;
  if (local_e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  iVar4 = SUB84(local_128._8_8_,4);
  local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
  }
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_100 = 0;
  if (0x80 < local_fc) {
    local_fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  uVar6 = local_d0 >> 0x20;
  local_d0 = local_d0 & 0xffffffff00000000;
  if ((int)uVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)&local_d8,0,(int *)((longlong)&local_d0 + 4));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_c8.NumBits = 0;
  if (0x80 < (uint)local_c8.MaxBits) {
    local_c8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c8,0);
  }
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_168.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar11 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_178);
      local_168.StatData.Pad[4] = '\0';
      local_168.StatData.Pad[5] = '\0';
      local_168.StatData.Pad[6] = '\0';
      local_168.StatData.Pad[7] = '\0';
      local_168.StatData.Pad[0] = local_178.s.LowPart._0_1_;
      local_168.StatData.Pad[1] = local_178.s.LowPart._1_1_;
      local_168.StatData.Pad[2] = local_178.s.LowPart._2_1_;
      local_168.StatData.Pad[3] = local_178.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_168);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// UnpauseSubject_AnyThread @ 14d085d90

void __thiscall
FLiveLinkClient::UnpauseSubject_AnyThread(FLiveLinkClient *this,FLiveLinkSubjectName param_1)

{
  FLiveLinkSourceCollection *this_00;
  FLiveLinkSubject *pFVar1;
  UObject *pUVar2;
  char cVar3;
  FLiveLinkCollectionSubjectItem *pFVar4;
  void *this_01;
  ELiveLinkSubjectState EVar5;
  FLiveLinkSubjectKey local_28;
  
  this_00 = (this->Collection).Ptr;
  if ((this_00 != (FLiveLinkSourceCollection *)0x0) &&
     (pFVar4 = FLiveLinkSourceCollection::FindSubject(this_00,param_1),
     pFVar4 != (FLiveLinkCollectionSubjectItem *)0x0)) {
    pFVar1 = (pFVar4->LiveSubject).Ptr;
    if (pFVar1 == (FLiveLinkSubject *)0x0) {
      pUVar2 = (pFVar4->VirtualSubject).Object;
      if (pUVar2 == (UObject *)0x0) {
        return;
      }
      (**(code **)(*(longlong *)(pUVar2 + 1) + 0xb0))(pUVar2 + 1);
      cVar3 = (**(code **)(*(longlong *)(pUVar2 + 1) + 0x40))();
      EVar5 = InvalidOrDisabled;
      if (cVar3 != '\0') {
        EVar5 = Connected;
      }
      this_01 = (void *)(**(code **)(this->_padding_ + 0x208))(this);
    }
    else {
      (**(code **)(pFVar1->_padding_ + 0xb0))(pFVar1);
      this_01 = (void *)(**(code **)(this->_padding_ + 0x208))(this);
      EVar5 = pFVar1->State;
    }
    local_28.Source.A = (pFVar4->Key).Source.A;
    local_28.Source.B = (pFVar4->Key).Source.B;
    local_28.Source.C = (pFVar4->Key).Source.C;
    local_28.Source.D = (pFVar4->Key).Source.D;
    local_28.SubjectName.Name = (pFVar4->Key).SubjectName.Name;
    TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,enum_ELiveLinkSubjectState),FDefaultTSDelegateUserPolicy>
    ::Broadcast(this_01,&local_28,EVar5);
  }
  return;
}

// UnregisterForFrameDataReceived @ 14d085e60

void __thiscall
FLiveLinkClient::UnregisterForFrameDataReceived
          (FLiveLinkClient *this,FLiveLinkSubjectKey *param_1,FDelegateHandle param_2,
          FDelegateHandle param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FSubjectFramesReceivedHandles *this_00;
  
  lpCriticalSection = &this->SubjectFrameReceivedHandleseCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = TMapBase<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,0>_>
              ::Find((TMapBase<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles,0>_>
                      *)&this->SubjectFrameReceivedHandles,param_1);
    if (this_00 != (FSubjectFramesReceivedHandles *)0x0) {
      if (param_2.ID != 0) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,param_2);
      }
      if (param_3.ID != 0) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                   &this_00->OnFrameDataReceived,param_3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014d085ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UnregisterGlobalSubjectFramesDelegate @ 14d085f10

void __thiscall
FLiveLinkClient::UnregisterGlobalSubjectFramesDelegate
          (FLiveLinkClient *this,FDelegateHandle *param_1,FDelegateHandle *param_2,bool param_3)

{
  FSubjectFramesAddedHandles *this_00;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_01;
  FDelegateHandle FVar1;
  FName local_res8;
  
  local_res8 = UE::LiveLink::Private::ALL_SUBJECTS_DELEGATE_TOKEN;
  this_00 = TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
            ::Find((TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
                    *)&this->SubjectFrameAddedHandles,(FLiveLinkSubjectName *)&local_res8);
  if (this_00 != (FSubjectFramesAddedHandles *)0x0) {
    FVar1 = (FDelegateHandle)param_1->ID;
    if (param_3) {
      if (FVar1.ID != 0) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                   &this_00->OnUnmappedStaticDataAdded,FVar1);
      }
      FVar1 = (FDelegateHandle)param_2->ID;
      if (FVar1.ID == 0) {
        return;
      }
      this_01 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                &this_00->OnUnmappedFrameDataAdded;
    }
    else {
      if (FVar1.ID != 0) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,FVar1);
      }
      FVar1 = (FDelegateHandle)param_2->ID;
      if (FVar1.ID == 0) {
        return;
      }
      this_01 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&this_00->OnFrameDataAdded;
    }
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance(this_01,FVar1);
  }
  return;
}

// UnregisterSubjectFramesHandle @ 14d086150

void __thiscall
FLiveLinkClient::UnregisterSubjectFramesHandle
          (FLiveLinkClient *this,FLiveLinkSubjectName param_1,FDelegateHandle param_2,
          FDelegateHandle param_3)

{
  FSubjectFramesAddedHandles *this_00;
  FName local_res10;
  
  local_res10 = param_1.Name;
  this_00 = TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
            ::Find((TMapBase<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles,0>_>
                    *)&this->SubjectFrameAddedHandles,(FLiveLinkSubjectName *)&local_res10);
  if (this_00 != (FSubjectFramesAddedHandles *)0x0) {
    if (param_2.ID != 0) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,param_2);
    }
    if (param_3.ID != 0) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&this_00->OnFrameDataAdded,
                 param_3);
    }
  }
  return;
}

// UpdateSources @ 14d088560

void __thiscall FLiveLinkClient::UpdateSources(FLiveLinkClient *this)

{
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLiveLinkClient::UpdateSources'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&>
             ::Call;
  FLiveLinkSourceCollection::ForEachSource
            ((this->Collection).Ptr,
             (TFunctionRef<void___cdecl(FLiveLinkCollectionSourceItem_&)> *)&local_18);
  return;
}

// operator() @ 1505796f0

bool __thiscall `FLiveLinkClient::GetSubjectState'::__l34::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7019805513357458868>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7019805513357458868>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

