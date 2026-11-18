// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147e41a60

UClass * __cdecl ALevelInstancePivot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelInstancePivot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstancePivot",
               &Z_Registration_Info_UClass_ALevelInstancePivot.InnerSingleton,
               StaticRegisterNativesALevelInstancePivot,0x2c8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALevelInstancePivot>,
               InternalVTableHelperCtorCaller<ALevelInstancePivot>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelInstancePivot.InnerSingleton;
}

// ALevelInstancePivot @ 147e54370

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelInstancePivot * __thiscall
ALevelInstancePivot::ALevelInstancePivot(ALevelInstancePivot *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__ILevelInstanceEditorPivotInterface__;
  return this;
}

// ALevelInstancePivot @ 147e543b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelInstancePivot * __thiscall
ALevelInstancePivot::ALevelInstancePivot(ALevelInstancePivot *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__ILevelInstanceEditorPivotInterface__;
  pFVar2 = ::FName::FName(&local_res8,L"RootComponent");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(UObject **)&this->field_0x1b8 = pUVar4;
  pUVar4[10].field_0x1b = 0;
  return this;
}

// ~ALevelInstancePivot @ 147e570e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelInstancePivot::~ALevelInstancePivot(ALevelInstancePivot *this)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &___7ILevelInstanceEditorPivotInterface__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 147e69610

UClass * __cdecl ALevelInstancePivot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelInstancePivot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstancePivot",
               &Z_Registration_Info_UClass_ALevelInstancePivot.InnerSingleton,
               StaticRegisterNativesALevelInstancePivot,0x2c8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALevelInstancePivot>,
               InternalVTableHelperCtorCaller<ALevelInstancePivot>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelInstancePivot.InnerSingleton;
}

// StaticRegisterNativesALevelInstancePivot @ 147e821a0

void __cdecl ALevelInstancePivot::StaticRegisterNativesALevelInstancePivot(void)

{
  return;
}

// _getUObject @ 147e87f20

UObject * __thiscall ALevelInstancePivot::_getUObject(ALevelInstancePivot *this)

{
  return (UObject *)&this[-1].field_0x8;
}

