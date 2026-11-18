// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 6

// StaticClass @ 1467cf370

UClass * __cdecl UMovieScenePostSpawnEventSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePostSpawnEventSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePostSpawnEventSystem",
               &Z_Registration_Info_UClass_UMovieScenePostSpawnEventSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePostSpawnEventSystem,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePostSpawnEventSystem>,
               InternalVTableHelperCtorCaller<UMovieScenePostSpawnEventSystem>,local_res8,
               UMovieSceneEventSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePostSpawnEventSystem.InnerSingleton;
}

// UMovieScenePostSpawnEventSystem @ 14680ab90

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieScenePostSpawnEventSystem * __thiscall
UMovieScenePostSpawnEventSystem::UMovieScenePostSpawnEventSystem
          (UMovieScenePostSpawnEventSystem *this,FVTableHelper *param_1)

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
  *(undefined ***)this = &___7UMovieScenePostSpawnEventSystem__6B_;
  return this;
}

// UMovieScenePostSpawnEventSystem @ 14680abf0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieScenePostSpawnEventSystem * __thiscall
UMovieScenePostSpawnEventSystem::UMovieScenePostSpawnEventSystem
          (UMovieScenePostSpawnEventSystem *this,FObjectInitializer *param_1)

{
  UObject *local_res8 [2];
  UClass *local_res18 [2];
  
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
  *(undefined ***)this = &___7UMovieScenePostSpawnEventSystem__6B_;
  this->field_0x32 = 2;
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    local_res8[0] = *(UObject **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8[0]);
    }
    local_res18[0] = Z_Construct_UClass_UMovieSceneSpawnablesSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
  }
  return this;
}

// ~UMovieScenePostSpawnEventSystem @ 14680fa60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePostSpawnEventSystem::~UMovieScenePostSpawnEventSystem
          (UMovieScenePostSpawnEventSystem *this)

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

// GetPrivateStaticClass @ 1468367e0

UClass * __cdecl UMovieScenePostSpawnEventSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePostSpawnEventSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePostSpawnEventSystem",
               &Z_Registration_Info_UClass_UMovieScenePostSpawnEventSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePostSpawnEventSystem,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePostSpawnEventSystem>,
               InternalVTableHelperCtorCaller<UMovieScenePostSpawnEventSystem>,local_res8,
               UMovieSceneEventSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePostSpawnEventSystem.InnerSingleton;
}

// StaticRegisterNativesUMovieScenePostSpawnEventSystem @ 14686cbc0

void __cdecl
UMovieScenePostSpawnEventSystem::StaticRegisterNativesUMovieScenePostSpawnEventSystem(void)

{
  return;
}

