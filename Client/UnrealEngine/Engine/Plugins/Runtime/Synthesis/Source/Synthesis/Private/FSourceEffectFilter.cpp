// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 6

// FSourceEffectFilter @ 14f0b7f80

FSourceEffectFilter * __thiscall FSourceEffectFilter::FSourceEffectFilter(FSourceEffectFilter *this)

{
  FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this);
  this->_padding_ = -1;
  this->_padding_ = (longlong)&___7FSourceEffectFilter__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  Audio::FStateVariableFilter::FStateVariableFilter(&this->StateVariableFilter);
  Audio::FLadderFilter::FLadderFilter(&this->LadderFilter);
  Audio::FOnePoleFilter::FOnePoleFilter(&this->OnePoleFilter);
  this->CurrentFilter = (IFilter *)0x0;
  this->SampleRate = 0.0;
  this->CutoffFrequency = 8000.0;
  this->BaseCutoffFrequency = 8000.0;
  this->FilterQ = 2.0;
  this->BaseFilterQ = 2.0;
  this->CircuitType = StateVariable;
  this->FilterType = LowPass;
  (this->ScratchModBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchModBuffer).ArrayNum = 0;
  (this->ScratchModBuffer).ArrayMax = 0;
  (this->ScratchEnvFollowerBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchEnvFollowerBuffer).ArrayNum = 0;
  (this->ScratchEnvFollowerBuffer).ArrayMax = 0;
  (this->ModData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModData).ArrayNum = 0;
  (this->ModData).ArrayMax = 0;
  this->AudioInput[0] = 0.0;
  this->AudioInput[1] = 0.0;
  this->AudioOutput[0] = 0.0;
  this->AudioOutput[1] = 0.0;
  return this;
}

// ~FSourceEffectFilter @ 14f0bf2d0

