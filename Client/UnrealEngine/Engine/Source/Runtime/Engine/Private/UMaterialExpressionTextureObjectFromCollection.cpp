// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472dcdd0

UClass * __cdecl UMaterialExpressionTextureObjectFromCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureObjectFromCollection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureObjectFromCollection",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureObjectFromCollection.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionTextureObjectFromCollection,
               0x110,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureObjectFromCollection>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureObjectFromCollection>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureObjectFromCollection.InnerSingleton;
}

// UMaterialExpressionTextureObjectFromCollection @ 1472e1f90

UMaterialExpressionTextureObjectFromCollection * __thiscall
UMaterialExpressionTextureObjectFromCollection::UMaterialExpressionTextureObjectFromCollection
          (UMaterialExpressionTextureObjectFromCollection *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureObjectFromCollection__6B_;
  (this->TextureCollection).OutputIndex = 0;
  (this->TextureCollection).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TextureCollection).InputName.Number = 0;
  (this->TextureCollection).MaskR = 0;
  (this->TextureCollection).MaskG = 0;
  (this->TextureCollection).MaskB = 0;
  (this->TextureCollection).MaskA = 0;
  (this->TextureCollection).Expression = (UMaterialExpression *)0x0;
  (this->TextureCollectionObject).field0_0x0.DebugPtr = (UTextureCollection *)0x0;
  (this->CollectionIndex).OutputIndex = 0;
  (this->CollectionIndex).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->CollectionIndex).InputName.Number = 0;
  (this->CollectionIndex).MaskR = 0;
  (this->CollectionIndex).MaskG = 0;
  (this->CollectionIndex).MaskB = 0;
  (this->CollectionIndex).MaskA = 0;
  (this->CollectionIndex).Expression = (UMaterialExpression *)0x0;
  this->ConstCollectionIndex = 0;
  this->TextureType = Texture2D;
  return this;
}

// UMaterialExpressionTextureObjectFromCollection @ 1472e2020

UMaterialExpressionTextureObjectFromCollection * __thiscall
UMaterialExpressionTextureObjectFromCollection::UMaterialExpressionTextureObjectFromCollection
          (UMaterialExpressionTextureObjectFromCollection *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureObjectFromCollection__6B_;
  (this->TextureCollection).OutputIndex = 0;
  (this->TextureCollection).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TextureCollection).InputName.Number = 0;
  (this->TextureCollection).MaskR = 0;
  (this->TextureCollection).MaskG = 0;
  (this->TextureCollection).MaskB = 0;
  (this->TextureCollection).MaskA = 0;
  (this->TextureCollection).Expression = (UMaterialExpression *)0x0;
  (this->TextureCollectionObject).field0_0x0.DebugPtr = (UTextureCollection *)0x0;
  (this->CollectionIndex).OutputIndex = 0;
  (this->CollectionIndex).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->CollectionIndex).InputName.Number = 0;
  (this->CollectionIndex).MaskR = 0;
  (this->CollectionIndex).MaskG = 0;
  (this->CollectionIndex).MaskB = 0;
  (this->CollectionIndex).MaskA = 0;
  (this->CollectionIndex).Expression = (UMaterialExpression *)0x0;
  this->ConstCollectionIndex = 0;
  this->TextureType = Texture2D;
  return this;
}

// ~UMaterialExpressionTextureObjectFromCollection @ 1472e3480

void __thiscall
UMaterialExpressionTextureObjectFromCollection::~UMaterialExpressionTextureObjectFromCollection
          (UMaterialExpressionTextureObjectFromCollection *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureObjectFromCollection__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e5a60

UClass * __cdecl UMaterialExpressionTextureObjectFromCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureObjectFromCollection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureObjectFromCollection",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureObjectFromCollection.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionTextureObjectFromCollection,
               0x110,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureObjectFromCollection>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureObjectFromCollection>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureObjectFromCollection.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTextureObjectFromCollection @ 1472e7840

void __cdecl
UMaterialExpressionTextureObjectFromCollection::
StaticRegisterNativesUMaterialExpressionTextureObjectFromCollection(void)

{
  return;
}

