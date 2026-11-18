// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147b2a2e0

UClass * __cdecl UActorElementCounterInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorElementCounterInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorElementCounterInterface",
               &Z_Registration_Info_UClass_UActorElementCounterInterface.InnerSingleton,
               StaticRegisterNativesUActorElementCounterInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorElementCounterInterface>,
               InternalVTableHelperCtorCaller<UActorElementCounterInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorElementCounterInterface.InnerSingleton;
}

// UActorElementCounterInterface @ 147b3a400

UActorElementCounterInterface * __thiscall
UActorElementCounterInterface::UActorElementCounterInterface
          (UActorElementCounterInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementCounterInterface__;
  return this;
}

// UActorElementCounterInterface @ 147b3a440

UActorElementCounterInterface * __thiscall
UActorElementCounterInterface::UActorElementCounterInterface
          (UActorElementCounterInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementCounterInterface__;
  return this;
}

// ~UActorElementCounterInterface @ 147b3d440

void __thiscall
UActorElementCounterInterface::~UActorElementCounterInterface(UActorElementCounterInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementCounterInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// DecrementCountersForElement @ 147b4f860

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
UActorElementCounterInterface::DecrementCountersForElement
          (UActorElementCounterInterface *this,FTypedElementHandle *param_1,
          FTypedElementCounter *param_2)

{
  ICounterCategory *pIVar1;
  code *pcVar2;
  FName FVar3;
  FNameEntryId FVar4;
  AActor *pAVar5;
  undefined4 extraout_var;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar6;
  UClass *pUVar7;
  uint local_res20 [2];
  longlong local_18 [2];
  
  pAVar5 = ActorElementDataUtil::GetActorFromHandle(param_1,false);
  if (pAVar5 != (AActor *)0x0) {
    local_18[0] = pAVar5->_padding_;
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

// GetPrivateStaticClass @ 147b6b340

UClass * __cdecl UActorElementCounterInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorElementCounterInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorElementCounterInterface",
               &Z_Registration_Info_UClass_UActorElementCounterInterface.InnerSingleton,
               StaticRegisterNativesUActorElementCounterInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorElementCounterInterface>,
               InternalVTableHelperCtorCaller<UActorElementCounterInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorElementCounterInterface.InnerSingleton;
}

// IncrementCountersForElement @ 147b74f30

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
UActorElementCounterInterface::IncrementCountersForElement
          (UActorElementCounterInterface *this,FTypedElementHandle *param_1,
          FTypedElementCounter *param_2)

{
  AActor *pAVar1;
  
  pAVar1 = ActorElementDataUtil::GetActorFromHandle(param_1,false);
  if (pAVar1 != (AActor *)0x0) {
    UObjectElementCounterInterface::IncrementCounterForObjectClass((UObject *)pAVar1,param_2);
    return;
  }
  return;
}

// StaticRegisterNativesUActorElementCounterInterface @ 147b8ead0

void __cdecl UActorElementCounterInterface::StaticRegisterNativesUActorElementCounterInterface(void)

{
  return;
}

// _getUObject @ 147b91f30

UObject * __thiscall UActorElementCounterInterface::_getUObject(UActorElementCounterInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

