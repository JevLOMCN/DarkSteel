// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b591c70

UClass * __cdecl ADS_SkillGuideActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_SkillGuideActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillGuideActor",
               &Z_Registration_Info_UClass_ADS_SkillGuideActor.InnerSingleton,
               StaticRegisterNativesADS_SkillGuideActor,0x2e8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_SkillGuideActor>,
               InternalVTableHelperCtorCaller<ADS_SkillGuideActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_SkillGuideActor.InnerSingleton;
}

// ADS_SkillGuideActor @ 14b593eb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

ADS_SkillGuideActor * __thiscall
ADS_SkillGuideActor::ADS_SkillGuideActor(ADS_SkillGuideActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_SkillGuideActor__6B_;
  (this->InsideNSFileName).ComparisonIndex = 0;
  (this->InsideNSFileName).Number = 0;
  this->ElapsedTime = 0.0;
  this->ScalingTime = 0.0;
  this->AliveTime = 0.0;
  this->bEffectLoaded = false;
  this->fEffectLoadStartTime = 0.0;
  return this;
}

// ~ADS_SkillGuideActor @ 14b594e70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ADS_SkillGuideActor::~ADS_SkillGuideActor(ADS_SkillGuideActor *this)

{
  this->_padding_ = (longlong)&___7ADS_SkillGuideActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b596af0

UClass * __cdecl ADS_SkillGuideActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_SkillGuideActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillGuideActor",
               &Z_Registration_Info_UClass_ADS_SkillGuideActor.InnerSingleton,
               StaticRegisterNativesADS_SkillGuideActor,0x2e8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_SkillGuideActor>,
               InternalVTableHelperCtorCaller<ADS_SkillGuideActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_SkillGuideActor.InnerSingleton;
}

// StaticRegisterNativesADS_SkillGuideActor @ 14b597810

void __cdecl ADS_SkillGuideActor::StaticRegisterNativesADS_SkillGuideActor(void)

{
  return;
}

// ADS_SkillGuideActor @ 14b9990e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

ADS_SkillGuideActor * __thiscall ADS_SkillGuideActor::ADS_SkillGuideActor(ADS_SkillGuideActor *this)

{
  byte *pbVar1;
  
  AActor::AActor((AActor *)this);
  this->_padding_ = (longlong)&___7ADS_SkillGuideActor__6B_;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  (this->InsideNSFileName).ComparisonIndex = 0;
  (this->InsideNSFileName).Number = 0;
  this->ElapsedTime = 0.0;
  this->ScalingTime = 0.0;
  this->AliveTime = 0.0;
  this->bEffectLoaded = false;
  this->fEffectLoadStartTime = 0.0;
  return this;
}

