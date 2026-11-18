// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 56

// FAudioDebugger @ 14761b770

FAudioDebugger * __thiscall Audio::FAudioDebugger::FAudioDebugger(FAudioDebugger *this)

{
  FDelegateHandle FVar1;
  <lambda_1> local_res10 [3];
  
  this->bVisualize3dDebug = '\0';
  (this->WorldRegisteredWithDeviceHandle).ID = 0;
  (this->DebugNames).SoloSoundClass.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugNames).SoloSoundClass.ArrayNum = 0;
  (this->DebugNames).SoloSoundClass.ArrayMax = 0;
  (this->DebugNames).SoloSoundWave.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugNames).SoloSoundWave.ArrayNum = 0;
  (this->DebugNames).SoloSoundWave.ArrayMax = 0;
  (this->DebugNames).SoloSoundCue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugNames).SoloSoundCue.ArrayNum = 0;
  (this->DebugNames).SoloSoundCue.ArrayMax = 0;
  (this->DebugNames).MuteSoundClass.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugNames).MuteSoundClass.ArrayNum = 0;
  (this->DebugNames).MuteSoundClass.ArrayMax = 0;
  (this->DebugNames).MuteSoundWave.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugNames).MuteSoundWave.ArrayNum = 0;
  (this->DebugNames).MuteSoundWave.ArrayMax = 0;
  (this->DebugNames).MuteSoundCue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugNames).MuteSoundCue.ArrayNum = 0;
  (this->DebugNames).MuteSoundCue.ArrayMax = 0;
  (this->DebugNames).DebugAudioMixerSoundName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DebugNames).DebugAudioMixerSoundName.Data.ArrayNum = 0;
  (this->DebugNames).DebugAudioMixerSoundName.Data.ArrayMax = 0;
  (this->DebugNames).DebugSoundName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugNames).DebugSoundName.Data.ArrayNum = 0;
  (this->DebugNames).DebugSoundName.Data.ArrayMax = 0;
  (this->DebugNames).bDebugSoundName = false;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_const_*,unsigned_int),FDefaultDelegateUserPolicy>
          ::AddLambda<_Audio::FAudioDebugger::FAudioDebugger_::__l2::<lambda_1>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UWorld_const_*,unsigned_int),FDefaultDelegateUserPolicy>
                      *)&FAudioDeviceWorldDelegates::OnWorldRegisteredToAudioDevice,local_res10);
                    /* WARNING: Load size is inaccurate */
  (this->WorldRegisteredWithDeviceHandle).ID = *FVar1.ID;
  return this;
}

// operator() @ 147622110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
`Audio::FAudioDebugger::FAudioDebugger'::__l2::<lambda_1>::operator()
          (void *this,UWorld *param_1,uint param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  ForElementType<unsigned_int> *pFVar3;
  FNameEntryId FVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  undefined8 *puVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStackY_118 [32];
  FName local_e8;
  FSparseArrayAllocationInfo local_e0;
  undefined4 local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  longlong *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_e8.ComparisonIndex.Value = param_2;
  if (!Audio::bDebugSoundsForAllViewsEnabled) goto LAB_14762256f;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                     (int *)(local_98 + 0xc));
  iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
  FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FVar15 = local_78;
  }
  uVar9 = iVar6 >> 0x1f & 0x1f;
  iVar6 = iVar6 + uVar9;
  puVar1 = (uint *)((longlong)FVar15 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << (((byte)iVar6 & 0x1f) - (char)uVar9 & 0x1f));
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_98,&local_e0,iVar5);
  iVar5 = local_e0.Index;
  if (local_e0.Pointer != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
    *(FName *)(local_e0.Pointer)->InlineData = Audio::DebugStatNames::Sounds;
    pFVar3 = local_e0.Pointer;
    pFVar3->InlineData[8] = 0xff;
    pFVar3->InlineData[9] = 0xff;
    pFVar3->InlineData[10] = 0xff;
    pFVar3->InlineData[0xb] = 0xff;
    pTVar13 = local_e0.Pointer;
  }
  uVar2 = *(undefined8 *)(pTVar13->AllocatorInstance).InlineData;
  uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  uVar9 = uVar9 + (int)((ulonglong)uVar2 >> 0x20);
  if ((local_98._8_4_ - local_64 != 1) &&
     (lVar11 = *(longlong *)(pTVar13->AllocatorInstance).InlineData, local_98._8_4_ != local_64)) {
    FVar8.Data = local_60;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FVar8.Data = local_58.Data;
    }
    for (iVar6 = *(int *)(FVar8.Data + (ulonglong)(local_50 - 1 & uVar9) * 4); iVar6 != -1;
        iVar6 = *(int *)(local_98._0_8_ + (longlong)iVar6 * 0x10 + 8)) {
      if (*(longlong *)(local_98._0_8_ + (longlong)iVar6 * 0x10) == lVar11) {
        if (iVar6 != -1) {
          *(longlong *)(local_98._0_8_ + (longlong)iVar6 * 0x10) = lVar11;
          TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_98,iVar5,1);
          goto LAB_14762256f;
        }
        break;
      }
    }
  }
  uVar16 = local_98._8_4_ - local_64;
  uVar12 = 1;
  if (3 < uVar16) {
    uVar10 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar11 & 0x1f);
  }
  if (((int)uVar16 < 1) || ((int)uVar12 <= (int)local_50)) {
    uVar9 = local_50 - 1 & uVar9;
    *(uint *)((pTVar13->AllocatorInstance).InlineData + 0xc) = uVar9;
    FVar8.Data = local_60;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FVar8.Data = local_58.Data;
    }
    uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar9;
    *(undefined4 *)((pTVar13->AllocatorInstance).InlineData + 8) =
         *(undefined4 *)(FVar8.Data + uVar10 * 4);
    *(int *)(FVar8.Data + uVar10 * 4) = iVar5;
    goto LAB_14762256f;
  }
  local_50 = uVar12;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar12 != 0) {
    uVar9 = uVar12;
    if (uVar12 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar9 = 0;
        goto LAB_147622360;
      }
    }
    else {
LAB_147622360:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,4);
    }
    if (0 < (int)uVar12) {
      uVar17 = (ulonglong)uVar12;
      uVar10 = 0;
      do {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = uVar10 & (longlong)(int)uVar12 - 1U;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (local_50 != 0) {
    local_e0.Pointer = local_98 + 0x10;
    local_e0.Index = 0;
    local_e0._4_4_ = 1;
    iStack_cc = 0;
    iStack_c8 = 0;
    if (local_70 != 0) {
      FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_78;
      }
      uVar9 = *(uint *)FVar15;
      iStack_c8 = 0;
      local_e0.Index = 0;
      while (uVar9 == 0) {
        iStack_c8 = iStack_c8 + 0x20;
        lVar11 = (longlong)local_e0.Index;
        local_e0.Index = local_e0.Index + 1;
        if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_e0.Index)
        goto LAB_14762246c;
        uVar9 = ((uint *)((longlong)FVar15 + 4))[lVar11];
      }
      local_e0._4_4_ = -uVar9 & uVar9;
      uVar10 = (ulonglong)(uint)local_e0._4_4_ * 2 + 1;
      lVar11 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iStack_cc = (int)lVar11 + -1 + iStack_c8;
      if (local_70 < iStack_cc) {
LAB_14762246c:
        iStack_cc = local_70;
      }
    }
    local_d0 = 0xffffffff;
    local_c0 = (longlong *)local_98;
    local_b8._padding_ = CONCAT44(local_e0._4_4_,local_e0.Index);
    local_b8.CurrentBitIndex = iStack_cc;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_c4;
    local_b8.BaseBitIndex = iStack_c8;
    iVar5 = iStack_cc;
    local_b8.Array = local_e0.Pointer;
    if (iStack_cc < local_70) {
      do {
        puVar14 = (undefined8 *)((longlong)iVar5 * 0x10 + *local_c0);
        uVar2 = *puVar14;
        uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar9 = local_50 - 1 & uVar9 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)((longlong)puVar14 + 0xc) = uVar9;
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(FVar8.Data + uVar10 * 4);
        *(int *)(FVar8.Data + uVar10 * 4) = iVar5;
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        iVar5 = local_b8.CurrentBitIndex;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
LAB_14762256f:
  FVar4.Value = local_e8.ComparisonIndex.Value;
  if (Audio::bDebugCuesForAllViewsEnabled != false) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,&local_e8,
               (bool *)&Audio::DebugStatNames::SoundCues);
  }
  if (Audio::bDebugWavesForAllViewsEnabled != false) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,&local_e8,
               (bool *)&Audio::DebugStatNames::SoundWaves);
  }
  if (Audio::bDebugModulationForAllViewsEnabled != false) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,&local_e8,
               (bool *)&Audio::DebugStatNames::SoundModulation);
  }
  if (Audio::bDebugMixesForAllViewsEnabled != false) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,&local_e8,
               (bool *)&Audio::DebugStatNames::SoundMixes);
  }
  if (Audio::bDebugReverbForAllViewsEnabled != false) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,&local_e8,
               (bool *)&Audio::DebugStatNames::SoundReverb);
  }
  if (Audio::bDebugStreamingForAllViewsEnabled != false) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,&local_e8,
               (bool *)&Audio::DebugStatNames::AudioStreaming);
  }
  Audio::FAudioDebugger::SetStats
            (*(FAudioDebugger **)this,FVar4.Value,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98);
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  bVar18 = local_98._12_4_ != 0;
  local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
  if (bVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_64 = 0;
  local_70 = 0;
  local_68 = -1;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// operator() @ 147622a80

bool __thiscall
`Audio::FAudioDebugger::GetDebugSoloMuteStateX'::__l2::<lambda_1>::operator()
          (void *this,FName param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  size_t sVar5;
  FString *pFVar6;
  bool bVar7;
  wchar_t *_Str;
  bool bVar8;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  pFVar6 = *(FString **)this;
  local_res10 = param_1;
  pFVar4 = ::FName::ToString(&local_res10,&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    _Str = L"";
LAB_147622ac7:
    sVar5 = wcslen(_Str);
    bVar2 = false;
    iVar3 = ::FString::Find(pFVar6,_Str,(int)sVar5,IgnoreCase,FromStart,-1);
    if (iVar3 == -1) goto LAB_147622af6;
LAB_147622b44:
    bVar7 = true;
    bVar8 = true;
    if (!bVar2) goto LAB_147622b5b;
  }
  else {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_147622ac7;
LAB_147622af6:
    pFVar6 = ::FName::GetPlainNameString(&local_res10,&local_38);
    iVar3 = (pFVar6->Data).ArrayNum;
    iVar1 = *(int *)(*(undefined8 **)((longlong)this + 8) + 1);
    if (iVar1 == iVar3) {
      if (iVar1 < 2) {
        bVar2 = true;
        goto LAB_147622b44;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)**(undefined8 **)((longlong)this + 8),
                         (wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
      bVar8 = iVar3 == 0;
    }
    else {
      bVar8 = iVar3 + iVar1 == 1;
    }
    bVar2 = true;
    if (bVar8) goto LAB_147622b44;
    bVar8 = false;
  }
  bVar7 = bVar8;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_147622b5b:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

// operator() @ 147623180

void __thiscall
`Audio::FAudioDebugger::SendUpdateResultsToGameThread'::__l2::<lambda_1>::operator()(void *this)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<Audio::FAudioStats::FStatSoundInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Audio::FAudioStats::FStatSoundMix,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  void *_Src;
  FStatSoundInfo *pFVar6;
  FStatSoundMix *pFVar7;
  FAudioStats *pFVar8;
  
  pFVar8 = TMapBase<unsigned_int,Audio::FAudioStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>_>
           ::FindOrAddImpl<unsigned_int_const_&>
                     ((TMapBase<unsigned_int,Audio::FAudioStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>_>
                       *)&Audio::AudioDeviceStats,*(uint *)this,this);
  pTVar1 = &pFVar8->ListenerTransforms;
  if (pTVar1 != (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                ((longlong)this + 8)) {
    iVar5 = *(int *)((longlong)this + 0x10);
    piVar2 = &(pFVar8->ListenerTransforms).ArrayMax;
    _Src = *(void **)((longlong)this + 8);
    (pFVar8->ListenerTransforms).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar5,*piVar2,&pTVar1->AllocatorInstance,iVar5,piVar2);
      if (iVar5 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar5 * 0x60);
      }
    }
  }
  pTVar3 = &pFVar8->StatSoundInfos;
  if (pTVar3 != (TArray<Audio::FAudioStats::FStatSoundInfo,TSizedDefaultAllocator<32>_> *)
                ((longlong)this + 0x18)) {
    DestructItems<Audio::FAudioStats::FStatSoundInfo,int>
              ((FStatSoundInfo *)(pTVar3->AllocatorInstance).Data,(pFVar8->StatSoundInfos).ArrayNum)
    ;
    iVar5 = *(int *)((longlong)this + 0x20);
    piVar2 = &(pFVar8->StatSoundInfos).ArrayMax;
    pFVar6 = *(FStatSoundInfo **)((longlong)this + 0x18);
    (pFVar8->StatSoundInfos).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x100,0x10,iVar5,*piVar2,&pTVar3->AllocatorInstance,iVar5,piVar2);
      ConstructItems<Audio::FAudioStats::FStatSoundInfo,Audio::FAudioStats::FStatSoundInfo,int>
                ((pTVar3->AllocatorInstance).Data,pFVar6,iVar5);
    }
  }
  pTVar4 = &pFVar8->StatSoundMixes;
  if (pTVar4 != (TArray<Audio::FAudioStats::FStatSoundMix,TSizedDefaultAllocator<32>_> *)
                ((longlong)this + 0x28)) {
    DestructItems<Audio::FAudioStats::FStatSoundMix,int>
              ((FStatSoundMix *)(pTVar4->AllocatorInstance).Data,(pFVar8->StatSoundMixes).ArrayNum);
    iVar5 = *(int *)((longlong)this + 0x30);
    piVar2 = &(pFVar8->StatSoundMixes).ArrayMax;
    pFVar7 = *(FStatSoundMix **)((longlong)this + 0x28);
    (pFVar8->StatSoundMixes).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar5,*piVar2,&pTVar4->AllocatorInstance,iVar5,piVar2);
    ConstructItems<Audio::FAudioStats::FStatSoundMix,Audio::FAudioStats::FStatSoundMix,int>
              ((pTVar4->AllocatorInstance).Data,pFVar7,iVar5);
  }
  return;
}

// operator() @ 1476234e0

void __thiscall `Audio::FAudioDebugger::SetNameArray'::__l2::<lambda_1>::operator()(void *this)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  this_00 = *(TArray<FName,TSizedDefaultAllocator<32>_> **)((longlong)this + 8);
  if (*(char *)((longlong)this + 0x10) != '\0') {
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this_00,this);
    return;
  }
  pFVar1 = (this_00->AllocatorInstance).Data;
  if ((pFVar1 <= this) && (this < pFVar1 + (longlong)this_00->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar4 = (longlong)this_00->ArrayNum;
  if (this_00->ArrayNum != 0) {
    iVar8 = 0;
    pFVar1 = (this_00->AllocatorInstance).Data;
    bVar3 = *(longlong *)pFVar1 != *(longlong *)this;
    lVar5 = 0;
    iVar6 = 0;
    do {
      lVar5 = lVar5 + 1;
      iVar7 = iVar6 + 1;
      if (lVar5 < lVar4) {
        do {
          if (bVar3 != (*(longlong *)(pFVar1 + lVar5 * 8) != *(longlong *)this)) break;
          iVar7 = iVar7 + 1;
          lVar5 = lVar5 + 1;
        } while (lVar5 < lVar4);
      }
      if (bVar3 != false) {
        if (iVar8 != iVar6) {
          memmove(pFVar1 + (longlong)iVar8 * 8,pFVar1 + (longlong)iVar6 * 8,
                  (longlong)(iVar7 - iVar6) << 3);
        }
        iVar8 = iVar8 + (iVar7 - iVar6);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar6 = iVar7;
    } while (lVar5 < lVar4);
    this_00->ArrayNum = iVar8;
  }
  return;
}

// operator() @ 147623670

void __thiscall `Audio::FAudioDebugger::ToggleNameArray'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
  pFVar3 = pFVar2->Data;
  if (pFVar3 != pFVar3 + (longlong)*(int *)&pFVar2[1].Data * 8) {
    pFVar10 = pFVar3;
    do {
      if (*(longlong *)pFVar10 == *(longlong *)this) {
        cVar5 = *(char *)((longlong)this + 0x10);
        uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar3 >> 3);
        if (uVar9 != 0xffffffff) {
          if (cVar5 != '\0') {
            piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
            *(undefined4 *)&pFVar2[1].Data = 0;
            if (*piVar1 == 0) {
              return;
            }
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,0,pFVar2,0,piVar1);
            return;
          }
          uVar8 = 0;
          if ((int)uVar9 < *(int *)&pFVar2[1].Data) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = *(int *)&pFVar2[1].Data + ~uVar9;
          if (1 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            memmove(pFVar2->Data + (longlong)(int)uVar9 * 8,
                    pFVar2->Data + (longlong)(*(int *)&pFVar2[1].Data - iVar7) * 8,
                    (longlong)iVar7 << 3);
          }
          *(int *)&pFVar2[1].Data = *(int *)&pFVar2[1].Data + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,pFVar2,*(int *)&pFVar2[1].Data,(int *)((longlong)&pFVar2[1].Data + 4));
          return;
        }
        goto LAB_1476236b6;
      }
      pFVar10 = pFVar10 + 8;
    } while (pFVar10 != pFVar3 + (longlong)*(int *)&pFVar2[1].Data * 8);
  }
  cVar5 = *(char *)((longlong)this + 0x10);
LAB_1476236b6:
  if (cVar5 != '\0') {
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    *(undefined4 *)&pFVar2[1].Data = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,pFVar2,0,piVar1);
    }
  }
  if (*(longlong *)this != 0) {
    pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
    if (((pFVar2->Data <= this) &&
        (this < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar2->Data + (longlong)iVar7 * 8) = *(undefined8 *)this;
  }
  return;
}

// operator() @ 147623890

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
`Audio::FAudioDebugger::ClearStats'::__l8::<lambda_1>::operator()
          (void *this,uint param_1,FAudioDevice *param_2)

{
  code *pcVar1;
  bool bVar2;
  FAudioDeviceManager *this_00;
  bool bVar3;
  FAudioDeviceHandle *pFVar4;
  UWorld *pUVar5;
  FAudioDeviceHandle local_28;
  
  bVar3 = false;
  if (*(UWorld **)((longlong)this + 8) != (UWorld *)0x0) {
    pFVar4 = UWorld::GetAudioDevice(*(UWorld **)((longlong)this + 8),&local_28);
    bVar3 = true;
    if (pFVar4->DeviceId != param_1) {
      bVar2 = false;
      goto LAB_1476238d2;
    }
  }
  bVar2 = true;
LAB_1476238d2:
  this_00 = FAudioDeviceManager::Singleton;
  if ((bVar3) && (local_28.Device != (FAudioDevice *)0x0)) {
    if ((FAudioDeviceManager::Singleton == (FAudioDeviceManager *)0x0) ||
       (FAudioDeviceManager::Singleton->InitPhase != Initialized)) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6883895825940871781>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                         ,0x59b,"AudioDeviceManager");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      pUVar5 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_28);
      FAudioDeviceManager::DecrementDevice(this_00,local_28.DeviceId,pUVar5);
    }
  }
  if (bVar2) {
    Audio::FAudioDebugger::ClearStats
              (*(FAudioDebugger **)this,param_1,*(FName *)((longlong)this + 0x10));
  }
  return;
}

// operator() @ 1476239c0

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
`Audio::FAudioDebugger::SetStats'::__l8::<lambda_1>::operator()
          (void *this,uint param_1,FAudioDevice *param_2)

{
  code *pcVar1;
  bool bVar2;
  FAudioDeviceManager *this_00;
  bool bVar3;
  FAudioDeviceHandle *pFVar4;
  UWorld *pUVar5;
  FAudioDeviceHandle local_28;
  
  bVar3 = false;
  if (*(UWorld **)((longlong)this + 8) != (UWorld *)0x0) {
    pFVar4 = UWorld::GetAudioDevice(*(UWorld **)((longlong)this + 8),&local_28);
    bVar3 = true;
    if (pFVar4->DeviceId != param_1) {
      bVar2 = false;
      goto LAB_147623a02;
    }
  }
  bVar2 = true;
LAB_147623a02:
  this_00 = FAudioDeviceManager::Singleton;
  if ((bVar3) && (local_28.Device != (FAudioDevice *)0x0)) {
    if ((FAudioDeviceManager::Singleton == (FAudioDeviceManager *)0x0) ||
       (FAudioDeviceManager::Singleton->InitPhase != Initialized)) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6883895825940871781>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                         ,0x59b,"AudioDeviceManager");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      pUVar5 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_28);
      FAudioDeviceManager::DecrementDevice(this_00,local_28.DeviceId,pUVar5);
    }
  }
  if (bVar2) {
    Audio::FAudioDebugger::SetStats
              (*(FAudioDebugger **)this,param_1,
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)((longlong)this + 0x10))
    ;
  }
  return;
}

// operator() @ 147623aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall `Audio::FAudioDebugger::DrawDebugInfo'::__l17::<lambda_1>::operator()(void *this)

{
  float fVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x48));
  if (bVar2) {
    pUVar3 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x48));
    fVar1 = __real_bf800000;
    DrawDebugCrosshairs(pUVar3,this,(TRotator<double> *)((longlong)this + 0x30),__real_41a00000,
                        &FColor::Red,false,__real_bf800000,'\x01');
    DrawDebugCrosshairs(pUVar3,(TVector<double> *)((longlong)this + 0x18),
                        (TRotator<double> *)((longlong)this + 0x30),__real_41a00000,&FColor::Green,
                        false,fVar1,'\x01');
  }
  return;
}

// operator() @ 147623b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall `Audio::FAudioDebugger::DrawDebugInfo'::__l19::<lambda_1>::operator()(void *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uchar uVar4;
  bool bVar5;
  bool bVar6;
  UWorld *pUVar7;
  double dVar8;
  TVector<double>_u_0 local_58 [3];
  
  bVar6 = FWeakObjectPtr::IsValid(this);
  bVar5 = bPersistentLines;
  uVar4 = DepthPriority;
  fVar3 = Thickness;
  fVar2 = Lifetime;
  fVar1 = ArrowHeadSize;
  if (bVar6) {
    dVar8 = (double)ArrowLength;
    local_58[0]._0_8_ = dVar8 * *(double *)((longlong)this + 0x20) + *(double *)((longlong)this + 8)
    ;
    local_58[0]._8_8_ =
         dVar8 * *(double *)((longlong)this + 0x28) + *(double *)((longlong)this + 0x10);
    local_58[0]._16_8_ =
         dVar8 * *(double *)((longlong)this + 0x30) + *(double *)((longlong)this + 0x18);
    pUVar7 = (UWorld *)FWeakObjectPtr::Get(this);
    DrawDebugDirectionalArrow
              (pUVar7,(TVector<double> *)((longlong)this + 8),(TVector<double> *)&local_58[0]._s_0,
               fVar1,&FColor::Red,bVar5,fVar2,uVar4,fVar3);
    bVar5 = bPersistentLines;
    uVar4 = DepthPriority;
    fVar3 = Thickness;
    fVar2 = Lifetime;
    fVar1 = ArrowHeadSize;
    dVar8 = (double)ArrowLength;
    local_58[0]._0_8_ = dVar8 * *(double *)((longlong)this + 0x38) + *(double *)((longlong)this + 8)
    ;
    local_58[0]._8_8_ =
         dVar8 * *(double *)((longlong)this + 0x40) + *(double *)((longlong)this + 0x10);
    local_58[0]._16_8_ =
         dVar8 * *(double *)((longlong)this + 0x48) + *(double *)((longlong)this + 0x18);
    pUVar7 = (UWorld *)FWeakObjectPtr::Get(this);
    DrawDebugDirectionalArrow
              (pUVar7,(TVector<double> *)((longlong)this + 8),(TVector<double> *)&local_58[0]._s_0,
               fVar1,&FColor::Blue,bVar5,fVar2,uVar4,fVar3);
    bVar5 = bPersistentLines;
    uVar4 = DepthPriority;
    fVar3 = Thickness;
    fVar2 = Lifetime;
    fVar1 = ArrowHeadSize;
    dVar8 = (double)ArrowLength;
    local_58[0]._0_8_ = dVar8 * *(double *)((longlong)this + 0x50) + *(double *)((longlong)this + 8)
    ;
    local_58[0]._8_8_ =
         dVar8 * *(double *)((longlong)this + 0x58) + *(double *)((longlong)this + 0x10);
    local_58[0]._16_8_ =
         dVar8 * *(double *)((longlong)this + 0x60) + *(double *)((longlong)this + 0x18);
    pUVar7 = (UWorld *)FWeakObjectPtr::Get(this);
    DrawDebugDirectionalArrow
              (pUVar7,(TVector<double> *)((longlong)this + 8),(TVector<double> *)&local_58[0]._s_0,
               fVar1,&FColor::Green,bVar5,fVar2,uVar4,fVar3);
    bVar5 = bPersistentLines;
    uVar4 = DepthPriority;
    fVar1 = Lifetime;
    pUVar7 = (UWorld *)FWeakObjectPtr::Get(this);
    DrawDebugSphere(pUVar7,(TVector<double> *)((longlong)this + 8),__real_40a00000,8,
                    &FColor::Magenta,bVar5,fVar1,uVar4,0.0);
  }
  return;
}

// operator() @ 147623e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall `Audio::FAudioDebugger::DrawDebugInfo'::__l23::<lambda_1>::operator()(void *this)

{
  int iVar1;
  bool bVar2;
  UWorld *pUVar3;
  FLinearColor *this_00;
  uchar uVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  float fVar8;
  FColor_u_0 local_res8 [2];
  FColor_u_0 local_res10;
  FString local_98;
  FLinearColor_u_0 local_88;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60 [2];
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x84));
  if (!bVar2) {
    return;
  }
  local_78._s_0.X = *(double *)((longlong)this + 0x40);
  local_78._s_0.Y = *(double *)((longlong)this + 0x48);
  local_78._s_0.Z = *(double *)((longlong)this + 0x50);
  pUVar3 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x84));
  DrawDebugSphere(pUVar3,(TVector<double> *)&local_78._s_0,__real_41200000,8,&FColor::White,false,
                  __real_bf800000,'\x01',0.0);
  iVar1 = ActiveSoundVisualizeModeCVar;
  local_res8[0] = *(FColor_u_0 *)((longlong)this + 0x10);
  if (ActiveSoundVisualizeModeCVar - 1U < 2) {
    fVar8 = *(float *)((longlong)this + 0x80);
    if (*(float *)((longlong)this + 0x80) <= __real_322bcc77) {
      fVar8 = __real_322bcc77;
    }
    fVar8 = logf(fVar8);
    fVar8 = fVar8 * __real_410af967;
    if (iVar1 == 1) {
      pwVar5 = L" (Vol: %.3f [Active: %.2fs, Playing: %.2fs])";
    }
    else {
      pwVar5 = L" (Vol: %.3f dB [Active: %.2fs, Playing: %.2fs])";
    }
    ::FString::PrintfImpl((FString *)&local_88._s_0,pwVar5);
    if (0.0 <= fVar8) {
      fVar8 = 0.0;
    }
    if (fVar8 <= __real_c1f00000) {
      fVar8 = __real_c1f00000;
    }
    uVar4 = (uchar)(int)(__real_42aa0000 - fVar8 * ___real_c0355556);
  }
  else {
    if (ActiveSoundVisualizeModeCVar != 3) {
      uVar6 = (void *)0x0;
      if ((ActiveSoundVisualizeModeCVar == 5) &&
         (::FString::PrintfImpl
                    ((FString *)&local_88._s_0,L" (Occlusion Volume: %.3f, Occlusion Filter: %.3f)")
         , uVar6 = local_88._0_8_, local_res8[0] = FColor::Green.field0_0x0,
         *(char *)((longlong)this + 0x98) != '\0')) {
        local_res8[0] = FColor::Red.field0_0x0;
      }
      goto LAB_1476240a4;
    }
    ::FString::PrintfImpl((FString *)&local_88._s_0,L" (Dist: %.3f, Max: %.3f)");
    fVar8 = __real_42aa0000 - *(float *)((longlong)this + 0x80) * __real_42aa0000;
    if (__real_437f0000 <= fVar8) {
      fVar8 = __real_437f0000;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    uVar4 = (uchar)(int)fVar8;
  }
  uVar6 = local_88._0_8_;
  this_00 = FLinearColor::MakeFromHSV8((FLinearColor *)&local_88._s_0,uVar4,0xff,0xff);
  FLinearColor::ToFColorSRGB(this_00);
  local_res8[0] = local_res10;
LAB_1476240a4:
  ::FString::PrintfImpl(&local_98,L"%s%s");
  fVar8 = *(float *)((longlong)this + 0xa0);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar7.Data = local_98.Data.AllocatorInstance.Data;
  }
  ::FString::FString((FString *)&local_88._s_0,(wchar_t *)FVar7.Data);
  local_60[0]._s_0.X = local_78._s_0.X;
  local_60[0]._s_0.Y = local_78._s_0.Y;
  local_60[0]._16_8_ = local_78._s_0.Z + __real_4040000000000000;
  DrawDebugString(pUVar3,(TVector<double> *)&local_60[0]._s_0,(FString *)&local_88._s_0,
                  (AActor *)0x0,(FColor *)&local_res8[0]._s_0,fVar8,false,__real_3f800000);
  if ((void *)local_88._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if ((void *)uVar6 != (void *)0x0) {
    FMemory::Free((void *)uVar6);
  }
  return;
}

// operator() @ 147624250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall `Audio::FAudioDebugger::DrawDebugInfo'::__l11::<lambda_1>::operator()(void *this)

{
  float fVar1;
  bool bVar2;
  UWorld *pUVar3;
  ForAnyElementType FVar4;
  FString local_98;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  undefined8 uStack_50;
  FString local_48;
  TRotator<double> local_38 [2];
  
  bVar2 = FWeakObjectPtr::IsValid(this);
  if (bVar2) {
    ::FString::PrintfImpl(&local_98,L"%s [Virt: %.2fs]");
    local_88._s_0.X = *(double *)((longlong)this + 0x30);
    local_88._s_0.Y = *(double *)((longlong)this + 0x38);
    local_88._s_0.Z = *(double *)((longlong)this + 0x40);
    local_68._s_0.Z = *(double *)((longlong)this + 0x20);
    uStack_50 = *(undefined8 *)((longlong)this + 0x28);
    local_68._s_0.X = *(double *)((longlong)this + 0x10);
    local_68._s_0.Y = *(double *)((longlong)this + 0x18);
    UE::Math::TQuat<double>::Rotator((TQuat<double> *)&local_68._s_0,local_38);
    fVar1 = *(float *)((longlong)this + 0x80);
    pUVar3 = (UWorld *)FWeakObjectPtr::Get(this);
    DrawDebugCrosshairs(pUVar3,(TVector<double> *)&local_88._s_0,local_38,__real_41a00000,
                        &FColor::Blue,false,fVar1,'\x01');
    fVar1 = *(float *)((longlong)this + 0x80);
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar4.Data = local_98.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_48,(wchar_t *)FVar4.Data);
    local_68._s_0.X = local_88._s_0.X;
    local_68._s_0.Y = local_88._s_0.Y;
    local_68._s_0.Z = local_88._s_0.Z + __real_4040000000000000;
    pUVar3 = (UWorld *)FWeakObjectPtr::Get(this);
    DrawDebugString(pUVar3,(TVector<double> *)&local_68._s_0,&local_48,(AActor *)0x0,&FColor::Blue,
                    fVar1,false,__real_3f800000);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ClearMutesAndSolos @ 14762dc70

void __thiscall Audio::FAudioDebugger::ClearMutesAndSolos(FAudioDebugger *this)

{
  int *piVar1;
  
  piVar1 = &(this->DebugNames).MuteSoundClass.ArrayMax;
  (this->DebugNames).MuteSoundClass.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->DebugNames).MuteSoundClass.AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->DebugNames).MuteSoundCue.ArrayMax;
  (this->DebugNames).MuteSoundCue.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->DebugNames).MuteSoundCue.AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->DebugNames).MuteSoundWave.ArrayMax;
  (this->DebugNames).MuteSoundWave.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->DebugNames).MuteSoundWave.AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->DebugNames).SoloSoundClass.ArrayMax;
  (this->DebugNames).SoloSoundClass.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&this->DebugNames,0,piVar1);
  }
  piVar1 = &(this->DebugNames).SoloSoundCue.ArrayMax;
  (this->DebugNames).SoloSoundCue.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->DebugNames).SoloSoundCue.AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->DebugNames).SoloSoundWave.ArrayMax;
  (this->DebugNames).SoloSoundWave.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->DebugNames).SoloSoundWave.AllocatorInstance,0,piVar1);
  }
  return;
}

// ClearStats @ 14762ea00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FAudioDebugger::ClearStats(FAudioDebugger *this,uint param_1,FName param_2)

{
  uint uVar1;
  bool bVar2;
  FAudioStats *pFVar3;
  FName *pFVar4;
  TStatId TVar5;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  uint local_res10 [4];
  FName local_res20;
  FNameEntryId FStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  code *local_58 [5];
  undefined8 *local_30;
  
  local_res10[0] = param_1;
  bVar2 = IsInGameThread();
  if (bVar2) {
    pFVar3 = TMapBase<unsigned_int,Audio::FAudioStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>_>
             ::FindOrAddImpl<unsigned_int_const_&>
                       ((TMapBase<unsigned_int,Audio::FAudioStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>_>
                         *)&AudioDeviceStats,local_res10[0],local_res10);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove(&pFVar3->EnabledStats,param_2)
    ;
  }
  bVar2 = IsInAudioThread();
  if (bVar2) {
    this_00 = &TMapBase<unsigned_int,Audio::FAudioStats_AudioThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats_AudioThread,0>_>
               ::FindOrAddImpl<unsigned_int_const_&>
                         ((TMapBase<unsigned_int,Audio::FAudioStats_AudioThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats_AudioThread,0>_>
                           *)&AudioDeviceStats_AudioThread,local_res10[0],local_res10)->
               RequestedStats;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove(this_00,param_2);
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_AudioClearStats =
         (FThreadSafeStaticStat<_private:_void___cdecl_Audio::FAudioDebugger::ClearStats(unsigned_int,FName)_::_8_::FStat_STAT_AudioClearStats>
          )0x0;
    pFVar4 = ::FName::FName(&local_res20,"STAT_AudioClearStats");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioClearStats,*pFVar4,
               L"FAudioThreadTask.ClearStats","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
               L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  TVar5.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioClearStats;
  if (StatPtr_STAT_AudioClearStats ==
      (FThreadSafeStaticStat<_private:_void___cdecl_Audio::FAudioDebugger::ClearStats(unsigned_int,FName)_::_8_::FStat_STAT_AudioClearStats>
       )0x0) {
    pFVar4 = ::FName::FName(&local_res20,"STAT_AudioClearStats");
    TVar5.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioClearStats,*pFVar4,
                    L"FAudioThreadTask.ClearStats","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                    L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  uVar1 = local_res10[0];
  FStack_6c = param_2.ComparisonIndex.Value;
  uStack_68 = param_2.Number;
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x20,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Audio::FAudioDebugger::ClearStats'::`8'::<lambda_1>,1,1>::
               _vftable_;
  local_30[1] = this;
  local_30[2] = CONCAT44(FStack_6c.Value,uVar1);
  local_30[3] = CONCAT44(uStack_64,uStack_68);
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FAudioDebugger::ClearStats'::__l8::<lambda_1>,void>::
                  Call;
  }
  FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_58,TVar5);
  return;
}

// ClearStats @ 14762ec90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl Audio::FAudioDebugger::ClearStats(FName param_1,UWorld *param_2)

