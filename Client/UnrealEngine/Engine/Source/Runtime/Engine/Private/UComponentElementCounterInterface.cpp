// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147b28550

UClass * __cdecl UComponentElementCounterInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComponentElementCounterInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ComponentElementCounterInterface",
               &Z_Registration_Info_UClass_UComponentElementCounterInterface.InnerSingleton,
               StaticRegisterNativesUComponentElementCounterInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComponentElementCounterInterface>,
               InternalVTableHelperCtorCaller<UComponentElementCounterInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComponentElementCounterInterface.InnerSingleton;
}

// UComponentElementCounterInterface @ 147b3a760

UComponentElementCounterInterface * __thiscall
UComponentElementCounterInterface::UComponentElementCounterInterface
          (UComponentElementCounterInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementCounterInterface__;
  return this;
}

// UComponentElementCounterInterface @ 147b3a7a0

UComponentElementCounterInterface * __thiscall
UComponentElementCounterInterface::UComponentElementCounterInterface
          (UComponentElementCounterInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementCounterInterface__;
  return this;
}

// ~UComponentElementCounterInterface @ 147b3d520

void __thiscall
UComponentElementCounterInterface::~UComponentElementCounterInterface
          (UComponentElementCounterInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementCounterInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// DecrementCountersForElement @ 147b4f8f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UComponentElementCounterInterface::DecrementCountersForElement
          (UComponentElementCounterInterface *this,FTypedElementHandle *param_1,
          FTypedElementCounter *param_2)

{
  ICounterCategory *pIVar1;
  code *pcVar2;
  FName FVar3;
  FNameEntryId FVar4;
  UActorComponent *pUVar5;
  undefined4 extraout_var;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar6;
  UClass *pUVar7;
  uint local_res20 [2];
  longlong local_18 [2];
  
  pUVar5 = ComponentElementDataUtil::GetComponentFromHandle(param_1,false);
  if (pUVar5 != (UActorComponent *)0x0) {
    local_18[0] = pUVar5->_padding_;
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

// GetPrivateStaticClass @ 147b6b810

UClass * __cdecl UComponentElementCounterInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComponentElementCounterInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ComponentElementCounterInterface",
               &Z_Registration_Info_UClass_UComponentElementCounterInterface.InnerSingleton,
               StaticRegisterNativesUComponentElementCounterInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComponentElementCounterInterface>,
               InternalVTableHelperCtorCaller<UComponentElementCounterInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComponentElementCounterInterface.InnerSingleton;
}

// IncrementCountersForElement @ 147b74f70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UComponentElementCounterInterface::IncrementCountersForElement
          (UComponentElementCounterInterface *this,FTypedElementHandle *param_1,
          FTypedElementCounter *param_2)

{
  UActorComponent *pUVar1;
  
  pUVar1 = ComponentElementDataUtil::GetComponentFromHandle(param_1,false);
  if (pUVar1 != (UActorComponent *)0x0) {
    UObjectElementCounterInterface::IncrementCounterForObjectClass((UObject *)pUVar1,param_2);
    return;
  }
  return;
}

// StaticRegisterNativesUComponentElementCounterInterface @ 147b8eb70

void __cdecl
UComponentElementCounterInterface::StaticRegisterNativesUComponentElementCounterInterface(void)

{
  return;
}

// _getUObject @ 147b91f90

UObject * __thiscall
UComponentElementCounterInterface::_getUObject(UComponentElementCounterInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

