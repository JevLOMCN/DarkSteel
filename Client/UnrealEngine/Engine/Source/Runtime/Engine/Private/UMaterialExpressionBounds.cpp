// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147294c60

UClass * __cdecl UMaterialExpressionBounds::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionBounds.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionBounds",
               &Z_Registration_Info_UClass_UMaterialExpressionBounds.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionBounds,200,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionBounds>,
               InternalVTableHelperCtorCaller<UMaterialExpressionBounds>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionBounds.InnerSingleton;
}

// UMaterialExpressionBounds @ 14729c060

UMaterialExpressionBounds * __thiscall
UMaterialExpressionBounds::UMaterialExpressionBounds
          (UMaterialExpressionBounds *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionBounds__6B_;
  (this->Type).Value = '\0';
  return this;
}

// ~UMaterialExpressionBounds @ 14729d6d0

void __thiscall
UMaterialExpressionBounds::~UMaterialExpressionBounds(UMaterialExpressionBounds *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionBounds__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 14729f810

UClass * __cdecl UMaterialExpressionBounds::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionBounds.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionBounds",
               &Z_Registration_Info_UClass_UMaterialExpressionBounds.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionBounds,200,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionBounds>,
               InternalVTableHelperCtorCaller<UMaterialExpressionBounds>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionBounds.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionBounds @ 1472a1c10

void __cdecl UMaterialExpressionBounds::StaticRegisterNativesUMaterialExpressionBounds(void)

{
  return;
}

// UMaterialExpressionBounds @ 148afaab0

UMaterialExpressionBounds * __thiscall
UMaterialExpressionBounds::UMaterialExpressionBounds
          (UMaterialExpressionBounds *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionBounds__6B_;
  (this->Type).Value = '\0';
  return this;
}