{
  FAudioDebugger *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAudioDeviceManager *this;
  code *local_38 [5];
  undefined8 *local_10;
  
  if ((GEngine != (UEngine *)0x0) &&
     (this = UEngine::GetAudioDeviceManager(GEngine), this != (FAudioDeviceManager *)0x0)) {
    if (((this->AudioDebugger).Ptr == (FAudioDebugger *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioDebugger.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                           ,0x537,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->AudioDebugger).Ptr;
    local_38[0] = (code *)0x0;
    local_10 = FMemory::Malloc(0x20,8);
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FAudioDebugger::ClearStats'::`8'::<lambda_1>,1,1>::
                 _vftable_;
    local_10[1] = pFVar1;
    local_10[2] = param_2;
    *(FName *)(local_10 + 3) = param_1;
    if (local_10 + 1 != (undefined8 *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FAudioDebugger::ClearStats'::__l8::<lambda_1>,void,unsigned_int,FAudioDevice_*>
                    ::Call;
    }
    FAudioDeviceManager::IterateOverAllDevices
              (this,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_38);
  }
  return;
}

// DrawDebugInfo @ 1476347e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
Audio::FAudioDebugger::DrawDebugInfo
          (UWorld *param_1,TArray<FListener,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  FAudioDeviceManager *this;
  TStatId TVar11;
  TTransform<double> *this_00;
  double *pdVar12;
  TTransform<double> *pTVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 local_res18 [8];
  FWeakObjectPtr local_res20;
  UWorld *local_218 [3];
  TVector<double>_u_0 local_200;
  code *local_1e8 [5];
  undefined8 *local_1c0;
  FWeakObjectPtr local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  double local_188;
  undefined1 auStack_180 [16];
  double dStack_170;
  double local_118;
  double local_100;
  
  if (ActiveSoundVisualizeListenersCVar != 0) {
    bVar10 = IsInAudioThread();
    if ((!bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInAudioThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDebug.cpp"
                            ,0x4cc,L""), bVar10)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this = UEngine::GetAudioDeviceManager(GEngine);
    if ((this != (FAudioDeviceManager *)0x0) &&
       (bVar10 = FAudioDeviceManager::IsVisualizeDebug3dEnabled(this), bVar10)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        FThreadSafeStaticStatInner<`Audio::FAudioDebugger::DrawDebugInfo'::__l15::FStat_STAT_AudioDrawListenerDebugInfo,1>
        ::GetStatId(&StatPtr_STAT_AudioDrawListenerDebugInfo);
        _Init_thread_footer(&::_TSS0);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_218[0] = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_218);
      auVar7 = ___xmm_3ff00000000000000000000000000000;
      dVar6 = __real_3ff0000000000000;
      this_00 = (TTransform<double> *)(param_2->AllocatorInstance).Data;
      iVar1 = param_2->ArrayNum;
      pdVar12 = this_00[1].Rotation.ZW.m128d_f64 + 1;
      pTVar13 = (TTransform<double> *)((longlong)this_00 + (longlong)iVar1 * 0x110);
      while( true ) {
        if (param_2->ArrayNum != iVar1) {
          `TCheckedPointerIterator<FListener_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (this_00 == pTVar13) break;
        if ((*(byte *)(pdVar12 + 3) & 1) == 0) {
          uVar37 = *(undefined4 *)(pdVar12 + -0xb);
          uVar38 = *(undefined4 *)((longlong)pdVar12 + -0x54);
          uVar39 = *(undefined4 *)(pdVar12 + -10);
          uVar40 = *(undefined4 *)((longlong)pdVar12 + -0x4c);
          uVar41 = SUB84(pdVar12[-9],0);
          uVar42 = (undefined4)((ulonglong)pdVar12[-9] >> 0x20);
        }
        else {
          uVar37 = *(undefined4 *)pdVar12;
          uVar38 = *(undefined4 *)((longlong)pdVar12 + 4);
          uVar39 = *(undefined4 *)(pdVar12 + 1);
          uVar40 = *(undefined4 *)((longlong)pdVar12 + 0xc);
          uVar41 = SUB84(pdVar12[2],0);
          uVar42 = (undefined4)((ulonglong)pdVar12[2] >> 0x20);
        }
        auVar25 = *(undefined1 (*) [16])(this_00->Rotation).ZW.m128d_f64;
        auVar14 = *(undefined1 (*) [16])(this_00->Rotation).XY.m128d_f64;
        auVar28 = *(undefined1 (*) [16])(this_00->Rotation).XY.m128d_f64;
        dVar5 = (this_00->Rotation).ZW.m128d_f64[1];
        dVar35 = auVar7._8_8_;
        dVar17 = auVar25._0_8_;
        dVar22 = auVar25._8_8_;
        auVar23 = blendpd(auVar14,auVar25,2);
        auVar31._0_8_ = dVar35 * auVar14._0_8_ - auVar14._8_8_ * auVar7._0_8_;
        auVar31._8_8_ = auVar14._8_8_ * 0.0 - dVar17 * dVar35;
        auVar14 = blendpd(auVar7,ZEXT816(0),2);
        auVar24._0_8_ = auVar14._0_8_ * dVar17 - auVar23._0_8_ * 0.0;
        auVar24._8_8_ = auVar14._8_8_ * dVar22 - auVar23._8_8_ * 0.0;
        auVar14 = blendpd(auVar31,auVar24,2);
        auVar32._0_8_ = auVar14._0_8_ + auVar14._0_8_;
        auVar32._8_8_ = auVar14._8_8_ + auVar14._8_8_;
        dVar3 = auVar31._8_8_ + auVar31._8_8_;
        dVar4 = auVar24._0_8_ + auVar24._0_8_;
        uVar36 = (undefined4)((ulonglong)dVar4 >> 0x20);
        auVar26._8_4_ = SUB84(dVar4,0);
        auVar26._0_8_ = dVar3;
        auVar26._12_4_ = uVar36;
        auVar14._8_4_ = SUB84(dVar4,0);
        auVar14._0_8_ = dVar3;
        auVar14._12_4_ = uVar36;
        auVar14 = blendpd(auVar14,auVar32,2);
        auVar25 = blendpd(auVar28,auVar25,2);
        auVar27._0_8_ = auVar26._8_8_ * auVar28._0_8_ - auVar28._8_8_ * dVar3;
        auVar27._8_8_ = auVar32._0_8_ * auVar28._8_8_ - dVar17 * dVar4;
        auVar23._8_4_ = SUB84(auVar27._8_8_,0);
        auVar23._0_8_ = auVar27._0_8_;
        auVar23._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
        auVar19._0_8_ = auVar14._0_8_ * dVar17 - auVar25._0_8_ * auVar32._0_8_;
        auVar19._8_8_ = auVar14._8_8_ * dVar22 - auVar25._8_8_ * auVar32._8_8_;
        auVar25 = *(undefined1 (*) [16])(this_00->Rotation).XY.m128d_f64;
        auVar28 = blendpd(auVar27,auVar19,2);
        auVar14 = *(undefined1 (*) [16])(this_00->Rotation).ZW.m128d_f64;
        dVar18 = auVar14._0_8_;
        local_118 = auVar32._0_8_ * dVar5 + 0.0 + auVar28._0_8_;
        dVar35 = dVar4 * dVar5 + dVar35 + auVar19._0_8_;
        auVar28 = *(undefined1 (*) [16])(this_00->Rotation).XY.m128d_f64;
        auVar24 = blendpd(auVar28,auVar14,2);
        auVar33._0_8_ = auVar28._0_8_ * 0.0 - auVar28._8_8_ * 0.0;
        auVar33._8_8_ = dVar6 * auVar28._8_8_ - dVar18 * 0.0;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = dVar6;
        auVar28 = blendpd(ZEXT816(0),auVar28,2);
        auVar15._0_8_ = auVar28._0_8_ * dVar18 - auVar24._0_8_ * dVar6;
        auVar15._8_8_ = auVar28._8_8_ * auVar14._8_8_ - auVar24._8_8_ * 0.0;
        auVar28 = blendpd(auVar33,auVar15,2);
        dVar4 = auVar33._8_8_ + auVar33._8_8_;
        dVar17 = auVar15._0_8_ + auVar15._0_8_;
        uVar36 = (undefined4)((ulonglong)dVar17 >> 0x20);
        auVar34._0_8_ = auVar28._0_8_ + auVar28._0_8_;
        auVar34._8_8_ = auVar28._8_8_ + auVar28._8_8_;
        auVar29._8_4_ = SUB84(dVar17,0);
        auVar29._0_8_ = dVar4;
        auVar29._12_4_ = uVar36;
        auVar20._8_4_ = SUB84(dVar17,0);
        auVar20._0_8_ = dVar4;
        auVar20._12_4_ = uVar36;
        auVar28 = blendpd(auVar20,auVar34,2);
        auVar30._0_8_ = auVar29._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar4;
        auVar30._8_8_ = auVar34._0_8_ * auVar25._8_8_ - dVar18 * dVar17;
        auVar25 = blendpd(auVar25,auVar14,2);
        auVar16._8_4_ = SUB84(auVar30._8_8_,0);
        auVar16._0_8_ = auVar30._0_8_;
        auVar16._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
        auVar21._0_8_ = auVar28._0_8_ * dVar18 - auVar25._0_8_ * auVar34._0_8_;
        auVar21._8_8_ = auVar28._8_8_ * auVar14._8_8_ - auVar25._8_8_ * auVar34._8_8_;
        auVar25 = blendpd(auVar30,auVar21,2);
        local_100 = auVar34._0_8_ * dVar22 + dVar6 + auVar25._0_8_;
        dVar17 = dVar17 * dVar22 + auVar21._0_8_;
        UE::Math::TTransform<double>::GetUnitAxis(this_00,(TVector<double> *)&local_200._s_0,X);
        TVar11 = FThreadSafeStaticStatInner<`Audio::FAudioDebugger::DrawDebugInfo'::__l15::FStat_STAT_AudioDrawListenerDebugInfo,1>
                 ::GetStatId(&StatPtr_STAT_AudioDrawListenerDebugInfo);
        uVar9 = local_200._s_0.Y;
        uVar8 = local_200._s_0.X;
        auStack_180._8_4_ = SUB84(dVar17,0);
        auStack_180._0_8_ = dVar4 * dVar22 + auVar16._8_8_;
        auStack_180._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        TVar11.StatIdPtr = *(TStatIdData **)&(TVar11.StatIdPtr)->Name;
        local_1b8 = local_res20;
        local_188 = local_118;
        dStack_170 = local_100;
        local_1e8[0] = (code *)0x0;
        local_1c0 = (undefined8 *)0x0;
        uStack_1a8 = CONCAT44(uVar40,uVar39);
        uStack_1b0 = uVar37;
        uStack_1ac = uVar38;
        local_1c0 = FMemory::Malloc(0x70,8);
        *local_1c0 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`Audio::FAudioDebugger::DrawDebugInfo'::`19'::<lambda_1>,1,1>
                      ::_vftable_;
        uStack_1a0 = CONCAT44(uVar42,uVar41);
        *(FWeakObjectPtr *)(local_1c0 + 1) = local_1b8;
        local_1c0[2] = CONCAT44(uStack_1ac,uStack_1b0);
        local_1c0[3] = uStack_1a8;
        local_1c0[4] = uStack_1a0;
        auVar25._8_4_ = SUB84(dVar35,0);
        auVar25._0_8_ = dVar3 * dVar5 + auVar7._0_8_ + auVar23._8_8_;
        auVar25._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
        *(undefined1 (*) [16])(local_1c0 + 5) = auVar25;
        local_1c0[7] = local_188;
        local_1c0[8] = auStack_180._0_8_;
        local_1c0[9] = auStack_180._8_8_;
        local_1c0[10] = dStack_170;
        local_1c0[0xb] = uVar8;
        local_1c0[0xc] = uVar9;
        local_1c0[0xd] = local_200._s_0.Z;
        if ((FWeakObjectPtr *)(local_1c0 + 1) != (FWeakObjectPtr *)0x0) {
          local_1e8[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`Audio::FAudioDebugger::DrawDebugInfo'::__l19::<lambda_1>,void>
                         ::Call;
        }
        FAudioThread::RunCommandOnGameThread
                  ((TUniqueFunction<void___cdecl(void)> *)local_1e8,TVar11);
        this_00 = (TTransform<double> *)&this_00[2].Scale3D.ZW;
        pdVar12 = pdVar12 + 0x22;
      }
    }
  }
  return;
}

// DrawDebugInfo @ 147634d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
Audio::FAudioDebugger::DrawDebugInfo
          (FActiveSound *param_1,TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_2,
          float param_3)

{
  VectorRegister4Double *pVVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  float fVar4;
  FThreadSafeBool FVar5;
  int iVar6;
  USoundBase *pUVar7;
  FWaveInstance *this;
  FWeakObjectPtr FVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  ForAnyElementType _Src;
  float fVar18;
  bool bVar19;
  FAudioDeviceManager *this_00;
  FName *pFVar20;
  TStatId TVar21;
  undefined8 *puVar22;
  FColor_u_0 FVar23;
  FScriptContainerElement *pFVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined1 auStackY_268 [32];
  undefined1 local_207 [3];
  float local_204;
  TVector<double>_u_0 local_1f8;
  FString local_1d8;
  double local_1c8;
  double dStack_1c0;
  code *local_1b8 [5];
  undefined8 *local_190;
  FString local_188;
  FColor_u_0 local_178;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  double dStack_110;
  float local_108;
  FWeakObjectPtr local_104;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined1 local_f0;
  float local_ec;
  float local_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if (((ActiveSoundVisualizeModeCVar != 0) &&
      (pUVar7 = (param_1->Sound).field0_0x0.DebugPtr, pUVar7 != (USoundBase *)0x0)) &&
     (param_1->bAllowSpatialization != '\0')) {
    local_204 = param_1->PlaybackTime;
    FVar5 = param_1->bIsOccluded;
    fVar3 = param_1->PlaybackTimeNonVirtualized;
    if (__real_322bcc77 < (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      if (0 < ActiveSoundVisualizeTypeCVar) {
        if (ActiveSoundVisualizeTypeCVar == 1) {
          if (param_1->AudioComponentID == 0) {
            return;
          }
        }
        else if ((ActiveSoundVisualizeTypeCVar == 2) && (param_1->AudioComponentID != 0)) {
          return;
        }
      }
      this_00 = UEngine::GetAudioDeviceManager(GEngine);
      if ((this_00 != (FAudioDeviceManager *)0x0) &&
         (bVar19 = FAudioDeviceManager::IsVisualizeDebug3dEnabled(this_00), bVar19)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          if (StatPtr_STAT_AudioDrawActiveSoundDebugInfo ==
              (FThreadSafeStaticStat<_public:_static_void___cdecl_Audio::FAudioDebugger::DrawDebugInfo(FActiveSound_const_&,TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_>_const_&,float)_::_23_::FStat_STAT_AudioDrawActiveSoundDebugInfo>
               )0x0) {
            pFVar20 = ::FName::FName((FName *)&local_1f8._s_0,"STAT_AudioDrawActiveSoundDebugInfo");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioDrawActiveSoundDebugInfo,
                       *pFVar20,L"FAudioThreadTask.DrawActiveSoundDebugInfo",
                       "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,
                       ST_int64,true,false,MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS0);
        }
        local_1f8._s_0.X = (double)pUVar7->_padding_;
        ::FName::ToString((FName *)&local_1f8._s_0,&local_1d8);
        FVar23 = FColor::White.field0_0x0;
        fVar31 = 0.0;
        pVVar1 = &(param_1->Transform).Scale3D;
        uVar27 = *(undefined4 *)(pVVar1->XY).m128d_f64;
        uVar28 = *(undefined4 *)((longlong)(param_1->Transform).Scale3D.XY.m128d_f64 + 4);
        local_1f8._s_0.X = (pVVar1->XY).m128d_f64[0];
        pdVar9 = (param_1->Transform).Scale3D.XY.m128d_f64 + 1;
        uVar29 = *(undefined4 *)pdVar9;
        uVar30 = *(undefined4 *)((longlong)(param_1->Transform).Scale3D.XY.m128d_f64 + 0xc);
        local_1f8._s_0.Y = *pdVar9;
        local_1c8 = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
        dStack_1c0 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
        fVar4 = param_1->MaxDistance;
        fVar32 = 0.0;
        dVar12 = (param_1->Transform).Rotation.XY.m128d_f64[0];
        dVar13 = (param_1->Transform).Rotation.XY.m128d_f64[1];
        dVar14 = (param_1->Transform).Rotation.ZW.m128d_f64[0];
        dVar15 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
        dVar16 = (param_1->Transform).Translation.XY.m128d_f64[0];
        dVar17 = (param_1->Transform).Translation.XY.m128d_f64[1];
        dVar10 = (param_1->Transform).Translation.ZW.m128d_f64[0];
        dVar11 = (param_1->Transform).Translation.ZW.m128d_f64[1];
        if (ActiveSoundVisualizeModeCVar - 1U < 2) {
          pFVar24 = (param_2->AllocatorInstance).Data;
          iVar6 = param_2->ArrayNum;
          pFVar2 = pFVar24 + (longlong)iVar6 * 8;
          fVar18 = fVar31;
          while( true ) {
            fVar31 = fVar18;
            if (param_2->ArrayNum != iVar6) {
              `TCheckedPointerIterator<FWaveInstance_*_const,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_207);
            }
            if (pFVar24 == pFVar2) break;
            this = *(FWaveInstance **)pFVar24;
            fVar25 = FWaveInstance::GetVolumeWithDistanceAndOcclusionAttenuation(this);
            fVar26 = FWaveInstance::GetDynamicVolume(this);
            pFVar24 = pFVar24 + 8;
            fVar18 = fVar25 * fVar26;
            if (fVar25 * fVar26 <= fVar31) {
              fVar18 = fVar31;
            }
          }
          uVar27 = local_1f8._0_4_;
          uVar28 = local_1f8._4_4_;
          uVar29 = local_1f8._8_4_;
          uVar30 = local_1f8._12_4_;
        }
        else if (ActiveSoundVisualizeModeCVar == 3) {
          if (param_1->AudioDevice != (FAudioDevice *)0x0) {
            local_1f8._s_0.X = dVar16;
            local_1f8._s_0.Y = dVar17;
            local_1f8._s_0.Z = dVar10;
            fVar31 = FAudioDevice::GetDistanceToNearestListener
                               (param_1->AudioDevice,(TVector<double> *)&local_1f8._s_0);
            fVar31 = fVar31 / fVar4;
          }
        }
        else if (ActiveSoundVisualizeModeCVar == 4) {
          FVar23 = (param_1->DebugColor).field0_0x0;
        }
        else if (ActiveSoundVisualizeModeCVar == 5) {
          fVar31 = (param_1->CurrentOcclusionVolumeAttenuation).CurrValue;
          fVar32 = (param_1->CurrentOcclusionFilterFrequency).CurrValue;
        }
        FVar8 = (param_1->World).WeakPtr;
        TVar21.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioDrawActiveSoundDebugInfo;
        if (StatPtr_STAT_AudioDrawActiveSoundDebugInfo ==
            (FThreadSafeStaticStat<_public:_static_void___cdecl_Audio::FAudioDebugger::DrawDebugInfo(FActiveSound_const_&,TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_>_const_&,float)_::_23_::FStat_STAT_AudioDrawActiveSoundDebugInfo>
             )0x0) {
          pFVar20 = ::FName::FName((FName *)&local_1f8._s_0,"STAT_AudioDrawActiveSoundDebugInfo");
          TVar21.StatIdPtr =
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioDrawActiveSoundDebugInfo,
                          *pFVar20,L"FAudioThreadTask.DrawActiveSoundDebugInfo",
                          "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,
                          true,ST_int64,true,false,MCR_Invalid);
        }
        _Src.Data = local_1d8.Data.AllocatorInstance.Data;
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.Data.ArrayNum = local_1d8.Data.ArrayNum;
        if (local_1d8.Data.ArrayNum == 0) {
          local_188.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1d8.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
                     local_1d8.Data.ArrayNum,&local_188.Data.ArrayMax);
          memcpy(local_188.Data.AllocatorInstance.Data,_Src.Data,
                 (longlong)local_1d8.Data.ArrayNum * 2);
        }
        local_118 = local_1c8;
        dStack_110 = dStack_1c0;
        local_f8 = local_204;
        local_1b8[0] = (code *)0x0;
        local_178 = FVar23;
        local_168 = dVar12;
        dStack_160 = dVar13;
        local_158 = dVar14;
        dStack_150 = dVar15;
        local_148 = dVar16;
        dStack_140 = dVar17;
        local_138 = dVar10;
        dStack_130 = dVar11;
        local_128 = uVar27;
        uStack_124 = uVar28;
        uStack_120 = uVar29;
        uStack_11c = uVar30;
        local_108 = fVar31;
        local_104 = FVar8;
        local_fc = fVar4;
        local_f4 = fVar3;
        local_f0 = FVar5 != (FThreadSafeBool)0x0;
        local_ec = fVar32;
        local_e8 = param_3;
        puVar22 = FMemory::Malloc(0xc0,0x10);
        *puVar22 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`Audio::FAudioDebugger::DrawDebugInfo'::`23'::<lambda_1>,1,1>
                    ::_vftable_;
        local_190 = puVar22;
        ::FString::FString((FString *)(puVar22 + 2),&local_188);
        ((FColor_u_0 *)(puVar22 + 4))->_s_0 = (FColor_u_0_s_0)local_178;
        puVar22[6] = local_168;
        puVar22[7] = dStack_160;
        puVar22[8] = local_158;
        puVar22[9] = dStack_150;
        puVar22[10] = local_148;
        puVar22[0xb] = dStack_140;
        puVar22[0xc] = local_138;
        puVar22[0xd] = dStack_130;
        puVar22[0xe] = CONCAT44(uStack_124,local_128);
        puVar22[0xf] = CONCAT44(uStack_11c,uStack_120);
        puVar22[0x10] = local_118;
        puVar22[0x11] = dStack_110;
        *(float *)(puVar22 + 0x12) = local_108;
        *(FWeakObjectPtr *)((longlong)puVar22 + 0x94) = local_104;
        *(float *)((longlong)puVar22 + 0x9c) = local_fc;
        *(float *)(puVar22 + 0x14) = local_f8;
        *(float *)((longlong)puVar22 + 0xa4) = local_f4;
        *(undefined1 *)(puVar22 + 0x15) = local_f0;
        *(float *)((longlong)puVar22 + 0xac) = local_ec;
        *(float *)(puVar22 + 0x16) = local_e8;
        if ((FString *)(puVar22 + 2) != (FString *)0x0) {
          local_1b8[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`Audio::FAudioDebugger::DrawDebugInfo'::__l23::<lambda_1>,void>
                         ::Call;
        }
        FAudioThread::RunCommandOnGameThread
                  ((TUniqueFunction<void___cdecl(void)> *)local_1b8,TVar21);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// DrawDebugInfo @ 147635330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl Audio::FAudioDebugger::DrawDebugInfo(FAudioVirtualLoop *param_1)

{
  USoundBase *pUVar1;
  FWeakObjectPtr FVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ForAnyElementType _Src;
  bool bVar16;
  FAudioDeviceManager *this;
  FActiveSound *pFVar17;
  FName *pFVar18;
  TStatId TVar19;
  undefined8 *puVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_208 [32];
  FName local_1a8;
  FString local_1a0;
  FName local_190;
  FName local_188 [2];
  code *local_178 [5];
  undefined8 *local_150;
  FWeakObjectPtr local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  FString local_d8;
  float local_c8;
  float local_c4;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((GEngine != (UEngine *)0x0) && (VirtualLoopsVisualizeEnabledCVar != 0)) {
    this = UEngine::GetAudioDeviceManager(GEngine);
    if (this != (FAudioDeviceManager *)0x0) {
      bVar16 = FAudioDeviceManager::IsVisualizeDebug3dEnabled(this);
      if (bVar16) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) < ::_TSS0) {
          _Init_thread_header(&::_TSS0);
          if (::_TSS0 == -1) {
            if (StatPtr_STAT_AudioDrawVirtualLoopDebugInfo ==
                (FThreadSafeStaticStat<_public:_static_void___cdecl_Audio::FAudioDebugger::DrawDebugInfo(FAudioVirtualLoop_const_&)_::_11_::FStat_STAT_AudioDrawVirtualLoopDebugInfo>
                 )0x0) {
              pFVar18 = ::FName::FName(&local_190,"STAT_AudioDrawVirtualLoopDebugInfo");
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioDrawVirtualLoopDebugInfo,
                         *pFVar18,L"FAudioThreadTask.DrawVirtualLoopDebugInfo",
                         "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true
                         ,ST_int64,true,false,MCR_Invalid);
            }
            _Init_thread_footer(&::_TSS0);
          }
        }
        pFVar17 = FAudioVirtualLoop::GetActiveSound(param_1);
        pUVar1 = (pFVar17->Sound).field0_0x0.DebugPtr;
        if (pUVar1 == (USoundBase *)0x0) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Sound",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDebug.cpp"
                              ,0x504,L"");
          if (bVar16) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_1a8 = (FName)pUVar1->_padding_;
        dVar4 = (pFVar17->Transform).Rotation.XY.m128d_f64[0];
        dVar5 = (pFVar17->Transform).Rotation.XY.m128d_f64[1];
        dVar6 = (pFVar17->Transform).Rotation.ZW.m128d_f64[0];
        dVar7 = (pFVar17->Transform).Rotation.ZW.m128d_f64[1];
        dVar8 = (pFVar17->Transform).Translation.XY.m128d_f64[0];
        dVar9 = (pFVar17->Transform).Translation.XY.m128d_f64[1];
        dVar10 = (pFVar17->Transform).Translation.ZW.m128d_f64[0];
        dVar11 = (pFVar17->Transform).Translation.ZW.m128d_f64[1];
        dVar12 = (pFVar17->Transform).Scale3D.XY.m128d_f64[0];
        dVar13 = (pFVar17->Transform).Scale3D.XY.m128d_f64[1];
        dVar14 = (pFVar17->Transform).Scale3D.ZW.m128d_f64[0];
        dVar15 = (pFVar17->Transform).Scale3D.ZW.m128d_f64[1];
        FVar2 = (pFVar17->World).WeakPtr;
        ::FName::ToString(&local_1a8,&local_1a0);
        fVar21 = FAudioVirtualLoop::GetUpdateInterval(param_1);
        fVar22 = FAudioVirtualLoop::GetTimeVirtualized(param_1);
        TVar19.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioDrawVirtualLoopDebugInfo;
        if (StatPtr_STAT_AudioDrawVirtualLoopDebugInfo ==
            (FThreadSafeStaticStat<_public:_static_void___cdecl_Audio::FAudioDebugger::DrawDebugInfo(FAudioVirtualLoop_const_&)_::_11_::FStat_STAT_AudioDrawVirtualLoopDebugInfo>
             )0x0) {
          pFVar18 = ::FName::FName(local_188,"STAT_AudioDrawVirtualLoopDebugInfo");
          TVar19.StatIdPtr =
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioDrawVirtualLoopDebugInfo,
                          *pFVar18,L"FAudioThreadTask.DrawVirtualLoopDebugInfo",
                          "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,
                          true,ST_int64,true,false,MCR_Invalid);
        }
        _Src.Data = local_1a0.Data.AllocatorInstance.Data;
        local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_148 = FVar2;
        local_138 = dVar4;
        dStack_130 = dVar5;
        local_128 = dVar6;
        dStack_120 = dVar7;
        local_118 = dVar8;
        dStack_110 = dVar9;
        local_108 = dVar10;
        dStack_100 = dVar11;
        local_f8 = dVar12;
        dStack_f0 = dVar13;
        local_e8 = dVar14;
        dStack_e0 = dVar15;
        if (local_1a0.Data.ArrayNum == 0) {
          local_d8.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1a0.Data.ArrayNum,0,(ForAnyElementType *)&local_d8,
                     local_1a0.Data.ArrayNum,&local_d8.Data.ArrayMax);
          memcpy(local_d8.Data.AllocatorInstance.Data,_Src.Data,
                 (longlong)local_1a0.Data.ArrayNum * 2);
        }
        local_178[0] = (code *)0x0;
        local_c8 = fVar21;
        local_c4 = fVar22;
        puVar20 = FMemory::Malloc(0xa0,0x10);
        *puVar20 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`Audio::FAudioDebugger::DrawDebugInfo'::`11'::<lambda_1>,1,1>
                    ::_vftable_;
        *(FWeakObjectPtr *)(puVar20 + 2) = local_148;
        puVar20[4] = local_138;
        puVar20[5] = dStack_130;
        puVar20[6] = local_128;
        puVar20[7] = dStack_120;
        puVar20[8] = local_118;
        puVar20[9] = dStack_110;
        puVar20[10] = local_108;
        puVar20[0xb] = dStack_100;
        puVar20[0xc] = local_f8;
        puVar20[0xd] = dStack_f0;
        puVar20[0xe] = local_e8;
        puVar20[0xf] = dStack_e0;
        local_150 = puVar20;
        ::FString::FString((FString *)(puVar20 + 0x10),&local_d8);
        *(float *)(puVar20 + 0x12) = local_c8;
        *(float *)((longlong)puVar20 + 0x94) = local_c4;
        if ((FWeakObjectPtr *)(puVar20 + 2) != (FWeakObjectPtr *)0x0) {
          local_178[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`Audio::FAudioDebugger::DrawDebugInfo'::__l11::<lambda_1>,void>
                         ::Call;
        }
        FAudioThread::RunCommandOnGameThread
                  ((TUniqueFunction<void___cdecl(void)> *)local_178,TVar19);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// DrawDebugInfo @ 1476357a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl Audio::FAudioDebugger::DrawDebugInfo(FSoundSource *param_1)

{
  FWaveInstance *this;
  FActiveSound *pFVar1;
  FWeakObjectPtr FVar2;
  bool bVar3;
  FAudioDeviceManager *this_00;
  FName *pFVar4;
  TStatId TVar5;
  FName local_res8;
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  undefined8 *local_110;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TRotator<double> local_d8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  FWeakObjectPtr FStack_78;
  
  this = param_1->WaveInstance;
  if ((((this != (FWaveInstance *)0x0) &&
       (pFVar1 = this->ActiveSound, pFVar1 != (FActiveSound *)0x0)) &&
      (SpatialSourceVisualizeEnabledCVar != 0)) &&
     ((this_00 = UEngine::GetAudioDeviceManager(GEngine), this_00 != (FAudioDeviceManager *)0x0 &&
      (bVar3 = FAudioDeviceManager::IsVisualizeDebug3dEnabled(this_00), bVar3)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_AudioDrawSourceDebugInfo ==
          (FThreadSafeStaticStat<_public:_static_void___cdecl_Audio::FAudioDebugger::DrawDebugInfo(FSoundSource_const_&)_::_14_::FStat_STAT_AudioDrawSourceDebugInfo>
           )0x0) {
        pFVar4 = ::FName::FName(&local_res8,"STAT_AudioDrawSourceDebugInfo");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioDrawSourceDebugInfo,*pFVar4,
                   L"FAudioThreadTask.DrawSourceDebugInfo","STATGROUP_TaskGraphTasks",
                   "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      _Init_thread_footer(&::_TSS0);
    }
    if ((param_1->NumChannels == 2) && (bVar3 = FWaveInstance::GetUseSpatialization(this), bVar3)) {
      local_138._0_8_ = (pFVar1->Transform).Rotation.XY.m128d_f64[0];
      local_138._8_8_ = (pFVar1->Transform).Rotation.XY.m128d_f64[1];
      local_128 = (pFVar1->Transform).Rotation.ZW.m128d_f64[0];
      dStack_120 = (pFVar1->Transform).Rotation.ZW.m128d_f64[1];
      UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_138,local_d8);
      FVar2 = (this->ActiveSound->World).WeakPtr;
      FSoundSource::GetChannelLocations
                (param_1,(TVector<double> *)&local_108._s_0,(TVector<double> *)&local_f0._s_0);
      TVar5.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioDrawSourceDebugInfo;
      if (StatPtr_STAT_AudioDrawSourceDebugInfo ==
          (FThreadSafeStaticStat<_public:_static_void___cdecl_Audio::FAudioDebugger::DrawDebugInfo(FSoundSource_const_&)_::_14_::FStat_STAT_AudioDrawSourceDebugInfo>
           )0x0) {
        pFVar4 = ::FName::FName(&local_res8,"STAT_AudioDrawSourceDebugInfo");
        TVar5.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioDrawSourceDebugInfo,*pFVar4,
                        L"FAudioThreadTask.DrawSourceDebugInfo","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
      }
      local_138._0_8_ = (code *)0x0;
      local_a8 = (double)local_f0._0_8_;
      uStack_a0 = (double)local_f0._8_8_;
      FStack_78 = FVar2;
      local_110 = FMemory::Malloc(0x58,8);
      *local_110 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`Audio::FAudioDebugger::DrawDebugInfo'::`17'::<lambda_1>,1,1>
                    ::_vftable_;
      local_110[1] = local_108._s_0.X;
      local_110[2] = local_108._s_0.Y;
      *(undefined4 *)(local_110 + 3) = local_108._16_4_;
      *(undefined4 *)((longlong)local_110 + 0x1c) = local_108._20_4_;
      *(undefined4 *)(local_110 + 4) = (undefined4)local_a8;
      *(undefined4 *)((longlong)local_110 + 0x24) = local_a8._4_4_;
      *(undefined4 *)(local_110 + 5) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)local_110 + 0x2c) = uStack_a0._4_4_;
      *(int *)(local_110 + 6) = SUB84(local_f0._s_0.Z,0);
      *(int *)((longlong)local_110 + 0x34) = (int)((ulonglong)local_f0._16_8_ >> 0x20);
      local_110[7] = local_d8[0].Pitch;
      local_110[8] = local_d8[0].Yaw;
      *(undefined4 *)(local_110 + 9) = local_d8[0].Roll._0_4_;
      *(undefined4 *)((longlong)local_110 + 0x4c) = local_d8[0].Roll._4_4_;
      *(int *)(local_110 + 10) = FStack_78.ObjectIndex;
      *(int *)((longlong)local_110 + 0x54) = FStack_78.ObjectSerialNumber;
      if ((double *)(local_110 + 1) != (double *)0x0) {
        local_138._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`Audio::FAudioDebugger::DrawDebugInfo'::__l17::<lambda_1>,void>::
             Call;
      }
      FAudioThread::RunCommandOnGameThread((TUniqueFunction<void___cdecl(void)> *)local_138,TVar5);
    }
  }
  return;
}

// DrawDebugStats @ 147635ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
Audio::FAudioDebugger::DrawDebugStats
          (UWorld *param_1,FViewport *param_2,FCanvas *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UGameViewportClient *pUVar4;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDebug.cpp"
                         ,0x51c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if (param_2 == (FViewport *)0x0) {
    pUVar4 = UWorld::GetGameViewport(param_1);
    if ((pUVar4 != (UGameViewportClient *)0x0) && (pUVar4->Viewport != (FViewport *)0x0)) {
      param_4 = DrawDebugStatsInternal(param_1,pUVar4->Viewport,param_3,param_4);
    }
  }
  else {
    param_4 = DrawDebugStatsInternal(param_1,param_2,param_3,param_4);
  }
  return param_4;
}

// DrawDebugStatsEnabled @ 147635b80

bool __cdecl Audio::FAudioDebugger::DrawDebugStatsEnabled(void)

{
  if ((((!bDebugWavesForAllViewsEnabled) && (!bDebugCuesForAllViewsEnabled)) &&
      (!bDebugSoundsForAllViewsEnabled)) &&
     (((!bDebugMixesForAllViewsEnabled && (!bDebugReverbForAllViewsEnabled)) &&
      ((!bDebugModulationForAllViewsEnabled && (!bDebugStreamingForAllViewsEnabled)))))) {
    return false;
  }
  return true;
}

// DrawDebugStatsInternal @ 147635bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
Audio::FAudioDebugger::DrawDebugStatsInternal
          (UWorld *param_1,FViewport *param_2,FCanvas *param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  FStreamingManagerCollection *this;
  IAudioStreamingManager *pIVar4;
  FAudioDevice *local_res18;
  
  if ((param_3 != (FCanvas *)0x0) ||
     (param_3 = (FCanvas *)(**(code **)(param_2->_padding_ + 0x160))(param_2),
     param_3 != (FCanvas *)0x0)) {
    iVar1 = SoundDebugDisplayCornerXCVar;
    iVar3 = SoundDebugDisplayCornerYCVar;
    if (SoundDebugDisplayCornerYCVar < 0) {
      iVar3 = param_4;
    }
    iVar3 = RenderStatMixes(param_1,param_2,param_3,SoundDebugDisplayCornerXCVar,iVar3);
    iVar3 = RenderStatModulators
                      (param_1,param_2,param_3,iVar1,iVar3,(TVector<double> *)0x0,
                       (TRotator<double> *)0x0);
    iVar3 = RenderStatReverb(param_1,param_2,param_3,iVar1,iVar3);
    iVar3 = RenderStatSounds(param_1,param_2,param_3,iVar1,iVar3);
    iVar3 = RenderStatCues(param_1,param_2,param_3,iVar1,iVar3);
    param_4 = RenderStatWaves(param_1,param_2,param_3,iVar1,iVar3);
    local_res18 = (FAudioDevice *)0x0;
    bVar2 = DebugShouldRenderStat
                      (param_1,param_3,bDebugSoundsForAllViewsEnabled,DebugStatNames::AudioStreaming
                       ,&local_res18);
    if (bVar2) {
      this = IStreamingManager::Get();
      pIVar4 = FStreamingManagerCollection::GetAudioStreamingManager(this);
      param_4 = (**(code **)(*(longlong *)pIVar4 + 0xc0))
                          (pIVar4,param_1,param_2,param_3,iVar1,param_4,0,0);
    }
  }
  return param_4;
}

// DumpActiveSounds @ 147635d40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall Audio::FAudioDebugger::DumpActiveSounds(FAudioDebugger *this)

{
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *pTVar1;
  undefined1 *puVar2;
  uint uVar3;
  FActiveSound *this_00;
  uint *puVar4;
  undefined1 *puVar5;
  FWaveInstance *this_01;
  code *pcVar6;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *pTVar7;
  bool bVar8;
  FName *pFVar9;
  TStatId TVar10;
  FAudioDeviceManager *pFVar11;
  TArray<FActiveSound_*,TSizedDefaultAllocator<32>_> *pTVar12;
  UWorld *pUVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  FAudioDeviceHandle local_180;
  int local_168;
  int local_164;
  FName local_160;
  FScriptContainerElement *local_158;
  FString local_150;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  FName local_e0;
  FName local_d8;
  FString local_d0;
  FString local_c0;
  code *local_a8 [2];
  undefined **local_98;
  FAudioDebugger *local_90;
  undefined8 local_80;
  undefined4 local_5c;
  
  if (GEngine != (UEngine *)0x0) {
    bVar8 = IsInAudioThread();
    if (bVar8) {
      pFVar11 = UEngine::GetAudioDeviceManager(GEngine);
      FAudioDeviceManager::GetActiveAudioDevice(pFVar11,&local_180);
      if (local_180.Device != (FAudioDevice *)0x0) {
        if ((local_180.Device == (FAudioDevice *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                               ,0x60,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar12 = FAudioDevice::GetActiveSounds(local_180.Device);
        if (3 < (byte)LogAudio._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        }
        if (3 < (byte)LogAudio._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        }
        local_res20 = pTVar12->ArrayNum;
        uVar14 = (ulonglong)(int)local_res20;
        pFVar22 = (pTVar12->AllocatorInstance).Data;
        pFVar17 = pFVar22 + uVar14 * 8;
        local_158 = pFVar17;
        while( true ) {
          if (pTVar12->ArrayNum != (int)uVar14) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FActiveSound_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res10);
          }
          pFVar11 = FAudioDeviceManager::Singleton;
          if (pFVar22 == pFVar17) break;
          this_00 = *(FActiveSound **)pFVar22;
          if (this_00 != (FActiveSound *)0x0) {
            if (3 < (byte)LogAudio._0_1_) {
              FActiveSound::GetAudioComponentName(this_00,&local_d0);
              (**(code **)(((this_00->Sound).field0_0x0.DebugPtr)->_padding_ + 0x2d8))();
              local_160 = (FName)((this_00->Sound).field0_0x0.DebugPtr)->_padding_;
              ::FName::ToString(&local_160,&local_150);
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
              if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_150.Data.AllocatorInstance.Data);
              }
              if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d0.Data.AllocatorInstance.Data);
              }
            }
            local_130 = &(this_00->WaveInstances).field_0x10;
            iStack_138 = 0;
            iVar16 = *(int *)&(this_00->WaveInstances).field_0x28;
            pTVar1 = &this_00->WaveInstances;
            local_120 = 0;
            uStack_134 = 1;
            iStack_124 = 0;
            if (iVar16 != 0) {
              puVar4 = *(uint **)&(this_00->WaveInstances).field_0x20;
              puVar21 = (uint *)local_130;
              if (puVar4 != (uint *)0x0) {
                puVar21 = puVar4;
              }
              uVar19 = *puVar21;
              while (uVar19 == 0) {
                lVar15 = (longlong)iStack_138;
                local_120 = local_120 + 0x20;
                iStack_138 = iStack_138 + 1;
                iStack_124 = iVar16;
                if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138)
                goto LAB_14763609f;
                uVar19 = puVar21[lVar15 + 1];
              }
              uStack_134 = -uVar19 & uVar19;
              uVar14 = (ulonglong)uStack_134 * 2 + 1;
              lVar15 = 0x3f;
              if (uVar14 != 0) {
                for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              local_168 = (int)lVar15;
              iStack_124 = local_120 + -1 + local_168;
              if (iVar16 < iStack_124) {
                iStack_124 = iVar16;
              }
            }
LAB_14763609f:
            puVar2 = &(this_00->WaveInstances).field_0x10;
            uStack_11c = local_5c;
            iStack_118 = *(int *)&(this_00->WaveInstances).field_0x8 -
                         *(int *)&(this_00->WaveInstances).field_0x34;
            uVar19 = *(uint *)&(this_00->WaveInstances).field_0x28;
            TStack_108._padding_ = CONCAT44(uStack_134,iStack_138);
            uStack_128 = 0xffffffff;
            uVar18 = uVar19 & 0xffffffe0;
            TStack_108.CurrentBitIndex = iStack_124;
            TStack_108.UnvisitedBitMask = 0xffffffff;
            iVar16 = (int)uVar19 >> 5;
            TStack_108._28_4_ = local_5c;
            TStack_108.BaseBitIndex = local_120;
            uStack_e8 = CONCAT44(uStack_114,iStack_118);
            local_140 = pTVar1;
            local_110 = pTVar1;
            TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_130;
            if (((int)uVar19 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar3 = *(uint *)&(this_00->WaveInstances).field_0x28;
            if (uVar19 != uVar3) {
              puVar5 = *(undefined1 **)&(this_00->WaveInstances).field_0x20;
              puVar20 = puVar2;
              if (puVar5 != (undefined1 *)0x0) {
                puVar20 = puVar5;
              }
              uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
              while (uVar19 == 0) {
                lVar15 = (longlong)iVar16;
                uVar18 = uVar18 + 0x20;
                iVar16 = iVar16 + 1;
                uVar19 = uVar3;
                if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
                goto LAB_1476361b0;
                uVar19 = *(uint *)(puVar20 + lVar15 * 4 + 4);
              }
              uVar14 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
              lVar15 = 0x3f;
              if (uVar14 != 0) {
                for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              local_164 = (int)lVar15;
              uVar19 = local_164 + -1 + uVar18;
              if ((int)uVar3 < (int)uVar19) {
                uVar19 = uVar3;
              }
            }
LAB_1476361b0:
            while( true ) {
              pTVar7 = local_110;
              if (*(int *)&local_110->field_0x8 - *(int *)&local_110->field_0x34 != (int)uStack_e8)
              {
                local_res18[0] = 0;
                `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FWaveInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
              }
              if (((TStack_108.CurrentBitIndex == uVar19) &&
                  (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
                 (pFVar17 = local_158, pTVar7 == pTVar1)) break;
              this_01 = *(FWaveInstance **)
                         (*(longlong *)pTVar7 + 8 + (longlong)TStack_108.CurrentBitIndex * 0x18);
              if (3 < (byte)LogAudio._0_1_) {
                FWaveInstance::GetVolumeWithDistanceAndOcclusionAttenuation(this_01);
                FWaveInstance::GetDynamicVolume(this_01);
                UObject::GetResourceSizeBytes
                          ((UObject *)(this_01->WaveData).field0_0x0.DebugPtr,EstimatedTotal);
                (**(code **)(((this_01->WaveData).field0_0x0.DebugPtr)->_padding_ + 0x2d8))();
                FWaveInstance::GetName(this_01,&local_c0);
                UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
                if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                }
              }
              TStack_108.UnvisitedBitMask =
                   TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
            }
          }
          pFVar22 = pFVar22 + 8;
          uVar14 = (ulonglong)local_res20;
        }
        if (local_180.Device != (FAudioDevice *)0x0) {
          if ((FAudioDeviceManager::Singleton == (FAudioDeviceManager *)0x0) ||
             (FAudioDeviceManager::Singleton->InitPhase != Initialized)) {
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6883895825940871781>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                               ,0x59b,"AudioDeviceManager");
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            pUVar13 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_180);
            FAudioDeviceManager::DecrementDevice(pFVar11,local_180.DeviceId,pUVar13);
          }
        }
      }
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        StatPtr_STAT_AudioDumpActiveSounds =
             (FThreadSafeStaticStat<_public:_void___cdecl_Audio::FAudioDebugger::DumpActiveSounds(void)const_::_8_::FStat_STAT_AudioDumpActiveSounds>
              )0x0;
        pFVar9 = ::FName::FName(&local_e0,"STAT_AudioDumpActiveSounds");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioDumpActiveSounds,*pFVar9,
                   L"FAudioThreadTask.DumpActiveSounds","STATGROUP_TaskGraphTasks",
                   "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid)
        ;
        _Init_thread_footer(&::_TSS0);
      }
      TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioDumpActiveSounds;
      if (StatPtr_STAT_AudioDumpActiveSounds ==
          (FThreadSafeStaticStat<_public:_void___cdecl_Audio::FAudioDebugger::DumpActiveSounds(void)const_::_8_::FStat_STAT_AudioDumpActiveSounds>
           )0x0) {
        pFVar9 = ::FName::FName(&local_d8,"STAT_AudioDumpActiveSounds");
        TVar10.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioDumpActiveSounds,*pFVar9,
                        L"FAudioThreadTask.DumpActiveSounds","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
      }
      local_80 = 0;
      local_98 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`Audio::FAudioDebugger::DumpActiveSounds'::`8'::<lambda_1>,1,0>
                  ::_vftable_;
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FAudioDebugger::DumpActiveSounds'::__l8::<lambda_1>,void>
                    ::Call;
      local_90 = this;
      FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_a8,TVar10);
    }
  }
  return;
}

