// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 9

// StaticClass @ 146bcfdc0

UClass * __cdecl ULevelCapture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"LevelCapture",
               &Z_Registration_Info_UClass_ULevelCapture.InnerSingleton,
               StaticRegisterNativesULevelCapture,0x260,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",InternalConstructor<ULevelCapture>,
               InternalVTableHelperCtorCaller<ULevelCapture>,local_res8,
               UMovieSceneCapture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelCapture.InnerSingleton;
}

// ULevelCapture @ 146bd8630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

ULevelCapture * __thiscall ULevelCapture::ULevelCapture(ULevelCapture *this,FVTableHelper *param_1)

{
  UMovieSceneCapture::UMovieSceneCapture((UMovieSceneCapture *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneCaptureInterface__;
  this->_padding_ = (longlong)&_vftable__for__ICaptureProtocolHost__;
  (this->PrerequisiteActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PrerequisiteActorId).A = 0;
  (this->PrerequisiteActorId).B = 0;
  (this->PrerequisiteActorId).C = 0;
  (this->PrerequisiteActorId).D = 0;
  return this;
}

// ULevelCapture @ 146bd8690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

ULevelCapture * __thiscall
ULevelCapture::ULevelCapture(ULevelCapture *this,FObjectInitializer *param_1)

{
  UMovieSceneCapture::UMovieSceneCapture((UMovieSceneCapture *)this,param_1);
  this->bAutoStartCapture = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneCaptureInterface__;
  this->_padding_ = (longlong)&_vftable__for__ICaptureProtocolHost__;
  (this->PrerequisiteActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PrerequisiteActorId).A = 0;
  (this->PrerequisiteActorId).B = 0;
  (this->PrerequisiteActorId).C = 0;
  (this->PrerequisiteActorId).D = 0;
  return this;
}

// ~ULevelCapture @ 146bd95e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall ULevelCapture::~ULevelCapture(ULevelCapture *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneCaptureInterface__;
  this->_padding_ = (longlong)&_vftable__for__ICaptureProtocolHost__;
  UMovieSceneCapture::~UMovieSceneCapture((UMovieSceneCapture *)this);
  return;
}

// GetPrivateStaticClass @ 146be0960

UClass * __cdecl ULevelCapture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"LevelCapture",
               &Z_Registration_Info_UClass_ULevelCapture.InnerSingleton,
               StaticRegisterNativesULevelCapture,0x260,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",InternalConstructor<ULevelCapture>,
               InternalVTableHelperCtorCaller<ULevelCapture>,local_res8,
               UMovieSceneCapture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelCapture.InnerSingleton;
}

