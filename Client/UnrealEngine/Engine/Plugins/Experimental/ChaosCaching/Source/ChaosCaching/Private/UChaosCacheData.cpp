// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 6

// StaticClass @ 14dad9c70

UClass * __cdecl UChaosCacheData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosCacheData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCaching",L"ChaosCacheData",
               &Z_Registration_Info_UClass_UChaosCacheData.InnerSingleton,
               StaticRegisterNativesUChaosCacheData,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosCacheData>,InternalVTableHelperCtorCaller<UChaosCacheData>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosCacheData.InnerSingleton;
}

// UChaosCacheData @ 14dae7d70

UChaosCacheData * __thiscall
UChaosCacheData::UChaosCacheData(UChaosCacheData *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UChaosCacheData__6B_;
  return this;
}

// UChaosCacheData @ 14dae7da0

UChaosCacheData * __thiscall
UChaosCacheData::UChaosCacheData(UChaosCacheData *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UChaosCacheData__6B_;
  return this;
}

// ~UChaosCacheData @ 14dae8e40

void __thiscall UChaosCacheData::~UChaosCacheData(UChaosCacheData *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14daf85e0

UClass * __cdecl UChaosCacheData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosCacheData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCaching",L"ChaosCacheData",
               &Z_Registration_Info_UClass_UChaosCacheData.InnerSingleton,
               StaticRegisterNativesUChaosCacheData,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosCacheData>,InternalVTableHelperCtorCaller<UChaosCacheData>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosCacheData.InnerSingleton;
}

// StaticRegisterNativesUChaosCacheData @ 14db053a0

void __cdecl UChaosCacheData::StaticRegisterNativesUChaosCacheData(void)

{
  return;
}

