// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// StaticClass @ 14421f630

UClass * __cdecl UNetObjectGridFilterConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectGridFilterConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectGridFilterConfig",
               &Z_Registration_Info_UClass_UNetObjectGridFilterConfig.InnerSingleton,
               StaticRegisterNativesUNetObjectGridFilterConfig,0x50,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectGridFilterConfig>,
               InternalVTableHelperCtorCaller<UNetObjectGridFilterConfig>,local_res8,
               UNetObjectFilterConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectGridFilterConfig.InnerSingleton;
}

// UNetObjectGridFilterConfig @ 14422a6c0

UNetObjectGridFilterConfig * __thiscall
UNetObjectGridFilterConfig::UNetObjectGridFilterConfig
          (UNetObjectGridFilterConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ViewPosRelevancyFrameCount = 2;
  this->_padding_ = (longlong)&___7UNetObjectGridFilterConfig__6B_;
  (this->FilterProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilterProfiles).ArrayNum = 0;
  (this->FilterProfiles).ArrayMax = 0;
  this->DefaultFrameCountBeforeCulling = 4;
  this->CellSizeX = 20000.0;
  this->CellSizeY = 20000.0;
  this->DefaultCullDistance = 15000.0;
  this->bUseExactCullDistance = true;
  return this;
}

// UNetObjectGridFilterConfig @ 14422a720

UNetObjectGridFilterConfig * __thiscall
UNetObjectGridFilterConfig::UNetObjectGridFilterConfig
          (UNetObjectGridFilterConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ViewPosRelevancyFrameCount = 2;
  this->_padding_ = (longlong)&___7UNetObjectGridFilterConfig__6B_;
  (this->FilterProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilterProfiles).ArrayNum = 0;
  (this->FilterProfiles).ArrayMax = 0;
  this->DefaultFrameCountBeforeCulling = 4;
  this->CellSizeX = 20000.0;
  this->CellSizeY = 20000.0;
  this->DefaultCullDistance = 15000.0;
  this->bUseExactCullDistance = true;
  return this;
}

// ~UNetObjectGridFilterConfig @ 14422b600

void __thiscall
UNetObjectGridFilterConfig::~UNetObjectGridFilterConfig(UNetObjectGridFilterConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNetObjectGridFilterConfig__6B_;
  pFVar1 = (this->FilterProfiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UNetObjectFilterConfig__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14423e4e0

UClass * __cdecl UNetObjectGridFilterConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectGridFilterConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectGridFilterConfig",
               &Z_Registration_Info_UClass_UNetObjectGridFilterConfig.InnerSingleton,
               StaticRegisterNativesUNetObjectGridFilterConfig,0x50,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectGridFilterConfig>,
               InternalVTableHelperCtorCaller<UNetObjectGridFilterConfig>,local_res8,
               UNetObjectFilterConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectGridFilterConfig.InnerSingleton;
}

// StaticRegisterNativesUNetObjectGridFilterConfig @ 144254930

void __cdecl UNetObjectGridFilterConfig::StaticRegisterNativesUNetObjectGridFilterConfig(void)

{
  return;
}

