// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 14822a4c0

UClass * __cdecl AClusterUnionActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AClusterUnionActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ClusterUnionActor",
               &Z_Registration_Info_UClass_AClusterUnionActor.InnerSingleton,
               StaticRegisterNativesAClusterUnionActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AClusterUnionActor>,
               InternalVTableHelperCtorCaller<AClusterUnionActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AClusterUnionActor.InnerSingleton;
}

// AClusterUnionActor @ 14824db70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AClusterUnionActor * __thiscall
AClusterUnionActor::AClusterUnionActor(AClusterUnionActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AClusterUnionActor__6B_;
  (this->ClusterUnion).field0_0x0.DebugPtr = (UClusterUnionComponent *)0x0;
  return this;
}

// AClusterUnionActor @ 14824dbb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AClusterUnionActor * __thiscall
AClusterUnionActor::AClusterUnionActor(AClusterUnionActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UClusterUnionComponent *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AClusterUnionActor__6B_;
  (this->ClusterUnion).field0_0x0.DebugPtr = (UClusterUnionComponent *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"ClusterUnion");
  FVar2 = *pFVar3;
  pUVar4 = UClusterUnionComponent::StaticClass();
  pUVar5 = (UClusterUnionComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UClusterUnionComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->ClusterUnion).field0_0x0.DebugPtr = pUVar5;
  AActor::SetRootComponent((AActor *)this,(USceneComponent *)pUVar5);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  *(undefined1 *)&this->_padding_ = 1;
  AActor::SetReplicatingMovement((AActor *)this,true);
  return this;
}

// ~AClusterUnionActor @ 148252720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AClusterUnionActor::~AClusterUnionActor(AClusterUnionActor *this)

{
  this->_padding_ = (longlong)&___7AClusterUnionActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14828bd30

UClass * __cdecl AClusterUnionActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AClusterUnionActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ClusterUnionActor",
               &Z_Registration_Info_UClass_AClusterUnionActor.InnerSingleton,
               StaticRegisterNativesAClusterUnionActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AClusterUnionActor>,
               InternalVTableHelperCtorCaller<AClusterUnionActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AClusterUnionActor.InnerSingleton;
}

// StaticRegisterNativesAClusterUnionActor @ 1482b1c80

void __cdecl AClusterUnionActor::StaticRegisterNativesAClusterUnionActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_AClusterUnionActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetClusterUnionComponent @ 1482c2160

void __cdecl
AClusterUnionActor::execGetClusterUnionComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x11].field_0x18;
  return;
}

