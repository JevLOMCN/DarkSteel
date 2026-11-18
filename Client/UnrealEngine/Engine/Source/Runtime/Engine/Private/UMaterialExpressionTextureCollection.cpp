// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472dc5f0

UClass * __cdecl UMaterialExpressionTextureCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureCollection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureCollection",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureCollection.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTextureCollection,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureCollection>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureCollection>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureCollection.InnerSingleton;
}

// UMaterialExpressionTextureCollection @ 1472e1e70

UMaterialExpressionTextureCollection * __thiscall
UMaterialExpressionTextureCollection::UMaterialExpressionTextureCollection
          (UMaterialExpressionTextureCollection *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureCollection__6B_;
  (this->TextureCollection).field0_0x0.DebugPtr = (UTextureCollection *)0x0;
  return this;
}

// ~UMaterialExpressionTextureCollection @ 1472e3400

void __thiscall
UMaterialExpressionTextureCollection::~UMaterialExpressionTextureCollection
          (UMaterialExpressionTextureCollection *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureCollection__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e5760

UClass * __cdecl UMaterialExpressionTextureCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureCollection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureCollection",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureCollection.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTextureCollection,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureCollection>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureCollection>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureCollection.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTextureCollection @ 1472e7800

void __cdecl
UMaterialExpressionTextureCollection::StaticRegisterNativesUMaterialExpressionTextureCollection
          (void)

{
  return;
}

// UMaterialExpressionTextureCollection @ 148aff0b0

UMaterialExpressionTextureCollection * __thiscall
UMaterialExpressionTextureCollection::UMaterialExpressionTextureCollection
          (UMaterialExpressionTextureCollection *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureCollection__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->TextureCollection).field0_0x0.DebugPtr = (UTextureCollection *)0x0;
  return this;
}

