// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// StaticClass @ 145facba0

UClass * __cdecl UMaterialExpressionLandscapeLayerCoords::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapeLayerCoords",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLandscapeLayerCoords,200,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapeLayerCoords>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerCoords>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords.InnerSingleton;
}

// UMaterialExpressionLandscapeLayerCoords @ 145fb5b30

UMaterialExpressionLandscapeLayerCoords * __thiscall
UMaterialExpressionLandscapeLayerCoords::UMaterialExpressionLandscapeLayerCoords
          (UMaterialExpressionLandscapeLayerCoords *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerCoords__6B_;
  return this;
}

// UMaterialExpressionLandscapeLayerCoords @ 145fb5b60

UMaterialExpressionLandscapeLayerCoords * __thiscall
UMaterialExpressionLandscapeLayerCoords::UMaterialExpressionLandscapeLayerCoords
          (UMaterialExpressionLandscapeLayerCoords *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerCoords__6B_;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Landscape,L"Landscape",L"Landscape",L"Landscape");
      atexit(`UMaterialExpressionLandscapeLayerCoords::UMaterialExpressionLandscapeLayerCoords'::
             __l2::_dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionLandscapeLayerCoords @ 145fb6b50

void __thiscall
UMaterialExpressionLandscapeLayerCoords::~UMaterialExpressionLandscapeLayerCoords
          (UMaterialExpressionLandscapeLayerCoords *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerCoords__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 145fc3810

UClass * __cdecl UMaterialExpressionLandscapeLayerCoords::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapeLayerCoords",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLandscapeLayerCoords,200,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapeLayerCoords>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerCoords>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionLandscapeLayerCoords @ 145fc87a0

void __cdecl
UMaterialExpressionLandscapeLayerCoords::
StaticRegisterNativesUMaterialExpressionLandscapeLayerCoords(void)

{
  return;
}

