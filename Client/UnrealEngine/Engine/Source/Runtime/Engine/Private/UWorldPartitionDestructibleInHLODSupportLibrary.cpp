// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 148a740d0

UClass * __cdecl UWorldPartitionDestructibleInHLODSupportLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionDestructibleInHLODSupportLibrary",
               &Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary.
                InnerSingleton,StaticRegisterNativesUWorldPartitionDestructibleInHLODSupportLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionDestructibleInHLODSupportLibrary>,
               InternalVTableHelperCtorCaller<UWorldPartitionDestructibleInHLODSupportLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary.InnerSingleton;
}

// UWorldPartitionDestructibleInHLODSupportLibrary @ 148a80170

UWorldPartitionDestructibleInHLODSupportLibrary * __thiscall
UWorldPartitionDestructibleInHLODSupportLibrary::UWorldPartitionDestructibleInHLODSupportLibrary
          (UWorldPartitionDestructibleInHLODSupportLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionDestructibleInHLODSupportLibrary__6B_;
  return this;
}

// UWorldPartitionDestructibleInHLODSupportLibrary @ 148a801a0

UWorldPartitionDestructibleInHLODSupportLibrary * __thiscall
UWorldPartitionDestructibleInHLODSupportLibrary::UWorldPartitionDestructibleInHLODSupportLibrary
          (UWorldPartitionDestructibleInHLODSupportLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionDestructibleInHLODSupportLibrary__6B_;
  return this;
}

// ~UWorldPartitionDestructibleInHLODSupportLibrary @ 148a81b50

void __thiscall
UWorldPartitionDestructibleInHLODSupportLibrary::~UWorldPartitionDestructibleInHLODSupportLibrary
          (UWorldPartitionDestructibleInHLODSupportLibrary *this)

{
  *(undefined ***)this = &___7UWorldPartitionDestructibleInHLODSupportLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// DamageInHLOD @ 148a8ce50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __cdecl
UWorldPartitionDestructibleInHLODSupportLibrary::DamageInHLOD
          (TScriptInterface<IWorldPartitionDestructibleInHLODInterface> *param_1,float param_2)

{
  bool bVar1;
  AActor *this;
  UWorld *this_00;
  TObjectPtr<UWorldPartitionDestructibleHLODComponent>_u_0 local_28;
  int local_20;
  
  this = CastChecked<AActor,UObject>(*(UObject **)param_1);
  this_00 = AActor::GetWorld(this);
  if (this_00 != (UWorld *)0x0) {
    bVar1 = UWorld::IsGameWorld(this_00);
    if ((bVar1) && ((this->Role).Value == '\x03')) {
      ::`anonymous_namespace'::GetDestructionTagForActor
                ((FWorldPartitionHLODDestructionTag *)&local_28.ObjectPtr,this);
      if ((local_28.DebugPtr != (UWorldPartitionDestructibleHLODComponent *)0x0) && (local_20 != -1)
         ) {
        UWorldPartitionDestructibleHLODComponent::DamageActor(local_28.DebugPtr,local_20,param_2);
      }
    }
  }
  return;
}

// DestroyInHLOD @ 148a8d570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __cdecl
UWorldPartitionDestructibleInHLODSupportLibrary::DestroyInHLOD
          (TScriptInterface<IWorldPartitionDestructibleInHLODInterface> *param_1)

{
  bool bVar1;
  AActor *this;
  UWorld *this_00;
  TObjectPtr<UWorldPartitionDestructibleHLODComponent>_u_0 local_18;
  int local_10;
  
  this = CastChecked<AActor,UObject>(*(UObject **)param_1);
  this_00 = AActor::GetWorld(this);
  if (this_00 != (UWorld *)0x0) {
    bVar1 = UWorld::IsGameWorld(this_00);
    if ((bVar1) && ((this->Role).Value == '\x03')) {
      ::`anonymous_namespace'::GetDestructionTagForActor
                ((FWorldPartitionHLODDestructionTag *)&local_18.ObjectPtr,this);
      if ((local_18.DebugPtr != (UWorldPartitionDestructibleHLODComponent *)0x0) && (local_10 != -1)
         ) {
        UWorldPartitionDestructibleHLODComponent::DestroyActor(local_18.DebugPtr,local_10);
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 148a96770

UClass * __cdecl UWorldPartitionDestructibleInHLODSupportLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionDestructibleInHLODSupportLibrary",
               &Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary.
                InnerSingleton,StaticRegisterNativesUWorldPartitionDestructibleInHLODSupportLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionDestructibleInHLODSupportLibrary>,
               InternalVTableHelperCtorCaller<UWorldPartitionDestructibleInHLODSupportLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionDestructibleInHLODSupportLibrary @ 148aa2a40

void __cdecl
UWorldPartitionDestructibleInHLODSupportLibrary::
StaticRegisterNativesUWorldPartitionDestructibleInHLODSupportLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr =
       Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDamageInHLOD @ 148aa5b00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __cdecl
UWorldPartitionDestructibleInHLODSupportLibrary::execDamageInHLOD
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  AActor *this;
  UWorld *this_00;
  uchar *puVar4;
  float local_res10 [2];
  uchar local_48 [16];
  TObjectPtr<UWorldPartitionDestructibleHLODComponent>_u_0 local_38;
  int local_30;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_res10[0] = 0.0;
  puVar4 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = CastChecked<AActor,UObject>(*(UObject **)puVar4);
  this_00 = AActor::GetWorld(this);
  if (this_00 != (UWorld *)0x0) {
    bVar3 = UWorld::IsGameWorld(this_00);
    if ((bVar3) && ((this->Role).Value == '\x03')) {
      ::`anonymous_namespace'::GetDestructionTagForActor
                ((FWorldPartitionHLODDestructionTag *)&local_38.ObjectPtr,this);
      if ((local_38.DebugPtr != (UWorldPartitionDestructibleHLODComponent *)0x0) && (local_30 != -1)
         ) {
        UWorldPartitionDestructibleHLODComponent::DamageActor(local_38.DebugPtr,local_30,fVar2);
      }
    }
  }
  return;
}

// execDestroyInHLOD @ 148aa5c40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __cdecl
UWorldPartitionDestructibleInHLODSupportLibrary::execDestroyInHLOD
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  AActor *this;
  UWorld *this_00;
  uchar *puVar3;
  uchar local_28 [16];
  TObjectPtr<UWorldPartitionDestructibleHLODComponent>_u_0 local_18;
  int local_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar3 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = CastChecked<AActor,UObject>(*(UObject **)puVar3);
  this_00 = AActor::GetWorld(this);
  if (this_00 != (UWorld *)0x0) {
    bVar2 = UWorld::IsGameWorld(this_00);
    if ((bVar2) && ((this->Role).Value == '\x03')) {
      ::`anonymous_namespace'::GetDestructionTagForActor
                ((FWorldPartitionHLODDestructionTag *)&local_18.ObjectPtr,this);
      if ((local_18.DebugPtr != (UWorldPartitionDestructibleHLODComponent *)0x0) && (local_10 != -1)
         ) {
        UWorldPartitionDestructibleHLODComponent::DestroyActor(local_18.DebugPtr,local_10);
      }
    }
  }
  return;
}

