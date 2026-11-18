// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// FVolumeBoundsCache @ 146f29b60

FVolumeBoundsCache * __thiscall
`UEnvQueryTest_Volume::RunTest'::__l2::FVolumeBoundsCache::FVolumeBoundsCache
          (void *this,AVolume *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  TBoxSphereBounds<double,double> *pTVar10;
  TBoxSphereBounds<double,double> local_78 [2];
  
  *(AVolume **)this = param_1;
  *(undefined1 *)((longlong)this + 0x38) = 0;
  pTVar10 = AVolume::GetBounds(param_1,local_78);
  dVar1 = (pTVar10->BoxExtent).field0_0x0._s_0.X;
  dVar2 = (pTVar10->BoxExtent).field0_0x0._s_0.Y;
  dVar3 = (pTVar10->BoxExtent).field0_0x0._s_0.Z;
  dVar4 = (pTVar10->Origin).field0_0x0._s_0.Z;
  dVar5 = (pTVar10->Origin).field0_0x0._s_0.X;
  dVar6 = (pTVar10->Origin).field0_0x0._s_0.Y;
  dVar8 = dVar3 + (pTVar10->Origin).field0_0x0._s_0.Z;
  dVar7 = (pTVar10->Origin).field0_0x0._s_0.Y;
  *(double *)((longlong)this + 8) = (pTVar10->Origin).field0_0x0._s_0.X - dVar1;
  *(double *)((longlong)this + 0x10) = dVar6 - dVar2;
  *(double *)((longlong)this + 0x18) = dVar4 - dVar3;
  *(double *)((longlong)this + 0x20) = dVar1 + dVar5;
  auVar9._8_4_ = SUB84(dVar8,0);
  auVar9._0_8_ = dVar2 + dVar7;
  auVar9._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])((longlong)this + 0x28) = auVar9;
  *(ulonglong *)((longlong)this + 0x38) = CONCAT71(local_78[0].SphereRadius._1_7_,1);
  return this;
}

