// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 34

// StaticClass @ 14907d970

UClass * __cdecl UNiagaraDataInterfaceAudioPlayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceAudioPlayer",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayer.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceAudioPlayer,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceAudioPlayer>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceAudioPlayer>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayer.InnerSingleton;
}

// UNiagaraDataInterfaceAudioPlayer @ 1490b3ca0

UNiagaraDataInterfaceAudioPlayer * __thiscall
UNiagaraDataInterfaceAudioPlayer::UNiagaraDataInterfaceAudioPlayer
          (UNiagaraDataInterfaceAudioPlayer *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,param_1);
  this->_padding_ = 0;
  (this->SoundToPlay).field0_0x0.DebugPtr = (USoundBase *)0x0;
  (this->Attenuation).field0_0x0.DebugPtr = (USoundAttenuation *)0x0;
  (this->Concurrency).field0_0x0.DebugPtr = (USoundConcurrency *)0x0;
  (this->ParameterNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterNames).ArrayNum = 0;
  (this->ParameterNames).ArrayMax = 0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAudioPlayer__6B_;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->ConfigurationUserParameter);
  this->bStopWhenComponentIsDestroyed = true;
  this->bAllowLoopingOneShotSounds = false;
  return this;
}

// UNiagaraDataInterfaceAudioPlayer @ 1490b3d00

UNiagaraDataInterfaceAudioPlayer * __thiscall
UNiagaraDataInterfaceAudioPlayer::UNiagaraDataInterfaceAudioPlayer
          (UNiagaraDataInterfaceAudioPlayer *this,FObjectInitializer *param_1)

{
  int iVar1;
  FObjectInitializer *pFVar2;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  pFVar2 = FObjectInitializer::Get();
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,pFVar2);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAudioPlayer__6B_;
  this->_padding_ = 0;
  (this->SoundToPlay).field0_0x0.DebugPtr = (USoundBase *)0x0;
  (this->Attenuation).field0_0x0.DebugPtr = (USoundAttenuation *)0x0;
  (this->Concurrency).field0_0x0.DebugPtr = (USoundConcurrency *)0x0;
  (this->ParameterNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterNames).ArrayNum = 0;
  (this->ParameterNames).ArrayMax = 0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->ConfigurationUserParameter);
  this->bStopWhenComponentIsDestroyed = true;
  this->bAllowLoopingOneShotSounds = false;
  (this->SoundToPlay).field0_0x0.DebugPtr = (USoundBase *)0x0;
  (this->Attenuation).field0_0x0.DebugPtr = (USoundAttenuation *)0x0;
  (this->Concurrency).field0_0x0.DebugPtr = (USoundConcurrency *)0x0;
  this->bLimitPlaysPerTick = true;
  this->MaxPlaysPerTick = 10;
  local_28.DebugPtr = (UObject *)Z_Construct_UClass_UObject_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_28.DebugPtr);
  }
  local_1e = 0;
  local_20 = 1;
  local_1c = 0xffffffffffffffff;
  local_14 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (local_res8,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  *(int *)&(this->ConfigurationUserParameter).Parameter._padding_ = iVar1;
  return this;
}

// ~UNiagaraDataInterfaceAudioPlayer @ 1490b8ff0

void __thiscall
UNiagaraDataInterfaceAudioPlayer::~UNiagaraDataInterfaceAudioPlayer
          (UNiagaraDataInterfaceAudioPlayer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAudioPlayer__6B_;
  pFVar1 = (this->ConfigurationUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParameterNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 1490bff80

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

void __thiscall
`UNiagaraDataInterfaceAudioPlayer::PlayPersistentAudio'::__l19::<lambda_1>::operator()
          (void *this,FAudioPlayerInterface_InstanceData *param_1,UAudioComponent *param_2,
          FNiagaraSystemInstance *param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_NiagaraAudioDICreateSound> FVar17;
  UObject *pUVar18;
  USoundAttenuation *pUVar19;
  USoundBase *pUVar20;
  uchar this_00 [8];
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  undefined4 uVar21;
  LARGE_INTEGER LVar22;
  LARGE_INTEGER local_res10 [2];
  FWeakObjectPtr local_res20;
  TRotator<double> *pTVar23;
  FStatMessage local_118;
  LARGE_INTEGER local_108;
  USoundConcurrency *local_f8;
  FName local_f0;
  TRotator<double> local_e8;
  TVector<double>_u_0 local_c8 [6];
  
  uVar21 = 0;
  FVar17 = StatPtr_STAT_NiagaraAudioDICreateSound;
  if (StatPtr_STAT_NiagaraAudioDICreateSound ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraAudioDICreateSound>)0x0) {
    pFVar16 = ::FName::FName((FName *)&local_118,"STAT_NiagaraAudioDICreateSound");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_NiagaraAudioDICreateSound>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraAudioDICreateSound,
                        *pFVar16,L"Audio DI create persistent sound","STATGROUP_Niagara",
                        "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_108.s.LowPart = 0;
  local_108.s.HighPart = 0;
  LVar22 = *(LARGE_INTEGER *)FVar17;
  bVar11 = false;
  bVar13 = false;
  if ((LVar22.s.LowPart == 0) && (LVar22.s.HighPart == 0)) {
LAB_1490c00e6:
    bVar12 = false;
    LVar22 = local_108;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].QuadPart = local_res10[0].QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0].s,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar11 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10[0] = LVar22;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10[0].s,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioPlayer.cpp"
                   ,0x420);
        bVar11 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1490c00e6;
    local_res10[0] = LVar22;
    local_108 = LVar22;
    FThreadStats::AddMessage((FName)LVar22.s,CycleScopeStart);
    bVar12 = true;
    uVar21 = local_108._0_4_;
  }
  local_118.StatData.Pad = (uchar  [8])FWeakObjectPtr::Get(&(param_3->AttachComponent).WeakPtr);
  local_res20 = (param_1->SoundToPlay).WeakPtr;
  if (local_118.StatData.Pad == (uchar  [8])0x0) goto LAB_1490c0390;
  bVar14 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar14) goto LAB_1490c0390;
  if (param_1->bStopWhenComponentIsDestroyed == false) {
    pUVar18 = FWeakObjectPtr::Get(&local_res20);
    cVar15 = (**(code **)(*(longlong *)pUVar18 + 0x310))(pUVar18);
    local_res10[0].QuadPart = local_res10[0].QuadPart & 0xffffffffffffff00;
    if (cVar15 != '\0') goto LAB_1490c018d;
  }
  else {
LAB_1490c018d:
    local_res10[0].s.LowPart._0_1_ = 1;
  }
  local_f8 = (USoundConcurrency *)FWeakObjectPtr::Get(&(param_1->Concurrency).WeakPtr);
  bVar14 = FWeakObjectPtr::IsValid(&(param_1->CachedUserParam).WeakPtr);
  if (bVar14) {
    pUVar18 = FWeakObjectPtr::Get(&(param_1->CachedUserParam).WeakPtr);
    if (*(char *)(pUVar18 + 1) != '\0') {
      pUVar18 = FWeakObjectPtr::Get(&(param_1->CachedUserParam).WeakPtr);
      local_f8 = *(USoundConcurrency **)&pUVar18[1].field_0x8;
    }
  }
  pUVar19 = (USoundAttenuation *)FWeakObjectPtr::Get(&(param_1->Attenuation).WeakPtr);
  fVar2 = *(float *)((longlong)this + 0x40);
  fVar3 = *(float *)((longlong)this + 0x3c);
  fVar4 = *(float *)((longlong)this + 0x38);
  dVar7 = *(double *)((longlong)this + 0x20);
  dVar8 = *(double *)((longlong)this + 0x28);
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  dVar5 = *(double *)((longlong)this + 0x30);
  dVar9 = *(double *)((longlong)this + 8);
  dVar10 = *(double *)((longlong)this + 0x10);
  dVar6 = *(double *)((longlong)this + 0x18);
  pUVar20 = (USoundBase *)FWeakObjectPtr::Get(&local_res20);
  pTVar23 = &local_e8;
  local_e8.Pitch = dVar7;
  local_e8.Yaw = dVar8;
  local_e8.Roll = dVar5;
  local_c8[0]._0_8_ = dVar9;
  local_c8[0]._8_8_ = dVar10;
  local_c8[0]._16_8_ = dVar6;
  this_00 = (uchar  [8])
            UGameplayStatics::SpawnSoundAttached
                      (pUVar20,local_118.StatData.Pad,local_f0,(TVector<double> *)&local_c8[0]._s_0,
                       pTVar23,KeepWorldPosition,(bool)local_res10[0]._0_1_,fVar4,fVar3,fVar2,
                       pUVar19,local_f8,true);
  if (this_00 != (uchar  [8])0x0) {
    bVar14 = FWeakObjectPtr::IsValid(&(param_1->CachedUserParam).WeakPtr);
    if (bVar14) {
      pUVar18 = FWeakObjectPtr::Get(&(param_1->CachedUserParam).WeakPtr);
      if (pUVar18[1].field_0x10 != '\0') {
        pUVar18 = FWeakObjectPtr::Get(&(param_1->CachedUserParam).WeakPtr);
        UAudioComponent::AdjustAttenuation
                  ((UAudioComponent *)this_00,(FSoundAttenuationSettings *)&pUVar18[1].field_0x18);
        (**(code **)(*(longlong *)this_00 + 0x650))(this_00,*(undefined4 *)((longlong)this + 0x40));
      }
    }
    if (0.0 < *(float *)((longlong)this + 0x44)) {
      (**(code **)(*(longlong *)this_00 + 0x640))
                (this_00,*(float *)((longlong)this + 0x44),*(undefined4 *)((longlong)this + 0x38),
                 *(undefined4 *)((longlong)this + 0x40),(ulonglong)pTVar23 & 0xffffffffffffff00);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    local_res10[0]._0_4_ = 0;
    local_res10[0]._4_4_ = 0;
    local_118.StatData.Pad = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10[0].s,(FObjectPtr)&local_118);
    TSortedMap<int,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
    ::Emplace<int_const_&,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>
              (&param_1->PersistentAudioMapping,this,
               (TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *)&local_res10[0].s);
  }
LAB_1490c0390:
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar12) && ((FName)LVar22.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_118.NameAndInfo.Number = LVar22.s.HighPart & 0xffff6fffU | 0x6000;
      local_118.NameAndInfo.Index.Value = uVar21;
      QueryPerformanceCounter(local_res10);
      local_118.StatData.Pad = (uchar  [8])(local_res10[0].QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_118);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// operator() @ 1490c34e0

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceAudioPlayer::PlayPersistentAudio'::__l24::<lambda_2>::operator()
          (void *this,FAudioPlayerInterface_InstanceData *param_1,UAudioComponent *param_2,
          FNiagaraSystemInstance *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_NiagaraAudioDIStopSound> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  LARGE_INTEGER local_res18;
  FStatMessage local_48;
  FName local_38;
  
  iVar13 = 0;
  FVar12.Value = 0;
  FVar8 = StatPtr_STAT_NiagaraAudioDIStopSound;
  if (StatPtr_STAT_NiagaraAudioDIStopSound ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraAudioDIStopSound>)0x0) {
    pFVar7 = ::FName::FName((FName *)&local_48,"STAT_NiagaraAudioDIStopSound");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_NiagaraAudioDIStopSound>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraAudioDIStopSound,*pFVar7,
                       L"Audio DI stop persistent sound","STATGROUP_Niagara","STATCAT_Niagara",
                       L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar10.Value;
        local_res18.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioPlayer.cpp"
                   ,0x450);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      local_38 = FVar11;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      FVar12.Value = local_38.ComparisonIndex.Value;
      goto LAB_1490c364f;
    }
  }
  bVar4 = false;
  FVar11 = local_38;
LAB_1490c364f:
  if ((param_2 != (UAudioComponent *)0x0) &&
     (cVar6 = (**(code **)(*(longlong *)&param_2->field_0x250 + 0xa8))(), cVar6 != '\0')) {
    if (*(float *)((longlong)this + 4) <= 0.0) {
      (**(code **)(*(longlong *)param_2 + 0x668))(param_2);
    }
    else {
      (**(code **)(*(longlong *)param_2 + 0x648))(param_2,*(float *)((longlong)this + 4),0,0);
    }
    uVar9 = (param_1->PersistentAudioMapping).Pairs.ArrayNum;
    pFVar2 = (param_1->PersistentAudioMapping).Pairs.AllocatorInstance.Data;
    uVar14 = uVar9;
    if (0 < (int)uVar9) {
      do {
        uVar15 = uVar14 >> 1;
        if (*(int *)(pFVar2 + (longlong)(int)(uVar15 + iVar13) * 0xc) < *(int *)this) {
          iVar13 = uVar15 + iVar13 + (uVar14 & 1);
        }
        uVar14 = uVar15;
      } while (uVar15 != 0);
    }
    if (((iVar13 < (int)uVar9) && (*(int *)(pFVar2 + (longlong)iVar13 * 0xc) <= *(int *)this)) &&
       (iVar13 != -1)) {
      TArray<TTuple<int,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAt(&(param_1->PersistentAudioMapping).Pairs,iVar13,Default);
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar11 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// CanExecuteOnTarget @ 1490d2a60

bool __thiscall
UNiagaraDataInterfaceAudioPlayer::CanExecuteOnTarget
          (UNiagaraDataInterfaceAudioPlayer *this,ENiagaraSimTarget param_1)

{
  return param_1 == CPUSim;
}

// CopyToInternal @ 1490d8f30

bool __thiscall
UNiagaraDataInterfaceAudioPlayer::CopyToInternal
          (UNiagaraDataInterfaceAudioPlayer *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  USoundBase *pUVar2;
  USoundAttenuation *pUVar3;
  USoundConcurrency *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  if ((param_1 == (UNiagaraDataInterface *)0x0) || (param_1->_padding_ != this->_padding_)) {
    return false;
  }
  pUVar5 = StaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar5->_padding_)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (this->SoundToPlay).field0_0x0.DebugPtr, pUVar2 != (USoundBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    *(TObjectPtr<USoundBase>_u_0 *)(param_1 + 1) = (this->SoundToPlay).field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 = (this->Attenuation).field0_0x0.DebugPtr, pUVar3 != (USoundAttenuation *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    param_1[1]._padding_ = (longlong)(this->Attenuation).field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 = (this->Concurrency).field0_0x0.DebugPtr, pUVar4 != (USoundConcurrency *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    param_1[1]._padding_ = (longlong)(this->Concurrency).field0_0x0;
    param_1[1].Proxy.Ptr =
         (FNiagaraDataInterfaceProxy *)(this->ConfigurationUserParameter).Parameter._padding_;
    *(int *)&param_1[1].field_0x30 = (int)(this->ConfigurationUserParameter).Parameter._padding_;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(param_1 + 2),
               &(this->ConfigurationUserParameter).Parameter.VarData);
    *(bool *)&param_1[2]._padding_ = this->bLimitPlaysPerTick;
    *(int *)((longlong)&param_1[2]._padding_ + 4) = this->MaxPlaysPerTick;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1[1]._padding_,
               &this->ParameterNames);
    *(bool *)&param_1[2]._padding_ = this->bStopWhenComponentIsDestroyed;
    return true;
  }
  pFVar6 = GetTypeName<UNiagaraDataInterfaceAudioPlayer>(&local_28);
  pwVar7 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar7,pwVar8);
}

// DestroyPerInstanceData @ 1490ebdd0

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

void __thiscall
UNiagaraDataInterfaceAudioPlayer::DestroyPerInstanceData
          (UNiagaraDataInterfaceAudioPlayer *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  bool bVar5;
  UObject *pUVar6;
  longlong lVar7;
  FWeakObjectPtr *this_00;
  undefined1 local_res10 [8];
  
  if (!__CsvProfilerStat116) {
    FCsvProfilerTrace::OutputInlineStat("CoreSystems_Audio",_GCsvCategory_Particles.Index);
    __CsvProfilerStat116 = true;
  }
  uVar4 = _GCsvCategory_Particles.Index;
  FCsvProfiler::BeginStat("CoreSystems_Audio",_GCsvCategory_Particles.Index,"CSV_CoreSystems_Audio")
  ;
  iVar2 = *(int *)((longlong)param_1 + 0x40);
  lVar7 = *(longlong *)((longlong)param_1 + 0x38);
  this_00 = (FWeakObjectPtr *)(lVar7 + 4);
  lVar1 = lVar7 + (longlong)iVar2 * 0xc;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x40) != iVar2) {
      `TCheckedPointerIterator<TTuple<int,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (lVar7 == lVar1) break;
    bVar5 = FWeakObjectPtr::IsValid(this_00);
    if (bVar5) {
      pUVar6 = FWeakObjectPtr::Get(this_00);
      (**(code **)(*(longlong *)pUVar6 + 0x668))(pUVar6);
    }
    lVar7 = lVar7 + 0xc;
    this_00 = (FWeakObjectPtr *)&this_00[1].ObjectSerialNumber;
  }
  if (*(void **)((longlong)param_1 + 0x108) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x108));
  }
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  TSparseArray<TSparseSetElement<FNiagaraVariable>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNiagaraVariable>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FNiagaraVariable>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x78));
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  TQueue<FPersistentAudioParticleData,0>::~TQueue<FPersistentAudioParticleData,0>
            ((TQueue<FPersistentAudioParticleData,0> *)((longlong)param_1 + 0x20));
  puVar3 = *(undefined8 **)((longlong)param_1 + 0x18);
  while (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x18) = *puVar3;
    if ((void *)puVar3[4] != (void *)0x0) {
      FMemory::Free((void *)puVar3[4]);
    }
    ::operator_delete(puVar3,0x30);
    puVar3 = *(undefined8 **)((longlong)param_1 + 0x18);
  }
  puVar3 = *(undefined8 **)((longlong)param_1 + 8);
  while (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)param_1 + 8) = *puVar3;
    ::operator_delete(puVar3,0x48);
    puVar3 = *(undefined8 **)((longlong)param_1 + 8);
  }
  FCsvProfiler::EndStat("CoreSystems_Audio",uVar4);
  return;
}

// Equals @ 1490f24d0

bool __thiscall
UNiagaraDataInterfaceAudioPlayer::Equals
          (UNiagaraDataInterfaceAudioPlayer *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if ((param_1 != (UNiagaraDataInterface *)0x0) && (param_1->_padding_ == this->_padding_)) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar3 = GetTypeName<UNiagaraDataInterfaceAudioPlayer>(&local_28);
      pwVar5 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar4);
    }
    if (((((USoundBase *)param_1[1]._padding_ == (this->SoundToPlay).field0_0x0.DebugPtr) &&
         ((USoundAttenuation *)param_1[1]._padding_ == (this->Attenuation).field0_0x0.DebugPtr)) &&
        ((USoundConcurrency *)param_1[1]._padding_ == (this->Concurrency).field0_0x0.DebugPtr)) &&
       ((((FNiagaraDataInterfaceProxy *)(this->ConfigurationUserParameter).Parameter._padding_ ==
          param_1[1].Proxy.Ptr &&
         ((int)(this->ConfigurationUserParameter).Parameter._padding_ ==
          *(int *)&param_1[1].field_0x30)) &&
        (((bool)(char)param_1[2]._padding_ == this->bLimitPlaysPerTick &&
         (*(int *)((longlong)&param_1[2]._padding_ + 4) == this->MaxPlaysPerTick)))))) {
      return true;
    }
  }
  return false;
}

// GetPrivateStaticClass @ 149109720

UClass * __cdecl UNiagaraDataInterfaceAudioPlayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceAudioPlayer",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayer.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceAudioPlayer,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceAudioPlayer>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceAudioPlayer>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayer.InnerSingleton;
}

