// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 36

// StaticClass @ 14cfadc50

UClass * __cdecl ULiveLinkVirtualSubject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkVirtualSubject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkVirtualSubject",
               &Z_Registration_Info_UClass_ULiveLinkVirtualSubject.InnerSingleton,
               StaticRegisterNativesULiveLinkVirtualSubject,0x180,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkVirtualSubject>,
               InternalVTableHelperCtorCaller<ULiveLinkVirtualSubject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkVirtualSubject.InnerSingleton;
}

// ULiveLinkVirtualSubject @ 14cfb6100

ULiveLinkVirtualSubject * __thiscall
ULiveLinkVirtualSubject::ULiveLinkVirtualSubject
          (ULiveLinkVirtualSubject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SyncSubject).Name = (FName)0x0;
  this->_padding_ = (longlong)&_vftable__for__ILiveLinkSubject__;
  (this->Role).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Subjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Subjects).ArrayNum = 0;
  (this->Subjects).ArrayMax = 0;
  (this->FrameTranslators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameTranslators).ArrayNum = 0;
  (this->FrameTranslators).ArrayMax = 0;
  this->bRebroadcastSubject = false;
  FStructOnScope::FStructOnScope((FStructOnScope *)&this->FrameSnapshot);
  FStructOnScope::FStructOnScope(&(this->FrameSnapshot).FrameData.WrappedStruct);
  (this->SubjectKey).Source.A = 0;
  (this->SubjectKey).Source.B = 0;
  (this->SubjectKey).Source.C = 0;
  (this->SubjectKey).Source.D = 0;
  (this->SubjectKey).SubjectName.Name = (FName)0x0;
  this->bHasStaticDataBeenRebroadcast = false;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->SnapshotAccessCriticalSection,4000);
  (this->CurrentFrameTranslators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentFrameTranslators).ArrayNum = 0;
  (this->CurrentFrameTranslators).ArrayMax = 0;
  (this->CurrentSubjectRemapper).Object = (ILiveLinkSubjectRemapperWorker *)0x0;
  (this->CurrentSubjectRemapper).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FStructOnScope::FStructOnScope((FStructOnScope *)&this->CurrentFrameSnapshot);
  FStructOnScope::FStructOnScope(&(this->CurrentFrameSnapshot).FrameData.WrappedStruct);
  this->bPaused = (atomic<bool>)0x0;
  return this;
}

// ULiveLinkVirtualSubject @ 14cfb61f0

ULiveLinkVirtualSubject * __thiscall
ULiveLinkVirtualSubject::ULiveLinkVirtualSubject
          (ULiveLinkVirtualSubject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SyncSubject).Name = (FName)0x0;
  this->_padding_ = (longlong)&_vftable__for__ILiveLinkSubject__;
  (this->Role).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Subjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Subjects).ArrayNum = 0;
  (this->Subjects).ArrayMax = 0;
  (this->FrameTranslators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameTranslators).ArrayNum = 0;
  (this->FrameTranslators).ArrayMax = 0;
  this->bRebroadcastSubject = false;
  FStructOnScope::FStructOnScope((FStructOnScope *)&this->FrameSnapshot);
  FStructOnScope::FStructOnScope(&(this->FrameSnapshot).FrameData.WrappedStruct);
  (this->SubjectKey).Source.A = 0;
  (this->SubjectKey).Source.B = 0;
  (this->SubjectKey).Source.C = 0;
  (this->SubjectKey).Source.D = 0;
  (this->SubjectKey).SubjectName.Name = (FName)0x0;
  this->bHasStaticDataBeenRebroadcast = false;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->SnapshotAccessCriticalSection,4000);
  (this->CurrentFrameTranslators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentFrameTranslators).ArrayNum = 0;
  (this->CurrentFrameTranslators).ArrayMax = 0;
  (this->CurrentSubjectRemapper).Object = (ILiveLinkSubjectRemapperWorker *)0x0;
  (this->CurrentSubjectRemapper).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FStructOnScope::FStructOnScope((FStructOnScope *)&this->CurrentFrameSnapshot);
  FStructOnScope::FStructOnScope(&(this->CurrentFrameSnapshot).FrameData.WrappedStruct);
  this->bPaused = (atomic<bool>)0x0;
  return this;
}

