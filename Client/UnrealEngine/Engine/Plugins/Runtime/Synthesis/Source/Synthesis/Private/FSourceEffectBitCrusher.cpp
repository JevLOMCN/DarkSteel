// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 7

// Init @ 14f0e35f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSourceEffectBitCrusher::Init(FSourceEffectBitCrusher *this,FSoundEffectSourceInitData *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FName *pFVar4;
  undefined1 auStackY_b8 [32];
  <lambda_1> local_88;
  FName local_84;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  LOCK();
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  UNLOCK();
  Audio::FBitCrusher::Init(&this->BitCrusher,param_1->SampleRate,param_1->NumSourceChannels);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = USourceEffectBitCrusherPreset::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      pFVar4 = ::FName::FName(&local_84,"BitDepth");
      Audio::FModulationDestination::Init(&this->BitMod,param_1->AudioDeviceId,*pFVar4,false,false);
      pFVar4 = ::FName::FName(&local_84,"SampleRate");
      Audio::FModulationDestination::Init
                (&this->SampleRateMod,param_1->AudioDeviceId,*pFVar4,false,false);
      local_4c = 0x80;
      local_78._0_8_ = (FScriptContainerElement *)0x0;
      local_78._8_8_ = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      local_44 = 0;
      local_38 = (ForElementType<FSetElementId>)0x0;
      local_30 = 0;
      local_48 = 0xffffffff;
      Algo::
      Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__FSourceEffectBitCrusher::Init_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
                ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  *)&pUVar2[10].field_0x10,
                 (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                  *)local_78,local_88);
      Audio::FModulationDestination::UpdateModulators
                (&this->BitMod,
                 (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                  *)local_78);
      local_30 = 0;
      if (local_38 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_38);
      }
      iVar1 = SUB84(local_78._8_8_,4);
      local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
      if (iVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
      }
      local_48 = 0xffffffff;
      local_44 = 0;
      local_50 = 0;
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
      local_78._0_8_ = (FScriptContainerElement *)0x0;
      local_78._8_8_ = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      local_4c = 0x80;
      local_48 = 0xffffffff;
      local_44 = 0;
      local_38 = (ForElementType<FSetElementId>)0x0;
      local_30 = 0;
      Algo::
      Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__FSourceEffectBitCrusher::Init_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
                ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  *)&pUVar2[8].field_0x8,
                 (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                  *)local_78,local_88);
      Audio::FModulationDestination::UpdateModulators
                (&this->SampleRateMod,
                 (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                  *)local_78);
      local_30 = 0;
      if (local_38 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_38);
      }
      iVar1 = SUB84(local_78._8_8_,4);
      local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
      if (iVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
      }
      local_48 = 0xffffffff;
      local_44 = 0;
      local_50 = 0;
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
  }
  return;
}

// OnPresetChanged @ 14f0ec250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FSourceEffectBitCrusher::OnPresetChanged(FSourceEffectBitCrusher *this)

{
  undefined1 *lpCriticalSection;
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  ForAnyElementType FVar6;
  undefined1 auStackY_278 [32];
  undefined1 local_238 [8];
  undefined1 local_230 [32];
  void *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  ForElementType<FSetElementId> local_1f0;
  int local_1e8;
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [32];
  void *local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  ForElementType<FSetElementId> local_198;
  int local_190;
  undefined1 local_188 [8];
  ForAnyElementType local_180;
  undefined8 local_178;
  TBitArray<FDefaultBitArrayAllocator> local_170;
  undefined8 uStack_150;
  ForElementType<FSetElementId> local_140;
  int local_138;
  undefined1 local_130 [8];
  ForAnyElementType local_128;
  undefined8 local_120;
  TBitArray<FDefaultBitArrayAllocator> local_118;
  undefined4 local_f8;
  undefined4 local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  FSoundModulationDestinationSettings local_d8;
  FSoundModulationDestinationSettings local_80;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = USourceEffectBitCrusherPreset::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14f0ec2b6;
  }
  pUVar4 = (UObject *)0x0;
