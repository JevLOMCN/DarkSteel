// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 3

// GetEditorColor @ 146449f10

FLinearColor * __thiscall
UAnimNotify::GetEditorColor(UAnimNotify *this,FLinearColor *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black;
  return __return_storage_ptr__;
}

// GetEditorComment @ 146449f50

FString * __thiscall
UAnimNotify::GetEditorComment(UAnimNotify *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// StaticClass @ 14646e4b0

UClass * __cdecl UAnimNotify::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify",
               &Z_Registration_Info_UClass_UAnimNotify.InnerSingleton,
               StaticRegisterNativesUAnimNotify,0x38,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None
               ,L"Engine",InternalConstructor<UAnimNotify>,
               InternalVTableHelperCtorCaller<UAnimNotify>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify.InnerSingleton;
}

