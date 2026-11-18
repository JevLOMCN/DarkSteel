// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 4

// ~FSourceEffectEnvelopeFollower @ 14f0bf220

void __thiscall
FSourceEffectEnvelopeFollower::~FSourceEffectEnvelopeFollower(FSourceEffectEnvelopeFollower *this)

{
  code *pcVar1;
  bool bVar2;
  code *local_38 [2];
  undefined **local_28;
  FSourceEffectEnvFollowerNotifier *local_20;
  uint local_18;
  uint local_14;
  undefined8 local_10;
  
  this->_padding_ = (longlong)&___7FSourceEffectEnvelopeFollower__6B_;
  if ((SourceEffectEnvFollowerNotifier.Object == (FSourceEffectEnvFollowerNotifier *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__RemoveEnvFollowerInstance_FSourceEffectEnvFollowerNotifier__QEAAXII_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_18 = this->OwningPresetUniqueId;
  local_14 = this->InstanceId;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FSourceEffectEnvFollowerNotifier::RemoveEnvFollowerInstance'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = SourceEffectEnvFollowerNotifier.Object;
  FSourceEffectEnvFollowerNotifier::PushToCommandQueue
            (SourceEffectEnvFollowerNotifier.Object,(TFunction<void___cdecl(void)> *)local_38);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  return;
}

// Init @ 14f0e4010

void __thiscall
FSourceEffectEnvelopeFollower::Init
          (FSourceEffectEnvelopeFollower *this,FSoundEffectSourceInitData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FInlineEnvelopeFollower *this_00;
  code *local_38 [2];
  undefined **local_28;
  FSourceEffectEnvFollowerNotifier *local_20;
  uint local_18;
  uint local_14;
  undefined8 local_10;
  
  this->InstanceId = GInstanceId;
  GInstanceId = GInstanceId + 1;
  InitEnvelopeFollowerNotifier();
  this->OwningPresetUniqueId = param_1->ParentPresetUniqueId;
  if ((SourceEffectEnvFollowerNotifier.Object == (FSourceEffectEnvFollowerNotifier *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__AddEnvFollowerInstance_FSourceEffectEnvFollowerNotifier__QEAAXII_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_18 = this->OwningPresetUniqueId;
  local_14 = this->InstanceId;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FSourceEffectEnvFollowerNotifier::AddEnvFollowerInstance'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = SourceEffectEnvFollowerNotifier.Object;
  FSourceEffectEnvFollowerNotifier::PushToCommandQueue
            (SourceEffectEnvFollowerNotifier.Object,(TFunction<void___cdecl(void)> *)local_38);
  this->FramesToNotify = 0x400;
  this->FrameCount = 0;
  LOCK();
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  UNLOCK();
  this->CurrentEnvelopeValue = 0.0;
  this->NumChannels = param_1->NumSourceChannels;
  this_00 = &this->EnvelopeFollower;
  Audio::FAttackRelease::SetSampleRate((FAttackRelease *)this_00,param_1->SampleRate);
  Audio::FAttackRelease::SetAttackTime((FAttackRelease *)this_00,__real_41200000);
  Audio::FAttackRelease::SetReleaseTime((FAttackRelease *)this_00,__real_42c80000);
  (this->EnvelopeFollower).Mode = Peak;
  Audio::FAttackRelease::SetAnalog((FAttackRelease *)this_00,true);
  Audio::FInlineEnvelopeFollower::SetAnalysisWindow(this_00,__real_40a00000);
  return;
}

// OnPresetChanged @ 14f0ed050

void __thiscall FSourceEffectEnvelopeFollower::OnPresetChanged(FSourceEffectEnvelopeFollower *this)

{
  undefined1 *lpCriticalSection;
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  undefined8 local_38;
  Type local_20;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = USourceEffectEnvelopeFollowerPreset::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      lpCriticalSection = &pUVar2[2].field_0x18;
      if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_38 = *(undefined8 *)&pUVar2[3].field_0x18;
      local_20 = *(Type *)&pUVar2[3].field_0x20;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_14f0ed0f9;
    }
  }
  local_20 = 0x102;
  local_38 = CONCAT44(__real_42c80000,__real_41200000);
LAB_14f0ed0f9:
  Audio::FAttackRelease::SetAnalog((FAttackRelease *)&this->EnvelopeFollower,SUB41(local_20 >> 8,0))
  ;
  Audio::FAttackRelease::SetAttackTime((FAttackRelease *)&this->EnvelopeFollower,(float)local_38);
  Audio::FAttackRelease::SetReleaseTime((FAttackRelease *)&this->EnvelopeFollower,local_38._4_4_);
  (this->EnvelopeFollower).Mode = local_20 & 0xff;
  return;
}

// ProcessAudio @ 14f0f2aa0

void __thiscall
FSourceEffectEnvelopeFollower::ProcessAudio
          (FSourceEffectEnvelopeFollower *this,FSoundEffectSourceInputData *param_1,float *param_2)

{
  float fVar1;
  uint uVar2;
  Type TVar3;
  uint uVar4;
  code *pcVar5;
  longlong *plVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  FSourceEffectEnvFollowerNotifier *this_00;
  bool bVar10;
  ulonglong uVar11;
  float *pfVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined8 local_a8;
  code *local_98 [5];
  undefined8 *local_70;
  
  memcpy(param_2,param_1->InputSourceEffectBufferPtr,(longlong)param_1->NumSamples << 2);
  fVar9 = __real_3f000000;
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar7 = __real_3f800000;
  iVar13 = 0;
  if (0 < param_1->NumSamples) {
    do {
      uVar2 = this->NumChannels;
      fVar15 = 0.0;
      if (0 < (int)uVar2) {
        pfVar12 = param_1->InputSourceEffectBufferPtr + iVar13;
        uVar11 = (ulonglong)uVar2;
        do {
          fVar15 = fVar15 + *pfVar12;
          pfVar12 = pfVar12 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar2 == 2) {
        fVar15 = fVar15 * fVar9;
      }
      TVar3 = (this->EnvelopeFollower).Mode;
      if (TVar3 == MeanSquared) {
        fVar15 = fVar15 * fVar15 * (this->EnvelopeFollower).AnalysisFilterBeta +
                 (this->EnvelopeFollower).AnalysisFilterAlpha *
                 (this->EnvelopeFollower).AnalysisValue;
        (this->EnvelopeFollower).AnalysisValue = fVar15;
      }
      else if (TVar3 == RootMeanSquared) {
        fVar15 = fVar15 * fVar15 * (this->EnvelopeFollower).AnalysisFilterBeta +
                 (this->EnvelopeFollower).AnalysisFilterAlpha *
                 (this->EnvelopeFollower).AnalysisValue;
        (this->EnvelopeFollower).AnalysisValue = fVar15;
        fVar15 = SQRT(fVar15);
      }
      else if (TVar3 == Peak) {
        fVar15 = (float)((uint)fVar15 & uVar8);
      }
      else {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\EnvelopeFollower.h"
                            ,0x1bf,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      fVar14 = (this->EnvelopeFollower).Value - fVar15;
      plVar6 = &(this->EnvelopeFollower)._padding_;
      if (0.0 < fVar14) {
        plVar6 = &(this->EnvelopeFollower)._padding_;
      }
      (this->EnvelopeFollower).Value = fVar14 * *(float *)((longlong)plVar6 + 4) + fVar15;
      fVar1 = *(float *)((longlong)plVar6 + 4);
      uVar2 = this->FrameCount;
      this->FrameCount = uVar2 + 1;
      this->CurrentEnvelopeValue = fVar14 * fVar1 + fVar15;
      if ((uVar2 & this->FramesToNotify - 1U) == 0) {
        if ((SourceEffectEnvFollowerNotifier.Object == (FSourceEffectEnvFollowerNotifier *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_00 = SourceEffectEnvFollowerNotifier.Object;
        uVar2 = this->OwningPresetUniqueId;
        fVar15 = this->CurrentEnvelopeValue;
        if (fVar7 <= this->CurrentEnvelopeValue) {
          fVar15 = fVar7;
        }
        uVar4 = this->InstanceId;
        local_98[0] = (code *)0x0;
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        local_70 = (undefined8 *)0x0;
        local_70 = FMemory::Malloc(0x20,8);
        local_a8 = CONCAT44((int)((ulonglong)local_a8 >> 0x20),fVar15);
        *local_70 = &
                    ___7__TFunction_OwnedObject_V<lambda_1>__1__UpdateEnvFollowerInstance_FSourceEffectEnvFollowerNotifier__QEAAXIIM_Z__0A__00_Function_Private_Core_UE__6B_
        ;
        local_70[1] = this_00;
        local_70[2] = CONCAT44(uVar4,uVar2);
        local_70[3] = local_a8;
        if (local_70 + 1 != (undefined8 *)0x0) {
          local_98[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FSourceEffectEnvFollowerNotifier::UpdateEnvFollowerInstance'::__l2::<lambda_1>,void>
                        ::Call;
        }
        FSourceEffectEnvFollowerNotifier::PushToCommandQueue
                  (this_00,(TFunction<void___cdecl(void)> *)local_98);
      }
      iVar13 = iVar13 + this->NumChannels;
    } while (iVar13 < param_1->NumSamples);
  }
  return;
}