LAB_14f0ec2b6:
  if (pUVar4 == (UObject *)0x0) {
    local_170.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_170.MaxBits = _UNK_150631d94;
    uStack_150 = _UNK_150631d98;
    local_180.Data = (FScriptContainerElement *)0x0;
    local_178 = 0;
    local_170.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_140 = (ForElementType<FSetElementId>)0x0;
    local_138 = 0;
    local_128.Data = (FScriptContainerElement *)0x0;
    local_120 = 0;
    local_118.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_118.NumBits = 0;
    local_118.MaxBits = 0x80;
    local_f8 = 0xffffffff;
    local_f4 = 0;
    local_e8 = (ForElementType<FSetElementId>)0x0;
    local_e0 = 0;
    local_188._0_4_ = 8000.0;
    local_130._0_4_ = 8.0;
    FSoundModulationDestinationSettings::FSoundModulationDestinationSettings
              (&local_d8,(FSoundModulationDestinationSettings *)local_188);
    FSoundModulationDestinationSettings::FSoundModulationDestinationSettings
              (&local_80,(FSoundModulationDestinationSettings *)local_130);
    local_e0 = 0;
    if (local_e8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8);
    }
    uVar2 = local_120 >> 0x20;
    local_120 = local_120 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_128,0,(int *)((longlong)&local_120 + 4));
    }
    local_f8 = 0xffffffff;
    local_f4 = 0;
    local_118.NumBits = 0;
    if (0x80 < (uint)local_118.MaxBits) {
      local_118.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_118,0);
    }
    if (local_118.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_118.AllocatorInstance.SecondaryData);
    }
    if (local_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data);
    }
    local_138 = 0;
    if (local_140 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_140);
    }
    uVar2 = local_178 >> 0x20;
    local_178 = local_178 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_180,0,(int *)((longlong)&local_178 + 4));
    }
    iVar1 = local_170.MaxBits;
    uStack_150 = 0xffffffff;
    local_170._24_8_ = (ulonglong)(uint)local_170.MaxBits << 0x20;
    if (0x80 < (uint)iVar1) {
      local_170.NumBits = 0;
      local_170.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_170,0);
    }
    FVar6.Data = local_180.Data;
    if (local_170.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_170.AllocatorInstance.SecondaryData);
      FVar6.Data = local_180.Data;
    }
  }
  else {
    lpCriticalSection = &pUVar4[2].field_0x18;
    if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_238._0_4_ = *(undefined4 *)&pUVar4[3].field_0x18;
    local_208._0_4_ = ___xmm_00000000ffffffff0000008000000000;
    local_208._4_4_ = _UNK_150631d94;
    uStack_200 = _UNK_150631d98;
    local_230._0_8_ = (FScriptContainerElement *)0x0;
    local_230._8_8_ = 0;
    local_210 = (void *)0x0;
    local_1f0 = (ForElementType<FSetElementId>)0x0;
    local_1e8 = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)local_230,
                (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)&pUVar4[3].field_0x20);
    local_1e0._0_4_ = *(undefined4 *)&pUVar4[5].field_0x20;
    local_1d8._0_8_ = (FScriptContainerElement *)0x0;
    local_1d8._8_8_ = 0;
    local_1b8 = (void *)0x0;
    local_1b0 = 0;
    local_1ac = 0x80;
    local_1a8 = 0xffffffff;
    local_1a4 = 0;
    local_198 = (ForElementType<FSetElementId>)0x0;
    local_190 = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)local_1d8,
                (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)(pUVar4 + 6));
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSoundModulationDestinationSettings::FSoundModulationDestinationSettings
              (&local_d8,(FSoundModulationDestinationSettings *)local_238);
    FSoundModulationDestinationSettings::FSoundModulationDestinationSettings
              (&local_80,(FSoundModulationDestinationSettings *)local_1e0);
    local_190 = 0;
    if (local_198 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_198);
    }
    iVar1 = SUB84(local_1d8._8_8_,4);
    local_1d8._8_8_ = local_1d8._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_1d8,0,(int *)(local_1d8 + 0xc));
    }
    local_1a8 = 0xffffffff;
    local_1a4 = 0;
    local_1b0 = 0;
    if (0x80 < local_1ac) {
      local_1ac = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),0);
    }
    if (local_1b8 != (void *)0x0) {
      FMemory::Free(local_1b8);
    }
    if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1d8._0_8_);
    }
    local_1e8 = 0;
    if (local_1f0 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1f0);
    }
    iVar1 = SUB84(local_230._8_8_,4);
    local_230._8_8_ = local_230._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_230,0,(int *)(local_230 + 0xc));
    }
    uVar3 = local_208._4_4_;
    uStack_200 = 0xffffffff;
    local_208 = (ulonglong)local_208._4_4_ << 0x20;
    if (0x80 < uVar3) {
      local_208 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_230 + 0x10),0);
    }
    FVar6.Data = (FScriptContainerElement *)local_230._0_8_;
    if (local_210 != (void *)0x0) {
      FMemory::Free(local_210);
      FVar6.Data = (FScriptContainerElement *)local_230._0_8_;
    }
  }
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  (this->SettingsCopy).SampleRateModulation.Value = local_d8.Value;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(&(this->SettingsCopy).SampleRateModulation.Modulators,&local_d8.Modulators);
  (this->SettingsCopy).BitModulation.Value = local_80.Value;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(&(this->SettingsCopy).BitModulation.Modulators,&local_80.Modulators);
  local_80.Modulators.HashSize = 0;
  if (local_80.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_80.Modulators.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_80.Modulators.Elements);
  local_d8.Modulators.HashSize = 0;
  if (local_d8.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8.Modulators.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d8.Modulators.Elements);
  return;
}

