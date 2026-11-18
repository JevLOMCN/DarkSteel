// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 8

// StaticClass @ 146dcaad0

UClass * __cdecl ANavMeshBoundsVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavMeshBoundsVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavMeshBoundsVolume",
               &Z_Registration_Info_UClass_ANavMeshBoundsVolume.InnerSingleton,
               StaticRegisterNativesANavMeshBoundsVolume,0x300,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANavMeshBoundsVolume>,
               InternalVTableHelperCtorCaller<ANavMeshBoundsVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavMeshBoundsVolume.InnerSingleton;
}

// ANavMeshBoundsVolume @ 146dd2930

ANavMeshBoundsVolume * __thiscall
ANavMeshBoundsVolume::ANavMeshBoundsVolume(ANavMeshBoundsVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&___7ANavMeshBoundsVolume__6B_;
  FNavAgentSelector::FNavAgentSelector(&this->SupportedAgents,0x7fffffff);
  return this;
}

// ANavMeshBoundsVolume @ 146dd2970

ANavMeshBoundsVolume * __thiscall
ANavMeshBoundsVolume::ANavMeshBoundsVolume(ANavMeshBoundsVolume *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&___7ANavMeshBoundsVolume__6B_;
  FNavAgentSelector::FNavAgentSelector(&this->SupportedAgents,0x7fffffff);
  (**(code **)(*(longlong *)this->_padding_ + 0x788))
            ((longlong *)this->_padding_,UCollisionProfile::NoCollision_ProfileName,1);
  *(undefined1 *)(this->_padding_ + 0x1ab) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffc8c8c8;
  (this->SupportedAgents).field0_0x0.PackedBits =
       (this->SupportedAgents).field0_0x0.PackedBits | 0x80000000;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  return this;
}

// ~ANavMeshBoundsVolume @ 146dd91f0

void __thiscall ANavMeshBoundsVolume::~ANavMeshBoundsVolume(ANavMeshBoundsVolume *this)

{
  this->_padding_ = (longlong)&___7ANavMeshBoundsVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  return;
}

// GetPrivateStaticClass @ 146e0e6c0

UClass * __cdecl ANavMeshBoundsVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavMeshBoundsVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavMeshBoundsVolume",
               &Z_Registration_Info_UClass_ANavMeshBoundsVolume.InnerSingleton,
               StaticRegisterNativesANavMeshBoundsVolume,0x300,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANavMeshBoundsVolume>,
               InternalVTableHelperCtorCaller<ANavMeshBoundsVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavMeshBoundsVolume.InnerSingleton;
}

// PostRegisterAllComponents @ 146e1c5d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavMeshBoundsVolume::PostRegisterAllComponents(ANavMeshBoundsVolume *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UNavigationSystemBase *pUVar4;
  
  AActor::PostRegisterAllComponents((AActor *)this);
  pUVar2 = AActor::GetWorld((AActor *)this);
  if (pUVar2 == (UWorld *)0x0) {
    return;
  }
  pUVar4 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar4 != (UNavigationSystemBase *)0x0) {
    pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_146e1c621;
  }
  pUVar4 = (UNavigationSystemBase *)0x0;
LAB_146e1c621:
  if ((pUVar4 != (UNavigationSystemBase *)0x0) && ((char)this->_padding_ == '\x03')) {
    (**(code **)(*(longlong *)pUVar4 + 0x418))(pUVar4,this);
  }
  return;
}

// PostUnregisterAllComponents @ 146e1c7e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavMeshBoundsVolume::PostUnregisterAllComponents(ANavMeshBoundsVolume *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UNavigationSystemBase *pUVar4;
  
  AActor::PostUnregisterAllComponents((AActor *)this);
  pUVar2 = AActor::GetWorld((AActor *)this);
  if (pUVar2 == (UWorld *)0x0) {
    return;
  }
  pUVar4 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar4 != (UNavigationSystemBase *)0x0) {
    pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_146e1c831;
  }
  pUVar4 = (UNavigationSystemBase *)0x0;
LAB_146e1c831:
  if ((pUVar4 != (UNavigationSystemBase *)0x0) && ((char)this->_padding_ == '\x03')) {
    (**(code **)(*(longlong *)pUVar4 + 0x420))(pUVar4,this);
  }
  return;
}

// StaticRegisterNativesANavMeshBoundsVolume @ 146e29db0

void __cdecl ANavMeshBoundsVolume::StaticRegisterNativesANavMeshBoundsVolume(void)

{
  return;
}

