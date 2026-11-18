// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a8090

UClass * __cdecl UMaterialExpressionDistanceToNearestSurface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDistanceToNearestSurface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDistanceToNearestSurface",
               &Z_Registration_Info_UClass_UMaterialExpressionDistanceToNearestSurface.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionDistanceToNearestSurface,0xe0
               ,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDistanceToNearestSurface>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDistanceToNearestSurface>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDistanceToNearestSurface.InnerSingleton;
}

// UMaterialExpressionDistanceToNearestSurface @ 1472ac930

UMaterialExpressionDistanceToNearestSurface * __thiscall
UMaterialExpressionDistanceToNearestSurface::UMaterialExpressionDistanceToNearestSurface
          (UMaterialExpressionDistanceToNearestSurface *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDistanceToNearestSurface__6B_;
  (this->Position).OutputIndex = 0;
  (this->Position).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Position).InputName.Number = 0;
  (this->Position).MaskR = 0;
  (this->Position).MaskG = 0;
  (this->Position).MaskB = 0;
  (this->Position).MaskA = 0;
  (this->Position).Expression = (UMaterialExpression *)0x0;
  this->WorldPositionOriginType = Absolute;
  return this;
}

// UMaterialExpressionDistanceToNearestSurface @ 1472ac990

UMaterialExpressionDistanceToNearestSurface * __thiscall
UMaterialExpressionDistanceToNearestSurface::UMaterialExpressionDistanceToNearestSurface
          (UMaterialExpressionDistanceToNearestSurface *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDistanceToNearestSurface__6B_;
  (this->Position).OutputIndex = 0;
  (this->Position).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Position).InputName.Number = 0;
  (this->Position).MaskR = 0;
  (this->Position).MaskG = 0;
  (this->Position).MaskB = 0;
  (this->Position).MaskA = 0;
  (this->Position).Expression = (UMaterialExpression *)0x0;
  this->WorldPositionOriginType = Absolute;
  return this;
}

// ~UMaterialExpressionDistanceToNearestSurface @ 1472af560

void __thiscall
UMaterialExpressionDistanceToNearestSurface::~UMaterialExpressionDistanceToNearestSurface
          (UMaterialExpressionDistanceToNearestSurface *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionDistanceToNearestSurface__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b1be0

UClass * __cdecl UMaterialExpressionDistanceToNearestSurface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDistanceToNearestSurface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDistanceToNearestSurface",
               &Z_Registration_Info_UClass_UMaterialExpressionDistanceToNearestSurface.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionDistanceToNearestSurface,0xe0
               ,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDistanceToNearestSurface>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDistanceToNearestSurface>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDistanceToNearestSurface.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDistanceToNearestSurface @ 1472b4490

void __cdecl
UMaterialExpressionDistanceToNearestSurface::
StaticRegisterNativesUMaterialExpressionDistanceToNearestSurface(void)

{
  return;
}