void __thiscall FSourceEffectFilter::~FSourceEffectFilter(FSourceEffectFilter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSourceEffectFilter__6B_;
  DestructItems<FSourceEffectFilter::FAudioBusModulationData,int>
            ((FAudioBusModulationData *)(this->ModData).AllocatorInstance.Data,
             (this->ModData).ArrayNum);
  pFVar1 = (this->ModData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScratchEnvFollowerBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScratchModBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Audio::FOnePoleFilter::~FOnePoleFilter(&this->OnePoleFilter);
  Audio::FLadderFilter::~FLadderFilter(&this->LadderFilter);
  Audio::FStateVariableFilter::~FStateVariableFilter(&this->StateVariableFilter);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  return;
}

// Init @ 14f0e4160

void __thiscall
FSourceEffectFilter::Init(FSourceEffectFilter *this,FSoundEffectSourceInitData *param_1)

{
  int iVar1;
  
  LOCK();
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  UNLOCK();
  iVar1 = param_1->NumSourceChannels;
  this->NumChannels = iVar1;
  (**(code **)((this->StateVariableFilter)._padding_ + 8))
            (&this->StateVariableFilter,param_1->SampleRate,iVar1,0,0);
  (**(code **)((this->LadderFilter)._padding_ + 8))
            (&this->LadderFilter,param_1->SampleRate,this->NumChannels,0,0);
  (**(code **)((this->OnePoleFilter)._padding_ + 8))
            (&this->OnePoleFilter,param_1->SampleRate,this->NumChannels,0,0);
  this->SampleRate = param_1->SampleRate;
  this->AudioDeviceId = param_1->AudioDeviceId;
  UpdateFilter(this);
  return;
}

// OnPresetChanged @ 14f0ed160

void __thiscall FSourceEffectFilter::OnPresetChanged(FSourceEffectFilter *this)

{
  undefined1 *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TArray<FSourceEffectFilter::FAudioBusModulationData,TSizedDefaultAllocator<32>_> *pTVar3;
  float fVar4;
  float fVar5;
  ESourceEffectFilterType EVar6;
  int iVar7;
  uint uVar8;
  FSourceEffectFilterAudioBusModulationSettings *pFVar9;
  FScriptContainerElement *pFVar10;
  FAudioBusModulationData *pFVar11;
  code *pcVar12;
  FAudioBusKey FVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  UObject *pUVar17;
  UClass *pUVar18;
  ForAnyElementType *pFVar19;
  FAudioDeviceManager *this_00;
  FAudioDevice *this_01;
  UAudioBusSubsystem *this_02;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar20;
  ESourceEffectFilterType *pEVar21;
  float *pfVar22;
  ESourceEffectFilterCircuit EVar23;
  FScriptContainerElement *pFVar24;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar25;
  float *pfVar26;
  TSharedPtr<Audio::FPatchOutput,1> local_e0;
  FEnvelopeFollowerInitParams local_d0;
  ESourceEffectFilterCircuit local_b0;
  ESourceEffectFilterType local_af [3];
  float local_ac;
  float local_a8 [2];
  ForAnyElementType local_a0;
  int local_98;
  int local_94;
  undefined4 local_90;
  ESourceEffectFilterType aEStack_8f [3];
  float local_8c;
  float local_88 [2];
  ForAnyElementType local_80;
  undefined8 local_78;
  
  pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (pUVar17 != (UObject *)0x0) {
    pUVar18 = USourceEffectFilterPreset::StaticClass();
    iVar7 = (int)pUVar18->_padding_;
    if ((iVar7 <= *(int *)(*(longlong *)&pUVar17->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar17->field_0x10 + 0x30) + (longlong)iVar7 * 8) ==
        &pUVar18->_padding_)) goto LAB_14f0ed1b4;
  }
  pUVar17 = (UObject *)0x0;
LAB_14f0ed1b4:
  if (pUVar17 == (UObject *)0x0) {
    local_90 = 1;
    pEVar21 = aEStack_8f;
    local_88[0] = 2.0;
    local_88[1] = 0.0;
    pfVar22 = &local_8c;
    bVar14 = false;
    bVar15 = true;
    local_8c = 800.0;
    local_80.Data = (FScriptContainerElement *)0x0;
    pfVar26 = local_88;
    local_78 = 0;
    pFVar19 = &local_80;
    EVar23 = StateVariable;
  }
  else {
    lpCriticalSection = &pUVar17[2].field_0x18;
    bVar14 = true;
    bVar15 = false;
    if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_b0 = pUVar17[3].field_0x18;
    iVar7 = *(int *)&pUVar17[4].field_0x8;
    local_ac = *(float *)&pUVar17[3].field_0x1c;
    local_a8[0] = *(float *)&pUVar17[3].field_0x20;
    local_af[0] = pUVar17[3].field_0x19;
    pFVar9 = *(FSourceEffectFilterAudioBusModulationSettings **)(pUVar17 + 4);
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_98 = iVar7;
    if (iVar7 == 0) {
      local_94 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar7,0,&local_a0,iVar7,&local_94);
      ConstructItems<FSourceEffectFilterAudioBusModulationSettings,FSourceEffectFilterAudioBusModulationSettings,int>
                (local_a0.Data,pFVar9,iVar7);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pEVar21 = local_af;
    pfVar22 = &local_ac;
    pfVar26 = local_a8;
    pFVar19 = &local_a0;
    EVar23 = local_b0;
  }
  EVar6 = *pEVar21;
  pFVar10 = pFVar19->Data;
  fVar4 = *pfVar22;
  fVar5 = *pfVar26;
  pFVar19->Data = (FScriptContainerElement *)0x0;
  iVar7 = *(int *)&pFVar19[1].Data;
  pFVar19[1].Data = (FScriptContainerElement *)0x0;
  if (bVar15) {
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
  }
  if ((bVar14) && (local_a0.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a0.Data);
  }
  this->FilterType = EVar6;
  pTVar3 = &this->ModData;
  this->FilterQ = fVar5;
  piVar1 = &(this->ModData).ArrayMax;
  this->CutoffFrequency = fVar4;
  this->BaseCutoffFrequency = fVar4;
  this->CircuitType = EVar23;
  pFVar11 = (FAudioBusModulationData *)(pTVar3->AllocatorInstance).Data;
  iVar16 = (this->ModData).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FSourceEffectFilter::FAudioBusModulationData,int>(pFVar11,iVar16);
    (this->ModData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,8,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FSourceEffectFilter::FAudioBusModulationData,int>(pFVar11,iVar16);
    (this->ModData).ArrayNum = 0;
  }
  this_00 = FAudioDeviceManager::Get();
  if ((this_00 != (FAudioDeviceManager *)0x0) && (0 < iVar7)) {
    this_01 = FAudioDeviceManager::GetAudioDeviceRaw(this_00,this->AudioDeviceId);
    fVar4 = __real_3f800000;
    if (this_01 != (FAudioDevice *)0x0) {
      for (pFVar24 = pFVar10 + 0x1c; pFVar2 = pFVar24 + -0x1c,
          pFVar2 != pFVar10 + (longlong)iVar7 * 0x28; pFVar24 = pFVar24 + 0x28) {
        if (*(longlong *)pFVar2 != 0) {
          iVar16 = (this->ModData).ArrayNum;
          if (iVar16 == *piVar1) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x890,&pTVar3->AllocatorInstance,piVar1);
          }
          (this->ModData).ArrayNum = iVar16 + 1;
          pTVar25 = (TSharedPtr<Audio::FPatchOutput,1> *)
                    ((pTVar3->AllocatorInstance).Data + (longlong)iVar16 * 0x90);
          DefaultConstructItems<FSourceEffectFilter::FAudioBusModulationData,int>(pTVar25,1);
          uVar8 = *(uint *)(*(longlong *)pFVar2 + 0xc);
          this_02 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>(this_01);
          if (this_02 == (UAudioBusSubsystem *)0x0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("AudioBusSubsystem",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SourceEffectFilter.cpp"
                                ,0x79,L"");
            if (bVar15) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
          FVar13.InstanceId = 0xffffffff;
          FVar13.ObjectId = uVar8;
          pTVar20 = UAudioBusSubsystem::AddPatchOutputForAudioBus
                              (this_02,&local_e0,FVar13,
                               (this_01->PlatformSettings).CallbackBufferFrameSize,
                               *(byte *)(*(longlong *)pFVar2 + 0x30) + 1,fVar4);
          if (pTVar25 != pTVar20) {
            pTVar25->Object = pTVar20->Object;
            pTVar20->Object = (FPatchOutput *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&pTVar25->SharedReferenceCount,&pTVar20->SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e0.SharedReferenceCount.ReferenceController);
          *(undefined4 *)((longlong)&pTVar25[7].SharedReferenceCount.ReferenceController + 4) =
               *(undefined4 *)(pFVar24 + -4);
          *(undefined4 *)&pTVar25[8].Object = *(undefined4 *)pFVar24;
          *(undefined4 *)((longlong)&pTVar25[8].Object + 4) = *(undefined4 *)(pFVar24 + 4);
          *(undefined4 *)&pTVar25[8].SharedReferenceCount.ReferenceController =
               *(undefined4 *)(pFVar24 + 8);
          *(undefined4 *)((longlong)&pTVar25[8].SharedReferenceCount.ReferenceController + 4) =
               *(undefined4 *)(pFVar24 + -0xc);
          local_d0.SampleRate = this->SampleRate;
          local_d0.ReleaseTimeMsec = (float)*(int *)(pFVar24 + -0x10);
          local_d0.Mode = Peak;
          local_d0.bIsAnalog = true;
          local_d0.AnalysisWindowMsec = 5.0;
          local_d0.NumChannels = 1;
          local_d0.AttackTimeMsec = (float)*(int *)(pFVar24 + -0x14);
          Audio::FEnvelopeFollower::Init((FEnvelopeFollower *)(pTVar25 + 1),&local_d0);
        }
      }
    }
  }
  UpdateFilter(this);
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  return;
}

