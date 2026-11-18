// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cdcc0

UClass * __cdecl UMaterialExpressionSkyAtmosphereLightDirection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDirection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSkyAtmosphereLightDirection",
               &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDirection.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightDirection,
               200,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSkyAtmosphereLightDirection>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSkyAtmosphereLightDirection>,
               local_res8,UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDirection.InnerSingleton;
}

// UMaterialExpressionSkyAtmosphereLightDirection @ 1472d2fe0

UMaterialExpressionSkyAtmosphereLightDirection * __thiscall
UMaterialExpressionSkyAtmosphereLightDirection::UMaterialExpressionSkyAtmosphereLightDirection
          (UMaterialExpressionSkyAtmosphereLightDirection *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSkyAtmosphereLightDirection__6B_;
  return this;
}

// UMaterialExpressionSkyAtmosphereLightDirection @ 1472d3010

UMaterialExpressionSkyAtmosphereLightDirection * __thiscall
UMaterialExpressionSkyAtmosphereLightDirection::UMaterialExpressionSkyAtmosphereLightDirection
          (UMaterialExpressionSkyAtmosphereLightDirection *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSkyAtmosphereLightDirection__6B_;
  return this;
}

// ~UMaterialExpressionSkyAtmosphereLightDirection @ 1472d4640

void __thiscall
UMaterialExpressionSkyAtmosphereLightDirection::~UMaterialExpressionSkyAtmosphereLightDirection
          (UMaterialExpressionSkyAtmosphereLightDirection *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSkyAtmosphereLightDirection__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472d7470

UClass * __cdecl UMaterialExpressionSkyAtmosphereLightDirection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDirection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSkyAtmosphereLightDirection",
               &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDirection.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightDirection,
               200,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSkyAtmosphereLightDirection>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSkyAtmosphereLightDirection>,
               local_res8,UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDirection.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightDirection @ 1472d8960

void __cdecl
UMaterialExpressionSkyAtmosphereLightDirection::
StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightDirection(void)

{
  return;
}

