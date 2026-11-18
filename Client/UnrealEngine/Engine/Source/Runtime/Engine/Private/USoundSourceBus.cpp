// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticClass @ 148679a80

UClass * __cdecl USoundSourceBus::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundSourceBus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundSourceBus",
               &Z_Registration_Info_UClass_USoundSourceBus.InnerSingleton,
               StaticRegisterNativesUSoundSourceBus,0x420,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundSourceBus>,
               InternalVTableHelperCtorCaller<USoundSourceBus>,local_res8,USoundWave::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundSourceBus.InnerSingleton;
}

// USoundSourceBus @ 148697e40

USoundSourceBus * __thiscall
USoundSourceBus::USoundSourceBus(USoundSourceBus *this,FVTableHelper *param_1)

{
  USoundWave::USoundWave((USoundWave *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->AudioBus).field0_0x0.DebugPtr = (UAudioBus *)0x0;
  return this;
}

// USoundSourceBus @ 148697eb0

USoundSourceBus * __thiscall
USoundSourceBus::USoundSourceBus(USoundSourceBus *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  USoundWave::USoundWave((USoundWave *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->AudioBus).field0_0x0.DebugPtr = (UAudioBus *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  Init(this);
  return this;
}

// ~USoundSourceBus @ 14869be90

void __thiscall USoundSourceBus::~USoundSourceBus(USoundSourceBus *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  USoundWave::~USoundWave((USoundWave *)this);
  return;
}

// GetDuration @ 1486be0b0

float __thiscall USoundSourceBus::GetDuration(USoundSourceBus *this)

{
  float fVar1;
  
  fVar1 = this->SourceBusDuration;
  if (this->SourceBusDuration <= 0.0) {
    fVar1 = __real_461c4000;
  }
  return fVar1;
}

// GetPrivateStaticClass @ 1486c5830

UClass * __cdecl USoundSourceBus::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundSourceBus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundSourceBus",
               &Z_Registration_Info_UClass_USoundSourceBus.InnerSingleton,
               StaticRegisterNativesUSoundSourceBus,0x420,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundSourceBus>,
               InternalVTableHelperCtorCaller<USoundSourceBus>,local_res8,USoundWave::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundSourceBus.InnerSingleton;
}

// Init @ 1486cbd20

void __thiscall USoundSourceBus::Init(USoundSourceBus *this)

{
  byte *pbVar1;
  float fVar2;
  undefined4 uVar3;
  
  uVar3 = (**(code **)(this->_padding_ + 0x2d8))();
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar3;
  fVar2 = this->SourceBusDuration;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | fVar2 == 0.0;
  if (this->SourceBusChannels == Mono) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  }
  else if (this->SourceBusChannels == Stereo) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
    return;
  }
  return;
}

// IsPlayable @ 1486d1610

bool __thiscall USoundSourceBus::IsPlayable(USoundSourceBus *this)

{
  return true;
}

// IsSeekable @ 1486d1c60

bool __thiscall USoundSourceBus::IsSeekable(USoundSourceBus *this)

{
  return false;
}

// PostLoad @ 1486e0c80

void __thiscall USoundSourceBus::PostLoad(USoundSourceBus *this)

{
  USoundWave::PostLoad((USoundWave *)this);
  Init(this);
  return;
}

