// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 6

// StaticClass @ 14cfcc0d0

UClass * __cdecl UDEPRECATED_MaterialExpressionARKitPassthroughCamera::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"MaterialExpressionARKitPassthroughCamera",
               &Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera.
                InnerSingleton,
               StaticRegisterNativesUDEPRECATED_MaterialExpressionARKitPassthroughCamera,0xe0,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UDEPRECATED_MaterialExpressionARKitPassthroughCamera>,
               InternalVTableHelperCtorCaller<UDEPRECATED_MaterialExpressionARKitPassthroughCamera>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera.
         InnerSingleton;
}

// UDEPRECATED_MaterialExpressionARKitPassthroughCamera @ 14cfd0930

UDEPRECATED_MaterialExpressionARKitPassthroughCamera * __thiscall
UDEPRECATED_MaterialExpressionARKitPassthroughCamera::
UDEPRECATED_MaterialExpressionARKitPassthroughCamera
          (UDEPRECATED_MaterialExpressionARKitPassthroughCamera *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UDEPRECATED_MaterialExpressionARKitPassthroughCamera__6B_;
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

// UDEPRECATED_MaterialExpressionARKitPassthroughCamera @ 14cfd0980

UDEPRECATED_MaterialExpressionARKitPassthroughCamera * __thiscall
UDEPRECATED_MaterialExpressionARKitPassthroughCamera::
UDEPRECATED_MaterialExpressionARKitPassthroughCamera
          (UDEPRECATED_MaterialExpressionARKitPassthroughCamera *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UDEPRECATED_MaterialExpressionARKitPassthroughCamera__6B_;
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

// ~UDEPRECATED_MaterialExpressionARKitPassthroughCamera @ 14cfd14c0

void __thiscall
UDEPRECATED_MaterialExpressionARKitPassthroughCamera::
~UDEPRECATED_MaterialExpressionARKitPassthroughCamera
          (UDEPRECATED_MaterialExpressionARKitPassthroughCamera *this)

{
  this->_padding_ = (longlong)&___7UDEPRECATED_MaterialExpressionARKitPassthroughCamera__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14cfd78c0

UClass * __cdecl UDEPRECATED_MaterialExpressionARKitPassthroughCamera::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"MaterialExpressionARKitPassthroughCamera",
               &Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera.
                InnerSingleton,
               StaticRegisterNativesUDEPRECATED_MaterialExpressionARKitPassthroughCamera,0xe0,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UDEPRECATED_MaterialExpressionARKitPassthroughCamera>,
               InternalVTableHelperCtorCaller<UDEPRECATED_MaterialExpressionARKitPassthroughCamera>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_MaterialExpressionARKitPassthroughCamera.
         InnerSingleton;
}

// StaticRegisterNativesUDEPRECATED_MaterialExpressionARKitPassthroughCamera @ 14cfdf4b0

void __cdecl
UDEPRECATED_MaterialExpressionARKitPassthroughCamera::
StaticRegisterNativesUDEPRECATED_MaterialExpressionARKitPassthroughCamera(void)

{
  return;
}