// BeginPlay @ 14b99b890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ADS_SkillGuideActor::BeginPlay(ADS_SkillGuideActor *this)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  UWorld *pUVar4;
  ADS_SkillGuideActor *pAVar5;
  UClass *pUVar6;
  ADS_SkillGuideActor *pAVar7;
  UAutoDestroySubsystem *this_00;
  UFunction *pUVar8;
  undefined8 *puVar9;
  ADS_SkillGuideActor *pAVar10;
  undefined1 auStack_128 [32];
  ADS_SkillGuideActor *pAStack_108;
  undefined1 auStack_100 [8];
  ADS_SkillGuideActor **ppAStack_f8;
  undefined8 auStack_f0 [24];
  undefined8 *puStack_30;
  int iStack_28;
  undefined4 uStack_24;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStack_128;
  pAVar7 = (ADS_SkillGuideActor *)0x0;
  pAVar10 = (ADS_SkillGuideActor *)0x0;
  pAVar5 = this;
  if (this == (ADS_SkillGuideActor *)0x0) {
    pAVar5 = pAVar7;
  }
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar5);
  if ((bVar3) && (this != (ADS_SkillGuideActor *)0x0)) {
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
  pAVar5 = (ADS_SkillGuideActor *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar5 == (ADS_SkillGuideActor *)0x0) goto LAB_147385169;
  }
  else {
    pAVar10 = pAVar7;
    if (pAVar5 == (ADS_SkillGuideActor *)0x0) goto LAB_147385169;
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
  pAVar7 = (ADS_SkillGuideActor *)Z_Construct_UClass_UActorComponent_NoRegister();
  pAStack_108 = pAVar5;
  if (pAVar10 == pAVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar5 != (ADS_SkillGuideActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_108,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)auStack_f0);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar5 != (ADS_SkillGuideActor *)0x0)) {
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
    pAStack_108 = (ADS_SkillGuideActor *)*puVar9;
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

// Clear @ 14b99ca90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ADS_SkillGuideActor::Clear(ADS_SkillGuideActor *this)

{
  UNiagaraComponent *pUVar1;
  
  this->ElapsedTime = 0.0;
  this->ScalingTime = 0.0;
  this->AliveTime = 0.0;
  this->bEffectLoaded = false;
  this->fEffectLoadStartTime = 0.0;
  pUVar1 = this->NSGuideDecal;
  if (pUVar1 != (UNiagaraComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x4a0))(pUVar1,0);
    this->NSGuideDecal = (UNiagaraComponent *)0x0;
  }
  return;
}

// EndPlay @ 14b9a7780

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ADS_SkillGuideActor::EndPlay(ADS_SkillGuideActor *this,Type param_1)

{
  UNiagaraComponent *pUVar1;
  
  AActor::EndPlay((AActor *)this,param_1);
  pUVar1 = this->NSGuideDecal;
  this->ElapsedTime = 0.0;
  this->ScalingTime = 0.0;
  this->AliveTime = 0.0;
  this->bEffectLoaded = false;
  this->fEffectLoadStartTime = 0.0;
  if (pUVar1 != (UNiagaraComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x4a0))(pUVar1,0);
    this->NSGuideDecal = (UNiagaraComponent *)0x0;
  }
  return;
}

// OnSpawnCompleteGuideEffect @ 14b9bec40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
ADS_SkillGuideActor::OnSpawnCompleteGuideEffect
          (ADS_SkillGuideActor *this,FDS_EffectSpawnCompleteInfo param_1,FDS_SkillGuideInfo *param_2
          ,EDS_GuideColorType param_3)

