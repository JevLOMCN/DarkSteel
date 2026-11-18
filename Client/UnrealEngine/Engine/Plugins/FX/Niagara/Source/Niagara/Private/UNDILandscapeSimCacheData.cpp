// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 14915c0e0

UClass * __cdecl UNDILandscapeSimCacheData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNDILandscapeSimCacheData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NDILandscapeSimCacheData",
               &Z_Registration_Info_UClass_UNDILandscapeSimCacheData.InnerSingleton,
               StaticRegisterNativesUNDILandscapeSimCacheData,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNDILandscapeSimCacheData>,
               InternalVTableHelperCtorCaller<UNDILandscapeSimCacheData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNDILandscapeSimCacheData.InnerSingleton;
}

// UNDILandscapeSimCacheData @ 149169810

UNDILandscapeSimCacheData * __thiscall
UNDILandscapeSimCacheData::UNDILandscapeSimCacheData
          (UNDILandscapeSimCacheData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNDILandscapeSimCacheData__6B_;
  (this->HeightFieldTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HeightFieldTextures).ArrayNum = 0;
  (this->HeightFieldTextures).ArrayMax = 0;
  return this;
}

// UNDILandscapeSimCacheData @ 149169850

UNDILandscapeSimCacheData * __thiscall
UNDILandscapeSimCacheData::UNDILandscapeSimCacheData
          (UNDILandscapeSimCacheData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNDILandscapeSimCacheData__6B_;
  (this->HeightFieldTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HeightFieldTextures).ArrayNum = 0;
  (this->HeightFieldTextures).ArrayMax = 0;
  return this;
}

// ~UNDILandscapeSimCacheData @ 14916b2d0

void __thiscall
UNDILandscapeSimCacheData::~UNDILandscapeSimCacheData(UNDILandscapeSimCacheData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNDILandscapeSimCacheData__6B_;
  pFVar1 = (this->HeightFieldTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14917f7e0

UClass * __cdecl UNDILandscapeSimCacheData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNDILandscapeSimCacheData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NDILandscapeSimCacheData",
               &Z_Registration_Info_UClass_UNDILandscapeSimCacheData.InnerSingleton,
               StaticRegisterNativesUNDILandscapeSimCacheData,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNDILandscapeSimCacheData>,
               InternalVTableHelperCtorCaller<UNDILandscapeSimCacheData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNDILandscapeSimCacheData.InnerSingleton;
}

// StaticRegisterNativesUNDILandscapeSimCacheData @ 14918ee60

void __cdecl UNDILandscapeSimCacheData::StaticRegisterNativesUNDILandscapeSimCacheData(void)

{
  return;
}

