// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b560f40

UClass * __cdecl ADS_PointLight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_PointLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PointLight",
               &Z_Registration_Info_UClass_ADS_PointLight.InnerSingleton,
               StaticRegisterNativesADS_PointLight,0x2e0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_PointLight>,
               InternalVTableHelperCtorCaller<ADS_PointLight>,local_res8,APointLight::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_PointLight.InnerSingleton;
}

// ADS_PointLight @ 14b563970

ADS_PointLight * __thiscall
ADS_PointLight::ADS_PointLight(ADS_PointLight *this,FVTableHelper *param_1)

{
  APointLight::APointLight((APointLight *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_PointLight__6B_;
  return this;
}

// ~ADS_PointLight @ 14b564d40

void __thiscall ADS_PointLight::~ADS_PointLight(ADS_PointLight *this)

{
  this->_padding_ = (longlong)&___7ADS_PointLight__6B_;
  APointLight::~APointLight((APointLight *)this);
  return;
}

// GetPrivateStaticClass @ 14b566f70

UClass * __cdecl ADS_PointLight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_PointLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PointLight",
               &Z_Registration_Info_UClass_ADS_PointLight.InnerSingleton,
               StaticRegisterNativesADS_PointLight,0x2e0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_PointLight>,
               InternalVTableHelperCtorCaller<ADS_PointLight>,local_res8,APointLight::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_PointLight.InnerSingleton;
}

// StaticRegisterNativesADS_PointLight @ 14b568020

void __cdecl ADS_PointLight::StaticRegisterNativesADS_PointLight(void)

{
  return;
}

// ADS_PointLight @ 14b998df0

ADS_PointLight * __thiscall
ADS_PointLight::ADS_PointLight(ADS_PointLight *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  APointLight::APointLight((APointLight *)this,pFVar2);
  this->UseTimeOfDay = 1;
  this->_padding_ = (longlong)&___7ADS_PointLight__6B_;
  puVar1 = (uint *)(this->_padding_ + 0x27c);
  *puVar1 = *puVar1 & 0xfffffffd;
  return this;
}

// BeginPlay @ 14b99b5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_PointLight::BeginPlay(ADS_PointLight *this)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  UWorld *pUVar4;
  ADS_PointLight *pAVar5;
  UClass *pUVar6;
  ADS_PointLight *pAVar7;
  UAutoDestroySubsystem *this_00;
  UFunction *pUVar8;
  undefined8 *puVar9;
  ADS_PointLight *pAVar10;
  undefined1 auStack_128 [32];
  ADS_PointLight *pAStack_108;
  undefined1 auStack_100 [8];
  ADS_PointLight **ppAStack_f8;
  undefined8 auStack_f0 [24];
  undefined8 *puStack_30;
  int iStack_28;
  undefined4 uStack_24;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStack_128;
  pAVar7 = (ADS_PointLight *)0x0;
  pAVar10 = (ADS_PointLight *)0x0;
  pAVar5 = this;
  if (this == (ADS_PointLight *)0x0) {
    pAVar5 = pAVar7;
  }
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar5);
  if ((bVar3) && (this != (ADS_PointLight *)0x0)) {
    pUVar4 = AActor::GetWorld((AActor *)this);
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar4);
    if (bVar3) {
      FObjectTrace::OutputObjectLifetimeBegin((UObject *)this);
    }
  }
  if ((this->_padding_ & 0x180000000000) != 0x80000000000) {
    pAStack_108 = this;
    `AActor::BeginPlay'::__l2::<lambda_1>::operator()(&pAStack_108);
  }
  (**(code **)(this->_padding_ + 0x400))(this,*(undefined4 *)((longlong)&this->_padding_ + 4));
  AActor::RegisterAllActorTickFunctions((AActor *)this,true,false);
  puStack_30 = (undefined8 *)0x0;
  uStack_24 = 0x18;
  iStack_28 = 0;
  pAVar5 = (ADS_PointLight *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar5 == (ADS_PointLight *)0x0) goto LAB_147385169;
  }
  else {
    pAVar10 = pAVar7;
    if (pAVar5 == (ADS_PointLight *)0x0) goto LAB_147385169;
    UE::GC::MarkAsReachable((UObject *)pAVar5);
  }
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  pAVar10 = pAVar7;
  if (pUVar6 != (UClass *)0x0) {
    iVar2 = (int)pUVar6->_padding_;
    if (((int)pAVar5->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pAVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pAVar10 = pAVar5;
    }
  }
LAB_147385169:
  pAVar7 = (ADS_PointLight *)Z_Construct_UClass_UActorComponent_NoRegister();
  pAStack_108 = pAVar5;
  if (pAVar10 == pAVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (ADS_PointLight *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_108,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)auStack_f0);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (ADS_PointLight *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_108,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)auStack_f0);
  }
  iVar2 = iStack_28;
  puVar9 = auStack_f0;
  if (puStack_30 != (undefined8 *)0x0) {
    puVar9 = puStack_30;
  }
  puVar1 = puVar9 + iStack_28;
  while( true ) {
    if (iStack_28 != iVar2) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_100);
    }
    if (puVar9 == puVar1) break;
    pAStack_108 = (ADS_PointLight *)*puVar9;
    if (((pAStack_108->_padding_ & 1) != 0) && ((pAStack_108->_padding_ & 0x20000000) == 0)) {
      UActorComponent::RegisterAllComponentTickFunctions((UActorComponent *)pAStack_108,true);
      (**(code **)(pAStack_108->_padding_ + 0x3f8))();
      if ((pAStack_108->_padding_ & 0x20000000) == 0) {
        ppAStack_f8 = &pAStack_108;
        `AActor::BeginPlay'::__l12::<lambda_2>::operator()(&ppAStack_f8);
      }
    }
    puVar9 = puVar9 + 1;
  }
  if ((((this->_padding_ & 0x20000) != 0) &&
      (pUVar4 = AActor::GetWorld((AActor *)this), pUVar4 != (UWorld *)0x0)) &&
     (this_00 = UWorld::GetSubsystem<UAutoDestroySubsystem>(pUVar4),
     this_00 != (UAutoDestroySubsystem *)0x0)) {
    UAutoDestroySubsystem::RegisterActor(this_00,(AActor *)this);
  }
  pUVar8 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveBeginPlay);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar8,0);
  *(byte *)((longlong)&this->_padding_ + 5) =
       *(byte *)((longlong)&this->_padding_ + 5) & 0xf7 | 0x10;
  if (puStack_30 != (undefined8 *)0x0) {
    FMemory::Free(puStack_30);
  }
  return;
}