{
  byte *pbVar1;
  double dVar2;
  EDS_SkillGuideType EVar3;
  FDS_SkillGuideTableRow *pFVar4;
  UDS_LogManager *pUVar5;
  FName *pFVar6;
  UNiagaraComponent *pUVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStackY_1f8 [32];
  FName local_1b8 [2];
  TVector<double>_u_0 local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  fVar9 = param_2->GuideEffectAliveTime;
  dVar2 = this->fEffectLoadStartTime;
  this->bEffectLoaded = true;
  dVar8 = DS_Util::GetRealTimeSeconds();
  this->NSGuideDecal = param_1.NiagaraComponent;
  fVar10 = param_2->GuideEffectScalingTime;
  fVar9 = (float)((double)fVar9 - (dVar8 - dVar2));
  this->AliveTime = fVar9;
  if (fVar9 <= fVar10) {
    fVar10 = fVar9;
  }
  this->ScalingTime = fVar10;
  if (param_1.NiagaraComponent == (UNiagaraComponent *)0x0) {
    return;
  }
  pFVar4 = FDS_SkillGuideTableRow::Get((longlong)param_2->ID_SkillGuide,true);
  if (pFVar4 == (FDS_SkillGuideTableRow *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_188._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_188,"ADS_SkillGuideActor::OnSpawnCompleteGuideEffect",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_188.Ptr,0x9a,
                 L"SkillGuideActor skillGuideTable is nullptr. ID_SkillGuide : %d");
      if ((void *)local_188._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_188._padding_);
      }
    }
    (**(code **)(this->NSGuideDecal->_padding_ + 0x4a0))(this->NSGuideDecal,0);
    this->NSGuideDecal = (UNiagaraComponent *)0x0;
    return;
  }
  EVar3 = pFVar4->SkillGuideType;
  fVar10 = 0.0;
  fVar9 = 0.0;
  if ((EVar3 == SectorGuide) || (EVar3 == CircleGuide)) {
    fVar10 = param_2->AttackDistanceMax * __real_3fa00000;
    fVar11 = fVar10;
  }
  else if (EVar3 == DirectGuide) {
    fVar10 = param_2->AttackWidth - param_2->AttackWidth * __real_3e800000;
    fVar11 = param_2->AttackDistanceMax * __real_3fa00000;
  }
  else {
    fVar11 = 0.0;
    if (EVar3 == CrossGuide) {
      fVar10 = param_2->AttackDistanceMax * __real_3f866666;
      fVar9 = (param_2->AttackWidth / fVar10) * __real_3f000000;
      fVar11 = fVar10;
    }
  }
  pUVar7 = this->NSGuideDecal;
  pFVar6 = ::FName::FName(local_1b8,L"User_DecalSize");
  local_1a8._s_0.X = __real_4072c00000000000;
  local_1a8._s_0.Y = (double)(fVar10 + fVar10);
  local_1a8._s_0.Z = (double)(fVar11 + fVar11);
  UNiagaraComponent::SetVariableVec3(pUVar7,*pFVar6,(TVector<double> *)&local_1a8._s_0);
  pbVar1 = (byte *)((longlong)&this->NSGuideDecal->_padding_ + 6);
  *pbVar1 = *pbVar1 & 0xbf;
  EVar3 = pFVar4->SkillGuideType;
  if (EVar3 == SectorGuide) {
    ::FName::FName(local_1b8,L"User_InsideRadius");
    pUVar7 = this->NSGuideDecal;
    this->InsideNSFileName = local_1b8[0];
    pFVar6 = ::FName::FName(local_1b8,"User_Angle");
    fVar9 = (float)param_2->AttackAngle * __real_3f000000 + __real_3f800000;
  }
  else {
    if (EVar3 == CircleGuide) {
      ::FName::FName(local_1b8,L"User_FillAmount");
      this->InsideNSFileName = local_1b8[0];
      goto LAB_14b9bef8c;
    }
    if (EVar3 == DirectGuide) {
      ::FName::FName(local_1b8,L"User_Inside_Line");
      this->InsideNSFileName = local_1b8[0];
      goto LAB_14b9bef8c;
    }
    if (EVar3 != CrossGuide) goto LAB_14b9bef8c;
    ::FName::FName(local_1b8,L"insideLine");
    pUVar7 = this->NSGuideDecal;
    this->InsideNSFileName = local_1b8[0];
    pFVar6 = ::FName::FName(local_1b8,"SizeX");
    UNiagaraComponent::SetVariableFloat(pUVar7,*pFVar6,fVar9);
    pUVar7 = this->NSGuideDecal;
    pFVar6 = ::FName::FName(local_1b8,"SizeY");
  }
  UNiagaraComponent::SetVariableFloat(pUVar7,*pFVar6,fVar9);
LAB_14b9bef8c:
  UNiagaraComponent::SetVariableFloat(this->NSGuideDecal,this->InsideNSFileName,0.0);
  UpdateNSColor(this,pFVar4,param_3);
  return;
}

