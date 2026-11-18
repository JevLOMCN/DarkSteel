// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 9

// StaticClass @ 1461e61f0

UClass * __cdecl UMovieSceneClock::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneClock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneClock",
               &Z_Registration_Info_UClass_UMovieSceneClock.InnerSingleton,
               StaticRegisterNativesUMovieSceneClock,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UMovieSceneClock>,
               InternalVTableHelperCtorCaller<UMovieSceneClock>,local_res8,
               UMovieSceneSignedObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneClock.InnerSingleton;
}

// UMovieSceneClock @ 1461fd9b0

UMovieSceneClock * __thiscall
UMovieSceneClock::UMovieSceneClock(UMovieSceneClock *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x58 = 2;
  *(undefined8 *)&this->field_0x2c = 0;
  *(undefined8 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined ***)this = &___7UMovieSceneClock__6B_;
  return this;
}

// UMovieSceneClock @ 1461fda00

UMovieSceneClock * __thiscall
UMovieSceneClock::UMovieSceneClock(UMovieSceneClock *this,FObjectInitializer *param_1)

{
  UMovieSceneSignedObject::UMovieSceneSignedObject((UMovieSceneSignedObject *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneClock__6B_;
  return this;
}

// ~UMovieSceneClock @ 1461ffad0

void __thiscall UMovieSceneClock::~UMovieSceneClock(UMovieSceneClock *this)

{
  *(undefined ***)this = &___7UMovieSceneSignedObject__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&this->field_0x48,
             *(int *)&this->field_0x50);
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x40);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14621b870

UClass * __cdecl UMovieSceneClock::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneClock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneClock",
               &Z_Registration_Info_UClass_UMovieSceneClock.InnerSingleton,
               StaticRegisterNativesUMovieSceneClock,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UMovieSceneClock>,
               InternalVTableHelperCtorCaller<UMovieSceneClock>,local_res8,
               UMovieSceneSignedObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneClock.InnerSingleton;
}

// HandleTickResolutionChange @ 14621de30

void __thiscall
UMovieSceneClock::HandleTickResolutionChange
          (UMovieSceneClock *this,FFrameRate param_1,FFrameRate param_2)

{
  return;
}

// MakeSubSequenceTransform @ 146223400

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneClock::MakeSubSequenceTransform
          (UMovieSceneClock *this,FMovieSceneSectionTimingParametersFrames *param_1,
          UMovieSceneSubSection *param_2,FMovieSceneSequenceTransform *param_3)

{
  return false;
}

// MakeTimeController @ 146223410

TSharedPtr<FMovieSceneTimeController,1> * __thiscall
UMovieSceneClock::MakeTimeController
          (UMovieSceneClock *this,TSharedPtr<FMovieSceneTimeController,1> *__return_storage_ptr__,
          UObject *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FMovieSceneTimeController_Tick,1> *pTVar2;
  TSharedRef<FMovieSceneTimeController_Tick,1> local_18;
  
  pTVar2 = MakeShared<FMovieSceneTimeController_Tick,1>(&local_18);
  __return_storage_ptr__->Object = (FMovieSceneTimeController *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUMovieSceneClock @ 146237bc0

void __cdecl UMovieSceneClock::StaticRegisterNativesUMovieSceneClock(void)

{
  return;
}

