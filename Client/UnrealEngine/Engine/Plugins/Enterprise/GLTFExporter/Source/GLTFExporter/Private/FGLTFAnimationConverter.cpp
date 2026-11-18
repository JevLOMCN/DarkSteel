// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5e4990

FGLTFJsonAnimation * __thiscall
FGLTFAnimationConverter::Convert
          (FGLTFAnimationConverter *this,FGLTFJsonNode *param_1,USkeletalMesh *param_2,
          UAnimSequence *param_3)

{
  longlong lVar1;
  FGLTFTaskBuilder *this_00;
  int iVar2;
  longlong lVar3;
  FGLTFJsonAnimation *pFVar4;
  undefined8 *local_res20;
  
  iVar2 = (**(code **)(param_3->_padding_ + 0x310))(param_3);
  if (((-1 < iVar2) && (lVar1 = param_3->_padding_, lVar1 != 0)) &&
     (lVar3 = (**(code **)(param_2->_padding_ + 0x400))(param_2), lVar1 == lVar3)) {
    pFVar4 = FGLTFJsonBuilder::AddAnimation(*(FGLTFJsonBuilder **)&this->field_0x58);
    this_00 = *(FGLTFTaskBuilder **)&this->field_0x58;
    local_res20 = ::operator_new(0x38);
    if (local_res20 != (undefined8 *)0x0) {
      *(undefined1 *)(local_res20 + 1) = 0;
      *local_res20 = &___7FGLTFDelayedAnimSequenceTask__6B_;
      local_res20[2] = this_00;
      local_res20[3] = param_1;
      local_res20[4] = param_2;
      local_res20[5] = param_3;
      local_res20[6] = pFVar4;
    }
    FGLTFTaskBuilder::ScheduleSlowTask(this_00,(FGLTFDelayedTask *)&local_res20);
    return pFVar4;
  }
  return (FGLTFJsonAnimation *)0x0;
}

