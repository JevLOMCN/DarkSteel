// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5ec1c0

FGLTFJsonTexture * __thiscall
FGLTFTexture2DConverter::Convert
          (FGLTFTexture2DConverter *this,UTexture2D *param_1,bool param_2,TextureAddress param_3,
          TextureAddress param_4)

{
  FGLTFTaskBuilder *this_00;
  FGLTFJsonTexture *pFVar1;
  undefined8 *local_res8;
  
  if (*(char *)((*(FGLTFJsonBuilder **)&this->field_0x58)->_padding_ + 0xa4) == '\0') {
    return (FGLTFJsonTexture *)0x0;
  }
  pFVar1 = FGLTFJsonBuilder::AddTexture(*(FGLTFJsonBuilder **)&this->field_0x58);
  this_00 = *(FGLTFTaskBuilder **)&this->field_0x58;
  local_res8 = ::operator_new(0x38);
  if (local_res8 != (undefined8 *)0x0) {
    *(undefined1 *)(local_res8 + 1) = 3;
    *local_res8 = &___7FGLTFDelayedTexture2DTask__6B_;
    *(TextureAddress *)(local_res8 + 5) = param_4;
    local_res8[2] = this_00;
    local_res8[3] = param_1;
    *(bool *)(local_res8 + 4) = param_2;
    *(TextureAddress *)((longlong)local_res8 + 0x24) = param_3;
    local_res8[6] = pFVar1;
  }
  FGLTFTaskBuilder::ScheduleSlowTask(this_00,(FGLTFDelayedTask *)&local_res8);
  return pFVar1;
}

