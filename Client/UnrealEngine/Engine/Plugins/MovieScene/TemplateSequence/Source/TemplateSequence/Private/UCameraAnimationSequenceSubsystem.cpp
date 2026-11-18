// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 13

// StaticClass @ 14ac63cb0

UClass * __cdecl UCameraAnimationSequenceSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationSequenceSubsystem",
               &Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.InnerSingleton,
               StaticRegisterNativesUCameraAnimationSequenceSubsystem,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraAnimationSequenceSubsystem>,
               InternalVTableHelperCtorCaller<UCameraAnimationSequenceSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.InnerSingleton;
}

// UCameraAnimationSequenceSubsystem @ 14ac70310

/* WARNING: Enum "Type": Some values do not have unique names */

UCameraAnimationSequenceSubsystem * __thiscall
UCameraAnimationSequenceSubsystem::UCameraAnimationSequenceSubsystem
          (UCameraAnimationSequenceSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UCameraAnimationSequenceSubsystem__6B_;
  (this->Linker).field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
  (this->Runner).Object = (FMovieSceneEntitySystemRunner *)0x0;
  (this->Runner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UCameraAnimationSequenceSubsystem @ 14ac70350

/* WARNING: Enum "Type": Some values do not have unique names */

UCameraAnimationSequenceSubsystem * __thiscall
UCameraAnimationSequenceSubsystem::UCameraAnimationSequenceSubsystem
          (UCameraAnimationSequenceSubsystem *this)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  this->_padding_ = (longlong)&___7UCameraAnimationSequenceSubsystem__6B_;
  (this->Linker).field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
  (this->Runner).Object = (FMovieSceneEntitySystemRunner *)0x0;
  (this->Runner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UCameraAnimationSequenceSubsystem @ 14ac715f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationSequenceSubsystem::~UCameraAnimationSequenceSubsystem
          (UCameraAnimationSequenceSubsystem *this)

{
  this->_padding_ = (longlong)&___7UCameraAnimationSequenceSubsystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Runner).SharedReferenceCount.ReferenceController);
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// CreateLinker @ 14ac74400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneEntitySystemLinker * __cdecl
UCameraAnimationSequenceSubsystem::CreateLinker(UObject *param_1,FName param_2)

{
  UClass *pUVar1;
  UMovieSceneEntitySystemLinker *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UCameraAnimationEntitySystemLinker::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._24_4_ = RF_NoFlags;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._8_8_ = param_1;
  local_98._16_8_ = param_2;
  pUVar2 = (UMovieSceneEntitySystemLinker *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// Deinitialize @ 14ac74860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationSequenceSubsystem::Deinitialize(UCameraAnimationSequenceSubsystem *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Runner != (TSharedPtr<FMovieSceneEntitySystemRunner,1> *)&local_18) {
    (this->Runner).Object = (FMovieSceneEntitySystemRunner *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Runner).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  (this->Linker).field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
  return;
}

// GetCameraAnimationSequenceSubsystem @ 14ac77050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCameraAnimationSequenceSubsystem * __cdecl
UCameraAnimationSequenceSubsystem::GetCameraAnimationSequenceSubsystem(UWorld *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UCameraAnimationSequenceSubsystem *pUVar5;
  
  if (param_1 == (UWorld *)0x0) {
    return (UCameraAnimationSequenceSubsystem *)0x0;
  }
  pUVar3 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_14ac77088;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14ac77088:
    pUVar4 = StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14ac770b8;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_14ac770b8:
  pUVar5 = (UCameraAnimationSequenceSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&param_1->SubsystemCollection,pUVar3);
  return pUVar5;
}

// GetCameraAnimationSystemCategory @ 14ac770e0

EEntitySystemCategory __cdecl
UCameraAnimationSequenceSubsystem::GetCameraAnimationSystemCategory(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      CameraAnimationCategory = UMovieSceneEntitySystem::RegisterCustomSystemCategory();
      _Init_thread_footer(&::_TSS0);
    }
  }
  return CameraAnimationCategory;
}

// GetLinker @ 14ac77400

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystemLinker * __thiscall
UCameraAnimationSequenceSubsystem::GetLinker(UCameraAnimationSequenceSubsystem *this,bool param_1)

{
  FName *pFVar1;
  UMovieSceneEntitySystemLinker *this_00;
  TSharedRef<FMovieSceneEntitySystemRunner,1> *pTVar2;
  FName local_res8;
  FMovieSceneEntitySystemRunner *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_18;
  
  if (((this->Linker).field0_0x0.DebugPtr == (UMovieSceneEntitySystemLinker *)0x0) && (param_1)) {
    pFVar1 = ::FName::FName(&local_res8,L"CameraAnimationSequenceSubsystemLinker");
    this_00 = CreateLinker((UObject *)this,*pFVar1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UMovieSceneEntitySystemLinker *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->Linker).field0_0x0.DebugPtr = this_00;
    pTVar2 = UMovieSceneEntitySystemLinker::GetRunner(this_00,&local_18);
    local_20.ReferenceController = (pTVar2->SharedReferenceCount).ReferenceController;
    local_28 = pTVar2->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->Runner != (TSharedPtr<FMovieSceneEntitySystemRunner,1> *)&local_28) {
      (this->Runner).Object = local_28;
      local_28 = (FMovieSceneEntitySystemRunner *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Runner).SharedReferenceCount,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return (this->Linker).field0_0x0.DebugPtr;
  }
  return (this->Linker).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14ac77b30

UClass * __cdecl UCameraAnimationSequenceSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationSequenceSubsystem",
               &Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.InnerSingleton,
               StaticRegisterNativesUCameraAnimationSequenceSubsystem,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraAnimationSequenceSubsystem>,
               InternalVTableHelperCtorCaller<UCameraAnimationSequenceSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.InnerSingleton;
}

// GetRunner @ 14ac78430

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FMovieSceneEntitySystemRunner,1> * __thiscall
UCameraAnimationSequenceSubsystem::GetRunner
          (UCameraAnimationSequenceSubsystem *this,
          TSharedPtr<FMovieSceneEntitySystemRunner,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Runner).Object;
  pTVar1 = (this->Runner).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// Initialize @ 14ac79af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationSequenceSubsystem::Initialize
          (UCameraAnimationSequenceSubsystem *this,FSubsystemCollectionBase *param_1)

{
  return;
}

// StaticRegisterNativesUCameraAnimationSequenceSubsystem @ 14ac804d0

void __cdecl
UCameraAnimationSequenceSubsystem::StaticRegisterNativesUCameraAnimationSequenceSubsystem(void)

{
  return;
}

