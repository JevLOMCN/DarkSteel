// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 147b2a4a0

UClass * __cdecl UObjectElementCounterInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectElementCounterInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ObjectElementCounterInterface",
               &Z_Registration_Info_UClass_UObjectElementCounterInterface.InnerSingleton,
               StaticRegisterNativesUObjectElementCounterInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UObjectElementCounterInterface>,
               InternalVTableHelperCtorCaller<UObjectElementCounterInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectElementCounterInterface.InnerSingleton;
}

// UObjectElementCounterInterface @ 147b3b580

UObjectElementCounterInterface * __thiscall
UObjectElementCounterInterface::UObjectElementCounterInterface
          (UObjectElementCounterInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementCounterInterface__;
  return this;
}

// UObjectElementCounterInterface @ 147b3b5c0

UObjectElementCounterInterface * __thiscall
UObjectElementCounterInterface::UObjectElementCounterInterface
          (UObjectElementCounterInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementCounterInterface__;
  return this;
}

// ~UObjectElementCounterInterface @ 147b3d990

void __thiscall
UObjectElementCounterInterface::~UObjectElementCounterInterface
          (UObjectElementCounterInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementCounterInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// DecrementCounterForObjectClass @ 147b4f640

void __cdecl
UObjectElementCounterInterface::DecrementCounterForObjectClass
          (UObject *param_1,FTypedElementCounter *param_2)

{
  ICounterCategory *pIVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar6;
  UClass *pUVar7;
  undefined1 local_res8 [8];
  uint local_res10;
  undefined4 uStackX_14;
  undefined8 local_res18;
  
  if (param_1 == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Elements\\Object\\ObjectElementCounterInterface.cpp"
                       ,0x21,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res18 = *(undefined8 *)&param_1->field_0x10;
  FVar5 = FNameEntryId::FromValidEName((EName)local_res8);
  uStackX_14 = 0;
  local_res10 = *(uint *)CONCAT44(extraout_var,FVar5.Value);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = local_res10;
  pTVar6 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(&param_2->CounterCategories,FVar3);
  if (pTVar6 != (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
                 *)0x0) {
    pIVar1 = pTVar6->Ptr;
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x20);
    pUVar7 = Z_Construct_UClass_UClass_NoRegister();
    (*pcVar2)(pIVar1,&local_res18,pUVar7->_padding_);
  }
  return;
}

// DecrementCountersForElement @ 147b4f980

void __thiscall
UObjectElementCounterInterface::DecrementCountersForElement
          (UObjectElementCounterInterface *this,FTypedElementHandle *param_1,
          FTypedElementCounter *param_2)

{
  ICounterCategory *pIVar1;
  code *pcVar2;
  FName FVar3;
  FNameEntryId FVar4;
  UObject *pUVar5;
  undefined4 extraout_var;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar6;
  UClass *pUVar7;
  uint local_res20 [2];
  undefined8 local_18 [2];
  
  pUVar5 = ObjectElementDataUtil::GetObjectFromHandle(param_1,false);
  if (pUVar5 != (UObject *)0x0) {
    local_18[0] = *(undefined8 *)&pUVar5->field_0x10;
    FVar4 = FNameEntryId::FromValidEName((EName)local_res20);
    local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar4.Value);
    local_res20[1] = 0;
    FVar3.Number = 0;
    FVar3.ComparisonIndex.Value = local_res20[0];
    pTVar6 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(&param_2->CounterCategories,FVar3);
    if (pTVar6 != (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
                   *)0x0) {
      pIVar1 = pTVar6->Ptr;
      pcVar2 = *(code **)((longlong)*pIVar1 + 0x20);
      pUVar7 = Z_Construct_UClass_UClass_NoRegister();
      (*pcVar2)(pIVar1,local_18,pUVar7->_padding_);
    }
  }
  return;
}

// GetPrivateStaticClass @ 147b6c340

UClass * __cdecl UObjectElementCounterInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectElementCounterInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ObjectElementCounterInterface",
               &Z_Registration_Info_UClass_UObjectElementCounterInterface.InnerSingleton,
               StaticRegisterNativesUObjectElementCounterInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UObjectElementCounterInterface>,
               InternalVTableHelperCtorCaller<UObjectElementCounterInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectElementCounterInterface.InnerSingleton;
}

