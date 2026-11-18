// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 9

// StaticClass @ 14438bab0

UClass * __cdecl USkeletalMeshDescription::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshDescription.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SkeletalMeshDescription",L"SkeletalMeshDescription",
               &Z_Registration_Info_UClass_USkeletalMeshDescription.InnerSingleton,
               StaticRegisterNativesUSkeletalMeshDescription,0x2f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USkeletalMeshDescription>,
               InternalVTableHelperCtorCaller<USkeletalMeshDescription>,local_res8,
               UMeshDescriptionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshDescription.InnerSingleton;
}

// USkeletalMeshDescription @ 1443938b0

USkeletalMeshDescription * __thiscall
USkeletalMeshDescription::USkeletalMeshDescription
          (USkeletalMeshDescription *this,FVTableHelper *param_1)

{
  UMeshDescriptionBase::UMeshDescriptionBase((UMeshDescriptionBase *)this,param_1);
  *(undefined ***)this = &___7USkeletalMeshDescription__6B_;
  return this;
}

// USkeletalMeshDescription @ 1443938e0

USkeletalMeshDescription * __thiscall
USkeletalMeshDescription::USkeletalMeshDescription
          (USkeletalMeshDescription *this,FObjectInitializer *param_1)

{
  UMeshDescriptionBase::UMeshDescriptionBase((UMeshDescriptionBase *)this,param_1);
  *(undefined ***)this = &___7USkeletalMeshDescription__6B_;
  return this;
}

// ~USkeletalMeshDescription @ 144393c20

void __thiscall USkeletalMeshDescription::~USkeletalMeshDescription(USkeletalMeshDescription *this)

{
  *(undefined ***)this = &___7USkeletalMeshDescription__6B_;
  UMeshDescriptionBase::~UMeshDescriptionBase((UMeshDescriptionBase *)this);
  return;
}

// GetPrivateStaticClass @ 1443a6b70

UClass * __cdecl USkeletalMeshDescription::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshDescription.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SkeletalMeshDescription",L"SkeletalMeshDescription",
               &Z_Registration_Info_UClass_USkeletalMeshDescription.InnerSingleton,
               StaticRegisterNativesUSkeletalMeshDescription,0x2f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USkeletalMeshDescription>,
               InternalVTableHelperCtorCaller<USkeletalMeshDescription>,local_res8,
               UMeshDescriptionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshDescription.InnerSingleton;
}

// GetRequiredAttributes @ 1443a6da0

FSkeletalMeshAttributes * __thiscall
USkeletalMeshDescription::GetRequiredAttributes(USkeletalMeshDescription *this)

{
  return *(FSkeletalMeshAttributes **)&this->field_0x2e8;
}

// GetRequiredAttributes @ 1443a6db0

FSkeletalMeshAttributes * __thiscall
USkeletalMeshDescription::GetRequiredAttributes(USkeletalMeshDescription *this)

{
  return *(FSkeletalMeshAttributes **)&this->field_0x2e8;
}

// RegisterAttributes @ 1443abe50

void __thiscall USkeletalMeshDescription::RegisterAttributes(USkeletalMeshDescription *this)

{
  undefined8 *puVar1;
  FSkeletalMeshAttributes *this_00;
  FSkeletalMeshAttributes *pFVar2;
  
  this_00 = ::operator_new(0x38);
  pFVar2 = (FSkeletalMeshAttributes *)0x0;
  if (this_00 != (FSkeletalMeshAttributes *)0x0) {
    pFVar2 = FSkeletalMeshAttributes::FSkeletalMeshAttributes
                       (this_00,(FMeshDescription *)&this->field_0x28);
  }
  puVar1 = *(undefined8 **)&this->field_0x2e8;
  *(FSkeletalMeshAttributes **)&this->field_0x2e8 = pFVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001443abea2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x2e8 + 8))(*(longlong **)&this->field_0x2e8,0);
  return;
}

// StaticRegisterNativesUSkeletalMeshDescription @ 1443ae7c0

void __cdecl USkeletalMeshDescription::StaticRegisterNativesUSkeletalMeshDescription(void)

{
  return;
}

