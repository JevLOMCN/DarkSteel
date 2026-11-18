// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b5b8f70

UClass * __cdecl UTBLCommandlet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTBLCommandlet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"TBLCommandlet",
               &Z_Registration_Info_UClass_UTBLCommandlet.InnerSingleton,
               StaticRegisterNativesUTBLCommandlet,0x80,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UTBLCommandlet>,
               InternalVTableHelperCtorCaller<UTBLCommandlet>,local_res8,UCommandlet::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTBLCommandlet.InnerSingleton;
}

// UTBLCommandlet @ 14b5bd8a0

UTBLCommandlet * __thiscall
UTBLCommandlet::UTBLCommandlet(UTBLCommandlet *this,FVTableHelper *param_1)

{
  UCommandlet::UCommandlet((UCommandlet *)this,param_1);
  *(undefined ***)this = &___7UTBLCommandlet__6B_;
  return this;
}

// ~UTBLCommandlet @ 14b5be360

void __thiscall UTBLCommandlet::~UTBLCommandlet(UTBLCommandlet *this)

{
  *(undefined ***)this = &___7UTBLCommandlet__6B_;
  UCommandlet::~UCommandlet((UCommandlet *)this);
  return;
}

// GetPrivateStaticClass @ 14b5bff40

UClass * __cdecl UTBLCommandlet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTBLCommandlet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"TBLCommandlet",
               &Z_Registration_Info_UClass_UTBLCommandlet.InnerSingleton,
               StaticRegisterNativesUTBLCommandlet,0x80,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UTBLCommandlet>,
               InternalVTableHelperCtorCaller<UTBLCommandlet>,local_res8,UCommandlet::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTBLCommandlet.InnerSingleton;
}

// StaticRegisterNativesUTBLCommandlet @ 14b5c0120

void __cdecl UTBLCommandlet::StaticRegisterNativesUTBLCommandlet(void)

{
  return;
}

// UTBLCommandlet @ 14b982110

UTBLCommandlet * __thiscall UTBLCommandlet::UTBLCommandlet(UTBLCommandlet *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UCommandlet::UCommandlet((UCommandlet *)this,pFVar1);
  *(undefined ***)this = &___7UTBLCommandlet__6B_;
  *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 & 0xffffffe4 | 4;
  return this;
}

// Main @ 14b98cd90

int __thiscall UTBLCommandlet::Main(UTBLCommandlet *this,FString *param_1)

{
  return 0;
}

