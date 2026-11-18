// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 7

// StaticClass @ 147011f60

UClass * __cdecl UTestBTDecorator_CantExecute::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTDecorator_CantExecute.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTDecorator_CantExecute",
               &Z_Registration_Info_UClass_UTestBTDecorator_CantExecute.InnerSingleton,
               StaticRegisterNativesUTestBTDecorator_CantExecute,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UTestBTDecorator_CantExecute>,
               InternalVTableHelperCtorCaller<UTestBTDecorator_CantExecute>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTDecorator_CantExecute.InnerSingleton;
}

// UTestBTDecorator_CantExecute @ 14704a6c0

UTestBTDecorator_CantExecute * __thiscall
UTestBTDecorator_CantExecute::UTestBTDecorator_CantExecute
          (UTestBTDecorator_CantExecute *this,FVTableHelper *param_1)

{
  UBTDecorator::UBTDecorator((UBTDecorator *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UTestBTDecorator_CantExecute @ 14704a700

UTestBTDecorator_CantExecute * __thiscall
UTestBTDecorator_CantExecute::UTestBTDecorator_CantExecute
          (UTestBTDecorator_CantExecute *this,FObjectInitializer *param_1)

{
  UBTDecorator::UBTDecorator((UBTDecorator *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  ::FString::operator=((FString *)&this->field_0x30,L"Can\'t Exexcute");
  *(uint *)&this->field_0x60 = *(uint *)&this->field_0x60 & 0xfffffff8;
  return this;
}

// ~UTestBTDecorator_CantExecute @ 14704b9e0

void __thiscall
UTestBTDecorator_CantExecute::~UTestBTDecorator_CantExecute(UTestBTDecorator_CantExecute *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  UBTDecorator::~UBTDecorator((UBTDecorator *)this);
  return;
}

// CalculateRawConditionValue @ 1470507e0

bool __thiscall
UTestBTDecorator_CantExecute::CalculateRawConditionValue
          (UTestBTDecorator_CantExecute *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  return false;
}

// GetPrivateStaticClass @ 147052870

UClass * __cdecl UTestBTDecorator_CantExecute::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTDecorator_CantExecute.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTDecorator_CantExecute",
               &Z_Registration_Info_UClass_UTestBTDecorator_CantExecute.InnerSingleton,
               StaticRegisterNativesUTestBTDecorator_CantExecute,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UTestBTDecorator_CantExecute>,
               InternalVTableHelperCtorCaller<UTestBTDecorator_CantExecute>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTDecorator_CantExecute.InnerSingleton;
}

// StaticRegisterNativesUTestBTDecorator_CantExecute @ 147059970

void __cdecl UTestBTDecorator_CantExecute::StaticRegisterNativesUTestBTDecorator_CantExecute(void)

{
  return;
}

