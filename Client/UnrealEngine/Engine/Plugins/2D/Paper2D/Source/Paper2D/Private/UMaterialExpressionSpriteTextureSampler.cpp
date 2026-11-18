// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 6

// StaticClass @ 14ace1d30

UClass * __cdecl UMaterialExpressionSpriteTextureSampler::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"MaterialExpressionSpriteTextureSampler",
               &Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSpriteTextureSampler,0x240,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSpriteTextureSampler>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSpriteTextureSampler>,local_res8,
               UMaterialExpressionTextureSampleParameter2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler.InnerSingleton;
}

// UMaterialExpressionSpriteTextureSampler @ 14acea160

UMaterialExpressionSpriteTextureSampler * __thiscall
UMaterialExpressionSpriteTextureSampler::UMaterialExpressionSpriteTextureSampler
          (UMaterialExpressionSpriteTextureSampler *this,FVTableHelper *param_1)

{
  UMaterialExpressionTextureSampleParameter2D::UMaterialExpressionTextureSampleParameter2D
            ((UMaterialExpressionTextureSampleParameter2D *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSpriteTextureSampler__6B_;
  FText::FText(&this->SlotDisplayName);
  return this;
}

// UMaterialExpressionSpriteTextureSampler @ 14acea1a0

UMaterialExpressionSpriteTextureSampler * __thiscall
UMaterialExpressionSpriteTextureSampler::UMaterialExpressionSpriteTextureSampler
          (UMaterialExpressionSpriteTextureSampler *this,FObjectInitializer *param_1)

{
  FName local_res8 [4];
  
  UMaterialExpressionTextureSampleParameter2D::UMaterialExpressionTextureSampleParameter2D
            ((UMaterialExpressionTextureSampleParameter2D *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSpriteTextureSampler__6B_;
  FText::FText(&this->SlotDisplayName);
  ::FName::FName(local_res8,L"SpriteTexture");
  this->_padding_ = (longlong)local_res8[0];
  this->bSampleAdditionalTextures = false;
  this->AdditionalSlotIndex = 0;
  return this;
}

// ~UMaterialExpressionSpriteTextureSampler @ 14aceb9c0

void __thiscall
UMaterialExpressionSpriteTextureSampler::~UMaterialExpressionSpriteTextureSampler
          (UMaterialExpressionSpriteTextureSampler *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionSpriteTextureSampler__6B_;
  pIVar1 = (this->SlotDisplayName).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UMaterialExpressionTextureSampleParameter2D::~UMaterialExpressionTextureSampleParameter2D
            ((UMaterialExpressionTextureSampleParameter2D *)this);
  return;
}

// GetPrivateStaticClass @ 14acfce90

UClass * __cdecl UMaterialExpressionSpriteTextureSampler::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"MaterialExpressionSpriteTextureSampler",
               &Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSpriteTextureSampler,0x240,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSpriteTextureSampler>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSpriteTextureSampler>,local_res8,
               UMaterialExpressionTextureSampleParameter2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSpriteTextureSampler @ 14ad0df40

void __cdecl
UMaterialExpressionSpriteTextureSampler::
StaticRegisterNativesUMaterialExpressionSpriteTextureSampler(void)

{
  return;
}

