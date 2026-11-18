// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// StaticClass @ 148998c40

UClass * __cdecl UVOIPStatics::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVOIPStatics.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VOIPStatics",
               &Z_Registration_Info_UClass_UVOIPStatics.InnerSingleton,
               StaticRegisterNativesUVOIPStatics,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVOIPStatics>,InternalVTableHelperCtorCaller<UVOIPStatics>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVOIPStatics.InnerSingleton;
}

// UVOIPStatics @ 1489b6e10

UVOIPStatics * __thiscall UVOIPStatics::UVOIPStatics(UVOIPStatics *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UVOIPStatics__6B_;
  return this;
}

// UVOIPStatics @ 1489b6e40

UVOIPStatics * __thiscall UVOIPStatics::UVOIPStatics(UVOIPStatics *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UVOIPStatics__6B_;
  return this;
}

// ~UVOIPStatics @ 1489ba8c0

void __thiscall UVOIPStatics::~UVOIPStatics(UVOIPStatics *this)

{
  *(undefined ***)this = &___7UVOIPStatics__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ClearAllSettings @ 1489d0c90

void __cdecl UVOIPStatics::ClearAllSettings(void)

{
  bool bVar1;
  
  bVar1 = 1 < (int)VoiceTalkerMap._72_4_;
  if (!bVar1) {
    TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
                      *)&VoiceTalkerMap);
  }
  TSparseArray<TSparseSetElement<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&VoiceTalkerMap,0,VoiceTalkerMap._8_4_);
  VoiceTalkerMap._8_4_ = 0;
  if (VoiceTalkerMap._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)&VoiceTalkerMap,0,(int *)&VoiceTalkerMap.field_0xc);
  }
  VoiceTalkerMap._48_4_ = 0xffffffff;
  VoiceTalkerMap._52_4_ = 0;
  VoiceTalkerMap._40_4_ = 0;
  if (0x80 < (uint)VoiceTalkerMap._44_4_) {
    VoiceTalkerMap._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&VoiceTalkerMap.field_0x10,0);
  }
  if (bVar1) {
    VoiceTalkerMap._72_4_ = 1;
    TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
              *)&VoiceTalkerMap);
  }
  return;
}

// GetAudioEncodingHint @ 1489e6640

EAudioEncodeHint __cdecl UVOIPStatics::GetAudioEncodingHint(void)

{
  return VoiceEncode_Voice;
}

// GetBufferingDelay @ 1489e6b20

float __cdecl UVOIPStatics::GetBufferingDelay(void)

{
  return JitterBufferDelayCvar;
}

// GetMaxCompressedVoiceDataSize @ 1489ea540

