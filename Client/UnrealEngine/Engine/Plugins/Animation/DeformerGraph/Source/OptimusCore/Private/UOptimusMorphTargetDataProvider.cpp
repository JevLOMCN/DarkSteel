// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 7

// StaticClass @ 14e1069f0

UClass * __cdecl UOptimusMorphTargetDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusMorphTargetDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusMorphTargetDataProvider",
               &Z_Registration_Info_UClass_UOptimusMorphTargetDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusMorphTargetDataProvider,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusMorphTargetDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusMorphTargetDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusMorphTargetDataProvider.InnerSingleton;
}

// UOptimusMorphTargetDataProvider @ 14e15a630

UOptimusMorphTargetDataProvider * __thiscall
UOptimusMorphTargetDataProvider::UOptimusMorphTargetDataProvider
          (UOptimusMorphTargetDataProvider *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusMorphTargetDataProvider__6B_;
  (this->SkinnedMesh).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->SkinnedMesh).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UOptimusMorphTargetDataProvider @ 14e15a670

UOptimusMorphTargetDataProvider * __thiscall
UOptimusMorphTargetDataProvider::UOptimusMorphTargetDataProvider
          (UOptimusMorphTargetDataProvider *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusMorphTargetDataProvider__6B_;
  (this->SkinnedMesh).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->SkinnedMesh).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UOptimusMorphTargetDataProvider @ 14e162e40

void __thiscall
UOptimusMorphTargetDataProvider::~UOptimusMorphTargetDataProvider
          (UOptimusMorphTargetDataProvider *this)

{
  this->_padding_ = (longlong)&___7UOptimusMorphTargetDataProvider__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d67f0

UClass * __cdecl UOptimusMorphTargetDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusMorphTargetDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusMorphTargetDataProvider",
               &Z_Registration_Info_UClass_UOptimusMorphTargetDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusMorphTargetDataProvider,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusMorphTargetDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusMorphTargetDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusMorphTargetDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1dd530

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
UOptimusMorphTargetDataProvider::GetRenderProxy(UOptimusMorphTargetDataProvider *this)

{
  int iVar1;
  FComputeDataProviderRenderProxy *pFVar2;
  UActorComponent *this_00;
  FSceneInterface *pFVar3;
  
  pFVar2 = ::operator_new(0x18);
  if (pFVar2 != (FComputeDataProviderRenderProxy *)0x0) {
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->SkinnedMesh).WeakPtr);
    pFVar2[1] = (FComputeDataProviderRenderProxy)0x0;
    *(undefined4 *)(pFVar2 + 2) = 0;
    *pFVar2 = (FComputeDataProviderRenderProxy)&___7FOptimusMorphTargetDataProviderProxy__6B_;
    if (this_00 != (UActorComponent *)0x0) {
      pFVar3 = UActorComponent::GetScene(this_00);
      if (pFVar3 != (FSceneInterface *)0x0) {
        pFVar2[1] = *(FComputeDataProviderRenderProxy *)&this_00[10].UCSSerializationIndex;
        pFVar3 = UActorComponent::GetScene(this_00);
        iVar1 = (**(code **)(pFVar3->_padding_ + 0x4e8))(pFVar3);
        *(int *)(pFVar2 + 2) = iVar1 + 1;
      }
    }
    return pFVar2;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// StaticRegisterNativesUOptimusMorphTargetDataProvider @ 14e225ae0

void __cdecl
UOptimusMorphTargetDataProvider::StaticRegisterNativesUOptimusMorphTargetDataProvider(void)

{
  return;
}

