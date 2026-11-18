// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e6ac4a0

UClass * __cdecl UMaterialExpressionMaterialXSwizzle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXSwizzle.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXSwizzle",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXSwizzle.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXSwizzle,0xe8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXSwizzle>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXSwizzle>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXSwizzle.InnerSingleton;
}

// UMaterialExpressionMaterialXSwizzle @ 14e6b8f60

UMaterialExpressionMaterialXSwizzle * __thiscall
UMaterialExpressionMaterialXSwizzle::UMaterialExpressionMaterialXSwizzle
          (UMaterialExpressionMaterialXSwizzle *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXSwizzle__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->Channels).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Channels).Data.ArrayNum = 0;
  (this->Channels).Data.ArrayMax = 0;
  return this;
}

// UMaterialExpressionMaterialXSwizzle @ 14e6b8fc0

UMaterialExpressionMaterialXSwizzle * __thiscall
UMaterialExpressionMaterialXSwizzle::UMaterialExpressionMaterialXSwizzle
          (UMaterialExpressionMaterialXSwizzle *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXSwizzle__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->Channels).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Channels).Data.ArrayNum = 0;
  (this->Channels).Data.ArrayMax = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_MaterialX,L"MaterialExpressionMaterialXSwizzle",
                 L"MaterialX",L"MaterialX");
      atexit(`UMaterialExpressionMaterialXSwizzle::UMaterialExpressionMaterialXSwizzle'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionMaterialXSwizzle @ 14e6b9fa0

void __thiscall
UMaterialExpressionMaterialXSwizzle::~UMaterialExpressionMaterialXSwizzle
          (UMaterialExpressionMaterialXSwizzle *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXSwizzle__6B_;
  pFVar1 = (this->Channels).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14e6c66c0

UClass * __cdecl UMaterialExpressionMaterialXSwizzle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXSwizzle.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXSwizzle",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXSwizzle.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXSwizzle,0xe8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXSwizzle>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXSwizzle>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXSwizzle.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialXSwizzle @ 14e6d2510

void __cdecl
UMaterialExpressionMaterialXSwizzle::StaticRegisterNativesUMaterialExpressionMaterialXSwizzle(void)

{
  return;
}