uint __cdecl UVOIPStatics::GetMaxCompressedVoiceDataSize(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetVoiceSampleRate();
  if (iVar1 != 16000) {
    if (iVar1 == 24000) {
      iVar1 = 2;
      if (NumVoiceChannelsCvar < 2) {
        iVar1 = NumVoiceChannelsCvar;
      }
      iVar2 = 1;
      if (1 < iVar1) {
        iVar2 = iVar1;
      }
      return iVar2 << 0xb;
    }
    if (iVar1 == 48000) {
      iVar1 = 2;
      if (NumVoiceChannelsCvar < 2) {
        iVar1 = NumVoiceChannelsCvar;
      }
      iVar2 = 1;
      if (1 < iVar1) {
        iVar2 = iVar1;
      }
      return iVar2 << 0xc;
    }
  }
  iVar1 = 2;
  if (NumVoiceChannelsCvar < 2) {
    iVar1 = NumVoiceChannelsCvar;
  }
  iVar2 = 1;
  if (1 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2 << 10;
}

// GetMaxUncompressedVoiceDataSizePerChannel @ 1489ea670

uint __cdecl UVOIPStatics::GetMaxUncompressedVoiceDataSizePerChannel(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 2;
  if (NumVoiceChannelsCvar < 2) {
    iVar3 = NumVoiceChannelsCvar;
  }
  iVar1 = GetVoiceSampleRate();
  iVar2 = 1;
  if (1 < iVar3) {
    iVar2 = iVar3;
  }
  return (iVar1 + 0x200) * iVar2 * 2;
}

// GetMaxVoiceDataSize @ 1489ea750

uint __cdecl UVOIPStatics::GetMaxVoiceDataSize(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetVoiceSampleRate();
  if (iVar1 != 16000) {
    if (iVar1 == 24000) {
      iVar1 = 2;
      if (NumVoiceChannelsCvar < 2) {
        iVar1 = NumVoiceChannelsCvar;
      }
      iVar2 = 1;
      if (1 < iVar1) {
        iVar2 = iVar1;
      }
      return iVar2 * 0x3800;
    }
    if (iVar1 == 48000) {
      iVar1 = 2;
      if (NumVoiceChannelsCvar < 2) {
        iVar1 = NumVoiceChannelsCvar;
      }
      iVar2 = 1;
      if (1 < iVar1) {
        iVar2 = iVar1;
      }
      return iVar2 << 0xf;
    }
  }
  iVar1 = 2;
  if (NumVoiceChannelsCvar < 2) {
    iVar1 = NumVoiceChannelsCvar;
  }
  iVar2 = 1;
  if (1 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2 << 0xd;
}

// GetNumBufferedPackets @ 1489eabf0

int __cdecl UVOIPStatics::GetNumBufferedPackets(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (::_TSS0 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return NumBufferedPackets;
  }
  _Init_thread_header(&::_TSS0);
  if (::_TSS0 != -1) {
    return NumBufferedPackets;
  }
  iVar1 = GetVoiceSampleRate();
  if (iVar1 != 16000) {
    if (iVar1 == 24000) {
      iVar1 = 2;
      if (NumVoiceChannelsCvar < 2) {
        iVar1 = NumVoiceChannelsCvar;
      }
      iVar3 = 1;
      if (1 < iVar1) {
        iVar3 = iVar1;
      }
      uVar2 = iVar3 * 0x3800;
      goto LAB_1489eacba;
    }
    if (iVar1 == 48000) {
      iVar1 = 2;
      if (NumVoiceChannelsCvar < 2) {
        iVar1 = NumVoiceChannelsCvar;
      }
      iVar3 = 1;
      if (1 < iVar1) {
        iVar3 = iVar1;
      }
      uVar2 = iVar3 << 0xf;
      goto LAB_1489eacba;
    }
  }
  iVar1 = 2;
  if (NumVoiceChannelsCvar < 2) {
    iVar1 = NumVoiceChannelsCvar;
  }
  iVar3 = 1;
  if (1 < iVar1) {
    iVar3 = iVar1;
  }
  uVar2 = iVar3 << 0xd;
LAB_1489eacba:
  iVar1 = GetVoiceSampleRate();
  NumBufferedPackets =
       (int)(((float)iVar1 * JitterBufferDelayCvar) / (float)(uVar2 >> 2) + __real_41a00000);
  _Init_thread_footer(&::_TSS0);
  return NumBufferedPackets;
}

// GetPlayerStateFromUniqueNetId @ 1489eb250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerState * __cdecl
UVOIPStatics::GetPlayerStateFromUniqueNetId(UWorld *param_1,FUniqueNetIdWrapper *param_2)

{
  int *piVar1;
  FName FVar2;
  AGameStateBase *pAVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_GetPlayerStateFromUniqueId> FVar11;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar12;
  FUniqueNetId *pFVar13;
  FUniqueNetId *pFVar14;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar15;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar16;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar17;
  ulonglong uVar18;
  FNameEntryId FVar19;
  APlayerState *pAVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  LARGE_INTEGER LStackX_8;
  FName FStackX_18;
  FScriptContainerElement *pFStackX_20;
  FName FStack_58;
  FStatMessage FStack_48;
  
  pAVar3 = (param_1->GameState).field0_0x0.DebugPtr;
  if (pAVar3 == (AGameStateBase *)0x0) {
    return (APlayerState *)0x0;
  }
  FVar11 = StatPtr_STAT_GetPlayerStateFromUniqueId;
  if (StatPtr_STAT_GetPlayerStateFromUniqueId ==
      (FThreadSafeStaticStat<FStat_STAT_GetPlayerStateFromUniqueId>)0x0) {
    pFVar10 = ::FName::FName(&FStackX_18,"STAT_GetPlayerStateFromUniqueId");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_GetPlayerStateFromUniqueId>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GetPlayerStateFromUniqueId,
                        *pFVar10,L"GetPlayerStateFromUniqueId","STATGROUP_Game","STATCAT_Advanced",
                        L"Game",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  FStack_58.ComparisonIndex.Value = 0;
  FStack_58.Number = 0;
  FVar19 = FVar2.ComparisonIndex.Value;
  uVar17 = FVar2.Number;
  if ((FVar19.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar19.Value;
        LStackX_8.s.HighPart = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameStateBase.cpp"
                   ,0x10b);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_8.s.LowPart = FVar19.Value;
      LStackX_8.s.HighPart = uVar17;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      bVar5 = true;
      FStack_58 = FVar2;
      goto LAB_147c599f1;
    }
  }
  bVar5 = false;
LAB_147c599f1:
  FStackX_18.ComparisonIndex.Value = (pAVar3->PlayerArray).ArrayNum;
  uVar18 = (ulonglong)(int)FStackX_18.ComparisonIndex.Value;
  pFVar22 = (pAVar3->PlayerArray).AllocatorInstance.Data;
  pFVar21 = pFVar22 + uVar18 * 8;
  pFStackX_20 = pFVar21;
  while( true ) {
    if ((pAVar3->PlayerArray).ArrayNum != (int)uVar18) {
      `TCheckedPointerIterator<APlayerState_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&LStackX_8);
    }
    if (pFVar22 == pFVar21) break;
    pAVar20 = *(APlayerState **)pFVar22;
    if (pAVar20 != (APlayerState *)0x0) {
      bVar7 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&pAVar20->UniqueId);
      bVar8 = FUniqueNetIdWrapper::IsValid(param_2);
      pFVar21 = pFStackX_20;
      if (bVar7 == bVar8) {
        if (!bVar7) goto LAB_147c59b05;
        if ((uchar)(pAVar20->UniqueId)._padding_ == (param_2->Variant).TypeIndex) {
          bVar7 = FUniqueNetIdWrapper::IsV1((FUniqueNetIdWrapper *)&pAVar20->UniqueId);
          if (bVar7) {
            pTVar12 = FUniqueNetIdWrapper::GetV1Unsafe(param_2);
            pFVar13 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar12);
            pTVar12 = FUniqueNetIdWrapper::GetV1Unsafe((FUniqueNetIdWrapper *)&pAVar20->UniqueId);
            pFVar14 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar12);
            cVar9 = (*(code *)**(undefined8 **)pFVar14)(pFVar14,pFVar13);
          }
          else {
            pTVar15 = FUniqueNetIdWrapper::GetV2Unsafe((FUniqueNetIdWrapper *)&pAVar20->UniqueId);
            pTVar16 = FUniqueNetIdWrapper::GetV2Unsafe(param_2);
            cVar9 = pTVar15->Value == pTVar16->Value;
          }
          pFVar21 = pFStackX_20;
          if (cVar9 != '\0') goto LAB_147c59b05;
        }
      }
    }
    uVar18 = (ulonglong)FStackX_18.ComparisonIndex.Value;
    pFVar22 = pFVar22 + 8;
  }
  pAVar20 = (APlayerState *)0x0;
LAB_147c59b05:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FStack_58 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      FStack_48.NameAndInfo.Index.Value = FStack_58.ComparisonIndex.Value;
      FStack_48.NameAndInfo.Number = FStack_58.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStackX_8);
      FStack_48.StatData.Pad[4] = '\0';
      FStack_48.StatData.Pad[5] = '\0';
      FStack_48.StatData.Pad[6] = '\0';
      FStack_48.StatData.Pad[7] = '\0';
      FStack_48.StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
      FStack_48.StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
      FStack_48.StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
      FStack_48.StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&FStack_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
        return pAVar20;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return pAVar20;
}

// GetPrivateStaticClass @ 1489ebc50

UClass * __cdecl UVOIPStatics::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVOIPStatics.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VOIPStatics",
               &Z_Registration_Info_UClass_UVOIPStatics.InnerSingleton,
               StaticRegisterNativesUVOIPStatics,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVOIPStatics>,InternalVTableHelperCtorCaller<UVOIPStatics>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVOIPStatics.InnerSingleton;
}

// GetRemoteTalkerTimeoutDuration @ 1489ecde0

float __cdecl UVOIPStatics::GetRemoteTalkerTimeoutDuration(void)

{
  return __real_3f800000;
}

// GetVOIPTalkerForPlayer @ 1489ef790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UVOIPTalker * __cdecl UVOIPStatics::GetVOIPTalkerForPlayer(FUniqueNetIdWrapper *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FUniqueNetIdWrapper>
                    ((TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
                      *)&VoiceTalkerMap,uVar1,param_1);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x30 + VoiceTalkerMap._0_8_;
    puVar4 = (undefined8 *)(lVar3 + 0x20);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      return (UVOIPTalker *)*puVar4;
    }
  }
  return (UVOIPTalker *)0x0;
}

// GetVOIPTalkerForPlayer @ 1489ef7f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UVOIPTalker * __cdecl
UVOIPStatics::GetVOIPTalkerForPlayer
          (FUniqueNetIdWrapper *param_1,FVoiceSettings *param_2,UWorld *param_3,
          APlayerState **param_4)

{
  AGameStateBase *this;
  uint uVar1;
  int iVar2;
  APlayerState *pAVar3;
  longlong lVar4;
  
  if ((param_3 != (UWorld *)0x0) && (param_4 != (APlayerState **)0x0)) {
    this = (param_3->GameState).field0_0x0.DebugPtr;
    pAVar3 = (APlayerState *)0x0;
    if (this != (AGameStateBase *)0x0) {
      pAVar3 = AGameStateBase::GetPlayerStateFromUniqueNetId(this,param_1);
    }
    *param_4 = pAVar3;
  }
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FUniqueNetIdWrapper>
                    ((TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
                      *)&VoiceTalkerMap,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x30 + VoiceTalkerMap._0_8_;
    pAVar3 = (APlayerState *)(lVar4 + 0x20);
    if (lVar4 == 0) {
      pAVar3 = (APlayerState *)0x0;
    }
    if (pAVar3 != (APlayerState *)0x0) {
      FVoiceSettings::operator=(param_2,(FVoiceSettings *)(pAVar3->_padding_ + 0xc0));
      return (UVOIPTalker *)pAVar3->_padding_;
    }
  }
  return (UVOIPTalker *)0x0;
}

// GetVoiceNoiseGateLevel @ 1489f0b40

float __cdecl UVOIPStatics::GetVoiceNoiseGateLevel(void)

{
  return MicNoiseGateThresholdCvar;
}

// GetVoiceNumChannels @ 1489f0b50

int __cdecl UVOIPStatics::GetVoiceNumChannels(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 2;
  if (NumVoiceChannelsCvar < 2) {
    iVar2 = NumVoiceChannelsCvar;
  }
  iVar1 = 1;
  if (1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}

// GetVoiceSampleRate @ 1489f0b80

int __cdecl UVOIPStatics::GetVoiceSampleRate(void)

{
  ForAnyElementType FVar1;
  bool bVar2;
  int iVar3;
  FString local_18;
  
  if (bRetrievedSampleRate) {
    return SampleRate;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UVOIPStatics::GetVoiceSampleRate'::__l2::
             _dynamic_atexit_destructor_for__DesiredSampleRateStr__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  bVar2 = FConfigCacheIni::GetString
                    (GConfig,L"/Script/Engine.AudioSettings",L"VoiPSampleRate",&DesiredSampleRateStr
                     ,&GEngineIni);
  if (bVar2) {
    ::FString::FString(&local_18,L"Low16000Hz");
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
    iVar3 = DesiredSampleRateStr.Data.ArrayNum;
    if (iVar3 == local_18.Data.ArrayNum) {
      if (iVar3 < 2) {
        bVar2 = true;
      }
      else {
        iVar3 = wcscmp((wchar_t *)DesiredSampleRateStr.Data.AllocatorInstance.Data,
                       (wchar_t *)local_18.Data.AllocatorInstance.Data);
        bVar2 = iVar3 == 0;
      }
    }
    else {
      bVar2 = iVar3 + local_18.Data.ArrayNum == 1;
    }
    if (FVar1.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    if (bVar2) {
      SampleRate = 16000;
      bRetrievedSampleRate = true;
      return 16000;
    }
    ::FString::FString(&local_18,L"Normal24000Hz");
    iVar3 = DesiredSampleRateStr.Data.ArrayNum;
    if (iVar3 == local_18.Data.ArrayNum) {
      if (iVar3 < 2) {
        bVar2 = true;
      }
      else {
        iVar3 = wcscmp((wchar_t *)DesiredSampleRateStr.Data.AllocatorInstance.Data,
                       (wchar_t *)local_18.Data.AllocatorInstance.Data);
        bVar2 = iVar3 == 0;
      }
    }
    else {
      bVar2 = iVar3 + local_18.Data.ArrayNum == 1;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      SampleRate = 24000;
      bRetrievedSampleRate = true;
      return 24000;
    }
    if (0 < SampleRate) {
      bRetrievedSampleRate = true;
      return SampleRate;
    }
  }
  SampleRate = 16000;
  return 16000;
}

// IsVOIPTalkerStillAlive @ 1489f9f20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl UVOIPStatics::IsVOIPTalkerStillAlive(UVOIPTalker *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar10 = 0;
  uVar5 = 1;
  iVar11 = 0;
  uVar12 = VoiceTalkerMap._40_4_;
  uVar6 = 0;
  if (uVar12 != 0) {
    puVar13 = (uint *)&VoiceTalkerMap.field_0x10;
    if (VoiceTalkerMap._32_8_ != 0) {
      puVar13 = (uint *)VoiceTalkerMap._32_8_;
    }
    uVar6 = *puVar13;
    while (uVar6 == 0) {
      lVar7 = (longlong)iVar10;
      iVar11 = iVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar6 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_1489f9fcd;
      uVar6 = puVar13[lVar7 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar14 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res18 = (int)lVar7;
    uVar6 = local_res18 + -1 + iVar11;
    if ((int)uVar12 < (int)uVar6) {
      uVar6 = uVar12;
    }
  }
LAB_1489f9fcd:
  bVar2 = VoiceTalkerMap._40_1_;
  uVar9 = uVar12 & 0xffffffe0;
  uVar14 = VoiceTalkerMap._40_8_ & 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar5,iVar10);
  TStack_60.CurrentBitIndex = uVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = uVar6;
  TStack_60.BaseBitIndex = iVar11;
  uStack_40 = CONCAT44(uStack_6c,VoiceTalkerMap._8_4_ - VoiceTalkerMap._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&VoiceTalkerMap.field_0x10;
  if (((int)uVar12 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  uVar6 = VoiceTalkerMap._40_4_;
  if (uVar12 != uVar6) {
    uVar14 = VoiceTalkerMap._40_8_ & 0xffffffff;
    lVar7 = 0x154c6e990;
    if (VoiceTalkerMap._32_8_ != 0) {
      lVar7 = VoiceTalkerMap._32_8_;
    }
    uVar5 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar7 + (longlong)iVar10 * 4);
    while (uVar5 == 0) {
      lVar8 = (longlong)iVar10;
      uVar9 = uVar9 + 0x20;
      iVar10 = iVar10 + 1;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1489fa0e0;
      uVar5 = *(uint *)(lVar7 + 4 + lVar8 * 4);
    }
    uVar14 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
    uVar14 = (ulonglong)uVar9;
  }
LAB_1489fa0e0:
  while( true ) {
    if (VoiceTalkerMap._8_4_ - VoiceTalkerMap._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == (int)uVar14) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&VoiceTalkerMap.field_0x10))
    break;
    if (*(UVOIPTalker **)(VoiceTalkerMap._0_8_ + 0x20 + (longlong)TStack_60.CurrentBitIndex * 0x30)
        == param_1) {
      return true;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return false;
}

// ResetPlayerVoiceTalker @ 148a0f820

void __cdecl UVOIPStatics::ResetPlayerVoiceTalker(FUniqueNetIdWrapper *param_1)

{
  uint uVar1;
  
  if (VoiceTalkerMap._8_4_ != VoiceTalkerMap._52_4_) {
    uVar1 = ::GetTypeHash(param_1);
    TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FUniqueNetIdWrapper>
              ((TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
                *)&VoiceTalkerMap,uVar1,param_1);
    return;
  }
  return;
}

// ResetPlayerVoiceTalker @ 148a0f860

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl UVOIPStatics::ResetPlayerVoiceTalker(APlayerState *param_1)

{
  FUniqueNetIdRepl *this;
  bool bVar1;
  uint uVar2;
  
  if (param_1 != (APlayerState *)0x0) {
    this = &param_1->UniqueId;
    bVar1 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)this);
    if ((bVar1) && (VoiceTalkerMap._8_4_ != VoiceTalkerMap._52_4_)) {
      uVar2 = ::GetTypeHash((FUniqueNetIdWrapper *)this);
      TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FUniqueNetIdWrapper>
                ((TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
                  *)&VoiceTalkerMap,uVar2,(FUniqueNetIdWrapper *)this);
      return;
    }
  }
  return;
}

// SetMicThreshold @ 148a158b0

void __cdecl UVOIPStatics::SetMicThreshold(float param_1)

{
  longlong lVar1;
  code *pcVar2;
  IConsoleVariable *pIVar3;
  bool bVar4;
  undefined8 uVar5;
  IConsoleManager *pIVar6;
  ForAnyElementType FVar7;
  undefined1 local_58 [16];
  FString local_48;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar6 = IConsoleManager::Get();
      SilenceDetectionCVar =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"voice.SilenceDetectionThreshold",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (SilenceDetectionCVar == (IConsoleVariable *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SilenceDetectionCVar",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VoiceConfig.cpp"
                       ,0xe2,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar3 = SilenceDetectionCVar;
  local_38 = 0x3000000;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0xf000000;
  local_20 = 0x1000000;
  ::FString::PrintfImpl(&local_48,L"%g");
  lVar1 = *(longlong *)pIVar3;
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  uVar5 = (**(code **)(lVar1 + 0xa8))(pIVar3,local_58,&local_38);
  (**(code **)(lVar1 + 0xb0))(pIVar3,FVar7.Data,uVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// SetVOIPTalkerForPlayer @ 148a167d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UVOIPStatics::SetVOIPTalkerForPlayer(FUniqueNetIdWrapper *param_1,UVOIPTalker *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  uVar3 = ::GetTypeHash(param_1);
  TMapBase<FUniqueNetIdWrapper,UVOIPTalker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>_>
  ::FindOrAddImpl<FUniqueNetIdWrapper_const_&>
            ((TMapBase<FUniqueNetIdWrapper,UVOIPTalker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>_>
              *)&VoiceTalkerMap,uVar3,param_1);
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FUniqueNetIdWrapper>
                    ((TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
                      *)&VoiceTalkerMap,uVar3,param_1);
  if ((iVar4 != -1) && (lVar5 = (longlong)iVar4 * 0x30 + VoiceTalkerMap._0_8_, lVar5 != 0)) {
    *(UVOIPTalker **)(lVar5 + 0x20) = param_2;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    _DAT_00000020 = param_2;
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// StaticRegisterNativesUVOIPStatics @ 148a187f0

void __cdecl UVOIPStatics::StaticRegisterNativesUVOIPStatics(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UVOIPStatics_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetMicThreshold @ 148a25070

void __cdecl UVOIPStatics::execSetMicThreshold(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  IConsoleVariable *pIVar4;
  bool bVar5;
  undefined8 uVar6;
  IConsoleManager *pIVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  undefined4 local_res10 [2];
  undefined1 local_58 [16];
  FString local_48;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar8 = (ulonglong)_tls_index;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar7 = IConsoleManager::Get();
      SilenceDetectionCVar =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"voice.SilenceDetectionThreshold",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (SilenceDetectionCVar == (IConsoleVariable *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SilenceDetectionCVar",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VoiceConfig.cpp"
                       ,0xe2,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pIVar4 = SilenceDetectionCVar;
  local_38 = 0x3000000;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0xf000000;
  local_20 = 0x1000000;
  ::FString::PrintfImpl(&local_48,L"%g");
  lVar2 = *(longlong *)pIVar4;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar9.Data = local_48.Data.AllocatorInstance.Data;
  }
  uVar6 = (**(code **)(lVar2 + 0xa8))(pIVar4,local_58,&local_38);
  (**(code **)(lVar2 + 0xb0))(pIVar4,FVar9.Data,uVar6);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

