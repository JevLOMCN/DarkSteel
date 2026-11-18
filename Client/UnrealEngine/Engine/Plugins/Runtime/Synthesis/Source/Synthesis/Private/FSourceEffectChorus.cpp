// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 15

// Init @ 14f0e38b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSourceEffectChorus::Init(FSourceEffectChorus *this,FSoundEffectSourceInitData *param_1)

{
  uint uVar1;
  int iVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FName *pFVar5;
  undefined1 auStackY_d8 [32];
  <lambda_1> local_a8;
  FName local_a4;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  LOCK();
  *(undefined4 *)&this->field_0x5c = 1;
  UNLOCK();
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4c);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = USourceEffectChorusPreset::StaticClass();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar4->_padding_)) {
      uVar1 = param_1->AudioDeviceId;
      Audio::FModulationDestination::Init(&this->DepthMod,uVar1,true,false);
      Audio::FModulationDestination::Init(&this->FeedbackMod,uVar1,true,false);
      pFVar5 = ::FName::FName(&local_a4,"FilterFrequency");
      Audio::FModulationDestination::Init(&this->FrequencyMod,uVar1,*pFVar5,true,false);
      Audio::FModulationDestination::Init(&this->WetMod,uVar1,true,false);
      Audio::FModulationDestination::Init(&this->DryMod,uVar1,true,false);
      Audio::FModulationDestination::Init(&this->SpreadMod,uVar1,true,false);
      local_6c = 0x80;
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      local_68 = 0xffffffff;
      Algo::
      Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__FSourceEffectChorus::Init_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
                ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  *)&pUVar3[0x12].field_0x8,
                 (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                  *)local_98,local_a8);
      Audio::FModulationDestination::UpdateModulators
                (&this->DepthMod,
                 (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                  *)local_98);
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      iVar2 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      Algo::
      Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__FSourceEffectChorus::Init_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
                ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  *)&pUVar3[0x16].field_0x18,
                 (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                  *)local_98,local_a8);
      Audio::FModulationDestination::UpdateModulators
                (&this->FeedbackMod,
                 (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                  *)local_98);
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      iVar2 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      Algo::
      Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__FSourceEffectChorus::Init_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
                ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  *)&pUVar3[0x14].field_0x10,
                 (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                  *)local_98,local_a8);
      Audio::FModulationDestination::UpdateModulators
                (&this->FrequencyMod,
                 (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                  *)local_98);
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      iVar2 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      Algo::
      Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__FSourceEffectChorus::Init_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
                ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  *)&pUVar3[0x18].field_0x20,
                 (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                  *)local_98,local_a8);
      Audio::FModulationDestination::UpdateModulators
                (&this->WetMod,
                 (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                  *)local_98);
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      iVar2 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      Algo::
      Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__FSourceEffectChorus::Init_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
                ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  *)(pUVar3 + 0x1b),
                 (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                  *)local_98,local_a8);
      Audio::FModulationDestination::UpdateModulators
                (&this->DryMod,
                 (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                  *)local_98);
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      iVar2 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      Algo::
      Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__FSourceEffectChorus::Init_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
                ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  *)&pUVar3[0x1d].field_0x8,
                 (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                  *)local_98,local_a8);
      Audio::FModulationDestination::UpdateModulators
                (&this->SpreadMod,
                 (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                  *)local_98);
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      iVar2 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_64 = 0;
      local_70 = 0;
      local_68 = 0xffffffff;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
    }
  }
  Audio::FChorus::Init
            (&this->Chorus,param_1->SampleRate,param_1->NumSourceChannels,__real_40000000,0x40);
  return;
}

// OnPresetChanged @ 14f0ec710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSourceEffectChorus::OnPresetChanged(FSourceEffectChorus *this)

{
  undefined1 *lpCriticalSection;
  int iVar1;
  bool bVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FSourceEffectChorusSettings *pFVar6;
  undefined1 auStack_6d8 [32];
  undefined4 local_6b8;
  FSourceEffectChorusSettings local_6a8;
  FSourceEffectChorusSettings local_478;
  FSourceEffectChorusSettings local_248;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_6d8;
  local_6b8 = 0;
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4c);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = USourceEffectChorusPreset::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14f0ec770;
  }
  pUVar4 = (UObject *)0x0;