// ExecuteCmdOnAudioThread @ 147637fd0

void __thiscall
Audio::FAudioDebugger::ExecuteCmdOnAudioThread
          (FAudioDebugger *this,TFunction<void___cdecl(void)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  TUniqueFunction<void___cdecl(void)> local_38;
  
  plVar6 = (longlong *)&param_1->field_0x10;
  bVar2 = IsInAudioThread();
  if (bVar2) {
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar1 = *(code **)param_1;
    plVar5 = plVar6;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_1->field_0x28;
    }
    uVar3 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)(uVar3);
  }
  else {
    local_38._0_8_ = *(undefined8 *)param_1;
    local_38._40_8_ = 0;
    if (local_38._0_8_ != 0) {
      puVar4 = plVar6;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar4 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar4)(puVar4,&local_38.field_0x10);
    }
    FAudioThread::RunCommandOnAudioThread(&local_38,(TStatId)0x154f11430);
  }
  if (*(longlong *)param_1 != 0) {
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return;
}

// GetAudioDebugSound @ 14763a960

bool __thiscall Audio::FAudioDebugger::GetAudioDebugSound(FAudioDebugger *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  
  bVar3 = IsInAudioThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDebug.cpp"
                       ,0x3d2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((this->DebugNames).bDebugSoundName != false) {
    iVar1 = (this->DebugNames).DebugSoundName.Data.ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    ::FString::AssignRange
              (param_1,(wchar_t *)(this->DebugNames).DebugSoundName.Data.AllocatorInstance.Data,
               iVar5);
    return true;
  }
  return false;
}

// GetAudioMixerDebugSoundName @ 14763adf0

FString * __thiscall Audio::FAudioDebugger::GetAudioMixerDebugSoundName(FAudioDebugger *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDebug.cpp"
                       ,0x3cc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &(this->DebugNames).DebugAudioMixerSoundName;
}

// GetDebugSoloMuteStateX @ 14763bf00

void __thiscall
Audio::FAudioDebugger::GetDebugSoloMuteStateX
          (FAudioDebugger *this,FString *param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,bool *param_4,bool *param_5,
          FString *param_6)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  int iVar6;
  FName *pFVar7;
  FName local_res10;
  FName local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString *local_58;
  FString *local_50;
  FString *local_48;
  FString *local_40;
  FString local_38;
  
  bVar4 = IsInAudioThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDebug.cpp"
                         ,0x3f0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (param_1->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  pFVar5 = ::FName::FName(local_res18,iVar6,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          FNAME_Add);
  local_res10 = *pFVar5;
  ::FName::GetPlainNameString(&local_res10,&local_68);
  if (param_2->ArrayNum < 1) {
    local_40 = &local_68;
    pFVar7 = (FName *)(param_3->AllocatorInstance).Data;
    pFVar5 = pFVar7 + param_3->ArrayNum;
    local_48 = param_1;
    for (; pFVar7 != pFVar5; pFVar7 = pFVar7 + 1) {
      bVar4 = `Audio::FAudioDebugger::GetDebugSoloMuteStateX'::__l2::<lambda_1>::operator()
                        (&local_48,*pFVar7);
      if (bVar4) {
        *param_5 = true;
        ::FString::PrintfImpl(&local_78,L"Sound is explicitly muted");
        local_38.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
        if (param_6 != &local_78) {
          pFVar2 = (param_6->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (param_6->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
          (param_6->Data).ArrayNum = local_78.Data.ArrayNum;
          (param_6->Data).ArrayMax = local_78.Data.ArrayMax;
          local_78.Data.ArrayNum = 0;
          local_78.Data.ArrayMax = 0;
          local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        goto LAB_14763c17d;
      }
    }
  }
  else {
    local_50 = &local_68;
    pFVar7 = (FName *)(param_2->AllocatorInstance).Data;
    pFVar5 = pFVar7 + param_2->ArrayNum;
    local_58 = param_1;
    if (pFVar7 != pFVar5) {
LAB_14763bfb0:
      bVar4 = `Audio::FAudioDebugger::GetDebugSoloMuteStateX'::__l2::<lambda_1>::operator()
                        (&local_58,*pFVar7);
      if (!bVar4) goto code_r0x00014763bfc4;
      *param_4 = true;
      ::FString::PrintfImpl(&local_98,L"Sound is soloed explicitly.");
      local_38.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      if (param_6 != &local_98) {
        pFVar2 = (param_6->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (param_6->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
        (param_6->Data).ArrayNum = local_98.Data.ArrayNum;
        (param_6->Data).ArrayMax = local_98.Data.ArrayMax;
        local_98.Data.ArrayNum = 0;
        local_98.Data.ArrayMax = 0;
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
LAB_14763c17d:
      if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_14763c18a;
      goto LAB_14763c185;
    }
LAB_14763bfcd:
    *param_5 = true;
    if ((param_2->ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ::FName::ToString((FName *)(param_2->AllocatorInstance).Data,&local_38);
    ::FString::PrintfImpl(&local_88,L"Sound is muted due to [%s] being soloed");
    if (param_6 != &local_88) {
      pFVar2 = (param_6->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_6->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      (param_6->Data).ArrayNum = local_88.Data.ArrayNum;
      (param_6->Data).ArrayMax = local_88.Data.ArrayMax;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
LAB_14763c185:
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
LAB_14763c18a:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
code_r0x00014763bfc4:
  pFVar7 = pFVar7 + 1;
  if (pFVar7 == pFVar5) goto LAB_14763bfcd;
  goto LAB_14763bfb0;
}

// IsMuteOrSoloActive @ 147648cc0

bool __thiscall Audio::FAudioDebugger::IsMuteOrSoloActive(FAudioDebugger *this)

{
  if (((((this->DebugNames).MuteSoundClass.ArrayNum == 0) &&
       ((this->DebugNames).MuteSoundCue.ArrayNum == 0)) &&
      ((this->DebugNames).MuteSoundWave.ArrayNum == 0)) &&
     ((((this->DebugNames).SoloSoundClass.ArrayNum == 0 &&
       ((this->DebugNames).SoloSoundCue.ArrayNum == 0)) &&
      ((this->DebugNames).SoloSoundWave.ArrayNum == 0)))) {
    return false;
  }
  return true;
}

// IsVirtualLoopVisualizeEnabled @ 1476494e0

bool __cdecl Audio::FAudioDebugger::IsVirtualLoopVisualizeEnabled(void)

{
  return VirtualLoopsVisualizeEnabledCVar != 0;
}

// IsVisualizeDebug3dEnabled @ 147649500

bool __thiscall Audio::FAudioDebugger::IsVisualizeDebug3dEnabled(FAudioDebugger *this)

{
  return this->bVisualize3dDebug;
}

// LogSubtitle @ 14764a5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Audio::FAudioDebugger::LogSubtitle(wchar_t *param_1,USoundWave *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FString *pFVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  FString local_28;
  FString local_18;
  
  bVar2 = FParse::Param(param_1,L"LogSubtitle");
  if (bVar2) {
    uVar6 = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    iVar7 = 0;
    if (0 < (param_2->Subtitles).ArrayNum) {
      do {
        uVar3 = 0;
        if ((int)uVar6 < (param_2->Subtitles).ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar5 = FText::ToString((FText *)((param_2->Subtitles).AllocatorInstance.Data +
                                          (longlong)(int)uVar6 * 0x18));
        iVar4 = (pFVar5->Data).ArrayNum;
        iVar8 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar8 = iVar7;
        }
        ::FString::AppendChars(&local_28,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar8);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (param_2->Subtitles).ArrayNum);
    }
    iVar4 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = iVar7;
    }
    if (iVar4 == 0) {
      iVar4 = (param_2->SpokenText_DEPRECATED).Data.ArrayNum;
      iVar8 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar8 = iVar7;
      }
      ::FString::AssignRange
                (&local_28,(wchar_t *)(param_2->SpokenText_DEPRECATED).Data.AllocatorInstance.Data,
                 iVar8);
    }
    uVar6 = local_28.Data.ArrayNum - 1;
    if (local_28.Data.ArrayNum == 0) {
      uVar6 = 0;
    }
    if (uVar6 == 0) {
      ::FString::FString(&local_18,"<NO SUBTITLE>");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      local_28.Data.ArrayMax = local_18.Data.ArrayMax;
      local_28.Data.ArrayNum = local_18.Data.ArrayNum;
    }
    if ((3 < (byte)LogAudio._0_1_) &&
       (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio),
       3 < (byte)LogAudio._0_1_)) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PostStatModulatorHelp @ 14764c1d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
Audio::FAudioDebugger::PostStatModulatorHelp
          (UWorld *param_1,FCommonViewportClient *param_2,wchar_t *param_3)

{
  IAudioModulationManager *pIVar1;
  char cVar2;
  FAudioDevice *pFVar3;
  
  if (param_2 == (FCommonViewportClient *)0x0) {
    return false;
  }
  pFVar3 = UWorld::GetAudioDeviceRaw(param_1);
  if (((pFVar3 != (FAudioDevice *)0x0) && (pFVar3->bModulationInterfaceEnabled != '\0')) &&
     (pIVar1 = (pFVar3->ModulationInterface).Object, pIVar1 != (IAudioModulationManager *)0x0)) {
    cVar2 = (**(code **)(*(longlong *)pIVar1 + 0x18))(pIVar1,param_2,param_3);
    return cVar2 != '\0';
  }
  return true;
}

// QuerySoloMuteSoundClass @ 14764e070

void __thiscall
Audio::FAudioDebugger::QuerySoloMuteSoundClass
          (FAudioDebugger *this,FString *param_1,bool *param_2,bool *param_3,FString *param_4)

{
  GetDebugSoloMuteStateX
            (this,param_1,&(this->DebugNames).SoloSoundClass,&(this->DebugNames).MuteSoundClass,
             param_2,param_3,param_4);
  return;
}

// QuerySoloMuteSoundCue @ 14764e0b0

void __thiscall
Audio::FAudioDebugger::QuerySoloMuteSoundCue
          (FAudioDebugger *this,FString *param_1,bool *param_2,bool *param_3,FString *param_4)

{
  GetDebugSoloMuteStateX
            (this,param_1,&(this->DebugNames).SoloSoundCue,&(this->DebugNames).MuteSoundCue,param_2,
             param_3,param_4);
  return;
}

// QuerySoloMuteSoundWave @ 14764e0f0

void __thiscall
Audio::FAudioDebugger::QuerySoloMuteSoundWave
          (FAudioDebugger *this,FString *param_1,bool *param_2,bool *param_3,FString *param_4)

{
  GetDebugSoloMuteStateX
            (this,param_1,&(this->DebugNames).SoloSoundWave,&(this->DebugNames).MuteSoundWave,
             param_2,param_3,param_4);
  return;
}

// RemoveDevice @ 147653890

void __cdecl Audio::FAudioDebugger::RemoveDevice(FAudioDevice *param_1)

{
  uint local_res8 [8];
  
  local_res8[0] = param_1->DeviceID;
  if (AudioDeviceStats._8_4_ != AudioDeviceStats._52_4_) {
    TSet<TTuple<unsigned_int,Audio::FAudioStats>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned_int>
              ((TSet<TTuple<unsigned_int,Audio::FAudioStats>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>,FDefaultSetAllocator>
                *)&AudioDeviceStats,local_res8[0],local_res8);
  }
  local_res8[0] = param_1->DeviceID;
  if (AudioDeviceStats_AudioThread._8_4_ != AudioDeviceStats_AudioThread._52_4_) {
    TSet<TTuple<unsigned_int,Audio::FAudioStats_AudioThread>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats_AudioThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned_int>
              ((TSet<TTuple<unsigned_int,Audio::FAudioStats_AudioThread>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats_AudioThread,0>,FDefaultSetAllocator>
                *)&AudioDeviceStats_AudioThread,local_res8[0],local_res8);
  }
  return;
}

// RenderStatCues @ 147654190

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
Audio::FAudioDebugger::RenderStatCues
          (UWorld *param_1,FViewport *param_2,FCanvas *param_3,int param_4,int param_5)

{
  LPCRITICAL_SECTION p_Var1;
  char *pcVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  bool bVar4;
  bool bVar5;
  float fVar6;
  char cVar7;
  FAudioDevice *pFVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  UFont *pUVar17;
  ulonglong uVar18;
  FString *pFVar19;
  size_t sVar20;
  TStringView<wchar_t> *pTVar21;
  FColor *pFVar22;
  ulonglong uVar23;
  FColor_u_0 FVar24;
  FAudioDevice *pFVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  int iVar28;
  int iVar29;
  FScriptContainerElement *pFVar30;
  TSharedPtr<IAudioSpatialization,1> *pTVar31;
  float fVar32;
  double dVar33;
  float fVar34;
  double dVar35;
  char local_298 [4];
  FColor_u_0 local_294;
  int local_290;
  int local_28c;
  uint local_288;
  int local_284;
  FAudioDevice *local_280;
  FString local_278;
  int local_268;
  UFont *local_260;
  FString local_258;
  FAudioDevice *local_248;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  FString local_228;
  float local_218;
  float fStack_214;
  undefined4 local_210;
  undefined4 local_20c;
  TStringView<wchar_t> local_208;
  ulonglong local_1f8;
  FLinearColor_u_0 local_1f0;
  int local_1e0;
  int local_1dc;
  FString local_1d8;
  TStringView<wchar_t> local_1c8;
  FAudioStats *local_1b8;
  FLinearColor_u_0 local_1b0;
  FLinearColor_u_0 local_1a0;
  TStringView<wchar_t> local_188;
  FString local_178;
  FLinearColor_u_0 local_168;
  FLinearColor_u_0 local_158;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  FString local_138;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FString local_f8;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TStringView<wchar_t> local_c8;
  FString local_b8;
  FString local_a8;
  TStringView<wchar_t> local_98 [6];
  
  bVar5 = false;
  bVar10 = false;
  bVar4 = false;
  bVar12 = false;
  local_248 = (FAudioDevice *)((ulonglong)local_248 & 0xffffffff00000000);
  local_280 = (FAudioDevice *)0x0;
  bVar11 = DebugShouldRenderStat
                     (param_1,param_3,bDebugCuesForAllViewsEnabled,DebugStatNames::SoundCues,
                      &local_280);
  if (!bVar11) {
    return param_5;
  }
  pUVar17 = GetStatsFont();
  local_260 = pUVar17;
  fVar32 = UFont::GetMaxCharHeight(pUVar17);
  fVar6 = __real_3b808081;
  fVar32 = fVar32 + __real_40000000;
  local_228.Data.ArrayNum = 0x12;
  dVar35 = (double)param_4;
  fStack_214 = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.G];
  local_218 = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.R];
  local_210 = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.B];
  local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15171ef38;
  local_1c8._12_4_ = local_228.Data.ArrayMax;
  local_1c8.Size = 0x12;
  local_1c8.DataPtr = L"Active Sound Cues:";
  local_20c = (float)HeaderColor.field0_0x0._3_1_ * __real_3b808081;
  local_268 = (int)fVar32;
  FCanvas::DrawShadowedString
            (param_3,dVar35,(double)param_5,&local_1c8,pUVar17,(FLinearColor *)&local_218,
             &FLinearColor::Black);
  iVar28 = param_5 + (int)fVar32;
  local_28c = 0;
  local_290 = iVar28;
  local_1b8 = TMapBase<unsigned_int,Audio::FAudioStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>_>
              ::FindOrAddImpl<unsigned_int_const_&>
                        ((TMapBase<unsigned_int,Audio::FAudioStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>_>
                          *)&AudioDeviceStats,local_280->DeviceID,&local_280->DeviceID);
  iVar14 = PrevClassLength;
  iVar29 = PrevNameLength;
  fVar32 = __real_38d1b717;
  if (SoundCueDebugMinimalCVar == 0) {
    pFVar25 = (FAudioDevice *)(local_1b8->StatSoundInfos).AllocatorInstance.Data;
    local_288 = (local_1b8->StatSoundInfos).ArrayNum;
    uVar18 = (ulonglong)(int)local_288;
    local_280 = (FAudioDevice *)
                ((longlong)&pFVar25->RenderStateCallbackListCritSec + uVar18 * 0x100 + -0x18);
    pTVar31 = &pFVar25->SpatializationPluginInterface;
    while( true ) {
      pFVar8 = local_280;
      pFVar30 = (FScriptContainerElement *)0x0;
      local_248 = pFVar25;
      if ((local_1b8->StatSoundInfos).ArrayNum != (int)uVar18) {
        `TCheckedPointerIterator<Audio::FAudioStats::FStatSoundInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_298);
      }
      iVar28 = local_290;
      if (pFVar25 == pFVar8) break;
      iVar29 = *(int *)&pTVar31->Object;
      puVar27 = *(undefined8 **)((longlong)(pTVar31 + -1) + 8);
      puVar26 = puVar27 + (longlong)iVar29 * 8;
      while( true ) {
        if (*(int *)&pTVar31->Object != iVar29) {
          `TCheckedPointerIterator<Audio::FAudioStats::FStatWaveInstanceInfo_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_298);
        }
        if (puVar27 == puVar26) goto LAB_147654640;
        if (fVar32 < *(float *)(puVar27 + 4) || fVar32 == *(float *)(puVar27 + 4)) break;
        puVar27 = puVar27 + 8;
      }
      pcVar2 = (char *)*puVar27;
      local_294 = FColor::White.field0_0x0;
      FVar24 = FColor::White.field0_0x0;
      if (pcVar2 != (char *)0x0) {
        p_Var1 = (LPCRITICAL_SECTION)(pcVar2 + 0x28);
        if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(p_Var1);
        FVar24 = FColor::Red.field0_0x0;
        if ((pcVar2[1] == '\0') && (FVar24 = FColor::White.field0_0x0, *pcVar2 != '\0')) {
          FVar24 = FColor::Yellow.field0_0x0;
        }
        local_294 = FVar24;
        if (*(int *)(pcVar2 + 0x10) < 2) {
          bVar12 = true;
          pFVar19 = ::FString::FString((FString *)&local_1c8,L"");
          bVar10 = true;
          if (&local_a8 != pFVar19) goto LAB_14765447c;
        }
        else {
          bVar4 = true;
          ::FString::PrintfImpl(&local_228,L" - %s");
          pFVar19 = &local_228;
          bVar10 = bVar12;
LAB_14765447c:
          bVar12 = bVar10;
          pFVar30 = (pFVar19->Data).AllocatorInstance.Data;
          (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar19->Data).ArrayNum = 0;
          (pFVar19->Data).ArrayMax = 0;
        }
        if ((bVar12) && (bVar12 = false, local_1c8.DataPtr != (wchar_t *)0x0)) {
          FMemory::Free(local_1c8.DataPtr);
        }
        if ((bVar4) &&
           (bVar4 = false, local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
        LeaveCriticalSection(p_Var1);
      }
      ::FName::ToString((FName *)(((FWindowsRecursiveMutex *)(pTVar31 + -9))->CriticalSection).
                                 Opaque2,&local_178);
      local_28c = local_28c + 1;
      ::FString::PrintfImpl((FString *)&local_1f0._s_0,L"%4i. %6.2f %s %s %s");
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      fStack_214 = FLinearColor::sRGBToLinearTable[local_294._s_0.G];
      local_218 = FLinearColor::sRGBToLinearTable[local_294._s_0.R];
      local_210 = FLinearColor::sRGBToLinearTable[FVar24.Bits & 0xff];
      local_20c = (float)(local_294.Bits >> 0x18) * fVar6;
      if (local_1f0._s_0.B == 0.0) {
        local_238 = L"";
LAB_1476545cd:
        sVar20 = wcslen(local_238);
        fVar34 = (float)sVar20;
      }
      else {
        local_238 = (wchar_t *)CONCAT44(local_1f0._s_0.G,local_1f0._s_0.R);
        fVar34 = 0.0;
        if (local_238 != (wchar_t *)0x0) goto LAB_1476545cd;
      }
      iVar29 = local_290;
      local_188._12_4_ = uStack_22c;
      local_188.Size = (int)fVar34;
      local_188.DataPtr = local_238;
      uStack_230 = fVar34;
      FCanvas::DrawShadowedString
                (param_3,dVar35,(double)local_290,&local_188,local_260,(FLinearColor *)&local_218,
                 &FLinearColor::Black);
      local_290 = iVar29 + local_268;
      if ((void *)CONCAT44(local_1f0._s_0.G,local_1f0._s_0.R) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_1f0._s_0.G,local_1f0._s_0.R));
      }
      if (pFVar30 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar30);
      }
LAB_147654640:
      pFVar25 = (FAudioDevice *)&local_248->ReverbPluginInterface;
      uVar18 = (ulonglong)local_288;
      pTVar31 = pTVar31 + 0x10;
    }
  }
  else {
    pFVar30 = (local_1b8->StatSoundInfos).AllocatorInstance.Data;
    local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1dc = 1;
    if (1 < SoundCueDebugTabSpacingCVar) {
      local_1dc = SoundCueDebugTabSpacingCVar;
    }
    local_258.Data.ArrayNum = 0;
    local_258.Data.ArrayMax = 0;
    local_284 = 1;
    if (1 < SoundCueDebugCharSpacingCVar) {
      local_284 = SoundCueDebugCharSpacingCVar;
    }
    local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.Data.ArrayNum = 0;
    local_278.Data.ArrayMax = 0;
    local_288 = local_284 * 6;
    PrevNameLength = 0;
    local_1e0 = (iVar29 / local_1dc + 1) * local_1dc;
    PrevClassLength = 0;
    local_1dc = (iVar14 / local_1dc + 1) * local_1dc;
    iVar29 = (local_1b8->StatSoundInfos).ArrayNum;
    uVar18 = (ulonglong)iVar29;
    local_248 = (FAudioDevice *)CONCAT44(local_248._4_4_,iVar29);
    _local_218 = pFVar30 + uVar18 * 0x100;
    while( true ) {
      uVar9 = _local_218;
      if ((local_1b8->StatSoundInfos).ArrayNum != (int)uVar18) {
        `TCheckedPointerIterator<Audio::FAudioStats::FStatSoundInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_298);
      }
      if (pFVar30 == (FScriptContainerElement *)uVar9) break;
      iVar29 = *(int *)(pFVar30 + 0xa8);
      puVar27 = *(undefined8 **)(pFVar30 + 0xa0);
      puVar26 = puVar27 + (longlong)iVar29 * 8;
      while( true ) {
        if (*(int *)(pFVar30 + 0xa8) != iVar29) {
          `TCheckedPointerIterator<Audio::FAudioStats::FStatWaveInstanceInfo_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_298);
        }
        iVar28 = local_290;
        if (puVar27 == puVar26) goto LAB_147655020;
        if (fVar32 < *(float *)(puVar27 + 4) || fVar32 == *(float *)(puVar27 + 4)) break;
        puVar27 = puVar27 + 8;
      }
      uVar18 = (ulonglong)(uint)FColor::White.field0_0x0;
      local_294 = FColor::White.field0_0x0;
      local_298[0] = '\0';
      local_280 = (FAudioDevice *)0x0;
      ::FString::FString((FString *)&local_188,L".");
      pFVar3 = pFVar30 + 0x10;
      bVar12 = ::FString::Split((FString *)pFVar3,(FString *)&local_188,&local_258,&local_278);
      if (local_188.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_188.DataPtr);
      }
      if (!bVar12) {
        ::FString::FString(&local_178,L":");
        bVar12 = ::FString::Split((FString *)pFVar3,&local_178,&local_258,&local_278);
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if ((!bVar12) && ((FScriptContainerElement *)&local_258 != pFVar3)) {
          iVar29 = *(int *)(pFVar30 + 0x18);
          pFVar3 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar3->field_0x0)->
                   AllocatorInstance).Data;
          local_258.Data.ArrayNum = iVar29;
          if ((iVar29 == 0) && (local_258.Data.ArrayMax == 0)) {
            local_258.Data.ArrayNum = 0;
            local_258.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar29,local_258.Data.ArrayMax,(ForAnyElementType *)&local_258,iVar29,
                       &local_258.Data.ArrayMax);
            if (iVar29 != 0) {
              memcpy(local_258.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar29 * 2);
            }
          }
        }
      }
      if ((FScriptContainerElement *)&local_278 == pFVar30) {
LAB_1476548b7:
        iVar29 = local_278.Data.ArrayNum;
      }
      else {
        iVar29 = *(int *)(pFVar30 + 8);
        _Src = *(void **)pFVar30;
        local_278.Data.ArrayNum = iVar29;
        if ((iVar29 != 0) || (local_278.Data.ArrayMax != 0)) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar29,local_278.Data.ArrayMax,(ForAnyElementType *)&local_278,iVar29,
                     &local_278.Data.ArrayMax);
          if (iVar29 != 0) {
            memcpy(local_278.Data.AllocatorInstance.Data,_Src,(longlong)iVar29 * 2);
          }
          goto LAB_1476548b7;
        }
        local_278.Data.ArrayNum = 0;
        local_278.Data.ArrayMax = 0;
        iVar29 = 0;
      }
      iVar14 = iVar29 + -1;
      if (iVar29 == 0) {
        iVar14 = 0;
      }
      if (PrevNameLength < iVar14) {
        PrevNameLength = iVar14;
      }
      uVar15 = ::FName::GetStringLength((FName *)(pFVar30 + 0x20));
      if (PrevClassLength < (int)uVar15) {
        PrevClassLength = ::FName::GetStringLength((FName *)(pFVar30 + 0x20));
      }
      pcVar2 = (char *)*puVar27;
      if (pcVar2 != (char *)0x0) {
        p_Var1 = (LPCRITICAL_SECTION)(pcVar2 + 0x28);
        if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(p_Var1);
        if (pcVar2[1] == '\0') {
          local_294 = FColor::White.field0_0x0;
          if (*pcVar2 != '\0') {
            local_294 = FColor::Yellow.field0_0x0;
          }
          uVar18 = (ulonglong)local_294.Bits;
          if (*pcVar2 != '\0') goto LAB_147654924;
          local_298[0] = '\0';
        }
        else {
          uVar18 = (ulonglong)(uint)FColor::Red.field0_0x0;
          local_294 = FColor::Red.field0_0x0;
LAB_147654924:
          local_298[0] = '\x01';
        }
        if (*(int *)(pcVar2 + 0x10) < 2) {
          bVar10 = true;
          pTVar21 = (TStringView<wchar_t> *)::FString::FString(&local_b8,L"");
          bVar12 = true;
          if (local_98 != pTVar21) goto LAB_14765498f;
        }
        else {
          bVar5 = true;
          ::FString::PrintfImpl((FString *)&local_1c8,L" - %s");
          pTVar21 = &local_1c8;
          bVar12 = bVar10;
LAB_14765498f:
          bVar10 = bVar12;
          local_280 = (FAudioDevice *)
                      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar21->DataPtr)->
                      AllocatorInstance).Data;
          (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar21->DataPtr)->AllocatorInstance).
          Data = (FScriptContainerElement *)0x0;
          *(undefined8 *)&pTVar21->Size = 0;
        }
        if ((bVar10) &&
           (bVar10 = false, local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if ((bVar5) && (bVar5 = false, local_1c8.DataPtr != (wchar_t *)0x0)) {
          FMemory::Free(local_1c8.DataPtr);
        }
        LeaveCriticalSection(p_Var1);
      }
      local_28c = local_28c + 1;
      ::FString::PrintfImpl(&local_228,L"%4i. ");
      ::FString::PrintfImpl(&local_1d8,L"%6.3f ");
      ::FString::PrintfImpl(&local_138,L"Path: %s %s");
      local_168._s_0.R = FLinearColor::sRGBToLinearTable[local_294._s_0.R];
      local_168._s_0.G = FLinearColor::sRGBToLinearTable[local_294._s_0.G];
      local_1f8 = uVar18 & 0xff;
      local_168._s_0.B = FLinearColor::sRGBToLinearTable[local_1f8];
      fVar34 = (float)(local_294.Bits >> 0x18) * fVar6;
      local_168._s_0.A = fVar34;
      if (local_228.Data.ArrayNum == 0) {
        local_128 = (FScriptContainerElement *)0x15060d16c;
LAB_147654ac5:
        sVar20 = wcslen((wchar_t *)local_128);
        iVar29 = (int)sVar20;
      }
      else {
        local_128 = local_228.Data.AllocatorInstance.Data;
        iVar29 = 0;
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_147654ac5;
      }
      local_208._12_4_ = uStack_11c;
      local_208.Size = iVar29;
      dVar33 = (double)local_290;
      local_208.DataPtr = (wchar_t *)local_128;
      iStack_120 = iVar29;
      FCanvas::DrawShadowedString
                (param_3,dVar35,dVar33,&local_208,local_260,(FLinearColor *)&local_168._s_0,
                 &FLinearColor::Black);
      cVar7 = local_298[0];
      iVar29 = local_288 + param_4;
      pFVar22 = (FColor *)&local_294;
      if (local_298[0] == '\0') {
        pFVar22 = &FColor::Orange;
      }
      local_158._s_0.R = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)pFVar22 + 2)];
      local_158._s_0.G = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)pFVar22 + 1)];
      local_158._s_0.B =
           FLinearColor::sRGBToLinearTable
           [(((FColor_u_0 *)&((FColor_u_0_s_0 *)pFVar22)->B)->_s_0).B];
      local_158._s_0.A = (float)*(byte *)((longlong)pFVar22 + 3) * fVar6;
      iVar14 = 0;
      if (local_1d8.Data.ArrayNum == 0) {
        local_118 = (FScriptContainerElement *)0x15060d16c;
LAB_147654bb5:
        sVar20 = wcslen((wchar_t *)local_118);
        iVar28 = (int)sVar20;
      }
      else {
        local_118 = local_1d8.Data.AllocatorInstance.Data;
        iVar28 = iVar14;
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_147654bb5;
      }
      local_208._12_4_ = uStack_10c;
      local_208.Size = iVar28;
      local_208.DataPtr = (wchar_t *)local_118;
      iStack_110 = iVar28;
      FCanvas::DrawShadowedString
                (param_3,(double)iVar29,dVar33,&local_208,local_260,(FLinearColor *)&local_158._s_0,
                 &FLinearColor::Black);
      iVar29 = iVar29 + local_288;
      if (SoundCueDebugShowDistanceCVar != 0) {
        ::FString::PrintfImpl(&local_f8,L"%6.2f ");
        pFVar22 = (FColor *)&local_294;
        if (cVar7 == '\0') {
          pFVar22 = &FColor::White;
        }
        local_1b0._s_0.R = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)pFVar22 + 2)];
        local_1b0._s_0.G = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)pFVar22 + 1)];
        local_1b0._s_0.B =
             FLinearColor::sRGBToLinearTable
             [(((FColor_u_0 *)&((FColor_u_0_s_0 *)pFVar22)->B)->_s_0).B];
        local_1b0._s_0.A = (float)*(byte *)((longlong)pFVar22 + 3) * fVar6;
        if (local_f8.Data.ArrayNum == 0) {
          local_108 = (FScriptContainerElement *)0x15060d16c;
LAB_147654cbe:
          sVar20 = wcslen((wchar_t *)local_108);
          iVar28 = (int)sVar20;
        }
        else {
          local_108 = local_f8.Data.AllocatorInstance.Data;
          iVar28 = iVar14;
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_147654cbe;
        }
        local_208._12_4_ = uStack_fc;
        local_208.Size = iVar28;
        local_208.DataPtr = (wchar_t *)local_108;
        iStack_100 = iVar28;
        FCanvas::DrawShadowedString
                  (param_3,(double)iVar29,dVar33,&local_208,local_260,
                   (FLinearColor *)&local_1b0._s_0,&FLinearColor::Black);
        iVar29 = iVar29 + local_284 * 0xc;
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
      if (cVar7 == '\0') {
        uVar18 = 0xff;
        bVar13 = 0;
        uVar23 = 0xff;
        iVar28 = 0xff;
      }
      else {
        bVar13 = (byte)(uVar18 >> 0x10);
        uVar23 = uVar18 >> 8;
        iVar28 = (int)(uVar18 >> 0x18);
      }
      local_1a0._s_0.R = FLinearColor::sRGBToLinearTable[bVar13];
      local_1a0._s_0.A = (float)iVar28 * fVar6;
      local_1a0._s_0.G = FLinearColor::sRGBToLinearTable[uVar23 & 0xff];
      local_1a0._s_0.B = FLinearColor::sRGBToLinearTable[uVar18 & 0xff];
      if (local_278.Data.ArrayNum == 0) {
        local_e8 = (FScriptContainerElement *)0x15060d16c;
LAB_147654db5:
        sVar20 = wcslen((wchar_t *)local_e8);
        iVar28 = (int)sVar20;
      }
      else {
        local_e8 = local_278.Data.AllocatorInstance.Data;
        iVar28 = iVar14;
        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_147654db5;
      }
      local_208._12_4_ = uStack_dc;
      local_208.Size = iVar28;
      local_208.DataPtr = (wchar_t *)local_e8;
      iStack_e0 = iVar28;
      FCanvas::DrawShadowedString
                (param_3,(double)iVar29,dVar33,&local_208,local_260,(FLinearColor *)&local_1a0._s_0,
                 &FLinearColor::Black);
      iVar28 = local_284;
      pFVar22 = (FColor *)&local_294;
      iVar29 = iVar29 + local_1e0 * local_284;
      if (cVar7 == '\0') {
        pFVar22 = &FColor::Yellow;
      }
      local_1f0._s_0.R = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)pFVar22 + 2)];
      local_1f0._s_0.G = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)pFVar22 + 1)];
      local_1f0._s_0.B =
           FLinearColor::sRGBToLinearTable
           [(((FColor_u_0 *)&((FColor_u_0_s_0 *)pFVar22)->B)->_s_0).B];
      local_1f0._s_0.A = (float)*(byte *)((longlong)pFVar22 + 3) * fVar6;
      pFVar19 = ::FName::ToString((FName *)(pFVar30 + 0x20),(FString *)&local_c8);
      if ((pFVar19->Data).ArrayNum == 0) {
        local_d8 = (FScriptContainerElement *)0x15060d16c;
LAB_147654e9e:
        sVar20 = wcslen((wchar_t *)local_d8);
        iVar16 = (int)sVar20;
      }
      else {
        local_d8 = (pFVar19->Data).AllocatorInstance.Data;
        iVar16 = iVar14;
        if (local_d8 != (FScriptContainerElement *)0x0) goto LAB_147654e9e;
      }
      local_208._12_4_ = uStack_cc;
      local_208.Size = iVar16;
      local_208.DataPtr = (wchar_t *)local_d8;
      iStack_d0 = iVar16;
      FCanvas::DrawShadowedString
                (param_3,(double)iVar29,dVar33,&local_208,local_260,(FLinearColor *)&local_1f0._s_0,
                 &FLinearColor::Black);
      if (local_c8.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_c8.DataPtr);
      }
      if (SoundCueDebugShowPathCVar != 0) {
        iVar28 = local_1dc * iVar28;
        local_238._4_4_ = FLinearColor::sRGBToLinearTable[local_294._s_0.G];
        local_238._0_4_ = FLinearColor::sRGBToLinearTable[local_294._s_0.R];
        uStack_230 = FLinearColor::sRGBToLinearTable[local_1f8];
        uStack_22c = fVar34;
        if (local_138.Data.ArrayNum == 0) {
          local_148 = (FScriptContainerElement *)0x15060d16c;
LAB_147654f7b:
          sVar20 = wcslen((wchar_t *)local_148);
          iVar14 = (int)sVar20;
        }
        else {
          local_148 = local_138.Data.AllocatorInstance.Data;
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_147654f7b;
        }
        local_208._12_4_ = uStack_13c;
        local_208.Size = iVar14;
        local_208.DataPtr = (wchar_t *)local_148;
        iStack_140 = iVar14;
        FCanvas::DrawShadowedString
                  (param_3,(double)(iVar29 + iVar28),dVar33,&local_208,local_260,
                   (FLinearColor *)&local_238,&FLinearColor::Black);
      }
      iVar28 = local_290 + local_268;
      local_290 = iVar28;
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      if (local_280 != (FAudioDevice *)0x0) {
        FMemory::Free(local_280);
      }
