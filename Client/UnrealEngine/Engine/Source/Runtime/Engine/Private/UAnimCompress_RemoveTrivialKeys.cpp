// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147424980

UClass * __cdecl UAnimCompress_RemoveTrivialKeys::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress_RemoveTrivialKeys",
               &Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys.InnerSingleton,
               StaticRegisterNativesUAnimCompress_RemoveTrivialKeys,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCompress_RemoveTrivialKeys>,
               InternalVTableHelperCtorCaller<UAnimCompress_RemoveTrivialKeys>,local_res8,
               UAnimCompress::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys.InnerSingleton;
}

// UAnimCompress_RemoveTrivialKeys @ 147434d80

UAnimCompress_RemoveTrivialKeys * __thiscall
UAnimCompress_RemoveTrivialKeys::UAnimCompress_RemoveTrivialKeys
          (UAnimCompress_RemoveTrivialKeys *this,FVTableHelper *param_1)

{
  UAnimCompress::UAnimCompress((UAnimCompress *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimCompress_RemoveTrivialKeys__6B_;
  return this;
}

// UAnimCompress_RemoveTrivialKeys @ 147434db0

UAnimCompress_RemoveTrivialKeys * __thiscall
UAnimCompress_RemoveTrivialKeys::UAnimCompress_RemoveTrivialKeys
          (UAnimCompress_RemoveTrivialKeys *this,FObjectInitializer *param_1)

{
  UAnimCompress::UAnimCompress((UAnimCompress *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimCompress_RemoveTrivialKeys__6B_;
  ::FString::operator=((FString *)&this->_padding_,L"Remove Trivial Keys");
  this->MaxPosDiff = 0.0001;
  this->MaxAngleDiff = 0.0003;
  this->MaxScaleDiff = 1e-06;
  return this;
}

// ~UAnimCompress_RemoveTrivialKeys @ 147436a40

void __thiscall
UAnimCompress_RemoveTrivialKeys::~UAnimCompress_RemoveTrivialKeys
          (UAnimCompress_RemoveTrivialKeys *this)

{
  this->_padding_ = (longlong)&___7UAnimCompress_RemoveTrivialKeys__6B_;
  UAnimCompress::~UAnimCompress((UAnimCompress *)this);
  return;
}

// GetPrivateStaticClass @ 147462060

UClass * __cdecl UAnimCompress_RemoveTrivialKeys::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress_RemoveTrivialKeys",
               &Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys.InnerSingleton,
               StaticRegisterNativesUAnimCompress_RemoveTrivialKeys,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCompress_RemoveTrivialKeys>,
               InternalVTableHelperCtorCaller<UAnimCompress_RemoveTrivialKeys>,local_res8,
               UAnimCompress::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys.InnerSingleton;
}

// StaticRegisterNativesUAnimCompress_RemoveTrivialKeys @ 14747b2a0

void __cdecl
UAnimCompress_RemoveTrivialKeys::StaticRegisterNativesUAnimCompress_RemoveTrivialKeys(void)

{
  return;
}

