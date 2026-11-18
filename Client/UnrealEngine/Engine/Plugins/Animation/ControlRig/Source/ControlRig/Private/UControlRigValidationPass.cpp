// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// StaticClass @ 14a2011e0

UClass * __cdecl UControlRigValidationPass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigValidationPass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigValidationPass",
               &Z_Registration_Info_UClass_UControlRigValidationPass.InnerSingleton,
               StaticRegisterNativesUControlRigValidationPass,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlRigValidationPass>,
               InternalVTableHelperCtorCaller<UControlRigValidationPass>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigValidationPass.InnerSingleton;
}

// UControlRigValidationPass @ 14a222f60

UControlRigValidationPass * __thiscall
UControlRigValidationPass::UControlRigValidationPass
          (UControlRigValidationPass *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UControlRigValidationPass__6B_;
  return this;
}

// UControlRigValidationPass @ 14a222f90

UControlRigValidationPass * __thiscall
UControlRigValidationPass::UControlRigValidationPass
          (UControlRigValidationPass *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UControlRigValidationPass__6B_;
  return this;
}

// ~UControlRigValidationPass @ 14a226e60

void __thiscall
UControlRigValidationPass::~UControlRigValidationPass(UControlRigValidationPass *this)

{
  *(undefined ***)this = &___7UControlRigValidationPass__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a2680e0

UClass * __cdecl UControlRigValidationPass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigValidationPass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigValidationPass",
               &Z_Registration_Info_UClass_UControlRigValidationPass.InnerSingleton,
               StaticRegisterNativesUControlRigValidationPass,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlRigValidationPass>,
               InternalVTableHelperCtorCaller<UControlRigValidationPass>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigValidationPass.InnerSingleton;
}

// OnEvent @ 14a277d00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigValidationPass::OnEvent
          (UControlRigValidationPass *this,UControlRig *param_1,FName *param_2,
          FControlRigValidationContext *param_3)

{
  return;
}

// OnInitialize @ 14a277ee0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigValidationPass::OnInitialize
          (UControlRigValidationPass *this,UControlRig *param_1,
          FControlRigValidationContext *param_2)

{
  return;
}

// OnSubjectChanged @ 14a278af0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigValidationPass::OnSubjectChanged
          (UControlRigValidationPass *this,UControlRig *param_1,
          FControlRigValidationContext *param_2)

{
  return;
}

// StaticRegisterNativesUControlRigValidationPass @ 14a2980f0

void __cdecl UControlRigValidationPass::StaticRegisterNativesUControlRigValidationPass(void)

{
  return;
}