LAB_147655020:
      pFVar30 = pFVar30 + 0x100;
      uVar18 = (ulonglong)local_248 & 0xffffffff;
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
  }
  iVar29 = 0;
  local_238._4_4_ = FLinearColor::sRGBToLinearTable[(uint)FColor::White.field0_0x0 >> 8 & 0xff];
  local_238._0_4_ = FLinearColor::sRGBToLinearTable[(uint)FColor::White.field0_0x0 >> 0x10 & 0xff];
  uStack_230 = FLinearColor::sRGBToLinearTable[(uint)FColor::White.field0_0x0 & 0xff];
  uStack_22c = (float)((uint)FColor::White.field0_0x0 >> 0x18) * fVar6;
  pUVar17 = GetStatsFont();
  ::FString::PrintfImpl(&local_1d8,L"Total: %i");
  if (local_1d8.Data.ArrayNum == 0) {
    local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_228.Data.AllocatorInstance.Data = local_1d8.Data.AllocatorInstance.Data;
    if (local_1d8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_147655101;
  }
  sVar20 = wcslen((wchar_t *)local_228.Data.AllocatorInstance.Data);
  iVar29 = (int)sVar20;
LAB_147655101:
  local_c8._12_4_ = local_228.Data.ArrayMax;
  local_c8.Size = iVar29;
  local_c8.DataPtr = (wchar_t *)local_228.Data.AllocatorInstance.Data;
  local_228.Data.ArrayNum = iVar29;
  FCanvas::DrawShadowedString
            (param_3,dVar35,(double)iVar28,&local_c8,pUVar17,(FLinearColor *)&local_238,
             &FLinearColor::Black);
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  return local_268 + iVar28;
}

// RenderStatMixes @ 1476551c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
Audio::FAudioDebugger::RenderStatMixes
          (UWorld *param_1,FViewport *param_2,FCanvas *param_3,int param_4,int param_5)

