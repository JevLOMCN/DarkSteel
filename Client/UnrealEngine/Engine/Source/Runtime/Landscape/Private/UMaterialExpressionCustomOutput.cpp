// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// GetDisplayName @ 145f0efa0

FString * __thiscall
UMaterialExpressionCustomOutput::GetDisplayName
          (UMaterialExpressionCustomOutput *this,FString *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)this + 0x300))();
  return __return_storage_ptr__;
}

// StaticClass @ 145f1e980

UClass * __cdecl UMaterialExpressionCustomOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCustomOutput.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCustomOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionCustomOutput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCustomOutput,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpressionCustomOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCustomOutput>,aFStackX_8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCustomOutput.InnerSingleton;
}