// ProcessAudio @ 14f0f21f0

void __thiscall
FSourceEffectBitCrusher::ProcessAudio
          (FSourceEffectBitCrusher *this,FSoundEffectSourceInputData *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = Audio::FModulationDestination::ProcessControl
                    (&this->BitMod,(this->SettingsCopy).BitModulation.Value,0);
  if (bVar1) {
    Audio::FBitCrusher::SetBitDepthCrush
              (&this->BitCrusher,((this->BitMod).DestinationData.Object)->ValueTarget);
  }
  bVar1 = Audio::FModulationDestination::ProcessControl
                    (&this->SampleRateMod,(this->SettingsCopy).SampleRateModulation.Value,0);
  if (bVar1) {
    Audio::FBitCrusher::SetSampleRateCrush
              (&this->BitCrusher,((this->SampleRateMod).DestinationData.Object)->ValueTarget);
  }
  Audio::FBitCrusher::ProcessAudio
            (&this->BitCrusher,param_1->InputSourceEffectBufferPtr,param_1->NumSamples,param_2);
  return;
}

// SetBitModulator @ 14f0f90a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSourceEffectBitCrusher::SetBitModulator(FSourceEffectBitCrusher *this,USoundModulatorBase *param_1)

{
  undefined1 auStack_a8 [32];
  USoundModulatorBase *local_88;
  USoundModulatorBase *local_80;
  initializer_list<USoundModulatorBase_const_*> local_78;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78._First = &local_88;
  local_78._Last = &local_80;
  local_88 = param_1;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  ::
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
            (&local_68,&local_78);
  Audio::FModulationDestination::UpdateModulators(&this->BitMod,&local_68);
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return;
}

// SetBitModulators @ 14f0f9180

void __thiscall
FSourceEffectBitCrusher::SetBitModulators
          (FSourceEffectBitCrusher *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1)

{
  Audio::FModulationDestination::UpdateModulators(&this->BitMod,param_1);
  return;
}

// SetSampleRateModulator @ 14f100c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSourceEffectBitCrusher::SetSampleRateModulator
          (FSourceEffectBitCrusher *this,USoundModulatorBase *param_1)

{
  undefined1 auStack_a8 [32];
  USoundModulatorBase *local_88;
  USoundModulatorBase *local_80;
  initializer_list<USoundModulatorBase_const_*> local_78;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78._First = &local_88;
  local_78._Last = &local_80;
  local_88 = param_1;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  ::
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
            (&local_68,&local_78);
  Audio::FModulationDestination::UpdateModulators(&this->SampleRateMod,&local_68);
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return;
}

// SetSampleRateModulators @ 14f100d30

void __thiscall
FSourceEffectBitCrusher::SetSampleRateModulators
          (FSourceEffectBitCrusher *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1)

{
  Audio::FModulationDestination::UpdateModulators(&this->SampleRateMod,param_1);
  return;
}