LAB_14f0ec770:
  if (pUVar4 == (UObject *)0x0) {
    bVar3 = false;
    bVar2 = true;
    pFVar6 = FSourceEffectChorusSettings::FSourceEffectChorusSettings(&local_248);
  }
  else {
    lpCriticalSection = &pUVar4[2].field_0x18;
    bVar3 = true;
    bVar2 = false;
    if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSourceEffectChorusSettings::FSourceEffectChorusSettings
              (&local_478,(FSourceEffectChorusSettings *)&pUVar4[3].field_0x18);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar6 = &local_478;
  }
  local_6a8.Depth = pFVar6->Depth;
  local_6a8.Frequency = pFVar6->Frequency;
  local_6a8.Feedback = pFVar6->Feedback;
  local_6a8.WetLevel = pFVar6->WetLevel;
  local_6a8.DryLevel = pFVar6->DryLevel;
  local_6a8.Spread = pFVar6->Spread;
  FSoundModulationDestinationSettings::FSoundModulationDestinationSettings
            (&local_6a8.DepthModulation,&pFVar6->DepthModulation);
  FSoundModulationDestinationSettings::FSoundModulationDestinationSettings
            (&local_6a8.FrequencyModulation,&pFVar6->FrequencyModulation);
  FSoundModulationDestinationSettings::FSoundModulationDestinationSettings
            (&local_6a8.FeedbackModulation,&pFVar6->FeedbackModulation);
  FSoundModulationDestinationSettings::FSoundModulationDestinationSettings
            (&local_6a8.WetModulation,&pFVar6->WetModulation);
  FSoundModulationDestinationSettings::FSoundModulationDestinationSettings
            (&local_6a8.DryModulation,&pFVar6->DryModulation);
  FSoundModulationDestinationSettings::FSoundModulationDestinationSettings
            (&local_6a8.SpreadModulation,&pFVar6->SpreadModulation);
  if (bVar2) {
    FSourceEffectChorusSettings::~FSourceEffectChorusSettings(&local_248);
  }
  if (bVar3) {
    FSourceEffectChorusSettings::~FSourceEffectChorusSettings(&local_478);
  }
  FSourceEffectChorusSettings::operator=(&this->SettingsCopy,&local_6a8);
  FSourceEffectChorusSettings::~FSourceEffectChorusSettings(&local_6a8);
  return;
}

// ProcessAudio @ 14f0f22c0

void __thiscall
FSourceEffectChorus::ProcessAudio
          (FSourceEffectChorus *this,FSoundEffectSourceInputData *param_1,float *param_2)

{
  FChorus *this_00;
  float fVar1;
  int iVar2;
  FModulationDestinationData *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  
  bVar5 = Audio::FModulationDestination::ProcessControl
                    (&this->DepthMod,(this->SettingsCopy).DepthModulation.Value,param_1->NumSamples)
  ;
  bVar6 = Audio::FModulationDestination::ProcessControl
                    (&this->FeedbackMod,(this->SettingsCopy).FeedbackModulation.Value,
                     param_1->NumSamples);
  bVar7 = Audio::FModulationDestination::ProcessControl
                    (&this->FrequencyMod,(this->SettingsCopy).FrequencyModulation.Value,
                     param_1->NumSamples);
  bVar8 = Audio::FModulationDestination::ProcessControl
                    (&this->WetMod,(this->SettingsCopy).WetModulation.Value,param_1->NumSamples);
  bVar9 = Audio::FModulationDestination::ProcessControl
                    (&this->DryMod,(this->SettingsCopy).DryModulation.Value,param_1->NumSamples);
  this_00 = &this->Chorus;
  bVar10 = Audio::FModulationDestination::ProcessControl
                     (&this->SpreadMod,(this->SettingsCopy).SpreadModulation.Value,
                      param_1->NumSamples);
  if (!bVar10 && (!bVar9 && (!bVar8 && (!bVar7 && (!bVar6 && !bVar5))))) {
    Audio::FChorus::ProcessAudio
              (this_00,param_1->InputSourceEffectBufferPtr,param_1->NumSamples,param_2);
    return;
  }
  uVar12 = 0;
  iVar2 = (this->Chorus).NumChannels;
  if (0 < param_1->NumSamples) {
    lVar13 = 0;
    do {
      pFVar3 = (this->WetMod).DestinationData.Object;
      uVar14 = ~uVar12 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar12 < (pFVar3->OutputBuffer).ArrayNum) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      Audio::FChorus::SetWetLevel
                (this_00,*(float *)((pFVar3->OutputBuffer).AllocatorInstance.Data + lVar13));
      pFVar3 = (this->DryMod).DestinationData.Object;
      uVar11 = 0;
      if ((int)uVar12 < (pFVar3->OutputBuffer).ArrayNum) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      Audio::FChorus::SetDryLevel
                (this_00,*(float *)((pFVar3->OutputBuffer).AllocatorInstance.Data + lVar13));
      pFVar3 = (this->SpreadMod).DestinationData.Object;
      uVar11 = 0;
      if ((int)uVar12 < (pFVar3->OutputBuffer).ArrayNum) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      Audio::FChorus::SetSpread
                (this_00,*(float *)((pFVar3->OutputBuffer).AllocatorInstance.Data + lVar13));
      pFVar3 = (this->DepthMod).DestinationData.Object;
      uVar11 = 0;
      if ((int)uVar12 < (pFVar3->OutputBuffer).ArrayNum) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar1 = *(float *)((pFVar3->OutputBuffer).AllocatorInstance.Data + lVar13);
      Audio::FChorus::SetDepth(this_00,Left,fVar1);
      Audio::FChorus::SetDepth(this_00,Center,fVar1);
      Audio::FChorus::SetDepth(this_00,Right,fVar1);
      pFVar3 = (this->FeedbackMod).DestinationData.Object;
      uVar11 = 0;
      if ((int)uVar12 < (pFVar3->OutputBuffer).ArrayNum) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar1 = *(float *)((pFVar3->OutputBuffer).AllocatorInstance.Data + lVar13);
      Audio::FChorus::SetFeedback(this_00,Left,fVar1);
      Audio::FChorus::SetFeedback(this_00,Center,fVar1);
      Audio::FChorus::SetFeedback(this_00,Right,fVar1);
      pFVar3 = (this->FrequencyMod).DestinationData.Object;
      uVar11 = 0;
      if ((int)uVar12 < (pFVar3->OutputBuffer).ArrayNum) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar1 = *(float *)((pFVar3->OutputBuffer).AllocatorInstance.Data + lVar13);
      Audio::FChorus::SetFrequency(this_00,Left,fVar1);
      Audio::FChorus::SetFrequency(this_00,Center,fVar1);
      Audio::FChorus::SetFrequency(this_00,Right,fVar1);
      Audio::FChorus::ProcessAudioFrame
                (this_00,param_1->InputSourceEffectBufferPtr + (int)uVar12,param_2 + (int)uVar12);
      lVar13 = lVar13 + (longlong)iVar2 * 4;
      uVar12 = uVar12 + iVar2;
    } while ((int)uVar12 < param_1->NumSamples);
  }
  return;
}