// GetVMExternalFunction @ 14910cf50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceAudioPlayer::GetVMExternalFunction
          (UNiagaraDataInterfaceAudioPlayer *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FString local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  undefined1 local_28 [8];
  FDelegateAllocation local_20;
  
  FVar1 = param_1->Name;
  if (FVar1 == PlayAudioName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceAudioPlayer_PlayOneShotAudioBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (FVar1 == PlayPersistentAudioName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceAudioPlayer_PlayPersistentAudioBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (FVar1 == SetPersistentAudioBoolParamName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceAudioPlayer_SetParameterBoolBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (FVar1 == SetPersistentAudioIntegerParamName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceAudioPlayer_SetParameterIntegerBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (FVar1 == SetPersistentAudioFloatParamName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceAudioPlayer_SetParameterFloatBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (FVar1 == SetInitialAudioBoolParamName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceAudioPlayer_SetInitialParameterBoolBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (FVar1 == SetInitialAudioIntegerParamName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceAudioPlayer_SetInitialParameterIntegerBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (FVar1 == SetInitialAudioFloatParamName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceAudioPlayer_SetInitialParameterFloatBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (FVar1 == SetPersistentAudioVolumeName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceAudioPlayer_UpdateVolumeBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (FVar1 == SetPersistentAudioPitchName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceAudioPlayer_UpdatePitchBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (FVar1 == SetPersistentAudioLocationName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceAudioPlayer_UpdateLocationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (FVar1 == SetPersistentAudioRotationName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceAudioPlayer_UpdateRotationBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (FVar1 == PausePersistentAudioName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceAudioPlayer_SetPausedStateBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (3 < (byte)LogNiagara._0_1_) {
    ::FName::ToString(&param_1->Name,(FString *)local_28);
    ::FName::ToString(&PlayAudioName,(FString *)&local_48);
    if (this == (UNiagaraDataInterfaceAudioPlayer *)0x0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0);
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((void *)local_48._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
    if ((atomic<unsigned___int64>)local_28 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_28);
    }
  }
  return;
}

// HasPostSimulateTick @ 149111d40

bool __thiscall
UNiagaraDataInterfaceAudioPlayer::HasPostSimulateTick(UNiagaraDataInterfaceAudioPlayer *this)

{
  return true;
}

// HasPreSimulateTick @ 149111d70

bool __thiscall
UNiagaraDataInterfaceAudioPlayer::HasPreSimulateTick(UNiagaraDataInterfaceAudioPlayer *this)

{
  return true;
}

// InitPerInstanceData @ 149116a60

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

bool __thiscall
UNiagaraDataInterfaceAudioPlayer::InitPerInstanceData
          (UNiagaraDataInterfaceAudioPlayer *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  double dVar1;
  FAudioPlayerInterface_InstanceData *pFVar2;
  FNiagaraLWCConverter *pFVar3;
  FNiagaraLWCConverter local_28;
  
  pFVar2 = FAudioPlayerInterface_InstanceData::FAudioPlayerInterface_InstanceData(param_1);
  pFVar3 = FNiagaraSystemInstance::GetLWCConverter(param_2,&local_28,false);
  dVar1 = (pFVar3->SystemWorldPos).field0_0x0._s_0.Y;
  (pFVar2->LWCConverter).SystemWorldPos.field0_0x0._s_0.X =
       (pFVar3->SystemWorldPos).field0_0x0._s_0.X;
  (pFVar2->LWCConverter).SystemWorldPos.field0_0x0._s_0.Y = dVar1;
  (pFVar2->LWCConverter).SystemWorldPos.field0_0x0._s_0.Z =
       (pFVar3->SystemWorldPos).field0_0x0._s_0.Z;
  if (this->bLimitPlaysPerTick != false) {
    pFVar2->MaxPlaysPerTick = this->MaxPlaysPerTick;
  }
  pFVar2->bStopWhenComponentIsDestroyed = this->bStopWhenComponentIsDestroyed;
  return true;
}

// PerInstanceDataSize @ 14911adf0

int __thiscall
UNiagaraDataInterfaceAudioPlayer::PerInstanceDataSize(UNiagaraDataInterfaceAudioPlayer *this)

{
  return 0x120;
}

// PerInstanceTick @ 14911b190

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

bool __thiscall
UNiagaraDataInterfaceAudioPlayer::PerInstanceTick
          (UNiagaraDataInterfaceAudioPlayer *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  int iVar1;
  USoundBase *pUVar2;
  TObjectPtr<USoundAttenuation>_u_0 TVar3;
  uint uVar4;
  undefined1 uVar5;
  FNiagaraTypeDefinition *pFVar6;
  FWeakObjectPtr FVar7;
  USoundAttenuation *pUVar8;
  TObjectPtr<UObject> TVar9;
  UClass *pUVar10;
  FWeakObjectPtr FVar11;
  bool bVar12;
  FWeakObjectPtr local_res10;
  TObjectPtr<USoundAttenuation>_u_0 local_38 [2];
  
  if (!__CsvProfilerStat131) {
    FCsvProfilerTrace::OutputInlineStat("CoreSystems_Audio",_GCsvCategory_Particles.Index);
    __CsvProfilerStat131 = true;
  }
  uVar4 = _GCsvCategory_Particles.Index;
  FCsvProfiler::BeginStat("CoreSystems_Audio",_GCsvCategory_Particles.Index,"CSV_CoreSystems_Audio")
  ;
  if (param_1 == (void *)0x0) {
LAB_14911b258:
    bVar12 = true;
    goto LAB_14911b25a;
  }
  FVar11.ObjectIndex = 0;
  FVar11.ObjectSerialNumber = 0;
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (((this->ConfigurationUserParameter).Parameter._padding_ != 0) &&
     (pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)
                          &(this->ConfigurationUserParameter).Parameter._padding_),
     (pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
    if (*(int *)((longlong)param_1 + 0xe8) != -1) {
      FNiagaraParameterStore::GetUObject
                (*(FNiagaraParameterStore **)((longlong)param_1 + 0xf0),(int)&local_res10);
      FVar11 = local_res10;
    }
    FVar7 = (FWeakObjectPtr)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x60));
    if (FVar11 == (FWeakObjectPtr)0x0) {
      bVar12 = FVar7 == (FWeakObjectPtr)0x0;
    }
    else {
      bVar12 = FVar11 == FVar7;
    }
    if (!bVar12) goto LAB_14911b258;
  }
  pUVar2 = (this->SoundToPlay).field0_0x0.DebugPtr;
  if (((pUVar2 == (USoundBase *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) ||
     (param_2 == (FNiagaraSystemInstance *)0x0)) {
    *(undefined8 *)((longlong)param_1 + 0x48) = 0;
    *(undefined8 *)((longlong)param_1 + 0x50) = 0;
    *(undefined8 *)((longlong)param_1 + 0x58) = 0;
    *(undefined8 *)((longlong)param_1 + 0x60) = 0;
    *(undefined2 *)((longlong)param_1 + 0xe5) = 0;
  }
  else {
    pUVar8 = (USoundAttenuation *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x48));
    TVar3 = (TObjectPtr<USoundAttenuation>_u_0)(this->SoundToPlay).field0_0x0.DebugPtr;
    if (TVar3.DebugPtr == (USoundAttenuation *)0x0) {
      bVar12 = pUVar8 == (USoundAttenuation *)0x0;
    }
    else {
      bVar12 = TVar3.DebugPtr == pUVar8;
    }
    if (!bVar12) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (TVar3.DebugPtr != (USoundAttenuation *)0x0) {
          UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar3.DebugPtr != (USoundAttenuation *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
        }
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_38[0] = TVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.DebugPtr != (USoundAttenuation *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_38);
      *(FWeakObjectPtr *)((longlong)param_1 + 0x48) = local_res10;
      uVar5 = (**(code **)(((this->SoundToPlay).field0_0x0.DebugPtr)->_padding_ + 0x310))();
      *(undefined1 *)((longlong)param_1 + 0xe6) = uVar5;
    }
    TVar3 = (TObjectPtr<USoundAttenuation>_u_0)(this->Attenuation).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar3.DebugPtr != (USoundAttenuation *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.DebugPtr != (USoundAttenuation *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
      }
    }
    FVar7.ObjectIndex = 0;
    FVar7.ObjectSerialNumber = 0;
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_38[0] = TVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar3.DebugPtr != (USoundAttenuation *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_38);
    *(FWeakObjectPtr *)((longlong)param_1 + 0x50) = local_res10;
    TVar3 = (TObjectPtr<USoundAttenuation>_u_0)(this->Concurrency).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar3.DebugPtr != (USoundAttenuation *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.DebugPtr != (USoundAttenuation *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
      }
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_38[0] = TVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar3.DebugPtr != (USoundAttenuation *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_38);
    *(FWeakObjectPtr *)((longlong)param_1 + 0x58) = local_res10;
    if ((this->bAllowLoopingOneShotSounds == false) && (*(char *)((longlong)param_1 + 0xe6) != '\0')
       ) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(undefined1 *)((longlong)param_1 + 0xe5) = uVar5;
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    if (((this->ConfigurationUserParameter).Parameter._padding_ != 0) &&
       (pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                           ((FNiagaraTypeDefinitionHandle *)
                            &(this->ConfigurationUserParameter).Parameter._padding_),
       (pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
      TVar9 = FNiagaraParameterDirectBinding<UObject_*>::Init
                        ((FNiagaraParameterDirectBinding<UObject_*> *)((longlong)param_1 + 0xe8),
                         (FNiagaraParameterStore *)&local_38[0].ObjectPtr,
                         (FNiagaraVariable *)&param_2->InstanceParameters);
      FVar11 = *(FWeakObjectPtr *)TVar9.field0_0x0;
      if (FVar11 == (FWeakObjectPtr)0x0) {
LAB_14911b4a6:
        local_res10 = FVar7;
      }
      else {
        pUVar10 = UNiagaraDataInterfaceAudioPlayerSettings::StaticClass();
        iVar1 = (int)pUVar10->_padding_;
        if ((*(int *)(*(longlong *)((longlong)FVar11 + 0x10) + 0x38) < iVar1) ||
           (local_res10 = FVar11,
           (longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)((longlong)FVar11 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
           &pUVar10->_padding_)) goto LAB_14911b4a6;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res10 != (FWeakObjectPtr)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)((longlong)param_1 + 0x60),(FObjectPtr)&local_res10);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x68),
                 &this->ParameterNames);
      bVar12 = false;
      goto LAB_14911b25a;
    }
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x68),
             &this->ParameterNames);
  bVar12 = false;
LAB_14911b25a:
  FCsvProfiler::EndStat("CoreSystems_Audio",uVar4);
  return bVar12;
}

// PerInstanceTickPostSimulate @ 14911bc30

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceAudioPlayer::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceAudioPlayer *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  ForAnyElementType *pFVar1;
  TArray<TTuple<int,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int *piVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  FWeakObjectPtr *this_00;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  UNiagaraSystem *pUVar10;
  void *pvVar11;
  FAudioParameter *pFVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  bool bVar19;
  bool bVar20;
  UInitialActiveSoundParams *pUVar21;
  UInitialActiveSoundParams *pUVar22;
  longlong *plVar23;
  undefined8 uVar24;
  bool bVar25;
  undefined1 uVar26;
  bool bVar27;
  char cVar28;
  int iVar29;
  uint uVar30;
  FNiagaraWorldManager *this_01;
  UWorld *pUVar31;
  ulonglong uVar32;
  longlong lVar33;
  UObject *pUVar34;
  UClass *pUVar35;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar36;
  FAudioParameter *pFVar37;
  USoundConcurrency *pUVar38;
  USoundAttenuation *pUVar39;
  USoundBase *pUVar40;
  undefined8 uVar41;
  FName *pFVar42;
  FThreadSafeStaticStat<FStat_STAT_NiagaraAudioDIStopSound> FVar43;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  ForAnyElementType FVar44;
  ulonglong uVar45;
  FScriptContainerElement *pFVar46;
  ulonglong uVar47;
  FScriptContainerElement *pFVar48;
  longlong *plVar49;
  ForElementType<FSetElementId> FVar50;
  FName FVar51;
  longlong lVar52;
  UObject *pUVar53;
  FScriptContainerElement *pFVar54;
  uint uVar55;
  ulonglong uVar56;
  ForElementType<unsigned_int> FVar57;
  UObject *pUVar58;
  uint uVar59;
  undefined1 auStackY_768 [32];
  undefined1 local_708;
  undefined1 local_707;
  undefined1 local_706 [6];
  ForAnyElementType local_700;
  undefined8 local_6f8;
  uint local_6f0;
  FName local_6e8;
  UInitialActiveSoundParams *local_6e0;
  uint local_6d8 [2];
  undefined1 local_6d0 [8];
  FNiagaraTypeDefinitionHandle local_6c8 [2];
  ForAnyElementType local_6c0;
  undefined8 local_6b8;
  int local_6b0;
  FColor_u_0 local_6ac;
  uint local_6a8;
  uint local_6a0;
  uint uStack_69c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_698;
  undefined4 local_690;
  uint uStack_68c;
  uint uStack_688;
  undefined4 uStack_684;
  void *local_680;
  AActor *local_678;
  FScriptContainerElement *local_670;
  FName local_668;
  FWeakObjectPtr local_660;
  FName local_658;
  undefined1 local_648 [16];
  longlong local_638;
  ForAnyElementType FStack_630;
  undefined8 local_628;
  TArray<TTuple<int,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>
  *local_618;
  undefined4 uStack_610;
  uint uStack_60c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_608;
  undefined4 local_5e8;
  int local_5e4;
  int local_5e0 [2];
  uint *local_5d8;
  UWorld *local_5d0;
  FName local_5c8;
  UObject *local_5c0;
  void *local_5b8;
  FStatMessage local_5b0;
  LARGE_INTEGER local_5a0;
  longlong *local_598;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_590;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  longlong *local_528;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_520;
  undefined8 uStack_500;
  TArray<TTuple<int,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>
  *local_4f8;
  longlong lStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  FAudioInitialParamData local_468;
  undefined1 local_440 [40];
  int local_418;
  undefined4 uStack_414;
  FName local_410;
  TRotator<double> local_408;
  TVector<double>_u_0 local_3e8;
  longlong local_3c0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  FAudioParameter local_398;
  FAudioParameter local_2f8;
  int local_258 [4];
  code *local_248;
  undefined8 uStack_240;
  longlong local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  longlong *plStack_220;
  undefined1 local_218 [128];
  undefined1 local_198 [32];
  ForElementType<unsigned_int> local_178;
  uint local_170;
  int local_16c;
  int local_168;
  int local_164;
  FScriptContainerElement local_160 [8];
  ForAnyElementType local_158;
  uint local_150;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_148;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_768;
  local_6e8 = (FName)param_2;
  local_680 = param_1;
  if (!__CsvProfilerStat199) {
    FCsvProfilerTrace::OutputInlineStat("CoreSystems_Audio",_GCsvCategory_Particles.Index);
    __CsvProfilerStat199 = true;
  }
  local_6a8 = _GCsvCategory_Particles.Index;
  FCsvProfiler::BeginStat("CoreSystems_Audio",_GCsvCategory_Particles.Index,"CSV_CoreSystems_Audio")
  ;
  pUVar10 = param_2->System;
  this_01 = FNiagaraSystemInstance::GetWorldManager(param_2);
  pUVar31 = FNiagaraWorldManager::GetWorld(this_01);
  uVar45 = 0;
  local_198._0_8_ = (FScriptContainerElement *)0x0;
  local_198._8_8_ = 0;
  local_178 = (ForElementType<unsigned_int>)0x0;
  local_170 = 0;
  local_164 = 0;
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  local_6d0 = (undefined1  [8])0x0;
  local_16c = 0x80;
  local_168 = -1;
  local_6d8[0] = 0xffffffff;
  local_5d0 = pUVar31;
  local_6c8[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_6c8,&FNiagaraTypeDefinition::Vec4Def);
  local_6c0.Data = (FScriptContainerElement *)0x0;
  local_6b8._0_4_ = 0;
  local_6b8._4_4_ = 0;
  if (**(longlong **)((longlong)param_1 + 8) == 0) {
    plVar49 = (longlong *)((longlong)param_1 + 0x18);
    while (*(longlong *)*plVar49 != 0) {
      pvVar11 = (void *)*plVar49;
      *plVar49 = *(longlong *)*plVar49;
      local_468.Value._padding_ = 0;
      local_468.ParticleID = -1;
      local_468._4_4_ = 0;
      local_468.Value._padding_ = 0;
      local_468.Value.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_468.Value.VarData.ArrayNum = 0;
      local_468.Value.VarData.ArrayMax = 0;
      FNiagaraVariable::FNiagaraVariable(&local_468.Value);
      FAudioInitialParamData::operator=((FAudioInitialParamData *)(*plVar49 + 8),&local_468);
      if (local_468.Value.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.Value.VarData.AllocatorInstance.Data);
      }
      if (pvVar11 != (void *)0x0) {
        if (*(void **)((longlong)pvVar11 + 0x20) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar11 + 0x20));
        }
        ::operator_delete(pvVar11,0x30);
      }
    }
    goto LAB_14911c08f;
  }
  uVar30 = *(uint *)((longlong)param_1 + 0x34);
  if ((uint)(local_198._8_4_ - local_164) < uVar30) {
    if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar30);
    }
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_198,uVar30);
    if (uVar30 < 4) {
      uVar30 = 1;
    }
    else {
      uVar47 = (ulonglong)((uVar30 >> 1) + 7) * 2 + 1;
      lVar33 = 0x3f;
      if (uVar47 != 0) {
        for (; uVar47 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      local_5e8 = (undefined4)lVar33;
      uVar30 = 1 << ((byte)lVar33 & 0x1f);
    }
    if ((local_150 == 0) || ((int)local_150 < (int)uVar30)) {
      local_150 = uVar30;
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_158,0,0,4);
      }
      if (uVar30 != 0) {
        uVar59 = uVar30;
        if (uVar30 < 2) {
          if (local_158.Data != (FScriptContainerElement *)0x0) {
            uVar59 = 0;
            goto LAB_14911be9e;
          }
        }
        else {
LAB_14911be9e:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_158,0,uVar59,4);
        }
        if (0 < (int)uVar30) {
          uVar56 = (ulonglong)uVar30;
          uVar47 = uVar45;
          do {
            FVar44.Data = local_160;
            if (local_158.Data != (FScriptContainerElement *)0x0) {
              FVar44.Data = local_158.Data;
            }
            uVar32 = (longlong)(int)uVar30 - 1U & uVar47;
            uVar47 = uVar47 + 1;
            *(undefined4 *)(FVar44.Data + uVar32 * 4) = 0xffffffff;
            uVar56 = uVar56 - 1;
          } while (uVar56 != 0);
        }
      }
      if (local_150 != 0) {
        pTStack_698 = (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10);
        local_6a0 = 0;
        uStack_69c = 1;
        uStack_68c = 0;
        uStack_688 = 0;
        if (local_170 != 0) {
          FVar57 = (ForElementType<unsigned_int>)((longlong)local_198 + 0x10);
          if (local_178 != (ForElementType<unsigned_int>)0x0) {
            FVar57 = local_178;
          }
          uVar30 = *(uint *)FVar57;
          uVar47 = uVar45;
          while (uVar30 == 0) {
            uStack_688 = (int)uVar47 + 0x20;
            uVar47 = (ulonglong)uStack_688;
            iVar29 = (int)uVar45;
            local_6a0 = iVar29 + 1;
            uVar45 = (ulonglong)local_6a0;
            if ((int)((local_170 - 1) + ((int)(local_170 - 1) >> 0x1f & 0x1fU)) >> 5 <
                (int)local_6a0) goto LAB_14911bfc0;
            uVar30 = ((uint *)((longlong)FVar57 + 4))[iVar29];
          }
          uStack_69c = -uVar30 & uVar30;
          uVar45 = (ulonglong)uStack_69c * 2 + 1;
          lVar33 = 0x3f;
          if (uVar45 != 0) {
            for (; uVar45 >> lVar33 == 0; lVar33 = lVar33 + -1) {
            }
          }
          local_5e4 = (int)lVar33;
          uStack_68c = (uStack_688 - 1) + local_5e4;
          uVar45 = (ulonglong)uStack_68c;
          if ((int)local_170 < (int)uStack_68c) {
LAB_14911bfc0:
            uVar45 = (ulonglong)local_170;
            uStack_68c = local_170;
          }
        }
        local_690 = 0xffffffff;
        local_598 = (longlong *)local_198;
        local_590._padding_ = CONCAT44(uStack_69c,local_6a0);
        local_590.CurrentBitIndex = uStack_68c;
        local_590.UnvisitedBitMask = 0xffffffff;
        local_590._28_4_ = uStack_684;
        local_590.BaseBitIndex = uStack_688;
        local_590.Array = pTStack_698;
        if ((int)uVar45 < (int)local_170) {
          do {
            lVar33 = *local_598;
            lVar52 = (longlong)(int)uVar45 * 0x20;
            uVar30 = local_150 - 1 & *(uint *)(lVar52 + lVar33);
            *(uint *)(lVar52 + 0x1c + lVar33) = uVar30;
            FVar44.Data = local_160;
            if (local_158.Data != (FScriptContainerElement *)0x0) {
              FVar44.Data = local_158.Data;
            }
            uVar47 = (longlong)(int)local_150 - 1U & (longlong)(int)uVar30;
            *(undefined4 *)(lVar52 + 0x18 + lVar33) = *(undefined4 *)(FVar44.Data + uVar47 * 4);
            *(int *)(FVar44.Data + uVar47 * 4) = (int)uVar45;
            local_590.UnvisitedBitMask = local_590.UnvisitedBitMask & ~local_590._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_590);
            uVar45 = (ulonglong)(uint)local_590.CurrentBitIndex;
          } while (local_590.CurrentBitIndex < (local_590.Array)->NumBits);
        }
      }
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
LAB_14911c08f:
  plVar49 = (longlong *)((longlong)param_1 + 0x18);
  while (FVar51 = local_6e8, lVar33 = *(longlong *)*plVar49, lVar33 != 0) {
    local_6d8[0] = *(uint *)(lVar33 + 8);
    pFVar1 = (ForAnyElementType *)(lVar33 + 0x20);
    local_6d0 = *(undefined1 (*) [8])(lVar33 + 0x10);
    local_6c8[0].RegisteredTypeIndex = *(int *)(lVar33 + 0x18);
    if (&local_6c0 != pFVar1) {
      if (local_6c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6c0.Data);
      }
      local_6c0.Data = pFVar1->Data;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      local_6b8 = *(undefined8 *)(lVar33 + 0x28);
      *(undefined8 *)(lVar33 + 0x28) = 0;
    }
    pvVar11 = (void *)*plVar49;
    *plVar49 = lVar33;
    local_648._4_4_ = 0;
    local_638 = 0;
    FStack_630.Data = (FScriptContainerElement *)0x0;
    local_628._0_4_ = 0;
    local_628._4_4_ = 0;
    local_648._0_4_ = -1;
    local_648._8_8_ = 0;
    iVar29 = FNiagaraTypeDefinitionHandle::Register
                       ((FNiagaraTypeDefinitionHandle *)&local_638,&FNiagaraTypeDefinition::Vec4Def)
    ;
    local_638 = CONCAT44(local_638._4_4_,iVar29);
    FStack_630.Data = (FScriptContainerElement *)0x0;
    local_628._0_4_ = 0;
    local_628._4_4_ = 0;
    FAudioInitialParamData::operator=
              ((FAudioInitialParamData *)(*plVar49 + 8),(FAudioInitialParamData *)local_648);
    if (FStack_630.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_630.Data);
    }
    if (pvVar11 != (void *)0x0) {
      if (*(void **)((longlong)pvVar11 + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar11 + 0x20));
      }
      ::operator_delete(pvVar11,0x30);
    }
    if (local_198._8_4_ != local_164) {
      FVar44.Data = local_160;
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FVar44.Data = local_158.Data;
      }
      uVar30 = *(uint *)(FVar44.Data + (ulonglong)(local_150 - 1 & local_6d8[0]) * 4);
      while (uVar30 != 0xffffffff) {
        pFVar46 = (FScriptContainerElement *)(local_198._0_8_ + (longlong)(int)uVar30 * 0x20);
        if (*(uint *)pFVar46 == local_6d8[0]) {
          if (pFVar46 != (FScriptContainerElement *)0x0) goto LAB_14911c214;
          break;
        }
        uVar30 = *(uint *)(pFVar46 + 0x18);
      }
    }
    local_5d8 = local_6d8;
    TSet<TTuple<int,TArray<FAudioInitialParamData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FAudioInitialParamData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<int_const_&>_>
              ((TSet<TTuple<int,TArray<FAudioInitialParamData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FAudioInitialParamData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)local_198,(uint)&local_6b0,(TKeyInitializer<int_const_&> *)(ulonglong)local_6d8[0]
               ,(bool *)&local_5d8);
    pFVar46 = (FScriptContainerElement *)(local_198._0_8_ + (longlong)local_6b0 * 0x20);
LAB_14911c214:
    if (((*(uint **)(pFVar46 + 8) <= local_6d8) &&
        (local_6d8 < *(uint **)(pFVar46 + 8) + (longlong)(int)*(uint *)(pFVar46 + 0x14) * 10)) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar25)) {
      pcVar13 = (code *)swi(3);
      uVar26 = (*pcVar13)();
      return (bool)uVar26;
    }
    uVar30 = *(uint *)(pFVar46 + 0x10);
    if (uVar30 == *(uint *)(pFVar46 + 0x14)) {
      uVar30 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,(ForAnyElementType *)(pFVar46 + 8),(int *)(pFVar46 + 0x14));
    }
    *(uint *)(pFVar46 + 0x10) = uVar30 + 1;
                    /* WARNING: Load size is inaccurate */
    FVar44.Data = pFVar46[8];
    *(uint *)(FVar44.Data + (longlong)(int)uVar30 * 0x28) = local_6d8[0];
    FNiagaraVariable::FNiagaraVariable
              ((FNiagaraVariable *)(FVar44.Data + (longlong)(int)uVar30 * 0x28 + 8),
               (FNiagaraVariable *)local_6d0);
  }
  if ((**(longlong **)((longlong)param_1 + 8) != 0) && (pUVar10 != (UNiagaraSystem *)0x0)) {
    local_700.Data = (FScriptContainerElement *)0x0;
    local_6f8 = 0;
    local_538 = 0x3f8000003f800000;
    uStack_530 = 0xffffffff3f800000;
    do {
      lVar33 = **(longlong **)((longlong)param_1 + 8);
      if (lVar33 == 0) goto LAB_14911c57f;
      local_568 = *(undefined8 *)(lVar33 + 8);
      uStack_560 = *(undefined8 *)(lVar33 + 0x10);
      pvVar11 = *(void **)((longlong)param_1 + 8);
      local_4e8 = 0;
      local_558 = *(undefined8 *)(lVar33 + 0x18);
      uStack_550 = *(undefined8 *)(lVar33 + 0x20);
      local_4c0 = 0;
      local_4b8 = 0x3f800000;
      local_548 = *(undefined8 *)(lVar33 + 0x28);
      uStack_540 = *(undefined8 *)(lVar33 + 0x30);
      uStack_4b4 = 0x3f800000;
      uStack_4b0 = 0x3f800000;
      local_538 = *(undefined8 *)(lVar33 + 0x38);
      uStack_530 = *(undefined8 *)(lVar33 + 0x40);
      *(longlong *)((longlong)param_1 + 8) = lVar33;
      uStack_4e0 = 0;
      uStack_4d8 = 0;
      uStack_4ac = 0xffffffff;
      *(undefined8 *)(lVar33 + 8) = 0;
      *(undefined8 *)(lVar33 + 0x10) = 0;
      uStack_4d0 = 0;
      uStack_4c8 = 0;
      *(undefined8 *)(lVar33 + 0x18) = 0;
      *(undefined8 *)(lVar33 + 0x20) = 0;
      *(undefined8 *)(lVar33 + 0x28) = 0;
      *(undefined8 *)(lVar33 + 0x30) = 0;
      *(undefined8 *)(lVar33 + 0x38) = 0x3f8000003f800000;
      *(undefined8 *)(lVar33 + 0x40) = 0xffffffff3f800000;
      ::operator_delete(pvVar11,0x48);
      if (((local_700.Data <= (FScriptContainerElement *)&local_568) &&
          ((FScriptContainerElement *)&local_568 < local_700.Data + (longlong)local_6f8._4_4_ * 0x40
          )) && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar25)) {
        pcVar13 = (code *)swi(3);
        uVar26 = (*pcVar13)();
        return (bool)uVar26;
      }
      iVar29 = (uint)local_6f8;
      if ((uint)local_6f8 == local_6f8._4_4_) {
        iVar29 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&local_700,(int *)((longlong)&local_6f8 + 4));
      }
      local_6f8 = CONCAT44(local_6f8._4_4_,iVar29 + 1);
      lVar33 = (longlong)iVar29 * 0x40;
      *(undefined8 *)(local_700.Data + lVar33) = local_568;
      *(undefined8 *)(local_700.Data + lVar33 + 8) = uStack_560;
      *(undefined8 *)(local_700.Data + lVar33 + 0x10) = local_558;
      *(undefined8 *)(local_700.Data + lVar33 + 0x10 + 8) = uStack_550;
      *(undefined8 *)(local_700.Data + lVar33 + 0x20) = local_548;
      *(undefined8 *)(local_700.Data + lVar33 + 0x20 + 8) = uStack_540;
      *(undefined8 *)(local_700.Data + lVar33 + 0x30) = local_538;
      *(undefined8 *)(local_700.Data + lVar33 + 0x30 + 8) = uStack_530;
    } while ((*(int *)((longlong)param_1 + 0xe0) < 1) ||
            (iVar29 + 1 < *(int *)((longlong)param_1 + 0xe0)));
    while (lVar33 = **(longlong **)((longlong)param_1 + 8), lVar33 != 0) {
      pvVar11 = *(void **)((longlong)param_1 + 8);
      *(longlong *)((longlong)param_1 + 8) = lVar33;
      uStack_4a0 = 0;
      uStack_498 = 0;
      local_4a8 = 0;
      local_480 = 0;
      uStack_490 = 0;
      uStack_488 = 0;
      local_478 = 0x3f800000;
      uStack_474 = 0x3f800000;
      *(undefined8 *)(lVar33 + 8) = 0;
      *(undefined8 *)(lVar33 + 0x10) = 0;
      uStack_470 = 0x3f800000;
      uStack_46c = 0xffffffff;
      *(undefined8 *)(lVar33 + 0x18) = 0;
      *(undefined8 *)(lVar33 + 0x20) = 0;
      *(undefined8 *)(lVar33 + 0x28) = 0;
      *(undefined8 *)(lVar33 + 0x30) = 0;
      *(undefined8 *)(lVar33 + 0x38) = 0x3f8000003f800000;
      *(undefined8 *)(lVar33 + 0x40) = 0xffffffff3f800000;
      ::operator_delete(pvVar11,0x48);
    }
