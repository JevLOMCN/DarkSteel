// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 17

// StaticClass @ 146055960

UClass * __cdecl UMovieSceneCustomBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCustomBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneCustomBinding",
               &Z_Registration_Info_UClass_UMovieSceneCustomBinding.InnerSingleton,
               StaticRegisterNativesUMovieSceneCustomBinding,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCustomBinding>,
               InternalVTableHelperCtorCaller<UMovieSceneCustomBinding>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCustomBinding.InnerSingleton;
}

// UMovieSceneCustomBinding @ 146058f10

UMovieSceneCustomBinding * __thiscall
UMovieSceneCustomBinding::UMovieSceneCustomBinding
          (UMovieSceneCustomBinding *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneCustomBinding__6B_;
  return this;
}

// UMovieSceneCustomBinding @ 146058f40

UMovieSceneCustomBinding * __thiscall
UMovieSceneCustomBinding::UMovieSceneCustomBinding
          (UMovieSceneCustomBinding *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneCustomBinding__6B_;
  return this;
}

// ~UMovieSceneCustomBinding @ 146059600

void __thiscall UMovieSceneCustomBinding::~UMovieSceneCustomBinding(UMovieSceneCustomBinding *this)

{
  *(undefined ***)this = &___7UMovieSceneCustomBinding__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AsSpawnable @ 14605a1a0

UMovieSceneSpawnableBindingBase * __thiscall
UMovieSceneCustomBinding::AsSpawnable
          (UMovieSceneCustomBinding *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (UMovieSceneSpawnableBindingBase *)0x0;
}

// CreateNewCustomBinding @ 14605a400

UMovieSceneCustomBinding * __thiscall
UMovieSceneCustomBinding::CreateNewCustomBinding
          (UMovieSceneCustomBinding *this,UObject *param_1,UMovieScene *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Bindings\\MovieSceneCustomBinding.h"
             ,0x67,L"Pure virtual not implemented (%s)");
  return (UMovieSceneCustomBinding *)0x0;
}

// GetBoundObjectClass @ 14605ad10

UClass * __thiscall UMovieSceneCustomBinding::GetBoundObjectClass(UMovieSceneCustomBinding *this)

{
  UClass *pUVar1;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Bindings\\MovieSceneCustomBinding.h"
             ,0x7e,L"Pure virtual not implemented (%s)");
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  return pUVar1;
}

// GetCustomBindingPriority @ 14605ae10

int __thiscall UMovieSceneCustomBinding::GetCustomBindingPriority(UMovieSceneCustomBinding *this)

{
  return 0;
}

// GetDesiredBindingName @ 14605ae20

FString * __thiscall
UMovieSceneCustomBinding::GetDesiredBindingName
          (UMovieSceneCustomBinding *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14605b490

UClass * __cdecl UMovieSceneCustomBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCustomBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneCustomBinding",
               &Z_Registration_Info_UClass_UMovieSceneCustomBinding.InnerSingleton,
               StaticRegisterNativesUMovieSceneCustomBinding,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCustomBinding>,
               InternalVTableHelperCtorCaller<UMovieSceneCustomBinding>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCustomBinding.InnerSingleton;
}

// ResolveBinding @ 14605c460

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneBindingResolveResult * __thiscall
UMovieSceneCustomBinding::ResolveBinding
          (UMovieSceneCustomBinding *this,FMovieSceneBindingResolveResult *__return_storage_ptr__,
          FMovieSceneBindingResolveParams *param_1,int param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Bindings\\MovieSceneCustomBinding.h"
             ,0x4f,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Objects).ArrayNum = 0;
  (__return_storage_ptr__->Objects).ArrayMax = 0;
  (__return_storage_ptr__->Object).field0_0x0.DebugPtr = (UObject *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUMovieSceneCustomBinding @ 14605cf90

void __cdecl UMovieSceneCustomBinding::StaticRegisterNativesUMovieSceneCustomBinding(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneCustomBinding_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsBindingCreationFromObject @ 14605d0c0

bool __thiscall
UMovieSceneCustomBinding::SupportsBindingCreationFromObject
          (UMovieSceneCustomBinding *this,UObject *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Bindings\\MovieSceneCustomBinding.h"
             ,0x5f,L"Pure virtual not implemented (%s)");
  return false;
}

// WillSpawnObject @ 14605d1e0

bool __thiscall
UMovieSceneCustomBinding::WillSpawnObject
          (UMovieSceneCustomBinding *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// execGetBaseCustomPriority @ 14605ed70

void __cdecl
UMovieSceneCustomBinding::execGetBaseCustomPriority(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = 100;
  return;
}

// execGetBaseEnginePriority @ 14605eda0

void __cdecl
UMovieSceneCustomBinding::execGetBaseEnginePriority(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = 0;
  return;
}

// AsSpawnable @ 146208370

UMovieSceneSpawnableBindingBase * __thiscall
UMovieSceneCustomBinding::AsSpawnable
          (UMovieSceneCustomBinding *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  code *pcVar1;
  UMovieSceneSpawnableBindingBase *pUVar2;
  FSharedPlaybackState *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x2e0);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar2 = (UMovieSceneSpawnableBindingBase *)(*pcVar1)(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pUVar2;
}

