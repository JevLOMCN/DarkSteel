// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147421ca0

UClass * __cdecl UAnimCompress_LeastDestructive::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress_LeastDestructive.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress_LeastDestructive",
               &Z_Registration_Info_UClass_UAnimCompress_LeastDestructive.InnerSingleton,
               StaticRegisterNativesUAnimCompress_LeastDestructive,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCompress_LeastDestructive>,
               InternalVTableHelperCtorCaller<UAnimCompress_LeastDestructive>,local_res8,
               UAnimCompress_BitwiseCompressOnly::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress_LeastDestructive.InnerSingleton;
}

// UAnimCompress_LeastDestructive @ 147434580

UAnimCompress_LeastDestructive * __thiscall
UAnimCompress_LeastDestructive::UAnimCompress_LeastDestructive
          (UAnimCompress_LeastDestructive *this,FVTableHelper *param_1)

{
  UAnimCompress::UAnimCompress((UAnimCompress *)this,param_1);
  *(undefined ***)this = &___7UAnimCompress_LeastDestructive__6B_;
  return this;
}

// UAnimCompress_LeastDestructive @ 1474345b0

UAnimCompress_LeastDestructive * __thiscall
UAnimCompress_LeastDestructive::UAnimCompress_LeastDestructive
          (UAnimCompress_LeastDestructive *this,FObjectInitializer *param_1)

{
  UAnimCompress::UAnimCompress((UAnimCompress *)this,param_1);
  *(undefined ***)this = &___7UAnimCompress_BitwiseCompressOnly__6B_;
  ::FString::operator=((FString *)&this->field_0x28,L"Bitwise Compress Only");
  *(undefined ***)this = &___7UAnimCompress_LeastDestructive__6B_;
  ::FString::operator=((FString *)&this->field_0x28,L"Least Destructive");
  *(undefined2 *)&this->field_0x3c = 0x100;
  return this;
}

// ~UAnimCompress_LeastDestructive @ 147436980

void __thiscall
UAnimCompress_LeastDestructive::~UAnimCompress_LeastDestructive
          (UAnimCompress_LeastDestructive *this)

{
  *(undefined ***)this = &___7UAnimCompress_BitwiseCompressOnly__6B_;
  UAnimCompress::~UAnimCompress((UAnimCompress *)this);
  return;
}

// GetPrivateStaticClass @ 147461d60

UClass * __cdecl UAnimCompress_LeastDestructive::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress_LeastDestructive.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress_LeastDestructive",
               &Z_Registration_Info_UClass_UAnimCompress_LeastDestructive.InnerSingleton,
               StaticRegisterNativesUAnimCompress_LeastDestructive,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCompress_LeastDestructive>,
               InternalVTableHelperCtorCaller<UAnimCompress_LeastDestructive>,local_res8,
               UAnimCompress_BitwiseCompressOnly::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress_LeastDestructive.InnerSingleton;
}

// StaticRegisterNativesUAnimCompress_LeastDestructive @ 14747b260

void __cdecl
UAnimCompress_LeastDestructive::StaticRegisterNativesUAnimCompress_LeastDestructive(void)

{
  return;
}