{
  int iVar1;
  FColor_u_0 FVar2;
  bool bVar3;
  UFont *pUVar4;
  FAudioStats *pFVar5;
  size_t sVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  undefined1 local_88 [4];
  int local_84;
  undefined1 local_80 [24];
  wchar_t *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48 [2];
  
  local_80._0_8_ = (FAudioDevice *)0x0;
  bVar3 = DebugShouldRenderStat
                    (param_1,param_3,bDebugMixesForAllViewsEnabled,DebugStatNames::SoundMixes,
                     (FAudioDevice **)local_80);
  if (!bVar3) {
    return param_5;
  }
  pUVar4 = GetStatsFont();
  fVar11 = UFont::GetMaxCharHeight(pUVar4);
  iVar10 = (int)(fVar11 + __real_40000000);
  local_84 = iVar10;
  pFVar5 = TMapBase<unsigned_int,Audio::FAudioStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>_>
           ::FindOrAddImpl<unsigned_int_const_&>
                     ((TMapBase<unsigned_int,Audio::FAudioStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>_>
                       *)&AudioDeviceStats,*(uint *)(local_80._0_8_ + 0xa0),
                      (uint *)(local_80._0_8_ + 0xa0));
  fVar11 = __real_3b808081;
  local_80._4_4_ = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.G];
  local_80._0_4_ = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.R];
  local_80._8_4_ = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.B];
  local_80._12_4_ = (float)HeaderColor.field0_0x0._3_1_ * __real_3b808081;
  pUVar4 = GetStatsFont();
  local_58.Size = 0x13;
  local_58.DataPtr = L"Active Sound Mixes:";
  FCanvas::DrawShadowedString
            (param_3,(double)param_4,(double)param_5,&local_58,pUVar4,(FLinearColor *)local_80,
             &FLinearColor::Black);
  iVar1 = (pFVar5->StatSoundMixes).ArrayNum;
  iVar9 = param_5 + iVar10;
  if (iVar1 < 1) {
    local_80._4_4_ = FLinearColor::sRGBToLinearTable[(uint)FColor::White.field0_0x0 >> 8 & 0xff];
    local_80._0_4_ = FLinearColor::sRGBToLinearTable[(uint)FColor::White.field0_0x0 >> 0x10 & 0xff];
    local_80._8_4_ = FLinearColor::sRGBToLinearTable[(uint)FColor::White.field0_0x0 & 0xff];
    local_80._12_4_ = (float)((uint)FColor::White.field0_0x0 >> 0x18) * fVar11;
    pUVar4 = GetStatsFont();
    local_58.DataPtr = L"None";
    local_58.Size = 4;
    local_48[0].DataPtr = L"None";
    local_48[0].Size = 4;
    local_48[0]._12_4_ = local_58._12_4_;
    FCanvas::DrawShadowedString
              (param_3,(double)(param_4 + 0xc),(double)iVar9,local_48,pUVar4,
               (FLinearColor *)local_80,&FLinearColor::Black);
    iVar9 = iVar9 + iVar10;
  }
  else {
    pFVar7 = (pFVar5->StatSoundMixes).AllocatorInstance.Data;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x20;
    while( true ) {
      if ((pFVar5->StatSoundMixes).ArrayNum != iVar1) {
        `TCheckedPointerIterator<Audio::FAudioStats::FStatSoundMix,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_88);
      }
      if (pFVar7 == pFVar8) break;
      ::FString::PrintfImpl
                ((FString *)&local_58,L"%s - Fade Proportion: %1.2f - Total Ref Count: %i");
      FVar2 = FColor::White.field0_0x0;
      if (pFVar7[0x18] != (FScriptContainerElement)0x0) {
        FVar2 = FColor::Yellow.field0_0x0;
      }
      local_80._4_4_ = FLinearColor::sRGBToLinearTable[(ulonglong)(FVar2.Bits >> 8) & 0xff];
      local_80._0_4_ = FLinearColor::sRGBToLinearTable[(ulonglong)(FVar2.Bits >> 0x10) & 0xff];
      local_80._8_4_ = FLinearColor::sRGBToLinearTable[(ulonglong)FVar2.Bits & 0xff];
      local_80._12_4_ = (float)(FVar2.Bits >> 0x18) * fVar11;
      pUVar4 = GetStatsFont();
      if (local_58.Size == 0) {
        local_68 = L"";
LAB_147655431:
        sVar6 = wcslen(local_68);
        iVar10 = (int)sVar6;
      }
      else {
        iVar10 = 0;
        local_68 = local_58.DataPtr;
        if (local_58.DataPtr != (wchar_t *)0x0) goto LAB_147655431;
      }
      local_48[0]._12_4_ = uStack_5c;
      local_48[0].Size = iVar10;
      local_48[0].DataPtr = local_68;
      iStack_60 = iVar10;
      FCanvas::DrawShadowedString
                (param_3,(double)(param_4 + 0xc),(double)iVar9,local_48,pUVar4,
                 (FLinearColor *)local_80,&FLinearColor::Black);
      iVar10 = local_84;
      iVar9 = iVar9 + local_84;
      if (local_58.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_58.DataPtr);
      }
      pFVar7 = pFVar7 + 0x20;
    }
  }
  return iVar10 + iVar9;
}

// RenderStatModulators @ 147655590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
Audio::FAudioDebugger::RenderStatModulators
          (UWorld *param_1,FViewport *param_2,FCanvas *param_3,int param_4,int param_5,
          TVector<double> *param_6,TRotator<double> *param_7)

{
  int iVar1;
  IAudioModulationManager *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UFont *pUVar6;
  int iVar7;
  float fVar8;
  FAudioDevice *local_58;
  FLinearColor_u_0 local_50;
  TStringView<wchar_t> local_38;
  
  local_58 = (FAudioDevice *)0x0;
  bVar4 = DebugShouldRenderStat
                    (param_1,param_3,bDebugModulationForAllViewsEnabled,
                     DebugStatNames::SoundModulation,&local_58);
  if (!bVar4) {
    return param_5;
  }
  pUVar6 = GetStatsFont();
  fVar8 = UFont::GetMaxCharHeight(pUVar6);
  iVar7 = (int)(fVar8 + __real_40000000);
  local_50._s_0.R = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.R];
  local_50._s_0.G = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.G];
  local_50._s_0.B = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.B];
  local_50._s_0.A = (float)HeaderColor.field0_0x0._3_1_ * __real_3b808081;
  pUVar6 = GetStatsFont();
  local_38.Size = 0x18;
  local_38.DataPtr = L"Active Sound Modulation:";
  FCanvas::DrawShadowedString
            (param_3,(double)param_4,(double)param_5,&local_38,pUVar6,(FLinearColor *)&local_50._s_0
             ,&FLinearColor::Black);
  iVar1 = iVar7 + param_5;
  pIVar2 = (local_58->ModulationInterface).Object;
  iVar5 = iVar1;
  if (pIVar2 != (IAudioModulationManager *)0x0) {
    pcVar3 = *(code **)(*(longlong *)pIVar2 + 0x20);
    pUVar6 = GetStatsFont();
    iVar5 = (*pcVar3)(pIVar2,param_2,param_3,param_4,iVar1,pUVar6,param_6,param_7);
    if (iVar5 != iVar1) goto LAB_147655801;
  }
  local_50._s_0.R = FLinearColor::sRGBToLinearTable[(uint)FColor::White.field0_0x0 >> 0x10 & 0xff];
  local_50._s_0.G = FLinearColor::sRGBToLinearTable[(uint)FColor::White.field0_0x0 >> 8 & 0xff];
  local_50._s_0.B = FLinearColor::sRGBToLinearTable[(uint)FColor::White.field0_0x0 & 0xff];
  local_50._s_0.A = (float)((uint)FColor::White.field0_0x0 >> 0x18) * __real_3b808081;
  pUVar6 = GetStatsFont();
  local_38.Size = 4;
  local_38.DataPtr = L"None";
  FCanvas::DrawShadowedString
            (param_3,(double)(param_4 + 0xc),(double)iVar5,&local_38,pUVar6,
             (FLinearColor *)&local_50._s_0,&FLinearColor::Black);
  iVar5 = iVar5 + iVar7;
LAB_147655801:
  return iVar7 + iVar5;
}

// RenderStatReverb @ 147655840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
Audio::FAudioDebugger::RenderStatReverb
          (UWorld *param_1,FViewport *param_2,FCanvas *param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  double *pdVar3;
  TMap<FName,FActivatedReverb,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>_>
  *pTVar4;
  int iVar5;
  code *pcVar6;
  float fVar7;
  FAudioDevice *pFVar8;
  UWorld *this;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  UFont *pUVar13;
  size_t sVar14;
  AAudioVolume *pAVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  FName *pFVar19;
  AAudioVolume *pAVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  TStringView<wchar_t> *pTVar24;
  AAudioVolume *pAVar25;
  AAudioVolume *pAVar26;
  FAudioDevice *pFVar27;
  longlong lVar28;
  int iVar29;
  float fVar30;
  double dVar31;
  undefined1 auStackY_3f8 [32];
  FString local_3b0;
  FAudioDevice *local_3a0;
  ulonglong local_398;
  FCanvas *local_390;
  FLinearColor_u_0 local_388;
  int local_378 [2];
  UWorld *local_370;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  TMap<FName,FActivatedReverb,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>_>
  *local_328;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_320;
  TMap<FName,FActivatedReverb,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>_>
  *local_2f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2f0;
  FLinearColor_u_0 local_2c8;
  FLinearColor_u_0 local_2b8;
  FName local_2a8;
  FName local_2a0;
  FName local_298;
  FName local_290;
  FString local_288;
  FScriptContainerElement *local_278;
  uint uStack_270;
  undefined4 uStack_26c;
  FString local_268;
  FString local_258;
  FScriptContainerElement *local_248;
  uint uStack_240;
  undefined4 uStack_23c;
  FScriptContainerElement *local_238;
  uint uStack_230;
  undefined4 uStack_22c;
  FString local_228;
  FScriptContainerElement *local_218;
  uint uStack_210;
  undefined4 uStack_20c;
  FString local_208;
  wchar_t *local_1f8;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  FScriptContainerElement *local_1e8;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  TPairInitializer<int_&&,FString_const_&> local_1d8;
  wchar_t *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  int *local_1b8;
  FString *local_1b0;
  TStringView<wchar_t> local_1a8;
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  FString local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  FString local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TVector<double>_u_0 local_118 [2];
  undefined4 local_e4;
  undefined4 local_c4;
  undefined1 local_b8 [32];
  uint *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ForElementType<FSetElementId> local_78;
  int local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  pAVar20 = (AAudioVolume *)0x0;
  uVar18 = 0;
  uVar21 = 0;
  local_3a0 = (FAudioDevice *)0x0;
  local_390 = param_3;
  local_370 = param_1;
  bVar9 = DebugShouldRenderStat
                    (param_1,param_3,bDebugReverbForAllViewsEnabled,DebugStatNames::SoundReverb,
                     &local_3a0);
  if (!bVar9) {
    return param_5;
  }
  pUVar13 = GetStatsFont();
  fVar30 = UFont::GetMaxCharHeight(pUVar13);
  pFVar27 = local_3a0;
  fVar7 = __real_3b808081;
  local_3b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3b0.Data.ArrayNum = 0;
  local_3b0.Data.ArrayMax = 0;
  iVar10 = (int)(fVar30 + __real_40000000);
  local_388._s_0.R = FLinearColor::sRGBToLinearTable[(uint)FColor::White.field0_0x0 >> 0x10 & 0xff];
  local_388._s_0.G = FLinearColor::sRGBToLinearTable[(uint)FColor::White.field0_0x0 >> 8 & 0xff];
  local_388._s_0.B = FLinearColor::sRGBToLinearTable[(uint)FColor::White.field0_0x0 & 0xff];
  local_388._s_0.A = (float)((uint)FColor::White.field0_0x0 >> 0x18) * __real_3b808081;
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDevice.h"
                         ,699,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    iVar10 = (*pcVar6)();
    return iVar10;
  }
  if (pFVar27->CurrentReverbEffect == (UReverbEffect *)0x0) {
    ::FString::operator=(&local_3b0,L"Active Reverb Effect: None");
    local_2b8._s_0.R = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.R];
    local_2b8._s_0.G = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.G];
    local_2b8._s_0.B = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.B];
    local_2b8._s_0.A = (float)HeaderColor.field0_0x0._3_1_ * fVar7;
    pUVar13 = GetStatsFont();
    if (local_3b0.Data.ArrayNum == 0) {
      local_1e8 = (FScriptContainerElement *)0x15060d16c;
LAB_147656539:
      sVar14 = wcslen((wchar_t *)local_1e8);
      uVar21 = (uint)sVar14;
    }
    else {
      local_1e8 = local_3b0.Data.AllocatorInstance.Data;
      if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_147656539;
    }
    local_128._12_4_ = uStack_1dc;
    local_128.Size = uVar21;
    local_128.DataPtr = (wchar_t *)local_1e8;
    uStack_1e0 = uVar21;
    FCanvas::DrawShadowedString
              (param_3,(double)param_4,(double)param_5,&local_128,pUVar13,
               (FLinearColor *)&local_2b8._s_0,&FLinearColor::Black);
    iVar29 = param_5 + iVar10;
    goto LAB_147656459;
  }
  local_290 = (FName)pFVar27->CurrentReverbEffect->_padding_;
  ::FName::ToString(&local_290,&local_288);
  ::FString::PrintfImpl(&local_368,L"Active Reverb Effect: %s");
  if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
  }
  local_3b0.Data.AllocatorInstance.Data = local_368.Data.AllocatorInstance.Data;
  local_3b0.Data.ArrayNum = local_368.Data.ArrayNum;
  local_3b0.Data.ArrayMax = local_368.Data.ArrayMax;
  local_368.Data.ArrayNum = 0;
  local_368.Data.ArrayMax = 0;
  local_368.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  local_2c8._s_0.R = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.R];
  local_2c8._s_0.G = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.G];
  local_2c8._s_0.B = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.B];
  local_2c8._s_0.A = (float)HeaderColor.field0_0x0._3_1_ * fVar7;
  pUVar13 = GetStatsFont();
  if (local_3b0.Data.ArrayNum == 0) {
    local_278 = (FScriptContainerElement *)0x15060d16c;
LAB_147655aa2:
    sVar14 = wcslen((wchar_t *)local_278);
    uStack_270 = (uint)sVar14;
  }
  else {
    local_278 = local_3b0.Data.AllocatorInstance.Data;
    uStack_270 = uVar21;
    if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_147655aa2;
  }
  local_1a8._12_4_ = uStack_26c;
  local_1a8.Size = uStack_270;
  dVar31 = (double)param_4;
  local_1a8.DataPtr = (wchar_t *)local_278;
  FCanvas::DrawShadowedString
            (param_3,dVar31,(double)param_5,&local_1a8,pUVar13,(FLinearColor *)&local_2c8._s_0,
             &FLinearColor::Black);
  this = local_370;
  pFVar8 = local_3a0;
  lVar28 = (longlong)(pFVar27->ListenerProxies).ArrayNum;
  local_398 = CONCAT44(local_398._4_4_,param_5 + iVar10);
  uVar22 = 0;
  pAVar15 = pAVar20;
  pAVar25 = pAVar20;
  pAVar26 = pAVar20;
  iVar29 = param_5 + iVar10;
  if (lVar28 < 1) {
LAB_147655d13:
    ::FString::operator=(&local_3b0,L"  Audio Volume Reverb Effect: None");
  }
  else {
    do {
      local_370 = (UWorld *)&pFVar8->ListenerProxies;
      uVar17 = (uint)pAVar15;
      uVar11 = uVar22;
      if ((int)uVar17 < (pFVar8->ListenerProxies).ArrayNum) {
        uVar11 = ~uVar17 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        iVar10 = (*pcVar6)();
        return iVar10;
      }
      pdVar3 = (double *)((longlong)&pAVar25->_padding_ + local_370->_padding_);
      local_118[0]._0_8_ = *pdVar3;
      local_118[0]._8_8_ = pdVar3[1];
      local_118[0]._16_8_ = *(double *)((longlong)&pAVar25->_padding_ + local_370->_padding_);
      pAVar15 = UWorld::GetAudioSettings
                          (this,(TVector<double> *)&local_118[0]._s_0,(FReverbSettings *)0x0,
                           (FInteriorSettings *)0x0);
      if ((pAVar15 != (AAudioVolume *)0x0) &&
         ((pAVar26 == (AAudioVolume *)0x0 || (pAVar26->Priority < pAVar15->Priority)))) {
        pAVar26 = pAVar15;
      }
      lVar28 = lVar28 + -1;
      pAVar15 = (AAudioVolume *)(ulonglong)(uVar17 + 1);
      pAVar25 = (AAudioVolume *)&pAVar25->_padding_;
    } while (lVar28 != 0);
    iVar29 = (int)local_398;
    pFVar27 = local_3a0;
    if ((pAVar26 == (AAudioVolume *)0x0) ||
       ((pAVar26->Settings).ReverbEffect.field0_0x0.DebugPtr == (UReverbEffect *)0x0))
    goto LAB_147655d13;
    local_1d8._4_8_ = pAVar26->_padding_;
    ::FName::ToString((FName *)((longlong)&local_1d8.Key + 4),&local_258);
    local_2a8 = (FName)((pAVar26->Settings).ReverbEffect.field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_2a8,&local_268);
    ::FString::PrintfImpl
              (&local_358,L"  Audio Volume Reverb Effect: %s (Priority: %g Volume Name: %s)");
    if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
    }
    local_3b0.Data.AllocatorInstance.Data = local_358.Data.AllocatorInstance.Data;
    local_3b0.Data.ArrayNum = local_358.Data.ArrayNum;
    local_3b0.Data.ArrayMax = local_358.Data.ArrayMax;
    local_358.Data.ArrayNum = 0;
    local_358.Data.ArrayMax = 0;
    local_358.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    pFVar27 = local_3a0;
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
      pFVar27 = local_3a0;
    }
  }
  pUVar13 = GetStatsFont();
  if (local_3b0.Data.ArrayNum == 0) {
    local_248 = (FScriptContainerElement *)0x15060d16c;
LAB_147655d30:
    sVar14 = wcslen((wchar_t *)local_248);
    uVar22 = (uint)sVar14;
  }
  else {
    local_248 = local_3b0.Data.AllocatorInstance.Data;
    if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_147655d30;
  }
  local_198._12_4_ = uStack_23c;
  local_198.Size = uVar22;
  local_198.DataPtr = (wchar_t *)local_248;
  uStack_240 = uVar22;
  FCanvas::DrawShadowedString
            (local_390,dVar31,(double)iVar29,&local_198,pUVar13,(FLinearColor *)&local_388._s_0,
             &FLinearColor::Black);
  iVar29 = iVar29 + iVar10;
  pTVar4 = &pFVar27->ActivatedReverbs;
  iVar16 = *(int *)&(pFVar27->ActivatedReverbs).field_0x8;
  iVar5 = *(int *)&(pFVar27->ActivatedReverbs).field_0x34;
  if (iVar16 == iVar5) {
    ::FString::operator=(&local_3b0,L"  Activated Reverb: None");
    pUVar13 = GetStatsFont();
    if (local_3b0.Data.ArrayNum == 0) {
      local_238 = (FScriptContainerElement *)0x15060d16c;
LAB_147655dd2:
      sVar14 = wcslen((wchar_t *)local_238);
      uVar21 = (uint)sVar14;
    }
    else {
      local_238 = local_3b0.Data.AllocatorInstance.Data;
      if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_147655dd2;
    }
    pTVar24 = &local_188;
    local_188._12_4_ = uStack_22c;
    local_188.Size = uVar21;
    local_188.DataPtr = (wchar_t *)local_238;
    uStack_230 = uVar21;
  }
  else {
    puVar1 = &(pFVar27->ActivatedReverbs).field_0x10;
    uVar22 = 0;
    if (iVar16 - iVar5 != 1) {
      pUVar13 = GetStatsFont();
      local_1c8 = L"  Activated Reverb Effects:";
      uStack_1c0 = 0x1b;
      local_158._12_4_ = uStack_1bc;
      local_158.Size = 0x1b;
      local_158.DataPtr = L"  Activated Reverb Effects:";
      FCanvas::DrawShadowedString
                (local_390,dVar31,(double)iVar29,&local_158,pUVar13,(FLinearColor *)&local_388._s_0,
                 &FLinearColor::Black);
      iVar29 = iVar29 + iVar10;
      local_398 = 1;
      local_3a0 = (FAudioDevice *)CONCAT44(local_3a0._4_4_,1);
      local_b8._0_8_ = 0;
      local_b8._8_8_ = 0;
      local_98 = (uint *)0x0;
      local_90 = 0;
      local_8c = 0x80;
      local_88 = 0xffffffff;
      local_84 = 0;
      local_78 = (ForElementType<FSetElementId>)0x0;
      local_70 = 0;
      uVar11 = *(uint *)&(pFVar27->ActivatedReverbs).field_0x28;
      pAVar15 = pAVar20;
      uVar17 = uVar22;
      TStack_2f0.BaseBitIndex = uVar22;
      if (uVar11 != 0) {
        puVar23 = *(uint **)&(pFVar27->ActivatedReverbs).field_0x20;
        pAVar15 = (AAudioVolume *)(ulonglong)uVar11;
        if (puVar23 == (uint *)0x0) {
          puVar23 = (uint *)puVar1;
        }
        uVar12 = *puVar23;
        pAVar25 = pAVar20;
        pAVar26 = pAVar20;
        TStack_2f0.BaseBitIndex = uVar18;
        uVar17 = uVar18;
        while (uVar12 == 0) {
          iVar16 = (int)pAVar25;
          TStack_2f0.BaseBitIndex = (int)pAVar26 + 0x20;
          pAVar26 = (AAudioVolume *)(ulonglong)(uint)TStack_2f0.BaseBitIndex;
          uVar17 = iVar16 + 1;
          pAVar25 = (AAudioVolume *)(ulonglong)uVar17;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
          goto LAB_1476560ff;
          uVar12 = puVar23[(longlong)iVar16 + 1];
        }
        local_3a0 = (FAudioDevice *)(ulonglong)(-uVar12 & uVar12);
        uVar2 = (longlong)local_3a0 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        uVar12 = (TStack_2f0.BaseBitIndex - 1U) + (int)lVar28;
        if (*(int *)&(pFVar27->ActivatedReverbs).field_0x28 < (int)uVar12) {
          uVar12 = uVar11;
        }
        pAVar15 = (AAudioVolume *)(ulonglong)uVar12;
      }
LAB_1476560ff:
      TStack_320._padding_ = CONCAT44((int)local_3a0,uVar17);
      TStack_320.CurrentBitIndex = (int)pAVar15;
      TStack_2f0.UnvisitedBitMask = 0xffffffff;
      TStack_2f0._28_4_ = local_e4;
      TStack_320.BaseBitIndex = TStack_2f0.BaseBitIndex;
      TStack_320._28_4_ = local_e4;
      TStack_320.UnvisitedBitMask = 0xffffffff;
      local_328 = pTVar4;
      TStack_320.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      local_2f8 = pTVar4;
      TStack_2f0._padding_ = TStack_320._padding_;
      TStack_2f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      TStack_2f0.CurrentBitIndex = TStack_320.CurrentBitIndex;
      if (TStack_320.CurrentBitIndex < *(int *)&(pFVar27->ActivatedReverbs).field_0x28) {
        do {
          pFVar19 = (FName *)((longlong)(int)pAVar15 * 0x38 + *(longlong *)local_328);
          if (pFVar19[2] != (FName)0x0) {
            ::FName::ToString(pFVar19,&local_148);
            local_298 = *(FName *)((longlong)pFVar19[2] + 0x18);
            ::FName::ToString(&local_298,&local_208);
            ::FString::PrintfImpl(&local_338,L"    %s (Priority: %g Tag: \'%s\')");
            if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
            }
            local_3b0.Data.AllocatorInstance.Data = local_338.Data.AllocatorInstance.Data;
            local_3b0.Data.ArrayNum = local_338.Data.ArrayNum;
            local_3b0.Data.ArrayMax = local_338.Data.ArrayMax;
            local_338.Data.ArrayNum = 0;
            local_338.Data.ArrayMax = 0;
            local_338.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_208.Data.AllocatorInstance.Data);
            }
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
            }
            local_378[0] = (int)(float)pFVar19[5].ComparisonIndex.Value;
            local_1b8 = local_378;
            local_1b0 = &local_3b0;
            TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_&&,FString_const_&>_>
                      ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                        *)local_b8,&local_1d8,(bool *)&local_1b8);
          }
          TStack_320.UnvisitedBitMask = TStack_320.UnvisitedBitMask & ~TStack_320._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_320);
          pAVar15 = (AAudioVolume *)(ulonglong)(uint)TStack_320.CurrentBitIndex;
        } while (TStack_320.CurrentBitIndex < (TStack_320.Array)->NumBits);
      }
      uVar11 = uVar22;
      TStack_320.BaseBitIndex = uVar22;
      if (local_90 != 0) {
        puVar23 = (uint *)(local_b8 + 0x10);
        if (local_98 != (uint *)0x0) {
          puVar23 = local_98;
        }
        uVar17 = *puVar23;
        pAVar15 = pAVar20;
        uVar11 = uVar21;
        TStack_320.BaseBitIndex = uVar18;
        while (uVar17 == 0) {
          iVar16 = (int)pAVar20;
          TStack_320.BaseBitIndex = (int)pAVar15 + 0x20;
          pAVar15 = (AAudioVolume *)(ulonglong)(uint)TStack_320.BaseBitIndex;
          uVar11 = iVar16 + 1;
          pAVar20 = (AAudioVolume *)(ulonglong)uVar11;
          if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11) {
            pAVar20 = (AAudioVolume *)(ulonglong)local_90;
            goto LAB_147656310;
          }
          uVar17 = (puVar23 + 1)[iVar16];
        }
        local_398 = (ulonglong)(-uVar17 & uVar17);
        uVar2 = local_398 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        uVar18 = (TStack_320.BaseBitIndex - 1U) + (int)lVar28;
        pAVar20 = (AAudioVolume *)(ulonglong)uVar18;
        if ((int)local_90 < (int)uVar18) {
          pAVar20 = (AAudioVolume *)(ulonglong)local_90;
        }
      }
LAB_147656310:
      local_328 = (TMap<FName,FActivatedReverb,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>_>
                   *)local_b8;
      TStack_320._padding_ = CONCAT44((int)local_398,uVar11);
      TStack_320.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
      TStack_320.CurrentBitIndex = (int)pAVar20;
      TStack_320.UnvisitedBitMask = 0xffffffff;
      TStack_320._28_4_ = local_c4;
      TStack_2f0._padding_ = TStack_320._padding_;
      TStack_2f0.BaseBitIndex = TStack_320.BaseBitIndex;
      TStack_2f0._28_4_ = local_c4;
      TStack_2f0.UnvisitedBitMask = 0xffffffff;
      TStack_2f0.CurrentBitIndex = TStack_320.CurrentBitIndex;
      local_2f8 = local_328;
      TStack_2f0.Array = TStack_320.Array;
      if (TStack_320.CurrentBitIndex < (int)local_90) {
        do {
          pUVar13 = GetStatsFont();
          lVar28 = (longlong)(int)pAVar20 * 0x20;
          if (*(int *)(lVar28 + 0x10 + *(longlong *)local_2f8) == 0) {
            local_1f8 = L"";
LAB_1476563b6:
            sVar14 = wcslen(local_1f8);
            uVar18 = (uint)sVar14;
          }
          else {
            local_1f8 = *(wchar_t **)(lVar28 + 8 + *(longlong *)local_2f8);
            uVar18 = uVar22;
            if (local_1f8 != (wchar_t *)0x0) goto LAB_1476563b6;
          }
          local_138._12_4_ = uStack_1ec;
          local_138.Size = uVar18;
          local_138.DataPtr = local_1f8;
          uStack_1f0 = uVar18;
          FCanvas::DrawShadowedString
                    (local_390,dVar31,(double)iVar29,&local_138,pUVar13,
                     (FLinearColor *)&local_388._s_0,&FLinearColor::Black);
          iVar29 = iVar29 + iVar10;
          TStack_2f0.UnvisitedBitMask = TStack_2f0.UnvisitedBitMask & ~TStack_2f0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2f0);
          pAVar20 = (AAudioVolume *)(ulonglong)(uint)TStack_2f0.CurrentBitIndex;
        } while (TStack_2f0.CurrentBitIndex < (TStack_2f0.Array)->NumBits);
      }
      local_70 = 0;
      if (local_78 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_78);
      }
      TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_b8);
      goto LAB_147656459;
    }
    uVar18 = *(uint *)&(pFVar27->ActivatedReverbs).field_0x28;
    uVar11 = uVar22;
    if (uVar18 != 0) {
      puVar23 = *(uint **)&(pFVar27->ActivatedReverbs).field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puVar1;
      }
      uVar11 = *puVar23;
      pAVar15 = pAVar20;
      while (uVar11 == 0) {
        iVar16 = (int)pAVar20;
        uVar22 = (int)pAVar15 + 0x20;
        pAVar15 = (AAudioVolume *)(ulonglong)uVar22;
        uVar17 = iVar16 + 1;
        pAVar20 = (AAudioVolume *)(ulonglong)uVar17;
        uVar11 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
        goto LAB_147655e7c;
        uVar11 = puVar23[(longlong)iVar16 + 1];
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar28 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      uVar11 = (int)lVar28 + -1 + uVar22;
      if ((int)uVar18 < (int)uVar11) {
        uVar11 = uVar18;
      }
    }
LAB_147655e7c:
    pFVar19 = (FName *)((longlong)(int)uVar11 * 0x38 + *(longlong *)pTVar4);
    if (pFVar19[2] == (FName)0x0) goto LAB_147656459;
    ::FName::ToString(pFVar19,&local_178);
    local_2a0 = *(FName *)((longlong)pFVar19[2] + 0x18);
    ::FName::ToString(&local_2a0,&local_228);
    ::FString::PrintfImpl(&local_348,L"  Activated Reverb Effect: %s (Priority: %g Tag: \'%s\')");
    if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
    }
    local_3b0.Data.AllocatorInstance.Data = local_348.Data.AllocatorInstance.Data;
    local_3b0.Data.ArrayNum = local_348.Data.ArrayNum;
    local_3b0.Data.ArrayMax = local_348.Data.ArrayMax;
    local_348.Data.ArrayNum = 0;
    local_348.Data.ArrayMax = 0;
    local_348.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    pUVar13 = GetStatsFont();
    if (local_3b0.Data.ArrayNum == 0) {
      local_218 = (FScriptContainerElement *)0x15060d16c;
LAB_147655f74:
      sVar14 = wcslen((wchar_t *)local_218);
      uVar21 = (uint)sVar14;
    }
    else {
      local_218 = local_3b0.Data.AllocatorInstance.Data;
      if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_147655f74;
    }
    local_168._12_4_ = uStack_20c;
    local_168.Size = uVar21;
    pTVar24 = &local_168;
    local_168.DataPtr = (wchar_t *)local_218;
    uStack_210 = uVar21;
  }
  FCanvas::DrawShadowedString
            (local_390,dVar31,(double)iVar29,pTVar24,pUVar13,(FLinearColor *)&local_388._s_0,
             &FLinearColor::Black);
  iVar29 = iVar29 + iVar10;
LAB_147656459:
  if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
  }
  return iVar10 + iVar29;
}

// RenderStatSounds @ 1476565b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
Audio::FAudioDebugger::RenderStatSounds
          (UWorld *param_1,FViewport *param_2,FCanvas *param_3,int param_4,int param_5)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [12];
  float fVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  int iVar8;
  UFont *pUVar9;
  FAudioStats *pFVar10;
  FAudioDeviceManager *this;
  size_t sVar11;
  FString *pFVar12;
  FColor_u_0 *pFVar13;
  wchar_t *pwVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  TVector<double>_u_0 *pTVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  TTransform<double> *this_00;
  uint uVar23;
  longlong lVar24;
  int iVar25;
  FScriptContainerElement *pFVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  double dVar53;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 local_837;
  FIdentityFunctor local_836;
  FIdentityFunctor local_835;
  FIdentityFunctor local_834;
  FIdentityFunctor local_833;
  FIdentityFunctor local_832;
  FIdentityFunctor local_831;
  FIdentityFunctor local_830 [8];
  FString local_828;
  int local_818;
  FColor_u_0 local_814;
  FColor_u_0 local_810;
  FColor_u_0 local_80c;
  FColor_u_0 local_808;
  FColor_u_0 local_804;
  FColor_u_0 local_800;
  FColor_u_0 local_7fc;
  FColor_u_0 local_7f8;
  FColor_u_0 local_7f4;
  FColor_u_0 local_7f0;
  FColor_u_0 local_7ec;
  FColor_u_0 local_7e8;
  FColor_u_0 local_7e4;
  FColor_u_0 local_7e0;
  FColor_u_0 local_7dc;
  FColor_u_0 local_7d8;
  int local_7d4;
  uint local_7d0;
  FAudioDevice *local_7c8;
  FString local_7c0;
  FString local_7b0;
  FString local_7a0;
  FString local_790;
  FString local_780;
  FString local_770;
  FString local_760;
  longlong local_750;
  FAudioStats *local_748;
  TVector<double>_u_0 local_740;
  FLinearColor_u_0 local_728;
  FLinearColor_u_0 local_718;
  FLinearColor_u_0 local_708;
  FLinearColor_u_0 local_6f8;
  FLinearColor_u_0 local_6e8;
  FLinearColor_u_0 local_6d8;
  FLinearColor_u_0 local_6c8;
  FLinearColor_u_0 local_6b8;
  FLinearColor_u_0 local_6a8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_698;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_688;
  FString local_668;
  FScriptContainerElement *local_658;
  int iStack_650;
  undefined4 uStack_64c;
  FString local_648;
  FScriptContainerElement *local_638;
  int iStack_630;
  undefined4 uStack_62c;
  FString local_628;
  FScriptContainerElement *local_618;
  int iStack_610;
  undefined4 uStack_60c;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FScriptContainerElement *local_5d8;
  int iStack_5d0;
  undefined4 uStack_5cc;
  FString local_5c8;
  FScriptContainerElement *local_5b8;
  int iStack_5b0;
  undefined4 uStack_5ac;
  FString local_5a8;
  FScriptContainerElement *local_598;
  int iStack_590;
  undefined4 uStack_58c;
  FString local_588;
  FString local_578;
  FString local_568;
  FScriptContainerElement *local_558;
  int iStack_550;
  undefined4 uStack_54c;
  __m128d *local_548;
  undefined1 auStack_540 [16];
  uint uStack_530;
  uint uStack_52c;
  int local_528;
  undefined4 uStack_524;
  FScriptContainerElement *local_518;
  int iStack_510;
  undefined4 uStack_50c;
  FString local_508;
  wchar_t *local_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  FString local_4e8;
  FString local_4d8;
  TVector<double>_u_0 local_4c8;
  undefined1 local_4a8 [16];
  TBitArray<FDefaultBitArrayAllocator> *pTStack_498;
  ulonglong uStack_490;
  undefined8 uStack_488;
  FString local_478;
  TStringView<wchar_t> local_468;
  FString local_458;
  FString local_448;
  TStringView<wchar_t> local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  TStringView<wchar_t> local_3f8;
  TStringView<wchar_t> local_3e8;
  TStringView<wchar_t> local_3d8;
  TStringView<wchar_t> local_3c8;
  TStringView<wchar_t> local_3b8;
  TVector<double>_u_0 local_3a8;
  TVector<double>_u_0 local_390;
  TVector<double>_u_0 local_378;
  TVector<double>_u_0 local_360;
  TVector<double>_u_0 local_348;
  TVector<double>_u_0 local_330;
  TVector<double>_u_0 local_318;
  TVector<double>_u_0 local_300;
  TVector<double>_u_0 local_2e8;
  TVector<double>_u_0 local_2d0;
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 local_2a0;
  TVector<double>_u_0 local_288;
  TStringView<wchar_t> local_268;
  TStringView<wchar_t> local_258;
  TQuat<double> local_248;
  TQuat<double> local_228;
  TQuat<double> local_208;
  TQuat<double> local_1e8;
  TQuat<double> local_1c8;
  TQuat<double> local_1a8;
  TVector<double>_u_0 local_188;
  TVector<double> local_170;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined1 local_140 [16];
  undefined8 local_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined1 local_110 [16];
  double local_100;
  undefined8 local_e8;
  
  local_7c8 = (FAudioDevice *)0x0;
  bVar7 = DebugShouldRenderStat
                    (param_1,param_3,bDebugSoundsForAllViewsEnabled,DebugStatNames::Sounds,
                     &local_7c8);
  if (!bVar7) {
    return param_5;
  }
  pUVar9 = GetStatsFont();
  fVar27 = UFont::GetMaxCharHeight(pUVar9);
  iVar20 = (int)(fVar27 + __real_40000000);
  local_818 = iVar20;
  pFVar10 = TMapBase<unsigned_int,Audio::FAudioStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>_>
            ::FindOrAddImpl<unsigned_int_const_&>
                      ((TMapBase<unsigned_int,Audio::FAudioStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>_>
                        *)&AudioDeviceStats,local_7c8->DeviceID,&local_7c8->DeviceID);
  iVar25 = 0;
  pwVar14 = L"";
  if (AudioDebugSoundSortCVarCVar.Data.ArrayNum != 0) {
    pwVar14 = (wchar_t *)AudioDebugSoundSortCVarCVar.Data.AllocatorInstance;
  }
  local_748 = pFVar10;
  iVar8 = FGenericPlatformStricmp::Stricmp(pwVar14,L"distance");
  if (iVar8 == 0) {
    pFVar10->DisplaySort = Distance;
  }
  else {
    pwVar14 = L"";
    if (AudioDebugSoundSortCVarCVar.Data.ArrayNum != 0) {
      pwVar14 = (wchar_t *)AudioDebugSoundSortCVarCVar.Data.AllocatorInstance;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp(pwVar14,L"class");
    if (iVar8 == 0) {
      pFVar10->DisplaySort = Class;
    }
    else {
      pwVar14 = L"";
      if (AudioDebugSoundSortCVarCVar.Data.ArrayNum != 0) {
        pwVar14 = (wchar_t *)AudioDebugSoundSortCVarCVar.Data.AllocatorInstance;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp(pwVar14,L"name");
      if (iVar8 == 0) {
        pFVar10->DisplaySort = Name;
      }
      else {
        pwVar14 = L"";
        if (AudioDebugSoundSortCVarCVar.Data.ArrayNum != 0) {
          pwVar14 = (wchar_t *)AudioDebugSoundSortCVarCVar.Data.AllocatorInstance;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp(pwVar14,L"time");
        if (iVar8 == 0) {
          pFVar10->DisplaySort = PlaybackTime;
        }
        else {
          pwVar14 = L"";
          if (AudioDebugSoundSortCVarCVar.Data.ArrayNum != 0) {
            pwVar14 = (wchar_t *)AudioDebugSoundSortCVarCVar.Data.AllocatorInstance;
          }
          iVar8 = FGenericPlatformStricmp::Stricmp(pwVar14,L"priority");
          if (iVar8 == 0) {
            pFVar10->DisplaySort = Priority;
          }
          else {
            pwVar14 = L"";
            if (AudioDebugSoundSortCVarCVar.Data.ArrayNum != 0) {
              pwVar14 = (wchar_t *)AudioDebugSoundSortCVarCVar.Data.AllocatorInstance;
            }
            iVar8 = FGenericPlatformStricmp::Stricmp(pwVar14,L"volume");
            if (iVar8 == 0) {
              pFVar10->DisplaySort = Volume;
            }
            else {
              pwVar14 = L"";
              if (AudioDebugSoundSortCVarCVar.Data.ArrayNum != 0) {
                pwVar14 = (wchar_t *)AudioDebugSoundSortCVarCVar.Data.AllocatorInstance;
              }
              iVar8 = FGenericPlatformStricmp::Stricmp(pwVar14,L"waves");
              if (iVar8 == 0) {
                pFVar10->DisplaySort = Waves;
              }
            }
          }
        }
      }
    }
  }
  local_7c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7c0.Data.ArrayNum = 0;
  local_7c0.Data.ArrayMax = 0;
  switch(pFVar10->DisplaySort) {
  case Class:
    AlgoImpl::
    IntroSortInternal<Audio::FAudioStats::FStatSoundInfo,int,FIdentityFunctor,TDereferenceWrapper<Audio::FAudioStats::FStatSoundInfo,_Audio::FAudioDebugger::RenderStatSounds_::__l8::<lambda_1>_>_>
              ((FStatSoundInfo *)(pFVar10->StatSoundInfos).AllocatorInstance.Data,
               (pFVar10->StatSoundInfos).ArrayNum,local_836,(<lambda_1> *)&local_836);
    pwVar14 = L"Class";
    break;
  case Distance:
    AlgoImpl::
    IntroSortInternal<Audio::FAudioStats::FStatSoundInfo,int,FIdentityFunctor,TDereferenceWrapper<Audio::FAudioStats::FStatSoundInfo,_Audio::FAudioDebugger::RenderStatSounds_::__l9::<lambda_2>_>_>
              ((FStatSoundInfo *)(pFVar10->StatSoundInfos).AllocatorInstance.Data,
               (pFVar10->StatSoundInfos).ArrayNum,local_835,(<lambda_2> *)&local_835);
    pwVar14 = L"Distance";
    break;
  default:
    AlgoImpl::
    IntroSortInternal<Audio::FAudioStats::FStatSoundInfo,int,FIdentityFunctor,TDereferenceWrapper<Audio::FAudioStats::FStatSoundInfo,_Audio::FAudioDebugger::RenderStatSounds_::__l14::<lambda_7>_>_>
              ((FStatSoundInfo *)(pFVar10->StatSoundInfos).AllocatorInstance.Data,
               (pFVar10->StatSoundInfos).ArrayNum,local_830[0],(<lambda_7> *)local_830);
    pwVar14 = L"Name";
    break;
  case PlaybackTime:
    AlgoImpl::
    IntroSortInternal<Audio::FAudioStats::FStatSoundInfo,int,FIdentityFunctor,TDereferenceWrapper<Audio::FAudioStats::FStatSoundInfo,_Audio::FAudioDebugger::RenderStatSounds_::__l10::<lambda_3>_>_>
              ((FStatSoundInfo *)(pFVar10->StatSoundInfos).AllocatorInstance.Data,
               (pFVar10->StatSoundInfos).ArrayNum,local_834,(<lambda_3> *)&local_834);
    pwVar14 = L"Time";
    break;
  case Priority:
    AlgoImpl::
    IntroSortInternal<Audio::FAudioStats::FStatSoundInfo,int,FIdentityFunctor,TDereferenceWrapper<Audio::FAudioStats::FStatSoundInfo,_Audio::FAudioDebugger::RenderStatSounds_::__l11::<lambda_4>_>_>
              ((FStatSoundInfo *)(pFVar10->StatSoundInfos).AllocatorInstance.Data,
               (pFVar10->StatSoundInfos).ArrayNum,local_833,(<lambda_4> *)&local_833);
    pwVar14 = L"Priority";
    break;
  case Waves:
    AlgoImpl::
    IntroSortInternal<Audio::FAudioStats::FStatSoundInfo,int,FIdentityFunctor,TDereferenceWrapper<Audio::FAudioStats::FStatSoundInfo,_Audio::FAudioDebugger::RenderStatSounds_::__l12::<lambda_5>_>_>
              ((FStatSoundInfo *)(pFVar10->StatSoundInfos).AllocatorInstance.Data,
               (pFVar10->StatSoundInfos).ArrayNum,local_832,(<lambda_5> *)&local_832);
    pwVar14 = L"Waves";
    break;
  case Volume:
    AlgoImpl::
    IntroSortInternal<Audio::FAudioStats::FStatSoundInfo,int,FIdentityFunctor,TDereferenceWrapper<Audio::FAudioStats::FStatSoundInfo,_Audio::FAudioDebugger::RenderStatSounds_::__l13::<lambda_6>_>_>
              ((FStatSoundInfo *)(pFVar10->StatSoundInfos).AllocatorInstance.Data,
               (pFVar10->StatSoundInfos).ArrayNum,local_831,(<lambda_6> *)&local_831);
    pwVar14 = L"Volume";
  }
  ::FString::operator=(&local_7c0,pwVar14);
  fVar5 = __real_3b808081;
  local_728._s_0.R = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.R];
  local_728._s_0.G = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.G];
  local_728._s_0.B = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.B];
  local_728._s_0.A = (float)HeaderColor.field0_0x0._3_1_ * __real_3b808081;
  pUVar9 = GetStatsFont();
  local_4f8 = L"Active Sounds:";
  dVar50 = (double)param_4;
  uStack_4f0 = 0xe;
  local_268._12_4_ = uStack_4ec;
  local_268.Size = 0xe;
  local_268.DataPtr = L"Active Sounds:";
  FCanvas::DrawShadowedString
            (param_3,dVar50,(double)param_5,&local_268,pUVar9,(FLinearColor *)&local_728._s_0,
             &FLinearColor::Black);
  this = UEngine::GetAudioDeviceManager(GEngine);
  FAudioDeviceManager::IsVisualizeDebug3dEnabled(this);
  ::FString::PrintfImpl(&local_568,L" Sorting By: %s, 3D Visualization: %s");
  fVar27 = __real_3f800000;
  local_718._s_0.R = FLinearColor::sRGBToLinearTable[0x80];
  local_718._s_0.G = FLinearColor::sRGBToLinearTable[0xff];
  local_718._s_0.B = FLinearColor::sRGBToLinearTable[0x80];
  local_718._s_0.A = 1.0;
  pUVar9 = GetStatsFont();
  if (local_568.Data.ArrayNum == 0) {
    local_558 = (FScriptContainerElement *)0x15060d16c;
LAB_147656aba:
    sVar11 = wcslen((wchar_t *)local_558);
    iVar25 = (int)sVar11;
  }
  else {
    local_558 = local_568.Data.AllocatorInstance.Data;
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_147656aba;
  }
  local_258._12_4_ = uStack_54c;
  local_258.Size = iVar25;
  local_258.DataPtr = (wchar_t *)local_558;
  iStack_550 = iVar25;
  FCanvas::DrawShadowedString
            (param_3,dVar50,(double)(param_5 + iVar20),&local_258,pUVar9,
             (FLinearColor *)&local_718._s_0,&FLinearColor::Black);
  iVar25 = param_5 + iVar20 + iVar20;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    NameHeaderPad = (int)((float)FieldLength * __real_3fa00000);
    _Init_thread_footer(&::_TSS0);
  }
  if ((pFVar10->DisplaySort == Name) || (pFVar10->DisplaySort == Distance)) {
    pFVar12 = ::FString::FString(&local_448,L"Distance");
    pFVar12 = ::FString::RightPad(pFVar12,&local_458,NameHeaderPad);
    ::FString::Left(pFVar12,&local_4d8,NameHeaderPad);
    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.Data.AllocatorInstance.Data);
    }
    if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_448.Data.AllocatorInstance.Data);
    }
    local_6f8._s_0.R =
         FLinearColor::sRGBToLinearTable[(uint)FColor::White.field0_0x0 >> 0x10 & 0xff];
    local_6f8._s_0.G = FLinearColor::sRGBToLinearTable[(uint)FColor::White.field0_0x0 >> 8 & 0xff];
    local_6f8._s_0.B = FLinearColor::sRGBToLinearTable[(uint)FColor::White.field0_0x0 & 0xff];
    local_6f8._s_0.A = (float)((uint)FColor::White.field0_0x0 >> 0x18) * fVar5;
    pUVar9 = GetStatsFont();
    ::FString::PrintfImpl(&local_648,L"Index %s Name");
    if (local_648.Data.ArrayNum == 0) {
      local_658 = (FScriptContainerElement *)0x15060d16c;
LAB_147656deb:
      sVar11 = wcslen((wchar_t *)local_658);
      iStack_650 = (int)sVar11;
    }
    else {
      iStack_650 = 0;
      local_658 = local_648.Data.AllocatorInstance.Data;
      if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_147656deb;
    }
    local_438._12_4_ = uStack_64c;
    local_438.Size = iStack_650;
    local_438.DataPtr = (wchar_t *)local_658;
    FCanvas::DrawShadowedString
              (param_3,dVar50,(double)iVar25,&local_438,pUVar9,(FLinearColor *)&local_6f8._s_0,
               &FLinearColor::Black);
    local_668.Data.AllocatorInstance.Data = local_648.Data.AllocatorInstance.Data;
  }
  else {
    pFVar12 = ::FString::RightPad(&local_7c0,&local_478,FieldLength);
    ::FString::Left(pFVar12,&local_4e8,FieldLength);
    if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Data.AllocatorInstance.Data);
    }
    local_708._s_0.R =
         FLinearColor::sRGBToLinearTable[(uint)FColor::White.field0_0x0 >> 0x10 & 0xff];
    local_708._s_0.G = FLinearColor::sRGBToLinearTable[(uint)FColor::White.field0_0x0 >> 8 & 0xff];
    local_708._s_0.B = FLinearColor::sRGBToLinearTable[(uint)FColor::White.field0_0x0 & 0xff];
    local_708._s_0.A = (float)((uint)FColor::White.field0_0x0 >> 0x18) * fVar5;
    pUVar9 = GetStatsFont();
    ::FString::PrintfImpl(&local_668,L"Index %s Name");
    if (local_668.Data.ArrayNum == 0) {
      local_518 = (FScriptContainerElement *)0x15060d16c;
LAB_147656c5a:
      sVar11 = wcslen((wchar_t *)local_518);
      iStack_510 = (int)sVar11;
    }
    else {
      iStack_510 = 0;
      local_518 = local_668.Data.AllocatorInstance.Data;
      if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_147656c5a;
    }
    local_468._12_4_ = uStack_50c;
    local_468.Size = iStack_510;
    local_468.DataPtr = (wchar_t *)local_518;
    FCanvas::DrawShadowedString
              (param_3,dVar50,(double)iVar25,&local_468,pUVar9,(FLinearColor *)&local_708._s_0,
               &FLinearColor::Black);
    local_4d8.Data.AllocatorInstance.Data = local_4e8.Data.AllocatorInstance.Data;
  }
  if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_668.Data.AllocatorInstance.Data);
  }
  if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
  }
  local_7d4 = 0;
  iVar25 = iVar25 + iVar20;
  GetStatSoundBodyColor();
  fVar46 = __real_7f7fffff;
  fVar47 = __real_322bcc77;
  local_7d0 = 0;
  if (0 < (pFVar10->StatSoundInfos).ArrayNum) {
    local_750 = 0;
    uVar22 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    do {
      lVar24 = local_750;
      uVar23 = local_7d0;
      uVar21 = 0;
      if ((int)local_7d0 < (pFVar10->StatSoundInfos).ArrayNum) {
        uVar21 = ~local_7d0 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar1 = (code *)swi(3);
        iVar20 = (*pcVar1)();
        return iVar20;
      }
      pFVar26 = (pFVar10->StatSoundInfos).AllocatorInstance.Data + lVar24;
      iVar8 = *(int *)(pFVar26 + 0xa8);
      lVar24 = (longlong)iVar8;
      if ((iVar8 == 0) ||
         (local_7d4 = local_7d4 + iVar8, AudioDebugSoundMaxNumDisplayedCVar <= (int)uVar23))
      goto LAB_147657554;
      bVar7 = false;
      pFVar16 = pFVar26 + 0x10;
      if (AudioDebugSoundShowPathCVar == 0) {
        pFVar16 = pFVar26;
      }
      ::FString::FString(&local_5e8,(FString *)pFVar16);
      local_828.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_828.Data.ArrayNum = 0;
      local_828.Data.ArrayMax = 0;
      switch(pFVar10->DisplaySort) {
      case Class:
        pFVar12 = ::FName::ToString((FName *)(pFVar26 + 0x20),&local_428);
        if ((pFVar12->Data).ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
        ::FString::operator=(&local_828,pwVar14);
        if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_428.Data.AllocatorInstance.Data);
        }
        goto LAB_1476571e5;
      default:
        ::FString::PrintfImpl(&local_760,L"%08.2f");
        if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_828.Data.AllocatorInstance.Data);
        }
        local_828.Data.AllocatorInstance.Data = local_760.Data.AllocatorInstance.Data;
        local_828.Data.ArrayNum = local_760.Data.ArrayNum;
        local_828.Data.ArrayMax = local_760.Data.ArrayMax;
        local_760.Data.ArrayNum = 0;
        local_760.Data.ArrayMax = 0;
        local_760.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        break;
      case PlaybackTime:
        if (fVar47 < (float)((uint)(*(float *)(pFVar26 + 0x2c) - *(float *)&pFVar26[0x30].field_0x0)
                            & uVar22)) {
          ::FString::PrintfImpl(&local_7a0,L"%08.2f (%08.2f Non-Virt)");
          if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_828.Data.AllocatorInstance.Data);
          }
          local_828.Data.AllocatorInstance.Data = local_7a0.Data.AllocatorInstance.Data;
          local_828.Data.ArrayNum = local_7a0.Data.ArrayNum;
          local_828.Data.ArrayMax = local_7a0.Data.ArrayMax;
          local_7a0.Data.ArrayNum = 0;
          local_7a0.Data.ArrayMax = 0;
          local_7a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        else {
          ::FString::PrintfImpl(&local_7b0,L"%08.2f");
          if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_828.Data.AllocatorInstance.Data);
          }
          local_828.Data.AllocatorInstance.Data = local_7b0.Data.AllocatorInstance.Data;
          local_828.Data.ArrayNum = local_7b0.Data.ArrayNum;
          local_828.Data.ArrayMax = local_7b0.Data.ArrayMax;
          local_7b0.Data.ArrayNum = 0;
          local_7b0.Data.ArrayMax = 0;
          local_7b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        break;
      case Priority:
        if (fVar47 < (float)((uint)(*(float *)(pFVar26 + 0x34) - fVar46) & uVar22)) {
          ::FString::PrintfImpl(&local_790,L"%06.2f");
          if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_828.Data.AllocatorInstance.Data);
          }
          local_828.Data.AllocatorInstance.Data = local_790.Data.AllocatorInstance.Data;
          local_828.Data.ArrayNum = local_790.Data.ArrayNum;
          local_828.Data.ArrayMax = local_790.Data.ArrayMax;
          local_790.Data.ArrayNum = 0;
          local_790.Data.ArrayMax = 0;
          local_790.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          break;
        }
        ::FString::AppendChars(&local_828,L"Always  ",8);
        goto LAB_1476571e5;
      case Waves:
        ::FString::PrintfImpl(&local_770,L"%03u");
        if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_828.Data.AllocatorInstance.Data);
        }
        local_828.Data.AllocatorInstance.Data = local_770.Data.AllocatorInstance.Data;
        local_828.Data.ArrayNum = local_770.Data.ArrayNum;
        local_828.Data.ArrayMax = local_770.Data.ArrayMax;
        local_770.Data.ArrayNum = 0;
        local_770.Data.ArrayMax = 0;
        local_770.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        bVar7 = true;
        break;
      case Volume:
        fVar27 = *(float *)(pFVar26 + 0x38);
        if (*(float *)(pFVar26 + 0x38) <= fVar47) {
          fVar27 = fVar47;
        }
        logf(fVar27);
        ::FString::PrintfImpl(&local_780,L"%01.2f (%04.2f dB)");
        if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_828.Data.AllocatorInstance.Data);
        }
        local_828.Data.AllocatorInstance.Data = local_780.Data.AllocatorInstance.Data;
        local_828.Data.ArrayNum = local_780.Data.ArrayNum;
        local_828.Data.ArrayMax = local_780.Data.ArrayMax;
        local_780.Data.ArrayNum = 0;
        local_780.Data.ArrayMax = 0;
        local_780.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar22 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      }
LAB_1476571e5:
      pFVar12 = ::FString::RightPad(&local_828,&local_408,FieldLength + -4);
      ::FString::Left(pFVar12,&local_418,FieldLength + -4);
      ::FString::PrintfImpl(&local_5f8,L"  %03i    %s %s");
      if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.Data.AllocatorInstance.Data);
      }
      if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_408.Data.AllocatorInstance.Data);
      }
      local_6e8._s_0.R = FLinearColor::sRGBToLinearTable[local_814._s_0.R];
      local_6e8._s_0.G = FLinearColor::sRGBToLinearTable[local_814._s_0.G];
      local_6e8._s_0.B = FLinearColor::sRGBToLinearTable[local_814._s_0.B];
      local_6e8._s_0.A = (float)local_814._3_1_ * fVar5;
      pUVar9 = GetStatsFont();
      if (local_5f8.Data.ArrayNum == 0) {
        local_638 = (FScriptContainerElement *)0x15060d16c;
LAB_147657314:
        sVar11 = wcslen((wchar_t *)local_638);
        iVar20 = (int)sVar11;
      }
      else {
        iVar20 = 0;
        local_638 = local_5f8.Data.AllocatorInstance.Data;
        if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_147657314;
      }
      local_3f8._12_4_ = uStack_62c;
      local_3f8.Size = iVar20;
      local_3f8.DataPtr = (wchar_t *)local_638;
      iStack_630 = iVar20;
      FCanvas::DrawShadowedString
                (param_3,dVar50,(double)iVar25,&local_3f8,pUVar9,(FLinearColor *)&local_6e8._s_0,
                 &FLinearColor::Black);
      iVar25 = iVar25 + local_818;
      if ((bVar7) && (uVar21 = 0, uVar23 = local_7d0, 0 < iVar8)) {
        do {
          uVar23 = 0;
          if ((int)uVar21 < *(int *)(pFVar26 + 0xa8)) {
            uVar23 = ~uVar21 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar1 = (code *)swi(3);
            iVar20 = (*pcVar1)();
            return iVar20;
          }
          ::FString::PrintfImpl(&local_628,L"    %02i    %s");
          FVar17.Data = (FScriptContainerElement *)L"";
          if (local_628.Data.ArrayNum != 0) {
            FVar17.Data = local_628.Data.AllocatorInstance.Data;
          }
          ::FString::FString(&local_608,(wchar_t *)FVar17.Data);
          if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_628.Data.AllocatorInstance.Data);
          }
          local_6d8._s_0.R = FLinearColor::sRGBToLinearTable[0xcd];
          local_6d8._s_0.G = FLinearColor::sRGBToLinearTable[0xcd];
          local_6d8._s_0.B = FLinearColor::sRGBToLinearTable[0xcd];
          local_6d8._s_0.A = 1.0;
          pUVar9 = GetStatsFont();
          if (local_608.Data.ArrayNum == 0) {
            local_618 = (FScriptContainerElement *)0x15060d16c;
LAB_1476574a1:
            sVar11 = wcslen((wchar_t *)local_618);
            iVar20 = (int)sVar11;
          }
          else {
            iVar20 = 0;
            local_618 = local_608.Data.AllocatorInstance.Data;
            if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            goto LAB_1476574a1;
          }
          local_3e8._12_4_ = uStack_60c;
          local_3e8.Size = iVar20;
          local_3e8.DataPtr = (wchar_t *)local_618;
          iStack_610 = iVar20;
          FCanvas::DrawShadowedString
                    (param_3,dVar50,(double)iVar25,&local_3e8,pUVar9,(FLinearColor *)&local_6d8._s_0
                     ,&FLinearColor::Black);
          iVar25 = iVar25 + local_818;
          if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_608.Data.AllocatorInstance.Data);
          }
          uVar21 = uVar21 + 1;
          lVar24 = lVar24 + -1;
          pFVar10 = local_748;
          uVar23 = local_7d0;
        } while (lVar24 != 0);
      }
      iVar20 = local_818;
      if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
      }
      if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_828.Data.AllocatorInstance.Data);
      }
      if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
      }
LAB_147657554:
      local_7d0 = uVar23 + 1;
      local_750 = local_750 + 0x100;
      fVar27 = __real_3f800000;
    } while ((int)local_7d0 < (pFVar10->StatSoundInfos).ArrayNum);
  }
  local_6c8._s_0.R = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.R];
  local_6c8._s_0.G = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.G];
  local_6c8._s_0.B = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.B];
  local_6c8._s_0.A = (float)HeaderColor.field0_0x0._3_1_ * fVar5;
  pUVar9 = GetStatsFont();
  ::FString::PrintfImpl(&local_5c8,L"Audio Device ID: %u, Max Sounds Displayed: %i");
  if (local_5c8.Data.ArrayNum == 0) {
    local_5d8 = (FScriptContainerElement *)0x15060d16c;
LAB_147657653:
    sVar11 = wcslen((wchar_t *)local_5d8);
    iStack_5d0 = (int)sVar11;
  }
  else {
    iStack_5d0 = 0;
    local_5d8 = local_5c8.Data.AllocatorInstance.Data;
    if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_147657653;
  }
  local_3d8._12_4_ = uStack_5cc;
  local_3d8.Size = iStack_5d0;
  local_3d8.DataPtr = (wchar_t *)local_5d8;
  FCanvas::DrawShadowedString
            (param_3,dVar50,(double)iVar25,&local_3d8,pUVar9,(FLinearColor *)&local_6c8._s_0,
             &FLinearColor::Black);
  if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
  }
  local_6b8._s_0.R = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.R];
  local_6b8._s_0.G = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.G];
  local_6b8._s_0.B = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.B];
  local_6b8._s_0.A = (float)HeaderColor.field0_0x0._3_1_ * fVar5;
  pUVar9 = GetStatsFont();
  ::FString::PrintfImpl(&local_5a8,L"Total Sounds: %i, Sound Waves: %i");
  if (local_5a8.Data.ArrayNum == 0) {
    local_5b8 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    iStack_5b0 = 0;
    local_5b8 = local_5a8.Data.AllocatorInstance.Data;
    if (local_5a8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_147657775;
  }
  sVar11 = wcslen((wchar_t *)local_5b8);
  iStack_5b0 = (int)sVar11;
LAB_147657775:
  local_3c8._12_4_ = uStack_5ac;
  local_3c8.Size = iStack_5b0;
  local_3c8.DataPtr = (wchar_t *)local_5b8;
  FCanvas::DrawShadowedString
            (param_3,dVar50,(double)(iVar25 + iVar20),&local_3c8,pUVar9,
             (FLinearColor *)&local_6b8._s_0,&FLinearColor::Black);
  if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
  }
  iVar8 = local_818;
  iVar20 = iVar25 + iVar20 + iVar20;
  uVar22 = 0;
  if (0 < (pFVar10->ListenerTransforms).ArrayNum) {
    lVar24 = 0;
    do {
      uVar23 = 0;
      if ((int)uVar22 < (pFVar10->ListenerTransforms).ArrayNum) {
        uVar23 = ~uVar22 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar1 = (code *)swi(3);
        iVar20 = (*pcVar1)();
        return iVar20;
      }
      local_e8 = *(undefined8 *)
                  ((pFVar10->ListenerTransforms).AllocatorInstance.Data + lVar24 + 0x30);
      ::FString::PrintfImpl(&local_578,L"X=%3.3f Y=%3.3f Z=%3.3f");
      local_6a8._s_0.R = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.R];
      local_6a8._s_0.G = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.G];
      local_6a8._s_0.B = FLinearColor::sRGBToLinearTable[HeaderColor.field0_0x0._s_0.B];
      local_6a8._s_0.A = (float)HeaderColor.field0_0x0._3_1_ * fVar5;
      pUVar9 = GetStatsFont();
      ::FString::PrintfImpl(&local_588,L"Listener \'%d\' Position: %s");
      if (local_588.Data.ArrayNum == 0) {
        local_598 = (FScriptContainerElement *)0x15060d16c;
LAB_147657943:
        sVar11 = wcslen((wchar_t *)local_598);
        iVar25 = (int)sVar11;
      }
      else {
        iVar25 = 0;
        local_598 = local_588.Data.AllocatorInstance.Data;
        if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_147657943;
      }
      local_3b8._12_4_ = uStack_58c;
      local_3b8.Size = iVar25;
      local_3b8.DataPtr = (wchar_t *)local_598;
      iStack_590 = iVar25;
      FCanvas::DrawShadowedString
                (param_3,dVar50,(double)iVar20,&local_3b8,pUVar9,(FLinearColor *)&local_6a8._s_0,
                 &FLinearColor::Black);
      if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_588.Data.AllocatorInstance.Data);
      }
      iVar20 = iVar20 + iVar8;
      if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_578.Data.AllocatorInstance.Data);
      }
      uVar22 = uVar22 + 1;
      lVar24 = lVar24 + 0x60;
    } while ((int)uVar22 < (pFVar10->ListenerTransforms).ArrayNum);
  }
  auVar6 = ___xmm_00000000000000003ff0000000000000;
  dVar50 = __real_3f91df46a2529d39;
  fVar5 = __real_bf800000;
  pFVar26 = (pFVar10->StatSoundInfos).AllocatorInstance.Data;
  iVar25 = (pFVar10->StatSoundInfos).ArrayNum;
  iVar20 = iVar20 + local_818;
  this_00 = (TTransform<double> *)(pFVar26 + 0x40);
  pFVar16 = pFVar26 + (longlong)iVar25 * 0x100;
  fVar47 = __real_42c80000;
  fVar46 = __real_3c23d70a;
  do {
    if ((pFVar10->StatSoundInfos).ArrayNum != iVar25) {
      local_837 = 0;
      `TCheckedPointerIterator<Audio::FAudioStats::FStatSoundInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_837);
      fVar47 = __real_42c80000;
    }
    if (pFVar26 == pFVar16) {
      if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_568.Data.AllocatorInstance.Data);
      }
      if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
      }
      return iVar20;
    }
    if (((fVar47 < *(float *)(this_00[-1].Scale3D.XY.m128d_f64 + 1)) &&
        (0 < *(int *)(this_00[1].Rotation.XY.m128d_f64 + 1))) &&
       (0 < *(int *)(this_00[1].Rotation.ZW.m128d_f64 + 1) -
            *(int *)((longlong)this_00[1].Scale3D.XY.m128d_f64 + 4))) {
      pFVar18 = (FScriptContainerElement *)&this_00[-1].Translation.ZW;
      if (AudioDebugSoundShowPathCVar == 0) {
        pFVar18 = pFVar26;
      }
      local_698.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                (&local_698,*(wchar_t **)&pFVar18->field_0x0,*(int *)(pFVar18 + 8),0);
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_698.ArrayNum != 0) {
        FVar17.Data = local_698.AllocatorInstance.Data;
      }
      ::FString::FString(&local_508,(wchar_t *)FVar17.Data);
      local_288._s_0.X = (this_00->Translation).XY.m128d_f64[0];
      local_288._s_0.Y = (this_00->Translation).XY.m128d_f64[1];
      local_288._s_0.Z = (this_00->Translation).ZW.m128d_f64[0];
      DrawDebugString(param_1,(TVector<double> *)&local_288._s_0,&local_508,(AActor *)0x0,
                      (FColor *)&local_814._s_0,fVar46,false,fVar27);
      if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_508.Data.AllocatorInstance.Data);
      }
      local_688._padding_._4_4_ = 1;
      local_688.Array = (TBitArray<FDefaultBitArrayAllocator> *)&this_00[1].Translation;
      local_688._padding_._0_4_ = 0;
      local_688.UnvisitedBitMask = 0xffffffff;
      local_688.CurrentBitIndex = 0;
      local_688.BaseBitIndex = 0;
      if (*(int *)(this_00[1].Translation.ZW.m128d_f64 + 1) != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_688);
      }
      auVar4._4_4_ = local_688.CurrentBitIndex;
      auVar4._8_4_ = local_688.BaseBitIndex;
      auVar4._0_4_ = local_688.UnvisitedBitMask;
      auVar42._12_4_ = local_688._28_4_;
      auVar42._0_12_ = auVar4;
      uStack_490 = auVar4._0_8_;
      local_548 = &this_00[1].Rotation.ZW;
      local_4a8._12_4_ = local_688._padding_._4_4_;
      local_4a8._8_4_ = (undefined4)local_688._padding_;
      local_4a8._0_8_ = local_548;
      pTStack_498 = local_688.Array;
      uVar15 = uStack_490 >> 0x20;
      uStack_488 = auVar42._8_8_;
      unique0x10001ff3 = uStack_490;
      auStack_540._8_8_ = local_688.Array;
      auStack_540._0_4_ = (undefined4)local_688._padding_;
      auStack_540._4_4_ = local_688._padding_._4_4_;
      uVar22 = local_688.CurrentBitIndex;
      local_528 = local_688.BaseBitIndex;
      uStack_524 = local_688._28_4_;
      if ((int)uVar22 < (local_688.Array)->NumBits) {
        do {
          lVar24 = (longlong)(int)uVar15 * 0x38 + (longlong)local_548->m128d_f64[0];
          iVar8 = *(int *)((longlong)(int)uVar22 * 0x38 + (longlong)local_548->m128d_f64[0]);
          if (iVar8 == 0) {
            dVar2 = (this_00->Translation).XY.m128d_f64[0];
            dVar3 = (this_00->Translation).XY.m128d_f64[1];
            dVar29 = SUB168(*(undefined1 (*) [16])(this_00->Translation).ZW.m128d_f64,0);
            if (*(float *)(lVar24 + 0x20) <= 0.0) {
              local_7d8.Bits = 0xff9b9bff;
              pFVar13 = &local_7d8;
              pTVar19 = &local_2a0;
              local_2a0._s_0.X = dVar2;
              local_2a0._s_0.Y = dVar3;
              local_2a0._s_0.Z = dVar29;
            }
            else {
              local_7e4.Bits = 0xff9b9bff;
              local_2d0._s_0.X = dVar2;
              local_2d0._s_0.Y = dVar3;
              local_2d0._s_0.Z = dVar29;
              DrawDebugSphere(param_1,(TVector<double> *)&local_2d0._s_0,
                              (float)((double)*(float *)(lVar24 + 0x20) + *(double *)(lVar24 + 8)),
                              10,(FColor *)&local_7e4._s_0,false,fVar5,'\0',0.0);
              local_2b8._s_0.X = (this_00->Translation).XY.m128d_f64[0];
              local_2b8._s_0.Y = (this_00->Translation).XY.m128d_f64[1];
              pFVar13 = &local_7e0;
              pTVar19 = &local_2b8;
              local_7e0.Bits = 0xff3737ff;
              local_2b8._s_0.Z =
                   (double)SUB168(*(undefined1 (*) [16])(this_00->Translation).ZW.m128d_f64,0);
            }
            fVar27 = (float)*(double *)(lVar24 + 8);
LAB_14765849c:
            DrawDebugSphere(param_1,(TVector<double> *)&pTVar19->_s_0,fVar27,10,
                            (FColor *)&pFVar13->_s_0,false,fVar5,'\0',0.0);
          }
          else if (iVar8 == 1) {
            dVar2 = (this_00->Rotation).XY.m128d_f64[0];
            dVar3 = (this_00->Rotation).XY.m128d_f64[1];
            dVar29 = (this_00->Rotation).ZW.m128d_f64[0];
            dVar33 = (this_00->Rotation).ZW.m128d_f64[1];
            if (*(float *)(lVar24 + 0x20) <= 0.0) {
              local_2e8._s_0.X = (this_00->Translation).XY.m128d_f64[0];
              local_2e8._s_0.Y = (this_00->Translation).XY.m128d_f64[1];
              local_7e8.Bits = 0xff9b9bff;
              local_2e8._s_0.Z =
                   (double)SUB168(*(undefined1 (*) [16])(this_00->Translation).ZW.m128d_f64,0);
              local_1a8.X = dVar2;
              local_1a8.Y = dVar3;
              local_1a8.Z = dVar29;
              local_1a8.W = dVar33;
              DrawDebugCapsule(param_1,(TVector<double> *)&local_2e8._s_0,
                               (float)*(double *)(lVar24 + 8),(float)*(double *)(lVar24 + 0x10),
                               &local_1a8,(FColor *)&local_7e8._s_0,false,fVar5,'\0',0.0);
            }
            else {
              dVar37 = (double)*(float *)(lVar24 + 0x20);
              local_7f0.Bits = 0xff9b9bff;
              local_318._s_0.X = (this_00->Translation).XY.m128d_f64[0];
              local_318._s_0.Y = (this_00->Translation).XY.m128d_f64[1];
              local_318._s_0.Z = (this_00->Translation).ZW.m128d_f64[0];
              local_1e8.X = dVar2;
              local_1e8.Y = dVar3;
              local_1e8.Z = dVar29;
              local_1e8.W = dVar33;
              DrawDebugCapsule(param_1,(TVector<double> *)&local_318._s_0,
                               (float)(dVar37 + *(double *)(lVar24 + 8)),
                               (float)(dVar37 + *(double *)(lVar24 + 0x10)),&local_1e8,
                               (FColor *)&local_7f0._s_0,false,fVar5,'\0',0.0);
              local_1c8.X = (this_00->Rotation).XY.m128d_f64[0];
              local_1c8.Y = (this_00->Rotation).XY.m128d_f64[1];
              local_1c8.Z = (this_00->Rotation).ZW.m128d_f64[0];
              local_1c8.W = (this_00->Rotation).ZW.m128d_f64[1];
              local_300._s_0.X = (this_00->Translation).XY.m128d_f64[0];
              local_300._s_0.Y = (this_00->Translation).XY.m128d_f64[1];
              local_7ec.Bits = 0xff3737ff;
              local_300._s_0.Z =
                   (double)SUB168(*(undefined1 (*) [16])(this_00->Translation).ZW.m128d_f64,0);
              DrawDebugCapsule(param_1,(TVector<double> *)&local_300._s_0,
                               (float)*(double *)(lVar24 + 8),(float)*(double *)(lVar24 + 0x10),
                               &local_1c8,(FColor *)&local_7ec._s_0,false,fVar5,'\0',0.0);
            }
          }
          else if (iVar8 == 2) {
            dVar2 = (this_00->Rotation).XY.m128d_f64[0];
            dVar3 = (this_00->Rotation).XY.m128d_f64[1];
            dVar29 = (this_00->Rotation).ZW.m128d_f64[0];
            dVar33 = (this_00->Rotation).ZW.m128d_f64[1];
            if (*(float *)(lVar24 + 0x20) <= 0.0) {
              local_330._s_0.X = (this_00->Translation).XY.m128d_f64[0];
              local_330._s_0.Y = (this_00->Translation).XY.m128d_f64[1];
              local_7dc.Bits = 0xff9b9bff;
              local_330._s_0.Z =
                   (double)SUB168(*(undefined1 (*) [16])(this_00->Translation).ZW.m128d_f64,0);
              local_248.X = dVar2;
              local_248.Y = dVar3;
              local_248.Z = dVar29;
              local_248.W = dVar33;
              DrawDebugBox(param_1,(TVector<double> *)&local_330._s_0,
                           (TVector<double> *)(lVar24 + 8),&local_248,(FColor *)&local_7dc._s_0,
                           false,fVar5,'\0',0.0);
            }
            else {
              local_7f8.Bits = 0xff9b9bff;
              dVar37 = (double)*(float *)(lVar24 + 0x20);
              local_360._s_0.Z = (this_00->Translation).ZW.m128d_f64[0];
              local_4c8._s_0.X = *(double *)(lVar24 + 8) + dVar37;
              local_4c8._s_0.Y = *(double *)(lVar24 + 0x10) + dVar37;
              local_4c8._s_0.Z = dVar37 + *(double *)(lVar24 + 0x18);
              local_360._s_0.X = (this_00->Translation).XY.m128d_f64[0];
              local_360._s_0.Y = (this_00->Translation).XY.m128d_f64[1];
              local_228.X = dVar2;
              local_228.Y = dVar3;
              local_228.Z = dVar29;
              local_228.W = dVar33;
              DrawDebugBox(param_1,(TVector<double> *)&local_360._s_0,
                           (TVector<double> *)&local_4c8._s_0,&local_228,(FColor *)&local_7f8._s_0,
                           false,fVar5,'\0',0.0);
              local_208.X = (this_00->Rotation).XY.m128d_f64[0];
              local_208.Y = (this_00->Rotation).XY.m128d_f64[1];
              local_208.Z = (this_00->Rotation).ZW.m128d_f64[0];
              local_208.W = (this_00->Rotation).ZW.m128d_f64[1];
              local_348._s_0.X = (this_00->Translation).XY.m128d_f64[0];
              local_348._s_0.Y = (this_00->Translation).XY.m128d_f64[1];
              local_7f4.Bits = 0xff3737ff;
              local_348._s_0.Z =
                   (double)SUB168(*(undefined1 (*) [16])(this_00->Translation).ZW.m128d_f64,0);
              DrawDebugBox(param_1,(TVector<double> *)&local_348._s_0,
                           (TVector<double> *)(lVar24 + 8),&local_208,(FColor *)&local_7f4._s_0,
                           false,fVar5,'\0',0.0);
            }
          }
          else if (iVar8 == 3) {
            auVar42 = *(undefined1 (*) [16])(this_00->Rotation).ZW.m128d_f64;
            dVar33 = auVar42._0_8_;
            local_4a8 = *(undefined1 (*) [16])(this_00->Rotation).XY.m128d_f64;
            auVar39 = *(undefined1 (*) [16])(this_00->Rotation).XY.m128d_f64;
            local_128 = (this_00->Translation).XY.m128d_f64[0];
            dStack_120 = (this_00->Translation).XY.m128d_f64[1];
            dVar37 = auVar6._0_8_;
            dVar29 = (this_00->Rotation).ZW.m128d_f64[1];
            local_118 = (this_00->Translation).ZW.m128d_f64[0];
            dVar53 = auVar6._8_8_;
            auVar38 = blendpd(local_4a8,auVar42,2);
            auVar51._0_8_ = dVar53 * local_4a8._0_8_ - local_4a8._8_8_ * dVar37;
            auVar51._8_8_ = local_4a8._8_8_ * 0.0 - dVar33 * dVar53;
            auVar30 = blendpd(auVar6,ZEXT816(0),2);
            auVar34._0_8_ = auVar30._0_8_ * dVar33 - auVar38._0_8_ * 0.0;
            auVar34._8_8_ = auVar30._8_8_ * auVar42._8_8_ - auVar38._8_8_ * 0.0;
            local_148 = 0;
            auVar30 = blendpd(auVar51,auVar34,2);
            dVar2 = auVar51._8_8_ + auVar51._8_8_;
            dVar3 = auVar34._0_8_ + auVar34._0_8_;
            uVar45 = (undefined4)((ulonglong)dVar3 >> 0x20);
            auVar52._0_8_ = auVar30._0_8_ + auVar30._0_8_;
            auVar52._8_8_ = auVar30._8_8_ + auVar30._8_8_;
            auVar40._8_4_ = SUB84(dVar3,0);
            auVar40._0_8_ = dVar2;
            auVar40._12_4_ = uVar45;
            auVar38._8_4_ = SUB84(dVar3,0);
            auVar38._0_8_ = dVar2;
            auVar38._12_4_ = uVar45;
            auVar34 = blendpd(auVar38,auVar52,2);
            auVar41._0_8_ = auVar40._8_8_ * auVar39._0_8_ - auVar39._8_8_ * dVar2;
            auVar41._8_8_ = auVar52._0_8_ * auVar39._8_8_ - dVar33 * dVar3;
            auVar30._8_4_ = SUB84(auVar41._8_8_,0);
            auVar30._0_8_ = auVar41._0_8_;
            auVar30._12_4_ = (int)((ulonglong)auVar41._8_8_ >> 0x20);
            auVar38 = blendpd(auVar39,auVar42,2);
            auVar39._0_8_ = auVar34._0_8_ * dVar33 - auVar38._0_8_ * auVar52._0_8_;
            auVar39._8_8_ = auVar34._8_8_ * auVar42._8_8_ - auVar38._8_8_ * auVar52._8_8_;
            dVar2 = dVar2 * dVar29 + dVar37 + auVar30._8_8_;
            dVar3 = dVar3 * dVar29 + dVar53 + auVar39._0_8_;
            auVar42 = blendpd(auVar41,auVar39,2);
            local_100 = auVar52._0_8_ * dVar29 + 0.0 + auVar42._0_8_;
            dVar29 = (double)*(float *)(lVar24 + 0x24);
            local_110._8_4_ = SUB84(dVar3,0);
            local_110._0_8_ = dVar2;
            local_110._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
            local_740._s_0.Z = local_118 - local_100 * dVar29;
            fVar27 = *(float *)(lVar24 + 0x20);
            local_740._s_0.Y = dStack_120 - dVar3 * dVar29;
            local_158 = auVar6;
            local_740._s_0.X = local_128 - dVar2 * dVar29;
            if ((0.0 < fVar27) || (0.0 < *(double *)(lVar24 + 0x18))) {
              dVar28 = *(double *)(lVar24 + 0x10) * dVar50;
              local_80c.Bits = 0xff9b9bff;
              local_390._s_0.Z = 0.0;
              local_390._0_16_ = auVar6;
              fVar47 = (float)(*(double *)(lVar24 + 0x18) * dVar50 + dVar28);
              UE::Math::TTransform<double>::TransformVectorNoScale
                        (this_00,&local_170,(TVector<double> *)&local_390._s_0);
              DrawDebugCone(param_1,(TVector<double> *)&local_740._s_0,&local_170,
                            (float)((double)fVar27 + *(double *)(lVar24 + 8) + dVar29),fVar47,fVar47
                            ,10,(FColor *)&local_80c._s_0,false,fVar5,'\0',0.0);
              auVar42 = *(undefined1 (*) [16])(this_00->Rotation).ZW.m128d_f64;
              dVar29 = auVar42._0_8_;
              local_4a8 = *(undefined1 (*) [16])(this_00->Rotation).XY.m128d_f64;
              auVar39 = *(undefined1 (*) [16])(this_00->Rotation).XY.m128d_f64;
              dVar33 = (this_00->Rotation).ZW.m128d_f64[1];
              auVar34 = blendpd(local_4a8,auVar42,2);
              local_808.Bits = 0xff3737ff;
              auVar48._0_8_ = dVar53 * local_4a8._0_8_ - local_4a8._8_8_ * dVar37;
              auVar48._8_8_ = local_4a8._8_8_ * 0.0 - dVar29 * dVar53;
              auVar30 = blendpd(auVar6,ZEXT816(0),2);
              local_130 = 0;
              auVar31._0_8_ = auVar30._0_8_ * dVar29 - auVar34._0_8_ * 0.0;
              auVar31._8_8_ = auVar30._8_8_ * auVar42._8_8_ - auVar34._8_8_ * 0.0;
              auVar30 = blendpd(auVar48,auVar31,2);
              dVar2 = auVar48._8_8_ + auVar48._8_8_;
              dVar3 = auVar31._0_8_ + auVar31._0_8_;
              uVar45 = (undefined4)((ulonglong)dVar3 >> 0x20);
              auVar49._0_8_ = auVar30._0_8_ + auVar30._0_8_;
              auVar49._8_8_ = auVar30._8_8_ + auVar30._8_8_;
              auVar43._8_4_ = SUB84(dVar3,0);
              auVar43._0_8_ = dVar2;
              auVar43._12_4_ = uVar45;
              auVar35._8_4_ = SUB84(dVar3,0);
              auVar35._0_8_ = dVar2;
              auVar35._12_4_ = uVar45;
              auVar30 = blendpd(auVar35,auVar49,2);
              auVar44._0_8_ = auVar43._8_8_ * auVar39._0_8_ - auVar39._8_8_ * dVar2;
              auVar44._8_8_ = auVar49._0_8_ * auVar39._8_8_ - dVar29 * dVar3;
              auVar39 = blendpd(auVar39,auVar42,2);
              auVar36._0_8_ = auVar30._0_8_ * dVar29 - auVar39._0_8_ * auVar49._0_8_;
              auVar36._8_8_ = auVar30._8_8_ * auVar42._8_8_ - auVar39._8_8_ * auVar49._8_8_;
              auVar32._8_4_ = SUB84(auVar44._8_8_,0);
              auVar32._0_8_ = auVar44._0_8_;
              auVar32._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
              dVar3 = dVar3 * dVar33 + dVar53 + auVar36._0_8_;
              local_140 = auVar6;
              local_378._8_4_ = SUB84(dVar3,0);
              local_378._0_8_ = dVar2 * dVar33 + dVar37 + auVar32._8_8_;
              local_378._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
              pFVar13 = &local_808;
              pTVar19 = &local_378;
              dVar29 = (double)*(float *)(lVar24 + 0x24) + *(double *)(lVar24 + 8);
              auVar42 = blendpd(auVar44,auVar36,2);
              local_378._s_0.Z = auVar49._0_8_ * dVar33 + 0.0 + auVar42._0_8_;
            }
            else {
              dVar28 = *(double *)(lVar24 + 0x10) * dVar50;
              local_810.Bits = 0xff9b9bff;
              local_3a8._s_0.Z = 0.0;
              local_3a8._0_16_ = auVar6;
              UE::Math::TTransform<double>::TransformVectorNoScale
                        (this_00,(TVector<double> *)&local_188._s_0,
                         (TVector<double> *)&local_3a8._s_0);
              pFVar13 = &local_810;
              pTVar19 = &local_188;
              dVar29 = dVar29 + *(double *)(lVar24 + 8);
            }
            DrawDebugCone(param_1,(TVector<double> *)&local_740._s_0,
                          (TVector<double> *)&pTVar19->_s_0,(float)dVar29,(float)dVar28,
                          (float)dVar28,10,(FColor *)&pFVar13->_s_0,false,fVar5,'\0',0.0);
            fVar27 = *(float *)(lVar24 + 0x28);
            if (__real_38d1b717 < (float)((uint)fVar27 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
              pTVar19 = &local_740;
              if (0.0 < *(float *)(lVar24 + 0x2c)) {
                local_804.Bits = 0xff9b9bff;
                DrawDebugSphere(param_1,(TVector<double> *)&pTVar19->_s_0,
                                fVar27 + *(float *)(lVar24 + 0x2c),10,(FColor *)&local_804._s_0,
                                false,fVar5,'\0',0.0);
                fVar27 = *(float *)(lVar24 + 0x28);
                pFVar13 = &local_800;
                pTVar19 = &local_740;
                local_800.Bits = 0xff3737ff;
              }
              else {
                local_7fc.Bits = 0xff9b9bff;
                pFVar13 = &local_7fc;
              }
              goto LAB_14765849c;
            }
          }
          else {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDebug.cpp"
                               ,0x828,L"");
            if (bVar7) {
              pcVar1 = (code *)swi(3);
              iVar20 = (*pcVar1)();
              return iVar20;
            }
          }
          uStack_530 = uStack_530 & ~auStack_540._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_540);
          uVar15 = (ulonglong)uStack_52c;
          pFVar10 = local_748;
          fVar27 = __real_3f800000;
          uVar22 = uStack_52c;
          fVar46 = __real_3c23d70a;
        } while ((int)uStack_52c < *(int *)(auStack_540._8_8_ + 0x18));
      }
      fVar47 = __real_42c80000;
      if (local_698.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_698.AllocatorInstance.Data);
        fVar47 = __real_42c80000;
      }
    }
    pFVar26 = pFVar26 + 0x100;
    this_00 = (TTransform<double> *)&this_00[2].Scale3D;
  } while( true );
}