LAB_14911c57f:
    if ((pUVar31 != (UWorld *)0x0) &&
       (bVar25 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0x48)), bVar25)) {
      local_678 = (AActor *)0x0;
      pUVar34 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar51 + 0x60));
      if ((pUVar34 != (UObject *)0x0) && (*(longlong *)&pUVar34[5].field_0x8 != 0)) {
        local_678 = *(AActor **)(*(longlong *)&pUVar34[5].field_0x8 + 0xa8);
      }
      uVar47 = (ulonglong)(int)(uint)local_6f8;
      pFVar46 = local_700.Data + 0x38;
      local_618 = (TArray<TTuple<int,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>
                   *)(local_700.Data + uVar47 * 0x40);
      local_6f0 = (uint)local_6f8;
      uVar45 = uVar47;
      while( true ) {
        pTVar2 = local_618;
        pFVar54 = (FScriptContainerElement *)0x0;
        local_670 = pFVar46;
        if ((int)uVar47 != (int)uVar45) {
          local_708 = 0;
          `TCheckedPointerIterator<FAudioParticleData,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_708);
        }
        FVar51 = local_6e8;
        if ((TArray<TTuple<int,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>
             *)(pFVar46 + -0x38) == pTVar2) break;
        local_6e0 = (UInitialActiveSoundParams *)0x0;
        pFVar48 = pFVar54;
        if (local_198._8_4_ != local_164) {
          FVar44.Data = local_160;
          if (local_158.Data != (FScriptContainerElement *)0x0) {
            FVar44.Data = local_158.Data;
          }
          fVar9 = *(float *)(FVar44.Data +
                            (ulonglong)(local_150 - 1 & (uint)*(float *)(pFVar46 + 4)) * 4);
          while ((pFVar48 = pFVar54, fVar9 != -NAN &&
                 (pFVar48 = (FScriptContainerElement *)
                            (local_198._0_8_ + (longlong)(int)fVar9 * 0x20),
                 *(float *)pFVar48 != *(float *)(pFVar46 + 4)))) {
            fVar9 = *(float *)(pFVar48 + 0x18);
          }
        }
        pFVar46 = pFVar48 + 8;
        if (pFVar48 == (FScriptContainerElement *)0x0) {
          pFVar46 = pFVar54;
        }
        if ((0 < *(int *)((longlong)param_1 + 0x80) - *(int *)((longlong)param_1 + 0xac)) ||
           (pFVar46 != (FScriptContainerElement *)0x0)) {
          pUVar34 = GetTransientPackageAsObject();
          FObjectInitializer::AssertIfInConstructor
                    (pUVar34,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar35 = Z_Construct_UClass_UInitialActiveSoundParams_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_218,pUVar35);
          local_218._8_8_ = pUVar34;
          local_6e0 = (UInitialActiveSoundParams *)
                      StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_218);
          if (local_218._64_8_ != 0) {
            plVar49 = (longlong *)(local_218 + 0x50);
            if ((longlong *)local_218._104_8_ != (longlong *)0x0) {
              plVar49 = (longlong *)local_218._104_8_;
            }
            (**(code **)(*plVar49 + 0x10))(plVar49);
          }
          pTVar4 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x88);
          plVar49 = (longlong *)((longlong)param_1 + 0x78);
          local_608._padding_._0_4_ = 0;
          local_608._padding_._4_4_ = 1;
          local_608.UnvisitedBitMask = 0xffffffff;
          local_608.CurrentBitIndex = 0;
          local_608.BaseBitIndex = 0;
          local_608.Array = pTVar4;
          if (*(int *)((longlong)param_1 + 0xa0) != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_608);
          }
          TStack_520._padding_ = CONCAT44(local_608._padding_._4_4_,(undefined4)local_608._padding_)
          ;
          TStack_520.CurrentBitIndex = local_608.CurrentBitIndex;
          TStack_520.UnvisitedBitMask = local_608.UnvisitedBitMask;
          TStack_520._28_4_ = local_608._28_4_;
          TStack_520.BaseBitIndex = local_608.BaseBitIndex;
          local_418 = *(int *)((longlong)param_1 + 0x80) - *(int *)((longlong)param_1 + 0xac);
          local_440._16_8_ = local_608.Array;
          uStack_500 = CONCAT44(uStack_414,local_418);
          TStack_520.Array = local_608.Array;
          local_528 = plVar49;
          local_440._0_8_ = plVar49;
          local_440._8_8_ = TStack_520._padding_;
          local_440._24_8_ = TStack_520._16_8_;
          local_440._32_8_ = TStack_520._24_8_;
          pTVar36 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_440,pTVar4,
                               *(int *)((longlong)param_1 + 0xa0));
          pUVar21 = local_6e0;
          local_3c0 = pTVar36->_padding_;
          pTVar4 = pTVar36->Array;
          uVar41._0_4_ = pTVar36->UnvisitedBitMask;
          uVar41._4_4_ = pTVar36->CurrentBitIndex;
          uStack_3a8 = *(undefined8 *)&pTVar36->BaseBitIndex;
          pTStack_3b8 = pTVar4;
          local_3b0 = uVar41;
          while( true ) {
            plVar23 = local_528;
            if ((int)local_528[1] - *(int *)((longlong)local_528 + 0x34) != (int)uStack_500) {
              local_707 = 0;
              `TSparseArray<TSparseSetElement<FNiagaraVariable>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_707);
            }
            pUVar22 = local_6e0;
            if (((TStack_520.CurrentBitIndex == uVar41._4_4_) && (TStack_520.Array == pTVar4)) &&
               (plVar23 == plVar49)) break;
            pFVar37 = ConvertVariableToAudioParam
                                (&local_398,
                                 (FNiagaraVariable *)
                                 (*plVar23 + (longlong)TStack_520.CurrentBitIndex * 0x28));
            pFVar12 = (FAudioParameter *)(pUVar21->AudioParams).AllocatorInstance.Data;
            if (((pFVar12 <= pFVar37) && (pFVar37 < pFVar12 + (pUVar21->AudioParams).ArrayMax)) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar25)) {
              pcVar13 = (code *)swi(3);
              uVar26 = (*pcVar13)();
              return (bool)uVar26;
            }
            iVar29 = (pUVar21->AudioParams).ArrayNum;
            piVar3 = &(pUVar21->AudioParams).ArrayMax;
            if (iVar29 == *piVar3) {
              iVar29 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x8a0,&(pUVar21->AudioParams).AllocatorInstance,piVar3);
            }
            (pUVar21->AudioParams).ArrayNum = iVar29 + 1;
            FAudioParameter::FAudioParameter
                      ((FAudioParameter *)
                       ((pUVar21->AudioParams).AllocatorInstance.Data + (longlong)iVar29 * 0xa0),
                       pFVar37);
            DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
                      ((TSharedPtr<Audio::IProxyData,1> *)
                       local_398.ObjectProxies.AllocatorInstance.Data,
                       local_398.ObjectProxies.ArrayNum);
            if ((TSharedPtr<Audio::IProxyData,1> *)local_398.ObjectProxies.AllocatorInstance.Data !=
                (TSharedPtr<Audio::IProxyData,1> *)0x0) {
              FMemory::Free(local_398.ObjectProxies.AllocatorInstance.Data);
            }
            DestructItems<FString,int>
                      ((FString *)local_398.ArrayStringParam.AllocatorInstance.Data,
                       local_398.ArrayStringParam.ArrayNum);
            if (local_398.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_398.ArrayStringParam.AllocatorInstance.Data);
            }
            if (local_398.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_398.ArrayObjectParam.AllocatorInstance.Data);
            }
            if (local_398.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_398.ArrayIntParam.AllocatorInstance.Data);
            }
            if (local_398.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_398.ArrayBoolParam.AllocatorInstance.Data);
            }
            if (local_398.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_398.ArrayFloatParam.AllocatorInstance.Data);
            }
            if (local_398.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_398.StringParam.Data.AllocatorInstance.Data);
            }
            TStack_520.UnvisitedBitMask = TStack_520.UnvisitedBitMask & ~TStack_520._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_520);
          }
          param_1 = local_680;
          if (pFVar46 != (FScriptContainerElement *)0x0) {
            fVar9 = *(float *)(pFVar46 + 8);
            lVar52 = *(longlong *)pFVar46;
            lVar33 = lVar52 + (longlong)(int)fVar9 * 0x28;
            while( true ) {
              if (*(float *)(pFVar46 + 8) != fVar9) {
                local_706[0] = 0;
                `TCheckedPointerIterator<FAudioInitialParamData,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_706);
              }
              param_1 = local_680;
              if (lVar52 == lVar33) break;
              pFVar37 = ConvertVariableToAudioParam(&local_2f8,(FNiagaraVariable *)(lVar52 + 8));
              pFVar12 = (FAudioParameter *)(pUVar22->AudioParams).AllocatorInstance.Data;
              if (((pFVar12 <= pFVar37) && (pFVar37 < pFVar12 + (pUVar22->AudioParams).ArrayMax)) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar25)) {
                pcVar13 = (code *)swi(3);
                uVar26 = (*pcVar13)();
                return (bool)uVar26;
              }
              iVar29 = (pUVar22->AudioParams).ArrayNum;
              piVar3 = &(pUVar22->AudioParams).ArrayMax;
              if (iVar29 == *piVar3) {
                iVar29 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x8a0,&(pUVar22->AudioParams).AllocatorInstance,piVar3);
              }
              (pUVar22->AudioParams).ArrayNum = iVar29 + 1;
              FAudioParameter::FAudioParameter
                        ((FAudioParameter *)
                         ((pUVar22->AudioParams).AllocatorInstance.Data + (longlong)iVar29 * 0xa0),
                         pFVar37);
              DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
                        ((TSharedPtr<Audio::IProxyData,1> *)
                         local_2f8.ObjectProxies.AllocatorInstance.Data,
                         local_2f8.ObjectProxies.ArrayNum);
              if ((TSharedPtr<Audio::IProxyData,1> *)local_2f8.ObjectProxies.AllocatorInstance.Data
                  != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
                FMemory::Free(local_2f8.ObjectProxies.AllocatorInstance.Data);
              }
              DestructItems<FString,int>
                        ((FString *)local_2f8.ArrayStringParam.AllocatorInstance.Data,
                         local_2f8.ArrayStringParam.ArrayNum);
              if (local_2f8.ArrayStringParam.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2f8.ArrayStringParam.AllocatorInstance.Data);
              }
              if (local_2f8.ArrayObjectParam.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2f8.ArrayObjectParam.AllocatorInstance.Data);
              }
              if (local_2f8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              {
                FMemory::Free(local_2f8.ArrayIntParam.AllocatorInstance.Data);
              }
              if (local_2f8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              {
                FMemory::Free(local_2f8.ArrayBoolParam.AllocatorInstance.Data);
              }
              if (local_2f8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 ) {
                FMemory::Free(local_2f8.ArrayFloatParam.AllocatorInstance.Data);
              }
              if (local_2f8.StringParam.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2f8.StringParam.Data.AllocatorInstance.Data);
              }
              lVar52 = lVar52 + 0x28;
            }
          }
        }
        pUVar38 = (USoundConcurrency *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x58));
        pUVar39 = (USoundAttenuation *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x50));
        pFVar46 = local_670;
        fVar9 = *(float *)local_670;
        fVar5 = *(float *)(local_670 + -4);
        fVar6 = *(float *)(local_670 + -8);
        dVar14 = *(double *)(local_670 + -0x20);
        dVar15 = *(double *)(local_670 + -0x18);
        dVar7 = *(double *)(local_670 + -0x10);
        dVar16 = *(double *)(local_670 + -0x38);
        dVar17 = *(double *)(local_670 + -0x30);
        dVar8 = *(double *)(local_670 + -0x28);
        pUVar40 = (USoundBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x48));
        local_408.Pitch = dVar14;
        local_408.Yaw = dVar15;
        local_408.Roll = dVar7;
        local_3e8._s_0.X = dVar16;
        local_3e8._s_0.Y = dVar17;
        local_3e8._s_0.Z = dVar8;
        UGameplayStatics::PlaySoundAtLocation
                  ((UObject *)local_5d0,pUVar40,(TVector<double> *)&local_3e8._s_0,&local_408,fVar6,
                   fVar5,fVar9,pUVar39,pUVar38,local_678,local_6e0);
        uVar47 = local_6f8 & 0xffffffff;
        pFVar46 = pFVar46 + 0x40;
        uVar45 = (ulonglong)local_6f0;
      }
    }
    if (local_700.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_700.Data);
    }
  }
  local_258[0] = 0;
  local_248 = (code *)0x0;
  plStack_220 = (longlong *)0x0;
  local_148.Elements._0_8_ = 0;
  local_148.Elements._8_8_ = 0;
  local_148.Elements._32_8_ = 0;
  local_148.Elements._40_4_ = 0;
  local_148.Elements._44_4_ = 0x80;
  local_148.Elements._48_4_ = 0xffffffff;
  local_148.Elements._52_4_ = 0;
  local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_148.HashSize = 0;
  while( true ) {
    plVar49 = plStack_220;
    uVar24 = local_228;
    uVar41 = uStack_230;
    lVar52 = local_238;
    pUVar34 = (UObject *)0x0;
    lVar33 = **(longlong **)((longlong)param_1 + 0x28);
    iVar29 = 0;
    if (lVar33 == 0) break;
    local_258[0] = *(int *)(lVar33 + 0x10);
    pcVar13 = *(code **)(lVar33 + 0x20);
    uVar18 = *(undefined8 *)(lVar33 + 0x28);
    local_238 = *(longlong *)(lVar33 + 0x30);
    uStack_230 = *(undefined8 *)(lVar33 + 0x38);
    local_228 = *(undefined8 *)(lVar33 + 0x40);
    plStack_220 = *(longlong **)(lVar33 + 0x48);
    *(code **)(lVar33 + 0x20) = local_248;
    *(undefined8 *)(lVar33 + 0x28) = uStack_240;
    *(longlong *)(lVar33 + 0x30) = lVar52;
    *(undefined8 *)(lVar33 + 0x38) = uVar41;
    *(undefined8 *)(lVar33 + 0x40) = uVar24;
    *(longlong **)(lVar33 + 0x48) = plVar49;
    pvVar11 = *(void **)((longlong)param_1 + 0x28);
    *(longlong *)((longlong)param_1 + 0x28) = lVar33;
    local_f4 = 0;
    local_ec = 0;
    local_f8 = 0;
    *(undefined4 *)(lVar33 + 0x10) = 0;
    local_e8 = *(longlong *)(lVar33 + 0x20);
    uStack_e0 = *(undefined8 *)(lVar33 + 0x28);
    local_d8 = *(longlong *)(lVar33 + 0x30);
    uStack_d0 = *(undefined8 *)(lVar33 + 0x38);
    local_c8 = *(undefined8 *)(lVar33 + 0x40);
    plStack_c0 = *(longlong **)(lVar33 + 0x48);
    *(undefined8 *)(lVar33 + 0x20) = 0;
    *(undefined8 *)(lVar33 + 0x28) = 0;
    *(undefined4 *)(lVar33 + 0x30) = 0;
    *(undefined4 *)(lVar33 + 0x34) = 0;
    *(undefined4 *)(lVar33 + 0x38) = 0;
    *(undefined4 *)(lVar33 + 0x3c) = 0;
    *(undefined4 *)(lVar33 + 0x40) = 0;
    *(undefined4 *)(lVar33 + 0x44) = 0;
    *(undefined4 *)(lVar33 + 0x48) = 0;
    *(undefined4 *)(lVar33 + 0x4c) = 0;
    local_248 = pcVar13;
    uStack_240 = uVar18;
    if (local_e8 != 0) {
      plVar49 = &local_d8;
      if (plStack_c0 != (longlong *)0x0) {
        plVar49 = plStack_c0;
      }
      (**(code **)(*plVar49 + 0x10))();
    }
    if (pvVar11 != (void *)0x0) {
      if (*(longlong *)((longlong)pvVar11 + 0x20) != 0) {
        plVar49 = (longlong *)((longlong)pvVar11 + 0x30);
        if (*(longlong **)((longlong)pvVar11 + 0x48) != (longlong *)0x0) {
          plVar49 = *(longlong **)((longlong)pvVar11 + 0x48);
        }
        (**(code **)(*plVar49 + 0x10))();
      }
      ::operator_delete(pvVar11,0x50);
    }
    pUVar53 = (UObject *)0x0;
    if (0 < local_258[0]) {
      uVar30 = *(uint *)((longlong)param_1 + 0x40);
      pUVar58 = pUVar34;
      uVar59 = uVar30;
      if (0 < (int)uVar30) {
        do {
          uVar55 = uVar59 >> 1;
          iVar29 = uVar55 + (int)pUVar58;
          if (*(int *)(*(longlong *)((longlong)param_1 + 0x38) + (longlong)iVar29 * 0xc) <
              local_258[0]) {
            pUVar58 = (UObject *)(ulonglong)((uVar59 & 1) + iVar29);
          }
          iVar29 = (int)pUVar58;
          uVar59 = uVar55;
        } while (uVar55 != 0);
      }
      if (((iVar29 < (int)uVar30) &&
          (*(int *)(*(longlong *)((longlong)param_1 + 0x38) + (longlong)iVar29 * 0xc) <=
           local_258[0])) && (pUVar34 = pUVar53, iVar29 != -1)) {
        if ((iVar29 < 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar13 = (code *)swi(3);
          uVar26 = (*pcVar13)();
          return (bool)uVar26;
        }
        this_00 = (FWeakObjectPtr *)
                  (*(longlong *)((longlong)param_1 + 0x38) + ((longlong)iVar29 * 3 + 1) * 4);
        if ((this_00 != (FWeakObjectPtr *)0x0) &&
           (bVar25 = FWeakObjectPtr::IsValid(this_00), bVar25)) {
          pUVar34 = FWeakObjectPtr::Get(this_00);
        }
      }
    }
    if (local_248 != (code *)0x0) {
      local_5c8 = FVar51;
      local_5c0 = pUVar34;
      local_5b8 = param_1;
      UE::Core::Private::Function::CheckCallable(local_248);
      pcVar13 = local_248;
      plVar49 = &local_238;
      if (plStack_220 != (longlong *)0x0) {
        plVar49 = plStack_220;
      }
      uVar41 = (**(code **)(*plVar49 + 8))();
      (*pcVar13)(uVar41,&local_5b8,&local_5c0,&local_5c8);
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_148,local_5e0,(bool *)local_258);
  }
  pTVar2 = (TArray<TTuple<int,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>
            *)((longlong)param_1 + 0x38);
  uStack_610 = 0;
  lStack_4f0 = (ulonglong)uStack_60c << 0x20;
  uVar30 = 0;
  local_618 = pTVar2;
  local_4f8 = pTVar2;
LAB_14911cfa0:
  do {
    iVar29 = (int)pUVar34;
    if ((iVar29 < 0) || (*(int *)((longlong)param_1 + 0x40) <= iVar29)) {
      local_148.HashSize = 0;
      if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_148.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_148.Elements);
      if (local_248 != (code *)0x0) {
        plVar49 = &local_238;
        if (plStack_220 != (longlong *)0x0) {
          plVar49 = plStack_220;
        }
        (**(code **)(*plVar49 + 0x10))();
      }
      if (local_6c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6c0.Data);
      }
      local_150 = 0;
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TArray<FAudioInitialParamData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TArray<FAudioInitialParamData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,TArray<FAudioInitialParamData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_198);
      FCsvProfiler::EndStat("CoreSystems_Audio",local_6a8);
      return false;
    }
    if ((iVar29 < 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar13 = (code *)swi(3);
      uVar26 = (*pcVar13)();
      return (bool)uVar26;
    }
    uVar59 = *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar29 * 0xc);
    if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
      FVar50 = (ForElementType<FSetElementId>)&local_148.Hash;
      if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar50 = local_148.Hash.SecondaryData;
      }
      for (iVar29 = *(int *)((longlong)FVar50 + (ulonglong)(local_148.HashSize - 1U & uVar59) * 4);
          iVar29 != -1; iVar29 = *(int *)(local_148.Elements._0_8_ + 4 + (longlong)iVar29 * 0xc)) {
        if (*(uint *)(local_148.Elements._0_8_ + (longlong)iVar29 * 0xc) == uVar59) {
          uVar59 = uVar30;
          if (iVar29 != -1) goto LAB_14911d321;
          break;
        }
      }
    }
    FVar43 = StatPtr_STAT_NiagaraAudioDIStopSound;
    if (StatPtr_STAT_NiagaraAudioDIStopSound ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraAudioDIStopSound>)0x0) {
      pFVar42 = ::FName::FName(&local_410,"STAT_NiagaraAudioDIStopSound");
      FVar43 = (FThreadSafeStaticStat<FStat_STAT_NiagaraAudioDIStopSound>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraAudioDIStopSound,
                          *pFVar42,L"Audio DI stop persistent sound","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar51 = *(FName *)FVar43;
    bVar19 = false;
    bVar25 = false;
    local_658.ComparisonIndex.Value = 0;
    local_658.Number = 0;
    if ((FVar51.ComparisonIndex.Value.Value == 0) && (FVar51.Number == 0)) {
LAB_14911d17e:
      bVar20 = false;
      FVar51 = local_658;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_6ac.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_6ac._s_0,(char *)*(FName *)((longlong)FVar43 + 0x10));
        bVar19 = false;
        bVar25 = true;
        if (-1 < CpuChannel->Enabled) {
          local_668.ComparisonIndex.Value = FVar51.ComparisonIndex.Value.Value;
          local_668.Number = FVar51.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_668,(wchar_t *)*(FName *)((longlong)FVar43 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioPlayer.cpp"
                     ,0x137);
          bVar19 = true;
          bVar25 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14911d17e;
      local_6e8 = FVar51;
      local_658 = FVar51;
      FThreadStats::AddMessage(FVar51,CycleScopeStart);
      bVar20 = true;
    }
    uVar59 = 0;
    if ((int)uVar30 < *(int *)((longlong)param_1 + 0x40)) {
      uVar59 = ~uVar30 >> 0x1f;
    }
    if ((uVar59 == 0) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar27)) {
      pcVar13 = (code *)swi(3);
      uVar26 = (*pcVar13)();
      return (bool)uVar26;
    }
    local_660 = *(FWeakObjectPtr *)
                 ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar30 * 0xc + 4);
    bVar27 = FWeakObjectPtr::IsValid(&local_660);
    if (((bVar27) && (pUVar34 = FWeakObjectPtr::Get(&local_660), pUVar34 != (UObject *)0x0)) &&
       (cVar28 = (**(code **)(*(longlong *)&pUVar34[0xe].field_0x20 + 0xa8))
                           (&pUVar34[0xe].field_0x20), cVar28 != '\0')) {
      (**(code **)(*(longlong *)pUVar34 + 0x668))(pUVar34);
    }
    TArray<TTuple<int,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>
    ::RemoveAt(pTVar2,uVar30,Default);
    uVar59 = uVar30 - 1;
    if (bVar25) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar19) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar20) && (FVar51 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      this_02 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_02 == (FThreadStats *)0x0) {
        this_03 = FThreadStatsPool::Get();
        this_02 = FThreadStatsPool::GetFromPool(this_03);
      }
      if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
        local_5b0.NameAndInfo.Index = FVar51.ComparisonIndex.Value;
        local_5b0.NameAndInfo.Number = FVar51.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_5a0);
        local_5b0.StatData.Pad[4] = '\0';
        local_5b0.StatData.Pad[5] = '\0';
        local_5b0.StatData.Pad[6] = '\0';
        local_5b0.StatData.Pad[7] = '\0';
        local_5b0.StatData.Pad[0] = local_5a0.s.LowPart._0_1_;
        local_5b0.StatData.Pad[1] = local_5a0.s.LowPart._1_1_;
        local_5b0.StatData.Pad[2] = local_5a0.s.LowPart._2_1_;
        local_5b0.StatData.Pad[3] = local_5a0.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_02,&local_5b0);
        piVar3 = &this_02->ScopeCount;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          FThreadStats::Flush(this_02,false,false);
          pUVar34 = (UObject *)(ulonglong)uVar30;
          goto LAB_14911cfa0;
        }
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_02,false,false);
        }
      }
    }
LAB_14911d321:
    uVar30 = uVar59 + 1;
    pUVar34 = (UObject *)(ulonglong)uVar30;
  } while( true );
}

// PlayOneShotAudio @ 14911e480

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceAudioPlayer::PlayOneShotAudio
          (UNiagaraDataInterfaceAudioPlayer *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TNode *pTVar5;
  float fVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  float fVar16;
  float *pfVar17;
  float *pfVar18;
  TVector<double> *pTVar19;
  TNode *pTVar20;
  int iVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  int iVar26;
  longlong lVar27;
  float *pfVar28;
  float *pfVar29;
  longlong lVar30;
  int iVar31;
  float *local_res18;
  float *local_res20;
  float *local_288;
  float *local_280;
  float *local_278;
  float *local_270;
  float *local_268;
  float *local_260;
  int local_250 [2];
  float local_248;
  float local_244;
  undefined4 local_240;
  float *local_238;
  float *local_230;
  int local_228 [2];
  float *local_220;
  FAudioPlayerInterface_InstanceData *local_218;
  float *local_210;
  float *local_208;
  int local_200 [2];
  float *local_1f8;
  float *local_1f0;
  int local_1e8 [2];
  float *local_1e0;
  float *local_1d8;
  int local_1d0 [2];
  float *local_1c8;
  float *local_1c0;
  int local_1b8 [2];
  float *local_1b0;
  float *local_1a8;
  int local_1a0 [2];
  float *local_198;
  float *local_190;
  int local_188 [2];
  float *local_180;
  float *local_178;
  int local_170 [2];
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  FString local_110;
  undefined1 local_f8 [52];
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  int local_b8;
  TVector<double> local_a8 [4];
  
  VectorVM::FUserPtrHandler<FAudioPlayerInterface_InstanceData>::
  FUserPtrHandler<FAudioPlayerInterface_InstanceData>
            ((FUserPtrHandler<FAudioPlayerInterface_InstanceData> *)&local_220,param_1);
  local_200[0] = 0;
  local_res18 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_200);
  iVar13 = local_200[0];
  local_res18 = local_res18 + local_200[0] * param_1->PerInstanceFnInstanceIdx;
  local_210 = local_res18;
  local_208 = local_res18;
  FNDIInputParam<FNiagaraPosition>::FNDIInputParam<FNiagaraPosition>
            ((FNDIInputParam<FNiagaraPosition> *)local_f8,param_1);
  local_1e8[0] = 0;
  local_280 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1e8);
  iVar14 = local_1e8[0];
  local_228[0] = 0;
  local_280 = local_280 + local_1e8[0] * param_1->PerInstanceFnInstanceIdx;
  local_1f8 = local_280;
  local_1f0 = local_280;
  local_288 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_228);
  iVar26 = local_228[0];
  local_1d0[0] = 0;
  local_288 = local_288 + local_228[0] * param_1->PerInstanceFnInstanceIdx;
  local_238 = local_288;
  local_230 = local_288;
  local_res20 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1d0);
  local_1b8[0] = 0;
  local_res20 = local_res20 + local_1d0[0] * param_1->PerInstanceFnInstanceIdx;
  local_1e0 = local_res20;
  local_1d8 = local_res20;
  local_278 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1b8);
  local_1a0[0] = 0;
  local_278 = local_278 + local_1b8[0] * param_1->PerInstanceFnInstanceIdx;
  local_1c8 = local_278;
  local_1c0 = local_278;
  local_270 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1a0);
  local_188[0] = 0;
  local_270 = local_270 + local_1a0[0] * param_1->PerInstanceFnInstanceIdx;
  local_1b0 = local_270;
  local_1a8 = local_270;
  local_268 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_188);
  local_170[0] = 0;
  local_268 = local_268 + local_188[0] * param_1->PerInstanceFnInstanceIdx;
  local_198 = local_268;
  local_190 = local_268;
  local_260 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_170);
  local_250[0] = 0;
  local_260 = local_260 + local_170[0] * param_1->PerInstanceFnInstanceIdx;
  local_180 = local_260;
  local_178 = local_260;
  pfVar17 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_250);
  iVar21 = local_250[0] * param_1->PerInstanceFnInstanceIdx;
  if (local_218 == (FAudioPlayerInterface_InstanceData *)0x0) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_110,(UObject *)0x0);
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("InstData.Get()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioPlayer.cpp"
                        ,0x3d8,L"Audio player interface has invalid instance data. %s");
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    iVar26 = local_228[0];
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  bVar15 = FWeakObjectPtr::IsValid(&(local_218->SoundToPlay).WeakPtr);
  if ((!bVar15) || (bVar15 = true, local_218->bValidOneShotSound == false)) {
    bVar15 = false;
  }
  iVar31 = 0;
  if (0 < param_1->NumInstances) {
    local_130 = (longlong)iVar13 << 2;
    local_128 = (longlong)local_b8 << 2;
    local_120 = (longlong)(int)local_f8._40_4_ << 2;
    local_118 = (longlong)(int)local_f8._16_4_ << 2;
    lVar27 = (longlong)local_1d0[0] << 2;
    local_168 = (longlong)iVar26 << 2;
    lVar30 = (longlong)local_250[0];
    local_160 = (longlong)iVar14 << 2;
    local_158 = (longlong)local_1b8[0] << 2;
    local_150 = (longlong)local_1a0[0] << 2;
    local_148 = (longlong)local_188[0] << 2;
    local_140 = (longlong)local_170[0] << 2;
    local_110.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)CONCAT44(fStack_c4,local_f8._48_4_);
    pfVar29 = (float *)local_f8._0_8_;
    pfVar17 = pfVar17 + iVar21;
    local_138 = lVar27;
    do {
      local_248 = *pfVar29;
      pfVar18 = (float *)(local_130 + (longlong)local_res18);
      local_244 = *(float *)local_f8._24_8_;
      fVar6 = *local_res18;
      local_220 = (float *)(local_120 + local_f8._24_8_);
      pfVar29 = (float *)(local_118 + (longlong)pfVar29);
      local_240 = *(undefined4 *)local_110.Data.AllocatorInstance.Data;
      local_110.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data + local_128;
      pTVar19 = FNiagaraLWCConverter::ConvertSimulationPositionToWorld
                          (&local_218->LWCConverter,local_a8,(FNiagaraPosition *)&local_248);
      dVar11 = (pTVar19->field0_0x0)._s_0.X;
      dVar12 = (pTVar19->field0_0x0)._s_0.Y;
      uVar9 = *(undefined4 *)((longlong)&pTVar19->field0_0x0 + 0x10);
      uVar10 = *(undefined4 *)((longlong)&pTVar19->field0_0x0 + 0x14);
      pfVar1 = (float *)(lVar27 + (longlong)local_res20);
      fVar2 = *local_288;
      fVar3 = *local_res20;
      local_288 = (float *)(local_168 + (longlong)local_288);
      pfVar28 = (float *)(local_160 + (longlong)local_280);
      fVar4 = *local_280;
      pfVar22 = (float *)(local_158 + (longlong)local_278);
      local_f8._48_4_ = *local_278;
      pfVar23 = (float *)(local_150 + (longlong)local_270);
      fStack_c4 = *local_270;
      pfVar24 = (float *)(local_148 + (longlong)local_268);
      fStack_c0 = *local_268;
      pfVar25 = (float *)(local_140 + (longlong)local_260);
      fStack_bc = *local_260;
      fVar16 = 0.0;
      if ((bVar15) && (fVar6 != 0.0)) {
        pTVar20 = ::operator_new(0x48);
        fVar16 = 0.0;
        if (pTVar20 != (TNode *)0x0) {
          pTVar20->NextNode = (TNode *)0x0;
          (pTVar20->Item).Position.field0_0x0._s_0.X = dVar11;
          (pTVar20->Item).Position.field0_0x0._s_0.Y = dVar12;
          *(undefined4 *)((longlong)&(pTVar20->Item).Position.field0_0x0 + 0x10) = uVar9;
          *(undefined4 *)((longlong)&(pTVar20->Item).Position.field0_0x0 + 0x14) = uVar10;
          (pTVar20->Item).Rotation.Pitch = (double)fVar4;
          auVar8._8_4_ = SUB84((double)fVar3,0);
          auVar8._0_8_ = (double)fVar2;
          auVar8._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
          (pTVar20->Item).Rotation.Yaw = (double)fVar2;
          (pTVar20->Item).Rotation.Roll = (double)auVar8._8_8_;
          (pTVar20->Item).Volume = (float)local_f8._48_4_;
          (pTVar20->Item).Pitch = fStack_c4;
          (pTVar20->Item).StartTime = fStack_c0;
          (pTVar20->Item).ParticleID = (int)fStack_bc;
          if (((ulonglong)local_218 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar5 = (local_218->PlayAudioQueue).Head;
          (local_218->PlayAudioQueue).Head = pTVar20;
          UNLOCK();
          if (((ulonglong)pTVar5 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar5->NextNode = pTVar20;
          UNLOCK();
          fVar16 = -NAN;
          lVar27 = local_138;
        }
      }
      iVar31 = iVar31 + 1;
      *pfVar17 = fVar16;
      local_f8._24_8_ = local_220;
      pfVar17 = pfVar17 + lVar30;
      local_res18 = pfVar18;
      local_res20 = pfVar1;
      local_280 = pfVar28;
      local_278 = pfVar22;
      local_270 = pfVar23;
      local_268 = pfVar24;
      local_260 = pfVar25;
    } while (iVar31 < param_1->NumInstances);
  }
  return;
}

// PlayPersistentAudio @ 14911ea90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014911f37c) */
/* WARNING: Removing unreachable block (ram,0x00014911f390) */
/* WARNING: Removing unreachable block (ram,0x00014911f394) */
/* WARNING: Type propagation algorithm not settling */
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

void __thiscall
UNiagaraDataInterfaceAudioPlayer::PlayPersistentAudio
          (UNiagaraDataInterfaceAudioPlayer *this,FVectorVMExternalFunctionContext *param_1)

{
  FThreadSafeCounter *pFVar1;
  TQueue<FPersistentAudioParticleData,0> *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  TNode *pTVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  FVectorVMExternalFunctionContext *pFVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  bool bVar27;
  float *pfVar28;
  FString *pFVar29;
  float *pfVar30;
  longlong *plVar31;
  code *pcVar32;
  TNode *pTVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  int iVar38;
  float fVar39;
  FAudioPlayerInterface_InstanceData *pFVar40;
  float *pfVar41;
  longlong lVar42;
  UNiagaraDataInterfaceAudioPlayer *pUVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auStack_458 [32];
  FScriptContainerElement *local_438;
  int local_428;
  float *local_420;
  FScriptContainerElement *local_418;
  FVectorVMExternalFunctionContext *local_410;
  UNiagaraDataInterfaceAudioPlayer *local_408;
  float *local_400;
  int local_3f8 [2];
  float *local_3f0;
  float *local_3e8;
  float *local_3e0;
  float *local_3d8;
  float *local_3d0;
  float *local_3c8;
  float *local_3c0;
  float *local_3b8;
  float *local_3b0;
  float *local_3a8;
  float local_3a0;
  float fStack_39c;
  TVector<float>_u_0 local_398;
  float *local_388;
  float *local_380;
  int local_378 [2];
  FUserPtrHandler<FAudioPlayerInterface_InstanceData> local_370;
  float *local_360;
  float *local_358;
  int local_350 [2];
  FScriptContainerElement *local_348;
  FScriptContainerElement *local_340;
  int local_338 [2];
  float *local_330;
  float *local_328;
  int local_320 [2];
  float *local_318;
  float *local_310;
  int local_308 [2];
  float *local_300;
  float *local_2f8;
  int local_2f0 [2];
  float *local_2e8;
  float *local_2e0;
  int local_2d8 [2];
  FString local_2d0;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  TVector<double>_u_0 local_270;
  float local_258;
  undefined4 uStack_254;
  double dStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  FNDIInputParam<UE::Math::TVector<float>_> local_208;
  FNDIInputParam<UE::Math::TVector<float>_> local_1b8;
  float local_168;
  code *local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  float fStack_140;
  float fStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  longlong *plStack_130;
  code *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_458;
  local_410 = param_1;
  local_408 = this;
  VectorVM::FUserPtrHandler<FAudioPlayerInterface_InstanceData>::
  FUserPtrHandler<FAudioPlayerInterface_InstanceData>(&local_370,param_1);
  local_350[0] = 0;
  local_420 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_350);
  iVar17 = local_350[0];
  local_338[0] = 0;
  local_420 = local_420 + local_350[0] * param_1->PerInstanceFnInstanceIdx;
  local_360 = local_420;
  local_358 = local_420;
  pfVar28 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_338);
  iVar18 = local_338[0];
  local_418 = (FScriptContainerElement *)
              (pfVar28 + local_338[0] * param_1->PerInstanceFnInstanceIdx);
  local_348 = local_418;
  local_340 = local_418;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_1b8,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_208,param_1);
  local_320[0] = 0;
  local_3f0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_320);
  iVar19 = local_320[0];
  local_308[0] = 0;
  local_3f0 = local_3f0 + local_320[0] * param_1->PerInstanceFnInstanceIdx;
  local_330 = local_3f0;
  local_328 = local_3f0;
  local_3e8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_308);
  iVar20 = local_308[0];
  local_2f0[0] = 0;
  local_3e8 = local_3e8 + local_308[0] * param_1->PerInstanceFnInstanceIdx;
  local_318 = local_3e8;
  local_310 = local_3e8;
  local_3e0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_2f0);
  iVar21 = local_2f0[0];
  local_378[0] = 0;
  local_3e0 = local_3e0 + local_2f0[0] * param_1->PerInstanceFnInstanceIdx;
  local_300 = local_3e0;
  local_2f8 = local_3e0;
  local_3d8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_378);
  iVar38 = local_378[0];
  local_3d8 = local_3d8 + local_378[0] * param_1->PerInstanceFnInstanceIdx;
  local_2d8[0] = 0;
  local_388 = local_3d8;
  local_380 = local_3d8;
  local_3d0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_2d8);
  local_3f8[0] = 0;
  local_3d0 = local_3d0 + local_2d8[0] * param_1->PerInstanceFnInstanceIdx;
  local_2e8 = local_3d0;
  local_2e0 = local_3d0;
  pfVar28 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_3f8);
  pfVar28 = pfVar28 + local_3f8[0] * param_1->PerInstanceFnInstanceIdx;
  if (local_370.Ptr == (FAudioPlayerInterface_InstanceData *)0x0) {
    local_400 = pfVar28;
    pFVar29 = UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)local_408,&local_2d0,(UObject *)0x0);
    if ((pFVar29->Data).ArrayNum == 0) {
      local_438 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_438 = (pFVar29->Data).AllocatorInstance.Data;
    }
    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                       ("InstData.Get()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioPlayer.cpp"
                        ,0x407,L"Audio player interface has invalid instance data. %s");
    if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
    }
    iVar38 = local_378[0];
    if (bVar27) {
      pcVar32 = (code *)swi(3);
      (*pcVar32)();
      return;
    }
  }
  pFVar16 = local_410;
  local_428 = 0;
  if (0 < local_410->NumInstances) {
    local_2b8 = (longlong)local_1b8.Y.AdvanceOffset << 2;
    local_290 = (longlong)local_1b8.X.AdvanceOffset << 2;
    local_2b0 = (longlong)local_208.Z.AdvanceOffset << 2;
    local_2a8 = (longlong)local_208.Y.AdvanceOffset << 2;
    local_2a0 = (longlong)local_208.X.AdvanceOffset << 2;
    local_298 = (longlong)iVar20 << 2;
    local_2c0 = (longlong)iVar21 << 2;
    local_278 = (longlong)iVar17 << 2;
    local_400 = (float *)((longlong)local_1b8.Z.AdvanceOffset << 2);
    lVar42 = (longlong)local_3f8[0];
    local_288 = (longlong)iVar38 << 2;
    local_280 = (longlong)local_2d8[0] << 2;
    local_3c8 = local_1b8.Y.InputPtr;
    local_3c0 = local_1b8.X.InputPtr;
    local_3b8 = local_208.Z.InputPtr;
    local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)((longlong)iVar18 << 2);
    pUVar43 = (UNiagaraDataInterfaceAudioPlayer *)((longlong)iVar19 << 2);
    local_3b0 = local_208.Y.InputPtr;
    local_3a8 = local_208.X.InputPtr;
    pFVar40 = local_370.Ptr;
    local_408 = pUVar43;
    do {
      fVar12 = *local_420;
      local_410 = (FVectorVMExternalFunctionContext *)
                  ((longlong)local_1b8.Z.InputPtr + (longlong)local_400);
      fVar39 = *(float *)local_418;
      local_420 = (float *)((longlong)local_420 + local_278);
      local_418 = local_418 + local_2d0.Data.AllocatorInstance.Data;
      local_398._s_0.Y = *local_3c8;
      local_398._s_0.X = *local_3c0;
      local_398._s_0.Z = *local_1b8.Z.InputPtr;
      local_3c8 = (float *)(local_2b8 + (longlong)local_3c8);
      local_3c0 = (float *)(local_290 + (longlong)local_3c0);
      FNiagaraLWCConverter::ConvertSimulationVectorToWorld
                (&pFVar40->LWCConverter,(TVector<double> *)&local_270._s_0,
                 (TVector<float> *)&local_398._s_0);
      uVar22 = uStack_f0;
      fVar26 = fStack_13c;
      fVar25 = fStack_140;
      uVar24 = uStack_144;
      uVar23 = local_148;
      pfVar30 = (float *)(local_2b0 + (longlong)local_3b8);
      fVar3 = *local_3b0;
      fVar4 = *local_3b8;
      local_3b0 = (float *)(local_2a8 + (longlong)local_3b0);
      pfVar41 = (float *)(local_2a0 + (longlong)local_3a8);
      fVar5 = *local_3a8;
      fVar6 = *local_3f0;
      local_3f0 = (float *)((longlong)pUVar43 + (longlong)local_3f0);
      pfVar34 = (float *)(local_298 + (longlong)local_3e8);
      fVar7 = *local_3e8;
      pfVar35 = (float *)(local_2c0 + (longlong)local_3e0);
      fVar8 = *local_3e0;
      pfVar36 = (float *)(local_288 + (longlong)local_3d8);
      fVar9 = *local_3d8;
      pfVar37 = (float *)(local_280 + (longlong)local_3d0);
      fVar10 = *local_3d0;
      local_168 = 0.0;
      local_158 = (code *)0x0;
      plStack_130 = (longlong *)0x0;
      local_3e8 = pfVar34;
      local_3e0 = pfVar35;
      local_3d8 = pfVar36;
      local_3d0 = pfVar37;
      local_3b8 = pfVar30;
      local_3a8 = pfVar41;
      if (fVar12 == 0.0) {
        if (0 < (int)fVar39) {
          uVar15 = CONCAT44(uStack_134,local_138);
          local_138 = (undefined4)local_d8;
          uStack_134 = local_d8._4_4_;
          plStack_130 = (longlong *)0x0;
          local_148 = 0x51d86d08;
          uStack_144 = 1;
          fStack_140 = fVar39;
          fStack_13c = fVar10;
          local_f8 = 0;
          uStack_f0 = uStack_150;
          _local_e8 = CONCAT44(uVar24,uVar23);
          _fStack_e0 = CONCAT44(fVar26,fVar25);
          local_d8 = uVar15;
          uStack_d0 = 0;
          uStack_d0 = 0;
          local_f8 = 0;
          plStack_130 = (longlong *)0x0;
          uStack_144 = 1;
          local_148 = 0x51d86d08;
          uStack_150 = uVar22;
          local_158 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::PlayPersistentAudio'::__l24::<lambda_2>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
                      ::Call;
          pTVar2 = &pFVar40->PersistentAudioActionQueue;
          local_3a0 = fVar39;
          fStack_39c = fVar10;
          local_168 = fVar39;
          pTVar33 = ::operator_new(0x50);
          if (pTVar33 != (TNode *)0x0) {
            pTVar33->NextNode = (TNode *)0x0;
            (pTVar33->Item).AudioHandle = (int)local_168;
            *(code **)&(pTVar33->Item).UpdateCallback = local_158;
            *(undefined8 *)&(pTVar33->Item).UpdateCallback.field_0x28 = 0;
            if (local_158 != (code *)0x0) {
              plVar31 = (longlong *)&local_148;
              if (plStack_130 != (longlong *)0x0) {
                plVar31 = plStack_130;
              }
              (**(code **)*plVar31)();
            }
            if (((ulonglong)pTVar2 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            pTVar11 = pTVar2->Head;
            pTVar2->Head = pTVar33;
            UNLOCK();
            if (((ulonglong)pTVar11 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            pTVar11->NextNode = pTVar33;
            UNLOCK();
            pFVar40 = local_370.Ptr;
          }
        }
        *pfVar28 = 0.0;
        if (local_158 != (code *)0x0) {
          plVar31 = (longlong *)&local_148;
          if (plStack_130 != (longlong *)0x0) {
            plVar31 = plStack_130;
          }
          (**(code **)(*plVar31 + 0x10))();
        }
      }
      else {
        local_168 = fVar39;
        if ((int)fVar39 < 1) {
          LOCK();
          pFVar1 = &pFVar40->HandleCount;
          iVar38 = pFVar1->Counter;
          pFVar1->Counter = pFVar1->Counter + 1;
          UNLOCK();
          fVar39 = (float)(iVar38 + 1);
          uVar44 = SUB84(local_270._s_0.Z,0);
          uVar45 = (undefined4)((ulonglong)local_270._16_8_ >> 0x20);
          dStack_250 = local_270._s_0.X;
          uStack_248 = (double)local_270._8_8_;
          local_128 = (code *)0x0;
          plStack_100 = (longlong *)0x0;
          local_258 = fVar39;
          local_168 = fVar39;
          plVar31 = FMemory::Malloc(0x50,8);
          plStack_100 = plStack_130;
          fVar12 = fStack_13c;
          fVar10 = fStack_140;
          uVar24 = uStack_144;
          uVar23 = local_148;
          uVar22 = uStack_150;
          *plVar31 = (longlong)
                     &UE::Core::Private::Function::
                      TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::PlayPersistentAudio'::`19'::<lambda_1>,0,1>
                      ::_vftable_;
          plVar31[1] = CONCAT44(uStack_254,local_258);
          plVar31[2] = (longlong)dStack_250;
          *(undefined4 *)(plVar31 + 3) = (undefined4)uStack_248;
          *(undefined4 *)((longlong)plVar31 + 0x1c) = uStack_248._4_4_;
          *(undefined4 *)(plVar31 + 4) = uVar44;
          *(undefined4 *)((longlong)plVar31 + 0x24) = uVar45;
          auVar13._8_4_ = SUB84((double)fVar3,0);
          auVar13._0_8_ = (double)fVar5;
          auVar13._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
          *(undefined1 (*) [16])(plVar31 + 5) = auVar13;
          auVar14._8_4_ = fVar6;
          auVar14._0_8_ = (double)fVar4;
          auVar14._12_4_ = fVar7;
          *(undefined1 (*) [16])(plVar31 + 7) = auVar14;
          plVar31[9] = CONCAT44(fVar9,fVar8);
          pcVar32 = local_128;
          if (plVar31 + 1 != (longlong *)0x0) {
            pcVar32 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::PlayPersistentAudio'::__l19::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
                      ::Call;
          }
          uVar15 = CONCAT44(uStack_134,local_138);
          uStack_150 = uStack_120;
          local_138 = (undefined4)local_108;
          uStack_134 = local_108._4_4_;
          plStack_130 = plVar31;
          local_128 = local_158;
          uStack_120 = uVar22;
          local_108 = uVar15;
          local_148 = local_118;
          uStack_144 = uStack_114;
          fStack_140 = fStack_110;
          fStack_13c = fStack_10c;
          local_118 = uVar23;
          uStack_114 = uVar24;
          fStack_110 = fVar10;
          fStack_10c = fVar12;
          bVar27 = local_158 != (code *)0x0;
          uStack_240 = uVar44;
          uStack_23c = uVar45;
          local_158 = pcVar32;
          if (bVar27) {
            plVar31 = (longlong *)&local_118;
            if (plStack_100 != (longlong *)0x0) {
              plVar31 = plStack_100;
            }
            (**(code **)(*plVar31 + 0x10))();
          }
        }
        pTVar2 = &pFVar40->PersistentAudioActionQueue;
        pTVar33 = ::operator_new(0x50);
        if (pTVar33 != (TNode *)0x0) {
          pTVar33->NextNode = (TNode *)0x0;
          (pTVar33->Item).AudioHandle = (int)local_168;
          *(code **)&(pTVar33->Item).UpdateCallback = local_158;
          *(undefined8 *)&(pTVar33->Item).UpdateCallback.field_0x28 = 0;
          if (local_158 != (code *)0x0) {
            plVar31 = (longlong *)&local_148;
            if (plStack_130 != (longlong *)0x0) {
              plVar31 = plStack_130;
            }
            (**(code **)*plVar31)();
          }
          if (((ulonglong)pTVar2 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar11 = pTVar2->Head;
          pTVar2->Head = pTVar33;
          UNLOCK();
          if (((ulonglong)pTVar11 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar11->NextNode = pTVar33;
          UNLOCK();
          pFVar40 = local_370.Ptr;
        }
        *pfVar28 = fVar39;
        pUVar43 = local_408;
        if (local_158 != (code *)0x0) {
          plVar31 = (longlong *)&local_148;
          if (plStack_130 != (longlong *)0x0) {
            plVar31 = plStack_130;
          }
          (**(code **)(*plVar31 + 0x10))();
          pUVar43 = local_408;
        }
      }
      pfVar28 = pfVar28 + lVar42;
      local_428 = local_428 + 1;
      local_1b8.Z.InputPtr = (float *)local_410;
    } while (local_428 < pFVar16->NumInstances);
  }
  return;
}

// PostInitProperties @ 149120620

void __thiscall
UNiagaraDataInterfaceAudioPlayer::PostInitProperties(UNiagaraDataInterfaceAudioPlayer *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    local_28 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
  }
  return;
}

// PostSimulateCanOverlapFrames @ 1491245e0

bool __thiscall
UNiagaraDataInterfaceAudioPlayer::PostSimulateCanOverlapFrames
          (UNiagaraDataInterfaceAudioPlayer *this)

{
  return false;
}

// SetInitialParameterBool @ 14912d670

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceAudioPlayer::SetInitialParameterBool
          (UNiagaraDataInterfaceAudioPlayer *this,FVectorVMExternalFunctionContext *param_1)

{
  TQueue<FAudioInitialParamData,0> *pTVar1;
  float *pfVar2;
  TNode *pTVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  code *pcVar8;
  ForAnyElementType _Src;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FNiagaraTypeDefinition *pFVar12;
  TNode *pTVar13;
  size_t _Size;
  int iVar14;
  longlong local_108;
  FNiagaraTypeDefinitionHandle local_100 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f8;
  float local_e8;
  longlong local_e0;
  int local_d8;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  float *local_c0;
  float *local_b8;
  int local_b0 [2];
  float *local_a8;
  float *local_a0;
  int local_98 [2];
  float *local_90;
  float *local_88;
  int local_80 [2];
  float *local_78;
  float *local_70;
  int local_68 [2];
  FUserPtrHandler<FAudioPlayerInterface_InstanceData> local_60;
  FString local_50;
  
  VectorVM::FUserPtrHandler<FAudioPlayerInterface_InstanceData>::
  FUserPtrHandler<FAudioPlayerInterface_InstanceData>(&local_60,param_1);
  local_b0[0] = 0;
  local_c0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  local_98[0] = 0;
  local_c0 = local_c0 + local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  local_b8 = local_c0;
  local_a8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_98);
  local_80[0] = 0;
  local_a8 = local_a8 + local_98[0] * param_1->PerInstanceFnInstanceIdx;
  local_a0 = local_a8;
  local_90 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  local_68[0] = 0;
  local_90 = local_90 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  local_88 = local_90;
  local_78 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  local_78 = local_78 + local_68[0] * param_1->PerInstanceFnInstanceIdx;
  local_70 = local_78;
  if (local_60.Ptr == (FAudioPlayerInterface_InstanceData *)0x0) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_50,(UObject *)0x0);
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioPlayer.cpp"
                       ,0x2d3,L"Audio player interface has invalid instance data. %s");
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar11 = param_1->NumInstances;
  iVar14 = 0;
  if (0 < iVar11) {
    do {
      fVar4 = *local_a8;
      pfVar2 = local_c0 + local_b0[0];
      fVar5 = *local_c0;
      local_a8 = local_a8 + local_98[0];
      fVar6 = *local_90;
      local_90 = local_90 + local_80[0];
      fVar7 = *local_78;
      local_78 = local_78 + local_68[0];
      local_c0 = pfVar2;
      if ((-1 < (int)fVar6) && ((int)fVar6 < ((local_60.Ptr)->ParameterNames).ArrayNum)) {
        uVar10 = 0;
        if ((int)fVar6 < ((local_60.Ptr)->ParameterNames).ArrayNum) {
          uVar10 = ~(uint)fVar6 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_108 = *(longlong *)
                     (((local_60.Ptr)->ParameterNames).AllocatorInstance.Data +
                     (longlong)(int)fVar6 * 8);
        local_100[0].RegisteredTypeIndex =
             FNiagaraTypeDefinitionHandle::Register(local_100,&FNiagaraTypeDefinition::BoolDef);
        local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.ArrayNum = 0;
        local_f8.ArrayMax = 0;
        pFVar12 = FNiagaraTypeDefinitionHandle::Resolve(local_100);
        if ((((TObjectPtr<UObject>_u_0)(pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr !=
              FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0) ||
            (pFVar12->UnderlyingType != FNiagaraTypeDefinition::BoolDef.UnderlyingType)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeDefHandle.IsSameBase(FNiagaraTypeDefinition::GetBoolDef())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                               ,0x67a,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar12 = FNiagaraTypeDefinitionHandle::Resolve(local_100);
        iVar11 = FNiagaraTypeDefinition::GetSize(pFVar12);
        if (local_f8.ArrayNum != iVar11) {
          pFVar12 = FNiagaraTypeDefinitionHandle::Resolve(local_100);
          iVar11 = FNiagaraTypeDefinition::GetSize(pFVar12);
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_f8,iVar11,Default);
        }
        _Src.Data = local_f8.AllocatorInstance.Data;
        *(uint *)local_f8.AllocatorInstance.Data = -(uint)(fVar7 != 0.0);
        if (fVar5 == 0.0) {
          if (-1 < (int)fVar4) {
            _Size = (size_t)local_f8.ArrayNum;
            pTVar1 = &(local_60.Ptr)->InitialParamDataQueue;
            local_e0 = local_108;
            local_d8 = local_100[0].RegisteredTypeIndex;
            local_d0.Data = (FScriptContainerElement *)0x0;
            local_c8 = CONCAT44(local_c8._4_4_,local_f8.ArrayNum);
            local_e8 = fVar4;
            if (local_f8.ArrayNum == 0) {
              local_c8 = local_f8._8_8_ & 0xffffffff;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,local_f8.ArrayNum,0,&local_d0,local_f8.ArrayNum,
                         (int *)((longlong)&local_c8 + 4));
              memcpy(local_d0.Data,_Src.Data,_Size);
            }
            pTVar13 = ::operator_new(0x30);
            if (pTVar13 != (TNode *)0x0) {
              pTVar13->NextNode = (TNode *)0x0;
              (pTVar13->Item).ParticleID = (int)local_e8;
              (pTVar13->Item).Value._padding_ = local_e0;
              *(int *)&(pTVar13->Item).Value._padding_ = local_d8;
              (pTVar13->Item).Value.VarData.AllocatorInstance.Data = local_d0.Data;
              local_d0.Data = (FScriptContainerElement *)0x0;
              (pTVar13->Item).Value.VarData.ArrayNum = (int)local_c8;
              (pTVar13->Item).Value.VarData.ArrayMax = local_c8._4_4_;
              local_c8 = 0;
              if (((ulonglong)pTVar1 & 7) != 0) {
                FWindowsPlatformAtomics::HandleAtomicsFailure
                          (
                          L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                          );
              }
              LOCK();
              pTVar3 = pTVar1->Head;
              pTVar1->Head = pTVar13;
              UNLOCK();
              if (((ulonglong)pTVar3 & 7) != 0) {
                FWindowsPlatformAtomics::HandleAtomicsFailure
                          (
                          L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                          );
              }
              LOCK();
              pTVar3->NextNode = pTVar13;
              UNLOCK();
            }
            if (local_d0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data);
            }
          }
        }
        else {
          TSet<FNiagaraVariable,DefaultKeyFuncs<FNiagaraVariable,0>,FDefaultSetAllocator>::
          Emplace<FNiagaraVariable_const_&>
                    (&(local_60.Ptr)->GlobalInitialParameterValues,
                     (FNiagaraVariable *)&stack0x00000018,(bool *)&local_108);
        }
        if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.AllocatorInstance.Data);
        }
      }
      iVar14 = iVar14 + 1;
      iVar11 = param_1->NumInstances;
    } while (iVar14 < iVar11);
  }
  (local_60.Ptr)->ParamCountEstimate = iVar11;
  return;
}

