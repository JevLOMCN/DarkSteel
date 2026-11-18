// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FDynamicRibbonEmitterReplayData @ 14815a550

FDynamicRibbonEmitterReplayData * __thiscall
FDynamicRibbonEmitterReplayData::FDynamicRibbonEmitterReplayData
          (FDynamicRibbonEmitterReplayData *this)

{
  FDynamicSpriteEmitterReplayDataBase::FDynamicSpriteEmitterReplayDataBase
            ((FDynamicSpriteEmitterReplayDataBase *)this);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDynamicRibbonEmitterReplayData__6B_;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 1;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 1;
  return this;
}

// Serialize @ 1481945e0

void __thiscall
FDynamicRibbonEmitterReplayData::Serialize(FDynamicRibbonEmitterReplayData *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  FDynamicTrailsEmitterReplayData::Serialize((FDynamicTrailsEmitterReplayData *)this,param_1);
  piVar1 = &this->MaxTessellationBetweenParticles;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148194641. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return;
}

