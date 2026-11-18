// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 7

// StaticClass @ 14e113b60

UClass * __cdecl UOptimusDebugDrawDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDebugDrawDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDebugDrawDataProvider",
               &Z_Registration_Info_UClass_UOptimusDebugDrawDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusDebugDrawDataProvider,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusDebugDrawDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusDebugDrawDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDebugDrawDataProvider.InnerSingleton;
}

// UOptimusDebugDrawDataProvider @ 14e158fd0

UOptimusDebugDrawDataProvider * __thiscall
UOptimusDebugDrawDataProvider::UOptimusDebugDrawDataProvider
          (UOptimusDebugDrawDataProvider *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusDebugDrawDataProvider__6B_;
  (this->PrimitiveComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->PrimitiveComponent).WeakPtr,(FObjectPtr)local_res8);
  (this->DebugDrawParameters).bForceEnable = false;
  (this->DebugDrawParameters).MaxLineCount = 10000;
  (this->DebugDrawParameters).MaxTriangleCount = 2000;
  (this->DebugDrawParameters).MaxCharacterCount = 2000;
  (this->DebugDrawParameters).FontSize = 8;
  return this;
}

// UOptimusDebugDrawDataProvider @ 14e159030

UOptimusDebugDrawDataProvider * __thiscall
UOptimusDebugDrawDataProvider::UOptimusDebugDrawDataProvider
          (UOptimusDebugDrawDataProvider *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusDebugDrawDataProvider__6B_;
  (this->PrimitiveComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->PrimitiveComponent).WeakPtr,(FObjectPtr)local_res8);
  (this->DebugDrawParameters).bForceEnable = false;
  (this->DebugDrawParameters).MaxLineCount = 10000;
  (this->DebugDrawParameters).MaxTriangleCount = 2000;
  (this->DebugDrawParameters).MaxCharacterCount = 2000;
  (this->DebugDrawParameters).FontSize = 8;
  return this;
}

// ~UOptimusDebugDrawDataProvider @ 14e162680

void __thiscall
UOptimusDebugDrawDataProvider::~UOptimusDebugDrawDataProvider(UOptimusDebugDrawDataProvider *this)

{
  this->_padding_ = (longlong)&___7UOptimusDebugDrawDataProvider__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d55f0

UClass * __cdecl UOptimusDebugDrawDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDebugDrawDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDebugDrawDataProvider",
               &Z_Registration_Info_UClass_UOptimusDebugDrawDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusDebugDrawDataProvider,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusDebugDrawDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusDebugDrawDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDebugDrawDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1dd060

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FComputeDataProviderRenderProxy * __thiscall
UOptimusDebugDrawDataProvider::GetRenderProxy(UOptimusDebugDrawDataProvider *this)

{
  FOptimusDebugDrawDataProviderProxy *pFVar1;
  UPrimitiveComponent *pUVar2;
  
  pFVar1 = ::operator_new(0x120);
  if (pFVar1 != (FOptimusDebugDrawDataProviderProxy *)0x0) {
    pUVar2 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->PrimitiveComponent).WeakPtr);
    pFVar1 = FOptimusDebugDrawDataProviderProxy::FOptimusDebugDrawDataProviderProxy
                       (pFVar1,pUVar2,&this->DebugDrawParameters);
    return (FComputeDataProviderRenderProxy *)pFVar1;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// StaticRegisterNativesUOptimusDebugDrawDataProvider @ 14e2258d0

void __cdecl UOptimusDebugDrawDataProvider::StaticRegisterNativesUOptimusDebugDrawDataProvider(void)

{
  return;
}