// PlaySkillGuide @ 14b9c0060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
ADS_SkillGuideActor::PlaySkillGuide
          (ADS_SkillGuideActor *this,FDS_SkillGuideInfo *param_1,TVector<double> *param_2,
          TRotator<double> *param_3,EDS_GuideColorType param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  FDS_SkillGuideTableRow *pFVar7;
  UDS_LogManager *pUVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined1 auStackY_328 [32];
  uint uVar11;
  wchar_t *pwVar12;
  ADS_SkillGuideActor *local_2e8;
  TVector<double>_u_0 local_2e0;
  FDelegateAllocation *local_2c8;
  TVector<double>_u_0 local_2b8;
  TRotator<double> local_298;
  undefined1 local_278 [192];
  undefined1 local_1b8 [8];
  FDelegateAllocation local_1b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_198;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_328;
  if (param_1->ID_SkillGuide == 0) {
    return;
  }
  if (param_1->GuideEffectAliveTime <= 0.0) {
    return;
  }
  pFVar7 = FDS_SkillGuideTableRow::Get((longlong)param_1->ID_SkillGuide,true);
  if (pFVar7 == (FDS_SkillGuideTableRow *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_198._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_198,"ADS_SkillGuideActor::PlaySkillGuide",0x23,Yes);
    pwVar12 = L"SkillGuideActor skillGuideTable is nullptr. (ID_SkillGuide : %d)";
    uVar11 = 0x67;
  }
  else {
    if (pFVar7->SkillGuideType != None) {
      local_298.Pitch = param_3->Pitch;
      local_298.Yaw = param_3->Yaw;
      this->bEffectLoaded = false;
      local_298.Roll = param_3->Roll;
      local_298.Yaw = (double)param_1->RotationOffset + local_298.Yaw;
      local_2b8._s_0.X = (param_1->LocationOffset).field0_0x0._s_0.X;
      local_2b8._s_0.Y = (param_1->LocationOffset).field0_0x0._s_0.Y;
      local_2b8._s_0.Z = (param_1->LocationOffset).field0_0x0._s_0.Z;
      UE::Math::TRotator<double>::RotateVector
                (&local_298,(TVector<double> *)&local_2e0._s_0,(TVector<double> *)&local_2b8._s_0);
      dVar6 = (double)CONCAT71(local_2e0._17_7_,local_2e0._16_1_);
      dVar1 = (param_2->field0_0x0)._s_0.X;
      dVar3 = local_2e0._s_0.Y + (param_2->field0_0x0)._s_0.Y;
      dVar2 = (param_2->field0_0x0)._s_0.Z;
      dVar4 = param_3->Yaw - __real_4056800000000000;
      FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_278);
      local_278._0_4_ = pFVar7->ID_GuideEffect;
      local_2e8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_278 + 0x28),(FObjectPtr)&local_2e8);
      local_278._96_8_ = 0.0;
      local_278._112_8_ = 0.0;
      local_278._72_8_ = local_2e0._s_0.X + dVar1;
      local_278._80_8_ = dVar3;
      local_278._88_8_ = dVar6 + dVar2;
      local_278._104_8_ = dVar4;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
                 (FWriteAccessScope *)&local_2e0._s_0);
      local_2c8 = &local_1b0;
      puVar9 = UE::Core::Private::DelegateAllocate(0x68,&local_1b0);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy__UFDS_SkillGuideInfo__W4EDS_GuideColorType____6B_
        ;
        uVar5 = *(undefined8 *)&param_1->StartTime;
        puVar9[1] = *(undefined8 *)param_1;
        puVar9[2] = uVar5;
        dVar1 = (param_1->LocationOffset).field0_0x0._s_0.X;
        puVar9[3] = *(undefined8 *)&param_1->AttackDistanceMax;
        puVar9[4] = dVar1;
        dVar1 = (param_1->LocationOffset).field0_0x0._s_0.Z;
        puVar9[5] = (param_1->LocationOffset).field0_0x0._s_0.Y;
        puVar9[6] = dVar1;
        uVar5 = *(undefined8 *)&param_1->GuideEffectAliveTime;
        puVar9[7] = *(undefined8 *)&param_1->RotationOffset;
        puVar9[8] = uVar5;
        *(EDS_GuideColorType *)(puVar9 + 9) = param_4;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[10] = uVar10;
        *puVar9 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_SkillGuideActor____A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy__UFDS_SkillGuideInfo__W4EDS_GuideColorType____6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar9[0xb] = 0;
        local_2e8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 0xb),(FObjectPtr)&local_2e8);
        puVar9[0xc] = OnSpawnCompleteGuideEffect;
      }
      if (local_2e0._16_1_ == '\0') {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_2e0._s_0.Y,
                   (FDestructionSentinel *)&local_2e0._s_0);
      }
      UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_278);
      this->ScalingTime = param_1->GuideEffectScalingTime;
      dVar1 = DS_Util::GetRealTimeSeconds();
      this->fEffectLoadStartTime = dVar1;
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b8);
      if (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_1b0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_278._184_8_);
      goto LAB_14b9c03ed;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_198._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_198,"ADS_SkillGuideActor::PlaySkillGuide",0x23,Yes);
    pwVar12 = L"SkillGuideActor SkillGuideType is none. (ID_SkillGuid: %d)";
    uVar11 = 0x6d;
  }
  UDS_LogManager::PrintLog(pUVar8,1,Warning,local_198.Ptr,uVar11,pwVar12);
  local_278._24_8_ = local_198._padding_;
