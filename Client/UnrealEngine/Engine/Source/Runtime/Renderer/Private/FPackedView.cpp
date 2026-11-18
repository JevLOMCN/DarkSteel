// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// UpdateLODScales @ 1450814a0

void __thiscall Nanite::FPackedView::UpdateLODScales(FPackedView *this,float param_1,float param_2)

{
  TVector2<float>_u_0 TVar1;
  float fVar2;
  
  fVar2 = (this->ViewToClip).M[1][1] * __real_3f000000 *
          (this->ViewSizeAndInvSize).field0_0x0._s_0.Y;
  TVar1._s_0.Y = fVar2 / param_2;
  TVar1._s_0.X = fVar2 / param_1;
  (this->LODScales).field0_0x0 = TVar1;
  return;
}