// Initialize @ 146be1890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
ULevelCapture::Initialize(ULevelCapture *this,TSharedPtr<FSceneViewport,1> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  TRawPtrProxy<FFixedTimeStepCaptureStrategy> local_res8;
  TSharedPtr<FSceneViewport,1> local_18;
  
  local_res8.Object = ::operator_new(0x10);
  if (local_res8.Object != (FFixedTimeStepCaptureStrategy *)0x0) {
    lVar3 = 0xb0;
    if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
      lVar3 = 0xa4;
    }
    (local_res8.Object)->FrameRate = *(FFrameRate *)((longlong)&this->_padding_ + lVar3);
    (local_res8.Object)->_padding_ = (longlong)&___7FFixedTimeStepCaptureStrategy__6B_;
  }
  TSharedPtr<ICaptureStrategy,1>::operator=<FFixedTimeStepCaptureStrategy>
            ((TSharedPtr<ICaptureStrategy,1> *)&this->_padding_,&local_res8);
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(*(longlong *)this->_padding_ + 8))();
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UMovieSceneCapture::Initialize((UMovieSceneCapture *)this,&local_18,param_2);
  lVar3 = this->_padding_;
  *(int *)((longlong)&this->_padding_ + 4) = param_2;
  if ((char)lVar3 != '\0') {
    UMovieSceneCapture::StartCapture((UMovieSceneCapture *)&this[-1]._padding_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTick @ 146be4ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelCapture::OnTick(ULevelCapture *this,float param_1)

{
  int iVar1;
  bool bVar2;
  AActor *this_00;
  FUniqueObjectGuid *pFVar3;
  UClass *pUVar4;
  UWorld *pUVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  AActor *local_res8;
  FUniqueObjectGuid local_68;
  FUniqueObjectGuid local_58;
  TPersistentObjectPtr<FUniqueObjectGuid> local_48 [2];
  
  this_00 = (AActor *)FWeakObjectPtr::Get(&(this->PrerequisiteActor).WeakPtr);
  if (this_00 == (AActor *)0x0) {
    uVar6 = (this->PrerequisiteActorId).A;
    uVar7 = (this->PrerequisiteActorId).B;
    uVar8 = (this->PrerequisiteActorId).C;
    uVar9 = (this->PrerequisiteActorId).D;
    local_48[0].ObjectID.Guid.C = 0;
    local_48[0].ObjectID.Guid.D = 0;
    local_48[0].ObjectID.Guid.A = 0;
    local_48[0].ObjectID.Guid.B = 0;
    if (this->PIECaptureInstance != -1) {
      local_68.Guid.A = uVar6;
      local_68.Guid.B = uVar7;
      local_68.Guid.C = uVar8;
      local_68.Guid.D = uVar9;
      pFVar3 = FUniqueObjectGuid::FixupForPIE(&local_68,&local_58,this->PIECaptureInstance);
      uVar6 = (pFVar3->Guid).A;
      uVar7 = (pFVar3->Guid).B;
      uVar8 = (pFVar3->Guid).C;
      uVar9 = (pFVar3->Guid).D;
    }
    local_48[0].WeakPtr.ObjectIndex = 0;
    local_48[0].WeakPtr.ObjectSerialNumber = 0;
    local_48[0].ObjectID.Guid.B = uVar7;
    local_48[0].ObjectID.Guid.A = uVar6;
    local_48[0].ObjectID.Guid.D = uVar9;
    local_48[0].ObjectID.Guid.C = uVar8;
    this_00 = (AActor *)TPersistentObjectPtr<FUniqueObjectGuid>::Get(local_48);
    if (this_00 == (AActor *)0x0) {
LAB_146be4c58:
      this_00 = (AActor *)0x0;
    }
    else {
      pUVar4 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) goto LAB_146be4c58;
    }
    local_res8 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_00 == (AActor *)0x0)) {
      FWeakObjectPtr::operator=(&(this->PrerequisiteActor).WeakPtr,(FObjectPtr)&local_res8);
      if (this_00 == (AActor *)0x0) goto LAB_146be4cd1;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)this_00);
      FWeakObjectPtr::operator=(&(this->PrerequisiteActor).WeakPtr,(FObjectPtr)&local_res8);
    }
  }
  pUVar5 = AActor::GetWorld(this_00);
  if (pUVar5 != (UWorld *)0x0) {
    pUVar5 = AActor::GetWorld(this_00);
    bVar2 = UWorld::HasBegunPlay(pUVar5);
    if (!bVar2) {
      return;
    }
  }
LAB_146be4cd1:
  if (((((this->PrerequisiteActorId).D == 0 && (this->PrerequisiteActorId).C == 0) &&
       (this->PrerequisiteActorId).B == 0) && (this->PrerequisiteActorId).A == 0) ||
     ((this_00 != (AActor *)0x0 && (this_00->ActorHasBegunPlay == HasBegunPlay)))) {
    UMovieSceneCapture::CaptureThisFrame((UMovieSceneCapture *)this,param_1);
  }
  return;
}

// SetPrerequisiteActor @ 146be7690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelCapture::SetPrerequisiteActor(ULevelCapture *this,AActor *param_1)

{
  AActor *local_res8;
  TPersistentObjectPtr<FUniqueObjectGuid> local_28;
  
  local_28.WeakPtr.ObjectIndex = 0;
  local_28.WeakPtr.ObjectSerialNumber = 0;
  local_28.ObjectID.Guid.C = 0;
  local_28.ObjectID.Guid.D = 0;
  local_28.ObjectID.Guid.A = 0;
  local_28.ObjectID.Guid.B = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TPersistentObjectPtr<FUniqueObjectGuid>::operator=(&local_28,(FObjectPtr)&local_res8);
  (this->PrerequisiteActorId).A = local_28.ObjectID.Guid.A;
  (this->PrerequisiteActorId).B = local_28.ObjectID.Guid.B;
  (this->PrerequisiteActorId).C = local_28.ObjectID.Guid.C;
  (this->PrerequisiteActorId).D = local_28.ObjectID.Guid.D;
  return;
}

// StaticRegisterNativesULevelCapture @ 146be8d30

void __cdecl ULevelCapture::StaticRegisterNativesULevelCapture(void)

{
  return;
}

