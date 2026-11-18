// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a4890

UClass * __cdecl UMaterialExpressionDoubleVectorParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDoubleVectorParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDoubleVectorParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionDoubleVectorParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDoubleVectorParameter,0x100,0x10,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDoubleVectorParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDoubleVectorParameter>,local_res8,
               UMaterialExpressionParameter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDoubleVectorParameter.InnerSingleton;
}

// UMaterialExpressionDoubleVectorParameter @ 1472acbf0

UMaterialExpressionDoubleVectorParameter * __thiscall
UMaterialExpressionDoubleVectorParameter::UMaterialExpressionDoubleVectorParameter
          (UMaterialExpressionDoubleVectorParameter *this,FVTableHelper *param_1)

{
  UMaterialExpressionParameter::UMaterialExpressionParameter
            ((UMaterialExpressionParameter *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDoubleVectorParameter__6B_;
  (this->DefaultValue).field0_0x0._s_0.X = 0.0;
  (this->DefaultValue).field0_0x0._s_0.Y = 0.0;
  (this->DefaultValue).field0_0x0._s_0.Z = 0.0;
  (this->DefaultValue).field0_0x0._s_0.W = 1.0;
  return this;
}

// ~UMaterialExpressionDoubleVectorParameter @ 1472af5c0

void __thiscall
UMaterialExpressionDoubleVectorParameter::~UMaterialExpressionDoubleVectorParameter
          (UMaterialExpressionDoubleVectorParameter *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionDoubleVectorParameter__6B_;
  UMaterialExpressionParameter::~UMaterialExpressionParameter((UMaterialExpressionParameter *)this);
  return;
}

// GetPrivateStaticClass @ 1472b1e20

UClass * __cdecl UMaterialExpressionDoubleVectorParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDoubleVectorParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDoubleVectorParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionDoubleVectorParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDoubleVectorParameter,0x100,0x10,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDoubleVectorParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDoubleVectorParameter>,local_res8,
               UMaterialExpressionParameter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDoubleVectorParameter.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDoubleVectorParameter @ 1472b44c0

void __cdecl
UMaterialExpressionDoubleVectorParameter::
StaticRegisterNativesUMaterialExpressionDoubleVectorParameter(void)

{
  return;
}

// UMaterialExpressionDoubleVectorParameter @ 148afbdc0

UMaterialExpressionDoubleVectorParameter * __thiscall
UMaterialExpressionDoubleVectorParameter::UMaterialExpressionDoubleVectorParameter
          (UMaterialExpressionDoubleVectorParameter *this,FObjectInitializer *param_1)

{
  UMaterialExpressionParameter::UMaterialExpressionParameter
            ((UMaterialExpressionParameter *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDoubleVectorParameter__6B_;
  (this->DefaultValue).field0_0x0._s_0.X = 0.0;
  (this->DefaultValue).field0_0x0._s_0.Y = 0.0;
  (this->DefaultValue).field0_0x0._s_0.Z = 0.0;
  (this->DefaultValue).field0_0x0._s_0.W = 1.0;
  return this;
}

