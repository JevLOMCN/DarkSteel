// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 1

// Update @ 14d9aa150

void __thiscall
FAudioGameplayActiveSoundInfo::Update(FAudioGameplayActiveSoundInfo *this,double param_1)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  
  dVar1 = this->LastUpdateTime;
  uVar2 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar3 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar3,uVar2) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar3,uVar2) == __real_3e45798ee2308c3a) {
    (this->InteriorSettings).InteriorStartTime = param_1;
  }
  if ((dVar1 < param_1) || (dVar1 < (this->InteriorSettings).InteriorStartTime)) {
    this->SourceInteriorVolume = this->CurrentInteriorVolume;
    this->SourceInteriorLPF = this->CurrentInteriorLPF;
    this->LastUpdateTime = (double)FApp::CurrentTime;
  }
  FInterpolatedInteriorSettings::UpdateInteriorValues(&this->InteriorSettings);
  return;
}

