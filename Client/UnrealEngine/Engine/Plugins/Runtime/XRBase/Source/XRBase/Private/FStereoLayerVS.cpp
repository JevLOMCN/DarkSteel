// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 1

// SetParameters @ 14cf9ad40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStereoLayerVS::SetParameters
          (FStereoLayerVS *this,FRHIBatchedShaderParameters *param_1,TVector2<double> *param_2,
          TBox2<double> *param_3,TMatrix<double> *param_4,TMatrix<double> *param_5)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 auStackY_a8 [32];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  uVar3 = (this->InQuadAdjust).NumBytes;
  uVar4 = (uint)uVar3;
  if (uVar3 != 0) {
    local_78 = (float)(param_2->field0_0x0)._s_0.X;
    if (8 < uVar3) {
      uVar4 = 8;
    }
    local_74 = (float)(param_2->field0_0x0)._s_0.Y;
    if (uVar4 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->InQuadAdjust).BufferIndex,(uint)(this->InQuadAdjust).BaseIndex
                 ,uVar4,&local_78);
    }
  }
  uVar3 = (this->InUVAdjust).NumBytes;
  uVar4 = (uint)uVar3;
  if (uVar3 != 0) {
    dVar1 = (param_3->Min).field0_0x0._s_0.X;
    dVar2 = (param_3->Min).field0_0x0._s_0.Y;
    local_78 = (float)dVar1;
    if (0x10 < uVar3) {
      uVar4 = 0x10;
    }
    local_74 = (float)dVar2;
    local_70 = (float)((param_3->Max).field0_0x0._s_0.X - dVar1);
    local_6c = (float)((param_3->Max).field0_0x0._s_0.Y - dVar2);
    if (uVar4 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->InUVAdjust).BufferIndex,(uint)(this->InUVAdjust).BaseIndex,
                 uVar4,&local_78);
    }
  }
  uVar3 = (this->InViewProjection).NumBytes;
  uVar4 = (uint)uVar3;
  if (uVar3 != 0) {
    if (0x40 < uVar3) {
      uVar4 = 0x40;
    }
    fStack_60 = (float)param_4->M[0][2];
    fStack_5c = (float)param_4->M[0][3];
    local_68 = (float)param_4->M[0][0];
    fStack_64 = (float)param_4->M[0][1];
    fStack_50 = (float)param_4->M[1][2];
    fStack_4c = (float)param_4->M[1][3];
    local_58 = (float)param_4->M[1][0];
    fStack_54 = (float)param_4->M[1][1];
    fStack_40 = (float)param_4->M[2][2];
    fStack_3c = (float)param_4->M[2][3];
    local_48 = (float)param_4->M[2][0];
    fStack_44 = (float)param_4->M[2][1];
    fStack_30 = (float)param_4->M[3][2];
    fStack_2c = (float)param_4->M[3][3];
    local_38 = (float)param_4->M[3][0];
    fStack_34 = (float)param_4->M[3][1];
    if (uVar4 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->InViewProjection).BufferIndex,
                 (uint)(this->InViewProjection).BaseIndex,uVar4,&local_68);
    }
  }
  uVar3 = (this->InWorld).NumBytes;
  uVar4 = (uint)uVar3;
  if (uVar3 != 0) {
    if (0x40 < uVar3) {
      uVar4 = 0x40;
    }
    fStack_60 = (float)param_5->M[0][2];
    fStack_5c = (float)param_5->M[0][3];
    local_68 = (float)param_5->M[0][0];
    fStack_64 = (float)param_5->M[0][1];
    fStack_50 = (float)param_5->M[1][2];
    fStack_4c = (float)param_5->M[1][3];
    local_58 = (float)param_5->M[1][0];
    fStack_54 = (float)param_5->M[1][1];
    fStack_40 = (float)param_5->M[2][2];
    fStack_3c = (float)param_5->M[2][3];
    local_48 = (float)param_5->M[2][0];
    fStack_44 = (float)param_5->M[2][1];
    fStack_30 = (float)param_5->M[3][2];
    fStack_2c = (float)param_5->M[3][3];
    local_38 = (float)param_5->M[3][0];
    fStack_34 = (float)param_5->M[3][1];
    if (uVar4 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->InWorld).BufferIndex,(uint)(this->InWorld).BaseIndex,uVar4,
                 &local_68);
    }
  }
  return;
}

