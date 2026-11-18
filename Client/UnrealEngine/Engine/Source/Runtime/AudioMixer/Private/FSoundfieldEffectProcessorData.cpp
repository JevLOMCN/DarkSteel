// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// FSoundfieldEffectProcessorData @ 14653def0

FSoundfieldEffectProcessorData * __thiscall
Audio::FMixerSubmix::FSoundfieldEffectProcessorData::FSoundfieldEffectProcessorData
          (FSoundfieldEffectProcessorData *this,ISoundfieldFactory *param_1,
          ISoundfieldEncodingSettingsProxy *param_2,USoundfieldEffectBase *param_3)

{
  TUniquePtr<ISoundfieldEffectInstance,TDefaultDelete<ISoundfieldEffectInstance>_> *pTVar1;
  ISoundfieldEffectInstance *pIVar2;
  ISoundfieldEffectSettingsProxy *pIVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  FSoundfieldEffectProcessorData *pFVar7;
  undefined8 uVar8;
  USoundfieldEffectSettingsBase *pUVar9;
  undefined1 local_res8 [8];
  TUniquePtr<ISoundfieldEffectInstance,TDefaultDelete<ISoundfieldEffectInstance>_> local_38;
  TUniquePtr<ISoundfieldEffectSettingsProxy,TDefaultDelete<ISoundfieldEffectSettingsProxy>_>
  local_30;
  
  pTVar1 = &this->Processor;
  (this->Settings).Ptr = (ISoundfieldEffectSettingsProxy *)0x0;
  pTVar1->Ptr = (ISoundfieldEffectInstance *)0x0;
  if ((param_1 == (ISoundfieldFactory *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFactory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Public\\AudioMixerSubmix.h"
                         ,0x1c6,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FSoundfieldEffectProcessorData *)(*pcVar4)();
    return pFVar7;
  }
  pcVar4 = *(code **)(param_3->_padding_ + 0x2b0);
  uVar8 = (**(code **)((longlong)*param_1 + 8))(param_1,local_res8);
  cVar6 = (*pcVar4)(param_3,uVar8);
  if ((cVar6 == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InProcessorBase->SupportsFormat(InFactory->GetSoundfieldFormatName())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Public\\AudioMixerSubmix.h"
                         ,0x1c9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FSoundfieldEffectProcessorData *)(*pcVar4)();
    return pFVar7;
  }
  (**(code **)(param_3->_padding_ + 0x2c8))(param_3,&local_38,param_2);
  if (pTVar1 != &local_38) {
    pIVar2 = pTVar1->Ptr;
    pTVar1->Ptr = local_38.Ptr;
    local_38.Ptr = (ISoundfieldEffectInstance *)0x0;
    if (pIVar2 != (ISoundfieldEffectInstance *)0x0) {
      (**(code **)*pIVar2)(pIVar2,1);
    }
  }
  if (local_38.Ptr != (ISoundfieldEffectInstance *)0x0) {
    (**(code **)*local_38.Ptr)(local_38.Ptr,1);
  }
  pUVar9 = (param_3->Settings).field0_0x0.DebugPtr;
  if (pUVar9 == (USoundfieldEffectSettingsBase *)0x0) {
    pUVar9 = (USoundfieldEffectSettingsBase *)(**(code **)(param_3->_padding_ + 0x2c0))(param_3);
  }
  (**(code **)(*(longlong *)pUVar9 + 0x2b0))(pUVar9,&local_30);
  if (this != (FSoundfieldEffectProcessorData *)&local_30) {
    pIVar3 = (this->Settings).Ptr;
    (this->Settings).Ptr = local_30.Ptr;
    local_30.Ptr = (ISoundfieldEffectSettingsProxy *)0x0;
    if (pIVar3 != (ISoundfieldEffectSettingsProxy *)0x0) {
      (**(code **)*pIVar3)(pIVar3,1);
    }
  }
  if (local_30.Ptr != (ISoundfieldEffectSettingsProxy *)0x0) {
    (**(code **)*local_30.Ptr)(local_30.Ptr,1);
  }
  return this;
}

