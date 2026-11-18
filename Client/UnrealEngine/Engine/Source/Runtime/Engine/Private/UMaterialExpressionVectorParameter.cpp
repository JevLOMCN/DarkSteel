// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472a1bc0

UClass * __cdecl UMaterialExpressionVectorParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVectorParameter.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVectorParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionVectorParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionVectorParameter,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVectorParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVectorParameter>,aFStackX_8,
               UMaterialExpressionParameter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVectorParameter.InnerSingleton;
}

// UMaterialExpressionVectorParameter @ 1472e2b10

UMaterialExpressionVectorParameter * __thiscall
UMaterialExpressionVectorParameter::UMaterialExpressionVectorParameter
          (UMaterialExpressionVectorParameter *this,FVTableHelper *param_1)

{
  UMaterialExpressionParameter::UMaterialExpressionParameter
            ((UMaterialExpressionParameter *)this,param_1);
  this->bUseCustomPrimitiveData = false;
  this->PrimitiveDataIndex = '\0';
  this->_padding_ = (longlong)&___7UMaterialExpressionVectorParameter__6B_;
  FText::FText(&(this->ChannelNames).R);
  FText::FText(&(this->ChannelNames).G);
  FText::FText(&(this->ChannelNames).B);
  FText::FText(&(this->ChannelNames).A);
  return this;
}

// ~UMaterialExpressionVectorParameter @ 1472e3760

void __thiscall
UMaterialExpressionVectorParameter::~UMaterialExpressionVectorParameter
          (UMaterialExpressionVectorParameter *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionVectorParameter__6B_;
  pIVar1 = (this->ChannelNames).A.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->ChannelNames).B.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->ChannelNames).G.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->ChannelNames).R.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UMaterialExpressionParameter::~UMaterialExpressionParameter((UMaterialExpressionParameter *)this);
  return;
}

// GetPrivateStaticClass @ 1472e6960

UClass * __cdecl UMaterialExpressionVectorParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVectorParameter.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVectorParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionVectorParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionVectorParameter,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVectorParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVectorParameter>,local_res8,
               UMaterialExpressionParameter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVectorParameter.InnerSingleton;
}

// IsUsedAsChannelMask @ 1472e76c0

bool __thiscall
UMaterialExpressionVectorParameter::IsUsedAsChannelMask(UMaterialExpressionVectorParameter *this)

{
  return false;
}

// StaticRegisterNativesUMaterialExpressionVectorParameter @ 1472e7980

void __cdecl
UMaterialExpressionVectorParameter::StaticRegisterNativesUMaterialExpressionVectorParameter(void)

{
  return;
}

// UMaterialExpressionVectorParameter @ 148aff7b0

UMaterialExpressionVectorParameter * __thiscall
UMaterialExpressionVectorParameter::UMaterialExpressionVectorParameter
          (UMaterialExpressionVectorParameter *this,FObjectInitializer *param_1)

{
  UMaterialExpressionParameter::UMaterialExpressionParameter
            ((UMaterialExpressionParameter *)this,param_1);
  this->bUseCustomPrimitiveData = false;
  this->PrimitiveDataIndex = '\0';
  this->_padding_ = (longlong)&___7UMaterialExpressionVectorParameter__6B_;
  FText::FText(&(this->ChannelNames).R);
  FText::FText(&(this->ChannelNames).G);
  FText::FText(&(this->ChannelNames).B);
  FText::FText(&(this->ChannelNames).A);
  return this;
}

