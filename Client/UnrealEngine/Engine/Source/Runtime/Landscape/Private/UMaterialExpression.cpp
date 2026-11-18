// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 8

// CanReferenceTexture @ 145f09790

bool __thiscall UMaterialExpression::CanReferenceTexture(UMaterialExpression *this)

{
  return false;
}

// GetMaterialExpressionId @ 145f10b60

FGuid * __thiscall UMaterialExpression::GetMaterialExpressionId(UMaterialExpression *this)

{
  return &`public:_virtual_struct_FGuid&___ptr64___cdecl_UMaterialExpression::GetMaterialExpressionId(void)___ptr64'
          ::__l2::Dummy;
}

// GetParameterExpressionId @ 145f12160

FGuid * __thiscall UMaterialExpression::GetParameterExpressionId(UMaterialExpression *this)

{
  code *pcVar1;
  bool bVar2;
  FGuid *pFVar3;
  
  if (this->bIsParameterExpression != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsParameterExpression",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialExpression.h"
                       ,0x1f9,
                       L"Expressions with bIsParameterExpression==true must implement their own GetParameterExpressionId!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGuid *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &`public:_virtual_struct_FGuid&___ptr64___cdecl_UMaterialExpression::GetParameterExpressionId(void)___ptr64'
          ::__l2::Dummy;
}

// GetReferencedTexture @ 145f131e0

UObject * __thiscall UMaterialExpression::GetReferencedTexture(UMaterialExpression *this)

{
  return (UObject *)0x0;
}

// GetReferencedTextureCollection @ 145f131f0

UTextureCollection * __thiscall
UMaterialExpression::GetReferencedTextureCollection(UMaterialExpression *this)

{
  return (UTextureCollection *)0x0;
}

// GetReferencedTextures @ 145f13200

TArray<UObject_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
UMaterialExpression::GetReferencedTextures
          (UMaterialExpression *this,
          TArray<UObject_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  ForElementType<UObject_*> FVar1;
  undefined8 uVar2;
  ForElementType<UObject_*> FVar3;
  
  uVar2 = (**(code **)(this->_padding_ + 0x2c0))();
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<UObject_*>)0x0;
  __return_storage_ptr__->ArrayNum = 1;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
            (8,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,&__return_storage_ptr__->ArrayMax)
  ;
  FVar1 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<UObject_*>)__return_storage_ptr__;
  if (FVar1 != (ForElementType<UObject_*>)0x0) {
    FVar3 = FVar1;
  }
  *(undefined8 *)FVar3 = uVar2;
  return __return_storage_ptr__;
}

// GetTexturesForceMaterialRecompile @ 145f14520

void __thiscall
UMaterialExpression::GetTexturesForceMaterialRecompile
          (UMaterialExpression *this,TArray<UTexture_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// StaticClass @ 145fc84e0

UClass * __cdecl UMaterialExpression::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpression.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpression",
               &Z_Registration_Info_UClass_UMaterialExpression.InnerSingleton,
               StaticRegisterNativesUMaterialExpression,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpression>,
               InternalVTableHelperCtorCaller<UMaterialExpression>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpression.InnerSingleton;
}

