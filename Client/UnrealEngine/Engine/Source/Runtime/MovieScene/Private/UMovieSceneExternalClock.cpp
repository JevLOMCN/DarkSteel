// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// StaticClass @ 1461e6330

UClass * __cdecl UMovieSceneExternalClock::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneExternalClock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneExternalClock",
               &Z_Registration_Info_UClass_UMovieSceneExternalClock.InnerSingleton,
               StaticRegisterNativesUMovieSceneExternalClock,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneExternalClock>,
               InternalVTableHelperCtorCaller<UMovieSceneExternalClock>,local_res8,
               UMovieSceneClock::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneExternalClock.InnerSingleton;
}

// UMovieSceneExternalClock @ 1461fda30

UMovieSceneExternalClock * __thiscall
UMovieSceneExternalClock::UMovieSceneExternalClock
          (UMovieSceneExternalClock *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UMovieSceneExternalClock__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CustomClockSourcePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->CustomClockSourcePath).AssetPath.PackageName.Number = 0;
  (this->CustomClockSourcePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->CustomClockSourcePath).AssetPath.AssetName.Number = 0;
  (this->CustomClockSourcePath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CustomClockSourcePath).SubPathString.Data.ArrayNum = 0;
  (this->CustomClockSourcePath).SubPathString.Data.ArrayMax = 0;
  return this;
}

// UMovieSceneExternalClock @ 1461fda90

UMovieSceneExternalClock * __thiscall
UMovieSceneExternalClock::UMovieSceneExternalClock
          (UMovieSceneExternalClock *this,FObjectInitializer *param_1)

{
  UMovieSceneSignedObject::UMovieSceneSignedObject((UMovieSceneSignedObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneExternalClock__6B_;
  (this->CustomClockSourcePath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->CustomClockSourcePath).AssetPath.PackageName.Number = 0;
  (this->CustomClockSourcePath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->CustomClockSourcePath).AssetPath.AssetName.Number = 0;
  (this->CustomClockSourcePath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CustomClockSourcePath).SubPathString.Data.ArrayNum = 0;
  (this->CustomClockSourcePath).SubPathString.Data.ArrayMax = 0;
  return this;
}

// ~UMovieSceneExternalClock @ 1461ffb30

void __thiscall UMovieSceneExternalClock::~UMovieSceneExternalClock(UMovieSceneExternalClock *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneExternalClock__6B_;
  pFVar1 = (this->CustomClockSourcePath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieSceneSignedObject__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14621b930

UClass * __cdecl UMovieSceneExternalClock::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneExternalClock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneExternalClock",
               &Z_Registration_Info_UClass_UMovieSceneExternalClock.InnerSingleton,
               StaticRegisterNativesUMovieSceneExternalClock,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneExternalClock>,
               InternalVTableHelperCtorCaller<UMovieSceneExternalClock>,local_res8,
               UMovieSceneClock::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneExternalClock.InnerSingleton;
}

// MakeTimeController @ 146223460

TSharedPtr<FMovieSceneTimeController,1> * __thiscall
UMovieSceneExternalClock::MakeTimeController
          (UMovieSceneExternalClock *this,
          TSharedPtr<FMovieSceneTimeController,1> *__return_storage_ptr__,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FMovieSceneTimeController,1> *pTVar4;
  FWeakObjectPtr local_res10;
  UObject *local_res20;
  
  pTVar3 = ::operator_new(0x70);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FMovieSceneTimeController *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneTimeController_Custom___00_SharedPointerInternals__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    FMovieSceneTimeController_Custom::FMovieSceneTimeController_Custom
              ((FMovieSceneTimeController_Custom *)(pTVar3 + 1),&this->CustomClockSourcePath,
               (TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res10);
    if ((FMovieSceneTimeController *)(pTVar3 + 1) == (FMovieSceneTimeController *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FMovieSceneTimeController,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (FMovieSceneTimeController *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUMovieSceneExternalClock @ 146237bd0

void __cdecl UMovieSceneExternalClock::StaticRegisterNativesUMovieSceneExternalClock(void)

{
  return;
}

