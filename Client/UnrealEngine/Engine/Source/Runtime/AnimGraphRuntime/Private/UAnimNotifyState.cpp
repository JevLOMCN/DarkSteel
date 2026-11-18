// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 3

// GetEditorColor @ 146449f30

FLinearColor * __thiscall
UAnimNotifyState::GetEditorColor(UAnimNotifyState *this,FLinearColor *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black;
  return __return_storage_ptr__;
}

// GetEditorComment @ 146449f80

FString * __thiscall
UAnimNotifyState::GetEditorComment(UAnimNotifyState *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// StaticClass @ 14646e4c0

UClass * __cdecl UAnimNotifyState::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyState",
               &Z_Registration_Info_UClass_UAnimNotifyState.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState>,
               InternalVTableHelperCtorCaller<UAnimNotifyState>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState.InnerSingleton;
}

