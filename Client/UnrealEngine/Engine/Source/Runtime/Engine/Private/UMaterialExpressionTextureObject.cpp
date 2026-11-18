// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472dcbd0

UClass * __cdecl UMaterialExpressionTextureObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureObject",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureObject.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTextureObject,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureObject>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureObject>,local_res8,
               UMaterialExpressionTextureBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureObject.InnerSingleton;
}

// UMaterialExpressionTextureObject @ 1472e1f50

UMaterialExpressionTextureObject * __thiscall
UMaterialExpressionTextureObject::UMaterialExpressionTextureObject
          (UMaterialExpressionTextureObject *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->field_0xb9 = this->field_0xb9 & 0xfe;
  *(undefined ***)this = &___7UMaterialExpressionTextureObject__6B_;
  *(undefined8 *)&this->field_0xb0 = 0;
  return this;
}

// ~UMaterialExpressionTextureObject @ 1472e3460

void __thiscall
UMaterialExpressionTextureObject::~UMaterialExpressionTextureObject
          (UMaterialExpressionTextureObject *this)

{
  *(undefined ***)this = &___7UMaterialExpressionTextureBase__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e59a0

UClass * __cdecl UMaterialExpressionTextureObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureObject",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureObject.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTextureObject,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureObject>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureObject>,local_res8,
               UMaterialExpressionTextureBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureObject.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTextureObject @ 1472e7830

void __cdecl
UMaterialExpressionTextureObject::StaticRegisterNativesUMaterialExpressionTextureObject(void)

{
  return;
}

// UMaterialExpressionTextureObject @ 148aff260

UMaterialExpressionTextureObject * __thiscall
UMaterialExpressionTextureObject::UMaterialExpressionTextureObject
          (UMaterialExpressionTextureObject *this,FObjectInitializer *param_1)

{
  UMaterialExpressionTextureBase::UMaterialExpressionTextureBase
            ((UMaterialExpressionTextureBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionTextureObject__6B_;
  return this;
}

