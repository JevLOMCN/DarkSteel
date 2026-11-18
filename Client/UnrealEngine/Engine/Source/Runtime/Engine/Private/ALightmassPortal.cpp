// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147285950

UClass * __cdecl ALightmassPortal::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALightmassPortal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightmassPortal",
               &Z_Registration_Info_UClass_ALightmassPortal.InnerSingleton,
               StaticRegisterNativesALightmassPortal,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALightmassPortal>,
               InternalVTableHelperCtorCaller<ALightmassPortal>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALightmassPortal.InnerSingleton;
}

// ALightmassPortal @ 14728b6e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALightmassPortal * __thiscall
ALightmassPortal::ALightmassPortal(ALightmassPortal *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ALightmassPortal__6B_;
  (this->PortalComponent).field0_0x0.DebugPtr = (ULightmassPortalComponent *)0x0;
  return this;
}

// ~ALightmassPortal @ 14728d1d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALightmassPortal::~ALightmassPortal(ALightmassPortal *this)

{
  this->_padding_ = (longlong)&___7ALightmassPortal__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14728f080

UClass * __cdecl ALightmassPortal::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALightmassPortal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightmassPortal",
               &Z_Registration_Info_UClass_ALightmassPortal.InnerSingleton,
               StaticRegisterNativesALightmassPortal,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALightmassPortal>,
               InternalVTableHelperCtorCaller<ALightmassPortal>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALightmassPortal.InnerSingleton;
}

// IsLevelBoundsRelevant @ 147290fb0

bool __thiscall ALightmassPortal::IsLevelBoundsRelevant(ALightmassPortal *this)

{
  return false;
}

// StaticRegisterNativesALightmassPortal @ 1472911e0

void __cdecl ALightmassPortal::StaticRegisterNativesALightmassPortal(void)

{
  return;
}

// ALightmassPortal @ 1478a59a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALightmassPortal * __thiscall
ALightmassPortal::ALightmassPortal(ALightmassPortal *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  longlong lVar3;
  TObjectPtr<ULightmassPortalComponent>_u_0 TVar4;
  FName *pFVar5;
  UClass *pUVar6;
  ULightmassPortalComponent *pUVar7;
  USceneComponent *this_00;
  FName local_res8;
  FName local_res18;
  TVector<double>_u_0 local_28;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ALightmassPortal__6B_;
  (this->PortalComponent).field0_0x0.DebugPtr = (ULightmassPortalComponent *)0x0;
  pFVar5 = ::FName::FName(&local_res8,L"PortalComponent");
  FVar2 = *pFVar5;
  pUVar6 = Z_Construct_UClass_ULightmassPortalComponent_NoRegister();
  pUVar7 = (ULightmassPortalComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar6,pUVar6,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (ULightmassPortalComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_28._s_0.X = ___xmm_40590000000000004024000000000000;
  local_28._s_0.Y = _UNK_1517cfc88;
  local_28._s_0.Z = __real_4059000000000000;
  (this->PortalComponent).field0_0x0.DebugPtr = pUVar7;
  USceneComponent::SetRelativeScale3D_Direct
            ((USceneComponent *)pUVar7,(TVector<double> *)&local_28._s_0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 = (this->PortalComponent).field0_0x0.DebugPtr,
     pUVar7 != (ULightmassPortalComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  this->_padding_ = (longlong)(this->PortalComponent).field0_0x0;
  pFVar5 = ::FName::FName(&local_res18,L"DrawBox0");
  FVar2 = *pFVar5;
  pUVar6 = Z_Construct_UClass_UBoxComponent_NoRegister();
  this_00 = (USceneComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar6,pUVar6,true,false);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            (this_00,(USceneComponent *)(this->PortalComponent).field0_0x0.DebugPtr,(FName)0x0);
  lVar3 = this_00->_padding_;
  pbVar1 = (byte *)((longlong)&this_00[1]._padding_ + 1);
  *pbVar1 = *pbVar1 | 0x10;
  (**(code **)(lVar3 + 0x788))(this_00,UCollisionProfile::NoCollision_ProfileName,1);
  this_00[2].PhysicsVolume.WeakPtr = (FWeakObjectPtr)0x3ff0000000000000;
  this_00[2].AttachParent.field0_0x0 = (TObjectPtr<USceneComponent>_u_0)0x3ff0000000000000;
  this_00[2].AttachSocketName.ComparisonIndex = 0;
  this_00[2].AttachSocketName.Number = 0x3ff00000;
  TVar4 = (this->PortalComponent).field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  *(USceneComponent **)((longlong)TVar4 + 0x250) = this_00;
  return this;
}

