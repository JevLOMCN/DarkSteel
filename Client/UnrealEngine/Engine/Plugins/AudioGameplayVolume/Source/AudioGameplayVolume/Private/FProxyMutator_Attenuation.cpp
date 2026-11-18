// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 4

// FProxyMutator_Attenuation @ 14d99eee0

FProxyMutator_Attenuation * __thiscall
FProxyMutator_Attenuation::FProxyMutator_Attenuation(FProxyMutator_Attenuation *this)

{
  FName local_res8 [4];
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FProxyVolumeMutator__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = -1;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  ::FName::FName(local_res8,L"MutatorBase");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8[0];
  this->ExteriorVolume = 1.0;
  this->_padding_ = (longlong)&___7FProxyMutator_Attenuation__6B_;
  this->ExteriorTime = 0.5;
  this->InteriorVolume = 1.0;
  this->InteriorTime = 0.5;
  ::FName::FName(local_res8,L"Attenuation");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8[0];
  return this;
}

// ~FProxyMutator_Attenuation @ 14d9a0160

void __thiscall
FProxyMutator_Attenuation::~FProxyMutator_Attenuation(FProxyMutator_Attenuation *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d9a0180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Apply @ 14d9a2480

void __thiscall
FProxyMutator_Attenuation::Apply
          (FProxyMutator_Attenuation *this,FAudioProxyActiveSoundParams *param_1)

{
  param_1->bAffectedByAttenuation =
       (bool)(param_1->bAffectedByAttenuation | param_1->bListenerInVolume);
  return;
}

// Apply @ 14d9a2490

void __thiscall
FProxyMutator_Attenuation::Apply(FProxyMutator_Attenuation *this,FInteriorSettings *param_1)

{
  param_1->bIsWorldSettings = false;
  param_1->ExteriorVolume = this->ExteriorVolume;
  param_1->ExteriorTime = this->ExteriorTime;
  param_1->InteriorVolume = this->InteriorVolume;
  param_1->InteriorTime = this->InteriorTime;
  return;
}

