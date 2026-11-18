// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147e414f0

UClass * __cdecl ALevelInstanceEditorInstanceActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceEditorInstanceActor",
               &Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor.InnerSingleton,
               StaticRegisterNativesALevelInstanceEditorInstanceActor,0x2c0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALevelInstanceEditorInstanceActor>,
               InternalVTableHelperCtorCaller<ALevelInstanceEditorInstanceActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor.InnerSingleton;
}

// ALevelInstanceEditorInstanceActor @ 147e542a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelInstanceEditorInstanceActor * __thiscall
ALevelInstanceEditorInstanceActor::ALevelInstanceEditorInstanceActor
          (ALevelInstanceEditorInstanceActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7ALevelInstanceEditorInstanceActor__6B_;
  return this;
}

// ALevelInstanceEditorInstanceActor @ 147e542d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelInstanceEditorInstanceActor * __thiscall
ALevelInstanceEditorInstanceActor::ALevelInstanceEditorInstanceActor
          (ALevelInstanceEditorInstanceActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7ALevelInstanceEditorInstanceActor__6B_;
  pFVar3 = ::FName::FName(&local_res8,L"RootComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)&this->field_0x1b8 = pUVar5;
  pUVar5[10].field_0x1b = 0;
  pbVar1 = (byte *)(*(longlong *)&this->field_0x1b8 + 0x1aa);
  *pbVar1 = *pbVar1 | 2;
  return this;
}

// ~ALevelInstanceEditorInstanceActor @ 147e570c0

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
ALevelInstanceEditorInstanceActor::~ALevelInstanceEditorInstanceActor
          (ALevelInstanceEditorInstanceActor *this)

{
  *(undefined ***)this = &___7ALevelInstanceEditorInstanceActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 147e69550

UClass * __cdecl ALevelInstanceEditorInstanceActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceEditorInstanceActor",
               &Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor.InnerSingleton,
               StaticRegisterNativesALevelInstanceEditorInstanceActor,0x2c0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALevelInstanceEditorInstanceActor>,
               InternalVTableHelperCtorCaller<ALevelInstanceEditorInstanceActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor.InnerSingleton;
}

// StaticRegisterNativesALevelInstanceEditorInstanceActor @ 147e82190

void __cdecl
ALevelInstanceEditorInstanceActor::StaticRegisterNativesALevelInstanceEditorInstanceActor(void)

{
  return;
}

