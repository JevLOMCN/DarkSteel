// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// IsInDrawRegion @ 1437973e0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
ChaosDD::Private::FChaosDDFrameWriter::IsInDrawRegion
          (FChaosDDFrameWriter *this,TSphere<double> *param_1)

{
  FChaosDDFrame *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  pFVar1 = (this->Frame).Object;
  if (pFVar1 == (FChaosDDFrame *)0x0) {
    return false;
  }
  dVar5 = (pFVar1->DrawRegion).W;
  if (0.0 < dVar5) {
    dVar4 = (pFVar1->DrawRegion).Center.field0_0x0._s_0.Y - (param_1->Center).field0_0x0._s_0.Y;
    dVar5 = dVar5 + param_1->W + __real_3f1a36e2e0000000;
    dVar3 = (pFVar1->DrawRegion).Center.field0_0x0._s_0.X - (param_1->Center).field0_0x0._s_0.X;
    dVar2 = (pFVar1->DrawRegion).Center.field0_0x0._s_0.Z - (param_1->Center).field0_0x0._s_0.Z;
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    return dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2 <= dVar5 * dVar5;
  }
  return true;
}

