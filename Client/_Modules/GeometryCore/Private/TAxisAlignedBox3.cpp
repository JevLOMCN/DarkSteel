// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 5

// TAxisAlignedBox3<double> @ 1433659a0

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
          (TAxisAlignedBox3<double> *this,TAxisAlignedBox3<double> *param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2)

{
  double *pdVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  undefined8 uVar7;
  longlong lVar8;
  TAxisAlignedBox3<double> *pTVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  
  plVar13 = (longlong *)&param_2->field_0x10;
  if (*(void **)param_2 == (void *)0x0) {
    dVar6 = (param_1->Min).field0_0x0._s_0.Y;
    (this->Min).field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
    (this->Min).field0_0x0._s_0.Y = dVar6;
    (this->Min).field0_0x0._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
    uVar3 = *(undefined4 *)((longlong)&(param_1->Max).field0_0x0 + 4);
    uVar4 = *(undefined4 *)((longlong)&(param_1->Max).field0_0x0 + 8);
    uVar5 = *(undefined4 *)((longlong)&(param_1->Max).field0_0x0 + 0xc);
    *(undefined4 *)&(this->Max).field0_0x0 = *(undefined4 *)&(param_1->Max).field0_0x0;
    *(undefined4 *)((longlong)&(this->Max).field0_0x0 + 4) = uVar3;
    *(undefined4 *)((longlong)&(this->Max).field0_0x0 + 8) = uVar4;
    *(undefined4 *)((longlong)&(this->Max).field0_0x0 + 0xc) = uVar5;
    (this->Max).field0_0x0._s_0.Z = (param_1->Max).field0_0x0._s_0.Z;
  }
  else {
    local_88 = (param_1->Min).field0_0x0._s_0.Z;
    local_98 = (param_1->Min).field0_0x0._s_0.X;
    dStack_90 = (param_1->Min).field0_0x0._s_0.Y;
    Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar2 = *(code **)param_2;
    plVar10 = plVar13;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_2->field_0x28;
    }
    uVar7 = (**(code **)(*plVar10 + 8))();
    (*pcVar2)(&local_50,uVar7,&local_98);
    uVar12 = 1;
    (this->Min).field0_0x0._s_0.X = local_50;
    (this->Min).field0_0x0._s_0.Y = dStack_48;
    (this->Max).field0_0x0._s_0.X = local_50;
    (this->Max).field0_0x0._s_0.Y = dStack_48;
    (this->Min).field0_0x0._s_0.Z = local_40;
    (this->Max).field0_0x0._s_0.Z = local_40;
    do {
      lVar8 = 8;
      if ((uVar12 & 2) != 0) {
        lVar8 = 0x20;
      }
      uVar11 = (uint)uVar12;
      local_78 = *(undefined8 *)((longlong)&(param_1->Min).field0_0x0 + lVar8);
      lVar8 = 0x10;
      if (3 < uVar11) {
        lVar8 = 0x28;
      }
      local_70 = *(undefined8 *)((longlong)&(param_1->Min).field0_0x0 + lVar8);
      pTVar9 = (TAxisAlignedBox3<double> *)&param_1->Max;
      if ((((uint)(uVar12 >> 1) ^ uVar11) & 1) == 0) {
        pTVar9 = param_1;
      }
      local_80 = (pTVar9->Min).field0_0x0._s_0.X;
      Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar2 = *(code **)param_2;
      plVar10 = *(longlong **)&param_2->field_0x28;
      if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
        plVar10 = plVar13;
      }
      uVar7 = (**(code **)(*plVar10 + 8))();
      (*pcVar2)(&local_68,uVar7,&local_80);
      if (local_68 < (this->Min).field0_0x0._s_0.X) {
        (this->Min).field0_0x0._s_0.X = local_68;
      }
      if ((this->Max).field0_0x0._s_0.X <= local_68 && local_68 != (this->Max).field0_0x0._s_0.X) {
        (this->Max).field0_0x0._s_0.X = local_68;
      }
      if (local_60 < (this->Min).field0_0x0._s_0.Y) {
        (this->Min).field0_0x0._s_0.Y = local_60;
      }
      pdVar1 = &(this->Max).field0_0x0._s_0.Y;
      if (*pdVar1 <= local_60 && local_60 != *pdVar1) {
        (this->Max).field0_0x0._s_0.Y = local_60;
      }
      if (local_58 < (this->Min).field0_0x0._s_0.Z) {
        (this->Min).field0_0x0._s_0.Z = local_58;
      }
      pdVar1 = &(this->Max).field0_0x0._s_0.Z;
      if (*pdVar1 <= local_58 && local_58 != *pdVar1) {
        (this->Max).field0_0x0._s_0.Z = local_58;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < 8);
  }
  if (*(longlong *)param_2 != 0) {
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  return this;
}

// DistanceSquared @ 14339b4a0

