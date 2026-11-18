// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14725a1e0

UClass * __cdecl UInterface_AnimCurveMetaData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInterface_AnimCurveMetaData.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Interface_AnimCurveMetaData",
               &Z_Registration_Info_UClass_UInterface_AnimCurveMetaData.InnerSingleton,
               StaticRegisterNativesUInterface_AnimCurveMetaData,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterface_AnimCurveMetaData>,
               InternalVTableHelperCtorCaller<UInterface_AnimCurveMetaData>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterface_AnimCurveMetaData.InnerSingleton;
}

// UInterface_AnimCurveMetaData @ 14725d4b0

UInterface_AnimCurveMetaData * __thiscall
UInterface_AnimCurveMetaData::UInterface_AnimCurveMetaData
          (UInterface_AnimCurveMetaData *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterface_AnimCurveMetaData__6B_;
  return this;
}

// UInterface_AnimCurveMetaData @ 14725d4e0

UInterface_AnimCurveMetaData * __thiscall
UInterface_AnimCurveMetaData::UInterface_AnimCurveMetaData
          (UInterface_AnimCurveMetaData *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterface_AnimCurveMetaData__6B_;
  return this;
}

// ~UInterface_AnimCurveMetaData @ 14725dfb0

void __thiscall
UInterface_AnimCurveMetaData::~UInterface_AnimCurveMetaData(UInterface_AnimCurveMetaData *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147260be0

UClass * __cdecl UInterface_AnimCurveMetaData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterface_AnimCurveMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Interface_AnimCurveMetaData",
               &Z_Registration_Info_UClass_UInterface_AnimCurveMetaData.InnerSingleton,
               StaticRegisterNativesUInterface_AnimCurveMetaData,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterface_AnimCurveMetaData>,
               InternalVTableHelperCtorCaller<UInterface_AnimCurveMetaData>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterface_AnimCurveMetaData.InnerSingleton;
}

// StaticRegisterNativesUInterface_AnimCurveMetaData @ 147261000

void __cdecl UInterface_AnimCurveMetaData::StaticRegisterNativesUInterface_AnimCurveMetaData(void)

{
  return;
}

