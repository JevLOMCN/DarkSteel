// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 133

// StaticClass @ 14f0a8410

UClass * __cdecl UModularSynthComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModularSynthComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"ModularSynthComponent",
               &Z_Registration_Info_UClass_UModularSynthComponent.InnerSingleton,
               StaticRegisterNativesUModularSynthComponent,0xfc0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UModularSynthComponent>,
               InternalVTableHelperCtorCaller<UModularSynthComponent>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModularSynthComponent.InnerSingleton;
}

// UModularSynthComponent @ 14f0b9920

UModularSynthComponent * __thiscall
UModularSynthComponent::UModularSynthComponent
          (UModularSynthComponent *this,FObjectInitializer *param_1)

{
  USynthComponent::USynthComponent((USynthComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  Audio::FEpicSynth1::FEpicSynth1(&this->EpicSynth1);
  this->VoiceCount = 8;
  return this;
}

// UModularSynthComponent @ 14f0b9980

UModularSynthComponent * __thiscall
UModularSynthComponent::UModularSynthComponent(UModularSynthComponent *this,FVTableHelper *param_1)

{
  USynthComponent::USynthComponent((USynthComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  Audio::FEpicSynth1::FEpicSynth1(&this->EpicSynth1);
  return this;
}

// ~UModularSynthComponent @ 14f0c0020

void __thiscall UModularSynthComponent::~UModularSynthComponent(UModularSynthComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  Audio::FEpicSynth1::~FEpicSynth1(&this->EpicSynth1);
  USynthComponent::~USynthComponent((USynthComponent *)this);
  return;
}

// operator() @ 14f0c2480

void __thiscall
`UModularSynthComponent::SetFilterFrequencyMod'::__l2::<lambda_1>::operator()(void *this)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar2 = *(longlong *)this;
  uVar7 = 0;
  uVar1 = *(undefined4 *)((longlong)this + 8);
  *(undefined4 *)(lVar2 + 0x968) = uVar1;
  if (0 < *(int *)(lVar2 + 0x948)) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)(lVar2 + 0x948)) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(lVar2 + 0x940) + lVar8) + 0x908);
      (**(code **)(*plVar3 + 0x18))(plVar3,uVar1);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < *(int *)(lVar2 + 0x948));
  }
  return;
}

// operator() @ 14f0c2550

void __thiscall `UModularSynthComponent::SetFilterQMod'::__l2::<lambda_1>::operator()(void *this)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar2 = *(longlong *)this;
  uVar7 = 0;
  uVar1 = *(undefined4 *)((longlong)this + 8);
  *(undefined4 *)(lVar2 + 0x970) = uVar1;
  if (0 < *(int *)(lVar2 + 0x948)) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)(lVar2 + 0x948)) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(lVar2 + 0x940) + lVar8) + 0x908);
      (**(code **)(*plVar3 + 0x20))(plVar3,uVar1);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < *(int *)(lVar2 + 0x948));
  }
  return;
}

// operator() @ 14f0c2750

void __thiscall
`UModularSynthComponent::SetLFOFrequencyMod'::__l2::<lambda_1>::operator()(void *this)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar2 = *(int *)((longlong)this + 8);
  lVar3 = *(longlong *)this;
  fVar1 = *(float *)((longlong)this + 0xc);
  if ((iVar2 < 2) && (uVar7 = 0, 0 < *(int *)(lVar3 + 0x948))) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)(lVar3 + 0x948)) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      Audio::IOscBase::SetFrequencyMod
                ((IOscBase *)
                 (*(longlong *)(lVar8 + *(longlong *)(lVar3 + 0x940)) + 0xa70 +
                 (longlong)iVar2 * 0x170),fVar1);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < *(int *)(lVar3 + 0x948));
  }
  return;
}

// operator() @ 14f0c2840

void __thiscall `UModularSynthComponent::SetLFOGainMod'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  
  iVar2 = *(int *)((longlong)this + 8);
  lVar3 = *(longlong *)this;
  if ((iVar2 < 2) && (uVar7 = 0, 0 < *(int *)(lVar3 + 0x948))) {
    fVar9 = *(float *)((longlong)this + 0xc);
    if (__real_3f800000 <= *(float *)((longlong)this + 0xc)) {
      fVar9 = __real_3f800000;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)(lVar3 + 0x948)) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = uVar7 + 1;
      plVar1 = (longlong *)(*(longlong *)(lVar3 + 0x940) + lVar8);
      lVar8 = lVar8 + 8;
      *(float *)(*plVar1 + 0xab0 + (longlong)iVar2 * 0x170) = fVar9;
    } while ((int)uVar7 < *(int *)(lVar3 + 0x948));
  }
  return;
}

// operator() @ 14f0c2930

void __thiscall
`UModularSynthComponent::SetOscFrequencyMod'::__l2::<lambda_1>::operator()(void *this)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar2 = *(int *)((longlong)this + 8);
  lVar3 = *(longlong *)this;
  fVar1 = *(float *)((longlong)this + 0xc);
  if ((iVar2 < 2) && (uVar7 = 0, 0 < *(int *)(lVar3 + 0x948))) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)(lVar3 + 0x948)) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      Audio::IOscBase::SetDetune
                ((IOscBase *)
                 (*(longlong *)(lVar8 + *(longlong *)(lVar3 + 0x940)) + (longlong)iVar2 * 0x140),
                 fVar1);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < *(int *)(lVar3 + 0x948));
  }
  return;
}

// operator() @ 14f0c2a10

void __thiscall `UModularSynthComponent::SetOscGainMod'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar3 = *(int *)((longlong)this + 8);
  lVar4 = *(longlong *)this;
  uVar2 = *(undefined4 *)((longlong)this + 0xc);
  if ((iVar3 < 2) && (uVar8 = 0, 0 < *(int *)(lVar4 + 0x948))) {
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < *(int *)(lVar4 + 0x948)) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = uVar8 + 1;
      plVar1 = (longlong *)(*(longlong *)(lVar4 + 0x940) + lVar9);
      lVar9 = lVar9 + 8;
      *(undefined4 *)(*plVar1 + 0x40 + (longlong)iVar3 * 0x140) = uVar2;
    } while ((int)uVar8 < *(int *)(lVar4 + 0x948));
  }
  return;
}

// operator() @ 14f0c2c30

