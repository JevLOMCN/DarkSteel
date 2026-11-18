// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b8b60

UClass * __cdecl UMaterialExpressionPerInstanceCustomData3Vector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData3Vector.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPerInstanceCustomData3Vector",
               &Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData3Vector.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionPerInstanceCustomData3Vector,
               0x100,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPerInstanceCustomData3Vector>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPerInstanceCustomData3Vector>,
               local_res8,UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData3Vector.InnerSingleton;
}

// UMaterialExpressionPerInstanceCustomData3Vector @ 1472c1010

UMaterialExpressionPerInstanceCustomData3Vector * __thiscall
UMaterialExpressionPerInstanceCustomData3Vector::UMaterialExpressionPerInstanceCustomData3Vector
          (UMaterialExpressionPerInstanceCustomData3Vector *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionPerInstanceCustomData3Vector__6B_;
  (this->DefaultValue).OutputIndex = 0;
  (this->DefaultValue).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DefaultValue).InputName.Number = 0;
  (this->DefaultValue).MaskR = 0;
  (this->DefaultValue).MaskG = 0;
  (this->DefaultValue).MaskB = 0;
  (this->DefaultValue).MaskA = 0;
  (this->DefaultValue).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionPerInstanceCustomData3Vector @ 1472c1060

UMaterialExpressionPerInstanceCustomData3Vector * __thiscall
UMaterialExpressionPerInstanceCustomData3Vector::UMaterialExpressionPerInstanceCustomData3Vector
          (UMaterialExpressionPerInstanceCustomData3Vector *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionPerInstanceCustomData3Vector__6B_;
  (this->DefaultValue).OutputIndex = 0;
  (this->DefaultValue).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DefaultValue).InputName.Number = 0;
  (this->DefaultValue).MaskR = 0;
  (this->DefaultValue).MaskG = 0;
  (this->DefaultValue).MaskB = 0;
  (this->DefaultValue).MaskA = 0;
  (this->DefaultValue).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionPerInstanceCustomData3Vector @ 1472c2490

void __thiscall
UMaterialExpressionPerInstanceCustomData3Vector::~UMaterialExpressionPerInstanceCustomData3Vector
          (UMaterialExpressionPerInstanceCustomData3Vector *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionPerInstanceCustomData3Vector__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c6070

UClass * __cdecl UMaterialExpressionPerInstanceCustomData3Vector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData3Vector.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPerInstanceCustomData3Vector",
               &Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData3Vector.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionPerInstanceCustomData3Vector,
               0x100,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPerInstanceCustomData3Vector>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPerInstanceCustomData3Vector>,
               local_res8,UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData3Vector.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionPerInstanceCustomData3Vector @ 1472c7680

void __cdecl
UMaterialExpressionPerInstanceCustomData3Vector::
StaticRegisterNativesUMaterialExpressionPerInstanceCustomData3Vector(void)

{
  return;
}

