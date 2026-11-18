// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14727a1b0

UClass * __cdecl UInterface_AssetUserData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInterface_AssetUserData.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Interface_AssetUserData",
               &Z_Registration_Info_UClass_UInterface_AssetUserData.InnerSingleton,
               StaticRegisterNativesUInterface_AssetUserData,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterface_AssetUserData>,
               InternalVTableHelperCtorCaller<UInterface_AssetUserData>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterface_AssetUserData.InnerSingleton;
}

// UInterface_AssetUserData @ 14727fac0

UInterface_AssetUserData * __thiscall
UInterface_AssetUserData::UInterface_AssetUserData
          (UInterface_AssetUserData *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterface_AssetUserData__6B_;
  return this;
}

// ~UInterface_AssetUserData @ 14727fe30

void __thiscall UInterface_AssetUserData::~UInterface_AssetUserData(UInterface_AssetUserData *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147281220

UClass * __cdecl UInterface_AssetUserData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterface_AssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Interface_AssetUserData",
               &Z_Registration_Info_UClass_UInterface_AssetUserData.InnerSingleton,
               StaticRegisterNativesUInterface_AssetUserData,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterface_AssetUserData>,
               InternalVTableHelperCtorCaller<UInterface_AssetUserData>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterface_AssetUserData.InnerSingleton;
}

// StaticRegisterNativesUInterface_AssetUserData @ 1472815c0

void __cdecl UInterface_AssetUserData::StaticRegisterNativesUInterface_AssetUserData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UInterface_AssetUserData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UInterface_AssetUserData @ 1475a7660

UInterface_AssetUserData * __thiscall
UInterface_AssetUserData::UInterface_AssetUserData
          (UInterface_AssetUserData *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterface_AssetUserData__6B_;
  return this;
}

