// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// SetParameters @ 14578d620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWriteToSliceVS::SetParameters
          (FWriteToSliceVS *this,FRHIBatchedShaderParameters *param_1,FVolumeBounds *param_2,
          TIntVector3<int> *param_3)

{
  ushort uVar1;
  uint uVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_10 = __real_3f800000 / (float)(param_3->field0_0x0)._s_0.X;
  uVar1 = (this->UVScaleBias).NumBytes;
  uVar2 = (uint)uVar1;
  local_c = __real_3f800000 / (float)(param_3->field0_0x0)._s_0.Y;
  local_18 = (float)(param_2->MaxX - param_2->MinX) * local_10;
  local_10 = (float)param_2->MinX * local_10;
  if (0x10 < uVar1) {
    uVar2 = 0x10;
  }
  local_14 = (float)(param_2->MaxY - param_2->MinY) * local_c;
  local_c = (float)param_2->MinY * local_c;
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->UVScaleBias).BufferIndex,(uint)(this->UVScaleBias).BaseIndex,
               uVar2,&local_18);
  }
  uVar1 = (this->MinZ).NumBytes;
  uVar2 = (uint)uVar1;
  if (4 < uVar1) {
    uVar2 = 4;
  }
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->MinZ).BufferIndex,(uint)(this->MinZ).BaseIndex,uVar2,
               &param_2->MinZ);
  }
  return;
}

