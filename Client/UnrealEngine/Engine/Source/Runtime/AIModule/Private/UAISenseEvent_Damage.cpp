// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146e77a10

UClass * __cdecl UAISenseEvent_Damage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseEvent_Damage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseEvent_Damage",
               &Z_Registration_Info_UClass_UAISenseEvent_Damage.InnerSingleton,
               StaticRegisterNativesUAISenseEvent_Damage,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UAISenseEvent_Damage>,
               InternalVTableHelperCtorCaller<UAISenseEvent_Damage>,local_res8,
               UAISenseEvent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseEvent_Damage.InnerSingleton;
}

// UAISenseEvent_Damage @ 146e80b40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAISenseEvent_Damage * __thiscall
UAISenseEvent_Damage::UAISenseEvent_Damage(UAISenseEvent_Damage *this,FVTableHelper *param_1)

{
  UAISenseEvent::UAISenseEvent((UAISenseEvent *)this,param_1);
  this->_padding_ = (longlong)&___7UAISenseEvent_Damage__6B_;
  FAIDamageEvent::FAIDamageEvent(&this->Event);
  return this;
}

// UAISenseEvent_Damage @ 146e80b70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAISenseEvent_Damage * __thiscall
UAISenseEvent_Damage::UAISenseEvent_Damage(UAISenseEvent_Damage *this,FObjectInitializer *param_1)

{
  UAISenseEvent::UAISenseEvent((UAISenseEvent *)this,param_1);
  this->_padding_ = (longlong)&___7UAISenseEvent_Damage__6B_;
  FAIDamageEvent::FAIDamageEvent(&this->Event);
  return this;
}

// ~UAISenseEvent_Damage @ 146e81d50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAISenseEvent_Damage::~UAISenseEvent_Damage(UAISenseEvent_Damage *this)

{
  this->_padding_ = (longlong)&___7UAISenseEvent_Damage__6B_;
  UAISenseEvent::~UAISenseEvent((UAISenseEvent *)this);
  return;
}

// GetPrivateStaticClass @ 146e8f0e0

UClass * __cdecl UAISenseEvent_Damage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseEvent_Damage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseEvent_Damage",
               &Z_Registration_Info_UClass_UAISenseEvent_Damage.InnerSingleton,
               StaticRegisterNativesUAISenseEvent_Damage,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UAISenseEvent_Damage>,
               InternalVTableHelperCtorCaller<UAISenseEvent_Damage>,local_res8,
               UAISenseEvent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseEvent_Damage.InnerSingleton;
}

// StaticRegisterNativesUAISenseEvent_Damage @ 146ea0170

void __cdecl UAISenseEvent_Damage::StaticRegisterNativesUAISenseEvent_Damage(void)

{
  return;
}

// GetSenseID @ 146fb4b70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAINamedID<FAISenseCounter> * __thiscall
UAISenseEvent_Damage::GetSenseID
          (UAISenseEvent_Damage *this,FAINamedID<FAISenseCounter> *__return_storage_ptr__)

{
  UObject *pUVar1;
  undefined4 uVar2;
  UClass *this_00;
  
  this_00 = UAISense_Damage::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  __return_storage_ptr__->Index = pUVar1[1].field_0x14;
  uVar2 = *(undefined4 *)&pUVar1[1].field_0x1c;
  (__return_storage_ptr__->Name).ComparisonIndex =
       (FNameEntryId)*(undefined4 *)&pUVar1[1].field_0x18;
  (__return_storage_ptr__->Name).Number = uVar2;
  return __return_storage_ptr__;
}