// SetInitialParameterFloat @ 14912dab0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceAudioPlayer::SetInitialParameterFloat
          (UNiagaraDataInterfaceAudioPlayer *this,FVectorVMExternalFunctionContext *param_1)

{
  TQueue<FAudioInitialParamData,0> *pTVar1;
  float *pfVar2;
  TNode *pTVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  code *pcVar7;
  ForAnyElementType _Src;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FNiagaraTypeDefinition *pFVar11;
  TNode *pTVar12;
  size_t _Size;
  int iVar13;
  float local_res10 [6];
  longlong local_108;
  FNiagaraTypeDefinitionHandle local_100 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f8;
  float local_e8;
  longlong local_e0;
  int local_d8;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  float *local_c0;
  float *local_b8;
  int local_b0 [2];
  float *local_a8;
  float *local_a0;
  int local_98 [2];
  float *local_90;
  float *local_88;
  int local_80 [2];
  float *local_78;
  float *local_70;
  int local_68 [2];
  FUserPtrHandler<FAudioPlayerInterface_InstanceData> local_60;
  FString local_50;
  
  VectorVM::FUserPtrHandler<FAudioPlayerInterface_InstanceData>::
  FUserPtrHandler<FAudioPlayerInterface_InstanceData>(&local_60,param_1);
  local_b0[0] = 0;
  local_c0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  local_98[0] = 0;
  local_c0 = local_c0 + local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  local_b8 = local_c0;
  local_a8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_98);
  local_80[0] = 0;
  local_a8 = local_a8 + local_98[0] * param_1->PerInstanceFnInstanceIdx;
  local_a0 = local_a8;
  local_90 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  local_68[0] = 0;
  local_90 = local_90 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  local_88 = local_90;
  local_78 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  local_78 = local_78 + local_68[0] * param_1->PerInstanceFnInstanceIdx;
  local_70 = local_78;
  if (local_60.Ptr == (FAudioPlayerInterface_InstanceData *)0x0) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_50,(UObject *)0x0);
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioPlayer.cpp"
                       ,0x319,L"Audio player interface has invalid instance data. %s");
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar10 = param_1->NumInstances;
  iVar13 = 0;
  if (0 < iVar10) {
    do {
      fVar4 = *local_a8;
      pfVar2 = local_c0 + local_b0[0];
      fVar5 = *local_c0;
      local_a8 = local_a8 + local_98[0];
      fVar6 = *local_90;
      local_90 = local_90 + local_80[0];
      local_res10[0] = *local_78;
      local_78 = local_78 + local_68[0];
      local_c0 = pfVar2;
      if ((-1 < (int)fVar6) && ((int)fVar6 < ((local_60.Ptr)->ParameterNames).ArrayNum)) {
        uVar9 = 0;
        if ((int)fVar6 < ((local_60.Ptr)->ParameterNames).ArrayNum) {
          uVar9 = ~(uint)fVar6 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_108 = *(longlong *)
                     (((local_60.Ptr)->ParameterNames).AllocatorInstance.Data +
                     (longlong)(int)fVar6 * 8);
        local_100[0].RegisteredTypeIndex =
             FNiagaraTypeDefinitionHandle::Register(local_100,&FNiagaraTypeDefinition::FloatDef);
        local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.ArrayNum = 0;
        local_f8.ArrayMax = 0;
        pFVar11 = FNiagaraTypeDefinitionHandle::Resolve(local_100);
        iVar10 = FNiagaraTypeDefinition::GetSize(pFVar11);
        if ((iVar10 != 4) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("sizeof(T) == TypeDefHandle->GetSize()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                               ,0x5db,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar11 = FNiagaraTypeDefinitionHandle::Resolve(local_100);
        iVar10 = FNiagaraTypeDefinition::GetSize(pFVar11);
        if (local_f8.ArrayNum != iVar10) {
          pFVar11 = FNiagaraTypeDefinitionHandle::Resolve(local_100);
          iVar10 = FNiagaraTypeDefinition::GetSize(pFVar11);
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_f8,iVar10,Default);
        }
        memcpy(local_f8.AllocatorInstance.Data,local_res10,(longlong)local_f8.ArrayNum);
        _Src.Data = local_f8.AllocatorInstance.Data;
        if (fVar5 == 0.0) {
          if (-1 < (int)fVar4) {
            _Size = (size_t)local_f8.ArrayNum;
            pTVar1 = &(local_60.Ptr)->InitialParamDataQueue;
            local_e0 = local_108;
            local_d8 = local_100[0].RegisteredTypeIndex;
            local_d0.Data = (FScriptContainerElement *)0x0;
            local_c8 = CONCAT44(local_c8._4_4_,local_f8.ArrayNum);
            local_e8 = fVar4;
            if (local_f8.ArrayNum == 0) {
              local_c8 = local_f8._8_8_ & 0xffffffff;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,local_f8.ArrayNum,0,&local_d0,local_f8.ArrayNum,
                         (int *)((longlong)&local_c8 + 4));
              memcpy(local_d0.Data,_Src.Data,_Size);
            }
            pTVar12 = ::operator_new(0x30);
            if (pTVar12 != (TNode *)0x0) {
              pTVar12->NextNode = (TNode *)0x0;
              (pTVar12->Item).ParticleID = (int)local_e8;
              (pTVar12->Item).Value._padding_ = local_e0;
              *(int *)&(pTVar12->Item).Value._padding_ = local_d8;
              (pTVar12->Item).Value.VarData.AllocatorInstance.Data = local_d0.Data;
              local_d0.Data = (FScriptContainerElement *)0x0;
              (pTVar12->Item).Value.VarData.ArrayNum = (int)local_c8;
              (pTVar12->Item).Value.VarData.ArrayMax = local_c8._4_4_;
              local_c8 = 0;
              if (((ulonglong)pTVar1 & 7) != 0) {
                FWindowsPlatformAtomics::HandleAtomicsFailure
                          (
                          L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                          );
              }
              LOCK();
              pTVar3 = pTVar1->Head;
              pTVar1->Head = pTVar12;
              UNLOCK();
              if (((ulonglong)pTVar3 & 7) != 0) {
                FWindowsPlatformAtomics::HandleAtomicsFailure
                          (
                          L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                          );
              }
              LOCK();
              pTVar3->NextNode = pTVar12;
              UNLOCK();
            }
            if (local_d0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data);
            }
          }
        }
        else {
          TSet<FNiagaraVariable,DefaultKeyFuncs<FNiagaraVariable,0>,FDefaultSetAllocator>::
          Emplace<FNiagaraVariable_const_&>
                    (&(local_60.Ptr)->GlobalInitialParameterValues,
                     (FNiagaraVariable *)(local_res10 + 2),(bool *)&local_108);
        }
        if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.AllocatorInstance.Data);
        }
      }
      iVar10 = param_1->NumInstances;
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar10);
  }
  (local_60.Ptr)->ParamCountEstimate = iVar10;
  return;
}