void __thiscall `UModularSynthComponent::SetSynthPreset'::__l2::<lambda_1>::operator()(void *this)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  longlong lVar10;
  float fVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  lVar4 = *(longlong *)this;
  if ((*(byte *)((longlong)this + 0x10) & 1) == 0) {
    *(undefined4 *)(lVar4 + 0x8d4) = 1;
    Audio::FEpicSynth1::StopAllVoicesExceptNewest((FEpicSynth1 *)(lVar4 + 0x8c8));
  }
  else {
    *(undefined4 *)(lVar4 + 0x8d4) = *(undefined4 *)(lVar4 + 0x8d0);
  }
  Audio::FEpicSynth1::SetOscType
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),0,(uint)*(byte *)((longlong)this + 0x14));
  Audio::FEpicSynth1::SetOscGain
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),0,*(float *)((longlong)this + 0x18));
  Audio::FEpicSynth1::SetOscOctave
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),0,*(float *)((longlong)this + 0x1c));
  Audio::FEpicSynth1::SetOscSemitones
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),0,*(float *)((longlong)this + 0x20));
  Audio::FEpicSynth1::SetOscCents
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),0,*(float *)((longlong)this + 0x24));
  Audio::FEpicSynth1::SetOscPulseWidth
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),0,*(float *)((longlong)this + 0x28));
  Audio::FEpicSynth1::SetOscType
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),1,(uint)*(byte *)((longlong)this + 0x2c));
  Audio::FEpicSynth1::SetOscGain
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),1,*(float *)((longlong)this + 0x30));
  Audio::FEpicSynth1::SetOscOctave
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),1,*(float *)((longlong)this + 0x34));
  Audio::FEpicSynth1::SetOscSemitones
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),1,*(float *)((longlong)this + 0x38));
  Audio::FEpicSynth1::SetOscCents
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),1,*(float *)((longlong)this + 0x3c));
  Audio::FEpicSynth1::SetOscPulseWidth
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),1,*(float *)((longlong)this + 0x40));
  fVar11 = *(float *)((longlong)this + 0x44);
  if (__real_3f800000 <= *(float *)((longlong)this + 0x44)) {
    fVar11 = __real_3f800000;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  *(float *)(*(longlong *)this + 0x938) = fVar11;
  bVar2 = *(byte *)(*(longlong *)this + 0xfb8);
  *(byte *)(*(longlong *)this + 0xfb8) = (bVar2 ^ *(byte *)((longlong)this + 0x48)) & 1 ^ bVar2;
  Audio::FEpicSynth1::SetOscSync
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),
             (bool)((byte)(*(uint *)((longlong)this + 0x48) >> 1) & 1));
  Audio::FEpicSynth1::SetOscSpread
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),*(float *)((longlong)this + 0x4c));
  Audio::FEpicSynth1::SetPan
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),*(float *)((longlong)this + 0x50));
  Audio::FEpicSynth1::SetLFOFrequency
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),0,*(float *)((longlong)this + 0x54));
  Audio::FEpicSynth1::SetLFOGain
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),0,*(float *)((longlong)this + 0x58));
  Audio::FEpicSynth1::SetLFOType
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),0,(uint)*(byte *)((longlong)this + 0x5c));
  Audio::FEpicSynth1::SetLFOMode
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),0,(uint)*(byte *)((longlong)this + 0x5d));
  Audio::FEpicSynth1::SetLFOPatch
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),0,
             *(ESynthLFOPatchType *)((longlong)this + 0x5e));
  Audio::FEpicSynth1::SetLFOFrequency
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),1,*(float *)((longlong)this + 0x60));
  Audio::FEpicSynth1::SetLFOGain
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),1,*(float *)((longlong)this + 100));
  Audio::FEpicSynth1::SetLFOType
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),1,(uint)*(byte *)((longlong)this + 0x68));
  Audio::FEpicSynth1::SetLFOMode
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),1,(uint)*(byte *)((longlong)this + 0x69));
  Audio::FEpicSynth1::SetLFOPatch
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),1,
             *(ESynthLFOPatchType *)((longlong)this + 0x6a));
  Audio::FEpicSynth1::SetGainDb
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),*(float *)((longlong)this + 0x6c));
  Audio::FEpicSynth1::SetEnvAttackTime
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),*(float *)((longlong)this + 0x70));
  Audio::FEpicSynth1::SetEnvDecayTime
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),*(float *)((longlong)this + 0x74));
  Audio::FEpicSynth1::SetEnvSustainGain
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),*(float *)((longlong)this + 0x78));
  Audio::FEpicSynth1::SetEnvReleaseTime
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),*(float *)((longlong)this + 0x7c));
  Audio::FEpicSynth1::SetModEnvPatch
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),
             *(ESynthModEnvPatch *)((longlong)this + 0x80));
  Audio::FEpicSynth1::SetModEnvBiasPatch
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),
             *(ESynthModEnvBiasPatch *)((longlong)this + 0x81));
  Audio::FEpicSynth1::SetModEnvInvert
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),(bool)(*(byte *)((longlong)this + 0x84) & 1)
            );
  Audio::FEpicSynth1::SetModEnvBiasInvert
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),
             (bool)((byte)(*(uint *)((longlong)this + 0x84) >> 1) & 1));
  Audio::FEpicSynth1::SetModEnvDepth
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),*(float *)((longlong)this + 0x88));
  Audio::FEpicSynth1::SetModEnvAttackTime
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),*(float *)((longlong)this + 0x8c));
  Audio::FEpicSynth1::SetModEnvDecayTime
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),*(float *)((longlong)this + 0x90));
  Audio::FEpicSynth1::SetModEnvSustainGain
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),*(float *)((longlong)this + 0x94));
  Audio::FEpicSynth1::SetModEnvReleaseTime
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),*(float *)((longlong)this + 0x98));
  Audio::FEpicSynth1::SetEnvLegatoEnabled
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),(bool)(*(byte *)((longlong)this + 0x9c) & 1)
            );
  Audio::FEpicSynth1::SetEnvRetriggerMode
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),
             (bool)((byte)(*(uint *)((longlong)this + 0x9c) >> 1) & 1));
  Audio::FEpicSynth1::SetFilterFrequency
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),*(float *)((longlong)this + 0xa0));
  Audio::FEpicSynth1::SetFilterQ
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),*(float *)((longlong)this + 0xa4));
  Audio::FEpicSynth1::SetFilterType
            ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),(uint)*(byte *)((longlong)this + 0xa8));
  lVar4 = *(longlong *)this;
  *(undefined1 *)(lVar4 + 0x978) = *(undefined1 *)((longlong)this + 0xa9);
  Audio::FEpicSynth1::SwitchFilter((FEpicSynth1 *)(lVar4 + 0x8c8));
  bVar2 = *(byte *)(*(longlong *)this + 0xfb8);
  *(byte *)(*(longlong *)this + 0xfb8) =
       (*(char *)((longlong)this + 0xac) * '\x02' ^ bVar2) & 2 ^ bVar2;
  Audio::FDelayStereo::SetMode
            ((FDelayStereo *)(*(longlong *)this + 0x980),(uint)*(byte *)((longlong)this + 0xb0));
  Audio::FDelayStereo::SetDelayTimeMsec
            ((FDelayStereo *)(*(longlong *)this + 0x980),*(float *)((longlong)this + 0xb4));
  Audio::FDelayStereo::SetFeedback
            ((FDelayStereo *)(*(longlong *)this + 0x980),*(float *)((longlong)this + 0xb8));
  Audio::FDelayStereo::SetWetLevel
            ((FDelayStereo *)(*(longlong *)this + 0x980),*(float *)((longlong)this + 0xbc));
  Audio::FDelayStereo::SetDelayRatio
            ((FDelayStereo *)(*(longlong *)this + 0x980),*(float *)((longlong)this + 0xc0));
  bVar2 = *(byte *)(*(longlong *)this + 0xfb8);
  *(byte *)(*(longlong *)this + 0xfb8) = (*(char *)((longlong)this + 0xc4) << 2 ^ bVar2) & 4 ^ bVar2
  ;
  Audio::FChorus::SetDepth
            ((FChorus *)(*(longlong *)this + 0x9d0),Left,*(float *)((longlong)this + 200));
  Audio::FChorus::SetDepth
            ((FChorus *)(*(longlong *)this + 0x9d0),Center,*(float *)((longlong)this + 200));
  Audio::FChorus::SetDepth
            ((FChorus *)(*(longlong *)this + 0x9d0),Right,*(float *)((longlong)this + 200));
  Audio::FChorus::SetFeedback
            ((FChorus *)(*(longlong *)this + 0x9d0),Left,*(float *)((longlong)this + 0xcc));
  Audio::FChorus::SetFeedback
            ((FChorus *)(*(longlong *)this + 0x9d0),Center,*(float *)((longlong)this + 0xcc));
  Audio::FChorus::SetFeedback
            ((FChorus *)(*(longlong *)this + 0x9d0),Right,*(float *)((longlong)this + 0xcc));
  Audio::FChorus::SetFrequency
            ((FChorus *)(*(longlong *)this + 0x9d0),Left,*(float *)((longlong)this + 0xd0));
  Audio::FChorus::SetFrequency
            ((FChorus *)(*(longlong *)this + 0x9d0),Center,*(float *)((longlong)this + 0xd0));
  Audio::FChorus::SetFrequency
            ((FChorus *)(*(longlong *)this + 0x9d0),Right,*(float *)((longlong)this + 0xd0));
  lVar4 = *(longlong *)this;
  Audio::FModulationMatrix::ResetPatchSourceState((FModulationMatrix *)(lVar4 + 0x8f8));
  uVar8 = 0;
  if (0 < *(int *)(lVar4 + 0x948)) {
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < *(int *)(lVar4 + 0x948)) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      Audio::FEpicSynth1Voice::Reset(*(FEpicSynth1Voice **)(lVar10 + *(longlong *)(lVar4 + 0x940)));
      uVar7 = 0;
      if ((int)uVar8 < *(int *)(lVar4 + 0x948)) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      Audio::FEpicSynth1Voice::ClearPatches
                (*(FEpicSynth1Voice **)(lVar10 + *(longlong *)(lVar4 + 0x940)));
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < *(int *)(lVar4 + 0x948));
  }
  iVar3 = *(int *)((longlong)this + 0xe0);
  pbVar9 = *(byte **)((longlong)this + 0xd8);
  pbVar1 = pbVar9 + (longlong)iVar3 * 0x18;
  while( true ) {
    if (*(int *)((longlong)this + 0xe0) != iVar3) {
      `TCheckedPointerIterator<FEpicSynth1Patch_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pbVar9 == pbVar1) break;
    if (0 < *(int *)(pbVar9 + 0x10)) {
      Audio::FEpicSynth1::CreatePatch
                ((FEpicSynth1 *)(*(longlong *)this + 0x8c8),(ESynth1PatchSource)local_res10,
                 (TArray<FSynth1PatchCable,TSizedDefaultAllocator<32>_> *)(ulonglong)*pbVar9,
                 (bool)((char)pbVar9 + '\b'));
    }
    pbVar9 = pbVar9 + 0x18;
  }
  return;
}

