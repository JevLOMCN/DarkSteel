// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 7

// StaticClass @ 147012a70

UClass * __cdecl UTestBTDecorator_LoopUntil::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTDecorator_LoopUntil.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTDecorator_LoopUntil",
               &Z_Registration_Info_UClass_UTestBTDecorator_LoopUntil.InnerSingleton,
               StaticRegisterNativesUTestBTDecorator_LoopUntil,0x90,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Game",InternalConstructor<UTestBTDecorator_LoopUntil>,
               InternalVTableHelperCtorCaller<UTestBTDecorator_LoopUntil>,local_res8,
               UBTDecorator_LoopUntil::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTDecorator_LoopUntil.InnerSingleton;
}

// UTestBTDecorator_LoopUntil @ 14704a850

UTestBTDecorator_LoopUntil * __thiscall
UTestBTDecorator_LoopUntil::UTestBTDecorator_LoopUntil
          (UTestBTDecorator_LoopUntil *this,FVTableHelper *param_1)

{
  UBTDecorator_LoopUntil::UBTDecorator_LoopUntil((UBTDecorator_LoopUntil *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UTestBTDecorator_LoopUntil @ 14704a890

UTestBTDecorator_LoopUntil * __thiscall
UTestBTDecorator_LoopUntil::UTestBTDecorator_LoopUntil
          (UTestBTDecorator_LoopUntil *this,FObjectInitializer *param_1)

{
  UBTDecorator_LoopUntil::UBTDecorator_LoopUntil((UBTDecorator_LoopUntil *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  ::FString::operator=((FString *)&this->field_0x30,L"Test Loop Until");
  *(uint *)&this->field_0x60 = *(uint *)&this->field_0x60 & 0xfffffff8;
  return this;
}

// ~UTestBTDecorator_LoopUntil @ 14704ba20

void __thiscall
UTestBTDecorator_LoopUntil::~UTestBTDecorator_LoopUntil(UTestBTDecorator_LoopUntil *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  UBTDecorator_LoopUntil::~UBTDecorator_LoopUntil((UBTDecorator_LoopUntil *)this);
  return;
}

// GetPrivateStaticClass @ 1470529f0

UClass * __cdecl UTestBTDecorator_LoopUntil::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestBTDecorator_LoopUntil.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"TestBTDecorator_LoopUntil",
               &Z_Registration_Info_UClass_UTestBTDecorator_LoopUntil.InnerSingleton,
               StaticRegisterNativesUTestBTDecorator_LoopUntil,0x90,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Game",InternalConstructor<UTestBTDecorator_LoopUntil>,
               InternalVTableHelperCtorCaller<UTestBTDecorator_LoopUntil>,local_res8,
               UBTDecorator_LoopUntil::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestBTDecorator_LoopUntil.InnerSingleton;
}

// SetRequiredResult @ 147058570

void __thiscall
UTestBTDecorator_LoopUntil::SetRequiredResult(UTestBTDecorator_LoopUntil *this,Type param_1)

{
  UEnum *pUVar1;
  undefined1 *puVar2;
  FName local_res8;
  undefined4 local_30;
  FString local_20;
  
  local_30 = CONCAT22(local_30._2_2_,0xffff);
  pUVar1 = StaticEnum<enum_EBTNodeResult::Type>();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1470585b9:
    if (pUVar1 != (UEnum *)0x0) {
      local_res8 = (FName)pUVar1->_padding_;
      ::FName::ToString(&local_res8,&local_20);
      goto LAB_1470585e5;
    }
  }
  else if (pUVar1 != (UEnum *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
    goto LAB_1470585b9;
  }
  ::FString::FString(&local_20,L"None");
LAB_1470585e5:
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined4 *)&this->field_0x70 = local_30;
  this->field_0x74 = (char)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UEnum **)&this->field_0x78 = pUVar1;
  puVar2 = &this->field_0x80;
  if ((FString *)puVar2 != &local_20) {
    if (*(void **)puVar2 != (void *)0x0) {
      FMemory::Free(*(void **)puVar2);
    }
    *(FScriptContainerElement **)puVar2 = local_20.Data.AllocatorInstance.Data;
    *(int *)&this->field_0x88 = local_20.Data.ArrayNum;
    *(int *)&this->field_0x8c = local_20.Data.ArrayMax;
    local_20.Data.ArrayNum = 0;
    local_20.Data.ArrayMax = 0;
    local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUTestBTDecorator_LoopUntil @ 147059990

void __cdecl UTestBTDecorator_LoopUntil::StaticRegisterNativesUTestBTDecorator_LoopUntil(void)

{
  return;
}

