// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 9

// StaticClass @ 14ad799f0

UClass * __cdecl UMetaSoundFrontendMemberMetadata::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundFrontendMemberMetadata.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundFrontend",L"MetaSoundFrontendMemberMetadata",
               &Z_Registration_Info_UClass_UMetaSoundFrontendMemberMetadata.InnerSingleton,
               StaticRegisterNativesUMetaSoundFrontendMemberMetadata,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMetaSoundFrontendMemberMetadata>,
               InternalVTableHelperCtorCaller<UMetaSoundFrontendMemberMetadata>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundFrontendMemberMetadata.InnerSingleton;
}

// UMetaSoundFrontendMemberMetadata @ 14ad9c6b0

UMetaSoundFrontendMemberMetadata * __thiscall
UMetaSoundFrontendMemberMetadata::UMetaSoundFrontendMemberMetadata
          (UMetaSoundFrontendMemberMetadata *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMetaSoundFrontendMemberMetadata__6B_;
  return this;
}

// UMetaSoundFrontendMemberMetadata @ 14ad9c6e0

UMetaSoundFrontendMemberMetadata * __thiscall
UMetaSoundFrontendMemberMetadata::UMetaSoundFrontendMemberMetadata
          (UMetaSoundFrontendMemberMetadata *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMetaSoundFrontendMemberMetadata__6B_;
  return this;
}

// ~UMetaSoundFrontendMemberMetadata @ 14ad9edc0

void __thiscall
UMetaSoundFrontendMemberMetadata::~UMetaSoundFrontendMemberMetadata
          (UMetaSoundFrontendMemberMetadata *this)

{
  *(undefined ***)this = &___7UMetaSoundFrontendMemberMetadata__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ForceRefresh @ 14adba940

void __thiscall
UMetaSoundFrontendMemberMetadata::ForceRefresh(UMetaSoundFrontendMemberMetadata *this)

{
  return;
}

// GetLiteralType @ 14adc06a0

EMetasoundFrontendLiteralType __thiscall
UMetaSoundFrontendMemberMetadata::GetLiteralType(UMetaSoundFrontendMemberMetadata *this)

{
  return None;
}

// GetPrivateStaticClass @ 14adc2610

UClass * __cdecl UMetaSoundFrontendMemberMetadata::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundFrontendMemberMetadata.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundFrontend",L"MetaSoundFrontendMemberMetadata",
               &Z_Registration_Info_UClass_UMetaSoundFrontendMemberMetadata.InnerSingleton,
               StaticRegisterNativesUMetaSoundFrontendMemberMetadata,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMetaSoundFrontendMemberMetadata>,
               InternalVTableHelperCtorCaller<UMetaSoundFrontendMemberMetadata>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundFrontendMemberMetadata.InnerSingleton;
}

// SetFromLiteral @ 14add0950

void __thiscall
UMetaSoundFrontendMemberMetadata::SetFromLiteral
          (UMetaSoundFrontendMemberMetadata *this,FMetasoundFrontendLiteral *param_1,FGuid *param_2)

{
  return;
}

// StaticRegisterNativesUMetaSoundFrontendMemberMetadata @ 14add1460

void __cdecl
UMetaSoundFrontendMemberMetadata::StaticRegisterNativesUMetaSoundFrontendMemberMetadata(void)

{
  return;
}