// ~ULiveLinkVirtualSubject @ 14cfb6800

void __thiscall ULiveLinkVirtualSubject::~ULiveLinkVirtualSubject(ULiveLinkVirtualSubject *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ILiveLinkSubject__;
  FStructOnScope::~FStructOnScope(&(this->CurrentFrameSnapshot).FrameData.WrappedStruct);
  FStructOnScope::~FStructOnScope((FStructOnScope *)&this->CurrentFrameSnapshot);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentSubjectRemapper).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int>
            ((TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *)
             (this->CurrentFrameTranslators).AllocatorInstance.Data,
             (this->CurrentFrameTranslators).ArrayNum);
  pFVar1 = (this->CurrentFrameTranslators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SnapshotAccessCriticalSection);
  FStructOnScope::~FStructOnScope(&(this->FrameSnapshot).FrameData.WrappedStruct);
  FStructOnScope::~FStructOnScope((FStructOnScope *)&this->FrameSnapshot);
  pFVar1 = (this->FrameTranslators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Subjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ILiveLinkSubject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ClearFrames @ 14cfb7fe0

void __thiscall ULiveLinkVirtualSubject::ClearFrames(ULiveLinkVirtualSubject *this)

{
  bool *lpCriticalSection;
  
  lpCriticalSection = &(this->FrameSnapshot).FrameData.WrappedStruct.OwnsMemory;
  if (lpCriticalSection != (bool *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)((longlong)(this->SnapshotAccessCriticalSection).CriticalSection.Opaque3[2] + 0x48))
              ();
                    /* WARNING: Could not recover jumptable at 0x00014cfb801c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DependsOnSubject @ 14cfb80d0

bool __thiscall
ULiveLinkVirtualSubject::DependsOnSubject(ULiveLinkVirtualSubject *this,FName param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar2 = (FName *)(this->Subjects).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->Subjects).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 1;
  }
  return true;
}

// EvaluateFrame @ 14cfb8c10

bool __thiscall
ULiveLinkVirtualSubject::EvaluateFrame
          (ULiveLinkVirtualSubject *this,TSubclassOf<ULiveLinkRole> param_1,
          FLiveLinkSubjectFrameData *param_2)

{
  bool *lpCriticalSection;
  bool bVar1;
  UObject *local_res8;
  
  lpCriticalSection = &(this->FrameSnapshot).FrameData.WrappedStruct.OwnsMemory;
  if (lpCriticalSection != (bool *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8 = *(UObject **)param_1.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    bVar1 = ILiveLinkSubject::EvaluateFrame
                      ((ILiveLinkSubject *)this,(TSubclassOf<ULiveLinkRole>)&local_res8,param_2);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetDisplayName @ 14cfb9870

FText * __thiscall
ULiveLinkVirtualSubject::GetDisplayName(ULiveLinkVirtualSubject *this,FText *__return_storage_ptr__)

{
  FText::FromName(__return_storage_ptr__,&(this->SubjectKey).SubjectName.Name);
  return __return_storage_ptr__;
}

// GetFrameRemapper @ 14cfb9b10

TSharedPtr<ILiveLinkSubjectRemapperWorker,1> * __thiscall
ULiveLinkVirtualSubject::GetFrameRemapper
          (ULiveLinkVirtualSubject *this,
          TSharedPtr<ILiveLinkSubjectRemapperWorker,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->SnapshotAccessCriticalSection).CriticalSection.Opaque3[0];
  pTVar1 = (this->SnapshotAccessCriticalSection).CriticalSection.Opaque3[1];
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFrameSnapshot @ 14cfb9b40

FLiveLinkSubjectFrameData * __thiscall
ULiveLinkVirtualSubject::GetFrameSnapshot(ULiveLinkVirtualSubject *this)

{
  return (FLiveLinkSubjectFrameData *)
         ((this->SnapshotAccessCriticalSection).CriticalSection.Opaque3 + 2);
}

// GetFrameTimes @ 14cfb9b50

TArray<FLiveLinkTime,TSizedDefaultAllocator<32>_> * __thiscall
ULiveLinkVirtualSubject::GetFrameTimes
          (ULiveLinkVirtualSubject *this,
          TArray<FLiveLinkTime,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  double *pdVar7;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  cVar4 = (**(code **)(this->_padding_ + 0x40))();
  if (cVar4 == '\0') {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  lVar6 = (**(code **)((this->CurrentFrameSnapshot).StaticData.WrappedStruct._padding_ + 0x10))
                    (&this->CurrentFrameSnapshot);
  pdVar7 = (double *)
           (**(code **)((this->CurrentFrameSnapshot).StaticData.WrappedStruct._padding_ + 0x10))
                     (&this->CurrentFrameSnapshot);
  dVar1 = pdVar7[1];
  dVar2 = *pdVar7;
  iVar5 = (int)local_20;
  if ((int)local_20 == local_20._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&local_28,(int *)((longlong)&local_20 + 4));
  }
  *(double *)(local_28.Data + (longlong)iVar5 * 0x18) = dVar1 + dVar2;
  uVar3 = *(undefined8 *)(lVar6 + 0x68);
  *(undefined8 *)(local_28.Data + (longlong)iVar5 * 0x18 + 8) = *(undefined8 *)(lVar6 + 0x60);
  *(undefined8 *)(local_28.Data + (longlong)iVar5 * 0x18 + 8 + 8) = uVar3;
  (__return_storage_ptr__->AllocatorInstance).Data = local_28.Data;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  __return_storage_ptr__->ArrayMax = local_20._4_4_;
  return __return_storage_ptr__;
}

// GetFrameTranslators @ 14cfba5e0

TArray<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,TSizedDefaultAllocator<32>_> * __thiscall
ULiveLinkVirtualSubject::GetFrameTranslators
          (ULiveLinkVirtualSubject *this,
          TArray<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *pTVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->SnapshotAccessCriticalSection).CriticalSection.Opaque2[0];
  pTVar2 = (this->SnapshotAccessCriticalSection).CriticalSection.Opaque1[0];
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pTVar2,iVar1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cfbb650

UClass * __cdecl ULiveLinkVirtualSubject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkVirtualSubject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkVirtualSubject",
               &Z_Registration_Info_UClass_ULiveLinkVirtualSubject.InnerSingleton,
               StaticRegisterNativesULiveLinkVirtualSubject,0x180,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkVirtualSubject>,
               InternalVTableHelperCtorCaller<ULiveLinkVirtualSubject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkVirtualSubject.InnerSingleton;
}

// GetRebroadcastName @ 14cfbb720

FName __thiscall ULiveLinkVirtualSubject::GetRebroadcastName(ULiveLinkVirtualSubject *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = (this->SubjectKey).SubjectName.Name;
  return in_RDX;
}

// GetRole @ 14cfbb800

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkVirtualSubject::GetRole(ULiveLinkVirtualSubject *this)

{
  UObject *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = (UObject *)this->_padding_;
  *(UObject **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// GetStaticData @ 14cfbbd80

FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> * __thiscall
ULiveLinkVirtualSubject::GetStaticData(ULiveLinkVirtualSubject *this,bool param_1)

{
  return (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)
         ((this->SnapshotAccessCriticalSection).CriticalSection.Opaque3 + 2);
}

// GetStaticData @ 14cfbbd90

FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> * __thiscall
ULiveLinkVirtualSubject::GetStaticData(ULiveLinkVirtualSubject *this)

{
  return (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)
         ((this->SnapshotAccessCriticalSection).CriticalSection.Opaque3 + 2);
}

// GetSubjectKey @ 14cfbbf90

FLiveLinkSubjectKey * __thiscall
ULiveLinkVirtualSubject::GetSubjectKey
          (ULiveLinkVirtualSubject *this,FLiveLinkSubjectKey *__return_storage_ptr__)

{
  FName FVar1;
  FWeakObjectPtr FVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)((longlong)&(this->FrameSnapshot).FrameData.WrappedStruct._padding_ + 4);
  FVar2 = (this->FrameSnapshot).FrameData.WrappedStruct.ScriptStruct.WeakPtr;
  FVar1 = (FName)(this->FrameSnapshot).FrameData.WrappedStruct.SampleStructMemory;
  (__return_storage_ptr__->Source).A =
       *(undefined4 *)&(this->FrameSnapshot).FrameData.WrappedStruct._padding_;
  (__return_storage_ptr__->Source).B = uVar3;
  (__return_storage_ptr__->Source).C = FVar2.ObjectIndex;
  (__return_storage_ptr__->Source).D = FVar2.ObjectSerialNumber;
  (__return_storage_ptr__->SubjectName).Name = FVar1;
  return __return_storage_ptr__;
}

// HasStaticDataBeenRebroadcasted @ 14cfbcbb0

bool __thiscall
ULiveLinkVirtualSubject::HasStaticDataBeenRebroadcasted(ULiveLinkVirtualSubject *this)

{
  return (bool)(char)(this->FrameSnapshot).FrameData.WrappedStruct.Package.WeakPtr.ObjectIndex;
}

// HasValidFrameData @ 14cfbcbc0

bool __thiscall ULiveLinkVirtualSubject::HasValidFrameData(ULiveLinkVirtualSubject *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)((this->CurrentFrameSnapshot).FrameData.WrappedStruct._padding_ + 0x10))();
  return lVar1 != 0;
}

// HasValidFrameSnapshot @ 14cfbcbf0

bool __thiscall ULiveLinkVirtualSubject::HasValidFrameSnapshot(ULiveLinkVirtualSubject *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)((longlong)(this->SnapshotAccessCriticalSection).CriticalSection.Opaque3[2] +
                      0x10))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)((this->CurrentFrameSnapshot).StaticData.WrappedStruct._padding_ + 0x10))();
    if (lVar1 != 0) {
      return true;
    }
  }
  return false;
}

// HasValidStaticData @ 14cfbcc40

bool __thiscall ULiveLinkVirtualSubject::HasValidStaticData(ULiveLinkVirtualSubject *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)((this->CurrentFrameSnapshot).StaticData.WrappedStruct._padding_ + 0x10))();
  return lVar1 != 0;
}

// Initialize @ 14cfbcca0

void __thiscall
ULiveLinkVirtualSubject::Initialize
          (ULiveLinkVirtualSubject *this,FLiveLinkSubjectKey *param_1,
          TSubclassOf<ULiveLinkRole> param_2,ILiveLinkClient *param_3)

{
  FName FVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  UClass *pUVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar3 = this->_padding_;
  lVar8 = 0;
  lVar9 = lVar8;
  if ((lVar3 != 0) && (pUVar7 = ULiveLinkRole::StaticClass(), pUVar7 != (UClass *)0x0)) {
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      lVar9 = this->_padding_;
    }
  }
  lVar3 = *(longlong *)param_2.Class.field0_0x0;
  if ((lVar3 != 0) && (pUVar7 = ULiveLinkRole::StaticClass(), pUVar7 != (UClass *)0x0)) {
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      lVar8 = *(longlong *)param_2.Class.field0_0x0;
    }
  }
  if ((lVar9 != lVar8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Role == InRole",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Private\\LiveLinkVirtualSubject.cpp"
                         ,0x10,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar5 = *(FWeakObjectPtr *)&(param_1->Source).C;
  FVar1 = (param_1->SubjectName).Name;
  (this->FrameSnapshot).FrameData.WrappedStruct._padding_ = *(longlong *)&param_1->Source;
  (this->FrameSnapshot).FrameData.WrappedStruct.ScriptStruct.WeakPtr = FVar5;
  (this->Subjects).AllocatorInstance.Data = (FScriptContainerElement *)param_3;
  (this->FrameSnapshot).FrameData.WrappedStruct.SampleStructMemory = (uchar *)FVar1;
  return;
}

// InvalidateFrameData @ 14cfbdcc0

void __thiscall ULiveLinkVirtualSubject::InvalidateFrameData(ULiveLinkVirtualSubject *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SnapshotAccessCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)((this->CurrentFrameSnapshot).FrameData.WrappedStruct._padding_ + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00014cfbdcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// InvalidateStaticData @ 14cfbdd10

void __thiscall ULiveLinkVirtualSubject::InvalidateStaticData(ULiveLinkVirtualSubject *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SnapshotAccessCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)((this->CurrentFrameSnapshot).StaticData.WrappedStruct._padding_ + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00014cfbdd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsPaused @ 14cfbdf10

bool __thiscall ULiveLinkVirtualSubject::IsPaused(ULiveLinkVirtualSubject *this)

{
  return (bool)(char)(this->CurrentFrameSnapshot).FrameData.WrappedStruct._padding_;
}

// IsRebroadcasted @ 14cfbdf20

bool __thiscall ULiveLinkVirtualSubject::IsRebroadcasted(ULiveLinkVirtualSubject *this)

{
  return (bool)*(undefined1 *)&(this->Role).Class.field0_0x0;
}

// PauseSubject @ 14cfbdff0

void __thiscall ULiveLinkVirtualSubject::PauseSubject(ULiveLinkVirtualSubject *this)

{
  LOCK();
  *(undefined1 *)&(this->CurrentFrameSnapshot).FrameData.WrappedStruct._padding_ = 1;
  UNLOCK();
  return;
}

// SetStaticDataAsRebroadcasted @ 14cfbe230

void __thiscall
ULiveLinkVirtualSubject::SetStaticDataAsRebroadcasted(ULiveLinkVirtualSubject *this,bool param_1)

{
  *(bool *)&(this->FrameSnapshot).FrameData.WrappedStruct.Package.WeakPtr.ObjectIndex = param_1;
  return;
}

// StaticRegisterNativesULiveLinkVirtualSubject @ 14cfbe380

void __cdecl ULiveLinkVirtualSubject::StaticRegisterNativesULiveLinkVirtualSubject(void)

{
  return;
}

// UnpauseSubject @ 14cfbe9c0

void __thiscall ULiveLinkVirtualSubject::UnpauseSubject(ULiveLinkVirtualSubject *this)

{
  LOCK();
  *(undefined1 *)&(this->CurrentFrameSnapshot).FrameData.WrappedStruct._padding_ = 0;
  UNLOCK();
  return;
}

// Update @ 14cfbe9d0

void __thiscall ULiveLinkVirtualSubject::Update(ULiveLinkVirtualSubject *this)

{
  bool *lpCriticalSection;
  
  lpCriticalSection = &(this->FrameSnapshot).FrameData.WrappedStruct.OwnsMemory;
  if (lpCriticalSection != (bool *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)((longlong)(this->SnapshotAccessCriticalSection).CriticalSection.Opaque3[2] + 0x48))
              ();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)((this->CurrentFrameSnapshot).StaticData.WrappedStruct._padding_ + 0x48))();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    UpdateTranslatorsForThisFrame
              ((ULiveLinkVirtualSubject *)
               &this[-1].CurrentFrameSnapshot.FrameData.WrappedStruct.ScriptStruct);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateFrameDataSnapshot @ 14cfbea50

void __thiscall
ULiveLinkVirtualSubject::UpdateFrameDataSnapshot
          (ULiveLinkVirtualSubject *this,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar1;
  
  lpCriticalSection = &this->SnapshotAccessCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = &(this->CurrentFrameSnapshot).FrameData;
    if (pFVar1 != param_1) {
      (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x48))(pFVar1);
      (this->CurrentFrameSnapshot).FrameData.WrappedStruct.ScriptStruct.WeakPtr =
           (param_1->WrappedStruct).ScriptStruct.WeakPtr;
      (this->CurrentFrameSnapshot).FrameData.WrappedStruct.SampleStructMemory =
           (param_1->WrappedStruct).SampleStructMemory;
      (this->CurrentFrameSnapshot).FrameData.WrappedStruct.OwnsMemory =
           (param_1->WrappedStruct).OwnsMemory;
      (param_1->WrappedStruct).OwnsMemory = false;
      (**(code **)((param_1->WrappedStruct)._padding_ + 0x48))(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00014cfbeac5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateStaticDataSnapshot @ 14cfbeae0

void __thiscall
ULiveLinkVirtualSubject::UpdateStaticDataSnapshot
          (ULiveLinkVirtualSubject *this,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FLiveLinkSubjectFrameData *pFVar1;
  
  lpCriticalSection = &this->SnapshotAccessCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = &this->CurrentFrameSnapshot;
    if (pFVar1 != (FLiveLinkSubjectFrameData *)param_1) {
      (**(code **)((pFVar1->StaticData).WrappedStruct._padding_ + 0x48))(pFVar1);
      (this->CurrentFrameSnapshot).StaticData.WrappedStruct.ScriptStruct.WeakPtr =
           (param_1->WrappedStruct).ScriptStruct.WeakPtr;
      (this->CurrentFrameSnapshot).StaticData.WrappedStruct.SampleStructMemory =
           (param_1->WrappedStruct).SampleStructMemory;
      (this->CurrentFrameSnapshot).StaticData.WrappedStruct.OwnsMemory =
           (param_1->WrappedStruct).OwnsMemory;
      (param_1->WrappedStruct).OwnsMemory = false;
      (**(code **)((param_1->WrappedStruct)._padding_ + 0x48))(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00014cfbeb55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateTranslatorsForThisFrame @ 14cfbeb70

void __thiscall
ULiveLinkVirtualSubject::UpdateTranslatorsForThisFrame(ULiveLinkVirtualSubject *this)

{
  int *piVar1;
  TArray<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *pTVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  longlong local_28;
  TReferenceControllerBase<1> *local_20;
  
  pTVar2 = &this->CurrentFrameTranslators;
  piVar1 = &(this->CurrentFrameTranslators).ArrayMax;
  pTVar5 = (TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *)(pTVar2->AllocatorInstance).Data;
  iVar4 = (this->CurrentFrameTranslators).ArrayNum;
  if ((this->CurrentFrameTranslators).ArrayMax < 0) {
    DestructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int>(pTVar5,iVar4);
    (this->CurrentFrameTranslators).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int>(pTVar5,iVar4);
    (this->CurrentFrameTranslators).ArrayNum = 0;
  }
  pFVar11 = (this->FrameTranslators).AllocatorInstance.Data;
  iVar4 = (this->FrameTranslators).ArrayNum;
  pFVar3 = pFVar11 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->FrameTranslators).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<ULiveLinkFrameTranslator>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar3) break;
    plVar6 = *(longlong **)pFVar11;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x2c0))(plVar6,&local_28);
      if (local_28 != 0) {
        pFVar10 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar10 <= (FScriptContainerElement *)&local_28) &&
            ((FScriptContainerElement *)&local_28 < pFVar10 + (longlong)*piVar1 * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar9 = (this->CurrentFrameTranslators).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->CurrentFrameTranslators).ArrayNum = iVar9 + 1;
        pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
        *(longlong *)pFVar10 = local_28;
        *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_20;
        if (local_20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    }
    pFVar11 = pFVar11 + 8;
  }
  return;
}

// ValidateTranslators @ 14cfbf9e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall ULiveLinkVirtualSubject::ValidateTranslators(ULiveLinkVirtualSubject *this)

{
  int iVar1;
  UClass *pUVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  UClass *pUVar9;
  longlong *plVar10;
  uint uVar11;
  longlong local_res8;
  FName local_res10;
  FName local_res18;
  undefined1 local_res20 [8];
  undefined1 local_68 [8];
  FString local_60;
  FString local_50;
  
  pUVar2 = (this->Role).Class.field0_0x0.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) && (pUVar9 = ULiveLinkRole::StaticClass(), pUVar9 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar9->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar9->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (pUVar2 = (this->Role).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) {
      uVar11 = 0;
      if (0 < (this->FrameTranslators).ArrayNum) {
        local_res8 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar11 < (this->FrameTranslators).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          plVar3 = *(longlong **)((this->FrameTranslators).AllocatorInstance.Data + local_res8);
          if (plVar3 != (longlong *)0x0) {
            plVar10 = (longlong *)(**(code **)(*plVar3 + 0x2b0))(plVar3,local_res20);
            lVar4 = *plVar10;
            if ((lVar4 == 0) || (pUVar9 = ULiveLinkRole::StaticClass(), pUVar9 == (UClass *)0x0)) {
LAB_14cfbfb1a:
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Translator->GetFromRole() != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Private\\LiveLinkVirtualSubject.cpp"
                                 ,0x94,L"");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
            }
            else {
              iVar1 = (int)pUVar9->_padding_;
              if ((*(int *)(lVar4 + 0x38) < iVar1) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar9->_padding_)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if ((!bVar6) || (*plVar10 == 0)) goto LAB_14cfbfb1a;
            }
            plVar10 = (longlong *)(**(code **)(*plVar3 + 0x2b0))(plVar3,local_68);
            lVar4 = *plVar10;
            if ((lVar4 == 0) || (pUVar9 = ULiveLinkRole::StaticClass(), pUVar9 == (UClass *)0x0)) {
LAB_14cfbfbec:
              if (2 < (byte)LogLiveLinkVirtualSubject._0_1_) {
                local_res10 = *(FName *)(plVar3 + 3);
                ::FName::ToString(&local_res10,&local_50);
                local_res18 = (FName)pUVar2->_padding_;
                ::FName::ToString(&local_res18,&local_60);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogLiveLinkVirtualSubject);
                if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_60.Data.AllocatorInstance.Data);
                }
                if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_50.Data.AllocatorInstance.Data);
                }
              }
              uVar8 = 0;
              if ((int)uVar11 < (this->FrameTranslators).ArrayNum) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              *(undefined8 *)
               ((this->FrameTranslators).AllocatorInstance.Data + (longlong)(int)uVar11 * 8) = 0;
              return false;
            }
            iVar1 = (int)pUVar9->_padding_;
            if ((*(int *)(lVar4 + 0x38) < iVar1) ||
               (((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
                 &pUVar9->_padding_ || (lVar4 = *plVar10, lVar4 == 0)))) goto LAB_14cfbfbec;
            if (((int)pUVar2->_padding_ < *(int *)(lVar4 + 0x38)) ||
               (*(longlong *)(pUVar2->_padding_ + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
                lVar4 + 0x30)) goto LAB_14cfbfbec;
          }
          local_res8 = local_res8 + 8;
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (this->FrameTranslators).ArrayNum);
      }
      return true;
    }
  }
  (this->FrameTranslators).ArrayNum = 0;
  if ((this->FrameTranslators).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->FrameTranslators).AllocatorInstance,0,
               &(this->FrameTranslators).ArrayMax);
  }
  return false;
}