// SetInitialParameterInteger @ 14912def0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceAudioPlayer::SetInitialParameterInteger
          (UNiagaraDataInterfaceAudioPlayer *this,FVectorVMExternalFunctionContext *param_1)

{
  TQueue<FAudioInitialParamData,0> *pTVar1;
  float *pfVar2;
  float *pfVar3;
  TNode *pTVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  code *pcVar8;
  ForAnyElementType _Src;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FNiagaraTypeDefinition *pFVar12;
  TNode *pTVar13;
  size_t _Size;
  int iVar14;
  float local_res10 [6];
  longlong local_108;
  FNiagaraTypeDefinitionHandle local_100 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f8;
  float local_e8;
  longlong local_e0;
  int local_d8;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  float *local_c0;
  float *local_b8;
  int local_b0 [2];
  float *local_a8;
  float *local_a0;
  int local_98 [2];
  float *local_90;
  float *local_88;
  int local_80 [2];
  float *local_78;
  float *local_70;
  int local_68 [2];
  FUserPtrHandler<FAudioPlayerInterface_InstanceData> local_60;
  FString local_50;
  
  VectorVM::FUserPtrHandler<FAudioPlayerInterface_InstanceData>::
  FUserPtrHandler<FAudioPlayerInterface_InstanceData>(&local_60,param_1);
  local_b0[0] = 0;
  local_c0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  local_98[0] = 0;
  local_c0 = local_c0 + local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  local_b8 = local_c0;
  local_a8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_98);
  local_80[0] = 0;
  local_a8 = local_a8 + local_98[0] * param_1->PerInstanceFnInstanceIdx;
  local_a0 = local_a8;
  local_90 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  local_68[0] = 0;
  local_90 = local_90 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  local_88 = local_90;
  local_78 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  local_78 = local_78 + local_68[0] * param_1->PerInstanceFnInstanceIdx;
  local_70 = local_78;
  if (local_60.Ptr == (FAudioPlayerInterface_InstanceData *)0x0) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_50,(UObject *)0x0);
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioPlayer.cpp"
                       ,0x2f6,L"Audio player interface has invalid instance data. %s");
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar11 = param_1->NumInstances;
  iVar14 = 0;
  if (0 < iVar11) {
    do {
      fVar5 = *local_a8;
      pfVar2 = local_c0 + local_b0[0];
      fVar6 = *local_c0;
      local_a8 = local_a8 + local_98[0];
      fVar7 = *local_90;
      local_90 = local_90 + local_80[0];
      pfVar3 = local_78 + local_68[0];
      local_res10[0] = *local_78;
      local_c0 = pfVar2;
      local_78 = pfVar3;
      if ((-1 < (int)fVar7) && ((int)fVar7 < ((local_60.Ptr)->ParameterNames).ArrayNum)) {
        uVar10 = 0;
        if ((int)fVar7 < ((local_60.Ptr)->ParameterNames).ArrayNum) {
          uVar10 = ~(uint)fVar7 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_108 = *(longlong *)
                     (((local_60.Ptr)->ParameterNames).AllocatorInstance.Data +
                     (longlong)(int)fVar7 * 8);
        local_100[0].RegisteredTypeIndex =
             FNiagaraTypeDefinitionHandle::Register(local_100,&FNiagaraTypeDefinition::IntDef);
        local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.ArrayNum = 0;
        local_f8.ArrayMax = 0;
        pFVar12 = FNiagaraTypeDefinitionHandle::Resolve(local_100);
        iVar11 = FNiagaraTypeDefinition::GetSize(pFVar12);
        if ((iVar11 != 4) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("sizeof(T) == TypeDefHandle->GetSize()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                               ,0x5db,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar12 = FNiagaraTypeDefinitionHandle::Resolve(local_100);
        iVar11 = FNiagaraTypeDefinition::GetSize(pFVar12);
        if (local_f8.ArrayNum != iVar11) {
          pFVar12 = FNiagaraTypeDefinitionHandle::Resolve(local_100);
          iVar11 = FNiagaraTypeDefinition::GetSize(pFVar12);
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_f8,iVar11,Default);
        }
        memcpy(local_f8.AllocatorInstance.Data,local_res10,(longlong)local_f8.ArrayNum);
        _Src.Data = local_f8.AllocatorInstance.Data;
        if (fVar6 == 0.0) {
          if (-1 < (int)fVar5) {
            _Size = (size_t)local_f8.ArrayNum;
            pTVar1 = &(local_60.Ptr)->InitialParamDataQueue;
            local_e0 = local_108;
            local_d8 = local_100[0].RegisteredTypeIndex;
            local_d0.Data = (FScriptContainerElement *)0x0;
            local_c8 = CONCAT44(local_c8._4_4_,local_f8.ArrayNum);
            local_e8 = fVar5;
            if (local_f8.ArrayNum == 0) {
              local_c8 = local_f8._8_8_ & 0xffffffff;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,local_f8.ArrayNum,0,&local_d0,local_f8.ArrayNum,
                         (int *)((longlong)&local_c8 + 4));
              memcpy(local_d0.Data,_Src.Data,_Size);
            }
            pTVar13 = ::operator_new(0x30);
            if (pTVar13 != (TNode *)0x0) {
              pTVar13->NextNode = (TNode *)0x0;
              (pTVar13->Item).ParticleID = (int)local_e8;
              (pTVar13->Item).Value._padding_ = local_e0;
              *(int *)&(pTVar13->Item).Value._padding_ = local_d8;
              (pTVar13->Item).Value.VarData.AllocatorInstance.Data = local_d0.Data;
              local_d0.Data = (FScriptContainerElement *)0x0;
              (pTVar13->Item).Value.VarData.ArrayNum = (int)local_c8;
              (pTVar13->Item).Value.VarData.ArrayMax = local_c8._4_4_;
              local_c8 = 0;
              if (((ulonglong)pTVar1 & 7) != 0) {
                FWindowsPlatformAtomics::HandleAtomicsFailure
                          (
                          L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                          );
              }
              LOCK();
              pTVar4 = pTVar1->Head;
              pTVar1->Head = pTVar13;
              UNLOCK();
              if (((ulonglong)pTVar4 & 7) != 0) {
                FWindowsPlatformAtomics::HandleAtomicsFailure
                          (
                          L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                          );
              }
              LOCK();
              pTVar4->NextNode = pTVar13;
              UNLOCK();
            }
            if (local_d0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data);
            }
          }
        }
        else {
          TSet<FNiagaraVariable,DefaultKeyFuncs<FNiagaraVariable,0>,FDefaultSetAllocator>::
          Emplace<FNiagaraVariable_const_&>
                    (&(local_60.Ptr)->GlobalInitialParameterValues,
                     (FNiagaraVariable *)(local_res10 + 2),(bool *)&local_108);
        }
        if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.AllocatorInstance.Data);
        }
      }
      iVar11 = param_1->NumInstances;
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar11);
  }
  (local_60.Ptr)->ParamCountEstimate = iVar11;
  return;
}

