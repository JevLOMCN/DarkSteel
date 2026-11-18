// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 14773d090

UClass * __cdecl USmokeTestCommandlet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmokeTestCommandlet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SmokeTestCommandlet",
               &Z_Registration_Info_UClass_USmokeTestCommandlet.InnerSingleton,
               StaticRegisterNativesUSmokeTestCommandlet,0x80,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USmokeTestCommandlet>,
               InternalVTableHelperCtorCaller<USmokeTestCommandlet>,local_res8,
               UCommandlet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmokeTestCommandlet.InnerSingleton;
}

// USmokeTestCommandlet @ 1477f0cd0

USmokeTestCommandlet * __thiscall
USmokeTestCommandlet::USmokeTestCommandlet(USmokeTestCommandlet *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined ***)this = &___7USmokeTestCommandlet__6B_;
  return this;
}

// USmokeTestCommandlet @ 1477f0d30

USmokeTestCommandlet * __thiscall
USmokeTestCommandlet::USmokeTestCommandlet(USmokeTestCommandlet *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined ***)this = &___7USmokeTestCommandlet__6B_;
  *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 & 0xffffff39 | 0x39;
  return this;
}

// ~USmokeTestCommandlet @ 1477f49f0

void __thiscall USmokeTestCommandlet::~USmokeTestCommandlet(USmokeTestCommandlet *this)

{
  *(undefined ***)this = &___7USmokeTestCommandlet__6B_;
  UCommandlet::~UCommandlet((UCommandlet *)this);
  return;
}

// GetPrivateStaticClass @ 14783c840

UClass * __cdecl USmokeTestCommandlet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USmokeTestCommandlet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SmokeTestCommandlet",
               &Z_Registration_Info_UClass_USmokeTestCommandlet.InnerSingleton,
               StaticRegisterNativesUSmokeTestCommandlet,0x80,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USmokeTestCommandlet>,
               InternalVTableHelperCtorCaller<USmokeTestCommandlet>,local_res8,
               UCommandlet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USmokeTestCommandlet.InnerSingleton;
}

// Main @ 1478425d0

int __thiscall USmokeTestCommandlet::Main(USmokeTestCommandlet *this,FString *param_1)

{
  bool bVar1;
  FAutomationTestFramework *this_00;
  
  RequestEngineExit(L"SmokeTestCommandlet Main");
  this_00 = FAutomationTestFramework::Get();
  bVar1 = FAutomationTestFramework::RunSmokeTests(this_00);
  return bVar1 ^ 1;
}

// StaticRegisterNativesUSmokeTestCommandlet @ 147875af0

void __cdecl USmokeTestCommandlet::StaticRegisterNativesUSmokeTestCommandlet(void)

{
  return;
}