// DayNightChanged @ 14b9a63a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_PointLight::DayNightChanged(ADS_PointLight *this,bool param_1)

{
  if (this->UseTimeOfDay == 0) {
    return;
  }
  if (!param_1) {
    USceneComponent::SetVisibility((USceneComponent *)this->_padding_,false,DirtyOnly);
    return;
  }
  USceneComponent::SetVisibility((USceneComponent *)this->_padding_,true,DirtyOnly);
  return;
}

// Destroyed @ 14b9a6df0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_PointLight::Destroyed(ADS_PointLight *this)

{
  uint *puVar1;
  bool bVar2;
  UWorld *this_00;
  
  if (this->_padding_ != 0) {
    puVar1 = (uint *)(this->_padding_ + 0x27c);
    *puVar1 = *puVar1 & 0xfffffffe;
    this_00 = AActor::GetWorld((AActor *)this);
    if (this_00 != (UWorld *)0x0) {
      bVar2 = UWorld::IsGameWorld(this_00);
      if (!bVar2) {
        (**(code **)(*(longlong *)this->_padding_ + 0x440))((longlong *)this->_padding_,1,0);
      }
    }
  }
  AActor::Destroyed((AActor *)this);
  return;
}

// PostLoad @ 14b9c0450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_PointLight::PostLoad(ADS_PointLight *this)

{
  ULightComponent *this_00;
  
  AActor::PostLoad((AActor *)this);
  this_00 = (ULightComponent *)this->_padding_;
  if ((this_00 != (ULightComponent *)0x0) && (*(char *)((longlong)&this_00->_padding_ + 3) == '\0'))
  {
    ULightComponent::ClearLightFunctionMaterial(this_00);
    return;
  }
  return;
}

// RegisterEvent @ 14b9c17a0

void __thiscall ADS_PointLight::RegisterEvent(ADS_PointLight *this)

{
  return;
}

// UnRegisterEvent @ 14b9c8090

void __thiscall ADS_PointLight::UnRegisterEvent(ADS_PointLight *this)

{
  return;
}