// SetParameterBool @ 149130d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000149130fcc) */
/* WARNING: Removing unreachable block (ram,0x000149130fdd) */
/* WARNING: Removing unreachable block (ram,0x000149130fe1) */
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

void __thiscall
UNiagaraDataInterfaceAudioPlayer::SetParameterBool
          (UNiagaraDataInterfaceAudioPlayer *this,FVectorVMExternalFunctionContext *param_1)

{
  TQueue<FPersistentAudioParticleData,0> *pTVar1;
  TNode *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  bool bVar17;
  uint uVar18;
  FString *pFVar19;
  TNode *pTVar20;
  longlong *plVar21;
  int iVar22;
  undefined1 auStack_168 [32];
  FScriptContainerElement *local_148;
  longlong local_140;
  float *local_138;
  float *local_130;
  int local_128 [2];
  float *local_120;
  float *local_118;
  int local_110 [2];
  float *local_108;
  float *local_100;
  int local_f8 [2];
  FUserPtrHandler<FAudioPlayerInterface_InstanceData> local_f0;
  undefined2 local_d7;
  undefined1 local_d5;
  FString local_d0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  VectorVM::FUserPtrHandler<FAudioPlayerInterface_InstanceData>::
  FUserPtrHandler<FAudioPlayerInterface_InstanceData>(&local_f0,param_1);
  local_128[0] = 0;
  local_138 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_128);
  local_110[0] = 0;
  local_138 = local_138 + local_128[0] * param_1->PerInstanceFnInstanceIdx;
  local_130 = local_138;
  local_120 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_110);
  local_f8[0] = 0;
  local_120 = local_120 + local_110[0] * param_1->PerInstanceFnInstanceIdx;
  local_118 = local_120;
  local_108 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f8);
  local_108 = local_108 + local_f8[0] * param_1->PerInstanceFnInstanceIdx;
  local_100 = local_108;
  if (local_f0.Ptr == (FAudioPlayerInterface_InstanceData *)0x0) {
    pFVar19 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_d0,(UObject *)0x0);
    if ((pFVar19->Data).ArrayNum == 0) {
      local_148 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_148 = (pFVar19->Data).AllocatorInstance.Data;
    }
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("InstData.Get()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioPlayer.cpp"
                        ,0x272,L"Audio player interface has invalid instance data. %s");
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (bVar17) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar22 = 0;
  if (0 < param_1->NumInstances) {
    do {
      fVar3 = *local_138;
      local_138 = local_138 + local_128[0];
      fVar4 = *local_120;
      local_120 = local_120 + local_110[0];
      fVar5 = *local_108;
      local_108 = local_108 + local_f8[0];
      if (((0 < (int)fVar3) && (-1 < (int)fVar4)) &&
         ((int)fVar4 < ((local_f0.Ptr)->ParameterNames).ArrayNum)) {
        iVar6 = ((local_f0.Ptr)->ParameterNames).ArrayNum;
        uVar18 = 0;
        if ((int)fVar4 < iVar6) {
          uVar18 = ~(uint)fVar4 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (local_148 = (FScriptContainerElement *)(longlong)(int)fVar4, local_140 = (longlong)iVar6
           , bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
           bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar16 = uStack_5c;
        uVar15 = uStack_60;
        uVar14 = uStack_64;
        uVar13 = local_68;
        uVar12 = uStack_70;
        uVar9 = local_98;
        uVar7 = *(undefined8 *)
                 (((local_f0.Ptr)->ParameterNames).AllocatorInstance.Data + (longlong)(int)fVar4 * 8
                 );
        local_98._4_4_ = SUB84(uVar9,4);
        uVar11 = local_98._4_4_;
        local_98._0_4_ = CONCAT13(local_d5,CONCAT21(local_d7,fVar5 != 0.0));
        uVar10 = (undefined4)local_98;
        uVar9 = CONCAT44(uStack_54,local_58);
        uStack_a0 = (undefined4)uVar7;
        uStack_60 = uStack_a0;
        uStack_9c = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_5c = uStack_9c;
        local_78 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::SetParameterBool'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
                   ::Call;
        uStack_70 = uStack_b0;
        local_58 = (undefined4)local_98;
        uStack_54 = local_98._4_4_;
        plStack_50 = (longlong *)0x0;
        local_88 = fVar3;
        local_68 = 0x51d86be8;
        uStack_64 = 1;
        _local_a8 = CONCAT44(uVar14,uVar13);
        _uStack_a0 = CONCAT44(uVar16,uVar15);
        local_98 = uVar9;
        uStack_90 = 0;
        plStack_50 = (longlong *)0x0;
        uStack_54 = uVar11;
        local_58 = uVar10;
        uStack_64 = 1;
        local_68 = 0x51d86be8;
        local_78 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::SetParameterBool'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
                   ::Call;
        uStack_90 = 0;
        uStack_b0 = uVar12;
        local_b8 = 0;
        pTVar1 = &(local_f0.Ptr)->PersistentAudioActionQueue;
        pTVar20 = ::operator_new(0x50);
        if (pTVar20 != (TNode *)0x0) {
          pTVar20->NextNode = (TNode *)0x0;
          (pTVar20->Item).AudioHandle = (int)local_88;
          *(code **)&(pTVar20->Item).UpdateCallback = local_78;
          *(undefined8 *)&(pTVar20->Item).UpdateCallback.field_0x28 = 0;
          if (local_78 != (code *)0x0) {
            plVar21 = (longlong *)&local_68;
            if (plStack_50 != (longlong *)0x0) {
              plVar21 = plStack_50;
            }
            (**(code **)*plVar21)();
          }
          if (((ulonglong)pTVar1 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar2 = pTVar1->Head;
          pTVar1->Head = pTVar20;
          UNLOCK();
          if (((ulonglong)pTVar2 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar2->NextNode = pTVar20;
          UNLOCK();
        }
        if (local_78 != (code *)0x0) {
          plVar21 = (longlong *)&local_68;
          if (plStack_50 != (longlong *)0x0) {
            plVar21 = plStack_50;
          }
          (**(code **)(*plVar21 + 0x10))();
        }
      }
      iVar22 = iVar22 + 1;
    } while (iVar22 < param_1->NumInstances);
  }
  return;
}

// SetParameterFloat @ 1491310d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000149131339) */
/* WARNING: Removing unreachable block (ram,0x00014913134a) */
/* WARNING: Removing unreachable block (ram,0x00014913134e) */
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

void __thiscall
UNiagaraDataInterfaceAudioPlayer::SetParameterFloat
          (UNiagaraDataInterfaceAudioPlayer *this,FVectorVMExternalFunctionContext *param_1)

{
  TQueue<FPersistentAudioParticleData,0> *pTVar1;
  float fVar2;
  TNode *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  uint uVar17;
  FString *pFVar18;
  TNode *pTVar19;
  longlong *plVar20;
  int iVar21;
  undefined1 auStack_168 [32];
  FScriptContainerElement *local_148;
  longlong local_140;
  float *local_138;
  float *local_130;
  int local_128 [2];
  float *local_120;
  float *local_118;
  int local_110 [2];
  float *local_108;
  float *local_100;
  int local_f8 [2];
  FUserPtrHandler<FAudioPlayerInterface_InstanceData> local_f0;
  FString local_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  code *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  undefined4 uStack_64;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_168;
  VectorVM::FUserPtrHandler<FAudioPlayerInterface_InstanceData>::
  FUserPtrHandler<FAudioPlayerInterface_InstanceData>(&local_f0,param_1);
  iVar21 = 0;
  local_128[0] = 0;
  local_138 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_128);
  local_110[0] = 0;
  local_138 = local_138 + local_128[0] * param_1->PerInstanceFnInstanceIdx;
  local_130 = local_138;
  local_120 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_110);
  local_f8[0] = 0;
  local_120 = local_120 + local_110[0] * param_1->PerInstanceFnInstanceIdx;
  local_118 = local_120;
  local_108 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f8);
  local_108 = local_108 + local_f8[0] * param_1->PerInstanceFnInstanceIdx;
  local_100 = local_108;
  if (local_f0.Ptr == (FAudioPlayerInterface_InstanceData *)0x0) {
    pFVar18 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_e0,(UObject *)0x0);
    if ((pFVar18->Data).ArrayNum == 0) {
      local_148 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_148 = (pFVar18->Data).AllocatorInstance.Data;
    }
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("InstData.Get()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioPlayer.cpp"
                        ,0x2b2,L"Audio player interface has invalid instance data. %s");
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (bVar16) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (0 < param_1->NumInstances) {
    do {
      fVar4 = *local_138;
      local_138 = local_138 + local_128[0];
      fVar5 = *local_120;
      local_120 = local_120 + local_110[0];
      fVar2 = *local_108;
      local_108 = local_108 + local_f8[0];
      if (((0 < (int)fVar4) && (-1 < (int)fVar5)) &&
         ((int)fVar5 < ((local_f0.Ptr)->ParameterNames).ArrayNum)) {
        iVar6 = ((local_f0.Ptr)->ParameterNames).ArrayNum;
        uVar17 = 0;
        if ((int)fVar5 < iVar6) {
          uVar17 = ~(uint)fVar5 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_148 = (FScriptContainerElement *)(longlong)(int)fVar5, local_140 = (longlong)iVar6
           , bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
           bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar15 = uStack_6c;
        uVar14 = uStack_70;
        uVar13 = uStack_74;
        uVar12 = local_78;
        uVar11 = uStack_80;
        uVar7 = *(undefined8 *)
                 (((local_f0.Ptr)->ParameterNames).AllocatorInstance.Data + (longlong)(int)fVar5 * 8
                 );
        local_88 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::SetParameterFloat'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
                   ::Call;
        uStack_80 = uStack_c0;
        uVar10 = local_a8._4_4_;
        uVar9 = CONCAT44(uStack_64,local_68);
        uStack_b0 = (undefined4)uVar7;
        uStack_70 = uStack_b0;
        uStack_ac = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_6c = uStack_ac;
        local_68 = fVar2;
        uStack_64 = local_a8._4_4_;
        plStack_60 = (longlong *)0x0;
        local_98 = fVar4;
        local_78 = 0x51d86c28;
        uStack_74 = 1;
        _local_b8 = CONCAT44(uVar13,uVar12);
        _uStack_b0 = CONCAT44(uVar15,uVar14);
        local_a8 = uVar9;
        uStack_a0 = 0;
        plStack_60 = (longlong *)0x0;
        uStack_64 = uVar10;
        uStack_74 = 1;
        local_78 = 0x51d86c28;
        local_88 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::SetParameterFloat'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
                   ::Call;
        uStack_a0 = 0;
        uStack_c0 = uVar11;
        local_c8 = 0;
        pTVar1 = &(local_f0.Ptr)->PersistentAudioActionQueue;
        pTVar19 = ::operator_new(0x50);
        if (pTVar19 != (TNode *)0x0) {
          pTVar19->NextNode = (TNode *)0x0;
          (pTVar19->Item).AudioHandle = (int)local_98;
          *(code **)&(pTVar19->Item).UpdateCallback = local_88;
          *(undefined8 *)&(pTVar19->Item).UpdateCallback.field_0x28 = 0;
          if (local_88 != (code *)0x0) {
            plVar20 = (longlong *)&local_78;
            if (plStack_60 != (longlong *)0x0) {
              plVar20 = plStack_60;
            }
            (**(code **)*plVar20)();
          }
          if (((ulonglong)pTVar1 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar3 = pTVar1->Head;
          pTVar1->Head = pTVar19;
          UNLOCK();
          if (((ulonglong)pTVar3 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar3->NextNode = pTVar19;
          UNLOCK();
        }
        if (local_88 != (code *)0x0) {
          plVar20 = (longlong *)&local_78;
          if (plStack_60 != (longlong *)0x0) {
            plVar20 = plStack_60;
          }
          (**(code **)(*plVar20 + 0x10))();
        }
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < param_1->NumInstances);
  }
  return;
}

// SetParameterInteger @ 149131440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000149131699) */
/* WARNING: Removing unreachable block (ram,0x0001491316aa) */
/* WARNING: Removing unreachable block (ram,0x0001491316ae) */
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

void __thiscall
UNiagaraDataInterfaceAudioPlayer::SetParameterInteger
          (UNiagaraDataInterfaceAudioPlayer *this,FVectorVMExternalFunctionContext *param_1)

{
  TQueue<FPersistentAudioParticleData,0> *pTVar1;
  TNode *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  uint uVar17;
  FString *pFVar18;
  TNode *pTVar19;
  longlong *plVar20;
  int iVar21;
  undefined1 auStack_158 [32];
  FScriptContainerElement *local_138;
  longlong local_130;
  float *local_128;
  float *local_120;
  int local_118 [2];
  float *local_110;
  float *local_108;
  int local_100 [2];
  float *local_f8;
  float *local_f0;
  int local_e8 [2];
  FUserPtrHandler<FAudioPlayerInterface_InstanceData> local_e0;
  FString local_d0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_58;
  undefined4 uStack_54;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  VectorVM::FUserPtrHandler<FAudioPlayerInterface_InstanceData>::
  FUserPtrHandler<FAudioPlayerInterface_InstanceData>(&local_e0,param_1);
  local_118[0] = 0;
  local_128 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_118);
  local_100[0] = 0;
  local_128 = local_128 + local_118[0] * param_1->PerInstanceFnInstanceIdx;
  local_120 = local_128;
  local_110 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  local_e8[0] = 0;
  local_110 = local_110 + local_100[0] * param_1->PerInstanceFnInstanceIdx;
  local_108 = local_110;
  local_f8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e8);
  local_f8 = local_f8 + local_e8[0] * param_1->PerInstanceFnInstanceIdx;
  local_f0 = local_f8;
  if (local_e0.Ptr == (FAudioPlayerInterface_InstanceData *)0x0) {
    pFVar18 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_d0,(UObject *)0x0);
    if ((pFVar18->Data).ArrayNum == 0) {
      local_138 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_138 = (pFVar18->Data).AllocatorInstance.Data;
    }
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("InstData.Get()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioPlayer.cpp"
                        ,0x292,L"Audio player interface has invalid instance data. %s");
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (bVar16) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar21 = 0;
  if (0 < param_1->NumInstances) {
    do {
      fVar3 = *local_128;
      local_128 = local_128 + local_118[0];
      fVar4 = *local_110;
      local_110 = local_110 + local_100[0];
      fVar5 = *local_f8;
      local_f8 = local_f8 + local_e8[0];
      if (((0 < (int)fVar3) && (-1 < (int)fVar4)) &&
         ((int)fVar4 < ((local_e0.Ptr)->ParameterNames).ArrayNum)) {
        iVar6 = ((local_e0.Ptr)->ParameterNames).ArrayNum;
        uVar17 = 0;
        if ((int)fVar4 < iVar6) {
          uVar17 = ~(uint)fVar4 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_138 = (FScriptContainerElement *)(longlong)(int)fVar4, local_130 = (longlong)iVar6
           , bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
           bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar15 = uStack_5c;
        uVar14 = uStack_60;
        uVar13 = uStack_64;
        uVar12 = local_68;
        uVar11 = uStack_70;
        uVar10 = local_98._4_4_;
        uVar7 = *(undefined8 *)
                 (((local_e0.Ptr)->ParameterNames).AllocatorInstance.Data + (longlong)(int)fVar4 * 8
                 );
        uVar9 = CONCAT44(uStack_54,local_58);
        uStack_a0 = (undefined4)uVar7;
        uStack_60 = uStack_a0;
        uStack_9c = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_5c = uStack_9c;
        local_78 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::SetParameterInteger'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
                   ::Call;
        uStack_70 = uStack_b0;
        local_58 = fVar5;
        uStack_54 = local_98._4_4_;
        plStack_50 = (longlong *)0x0;
        local_88 = fVar3;
        local_68 = 0x51d86c08;
        uStack_64 = 1;
        _local_a8 = CONCAT44(uVar13,uVar12);
        _uStack_a0 = CONCAT44(uVar15,uVar14);
        local_98 = uVar9;
        uStack_90 = 0;
        plStack_50 = (longlong *)0x0;
        uStack_54 = uVar10;
        uStack_64 = 1;
        local_68 = 0x51d86c08;
        local_78 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::SetParameterInteger'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
                   ::Call;
        uStack_90 = 0;
        uStack_b0 = uVar11;
        local_b8 = 0;
        pTVar1 = &(local_e0.Ptr)->PersistentAudioActionQueue;
        pTVar19 = ::operator_new(0x50);
        if (pTVar19 != (TNode *)0x0) {
          pTVar19->NextNode = (TNode *)0x0;
          (pTVar19->Item).AudioHandle = (int)local_88;
          *(code **)&(pTVar19->Item).UpdateCallback = local_78;
          *(undefined8 *)&(pTVar19->Item).UpdateCallback.field_0x28 = 0;
          if (local_78 != (code *)0x0) {
            plVar20 = (longlong *)&local_68;
            if (plStack_50 != (longlong *)0x0) {
              plVar20 = plStack_50;
            }
            (**(code **)*plVar20)();
          }
          if (((ulonglong)pTVar1 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar2 = pTVar1->Head;
          pTVar1->Head = pTVar19;
          UNLOCK();
          if (((ulonglong)pTVar2 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar2->NextNode = pTVar19;
          UNLOCK();
        }
        if (local_78 != (code *)0x0) {
          plVar20 = (longlong *)&local_68;
          if (plStack_50 != (longlong *)0x0) {
            plVar20 = plStack_50;
          }
          (**(code **)(*plVar20 + 0x10))();
        }
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < param_1->NumInstances);
  }
  return;
}

// SetPausedState @ 149131790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014913193f) */
/* WARNING: Removing unreachable block (ram,0x000149131950) */
/* WARNING: Removing unreachable block (ram,0x000149131954) */
/* WARNING: Type propagation algorithm not settling */
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

void __thiscall
UNiagaraDataInterfaceAudioPlayer::SetPausedState
          (UNiagaraDataInterfaceAudioPlayer *this,FVectorVMExternalFunctionContext *param_1)

{
  TNode *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  bool bVar12;
  float *pfVar13;
  FString *pFVar14;
  TNode *pTVar15;
  longlong *plVar16;
  longlong lVar17;
  TQueue<FPersistentAudioParticleData,0> *pTVar18;
  float *pfVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  undefined1 auStack_148 [32];
  FScriptContainerElement *local_128;
  longlong local_118;
  FScriptContainerElement *local_110;
  FScriptContainerElement *local_108;
  int local_100 [2];
  float *local_f8;
  float *local_f0;
  int local_e8 [2];
  FString local_e0;
  FUserPtrHandler<FAudioPlayerInterface_InstanceData> local_d0;
  float local_b8;
  code *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  longlong *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  VectorVM::FUserPtrHandler<FAudioPlayerInterface_InstanceData>::
  FUserPtrHandler<FAudioPlayerInterface_InstanceData>(&local_d0,param_1);
  iVar20 = 0;
  local_100[0] = 0;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  iVar4 = local_100[0];
  local_e8[0] = 0;
  pFVar21 = (FScriptContainerElement *)(pfVar13 + local_100[0] * param_1->PerInstanceFnInstanceIdx);
  local_110 = pFVar21;
  local_108 = pFVar21;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e8);
  iVar5 = local_e8[0];
  pfVar13 = pfVar13 + local_e8[0] * param_1->PerInstanceFnInstanceIdx;
  local_f8 = pfVar13;
  local_f0 = pfVar13;
  if (local_d0.Ptr == (FAudioPlayerInterface_InstanceData *)0x0) {
    pFVar14 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_e0,(UObject *)0x0);
    if ((pFVar14->Data).ArrayNum == 0) {
      local_128 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_128 = (pFVar14->Data).AllocatorInstance.Data;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InstData.Get()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioPlayer.cpp"
                        ,0x3af,L"Audio player interface has invalid instance data. %s");
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (0 < param_1->NumInstances) {
    local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)((longlong)iVar4 << 2);
    lVar17 = (longlong)iVar5 << 2;
    local_118 = lVar17;
    do {
      uVar11 = uStack_5c;
      uVar10 = uStack_70;
      uVar9 = uStack_8c;
      uVar8 = uStack_90;
      uVar7 = uStack_94;
      uVar6 = local_98;
      pFVar22 = pFVar21 + local_e0.Data.AllocatorInstance.Data;
      local_b8 = *(float *)pFVar21;
      pfVar19 = (float *)((longlong)pfVar13 + lVar17);
      if (0 < (int)local_b8) {
        uStack_60 = CONCAT31(uStack_60._1_3_,*pfVar13 != 0.0);
        uStack_90 = uStack_60;
        uVar3 = CONCAT44(uStack_84,local_88);
        local_88 = (undefined4)local_58;
        uStack_84 = local_58._4_4_;
        local_98 = 0x51d86cc8;
        uStack_94 = 1;
        uStack_8c = uStack_5c;
        plStack_80 = (longlong *)0x0;
        local_78 = 0;
        uStack_70 = uStack_a0;
        _local_68 = CONCAT44(uVar7,uVar6);
        uStack_60 = uVar8;
        uStack_5c = uVar9;
        local_58 = uVar3;
        uStack_50 = 0;
        uStack_50 = 0;
        local_78 = 0;
        plStack_80 = (longlong *)0x0;
        uStack_8c = uVar11;
        uStack_94 = 1;
        local_98 = 0x51d86cc8;
        uStack_a0 = uVar10;
        local_a8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::SetPausedState'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
                   ::Call;
        pTVar18 = &(local_d0.Ptr)->PersistentAudioActionQueue;
        pTVar15 = ::operator_new(0x50);
        if (pTVar15 != (TNode *)0x0) {
          pTVar15->NextNode = (TNode *)0x0;
          (pTVar15->Item).AudioHandle = (int)local_b8;
          *(code **)&(pTVar15->Item).UpdateCallback = local_a8;
          *(undefined8 *)&(pTVar15->Item).UpdateCallback.field_0x28 = 0;
          if (local_a8 != (code *)0x0) {
            plVar16 = (longlong *)&local_98;
            if (plStack_80 != (longlong *)0x0) {
              plVar16 = plStack_80;
            }
            (**(code **)*plVar16)();
          }
          if (((ulonglong)pTVar18 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar1 = pTVar18->Head;
          pTVar18->Head = pTVar15;
          UNLOCK();
          if (((ulonglong)pTVar1 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar1->NextNode = pTVar15;
          UNLOCK();
        }
        lVar17 = local_118;
        if (local_a8 != (code *)0x0) {
          plVar16 = (longlong *)&local_98;
          if (plStack_80 != (longlong *)0x0) {
            plVar16 = plStack_80;
          }
          (**(code **)(*plVar16 + 0x10))();
          lVar17 = local_118;
        }
      }
      iVar20 = iVar20 + 1;
      pfVar13 = pfVar19;
      pFVar21 = pFVar22;
    } while (iVar20 < param_1->NumInstances);
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceAudioPlayer @ 149139f60

void __cdecl
UNiagaraDataInterfaceAudioPlayer::StaticRegisterNativesUNiagaraDataInterfaceAudioPlayer(void)

{
  return;
}

// UpdateLocation @ 14913fb20

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

void __thiscall
UNiagaraDataInterfaceAudioPlayer::UpdateLocation
          (UNiagaraDataInterfaceAudioPlayer *this,FVectorVMExternalFunctionContext *param_1)

{
  TQueue<FPersistentAudioParticleData,0> *pTVar1;
  TNode *pTVar2;
  float fVar3;
  code *pcVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  float *pfVar15;
  FString *pFVar16;
  longlong *plVar17;
  TNode *pTVar18;
  float *pfVar19;
  float *pfVar20;
  int iVar21;
  undefined1 auStack_1e8 [32];
  FScriptContainerElement *local_1c8;
  float *local_1b8;
  TVector<float>_u_0 local_1a8;
  FScriptContainerElement *local_198;
  FAudioPlayerInterface_InstanceData *local_190;
  float *local_188;
  float *local_180;
  int local_178 [2];
  float *local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  FString local_150;
  TVector<double>_u_0 local_140;
  FNDIInputParam<UE::Math::TVector<float>_> local_128;
  code *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong *plStack_b0;
  float local_a8;
  code *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  longlong *plStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  VectorVM::FUserPtrHandler<FAudioPlayerInterface_InstanceData>::
  FUserPtrHandler<FAudioPlayerInterface_InstanceData>
            ((FUserPtrHandler<FAudioPlayerInterface_InstanceData> *)&local_198,param_1);
  local_178[0] = 0;
  pfVar15 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_178);
  iVar6 = local_178[0];
  pfVar15 = pfVar15 + local_178[0] * param_1->PerInstanceFnInstanceIdx;
  local_188 = pfVar15;
  local_180 = pfVar15;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_128,param_1);
  if (local_190 == (FAudioPlayerInterface_InstanceData *)0x0) {
    pFVar16 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_150,(UObject *)0x0);
    if ((pFVar16->Data).ArrayNum == 0) {
      local_1c8 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_1c8 = (pFVar16->Data).AllocatorInstance.Data;
    }
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("InstData.Get()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioPlayer.cpp"
                        ,0x374,L"Audio player interface has invalid instance data. %s");
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (bVar14) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar21 = 0;
  if (0 < param_1->NumInstances) {
    local_160 = (longlong)local_128.Z.AdvanceOffset << 2;
    local_158 = (longlong)local_128.Y.AdvanceOffset << 2;
    local_168 = (longlong)iVar6 << 2;
    local_150.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)((longlong)local_128.X.AdvanceOffset << 2);
    do {
      local_1a8._s_0.X = *local_128.X.InputPtr;
      fVar3 = *pfVar15;
      pfVar20 = (float *)((longlong)local_128.Z.InputPtr + local_160);
      pfVar15 = (float *)((longlong)pfVar15 + local_168);
      local_1a8._s_0.Z = *local_128.Z.InputPtr;
      local_198 = local_150.Data.AllocatorInstance.Data + (longlong)local_128.X.InputPtr;
      pfVar19 = (float *)((longlong)local_128.Y.InputPtr + local_158);
      local_1a8._s_0.Y = *local_128.Y.InputPtr;
      local_1b8 = pfVar19;
      local_170 = pfVar20;
      FNiagaraLWCConverter::ConvertSimulationVectorToWorld
                (&local_190->LWCConverter,(TVector<double> *)&local_140._s_0,
                 (TVector<float> *)&local_1a8._s_0);
      uVar8 = local_140._s_0.Z;
      uVar7 = local_140._s_0.Y;
      uVar5 = local_140._s_0.X;
      local_128.Y.InputPtr = pfVar19;
      if (0 < (int)fVar3) {
        local_98 = (code *)0x0;
        plStack_70 = (longlong *)0x0;
        local_d8 = (code *)0x0;
        plStack_b0 = (longlong *)0x0;
        local_a8 = fVar3;
        plVar17 = FMemory::Malloc(0x20,8);
        plStack_b0 = plStack_70;
        uVar13 = uStack_7c;
        uVar12 = uStack_80;
        uVar11 = uStack_84;
        uVar10 = local_88;
        uVar9 = uStack_90;
        pcVar4 = local_98;
        plVar17[1] = uVar5;
        plVar17[2] = uVar7;
        *plVar17 = (longlong)
                   &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::UpdateLocation'::`16'::<lambda_1>,0,1>
                    ::_vftable_;
        plVar17[3] = uVar8;
        if (plVar17 != (longlong *)&DAT_fffffffffffffff8) {
          local_d8 = UE::Core::Private::Function::
                     TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::UpdateLocation'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
                     ::Call;
        }
        uVar5 = CONCAT44(uStack_74,local_78);
        local_98 = local_d8;
        uStack_90 = uStack_d0;
        local_78 = (undefined4)local_b8;
        uStack_74 = local_b8._4_4_;
        plStack_70 = plVar17;
        local_88 = local_c8;
        uStack_84 = uStack_c4;
        uStack_80 = uStack_c0;
        uStack_7c = uStack_bc;
        local_d8 = pcVar4;
        uStack_d0 = uVar9;
        local_c8 = uVar10;
        uStack_c4 = uVar11;
        uStack_c0 = uVar12;
        uStack_bc = uVar13;
        local_b8 = uVar5;
        if (pcVar4 != (code *)0x0) {
          plVar17 = (longlong *)&local_c8;
          if (plStack_b0 != (longlong *)0x0) {
            plVar17 = plStack_b0;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
        pTVar1 = &local_190->PersistentAudioActionQueue;
        pTVar18 = ::operator_new(0x50);
        if (pTVar18 != (TNode *)0x0) {
          pTVar18->NextNode = (TNode *)0x0;
          (pTVar18->Item).AudioHandle = (int)local_a8;
          *(code **)&(pTVar18->Item).UpdateCallback = local_98;
          *(undefined8 *)&(pTVar18->Item).UpdateCallback.field_0x28 = 0;
          if (local_98 != (code *)0x0) {
            plVar17 = (longlong *)&local_88;
            if (plStack_70 != (longlong *)0x0) {
              plVar17 = plStack_70;
            }
            (**(code **)*plVar17)();
          }
          if (((ulonglong)pTVar1 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar2 = pTVar1->Head;
          pTVar1->Head = pTVar18;
          UNLOCK();
          if (((ulonglong)pTVar2 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar2->NextNode = pTVar18;
          UNLOCK();
          pfVar20 = local_170;
        }
        local_128.Y.InputPtr = local_1b8;
        if (local_98 != (code *)0x0) {
          plVar17 = (longlong *)&local_88;
          if (plStack_70 != (longlong *)0x0) {
            plVar17 = plStack_70;
          }
          (**(code **)(*plVar17 + 0x10))();
          local_128.Y.InputPtr = local_1b8;
        }
      }
      iVar21 = iVar21 + 1;
      local_128.Z.InputPtr = pfVar20;
      local_128.X.InputPtr = (float *)local_198;
    } while (iVar21 < param_1->NumInstances);
  }
  return;
}

// UpdatePitch @ 149140000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001491401ba) */
/* WARNING: Removing unreachable block (ram,0x0001491401cb) */
/* WARNING: Removing unreachable block (ram,0x0001491401cf) */
/* WARNING: Type propagation algorithm not settling */
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

void __thiscall
UNiagaraDataInterfaceAudioPlayer::UpdatePitch
          (UNiagaraDataInterfaceAudioPlayer *this,FVectorVMExternalFunctionContext *param_1)

{
  TNode *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  bool bVar11;
  float *pfVar12;
  FString *pFVar13;
  TNode *pTVar14;
  longlong *plVar15;
  longlong lVar16;
  TQueue<FPersistentAudioParticleData,0> *pTVar17;
  float *pfVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStack_148 [32];
  FScriptContainerElement *local_128;
  longlong local_118;
  FScriptContainerElement *local_110;
  FScriptContainerElement *local_108;
  int local_100 [2];
  float *local_f8;
  float *local_f0;
  int local_e8 [2];
  FString local_e0;
  FUserPtrHandler<FAudioPlayerInterface_InstanceData> local_d0;
  float local_b8;
  code *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  longlong *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  VectorVM::FUserPtrHandler<FAudioPlayerInterface_InstanceData>::
  FUserPtrHandler<FAudioPlayerInterface_InstanceData>(&local_d0,param_1);
  iVar19 = 0;
  local_100[0] = 0;
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  iVar4 = local_100[0];
  local_e8[0] = 0;
  pFVar20 = (FScriptContainerElement *)(pfVar12 + local_100[0] * param_1->PerInstanceFnInstanceIdx);
  local_110 = pFVar20;
  local_108 = pFVar20;
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e8);
  iVar5 = local_e8[0];
  pfVar12 = pfVar12 + local_e8[0] * param_1->PerInstanceFnInstanceIdx;
  local_f8 = pfVar12;
  local_f0 = pfVar12;
  if (local_d0.Ptr == (FAudioPlayerInterface_InstanceData *)0x0) {
    pFVar13 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_e0,(UObject *)0x0);
    if ((pFVar13->Data).ArrayNum == 0) {
      local_128 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_128 = (pFVar13->Data).AllocatorInstance.Data;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InstData.Get()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioPlayer.cpp"
                        ,0x357,L"Audio player interface has invalid instance data. %s");
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (0 < param_1->NumInstances) {
    local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)((longlong)iVar4 << 2);
    lVar16 = (longlong)iVar5 << 2;
    local_118 = lVar16;
    do {
      uVar10 = uStack_5c;
      uVar9 = uStack_70;
      uVar8 = uStack_8c;
      fStack_60 = fStack_90;
      uVar7 = uStack_94;
      uVar6 = local_98;
      pFVar21 = pFVar20 + local_e0.Data.AllocatorInstance.Data;
      local_b8 = *(float *)pFVar20;
      pfVar18 = (float *)((longlong)pfVar12 + lVar16);
      if (0 < (int)local_b8) {
        fStack_90 = *pfVar12;
        uVar3 = CONCAT44(uStack_84,local_88);
        local_88 = (undefined4)local_58;
        uStack_84 = local_58._4_4_;
        local_98 = 0x51d86c68;
        uStack_94 = 1;
        uStack_8c = uStack_5c;
        plStack_80 = (longlong *)0x0;
        local_78 = 0;
        uStack_70 = uStack_a0;
        _local_68 = CONCAT44(uVar7,uVar6);
        uStack_5c = uVar8;
        local_58 = uVar3;
        uStack_50 = 0;
        uStack_50 = 0;
        local_78 = 0;
        plStack_80 = (longlong *)0x0;
        uStack_8c = uVar10;
        uStack_94 = 1;
        local_98 = 0x51d86c68;
        uStack_a0 = uVar9;
        local_a8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::UpdatePitch'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
                   ::Call;
        pTVar17 = &(local_d0.Ptr)->PersistentAudioActionQueue;
        pTVar14 = ::operator_new(0x50);
        if (pTVar14 != (TNode *)0x0) {
          pTVar14->NextNode = (TNode *)0x0;
          (pTVar14->Item).AudioHandle = (int)local_b8;
          *(code **)&(pTVar14->Item).UpdateCallback = local_a8;
          *(undefined8 *)&(pTVar14->Item).UpdateCallback.field_0x28 = 0;
          if (local_a8 != (code *)0x0) {
            plVar15 = (longlong *)&local_98;
            if (plStack_80 != (longlong *)0x0) {
              plVar15 = plStack_80;
            }
            (**(code **)*plVar15)();
          }
          if (((ulonglong)pTVar17 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar1 = pTVar17->Head;
          pTVar17->Head = pTVar14;
          UNLOCK();
          if (((ulonglong)pTVar1 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar1->NextNode = pTVar14;
          UNLOCK();
        }
        lVar16 = local_118;
        if (local_a8 != (code *)0x0) {
          plVar15 = (longlong *)&local_98;
          if (plStack_80 != (longlong *)0x0) {
            plVar15 = plStack_80;
          }
          (**(code **)(*plVar15 + 0x10))();
          lVar16 = local_118;
        }
      }
      iVar19 = iVar19 + 1;
      pfVar12 = pfVar18;
      pFVar20 = pFVar21;
    } while (iVar19 < param_1->NumInstances);
  }
  return;
}

// UpdateRotation @ 1491402d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001491404de) */
/* WARNING: Removing unreachable block (ram,0x0001491404ef) */
/* WARNING: Removing unreachable block (ram,0x0001491404f3) */
/* WARNING: Type propagation algorithm not settling */
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

void __thiscall
UNiagaraDataInterfaceAudioPlayer::UpdateRotation
          (UNiagaraDataInterfaceAudioPlayer *this,FVectorVMExternalFunctionContext *param_1)

{
  TQueue<FPersistentAudioParticleData,0> *pTVar1;
  TNode *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  float *pfVar9;
  FString *pFVar10;
  TNode *pTVar11;
  longlong *plVar12;
  longlong lVar13;
  float *pfVar14;
  int iVar15;
  undefined1 auStack_1b8 [32];
  FScriptContainerElement *local_198;
  FScriptContainerElement *local_188;
  float *local_180;
  float *local_178;
  longlong local_170;
  FUserPtrHandler<FAudioPlayerInterface_InstanceData> local_168;
  float *local_158;
  float *local_150;
  int local_148 [2];
  longlong local_140;
  FString local_138;
  FNDIInputParam<UE::Math::TVector<float>_> local_128;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  code *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  undefined4 uStack_74;
  longlong *plStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  VectorVM::FUserPtrHandler<FAudioPlayerInterface_InstanceData>::
  FUserPtrHandler<FAudioPlayerInterface_InstanceData>(&local_168,param_1);
  local_148[0] = 0;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_148);
  iVar5 = local_148[0];
  pfVar9 = pfVar9 + local_148[0] * param_1->PerInstanceFnInstanceIdx;
  local_158 = pfVar9;
  local_150 = pfVar9;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_128,param_1);
  if (local_168.Ptr == (FAudioPlayerInterface_InstanceData *)0x0) {
    pFVar10 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_138,(UObject *)0x0);
    if ((pFVar10->Data).ArrayNum == 0) {
      local_198 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_198 = (pFVar10->Data).AllocatorInstance.Data;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioPlayer.cpp"
                       ,0x391,L"Audio player interface has invalid instance data. %s");
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar15 = 0;
  if (0 < param_1->NumInstances) {
    local_140 = (longlong)iVar5 << 2;
    local_138.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)((longlong)local_128.Z.AdvanceOffset << 2);
    local_168._0_8_ = (longlong)local_128.Y.AdvanceOffset << 2;
    lVar13 = (longlong)local_128.X.AdvanceOffset << 2;
    local_170 = lVar13;
    do {
      uVar7 = uStack_90;
      pfVar14 = (float *)((longlong)pfVar9 + local_140);
      local_a8 = *pfVar9;
      local_188 = (longlong)local_128.Z.InputPtr + local_138.Data.AllocatorInstance.Data;
      local_180 = (float *)((longlong)local_128.Y.InputPtr + local_168._0_8_);
      local_178 = (float *)((longlong)local_128.X.InputPtr + lVar13);
      if (0 < (int)local_a8) {
        local_c8 = CONCAT44(uStack_84,local_88);
        uStack_c0 = CONCAT44(fStack_7c,fStack_80);
        fStack_80 = *local_128.X.InputPtr;
        fStack_7c = *local_128.Y.InputPtr;
        local_98 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::UpdateRotation'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
                   ::Call;
        uStack_90 = uStack_d0;
        uVar6 = local_b8._4_4_;
        uVar4 = CONCAT44(uStack_74,local_78);
        local_88 = 0x51d86ca8;
        uStack_84 = 1;
        local_78 = *local_128.Z.InputPtr;
        uStack_74 = local_b8._4_4_;
        plStack_70 = (longlong *)0x0;
        local_b8 = uVar4;
        uStack_b0 = 0;
        plStack_70 = (longlong *)0x0;
        uStack_74 = uVar6;
        uStack_84 = 1;
        local_88 = 0x51d86ca8;
        local_98 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::UpdateRotation'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
                   ::Call;
        uStack_b0 = 0;
        uStack_d0 = uVar7;
        local_d8 = 0;
        pTVar1 = &(local_168.Ptr)->PersistentAudioActionQueue;
        pTVar11 = ::operator_new(0x50);
        if (pTVar11 != (TNode *)0x0) {
          pTVar11->NextNode = (TNode *)0x0;
          (pTVar11->Item).AudioHandle = (int)local_a8;
          *(code **)&(pTVar11->Item).UpdateCallback = local_98;
          *(undefined8 *)&(pTVar11->Item).UpdateCallback.field_0x28 = 0;
          if (local_98 != (code *)0x0) {
            plVar12 = (longlong *)&local_88;
            if (plStack_70 != (longlong *)0x0) {
              plVar12 = plStack_70;
            }
            (**(code **)*plVar12)();
          }
          if (((ulonglong)pTVar1 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar2 = pTVar1->Head;
          pTVar1->Head = pTVar11;
          UNLOCK();
          if (((ulonglong)pTVar2 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar2->NextNode = pTVar11;
          UNLOCK();
        }
        lVar13 = local_170;
        if (local_98 != (code *)0x0) {
          plVar12 = (longlong *)&local_88;
          if (plStack_70 != (longlong *)0x0) {
            plVar12 = plStack_70;
          }
          (**(code **)(*plVar12 + 0x10))();
          lVar13 = local_170;
        }
      }
      iVar15 = iVar15 + 1;
      local_128.Z.InputPtr = (float *)local_188;
      local_128.Y.InputPtr = local_180;
      local_128.X.InputPtr = local_178;
      pfVar9 = pfVar14;
    } while (iVar15 < param_1->NumInstances);
  }
  return;
}

// UpdateVolume @ 149141670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014914182a) */
/* WARNING: Removing unreachable block (ram,0x00014914183b) */
/* WARNING: Removing unreachable block (ram,0x00014914183f) */
/* WARNING: Type propagation algorithm not settling */
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

void __thiscall
UNiagaraDataInterfaceAudioPlayer::UpdateVolume
          (UNiagaraDataInterfaceAudioPlayer *this,FVectorVMExternalFunctionContext *param_1)

{
  TNode *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  bool bVar11;
  float *pfVar12;
  FString *pFVar13;
  TNode *pTVar14;
  longlong *plVar15;
  longlong lVar16;
  TQueue<FPersistentAudioParticleData,0> *pTVar17;
  float *pfVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStack_148 [32];
  FScriptContainerElement *local_128;
  longlong local_118;
  FScriptContainerElement *local_110;
  FScriptContainerElement *local_108;
  int local_100 [2];
  float *local_f8;
  float *local_f0;
  int local_e8 [2];
  FString local_e0;
  FUserPtrHandler<FAudioPlayerInterface_InstanceData> local_d0;
  float local_b8;
  code *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  longlong *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  VectorVM::FUserPtrHandler<FAudioPlayerInterface_InstanceData>::
  FUserPtrHandler<FAudioPlayerInterface_InstanceData>(&local_d0,param_1);
  iVar19 = 0;
  local_100[0] = 0;
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  iVar4 = local_100[0];
  local_e8[0] = 0;
  pFVar20 = (FScriptContainerElement *)(pfVar12 + local_100[0] * param_1->PerInstanceFnInstanceIdx);
  local_110 = pFVar20;
  local_108 = pFVar20;
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e8);
  iVar5 = local_e8[0];
  pfVar12 = pfVar12 + local_e8[0] * param_1->PerInstanceFnInstanceIdx;
  local_f8 = pfVar12;
  local_f0 = pfVar12;
  if (local_d0.Ptr == (FAudioPlayerInterface_InstanceData *)0x0) {
    pFVar13 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_e0,(UObject *)0x0);
    if ((pFVar13->Data).ArrayNum == 0) {
      local_128 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_128 = (pFVar13->Data).AllocatorInstance.Data;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InstData.Get()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioPlayer.cpp"
                        ,0x33a,L"Audio player interface has invalid instance data. %s");
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (0 < param_1->NumInstances) {
    local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)((longlong)iVar4 << 2);
    lVar16 = (longlong)iVar5 << 2;
    local_118 = lVar16;
    do {
      uVar10 = uStack_5c;
      uVar9 = uStack_70;
      uVar8 = uStack_8c;
      fStack_60 = fStack_90;
      uVar7 = uStack_94;
      uVar6 = local_98;
      pFVar21 = pFVar20 + local_e0.Data.AllocatorInstance.Data;
      local_b8 = *(float *)pFVar20;
      pfVar18 = (float *)((longlong)pfVar12 + lVar16);
      if (0 < (int)local_b8) {
        fStack_90 = *pfVar12;
        uVar3 = CONCAT44(uStack_84,local_88);
        local_88 = (undefined4)local_58;
        uStack_84 = local_58._4_4_;
        local_98 = 0x51d86c48;
        uStack_94 = 1;
        uStack_8c = uStack_5c;
        plStack_80 = (longlong *)0x0;
        local_78 = 0;
        uStack_70 = uStack_a0;
        _local_68 = CONCAT44(uVar7,uVar6);
        uStack_5c = uVar8;
        local_58 = uVar3;
        uStack_50 = 0;
        uStack_50 = 0;
        local_78 = 0;
        plStack_80 = (longlong *)0x0;
        uStack_8c = uVar10;
        uStack_94 = 1;
        local_98 = 0x51d86c48;
        uStack_a0 = uVar9;
        local_a8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UNiagaraDataInterfaceAudioPlayer::UpdateVolume'::__l16::<lambda_1>,void,FAudioPlayerInterface_InstanceData_*,UAudioComponent_*,FNiagaraSystemInstance_*>
                   ::Call;
        pTVar17 = &(local_d0.Ptr)->PersistentAudioActionQueue;
        pTVar14 = ::operator_new(0x50);
        if (pTVar14 != (TNode *)0x0) {
          pTVar14->NextNode = (TNode *)0x0;
          (pTVar14->Item).AudioHandle = (int)local_b8;
          *(code **)&(pTVar14->Item).UpdateCallback = local_a8;
          *(undefined8 *)&(pTVar14->Item).UpdateCallback.field_0x28 = 0;
          if (local_a8 != (code *)0x0) {
            plVar15 = (longlong *)&local_98;
            if (plStack_80 != (longlong *)0x0) {
              plVar15 = plStack_80;
            }
            (**(code **)*plVar15)();
          }
          if (((ulonglong)pTVar17 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar1 = pTVar17->Head;
          pTVar17->Head = pTVar14;
          UNLOCK();
          if (((ulonglong)pTVar1 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar1->NextNode = pTVar14;
          UNLOCK();
        }
        lVar16 = local_118;
        if (local_a8 != (code *)0x0) {
          plVar15 = (longlong *)&local_98;
          if (plStack_80 != (longlong *)0x0) {
            plVar15 = plStack_80;
          }
          (**(code **)(*plVar15 + 0x10))();
          lVar16 = local_118;
        }
      }
      iVar19 = iVar19 + 1;
      pfVar12 = pfVar18;
      pFVar20 = pFVar21;
    } while (iVar19 < param_1->NumInstances);
  }
  return;
}

