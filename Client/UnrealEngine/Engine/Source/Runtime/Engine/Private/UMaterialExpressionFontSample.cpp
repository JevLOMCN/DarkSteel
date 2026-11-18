// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1472a6d80

UClass * __cdecl UMaterialExpressionFontSample::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFontSample.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFontSample",
               &Z_Registration_Info_UClass_UMaterialExpressionFontSample.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFontSample,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFontSample>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFontSample>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFontSample.InnerSingleton;
}

// UMaterialExpressionFontSample @ 1472ad3b0

UMaterialExpressionFontSample * __thiscall
UMaterialExpressionFontSample::UMaterialExpressionFontSample
          (UMaterialExpressionFontSample *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionFontSample__6B_;
  (this->Font).field0_0x0.DebugPtr = (UFont *)0x0;
  return this;
}

// ~UMaterialExpressionFontSample @ 1472af7d0

void __thiscall
UMaterialExpressionFontSample::~UMaterialExpressionFontSample(UMaterialExpressionFontSample *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionFontSample__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// CanReferenceTexture @ 1472b14f0

bool __thiscall
UMaterialExpressionFontSample::CanReferenceTexture(UMaterialExpressionFontSample *this)

{
  return true;
}

// GetPrivateStaticClass @ 1472b2720

UClass * __cdecl UMaterialExpressionFontSample::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFontSample.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFontSample",
               &Z_Registration_Info_UClass_UMaterialExpressionFontSample.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFontSample,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFontSample>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFontSample>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFontSample.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionFontSample @ 1472b4580

void __cdecl UMaterialExpressionFontSample::StaticRegisterNativesUMaterialExpressionFontSample(void)

{
  return;
}

// UMaterialExpressionFontSample @ 148afc320

UMaterialExpressionFontSample * __thiscall
UMaterialExpressionFontSample::UMaterialExpressionFontSample
          (UMaterialExpressionFontSample *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionFontSample__6B_;
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
  (this->Font).field0_0x0.DebugPtr = (UFont *)0x0;
  return this;
}

// GetReferencedTexture @ 148b02320

UObject * __thiscall
UMaterialExpressionFontSample::GetReferencedTexture(UMaterialExpressionFontSample *this)

{
  uint uVar1;
  UFont *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  
  pUVar2 = (this->Font).field0_0x0.DebugPtr;
  if (pUVar2 != (UFont *)0x0) {
    uVar1 = this->FontTexturePage;
    if ((-1 < (int)uVar1) && ((int)uVar1 < (pUVar2->Textures).ArrayNum)) {
      uVar5 = 0;
      if ((int)uVar1 < (pUVar2->Textures).ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pUVar6 = (UObject *)(*pcVar3)();
          return pUVar6;
        }
      }
      return *(UObject **)((pUVar2->Textures).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
    }
  }
  return (UObject *)0x0;
}

