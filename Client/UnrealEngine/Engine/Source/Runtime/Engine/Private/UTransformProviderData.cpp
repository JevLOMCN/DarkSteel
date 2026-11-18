// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticClass @ 147338e20

UClass * __cdecl UTransformProviderData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransformProviderData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TransformProviderData",
               &Z_Registration_Info_UClass_UTransformProviderData.InnerSingleton,
               StaticRegisterNativesUTransformProviderData,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UTransformProviderData>,
               InternalVTableHelperCtorCaller<UTransformProviderData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformProviderData.InnerSingleton;
}

// UTransformProviderData @ 147340d10

UTransformProviderData * __thiscall
UTransformProviderData::UTransformProviderData(UTransformProviderData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTransformProviderData__6B_;
  return this;
}

// UTransformProviderData @ 147340d40

UTransformProviderData * __thiscall
UTransformProviderData::UTransformProviderData
          (UTransformProviderData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTransformProviderData__6B_;
  return this;
}

// ~UTransformProviderData @ 1473422a0

void __thiscall UTransformProviderData::~UTransformProviderData(UTransformProviderData *this)

{
  this->_padding_ = (longlong)&___7UTransformProviderData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateRenderThreadResources @ 147349770

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FTransformProviderRenderProxy * __thiscall
UTransformProviderData::CreateRenderThreadResources
          (UTransformProviderData *this,FSkinningSceneExtensionProxy *param_1,
          FSceneInterface *param_2,FRHICommandListBase *param_3)

{
  return (FTransformProviderRenderProxy *)0x0;
}

// DestroyRenderThreadResources @ 14734a1e0

void __thiscall
UTransformProviderData::DestroyRenderThreadResources
          (UTransformProviderData *this,FTransformProviderRenderProxy *param_1)

{
  return;
}

// GetAnimationBounds @ 14734e0b0

bool __thiscall
UTransformProviderData::GetAnimationBounds
          (UTransformProviderData *this,uint param_1,FRenderBounds *param_2)

{
  return false;
}

// GetPrivateStaticClass @ 147350030

UClass * __cdecl UTransformProviderData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransformProviderData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TransformProviderData",
               &Z_Registration_Info_UClass_UTransformProviderData.InnerSingleton,
               StaticRegisterNativesUTransformProviderData,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UTransformProviderData>,
               InternalVTableHelperCtorCaller<UTransformProviderData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformProviderData.InnerSingleton;
}

// GetSkinningDataOffset @ 147350930

uint __thiscall
UTransformProviderData::GetSkinningDataOffset
          (UTransformProviderData *this,int param_1,TTransform<double> *param_2,
          FSkinnedMeshInstanceData *param_3)

{
  return 0;
}

// GetTransformProviderID @ 147350f30

FGuid * __thiscall UTransformProviderData::GetTransformProviderID(UTransformProviderData *this)

{
  return &`public:_virtual_struct_FGuid_const&___ptr64___cdecl_UTransformProviderData::GetTransformProviderID(void)const___ptr64'
          ::__l2::InvalidID;
}

// GetUniqueAnimationCount @ 1473511b0

uint __thiscall UTransformProviderData::GetUniqueAnimationCount(UTransformProviderData *this)

{
  return 1;
}

// HasAnimationBounds @ 147351580

bool __thiscall UTransformProviderData::HasAnimationBounds(UTransformProviderData *this)

{
  return false;
}

// IsCompiling @ 147351790

bool __thiscall UTransformProviderData::IsCompiling(UTransformProviderData *this)

{
  return false;
}

// IsEnabled @ 1473517c0

bool __thiscall UTransformProviderData::IsEnabled(UTransformProviderData *this)

{
  return this->bEnabled;
}

// StaticRegisterNativesUTransformProviderData @ 1473588e0

void __cdecl UTransformProviderData::StaticRegisterNativesUTransformProviderData(void)

{
  return;
}

// UsesSkeletonBatching @ 14735ecc0

bool __thiscall UTransformProviderData::UsesSkeletonBatching(UTransformProviderData *this)

{
  return false;
}

