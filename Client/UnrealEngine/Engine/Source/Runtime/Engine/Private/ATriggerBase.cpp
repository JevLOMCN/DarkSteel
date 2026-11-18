// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147358830

UClass * __cdecl ATriggerBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ATriggerBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TriggerBase",
               &Z_Registration_Info_UClass_ATriggerBase.InnerSingleton,
               StaticRegisterNativesATriggerBase,0x2c8,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<ATriggerBase>,
               InternalVTableHelperCtorCaller<ATriggerBase>,aFStackX_8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATriggerBase.InnerSingleton;
}

// ATriggerBase @ 1488ad9a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ATriggerBase * __thiscall ATriggerBase::ATriggerBase(ATriggerBase *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ATriggerBase__6B_;
  (this->CollisionComponent).field0_0x0.DebugPtr = (UShapeComponent *)0x0;
  return this;
}

// ATriggerBase @ 1488ad9e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ATriggerBase * __thiscall ATriggerBase::ATriggerBase(ATriggerBase *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UShapeComponent *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ATriggerBase__6B_;
  (this->CollisionComponent).field0_0x0.DebugPtr = (UShapeComponent *)0x0;
  AActor::SetHidden((AActor *)this,true);
  AActor::SetCanBeDamaged((AActor *)this,false);
  pFVar3 = ::FName::FName(&local_res8,L"CollisionComp");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UShapeComponent_NoRegister();
  pUVar5 = (UShapeComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar5 == (UShapeComponent *)0x0)) {
    (this->CollisionComponent).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UShapeComponent *)0x0) {
      return this;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
    (this->CollisionComponent).field0_0x0.DebugPtr = pUVar5;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar5 = (this->CollisionComponent).field0_0x0.DebugPtr;
  this->_padding_ = (longlong)pUVar5;
  puVar1 = &pUVar5->field_0x1a9;
  *puVar1 = *puVar1 & 0xf7;
  return this;
}

// ~ATriggerBase @ 1488b20e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ATriggerBase::~ATriggerBase(ATriggerBase *this)

{
  this->_padding_ = (longlong)&___7ATriggerBase__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 1488c3c10

UClass * __cdecl ATriggerBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATriggerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TriggerBase",
               &Z_Registration_Info_UClass_ATriggerBase.InnerSingleton,
               StaticRegisterNativesATriggerBase,0x2c8,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<ATriggerBase>,
               InternalVTableHelperCtorCaller<ATriggerBase>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATriggerBase.InnerSingleton;
}

// StaticRegisterNativesATriggerBase @ 1488e2240

void __cdecl ATriggerBase::StaticRegisterNativesATriggerBase(void)

{
  return;
}

