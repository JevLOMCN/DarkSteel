// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 4

// FProxyMutator_Filter @ 14d99ef80

FProxyMutator_Filter * __thiscall
FProxyMutator_Filter::FProxyMutator_Filter(FProxyMutator_Filter *this)

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
  this->ExteriorLPF = 20000.0;
  this->_padding_ = (longlong)&___7FProxyMutator_Filter__6B_;
  this->ExteriorLPFTime = 0.5;
  this->InteriorLPF = 20000.0;
  this->InteriorLPFTime = 0.5;
  ::FName::FName(local_res8,L"Filter");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8[0];
  return this;
}

// ~FProxyMutator_Filter @ 14d9a0190

void __thiscall FProxyMutator_Filter::~FProxyMutator_Filter(FProxyMutator_Filter *this)

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
                    /* WARNING: Could not recover jumptable at 0x00014d9a01b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Apply @ 14d9a24c0

void __thiscall
FProxyMutator_Filter::Apply(FProxyMutator_Filter *this,FAudioProxyActiveSoundParams *param_1)

{
  param_1->bAffectedByFilter = (bool)(param_1->bAffectedByFilter | param_1->bListenerInVolume);
  return;
}

// Apply @ 14d9a24d0

void __thiscall FProxyMutator_Filter::Apply(FProxyMutator_Filter *this,FInteriorSettings *param_1)

{
  param_1->bIsWorldSettings = false;
  param_1->ExteriorLPF = this->ExteriorLPF;
  param_1->ExteriorLPFTime = this->ExteriorLPFTime;
  param_1->InteriorLPF = this->InteriorLPF;
  param_1->InteriorLPFTime = this->InteriorLPFTime;
  return;
}

