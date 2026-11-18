// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 6

// StaticClass @ 14cf2e340

UClass * __cdecl UARTraceResultDummy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTraceResultDummy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTraceResultDummy",
               &Z_Registration_Info_UClass_UARTraceResultDummy.InnerSingleton,
               StaticRegisterNativesUARTraceResultDummy,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARTraceResultDummy>,
               InternalVTableHelperCtorCaller<UARTraceResultDummy>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTraceResultDummy.InnerSingleton;
}

// UARTraceResultDummy @ 14cf42cc0

UARTraceResultDummy * __thiscall
UARTraceResultDummy::UARTraceResultDummy(UARTraceResultDummy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UARTraceResultDummy__6B_;
  return this;
}

// UARTraceResultDummy @ 14cf42cf0

UARTraceResultDummy * __thiscall
UARTraceResultDummy::UARTraceResultDummy(UARTraceResultDummy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UARTraceResultDummy__6B_;
  return this;
}

// ~UARTraceResultDummy @ 14cf44930

void __thiscall UARTraceResultDummy::~UARTraceResultDummy(UARTraceResultDummy *this)

{
  *(undefined ***)this = &___7UARTraceResultDummy__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14cf55560

UClass * __cdecl UARTraceResultDummy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTraceResultDummy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTraceResultDummy",
               &Z_Registration_Info_UClass_UARTraceResultDummy.InnerSingleton,
               StaticRegisterNativesUARTraceResultDummy,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARTraceResultDummy>,
               InternalVTableHelperCtorCaller<UARTraceResultDummy>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTraceResultDummy.InnerSingleton;
}

// StaticRegisterNativesUARTraceResultDummy @ 14cf614f0

void __cdecl UARTraceResultDummy::StaticRegisterNativesUARTraceResultDummy(void)

{
  return;
}