// RenderStatStreaming @ 147658650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
Audio::FAudioDebugger::RenderStatStreaming
          (UWorld *param_1,FViewport *param_2,FCanvas *param_3,int param_4,int param_5,
          TVector<double> *param_6,TRotator<double> *param_7)

{
  bool bVar1;
  FStreamingManagerCollection *this;
  IAudioStreamingManager *pIVar2;
  FAudioDevice *local_18 [2];
  
  local_18[0] = (FAudioDevice *)0x0;
  bVar1 = DebugShouldRenderStat
                    (param_1,param_3,bDebugSoundsForAllViewsEnabled,DebugStatNames::AudioStreaming,
                     local_18);
  if (bVar1) {
    this = IStreamingManager::Get();
    pIVar2 = FStreamingManagerCollection::GetAudioStreamingManager(this);
    param_5 = (**(code **)(*(longlong *)pIVar2 + 0xc0))
                        (pIVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return param_5;
}

// RenderStatWaves @ 147658720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
Audio::FAudioDebugger::RenderStatWaves
          (UWorld *param_1,FViewport *param_2,FCanvas *param_3,int param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UFont *pUVar4;
  FAudioStats *pFVar5;
  UAudioComponent *pUVar6;
  size_t sVar7;
  int iVar8;
  ulonglong uVar9;
  FColor *pFVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  TTuple<Audio::FAudioStats::FStatWaveInstanceInfo_const_*,Audio::FAudioStats::FStatSoundInfo_const_*>
  *pTVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6;
  FIdentityFunctor local_1b5;
  uint local_1b4;
  ForAnyElementType local_1b0;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  FColor_u_0 local_19c;
  int local_198;
  FAudioDevice *local_190;
  FLinearColor_u_0 local_188;
  FLinearColor_u_0 local_178;
  FName local_168;
  FString local_160;
  FString local_150;
  FScriptContainerElement *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FString local_128;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FString local_108;
  wchar_t *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  TStringView<wchar_t> local_e8;
  FString local_d8;
  FString local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8 [8];
  
  iVar3 = 0;
  local_1b4 = 0;
  local_190 = (FAudioDevice *)0x0;
  bVar2 = DebugShouldRenderStat
                    (param_1,param_3,bDebugWavesForAllViewsEnabled,DebugStatNames::SoundWaves,
                     &local_190);
  if (!bVar2) {
    return param_5;
  }
  pUVar4 = GetStatsFont();
  fVar20 = UFont::GetMaxCharHeight(pUVar4);
  local_198 = (int)(fVar20 + __real_40000000);
  pFVar5 = TMapBase<unsigned_int,Audio::FAudioStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>_>
           ::FindOrAddImpl<unsigned_int_const_&>
                     ((TMapBase<unsigned_int,Audio::FAudioStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>_>
                       *)&AudioDeviceStats,local_190->DeviceID,&local_190->DeviceID);
  pUVar4 = GetStatsFont();
  local_f8 = L"Active Sound Waves:";
  dVar23 = (double)param_4;
  uStack_f0 = 0x13;
  local_e8._12_4_ = uStack_ec;
  local_e8.Size = 0x13;
  local_e8.DataPtr = L"Active Sound Waves:";
  FCanvas::DrawShadowedString
            (param_3,dVar23,(double)param_5,&local_e8,pUVar4,&FLinearColor::Green,
             &FLinearColor::Black);
  fVar20 = __real_38d1b717;
  local_1a0 = param_5 + 0xc;
  local_1b0.Data = (FScriptContainerElement *)0x0;
  local_1a8 = 0;
  local_1a4 = 0;
  local_19c = (FColor_u_0)(pFVar5->StatSoundInfos).ArrayNum;
  uVar9 = (ulonglong)(int)local_19c.Bits;
  pFVar18 = (pFVar5->StatSoundInfos).AllocatorInstance.Data;
  pFVar16 = pFVar18 + uVar9 * 0x100;
  pFVar13 = pFVar18 + 0xa8;
  while( true ) {
    iVar8 = iVar3;
    if ((pFVar5->StatSoundInfos).ArrayNum != (int)uVar9) {
      local_1b8 = 0;
      `TCheckedPointerIterator<Audio::FAudioStats::FStatSoundInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1b8);
      iVar8 = local_1a8;
    }
    if (pFVar18 == pFVar16) break;
    iVar19 = *(int *)pFVar13;
    lVar12 = *(longlong *)(pFVar13 + -8);
    lVar14 = (longlong)iVar19 * 0x40 + lVar12;
    while( true ) {
      iVar3 = iVar8;
      if (*(int *)pFVar13 != iVar19) {
        local_1b7 = 0;
        `TCheckedPointerIterator<Audio::FAudioStats::FStatWaveInstanceInfo_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_1b7);
        iVar3 = local_1a8;
      }
      if (lVar12 == lVar14) break;
      if ((fVar20 < *(float *)(lVar12 + 0x20) || fVar20 == *(float *)(lVar12 + 0x20)) ||
         (iVar8 = iVar3, (*(byte *)(lVar12 + 0x38) & 1) != 0)) {
        if (iVar3 == local_1a4) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_1b0,&local_1a4);
        }
        iVar8 = iVar3 + 1;
        *(longlong *)(local_1b0.Data + (longlong)iVar3 * 0x10) = lVar12;
        *(FScriptContainerElement **)(local_1b0.Data + (longlong)iVar3 * 0x10 + 8) = pFVar18;
        local_1a8 = iVar8;
      }
      lVar12 = lVar12 + 0x40;
    }
    uVar9 = (ulonglong)local_19c.Bits;
    pFVar18 = pFVar18 + 0x100;
    pFVar13 = pFVar13 + 0x100;
  }
  AlgoImpl::
  IntroSortInternal<TTuple<Audio::FAudioStats::FStatWaveInstanceInfo_const_*,Audio::FAudioStats::FStatSoundInfo_const_*>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<Audio::FAudioStats::FStatWaveInstanceInfo_const_*,Audio::FAudioStats::FStatSoundInfo_const_*>,_Audio::FAudioDebugger::RenderStatWaves_::__l2::<lambda_1>_>_>
            ((TTuple<Audio::FAudioStats::FStatWaveInstanceInfo_const_*,Audio::FAudioStats::FStatSoundInfo_const_*>
              *)local_1b0.Data,iVar8,local_1b5,(<lambda_1> *)&local_1b5);
  iVar3 = local_1a8;
  fVar21 = __real_3b808081;
  fVar20 = __real_3f800000;
  pTVar17 = (TTuple<Audio::FAudioStats::FStatWaveInstanceInfo_const_*,Audio::FAudioStats::FStatSoundInfo_const_*>
             *)(local_1b0.Data + (longlong)local_1a8 * 0x10);
  local_19c = FColor::White.field0_0x0;
  FVar15.Data = local_1b0.Data;
  iVar8 = local_1a0;
  do {
    uVar9 = 0;
    if (local_1a8 != iVar3) {
      local_1b6 = 0;
      `TCheckedPointerIterator<TTuple<Audio::FAudioStats::FStatWaveInstanceInfo_const_*,Audio::FAudioStats::FStatSoundInfo_const_*>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_1b6);
    }
    iVar19 = local_1a8;
    if ((TTuple<Audio::FAudioStats::FStatWaveInstanceInfo_const_*,Audio::FAudioStats::FStatSoundInfo_const_*>
         *)FVar15.Data == pTVar17) {
      iVar3 = FAudioDevice::GetMaxChannels(local_190);
      iVar3 = iVar3 / 2;
      fVar21 = (float)(iVar19 - iVar3) * (fVar20 / (float)iVar3);
      if (fVar20 <= fVar21) {
        fVar21 = fVar20;
      }
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      if (iVar3 < iVar19) {
        fVar22 = (float)(iVar3 - iVar19) * (fVar20 / (float)iVar3);
        if (fVar20 <= fVar22) {
          fVar22 = fVar20;
        }
        fVar20 = fVar22;
        if (fVar22 <= __real_3f000000) {
          fVar20 = __real_3f000000;
        }
      }
      local_178._s_0.A = 1.0;
      local_178._s_0.R = FLinearColor::sRGBToLinearTable[(int)(fVar21 * __real_437f0000) & 0xff];
      local_178._s_0.B = FLinearColor::sRGBToLinearTable[0];
      local_178._s_0.G = FLinearColor::sRGBToLinearTable[(int)(fVar20 * __real_437f0000) & 0xff];
      pUVar4 = GetStatsFont();
      ::FString::PrintfImpl(&local_108,L" Total: %i");
      if (local_108.Data.ArrayNum == 0) {
        local_118 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_118 = local_108.Data.AllocatorInstance.Data;
        if (local_108.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        goto LAB_147658daa;
      }
      sVar7 = wcslen((wchar_t *)local_118);
      uVar9 = sVar7 & 0xffffffff;
LAB_147658daa:
      iStack_110 = (int)uVar9;
      local_a8[0]._12_4_ = uStack_10c;
      local_a8[0].Size = iStack_110;
      local_a8[0].DataPtr = (wchar_t *)local_118;
      FCanvas::DrawShadowedString
                (param_3,dVar23,(double)iVar8,local_a8,pUVar4,(FLinearColor *)&local_178._s_0,
                 &FLinearColor::Black);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      iVar3 = local_198 * 2;
      if ((TTuple<Audio::FAudioStats::FStatWaveInstanceInfo_const_*,Audio::FAudioStats::FStatSoundInfo_const_*>
           *)local_1b0.Data !=
          (TTuple<Audio::FAudioStats::FStatWaveInstanceInfo_const_*,Audio::FAudioStats::FStatSoundInfo_const_*>
           *)0x0) {
        FMemory::Free(local_1b0.Data);
      }
      return iVar8 + iVar3;
    }
    pUVar6 = UAudioComponent::GetAudioComponentFromID
                       ((ulonglong)
                        *(uint *)(*(longlong *)
                                   &((TTuple<Audio::FAudioStats::FStatWaveInstanceInfo_const_*,Audio::FAudioStats::FStatSoundInfo_const_*>
                                      *)FVar15.Data)->field_0x8 + 0x3c));
    if (pUVar6 != (UAudioComponent *)0x0) {
      uVar9 = *(ulonglong *)&pUVar6->field_0xa8;
    }
    if (**(longlong **)FVar15.Data != 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)(**(longlong **)FVar15.Data + 0x28);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      if ((**(longlong **)FVar15.Data == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      if ((**(longlong **)FVar15.Data == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      LeaveCriticalSection(lpCriticalSection);
    }
    ::FName::ToString((FName *)(*(longlong *)FVar15.Data + 0x30),&local_c8);
    if (uVar9 != 0) {
      local_168 = *(FName *)(uVar9 + 0x18);
      local_1b4 = local_1b4 | 1;
      ::FName::ToString(&local_168,&local_150);
    }
    ::FName::ToString((FName *)(*(longlong *)FVar15.Data + 0x28),&local_d8);
    ::FString::PrintfImpl
              (&local_160,L"%4i.    %6.2f  CPU:%5.2f%% RRC:%3.2f %s   Owner: %s   SoundClass: %s");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_160.Data.ArrayNum != 0) {
      FVar11.Data = local_160.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_128,(wchar_t *)FVar11.Data);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (((local_1b4 & 1) != 0) &&
       (local_1b4 = local_1b4 & 0xfffffffe,
       local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    pFVar10 = (FColor *)&local_19c;
    if ((*(byte *)(*(longlong *)FVar15.Data + 0x38) & 1) != 0) {
      pFVar10 = &FColor::Yellow;
    }
    local_188._s_0.R = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)pFVar10 + 2)];
    local_188._s_0.G = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)pFVar10 + 1)];
    local_188._s_0.B =
         FLinearColor::sRGBToLinearTable[(((FColor_u_0 *)&((FColor_u_0_s_0 *)pFVar10)->B)->_s_0).B];
    local_188._s_0.A = (float)*(byte *)((longlong)pFVar10 + 3) * fVar21;
    pUVar4 = GetStatsFont();
    iVar19 = 0;
    if (local_128.Data.ArrayNum == 0) {
      local_138 = (FScriptContainerElement *)0x15060d16c;
LAB_147658c53:
      sVar7 = wcslen((wchar_t *)local_138);
      iVar19 = (int)sVar7;
    }
    else {
      local_138 = local_128.Data.AllocatorInstance.Data;
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_147658c53;
    }
    iVar8 = local_1a0;
    local_b8._12_4_ = uStack_12c;
    local_b8.Size = iVar19;
    local_b8.DataPtr = (wchar_t *)local_138;
    iStack_130 = iVar19;
    FCanvas::DrawShadowedString
              (param_3,dVar23,(double)local_1a0,&local_b8,pUVar4,(FLinearColor *)&local_188._s_0,
               &FLinearColor::Black);
    iVar8 = iVar8 + local_198;
    local_1a0 = iVar8;
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    FVar15.Data = FVar15.Data + 0x10;
  } while( true );
}

// ResolveDesiredStats @ 14765a320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl Audio::FAudioDebugger::ResolveDesiredStats(FViewportClient *param_1)

{
  uint *puVar1;
  atomic<int> aVar2;
  FName FVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  UWorld *this;
  FDelegateHandle FVar11;
  ulonglong uVar12;
  FAudioStats *pFVar13;
  FName *pFVar14;
  TStatId TVar15;
  TReferenceControllerBase<1> *pTVar16;
  ForAnyElementType FVar17;
  atomic<int> *paVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  undefined8 *puVar22;
  ForElementType<unsigned_int> FVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 auStackY_268 [32];
  atomic<int> local_208;
  FDelegateHandle local_200;
  int local_1f8 [2];
  int local_1f0;
  uint uStack_1ec;
  long alStack_1e8 [2];
  undefined4 local_1e0;
  int iStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  undefined1 local_1cc [8];
  undefined1 local_1c4 [8];
  undefined1 local_1bc [12];
  longlong *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a8;
  FString local_188;
  FSparseArrayAllocationInfo local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FName local_128;
  FName local_120;
  IAudioSourceDataOverride *local_118 [5];
  FSharedReferencer<1> local_f0;
  undefined1 local_e8 [8];
  FSharedReferencer<1> local_e0;
  TBitArray<FDefaultBitArrayAllocator> local_d8;
  int local_b8;
  int local_b4;
  FScriptContainerElement local_b0 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  undefined1 local_98 [12];
  float fStack_8c;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  float local_68;
  float local_64;
  ForElementType<FSetElementId> local_58;
  float local_50;
  atomic<int> local_48;
  ulonglong local_38;
  
  if (param_1 == (FViewportClient *)0x0) {
    return;
  }
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  this = (UWorld *)(**(code **)((longlong)*param_1 + 0x30))();
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDebug.cpp"
                         ,0xf0,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (this == (UWorld *)0x0) {
    return;
  }
  FVar11.ID = (ulong64)UWorld::GetAudioDeviceRaw(this);
  if ((FAudioDevice *)FVar11.ID == (FAudioDevice *)0x0) {
    return;
  }
  pFVar14 = (FName *)0x0;
  local_e8 = (undefined1  [8])0x0;
  pcVar5 = *(code **)((longlong)*param_1 + 0x180);
  local_e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_d8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d8.NumBits = 0;
  local_d8.MaxBits = 0x80;
  local_b8 = -1;
  local_b4 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_200.ID = FVar11.ID;
  ::FString::FString(&local_188,L"SoundCues");
  cVar7 = (*pcVar5)(param_1,&local_188);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (cVar7 == '\0') goto LAB_14765a8df;
  if (local_b4 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)local_e8,(int *)&local_e0,
                       (int *)((longlong)&local_e0.ReferenceController + 4));
    iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_d8,1);
    FVar23 = (ForElementType<unsigned_int>)&local_d8;
    if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar23 = local_d8.AllocatorInstance.SecondaryData;
    }
    uVar10 = iVar9 >> 0x1f & 0x1f;
    iVar9 = iVar9 + uVar10;
    puVar1 = (uint *)((longlong)FVar23 + (longlong)(iVar9 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << (((byte)iVar9 & 0x1f) - (char)uVar10 & 0x1f));
    iVar9 = local_b8;
  }
  else {
    local_b4 = local_b4 + -1;
    iVar9 = *(int *)((longlong)local_e8 + (longlong)local_b8 * 0x10 + 4);
    iVar8 = local_b8;
    if (local_b4 != 0) {
      *(undefined4 *)((longlong)local_e8 + (longlong)iVar9 * 0x10) = 0xffffffff;
    }
  }
  local_b8 = iVar9;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_e8,&local_178,iVar8);
  if (local_178.Pointer != (FName *)0x0) {
    *(FName *)local_178.Pointer = DebugStatNames::SoundCues;
    (((FName *)((longlong)local_178.Pointer + 8))->ComparisonIndex).Value = 0xffffffff;
    pFVar14 = local_178.Pointer;
  }
  FVar3 = *pFVar14;
  uVar10 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar10 = uVar10 + FVar3.Number;
  if (((int)local_e0.ReferenceController - local_b4 != 1) &&
     ((int)local_e0.ReferenceController != local_b4)) {
    FVar17.Data = local_b0;
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FVar17.Data = local_a8.Data;
    }
    for (iVar8 = *(int *)(FVar17.Data + (ulonglong)(local_a0 - 1 & uVar10) * 4); iVar8 != -1;
        iVar8 = *(int *)((longlong)local_e8 + (longlong)iVar8 * 0x10 + 8)) {
      if (*(FName *)((longlong)local_e8 + (longlong)iVar8 * 0x10) == *pFVar14) {
        if (iVar8 != -1) {
          *(FName *)((longlong)local_e8 + (longlong)iVar8 * 0x10) = *pFVar14;
          TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_e8,local_178.Index,1);
          FVar11.ID = local_200.ID;
          goto LAB_14765a8df;
        }
        break;
      }
    }
  }
  uVar24 = (int)local_e0.ReferenceController - local_b4;
  uVar21 = 1;
  if (3 < uVar24) {
    uVar19 = (ulonglong)((uVar24 >> 1) + 7) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar21 = 1 << ((byte)lVar20 & 0x1f);
  }
  if (((int)uVar24 < 1) || ((int)uVar21 <= (int)local_a0)) {
    uVar10 = local_a0 - 1 & uVar10;
    pFVar14[1].Number = uVar10;
    FVar17.Data = local_b0;
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FVar17.Data = local_a8.Data;
    }
    uVar19 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar10;
    pFVar14[1].ComparisonIndex.Value = *(uint *)(FVar17.Data + uVar19 * 4);
    *(int *)(FVar17.Data + uVar19 * 4) = local_178.Index;
    FVar11.ID = local_200.ID;
    goto LAB_14765a8df;
  }
  local_a0 = uVar21;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
  }
  if (uVar21 != 0) {
    uVar10 = uVar21;
    if (uVar21 < 2) {
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        uVar10 = 0;
        goto LAB_14765a6bd;
      }
    }
    else {
LAB_14765a6bd:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,uVar10,4);
    }
    if (0 < (int)uVar21) {
      uVar25 = (ulonglong)uVar21;
      uVar19 = 0;
      do {
        FVar17.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_a8.Data;
        }
        uVar12 = uVar19 & (longlong)(int)uVar21 - 1U;
        uVar19 = uVar19 + 1;
        *(undefined4 *)(FVar17.Data + uVar12 * 4) = 0xffffffff;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  FVar11.ID = local_200.ID;
  if (local_a0 != 0) {
    alStack_1e8 = (long  [2])&local_d8;
    local_1f0 = 0;
    uStack_1ec = 1;
    iStack_1dc = 0;
    iStack_1d8 = 0;
    if (local_d8.NumBits != 0) {
      FVar23 = (ForElementType<unsigned_int>)&local_d8;
      if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar23 = local_d8.AllocatorInstance.SecondaryData;
      }
      uVar10 = *(uint *)FVar23;
      while (uVar10 == 0) {
        iStack_1d8 = iStack_1d8 + 0x20;
        lVar20 = (longlong)local_1f0;
        local_1f0 = local_1f0 + 1;
        if ((int)(local_d8.NumBits + -1 + (local_d8.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_1f0)
        goto LAB_14765a7dc;
        uVar10 = *(uint *)((uchar *)((longlong)FVar23 + 4) + lVar20 * 4);
      }
      uStack_1ec = ~(uVar10 - 1) & uVar10;
      uVar19 = (ulonglong)uStack_1ec * 2 + 1;
      lVar20 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iStack_1dc = iStack_1d8 + -1 + (int)lVar20;
      if (local_d8.NumBits < iStack_1dc) {
LAB_14765a7dc:
        iStack_1dc = local_d8.NumBits;
      }
    }
    local_1e0 = 0xffffffff;
    local_1b0 = (longlong *)local_e8;
    local_1a8._padding_ = CONCAT44(uStack_1ec,local_1f0);
    local_1a8.CurrentBitIndex = iStack_1dc;
    local_1a8.UnvisitedBitMask = 0xffffffff;
    local_1a8._28_4_ = uStack_1d4;
    local_1a8.BaseBitIndex = iStack_1d8;
    local_1a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)alStack_1e8;
    iVar8 = iStack_1dc;
    if (iStack_1dc < local_d8.NumBits) {
      do {
        puVar22 = (undefined8 *)((longlong)iVar8 * 0x10 + *local_1b0);
        uVar4 = *puVar22;
        uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar10 = local_a0 - 1 & uVar10 + (int)((ulonglong)uVar4 >> 0x20);
        *(uint *)((longlong)puVar22 + 0xc) = uVar10;
        FVar17.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_a8.Data;
        }
        uVar19 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(FVar17.Data + uVar19 * 4);
        *(int *)(FVar17.Data + uVar19 * 4) = iVar8;
        local_1a8.UnvisitedBitMask = local_1a8.UnvisitedBitMask & ~local_1a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1a8);
        FVar11.ID = local_200.ID;
        iVar8 = local_1a8.CurrentBitIndex;
      } while (local_1a8.CurrentBitIndex < *(int *)((longlong)local_1a8.Array + 0x18));
    }
  }
LAB_14765a8df:
  pcVar5 = *(code **)((longlong)*param_1 + 0x180);
  ::FString::FString(&local_168,L"SoundWaves");
  cVar7 = (*pcVar5)(param_1,&local_168);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (cVar7 != '\0') {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_e8,
               (FName *)local_1cc,(bool *)&DebugStatNames::SoundWaves);
  }
  pcVar5 = *(code **)((longlong)*param_1 + 0x180);
  ::FString::FString(&local_158,L"SoundMixes");
  cVar7 = (*pcVar5)(param_1,&local_158);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (cVar7 != '\0') {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_e8,
               (FName *)(local_1cc + 4),(bool *)&DebugStatNames::SoundMixes);
  }
  pcVar5 = *(code **)((longlong)*param_1 + 0x180);
  ::FString::FString(&local_148,L"Sounds");
  cVar7 = (*pcVar5)(param_1,&local_148);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (cVar7 != '\0') {
    pFVar13 = TMapBase<unsigned_int,Audio::FAudioStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>_>
              ::FindOrAddImpl<unsigned_int_const_&>
                        ((TMapBase<unsigned_int,Audio::FAudioStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>_>
                          *)&AudioDeviceStats,((FAudioDevice *)FVar11.ID)->DeviceID,
                         &((FAudioDevice *)FVar11.ID)->DeviceID);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_e8,
               (FName *)local_1c4,(bool *)&DebugStatNames::Sounds);
    if ((pFVar13->DisplayFlags & 1) != 0) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_e8,
                 (FName *)(local_1c4 + 4),(bool *)&DebugStatNames::DebugSounds);
    }
    if ((pFVar13->DisplayFlags & 0x40) != 0) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_e8,
                 (FName *)local_1bc,(bool *)&DebugStatNames::LongSoundNames);
    }
  }
  pcVar5 = *(code **)((longlong)*param_1 + 0x180);
  ::FString::FString(&local_138,L"Streaming");
  cVar7 = (*pcVar5)(param_1,&local_138);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (cVar7 != '\0') {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_e8,
               (FName *)(local_1bc + 4),(bool *)&DebugStatNames::AudioStreaming);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AudioResolveDesiredStats ==
        (FThreadSafeStaticStat<_public:_static_void___cdecl_Audio::FAudioDebugger::ResolveDesiredStats(FViewportClient_*)_::_2_::FStat_STAT_AudioResolveDesiredStats>
         )0x0) {
      pFVar14 = ::FName::FName(&local_128,"STAT_AudioResolveDesiredStats");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioResolveDesiredStats,*pFVar14,
                 L"FAudioThreadTask.ResolveDesiredStats","STATGROUP_TaskGraphTasks",
                 "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  local_208 = (atomic<int>)((FAudioDevice *)FVar11.ID)->DeviceID;
  bVar6 = IsInAudioThread();
  if (bVar6) {
    if (AudioDeviceStats_AudioThread._8_4_ != AudioDeviceStats_AudioThread._52_4_) {
      lVar20 = 0x154c28308;
      if (AudioDeviceStats_AudioThread._64_8_ != 0) {
        lVar20 = AudioDeviceStats_AudioThread._64_8_;
      }
      aVar2 = *(atomic<int> *)
               (lVar20 + (ulonglong)(AudioDeviceStats_AudioThread._72_4_ - 1 & (uint)local_208) * 4)
      ;
      while (aVar2 != (atomic<int>)0xffffffff) {
        paVar18 = (atomic<int> *)((longlong)(int)aVar2 * 0x60 + AudioDeviceStats_AudioThread._0_8_);
        if (*paVar18 == local_208) {
          if (paVar18 != (atomic<int> *)0x0) goto LAB_14765ab6a;
          break;
        }
        aVar2 = paVar18[0x16];
      }
    }
    local_200.ID = (ulong64)&local_208;
    TSet<TTuple<unsigned_int,Audio::FAudioStats_AudioThread>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats_AudioThread,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned_int,Audio::FAudioStats_AudioThread>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats_AudioThread,0>,FDefaultSetAllocator>
                *)&AudioDeviceStats_AudioThread,(uint)local_1f8,
               (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)(uint)local_208,
               (bool *)&local_200);
    paVar18 = (atomic<int> *)((longlong)local_1f8[0] * 0x60 + AudioDeviceStats_AudioThread._0_8_);
LAB_14765ab6a:
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(paVar18 + 2),
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_e8);
  }
  else {
    TVar15.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioResolveDesiredStats;
    if (StatPtr_STAT_AudioResolveDesiredStats ==
        (FThreadSafeStaticStat<_public:_static_void___cdecl_Audio::FAudioDebugger::ResolveDesiredStats(FViewportClient_*)_::_2_::FStat_STAT_AudioResolveDesiredStats>
         )0x0) {
      pFVar14 = ::FName::FName(&local_120,"STAT_AudioResolveDesiredStats");
      TVar15.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioResolveDesiredStats,*pFVar14,
                      L"FAudioThreadTask.ResolveDesiredStats","STATGROUP_TaskGraphTasks",
                      "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_98._0_8_ = (UObject *)0x0;
    stack0xffffffffffffff70 = 0;
    local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_88.NumBits = 0;
    local_88.MaxBits = 0x80;
    local_68 = -NAN;
    local_64 = 0.0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0.0;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_e8);
    local_48 = local_208;
    local_118[0] = (IAudioSourceDataOverride *)0x0;
    pTVar16 = FMemory::Malloc(0x60,8);
    pTVar16->_padding_ =
         (longlong)
         &UE::Core::Private::Function::
          TFunction_OwnedObject<`Audio::FAudioDebugger::ResolveDesiredStats'::`34'::<lambda_1>,1,1>
          ::_vftable_;
    local_f0.ReferenceController = pTVar16;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
               &pTVar16->SharedReferenceCount,
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98);
    pTVar16[5].SharedReferenceCount = local_48;
    if (&pTVar16->SharedReferenceCount != (atomic<int> *)0x0) {
      local_118[0] = (IAudioSourceDataOverride *)
                     UE::Core::Private::Function::
                     TFunctionRefCaller<`Audio::FAudioDebugger::ResolveDesiredStats'::__l34::<lambda_1>,void>
                     ::Call;
    }
    FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_118,TVar15);
    local_50 = 0.0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    bVar6 = fStack_8c != 0.0;
    stack0xffffffffffffff70 = (ulonglong)(uint)fStack_8c << 0x20;
    if (bVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_68 = -NAN;
    local_64 = 0.0;
    local_88.NumBits = 0;
    if (0x80 < (uint)local_88.MaxBits) {
      local_88.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
    }
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
    }
    if ((UObject *)local_98._0_8_ != (UObject *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
  }
  local_a0 = 0;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  bVar6 = local_e0.ReferenceController._4_4_ != 0;
  local_e0.ReferenceController =
       (TReferenceControllerBase<1> *)((ulonglong)local_e0.ReferenceController._4_4_ << 0x20);
  if (bVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_e8,0,
               (int *)((longlong)&local_e0.ReferenceController + 4));
  }
  local_b4 = 0;
  local_d8.NumBits = 0;
  local_b8 = -1;
  if (0x80 < (uint)local_d8.MaxBits) {
    local_d8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_d8,0);
  }
  if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
  }
  if (local_e8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_e8);
  }
  return;
}

// SendUpdateResultsToGameThread @ 14765bba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014765ca78) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Audio::FAudioDebugger::SendUpdateResultsToGameThread(FAudioDevice *param_1,int param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  USoundBase *this;
  FActiveSound *pFVar3;
  ForAnyElementType FVar4;
  USoundMix *pUVar5;
  code *pcVar6;
  double dVar7;
  undefined8 uVar8;
  FName FVar9;
  FName FVar10;
  FAudioDevice *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *pTVar13;
  TMap<USoundMix_*,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>_>
  *pTVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  FString *pFVar20;
  USoundClass *pUVar21;
  longlong lVar22;
  USoundClass *pUVar23;
  TTuple<FWaveInstance_*,FSoundSource_*> *pTVar24;
  USoundWave **ppUVar25;
  TMap<USoundMix_*,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>_>
  *pTVar26;
  FName *pFVar27;
  TStatId TVar28;
  byte bVar29;
  longlong lVar30;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar31;
  ulonglong uVar32;
  uint *puVar33;
  ForElementType<FSetElementId> FVar34;
  wchar_t *pwVar35;
  longlong *plVar36;
  FScriptContainerElement *pFVar37;
  uint uVar38;
  FWaveInstance *pFVar39;
  FScriptContainerElement *pFVar40;
  undefined1 *puVar41;
  uint *puVar42;
  uint uVar43;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *pTVar44;
  USoundWave *pUVar45;
  TBitArray<FDefaultBitArrayAllocator> *pTVar46;
  USoundWave *pUVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auStackY_498 [32];
  undefined1 local_438;
  undefined1 local_437;
  undefined1 local_436;
  undefined1 local_435;
  uint local_434;
  FActiveSound *local_430;
  uint local_428;
  ForAnyElementType local_420;
  undefined8 local_418;
  ForAnyElementType local_410;
  undefined8 local_408;
  ForAnyElementType local_400;
  undefined8 local_3f8;
  uint local_3f0;
  ForAnyElementType local_3e8;
  undefined8 local_3e0;
  ForAnyElementType local_3d8;
  undefined8 local_3d0;
  ForAnyElementType local_3c8;
  undefined8 local_3c0;
  FAudioDevice *local_3b8;
  USoundWave *local_3b0;
  USoundWave *local_3a8;
  undefined8 uStack_3a0;
  FString local_398;
  float local_388;
  uint local_384;
  FName local_380;
  longlong local_378;
  byte local_370;
  FString local_368;
  int local_358;
  uint local_354;
  USoundWave *local_350;
  USoundWave *local_348;
  FWaveInstance *local_340;
  TMap<USoundMix_*,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>_>
  *local_338;
  undefined8 uStack_330;
  TBitArray<FDefaultBitArrayAllocator> *local_328;
  uint uStack_320;
  int iStack_31c;
  int local_318;
  undefined4 uStack_314;
  int iStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_300;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2e0;
  FName local_2c0;
  undefined1 local_2b8 [12];
  FName local_2ac;
  FName local_2a4;
  TMap<unsigned___int64,FWaveInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>_>
  *local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_290;
  undefined8 uStack_270;
  TMap<USoundMix_*,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>_>
  *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_260;
  undefined8 uStack_240;
  FActiveSound **local_238;
  int *local_230;
  FString local_228;
  undefined4 local_210;
  undefined4 uStack_20c;
  FString local_208;
  FString local_1f8;
  void *local_1e8 [2];
  FString local_1d8;
  TVector<double>_u_0 local_1c8;
  FName local_1b0;
  FName local_1a8 [2];
  code *local_198 [5];
  undefined8 *local_170;
  undefined4 local_14c;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_148;
  TSet<TTuple<FActiveSound_*,int>,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>,FDefaultSetAllocator>
  local_f8;
  TSet<TTuple<FWaveInstance_*,FSoundSource_*>,TDefaultMapHashableKeyFuncs<FWaveInstance_*,FSoundSource_*,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_498;
  local_434 = 0;
  local_428 = param_2;
  local_3b8 = param_1;
  bVar15 = IsInAudioThread();
  if ((!bVar15) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInAudioThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDebug.cpp"
                          ,0x912,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (AudioDeviceStats_AudioThread._8_4_ == AudioDeviceStats_AudioThread._52_4_) {
    return;
  }
  lVar30 = 0x154c28308;
  if (AudioDeviceStats_AudioThread._64_8_ != 0) {
    lVar30 = AudioDeviceStats_AudioThread._64_8_;
  }
  uVar16 = *(uint *)(lVar30 + (ulonglong)
                              (AudioDeviceStats_AudioThread._72_4_ - 1 & param_1->DeviceID) * 4);
  while( true ) {
    if (uVar16 == 0xffffffff) {
      return;
    }
    puVar19 = (uint *)((longlong)(int)uVar16 * 0x60 + AudioDeviceStats_AudioThread._0_8_);
    if (*puVar19 == param_1->DeviceID) break;
    uVar16 = puVar19[0x16];
  }
  pTVar31 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(puVar19 + 2);
  if (puVar19 == (uint *)0x0) {
    pTVar31 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0;
  }
  if (pTVar31 == (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0) {
    return;
  }
  local_420.Data = (FScriptContainerElement *)0x0;
  local_418 = 0;
  local_410.Data = (FScriptContainerElement *)0x0;
  local_408 = 0;
  local_148.Elements._0_8_ = 0;
  local_148.Elements._8_8_ = 0;
  local_148.Elements._32_8_ = 0;
  local_148.Elements._40_4_ = 0;
  local_148.Elements._44_4_ = 0x80;
  local_148.Elements._48_4_ = 0xffffffff;
  local_148.Elements._52_4_ = 0;
  local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_148.HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=(&local_148,pTVar31);
  FVar9 = DebugStatNames::DebugSounds;
  local_f8.Elements._0_8_ = 0;
  local_f8.Elements._8_8_ = 0;
  local_f8.Elements._32_8_ = 0;
  local_f8.Elements._40_4_ = 0;
  local_f8.Elements._44_4_ = 0x80;
  local_f8.Elements._48_4_ = 0xffffffff;
  local_f8.Elements._52_4_ = 0;
  local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_f8.HashSize = 0;
  uVar16 = ::GetTypeHash(DebugStatNames::DebugSounds.ComparisonIndex.Value);
  FVar10 = DebugStatNames::Sounds;
  if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
    FVar34 = (ForElementType<FSetElementId>)&local_148.Hash;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar34 = local_148.Hash.SecondaryData;
    }
    for (iVar17 = *(int *)((longlong)FVar34 +
                          (ulonglong)(local_148.HashSize - 1U & FVar9.Number + uVar16) * 4);
        iVar17 != -1; iVar17 = *(int *)(local_148.Elements._0_8_ + 8 + (longlong)iVar17 * 0x10)) {
      if (*(FName *)(local_148.Elements._0_8_ + (longlong)iVar17 * 0x10) == FVar9)
      goto LAB_14765bddd;
    }
  }
  iVar17 = -1;
LAB_14765bddd:
  uVar16 = ::GetTypeHash(DebugStatNames::Sounds.ComparisonIndex.Value);
  FVar9 = DebugStatNames::SoundCues;
  if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
    FVar34 = (ForElementType<FSetElementId>)&local_148.Hash;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar34 = local_148.Hash.SecondaryData;
    }
    for (iVar18 = *(int *)((longlong)FVar34 +
                          (ulonglong)(local_148.HashSize - 1U & FVar10.Number + uVar16) * 4);
        iVar18 != -1; iVar18 = *(int *)(local_148.Elements._0_8_ + 8 + (longlong)iVar18 * 0x10)) {
      if (*(FName *)(local_148.Elements._0_8_ + (longlong)iVar18 * 0x10) == FVar10)
      goto LAB_14765bfb9;
    }
  }
  uVar16 = ::GetTypeHash(DebugStatNames::SoundCues.ComparisonIndex.Value);
  FVar10 = DebugStatNames::SoundMixes;
  if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
    FVar34 = (ForElementType<FSetElementId>)&local_148.Hash;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar34 = local_148.Hash.SecondaryData;
    }
    for (iVar18 = *(int *)((longlong)FVar34 +
                          (ulonglong)(local_148.HashSize - 1U & FVar9.Number + uVar16) * 4);
        iVar18 != -1; iVar18 = *(int *)(local_148.Elements._0_8_ + 8 + (longlong)iVar18 * 0x10)) {
      if (*(FName *)(local_148.Elements._0_8_ + (longlong)iVar18 * 0x10) == FVar9)
      goto LAB_14765bfb9;
    }
  }
  uVar16 = ::GetTypeHash(DebugStatNames::SoundMixes.ComparisonIndex.Value);
  FVar9 = DebugStatNames::SoundWaves;
  if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
    FVar34 = (ForElementType<FSetElementId>)&local_148.Hash;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar34 = local_148.Hash.SecondaryData;
    }
    for (iVar18 = *(int *)((longlong)FVar34 +
                          (ulonglong)(local_148.HashSize - 1U & FVar10.Number + uVar16) * 4);
        iVar18 != -1; iVar18 = *(int *)(local_148.Elements._0_8_ + 8 + (longlong)iVar18 * 0x10)) {
      if (*(FName *)(local_148.Elements._0_8_ + (longlong)iVar18 * 0x10) == FVar10)
      goto LAB_14765bfb9;
    }
  }
  uVar16 = ::GetTypeHash(DebugStatNames::SoundWaves.ComparisonIndex.Value);
  if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
    FVar34 = (ForElementType<FSetElementId>)&local_148.Hash;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar34 = local_148.Hash.SecondaryData;
    }
    for (iVar18 = *(int *)((longlong)FVar34 +
                          (ulonglong)(local_148.HashSize - 1U & FVar9.Number + uVar16) * 4);
        iVar18 != -1; iVar18 = *(int *)(local_148.Elements._0_8_ + 8 + (longlong)iVar18 * 0x10)) {
      if (*(FName *)(local_148.Elements._0_8_ + (longlong)iVar18 * 0x10) == FVar9)
      goto LAB_14765bfb9;
    }
  }
LAB_14765cadc:
  FVar10 = DebugStatNames::SoundMixes;
  uVar16 = ::GetTypeHash(DebugStatNames::SoundMixes.ComparisonIndex.Value);
  if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
    FVar34 = (ForElementType<FSetElementId>)&local_148.Hash;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar34 = local_148.Hash.SecondaryData;
    }
    for (iVar17 = *(int *)((longlong)FVar34 +
                          (ulonglong)(local_148.HashSize - 1U & FVar10.Number + uVar16) * 4);
        iVar17 != -1; iVar17 = *(int *)(local_148.Elements._0_8_ + 8 + (longlong)iVar17 * 0x10)) {
      if (*(FName *)(local_148.Elements._0_8_ + (longlong)iVar17 * 0x10) == FVar10) {
        bVar15 = IsInAudioThread();
        if ((!bVar15) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInAudioThread()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDevice.h"
                                ,0x6bc,L""), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (param_1->Effects != (FAudioEffectsManager *)0x0) {
          pUVar5 = param_1->Effects->CurrentEQMix;
          pTVar26 = ObjectPtrDecay<TMap<TObjectPtr<USoundMix>,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USoundMix>,FSoundMixState,0>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TMap<TObjectPtr<USoundMix>,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USoundMix>,FSoundMixState,0>_>_>,TMap<USoundMix_*,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>_>_>
                              (&param_1->SoundMixModifiers);
          iVar17 = *(int *)&pTVar26->field_0x28;
          iVar18 = 0;
          uVar16 = 1;
          puVar1 = &pTVar26->field_0x10;
          iStack_31c = iVar18;
          local_318 = iVar18;
          if (iVar17 == 0) goto LAB_14765cc31;
          puVar19 = *(uint **)&pTVar26->field_0x20;
          if (*(uint **)&pTVar26->field_0x20 == (uint *)0x0) {
            puVar19 = (uint *)puVar1;
          }
          uVar43 = *puVar19;
          local_318 = 0;
          iVar18 = 0;
          goto joined_r0x00014765cbe8;
        }
        break;
      }
    }
  }
LAB_14765ced1:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    if (StatPtr_STAT_AudioSendResults ==
        (FThreadSafeStaticStat<_public:_static_void___cdecl_Audio::FAudioDebugger::SendUpdateResultsToGameThread(FAudioDevice_const_&,int)_::_2_::FStat_STAT_AudioSendResults>
         )0x0) {
      pFVar27 = ::FName::FName(local_1a8,"STAT_AudioSendResults");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSendResults,*pFVar27,
                 L"FGameThreadAudioTask.AudioSendResults","STATGROUP_TaskGraphTasks",
                 "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS3);
  }
  pFVar11 = local_3b8;
  local_400.Data = (FScriptContainerElement *)0x0;
  local_3f8 = 0;
  uVar16 = local_3b8->DeviceID;
  bVar15 = IsInAudioThread();
  if ((!bVar15) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInAudioThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDevice.h"
                          ,0x2b4,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar17 = (pFVar11->Listeners).ArrayNum;
  pFVar37 = (pFVar11->Listeners).AllocatorInstance.Data;
  pFVar40 = pFVar37 + (longlong)iVar17 * 0x110;
  while( true ) {
    if ((pFVar11->Listeners).ArrayNum != iVar17) {
      local_435 = 0;
      `TCheckedPointerIterator<FListener_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_435);
    }
    if (pFVar37 == pFVar40) break;
    if (((local_400.Data <= pFVar37) &&
        (pFVar37 < local_400.Data + (longlong)local_3f8._4_4_ * 0x60)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar18 = (int)local_3f8;
    if ((int)local_3f8 == local_3f8._4_4_) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1060,&local_400,(int *)((longlong)&local_3f8 + 4));
    }
    local_3f8 = CONCAT44(local_3f8._4_4_,iVar18 + 1);
    uVar8 = *(undefined8 *)(pFVar37 + 8);
    lVar30 = (longlong)iVar18 * 0x60;
    *(undefined8 *)(local_400.Data + lVar30) = *(undefined8 *)pFVar37;
    *(undefined8 *)(local_400.Data + lVar30 + 8) = uVar8;
    uVar8 = *(undefined8 *)(pFVar37 + 0x18);
    *(undefined8 *)(local_400.Data + lVar30 + 0x10) = *(undefined8 *)(pFVar37 + 0x10);
    *(undefined8 *)(local_400.Data + lVar30 + 0x10 + 8) = uVar8;
    uVar8 = *(undefined8 *)(pFVar37 + 0x28);
    *(undefined8 *)(local_400.Data + lVar30 + 0x20) = *(undefined8 *)(pFVar37 + 0x20);
    *(undefined8 *)(local_400.Data + lVar30 + 0x20 + 8) = uVar8;
    uVar8 = *(undefined8 *)(pFVar37 + 0x38);
    *(undefined8 *)(local_400.Data + lVar30 + 0x30) = *(undefined8 *)(pFVar37 + 0x30);
    *(undefined8 *)(local_400.Data + lVar30 + 0x30 + 8) = uVar8;
    uVar8 = *(undefined8 *)(pFVar37 + 0x48);
    *(undefined8 *)(local_400.Data + lVar30 + 0x40) = *(undefined8 *)(pFVar37 + 0x40);
    *(undefined8 *)(local_400.Data + lVar30 + 0x40 + 8) = uVar8;
    pFVar2 = pFVar37 + 0x50;
    uVar8 = *(undefined8 *)(pFVar37 + 0x58);
    pFVar37 = pFVar37 + 0x110;
    *(undefined8 *)(local_400.Data + lVar30 + 0x50) = *(undefined8 *)pFVar2;
    *(undefined8 *)(local_400.Data + lVar30 + 0x50 + 8) = uVar8;
  }
  TVar28.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSendResults;
  if (StatPtr_STAT_AudioSendResults ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_Audio::FAudioDebugger::SendUpdateResultsToGameThread(FAudioDevice_const_&,int)_::_2_::FStat_STAT_AudioSendResults>
       )0x0) {
    pFVar27 = ::FName::FName(&local_1b0,"STAT_AudioSendResults");
    TVar28.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSendResults,*pFVar27,
                    L"FGameThreadAudioTask.AudioSendResults","STATGROUP_TaskGraphTasks",
                    "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid
                   );
  }
  FVar4.Data = local_400.Data;
  lVar30 = (longlong)(int)local_3f8;
  local_3e8.Data = (FScriptContainerElement *)0x0;
  local_3e0 = CONCAT44(local_3e0._4_4_,(int)local_3f8);
  local_3f0 = uVar16;
  if ((int)local_3f8 == 0) {
    local_3e0 = local_3f8 & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,(int)local_3f8,0,&local_3e8,(int)local_3f8,
               (int *)((longlong)&local_3e0 + 4));
    memcpy(local_3e8.Data,FVar4.Data,lVar30 * 0x60);
  }
  FVar4.Data = local_420.Data;
  iVar17 = (int)local_418;
  local_3d8.Data = (FScriptContainerElement *)0x0;
  local_3d0 = CONCAT44(local_3d0._4_4_,(int)local_418);
  if ((int)local_418 == 0) {
    local_3d0 = local_418 & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,0x10,(int)local_418,0,&local_3d8,(int)local_418,
               (int *)((longlong)&local_3d0 + 4));
    ConstructItems<Audio::FAudioStats::FStatSoundInfo,Audio::FAudioStats::FStatSoundInfo,int>
              (local_3d8.Data,(FStatSoundInfo *)FVar4.Data,iVar17);
  }
  FVar4.Data = local_410.Data;
  iVar17 = (int)local_408;
  local_3c8.Data = (FScriptContainerElement *)0x0;
  local_3c0 = CONCAT44(local_3c0._4_4_,(int)local_408);
  if ((int)local_408 == 0) {
    local_3c0 = local_408 & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,(int)local_408,0,&local_3c8,(int)local_408,(int *)((longlong)&local_3c0 + 4));
    ConstructItems<Audio::FAudioStats::FStatSoundMix,Audio::FAudioStats::FStatSoundMix,int>
              (local_3c8.Data,(FStatSoundMix *)FVar4.Data,iVar17);
  }
  local_198[0] = (code *)0x0;
  local_170 = FMemory::Malloc(0x40,8);
  *local_170 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FAudioDebugger::SendUpdateResultsToGameThread'::`2'::<lambda_1>,1,1>
                ::_vftable_;
  local_170[2] = 0;
  *(uint *)(local_170 + 1) = local_3f0;
  local_170[2] = local_3e8.Data;
  local_3e8.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)(local_170 + 3) = (undefined4)local_3e0;
  *(undefined4 *)((longlong)local_170 + 0x1c) = local_3e0._4_4_;
  local_3e0 = 0;
  local_170[4] = 0;
  local_170[4] = local_3d8.Data;
  local_3d8.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_170 + 5) = (int)local_3d0;
  *(undefined4 *)((longlong)local_170 + 0x2c) = local_3d0._4_4_;
  local_3d0 = 0;
  local_170[6] = 0;
  local_170[6] = local_3c8.Data;
  local_3c8.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_170 + 7) = (int)local_3c0;
  *(undefined4 *)((longlong)local_170 + 0x3c) = local_3c0._4_4_;
  local_3c0 = 0;
  if ((uint *)(local_170 + 1) != (uint *)0x0) {
    local_198[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`Audio::FAudioDebugger::SendUpdateResultsToGameThread'::__l2::<lambda_1>,void>
                   ::Call;
  }
  FAudioThread::RunCommandOnGameThread((TUniqueFunction<void___cdecl(void)> *)local_198,TVar28);
  DestructItems<Audio::FAudioStats::FStatSoundMix,int>
            ((FStatSoundMix *)local_3c8.Data,(int)local_3c0);
  if ((FStatSoundMix *)local_3c8.Data != (FStatSoundMix *)0x0) {
    FMemory::Free(local_3c8.Data);
  }
  DestructItems<Audio::FAudioStats::FStatSoundInfo,int>
            ((FStatSoundInfo *)local_3d8.Data,(int)local_3d0);
  if ((FStatSoundInfo *)local_3d8.Data != (FStatSoundInfo *)0x0) {
    FMemory::Free(local_3d8.Data);
  }
  if (local_3e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data);
  }
  if (local_400.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.Data);
  }
  local_f8.HashSize = 0;
  if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FActiveSound_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FActiveSound_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_f8.Elements);
  local_148.HashSize = 0;
  if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_148.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_148.Elements);
  DestructItems<Audio::FAudioStats::FStatSoundMix,int>
            ((FStatSoundMix *)local_410.Data,(int)local_408);
  if ((FStatSoundMix *)local_410.Data != (FStatSoundMix *)0x0) {
    FMemory::Free(local_410.Data);
  }
  DestructItems<Audio::FAudioStats::FStatSoundInfo,int>
            ((FStatSoundInfo *)local_420.Data,(int)local_418);
  if ((FStatSoundInfo *)local_420.Data != (FStatSoundInfo *)0x0) {
    FMemory::Free(local_420.Data);
  }
  return;
LAB_14765bfb9:
  local_340 = (FWaveInstance *)FAudioDevice::GetActiveSounds(param_1);
  local_354 = *(uint *)&(local_340->SoundClass).field0_0x0;
  uVar32 = (ulonglong)(int)local_354;
  pUVar45 = (local_340->WaveData).field0_0x0.DebugPtr;
  pUVar47 = (USoundWave *)(&pUVar45->_padding_ + uVar32);
  local_350 = pUVar47;
  while( true ) {
    local_3b0 = pUVar45;
    if (*(int *)&(local_340->SoundClass).field0_0x0 != (int)uVar32) {
      local_438 = 0;
      `TCheckedPointerIterator<FActiveSound_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_438);
    }
    if (pUVar45 == pUVar47) break;
    local_430 = (FActiveSound *)pUVar45->_padding_;
    this = (local_430->Sound).field0_0x0.DebugPtr;
    if ((this != (USoundBase *)0x0) && ((iVar17 == -1 || (this->bDebug != 0)))) {
      iVar18 = (int)local_418;
      if ((int)local_418 == local_418._4_4_) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x100,0x10,&local_420,(int *)((longlong)&local_418 + 4));
      }
      local_418 = CONCAT44(local_418._4_4_,iVar18 + 1);
      DefaultConstructItems<Audio::FAudioStats::FStatSoundInfo,int>
                (local_420.Data + (longlong)iVar18 * 0x100,1);
      local_238 = &local_430;
      local_230 = &local_358;
      local_358 = iVar18;
      TSet<TTuple<FActiveSound_*,int>,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FActiveSound_*_const_&,int_&&>_>
                (&local_f8,(TPairInitializer<FActiveSound_*_const_&,int_&&> *)local_2b8,
                 (bool *)&local_238);
      uVar16 = 0;
      if ((int)((int)local_418 - 1U) < (int)local_418) {
        uVar16 = ~((int)local_418 - 1U) >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FVar4.Data = local_420.Data;
      local_2ac = (FName)this->_padding_;
      lVar30 = (longlong)(int)local_418 * 0x100;
      ::FName::ToString(&local_2ac,&local_228);
      ::FString::operator=((FString *)(FVar4.Data + lVar30 + -0x100),&local_228);
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      pFVar20 = UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)this,&local_208,(UObject *)0x0);
      ::FString::operator=((FString *)(FVar4.Data + lVar30 + -0xf0),pFVar20);
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      *(undefined4 *)(FVar4.Data + lVar30 + -0xd8) = 0;
      if (local_430->bAllowSpatialization != '\0') {
        local_1c8._s_0.X = (local_430->Transform).Translation.XY.m128d_f64[0];
        local_1c8._s_0.Y = (local_430->Transform).Translation.XY.m128d_f64[1];
        local_1c8._s_0.Z = (local_430->Transform).Translation.ZW.m128d_f64[0];
        fVar48 = FAudioDevice::GetDistanceToNearestListener
                           (param_1,(TVector<double> *)&local_1c8._s_0);
        *(float *)(FVar4.Data + lVar30 + -0xd8) = fVar48;
      }
      *(float *)(FVar4.Data + lVar30 + -0xd4) = local_430->PlaybackTime;
      fVar48 = FActiveSound::GetConcurrencyPriority(local_430);
      pFVar3 = local_430;
      *(float *)(FVar4.Data + lVar30 + -0xcc) = fVar48;
      local_2e0._padding_._0_4_ = 0;
      local_2e0._padding_._4_4_ = 1;
      local_2e0.UnvisitedBitMask = 0xffffffff;
      *(float *)(FVar4.Data + lVar30 + -0xd0) = local_430->PlaybackTimeNonVirtualized;
      *(undefined4 *)(FVar4.Data + lVar30 + -200) = 0;
      pTVar44 = &local_430->WaveInstances;
      local_2e0.CurrentBitIndex = 0;
      local_2e0.BaseBitIndex = 0;
      pTVar46 = (TBitArray<FDefaultBitArrayAllocator> *)&(local_430->WaveInstances).field_0x10;
      local_2e0.Array = pTVar46;
      if (*(int *)&(local_430->WaveInstances).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2e0);
      }
      uVar16 = *(uint *)&(pFVar3->WaveInstances).field_0x28;
      uStack_330 = CONCAT44(local_2e0._padding_._4_4_,(undefined4)local_2e0._padding_);
      bVar29 = (byte)uVar16 & 0x1f;
      iStack_310 = *(int *)&(pFVar3->WaveInstances).field_0x8 -
                   *(int *)&(pFVar3->WaveInstances).field_0x34;
      iStack_31c = local_2e0.CurrentBitIndex;
      uStack_320 = local_2e0.UnvisitedBitMask;
      uStack_314 = local_2e0._28_4_;
      local_318 = local_2e0.BaseBitIndex;
      local_300._padding_._0_4_ = (int)uVar16 >> 5;
      local_300._padding_._4_4_ = 1 << bVar29;
      local_300.UnvisitedBitMask = -1 << bVar29;
      local_328 = local_2e0.Array;
      local_300.BaseBitIndex = uVar16 & 0xffffffe0;
      uStack_270 = CONCAT44(uStack_30c,iStack_310);
      TStack_290.Array = local_2e0.Array;
      local_338 = (TMap<USoundMix_*,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>_>
                   *)pTVar44;
      local_300.Array = pTVar46;
      local_300.CurrentBitIndex = uVar16;
      local_298 = pTVar44;
      TStack_290._padding_ = uStack_330;
      TStack_290._16_8_ = _uStack_320;
      TStack_290._24_8_ = _local_318;
      if (((int)uVar16 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar16 != *(uint *)&(pFVar3->WaveInstances).field_0x28) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_300);
        pTVar46 = local_300.Array;
        uVar16 = local_300.CurrentBitIndex;
      }
      while( true ) {
        pTVar13 = local_298;
        if (*(int *)&local_298->field_0x8 - *(int *)&local_298->field_0x34 != (int)uStack_270) {
          local_437 = 0;
          `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FWaveInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_437);
        }
        if (((TStack_290.CurrentBitIndex == uVar16) && (TStack_290.Array == pTVar46)) &&
           (pTVar13 == pTVar44)) break;
        pFVar39 = *(FWaveInstance **)
                   (*(longlong *)pTVar13 + 8 + (longlong)TStack_290.CurrentBitIndex * 0x18);
        fVar49 = FWaveInstance::GetDynamicVolume(pFVar39);
        fVar50 = FWaveInstance::GetVolumeWithDistanceAndOcclusionAttenuation(pFVar39);
        TStack_290.UnvisitedBitMask = TStack_290.UnvisitedBitMask & ~TStack_290._padding_._4_4_;
        fVar48 = *(float *)(FVar4.Data + lVar30 + -200);
        if (*(float *)(FVar4.Data + lVar30 + -200) <= fVar50 * fVar49) {
          fVar48 = fVar50 * fVar49;
        }
        *(float *)(FVar4.Data + lVar30 + -200) = fVar48;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_290);
      }
      pUVar21 = FActiveSound::GetSoundClass(local_430);
      if (pUVar21 == (USoundClass *)0x0) {
        lVar22 = 0;
        local_308 = 0;
      }
      else {
        lVar22 = pUVar21->_padding_;
      }
      bVar15 = bAttenuationVisualizeEnabledCVar != false;
      *(longlong *)(FVar4.Data + lVar30 + -0xe0) = lVar22;
      dVar7 = (local_430->Transform).Rotation.XY.m128d_f64[1];
      *(double *)(FVar4.Data + lVar30 + -0xc0) = (local_430->Transform).Rotation.XY.m128d_f64[0];
      *(double *)(FVar4.Data + lVar30 + -0xc0 + 8) = dVar7;
      dVar7 = (local_430->Transform).Rotation.ZW.m128d_f64[1];
      *(double *)(FVar4.Data + lVar30 + -0xb0) = (local_430->Transform).Rotation.ZW.m128d_f64[0];
      *(double *)(FVar4.Data + lVar30 + -0xb0 + 8) = dVar7;
      dVar7 = (local_430->Transform).Translation.XY.m128d_f64[1];
      *(double *)(FVar4.Data + lVar30 + -0xa0) = (local_430->Transform).Translation.XY.m128d_f64[0];
      *(double *)(FVar4.Data + lVar30 + -0xa0 + 8) = dVar7;
      dVar7 = (local_430->Transform).Translation.ZW.m128d_f64[1];
      *(double *)(FVar4.Data + lVar30 + -0x90) = (local_430->Transform).Translation.ZW.m128d_f64[0];
      *(double *)(FVar4.Data + lVar30 + -0x90 + 8) = dVar7;
      dVar7 = (local_430->Transform).Scale3D.XY.m128d_f64[1];
      *(double *)(FVar4.Data + lVar30 + -0x80) = (local_430->Transform).Scale3D.XY.m128d_f64[0];
      *(double *)(FVar4.Data + lVar30 + -0x80 + 8) = dVar7;
      dVar7 = (local_430->Transform).Scale3D.ZW.m128d_f64[1];
      *(double *)(FVar4.Data + lVar30 + -0x70) = (local_430->Transform).Scale3D.ZW.m128d_f64[0];
      *(double *)(FVar4.Data + lVar30 + -0x70 + 8) = dVar7;
      *(int *)(FVar4.Data + lVar30 + -0xc4) = (int)local_430->AudioComponentID;
      pUVar47 = local_350;
      param_1 = local_3b8;
      if ((bVar15) && (((local_430->Sound).field0_0x0.DebugPtr)->bDebug != 0)) {
        FActiveSound::CollectAttenuationShapesForVisualization
                  (local_430,
                   (TMultiMap<EAttenuationShape::Type,FBaseAttenuationSettings::AttenuationShapeDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAttenuationShape::Type,FBaseAttenuationSettings::AttenuationShapeDetails,1>_>
                    *)(FVar4.Data + lVar30 + -0x50));
        pUVar47 = local_350;
        param_1 = local_3b8;
      }
    }
    pUVar45 = (USoundWave *)&local_3b0->_padding_;
    uVar32 = (ulonglong)local_354;
  }
  bVar15 = IsInAudioThread();
  if ((!bVar15) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInAudioThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDevice.cpp"
                          ,0x1dca,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  TSet<TTuple<FWaveInstance_*,FSoundSource_*>,TDefaultMapHashableKeyFuncs<FWaveInstance_*,FSoundSource_*,0>,FDefaultSetAllocator>
  ::operator=(&local_a8,
              (TSet<TTuple<FWaveInstance_*,FSoundSource_*>,TDefaultMapHashableKeyFuncs<FWaveInstance_*,FSoundSource_*,0>,FDefaultSetAllocator>
               *)&param_1->WaveInstanceSourceMap);
  uVar32 = (ulonglong)(int)local_428;
  iVar17 = (param_1->ActiveWaveInstances).ArrayNum;
  if ((int)local_428 < iVar17) {
    pUVar47 = (USoundWave *)(uVar32 << 3);
    do {
      puVar19 = (uint *)0x0;
      uVar16 = 0;
      if ((int)(uint)uVar32 < iVar17) {
        uVar16 = ~(uint)uVar32 >> 0x1f;
      }
      local_3b0 = pUVar47;
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar39 = *(FWaveInstance **)
                 ((param_1->ActiveWaveInstances).AllocatorInstance.Data + (longlong)pUVar47);
      local_340 = pFVar39;
      pFVar3 = pFVar39->ActiveSound;
      if ((pFVar3 == (FActiveSound *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ActiveSound",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDebug.cpp"
                              ,0x95a,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar16 = ((uint)((ulonglong)pFVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar3 >> 4)) *
               -0x7a143595;
      uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
      puVar33 = puVar19;
      if (local_f8.Elements._8_4_ != local_f8.Elements._52_4_) {
        FVar34 = (ForElementType<FSetElementId>)&local_f8.Hash;
        if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar34 = local_f8.Hash.SecondaryData;
        }
        uVar16 = *(uint *)((longlong)FVar34 +
                          (ulonglong)(local_f8.HashSize - 1U & (uVar16 >> 0x10 ^ uVar16)) * 4);
        while ((puVar33 = puVar19, uVar16 != 0xffffffff &&
               (puVar33 = (uint *)(local_f8.Elements._0_8_ + (longlong)(int)uVar16 * 0x18),
               *(FActiveSound **)(local_f8.Elements._0_8_ + (longlong)(int)uVar16 * 0x18) != pFVar3)
               )) {
          uVar16 = puVar33[4];
        }
      }
      puVar42 = puVar33 + 2;
      if (puVar33 == (uint *)0x0) {
        puVar42 = puVar19;
      }
      if (puVar42 != (uint *)0x0) {
        pUVar23 = FActiveSound::GetSoundClass(pFVar3);
        pUVar21 = (pFVar39->SoundClass).field0_0x0.DebugPtr;
        local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3a8 = (USoundWave *)0x0;
        uStack_3a0 = (USoundWave *)0x0;
        local_398.Data.ArrayNum = 0;
        local_398.Data.ArrayMax = 0;
        if (pUVar21 == (USoundClass *)0x0) {
          pUVar21 = pUVar23;
        }
        local_380.ComparisonIndex.Value = 0;
        local_380.Number = 0;
        local_378 = 0;
        pTVar24 = TSet<TTuple<FWaveInstance_*,FSoundSource_*>,TDefaultMapHashableKeyFuncs<FWaveInstance_*,FSoundSource_*,0>,FDefaultSetAllocator>
                  ::Find(&local_a8,pFVar39);
        FVar10 = DebugStatNames::LongSoundNames;
        if ((pTVar24 == (TTuple<FWaveInstance_*,FSoundSource_*> *)0x0) ||
           (puVar19 = *(uint **)&pTVar24->field_0x8, puVar19 == (uint *)0x0)) {
          local_434 = local_434 | 2;
          pFVar20 = ::FString::FString(&local_1f8,L"No source");
        }
        else {
          pcVar6 = *(code **)(*(longlong *)puVar19 + 0x58);
          uVar16 = ::GetTypeHash(DebugStatNames::LongSoundNames.ComparisonIndex.Value);
          uVar16 = FVar10.Number + uVar16;
          if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
            FVar34 = (ForElementType<FSetElementId>)&local_148.Hash;
            if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar34 = local_148.Hash.SecondaryData;
            }
            for (iVar17 = *(int *)((longlong)FVar34 +
                                  (ulonglong)(local_148.HashSize - 1U & uVar16) * 4); iVar17 != -1;
                iVar17 = *(int *)(local_148.Elements._0_8_ + 8 + (longlong)iVar17 * 0x10)) {
              if (*(FName *)(local_148.Elements._0_8_ + (longlong)iVar17 * 0x10) == FVar10)
              goto LAB_14765c74e;
            }
          }
          iVar17 = -1;
LAB_14765c74e:
          local_434 = local_434 | 1;
          pFVar20 = (FString *)
                    (*pcVar6)(puVar19,local_1e8,CONCAT31((int3)(uVar16 >> 8),iVar17 != -1));
          pFVar39 = local_340;
          pUVar47 = local_3b0;
        }
        if (&local_398 != pFVar20) {
          if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_398.Data.AllocatorInstance.Data);
          }
          local_398.Data.AllocatorInstance.Data = (pFVar20->Data).AllocatorInstance.Data;
          (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_398.Data.ArrayNum = (pFVar20->Data).ArrayNum;
          local_398.Data.ArrayMax = (pFVar20->Data).ArrayMax;
          (pFVar20->Data).ArrayNum = 0;
          (pFVar20->Data).ArrayMax = 0;
        }
        uVar16 = local_434;
        if (((local_434 & 2) != 0) &&
           (uVar16 = local_434 & 0xfffffffd, local_434 = uVar16,
           local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
        if (((uVar16 & 1) != 0) && (local_434 = uVar16 & 0xfffffffe, local_1e8[0] != (void *)0x0)) {
          FMemory::Free(local_1e8[0]);
        }
        fVar48 = FWaveInstance::GetVolumeWithDistanceAndOcclusionAttenuation(pFVar39);
        local_388 = FWaveInstance::GetDynamicVolume(pFVar39);
        local_388 = fVar48 * local_388;
        local_384 = local_428;
        pFVar20 = FWaveInstance::GetName(pFVar39,&local_1d8);
        if ((pFVar20->Data).ArrayNum == 0) {
          pwVar35 = L"";
        }
        else {
          pwVar35 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        }
        ::FName::FName(&local_2c0,pwVar35);
        local_380 = local_2c0;
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        bVar15 = FActiveSound::IsPlayWhenSilent(pFVar3);
        pTVar12 = (TReferenceControllerBase<1> *)uStack_3a0;
        ppUVar25 = (USoundWave **)(puVar19 + 0x26);
        local_370 = local_370 & 0xfe | bVar15;
        if (puVar19 == (uint *)0x0) {
          ppUVar25 = &local_3a8;
        }
        local_3a8 = *ppUVar25;
        local_348 = ppUVar25[1];
        if (local_348 != (USoundWave *)0x0) {
          LOCK();
          *(int *)&local_348->_padding_ = (int)local_348->_padding_ + 1;
          UNLOCK();
        }
        uStack_20c = uStack_3a0._4_4_;
        local_210 = (undefined4)uStack_3a0;
        uStack_3a0 = local_348;
        local_350 = local_3a8;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
        local_378 = 0;
        if (pUVar21 != (USoundClass *)0x0) {
          local_378 = pUVar21->_padding_;
        }
        uVar16 = *puVar42;
        uVar43 = 0;
        if ((int)uVar16 < (int)local_418) {
          uVar43 = ~uVar16 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar37 = local_420.Data + (longlong)(int)uVar16 * 0x100 + 0xa0;
                    /* WARNING: Load size is inaccurate */
        if (((*pFVar37 <= (FScriptContainerElement *)&local_3a8) &&
            ((FScriptContainerElement *)&local_3a8 <
             *pFVar37 + (longlong)*(int *)(pFVar37 + 0xc) * 0x40)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar17 = *(int *)(pFVar37 + 8);
        if (iVar17 == *(int *)(pFVar37 + 0xc)) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x840,(ForAnyElementType *)pFVar37,(int *)(pFVar37 + 0xc));
        }
                    /* WARNING: Load size is inaccurate */
        FVar4.Data = *pFVar37;
        *(int *)(pFVar37 + 8) = iVar17 + 1;
        lVar30 = (longlong)iVar17 * 0x40;
        *(USoundWave **)(FVar4.Data + lVar30) = local_3a8;
        *(USoundWave **)(FVar4.Data + lVar30 + 8) = uStack_3a0;
        *(undefined8 *)(FVar4.Data + lVar30 + 0x10) = 0;
        *(FScriptContainerElement **)(FVar4.Data + lVar30 + 0x10) =
             local_398.Data.AllocatorInstance.Data;
        *(int *)(FVar4.Data + lVar30 + 0x18) = local_398.Data.ArrayNum;
        *(int *)(FVar4.Data + lVar30 + 0x1c) = local_398.Data.ArrayMax;
        *(float *)(FVar4.Data + lVar30 + 0x20) = local_388;
        *(uint *)(FVar4.Data + lVar30 + 0x24) = local_384;
        *(FName *)(FVar4.Data + lVar30 + 0x28) = local_380;
        *(longlong *)(FVar4.Data + lVar30 + 0x30) = local_378;
        FVar4.Data[lVar30 + 0x38] =
             (FScriptContainerElement)(local_370 & 1 | (byte)FVar4.Data[lVar30 + 0x38] & 0xfe);
        local_398.Data.ArrayNum = 0;
        local_398.Data.ArrayMax = 0;
        local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uStack_3a0 = (USoundWave *)0x0;
        local_3a8 = (USoundWave *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      pUVar47 = (USoundWave *)((longlong)pUVar47 + 8);
      local_428 = local_428 + 1;
      uVar32 = (ulonglong)local_428;
      iVar17 = (local_3b8->ActiveWaveInstances).ArrayNum;
      param_1 = local_3b8;
      local_3b0 = pUVar47;
    } while ((int)local_428 < iVar17);
  }
  local_a8.HashSize = 0;
  if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FWaveInstance_*,FSoundSource_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FWaveInstance_*,FSoundSource_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8.Elements);
  goto LAB_14765cadc;
joined_r0x00014765cbe8:
  if (uVar43 != 0) goto LAB_14765cc08;
  lVar30 = (longlong)iVar18;
  local_318 = local_318 + 0x20;
  iVar18 = iVar18 + 1;
  iStack_31c = iVar17;
  if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14765cc31;
  uVar43 = puVar19[lVar30 + 1];
  goto joined_r0x00014765cbe8;
LAB_14765cc08:
  uVar16 = ~(uVar43 - 1) & uVar43;
  uVar32 = (ulonglong)uVar16 * 2 + 1;
  lVar30 = 0x3f;
  if (uVar32 != 0) {
    for (; uVar32 >> lVar30 == 0; lVar30 = lVar30 + -1) {
    }
  }
  local_2b8._4_4_ = (undefined4)lVar30;
  iStack_31c = local_318 + -1 + local_2b8._4_4_;
  if (iVar17 < iStack_31c) {
    iStack_31c = iVar17;
  }
LAB_14765cc31:
  uVar43 = *(uint *)&pTVar26->field_0x28;
  iStack_310 = *(int *)&pTVar26->field_0x8 - *(int *)&pTVar26->field_0x34;
  uVar38 = uVar43 & 0xffffffe0;
  uStack_320 = 0xffffffff;
  uStack_330 = CONCAT44(uVar16,iVar18);
  uStack_314 = local_14c;
  TStack_260._padding_ = uStack_330;
  iVar18 = (int)uVar43 >> 5;
  uStack_240 = CONCAT44(uStack_30c,iStack_310);
  TStack_260.UnvisitedBitMask = 0xffffffff;
  TStack_260.CurrentBitIndex = iStack_31c;
  TStack_260.BaseBitIndex = local_318;
  TStack_260._28_4_ = local_14c;
  local_338 = pTVar26;
  local_328 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_268 = pTVar26;
  TStack_260.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar43 < 0) || (iVar17 < (int)uVar43)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar16 = *(uint *)&pTVar26->field_0x28;
  if (uVar43 != uVar16) {
    puVar41 = *(undefined1 **)&pTVar26->field_0x20;
    if (*(undefined1 **)&pTVar26->field_0x20 == (undefined1 *)0x0) {
      puVar41 = puVar1;
    }
    uVar43 = -1 << ((byte)uVar43 & 0x1f) & *(uint *)(puVar41 + (longlong)iVar18 * 4);
    while (uVar43 == 0) {
      lVar30 = (longlong)iVar18;
      uVar38 = uVar38 + 0x20;
      iVar18 = iVar18 + 1;
      uVar43 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14765cd43;
      uVar43 = *(uint *)(puVar41 + lVar30 * 4 + 4);
    }
    uVar32 = (ulonglong)(~(uVar43 - 1) & uVar43) * 2 + 1;
    lVar30 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar30 == 0; lVar30 = lVar30 + -1) {
      }
    }
    local_2b8._8_4_ = (undefined4)lVar30;
    uVar43 = local_2b8._8_4_ + -1 + uVar38;
    if ((int)uVar16 < (int)uVar43) {
      uVar43 = uVar16;
    }
  }
LAB_14765cd43:
  while( true ) {
    pTVar14 = local_268;
    if (*(int *)&local_268->field_0x8 - *(int *)&local_268->field_0x34 != (int)uStack_240) {
      local_436 = 0;
      `TSparseArray<TSparseSetElement<TTuple<USoundMix_*,FSoundMixState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_436);
    }
    if (((TStack_260.CurrentBitIndex == uVar43) &&
        (TStack_260.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar14 == pTVar26)) break;
    plVar36 = (longlong *)((longlong)TStack_260.CurrentBitIndex * 0x50 + *(longlong *)pTVar14);
    iVar17 = (int)local_408;
    if ((int)local_408 == local_408._4_4_) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_410,(int *)((longlong)&local_408 + 4));
    }
    local_408 = CONCAT44(local_408._4_4_,iVar17 + 1);
    DefaultConstructItems<Audio::FAudioStats::FStatSoundMix,int>
              (local_410.Data + (longlong)iVar17 * 0x20,1);
    uVar16 = 0;
    if ((int)((int)local_408 - 1U) < (int)local_408) {
      uVar16 = ~((int)local_408 - 1U) >> 0x1f;
    }
    if (uVar16 == 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar37 = local_410.Data + (longlong)(int)local_408 * 0x20 + -0x20;
    local_2a4 = *(FName *)(*plVar36 + 0x18);
    ::FName::ToString(&local_2a4,&local_368);
    if (pFVar37 != (FScriptContainerElement *)&local_368) {
      pFVar40 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar37->field_0x0)->
                AllocatorInstance).Data;
      if (pFVar40 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar40);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar37->field_0x0)->AllocatorInstance).Data
           = local_368.Data.AllocatorInstance.Data;
      *(int *)(pFVar37 + 8) = local_368.Data.ArrayNum;
      *(int *)(pFVar37 + 0xc) = local_368.Data.ArrayMax;
      local_368.Data.ArrayNum = 0;
      local_368.Data.ArrayMax = 0;
      local_368.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
    *(int *)(pFVar37 + 0x10) = (int)plVar36[8];
    *(int *)(pFVar37 + 0x14) = (int)plVar36[2] + *(int *)((longlong)plVar36 + 0xc);
    pFVar37[0x18] = (FScriptContainerElement)((USoundMix *)*plVar36 == pUVar5);
    TStack_260.UnvisitedBitMask = TStack_260.UnvisitedBitMask & ~TStack_260._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_260);
  }
  goto LAB_14765ced1;
}