// ProcessAudio @ 14f0f2dc0

void __thiscall
FSourceEffectFilter::ProcessAudio
          (FSourceEffectFilter *this,FSoundEffectSourceInputData *param_1,float *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar3;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float _X;
  float fVar10;
  bool bVar11;
  int iVar12;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar13;
  ulonglong uVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  FEnvelopeFollower *this_00;
  FScriptContainerElement *pFVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res8 [8];
  uint local_res10;
  float *local_res18;
  FScriptContainerElement *local_res20;
  undefined4 uStack_ec;
  TArrayView<float,int> local_e8 [10];
  
  fVar10 = __real_3daaaaab;
  _X = __real_40000000;
  fVar9 = __real_3dcccccd;
  fVar8 = __real_3f000000;
  fVar7 = __real_41200000;
  fVar6 = __real_3f800000;
  pFVar17 = (this->ModData).AllocatorInstance.Data;
  local_res10 = (this->ModData).ArrayNum;
  uVar14 = (ulonglong)(int)local_res10;
  this_00 = (FEnvelopeFollower *)(pFVar17 + 0x10);
  fVar19 = 0.0;
  fVar20 = 0.0;
  pFVar16 = pFVar17 + uVar14 * 0x90;
  local_res18 = param_2;
  local_res20 = pFVar16;
  do {
    if ((this->ModData).ArrayNum != (int)uVar14) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSourceEffectFilter::FAudioBusModulationData,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar17 == pFVar16) {
                    /* WARNING: Could not recover jumptable at 0x00014f0f321a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->CurrentFilter->_padding_ + 0x70))
                (this->CurrentFilter,param_1->InputSourceEffectBufferPtr,param_1->NumSamples,
                 local_res18);
      return;
    }
    if (*(longlong *)pFVar17 != 0) {
      pTVar3 = &this->ScratchModBuffer;
      piVar1 = &(this->ScratchModBuffer).ArrayMax;
      (this->ScratchModBuffer).ArrayNum = 0;
      if ((this->ScratchModBuffer).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,&pTVar3->AllocatorInstance,0,piVar1);
      }
      iVar15 = param_1->NumSamples * this->NumChannels;
      iVar12 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                         (4,4,iVar15,&pTVar3->AllocatorInstance,&(this->ScratchModBuffer).ArrayNum,
                          piVar1);
      memset((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 4,0,(longlong)iVar15 << 2);
      if ((*(longlong *)pFVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      Audio::FPatchOutput::PopAudio
                (*(FPatchOutput **)pFVar17,(float *)(pTVar3->AllocatorInstance).Data,
                 (this->ScratchModBuffer).ArrayNum,true);
      if (this->NumChannels == 2) {
        pTVar4 = &this->ScratchEnvFollowerBuffer;
        piVar1 = &(this->ScratchEnvFollowerBuffer).ArrayMax;
        (this->ScratchEnvFollowerBuffer).ArrayNum = 0;
        piVar2 = &(this->ScratchEnvFollowerBuffer).ArrayNum;
        if ((this->ScratchEnvFollowerBuffer).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,0,&pTVar4->AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,param_1->NumSamples,&pTVar4->AllocatorInstance,piVar2,piVar1);
        Audio::BufferSum2ChannelToMonoFast(pTVar3,pTVar4);
        pFVar16 = (pTVar4->AllocatorInstance).Data;
        iVar12 = *piVar2;
        if ((iVar12 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_e8[0]._12_4_ = uStack_ec;
        local_e8[0].ArrayNum = iVar12;
        local_e8[0].DataPtr = (float *)pFVar16;
        Audio::ArrayMultiplyByConstantInPlace(local_e8,fVar8);
        Audio::FEnvelopeFollower::ProcessAudio
                  (this_00,(float *)(pTVar4->AllocatorInstance).Data,param_1->NumSamples);
      }
      else if (this->NumChannels == 1) {
        Audio::FEnvelopeFollower::ProcessAudio
                  (this_00,(float *)(pTVar3->AllocatorInstance).Data,param_1->NumSamples);
      }
      else {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SourceEffectFilter.cpp"
                            ,0xb5,L"");
        if (bVar11) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pTVar13 = Audio::FEnvelopeFollower::GetEnvelopeValues(this_00);
      if (pTVar13->ArrayNum == 1) {
        fVar18 = *(float *)(pTVar13->AllocatorInstance).Data;
        if (fVar6 <= fVar18) {
          fVar18 = fVar6;
        }
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
      }
      else {
        bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4301264435315474617>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SourceEffectFilter.cpp"
                            ,0xb9,"CurrentEnvelopeValues.Num() == 1");
        if (bVar11) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar18 = 0.0;
      }
      fVar18 = fVar18 * (float)this_00[1].MeanSquaredProcessor.NumChannels;
      if (fVar6 <= fVar18) {
        fVar18 = fVar6;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      if (*(char *)&this_00[1].WorkBuffer.AllocatorInstance.Data == '\0') {
        fVar19 = fVar19 + fVar18 * ((float)this_00[1].WorkBuffer.ArrayNum -
                                   *(float *)((longlong)
                                              &this_00[1].WorkBuffer.AllocatorInstance.Data + 4)) +
                          *(float *)((longlong)&this_00[1].WorkBuffer.AllocatorInstance.Data + 4);
      }
      else {
        fVar20 = fVar20 + fVar18 * (this_00[1].MeanSquaredProcessor.SampleRate -
                                   (float)this_00[1].WorkBuffer.ArrayMax) +
                          (float)this_00[1].WorkBuffer.ArrayMax;
      }
      fVar18 = fVar6;
      if (fVar19 != 0.0) {
        fVar18 = powf(_X,fVar19 * fVar10);
      }
      this->CutoffFrequency = fVar18 * this->BaseCutoffFrequency;
      fVar18 = fVar20 + this->BaseFilterQ;
      if (fVar7 <= fVar18) {
        fVar18 = fVar7;
      }
      if (fVar18 <= fVar9) {
        fVar18 = fVar9;
      }
      this->FilterQ = fVar18;
      UpdateFilter(this);
      pFVar16 = local_res20;
    }
    uVar14 = (ulonglong)local_res10;
    pFVar17 = pFVar17 + 0x90;
    this_00 = (FEnvelopeFollower *)&this_00[1].MeanSquaredProcessor.ChannelValues.ArrayNum;
  } while( true );
}

// UpdateFilter @ 14f107460

void __thiscall FSourceEffectFilter::UpdateFilter(FSourceEffectFilter *this)

{
  ESourceEffectFilterCircuit EVar1;
  ESourceEffectFilterType EVar2;
  longlong lVar3;
  IFilter *pIVar4;
  undefined8 uVar5;
  
  EVar1 = this->CircuitType;
  if (EVar1 == OnePole) {
LAB_14f10748c:
    lVar3 = 0x450;
  }
  else if (EVar1 == StateVariable) {
    lVar3 = 0x88;
  }
  else {
    if (EVar1 != Ladder) goto LAB_14f10748c;
    lVar3 = 0x130;
  }
  pIVar4 = (IFilter *)((longlong)&this->_padding_ + lVar3);
  this->CurrentFilter = pIVar4;
  EVar2 = this->FilterType;
  if (EVar2 != LowPass) {
    if (EVar2 == HighPass) {
      uVar5 = 1;
      goto LAB_14f1074cc;
    }
    if (EVar2 == BandPass) {
      uVar5 = 2;
      goto LAB_14f1074cc;
    }
    if (EVar2 == BandStop) {
      uVar5 = 3;
      goto LAB_14f1074cc;
    }
  }
  uVar5 = 0;
LAB_14f1074cc:
  (**(code **)(pIVar4->_padding_ + 0x48))(pIVar4,uVar5);
  (**(code **)(this->CurrentFilter->_padding_ + 0x10))(this->CurrentFilter,this->CutoffFrequency);
  (**(code **)(this->CurrentFilter->_padding_ + 0x20))(this->CurrentFilter,this->FilterQ);
                    /* WARNING: Could not recover jumptable at 0x00014f10750b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->CurrentFilter->_padding_ + 0x58))();
  return;
}

