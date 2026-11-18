// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472a1bb0

UClass * __cdecl UMaterialExpressionScalarParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionScalarParameter.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionScalarParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionScalarParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionScalarParameter,0x118,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionScalarParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionScalarParameter>,aFStackX_8,
               UMaterialExpressionParameter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionScalarParameter.InnerSingleton;
}

// UMaterialExpressionScalarParameter @ 1472d2620

UMaterialExpressionScalarParameter * __thiscall
UMaterialExpressionScalarParameter::UMaterialExpressionScalarParameter
          (UMaterialExpressionScalarParameter *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UMaterialExpressionParameter::UMaterialExpressionParameter
            ((UMaterialExpressionParameter *)this,param_1);
  this_00 = &(this->Enumeration).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UMaterialExpressionScalarParameter__6B_;
  this->ControlType = Numeric;
  this->SliderMin = 0.0;
  *(undefined8 *)&this->SliderMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Enumeration).SoftObjectPtr.field_0x20 = 0;
  *(undefined4 *)&(this->Enumeration).SoftObjectPtr.field_0x4 = 0;
  *(undefined8 *)&(this->Enumeration).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Enumeration).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->EnumerationIndex = '\0';
  this->bUseCustomPrimitiveData = false;
  this->PrimitiveDataIndex = '\0';
  return this;
}

// ~UMaterialExpressionScalarParameter @ 1472d43d0

void __thiscall
UMaterialExpressionScalarParameter::~UMaterialExpressionScalarParameter
          (UMaterialExpressionScalarParameter *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionScalarParameter__6B_;
  pvVar1 = *(void **)&(this->Enumeration).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UMaterialExpressionParameter::~UMaterialExpressionParameter((UMaterialExpressionParameter *)this);
  return;
}

// GetPrivateStaticClass @ 1472d67b0

UClass * __cdecl UMaterialExpressionScalarParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionScalarParameter.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionScalarParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionScalarParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionScalarParameter,0x118,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionScalarParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionScalarParameter>,local_res8,
               UMaterialExpressionParameter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionScalarParameter.InnerSingleton;
}

// IsUsedAsAtlasPosition @ 1472d8730

bool __thiscall
UMaterialExpressionScalarParameter::IsUsedAsAtlasPosition(UMaterialExpressionScalarParameter *this)

{
  return false;
}

// StaticRegisterNativesUMaterialExpressionScalarParameter @ 1472d8850

void __cdecl
UMaterialExpressionScalarParameter::StaticRegisterNativesUMaterialExpressionScalarParameter(void)

{
  return;
}

// UMaterialExpressionScalarParameter @ 148afe270

UMaterialExpressionScalarParameter * __thiscall
UMaterialExpressionScalarParameter::UMaterialExpressionScalarParameter
          (UMaterialExpressionScalarParameter *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UMaterialExpressionParameter::UMaterialExpressionParameter
            ((UMaterialExpressionParameter *)this,param_1);
  this_00 = &(this->Enumeration).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UMaterialExpressionScalarParameter__6B_;
  this->ControlType = Numeric;
  this->SliderMin = 0.0;
  *(undefined8 *)&this->SliderMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Enumeration).SoftObjectPtr.field_0x20 = 0;
  *(undefined4 *)&(this->Enumeration).SoftObjectPtr.field_0x4 = 0;
  *(undefined8 *)&(this->Enumeration).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Enumeration).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->EnumerationIndex = '\0';
  this->bUseCustomPrimitiveData = false;
  this->PrimitiveDataIndex = '\0';
  return this;
}