double __thiscall
UE::Geometry::TAxisAlignedBox3<double>::DistanceSquared
          (TAxisAlignedBox3<double> *this,TAxisAlignedBox3<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = (this->Max).field0_0x0._s_0.X;
  dVar1 = (param_1->Max).field0_0x0._s_0.X;
  dVar2 = (this->Max).field0_0x0._s_0.Y;
  dVar3 = (dVar1 + (param_1->Min).field0_0x0._s_0.X) - (dVar5 + (this->Min).field0_0x0._s_0.X);
  dVar1 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          ((dVar1 - (param_1->Min).field0_0x0._s_0.X) + (dVar5 - (this->Min).field0_0x0._s_0.X));
  dVar5 = (param_1->Max).field0_0x0._s_0.Y;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar4 = (dVar5 + (param_1->Min).field0_0x0._s_0.Y) - (dVar2 + (this->Min).field0_0x0._s_0.Y);
  dVar3 = (this->Max).field0_0x0._s_0.Z;
  dVar2 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          ((dVar5 - (param_1->Min).field0_0x0._s_0.Y) + (dVar2 - (this->Min).field0_0x0._s_0.Y));
  dVar5 = (param_1->Max).field0_0x0._s_0.Z;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  dVar4 = (dVar5 + (param_1->Min).field0_0x0._s_0.Z) - (dVar3 + (this->Min).field0_0x0._s_0.Z);
  dVar5 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          ((dVar5 - (param_1->Min).field0_0x0._s_0.Z) + (dVar3 - (this->Min).field0_0x0._s_0.Z));
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  return (dVar2 * dVar2 + dVar1 * dVar1 + dVar5 * dVar5) * __real_3fd0000000000000;
}

