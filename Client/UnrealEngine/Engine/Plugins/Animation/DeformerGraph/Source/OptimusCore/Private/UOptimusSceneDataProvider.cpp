// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 7

// StaticClass @ 14e11a620

UClass * __cdecl UOptimusSceneDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSceneDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSceneDataProvider",
               &Z_Registration_Info_UClass_UOptimusSceneDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusSceneDataProvider,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusSceneDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusSceneDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSceneDataProvider.InnerSingleton;
}

// UOptimusSceneDataProvider @ 14e15cb40

UOptimusSceneDataProvider * __thiscall
UOptimusSceneDataProvider::UOptimusSceneDataProvider
          (UOptimusSceneDataProvider *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusSceneDataProvider__6B_;
  (this->SceneComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->SceneComponent).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UOptimusSceneDataProvider @ 14e15cb80

UOptimusSceneDataProvider * __thiscall
UOptimusSceneDataProvider::UOptimusSceneDataProvider
          (UOptimusSceneDataProvider *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusSceneDataProvider__6B_;
  (this->SceneComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->SceneComponent).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UOptimusSceneDataProvider @ 14e163eb0

void __thiscall
UOptimusSceneDataProvider::~UOptimusSceneDataProvider(UOptimusSceneDataProvider *this)

{
  this->_padding_ = (longlong)&___7UOptimusSceneDataProvider__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d8c40

UClass * __cdecl UOptimusSceneDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSceneDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSceneDataProvider",
               &Z_Registration_Info_UClass_UOptimusSceneDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusSceneDataProvider,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusSceneDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusSceneDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSceneDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1dd880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FComputeDataProviderRenderProxy * __thiscall
UOptimusSceneDataProvider::GetRenderProxy(UOptimusSceneDataProvider *this)

{
  undefined4 uVar1;
  FComputeDataProviderRenderProxy *pFVar2;
  UActorComponent *this_00;
  UWorld *pUVar3;
  FSceneInterface *pFVar4;
  
  pFVar2 = ::operator_new(0x18);
  if (pFVar2 == (FComputeDataProviderRenderProxy *)0x0) {
    return (FComputeDataProviderRenderProxy *)0x0;
  }
  this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->SceneComponent).WeakPtr);
  *pFVar2 = (FComputeDataProviderRenderProxy)&___7FOptimusSceneDataProviderProxy__6B_;
  *(bool *)(pFVar2 + 1) = this_00 != (UActorComponent *)0x0;
  if (this_00 != (UActorComponent *)0x0) {
    pUVar3 = this_00->WorldPrivate;
    if (pUVar3 == (UWorld *)0x0) {
      pUVar3 = UActorComponent::GetWorld_Uncached(this_00);
    }
    *(float *)&pFVar2[1].field_0x4 = (float)pUVar3->TimeSeconds;
    pUVar3 = this_00->WorldPrivate;
    if (pUVar3 == (UWorld *)0x0) {
      pUVar3 = UActorComponent::GetWorld_Uncached(this_00);
    }
    *(float *)(pFVar2 + 2) = pUVar3->DeltaTimeSeconds;
    pFVar4 = UActorComponent::GetScene(this_00);
    uVar1 = (**(code **)(pFVar4->_padding_ + 0x4e8))(pFVar4);
    *(undefined4 *)&pFVar2[2].field_0x4 = uVar1;
    return pFVar2;
  }
  *(undefined8 *)&pFVar2[1].field_0x4 = 0;
  *(undefined4 *)&pFVar2[2].field_0x4 = 0;
  return pFVar2;
}

// StaticRegisterNativesUOptimusSceneDataProvider @ 14e225e50

void __cdecl UOptimusSceneDataProvider::StaticRegisterNativesUOptimusSceneDataProvider(void)

{
  return;
}

