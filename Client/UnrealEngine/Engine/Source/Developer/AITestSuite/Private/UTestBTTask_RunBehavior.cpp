// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 6

// StaticClass @ 147009110

UClass * __cdecl UTestBTTask_RunBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTTask_RunBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTTask_RunBehavior",
               &Z_Registration_Info_UClass_UTestBTTask_RunBehavior.InnerSingleton,
               StaticRegisterNativesUTestBTTask_RunBehavior,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UTestBTTask_RunBehavior>,
               InternalVTableHelperCtorCaller<UTestBTTask_RunBehavior>,local_res8,
               UBTTask_RunBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTTask_RunBehavior.InnerSingleton;
}

// UTestBTTask_RunBehavior @ 14704aec0

UTestBTTask_RunBehavior * __thiscall
UTestBTTask_RunBehavior::UTestBTTask_RunBehavior
          (UTestBTTask_RunBehavior *this,FVTableHelper *param_1)

{
  UBTTask_RunBehavior::UBTTask_RunBehavior((UBTTask_RunBehavior *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UTestBTTask_RunBehavior @ 14704af00

UTestBTTask_RunBehavior * __thiscall
UTestBTTask_RunBehavior::UTestBTTask_RunBehavior
          (UTestBTTask_RunBehavior *this,FObjectInitializer *param_1)

{
  UBTTask_RunBehavior::UBTTask_RunBehavior((UBTTask_RunBehavior *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  ::FString::operator=((FString *)&this->field_0x30,L"Test Run Behavior");
  return this;
}

// ~UTestBTTask_RunBehavior @ 14704bb00

void __thiscall UTestBTTask_RunBehavior::~UTestBTTask_RunBehavior(UTestBTTask_RunBehavior *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  UBTTask_RunBehavior::~UBTTask_RunBehavior((UBTTask_RunBehavior *)this);
  return;
}

// GetPrivateStaticClass @ 147052f30

UClass * __cdecl UTestBTTask_RunBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTTask_RunBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTTask_RunBehavior",
               &Z_Registration_Info_UClass_UTestBTTask_RunBehavior.InnerSingleton,
               StaticRegisterNativesUTestBTTask_RunBehavior,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UTestBTTask_RunBehavior>,
               InternalVTableHelperCtorCaller<UTestBTTask_RunBehavior>,local_res8,
               UBTTask_RunBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTTask_RunBehavior.InnerSingleton;
}

// StaticRegisterNativesUTestBTTask_RunBehavior @ 147059a00

void __cdecl UTestBTTask_RunBehavior::StaticRegisterNativesUTestBTTask_RunBehavior(void)

{
  return;
}