// TAxisAlignedBox3<double> @ 143566570

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
          (TAxisAlignedBox3<double> *this,TAxisAlignedBox3<double> *param_1,
          TTransformSRT3<double> *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double> *pTVar7;
  TAxisAlignedBox3<double> *pTVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double> local_a8;
  TVector<double> local_90 [5];
  
  dVar12 = (param_1->Min).field0_0x0._s_0.X;
  if ((((param_1->Max).field0_0x0._s_0.X <= dVar12 && dVar12 != (param_1->Max).field0_0x0._s_0.X) ||
      (dVar14 = (param_1->Min).field0_0x0._s_0.Y, pdVar1 = &(param_1->Max).field0_0x0._s_0.Y,
      *pdVar1 <= dVar14 && dVar14 != *pdVar1)) ||
     (dVar2 = (param_1->Min).field0_0x0._s_0.Z, pdVar1 = &(param_1->Max).field0_0x0._s_0.Z,
     *pdVar1 <= dVar2 && dVar2 != *pdVar1)) {
    dVar12 = (param_1->Min).field0_0x0._s_0.Y;
    (this->Min).field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
    (this->Min).field0_0x0._s_0.Y = dVar12;
    (this->Min).field0_0x0._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
    dVar12 = (param_1->Max).field0_0x0._s_0.Y;
    (this->Max).field0_0x0._s_0.X = (param_1->Max).field0_0x0._s_0.X;
    (this->Max).field0_0x0._s_0.Y = dVar12;
    (this->Max).field0_0x0._s_0.Z = (param_1->Max).field0_0x0._s_0.Z;
  }
  else {
    local_d8._s_0.X = dVar12 * (param_2->Scale3D).field0_0x0._s_0.X;
    local_d8._s_0.Y = dVar14 * (param_2->Scale3D).field0_0x0._s_0.Y;
    local_d8._s_0.Z = dVar2 * (param_2->Scale3D).field0_0x0._s_0.Z;
    pTVar7 = operator*<double>(&local_a8,&param_2->Rotation,(TVector<double> *)&local_d8._s_0);
    uVar11 = 1;
    dVar5 = (param_2->Translation).field0_0x0._s_0.Z + (pTVar7->field0_0x0)._s_0.Z;
    dVar14 = (pTVar7->field0_0x0)._s_0.X + (param_2->Translation).field0_0x0._s_0.X;
    dVar12 = (param_2->Translation).field0_0x0._s_0.Y + (pTVar7->field0_0x0)._s_0.Y;
    (this->Min).field0_0x0._s_0.X = dVar14;
    (this->Min).field0_0x0._s_0.Y = dVar12;
    (this->Min).field0_0x0._s_0.Z = dVar5;
    (this->Max).field0_0x0._s_0.X = dVar14;
    (this->Max).field0_0x0._s_0.Y = dVar12;
    (this->Max).field0_0x0._s_0.Z = dVar5;
    dVar12 = (this->Max).field0_0x0._s_0.X;
    dVar14 = (this->Min).field0_0x0._s_0.Y;
    dVar2 = (this->Max).field0_0x0._s_0.Y;
    dVar3 = (this->Min).field0_0x0._s_0.Z;
    dVar4 = (this->Min).field0_0x0._s_0.X;
    do {
      pTVar8 = (TAxisAlignedBox3<double> *)&param_1->Max;
      if (((uVar11 >> 1 ^ uVar11) & 1) == 0) {
        pTVar8 = param_1;
      }
      lVar9 = 8;
      local_c0._s_0.X = (pTVar8->Min).field0_0x0._s_0.X * (param_2->Scale3D).field0_0x0._s_0.X;
      if ((uVar11 & 2) != 0) {
        lVar9 = 0x20;
      }
      lVar10 = 0x10;
      local_c0._s_0.Y =
           *(double *)((longlong)&(param_1->Min).field0_0x0 + lVar9) *
           (param_2->Scale3D).field0_0x0._s_0.Y;
      if (3 < uVar11) {
        lVar10 = 0x28;
      }
      local_c0._s_0.Z =
           *(double *)((longlong)&(param_1->Min).field0_0x0 + lVar10) *
           (param_2->Scale3D).field0_0x0._s_0.Z;
      pTVar7 = operator*<double>(local_90,&param_2->Rotation,(TVector<double> *)&local_c0._s_0);
      dVar15 = (pTVar7->field0_0x0)._s_0.X + (param_2->Translation).field0_0x0._s_0.X;
      dVar6 = (pTVar7->field0_0x0)._s_0.Y + (param_2->Translation).field0_0x0._s_0.Y;
      dVar13 = (pTVar7->field0_0x0)._s_0.Z + (param_2->Translation).field0_0x0._s_0.Z;
      if (dVar15 < dVar4) {
        (this->Min).field0_0x0._s_0.X = dVar15;
        dVar4 = dVar15;
      }
      if (dVar12 < dVar15) {
        (this->Max).field0_0x0._s_0.X = dVar15;
        dVar12 = dVar15;
      }
      if (dVar6 < dVar14) {
        (this->Min).field0_0x0._s_0.Y = dVar6;
        dVar14 = dVar6;
      }
      if (dVar2 < dVar6) {
        (this->Max).field0_0x0._s_0.Y = dVar6;
        dVar2 = dVar6;
      }
      if (dVar13 < dVar3) {
        (this->Min).field0_0x0._s_0.Z = dVar13;
        dVar3 = dVar13;
      }
      if (dVar5 < dVar13) {
        (this->Max).field0_0x0._s_0.Z = dVar13;
        dVar5 = dVar13;
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < 8);
  }
  return this;
}

// Contains @ 1435f7be0

bool __thiscall
UE::Geometry::TAxisAlignedBox3<double>::Contains
          (TAxisAlignedBox3<double> *this,TAxisAlignedBox3<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = (param_1->Min).field0_0x0._s_0.X;
  dVar2 = (this->Min).field0_0x0._s_0.X;
  if (dVar2 <= dVar1) {
    dVar3 = (param_1->Min).field0_0x0._s_0.Y;
    dVar4 = (this->Min).field0_0x0._s_0.Y;
    if (dVar4 <= dVar3) {
      dVar5 = (param_1->Min).field0_0x0._s_0.Z;
      dVar6 = (this->Min).field0_0x0._s_0.Z;
      if ((((((dVar6 <= dVar5) && (dVar7 = (this->Max).field0_0x0._s_0.X, dVar1 <= dVar7)) &&
            (dVar1 = (this->Max).field0_0x0._s_0.Y, dVar3 <= dVar1)) &&
           ((dVar3 = (this->Max).field0_0x0._s_0.Z, dVar5 <= dVar3 &&
            (dVar5 = (param_1->Max).field0_0x0._s_0.X, dVar2 <= dVar5)))) &&
          ((dVar2 = (param_1->Max).field0_0x0._s_0.Y, dVar4 <= dVar2 &&
           ((dVar4 = (param_1->Max).field0_0x0._s_0.Z, dVar6 <= dVar4 && (dVar5 <= dVar7)))))) &&
         ((dVar2 <= dVar1 && (dVar4 <= dVar3)))) {
        return true;
      }
    }
  }
  return false;
}

// DistanceSquared @ 1435f9050

double __thiscall
UE::Geometry::TAxisAlignedBox3<double>::DistanceSquared
          (TAxisAlignedBox3<double> *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (this->Min).field0_0x0._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  if (dVar4 <= dVar2) {
    dVar4 = (this->Max).field0_0x0._s_0.X;
    if (dVar2 <= dVar4) {
      dVar4 = 0.0;
    }
    else {
      dVar4 = dVar2 - dVar4;
    }
  }
  else {
    dVar4 = dVar4 - dVar2;
  }
  dVar2 = (this->Min).field0_0x0._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  if (dVar2 <= dVar3) {
    dVar2 = (this->Max).field0_0x0._s_0.Y;
    if (dVar3 <= dVar2) {
      dVar2 = 0.0;
    }
    else {
      dVar2 = dVar3 - dVar2;
    }
  }
  else {
    dVar2 = dVar2 - dVar3;
  }
  dVar3 = (this->Min).field0_0x0._s_0.Z;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  if (dVar3 <= dVar1) {
    dVar3 = (this->Max).field0_0x0._s_0.Z;
    if (dVar1 <= dVar3) {
      dVar3 = 0.0;
    }
    else {
      dVar3 = dVar1 - dVar3;
    }
  }
  else {
    dVar3 = dVar3 - dVar1;
  }
  return dVar2 * dVar2 + dVar4 * dVar4 + dVar3 * dVar3;
}

