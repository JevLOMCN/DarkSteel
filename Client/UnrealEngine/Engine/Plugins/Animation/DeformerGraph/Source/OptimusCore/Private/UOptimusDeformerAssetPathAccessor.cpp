// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e117210

UClass * __cdecl UOptimusDeformerAssetPathAccessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDeformerAssetPathAccessor.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDeformerAssetPathAccessor",
               &Z_Registration_Info_UClass_UOptimusDeformerAssetPathAccessor.InnerSingleton,
               StaticRegisterNativesUOptimusDeformerAssetPathAccessor,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusDeformerAssetPathAccessor>,
               InternalVTableHelperCtorCaller<UOptimusDeformerAssetPathAccessor>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDeformerAssetPathAccessor.InnerSingleton;
}

// UOptimusDeformerAssetPathAccessor @ 14e159670

UOptimusDeformerAssetPathAccessor * __thiscall
UOptimusDeformerAssetPathAccessor::UOptimusDeformerAssetPathAccessor
          (UOptimusDeformerAssetPathAccessor *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusDeformerAssetPathAccessor__6B_;
  return this;
}

// UOptimusDeformerAssetPathAccessor @ 14e1596a0

UOptimusDeformerAssetPathAccessor * __thiscall
UOptimusDeformerAssetPathAccessor::UOptimusDeformerAssetPathAccessor
          (UOptimusDeformerAssetPathAccessor *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusDeformerAssetPathAccessor__6B_;
  return this;
}

// ~UOptimusDeformerAssetPathAccessor @ 14e1628d0

void __thiscall
UOptimusDeformerAssetPathAccessor::~UOptimusDeformerAssetPathAccessor
          (UOptimusDeformerAssetPathAccessor *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d5770

UClass * __cdecl UOptimusDeformerAssetPathAccessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDeformerAssetPathAccessor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDeformerAssetPathAccessor",
               &Z_Registration_Info_UClass_UOptimusDeformerAssetPathAccessor.InnerSingleton,
               StaticRegisterNativesUOptimusDeformerAssetPathAccessor,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusDeformerAssetPathAccessor>,
               InternalVTableHelperCtorCaller<UOptimusDeformerAssetPathAccessor>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDeformerAssetPathAccessor.InnerSingleton;
}

// StaticRegisterNativesUOptimusDeformerAssetPathAccessor @ 14e225920

void __cdecl
UOptimusDeformerAssetPathAccessor::StaticRegisterNativesUOptimusDeformerAssetPathAccessor(void)

{
  return;
}

