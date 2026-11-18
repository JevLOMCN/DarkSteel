// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a2af70

UClass * __cdecl AWorldPartitionCustomHLODPlaceholder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionCustomHLODPlaceholder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionCustomHLODPlaceholder",
               &Z_Registration_Info_UClass_AWorldPartitionCustomHLODPlaceholder.InnerSingleton,
               StaticRegisterNativesAWorldPartitionCustomHLODPlaceholder,0x2c0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionCustomHLODPlaceholder>,
               InternalVTableHelperCtorCaller<AWorldPartitionCustomHLODPlaceholder>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionCustomHLODPlaceholder.InnerSingleton;
}

// AWorldPartitionCustomHLODPlaceholder @ 148a41510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWorldPartitionCustomHLODPlaceholder * __thiscall
AWorldPartitionCustomHLODPlaceholder::AWorldPartitionCustomHLODPlaceholder
          (AWorldPartitionCustomHLODPlaceholder *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7AWorldPartitionCustomHLODPlaceholder__6B_;
  return this;
}

// AWorldPartitionCustomHLODPlaceholder @ 148a41540

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWorldPartitionCustomHLODPlaceholder * __thiscall
AWorldPartitionCustomHLODPlaceholder::AWorldPartitionCustomHLODPlaceholder
          (AWorldPartitionCustomHLODPlaceholder *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7AWorldPartitionCustomHLODPlaceholder__6B_;
  pFVar2 = ::FName::FName(&local_res8,L"Root");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(UObject **)&this->field_0x1b8 = pUVar4;
  return this;
}

// ~AWorldPartitionCustomHLODPlaceholder @ 148a440b0

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
AWorldPartitionCustomHLODPlaceholder::~AWorldPartitionCustomHLODPlaceholder
          (AWorldPartitionCustomHLODPlaceholder *this)

{
  *(undefined ***)this = &___7AWorldPartitionCustomHLODPlaceholder__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 148a597a0

UClass * __cdecl AWorldPartitionCustomHLODPlaceholder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionCustomHLODPlaceholder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionCustomHLODPlaceholder",
               &Z_Registration_Info_UClass_AWorldPartitionCustomHLODPlaceholder.InnerSingleton,
               StaticRegisterNativesAWorldPartitionCustomHLODPlaceholder,0x2c0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionCustomHLODPlaceholder>,
               InternalVTableHelperCtorCaller<AWorldPartitionCustomHLODPlaceholder>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionCustomHLODPlaceholder.InnerSingleton;
}

// StaticRegisterNativesAWorldPartitionCustomHLODPlaceholder @ 148a6a240

void __cdecl
AWorldPartitionCustomHLODPlaceholder::StaticRegisterNativesAWorldPartitionCustomHLODPlaceholder
          (void)

{
  return;
}

