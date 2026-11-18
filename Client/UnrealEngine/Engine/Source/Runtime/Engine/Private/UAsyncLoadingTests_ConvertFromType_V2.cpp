// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148874790

UClass * __cdecl UAsyncLoadingTests_ConvertFromType_V2::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V2.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncLoadingTests_ConvertFromType_V2",
               &Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V2.InnerSingleton,
               StaticRegisterNativesUAsyncLoadingTests_ConvertFromType_V2,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncLoadingTests_ConvertFromType_V2>,
               InternalVTableHelperCtorCaller<UAsyncLoadingTests_ConvertFromType_V2>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V2.InnerSingleton;
}

// UAsyncLoadingTests_ConvertFromType_V2 @ 14887dea0

UAsyncLoadingTests_ConvertFromType_V2 * __thiscall
UAsyncLoadingTests_ConvertFromType_V2::UAsyncLoadingTests_ConvertFromType_V2
          (UAsyncLoadingTests_ConvertFromType_V2 *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncLoadingTests_ConvertFromType_V2__6B_;
  (this->Reference).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// UAsyncLoadingTests_ConvertFromType_V2 @ 14887ded0

UAsyncLoadingTests_ConvertFromType_V2 * __thiscall
UAsyncLoadingTests_ConvertFromType_V2::UAsyncLoadingTests_ConvertFromType_V2
          (UAsyncLoadingTests_ConvertFromType_V2 *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncLoadingTests_ConvertFromType_V2__6B_;
  (this->Reference).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// ~UAsyncLoadingTests_ConvertFromType_V2 @ 14887ee60

void __thiscall
UAsyncLoadingTests_ConvertFromType_V2::~UAsyncLoadingTests_ConvertFromType_V2
          (UAsyncLoadingTests_ConvertFromType_V2 *this)

{
  this->_padding_ = (longlong)&___7UAsyncLoadingTests_ConvertFromType_V2__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14888f7d0

UClass * __cdecl UAsyncLoadingTests_ConvertFromType_V2::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V2.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncLoadingTests_ConvertFromType_V2",
               &Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V2.InnerSingleton,
               StaticRegisterNativesUAsyncLoadingTests_ConvertFromType_V2,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncLoadingTests_ConvertFromType_V2>,
               InternalVTableHelperCtorCaller<UAsyncLoadingTests_ConvertFromType_V2>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V2.InnerSingleton;
}

// StaticRegisterNativesUAsyncLoadingTests_ConvertFromType_V2 @ 14889bb10

void __cdecl
UAsyncLoadingTests_ConvertFromType_V2::StaticRegisterNativesUAsyncLoadingTests_ConvertFromType_V2
          (void)

{
  return;
}

