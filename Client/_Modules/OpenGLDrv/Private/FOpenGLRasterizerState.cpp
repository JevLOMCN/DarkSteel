// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// GetInitializer @ 145c02220

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

bool __thiscall
FOpenGLRasterizerState::GetInitializer
          (FOpenGLRasterizerState *this,FRasterizerStateInitializerRHI *param_1)

{
  uint uVar1;
  uchar uVar2;
  
  param_1->FillMode = '\0';
  param_1->CullMode = '\0';
  *(undefined2 *)&param_1->field_0x2 = 0;
  param_1->DepthBias = 0.0;
  param_1->SlopeScaleDepthBias = 0.0;
  param_1->DepthClipMode = DepthClip;
  param_1->bAllowMSAA = false;
  *(undefined2 *)&param_1->field_0xe = 0;
  uVar1 = (this->Data).CullMode;
  if (FOpenGLBase::bSupportsClipControl == false) {
    if (uVar1 != 0x404) {
      if (uVar1 != 0x405) {
        uVar2 = '\0';
        goto LAB_145c0225b;
      }
      goto LAB_145c02245;
    }
  }
  else {
    if (uVar1 == 0x404) {
LAB_145c02245:
      uVar2 = '\x02';
      goto LAB_145c0225b;
    }
    if (uVar1 != 0x405) {
      uVar2 = '\0';
      goto LAB_145c0225b;
    }
  }
  uVar2 = '\x01';
LAB_145c0225b:
  (param_1->CullMode).Value = uVar2;
  uVar1 = (this->Data).FillMode;
  if (uVar1 == 0x1b00) {
    uVar2 = '\0';
  }
  else if (uVar1 == 0x1b01) {
    uVar2 = '\x01';
  }
  else {
    uVar2 = '\x02';
  }
  (param_1->FillMode).Value = uVar2;
  param_1->DepthBias = (this->Data).DepthBias;
  param_1->SlopeScaleDepthBias = (this->Data).SlopeScaleDepthBias;
  param_1->DepthClipMode = (this->Data).DepthClipMode;
  return true;
}

