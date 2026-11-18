// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 7

// StaticClass @ 1467cf5d0

UClass * __cdecl UMovieScenePostEvalEventSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePostEvalEventSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePostEvalEventSystem",
               &Z_Registration_Info_UClass_UMovieScenePostEvalEventSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePostEvalEventSystem,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePostEvalEventSystem>,
               InternalVTableHelperCtorCaller<UMovieScenePostEvalEventSystem>,local_res8,
               UMovieSceneEventSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePostEvalEventSystem.InnerSingleton;
}

// UMovieScenePostEvalEventSystem @ 14680aad0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieScenePostEvalEventSystem * __thiscall
UMovieScenePostEvalEventSystem::UMovieScenePostEvalEventSystem
          (UMovieScenePostEvalEventSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined4 *)&this->field_0x70 = 0;
  *(undefined4 *)&this->field_0x74 = 0x80;
  *(undefined4 *)&this->field_0x7c = 0;
  *(undefined4 *)&this->field_0x78 = 0xffffffff;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined4 *)&this->field_0x90 = 0;
  *(undefined ***)this = &___7UMovieScenePostEvalEventSystem__6B_;
  return this;
}

// UMovieScenePostEvalEventSystem @ 14680ab30

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieScenePostEvalEventSystem * __thiscall
UMovieScenePostEvalEventSystem::UMovieScenePostEvalEventSystem
          (UMovieScenePostEvalEventSystem *this,FObjectInitializer *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined4 *)&this->field_0x70 = 0;
  *(undefined4 *)&this->field_0x74 = 0x80;
  *(undefined4 *)&this->field_0x7c = 0;
  *(undefined4 *)&this->field_0x78 = 0xffffffff;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined4 *)&this->field_0x90 = 0;
  *(undefined ***)this = &___7UMovieScenePostEvalEventSystem__6B_;
  this->field_0x32 = 0x20;
  return this;
}

// ~UMovieScenePostEvalEventSystem @ 14680fa00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePostEvalEventSystem::~UMovieScenePostEvalEventSystem
          (UMovieScenePostEvalEventSystem *this)

{
  *(undefined ***)this = &___7UMovieSceneEventSystem__6B_;
  *(undefined4 *)&this->field_0x90 = 0;
  if (*(void **)&this->field_0x88 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x88);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x48);
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 146836720

UClass * __cdecl UMovieScenePostEvalEventSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePostEvalEventSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePostEvalEventSystem",
               &Z_Registration_Info_UClass_UMovieScenePostEvalEventSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePostEvalEventSystem,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePostEvalEventSystem>,
               InternalVTableHelperCtorCaller<UMovieScenePostEvalEventSystem>,local_res8,
               UMovieSceneEventSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePostEvalEventSystem.InnerSingleton;
}

// OnRun @ 146849080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePostEvalEventSystem::OnRun
          (UMovieScenePostEvalEventSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_18;
  
  if (*(int *)&this->field_0x50 != *(int *)&this->field_0x7c) {
    UMovieSceneEntitySystemLinker::GetRunner
              (*(UMovieSceneEntitySystemLinker **)&this->field_0x28,&local_18);
    this_00 = FMovieSceneEntitySystemRunner::GetQueuedEventTriggers(local_18.Object);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UMovieScenePostEvalEventSystem>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               this_00,(UMovieScenePostEvalEventSystem *)&stack0x00000008,(pmf_d8045f66)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// StaticRegisterNativesUMovieScenePostEvalEventSystem @ 14686cbb0

void __cdecl
UMovieScenePostEvalEventSystem::StaticRegisterNativesUMovieScenePostEvalEventSystem(void)

{
  return;
}