// Serialize @ 1486ed300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USoundSourceBus::Serialize(USoundSourceBus *this,FArchive *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_USoundWave::Serialize(FArchive_&)_::_2_::FStat_STAT_SoundWave_Serialize>
  FVar16;
  undefined8 *puVar17;
  FPlatformAudioCookOverrides *pFVar18;
  ITargetPlatformManagerModule *pIVar19;
  undefined8 uVar20;
  FString *pFVar21;
  FSoundWaveData *pFVar22;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  wchar_t *pwVar23;
  FName FVar24;
  ForAnyElementType FVar25;
  float fVar26;
  bool bStackX_10;
  FLLMScope aFStackX_20 [2];
  uint auStack_118 [2];
  TArray<FName,TSizedDefaultAllocator<32>_> TStack_110;
  FName FStack_100;
  FName FStack_f8;
  FColor_u_0 aFStack_f0 [2];
  FName FStack_e8;
  undefined8 uStack_e0;
  FName FStack_d8;
  FString FStack_c8;
  LARGE_INTEGER LStack_b8;
  FMemScope FStack_b0;
  FStatMessage FStack_a8;
  FName FStack_98;
  FName FStack_90;
  FString FStack_88;
  void *apvStack_78 [2];
  void *pvStack_68;
  FString FStack_58;
  
  FLLMScope::FLLMScope(aFStackX_20,AudioSoundWaves,false,None,Default,true);
  FMemScope::FMemScope(&FStack_b0,AudioSoundWaves,true);
  if ((this->_padding_ == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SoundWaveDataPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                          ,0x4b2,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar11 = false;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_SoundWave_Serialize ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_USoundWave::Serialize(FArchive_&)_::_2_::FStat_STAT_SoundWave_Serialize>
         )0x0) {
      pFVar15 = ::FName::FName(&FStack_98,"STAT_SoundWave_Serialize");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SoundWave_Serialize,*pFVar15,
                 L"USoundWave::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_SoundWave_Serialize;
  if (StatPtr_STAT_SoundWave_Serialize ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_USoundWave::Serialize(FArchive_&)_::_2_::FStat_STAT_SoundWave_Serialize>
       )0x0) {
    pFVar15 = ::FName::FName(&FStack_90,"STAT_SoundWave_Serialize");
    FVar16 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_USoundWave::Serialize(FArchive_&)_::_2_::FStat_STAT_SoundWave_Serialize>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SoundWave_Serialize,*pFVar15,
                          L"USoundWave::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",
                          L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar16;
  bVar9 = false;
  bVar8 = false;
  FStack_d8.ComparisonIndex.Value = 0;
  FStack_d8.Number = 0;
  bVar13 = false;
  bVar10 = false;
  if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_1486ed5b1:
    bVar9 = bVar13;
    bVar8 = bVar10;
    bVar10 = false;
    FVar24 = FStack_d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStack_f0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStack_f0[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar9 = false;
      bVar8 = true;
      bVar13 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_e8.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        FStack_e8.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_e8,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                   ,0x4b4);
        bVar9 = true;
        bVar8 = true;
        bVar13 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1486ed5b1;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar10 = true;
  }
  UObject::Serialize((UObject *)this,param_1);
  auStack_118[0] = 0;
  if ((((param_1->field_0x28 & 4) != 0) && (*(longlong *)&param_1->field_0x68 != 0)) &&
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) {
    auStack_118[0] = 1;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStack_118);
    }
  }
  else {
    auStack_118[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  uVar5 = auStack_118[0] & 1;
  uVar6 = auStack_118[0] & 1;
  uVar7 = auStack_118[0] & 1;
  if (((auStack_118[0] & 1) == 0) && ((param_1->field_0x28 & 1) != 0)) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&FStack_88,(UObject *)0x0,None);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1);
  if ((((param_1->field_0x28 & 1) != 0) && (0x187 < *(int *)&param_1->field_0x40)) &&
     (iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFrameworkObjectVersion::GUID),
     iVar14 < 0xc)) {
    uStack_e0 = 0;
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1);
  }
  bStackX_10 = false;
  if (((param_1->field_0x28 & 4) == 0) &&
     ((*(longlong *)&param_1->field_0x68 == 0 ||
      (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) {
    bStackX_10 = USoundWave::IsStreaming((USoundWave *)this,(wchar_t *)0x0);
  }
  else if ((*(longlong *)&param_1->field_0x68 != 0) &&
          (plVar2 = *(longlong **)(*(longlong *)&param_1->field_0x68 + 8), plVar2 != (longlong *)0x0
          )) {
    puVar17 = (undefined8 *)(**(code **)(*plVar2 + 8))(plVar2,apvStack_78);
    if (*(int *)(puVar17 + 1) == 0) {
      pwVar23 = L"";
    }
    else {
      pwVar23 = (wchar_t *)*puVar17;
    }
    bStackX_10 = USoundWave::IsStreaming((USoundWave *)this,pwVar23);
    if (apvStack_78[0] != (void *)0x0) {
      FMemory::Free(apvStack_78[0]);
    }
  }
  if ((param_1->field_0x28 & 1) == 0) {
    lVar3 = *(longlong *)&param_1->field_0x68;
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x10) != 0)) {
      cVar12 = (**(code **)(**(longlong **)(lVar3 + 8) + 200))(*(longlong **)(lVar3 + 8),0);
      bVar11 = false;
      if (cVar12 != '\0') {
        bVar11 = true;
      }
    }
  }
  else {
    bVar11 = true;
  }
  pcVar4 = *(code **)(this->_padding_ + 0x3b0);
  if ((uVar5 == 0) || ((param_1->field_0x28 & 1) == 0)) {
    (*pcVar4)(this,param_1);
    if (uVar6 == 0) goto LAB_1486edae6;
  }
  else {
    (*pcVar4)(this,param_1);
  }
  if ((bStackX_10 == false) || (!bVar11)) {
    lVar3 = *(longlong *)&param_1->field_0x68;
    if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x10) == 0)) {
      pFVar22 = TSharedPtr<FSoundWaveData,1>::operator->
                          ((TSharedPtr<FSoundWaveData,1> *)&this->_padding_);
      FFormatContainer::Serialize
                (&pFVar22->CompressedFormatData,param_1,(UObject *)this,
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0,true,0,true,false);
    }
    else {
      TStack_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_110.ArrayNum = 0;
      TStack_110.ArrayMax = 0;
      plVar2 = *(longlong **)(lVar3 + 8);
      cVar12 = (**(code **)(plVar2[1] + 0x170))(plVar2 + 1);
      if (cVar12 != '\0') {
        (**(code **)(plVar2[1] + 0x158))(plVar2 + 1,&FStack_100,this);
        puVar17 = (undefined8 *)(**(code **)(*plVar2 + 8))(plVar2);
        if (*(int *)(puVar17 + 1) == 0) {
          pwVar23 = L"";
        }
        else {
          pwVar23 = (wchar_t *)*puVar17;
        }
        pFVar18 = FPlatformCompressionUtilities::GetCookOverrides(pwVar23,false);
        if (pvStack_68 != (void *)0x0) {
          FMemory::Free(pvStack_68);
        }
        pcVar4 = *(code **)(this->_padding_ + 0x408);
        pIVar19 = GetTargetPlatformManager(true);
        uVar20 = 0;
        if (pIVar19 != (ITargetPlatformManagerModule *)0x0) {
          uVar20 = (**(code **)((longlong)*pIVar19 + 0xa8))(pIVar19);
        }
        (*pcVar4)(this,FStack_100,pFVar18,uVar20);
        if (pFVar18 == (FPlatformAudioCookOverrides *)0x0) {
          if (((TStack_110.AllocatorInstance.Data <= &FStack_100) &&
              (&FStack_100 <
               (FName *)(TStack_110.AllocatorInstance.Data + (longlong)TStack_110.ArrayMax * 8))) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar14 = TStack_110.ArrayNum;
          if (TStack_110.ArrayNum == TStack_110.ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&TStack_110.AllocatorInstance,&TStack_110.ArrayMax);
          }
          TStack_110.ArrayNum = iVar14 + 1;
          *(FName *)(TStack_110.AllocatorInstance.Data + (longlong)iVar14 * 8) = FStack_100;
        }
        else {
          pFVar21 = ::FName::ToString(&FStack_100,&FStack_58);
          if ((pFVar21->Data).ArrayNum == 0) {
            pwVar23 = L"";
          }
          else {
            pwVar23 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
          }
          ::FString::FString(&FStack_c8,pwVar23);
          if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
          }
          FPlatformAudioCookOverrides::GetHashSuffix(pFVar18,&FStack_c8);
          FVar25.Data = (FScriptContainerElement *)L"";
          if (FStack_c8.Data.ArrayNum != 0) {
            FVar25.Data = FStack_c8.Data.AllocatorInstance.Data;
          }
          ::FName::FName(&FStack_f8,(wchar_t *)FVar25.Data);
          if (((TStack_110.AllocatorInstance.Data <= &FStack_f8) &&
              (&FStack_f8 <
               (FName *)(TStack_110.AllocatorInstance.Data + (longlong)TStack_110.ArrayMax * 8))) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar14 = TStack_110.ArrayNum;
          if (TStack_110.ArrayNum == TStack_110.ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&TStack_110.AllocatorInstance,&TStack_110.ArrayMax);
          }
          TStack_110.ArrayNum = iVar14 + 1;
          *(FName *)(TStack_110.AllocatorInstance.Data + (longlong)iVar14 * 8) = FStack_f8;
          if (FStack_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
          }
        }
      }
      cVar12 = (**(code **)(*plVar2 + 200))(plVar2,0x12);
      if ((cVar12 == '\0') || (cVar12 = (**(code **)(*plVar2 + 200))(plVar2,0x13), cVar12 == '\0'))
      {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      pFVar22 = TSharedPtr<FSoundWaveData,1>::operator->
                          ((TSharedPtr<FSoundWaveData,1> *)&this->_padding_);
      FFormatContainer::Serialize
                (&pFVar22->CompressedFormatData,param_1,(UObject *)this,&TStack_110,true,0,
                 (bool)(bVar13 ^ 1),bVar13);
      if ((FName *)TStack_110.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(TStack_110.AllocatorInstance.Data);
      }
    }
  }