// CreatePatch @ 14f0d3180

FPatchId __thiscall
UModularSynthComponent::CreatePatch
          (UModularSynthComponent *this,ESynth1PatchSource param_1,
          TArray<FSynth1PatchCable,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  undefined7 in_register_00000011;
  
  Audio::FEpicSynth1::CreatePatch(&this->EpicSynth1,param_1,param_2,param_3);
  return (FPatchId)(int)CONCAT71(in_register_00000011,param_1);
}

// GetPrivateStaticClass @ 14f0dbf60

UClass * __cdecl UModularSynthComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModularSynthComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"ModularSynthComponent",
               &Z_Registration_Info_UClass_UModularSynthComponent.InnerSingleton,
               StaticRegisterNativesUModularSynthComponent,0xfc0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UModularSynthComponent>,
               InternalVTableHelperCtorCaller<UModularSynthComponent>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModularSynthComponent.InnerSingleton;
}

// Init @ 14f0e5500

bool __thiscall UModularSynthComponent::Init(UModularSynthComponent *this,int *param_1)

{
  undefined3 uVar1;
  undefined1 uVar2;
  int local_3f;
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  int local_18;
  undefined1 uStack_14;
  undefined2 uStack_13;
  undefined1 uStack_11;
  undefined8 local_10;
  
  *(undefined4 *)&this->_padding_ = 2;
  Audio::FEpicSynth1::Init(&this->EpicSynth1,(float)*param_1,this->VoiceCount);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetEnablePolyphony'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  uStack_14 = (undefined1)((uint)local_3f >> 0x18);
  uVar2 = uStack_14;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetEnablePolyphony'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_18 = local_3f << 8;
  local_20 = this;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscType'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_18 = 0;
  uStack_14 = 1;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscType'::__l2::<lambda_1>,void>::
                Call;
  local_20 = this;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscType'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_18 = 1;
  uStack_14 = 1;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscType'::__l2::<lambda_1>,void>::
                Call;
  local_20 = this;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscCents'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscCents'::__l2::<lambda_1>,void>::
                Call;
  local_18 = 1;
  uStack_14 = 0;
  uStack_13 = 0x2000;
  uStack_11 = 0x40;
  local_20 = this;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscPulsewidth'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscPulsewidth'::__l2::<lambda_1>,void>
                ::Call;
  local_18 = 0;
  uStack_14 = 0;
  uStack_13 = 0;
  uStack_11 = 0x3f;
  local_20 = this;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscPulsewidth'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_18 = 1;
  uStack_14 = 0;
  uStack_13 = 0;
  uStack_11 = 0x3f;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscPulsewidth'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = this;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetEnableUnison'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetEnableUnison'::__l2::<lambda_1>,void>
                ::Call;
  local_18 = local_3f << 8;
  local_20 = this;
  uStack_14 = uVar2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetSpread'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetSpread'::__l2::<lambda_1>,void>::Call
  ;
  local_18 = 0x3f000000;
  local_20 = this;
  uStack_14 = uVar2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetGainDb'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetGainDb'::__l2::<lambda_1>,void>::Call
  ;
  local_18 = 0xc0400000;
  local_20 = this;
  uStack_14 = uVar2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetAttackTime'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetAttackTime'::__l2::<lambda_1>,void>::
                Call;
  local_18 = 0x41200000;
  local_20 = this;
  uStack_14 = uVar2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetDecayTime'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetDecayTime'::__l2::<lambda_1>,void>::
                Call;
  local_18 = 0x42c80000;
  local_20 = this;
  uStack_14 = uVar2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetSustainGain'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetSustainGain'::__l2::<lambda_1>,void>
                ::Call;
  local_18 = 0x3f34fdf4;
  local_20 = this;
  uStack_14 = uVar2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetReleaseTime'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetReleaseTime'::__l2::<lambda_1>,void>
                ::Call;
  local_18 = 0x459c4000;
  local_20 = this;
  uStack_14 = uVar2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetEnableLegato'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  uVar1 = (undefined3)local_3f;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetEnableLegato'::__l2::<lambda_1>,void>
                ::Call;
  local_18 = CONCAT31(uVar1,1);
  local_20 = this;
  uStack_14 = uVar2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetEnableRetrigger'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetEnableRetrigger'::__l2::<lambda_1>,void>
                ::Call;
  local_18 = local_3f << 8;
  local_20 = this;
  uStack_14 = uVar2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetFilterFrequency'::__l2::<lambda_1>,void>
                ::Call;
  local_18 = 0x44960000;
  local_20 = this;
  uStack_14 = uVar2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetFilterQ'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetFilterQ'::__l2::<lambda_1>,void>::
                Call;
  local_18 = 0x40000000;
  local_20 = this;
  uStack_14 = uVar2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetFilterAlgorithm'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetFilterAlgorithm'::__l2::<lambda_1>,void>
                ::Call;
  local_18 = CONCAT31(uVar1,2);
  local_20 = this;
  uStack_14 = uVar2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayIsEnabled'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayIsEnabled'::__l2::<lambda_1>,void>
                ::Call;
  local_18 = CONCAT31(uVar1,1);
  local_20 = this;
  uStack_14 = uVar2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayMode'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayMode'::__l2::<lambda_1>,void>
                ::Call;
  local_18 = CONCAT31(uVar1,2);
  local_20 = this;
  uStack_14 = uVar2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayRatio'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayRatio'::__l2::<lambda_1>,void>
                ::Call;
  local_18 = 0x3e4ccccd;
  local_20 = this;
  uStack_14 = uVar2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayFeedback'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayFeedback'::__l2::<lambda_1>,void>
                ::Call;
  local_18 = 0x3f333333;
  local_20 = this;
  uStack_14 = uVar2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayWetlevel'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayWetlevel'::__l2::<lambda_1>,void>
                ::Call;
  local_18 = 0x3e99999a;
  local_20 = this;
  uStack_14 = uVar2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetChorusEnabled'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetChorusEnabled'::__l2::<lambda_1>,void>
                ::Call;
  local_18 = local_3f << 8;
  local_20 = this;
  uStack_14 = uVar2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return true;
}

