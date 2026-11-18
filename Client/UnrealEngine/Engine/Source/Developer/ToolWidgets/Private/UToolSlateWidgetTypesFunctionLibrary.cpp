// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 6

// StaticClass @ 142d52800

UClass * __cdecl UToolSlateWidgetTypesFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolSlateWidgetTypesFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolWidgets",L"ToolSlateWidgetTypesFunctionLibrary",
               &Z_Registration_Info_UClass_UToolSlateWidgetTypesFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUToolSlateWidgetTypesFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UToolSlateWidgetTypesFunctionLibrary>,
               InternalVTableHelperCtorCaller<UToolSlateWidgetTypesFunctionLibrary>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolSlateWidgetTypesFunctionLibrary.InnerSingleton;
}

// UToolSlateWidgetTypesFunctionLibrary @ 142d63f50

UToolSlateWidgetTypesFunctionLibrary * __thiscall
UToolSlateWidgetTypesFunctionLibrary::UToolSlateWidgetTypesFunctionLibrary
          (UToolSlateWidgetTypesFunctionLibrary *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UToolSlateWidgetTypesFunctionLibrary__6B_;
  return this;
}

// UToolSlateWidgetTypesFunctionLibrary @ 142d63f80

UToolSlateWidgetTypesFunctionLibrary * __thiscall
UToolSlateWidgetTypesFunctionLibrary::UToolSlateWidgetTypesFunctionLibrary
          (UToolSlateWidgetTypesFunctionLibrary *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UToolSlateWidgetTypesFunctionLibrary__6B_;
  return this;
}

// ~UToolSlateWidgetTypesFunctionLibrary @ 142d67b60

void __thiscall
UToolSlateWidgetTypesFunctionLibrary::~UToolSlateWidgetTypesFunctionLibrary
          (UToolSlateWidgetTypesFunctionLibrary *this)

{
  *(undefined ***)this = &___7UToolSlateWidgetTypesFunctionLibrary__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 142daff70

UClass * __cdecl UToolSlateWidgetTypesFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolSlateWidgetTypesFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolWidgets",L"ToolSlateWidgetTypesFunctionLibrary",
               &Z_Registration_Info_UClass_UToolSlateWidgetTypesFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUToolSlateWidgetTypesFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UToolSlateWidgetTypesFunctionLibrary>,
               InternalVTableHelperCtorCaller<UToolSlateWidgetTypesFunctionLibrary>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolSlateWidgetTypesFunctionLibrary.InnerSingleton;
}

// StaticRegisterNativesUToolSlateWidgetTypesFunctionLibrary @ 142dda230

void __cdecl
UToolSlateWidgetTypesFunctionLibrary::StaticRegisterNativesUToolSlateWidgetTypesFunctionLibrary
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

