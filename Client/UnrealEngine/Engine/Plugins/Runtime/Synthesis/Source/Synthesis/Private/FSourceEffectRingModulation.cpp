// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 3

// Init @ 14f0e4eb0

void __thiscall
FSourceEffectRingModulation::Init
          (FSourceEffectRingModulation *this,FSoundEffectSourceInitData *param_1)

{
  int iVar1;
  
  LOCK();
  *(undefined4 *)&this->field_0x5c = 1;
  UNLOCK();
  iVar1 = param_1->NumSourceChannels;
  this->NumChannels = iVar1;
  Audio::FRingModulation::Init(&this->RingModulation,param_1->SampleRate,iVar1);
  this->AudioDeviceId = param_1->AudioDeviceId;
  return;
}

// OnPresetChanged @ 14f0ee600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FSourceEffectRingModulation::OnPresetChanged(FSourceEffectRingModulation *this)

{
  undefined1 *lpCriticalSection;
  FRingModulation *this_00;
  float fVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  float *pfVar9;
  FAudioDeviceManager *this_01;
  FAudioDevice *this_02;
  UAudioBusSubsystem *this_03;
  Type TVar10;
  UObject **ppUVar11;
  float *pfVar12;
  char cVar13;
  FAudioBusKey local_res8;
  TSharedPtr<Audio::FPatchOutput,1> local_a8;
  TSharedPtr<Audio::FPatchOutput,1> local_98;
  TSharedPtr<Audio::FPatchOutput,1> local_88;
  char local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  UObject *local_60;
  undefined1 local_58;
  undefined2 local_57;
  undefined1 local_55;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  UObject *local_40 [3];
  
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4c);
  TVar10 = Sine;
  if (pUVar7 != (UObject *)0x0) {
    pUVar8 = USourceEffectRingModulationPreset::StaticClass();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar8->_padding_)) goto LAB_14f0ee64e;
  }
  pUVar7 = (UObject *)0x0;
LAB_14f0ee64e:
  if (pUVar7 == (UObject *)0x0) {
    pfVar12 = (float *)&local_54;
    local_54 = ___xmm_3f800000000000003f00000042c80000;
    uStack_4c = _UNK_15314de18;
    local_57 = 0;
    puVar5 = &local_54;
    local_55 = 0;
    pfVar9 = (float *)&uStack_4c;
    local_44 = 0;
    puVar4 = &uStack_4c;
    local_58 = 0;
    ppUVar11 = local_40;
    local_40[0] = (UObject *)0x0;
    cVar13 = '\0';
  }
  else {
    lpCriticalSection = &pUVar7[2].field_0x18;
    if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_74 = *(undefined8 *)&pUVar7[3].field_0x1c;
    uStack_6c = *(undefined8 *)&pUVar7[3].field_0x24;
    cVar13 = pUVar7[3].field_0x18;
    local_60 = *(UObject **)&pUVar7[4].field_0x8;
    local_78 = cVar13;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_60);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pfVar9 = (float *)&uStack_6c;
    puVar4 = &uStack_6c;
    pfVar12 = (float *)&local_74;
    puVar5 = &local_74;
    ppUVar11 = &local_60;
  }
  pUVar7 = *ppUVar11;
  fVar1 = *pfVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  if (cVar13 != '\0') {
    if (cVar13 == '\x01') {
      TVar10 = Saw;
    }
    else if (cVar13 == '\x02') {
      TVar10 = Triangle;
    }
    else if (cVar13 == '\x03') {
      TVar10 = Square;
    }
  }
  this_00 = &this->RingModulation;
  Audio::FRingModulation::SetModulatorWaveType(this_00,TVar10);
  Audio::FRingModulation::SetModulationDepth(this_00,*(float *)((longlong)puVar5 + 4));
  Audio::FRingModulation::SetModulationFrequency(this_00,*pfVar12);
  (this->RingModulation).DryLevel = fVar1;
  Audio::FRingModulation::SetWetLevel(this_00,*(float *)((longlong)puVar4 + 4));
  this_01 = FAudioDeviceManager::Get();
  if ((pUVar7 == (UObject *)0x0) || (this_01 == (FAudioDeviceManager *)0x0)) {
    local_88.Object = (FPatchOutput *)0x0;
    local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    Audio::FRingModulation::SetExternalPatchSource(this_00,&local_88);
  }
  else {
    this_02 = FAudioDeviceManager::GetAudioDeviceRaw(this_01,this->AudioDeviceId);
    local_res8.ObjectId = *(uint *)&pUVar7->field_0xc;
    this_03 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>(this_02);
    if (this_03 == (UAudioBusSubsystem *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioBusSubsystem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SourceEffectRingModulation.cpp"
                         ,0x36,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_res8.InstanceId = 0xffffffff;
    UAudioBusSubsystem::AddPatchOutputForAudioBus
              (this_03,&local_a8,local_res8,(this_02->PlatformSettings).CallbackBufferFrameSize,
               (byte)pUVar7[1].field_0x8 + 1,__real_3f800000);
    local_98.Object = local_a8.Object;
    local_98.SharedReferenceCount.ReferenceController =
         local_a8.SharedReferenceCount.ReferenceController;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    Audio::FRingModulation::SetExternalPatchSource(this_00,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ProcessAudio @ 14f0f39f0

void __thiscall
FSourceEffectRingModulation::ProcessAudio
          (FSourceEffectRingModulation *this,FSoundEffectSourceInputData *param_1,float *param_2)

{
  Audio::FRingModulation::ProcessAudio
            (&this->RingModulation,param_1->InputSourceEffectBufferPtr,param_1->NumSamples,param_2);
  return;
}