// SetDepthModulator @ 14f0fa0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSourceEffectChorus::SetDepthModulator(FSourceEffectChorus *this,USoundModulatorBase *param_1)

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
  Audio::FModulationDestination::UpdateModulators(&this->DepthMod,&local_68);
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

// SetDepthModulators @ 14f0fa180

void __thiscall
FSourceEffectChorus::SetDepthModulators
          (FSourceEffectChorus *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1)

{
  Audio::FModulationDestination::UpdateModulators(&this->DepthMod,param_1);
  return;
}

// SetDryModulator @ 14f0fa270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSourceEffectChorus::SetDryModulator(FSourceEffectChorus *this,USoundModulatorBase *param_1)

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
  Audio::FModulationDestination::UpdateModulators(&this->DryMod,&local_68);
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

// SetDryModulators @ 14f0fa350

void __thiscall
FSourceEffectChorus::SetDryModulators
          (FSourceEffectChorus *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1)

{
  Audio::FModulationDestination::UpdateModulators(&this->DryMod,param_1);
  return;
}

// SetFeedbackModulator @ 14f0fb190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSourceEffectChorus::SetFeedbackModulator(FSourceEffectChorus *this,USoundModulatorBase *param_1)

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
  Audio::FModulationDestination::UpdateModulators(&this->FeedbackMod,&local_68);
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

// SetFeedbackModulators @ 14f0fb270

void __thiscall
FSourceEffectChorus::SetFeedbackModulators
          (FSourceEffectChorus *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1)

{
  Audio::FModulationDestination::UpdateModulators(&this->FeedbackMod,param_1);
  return;
}

// SetFrequencyModulator @ 14f0fc180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSourceEffectChorus::SetFrequencyModulator(FSourceEffectChorus *this,USoundModulatorBase *param_1)

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
  Audio::FModulationDestination::UpdateModulators(&this->FrequencyMod,&local_68);
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

// SetFrequencyModulators @ 14f0fc260

void __thiscall
FSourceEffectChorus::SetFrequencyModulators
          (FSourceEffectChorus *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1)

{
  Audio::FModulationDestination::UpdateModulators(&this->FrequencyMod,param_1);
  return;
}

// SetSpreadModulator @ 14f102130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSourceEffectChorus::SetSpreadModulator(FSourceEffectChorus *this,USoundModulatorBase *param_1)

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
  Audio::FModulationDestination::UpdateModulators(&this->SpreadMod,&local_68);
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

// SetSpreadModulators @ 14f102210

void __thiscall
FSourceEffectChorus::SetSpreadModulators
          (FSourceEffectChorus *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1)

{
  Audio::FModulationDestination::UpdateModulators(&this->SpreadMod,param_1);
  return;
}

// SetWetModulator @ 14f1030e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSourceEffectChorus::SetWetModulator(FSourceEffectChorus *this,USoundModulatorBase *param_1)

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
  Audio::FModulationDestination::UpdateModulators(&this->WetMod,&local_68);
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

// SetWetModulators @ 14f1031c0

void __thiscall
FSourceEffectChorus::SetWetModulators
          (FSourceEffectChorus *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1)

{
  Audio::FModulationDestination::UpdateModulators(&this->WetMod,param_1);
  return;
}

