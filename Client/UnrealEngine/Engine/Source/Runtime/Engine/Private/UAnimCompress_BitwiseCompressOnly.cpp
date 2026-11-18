// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1474218f0

UClass * __cdecl UAnimCompress_BitwiseCompressOnly::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress_BitwiseCompressOnly",
               &Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly.InnerSingleton,
               StaticRegisterNativesUAnimCompress_BitwiseCompressOnly,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCompress_BitwiseCompressOnly>,
               InternalVTableHelperCtorCaller<UAnimCompress_BitwiseCompressOnly>,local_res8,
               UAnimCompress::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly.InnerSingleton;
}

// UAnimCompress_BitwiseCompressOnly @ 147434510

UAnimCompress_BitwiseCompressOnly * __thiscall
UAnimCompress_BitwiseCompressOnly::UAnimCompress_BitwiseCompressOnly
          (UAnimCompress_BitwiseCompressOnly *this,FVTableHelper *param_1)

{
  UAnimCompress::UAnimCompress((UAnimCompress *)this,param_1);
  *(undefined ***)this = &___7UAnimCompress_BitwiseCompressOnly__6B_;
  return this;
}

// UAnimCompress_BitwiseCompressOnly @ 147434540

UAnimCompress_BitwiseCompressOnly * __thiscall
UAnimCompress_BitwiseCompressOnly::UAnimCompress_BitwiseCompressOnly
          (UAnimCompress_BitwiseCompressOnly *this,FObjectInitializer *param_1)

{
  UAnimCompress::UAnimCompress((UAnimCompress *)this,param_1);
  *(undefined ***)this = &___7UAnimCompress_BitwiseCompressOnly__6B_;
  ::FString::operator=((FString *)&this->field_0x28,L"Bitwise Compress Only");
  return this;
}

// ~UAnimCompress_BitwiseCompressOnly @ 147436960

void __thiscall
UAnimCompress_BitwiseCompressOnly::~UAnimCompress_BitwiseCompressOnly
          (UAnimCompress_BitwiseCompressOnly *this)

{
  *(undefined ***)this = &___7UAnimCompress_BitwiseCompressOnly__6B_;
  UAnimCompress::~UAnimCompress((UAnimCompress *)this);
  return;
}

// GetPrivateStaticClass @ 147461ca0

UClass * __cdecl UAnimCompress_BitwiseCompressOnly::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress_BitwiseCompressOnly",
               &Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly.InnerSingleton,
               StaticRegisterNativesUAnimCompress_BitwiseCompressOnly,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCompress_BitwiseCompressOnly>,
               InternalVTableHelperCtorCaller<UAnimCompress_BitwiseCompressOnly>,local_res8,
               UAnimCompress::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly.InnerSingleton;
}

// StaticRegisterNativesUAnimCompress_BitwiseCompressOnly @ 14747b250

void __cdecl
UAnimCompress_BitwiseCompressOnly::StaticRegisterNativesUAnimCompress_BitwiseCompressOnly(void)

{
  return;
}

