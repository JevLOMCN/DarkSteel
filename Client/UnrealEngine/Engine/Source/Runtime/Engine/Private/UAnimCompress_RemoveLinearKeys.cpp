// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147421fc0

UClass * __cdecl UAnimCompress_RemoveLinearKeys::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress_RemoveLinearKeys.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress_RemoveLinearKeys",
               &Z_Registration_Info_UClass_UAnimCompress_RemoveLinearKeys.InnerSingleton,
               StaticRegisterNativesUAnimCompress_RemoveLinearKeys,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCompress_RemoveLinearKeys>,
               InternalVTableHelperCtorCaller<UAnimCompress_RemoveLinearKeys>,local_res8,
               UAnimCompress::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress_RemoveLinearKeys.InnerSingleton;
}

// UAnimCompress_RemoveLinearKeys @ 147434ce0

UAnimCompress_RemoveLinearKeys * __thiscall
UAnimCompress_RemoveLinearKeys::UAnimCompress_RemoveLinearKeys
          (UAnimCompress_RemoveLinearKeys *this,FVTableHelper *param_1)

{
  UAnimCompress::UAnimCompress((UAnimCompress *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimCompress_RemoveLinearKeys__6B_;
  return this;
}

// UAnimCompress_RemoveLinearKeys @ 147434d10

UAnimCompress_RemoveLinearKeys * __thiscall
UAnimCompress_RemoveLinearKeys::UAnimCompress_RemoveLinearKeys
          (UAnimCompress_RemoveLinearKeys *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UAnimCompress::UAnimCompress((UAnimCompress *)this,param_1);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  this->_padding_ = (longlong)&___7UAnimCompress_RemoveLinearKeys__6B_;
  ::FString::operator=((FString *)&this->_padding_,L"Remove Linear Keys");
  this->bRetarget = 1;
  this->bActuallyFilterLinearKeys = 1;
  this->MaxPosDiff = 0.001;
  this->MaxAngleDiff = 0.00075;
  this->MaxScaleDiff = 1e-06;
  this->MaxEffectorDiff = 0.001;
  this->MinEffectorDiff = 0.001;
  this->EffectorDiffSocket = 0.001;
  this->ParentKeyScale = 2.0;
  return this;
}

// ~UAnimCompress_RemoveLinearKeys @ 147436a20

void __thiscall
UAnimCompress_RemoveLinearKeys::~UAnimCompress_RemoveLinearKeys
          (UAnimCompress_RemoveLinearKeys *this)

{
  this->_padding_ = (longlong)&___7UAnimCompress_RemoveLinearKeys__6B_;
  UAnimCompress::~UAnimCompress((UAnimCompress *)this);
  return;
}

// GetPrivateStaticClass @ 147461fa0

UClass * __cdecl UAnimCompress_RemoveLinearKeys::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress_RemoveLinearKeys.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress_RemoveLinearKeys",
               &Z_Registration_Info_UClass_UAnimCompress_RemoveLinearKeys.InnerSingleton,
               StaticRegisterNativesUAnimCompress_RemoveLinearKeys,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCompress_RemoveLinearKeys>,
               InternalVTableHelperCtorCaller<UAnimCompress_RemoveLinearKeys>,local_res8,
               UAnimCompress::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress_RemoveLinearKeys.InnerSingleton;
}

// StaticRegisterNativesUAnimCompress_RemoveLinearKeys @ 14747b290

void __cdecl
UAnimCompress_RemoveLinearKeys::StaticRegisterNativesUAnimCompress_RemoveLinearKeys(void)

{
  return;
}

