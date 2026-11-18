// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// ToGrid @ 14361cb40

FVector3i * __thiscall
UE::Geometry::TShiftGridIndexer3<double>::ToGrid
          (TShiftGridIndexer3<double> *this,FVector3i *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined4 in_EAX;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  
  dVar9 = __real_3ff0000000000000 / this->CellSize;
  dVar6 = ((param_1->field0_0x0)._s_0.X - (this->Origin).field0_0x0._s_0.X) * dVar9;
  lVar8 = (longlong)dVar6;
  if ((lVar8 != -0x8000000000000000) && ((double)lVar8 != dVar6)) {
    auVar3._8_4_ = SUB84(dVar6,0);
    auVar3._0_8_ = dVar6;
    auVar3._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    uVar7 = movmskpd(in_EAX,auVar3);
    dVar6 = (double)(longlong)(lVar8 - (ulonglong)(uVar7 & 1));
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (this->Origin).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (int)dVar6;
  dVar1 = (dVar1 - dVar2) * dVar9;
  lVar8 = (longlong)dVar1;
  if ((lVar8 != -0x8000000000000000) && ((double)lVar8 != dVar1)) {
    auVar4._8_4_ = SUB84(dVar1,0);
    auVar4._0_8_ = dVar1;
    auVar4._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    uVar7 = movmskpd((int)dVar6,auVar4);
    dVar1 = (double)(longlong)(lVar8 - (ulonglong)(uVar7 & 1));
  }
  dVar6 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (this->Origin).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (int)dVar1;
  dVar9 = (dVar6 - dVar2) * dVar9;
  lVar8 = (longlong)dVar9;
  if ((lVar8 != -0x8000000000000000) && ((double)lVar8 != dVar9)) {
    auVar5._8_4_ = SUB84(dVar9,0);
    auVar5._0_8_ = dVar9;
    auVar5._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    uVar7 = movmskpd((int)dVar1,auVar5);
    dVar9 = (double)(longlong)(lVar8 - (ulonglong)(uVar7 & 1));
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (int)dVar9;
  return __return_storage_ptr__;
}

