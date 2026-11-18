// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 1

// FindIntersection @ 14969ec90

bool __cdecl
UE::Geometry::TIntrRay3OrientedBox3<double>::FindIntersection
          (TRay<double> *param_1,TOrientedBox3<double> *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double local_res8;
  double local_res10 [2];
  double local_res20;
  double local_158;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  TVector<double> local_f0;
  TVector<double> local_d8 [8];
  
  dVar1 = (param_2->Frame).Rotation.field0_0x0._s_0.X;
  dVar17 = (param_2->Frame).Rotation.field0_0x0._s_0.W;
  local_res20 = (param_1->Origin).field0_0x0._s_0.X - (param_2->Frame).Origin.field0_0x0._s_0.X;
  dVar2 = (param_2->Frame).Rotation.field0_0x0._s_0.Y;
  dVar12 = dVar2 + dVar2;
  local_res10[0] = (param_1->Origin).field0_0x0._s_0.Y - (param_2->Frame).Origin.field0_0x0._s_0.Y;
  dVar11 = (param_1->Origin).field0_0x0._s_0.Z - (param_2->Frame).Origin.field0_0x0._s_0.Z;
  dVar3 = (param_2->Frame).Rotation.field0_0x0._s_0.Z;
  dVar16 = dVar3 + dVar3;
  dVar9 = dVar1 * dVar16 + dVar17 * dVar12;
  dVar6 = dVar1 * dVar16 - dVar17 * dVar12;
  dVar4 = (param_1->Direction).field0_0x0._s_0.Y;
  dVar8 = __real_3ff0000000000000 - (dVar16 * dVar3 + dVar12 * dVar2);
  dVar7 = dVar17 * dVar16 + dVar1 * dVar12;
  dVar10 = dVar1 * dVar12 - dVar17 * dVar16;
  dVar13 = (dVar1 + dVar1) * dVar1;
  dVar17 = (dVar1 + dVar1) * dVar17;
  dVar1 = (param_1->Direction).field0_0x0._s_0.X;
  dVar5 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar3 = __real_3ff0000000000000 - (dVar13 + dVar16 * dVar3);
  local_res8 = dVar16 * dVar2 - dVar17;
  dVar17 = dVar16 * dVar2 + dVar17;
  local_158 = __real_3ff0000000000000 - (dVar13 + dVar12 * dVar2);
  local_150._s_0.X = local_res10[0] * dVar7 + local_res20 * dVar8 + dVar11 * dVar6;
  local_150._s_0.Z = local_res10[0] * local_res8 + local_res20 * dVar9 + dVar11 * local_158;
  local_150._s_0.Y = local_res10[0] * dVar3 + local_res20 * dVar10 + dVar11 * dVar17;
  local_138._s_0.X = dVar4 * dVar7 + dVar1 * dVar8 + dVar5 * dVar6;
  local_138._s_0.Z = dVar4 * local_res8 + dVar1 * dVar9 + dVar5 * local_158;
  local_138._s_0.Y = dVar4 * dVar3 + dVar1 * dVar10 + dVar5 * dVar17;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_138._s_0,__real_3e45798ee0000000);
  local_108 = *(undefined8 *)&(param_2->Extents).field0_0x0;
  local_100 = *(undefined8 *)((longlong)&(param_2->Extents).field0_0x0 + 8);
  local_f8 = *(undefined8 *)((longlong)&(param_2->Extents).field0_0x0 + 0x10);
  uVar14 = (uint)__xmm_80000000000000008000000000000000;
  uVar15 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_120._s_0.X =
       (double)CONCAT44((uint)((ulonglong)local_108 >> 0x20) ^ uVar15,(uint)local_108 ^ uVar14);
  local_120._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)local_100 >> 0x20) ^ uVar15,(uint)local_100 ^ uVar14);
  local_res8 = (double)((ulonglong)local_res8 & 0xffffffff00000000);
  local_120._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)local_f8 >> 0x20) ^ uVar15,(uint)local_f8 ^ uVar14);
  local_res20 = 0.0;
  local_158 = __real_7fefffffffffffff;
  TIntrRay3AxisAlignedBox3<double>::DoClipping
            (&local_res20,&local_158,(TVector<double> *)&local_150._s_0,
             (TVector<double> *)&local_138._s_0,(TAxisAlignedBox3<double> *)&local_120._s_0,true,
             (int *)local_res10,local_d8,&local_f0,(EIntersectionType *)&local_res8);
  if (local_res8._0_4_ == 0) {
    *param_3 = 1.7976931348623157e+308;
  }
  else {
    *param_3 = local_res20;
  }
  return local_res8._0_4_ != 0;
}

