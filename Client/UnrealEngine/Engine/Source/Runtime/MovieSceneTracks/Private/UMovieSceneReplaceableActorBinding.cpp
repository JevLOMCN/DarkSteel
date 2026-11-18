// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 10

// StaticClass @ 146589470

UClass * __cdecl UMovieSceneReplaceableActorBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneReplaceableActorBinding",
               &Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding.InnerSingleton,
               StaticRegisterNativesUMovieSceneReplaceableActorBinding,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneReplaceableActorBinding>,
               InternalVTableHelperCtorCaller<UMovieSceneReplaceableActorBinding>,local_res8,
               UMovieSceneReplaceableBindingBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding.InnerSingleton;
}

// UMovieSceneReplaceableActorBinding @ 14661b800

UMovieSceneReplaceableActorBinding * __thiscall
UMovieSceneReplaceableActorBinding::UMovieSceneReplaceableActorBinding
          (UMovieSceneReplaceableActorBinding *this,FVTableHelper *param_1)

{
  UMovieSceneReplaceableBindingBase::UMovieSceneReplaceableBindingBase
            ((UMovieSceneReplaceableBindingBase *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneReplaceableActorBinding__6B_;
  return this;
}

// UMovieSceneReplaceableActorBinding @ 14661b830

UMovieSceneReplaceableActorBinding * __thiscall
UMovieSceneReplaceableActorBinding::UMovieSceneReplaceableActorBinding
          (UMovieSceneReplaceableActorBinding *this,FObjectInitializer *param_1)

{
  UMovieSceneReplaceableBindingBase::UMovieSceneReplaceableBindingBase
            ((UMovieSceneReplaceableBindingBase *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneReplaceableActorBinding__6B_;
  return this;
}

// ~UMovieSceneReplaceableActorBinding @ 146621d10

void __thiscall
UMovieSceneReplaceableActorBinding::~UMovieSceneReplaceableActorBinding
          (UMovieSceneReplaceableActorBinding *this)

{
  *(undefined ***)this = &___7UMovieSceneReplaceableActorBinding__6B_;
  UMovieSceneReplaceableBindingBase::~UMovieSceneReplaceableBindingBase
            ((UMovieSceneReplaceableBindingBase *)this);
  return;
}

// GetCustomBindingPriority @ 146689c00

int __thiscall
UMovieSceneReplaceableActorBinding::GetCustomBindingPriority
          (UMovieSceneReplaceableActorBinding *this)

{
  return UMovieSceneCustomBinding::BaseEnginePriority + 1;
}

// GetInnerSpawnableClass @ 14668a450

TSubclassOf<UMovieSceneSpawnableBindingBase> __thiscall
UMovieSceneReplaceableActorBinding::GetInnerSpawnableClass(UMovieSceneReplaceableActorBinding *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UMovieSceneSpawnableActorBinding::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UMovieSceneSpawnableBindingBase>)in_RDX.field0_0x0;
}

// GetPrivateStaticClass @ 146696930

UClass * __cdecl UMovieSceneReplaceableActorBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneReplaceableActorBinding",
               &Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding.InnerSingleton,
               StaticRegisterNativesUMovieSceneReplaceableActorBinding,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneReplaceableActorBinding>,
               InternalVTableHelperCtorCaller<UMovieSceneReplaceableActorBinding>,local_res8,
               UMovieSceneReplaceableBindingBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding.InnerSingleton;
}

// InitReplaceableBinding @ 14669d180

void __thiscall
UMovieSceneReplaceableActorBinding::InitReplaceableBinding
          (UMovieSceneReplaceableActorBinding *this,UObject *param_1,UMovieScene *param_2)

{
  return;
}

// ResolveRuntimeBindingInternal @ 1466da910

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneBindingResolveResult * __thiscall
UMovieSceneReplaceableActorBinding::ResolveRuntimeBindingInternal
          (UMovieSceneReplaceableActorBinding *this,
          FMovieSceneBindingResolveResult *__return_storage_ptr__,
          FMovieSceneBindingResolveParams *param_1,int param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  (__return_storage_ptr__->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Objects).ArrayNum = 0;
  (__return_storage_ptr__->Objects).ArrayMax = 0;
  (__return_storage_ptr__->Object).field0_0x0.DebugPtr = (UObject *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUMovieSceneReplaceableActorBinding @ 1466fe800

void __cdecl
UMovieSceneReplaceableActorBinding::StaticRegisterNativesUMovieSceneReplaceableActorBinding(void)

{
  return;
}

