// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147b27ff0

UClass * __cdecl UActorElementTedsTypedElementBridgeInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorElementTedsTypedElementBridgeInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorElementTedsTypedElementBridgeInterface",
               &Z_Registration_Info_UClass_UActorElementTedsTypedElementBridgeInterface.
                InnerSingleton,StaticRegisterNativesUActorElementTedsTypedElementBridgeInterface,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorElementTedsTypedElementBridgeInterface>,
               InternalVTableHelperCtorCaller<UActorElementTedsTypedElementBridgeInterface>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorElementTedsTypedElementBridgeInterface.InnerSingleton;
}

// UActorElementTedsTypedElementBridgeInterface @ 147b3a600

UActorElementTedsTypedElementBridgeInterface * __thiscall
UActorElementTedsTypedElementBridgeInterface::UActorElementTedsTypedElementBridgeInterface
          (UActorElementTedsTypedElementBridgeInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITedsTypedElementBridgeInterface__;
  return this;
}

// UActorElementTedsTypedElementBridgeInterface @ 147b3a640

UActorElementTedsTypedElementBridgeInterface * __thiscall
UActorElementTedsTypedElementBridgeInterface::UActorElementTedsTypedElementBridgeInterface
          (UActorElementTedsTypedElementBridgeInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITedsTypedElementBridgeInterface__;
  return this;
}

// ~UActorElementTedsTypedElementBridgeInterface @ 147b3d4c0

void __thiscall
UActorElementTedsTypedElementBridgeInterface::~UActorElementTedsTypedElementBridgeInterface
          (UActorElementTedsTypedElementBridgeInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITedsTypedElementBridgeInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147b6b600

UClass * __cdecl UActorElementTedsTypedElementBridgeInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorElementTedsTypedElementBridgeInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorElementTedsTypedElementBridgeInterface",
               &Z_Registration_Info_UClass_UActorElementTedsTypedElementBridgeInterface.
                InnerSingleton,StaticRegisterNativesUActorElementTedsTypedElementBridgeInterface,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorElementTedsTypedElementBridgeInterface>,
               InternalVTableHelperCtorCaller<UActorElementTedsTypedElementBridgeInterface>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorElementTedsTypedElementBridgeInterface.InnerSingleton;
}

// GetRowHandle @ 147b6dae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FTedsRowHandle __thiscall
UActorElementTedsTypedElementBridgeInterface::GetRowHandle
          (UActorElementTedsTypedElementBridgeInterface *this,FTypedElementHandle *param_1)

{
  FName FVar1;
  int iVar2;
  AActor *pAVar3;
  IModularFeatures *pIVar4;
  longlong lVar5;
  FTypedElementInternalData *pFVar6;
  longlong *plVar7;
  FTypedElementHandle *in_R8;
  
  pAVar3 = ActorElementDataUtil::GetActorFromHandle(in_R8,false);
  FVar1 = UE::Editor::DataStorage::CompatibilityFeatureName;
  pIVar4 = IModularFeatures::Get();
  iVar2 = (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4);
  if (iVar2 < 1) {
    plVar7 = (longlong *)0x0;
  }
  else {
    pIVar4 = IModularFeatures::Get();
    lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,FVar1,0);
    plVar7 = (longlong *)(lVar5 + -8);
    if (lVar5 == 0) {
      plVar7 = (longlong *)0x0;
    }
  }
  pFVar6 = (FTypedElementInternalData *)(**(code **)(*plVar7 + 0x40))(plVar7,pAVar3);
  param_1->DataPtr = pFVar6;
  return (FTedsRowHandle)(ulong64)param_1;
}

// StaticRegisterNativesUActorElementTedsTypedElementBridgeInterface @ 147b8eb10

void __cdecl
UActorElementTedsTypedElementBridgeInterface::
StaticRegisterNativesUActorElementTedsTypedElementBridgeInterface(void)

{
  return;
}

// _getUObject @ 147b91f70

UObject * __thiscall
UActorElementTedsTypedElementBridgeInterface::_getUObject
          (UActorElementTedsTypedElementBridgeInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