// IncrementCounterForObjectClass @ 147b74ce0

void __cdecl
UObjectElementCounterInterface::IncrementCounterForObjectClass
          (UObject *param_1,FTypedElementCounter *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar4;
  TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
  *pTVar5;
  ICounterCategory *pIVar6;
  UClass *pUVar7;
  ICounterCategory *pIVar8;
  undefined1 local_res8 [8];
  uint local_res10;
  undefined4 uStackX_14;
  FName local_res18;
  undefined8 local_res20;
  
  if ((param_1 == (UObject *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Elements\\Object\\ObjectElementCounterInterface.cpp"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res20 = *(undefined8 *)&param_1->field_0x10;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
  pIVar8 = (ICounterCategory *)0x0;
  uStackX_14 = 0;
  local_res10 = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  local_res18.Number = 0;
  local_res18.ComparisonIndex.Value = local_res10;
  pTVar4 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(&param_2->CounterCategories,local_res18);
  if (pTVar4 == (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
                 *)0x0) {
    pTVar5 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::AllocateMemoryForEmplace<FName_const_&>(&param_2->CounterCategories,&local_res18);
    pTVar4 = (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
              *)&pTVar5->field_0x8;
    *(uint *)&pTVar5->field_0x0 = local_res18.ComparisonIndex.Value;
    *(uint *)&pTVar5->field_0x4 = local_res18.Number;
    *pTVar4 = (ICounterCategory *)0x0;
  }
  else if (pTVar4->Ptr != (ICounterCategory *)0x0) goto LAB_147b74dec;
  pIVar6 = ::operator_new(0x60);
  if (pIVar6 != (ICounterCategory *)0x0) {
    *pIVar6 = (ICounterCategory)&___7__TCounterCategory_PEAVUClass___FTypedElementCounter__6B_;
    pUVar7 = Z_Construct_UClass_UClass_NoRegister();
    pIVar6[1] = (ICounterCategory)pUVar7->_padding_;
    pIVar6[2] = (ICounterCategory)0x0;
    pIVar6[3] = (ICounterCategory)0x0;
    pIVar6[6] = (ICounterCategory)0x0;
    *(undefined4 *)(pIVar6 + 7) = 0;
    *(undefined4 *)&pIVar6[7].field_0x4 = 0x80;
    *(undefined4 *)(pIVar6 + 8) = 0xffffffff;
    *(undefined4 *)&pIVar6[8].field_0x4 = 0;
    pIVar6[10] = (ICounterCategory)0x0;
    *(undefined4 *)(pIVar6 + 0xb) = 0;
    pIVar8 = pIVar6;
  }
  pIVar6 = pTVar4->Ptr;
  pTVar4->Ptr = pIVar8;
  if (pIVar6 != (ICounterCategory *)0x0) {
    (**(code **)*pIVar6)(pIVar6,1);
  }
LAB_147b74dec:
  pIVar8 = pTVar4->Ptr;
  pcVar1 = *(code **)((longlong)*pIVar8 + 0x18);
  pUVar7 = Z_Construct_UClass_UClass_NoRegister();
  (*pcVar1)(pIVar8,&local_res20,pUVar7->_padding_);
  return;
}

// IncrementCountersForElement @ 147b74fb0

void __thiscall
UObjectElementCounterInterface::IncrementCountersForElement
          (UObjectElementCounterInterface *this,FTypedElementHandle *param_1,
          FTypedElementCounter *param_2)

{
  UObject *pUVar1;
  
  pUVar1 = ObjectElementDataUtil::GetObjectFromHandle(param_1,false);
  if (pUVar1 != (UObject *)0x0) {
    IncrementCounterForObjectClass(pUVar1,param_2);
    return;
  }
  return;
}

// StaticRegisterNativesUObjectElementCounterInterface @ 147b8eca0

void __cdecl
UObjectElementCounterInterface::StaticRegisterNativesUObjectElementCounterInterface(void)

{
  return;
}

// _getUObject @ 147b91ff0

UObject * __thiscall
UObjectElementCounterInterface::_getUObject(UObjectElementCounterInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