LAB_14b9c03ed:
  if ((FScriptContainerElement *)local_278._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_278._24_8_);
  }
  return;
}

// Tick @ 14b9c7920

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ADS_SkillGuideActor::Tick(ADS_SkillGuideActor *this,float param_1)

{
  float fVar1;
  
  AActor::Tick((AActor *)this,param_1);
  if (this->bEffectLoaded != false) {
    fVar1 = param_1 + this->ElapsedTime;
    this->ElapsedTime = fVar1;
    if (this->AliveTime <= fVar1 && fVar1 != this->AliveTime) {
      AActor::Destroy((AActor *)this,false,true);
      return;
    }
    if (this->NSGuideDecal != (UNiagaraComponent *)0x0) {
      fVar1 = fVar1 / this->ScalingTime;
      if (__real_3f800000 <= fVar1) {
        fVar1 = __real_3f800000;
      }
      UNiagaraComponent::SetVariableFloat(this->NSGuideDecal,this->InsideNSFileName,fVar1);
    }
  }
  return;
}

// UpdateNSColor @ 14b9c9170

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
ADS_SkillGuideActor::UpdateNSColor
          (ADS_SkillGuideActor *this,FDS_SkillGuideTableRow *param_1,EDS_GuideColorType param_2)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  UNiagaraComponent *pUVar6;
  FLinearColor_u_0 *pFVar7;
  FName local_res8;
  FName local_res20;
  FLinearColor_u_0 local_118;
  FLinearColor_u_0 local_108;
  FLinearColor_u_0 local_f8;
  FLinearColor_u_0 local_e8;
  FLinearColor_u_0 local_d8;
  FLinearColor_u_0 local_c8;
  FLinearColor_u_0 local_b8;
  FLinearColor_u_0 local_a8;
  FLinearColor_u_0 local_98;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [8];
  
  if ((this->NSGuideDecal != (UNiagaraComponent *)0x0) && (param_1 != (FDS_SkillGuideTableRow *)0x0)
     ) {
    if (param_2 == MySelf) {
      if (((param_1->Ally_GuideColor1).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)(param_1->Ally_GuideColor1).AllocatorInstance.Data;
      if (((param_1->Ally_GuideColor1).ArrayNum < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar2 = *(float *)((param_1->Ally_GuideColor1).AllocatorInstance.Data + 4);
      if (((param_1->Ally_GuideColor1).ArrayNum < 3) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar6 = this->NSGuideDecal;
      local_b8._s_0.B =
           (float)*(undefined4 *)((param_1->Ally_GuideColor1).AllocatorInstance.Data + 8);
      local_b8._s_0.A = (float)local_res8.ComparisonIndex.Value;
      local_b8._s_0.R = fVar1;
      local_b8._s_0.G = fVar2;
      pFVar5 = ::FName::FName(&local_68,"User_Circle_Inside");
      UNiagaraComponent::SetVariableLinearColor(pUVar6,*pFVar5,(FLinearColor *)&local_b8._s_0);
      if (((param_1->Ally_GuideColor2).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)(param_1->Ally_GuideColor2).AllocatorInstance.Data;
      if (((param_1->Ally_GuideColor2).ArrayNum < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar2 = *(float *)((param_1->Ally_GuideColor2).AllocatorInstance.Data + 4);
      if (((param_1->Ally_GuideColor2).ArrayNum < 3) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar6 = this->NSGuideDecal;
      local_a8._s_0.B =
           (float)*(undefined4 *)((param_1->Ally_GuideColor2).AllocatorInstance.Data + 8);
      local_a8._s_0.A = (float)local_res8.ComparisonIndex.Value;
      local_a8._s_0.R = fVar1;
      local_a8._s_0.G = fVar2;
      pFVar5 = ::FName::FName(&local_60,"User_Circle_OutSide");
      UNiagaraComponent::SetVariableLinearColor(pUVar6,*pFVar5,(FLinearColor *)&local_a8._s_0);
      if (((param_1->Ally_GuideColor3).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)(param_1->Ally_GuideColor3).AllocatorInstance.Data;
      if (((param_1->Ally_GuideColor3).ArrayNum < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar2 = *(float *)((param_1->Ally_GuideColor3).AllocatorInstance.Data + 4);
      if (((param_1->Ally_GuideColor3).ArrayNum < 3) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar6 = this->NSGuideDecal;
      local_98._s_0.B =
           (float)*(undefined4 *)((param_1->Ally_GuideColor3).AllocatorInstance.Data + 8);
      local_98._s_0.A = (float)local_res8.ComparisonIndex.Value;
      local_98._s_0.R = fVar1;
      local_98._s_0.G = fVar2;
      pFVar5 = ::FName::FName(local_58,"User_TexThird_Color");
      pFVar7 = &local_98;
    }
    else if (param_2 == Enemy) {
      if (((param_1->Enemy_GuideColor1).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)(param_1->Enemy_GuideColor1).AllocatorInstance.Data;
      if (((param_1->Enemy_GuideColor1).ArrayNum < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar2 = *(float *)((param_1->Enemy_GuideColor1).AllocatorInstance.Data + 4);
      if (((param_1->Enemy_GuideColor1).ArrayNum < 3) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar6 = this->NSGuideDecal;
      local_e8._s_0.B =
           (float)*(undefined4 *)((param_1->Enemy_GuideColor1).AllocatorInstance.Data + 8);
      local_e8._s_0.A = (float)local_res8.ComparisonIndex.Value;
      local_e8._s_0.R = fVar1;
      local_e8._s_0.G = fVar2;
      pFVar5 = ::FName::FName(&local_80,"User_Circle_Inside");
      UNiagaraComponent::SetVariableLinearColor(pUVar6,*pFVar5,(FLinearColor *)&local_e8._s_0);
      if (((param_1->Enemy_GuideColor2).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)(param_1->Enemy_GuideColor2).AllocatorInstance.Data;
      if (((param_1->Enemy_GuideColor2).ArrayNum < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar2 = *(float *)((param_1->Enemy_GuideColor2).AllocatorInstance.Data + 4);
      if (((param_1->Enemy_GuideColor2).ArrayNum < 3) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar6 = this->NSGuideDecal;
      local_d8._s_0.B =
           (float)*(undefined4 *)((param_1->Enemy_GuideColor2).AllocatorInstance.Data + 8);
      local_d8._s_0.A = (float)local_res8.ComparisonIndex.Value;
      local_d8._s_0.R = fVar1;
      local_d8._s_0.G = fVar2;
      pFVar5 = ::FName::FName(&local_78,"User_Circle_OutSide");
      UNiagaraComponent::SetVariableLinearColor(pUVar6,*pFVar5,(FLinearColor *)&local_d8._s_0);
      if (((param_1->Enemy_GuideColor3).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)(param_1->Enemy_GuideColor3).AllocatorInstance.Data;
      if (((param_1->Enemy_GuideColor3).ArrayNum < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar2 = *(float *)((param_1->Enemy_GuideColor3).AllocatorInstance.Data + 4);
      if (((param_1->Enemy_GuideColor3).ArrayNum < 3) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar6 = this->NSGuideDecal;
      local_c8._s_0.B =
           (float)*(undefined4 *)((param_1->Enemy_GuideColor3).AllocatorInstance.Data + 8);
      local_c8._s_0.A = (float)local_res8.ComparisonIndex.Value;
      local_c8._s_0.R = fVar1;
      local_c8._s_0.G = fVar2;
      pFVar5 = ::FName::FName(&local_70,"User_TexThird_Color");
      pFVar7 = &local_c8;
    }
    else {
      if (param_2 != Ally) {
        return;
      }
      if (((param_1->Ally_GuideColor1).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)(param_1->Ally_GuideColor1).AllocatorInstance.Data;
      if (((param_1->Ally_GuideColor1).ArrayNum < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar2 = *(float *)((param_1->Ally_GuideColor1).AllocatorInstance.Data + 4);
      if (((param_1->Ally_GuideColor1).ArrayNum < 3) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar6 = this->NSGuideDecal;
      local_118._s_0.B =
           (float)*(undefined4 *)((param_1->Ally_GuideColor1).AllocatorInstance.Data + 8);
      local_118._s_0.A = (float)local_res8.ComparisonIndex.Value;
      local_118._s_0.R = fVar1;
      local_118._s_0.G = fVar2;
      pFVar5 = ::FName::FName(&local_res8,"User_Circle_Inside");
      UNiagaraComponent::SetVariableLinearColor(pUVar6,*pFVar5,(FLinearColor *)&local_118._s_0);
      if (((param_1->Ally_GuideColor2).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)(param_1->Ally_GuideColor2).AllocatorInstance.Data;
      if (((param_1->Ally_GuideColor2).ArrayNum < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar2 = *(float *)((param_1->Ally_GuideColor2).AllocatorInstance.Data + 4);
      if (((param_1->Ally_GuideColor2).ArrayNum < 3) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar6 = this->NSGuideDecal;
      local_108._s_0.B =
           (float)*(undefined4 *)((param_1->Ally_GuideColor2).AllocatorInstance.Data + 8);
      local_108._s_0.A = (float)local_res8.ComparisonIndex.Value;
      local_108._s_0.R = fVar1;
      local_108._s_0.G = fVar2;
      pFVar5 = ::FName::FName(&local_res20,"User_Circle_OutSide");
      UNiagaraComponent::SetVariableLinearColor(pUVar6,*pFVar5,(FLinearColor *)&local_108._s_0);
      if (((param_1->Ally_GuideColor3).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)(param_1->Ally_GuideColor3).AllocatorInstance.Data;
      if (((param_1->Ally_GuideColor3).ArrayNum < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar2 = *(float *)((param_1->Ally_GuideColor3).AllocatorInstance.Data + 4);
      if (((param_1->Ally_GuideColor3).ArrayNum < 3) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar6 = this->NSGuideDecal;
      local_f8._s_0.B =
           (float)*(undefined4 *)((param_1->Ally_GuideColor3).AllocatorInstance.Data + 8);
      local_f8._s_0.A = (float)local_res8.ComparisonIndex.Value;
      local_f8._s_0.R = fVar1;
      local_f8._s_0.G = fVar2;
      pFVar5 = ::FName::FName(&local_88,"User_TexThird_Color");
      pFVar7 = &local_f8;
    }
    UNiagaraComponent::SetVariableLinearColor(pUVar6,*pFVar5,(FLinearColor *)&pFVar7->_s_0);
  }
  return;
}

