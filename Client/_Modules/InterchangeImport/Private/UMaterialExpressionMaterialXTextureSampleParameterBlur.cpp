// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e6ac820

UClass * __cdecl UMaterialExpressionMaterialXTextureSampleParameterBlur::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXTextureSampleParameterBlur"
               ,&Z_Registration_Info_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur.
                 InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXTextureSampleParameterBlur,0x238,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXTextureSampleParameterBlur>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXTextureSampleParameterBlur>
               ,local_res8,UMaterialExpressionTextureSampleParameter2D::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur.
         InnerSingleton;
}

// UMaterialExpressionMaterialXTextureSampleParameterBlur @ 14e6b90a0

UMaterialExpressionMaterialXTextureSampleParameterBlur * __thiscall
UMaterialExpressionMaterialXTextureSampleParameterBlur::
UMaterialExpressionMaterialXTextureSampleParameterBlur
          (UMaterialExpressionMaterialXTextureSampleParameterBlur *this,FVTableHelper *param_1)

{
  UMaterialExpressionTextureSampleParameter2D::UMaterialExpressionTextureSampleParameter2D
            ((UMaterialExpressionTextureSampleParameter2D *)this,param_1);
  this->FilterSize = 1.0;
  this->FilterOffset = 0.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXTextureSampleParameterBlur__6B_;
  this->KernelSize = Kernel1;
  this->Filter = Gaussian;
  return this;
}

// UMaterialExpressionMaterialXTextureSampleParameterBlur @ 14e6b90f0

UMaterialExpressionMaterialXTextureSampleParameterBlur * __thiscall
UMaterialExpressionMaterialXTextureSampleParameterBlur::
UMaterialExpressionMaterialXTextureSampleParameterBlur
          (UMaterialExpressionMaterialXTextureSampleParameterBlur *this,FObjectInitializer *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  
  UMaterialExpressionTextureSampleParameter2D::UMaterialExpressionTextureSampleParameter2D
            ((UMaterialExpressionTextureSampleParameter2D *)this,param_1);
  uVar2 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXTextureSampleParameterBlur__6B_;
  this->KernelSize = Kernel1;
  pvVar1 = ThreadLocalStoragePointer;
  this->FilterSize = 1.0;
  this->FilterOffset = 0.0;
  this->Filter = Gaussian;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar2 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_MaterialX,
                 L"MaterialExpressionMaterialXTextureSampleBlur",L"MaterialX",L"MaterialX");
      atexit(`UMaterialExpressionMaterialXTextureSampleParameterBlur::
             UMaterialExpressionMaterialXTextureSampleParameterBlur'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionMaterialXTextureSampleParameterBlur @ 14e6b9fe0

void __thiscall
UMaterialExpressionMaterialXTextureSampleParameterBlur::
~UMaterialExpressionMaterialXTextureSampleParameterBlur
          (UMaterialExpressionMaterialXTextureSampleParameterBlur *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXTextureSampleParameterBlur__6B_;
  UMaterialExpressionTextureSampleParameter2D::~UMaterialExpressionTextureSampleParameter2D
            ((UMaterialExpressionTextureSampleParameter2D *)this);
  return;
}

// GetPrivateStaticClass @ 14e6c6780

UClass * __cdecl UMaterialExpressionMaterialXTextureSampleParameterBlur::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXTextureSampleParameterBlur"
               ,&Z_Registration_Info_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur.
                 InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXTextureSampleParameterBlur,0x238,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXTextureSampleParameterBlur>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXTextureSampleParameterBlur>
               ,local_res8,UMaterialExpressionTextureSampleParameter2D::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur.
         InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialXTextureSampleParameterBlur @ 14e6d2520

void __cdecl
UMaterialExpressionMaterialXTextureSampleParameterBlur::
StaticRegisterNativesUMaterialExpressionMaterialXTextureSampleParameterBlur(void)

{
  return;
}