// NoteOff @ 14f0e8890

void __thiscall
UModularSynthComponent::NoteOff
          (UModularSynthComponent *this,float param_1,bool param_2,bool param_3)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::NoteOff'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::NoteOff'::__l2::<lambda_1>,void>::Call;
  local_20 = this;
  local_18 = param_1;
  local_14 = param_2;
  local_13 = param_3;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// NoteOn @ 14f0e9100

void __thiscall
UModularSynthComponent::NoteOn(UModularSynthComponent *this,float param_1,int param_2,float param_3)

{
  undefined8 local_68;
  code *local_58 [5];
  undefined8 *local_30;
  
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x20,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UModularSynthComponent::NoteOn'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_30[1] = this;
  *(float *)(local_30 + 2) = param_1;
  *(int *)((longlong)local_30 + 0x14) = param_2;
  local_30[3] = CONCAT44((int)((ulonglong)local_68 >> 0x20),param_3);
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UModularSynthComponent::NoteOn'::__l2::<lambda_1>,void>::Call;
  }
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_58);
  return;
}

// OnGenerateAudio @ 14f0e9c60

int __thiscall
UModularSynthComponent::OnGenerateAudio(UModularSynthComponent *this,float *param_1,int param_2)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  float *pfVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  float local_res20 [2];
  uint local_38 [4];
  
  iVar8 = 0;
  if (0 < param_2) {
    do {
      pfVar3 = param_1 + iVar8;
      local_38[0] = 0;
      pfVar3[0] = 0.0;
      pfVar3[1] = 0.0;
      if (0 < (this->EpicSynth1).Voices.ArrayNum) {
        do {
          uVar9 = local_38[0];
          uVar7 = 0;
          if ((int)local_38[0] < (this->EpicSynth1).Voices.ArrayNum) {
            uVar7 = ~local_38[0] >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            iVar8 = (*pcVar5)();
            return iVar8;
          }
          iVar10 = (this->EpicSynth1).Voices.ArrayNum;
          lVar11 = (longlong)(int)local_38[0];
          if (*(char *)(*(longlong *)
                         ((this->EpicSynth1).Voices.AllocatorInstance.Data +
                         (longlong)(int)uVar9 * 8) + 0x16e8) == '\0') {
            local_res20[0] = 0.0;
            local_res20[1] = 0.0;
            uVar9 = 0;
            if ((int)local_38[0] < iVar10) {
              uVar9 = ~local_38[0] >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              iVar8 = (*pcVar5)();
              return iVar8;
            }
            Audio::FEpicSynth1Voice::Generate
                      (*(FEpicSynth1Voice **)
                        ((this->EpicSynth1).Voices.AllocatorInstance.Data + lVar11 * 8),local_res20)
            ;
            *pfVar3 = local_res20[0] + *pfVar3;
            pfVar3[1] = local_res20[1] + pfVar3[1];
          }
          else {
            uVar9 = 0;
            if ((int)local_38[0] < iVar10) {
              uVar9 = ~local_38[0] >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              iVar8 = (*pcVar5)();
              return iVar8;
            }
            if (*(char *)(*(longlong *)
                           ((this->EpicSynth1).Voices.AllocatorInstance.Data + lVar11 * 8) + 0x16e9)
                != '\0') {
              piVar1 = &(this->EpicSynth1).NumActiveVoices;
              *piVar1 = *piVar1 + -1;
              lVar11 = (longlong)(int)local_38[0];
              uVar9 = 0;
              if ((int)local_38[0] < (this->EpicSynth1).Voices.ArrayNum) {
                uVar9 = ~local_38[0] >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                iVar8 = (*pcVar5)();
                return iVar8;
              }
              Audio::FEpicSynth1Voice::Reset
                        (*(FEpicSynth1Voice **)
                          ((this->EpicSynth1).Voices.AllocatorInstance.Data + lVar11 * 8));
              if ((this->EpicSynth1).NumVoices != 1) {
                pTVar2 = &(this->EpicSynth1).FreeVoices;
                pFVar4 = (pTVar2->AllocatorInstance).Data;
                if (((pFVar4 <= (FScriptContainerElement *)local_38) &&
                    ((FScriptContainerElement *)local_38 <
                     pFVar4 + (longlong)(this->EpicSynth1).FreeVoices.ArrayMax * 4)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  iVar8 = (*pcVar5)();
                  return iVar8;
                }
                iVar10 = (this->EpicSynth1).FreeVoices.ArrayNum;
                piVar1 = &(this->EpicSynth1).FreeVoices.ArrayMax;
                if (iVar10 == *piVar1) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&pTVar2->AllocatorInstance,piVar1);
                }
                (this->EpicSynth1).FreeVoices.ArrayNum = iVar10 + 1;
                *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_38[0];
                if (((this->EpicSynth1).NumStoppingVoices + (this->EpicSynth1).MaxNumVoices <
                     (this->EpicSynth1).FreeVoices.ArrayNum) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("FreeVoices.Num() <= MaxNumVoices + NumStoppingVoices",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\EpicSynth1.cpp"
                                       ,0x5ee,L"Invalid free voice size."), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  iVar8 = (*pcVar5)();
                  return iVar8;
                }
              }
            }
          }
          local_38[0] = local_38[0] + 1;
        } while ((int)local_38[0] < (this->EpicSynth1).Voices.ArrayNum);
      }
      if ((this->EpicSynth1).bIsChorusEnabled) {
        Audio::FChorus::ProcessAudioFrame(&(this->EpicSynth1).Chorus,pfVar3,pfVar3);
      }
      if ((this->EpicSynth1).bIsStereoEnabled) {
        Audio::FDelayStereo::ProcessAudioFrame(&(this->EpicSynth1).StereoDelay,pfVar3,pfVar3);
      }
      iVar8 = iVar8 + (int)this->_padding_;
    } while (iVar8 < param_2);
  }
  return param_2;
}

// SetAttackTime @ 14f0f8f70