LAB_1486edae6:
  ::operator<<(param_1,(FGuid *)&this->_padding_);
  if ((((param_1->field_0x28 & 1) != 0) && (((byte)auStack_118[0] & 3) == 3)) &&
     (*(char *)((longlong)&this->_padding_ + 6) != '\x04')) {
    *(byte *)((longlong)&this->_padding_ + 6) = (byte)(auStack_118[0] >> 2) & 7;
  }
  if (((bStackX_10 != false) && (uVar7 != 0)) && (bVar11)) {
    (**(code **)(this->_padding_ + 0x418))(this,param_1);
  }
  bVar11 = UObjectBaseUtility::IsTemplate
                     ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((!bVar11) && ((param_1->field_0x28 & 1) != 0)) {
    fVar26 = USoundWave::GetSampleRateForCurrentPlatform((USoundWave *)this);
    *(int *)&this->_padding_ = (int)fVar26;
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (FVar24 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_a8.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
      FStack_a8.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_b8);
      FStack_a8.StatData.Pad[4] = '\0';
      FStack_a8.StatData.Pad[5] = '\0';
      FStack_a8.StatData.Pad[6] = '\0';
      FStack_a8.StatData.Pad[7] = '\0';
      FStack_a8.StatData.Pad[0] = LStack_b8.s.LowPart._0_1_;
      FStack_a8.StatData.Pad[1] = LStack_b8.s.LowPart._1_1_;
      FStack_a8.StatData.Pad[2] = LStack_b8.s.LowPart._2_1_;
      FStack_a8.StatData.Pad[3] = LStack_b8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_a8);
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
  FMemScope::~FMemScope(&FStack_b0);
  FLLMScope::~FLLMScope(aFStackX_20);
  return;
}

// Serialize @ 1486ed310

void __thiscall USoundSourceBus::Serialize(USoundSourceBus *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  USoundWave::Serialize((USoundWave *)this,pFVar1);
  return;
}

// SerializeCookedPlatformData @ 1486edd70

void __thiscall
USoundSourceBus::SerializeCookedPlatformData(USoundSourceBus *this,FArchive *param_1)

{
  return;
}

// SerializeCuePoints @ 1486edd80

void __thiscall
USoundSourceBus::SerializeCuePoints(USoundSourceBus *this,FArchive *param_1,bool param_2)

{
  return;
}

// StaticRegisterNativesUSoundSourceBus @ 1486f1a30

void __cdecl USoundSourceBus::StaticRegisterNativesUSoundSourceBus(void)

{
  return;
}