// SetAudioDebugSound @ 14765e1d0

void __thiscall Audio::FAudioDebugger::SetAudioDebugSound(FAudioDebugger *this,wchar_t *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FString *pFVar4;
  FString local_48;
  code *local_38 [5];
  undefined8 *local_10;
  
  pFVar4 = ::FString::FString(&local_48,param_1);
  pFVar3 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar2 = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  local_38[0] = (code *)0x0;
  local_10 = FMemory::Malloc(0x20,8);
  local_10[1] = pFVar3;
  *local_10 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Audio::FAudioDebugger::SetAudioDebugSound'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  *(int *)(local_10 + 2) = iVar1;
  *(int *)((longlong)local_10 + 0x14) = iVar2;
  local_10[3] = this;
  if (local_10 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FAudioDebugger::SetAudioDebugSound'::__l2::<lambda_1>,void>
                  ::Call;
  }
  ExecuteCmdOnAudioThread(this,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// SetAudioMixerDebugSound @ 14765e510

void __thiscall
Audio::FAudioDebugger::SetAudioMixerDebugSound(FAudioDebugger *this,wchar_t *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FString *pFVar4;
  FString local_48;
  code *local_38 [5];
  undefined8 *local_10;
  
  pFVar4 = ::FString::FString(&local_48,param_1);
  pFVar3 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar2 = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  local_38[0] = (code *)0x0;
  local_10 = FMemory::Malloc(0x20,8);
  local_10[1] = pFVar3;
  *local_10 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Audio::FAudioDebugger::SetAudioMixerDebugSound'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  *(int *)(local_10 + 2) = iVar1;
  *(int *)((longlong)local_10 + 0x14) = iVar2;
  local_10[3] = this;
  if (local_10 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FAudioDebugger::SetAudioMixerDebugSound'::__l2::<lambda_1>,void>
                  ::Call;
  }
  ExecuteCmdOnAudioThread(this,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// SetNameArray @ 1476618e0

void __thiscall
Audio::FAudioDebugger::SetNameArray
          (FAudioDebugger *this,FName param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  undefined7 uStack_47;
  code *local_38 [5];
  undefined8 *local_10;
  
  local_38[0] = (code *)0x0;
  local_10 = FMemory::Malloc(0x20,8);
  *local_10 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Audio::FAudioDebugger::SetNameArray'::`2'::<lambda_1>,0,1>::
               _vftable_;
  *(FName *)(local_10 + 1) = param_1;
  local_10[2] = param_2;
  local_10[3] = CONCAT71(uStack_47,param_3);
  if ((FName *)(local_10 + 1) != (FName *)0x0) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FAudioDebugger::SetNameArray'::__l2::<lambda_1>,void>::
                  Call;
  }
  ExecuteCmdOnAudioThread(this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetStats @ 147662940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FAudioDebugger::SetStats
          (FAudioDebugger *this,uint param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  FAudioStats *pFVar4;
  FName *pFVar5;
  TStatId TVar6;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  undefined1 auStackY_138 [32];
  uint local_d8 [2];
  FName local_d0;
  code *local_c8 [5];
  undefined8 *local_a0;
  FAudioDebugger *local_98;
  uint local_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_d8[0] = param_1;
  bVar3 = IsInGameThread();
  if (bVar3) {
    pFVar4 = TMapBase<unsigned_int,Audio::FAudioStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>_>
             ::FindOrAddImpl<unsigned_int_const_&>
                       ((TMapBase<unsigned_int,Audio::FAudioStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats,0>_>
                         *)&AudioDeviceStats,local_d8[0],local_d8);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
              (&pFVar4->EnabledStats,param_2);
  }
  bVar3 = IsInAudioThread();
  if (bVar3) {
    this_00 = &TMapBase<unsigned_int,Audio::FAudioStats_AudioThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats_AudioThread,0>_>
               ::FindOrAddImpl<unsigned_int_const_&>
                         ((TMapBase<unsigned_int,Audio::FAudioStats_AudioThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FAudioStats_AudioThread,0>_>
                           *)&AudioDeviceStats_AudioThread,local_d8[0],local_d8)->RequestedStats;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
              (this_00,param_2);
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_STAT_AudioSetStats =
           (FThreadSafeStaticStat<_private:_void___cdecl_Audio::FAudioDebugger::SetStats(unsigned_int,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const_&)_::_8_::FStat_STAT_AudioSetStats>
            )0x0;
      pFVar5 = ::FName::FName(&local_d0,"STAT_AudioSetStats");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetStats,*pFVar5,
                 L"FAudioThreadTask.SetStats","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                 L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    TVar6.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetStats;
    if (StatPtr_STAT_AudioSetStats ==
        (FThreadSafeStaticStat<_private:_void___cdecl_Audio::FAudioDebugger::SetStats(unsigned_int,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const_&)_::_8_::FStat_STAT_AudioSetStats>
         )0x0) {
      pFVar5 = ::FName::FName(&local_d0,"STAT_AudioSetStats");
      TVar6.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetStats,*pFVar5,
                      L"FAudioThreadTask.SetStats","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                      L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_90 = local_d8[0];
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    local_98 = this;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_88,param_2);
    local_c8[0] = (code *)0x0;
    local_a0 = FMemory::Malloc(0x68,8);
    *local_a0 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FAudioDebugger::SetStats'::`8'::<lambda_1>,1,1>::
                 _vftable_;
    puVar1 = local_a0 + 1;
    *puVar1 = local_98;
    *(uint *)(local_a0 + 2) = local_90;
    *(undefined8 *)
     &((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(local_a0 + 3))->Elements = 0;
    local_a0[4] = 0;
    local_a0[7] = 0;
    *(undefined4 *)(local_a0 + 8) = 0;
    *(undefined4 *)((longlong)local_a0 + 0x44) = 0x80;
    *(undefined4 *)(local_a0 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)local_a0 + 0x4c) = 0;
    local_a0[0xb] = 0;
    *(undefined4 *)(local_a0 + 0xc) = 0;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(local_a0 + 3),
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_88);
    if (puVar1 != (undefined8 *)0x0) {
      local_c8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FAudioDebugger::SetStats'::__l8::<lambda_1>,void>::
                    Call;
    }
    FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_c8,TVar6);
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    iVar2 = SUB84(local_88._8_8_,4);
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_54 = 0;
    local_60 = 0;
    local_58 = 0xffffffff;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
  }
  return;
}

// SetStats @ 147662cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
Audio::FAudioDebugger::SetStats
          (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1,UWorld *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FAudioDeviceManager *this;
  undefined1 auStackY_e8 [32];
  code *local_b8 [5];
  undefined8 *local_90;
  FAudioDebugger *local_88;
  UWorld *local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if ((GEngine != (UEngine *)0x0) &&
     (this = UEngine::GetAudioDeviceManager(GEngine), this != (FAudioDeviceManager *)0x0)) {
    if (((this->AudioDebugger).Ptr == (FAudioDebugger *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioDebugger.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                           ,0x537,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_88 = (this->AudioDebugger).Ptr;
    local_78._0_8_ = (FScriptContainerElement *)0x0;
    local_78._8_8_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_44 = 0;
    local_38 = (ForElementType<FSetElementId>)0x0;
    local_30 = 0;
    local_4c = 0x80;
    local_48 = 0xffffffff;
    local_80 = param_2;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_78,param_1);
    local_b8[0] = (code *)0x0;
    local_90 = FMemory::Malloc(0x68,8);
    puVar1 = local_90 + 1;
    *local_90 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FAudioDebugger::SetStats'::`8'::<lambda_1>,1,1>::
                 _vftable_;
    *puVar1 = local_88;
    local_90[2] = local_80;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(local_90 + 3),
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_78);
    if (puVar1 != (undefined8 *)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FAudioDebugger::SetStats'::__l8::<lambda_1>,void,unsigned_int,FAudioDevice_*>
                    ::Call;
    }
    FAudioDeviceManager::IterateOverAllDevices
              (this,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_b8);
    local_30 = 0;
    if (local_38 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_38);
    }
    iVar3 = SUB84(local_78._8_8_,4);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
    }
    local_44 = 0;
    local_50 = 0;
    local_48 = 0xffffffff;
    if (0x80 < local_4c) {
      local_4c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  return;
}

// ToggleNameArray @ 147667dc0

void __thiscall
Audio::FAudioDebugger::ToggleNameArray
          (FAudioDebugger *this,FName param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  undefined7 uStack_47;
  code *local_38 [5];
  undefined8 *local_10;
  
  local_38[0] = (code *)0x0;
  local_10 = FMemory::Malloc(0x20,8);
  *local_10 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Audio::FAudioDebugger::ToggleNameArray'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  *(FName *)(local_10 + 1) = param_1;
  local_10[2] = param_2;
  local_10[3] = CONCAT71(uStack_47,param_3);
  if ((FName *)(local_10 + 1) != (FName *)0x0) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FAudioDebugger::ToggleNameArray'::__l2::<lambda_1>,void>
                  ::Call;
  }
  ExecuteCmdOnAudioThread(this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// ToggleSoloSoundClass @ 147668020

void __thiscall
Audio::FAudioDebugger::ToggleSoloSoundClass(FAudioDebugger *this,FName param_1,bool param_2)

{
  ToggleNameArray(this,param_1,&(this->DebugNames).SoloSoundClass,param_2);
  return;
}

// ToggleSoloSoundCue @ 147668040

void __thiscall
Audio::FAudioDebugger::ToggleSoloSoundCue(FAudioDebugger *this,FName param_1,bool param_2)

{
  ToggleNameArray(this,param_1,&(this->DebugNames).SoloSoundCue,param_2);
  return;
}

// ToggleSoloSoundWave @ 147668060

void __thiscall
Audio::FAudioDebugger::ToggleSoloSoundWave(FAudioDebugger *this,FName param_1,bool param_2)

{
  ToggleNameArray(this,param_1,&(this->DebugNames).SoloSoundWave,param_2);
  return;
}

// ToggleVisualizeDebug3dEnabled @ 147668290

void __thiscall Audio::FAudioDebugger::ToggleVisualizeDebug3dEnabled(FAudioDebugger *this)

{
  this->field_0x90 = this->field_0x90 ^ 1;
  return;
}

// UpdateAudibleInactiveSounds @ 14766cce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Audio::FAudioDebugger::UpdateAudibleInactiveSounds
          (uint param_1,TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FWaveInstance *this;
  FName FVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_AudibleWavesDroppedDueToPriority> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  FName local_res18;
  FName local_res20;
  FStatMessage local_48 [3];
  
  fVar3 = __real_38d1b717;
  uVar8 = 0;
  uVar9 = 0;
  if (param_1 != 0) {
    do {
      uVar5 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this = *(FWaveInstance **)((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8);
      fVar10 = FWaveInstance::GetVolumeWithDistanceAndOcclusionAttenuation(this);
      fVar11 = FWaveInstance::GetDynamicVolume(this);
      uVar5 = uVar8 + 1;
      if (fVar10 * fVar11 <= fVar3) {
        uVar5 = uVar8;
      }
      uVar8 = uVar5;
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_1);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar7 = StatPtr_STAT_AudibleWavesDroppedDueToPriority;
    if (StatPtr_STAT_AudibleWavesDroppedDueToPriority ==
        (FThreadSafeStaticStat<FStat_STAT_AudibleWavesDroppedDueToPriority>)0x0) {
      pFVar6 = ::FName::FName(&local_res20,"STAT_AudibleWavesDroppedDueToPriority");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_AudibleWavesDroppedDueToPriority>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudibleWavesDroppedDueToPriority
                         ,*pFVar6,L"Audible Wave Instances Dropped","STATGROUP_Audio",
                         "STATCAT_Advanced",L"Audio",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar7;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res18 = FVar1;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_48[0].NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_48[0].StatData.Pad[4] = '\0';
      local_48[0].StatData.Pad[5] = '\0';
      local_48[0].StatData.Pad[6] = '\0';
      local_48[0].StatData.Pad[7] = '\0';
      local_48[0].StatData.Pad[0] = (char)uVar8;
      local_48[0].StatData.Pad[1] = (char)(uVar8 >> 8);
      local_48[0].StatData.Pad[2] = (char)(uVar8 >> 0x10);
      local_48[0].StatData.Pad[3] = (char)(uVar8 >> 0x18);
      local_res18 = FVar1;
      local_48[0].NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,local_48);
      FStatsTrace::Set(&local_res18,(ulonglong)uVar8);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