void __thiscall UModularSynthComponent::SetAttackTime(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetAttackTime'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetAttackTime'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetChorusDepth @ 14f0f9250

void __thiscall UModularSynthComponent::SetChorusDepth(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetChorusDepth'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetChorusDepth'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetChorusEnabled @ 14f0f92c0

void __thiscall UModularSynthComponent::SetChorusEnabled(UModularSynthComponent *this,bool param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetChorusEnabled'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetChorusEnabled'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetChorusFeedback @ 14f0f9340

void __thiscall
UModularSynthComponent::SetChorusFeedback(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetChorusFeedback'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetChorusFeedback'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetChorusFrequency @ 14f0f93b0

void __thiscall
UModularSynthComponent::SetChorusFrequency(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetChorusFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetChorusFrequency'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetDecayTime @ 14f0f9e80

void __thiscall UModularSynthComponent::SetDecayTime(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetDecayTime'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetDecayTime'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetEnableLegato @ 14f0fa500

void __thiscall UModularSynthComponent::SetEnableLegato(UModularSynthComponent *this,bool param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetEnableLegato'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetEnableLegato'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetEnablePatch @ 14f0fa7a0

bool __thiscall
UModularSynthComponent::SetEnablePatch(UModularSynthComponent *this,FPatchId param_1,bool param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  plVar11 = (longlong *)0x0;
  plVar10 = plVar11;
  plVar12 = plVar11;
  if (0 < (this->EpicSynth1).Voices.ArrayNum) {
    do {
      uVar9 = (uint)plVar10;
      uVar5 = 0;
      if ((int)uVar9 < (this->EpicSynth1).Voices.ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      lVar1 = *(longlong *)
               ((longlong)plVar12 + (longlong)(this->EpicSynth1).Voices.AllocatorInstance.Data);
      if (*(int *)(lVar1 + 0x15f8) == *(int *)(lVar1 + 0x1624)) {
        return false;
      }
      lVar8 = lVar1 + 0x1628;
      if (*(longlong *)(lVar1 + 0x1630) != 0) {
        lVar8 = *(longlong *)(lVar1 + 0x1630);
      }
      iVar6 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar1 + 0x1638) - 1U & param_1.Id) * 4);
      if (iVar6 == -1) {
        return false;
      }
      while (piVar7 = (int *)((longlong)iVar6 * 0x20 + *(longlong *)(lVar1 + 0x15f0)),
            *piVar7 != param_1.Id) {
        iVar6 = piVar7[6];
        if (iVar6 == -1) {
          return false;
        }
      }
      plVar10 = (longlong *)(piVar7 + 2);
      if (piVar7 == (int *)0x0) {
        plVar10 = plVar11;
      }
      if (plVar10 == (longlong *)0x0) {
        return false;
      }
      if ((*plVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *(bool *)(*plVar10 + 0x38) = param_2;
      plVar10 = (longlong *)(ulonglong)(uVar9 + 1);
      plVar12 = plVar12 + 1;
    } while ((int)(uVar9 + 1) < (this->EpicSynth1).Voices.ArrayNum);
  }
  return true;
}

// SetEnablePolyphony @ 14f0fa920

void __thiscall
UModularSynthComponent::SetEnablePolyphony(UModularSynthComponent *this,bool param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetEnablePolyphony'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetEnablePolyphony'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetEnableRetrigger @ 14f0fa980

void __thiscall
UModularSynthComponent::SetEnableRetrigger(UModularSynthComponent *this,bool param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetEnableRetrigger'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetEnableRetrigger'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetEnableUnison @ 14f0fa9e0

void __thiscall UModularSynthComponent::SetEnableUnison(UModularSynthComponent *this,bool param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetEnableUnison'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetEnableUnison'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetFilterAlgorithm @ 14f0fb3c0

void __thiscall
UModularSynthComponent::SetFilterAlgorithm
          (UModularSynthComponent *this,ESynthFilterAlgorithm param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  ESynthFilterAlgorithm local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetFilterAlgorithm'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetFilterAlgorithm'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetFilterFrequency @ 14f0fb9f0

void __thiscall
UModularSynthComponent::SetFilterFrequency(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetFilterFrequency'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetFilterFrequencyMod @ 14f0fbb10

void __thiscall
UModularSynthComponent::SetFilterFrequencyMod(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequencyMod'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetFilterFrequencyMod'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetFilterQ @ 14f0fbc70

void __thiscall UModularSynthComponent::SetFilterQ(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetFilterQ'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetFilterQ'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetFilterQMod @ 14f0fbe10

void __thiscall UModularSynthComponent::SetFilterQMod(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetFilterQMod'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetFilterQMod'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetFilterType @ 14f0fbf90

void __thiscall
UModularSynthComponent::SetFilterType(UModularSynthComponent *this,ESynthFilterType param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  ESynthFilterType local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetFilterType'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetFilterType'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetGainDb @ 14f0fc450

void __thiscall UModularSynthComponent::SetGainDb(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetGainDb'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetGainDb'::__l2::<lambda_1>,void>::Call
  ;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetLFOFrequency @ 14f0fd0e0

void __thiscall
UModularSynthComponent::SetLFOFrequency(UModularSynthComponent *this,int param_1,float param_2)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  int local_18;
  float local_14;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetLFOFrequency'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  local_14 = param_2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetLFOFrequencyMod @ 14f0fd220

void __thiscall
UModularSynthComponent::SetLFOFrequencyMod(UModularSynthComponent *this,int param_1,float param_2)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  int local_18;
  float local_14;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequencyMod'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetLFOFrequencyMod'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  local_14 = param_2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetLFOGain @ 14f0fd360

void __thiscall
UModularSynthComponent::SetLFOGain(UModularSynthComponent *this,int param_1,float param_2)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  int local_18;
  float local_14;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetLFOGain'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetLFOGain'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  local_14 = param_2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetLFOGainMod @ 14f0fd4a0

void __thiscall
UModularSynthComponent::SetLFOGainMod(UModularSynthComponent *this,int param_1,float param_2)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  int local_18;
  float local_14;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetLFOGainMod'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetLFOGainMod'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  local_14 = param_2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetLFOMode @ 14f0fd5e0

void __thiscall
UModularSynthComponent::SetLFOMode(UModularSynthComponent *this,int param_1,ESynthLFOMode param_2)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  int local_18;
  ESynthLFOMode local_14;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetLFOMode'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetLFOMode'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  local_14 = param_2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetLFOPatch @ 14f0fd820

void __thiscall
UModularSynthComponent::SetLFOPatch
          (UModularSynthComponent *this,int param_1,ESynthLFOPatchType param_2)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  int local_18;
  ESynthLFOPatchType local_14;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetLFOPatch'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetLFOPatch'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  local_14 = param_2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetLFOType @ 14f0fda60

void __thiscall
UModularSynthComponent::SetLFOType(UModularSynthComponent *this,int param_1,ESynthLFOType param_2)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  int local_18;
  ESynthLFOType local_14;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetLFOType'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetLFOType'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  local_14 = param_2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetModEnvAttackTime @ 14f0fde60

void __thiscall
UModularSynthComponent::SetModEnvAttackTime(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetModEnvAttackTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetModEnvAttackTime'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetModEnvBiasInvert @ 14f0fdf80

void __thiscall
UModularSynthComponent::SetModEnvBiasInvert(UModularSynthComponent *this,bool param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasInvert'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetModEnvBiasInvert'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetModEnvBiasPatch @ 14f0fe0f0

void __thiscall
UModularSynthComponent::SetModEnvBiasPatch
          (UModularSynthComponent *this,ESynthModEnvBiasPatch param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  ESynthModEnvBiasPatch local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasPatch'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetModEnvBiasPatch'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetModEnvDecayTime @ 14f0fe210

void __thiscall
UModularSynthComponent::SetModEnvDecayTime(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDecayTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetModEnvDecayTime'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetModEnvDepth @ 14f0fe320

void __thiscall UModularSynthComponent::SetModEnvDepth(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDepth'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetModEnvDepth'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetModEnvInvert @ 14f0fe440

void __thiscall UModularSynthComponent::SetModEnvInvert(UModularSynthComponent *this,bool param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetModEnvInvert'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetModEnvInvert'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetModEnvPatch @ 14f0fe5b0

void __thiscall
UModularSynthComponent::SetModEnvPatch(UModularSynthComponent *this,ESynthModEnvPatch param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  ESynthModEnvPatch local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetModEnvPatch'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetModEnvPatch'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetModEnvReleaseTime @ 14f0fe6d0

void __thiscall
UModularSynthComponent::SetModEnvReleaseTime(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetModEnvReleaseTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetModEnvReleaseTime'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetModEnvSustainGain @ 14f0fe7e0

void __thiscall
UModularSynthComponent::SetModEnvSustainGain(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetModEnvSustainGain'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetModEnvSustainGain'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetOscCents @ 14f0fee60

void __thiscall
UModularSynthComponent::SetOscCents(UModularSynthComponent *this,int param_1,float param_2)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  int local_18;
  float local_14;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscCents'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscCents'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  local_14 = param_2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetOscFrequencyMod @ 14f0fef90

void __thiscall
UModularSynthComponent::SetOscFrequencyMod(UModularSynthComponent *this,int param_1,float param_2)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  int local_18;
  float local_14;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscFrequencyMod'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscFrequencyMod'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  local_14 = param_2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetOscGain @ 14f0ff0c0

void __thiscall
UModularSynthComponent::SetOscGain(UModularSynthComponent *this,int param_1,float param_2)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  int local_18;
  float local_14;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscGain'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscGain'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  local_14 = param_2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetOscGainMod @ 14f0ff1f0

void __thiscall
UModularSynthComponent::SetOscGainMod(UModularSynthComponent *this,int param_1,float param_2)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  int local_18;
  float local_14;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscGainMod'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscGainMod'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  local_14 = param_2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetOscOctave @ 14f0ff320

void __thiscall
UModularSynthComponent::SetOscOctave(UModularSynthComponent *this,int param_1,float param_2)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  int local_18;
  float local_14;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscOctave'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscOctave'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  local_14 = param_2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetOscPulsewidth @ 14f0ff560

void __thiscall
UModularSynthComponent::SetOscPulsewidth(UModularSynthComponent *this,int param_1,float param_2)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  int local_18;
  float local_14;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscPulsewidth'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscPulsewidth'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  local_14 = param_2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetOscSemitones @ 14f0ff690

void __thiscall
UModularSynthComponent::SetOscSemitones(UModularSynthComponent *this,int param_1,float param_2)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  int local_18;
  float local_14;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscSemitones'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscSemitones'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  local_14 = param_2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetOscSync @ 14f0ff8e0

void __thiscall UModularSynthComponent::SetOscSync(UModularSynthComponent *this,bool param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscSync'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscSync'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetOscType @ 14f0ffa20

void __thiscall
UModularSynthComponent::SetOscType(UModularSynthComponent *this,int param_1,ESynth1OscType param_2)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  int local_18;
  ESynth1OscType local_14;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscType'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscType'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  local_14 = param_2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetPan @ 14f0ffc60

void __thiscall UModularSynthComponent::SetPan(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetPan'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetPan'::__l2::<lambda_1>,void>::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetPitchBend @ 14f0ffd00

void __thiscall UModularSynthComponent::SetPitchBend(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetPitchBend'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetPitchBend'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetPortamento @ 14f0ffe50

void __thiscall UModularSynthComponent::SetPortamento(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetPortamento'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetPortamento'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetReleaseTime @ 14f100a90

void __thiscall UModularSynthComponent::SetReleaseTime(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetReleaseTime'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetReleaseTime'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetSpread @ 14f1020a0

void __thiscall UModularSynthComponent::SetSpread(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetSpread'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetSpread'::__l2::<lambda_1>,void>::Call
  ;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetStereoDelayFeedback @ 14f102470

void __thiscall
UModularSynthComponent::SetStereoDelayFeedback(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayFeedback'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayFeedback'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetStereoDelayIsEnabled @ 14f1024e0

void __thiscall
UModularSynthComponent::SetStereoDelayIsEnabled(UModularSynthComponent *this,bool param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayIsEnabled'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayIsEnabled'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetStereoDelayMode @ 14f102560

void __thiscall
UModularSynthComponent::SetStereoDelayMode
          (UModularSynthComponent *this,ESynthStereoDelayMode param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  ESynthStereoDelayMode local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayMode'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayMode'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetStereoDelayRatio @ 14f1025e0

void __thiscall
UModularSynthComponent::SetStereoDelayRatio(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayRatio'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayRatio'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetStereoDelayTime @ 14f102630

void __thiscall
UModularSynthComponent::SetStereoDelayTime(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayTime'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetStereoDelayWetlevel @ 14f1026c0

void __thiscall
UModularSynthComponent::SetStereoDelayWetlevel(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayWetlevel'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayWetlevel'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetSustainGain @ 14f102760

void __thiscall UModularSynthComponent::SetSustainGain(UModularSynthComponent *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UModularSynthComponent *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetSustainGain'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetSustainGain'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetSynthPreset @ 14f102870

void __thiscall
UModularSynthComponent::SetSynthPreset(UModularSynthComponent *this,FModularSynthPreset *param_1)

{
  undefined8 *puVar1;
  code *local_128 [5];
  undefined8 *local_100;
  UModularSynthComponent *local_f8;
  FModularSynthPreset local_f0;
  
  local_f8 = this;
  FModularSynthPreset::FModularSynthPreset(&local_f0,param_1);
  local_128[0] = (code *)0x0;
  local_100 = FMemory::Malloc(0xf0,8);
  puVar1 = local_100 + 1;
  *local_100 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UModularSynthComponent::SetSynthPreset'::`2'::<lambda_1>,0,1>
                ::_vftable_;
  *puVar1 = local_f8;
  FModularSynthPreset::FModularSynthPreset((FModularSynthPreset *)(local_100 + 2),&local_f0);
  if (puVar1 != (undefined8 *)0x0) {
    local_128[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UModularSynthComponent::SetSynthPreset'::__l2::<lambda_1>,void>
                   ::Call;
  }
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_128);
  DestructItems<FEpicSynth1Patch,int>
            ((FEpicSynth1Patch *)local_f0.Patches.AllocatorInstance.Data,local_f0.Patches.ArrayNum);
  if ((FEpicSynth1Patch *)local_f0.Patches.AllocatorInstance.Data != (FEpicSynth1Patch *)0x0) {
    FMemory::Free(local_f0.Patches.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUModularSynthComponent @ 14f103560

void __cdecl UModularSynthComponent::StaticRegisterNativesUModularSynthComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x3b;
  local_18.DataPtr = Z_Construct_UClass_UModularSynthComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreatePatch @ 14f10bbb0

void __cdecl UModularSynthComponent::execCreatePatch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  byte local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  void *local_38;
  undefined8 local_30;
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  ppvVar2 = &local_38;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Audio::FEpicSynth1::CreatePatch
            ((FEpicSynth1 *)&param_1[0x38].field_0x8,(ESynth1PatchSource)local_res18,
             (TArray<FSynth1PatchCable,TSizedDefaultAllocator<32>_> *)(ulonglong)local_res8[0],
             SUB81(ppvVar2,0));
  *(undefined4 *)param_3 = local_res18[0];
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execNoteOff @ 14f10cc30

void __cdecl UModularSynthComponent::execNoteOff(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  undefined4 local_res10 [4];
  int local_res20 [2];
  code *local_48 [2];
  undefined **local_38;
  UObject *local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined8 local_20;
  
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
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_28 = local_res10[0];
  local_20 = 0;
  local_23 = local_res20[0] != 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::NoteOff'::`2'::<lambda_1>,0,0>::
              _vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::NoteOff'::__l2::<lambda_1>,void>::Call;
  local_30 = param_1;
  local_24 = bVar2;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_48);
  return;
}

// execNoteOn @ 14f10d060

void __cdecl UModularSynthComponent::execNoteOn(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_68;
  code *local_58 [5];
  undefined8 *local_30;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  uVar4 = local_res20[0];
  uVar3 = local_res10[0];
  uVar2 = local_res8[0];
  local_58[0] = (code *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_30 = FMemory::Malloc(0x20,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UModularSynthComponent::NoteOn'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_30[1] = param_1;
  *(undefined4 *)(local_30 + 2) = uVar2;
  *(undefined4 *)((longlong)local_30 + 0x14) = uVar3;
  local_30[3] = CONCAT44((int)((ulonglong)local_68 >> 0x20),uVar4);
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UModularSynthComponent::NoteOn'::__l2::<lambda_1>,void>::Call;
  }
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_58);
  return;
}

// execSetAttackTime @ 14f10dee0

void __cdecl
UModularSynthComponent::execSetAttackTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetAttackTime'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetAttackTime'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetChorusDepth @ 14f10e3d0

void __cdecl
UModularSynthComponent::execSetChorusDepth(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetChorusDepth'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetChorusDepth'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetChorusEnabled @ 14f10e490

void __cdecl
UModularSynthComponent::execSetChorusEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_18 = local_res8[0] != 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetChorusEnabled'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetChorusEnabled'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetChorusFeedback @ 14f10e560

void __cdecl
UModularSynthComponent::execSetChorusFeedback(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetChorusFeedback'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetChorusFeedback'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetChorusFrequency @ 14f10e620

void __cdecl
UModularSynthComponent::execSetChorusFrequency(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetChorusFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetChorusFrequency'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetDecayTime @ 14f10ea50

void __cdecl
UModularSynthComponent::execSetDecayTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetDecayTime'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetDecayTime'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetEnableLegato @ 14f10f400

void __cdecl
UModularSynthComponent::execSetEnableLegato(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_18 = local_res8[0] != 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetEnableLegato'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetEnableLegato'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetEnablePatch @ 14f10f4d0

void __cdecl
UModularSynthComponent::execSetEnablePatch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  bool bVar13;
  int local_res8 [2];
  uint local_res10 [2];
  
  local_res10[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar11 = (uint *)0x0;
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar4 = local_res10[0];
  bVar13 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar7 = puVar11;
  puVar12 = puVar11;
  if (0 < *(int *)&param_1[0x3b].field_0x10) {
    do {
      uVar10 = (uint)puVar7;
      uVar6 = 0;
      if ((int)uVar10 < *(int *)&param_1[0x3b].field_0x10) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)(*(longlong *)&param_1[0x3b].field_0x8 + (longlong)puVar12);
      if (*(int *)(lVar2 + 0x15f8) == *(int *)(lVar2 + 0x1624)) {
LAB_14f10f665:
        *(undefined1 *)param_3 = 0;
        return;
      }
      lVar8 = lVar2 + 0x1628;
      if (*(longlong *)(lVar2 + 0x1630) != 0) {
        lVar8 = *(longlong *)(lVar2 + 0x1630);
      }
      uVar6 = *(uint *)(lVar8 + (ulonglong)(*(int *)(lVar2 + 0x1638) - 1U & uVar4) * 4);
      if (uVar6 == 0xffffffff) goto LAB_14f10f665;
      while (puVar7 = (uint *)((longlong)(int)uVar6 * 0x20 + *(longlong *)(lVar2 + 0x15f0)),
            *puVar7 != uVar4) {
        uVar6 = puVar7[6];
        if (uVar6 == 0xffffffff) goto LAB_14f10f665;
      }
      puVar9 = puVar7 + 2;
      if (puVar7 == (uint *)0x0) {
        puVar9 = puVar11;
      }
      if (puVar9 == (uint *)0x0) goto LAB_14f10f665;
      if ((*(longlong *)puVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(bool *)(*(longlong *)puVar9 + 0x38) = bVar13;
      puVar7 = (uint *)(ulonglong)(uVar10 + 1);
      puVar12 = puVar12 + 2;
    } while ((int)(uVar10 + 1) < *(int *)&param_1[0x3b].field_0x10);
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execSetEnablePolyphony @ 14f10f6f0

void __cdecl
UModularSynthComponent::execSetEnablePolyphony(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_18 = local_res8[0] != 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetEnablePolyphony'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetEnablePolyphony'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetEnableRetrigger @ 14f10f7c0

void __cdecl
UModularSynthComponent::execSetEnableRetrigger(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_18 = local_res8[0] != 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetEnableRetrigger'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetEnableRetrigger'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetEnableUnison @ 14f10f890

void __cdecl
UModularSynthComponent::execSetEnableUnison(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_18 = local_res8[0] != 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetEnableUnison'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetEnableUnison'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetFilterAlgorithm @ 14f10fd90

void __cdecl
UModularSynthComponent::execSetFilterAlgorithm(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetFilterAlgorithm'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_18 = local_res8[0];
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetFilterAlgorithm'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetFilterFrequency @ 14f1106b0

void __cdecl
UModularSynthComponent::execSetFilterFrequency(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetFilterFrequency'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetFilterFrequencyMod @ 14f110770

void __cdecl
UModularSynthComponent::execSetFilterFrequencyMod(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequencyMod'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetFilterFrequencyMod'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetFilterQ @ 14f110830

void __cdecl UModularSynthComponent::execSetFilterQ(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetFilterQ'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetFilterQ'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetFilterQMod @ 14f1109b0

void __cdecl
UModularSynthComponent::execSetFilterQMod(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetFilterQMod'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetFilterQMod'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetFilterType @ 14f110b30

void __cdecl
UModularSynthComponent::execSetFilterType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetFilterType'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_18 = local_res8[0];
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetFilterType'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetGainDb @ 14f1112e0

void __cdecl UModularSynthComponent::execSetGainDb(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetGainDb'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetGainDb'::__l2::<lambda_1>,void>::Call
  ;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetLFOFrequency @ 14f112070

void __cdecl
UModularSynthComponent::execSetLFOFrequency(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
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
  local_14 = local_res10[0];
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_18 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetLFOFrequency'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetLFOFrequencyMod @ 14f112180

void __cdecl
UModularSynthComponent::execSetLFOFrequencyMod(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
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
  local_14 = local_res10[0];
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequencyMod'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_18 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetLFOFrequencyMod'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetLFOGain @ 14f112290

void __cdecl UModularSynthComponent::execSetLFOGain(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
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
  local_14 = local_res10[0];
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetLFOGain'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_18 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetLFOGain'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetLFOGainMod @ 14f1123a0

void __cdecl
UModularSynthComponent::execSetLFOGainMod(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
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
  local_14 = local_res10[0];
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetLFOGainMod'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_18 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetLFOGainMod'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetLFOMode @ 14f1124b0

void __cdecl UModularSynthComponent::execSetLFOMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined1 local_14;
  undefined8 local_10;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetLFOMode'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_18 = local_res10[0];
  local_14 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetLFOMode'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetLFOPatch @ 14f1125d0

void __cdecl UModularSynthComponent::execSetLFOPatch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined1 local_14;
  undefined8 local_10;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetLFOPatch'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_18 = local_res10[0];
  local_14 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetLFOPatch'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetLFOType @ 14f1126f0

void __cdecl UModularSynthComponent::execSetLFOType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined1 local_14;
  undefined8 local_10;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetLFOType'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_18 = local_res10[0];
  local_14 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetLFOType'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetModEnvAttackTime @ 14f112c80

void __cdecl
UModularSynthComponent::execSetModEnvAttackTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetModEnvAttackTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetModEnvAttackTime'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetModEnvBiasInvert @ 14f112d40

void __cdecl
UModularSynthComponent::execSetModEnvBiasInvert(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_18 = local_res8[0] != 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasInvert'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetModEnvBiasInvert'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetModEnvBiasPatch @ 14f112e10

void __cdecl
UModularSynthComponent::execSetModEnvBiasPatch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasPatch'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_18 = local_res8[0];
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetModEnvBiasPatch'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetModEnvDecayTime @ 14f112ee0

void __cdecl
UModularSynthComponent::execSetModEnvDecayTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDecayTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetModEnvDecayTime'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetModEnvDepth @ 14f112fa0

void __cdecl
UModularSynthComponent::execSetModEnvDepth(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDepth'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetModEnvDepth'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetModEnvInvert @ 14f113060

void __cdecl
UModularSynthComponent::execSetModEnvInvert(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_18 = local_res8[0] != 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetModEnvInvert'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetModEnvInvert'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetModEnvPatch @ 14f113130

void __cdecl
UModularSynthComponent::execSetModEnvPatch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetModEnvPatch'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_18 = local_res8[0];
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetModEnvPatch'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetModEnvReleaseTime @ 14f113200

void __cdecl
UModularSynthComponent::execSetModEnvReleaseTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetModEnvReleaseTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetModEnvReleaseTime'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetModEnvSustainGain @ 14f1132c0

void __cdecl
UModularSynthComponent::execSetModEnvSustainGain(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetModEnvSustainGain'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetModEnvSustainGain'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetOscCents @ 14f113720

void __cdecl UModularSynthComponent::execSetOscCents(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
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
  local_14 = local_res10[0];
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscCents'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_18 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscCents'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetOscFrequencyMod @ 14f113830

void __cdecl
UModularSynthComponent::execSetOscFrequencyMod(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
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
  local_14 = local_res10[0];
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscFrequencyMod'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_18 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscFrequencyMod'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetOscGain @ 14f113940

void __cdecl UModularSynthComponent::execSetOscGain(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
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
  local_14 = local_res10[0];
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscGain'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_18 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscGain'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetOscGainMod @ 14f113a50

void __cdecl
UModularSynthComponent::execSetOscGainMod(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
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
  local_14 = local_res10[0];
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscGainMod'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_18 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscGainMod'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetOscOctave @ 14f113b60

void __cdecl
UModularSynthComponent::execSetOscOctave(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
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
  local_14 = local_res10[0];
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscOctave'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_18 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscOctave'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetOscPulsewidth @ 14f113c70

void __cdecl
UModularSynthComponent::execSetOscPulsewidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
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
  local_14 = local_res10[0];
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscPulsewidth'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_18 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscPulsewidth'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetOscSemitones @ 14f113d80

void __cdecl
UModularSynthComponent::execSetOscSemitones(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
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
  local_14 = local_res10[0];
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscSemitones'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_18 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscSemitones'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetOscSync @ 14f113e90

void __cdecl UModularSynthComponent::execSetOscSync(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_18 = local_res8[0] != 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscSync'::`2'::<lambda_1>,0,0>::
              _vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscSync'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetOscType @ 14f113f60

void __cdecl UModularSynthComponent::execSetOscType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined1 local_14;
  undefined8 local_10;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetOscType'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_18 = local_res10[0];
  local_14 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetOscType'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetPan @ 14f114080

void __cdecl UModularSynthComponent::execSetPan(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetPan'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetPan'::__l2::<lambda_1>,void>::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetPitchBend @ 14f114250

void __cdecl
UModularSynthComponent::execSetPitchBend(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetPitchBend'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetPitchBend'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetPortamento @ 14f1145a0

void __cdecl
UModularSynthComponent::execSetPortamento(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetPortamento'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetPortamento'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetReleaseTime @ 14f114ed0

void __cdecl
UModularSynthComponent::execSetReleaseTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetReleaseTime'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetReleaseTime'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetSpread @ 14f117150

void __cdecl UModularSynthComponent::execSetSpread(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetSpread'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetSpread'::__l2::<lambda_1>,void>::Call
  ;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetStereoDelayFeedback @ 14f1176e0

void __cdecl
UModularSynthComponent::execSetStereoDelayFeedback(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayFeedback'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayFeedback'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetStereoDelayIsEnabled @ 14f1177a0

void __cdecl
UModularSynthComponent::execSetStereoDelayIsEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_18 = local_res8[0] != 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayIsEnabled'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayIsEnabled'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetStereoDelayMode @ 14f117870

void __cdecl
UModularSynthComponent::execSetStereoDelayMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayMode'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_18 = local_res8[0];
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayMode'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetStereoDelayRatio @ 14f117940

void __cdecl
UModularSynthComponent::execSetStereoDelayRatio(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayRatio'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayRatio'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetStereoDelayTime @ 14f117a00

void __cdecl
UModularSynthComponent::execSetStereoDelayTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayTime'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetStereoDelayWetlevel @ 14f117ac0

void __cdecl
UModularSynthComponent::execSetStereoDelayWetlevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayWetlevel'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetStereoDelayWetlevel'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetSustainGain @ 14f117c40

void __cdecl
UModularSynthComponent::execSetSustainGain(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularSynthComponent::SetSustainGain'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularSynthComponent::SetSustainGain'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetSynthPreset @ 14f117dd0

void __cdecl
UModularSynthComponent::execSetSynthPreset(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FProperty *pFVar2;
  FModularSynthPreset *pFVar3;
  code *local_208 [5];
  undefined8 *local_1e0;
  FModularSynthPreset local_1d8;
  UObject *local_f8;
  FModularSynthPreset local_f0;
  
  FModularSynthPreset::FModularSynthPreset(&local_1d8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  pFVar3 = &local_1d8;
  if ((FModularSynthPreset *)param_2->MostRecentPropertyAddress != (FModularSynthPreset *)0x0) {
    pFVar3 = (FModularSynthPreset *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f8 = param_1;
  FModularSynthPreset::FModularSynthPreset(&local_f0,pFVar3);
  local_208[0] = (code *)0x0;
  local_1e0 = FMemory::Malloc(0xf0,8);
  puVar1 = local_1e0 + 1;
  *local_1e0 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UModularSynthComponent::SetSynthPreset'::`2'::<lambda_1>,0,1>
                ::_vftable_;
  *puVar1 = local_f8;
  FModularSynthPreset::FModularSynthPreset((FModularSynthPreset *)(local_1e0 + 2),&local_f0);
  if (puVar1 != (undefined8 *)0x0) {
    local_208[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UModularSynthComponent::SetSynthPreset'::__l2::<lambda_1>,void>
                   ::Call;
  }
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_208);
  DestructItems<FEpicSynth1Patch,int>
            ((FEpicSynth1Patch *)local_f0.Patches.AllocatorInstance.Data,local_f0.Patches.ArrayNum);
  if ((FEpicSynth1Patch *)local_f0.Patches.AllocatorInstance.Data != (FEpicSynth1Patch *)0x0) {
    FMemory::Free(local_f0.Patches.AllocatorInstance.Data);
  }
  DestructItems<FEpicSynth1Patch,int>
            ((FEpicSynth1Patch *)local_1d8.Patches.AllocatorInstance.Data,local_1d8.Patches.ArrayNum
            );
  if ((FEpicSynth1Patch *)local_1d8.Patches.AllocatorInstance.Data != (FEpicSynth1Patch *)0x0) {
    FMemory::Free(local_1d8.Patches.AllocatorInstance.Data);
  }
  return;
}

