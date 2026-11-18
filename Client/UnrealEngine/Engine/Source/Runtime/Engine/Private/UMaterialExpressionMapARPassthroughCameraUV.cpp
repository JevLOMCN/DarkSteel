// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a69f0

UClass * __cdecl UMaterialExpressionMapARPassthroughCameraUV::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMapARPassthroughCameraUV.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMapARPassthroughCameraUV",
               &Z_Registration_Info_UClass_UMaterialExpressionMapARPassthroughCameraUV.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionMapARPassthroughCameraUV,0xd8
               ,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMapARPassthroughCameraUV>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMapARPassthroughCameraUV>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMapARPassthroughCameraUV.InnerSingleton;
}

// UMaterialExpressionMapARPassthroughCameraUV @ 1472aedd0

UMaterialExpressionMapARPassthroughCameraUV * __thiscall
UMaterialExpressionMapARPassthroughCameraUV::UMaterialExpressionMapARPassthroughCameraUV
          (UMaterialExpressionMapARPassthroughCameraUV *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMapARPassthroughCameraUV__6B_;
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionMapARPassthroughCameraUV @ 1472aee20

UMaterialExpressionMapARPassthroughCameraUV * __thiscall
UMaterialExpressionMapARPassthroughCameraUV::UMaterialExpressionMapARPassthroughCameraUV
          (UMaterialExpressionMapARPassthroughCameraUV *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMapARPassthroughCameraUV__6B_;
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionMapARPassthroughCameraUV @ 1472afc50

void __thiscall
UMaterialExpressionMapARPassthroughCameraUV::~UMaterialExpressionMapARPassthroughCameraUV
          (UMaterialExpressionMapARPassthroughCameraUV *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMapARPassthroughCameraUV__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b3c20

UClass * __cdecl UMaterialExpressionMapARPassthroughCameraUV::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMapARPassthroughCameraUV.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMapARPassthroughCameraUV",
               &Z_Registration_Info_UClass_UMaterialExpressionMapARPassthroughCameraUV.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionMapARPassthroughCameraUV,0xd8
               ,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMapARPassthroughCameraUV>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMapARPassthroughCameraUV>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMapARPassthroughCameraUV.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMapARPassthroughCameraUV @ 1472b4740

void __cdecl
UMaterialExpressionMapARPassthroughCameraUV::
StaticRegisterNativesUMaterialExpressionMapARPassthroughCameraUV(void)

{
  return;
}

