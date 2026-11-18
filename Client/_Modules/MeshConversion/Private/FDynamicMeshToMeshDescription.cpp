// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversion
// Functions: 39

// <lambda_invoker_cdecl> @ 1443b50a0

void __cdecl
`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l56::<lambda_3>::
<lambda_invoker_cdecl>(int param_1,FVertexInstanceID *param_2)

{
  return;
}

// <lambda_invoker_cdecl> @ 1443b50b0

void __cdecl
`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l61::<lambda_5>::
<lambda_invoker_cdecl>(int param_1,FVertexInstanceID *param_2)

{
  return;
}

// operator() @ 1443c5c20

void __thiscall
`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l50::<lambda_1>::operator()
          (void *this,int param_1,FVertexInstanceID *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar4;
  TVector<float> *pTVar5;
  TMeshAttributeArrayBase<float> *this_00;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  uint local_f8 [4];
  uint local_e8 [4];
  uint local_d8 [44];
  
  uVar1 = param_1 * 3;
  lVar8 = 3;
  uVar25 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0);
  uVar26 = (undefined4)((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >> 0x20);
  uVar14 = (ulonglong)(uVar1 & 0x1ff);
  uVar13 = (ulonglong)(uVar1 >> 9);
  lVar9 = *(longlong *)(*(longlong *)this + 0x78);
  uVar27 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y,0);
  uVar28 = (undefined4)((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._8_8_ >> 0x20);
  uVar29 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X,0);
  uVar30 = (undefined4)((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._0_8_ >> 0x20);
  uVar31 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
  uVar32 = (undefined4)
           ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
  uVar7 = (ulonglong)(uVar1 + 1 & 0x1ff);
  uVar12 = (ulonglong)(uVar1 + 1 >> 9);
  uVar10 = (ulonglong)(uVar1 + 2 & 0x1ff);
  local_f8[0] = *(uint *)(*(longlong *)(lVar9 + uVar13 * 8) + uVar14 * 4);
  uVar11 = (ulonglong)(uVar1 + 2 >> 9);
  local_f8[1] = *(undefined4 *)(*(longlong *)(lVar9 + uVar12 * 8) + uVar7 * 4);
  local_f8[2] = *(undefined4 *)(*(longlong *)(lVar9 + uVar11 * 8) + uVar10 * 4);
  lVar9 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x78);
  local_e8[0] = *(uint *)(*(longlong *)(lVar9 + uVar13 * 8) + uVar14 * 4);
  local_e8[1] = *(undefined4 *)(*(longlong *)(lVar9 + uVar12 * 8) + uVar7 * 4);
  local_e8[2] = *(undefined4 *)(*(longlong *)(lVar9 + uVar11 * 8) + uVar10 * 4);
  lVar9 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x78);
  local_d8[0] = *(uint *)(*(longlong *)(lVar9 + uVar13 * 8) + uVar14 * 4);
  local_d8[1] = *(undefined4 *)(*(longlong *)(lVar9 + uVar12 * 8) + uVar7 * 4);
  local_d8[2] = *(undefined4 *)(*(longlong *)(lVar9 + uVar11 * 8) + uVar10 * 4);
  lVar9 = 0;
  do {
    lVar3 = *(longlong *)this;
    uVar1 = *(uint *)((longlong)local_f8 + lVar9);
    iVar2 = *(int *)((longlong)local_f8 + lVar9 + ((longlong)param_2 - (longlong)local_f8));
    if ((((int)uVar1 < 0) || (*(int *)(lVar3 + 8) * 0x200 + *(int *)(lVar3 + 0xc) <= (int)uVar1)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar1 >> 9) * 8) +
                                    (ulonglong)(uVar1 & 0x1ff) * 2) - 1U))) {
      fVar18 = (float)(double)CONCAT44(uVar30,uVar29);
      fVar19 = (float)(double)CONCAT44(uVar28,uVar27);
      fVar20 = (float)(double)CONCAT44(uVar26,uVar25);
    }
    else {
      uVar1 = uVar1 * 3;
      lVar3 = *(longlong *)(lVar3 + 0x48);
      fVar19 = *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar1 + 1 >> 9) * 8) +
                         (ulonglong)(uVar1 + 1 & 0x1ff) * 4);
      fVar18 = *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar1 >> 9) * 8) +
                         (ulonglong)(uVar1 & 0x1ff) * 4);
      fVar20 = *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar1 + 2 >> 9) * 8) +
                         (ulonglong)(uVar1 + 2 & 0x1ff) * 4);
    }
    uVar1 = *(uint *)((longlong)local_e8 + lVar9);
    lVar3 = *(longlong *)((longlong)this + 8);
    if ((((int)uVar1 < 0) || (*(int *)(lVar3 + 8) * 0x200 + *(int *)(lVar3 + 0xc) <= (int)uVar1)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar1 >> 9) * 8) +
                                    (ulonglong)(uVar1 & 0x1ff) * 2) - 1U))) {
      fVar22 = (float)UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
      fVar23 = (float)UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
      fVar24 = (float)(double)CONCAT44(uVar32,uVar31);
    }
    else {
      uVar1 = uVar1 * 3;
      lVar3 = *(longlong *)(lVar3 + 0x48);
      fVar23 = *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar1 + 1 >> 9) * 8) +
                         (ulonglong)(uVar1 + 1 & 0x1ff) * 4);
      fVar22 = *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar1 >> 9) * 8) +
                         (ulonglong)(uVar1 & 0x1ff) * 4);
      fVar24 = *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar1 + 2 >> 9) * 8) +
                         (ulonglong)(uVar1 + 2 & 0x1ff) * 4);
    }
    uVar1 = *(uint *)((longlong)local_d8 + lVar9);
    lVar3 = *(longlong *)((longlong)this + 0x10);
    if ((((int)uVar1 < 0) || (*(int *)(lVar3 + 8) * 0x200 + *(int *)(lVar3 + 0xc) <= (int)uVar1)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar1 >> 9) * 8) +
                                    (ulonglong)(uVar1 & 0x1ff) * 2) - 1U))) {
      fVar15 = (float)UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
      fVar17 = (float)UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
      fVar16 = (float)UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
    }
    else {
      uVar1 = uVar1 * 3;
      lVar3 = *(longlong *)(lVar3 + 0x48);
      fVar17 = *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar1 + 1 >> 9) * 8) +
                         (ulonglong)(uVar1 + 1 & 0x1ff) * 4);
      fVar15 = *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar1 >> 9) * 8) +
                         (ulonglong)(uVar1 & 0x1ff) * 4);
      fVar16 = *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar1 + 2 >> 9) * 8) +
                         (ulonglong)(uVar1 + 2 & 0x1ff) * 4);
    }
    fVar21 = __real_bf800000;
    if (__real_00000000 <=
        (fVar17 * fVar20 - fVar16 * fVar19) * fVar22 + (fVar16 * fVar18 - fVar15 * fVar20) * fVar23
        + (fVar15 * fVar19 - fVar17 * fVar18) * fVar24) {
      fVar21 = __real_3f800000;
    }
    lVar3 = *(longlong *)((longlong)this + 0x18);
    if (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)(lVar3 + 0x18) !=
        (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
      pTVar4 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                         (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)(lVar3 + 0x18),0);
      pTVar5 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar4,iVar2);
      (pTVar5->field0_0x0)._s_0.X = fVar18;
      (pTVar5->field0_0x0)._s_0.Y = fVar19;
      (pTVar5->field0_0x0)._s_0.Z = fVar20;
      uVar25 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0);
      uVar26 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >> 0x20);
      uVar27 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y,0);
      uVar28 = (undefined4)((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._8_8_ >> 0x20)
      ;
      uVar29 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X,0);
      uVar30 = (undefined4)((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._0_8_ >> 0x20)
      ;
      uVar31 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
      uVar32 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
    }
    if (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)(lVar3 + 0x20) !=
        (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
      pTVar4 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                         (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)(lVar3 + 0x20),0);
      pTVar5 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar4,iVar2);
      (pTVar5->field0_0x0)._s_0.X = fVar22;
      (pTVar5->field0_0x0)._s_0.Y = fVar23;
      (pTVar5->field0_0x0)._s_0.Z = fVar24;
      uVar25 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0);
      uVar26 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >> 0x20);
      uVar27 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y,0);
      uVar28 = (undefined4)((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._8_8_ >> 0x20)
      ;
      uVar29 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X,0);
      uVar30 = (undefined4)((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._0_8_ >> 0x20)
      ;
      uVar31 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
      uVar32 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
    }
    if (*(TMeshAttributeArraySet<float> **)(lVar3 + 0x28) != (TMeshAttributeArraySet<float> *)0x0) {
      this_00 = TMeshAttributeArraySet<float>::GetArrayForChannel
                          (*(TMeshAttributeArraySet<float> **)(lVar3 + 0x28),0);
      pfVar6 = TMeshAttributeArrayBase<float>::GetElementBase(this_00,iVar2);
      *pfVar6 = fVar21;
      uVar25 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0);
      uVar26 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >> 0x20);
      uVar27 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y,0);
      uVar28 = (undefined4)((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._8_8_ >> 0x20)
      ;
      uVar29 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X,0);
      uVar30 = (undefined4)((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._0_8_ >> 0x20)
      ;
      uVar31 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
      uVar32 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
    }
    lVar9 = lVar9 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}

// operator() @ 1443c6190

void __thiscall
`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l54::<lambda_2>::operator()
          (void *this,int param_1,FVertexInstanceID *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_00;
  double dVar4;
  double dVar5;
  double dVar6;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_01;
  TVector<float> *pTVar7;
  longlong lVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint local_58 [16];
  
  uVar1 = param_1 * 3;
  puVar9 = local_58;
  lVar8 = 3;
  lVar3 = *(longlong *)(*(longlong *)this + 0x78);
  local_58[0] = *(uint *)(*(longlong *)(lVar3 + (ulonglong)(uVar1 >> 9) * 8) +
                         (ulonglong)(uVar1 & 0x1ff) * 4);
  local_58[1] = *(undefined4 *)
                 (*(longlong *)(lVar3 + (ulonglong)(uVar1 + 1 >> 9) * 8) +
                 (ulonglong)(uVar1 + 1 & 0x1ff) * 4);
  local_58[2] = *(undefined4 *)
                 (*(longlong *)(lVar3 + (ulonglong)(uVar1 + 2 >> 9) * 8) +
                 (ulonglong)(uVar1 + 2 & 0x1ff) * 4);
  uVar10 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  uVar11 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  uVar12 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  do {
    uVar1 = *puVar9;
    iVar2 = *(int *)(((longlong)param_2 - (longlong)local_58) + (longlong)puVar9);
    lVar3 = *(longlong *)this;
    dVar4 = (double)uVar12;
    dVar5 = (double)uVar10;
    dVar6 = (double)uVar11;
    if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar3 + 8) * 0x200 + *(int *)(lVar3 + 0xc))) &&
       ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar1 >> 9) * 8)
                           + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      lVar3 = *(longlong *)(lVar3 + 0x48);
      uVar1 = uVar1 * 3;
      dVar4 = (double)*(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar1 >> 9) * 8) +
                                (ulonglong)(uVar1 & 0x1ff) * 4);
      dVar5 = (double)*(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar1 + 2 >> 9) * 8) +
                                (ulonglong)(uVar1 + 2 & 0x1ff) * 4);
      dVar6 = (double)*(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar1 + 1 >> 9) * 8) +
                                (ulonglong)(uVar1 + 1 & 0x1ff) * 4);
    }
    this_00 = *(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)
               (*(longlong *)((longlong)this + 8) + 0x18);
    if (this_00 != (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
      this_01 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_00,0);
      pTVar7 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_01,iVar2);
      (pTVar7->field0_0x0)._s_0.X = (float)dVar4;
      (pTVar7->field0_0x0)._s_0.Y = (float)dVar6;
      (pTVar7->field0_0x0)._s_0.Z = (float)dVar5;
      uVar10 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
      uVar11 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
      uVar12 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    }
    puVar9 = puVar9 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}

// operator() @ 1443c63a0

void __thiscall
`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l59::<lambda_4>::operator()
          (void *this,int param_1,FVertexInstanceID *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this_00;
  float fVar5;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this_01;
  TVector4<float> *pTVar6;
  longlong lVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint local_98 [4];
  TVector4<float>_u_0 local_88 [7];
  
  fVar5 = __real_3f800000;
  puVar8 = local_98;
  uVar2 = param_1 * 3;
  lVar7 = 3;
  lVar4 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x78);
  local_98[0] = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8) +
                         (ulonglong)(uVar2 & 0x1ff) * 4);
  local_98[1] = *(undefined4 *)
                 (*(longlong *)(lVar4 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                 (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
  local_98[2] = *(undefined4 *)
                 (*(longlong *)(lVar4 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                 (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
  do {
    uVar2 = *puVar8;
    iVar3 = *(int *)(((longlong)param_2 - (longlong)local_98) + (longlong)puVar8);
    lVar4 = *(longlong *)((longlong)this + 8);
    uVar9 = fVar5;
    uVar10 = fVar5;
    uVar11 = fVar5;
    uVar12 = fVar5;
    if (((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar4 + 8) * 0x200 + *(int *)(lVar4 + 0xc))) &&
       ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar2 >> 9) * 8)
                           + (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      lVar4 = *(longlong *)(lVar4 + 0x48);
      uVar1 = uVar2 * 4;
      local_88[0]._0_4_ =
           *(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar2 & 0x3fffffff) >> 7) * 8) +
                     (ulonglong)(uVar1 & 0x1ff) * 4);
      local_88[0]._4_4_ =
           *(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar2 & 0x3fffffff) >> 7) * 8) +
                     (ulonglong)(uVar1 + 1 & 0x1ff) * 4);
      local_88[0]._8_4_ =
           *(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar2 & 0x3fffffff) >> 7) * 8) +
                     (ulonglong)(uVar1 + 2 & 0x1ff) * 4);
      local_88[0]._12_4_ =
           *(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar2 & 0x3fffffff) >> 7) * 8) +
                     (ulonglong)(uVar1 + 3 & 0x1ff) * 4);
      FDynamicMeshToMeshDescription::ApplyVertexColorTransform
                (*(FDynamicMeshToMeshDescription **)this,(TVector4<float> *)&local_88[0]._s_0);
      uVar9 = local_88[0]._s_0.X;
      uVar10 = local_88[0]._s_0.Y;
      uVar11 = local_88[0]._s_0.Z;
      uVar12 = local_88[0]._s_0.W;
    }
    this_00 = *(TMeshAttributeArraySet<UE::Math::TVector4<float>_> **)
               (*(longlong *)((longlong)this + 0x10) + 0x30);
    if (this_00 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
      this_01 = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel(this_00,0);
      pTVar6 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase(this_01,iVar3);
      (pTVar6->field0_0x0)._s_0.X = (float)uVar9;
      (pTVar6->field0_0x0)._s_0.Y = (float)uVar10;
      (pTVar6->field0_0x0)._s_0.Z = (float)uVar11;
      (pTVar6->field0_0x0)._s_0.W = (float)uVar12;
    }
    puVar8 = puVar8 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

// operator() @ 1443c65f0

void __thiscall
`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l110::<lambda_6>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  
  if (((-1 < param_1) &&
      (lVar1 = **(longlong **)this,
      param_1 < *(int *)(lVar1 + 0x1d0) * 0x200 + *(int *)(lVar1 + 0x1d4))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar1 + 0x1d8) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    bVar4 = UE::Geometry::TDynamicMeshOverlay<float,3>::IsSeamEdge
                      ((TDynamicMeshOverlay<float,3> *)**(undefined8 **)((longlong)this + 8),param_1
                       ,(bool *)0x0);
    plVar2 = *(longlong **)((longlong)this + 0x10);
    uVar6 = 0;
    if (param_1 < (int)plVar2[1]) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(bool *)((longlong)param_1 + *plVar2) = bVar4;
  }
  return;
}

// ApplyVertexColorTransform @ 1443caff0

void __thiscall
FDynamicMeshToMeshDescription::ApplyVertexColorTransform
          (FDynamicMeshToMeshDescription *this,TVector4<float> *param_1)

{
  float fVar1;
  
  if ((this->ConversionOptions).bTransformVtxColorsSRGBToLinear != false) {
    fVar1 = (param_1->field0_0x0)._s_0.X;
    if (__real_3d25aee6 < fVar1) {
      fVar1 = powf(fVar1 * __real_3f72a76f + __real_3d55891a,__real_4019999a);
    }
    else {
      fVar1 = fVar1 * __real_3d9e8391;
    }
    (param_1->field0_0x0)._s_0.X = fVar1;
    fVar1 = (param_1->field0_0x0)._s_0.Y;
    if (__real_3d25aee6 < fVar1) {
      fVar1 = powf(fVar1 * __real_3f72a76f + __real_3d55891a,__real_4019999a);
    }
    else {
      fVar1 = fVar1 * __real_3d9e8391;
    }
    (param_1->field0_0x0)._s_0.Y = fVar1;
    fVar1 = (param_1->field0_0x0)._s_0.Z;
    if (fVar1 <= __real_3d25aee6) {
      (param_1->field0_0x0)._s_0.Z = fVar1 * __real_3d9e8391;
      return;
    }
    fVar1 = powf(fVar1 * __real_3f72a76f + __real_3d55891a,__real_4019999a);
    (param_1->field0_0x0)._s_0.Z = fVar1;
  }
  return;
}

// Convert @ 1443cc2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001443d2627) */
/* WARNING: Removing unreachable block (ram,0x0001443d25b2) */
/* WARNING: Removing unreachable block (ram,0x0001443d27bf) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDynamicMeshToMeshDescription::Convert
          (FDynamicMeshToMeshDescription *this,FDynamicMesh3 *param_1,FMeshDescription *param_2,
          bool param_3)

{
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  float fVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  FVertexID FVar10;
  FEdgeID FVar11;
  FName FVar12;
  FScriptContainerElement *pFVar13;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this_00;
  FMeshAttributeArraySetBase *pFVar14;
  undefined1 *puVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  TVector2<float> TVar28;
  bool bVar29;
  FDynamicMesh3 *pFVar30;
  TBitArray<FDefaultBitArrayAllocator> *pTVar31;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar32;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar33;
  FDynamicMeshToMeshDescription *pFVar34;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar35;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar36;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar37;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar38;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  bool bVar46;
  bool bVar47;
  int iVar48;
  int iVar49;
  FUVID FVar50;
  FVertexInstanceID FVar51;
  uint uVar52;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar53;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar54;
  FDynamicMeshAttributeSet *pFVar55;
  TMeshAttributesRef<FBoneID,FName> TVar56;
  TMeshAttributeArrayBase<FName> *pTVar57;
  FName *pFVar58;
  TMeshAttributesRef<FBoneID,int> TVar59;
  TMeshAttributeArrayBase<int> *pTVar60;
  int *piVar61;
  TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_> TVar62;
  TMeshAttributesRef<FBoneID,UE::Math::TVector4<float>_> TVar63;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this_01;
  TVector4<float> *pTVar64;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar65;
  undefined4 extraout_var;
  FMeshElementContainer *pFVar66;
  longlong *plVar67;
  code *pcVar68;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_02;
  TVector2<float>_u_0 *pTVar69;
  undefined8 uVar70;
  FAttributesSetEntry *pFVar71;
  TMeshAttributeArrayBase<bool> *this_03;
  bool *pbVar72;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar73;
  TArrayView<int,int> *this_04;
  TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_> *pTVar74;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_05;
  TVector<float> *pTVar75;
  byte bVar76;
  FUVID FVar77;
  FDynamicMeshAttributeSet *pFVar78;
  longlong lVar79;
  longlong *plVar80;
  atomic<unsigned_char> *paVar81;
  ForElementType<UE::AnimationCore::FBoneWeight> _Dst;
  uint uVar82;
  uint uVar83;
  ulonglong uVar84;
  FMeshDescription *pFVar85;
  ForAnyElementType FVar86;
  ulong64 uVar87;
  FRefCountVector *pFVar88;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar89;
  TMeshAttributeArraySet<bool> *this_06;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar90;
  ulonglong uVar91;
  FDynamicMeshAttributeSet *pFVar92;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar93;
  FUVID FVar94;
  undefined1 *puVar95;
  uint uVar96;
  int iVar97;
  uint *puVar98;
  uint uVar99;
  TArray<FUVID,TSizedDefaultAllocator<32>_> *this_07;
  FMeshAttributeArraySetBase *this_08;
  uint uVar100;
  longlong lVar101;
  undefined1 auStackY_9e8 [32];
  char *pcVar102;
  <lambda_1> <Stack_997;
  char cStack_996;
  char cStack_995;
  FDynamicMesh3 *pFStack_990;
  uint uStack_988;
  ForAnyElementType FStack_980;
  int iStack_978;
  int iStack_974;
  undefined1 uStack_970;
  undefined1 uStack_96f;
  undefined1 uStack_96e;
  char cStack_96d;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_968;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTStack_960;
  undefined4 auStack_958 [2];
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTStack_950;
  ForAnyElementType FStack_948;
  int iStack_940;
  int iStack_93c;
  TArray<FVertexID,TSizedDefaultAllocator<32>_> TStack_938;
  int iStack_928;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTStack_920;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTStack_918;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTStack_910;
  undefined8 uStack_908;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  int iStack_8e8;
  undefined4 uStack_8e4;
  FVertexInstanceID aFStack_8e0 [2];
  undefined8 uStack_8d8;
  TDynamicMeshScalarTriangleAttribute<int> *pTStack_8d0;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTStack_8c8;
  ForAnyElementType FStack_8c0;
  undefined8 uStack_8b8;
  IndexIterator IStack_8b0;
  ForAnyElementType FStack_8a0;
  undefined8 uStack_898;
  uint uStack_890;
  FMeshDescription *pFStack_888;
  undefined8 *puStack_880;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTStack_878;
  undefined8 uStack_870;
  uint uStack_868;
  FDynamicMeshToMeshDescription *pFStack_860;
  undefined8 uStack_858;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTStack_850;
  TArray<FTriangleID,TSizedDefaultAllocator<32>_> TStack_848;
  longlong lStack_838;
  int aiStack_830 [2];
  int aiStack_828 [2];
  ForAnyElementType FStack_820;
  int aiStack_818 [4];
  int iStack_808;
  uint uStack_804;
  undefined1 *puStack_800;
  undefined4 uStack_7f8;
  int iStack_7f4;
  int iStack_7f0;
  undefined4 uStack_7ec;
  FMeshDescriptionBuilder FStack_7e8;
  undefined8 uStack_768;
  float fStack_760;
  float fStack_75c;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTStack_758;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTStack_750;
  FName FStack_748;
  FName FStack_740;
  FName FStack_738;
  undefined8 uStack_730;
  uint uStack_728;
  TArray<FName,TSizedDefaultAllocator<32>_> TStack_720;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_710;
  TArray<FName,TSizedDefaultAllocator<32>_> TStack_6f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_6e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_6c0;
  undefined8 *puStack_6a0;
  undefined1 auStack_698 [8];
  TPairInitializer<FName_const_&,FSkinWeightsVertexAttributesRef_&&> TStack_690;
  BaseIterator BStack_680;
  BaseIterator BStack_670;
  undefined1 auStack_660 [12];
  uint uStack_654;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_650;
  undefined8 uStack_648;
  longlong lStack_640;
  undefined8 uStack_638;
  undefined1 auStack_630 [12];
  uint uStack_624;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_620;
  undefined8 uStack_618;
  longlong lStack_610;
  undefined8 uStack_608;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTStack_600;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5f8;
  undefined8 uStack_5d8;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTStack_5d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5c8;
  undefined8 uStack_5a8;
  IndexIterator IStack_5a0;
  TArrayView<std::nullptr_t,int> TStack_590;
  code *pcStack_580;
  FDynamicMesh3 ***pppFStack_578;
  TArrayView<FEdgeID,int> TStack_570;
  undefined **ppuStack_560;
  FMeshDescription *pFStack_558;
  FName *pFStack_550;
  TMeshAttributesRef<FVertexID,TArrayAttribute<int>_> TStack_548;
  FName *pFStack_540;
  FMeshAttributeArraySetBase *pFStack_538;
  double dStack_530;
  double dStack_528;
  IndexIterator IStack_520;
  IndexIterator IStack_510;
  FDynamicMesh3 **ppFStack_500;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **ppTStack_4f8;
  ForAnyElementType *pFStack_4f0;
  undefined8 uStack_4e8;
  float fStack_4e0;
  FSkeletalMeshAttributes FStack_4d8;
  undefined1 auStack_4a0 [40];
  undefined1 auStack_478 [8];
  TRangedForConstIterator TStack_470;
  TRangedForConstIterator TStack_440;
  undefined1 auStack_410 [56];
  undefined1 auStack_3d8 [56];
  FSkeletalMeshAttributes FStack_3a0;
  TArrayView<int,int> TStack_368;
  TArrayView<int,int> TStack_358;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_348;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_328;
  undefined4 uStack_2ec;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  longlong *plStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  longlong *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 uStack_260;
  ForElementType<UE::AnimationCore::FBoneWeight> FStack_258;
  int iStack_220;
  int iStack_21c;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  longlong *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  longlong *plStack_160;
  TSet<TTuple<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>,0>,FDefaultSetAllocator>
  TStack_158;
  TSet<TTuple<FName,FSkinWeightsVertexAttributesRef>,TDefaultMapHashableKeyFuncs<FName,FSkinWeightsVertexAttributesRef,0>,FDefaultSetAllocator>
  TStack_108;
  undefined8 uStack_b8;
  FPolygonGroupID aFStack_b0 [2];
  ulonglong uStack_a8;
  
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    Convert_NoAttributes(this,param_1,param_2);
    return;
  }
  uStack_a8 = __security_cookie.value ^ (ulonglong)auStackY_9e8;
  pFVar92 = (param_1->AttributeSet).Ptr;
  uStack_8d8 = 1;
  pFStack_990 = param_1;
  cStack_96d = param_3;
  pFStack_888 = param_2;
  pFStack_860 = this;
  if (((pFVar92 == (FDynamicMeshAttributeSet *)0x0) ||
      (pTStack_8d0 = (pFVar92->MaterialIDAttrib).Ptr,
      pTStack_8d0 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) &&
     (pTStack_8d0 = (TDynamicMeshScalarTriangleAttribute<int> *)0x0,
     pFVar92 == (FDynamicMeshAttributeSet *)0x0)) {
    uVar87 = 0;
    pTStack_878 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    pTStack_8d0 = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
    pTStack_920 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    pTStack_960 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    pTStack_950 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
    uStack_988 = 0;
LAB_1443d1280:
    bVar47 = false;
    pTStack_750 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0;
    pTStack_758 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0;
    pTStack_850 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                   *)0x0;
    pTStack_918 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *)0x0;
    if (pFVar92 != (FDynamicMeshAttributeSet *)0x0) goto LAB_1443d12a1;
LAB_1443d12c4:
    bVar29 = false;
    if (pFVar92 != (FDynamicMeshAttributeSet *)0x0) goto LAB_1443d12ce;
LAB_1443d12f2:
    cStack_996 = '\0';
  }
  else {
    pTStack_878 = UE::Geometry::FDynamicMeshAttributeSet::GetNormalLayer(pFVar92,0);
    pFVar78 = (pFStack_990->AttributeSet).Ptr;
    pFVar55 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar55 = pFVar78;
    }
    pTVar53 = UE::Geometry::FDynamicMeshAttributeSet::GetNormalLayer(pFVar55,1);
    pFVar78 = (pFStack_990->AttributeSet).Ptr;
    pFVar55 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar55 = pFVar78;
    }
    pTStack_920 = pTVar53;
    pTVar54 = UE::Geometry::FDynamicMeshAttributeSet::GetNormalLayer(pFVar55,2);
    pFVar78 = (pFStack_990->AttributeSet).Ptr;
    pFVar55 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar55 = pFVar78;
    }
    pTVar89 = (pFVar55->ColorLayer).Ptr;
    pTStack_960 = pTVar54;
    pTStack_950 = pTVar89;
    uStack_988 = (**(code **)(pFVar78->_padding_ + 0xa8))();
    uVar87 = (ulong64)uStack_988;
    pFVar78 = (pFStack_990->AttributeSet).Ptr;
    pFVar55 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar55 = pFVar78;
    }
    if ((pFVar55->BoneNameAttrib).Ptr ==
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) goto LAB_1443d1280;
    bVar47 = true;
    pFVar55 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar55 = pFVar78;
    }
    pTStack_750 = (pFVar55->BoneNameAttrib).Ptr;
    pFVar55 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar55 = pFVar78;
    }
    pTStack_758 = (pFVar55->BoneParentIndexAttrib).Ptr;
    pFVar55 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar55 = pFVar78;
    }
    pTStack_850 = (pFVar55->BonePoseAttrib).Ptr;
    pFVar55 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar55 = pFVar78;
    }
    pTStack_918 = (pFVar55->BoneColorAttrib).Ptr;
    pTStack_960 = pTVar54;
    pTStack_950 = pTVar89;
    pTStack_920 = pTVar53;
LAB_1443d12a1:
    pFVar78 = (pFStack_990->AttributeSet).Ptr;
    pFVar55 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar55 = pFVar78;
    }
    if (*(int *)&(pFVar55->SkinWeightAttributes).field_0x8 ==
        *(int *)&(pFVar55->SkinWeightAttributes).field_0x34) goto LAB_1443d12c4;
    bVar29 = true;
LAB_1443d12ce:
    pFVar92 = (pFStack_990->AttributeSet).Ptr;
    cStack_996 = '\x01';
    pFVar78 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar92 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar78 = pFVar92;
    }
    if (*(int *)&(pFVar78->MorphTargetAttributes).field_0x8 ==
        *(int *)&(pFVar78->MorphTargetAttributes).field_0x34) goto LAB_1443d12f2;
  }
  uVar84 = 0;
  lVar101 = (longlong)(int)uVar87;
  FStack_948.Data = (FScriptContainerElement *)0x0;
  iStack_940 = 0;
  iStack_93c = 0;
  uVar91 = uVar84;
  lStack_838 = lVar101;
  if (0 < (int)uVar87) {
    do {
      pFVar92 = (pFStack_990->AttributeSet).Ptr;
      pFVar78 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar92 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar78 = pFVar92;
      }
      iVar48 = (int)uVar84;
      if ((iVar48 < (pFVar78->UVLayers).Array.ArrayNum) && (-1 < iVar48)) {
        if ((iVar48 < 0) &&
           (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar46)) {
          pcVar68 = (code *)swi(3);
          (*pcVar68)();
          return;
        }
        uStack_858 = *(undefined8 *)((pFVar78->UVLayers).Array.AllocatorInstance.Data + uVar91 * 8);
      }
      else {
        uStack_858 = 0;
      }
      if (((FStack_948.Data <= (FScriptContainerElement *)&uStack_858) &&
          ((FScriptContainerElement *)&uStack_858 < FStack_948.Data + (longlong)iStack_93c * 8)) &&
         (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar46)) {
        pcVar68 = (code *)swi(3);
        (*pcVar68)();
        return;
      }
      if (iStack_940 == iStack_93c) {
        iStack_940 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&FStack_948,&iStack_93c);
      }
      lVar79 = (longlong)iStack_940;
      uVar84 = (ulonglong)(iVar48 + 1);
      uVar91 = uVar91 + 1;
      iStack_940 = iStack_940 + 1;
      *(undefined8 *)(FStack_948.Data + lVar79 * 8) = uStack_858;
    } while ((longlong)uVar91 < lVar101);
  }
  pFVar85 = pFStack_888;
  pFVar92 = (FDynamicMeshAttributeSet *)0x0;
  FMeshDescription::Empty(pFStack_888);
  FStack_7e8.VertexPositions.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  FStack_7e8.InstanceUVs.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  FStack_7e8.InstanceNormals.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  FStack_7e8.InstanceTangents.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  FStack_7e8.InstanceBiTangentSign.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  FStack_7e8.InstanceColors.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  FStack_7e8.UVCoordinateLayers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_7e8.UVCoordinateLayers.ArrayNum = 0;
  FStack_7e8.UVCoordinateLayers.ArrayMax = 0;
  FStack_7e8.TempBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_7e8.TempBuffer.ArrayNum = 0;
  FStack_7e8.TempBuffer.ArrayMax = 0;
  FStack_7e8.TempUVBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_7e8.TempUVBuffer.ArrayNum = 0;
  FStack_7e8.TempUVBuffer.ArrayMax = 0;
  FStack_7e8.PolyGroups.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  FStack_7e8.GroupMaterialSlotNames.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  FMeshDescriptionBuilder::SetMeshDescription(&FStack_7e8,pFVar85);
  if (((this->ConversionOptions).bSetHardEdgesFromNormalSeams != false) &&
     (pTStack_878 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
    pFStack_558 = pFVar85;
    ppuStack_560 = &___7FStaticMeshAttributes__6B_;
    FStaticMeshAttributes::Register((FStaticMeshAttributes *)&ppuStack_560,false);
  }
  cStack_995 = '\0';
  if (((this->ConversionOptions).bSetPolyGroups != false) &&
     ((pFStack_990->TriangleGroups).bIsSet != false)) {
    FMeshDescriptionBuilder::EnablePolyGroups(&FStack_7e8);
    cStack_995 = '\x01';
  }
  if ((bVar47) || (bVar29)) {
    FSkeletalMeshAttributes::FSkeletalMeshAttributes(&FStack_3a0,pFVar85);
    FSkeletalMeshAttributes::Register(&FStack_3a0,false);
    FSkeletalMeshAttributes::RegisterColorAttribute(&FStack_3a0);
    FSkeletalMeshAttributes::UnregisterImportPointIndexAttribute(&FStack_3a0);
    if (bVar47) {
      FSkeletalMeshAttributes::FSkeletalMeshAttributes(&FStack_4d8,pFVar85);
      pFVar78 = (pFStack_990->AttributeSet).Ptr;
      pFVar55 = pFVar92;
      if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar55 = pFVar78;
      }
      iVar48 = UE::Geometry::FDynamicMeshAttributeSet::GetNumBones(pFVar55);
      FSkeletalMeshAttributes::BoneAttributes(&FStack_4d8);
      FSkeletalMeshAttributes::ReserveNewBones(&FStack_4d8,iVar48);
      pFVar85 = pFStack_888;
      pTStack_8c8 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
                     *)(longlong)iVar48;
      if (0 < iVar48) {
        pTStack_968 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
        pFVar78 = pFVar92;
        pFVar55 = pFVar92;
        do {
          FSkeletalMeshAttributes::CreateBone(&FStack_4d8);
          TVar56 = FSkeletalMeshAttributes::GetBoneNames(&FStack_4d8);
          pTVar37 = pTStack_750;
          uVar100 = (uint)pFVar92;
          uVar99 = ~uVar100 >> 0x1f;
          uVar83 = 0;
          if ((int)uVar100 < (pTStack_750->AttribValues).ArrayNum) {
            uVar83 = uVar99;
          }
          if ((uVar83 == 0) &&
             (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar47)) {
            pcVar68 = (code *)swi(3);
            (*pcVar68)();
            return;
          }
          iVar48 = iStack_928;
          FVar12 = *(FName *)((pTVar37->AttribValues).AllocatorInstance.Data + (longlong)pFVar55 * 8
                             );
          pTVar57 = TMeshAttributeArraySet<FName>::GetArrayForChannel
                              ((TMeshAttributeArraySet<FName> *)(TVar56.ArrayPtr)->_padding_,0);
          pFVar58 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar57,iVar48);
          *pFVar58 = FVar12;
          TVar59 = FSkeletalMeshAttributes::GetBoneParentIndices(&FStack_4d8);
          pTVar36 = pTStack_758;
          uVar83 = 0;
          if ((int)uVar100 < (pTStack_758->AttribValues).ArrayNum) {
            uVar83 = uVar99;
          }
          if ((uVar83 == 0) &&
             (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar47)) {
            pcVar68 = (code *)swi(3);
            (*pcVar68)();
            return;
          }
          iVar49 = iStack_928;
          iVar48 = *(int *)((pTVar36->AttribValues).AllocatorInstance.Data + (longlong)pFVar55 * 4);
          pTVar60 = TMeshAttributeArraySet<int>::GetArrayForChannel
                              ((TMeshAttributeArraySet<int> *)(TVar59.ArrayPtr)->_padding_,0);
          piVar61 = TMeshAttributeArrayBase<int>::GetElementBase(pTVar60,iVar49);
          *piVar61 = iVar48;
          TVar62 = FSkeletalMeshAttributes::GetBonePoses(&FStack_4d8);
          pTVar35 = pTStack_850;
          uVar83 = 0;
          if ((int)uVar100 < (pTStack_850->AttribValues).ArrayNum) {
            uVar83 = uVar99;
          }
          if ((uVar83 == 0) &&
             (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar47)) {
            pcVar68 = (code *)swi(3);
            (*pcVar68)();
            return;
          }
          iVar48 = iStack_928;
          pFVar13 = (pTVar35->AttribValues).AllocatorInstance.Data;
          lVar101 = (TVar62.ArrayPtr)->_padding_;
          pFVar3 = (FScriptContainerElement *)((longlong)&pFVar78->_padding_ + (longlong)pFVar13);
          uVar70 = *(undefined8 *)pFVar3;
          uVar17 = *(undefined8 *)(pFVar3 + 8);
          pFVar3 = (FScriptContainerElement *)((longlong)&pFVar78->_padding_ + (longlong)pFVar13);
          uVar18 = *(undefined8 *)pFVar3;
          uVar19 = *(undefined8 *)(pFVar3 + 8);
          uVar20 = *(undefined8 *)(pFVar13 + (longlong)&(pFVar78->UVLayers).Array);
          uVar21 = *(undefined8 *)(pFVar13 + (longlong)&(pFVar78->UVLayers).Array + 8);
          uVar22 = *(undefined8 *)(pFVar13 + (longlong)&(pFVar78->NormalLayers).Array);
          uVar23 = *(undefined8 *)(pFVar13 + (longlong)&(pFVar78->NormalLayers).Array + 8);
          uVar24 = *(undefined8 *)(pFVar13 + (longlong)&(pFVar78->ColorLayer).Ptr);
          uVar25 = *(undefined8 *)(pFVar13 + (longlong)&(pFVar78->ColorLayer).Ptr + 8);
          uVar26 = *(undefined8 *)(pFVar13 + (longlong)&(pFVar78->WeightLayers).Array);
          uVar27 = *(undefined8 *)(pFVar13 + (longlong)&(pFVar78->WeightLayers).Array + 8);
          if ((*(int *)(lVar101 + 0x38) < 1) &&
             (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar47)) {
            pcVar68 = (code *)swi(3);
            (*pcVar68)();
            return;
          }
          plVar67 = (longlong *)(lVar101 + 0x18);
          if (*(longlong **)(lVar101 + 0x30) != (longlong *)0x0) {
            plVar67 = *(longlong **)(lVar101 + 0x30);
          }
          uVar82 = iVar48 * (int)plVar67[2];
          uVar83 = 0;
          if ((int)uVar82 < (int)plVar67[1]) {
            uVar83 = ~uVar82 >> 0x1f;
          }
          if ((uVar83 == 0) &&
             (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar47)) {
            pcVar68 = (code *)swi(3);
            (*pcVar68)();
            return;
          }
          lVar101 = *plVar67;
          lVar79 = (longlong)(int)uVar82 * 0x60;
          *(undefined8 *)(lVar79 + lVar101) = uVar70;
          ((undefined8 *)(lVar79 + lVar101))[1] = uVar17;
          puVar4 = (undefined8 *)(lVar79 + 0x10 + lVar101);
          *puVar4 = uVar18;
          puVar4[1] = uVar19;
          puVar4 = (undefined8 *)(lVar79 + 0x20 + lVar101);
          *puVar4 = uVar20;
          puVar4[1] = uVar21;
          puVar4 = (undefined8 *)(lVar79 + 0x30 + lVar101);
          *puVar4 = uVar22;
          puVar4[1] = uVar23;
          puVar4 = (undefined8 *)(lVar79 + 0x40 + lVar101);
          *puVar4 = uVar24;
          puVar4[1] = uVar25;
          puVar4 = (undefined8 *)(lVar79 + 0x50 + lVar101);
          *puVar4 = uVar26;
          puVar4[1] = uVar27;
          TVar63 = FSkeletalMeshAttributes::GetBoneColors(&FStack_4d8);
          pTVar93 = pTStack_918;
          uVar83 = 0;
          if ((int)uVar100 < (pTStack_918->AttribValues).ArrayNum) {
            uVar83 = uVar99;
          }
          if ((uVar83 == 0) &&
             (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar47)) {
            pcVar68 = (code *)swi(3);
            (*pcVar68)();
            return;
          }
          iVar48 = iStack_928;
          pTVar31 = pTStack_968;
          pFVar3 = (pTVar93->AttribValues).AllocatorInstance.Data + (longlong)pTStack_968;
          uVar70 = *(undefined8 *)pFVar3;
          uVar17 = *(undefined8 *)(pFVar3 + 8);
          this_01 = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel
                              ((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)
                               (TVar63.ArrayPtr)->_padding_,0);
          pTVar64 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                              (this_01,iVar48);
          pTStack_968 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pTVar31 + 0x10);
          pFVar92 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar100 + 1);
          pFVar55 = (FDynamicMeshAttributeSet *)((longlong)&pFVar55->_padding_ + 1);
          pFVar78 = (FDynamicMeshAttributeSet *)&pFVar78->PolygroupLayers;
          *(undefined8 *)&pTVar64->field0_0x0 = uVar70;
          *(undefined8 *)((longlong)&pTVar64->field0_0x0 + 8) = uVar17;
        } while ((longlong)pFVar55 < (longlong)pTStack_8c8);
        uVar87 = (ulong64)uStack_988;
        pFVar85 = pFStack_888;
        this = pFStack_860;
        lVar101 = lStack_838;
      }
    }
  }
  uVar83 = (uint)uVar87;
  TStack_108.Elements._0_8_ = 0;
  TStack_108.Elements._8_8_ = 0;
  TStack_108.Elements._32_8_ = 0;
  TStack_108.Elements._40_4_ = 0;
  TStack_108.Elements._44_4_ = 0x80;
  TStack_108.Elements._48_4_ = 0xffffffff;
  TStack_108.Elements._52_4_ = 0;
  TStack_108.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_108.HashSize = 0;
  if (bVar29) {
    FSkeletalMeshAttributes::FSkeletalMeshAttributes((FSkeletalMeshAttributes *)auStack_410,pFVar85)
    ;
    FSkeletalMeshAttributesShared::GetSkinWeightProfileNames
              ((FSkeletalMeshAttributesShared *)(auStack_410 + 0x10),&TStack_720,false);
    iVar48 = TStack_720.ArrayNum;
    pFVar58 = (FName *)(TStack_720.AllocatorInstance.Data + (longlong)iVar48 * 8);
    FVar86.Data = TStack_720.AllocatorInstance.Data;
    while( true ) {
      if (TStack_720.ArrayNum != iVar48) {
        uStack_970 = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&uStack_970);
      }
      if ((FName *)FVar86.Data == pFVar58) break;
      FSkeletalMeshAttributes::UnregisterSkinWeightAttribute
                ((FSkeletalMeshAttributes *)auStack_410,*(FName *)FVar86.Data);
      FVar86.Data = FVar86.Data + 8;
    }
    if ((FName *)TStack_720.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(TStack_720.AllocatorInstance.Data);
    }
    TStack_6e0._padding_._0_4_ = 0;
    TStack_6e0.UnvisitedBitMask = 0xffffffff;
    TStack_6e0.CurrentBitIndex = 0;
    TStack_6e0.BaseBitIndex = 0;
    pFVar92 = (pFStack_990->AttributeSet).Ptr;
    TStack_6e0._padding_._4_4_ = (undefined4)uStack_8d8;
    pFVar78 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar92 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar78 = pFVar92;
    }
    puVar2 = &(pFVar78->SkinWeightAttributes).field_0x10;
    pTVar1 = &pFVar78->SkinWeightAttributes;
    TStack_6e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if (*(int *)&(pFVar78->SkinWeightAttributes).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_6e0);
    }
    uStack_908 = CONCAT44(TStack_6e0._padding_._4_4_,(undefined4)TStack_6e0._padding_);
    uStack_8f8 = CONCAT44(TStack_6e0.CurrentBitIndex,TStack_6e0.UnvisitedBitMask);
    uStack_8f0 = CONCAT44(TStack_6e0._28_4_,TStack_6e0.BaseBitIndex);
    iStack_8e8 = *(int *)&(pFVar78->SkinWeightAttributes).field_0x8 -
                 *(int *)&(pFVar78->SkinWeightAttributes).field_0x34;
    pTStack_900 = TStack_6e0.Array;
    uStack_608._4_4_ = uStack_8e4;
    uStack_608._0_4_ = iStack_8e8;
    pTStack_620 = TStack_6e0.Array;
    pTStack_910 = pTVar1;
    auStack_630._0_8_ = pTVar1;
    unique0x10005bb2 = uStack_908;
    uStack_618 = uStack_8f8;
    lStack_610 = uStack_8f0;
    pTVar65 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&TStack_348,(TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                         *(int *)&(pFVar78->SkinWeightAttributes).field_0x28);
    uStack_908 = pTVar65->_padding_;
    pTStack_900 = pTVar65->Array;
    uStack_8f8._0_4_ = pTVar65->UnvisitedBitMask;
    uStack_8f8._4_4_ = pTVar65->CurrentBitIndex;
    uStack_8f0 = *(longlong *)&pTVar65->BaseBitIndex;
    iStack_8e8 = *(int *)&(pFVar78->SkinWeightAttributes).field_0x8 -
                 *(int *)&(pFVar78->SkinWeightAttributes).field_0x34;
    TStack_470._44_4_ = uStack_8e4;
    TStack_470.InitialNum = iStack_8e8;
    pTStack_910 = pTVar1;
    TStack_470._padding_ = (longlong)pTVar1;
    TStack_470._padding_ = uStack_908;
    TStack_470._padding_ = (longlong)pTStack_900;
    TStack_470._padding_ = uStack_8f8;
    TStack_470._padding_ = uStack_8f0;
    bVar47 = TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForConstIterator::operator!=
                       ((TRangedForConstIterator *)auStack_630,&TStack_470);
    if (bVar47) {
      pFStack_550 = &FStack_748;
      do {
        FStack_748 = *(FName *)(*(longlong *)(undefined1 *)auStack_630._0_8_ +
                               (longlong)uStack_618._4_4_ * 0x18);
        FSkeletalMeshAttributes::RegisterSkinWeightAttribute
                  ((FSkeletalMeshAttributes *)auStack_410,FStack_748);
        TStack_548.ArrayPtr =
             (FMeshAttributeArraySetBase *)
             FSkeletalMeshAttributes::GetVertexSkinWeights
                       ((FSkeletalMeshAttributes *)auStack_410,(FName)auStack_4a0);
        TSet<TTuple<FName,FSkinWeightsVertexAttributesRef>,TDefaultMapHashableKeyFuncs<FName,FSkinWeightsVertexAttributesRef,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FSkinWeightsVertexAttributesRef_&&>_>
                  (&TStack_108,&TStack_690,(bool *)&pFStack_550);
        uStack_618 = CONCAT44(uStack_618._4_4_,(uint)uStack_618 & ~uStack_624);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(auStack_630 + 8));
        bVar47 = TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)auStack_630,&TStack_470);
      } while (bVar47);
    }
  }
  TStack_158.Elements._0_8_ = 0;
  TStack_158.Elements._8_8_ = 0;
  TStack_158.Elements._32_8_ = 0;
  TStack_158.Elements._40_4_ = 0;
  TStack_158.Elements._44_4_ = 0x80;
  TStack_158.Elements._48_4_ = 0xffffffff;
  TStack_158.Elements._52_4_ = 0;
  TStack_158.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_158.HashSize = 0;
  if (cStack_996 != '\0') {
    FSkeletalMeshAttributes::FSkeletalMeshAttributes
              ((FSkeletalMeshAttributes *)auStack_3d8,pFStack_888);
    FSkeletalMeshAttributesShared::GetMorphTargetNames
              ((FSkeletalMeshAttributesShared *)(auStack_3d8 + 0x10),&TStack_6f0);
    iVar48 = TStack_6f0.ArrayNum;
    pFVar58 = (FName *)(TStack_6f0.AllocatorInstance.Data + (longlong)iVar48 * 8);
    FVar86.Data = TStack_6f0.AllocatorInstance.Data;
    while( true ) {
      if (TStack_6f0.ArrayNum != iVar48) {
        uStack_96f = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&uStack_96f);
      }
      if ((FName *)FVar86.Data == pFVar58) break;
      FSkeletalMeshAttributes::UnregisterMorphTargetAttribute
                ((FSkeletalMeshAttributes *)auStack_3d8,*(FName *)FVar86.Data);
      FVar86.Data = FVar86.Data + 8;
    }
    if ((FName *)TStack_6f0.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(TStack_6f0.AllocatorInstance.Data);
    }
    TStack_6c0._padding_._0_4_ = 0;
    TStack_6c0.UnvisitedBitMask = 0xffffffff;
    TStack_6c0.CurrentBitIndex = 0;
    TStack_6c0.BaseBitIndex = 0;
    pFVar92 = (pFStack_990->AttributeSet).Ptr;
    TStack_6c0._padding_._4_4_ = (undefined4)uStack_8d8;
    pFVar78 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar92 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar78 = pFVar92;
    }
    puVar2 = &(pFVar78->MorphTargetAttributes).field_0x10;
    pTVar73 = &pFVar78->MorphTargetAttributes;
    TStack_6c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if (*(int *)&(pFVar78->MorphTargetAttributes).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_6c0);
    }
    uStack_908 = CONCAT44(TStack_6c0._padding_._4_4_,(undefined4)TStack_6c0._padding_);
    uStack_8f8 = CONCAT44(TStack_6c0.CurrentBitIndex,TStack_6c0.UnvisitedBitMask);
    uStack_8f0 = CONCAT44(TStack_6c0._28_4_,TStack_6c0.BaseBitIndex);
    iStack_8e8 = *(int *)&(pFVar78->MorphTargetAttributes).field_0x8 -
                 *(int *)&(pFVar78->MorphTargetAttributes).field_0x34;
    pTStack_900 = TStack_6c0.Array;
    uStack_638._4_4_ = uStack_8e4;
    uStack_638._0_4_ = iStack_8e8;
    pTStack_650 = TStack_6c0.Array;
    pTStack_910 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                   *)pTVar73;
    auStack_660._0_8_ = pTVar73;
    unique0x10005b92 = uStack_908;
    uStack_648 = uStack_8f8;
    lStack_640 = uStack_8f0;
    pTVar65 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&TStack_328,(TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                         *(int *)&(pFVar78->MorphTargetAttributes).field_0x28);
    uStack_908 = pTVar65->_padding_;
    pTStack_900 = pTVar65->Array;
    uStack_8f8._0_4_ = pTVar65->UnvisitedBitMask;
    uStack_8f8._4_4_ = pTVar65->CurrentBitIndex;
    uStack_8f0 = *(longlong *)&pTVar65->BaseBitIndex;
    iStack_8e8 = *(int *)&(pFVar78->MorphTargetAttributes).field_0x8 -
                 *(int *)&(pFVar78->MorphTargetAttributes).field_0x34;
    TStack_440._44_4_ = uStack_8e4;
    TStack_440.InitialNum = iStack_8e8;
    pTStack_910 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                   *)pTVar73;
    TStack_440._padding_ = (longlong)pTVar73;
    TStack_440._padding_ = uStack_908;
    TStack_440._padding_ = (longlong)pTStack_900;
    TStack_440._padding_ = uStack_8f8;
    TStack_440._padding_ = uStack_8f0;
    bVar47 = TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForConstIterator::operator!=
                       ((TRangedForConstIterator *)auStack_660,&TStack_440);
    if (bVar47) {
      pFStack_540 = &FStack_740;
      do {
        FStack_740 = *(FName *)(*(longlong *)(undefined1 *)auStack_660._0_8_ +
                               (longlong)uStack_648._4_4_ * 0x18);
        FSkeletalMeshAttributes::RegisterMorphTargetAttribute
                  ((FSkeletalMeshAttributes *)auStack_3d8,FStack_740,false);
        pFStack_538 = (FMeshAttributeArraySetBase *)
                      FSkeletalMeshAttributes::GetVertexMorphPositionDelta
                                ((FSkeletalMeshAttributes *)auStack_3d8,(FName)auStack_478);
        TSet<TTuple<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FName_const_&,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>_&&>_>
                  (&TStack_158,
                   (TPairInitializer<FName_const_&,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>_&&>
                    *)(auStack_698 + 4),(bool *)&pFStack_540);
        uStack_648 = CONCAT44(uStack_648._4_4_,(uint)uStack_648 & ~uStack_654);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(auStack_660 + 8));
        bVar47 = TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)auStack_660,&TStack_440);
      } while (bVar47);
    }
  }
  uVar100 = 0;
  ((FStack_7e8.MeshDescription)->VertexInstanceToTriangles).bSuspended = true;
  ((FStack_7e8.MeshDescription)->EdgeToTriangles).bSuspended = true;
  ((FStack_7e8.MeshDescription)->PolygonToTriangles).bSuspended = true;
  ((FStack_7e8.MeshDescription)->PolygonGroupToPolygons).bSuspended = true;
  ((FStack_7e8.MeshDescription)->PolygonGroupToTriangles).bSuspended = true;
  ((FStack_7e8.MeshDescription)->UVToTriangles).bSuspended = true;
  TStack_938.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_938.ArrayNum = 0;
  TStack_938.ArrayMax = 0;
  DynamicMeshToMeshDescriptionConversionHelper::ConvertVertices
            (pFStack_990,&FStack_7e8,(this->ConversionOptions).bConvertBackToNonManifold,&TStack_938
            );
  FMeshDescriptionBuilder::SetNumUVLayers(&FStack_7e8,uVar83);
  FStack_8c0.Data = (FScriptContainerElement *)0x0;
  uStack_8b8 = 0;
  if ((int)uVar83 < 1) {
    if ((int)uVar83 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar87);
    }
    FStack_980.Data = (FScriptContainerElement *)0x0;
    iStack_978 = 0;
    iStack_974 = 0;
    auStack_958[0] = 0xffffffff;
    if (uVar83 != 0) goto LAB_1443d1fb0;
  }
  else {
    iVar48 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar83,&FStack_8c0,(int *)&uStack_8b8,
                        (int *)((longlong)&uStack_8b8 + 4));
    memset(FStack_8c0.Data + (longlong)iVar48 * 0x10,0,lVar101 << 4);
LAB_1443d1fb0:
    auStack_958[0] = 0xffffffff;
    iStack_978 = 0;
    iStack_974 = 0;
    FStack_980.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar83,&FStack_980,0,&iStack_974);
    if (0 < (int)uVar83) {
      do {
        if (((FStack_980.Data <= (FScriptContainerElement *)auStack_958) &&
            ((FScriptContainerElement *)auStack_958 < FStack_980.Data + (longlong)iStack_974 * 4))
           && (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar47)) {
          pcVar68 = (code *)swi(3);
          (*pcVar68)();
          return;
        }
        if (iStack_978 == iStack_974) {
          iStack_978 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&FStack_980,&iStack_974);
        }
        iVar48 = iStack_978 + 1;
        *(undefined4 *)(FStack_980.Data + (longlong)iStack_978 * 4) = auStack_958[0];
        uVar87 = uVar87 - 1;
        iStack_978 = iVar48;
      } while (uVar87 != 0);
    }
  }
  if (0 < (int)uVar83) {
    pTStack_968 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
    pTStack_918 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *)0x0;
    do {
      pTVar93 = pTStack_918;
      pTVar31 = pTStack_968;
      uVar83 = 0;
      if ((int)uVar100 < iStack_940) {
        uVar83 = ~uVar100 >> 0x1f;
      }
      if ((uVar83 == 0) &&
         (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar47)) {
        pcVar68 = (code *)swi(3);
        (*pcVar68)();
        return;
      }
      lVar101 = *(longlong *)(FStack_948.Data + (longlong)pTVar31 * 8);
      uVar83 = 0;
      if ((int)uVar100 < (int)uStack_8b8) {
        uVar83 = ~uVar100 >> 0x1f;
      }
      if ((uVar83 == 0) &&
         (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar47)) {
        pcVar68 = (code *)swi(3);
        (*pcVar68)();
        return;
      }
      this_07 = (TArray<FUVID,TSizedDefaultAllocator<32>_> *)(FStack_8c0.Data + (longlong)pTVar93);
      iVar48 = this_07->ArrayNum;
      piVar61 = &this_07->ArrayNum;
      uVar83 = *(int *)(lVar101 + 8) * 0x200 + *(int *)(lVar101 + 0xc);
      if (iVar48 < (int)uVar83) {
        iVar49 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar83 - iVar48,(ForAnyElementType *)this_07,piVar61,
                            &this_07->ArrayMax);
        DefaultConstructItems<FUVID,int>
                  ((this_07->AllocatorInstance).Data + (longlong)iVar49 * 4,uVar83 - iVar48);
      }
      else {
        if ((int)uVar83 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar83);
        }
        if ((int)uVar83 < iVar48) {
          uVar99 = iVar48 - uVar83;
          if (((int)(uVar99 | uVar83) < 0) &&
             (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar47)) {
            pcVar68 = (code *)swi(3);
            (*pcVar68)();
            return;
          }
          if (uVar99 != 0) {
            TArray<FUVID,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_07,uVar83,uVar99);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(ForAnyElementType *)this_07,*piVar61,&this_07->ArrayMax);
          }
        }
      }
      FMeshDescriptionBuilder::ReserveNewUVs(&FStack_7e8,*(int *)(lVar101 + 0x38),uVar100);
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                ((IndexIterator *)&BStack_680,(FRefCountVector *)(lVar101 + 8),0,
                 *(int *)(lVar101 + 8) * 0x200 + *(int *)(lVar101 + 0xc));
      iVar48 = *(int *)(lVar101 + 8) * 0x200 + *(int *)(lVar101 + 0xc);
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                (&IStack_520,(FRefCountVector *)(lVar101 + 8),iVar48,iVar48);
      uVar5 = IStack_520._8_4_;
      iVar48 = BStack_680.Index;
      uVar83 = uStack_988;
      this = pFStack_860;
      while (uStack_988 = uVar83, pFStack_860 = this, iVar48 != uVar5) {
        uVar83 = BStack_680.Index;
        dStack_530 = (double)*(float *)(*(longlong *)
                                         (*(longlong *)(lVar101 + 0x48) +
                                         (ulonglong)((uVar83 & 0x7fffffff) >> 8) * 8) +
                                       (ulonglong)(uVar83 * 2 & 0x1ff) * 4);
        dStack_528 = (double)*(float *)(*(longlong *)
                                         (*(longlong *)(lVar101 + 0x48) +
                                         (ulonglong)((uVar83 & 0x7fffffff) >> 8) * 8) +
                                       (ulonglong)(uVar83 * 2 + 1 & 0x1ff) * 4);
        FVar50 = FMeshDescriptionBuilder::AppendUV
                           (&FStack_7e8,(TVector2<double> *)auStack_698,(int)&dStack_530);
        uVar9 = *(undefined4 *)CONCAT44(extraout_var,FVar50);
        uVar99 = 0;
        if ((int)uVar83 < *piVar61) {
          uVar99 = ~uVar83 >> 0x1f;
        }
        if ((uVar99 == 0) &&
           (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar47)) {
          pcVar68 = (code *)swi(3);
          (*pcVar68)();
          return;
        }
        *(undefined4 *)((this_07->AllocatorInstance).Data + (longlong)(int)uVar83 * 4) = uVar9;
        UE::Geometry::FRefCountVector::BaseIterator::goto_next(&BStack_680);
        uVar83 = uStack_988;
        this = pFStack_860;
        iVar48 = BStack_680.Index;
      }
      uVar100 = uVar100 + 1;
      pTStack_968 = (TBitArray<FDefaultBitArrayAllocator> *)
                    ((pTStack_968->AllocatorInstance).InlineData + 1);
      pTStack_918 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                     *)((longlong)pTStack_918 + 0x10);
    } while ((longlong)pTStack_968 < lStack_838);
  }
  FStack_738.ComparisonIndex.Value = 0;
  FStack_738.Number = 0;
  pFVar66 = FMeshElementChannels::Get((FStack_7e8.MeshDescription)->PolygonGroupElements,0);
  uVar100 = FMeshElementContainer::Add(pFVar66);
  uStack_988 = uVar100;
  pTVar57 = TMeshAttributeArraySet<FName>::GetArrayForChannel
                      ((TMeshAttributeArraySet<FName> *)FStack_7e8.GroupMaterialSlotNames.ArrayPtr,0
                      );
  pFVar58 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar57,uVar100);
  uVar70 = uStack_2e0;
  pTVar33 = pTStack_878;
  pTVar54 = pTStack_920;
  pTVar53 = pTStack_960;
  *pFVar58 = FStack_738;
  if ((((cStack_96d == '\0') ||
       (pTStack_878 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) ||
      (pTStack_920 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) ||
     (pTStack_960 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
    bVar47 = false;
  }
  else {
    bVar47 = true;
  }
  pcStack_2e8 = (code *)0x0;
  plStack_2c0 = (longlong *)0x0;
  if (bVar47) {
    pcStack_218 = (code *)0x0;
    plVar67 = FMemory::Malloc(0x28,8);
    uVar45 = uStack_1fc;
    uVar44 = uStack_200;
    uVar43 = uStack_204;
    uVar42 = uStack_208;
    uVar17 = uStack_210;
    plStack_1f0 = plStack_2c0;
    uVar41 = uStack_2cc;
    uVar40 = uStack_2d0;
    uVar9 = uStack_2d4;
    uVar5 = uStack_2d8;
    uVar70 = uStack_2e0;
    *plVar67 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::`50'::<lambda_1>,0,1>
                ::_vftable_;
    plVar67[1] = (longlong)pTVar33;
    plVar67[2] = (longlong)pTVar54;
    plVar67[3] = (longlong)pTVar53;
    plVar67[4] = (longlong)&FStack_7e8;
    pcVar68 = pcStack_218;
    if (plVar67 + 1 != (longlong *)0x0) {
      pcVar68 = UE::Core::Private::Function::
                TFunctionRefCaller<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l50::<lambda_1>,void,int,FVertexInstanceID_*>
                ::Call;
    }
    uStack_2e0 = uStack_210;
    uStack_2c8._0_4_ = (undefined4)uStack_1f8;
    uStack_2c8._4_4_ = uStack_1f8._4_4_;
    plStack_2c0 = plVar67;
    uStack_2d8 = uStack_208;
    uStack_2d4 = uStack_204;
    uStack_2d0 = uStack_200;
    uStack_2cc = uStack_1fc;
    pcStack_218 = pcStack_2e8;
    uStack_210 = uVar70;
    uStack_208 = uVar5;
    uStack_204 = uVar9;
    uStack_200 = uVar40;
    uStack_1fc = uVar41;
    uStack_1c8 = uStack_1f8;
    if (pcStack_2e8 != (code *)0x0) {
      uStack_2c8 = uStack_1f8;
      uStack_2cc = uVar45;
      uStack_2d0 = uVar44;
      uStack_2d4 = uVar43;
      uStack_2d8 = uVar42;
      uStack_2e0 = uVar17;
      plVar80 = (longlong *)&uStack_208;
      if (plStack_1f0 != (longlong *)0x0) {
        plVar80 = plStack_1f0;
      }
      pcStack_2e8 = pcVar68;
      (**(code **)(*plVar80 + 0x10))();
      pcVar68 = pcStack_2e8;
      uStack_1c8 = uStack_2c8;
    }
  }
  else if (pTStack_878 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) {
    pcStack_2e8 = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(int,FVertexInstanceID_*),void,int,FVertexInstanceID_*>
                  ::Call;
    uStack_2e0 = uStack_1e0;
    uStack_2c8._0_4_ = (undefined4)uStack_1c8;
    uStack_2c8._4_4_ = uStack_1c8._4_4_;
    plStack_2c0 = (longlong *)0x0;
    uStack_2d8 = 0x50bcab90;
    uStack_2d4 = 1;
    uStack_2d0 = 0x443b50a0;
    uStack_2cc = 1;
    uStack_1e8 = 0;
    uStack_1e0 = uVar70;
    uStack_1c0 = 0;
    pcVar68 = pcStack_2e8;
  }
  else {
    uStack_1c8 = &FStack_7e8;
    uStack_270 = SUB84(pTStack_878,0);
    uStack_26c = (undefined4)((ulonglong)pTStack_878 >> 0x20);
    pcStack_2e8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l54::<lambda_2>,void,int,FVertexInstanceID_*>
                  ::Call;
    uStack_2e0 = uStack_280;
    uStack_2c8 = uStack_1c8;
    plStack_2c0 = (longlong *)0x0;
    uStack_2d8 = 0x50bcab70;
    uStack_2d4 = 1;
    uStack_2d0 = uStack_270;
    uStack_2cc = uStack_26c;
    uStack_288 = 0;
    uStack_280 = uVar70;
    uStack_260 = 0;
    pcVar68 = pcStack_2e8;
  }
  pcStack_2e8 = pcVar68;
  uVar70 = uStack_2b0;
  pTVar89 = pTStack_950;
  pcStack_2b8 = (code *)0x0;
  plStack_290 = (longlong *)0x0;
  uStack_2c8 = uStack_1c8;
  if (pTStack_950 == (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
    pcStack_2b8 = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(int,FVertexInstanceID_*),void,int,FVertexInstanceID_*>
                  ::Call;
    uStack_2b0 = uStack_1b0;
    uStack_298 = (undefined4)uStack_198;
    uStack_294 = uStack_198._4_4_;
    plStack_290 = (longlong *)0x0;
    uStack_2a8 = 0x50bcab90;
    uStack_2a4 = 1;
    uStack_2a0 = 0x443b50b0;
    uStack_29c = 1;
    uStack_1b8 = 0;
    uStack_1b0 = uVar70;
    uStack_190 = 0;
  }
  else {
    pcStack_188 = (code *)0x0;
    plVar67 = FMemory::Malloc(0x20,8);
    uVar45 = uStack_16c;
    uVar44 = uStack_170;
    uVar43 = uStack_174;
    uVar42 = uStack_178;
    uVar17 = uStack_180;
    plStack_160 = plStack_290;
    uVar41 = uStack_29c;
    uVar40 = uStack_2a0;
    uVar9 = uStack_2a4;
    uVar5 = uStack_2a8;
    uVar70 = uStack_2b0;
    pcVar68 = pcStack_2b8;
    *plVar67 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::`59'::<lambda_4>,0,1>
                ::_vftable_;
    plVar67[1] = (longlong)this;
    plVar67[2] = (longlong)pTVar89;
    plVar67[3] = (longlong)&FStack_7e8;
    pcStack_2b8 = pcStack_188;
    if (plVar67 + 1 != (longlong *)0x0) {
      pcStack_2b8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l59::<lambda_4>,void,int,FVertexInstanceID_*>
                    ::Call;
    }
    uStack_2b0 = uStack_180;
    uStack_298 = (undefined4)uStack_168;
    uStack_294 = uStack_168._4_4_;
    plStack_290 = plVar67;
    uStack_2a8 = uStack_178;
    uStack_2a4 = uStack_174;
    uStack_2a0 = uStack_170;
    uStack_29c = uStack_16c;
    pcStack_188 = pcVar68;
    uStack_180 = uVar70;
    uStack_178 = uVar5;
    uStack_174 = uVar9;
    uStack_170 = uVar40;
    uStack_16c = uVar41;
    if (pcVar68 != (code *)0x0) {
      uStack_29c = uVar45;
      uStack_2a0 = uVar44;
      uStack_2a4 = uVar43;
      uStack_2a8 = uVar42;
      uStack_2b0 = uVar17;
      plVar80 = (longlong *)&uStack_178;
      if (plStack_160 != (longlong *)0x0) {
        plVar80 = plStack_160;
      }
      (**(code **)(*plVar80 + 0x10))();
    }
  }
  pTVar32 = pTStack_8d0;
  pFVar30 = pFStack_990;
  uVar99 = 0;
  if (pTStack_8d0 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    pFVar88 = &pFStack_990->TriangleRefCounts;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)&BStack_670,pFVar88,0,
               (pFVar88->RefCounts).CurBlock * 0x200 +
               (pFStack_990->TriangleRefCounts).RefCounts.CurBlockUsed);
    iVar48 = (pFVar88->RefCounts).CurBlock * 0x200 +
             (pFVar30->TriangleRefCounts).RefCounts.CurBlockUsed;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&IStack_510,pFVar88,iVar48,iVar48);
    if (BStack_670.Index != IStack_510._8_4_) {
      do {
        uVar82 = *(uint *)(*(longlong *)
                            (*(longlong *)&pTVar32->field_0x20 +
                            ((BStack_670._8_8_ & 0xffffffff) >> 9) * 8) +
                          (ulonglong)(BStack_670.Index & 0x1ff) * 4);
        if ((-1 < (int)uVar82) && ((int)uVar82 < (this->MaterialIDToPolygroupIDMap).ArrayNum)) {
          uVar96 = 0;
          if ((int)uVar82 < (this->MaterialIDToPolygroupIDMap).ArrayNum) {
            uVar96 = ~uVar82 >> 0x1f;
          }
          if (uVar96 == 0) {
            bVar47 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar47) {
              pcVar68 = (code *)swi(3);
              (*pcVar68)();
              return;
            }
          }
          uVar82 = *(uint *)((this->MaterialIDToPolygroupIDMap).AllocatorInstance.Data +
                            (longlong)(int)uVar82 * 4);
        }
        if ((int)uVar99 < (int)uVar82) {
          uVar99 = uVar82;
        }
        UE::Geometry::FRefCountVector::BaseIterator::goto_next(&BStack_670);
      } while (BStack_670.Index != IStack_510._8_4_);
      if (uVar99 != 0) {
        if (0 < (int)uVar99) {
          uVar91 = (ulonglong)uVar99;
          uStack_768 = 0;
          do {
            pFVar66 = FMeshElementChannels::Get
                                ((FStack_7e8.MeshDescription)->PolygonGroupElements,0);
            iVar48 = FMeshElementContainer::Add(pFVar66);
            pTVar57 = TMeshAttributeArraySet<FName>::GetArrayForChannel
                                ((TMeshAttributeArraySet<FName> *)
                                 FStack_7e8.GroupMaterialSlotNames.ArrayPtr,0);
            pFVar58 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar57,iVar48);
            pFVar58->ComparisonIndex = 0;
            pFVar58->Number = 0;
            uVar91 = uVar91 - 1;
          } while (uVar91 != 0);
        }
        goto LAB_1443d294a;
      }
    }
    pTStack_8d0 = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
  }
LAB_1443d294a:
  FStack_820.Data = (FScriptContainerElement *)0x0;
  aiStack_818[0] = 0;
  aiStack_818[1] = 0;
  if (0 < (int)uVar83) {
    iVar48 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xc,4,uVar83,&FStack_820,aiStack_818,aiStack_818 + 1);
    DefaultConstructItems<UE::Geometry::FIndex3i,int>
              (FStack_820.Data + (longlong)iVar48 * 0xc,uVar83);
  }
  TStack_848.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_848.ArrayNum = 0;
  TStack_848.ArrayMax = 0;
  TArray<FTriangleID,TSizedDefaultAllocator<32>_>::SetNum
            (&TStack_848,
             (pFStack_990->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (pFStack_990->TriangleRefCounts).RefCounts.CurBlockUsed,Default);
  pFVar30 = pFStack_990;
  pFVar88 = &pFStack_990->TriangleRefCounts;
  UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
            (&IStack_8b0,pFVar88,0,
             (pFVar88->RefCounts).CurBlock * 0x200 +
             (pFStack_990->TriangleRefCounts).RefCounts.CurBlockUsed);
  iVar48 = (pFVar88->RefCounts).CurBlock * 0x200 +
           (pFVar30->TriangleRefCounts).RefCounts.CurBlockUsed;
  UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&IStack_5a0,pFVar88,iVar48,iVar48);
  if (IStack_8b0._8_4_ != IStack_5a0._8_4_) {
    do {
      uVar99 = IStack_8b0._8_4_;
      pTStack_968 = (TBitArray<FDefaultBitArrayAllocator> *)(longlong)(int)IStack_8b0._8_4_;
      pTStack_850 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                     *)(ulonglong)(IStack_8b0._8_4_ & 0x1ff);
      pTStack_918 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                     *)(ulonglong)((uint)IStack_8b0._8_4_ >> 9);
      pTStack_920 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
                    CONCAT44(pTStack_920._4_4_,IStack_8b0._8_4_);
      lVar101 = *(longlong *)
                 ((pFStack_990->Triangles).Blocks.AllocatorInstance.Data + (longlong)pTStack_918 * 8
                 );
      uStack_870 = *(undefined8 *)(lVar101 + (longlong)pTStack_850 * 0xc);
      uVar83 = *(uint *)(lVar101 + 8 + (longlong)pTStack_850 * 0xc);
      uVar82 = (uint)uStack_870;
      uStack_b8 = 0xffffffffffffffff;
      aFStack_b0[0] = (FPolygonGroupID)0xffffffff;
      uVar96 = 0;
      if ((int)(uint)uStack_870 < TStack_938.ArrayNum) {
        uVar96 = ~(uint)uStack_870 >> 0x1f;
      }
      uStack_868 = uVar83;
      if (uVar96 == 0) {
        bVar47 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar47) {
          pcVar68 = (code *)swi(3);
          (*pcVar68)();
          return;
        }
      }
      pFVar85 = FStack_7e8.MeshDescription;
      FVar10 = *(FVertexID *)(TStack_938.AllocatorInstance.Data + (longlong)(int)uVar82 * 4);
      pFVar66 = FMeshElementChannels::Get((FStack_7e8.MeshDescription)->VertexInstanceElements,0);
      FVar51 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar66);
      FMeshDescription::CreateVertexInstance_Internal(pFVar85,FVar51,FVar10);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,FVar51);
      uVar82 = uStack_870._4_4_;
      uVar96 = 0;
      if ((int)uStack_870._4_4_ < TStack_938.ArrayNum) {
        uVar96 = ~uStack_870._4_4_ >> 0x1f;
      }
      if (uVar96 == 0) {
        bVar47 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar47) {
          pcVar68 = (code *)swi(3);
          (*pcVar68)();
          return;
        }
      }
      pFVar85 = FStack_7e8.MeshDescription;
      FVar10 = *(FVertexID *)(TStack_938.AllocatorInstance.Data + (longlong)(int)uVar82 * 4);
      pFVar66 = FMeshElementChannels::Get((FStack_7e8.MeshDescription)->VertexInstanceElements,0);
      FVar51 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar66);
      FMeshDescription::CreateVertexInstance_Internal(pFVar85,FVar51,FVar10);
      uStack_b8 = CONCAT44(FVar51,uStack_b8._0_4_);
      uVar82 = 0;
      if ((int)uVar83 < TStack_938.ArrayNum) {
        uVar82 = ~uVar83 >> 0x1f;
      }
      if (uVar82 == 0) {
        bVar47 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar47) {
          pcVar68 = (code *)swi(3);
          (*pcVar68)();
          return;
        }
      }
      pFVar85 = FStack_7e8.MeshDescription;
      FVar10 = *(FVertexID *)(TStack_938.AllocatorInstance.Data + (longlong)(int)uVar83 * 4);
      pFVar66 = FMeshElementChannels::Get((FStack_7e8.MeshDescription)->VertexInstanceElements,0);
      FVar51 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar66);
      FMeshDescription::CreateVertexInstance_Internal(pFVar85,FVar51,FVar10);
      pFVar34 = pFStack_860;
      uStack_890 = uVar100;
      aFStack_b0[0] = (FPolygonGroupID)FVar51;
      if (pTStack_8d0 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
        uStack_890 = *(uint *)(*(longlong *)
                                (*(longlong *)&pTStack_8d0->field_0x20 +
                                (((ulonglong)pTStack_920 & 0xffffffff) >> 9) * 8) +
                              (ulonglong)((uint)pTStack_920 & 0x1ff) * 4);
        lVar101 = (longlong)(int)uStack_890;
        if ((-1 < (int)uStack_890) &&
           ((int)uStack_890 < (pFStack_860->MaterialIDToPolygroupIDMap).ArrayNum)) {
          uVar83 = 0;
          if ((int)uStack_890 < (pFStack_860->MaterialIDToPolygroupIDMap).ArrayNum) {
            uVar83 = ~uStack_890 >> 0x1f;
          }
          if (uVar83 == 0) {
            uStack_890 = uVar100;
            bVar47 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar47) {
              pcVar68 = (code *)swi(3);
              (*pcVar68)();
              return;
            }
          }
          uStack_890 = *(uint *)((pFVar34->MaterialIDToPolygroupIDMap).AllocatorInstance.Data +
                                lVar101 * 4);
        }
      }
      FMeshDescriptionBuilder::AppendTriangle
                (&FStack_7e8,aFStack_8e0,(FVertexInstanceID *)&uStack_b8,
                 (FVertexInstanceID *)((longlong)&uStack_b8 + 4),aFStack_b0);
      FVar51 = aFStack_8e0[0];
      pTVar31 = pTStack_968;
      uVar83 = 0;
      if ((int)uVar99 < TStack_848.ArrayNum) {
        uVar83 = ~uVar99 >> 0x1f;
      }
      if (uVar83 == 0) {
        bVar47 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar47) {
          pcVar68 = (code *)swi(3);
          (*pcVar68)();
          return;
        }
      }
      uVar83 = 0;
      lVar101 = 0;
      *(FVertexInstanceID *)(TStack_848.AllocatorInstance.Data + (longlong)pTVar31 * 4) = FVar51;
      if (0 < lStack_838) {
        pTStack_960 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
        uVar82 = (int)pTStack_920 * 3;
        pTStack_968 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)uVar82;
        pTStack_8c8 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
                       *)(ulonglong)(uVar82 & 0x1ff);
        pTStack_950 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
        do {
          pTVar73 = pTStack_8c8;
          pTVar89 = pTStack_950;
          pTVar31 = pTStack_968;
          uVar99 = ~uVar83 >> 0x1f;
          uVar100 = 0;
          if ((int)uVar83 < iStack_940) {
            uVar100 = uVar99;
          }
          if (uVar100 == 0) {
            bVar47 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar47) {
              pcVar68 = (code *)swi(3);
              (*pcVar68)();
              return;
            }
          }
          if (*(int *)(*(longlong *)
                        (*(longlong *)(*(longlong *)(FStack_948.Data + lVar101 * 8) + 0x78) +
                        (ulonglong)(uVar82 >> 9) * 8) + (longlong)pTVar73 * 4) < 0) {
            uVar100 = 0;
            if ((int)uVar83 < iStack_978) {
              uVar100 = uVar99;
            }
            if (uVar100 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            if (*(int *)(FStack_980.Data + (longlong)pTVar89) == -1) {
              uVar100 = 0;
              if ((int)uVar83 < FStack_7e8.UVCoordinateLayers.ArrayNum) {
                uVar100 = uVar99;
              }
              if (uVar100 == 0) {
                bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar47) {
                  pcVar68 = (code *)swi(3);
                  (*pcVar68)();
                  return;
                }
              }
              this_00 = *(TMeshAttributeArraySet<UE::Math::TVector2<float>_> **)
                         (FStack_7e8.UVCoordinateLayers.AllocatorInstance.Data + lVar101 * 8);
              pFVar66 = FMeshElementChannels::Get((FStack_7e8.MeshDescription)->UVElements,uVar83);
              iVar48 = FMeshElementContainer::Add(pFVar66);
              fStack_760 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
              fStack_75c = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
              this_02 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                                  (this_00,0);
              pTVar69 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                   (this_02,iVar48)->field0_0x0;
              TVar28.field0_0x0._s_0.Y = fStack_75c;
              TVar28.field0_0x0._s_0.X = fStack_760;
              *pTVar69 = TVar28.field0_0x0;
              uVar100 = 0;
              if ((int)uVar83 < iStack_978) {
                uVar100 = uVar99;
              }
              if (uVar100 == 0) {
                bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar47) {
                  pcVar68 = (code *)swi(3);
                  (*pcVar68)();
                  return;
                }
              }
              *(int *)(FStack_980.Data + lVar101 * 4) = iVar48;
              pTVar89 = pTStack_950;
            }
            uVar100 = 0;
            if ((int)uVar83 < iStack_978) {
              uVar100 = uVar99;
            }
            if (uVar100 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            FVar50 = *(FUVID *)(FStack_980.Data + lVar101 * 4);
            uVar100 = 0;
            if ((int)uVar83 < iStack_978) {
              uVar100 = uVar99;
            }
            if (uVar100 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            FVar94 = *(FUVID *)(FStack_980.Data + lVar101 * 4);
            uVar100 = 0;
            if ((int)uVar83 < iStack_978) {
              uVar100 = uVar99;
            }
            if (uVar100 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            FVar77 = *(FUVID *)(FStack_980.Data + lVar101 * 4);
          }
          else {
            uVar100 = 0;
            if ((int)uVar83 < (int)uStack_8b8) {
              uVar100 = uVar99;
            }
            if (uVar100 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            FVar86.Data = FStack_8c0.Data;
            uVar100 = 0;
            if ((int)uVar83 < iStack_940) {
              uVar100 = uVar99;
            }
            if (uVar100 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            uVar99 = (int)pTVar31 + 1;
            uVar96 = (int)pTVar31 + 2;
            lVar79 = *(longlong *)(*(longlong *)(FStack_948.Data + lVar101 * 8) + 0x78);
            uVar100 = *(uint *)(*(longlong *)(lVar79 + (ulonglong)(uVar82 >> 9) * 8) +
                               (longlong)pTVar73 * 4);
            uVar99 = *(uint *)(*(longlong *)(lVar79 + (ulonglong)(uVar99 >> 9) * 8) +
                              (ulonglong)(uVar99 & 0x1ff) * 4);
            uVar96 = *(uint *)(*(longlong *)(lVar79 + (ulonglong)(uVar96 >> 9) * 8) +
                              (ulonglong)(uVar96 & 0x1ff) * 4);
            uVar52 = 0;
            if ((int)uVar100 < *(int *)(FVar86.Data + 8 + (longlong)pTStack_960)) {
              uVar52 = ~uVar100 >> 0x1f;
            }
            if (uVar52 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            FVar50 = *(FUVID *)(*(longlong *)(FVar86.Data + (longlong)pTStack_960) +
                               (longlong)(int)uVar100 * 4);
            uVar100 = 0;
            if ((int)uVar99 < *(int *)(FVar86.Data + 8 + (longlong)pTStack_960)) {
              uVar100 = ~uVar99 >> 0x1f;
            }
            if (uVar100 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            FVar94 = *(FUVID *)(*(longlong *)(FVar86.Data + (longlong)pTStack_960) +
                               (longlong)(int)uVar99 * 4);
            uVar100 = 0;
            if ((int)uVar96 < *(int *)(FVar86.Data + 8 + (longlong)pTStack_960)) {
              uVar100 = ~uVar96 >> 0x1f;
            }
            if (uVar100 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            FVar77 = *(FUVID *)(*(longlong *)(FVar86.Data + (longlong)pTStack_960) +
                               (longlong)(int)uVar96 * 4);
            pTVar89 = pTStack_950;
          }
          FMeshDescriptionBuilder::AppendUVTriangle
                    (&FStack_7e8,(FTriangleID *)aFStack_8e0,FVar50,FVar94,FVar77,uVar83);
          pTStack_960 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
                        ((longlong)pTStack_960 + 0x10);
          pTStack_950 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)
                        ((longlong)pTVar89 + 4);
          uVar83 = uVar83 + 1;
          lVar101 = lVar101 + 1;
          uVar99 = IStack_8b0._8_4_;
          uVar100 = uStack_988;
        } while (lVar101 < lStack_838);
      }
      puStack_6a0 = &uStack_b8;
      iVar48 = (int)pTStack_920;
      aiStack_818[2] = iVar48;
      UE::Core::Private::Function::CheckCallable(pcStack_2e8);
      pcVar68 = pcStack_2e8;
      plVar67 = (longlong *)&uStack_2d8;
      if (plStack_2c0 != (longlong *)0x0) {
        plVar67 = plStack_2c0;
      }
      uVar70 = (**(code **)(*plVar67 + 8))();
      (*pcVar68)(uVar70,aiStack_818 + 2,&puStack_6a0);
      puStack_880 = &uStack_b8;
      aiStack_828[0] = iVar48;
      UE::Core::Private::Function::CheckCallable(pcStack_2b8);
      pcVar68 = pcStack_2b8;
      plVar67 = (longlong *)&uStack_2a8;
      if (plStack_290 != (longlong *)0x0) {
        plVar67 = plStack_290;
      }
      uVar70 = (**(code **)(*plVar67 + 8))();
      (*pcVar68)(uVar70,aiStack_828,&puStack_880);
      if (cStack_995 != '\0') {
        if ((pFStack_990->TriangleGroups).bIsSet == false) {
          iVar48 = -1;
        }
        else if (((iVar48 < 0) ||
                 ((int)((pFStack_990->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                       (pFStack_990->TriangleRefCounts).RefCounts.CurBlockUsed) <= iVar48)) ||
                (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               ((pFStack_990->TriangleRefCounts).RefCounts.Blocks.
                                                AllocatorInstance.Data + (longlong)pTStack_918 * 8)
                                             + (longlong)pTStack_850 * 2) - 1U))) {
          iVar48 = 0;
        }
        else {
          iVar48 = *(int *)(*(longlong *)
                             ((pFStack_990->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data
                             + (longlong)pTStack_918 * 8) + (longlong)pTStack_850 * 4);
        }
        FMeshDescription::GetTrianglePolygon(FStack_7e8.MeshDescription,SUB84(aiStack_830,0));
        pTVar60 = TMeshAttributeArraySet<int>::GetArrayForChannel
                            ((TMeshAttributeArraySet<int> *)FStack_7e8.PolyGroups.ArrayPtr,0);
        piVar61 = TMeshAttributeArrayBase<int>::GetElementBase(pTVar60,aiStack_830[0]);
        *piVar61 = iVar48;
      }
      IStack_8b0._8_4_ = uVar99 + 1;
      if ((int)IStack_8b0._8_4_ < (int)IStack_8b0._12_4_) {
        do {
          uVar100 = uStack_988;
          if ((*(short *)(*(longlong *)
                           (*(longlong *)(IStack_8b0._0_8_ + 8) +
                           (ulonglong)((uint)IStack_8b0._8_4_ >> 9) * 8) +
                         (ulonglong)(IStack_8b0._8_4_ & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)
                          (*(longlong *)(IStack_8b0._0_8_ + 8) +
                          (ulonglong)((uint)IStack_8b0._8_4_ >> 9) * 8) +
                        (ulonglong)(IStack_8b0._8_4_ & 0x1ff) * 2) != -1)) break;
          IStack_8b0._8_4_ = IStack_8b0._8_4_ + 1;
        } while ((int)IStack_8b0._8_4_ < (int)IStack_8b0._12_4_);
      }
    } while (IStack_8b0._8_4_ != IStack_5a0._8_4_);
  }
  pFVar34 = pFStack_860;
  pFVar85 = pFStack_888;
  ConvertPolygroupLayers(pFStack_860,pFStack_990,pFStack_888,&TStack_848);
  ConvertWeightLayers(pFVar34,pFStack_990,pFVar85,&TStack_938);
  if (((pFVar34->ConversionOptions).bSetHardEdgesFromNormalSeams == false) ||
     (pTStack_878 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
    uVar83 = (uint)uStack_8d8;
  }
  else {
    pFVar66 = FMeshElementChannels::Get(pFVar85->EdgeElements,0);
    pFVar71 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar66->Attributes,MeshAttribute::Edge::IsHard);
    if (((pFVar71 == (FAttributesSetEntry *)0x0) ||
        (this_06 = (TMeshAttributeArraySet<bool> *)(pFVar71->Ptr).Ptr,
        *(uint *)&this_06->_padding_ != 5)) || (*(uint *)((longlong)&this_06->_padding_ + 4) != 1))
    {
      this_06 = (TMeshAttributeArraySet<bool> *)0x0;
    }
    FStack_8a0.Data = (FScriptContainerElement *)0x0;
    uStack_898 = 0;
    uVar100 = (pFStack_990->EdgeRefCounts).RefCounts.CurBlockUsed +
              (pFStack_990->EdgeRefCounts).RefCounts.CurBlock * 0x200;
    uVar83 = (uint)uStack_8d8;
    if ((int)uVar100 < 1) {
      if ((int)uVar100 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar100);
      }
    }
    else {
      iVar48 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (uVar83,uVar83,uVar100,&FStack_8a0,(int *)&uStack_898,
                          (int *)((longlong)&uStack_898 + 4));
      memset(FStack_8a0.Data + iVar48,0,(longlong)(int)uVar100);
    }
    ppFStack_500 = &pFStack_990;
    TStack_590.DataPtr = (void **)0x0;
    ppTStack_4f8 = &pTStack_878;
    TStack_590.ArrayNum = 0;
    pFStack_4f0 = &FStack_8a0;
    pcStack_580 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l110::<lambda_6>,void,int>
                  ::Call;
    pppFStack_578 = &ppFStack_500;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               (pFStack_990->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
               (pFStack_990->EdgeRefCounts).RefCounts.CurBlockUsed,uVar83,
               (TFunctionRef<void___cdecl(int)> *)&pcStack_580,<Stack_997,None,&TStack_590);
    uVar91 = 0;
    if (0 < (int)uStack_898) {
      lVar101 = 0;
      do {
        uVar99 = (uint)uVar91;
        uVar100 = 0;
        if ((int)uVar99 < (int)uStack_898) {
          uVar100 = ~uVar99 >> 0x1f;
        }
        if (uVar100 == 0) {
          bVar47 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar47) {
            pcVar68 = (code *)swi(3);
            (*pcVar68)();
            return;
          }
        }
        if (FStack_8a0.Data[lVar101] != (FScriptContainerElement)0x0) {
          uVar100 = *(uint *)(*(longlong *)
                               ((pFStack_990->Edges).Blocks.AllocatorInstance.Data +
                               (uVar91 >> 9) * 8) + 8 + (ulonglong)(uVar99 & 0x1ff) * 0x10);
          lVar79 = *(longlong *)
                    ((pFStack_990->TriangleEdges).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar100 >> 9) * 8);
          uStack_730 = *(undefined8 *)(lVar79 + (ulonglong)(uVar100 & 0x1ff) * 0xc);
          uStack_728 = *(uint *)(lVar79 + 8 + (ulonglong)(uVar100 & 0x1ff) * 0xc);
          if ((uint)uStack_730 == uVar99) {
            uVar82 = 0;
LAB_1443d36db:
            uVar96 = 0;
            if ((int)uVar100 < TStack_848.ArrayNum) {
              uVar96 = ~uVar100 >> 0x1f;
            }
            if (uVar96 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            TMeshAttributesRef<int,TArrayView<FEdgeID,int>_>::operator[]
                      (&pFVar85->TriangleEdges,&TStack_570,
                       *(int *)(TStack_848.AllocatorInstance.Data + (longlong)(int)uVar100 * 4));
            if ((-1 < (int)uVar82) && ((int)uVar82 < TStack_570.ArrayNum)) {
              uVar100 = 0;
              if ((int)uVar82 < TStack_570.ArrayNum) {
                uVar100 = ~uVar82 >> 0x1f;
              }
              if (uVar100 == 0) {
                bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar47) {
                  pcVar68 = (code *)swi(3);
                  (*pcVar68)();
                  return;
                }
              }
              FVar11 = TStack_570.DataPtr[(int)uVar82];
              this_03 = TMeshAttributeArraySet<bool>::GetArrayForChannel(this_06,0);
              pbVar72 = TMeshAttributeArrayBase<bool>::GetElementBase(this_03,(int)FVar11);
              *pbVar72 = true;
              goto LAB_1443d3833;
            }
            iVar48 = 0x480;
            pcVar102 = "OutTriEdges.IsValidIndex(EdgeTriSubIdx)";
            paVar81 = &bGEnsureHasExecuted<1814710123071800448>;
          }
          else {
            uVar82 = uVar83;
            if ((uint)((ulonglong)uStack_730 >> 0x20) == uVar99) goto LAB_1443d36db;
            if (uStack_728 == uVar99) {
              uVar82 = 2;
              goto LAB_1443d36db;
            }
            pcVar102 = "EdgeTriSubIdx != IndexConstants::InvalidID";
            paVar81 = &bGEnsureHasExecuted<1814710123071800441>;
            iVar48 = 0x479;
          }
          bVar47 = UE::Assert::Private::ExecCheckImplInternal
                             (paVar81,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\DynamicMeshToMeshDescription.cpp"
                              ,iVar48,pcVar102);
          if (bVar47) {
            pcVar68 = (code *)swi(3);
            (*pcVar68)();
            return;
          }
        }
LAB_1443d3833:
        uVar91 = (ulonglong)(uVar99 + 1);
        lVar101 = lVar101 + 1;
      } while ((int)(uVar99 + 1) < (int)uStack_898);
    }
    if (FStack_8a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_8a0.Data);
    }
  }
  if (bVar29) {
    pFVar92 = (pFStack_990->AttributeSet).Ptr;
    pFVar78 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar92 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar78 = pFVar92;
    }
    iStack_808 = 0;
    iStack_7f4 = 0;
    iStack_7f0 = 0;
    pTStack_900 = (TBitArray<FDefaultBitArrayAllocator> *)
                  &(pFVar78->SkinWeightAttributes).field_0x10;
    iVar48 = *(int *)&(pFVar78->SkinWeightAttributes).field_0x28;
    pTVar93 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)
              &pFVar78->SkinWeightAttributes;
    uStack_804 = uVar83;
    if (iVar48 != 0) {
      puVar98 = *(uint **)&(pFVar78->SkinWeightAttributes).field_0x20;
      if (puVar98 == (uint *)0x0) {
        puVar98 = (uint *)pTStack_900;
      }
      uVar100 = *puVar98;
      iStack_808 = 0;
      iStack_7f0 = 0;
      while (uVar100 == 0) {
        iStack_7f0 = iStack_7f0 + 0x20;
        lVar101 = (longlong)iStack_808;
        iStack_808 = iStack_808 + 1;
        if ((int)(iVar48 + -1 + (iVar48 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_808)
        goto LAB_1443d3939;
        uVar100 = puVar98[lVar101 + 1];
      }
      uStack_804 = -uVar100 & uVar100;
      uVar91 = (ulonglong)uStack_804 * 2 + 1;
      lVar101 = 0x3f;
      if (uVar91 != 0) {
        for (; uVar91 >> lVar101 == 0; lVar101 = lVar101 + -1) {
        }
      }
      TStack_690.Key._4_4_ = (undefined4)lVar101;
      iStack_7f4 = iStack_7f0 + -1 + TStack_690.Key._4_4_;
      if (iVar48 < iStack_7f4) {
LAB_1443d3939:
        iStack_7f4 = iVar48;
      }
    }
    uStack_7f8 = 0xffffffff;
    uVar100 = *(uint *)&(pFVar78->SkinWeightAttributes).field_0x28;
    uStack_908 = CONCAT44(uStack_804,iStack_808);
    bVar76 = (byte)uVar100 & 0x1f;
    iStack_8e8 = *(int *)&(pFVar78->SkinWeightAttributes).field_0x8 -
                 *(int *)&(pFVar78->SkinWeightAttributes).field_0x34;
    uStack_8f8._4_4_ = iStack_7f4;
    uStack_8f8._0_4_ = 0xffffffff;
    uStack_8f0._4_4_ = uStack_7ec;
    uStack_8f0._0_4_ = iStack_7f0;
    TStack_710._padding_._0_4_ = (int)uVar100 >> 5;
    TStack_710._padding_._4_4_ = uVar83 << bVar76;
    TStack_710.UnvisitedBitMask = -1 << bVar76;
    TStack_710.BaseBitIndex = uVar100 & 0xffffffe0;
    uStack_5a8 = CONCAT44(uStack_8e4,iStack_8e8);
    pTStack_918 = pTVar93;
    pTStack_910 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                   *)pTVar93;
    puStack_800 = (undefined1 *)pTStack_900;
    TStack_710.Array = pTStack_900;
    TStack_710.CurrentBitIndex = uVar100;
    pTStack_5d0 = pTVar93;
    TStack_5c8._padding_ = uStack_908;
    TStack_5c8.Array = pTStack_900;
    TStack_5c8._16_8_ = uStack_8f8;
    TStack_5c8._24_8_ = uStack_8f0;
    if ((int)uVar100 < 0) {
      bVar47 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar47) {
        pcVar68 = (code *)swi(3);
        (*pcVar68)();
        return;
      }
    }
    if (uVar100 != *(uint *)&(pFVar78->SkinWeightAttributes).field_0x28) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_710);
    }
    uStack_908 = CONCAT44(TStack_710._padding_._4_4_,(int)TStack_710._padding_);
    uStack_8f8 = CONCAT44(TStack_710.CurrentBitIndex,TStack_710.UnvisitedBitMask);
    uStack_8f0 = CONCAT44(TStack_710._28_4_,TStack_710.BaseBitIndex);
    pTStack_900 = TStack_710.Array;
    pTStack_968 = TStack_710.Array;
    uStack_988 = TStack_710.CurrentBitIndex;
    while( true ) {
      pTVar39 = pTStack_5d0;
      uVar83 = uStack_988;
      if ((int)pTStack_5d0->_padding_ - *(int *)((longlong)&pTStack_5d0[1]._padding_ + 4) !=
          (int)uStack_5a8) {
        uStack_96e = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&uStack_96e);
      }
      lVar101 = (longlong)TStack_5c8.CurrentBitIndex;
      if (((TStack_5c8.CurrentBitIndex == uVar83) && (TStack_5c8.Array == pTStack_968)) &&
         (pTVar39 == pTVar93)) break;
      lVar79 = pTVar39->_padding_;
      pTVar73 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
                 *)TMapBase<FName,FSkinWeightsVertexAttributesRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSkinWeightsVertexAttributesRef,0>_>
                   ::FindChecked((TMapBase<FName,FSkinWeightsVertexAttributesRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSkinWeightsVertexAttributesRef,0>_>
                                  *)&TStack_108,*(FName *)(lVar79 + lVar101 * 0x18));
      pTStack_950 = *(TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> **)
                     (lVar79 + lVar101 * 0x18 + 8);
      uVar83 = 0;
      pTStack_8c8 = pTVar73;
      if (0 < TStack_938.ArrayNum) {
        lVar101 = 0;
        do {
          uVar100 = 0;
          if ((int)uVar83 < TStack_938.ArrayNum) {
            uVar100 = ~uVar83 >> 0x1f;
          }
          if (uVar100 == 0) {
            bVar47 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar47) {
              pcVar68 = (code *)swi(3);
              (*pcVar68)();
              return;
            }
          }
          iVar48 = *(int *)(TStack_938.AllocatorInstance.Data + lVar101);
          if (iVar48 != -1) {
            FStack_258.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
            iStack_220 = 0;
            iStack_21c = 0xc;
            FVar90 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                     (*(longlong *)
                       (*(longlong *)&pTStack_950->field_0x20 + (ulonglong)(uVar83 >> 9) * 8) +
                     (ulonglong)(uVar83 & 0x1ff) * 0x40);
            if ((ForElementType<UE::AnimationCore::FBoneWeight>)&FStack_258 != FVar90) {
              iVar49 = *(int *)((longlong)FVar90 + 0x38);
              if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar90 + 0x30) !=
                  (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                FVar90 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)
                          ((longlong)FVar90 + 0x30);
              }
              iStack_220 = iVar49;
              UE::Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                        (4,2,iVar49,0xc,&FStack_258,iVar49,&iStack_21c);
              _Dst = (ForElementType<UE::AnimationCore::FBoneWeight>)&FStack_258;
              if (FStack_258.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                _Dst = FStack_258.SecondaryData;
              }
              if (iVar49 != 0) {
                memcpy((void *)_Dst,(void *)FVar90,(longlong)iVar49 << 2);
              }
            }
            pFVar14 = ((TMeshAttributesRef<FVertexID,TArrayAttribute<int>_> *)&pTVar73->field_0x0)->
                      ArrayPtr;
            if ((int)pFVar14[2].Type < 1) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            this_08 = pFVar14 + 1;
            if ((FMeshAttributeArraySetBase *)pFVar14[2]._padding_ !=
                (FMeshAttributeArraySetBase *)0x0) {
              this_08 = (FMeshAttributeArraySetBase *)pFVar14[2]._padding_;
            }
            TAttributeArrayContainer<int>::SetElementSize
                      ((TAttributeArrayContainer<int> *)this_08,&TStack_358,iVar48,iStack_220,true,
                       false);
            uVar100 = 0;
            if (0 < iStack_220) {
              lVar79 = 0;
              do {
                uVar99 = 0;
                if ((int)uVar100 < iStack_220) {
                  uVar99 = ~uVar100 >> 0x1f;
                }
                if (uVar99 == 0) {
                  bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar47) {
                    pcVar68 = (code *)swi(3);
                    (*pcVar68)();
                    return;
                  }
                }
                FVar90 = (ForElementType<UE::AnimationCore::FBoneWeight>)&FStack_258;
                if (FStack_258.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0)
                {
                  FVar90 = FStack_258.SecondaryData;
                }
                uVar7 = *(undefined2 *)(lVar79 + (longlong)FVar90);
                uVar8 = *(undefined2 *)(lVar79 + 2 + (longlong)FVar90);
                this_04 = TAttributeArrayContainer<int>::Get
                                    ((TAttributeArrayContainer<int> *)this_08,&TStack_368,iVar48);
                piVar61 = TArrayView<int,int>::operator[](this_04,uVar100);
                uVar100 = uVar100 + 1;
                lVar79 = lVar79 + 4;
                *piVar61 = CONCAT22(uVar7,uVar8);
                pTVar73 = pTStack_8c8;
              } while ((int)uVar100 < iStack_220);
            }
            if (FStack_258.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FMemory::Free((void *)FStack_258.SecondaryData);
            }
          }
          uVar83 = uVar83 + 1;
          lVar101 = lVar101 + 4;
        } while ((int)uVar83 < TStack_938.ArrayNum);
      }
      TStack_5c8.UnvisitedBitMask = TStack_5c8.UnvisitedBitMask & ~TStack_5c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5c8);
      pTVar93 = pTStack_918;
    }
    uVar83 = (uint)uStack_8d8;
  }
  if (cStack_996 != '\0') {
    pFVar92 = (pFStack_990->AttributeSet).Ptr;
    pFVar78 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar92 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar78 = pFVar92;
    }
    iVar49 = 0;
    iVar97 = 0;
    pTStack_900 = (TBitArray<FDefaultBitArrayAllocator> *)
                  &(pFVar78->MorphTargetAttributes).field_0x10;
    iVar48 = *(int *)&(pFVar78->MorphTargetAttributes).field_0x28;
    pTVar73 = &pFVar78->MorphTargetAttributes;
    TStack_5f8.CurrentBitIndex = 0;
    if (iVar48 != 0) {
      puVar98 = *(uint **)&(pFVar78->MorphTargetAttributes).field_0x20;
      if (puVar98 == (uint *)0x0) {
        puVar98 = (uint *)pTStack_900;
      }
      uVar100 = *puVar98;
      while (uVar100 == 0) {
        lVar101 = (longlong)iVar49;
        iVar97 = iVar97 + 0x20;
        iVar49 = iVar49 + 1;
        TStack_5f8.CurrentBitIndex = iVar48;
        if ((int)(iVar48 + -1 + (iVar48 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar49) goto LAB_1443d3e00;
        uVar100 = puVar98[lVar101 + 1];
      }
      uVar83 = -uVar100 & uVar100;
      uVar91 = (ulonglong)uVar83 * 2 + 1;
      lVar101 = 0x3f;
      if (uVar91 != 0) {
        for (; uVar91 >> lVar101 == 0; lVar101 = lVar101 + -1) {
        }
      }
      TStack_690.Value._4_4_ = (int)lVar101;
      TStack_5f8.CurrentBitIndex = iVar97 + -1 + TStack_690.Value._4_4_;
      if (iVar48 < TStack_5f8.CurrentBitIndex) {
        TStack_5f8.CurrentBitIndex = iVar48;
      }
    }
LAB_1443d3e00:
    puVar2 = &(pFVar78->MorphTargetAttributes).field_0x10;
    iStack_8e8 = *(int *)&(pFVar78->MorphTargetAttributes).field_0x8 -
                 *(int *)&(pFVar78->MorphTargetAttributes).field_0x34;
    uVar100 = *(uint *)&(pFVar78->MorphTargetAttributes).field_0x28;
    uStack_908 = CONCAT44(uVar83,iVar49);
    uVar83 = uVar100 & 0xffffffe0;
    uStack_8f8 = CONCAT44(TStack_5f8.CurrentBitIndex,0xffffffff);
    uStack_8f0 = CONCAT44(uStack_2ec,iVar97);
    TStack_5f8._padding_ = uStack_908;
    iVar48 = (int)uVar100 >> 5;
    uStack_5d8 = CONCAT44(uStack_8e4,iStack_8e8);
    TStack_5f8.UnvisitedBitMask = 0xffffffff;
    TStack_5f8._24_8_ = uStack_8f0;
    pTStack_910 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                   *)pTVar73;
    pTStack_8c8 = pTVar73;
    pTStack_600 = pTVar73;
    TStack_5f8.Array = pTStack_900;
    if ((int)uVar100 < 0) {
      bVar47 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar47) {
        pcVar68 = (code *)swi(3);
        (*pcVar68)();
        return;
      }
    }
    uVar99 = *(uint *)&(pFVar78->MorphTargetAttributes).field_0x28;
    if (uVar100 != uVar99) {
      puVar15 = *(undefined1 **)&(pFVar78->MorphTargetAttributes).field_0x20;
      puVar95 = puVar2;
      if (puVar15 != (undefined1 *)0x0) {
        puVar95 = puVar15;
      }
      uVar100 = -1 << ((byte)uVar100 & 0x1f) & *(uint *)(puVar95 + (longlong)iVar48 * 4);
      while (uVar100 == 0) {
        lVar101 = (longlong)iVar48;
        uVar83 = uVar83 + 0x20;
        iVar48 = iVar48 + 1;
        uVar100 = uVar99;
        if ((int)((uVar99 - 1) + ((int)(uVar99 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar48)
        goto LAB_1443d3f23;
        uVar100 = *(uint *)(puVar95 + lVar101 * 4 + 4);
      }
      uVar91 = (ulonglong)(-uVar100 & uVar100) * 2 + 1;
      lVar101 = 0x3f;
      if (uVar91 != 0) {
        for (; uVar91 >> lVar101 == 0; lVar101 = lVar101 + -1) {
        }
      }
      TStack_690.Value._0_4_ = (int)lVar101;
      uVar100 = (int)TStack_690.Value + -1 + uVar83;
      if ((int)uVar99 < (int)uVar100) {
        uVar100 = uVar99;
      }
    }
LAB_1443d3f23:
    while( true ) {
      pTVar38 = pTStack_600;
      if (*(int *)&pTStack_600->field_0x8 - *(int *)&pTStack_600->field_0x34 != (int)uStack_5d8) {
        <Stack_997 = (<lambda_1>)0x0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&<Stack_997);
      }
      lVar101 = (longlong)TStack_5f8.CurrentBitIndex;
      if (((TStack_5f8.CurrentBitIndex == uVar100) &&
          (TStack_5f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar38 == pTVar73)) break;
      pFVar14 = ((TMeshAttributesRef<FVertexID,TArrayAttribute<int>_> *)&pTVar38->field_0x0)->
                ArrayPtr;
      pTVar74 = TMapBase<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>,0>_>
                ::FindChecked((TMapBase<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>,0>_>
                               *)&TStack_158,(FName)pFVar14[lVar101]._padding_);
      lVar101 = *(longlong *)&pFVar14[lVar101].Type;
      uVar83 = 0;
      if (0 < TStack_938.ArrayNum) {
        lVar79 = 0;
        iVar48 = TStack_938.ArrayNum;
        do {
          uVar99 = 0;
          if ((int)uVar83 < iVar48) {
            uVar99 = ~uVar83 >> 0x1f;
          }
          if (uVar99 == 0) {
            bVar47 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar47) {
              pcVar68 = (code *)swi(3);
              (*pcVar68)();
              return;
            }
            iVar48 = TStack_938.ArrayNum;
          }
          iVar49 = *(int *)(TStack_938.AllocatorInstance.Data + lVar79);
          if (iVar49 != -1) {
            lVar16 = *(longlong *)(lVar101 + 0x20);
            uVar99 = uVar83 * 3;
            uVar5 = *(undefined4 *)
                     (*(longlong *)(lVar16 + (ulonglong)(uVar99 >> 9) * 8) +
                     (ulonglong)(uVar99 & 0x1ff) * 4);
            uVar9 = *(undefined4 *)
                     (*(longlong *)(lVar16 + (ulonglong)(uVar99 + 1 >> 9) * 8) +
                     (ulonglong)(uVar99 + 1 & 0x1ff) * 4);
            fVar6 = *(float *)(*(longlong *)(lVar16 + (ulonglong)(uVar99 + 2 >> 9) * 8) +
                              (ulonglong)(uVar99 + 2 & 0x1ff) * 4);
            fStack_4e0 = fVar6;
            this_05 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                                 pTVar74->ArrayPtr,0);
            pTVar75 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                (this_05,iVar49);
            uStack_4e8 = CONCAT44(uVar9,uVar5);
            *(ulonglong *)&pTVar75->field0_0x0 = CONCAT44(uVar9,uVar5);
            (pTVar75->field0_0x0)._s_0.Z = fVar6;
            iVar48 = TStack_938.ArrayNum;
          }
          uVar83 = uVar83 + 1;
          lVar79 = lVar79 + 4;
        } while ((int)uVar83 < iVar48);
      }
      TStack_5f8.UnvisitedBitMask = TStack_5f8.UnvisitedBitMask & ~TStack_5f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5f8);
      pTVar73 = pTStack_8c8;
    }
  }
  ((FStack_7e8.MeshDescription)->VertexInstanceToTriangles).bSuspended = false;
  ((FStack_7e8.MeshDescription)->VertexInstanceToTriangles).bEverythingStale = true;
  ((FStack_7e8.MeshDescription)->EdgeToTriangles).bSuspended = false;
  ((FStack_7e8.MeshDescription)->EdgeToTriangles).bEverythingStale = true;
  ((FStack_7e8.MeshDescription)->PolygonToTriangles).bSuspended = false;
  ((FStack_7e8.MeshDescription)->PolygonToTriangles).bEverythingStale = true;
  ((FStack_7e8.MeshDescription)->PolygonGroupToPolygons).bSuspended = false;
  ((FStack_7e8.MeshDescription)->PolygonGroupToPolygons).bEverythingStale = true;
  ((FStack_7e8.MeshDescription)->PolygonGroupToTriangles).bSuspended = false;
  ((FStack_7e8.MeshDescription)->PolygonGroupToTriangles).bEverythingStale = true;
  ((FStack_7e8.MeshDescription)->UVToTriangles).bSuspended = false;
  ((FStack_7e8.MeshDescription)->UVToTriangles).bEverythingStale = true;
  if (TStack_848.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_848.AllocatorInstance.Data);
  }
  if (FStack_820.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_820.Data);
  }
  if (pcStack_2b8 != (code *)0x0) {
    plVar67 = (longlong *)&uStack_2a8;
    if (plStack_290 != (longlong *)0x0) {
      plVar67 = plStack_290;
    }
    (**(code **)(*plVar67 + 0x10))();
  }
  if (pcStack_2e8 != (code *)0x0) {
    plVar67 = (longlong *)&uStack_2d8;
    if (plStack_2c0 != (longlong *)0x0) {
      plVar67 = plStack_2c0;
    }
    (**(code **)(*plVar67 + 0x10))();
  }
  if (FStack_980.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_980.Data);
  }
  DestructItems<TArray<FUVID,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FUVID,TSizedDefaultAllocator<32>_> *)FStack_8c0.Data,(int)uStack_8b8);
  if ((TArray<FUVID,TSizedDefaultAllocator<32>_> *)FStack_8c0.Data !=
      (TArray<FUVID,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(FStack_8c0.Data);
  }
  if (TStack_938.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_938.AllocatorInstance.Data);
  }
  TStack_158.HashSize = 0;
  if (TStack_158.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_158.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_158.Elements);
  TStack_108.HashSize = 0;
  if (TStack_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_108.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FSkinWeightsVertexAttributesRef>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FSkinWeightsVertexAttributesRef>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_108.Elements);
  if (FStack_7e8.TempUVBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7e8.TempUVBuffer.AllocatorInstance.Data);
  }
  if (FStack_7e8.TempBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7e8.TempBuffer.AllocatorInstance.Data);
  }
  if (FStack_7e8.UVCoordinateLayers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7e8.UVCoordinateLayers.AllocatorInstance.Data);
  }
  if (FStack_948.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_948.Data);
  }
  return;
}

// ConvertPolygroupLayers @ 1443cf1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDynamicMeshToMeshDescription::ConvertPolygroupLayers
          (FDynamicMeshToMeshDescription *this,FDynamicMesh3 *param_1,FMeshDescription *param_2,
          TArray<FTriangleID,TSizedDefaultAllocator<32>_> *param_3)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  FMeshAttributeArraySetBase *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  longlong lVar9;
  TArray<FTriangleID,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong *plVar11;
  FName FVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  FMeshElementContainer *pFVar16;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar17;
  FAttributesSetEntry *pFVar18;
  FString *pFVar19;
  FName *pFVar20;
  FDynamicMeshAttributeSet *pFVar21;
  TMeshAttributeArrayBase<int> *this_00;
  int *piVar22;
  ForElementType<FSetElementId> FVar23;
  ForElementType<FSetElementId> FVar24;
  FDynamicMeshAttributeSet *pFVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  FDynamicMeshAttributeSet *pFVar29;
  uint uVar30;
  TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
  *this_01;
  undefined1 auStackY_178 [32];
  FName local_140;
  uint local_138;
  uint local_134;
  FDynamicMeshAttributeSet *local_130;
  FDynamicMesh3 *local_128;
  FName local_120;
  TDynamicMeshScalarTriangleAttribute<int> *local_118;
  undefined1 local_110 [8];
  FName local_108;
  TArray<FTriangleID,TSizedDefaultAllocator<32>_> *local_100;
  TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
  *local_f8;
  FString local_f0;
  FName *local_e0;
  FDynamicMeshAttributeSet **local_d8;
  FName local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  uVar15 = 0;
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    return;
  }
  local_128 = param_1;
  local_100 = param_3;
  pFVar16 = FMeshElementChannels::Get(param_2->TriangleElements,0);
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  this_01 = (TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             *)&pFVar16->Attributes;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_f8 = this_01;
  uVar30 = uVar15;
  uVar28 = uVar15;
LAB_1443cf26a:
  pFVar29 = (FDynamicMeshAttributeSet *)0x0;
  local_134 = uVar15;
  iVar14 = (**(code **)(((param_1->AttributeSet).Ptr)->_padding_ + 200))();
  if (iVar14 <= (int)uVar15) {
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    return;
  }
  pFVar25 = (param_1->AttributeSet).Ptr;
  pFVar21 = pFVar29;
  if (pFVar25 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar21 = pFVar25;
  }
  pTVar17 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer(pFVar21,uVar15);
  local_140.ComparisonIndex.Value = *(uint *)&pTVar17->field_0x8;
  local_140.Number = *(uint *)&pTVar17->field_0xc;
  local_118 = pTVar17;
LAB_1443cf2b0:
  FVar12 = local_140;
  if (local_140 != (FName)0x0) {
    uVar15 = ::GetTypeHash(local_140.ComparisonIndex.Value);
    if (local_98.Elements._8_4_ == local_98.Elements._52_4_) goto LAB_1443cf318;
    FVar23 = (ForElementType<FSetElementId>)&local_98.Hash;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar23 = local_98.Hash.SecondaryData;
    }
    iVar14 = *(int *)((longlong)FVar23 +
                     (ulonglong)(local_98.HashSize - 1U & FVar12.Number + uVar15) * 4);
    while( true ) {
      if (iVar14 == -1) goto LAB_1443cf318;
      if (*(FName *)(local_98.Elements._0_8_ + (longlong)iVar14 * 0x10) == FVar12) break;
      iVar14 = *(int *)(local_98.Elements._0_8_ + 8 + (longlong)iVar14 * 0x10);
    }
  }
  if (*(longlong *)&pTVar17->field_0x8 == 0) {
    uVar30 = uVar30 | 1;
    pFVar19 = ::FString::FString(&local_b8,L"Groups");
  }
  else {
    uVar30 = uVar30 | 2;
    pFVar19 = ::FName::ToString(&local_140,&local_c8);
  }
  pFVar6 = (pFVar19->Data).AllocatorInstance.Data;
  (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar19->Data).ArrayNum = 0;
  (pFVar19->Data).ArrayMax = 0;
  if (((uVar30 & 2) != 0) &&
     (uVar30 = uVar30 & 0xfffffffd,
     local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (((uVar30 & 1) != 0) &&
     (uVar30 = uVar30 & 0xfffffffe,
     local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  uVar28 = uVar28 + 1;
  ::FString::PrintfImpl(&local_f0,L"%s_%d");
  iVar14 = local_f0.Data.ArrayNum + -1;
  if (local_f0.Data.ArrayNum == 0) {
    iVar14 = 0;
  }
  pFVar20 = ::FName::FName(&local_d0,iVar14,(wchar_t *)local_f0.Data.AllocatorInstance.Data,
                           FNAME_Add);
  local_140 = *pFVar20;
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  goto LAB_1443cf2b0;
LAB_1443cf318:
  local_138 = uVar28;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&local_98,(FName *)local_110,(bool *)&local_140);
  FVar12 = local_140;
  uVar15 = ::GetTypeHash(local_140.ComparisonIndex.Value);
  param_1 = local_128;
  if (*(int *)&(this_01->Elements).field_0x8 != *(int *)&(this_01->Elements).field_0x34) {
    FVar23 = (this_01->Hash).SecondaryData;
    FVar24 = (ForElementType<FSetElementId>)&this_01->Hash;
    if (FVar23 != (ForElementType<FSetElementId>)0x0) {
      FVar24 = FVar23;
    }
    iVar14 = *(int *)((longlong)FVar24 +
                     (ulonglong)(this_01->HashSize - 1U & FVar12.Number + uVar15) * 4);
    if (iVar14 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this_01->Elements + (longlong)iVar14 * 0x18) == FVar12)
        goto LAB_1443cf5d7;
        iVar14 = *(int *)(*(longlong *)&this_01->Elements + 0x10 + (longlong)iVar14 * 0x18);
      } while (iVar14 != -1);
    }
  }
  local_120 = local_140;
  pFVar18 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)this_01,local_140);
  FVar12 = local_120;
  if (pFVar18 != (FAttributesSetEntry *)0x0) {
    pFVar5 = (pFVar18->Ptr).Ptr;
    if ((pFVar5->Type == 4) && (pFVar5->Extent == 1)) {
      (**(code **)(pFVar5->_padding_ + 0x70))(pFVar5,1);
      ((pFVar18->Ptr).Ptr)->Flags = AutoGenerated;
      goto LAB_1443cf5d7;
    }
    local_108 = local_120;
    if (*(int *)&(this_01->Elements).field_0x8 != *(int *)&(this_01->Elements).field_0x34) {
      uVar15 = ::GetTypeHash(local_120.ComparisonIndex.Value);
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>(this_01,FVar12.Number + uVar15,&local_108);
    }
  }
  uVar2 = *(undefined4 *)&this_01[1].Elements;
  local_130 = (FDynamicMeshAttributeSet *)0x0;
  pFVar21 = ::operator_new(0x48);
  pFVar25 = pFVar29;
  if (pFVar21 != (FDynamicMeshAttributeSet *)0x0) {
    *(undefined4 *)&pFVar21->_padding_ = 4;
    *(undefined4 *)((longlong)&pFVar21->_padding_ + 4) = 1;
    *(undefined4 *)&pFVar21->_padding_ = uVar2;
    *(undefined4 *)((longlong)&pFVar21->_padding_ + 4) = 2;
    pFVar21->_padding_ = (longlong)&___7__TMeshAttributeArraySet_H__6B_;
    (pFVar21->NormalLayers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar21->NormalLayers).Array.ArrayNum = 0;
    *(undefined8 *)&(pFVar21->NormalLayers).Array.ArrayMax = 1;
    TMeshAttributeArraySet<int>::SetNumChannels((TMeshAttributeArraySet<int> *)pFVar21,1);
    pFVar25 = pFVar21;
  }
  pFVar21 = local_130;
  if (local_130 != (FDynamicMeshAttributeSet *)0x0) {
    plVar11 = &local_130->_padding_;
    local_130 = pFVar25;
    (**(code **)*plVar11)(pFVar21,1);
    pFVar25 = local_130;
  }
  local_130 = pFVar25;
  local_e0 = &local_120;
  local_d8 = &local_130;
  TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FAttributesSetEntry_&&>_>
            (this_01,(TPairInitializer<FName_const_&,FAttributesSetEntry_&&> *)(local_110 + 4),
             (bool *)&local_e0);
  if (local_130 != (FDynamicMeshAttributeSet *)0x0) {
    (**(code **)local_130->_padding_)(local_130,1);
  }
LAB_1443cf5d7:
  pFVar18 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)this_01,local_140);
  if (((pFVar18 == (FAttributesSetEntry *)0x0) ||
      (pFVar25 = (FDynamicMeshAttributeSet *)(pFVar18->Ptr).Ptr, *(uint *)&pFVar25->_padding_ != 4))
     || (*(uint *)((longlong)&pFVar25->_padding_ + 4) != 1)) {
    pFVar25 = pFVar29;
  }
  if (pFVar25 == (FDynamicMeshAttributeSet *)0x0) {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1814710123071800536>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\DynamicMeshToMeshDescription.cpp"
                        ,0x4d8,"Attribute.IsValid()");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (2 < (byte)LogTemp._0_1_) {
      ::FName::ToString(&local_140,&local_a8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        uVar15 = local_134 + 1;
        goto LAB_1443cf26a;
      }
    }
  }
  else {
    iVar14 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
             (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
    if (((iVar14 != 0) &&
        (pFVar6 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
        0xfffd < (ushort)(**(short **)pFVar6 - 1U))) &&
       (pFVar29 = (FDynamicMeshAttributeSet *)&DAT_00000001, 1 < iVar14)) {
      do {
        sVar1 = *(short *)(*(longlong *)(pFVar6 + ((ulonglong)pFVar29 >> 9) * 8) +
                          (ulonglong)((uint)pFVar29 & 0x1ff) * 2);
        if ((sVar1 != 0) && (sVar1 != -1)) break;
        uVar15 = (uint)pFVar29 + 1;
        pFVar29 = (FDynamicMeshAttributeSet *)(ulonglong)uVar15;
      } while ((int)uVar15 < iVar14);
    }
    uVar15 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
    uVar3 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    iVar26 = (int)pFVar29;
    pTVar17 = local_118;
    pTVar10 = local_100;
    while (local_100 = pTVar10, uVar28 = local_138, iVar26 != uVar15 * 0x200 + uVar3) {
      uVar27 = (uint)pFVar29;
      uVar28 = 0;
      if ((int)uVar27 < pTVar10->ArrayNum) {
        uVar28 = ~uVar27 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar26 = *(int *)((pTVar10->AllocatorInstance).Data + (longlong)(int)uVar27 * 4);
      iVar4 = *(int *)(*(longlong *)
                        (*(longlong *)&pTVar17->field_0x20 + ((ulonglong)pFVar29 >> 9) * 8) +
                      (ulonglong)(uVar27 & 0x1ff) * 4);
      this_00 = TMeshAttributeArraySet<int>::GetArrayForChannel
                          ((TMeshAttributeArraySet<int> *)pFVar25,0);
      piVar22 = TMeshAttributeArrayBase<int>::GetElementBase(this_00,iVar26);
      pFVar29 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar27 + 1);
      *piVar22 = iVar4;
      if ((int)(uVar27 + 1) < iVar14) {
        do {
          lVar9 = (ulonglong)((uint)pFVar29 & 0x1ff) * 2;
          lVar7 = *(longlong *)
                   ((local_128->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   ((ulonglong)pFVar29 >> 9) * 8);
          pTVar17 = local_118;
          if ((*(short *)(lVar9 + lVar7) != 0) && (*(short *)(lVar9 + lVar7) != -1)) break;
          uVar28 = (uint)pFVar29 + 1;
          pFVar29 = (FDynamicMeshAttributeSet *)(ulonglong)uVar28;
        } while ((int)uVar28 < iVar14);
      }
      this_01 = local_f8;
      param_1 = local_128;
      pTVar10 = local_100;
      iVar26 = (int)pFVar29;
    }
  }
  uVar15 = local_134 + 1;
  goto LAB_1443cf26a;
}

// ConvertWeightLayers @ 1443cff90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDynamicMeshToMeshDescription::ConvertWeightLayers
          (FDynamicMeshToMeshDescription *this,FDynamicMesh3 *param_1,FMeshDescription *param_2,
          TArray<FVertexID,TSizedDefaultAllocator<32>_> *param_3)

{
  float fVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  FMeshAttributeArraySetBase *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  TArray<FVertexID,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong *plVar10;
  FName FVar11;
  TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar12;
  int iVar13;
  uint uVar14;
  FMeshElementContainer *pFVar15;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar16;
  FAttributesSetEntry *pFVar17;
  FString *pFVar18;
  FName *pFVar19;
  FDynamicMeshAttributeSet *pFVar20;
  TMeshAttributeArrayBase<float> *this_01;
  float *pfVar21;
  ForElementType<FSetElementId> FVar22;
  ForElementType<FSetElementId> FVar23;
  ulonglong uVar24;
  FDynamicMeshAttributeSet *pFVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  FDynamicMeshAttributeSet *pFVar29;
  uint uVar30;
  undefined1 auStackY_188 [32];
  FName local_150;
  uint local_148;
  uint local_144;
  FDynamicMeshAttributeSet *local_140;
  TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
  *local_138;
  FName local_130;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *local_128;
  undefined1 local_120 [8];
  FName local_118;
  TArray<FVertexID,TSizedDefaultAllocator<32>_> *local_110;
  FString local_108;
  FName *local_f8;
  FDynamicMeshAttributeSet **local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar14 = 0;
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    return;
  }
  local_110 = param_3;
  pFVar15 = FMeshElementChannels::Get(param_2->VertexElements,0);
  local_138 = (TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
               *)&pFVar15->Attributes;
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  uVar30 = uVar14;
  uVar28 = uVar14;
LAB_1443d002d:
  pFVar29 = (FDynamicMeshAttributeSet *)0x0;
  local_144 = uVar14;
  iVar13 = (**(code **)(((param_1->AttributeSet).Ptr)->_padding_ + 0xd8))();
  if (iVar13 <= (int)uVar14) {
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
    return;
  }
  pFVar25 = (param_1->AttributeSet).Ptr;
  pFVar20 = pFVar29;
  if (pFVar25 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar20 = pFVar25;
  }
  pTVar16 = UE::Geometry::FDynamicMeshAttributeSet::GetWeightLayer(pFVar20,uVar14);
  local_150 = (FName)pTVar16->_padding_;
  local_128 = pTVar16;
LAB_1443d0072:
  FVar11 = local_150;
  if (local_150 != (FName)0x0) {
    uVar14 = ::GetTypeHash(local_150.ComparisonIndex.Value);
    if (local_a8.Elements._8_4_ == local_a8.Elements._52_4_) goto LAB_1443d00d8;
    FVar22 = (ForElementType<FSetElementId>)&local_a8.Hash;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar22 = local_a8.Hash.SecondaryData;
    }
    iVar13 = *(int *)((longlong)FVar22 +
                     (ulonglong)(local_a8.HashSize - 1U & FVar11.Number + uVar14) * 4);
    while( true ) {
      if (iVar13 == -1) goto LAB_1443d00d8;
      if (*(FName *)(local_a8.Elements._0_8_ + (longlong)iVar13 * 0x10) == FVar11) break;
      iVar13 = *(int *)(local_a8.Elements._0_8_ + 8 + (longlong)iVar13 * 0x10);
    }
  }
  if (pTVar16->_padding_ == 0) {
    uVar30 = uVar30 | 1;
    pFVar18 = ::FString::FString(&local_d0,L"Weights");
  }
  else {
    uVar30 = uVar30 | 2;
    pFVar18 = ::FName::ToString(&local_150,&local_e0);
  }
  pFVar6 = (pFVar18->Data).AllocatorInstance.Data;
  (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar18->Data).ArrayNum = 0;
  (pFVar18->Data).ArrayMax = 0;
  if (((uVar30 & 2) != 0) &&
     (uVar30 = uVar30 & 0xfffffffd,
     local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (((uVar30 & 1) != 0) &&
     (uVar30 = uVar30 & 0xfffffffe,
     local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  uVar28 = uVar28 + 1;
  ::FString::PrintfImpl(&local_108,L"%s_%d");
  iVar13 = local_108.Data.ArrayNum + -1;
  if (local_108.Data.ArrayNum == 0) {
    iVar13 = 0;
  }
  pFVar19 = ::FName::FName(&local_e8,iVar13,(wchar_t *)local_108.Data.AllocatorInstance.Data,
                           FNAME_Add);
  local_150 = *pFVar19;
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  goto LAB_1443d0072;
LAB_1443d00d8:
  local_148 = uVar28;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&local_a8,(FName *)local_120,(bool *)&local_150);
  FVar11 = local_150;
  uVar14 = ::GetTypeHash(local_150.ComparisonIndex.Value);
  this_00 = local_138;
  if (*(int *)&(local_138->Elements).field_0x8 != *(int *)&(local_138->Elements).field_0x34) {
    FVar22 = (local_138->Hash).SecondaryData;
    FVar23 = (ForElementType<FSetElementId>)&local_138->Hash;
    if (FVar22 != (ForElementType<FSetElementId>)0x0) {
      FVar23 = FVar22;
    }
    iVar13 = *(int *)((longlong)FVar23 +
                     (ulonglong)(local_138->HashSize - 1U & FVar11.Number + uVar14) * 4);
    if (iVar13 != -1) {
      do {
        if (*(FName *)(*(longlong *)&local_138->Elements + (longlong)iVar13 * 0x18) == FVar11)
        goto LAB_1443d0384;
        iVar13 = *(int *)(*(longlong *)&local_138->Elements + 0x10 + (longlong)iVar13 * 0x18);
      } while (iVar13 != -1);
    }
  }
  local_130 = local_150;
  pFVar17 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)local_138,local_150);
  FVar11 = local_130;
  if (pFVar17 != (FAttributesSetEntry *)0x0) {
    pFVar5 = (pFVar17->Ptr).Ptr;
    if ((pFVar5->Type == 3) && (pFVar5->Extent == 1)) {
      (**(code **)(pFVar5->_padding_ + 0x70))(pFVar5,1);
      ((pFVar17->Ptr).Ptr)->Flags = AutoGenerated;
      goto LAB_1443d0384;
    }
    local_118 = local_130;
    if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
      uVar14 = ::GetTypeHash(local_130.ComparisonIndex.Value);
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>(this_00,FVar11.Number + uVar14,&local_118);
    }
  }
  uVar3 = *(undefined4 *)&this_00[1].Elements;
  local_140 = (FDynamicMeshAttributeSet *)0x0;
  pFVar20 = ::operator_new(0x48);
  pFVar25 = pFVar29;
  if (pFVar20 != (FDynamicMeshAttributeSet *)0x0) {
    *(undefined4 *)&pFVar20->_padding_ = 3;
    *(undefined4 *)((longlong)&pFVar20->_padding_ + 4) = 1;
    *(undefined4 *)&pFVar20->_padding_ = uVar3;
    *(undefined4 *)((longlong)&pFVar20->_padding_ + 4) = 2;
    pFVar20->_padding_ = (longlong)&___7__TMeshAttributeArraySet_M__6B_;
    (pFVar20->NormalLayers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar20->NormalLayers).Array.ArrayNum = 0;
    *(undefined8 *)&(pFVar20->NormalLayers).Array.ArrayMax = 1;
    TMeshAttributeArraySet<float>::SetNumChannels((TMeshAttributeArraySet<float> *)pFVar20,1);
    pFVar25 = pFVar20;
  }
  pFVar20 = local_140;
  if (local_140 != (FDynamicMeshAttributeSet *)0x0) {
    plVar10 = &local_140->_padding_;
    local_140 = pFVar25;
    (**(code **)*plVar10)(pFVar20,1);
    pFVar25 = local_140;
  }
  local_140 = pFVar25;
  local_f8 = &local_130;
  local_f0 = &local_140;
  TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FAttributesSetEntry_&&>_>
            (this_00,(TPairInitializer<FName_const_&,FAttributesSetEntry_&&> *)(local_120 + 4),
             (bool *)&local_f8);
  if (local_140 != (FDynamicMeshAttributeSet *)0x0) {
    (**(code **)local_140->_padding_)(local_140,1);
  }
LAB_1443d0384:
  pFVar17 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)this_00,local_150);
  if (((pFVar17 == (FAttributesSetEntry *)0x0) ||
      (pFVar25 = (FDynamicMeshAttributeSet *)(pFVar17->Ptr).Ptr, *(uint *)&pFVar25->_padding_ != 3))
     || (*(uint *)((longlong)&pFVar25->_padding_ + 4) != 1)) {
    pFVar25 = pFVar29;
  }
  if (pFVar25 == (FDynamicMeshAttributeSet *)0x0) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1814710123071800583>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\DynamicMeshToMeshDescription.cpp"
                        ,0x507,"Attribute.IsValid()");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (2 < (byte)LogTemp._0_1_) {
      ::FName::ToString(&local_150,&local_c0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        uVar14 = local_144 + 1;
        goto LAB_1443d002d;
      }
    }
  }
  else {
    iVar13 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
    if (((iVar13 != 0) &&
        (pFVar6 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
        0xfffd < (ushort)(**(short **)pFVar6 - 1U))) &&
       (pFVar29 = (FDynamicMeshAttributeSet *)&DAT_00000001, 1 < iVar13)) {
      do {
        sVar2 = *(short *)(*(longlong *)(pFVar6 + ((ulonglong)pFVar29 >> 9) * 8) +
                          (ulonglong)((uint)pFVar29 & 0x1ff) * 2);
        if ((sVar2 != 0) && (sVar2 != -1)) break;
        uVar14 = (uint)pFVar29 + 1;
        pFVar29 = (FDynamicMeshAttributeSet *)(ulonglong)uVar14;
      } while ((int)uVar14 < iVar13);
    }
    uVar14 = (param_1->VertexRefCounts).RefCounts.CurBlock;
    uVar4 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
    iVar26 = (int)pFVar29;
    pTVar16 = local_128;
    pTVar9 = local_110;
    while (local_110 = pTVar9, uVar28 = local_148, iVar26 != uVar14 * 0x200 + uVar4) {
      uVar27 = (uint)pFVar29;
      uVar28 = 0;
      if ((int)uVar27 < pTVar9->ArrayNum) {
        uVar28 = ~uVar27 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar26 = *(int *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar27 * 4);
      fVar1 = *(float *)(*(longlong *)
                          ((pTVar16->AttribValues).Blocks.AllocatorInstance.Data +
                          ((ulonglong)pFVar29 >> 9) * 8) + (ulonglong)(uVar27 & 0x1ff) * 4);
      this_01 = TMeshAttributeArraySet<float>::GetArrayForChannel
                          ((TMeshAttributeArraySet<float> *)pFVar25,0);
      pfVar21 = TMeshAttributeArrayBase<float>::GetElementBase(this_01,iVar26);
      pFVar29 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar27 + 1);
      *pfVar21 = fVar1;
      if ((int)(uVar27 + 1) < iVar13) {
        do {
          uVar24 = (ulonglong)((uint)pFVar29 & 0x1ff);
          lVar7 = *(longlong *)
                   ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   ((ulonglong)pFVar29 >> 9) * 8);
          pTVar16 = local_128;
          if ((*(short *)(lVar7 + uVar24 * 2) != 0) && (*(short *)(lVar7 + uVar24 * 2) != -1))
          break;
          uVar28 = (uint)pFVar29 + 1;
          pFVar29 = (FDynamicMeshAttributeSet *)(ulonglong)uVar28;
        } while ((int)uVar28 < iVar13);
      }
      pTVar9 = local_110;
      iVar26 = (int)pFVar29;
    }
  }
  uVar14 = local_144 + 1;
  goto LAB_1443d002d;
}

// Convert_NoAttributes @ 1443d0630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDynamicMeshToMeshDescription::Convert_NoAttributes
          (FDynamicMeshToMeshDescription *this,FDynamicMesh3 *param_1,FMeshDescription *param_2)

{
  FVertexID FVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this_00;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TVector2<float> TVar9;
  FVertexInstanceID FVar10;
  FMeshDescription *pFVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  FMeshElementContainer *pFVar17;
  FMeshElementContainer *pFVar18;
  TMeshAttributeArrayBase<FName> *this_01;
  FName *pFVar19;
  longlong lVar20;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_02;
  TVector<float> *pTVar21;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_03;
  TVector2<float>_u_0 *pTVar22;
  TMeshAttributeArrayBase<int> *this_04;
  int *piVar23;
  ulonglong uVar24;
  ForElementType<FSetElementId> FVar25;
  uint *puVar26;
  uint *puVar27;
  uint uVar28;
  ulonglong uVar29;
  uint *puVar30;
  longlong lVar31;
  uint uVar32;
  longlong lVar33;
  undefined1 auStackY_2d8 [32];
  FVertexInstanceID local_2a4;
  uint local_2a0;
  uint local_29c;
  uint local_298;
  FVertexInstanceID local_290;
  FVertexInstanceID local_28c;
  int local_288;
  int local_284;
  int local_280 [2];
  TArray<FVertexID,TSizedDefaultAllocator<32>_> local_278;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 local_250;
  float local_248;
  float fStack_244;
  FMeshDescriptionBuilder local_238;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined1 local_1a8 [8];
  FVertexInstanceID *local_1a0;
  ulonglong local_198;
  undefined8 local_190;
  undefined4 local_188;
  uint *local_180;
  FVertexInstanceID *local_178;
  FVertexInstanceID *local_170;
  int *local_168;
  undefined8 local_160;
  float local_158;
  double local_140;
  TSet<TTuple<UE::Geometry::FIndex3i,FVertexInstanceID>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,FVertexInstanceID,0>,FDefaultSetAllocator>
  local_138;
  TSet<TTuple<int,FUVID>,TDefaultMapHashableKeyFuncs<int,FUVID,0>,FDefaultSetAllocator> local_e8;
  undefined8 local_98;
  FPolygonGroupID local_90 [2];
  undefined8 local_88;
  FUVID local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  FMeshDescription::Empty(param_2);
  local_238.VertexPositions.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_238.InstanceUVs.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_238.InstanceNormals.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_238.InstanceTangents.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_238.InstanceBiTangentSign.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_238.InstanceColors.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_238.UVCoordinateLayers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.UVCoordinateLayers.ArrayNum = 0;
  local_238.UVCoordinateLayers.ArrayMax = 0;
  local_238.TempBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.TempBuffer.ArrayNum = 0;
  local_238.TempBuffer.ArrayMax = 0;
  local_238.TempUVBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.TempUVBuffer.ArrayNum = 0;
  local_238.TempUVBuffer.ArrayMax = 0;
  local_238.PolyGroups.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_238.GroupMaterialSlotNames.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  FMeshDescriptionBuilder::SetMeshDescription(&local_238,param_2);
  ((local_238.MeshDescription)->VertexInstanceToTriangles).bSuspended = true;
  ((local_238.MeshDescription)->EdgeToTriangles).bSuspended = true;
  ((local_238.MeshDescription)->PolygonToTriangles).bSuspended = true;
  ((local_238.MeshDescription)->PolygonGroupToPolygons).bSuspended = true;
  ((local_238.MeshDescription)->PolygonGroupToTriangles).bSuspended = true;
  ((local_238.MeshDescription)->UVToTriangles).bSuspended = true;
  FMeshDescriptionBuilder::SetNumUVLayers(&local_238,1);
  iVar14 = (param_1->VertexRefCounts).UsedCount;
  if ((((local_238.MeshDescription)->UVElements->Channels).ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("MeshDescription->GetNumUVElementChannels() > UVLayerIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionBuilder.cpp"
                          ,0x76,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar11 = local_238.MeshDescription;
  pFVar17 = FMeshElementChannels::Get((local_238.MeshDescription)->UVElements,0);
  pFVar18 = FMeshElementChannels::Get(pFVar11->UVElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&pFVar17->BitArray,((pFVar18->BitArray).NumBits - pFVar18->NumHoles) + iVar14);
  bVar12 = false;
  if (((this->ConversionOptions).bSetPolyGroups != false) &&
     ((param_1->TriangleGroups).bIsSet != false)) {
    FMeshDescriptionBuilder::EnablePolyGroups(&local_238);
    bVar12 = true;
  }
  local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.ArrayNum = 0;
  local_278.ArrayMax = 0;
  DynamicMeshToMeshDescriptionConversionHelper::ConvertVertices
            (param_1,&local_238,(this->ConversionOptions).bConvertBackToNonManifold,&local_278);
  local_258 = 0;
  pFVar17 = FMeshElementChannels::Get((local_238.MeshDescription)->PolygonGroupElements,0);
  iVar14 = FMeshElementContainer::Add(pFVar17);
  local_284 = iVar14;
  this_01 = TMeshAttributeArraySet<FName>::GetArrayForChannel
                      ((TMeshAttributeArraySet<FName> *)local_238.GroupMaterialSlotNames.ArrayPtr,0)
  ;
  pFVar19 = TMeshAttributeArrayBase<FName>::GetElementBase(this_01,iVar14);
  pFVar19->ComparisonIndex = 0;
  pFVar19->Number = 0;
  local_138.Elements._0_8_ = 0;
  local_138.Elements._8_8_ = 0;
  local_138.Elements._32_8_ = 0;
  local_138.Elements._40_4_ = 0;
  local_138.Elements._44_4_ = 0x80;
  local_138.Elements._48_4_ = 0xffffffff;
  local_138.Elements._52_4_ = 0;
  local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_138.HashSize = 0;
  local_e8.Elements._0_8_ = 0;
  local_e8.Elements._8_8_ = 0;
  local_e8.Elements._32_8_ = 0;
  local_e8.Elements._40_4_ = 0;
  local_e8.Elements._44_4_ = 0x80;
  local_e8.Elements._48_4_ = 0xffffffff;
  local_e8.Elements._52_4_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  uVar32 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar29 = 0;
  if ((uVar32 != 0) &&
     (pFVar2 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar29 = 0,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar29 = 1;
    uVar28 = 1;
    if ((int)uVar32 < 2) goto joined_r0x0001443d08e9;
    do {
      uVar24 = (ulonglong)((uint)uVar29 & 0x1ff);
      lVar20 = *(longlong *)(pFVar2 + (uVar29 >> 9) * 8);
      if ((*(short *)(lVar20 + uVar24 * 2) != 0) && (*(short *)(lVar20 + uVar24 * 2) != -1)) break;
      uVar28 = (uint)uVar29 + 1;
      uVar29 = (ulonglong)uVar28;
    } while ((int)uVar28 < (int)uVar32);
  }
  uVar28 = (uint)uVar29;
joined_r0x0001443d08e9:
  if (uVar28 == uVar32) {
    ((local_238.MeshDescription)->VertexInstanceToTriangles).bSuspended = false;
    ((local_238.MeshDescription)->VertexInstanceToTriangles).bEverythingStale = true;
    ((local_238.MeshDescription)->EdgeToTriangles).bSuspended = false;
    ((local_238.MeshDescription)->EdgeToTriangles).bEverythingStale = true;
    ((local_238.MeshDescription)->PolygonToTriangles).bSuspended = false;
    ((local_238.MeshDescription)->PolygonToTriangles).bEverythingStale = true;
    ((local_238.MeshDescription)->PolygonGroupToPolygons).bSuspended = false;
    ((local_238.MeshDescription)->PolygonGroupToPolygons).bEverythingStale = true;
    ((local_238.MeshDescription)->PolygonGroupToTriangles).bSuspended = false;
    ((local_238.MeshDescription)->PolygonGroupToTriangles).bEverythingStale = true;
    ((local_238.MeshDescription)->UVToTriangles).bSuspended = false;
    ((local_238.MeshDescription)->UVToTriangles).bEverythingStale = true;
    local_e8.HashSize = 0;
    if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FUVID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,FUVID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_e8.Elements);
    local_138.HashSize = 0;
    if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_138.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex3i,FVertexInstanceID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex3i,FVertexInstanceID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_138.Elements);
    if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.AllocatorInstance.Data);
    }
    if (local_238.TempUVBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.TempUVBuffer.AllocatorInstance.Data);
    }
    if (local_238.TempBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.TempBuffer.AllocatorInstance.Data);
    }
    if (local_238.UVCoordinateLayers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.UVCoordinateLayers.AllocatorInstance.Data);
    }
    return;
  }
  do {
    lVar33 = 0;
    uVar28 = (uint)uVar29;
    lVar31 = 3;
    local_198 = (ulonglong)(uVar28 & 0x1ff);
    local_1a0 = (FVertexInstanceID *)(uVar29 >> 9);
    local_1b8 = 0xffffffffffffffff;
    local_1b0 = 0xffffffff;
    lVar20 = *(longlong *)
              ((param_1->Triangles).Blocks.AllocatorInstance.Data + (longlong)(uVar29 >> 9) * 8);
    local_268 = *(undefined8 *)(lVar20 + local_198 * 0xc);
    local_260 = *(undefined4 *)(lVar20 + 8 + local_198 * 0xc);
    local_190 = local_268;
    local_188 = local_260;
    local_98 = 0xffffffffffffffff;
    local_90[0] = (FPolygonGroupID)0xffffffff;
    local_88 = 0xffffffffffffffff;
    local_80 = (FUVID)0xffffffff;
    do {
      local_29c = *(uint *)((longlong)&local_1b8 + lVar33);
      uVar16 = *(uint *)((longlong)&local_268 + lVar33);
      local_298 = *(uint *)((longlong)&local_190 + lVar33);
      local_2a0 = uVar16;
      uVar15 = FCrc::MemCrc_DEPRECATED(&local_2a0,0xc,0);
      if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
        FVar25 = (ForElementType<FSetElementId>)&local_138.Hash;
        if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_138.Hash.SecondaryData;
        }
        iVar14 = *(int *)((longlong)FVar25 + (ulonglong)(local_138.HashSize - 1U & uVar15) * 4);
        while (iVar14 != -1) {
          lVar20 = (longlong)iVar14;
          if (((*(uint *)(local_138.Elements._0_8_ + lVar20 * 0x18) == local_2a0) &&
              (*(uint *)(local_138.Elements._0_8_ + 4 + lVar20 * 0x18) == local_29c)) &&
             (*(uint *)(local_138.Elements._0_8_ + 8 + lVar20 * 0x18) == local_298)) {
            if (iVar14 != -1) goto LAB_1443d0cbf;
            break;
          }
          iVar14 = *(int *)(local_138.Elements._0_8_ + 0x10 + lVar20 * 0x18);
        }
      }
      uVar15 = 0;
      if ((int)uVar16 < local_278.ArrayNum) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar11 = local_238.MeshDescription;
      FVar1 = *(FVertexID *)(local_278.AllocatorInstance.Data + (longlong)(int)uVar16 * 4);
      pFVar17 = FMeshElementChannels::Get((local_238.MeshDescription)->VertexInstanceElements,0);
      local_2a4 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar17);
      FMeshDescription::CreateVertexInstance_Internal(pFVar11,local_2a4,FVar1);
      local_180 = &local_2a0;
      local_178 = &local_2a4;
      TSet<TTuple<UE::Geometry::FIndex3i,FVertexInstanceID>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,FVertexInstanceID,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::Geometry::FIndex3i_const_&,FVertexInstanceID_const_&>_>
                (&local_138,
                 (TPairInitializer<UE::Geometry::FIndex3i_const_&,FVertexInstanceID_const_&> *)
                 local_1a8,(bool *)&local_180);
      FVar10 = local_2a4;
      if ((param_1->VertexNormals).bIsSet == false) {
        local_140 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        uVar3 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        uVar7 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        uVar8 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
      }
      else {
        uVar29 = (ulonglong)(*(uint *)((longlong)&local_268 + lVar33) & 0x1ff);
        lVar20 = *(longlong *)
                  ((param_1->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                  (ulonglong)(*(uint *)((longlong)&local_268 + lVar33) >> 9) * 8);
        local_160 = *(undefined8 *)(lVar20 + uVar29 * 0xc);
        local_158 = *(float *)(lVar20 + 8 + uVar29 * 0xc);
        uVar3 = (double)(float)((ulonglong)local_160 >> 0x20);
        uVar7 = (double)local_158;
        uVar8 = (double)(float)local_160;
      }
      if ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_238.InstanceNormals.ArrayPtr !=
          (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
        this_02 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                             local_238.InstanceNormals.ArrayPtr,0);
        pTVar21 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (this_02,(int)FVar10);
        (pTVar21->field0_0x0)._s_0.X = (float)(double)uVar8;
        (pTVar21->field0_0x0)._s_0.Y = (float)(double)uVar3;
        (pTVar21->field0_0x0)._s_0.Z = (float)(double)uVar7;
      }
      if ((param_1->VertexUVs).bIsSet == false) {
        dVar5 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
        dVar6 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
      }
      else {
        uVar3 = *(undefined8 *)
                 (*(longlong *)
                   ((param_1->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data +
                   (ulonglong)(*(uint *)((longlong)&local_268 + lVar33) >> 9) * 8) +
                 (ulonglong)(*(uint *)((longlong)&local_268 + lVar33) & 0x1ff) * 8);
        local_250._0_4_ = (float)uVar3;
        local_250._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
        dVar5 = (double)(float)local_250;
        dVar6 = (double)local_250._4_4_;
        local_250 = uVar3;
      }
      if ((local_238.UVCoordinateLayers.ArrayNum < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = *(TMeshAttributeArraySet<UE::Math::TVector2<float>_> **)
                 local_238.UVCoordinateLayers.AllocatorInstance.Data;
      pFVar17 = FMeshElementChannels::Get((local_238.MeshDescription)->UVElements,0);
      iVar14 = FMeshElementContainer::Add(pFVar17);
      local_248 = (float)dVar5;
      fStack_244 = (float)dVar6;
      local_288 = iVar14;
      this_03 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel(this_00,0);
      pTVar22 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(this_03,iVar14)
                 ->field0_0x0;
      TVar9.field0_0x0._s_0.Y = fStack_244;
      TVar9.field0_0x0._s_0.X = local_248;
      *pTVar22 = TVar9.field0_0x0;
      local_28c = local_2a4;
      local_170 = &local_28c;
      local_168 = &local_288;
      TSet<TTuple<int,FUVID>,TDefaultMapHashableKeyFuncs<int,FUVID,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_&&,FUVID_const_&>_>
                (&local_e8,(TPairInitializer<int_&&,FUVID_const_&> *)(local_1a8 + 4),
                 (bool *)&local_170);
LAB_1443d0cbf:
      puVar30 = (uint *)0x0;
      uVar16 = FCrc::MemCrc_DEPRECATED(&local_2a0,0xc,0);
      puVar27 = puVar30;
      if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
        FVar25 = (ForElementType<FSetElementId>)&local_138.Hash;
        if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_138.Hash.SecondaryData;
        }
        uVar16 = *(uint *)((longlong)FVar25 + (ulonglong)(local_138.HashSize - 1U & uVar16) * 4);
        while (uVar16 != 0xffffffff) {
          puVar26 = (uint *)(local_138.Elements._0_8_ + (longlong)(int)uVar16 * 0x18);
          if (((*(uint *)(local_138.Elements._0_8_ + (longlong)(int)uVar16 * 0x18) == local_2a0) &&
              (puVar26[1] == local_29c)) && (puVar26[2] == local_298)) {
            if ((uVar16 != 0xffffffff) && (puVar27 = puVar26, puVar26 != (uint *)0x0))
            goto LAB_1443d0d73;
            break;
          }
          uVar16 = puVar26[4];
        }
      }
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      puVar26 = puVar27;
      if (bVar13) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
LAB_1443d0d73:
      uVar16 = puVar26[3];
      *(uint *)(&local_90[-2].field_0x0 + lVar33) = uVar16;
      puVar27 = puVar30;
      if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
        FVar25 = (ForElementType<FSetElementId>)&local_e8.Hash;
        if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar25 = local_e8.Hash.SecondaryData;
        }
        uVar15 = *(uint *)((longlong)FVar25 + (ulonglong)(local_e8.HashSize - 1U & uVar16) * 4);
        while (puVar27 = puVar30, uVar15 != 0xffffffff) {
          puVar27 = (uint *)((longlong)(int)uVar15 * 0x10 + local_e8.Elements._0_8_);
          if (*puVar27 == uVar16) {
            if (puVar27 != (uint *)0x0) goto LAB_1443d0e04;
            break;
          }
          uVar15 = puVar27[2];
        }
      }
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      if (bVar13) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
LAB_1443d0e04:
      *(uint *)((longlong)&local_88 + lVar33) = puVar27[1];
      lVar33 = lVar33 + 4;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
    FMeshDescriptionBuilder::AppendTriangle
              (&local_238,&local_290,(FVertexInstanceID *)&local_98,
               (FVertexInstanceID *)((longlong)&local_98 + 4),local_90);
    iVar14 = 0;
    FMeshDescriptionBuilder::AppendUVTriangle
              (&local_238,(FTriangleID *)&local_290,local_88._0_4_,local_88._4_4_,local_80,0);
    if (bVar12) {
      if ((param_1->TriangleGroups).bIsSet == false) {
        iVar14 = -1;
      }
      else if (((-1 < (int)uVar28) &&
               ((int)uVar28 <
                (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
              ((ushort)(*(short *)(*(longlong *)
                                    ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                     .Data + (longlong)local_1a0 * 8) + local_198 * 2) - 1U) <
               0xfffe)) {
        iVar14 = *(int *)(*(longlong *)
                           ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                           (longlong)local_1a0 * 8) + local_198 * 4);
      }
      FMeshDescription::GetTrianglePolygon(local_238.MeshDescription,SUB84(local_280,0));
      this_04 = TMeshAttributeArraySet<int>::GetArrayForChannel
                          ((TMeshAttributeArraySet<int> *)local_238.PolyGroups.ArrayPtr,0);
      piVar23 = TMeshAttributeArrayBase<int>::GetElementBase(this_04,local_280[0]);
      *piVar23 = iVar14;
    }
    uVar28 = uVar28 + 1;
    uVar29 = (ulonglong)uVar28;
    if ((int)uVar32 <= (int)uVar28) goto joined_r0x0001443d08e9;
    while( true ) {
      uVar24 = (ulonglong)((uint)uVar29 & 0x1ff);
      lVar20 = *(longlong *)
                ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                (uVar29 >> 9) * 8);
      if ((*(short *)(lVar20 + uVar24 * 2) != 0) && (*(short *)(lVar20 + uVar24 * 2) != -1)) break;
      uVar28 = (uint)uVar29 + 1;
      uVar29 = (ulonglong)uVar28;
      if ((int)uVar32 <= (int)uVar28) goto joined_r0x0001443d08e9;
    }
  } while( true );
}

// Convert_NoSharedInstances @ 1443d10c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001443d2627) */
/* WARNING: Removing unreachable block (ram,0x0001443d25b2) */
/* WARNING: Removing unreachable block (ram,0x0001443d27bf) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDynamicMeshToMeshDescription::Convert_NoSharedInstances
          (FDynamicMeshToMeshDescription *this,FDynamicMesh3 *param_1,FMeshDescription *param_2,
          bool param_3)

{
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  float fVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  FVertexID FVar10;
  FEdgeID FVar11;
  FName FVar12;
  FScriptContainerElement *pFVar13;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this_00;
  FMeshAttributeArraySetBase *pFVar14;
  undefined1 *puVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  TVector2<float> TVar28;
  bool bVar29;
  FDynamicMesh3 *pFVar30;
  TBitArray<FDefaultBitArrayAllocator> *pTVar31;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar32;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar33;
  FDynamicMeshToMeshDescription *pFVar34;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar35;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar36;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar37;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar38;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  bool bVar46;
  bool bVar47;
  int iVar48;
  int iVar49;
  FUVID FVar50;
  FVertexInstanceID FVar51;
  uint uVar52;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar53;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar54;
  FDynamicMeshAttributeSet *pFVar55;
  TMeshAttributesRef<FBoneID,FName> TVar56;
  TMeshAttributeArrayBase<FName> *pTVar57;
  FName *pFVar58;
  TMeshAttributesRef<FBoneID,int> TVar59;
  TMeshAttributeArrayBase<int> *pTVar60;
  int *piVar61;
  TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_> TVar62;
  TMeshAttributesRef<FBoneID,UE::Math::TVector4<float>_> TVar63;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this_01;
  TVector4<float> *pTVar64;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar65;
  undefined4 extraout_var;
  FMeshElementContainer *pFVar66;
  longlong *plVar67;
  code *pcVar68;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_02;
  TVector2<float>_u_0 *pTVar69;
  undefined8 uVar70;
  FAttributesSetEntry *pFVar71;
  TMeshAttributeArrayBase<bool> *this_03;
  bool *pbVar72;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *pTVar73;
  TArrayView<int,int> *this_04;
  TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_> *pTVar74;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_05;
  TVector<float> *pTVar75;
  byte bVar76;
  FUVID FVar77;
  FDynamicMeshAttributeSet *pFVar78;
  longlong lVar79;
  longlong *plVar80;
  atomic<unsigned_char> *paVar81;
  ForElementType<UE::AnimationCore::FBoneWeight> _Dst;
  uint uVar82;
  uint uVar83;
  ulonglong uVar84;
  FMeshDescription *pFVar85;
  ForAnyElementType FVar86;
  ulong64 uVar87;
  FRefCountVector *pFVar88;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar89;
  TMeshAttributeArraySet<bool> *this_06;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar90;
  ulonglong uVar91;
  FDynamicMeshAttributeSet *pFVar92;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar93;
  FUVID FVar94;
  undefined1 *puVar95;
  uint uVar96;
  int iVar97;
  uint *puVar98;
  uint uVar99;
  TArray<FUVID,TSizedDefaultAllocator<32>_> *this_07;
  FMeshAttributeArraySetBase *this_08;
  uint uVar100;
  longlong lVar101;
  undefined1 auStackY_9e8 [32];
  char *pcVar102;
  <lambda_1> local_997;
  char local_996;
  char local_995;
  FDynamicMesh3 *local_990;
  uint local_988;
  ForAnyElementType local_980;
  int local_978;
  int iStack_974;
  undefined1 local_970;
  undefined1 local_96f;
  undefined1 local_96e;
  char local_96d;
  TBitArray<FDefaultBitArrayAllocator> *local_968;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_960;
  undefined4 local_958 [2];
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *local_950;
  ForAnyElementType local_948;
  int local_940;
  int iStack_93c;
  TArray<FVertexID,TSizedDefaultAllocator<32>_> local_938;
  int local_928;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_920;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *local_918;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_910;
  undefined8 uStack_908;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  int local_8e8;
  undefined4 uStack_8e4;
  FVertexInstanceID local_8e0 [2];
  undefined8 local_8d8;
  TDynamicMeshScalarTriangleAttribute<int> *local_8d0;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_8c8;
  ForAnyElementType local_8c0;
  undefined8 local_8b8;
  IndexIterator local_8b0;
  ForAnyElementType local_8a0;
  undefined8 local_898;
  uint local_890;
  FMeshDescription *local_888;
  undefined8 *local_880;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_878;
  undefined8 local_870;
  uint local_868;
  FDynamicMeshToMeshDescription *local_860;
  undefined8 local_858;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *local_850;
  TArray<FTriangleID,TSizedDefaultAllocator<32>_> local_848;
  longlong local_838;
  int local_830 [2];
  int local_828 [2];
  ForAnyElementType local_820;
  int local_818 [4];
  int local_808;
  uint uStack_804;
  undefined1 *puStack_800;
  undefined4 local_7f8;
  int iStack_7f4;
  int iStack_7f0;
  undefined4 uStack_7ec;
  FMeshDescriptionBuilder local_7e8;
  undefined8 local_768;
  float local_760;
  float fStack_75c;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *local_758;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *local_750;
  FName local_748;
  FName local_740;
  FName local_738;
  undefined8 local_730;
  uint local_728;
  TArray<FName,TSizedDefaultAllocator<32>_> local_720;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_710;
  TArray<FName,TSizedDefaultAllocator<32>_> local_6f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6c0;
  undefined8 *local_6a0;
  undefined1 local_698 [8];
  TPairInitializer<FName_const_&,FSkinWeightsVertexAttributesRef_&&> local_690;
  BaseIterator local_680;
  BaseIterator local_670;
  undefined1 local_660 [12];
  uint uStack_654;
  TBitArray<FDefaultBitArrayAllocator> *local_650;
  undefined8 uStack_648;
  longlong local_640;
  undefined8 uStack_638;
  undefined1 local_630 [12];
  uint uStack_624;
  TBitArray<FDefaultBitArrayAllocator> *local_620;
  undefined8 uStack_618;
  longlong local_610;
  undefined8 uStack_608;
  TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
  *local_600;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5f8;
  undefined8 uStack_5d8;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *local_5d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5c8;
  undefined8 uStack_5a8;
  IndexIterator local_5a0;
  TArrayView<std::nullptr_t,int> local_590;
  code *local_580;
  FDynamicMesh3 ***local_578;
  TArrayView<FEdgeID,int> local_570;
  undefined **local_560;
  FMeshDescription *local_558;
  FName *local_550;
  TMeshAttributesRef<FVertexID,TArrayAttribute<int>_> local_548;
  FName *local_540;
  FMeshAttributeArraySetBase *local_538;
  double local_530;
  double local_528;
  IndexIterator local_520;
  IndexIterator local_510;
  FDynamicMesh3 **local_500;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **local_4f8;
  ForAnyElementType *local_4f0;
  undefined8 local_4e8;
  float local_4e0;
  FSkeletalMeshAttributes local_4d8;
  undefined1 local_4a0 [40];
  undefined1 local_478 [8];
  TRangedForConstIterator local_470;
  TRangedForConstIterator local_440;
  undefined1 local_410 [56];
  undefined1 local_3d8 [56];
  FSkeletalMeshAttributes local_3a0;
  TArrayView<int,int> local_368;
  TArrayView<int,int> local_358;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_348;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_328;
  undefined4 local_2ec;
  code *local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  longlong *plStack_2c0;
  code *local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  longlong *plStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 uStack_260;
  ForElementType<UE::AnimationCore::FBoneWeight> local_258;
  int local_220;
  int local_21c;
  code *local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  longlong *plStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_198;
  undefined8 uStack_190;
  code *local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  longlong *plStack_160;
  TSet<TTuple<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>,0>,FDefaultSetAllocator>
  local_158;
  TSet<TTuple<FName,FSkinWeightsVertexAttributesRef>,TDefaultMapHashableKeyFuncs<FName,FSkinWeightsVertexAttributesRef,0>,FDefaultSetAllocator>
  local_108;
  undefined8 local_b8;
  FPolygonGroupID local_b0 [2];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_9e8;
  pFVar92 = (param_1->AttributeSet).Ptr;
  local_8d8 = 1;
  local_990 = param_1;
  local_96d = param_3;
  local_888 = param_2;
  local_860 = this;
  if (((pFVar92 == (FDynamicMeshAttributeSet *)0x0) ||
      (local_8d0 = (pFVar92->MaterialIDAttrib).Ptr,
      local_8d0 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) &&
     (local_8d0 = (TDynamicMeshScalarTriangleAttribute<int> *)0x0,
     pFVar92 == (FDynamicMeshAttributeSet *)0x0)) {
    uVar87 = 0;
    local_878 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    local_8d0 = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
    local_920 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    local_960 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    local_950 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
    local_988 = 0;
LAB_1443d1280:
    bVar47 = false;
    local_750 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0;
    local_758 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0;
    local_850 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                 *)0x0;
    local_918 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *
                )0x0;
    if (pFVar92 != (FDynamicMeshAttributeSet *)0x0) goto LAB_1443d12a1;
LAB_1443d12c4:
    bVar29 = false;
    if (pFVar92 != (FDynamicMeshAttributeSet *)0x0) goto LAB_1443d12ce;
LAB_1443d12f2:
    local_996 = '\0';
  }
  else {
    local_878 = UE::Geometry::FDynamicMeshAttributeSet::GetNormalLayer(pFVar92,0);
    pFVar78 = (local_990->AttributeSet).Ptr;
    pFVar55 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar55 = pFVar78;
    }
    pTVar53 = UE::Geometry::FDynamicMeshAttributeSet::GetNormalLayer(pFVar55,1);
    pFVar78 = (local_990->AttributeSet).Ptr;
    pFVar55 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar55 = pFVar78;
    }
    local_920 = pTVar53;
    pTVar54 = UE::Geometry::FDynamicMeshAttributeSet::GetNormalLayer(pFVar55,2);
    pFVar78 = (local_990->AttributeSet).Ptr;
    pFVar55 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar55 = pFVar78;
    }
    pTVar89 = (pFVar55->ColorLayer).Ptr;
    local_960 = pTVar54;
    local_950 = pTVar89;
    local_988 = (**(code **)(pFVar78->_padding_ + 0xa8))();
    uVar87 = (ulong64)local_988;
    pFVar78 = (local_990->AttributeSet).Ptr;
    pFVar55 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar55 = pFVar78;
    }
    if ((pFVar55->BoneNameAttrib).Ptr ==
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) goto LAB_1443d1280;
    bVar47 = true;
    pFVar55 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar55 = pFVar78;
    }
    local_750 = (pFVar55->BoneNameAttrib).Ptr;
    pFVar55 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar55 = pFVar78;
    }
    local_758 = (pFVar55->BoneParentIndexAttrib).Ptr;
    pFVar55 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar55 = pFVar78;
    }
    local_850 = (pFVar55->BonePoseAttrib).Ptr;
    pFVar55 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar55 = pFVar78;
    }
    local_918 = (pFVar55->BoneColorAttrib).Ptr;
    local_960 = pTVar54;
    local_950 = pTVar89;
    local_920 = pTVar53;
LAB_1443d12a1:
    pFVar78 = (local_990->AttributeSet).Ptr;
    pFVar55 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar55 = pFVar78;
    }
    if (*(int *)&(pFVar55->SkinWeightAttributes).field_0x8 ==
        *(int *)&(pFVar55->SkinWeightAttributes).field_0x34) goto LAB_1443d12c4;
    bVar29 = true;
LAB_1443d12ce:
    pFVar92 = (local_990->AttributeSet).Ptr;
    local_996 = '\x01';
    pFVar78 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar92 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar78 = pFVar92;
    }
    if (*(int *)&(pFVar78->MorphTargetAttributes).field_0x8 ==
        *(int *)&(pFVar78->MorphTargetAttributes).field_0x34) goto LAB_1443d12f2;
  }
  uVar84 = 0;
  lVar101 = (longlong)(int)uVar87;
  local_948.Data = (FScriptContainerElement *)0x0;
  local_940 = 0;
  iStack_93c = 0;
  uVar91 = uVar84;
  local_838 = lVar101;
  if (0 < (int)uVar87) {
    do {
      pFVar92 = (local_990->AttributeSet).Ptr;
      pFVar78 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar92 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar78 = pFVar92;
      }
      iVar48 = (int)uVar84;
      if ((iVar48 < (pFVar78->UVLayers).Array.ArrayNum) && (-1 < iVar48)) {
        if ((iVar48 < 0) &&
           (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar46)) {
          pcVar68 = (code *)swi(3);
          (*pcVar68)();
          return;
        }
        local_858 = *(undefined8 *)((pFVar78->UVLayers).Array.AllocatorInstance.Data + uVar91 * 8);
      }
      else {
        local_858 = 0;
      }
      if (((local_948.Data <= (FScriptContainerElement *)&local_858) &&
          ((FScriptContainerElement *)&local_858 < local_948.Data + (longlong)iStack_93c * 8)) &&
         (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar46)) {
        pcVar68 = (code *)swi(3);
        (*pcVar68)();
        return;
      }
      if (local_940 == iStack_93c) {
        local_940 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_948,&iStack_93c);
      }
      lVar79 = (longlong)local_940;
      uVar84 = (ulonglong)(iVar48 + 1);
      uVar91 = uVar91 + 1;
      local_940 = local_940 + 1;
      *(undefined8 *)(local_948.Data + lVar79 * 8) = local_858;
    } while ((longlong)uVar91 < lVar101);
  }
  pFVar85 = local_888;
  pFVar92 = (FDynamicMeshAttributeSet *)0x0;
  FMeshDescription::Empty(local_888);
  local_7e8.VertexPositions.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_7e8.InstanceUVs.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_7e8.InstanceNormals.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_7e8.InstanceTangents.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_7e8.InstanceBiTangentSign.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_7e8.InstanceColors.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_7e8.UVCoordinateLayers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7e8.UVCoordinateLayers.ArrayNum = 0;
  local_7e8.UVCoordinateLayers.ArrayMax = 0;
  local_7e8.TempBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7e8.TempBuffer.ArrayNum = 0;
  local_7e8.TempBuffer.ArrayMax = 0;
  local_7e8.TempUVBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7e8.TempUVBuffer.ArrayNum = 0;
  local_7e8.TempUVBuffer.ArrayMax = 0;
  local_7e8.PolyGroups.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_7e8.GroupMaterialSlotNames.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  FMeshDescriptionBuilder::SetMeshDescription(&local_7e8,pFVar85);
  if (((this->ConversionOptions).bSetHardEdgesFromNormalSeams != false) &&
     (local_878 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
    local_558 = pFVar85;
    local_560 = &___7FStaticMeshAttributes__6B_;
    FStaticMeshAttributes::Register((FStaticMeshAttributes *)&local_560,false);
  }
  local_995 = '\0';
  if (((this->ConversionOptions).bSetPolyGroups != false) &&
     ((local_990->TriangleGroups).bIsSet != false)) {
    FMeshDescriptionBuilder::EnablePolyGroups(&local_7e8);
    local_995 = '\x01';
  }
  if ((bVar47) || (bVar29)) {
    FSkeletalMeshAttributes::FSkeletalMeshAttributes(&local_3a0,pFVar85);
    FSkeletalMeshAttributes::Register(&local_3a0,false);
    FSkeletalMeshAttributes::RegisterColorAttribute(&local_3a0);
    FSkeletalMeshAttributes::UnregisterImportPointIndexAttribute(&local_3a0);
    if (bVar47) {
      FSkeletalMeshAttributes::FSkeletalMeshAttributes(&local_4d8,pFVar85);
      pFVar78 = (local_990->AttributeSet).Ptr;
      pFVar55 = pFVar92;
      if (pFVar78 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar55 = pFVar78;
      }
      iVar48 = UE::Geometry::FDynamicMeshAttributeSet::GetNumBones(pFVar55);
      FSkeletalMeshAttributes::BoneAttributes(&local_4d8);
      FSkeletalMeshAttributes::ReserveNewBones(&local_4d8,iVar48);
      pFVar85 = local_888;
      local_8c8 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
                   *)(longlong)iVar48;
      if (0 < iVar48) {
        local_968 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
        pFVar78 = pFVar92;
        pFVar55 = pFVar92;
        do {
          FSkeletalMeshAttributes::CreateBone(&local_4d8);
          TVar56 = FSkeletalMeshAttributes::GetBoneNames(&local_4d8);
          pTVar37 = local_750;
          uVar100 = (uint)pFVar92;
          uVar99 = ~uVar100 >> 0x1f;
          uVar83 = 0;
          if ((int)uVar100 < (local_750->AttribValues).ArrayNum) {
            uVar83 = uVar99;
          }
          if ((uVar83 == 0) &&
             (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar47)) {
            pcVar68 = (code *)swi(3);
            (*pcVar68)();
            return;
          }
          iVar48 = local_928;
          FVar12 = *(FName *)((pTVar37->AttribValues).AllocatorInstance.Data + (longlong)pFVar55 * 8
                             );
          pTVar57 = TMeshAttributeArraySet<FName>::GetArrayForChannel
                              ((TMeshAttributeArraySet<FName> *)(TVar56.ArrayPtr)->_padding_,0);
          pFVar58 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar57,iVar48);
          *pFVar58 = FVar12;
          TVar59 = FSkeletalMeshAttributes::GetBoneParentIndices(&local_4d8);
          pTVar36 = local_758;
          uVar83 = 0;
          if ((int)uVar100 < (local_758->AttribValues).ArrayNum) {
            uVar83 = uVar99;
          }
          if ((uVar83 == 0) &&
             (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar47)) {
            pcVar68 = (code *)swi(3);
            (*pcVar68)();
            return;
          }
          iVar49 = local_928;
          iVar48 = *(int *)((pTVar36->AttribValues).AllocatorInstance.Data + (longlong)pFVar55 * 4);
          pTVar60 = TMeshAttributeArraySet<int>::GetArrayForChannel
                              ((TMeshAttributeArraySet<int> *)(TVar59.ArrayPtr)->_padding_,0);
          piVar61 = TMeshAttributeArrayBase<int>::GetElementBase(pTVar60,iVar49);
          *piVar61 = iVar48;
          TVar62 = FSkeletalMeshAttributes::GetBonePoses(&local_4d8);
          pTVar35 = local_850;
          uVar83 = 0;
          if ((int)uVar100 < (local_850->AttribValues).ArrayNum) {
            uVar83 = uVar99;
          }
          if ((uVar83 == 0) &&
             (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar47)) {
            pcVar68 = (code *)swi(3);
            (*pcVar68)();
            return;
          }
          iVar48 = local_928;
          pFVar13 = (pTVar35->AttribValues).AllocatorInstance.Data;
          lVar101 = (TVar62.ArrayPtr)->_padding_;
          pFVar3 = (FScriptContainerElement *)((longlong)&pFVar78->_padding_ + (longlong)pFVar13);
          uVar70 = *(undefined8 *)pFVar3;
          uVar17 = *(undefined8 *)(pFVar3 + 8);
          pFVar3 = (FScriptContainerElement *)((longlong)&pFVar78->_padding_ + (longlong)pFVar13);
          uVar18 = *(undefined8 *)pFVar3;
          uVar19 = *(undefined8 *)(pFVar3 + 8);
          uVar20 = *(undefined8 *)(pFVar13 + (longlong)&(pFVar78->UVLayers).Array);
          uVar21 = *(undefined8 *)(pFVar13 + (longlong)&(pFVar78->UVLayers).Array + 8);
          uVar22 = *(undefined8 *)(pFVar13 + (longlong)&(pFVar78->NormalLayers).Array);
          uVar23 = *(undefined8 *)(pFVar13 + (longlong)&(pFVar78->NormalLayers).Array + 8);
          uVar24 = *(undefined8 *)(pFVar13 + (longlong)&(pFVar78->ColorLayer).Ptr);
          uVar25 = *(undefined8 *)(pFVar13 + (longlong)&(pFVar78->ColorLayer).Ptr + 8);
          uVar26 = *(undefined8 *)(pFVar13 + (longlong)&(pFVar78->WeightLayers).Array);
          uVar27 = *(undefined8 *)(pFVar13 + (longlong)&(pFVar78->WeightLayers).Array + 8);
          if ((*(int *)(lVar101 + 0x38) < 1) &&
             (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar47)) {
            pcVar68 = (code *)swi(3);
            (*pcVar68)();
            return;
          }
          plVar67 = (longlong *)(lVar101 + 0x18);
          if (*(longlong **)(lVar101 + 0x30) != (longlong *)0x0) {
            plVar67 = *(longlong **)(lVar101 + 0x30);
          }
          uVar82 = iVar48 * (int)plVar67[2];
          uVar83 = 0;
          if ((int)uVar82 < (int)plVar67[1]) {
            uVar83 = ~uVar82 >> 0x1f;
          }
          if ((uVar83 == 0) &&
             (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar47)) {
            pcVar68 = (code *)swi(3);
            (*pcVar68)();
            return;
          }
          lVar101 = *plVar67;
          lVar79 = (longlong)(int)uVar82 * 0x60;
          *(undefined8 *)(lVar79 + lVar101) = uVar70;
          ((undefined8 *)(lVar79 + lVar101))[1] = uVar17;
          puVar4 = (undefined8 *)(lVar79 + 0x10 + lVar101);
          *puVar4 = uVar18;
          puVar4[1] = uVar19;
          puVar4 = (undefined8 *)(lVar79 + 0x20 + lVar101);
          *puVar4 = uVar20;
          puVar4[1] = uVar21;
          puVar4 = (undefined8 *)(lVar79 + 0x30 + lVar101);
          *puVar4 = uVar22;
          puVar4[1] = uVar23;
          puVar4 = (undefined8 *)(lVar79 + 0x40 + lVar101);
          *puVar4 = uVar24;
          puVar4[1] = uVar25;
          puVar4 = (undefined8 *)(lVar79 + 0x50 + lVar101);
          *puVar4 = uVar26;
          puVar4[1] = uVar27;
          TVar63 = FSkeletalMeshAttributes::GetBoneColors(&local_4d8);
          pTVar93 = local_918;
          uVar83 = 0;
          if ((int)uVar100 < (local_918->AttribValues).ArrayNum) {
            uVar83 = uVar99;
          }
          if ((uVar83 == 0) &&
             (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar47)) {
            pcVar68 = (code *)swi(3);
            (*pcVar68)();
            return;
          }
          iVar48 = local_928;
          pTVar31 = local_968;
          pFVar3 = (pTVar93->AttribValues).AllocatorInstance.Data + (longlong)local_968;
          uVar70 = *(undefined8 *)pFVar3;
          uVar17 = *(undefined8 *)(pFVar3 + 8);
          this_01 = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel
                              ((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)
                               (TVar63.ArrayPtr)->_padding_,0);
          pTVar64 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                              (this_01,iVar48);
          local_968 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pTVar31 + 0x10);
          pFVar92 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar100 + 1);
          pFVar55 = (FDynamicMeshAttributeSet *)((longlong)&pFVar55->_padding_ + 1);
          pFVar78 = (FDynamicMeshAttributeSet *)&pFVar78->PolygroupLayers;
          *(undefined8 *)&pTVar64->field0_0x0 = uVar70;
          *(undefined8 *)((longlong)&pTVar64->field0_0x0 + 8) = uVar17;
        } while ((longlong)pFVar55 < (longlong)local_8c8);
        uVar87 = (ulong64)local_988;
        pFVar85 = local_888;
        this = local_860;
        lVar101 = local_838;
      }
    }
  }
  uVar83 = (uint)uVar87;
  local_108.Elements._0_8_ = 0;
  local_108.Elements._8_8_ = 0;
  local_108.Elements._32_8_ = 0;
  local_108.Elements._40_4_ = 0;
  local_108.Elements._44_4_ = 0x80;
  local_108.Elements._48_4_ = 0xffffffff;
  local_108.Elements._52_4_ = 0;
  local_108.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_108.HashSize = 0;
  if (bVar29) {
    FSkeletalMeshAttributes::FSkeletalMeshAttributes((FSkeletalMeshAttributes *)local_410,pFVar85);
    FSkeletalMeshAttributesShared::GetSkinWeightProfileNames
              ((FSkeletalMeshAttributesShared *)(local_410 + 0x10),&local_720,false);
    iVar48 = local_720.ArrayNum;
    pFVar58 = (FName *)(local_720.AllocatorInstance.Data + (longlong)iVar48 * 8);
    FVar86.Data = local_720.AllocatorInstance.Data;
    while( true ) {
      if (local_720.ArrayNum != iVar48) {
        local_970 = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_970)
        ;
      }
      if ((FName *)FVar86.Data == pFVar58) break;
      FSkeletalMeshAttributes::UnregisterSkinWeightAttribute
                ((FSkeletalMeshAttributes *)local_410,*(FName *)FVar86.Data);
      FVar86.Data = FVar86.Data + 8;
    }
    if ((FName *)local_720.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_720.AllocatorInstance.Data);
    }
    local_6e0._padding_._0_4_ = 0;
    local_6e0.UnvisitedBitMask = 0xffffffff;
    local_6e0.CurrentBitIndex = 0;
    local_6e0.BaseBitIndex = 0;
    pFVar92 = (local_990->AttributeSet).Ptr;
    local_6e0._padding_._4_4_ = (undefined4)local_8d8;
    pFVar78 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar92 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar78 = pFVar92;
    }
    puVar2 = &(pFVar78->SkinWeightAttributes).field_0x10;
    pTVar1 = &pFVar78->SkinWeightAttributes;
    local_6e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if (*(int *)&(pFVar78->SkinWeightAttributes).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6e0);
    }
    uStack_908 = CONCAT44(local_6e0._padding_._4_4_,(undefined4)local_6e0._padding_);
    uStack_8f8 = CONCAT44(local_6e0.CurrentBitIndex,local_6e0.UnvisitedBitMask);
    uStack_8f0 = CONCAT44(local_6e0._28_4_,local_6e0.BaseBitIndex);
    local_8e8 = *(int *)&(pFVar78->SkinWeightAttributes).field_0x8 -
                *(int *)&(pFVar78->SkinWeightAttributes).field_0x34;
    pTStack_900 = local_6e0.Array;
    uStack_608._4_4_ = uStack_8e4;
    uStack_608._0_4_ = local_8e8;
    local_620 = local_6e0.Array;
    local_910 = pTVar1;
    local_630._0_8_ = pTVar1;
    unique0x10005b90 = uStack_908;
    uStack_618 = uStack_8f8;
    local_610 = uStack_8f0;
    pTVar65 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_348,(TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                         *(int *)&(pFVar78->SkinWeightAttributes).field_0x28);
    uStack_908 = pTVar65->_padding_;
    pTStack_900 = pTVar65->Array;
    uStack_8f8._0_4_ = pTVar65->UnvisitedBitMask;
    uStack_8f8._4_4_ = pTVar65->CurrentBitIndex;
    uStack_8f0 = *(longlong *)&pTVar65->BaseBitIndex;
    local_8e8 = *(int *)&(pFVar78->SkinWeightAttributes).field_0x8 -
                *(int *)&(pFVar78->SkinWeightAttributes).field_0x34;
    local_470._44_4_ = uStack_8e4;
    local_470.InitialNum = local_8e8;
    local_910 = pTVar1;
    local_470._padding_ = (longlong)pTVar1;
    local_470._padding_ = uStack_908;
    local_470._padding_ = (longlong)pTStack_900;
    local_470._padding_ = uStack_8f8;
    local_470._padding_ = uStack_8f0;
    bVar47 = TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_630,&local_470);
    if (bVar47) {
      local_550 = &local_748;
      do {
        local_748 = *(FName *)(*(longlong *)(undefined1 *)local_630._0_8_ +
                              (longlong)uStack_618._4_4_ * 0x18);
        FSkeletalMeshAttributes::RegisterSkinWeightAttribute
                  ((FSkeletalMeshAttributes *)local_410,local_748);
        local_548.ArrayPtr =
             (FMeshAttributeArraySetBase *)
             FSkeletalMeshAttributes::GetVertexSkinWeights
                       ((FSkeletalMeshAttributes *)local_410,(FName)local_4a0);
        TSet<TTuple<FName,FSkinWeightsVertexAttributesRef>,TDefaultMapHashableKeyFuncs<FName,FSkinWeightsVertexAttributesRef,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FSkinWeightsVertexAttributesRef_&&>_>
                  (&local_108,&local_690,(bool *)&local_550);
        uStack_618 = CONCAT44(uStack_618._4_4_,(uint)uStack_618 & ~uStack_624);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_630 + 8));
        bVar47 = TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)local_630,&local_470);
      } while (bVar47);
    }
  }
  local_158.Elements._0_8_ = 0;
  local_158.Elements._8_8_ = 0;
  local_158.Elements._32_8_ = 0;
  local_158.Elements._40_4_ = 0;
  local_158.Elements._44_4_ = 0x80;
  local_158.Elements._48_4_ = 0xffffffff;
  local_158.Elements._52_4_ = 0;
  local_158.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_158.HashSize = 0;
  if (local_996 != '\0') {
    FSkeletalMeshAttributes::FSkeletalMeshAttributes((FSkeletalMeshAttributes *)local_3d8,local_888)
    ;
    FSkeletalMeshAttributesShared::GetMorphTargetNames
              ((FSkeletalMeshAttributesShared *)(local_3d8 + 0x10),&local_6f0);
    iVar48 = local_6f0.ArrayNum;
    pFVar58 = (FName *)(local_6f0.AllocatorInstance.Data + (longlong)iVar48 * 8);
    FVar86.Data = local_6f0.AllocatorInstance.Data;
    while( true ) {
      if (local_6f0.ArrayNum != iVar48) {
        local_96f = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_96f)
        ;
      }
      if ((FName *)FVar86.Data == pFVar58) break;
      FSkeletalMeshAttributes::UnregisterMorphTargetAttribute
                ((FSkeletalMeshAttributes *)local_3d8,*(FName *)FVar86.Data);
      FVar86.Data = FVar86.Data + 8;
    }
    if ((FName *)local_6f0.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_6f0.AllocatorInstance.Data);
    }
    local_6c0._padding_._0_4_ = 0;
    local_6c0.UnvisitedBitMask = 0xffffffff;
    local_6c0.CurrentBitIndex = 0;
    local_6c0.BaseBitIndex = 0;
    pFVar92 = (local_990->AttributeSet).Ptr;
    local_6c0._padding_._4_4_ = (undefined4)local_8d8;
    pFVar78 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar92 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar78 = pFVar92;
    }
    puVar2 = &(pFVar78->MorphTargetAttributes).field_0x10;
    pTVar73 = &pFVar78->MorphTargetAttributes;
    local_6c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if (*(int *)&(pFVar78->MorphTargetAttributes).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6c0);
    }
    uStack_908 = CONCAT44(local_6c0._padding_._4_4_,(undefined4)local_6c0._padding_);
    uStack_8f8 = CONCAT44(local_6c0.CurrentBitIndex,local_6c0.UnvisitedBitMask);
    uStack_8f0 = CONCAT44(local_6c0._28_4_,local_6c0.BaseBitIndex);
    local_8e8 = *(int *)&(pFVar78->MorphTargetAttributes).field_0x8 -
                *(int *)&(pFVar78->MorphTargetAttributes).field_0x34;
    pTStack_900 = local_6c0.Array;
    uStack_638._4_4_ = uStack_8e4;
    uStack_638._0_4_ = local_8e8;
    local_650 = local_6c0.Array;
    local_910 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                 *)pTVar73;
    local_660._0_8_ = pTVar73;
    unique0x10005b70 = uStack_908;
    uStack_648 = uStack_8f8;
    local_640 = uStack_8f0;
    pTVar65 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_328,(TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                         *(int *)&(pFVar78->MorphTargetAttributes).field_0x28);
    uStack_908 = pTVar65->_padding_;
    pTStack_900 = pTVar65->Array;
    uStack_8f8._0_4_ = pTVar65->UnvisitedBitMask;
    uStack_8f8._4_4_ = pTVar65->CurrentBitIndex;
    uStack_8f0 = *(longlong *)&pTVar65->BaseBitIndex;
    local_8e8 = *(int *)&(pFVar78->MorphTargetAttributes).field_0x8 -
                *(int *)&(pFVar78->MorphTargetAttributes).field_0x34;
    local_440._44_4_ = uStack_8e4;
    local_440.InitialNum = local_8e8;
    local_910 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                 *)pTVar73;
    local_440._padding_ = (longlong)pTVar73;
    local_440._padding_ = uStack_908;
    local_440._padding_ = (longlong)pTStack_900;
    local_440._padding_ = uStack_8f8;
    local_440._padding_ = uStack_8f0;
    bVar47 = TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_660,&local_440);
    if (bVar47) {
      local_540 = &local_740;
      do {
        local_740 = *(FName *)(*(longlong *)(undefined1 *)local_660._0_8_ +
                              (longlong)uStack_648._4_4_ * 0x18);
        FSkeletalMeshAttributes::RegisterMorphTargetAttribute
                  ((FSkeletalMeshAttributes *)local_3d8,local_740,false);
        local_538 = (FMeshAttributeArraySetBase *)
                    FSkeletalMeshAttributes::GetVertexMorphPositionDelta
                              ((FSkeletalMeshAttributes *)local_3d8,(FName)local_478);
        TSet<TTuple<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FName_const_&,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>_&&>_>
                  (&local_158,
                   (TPairInitializer<FName_const_&,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>_&&>
                    *)(local_698 + 4),(bool *)&local_540);
        uStack_648 = CONCAT44(uStack_648._4_4_,(uint)uStack_648 & ~uStack_654);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_660 + 8));
        bVar47 = TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)local_660,&local_440);
      } while (bVar47);
    }
  }
  uVar100 = 0;
  ((local_7e8.MeshDescription)->VertexInstanceToTriangles).bSuspended = true;
  ((local_7e8.MeshDescription)->EdgeToTriangles).bSuspended = true;
  ((local_7e8.MeshDescription)->PolygonToTriangles).bSuspended = true;
  ((local_7e8.MeshDescription)->PolygonGroupToPolygons).bSuspended = true;
  ((local_7e8.MeshDescription)->PolygonGroupToTriangles).bSuspended = true;
  ((local_7e8.MeshDescription)->UVToTriangles).bSuspended = true;
  local_938.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_938.ArrayNum = 0;
  local_938.ArrayMax = 0;
  DynamicMeshToMeshDescriptionConversionHelper::ConvertVertices
            (local_990,&local_7e8,(this->ConversionOptions).bConvertBackToNonManifold,&local_938);
  FMeshDescriptionBuilder::SetNumUVLayers(&local_7e8,uVar83);
  local_8c0.Data = (FScriptContainerElement *)0x0;
  local_8b8 = 0;
  if ((int)uVar83 < 1) {
    if ((int)uVar83 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar87);
    }
    local_980.Data = (FScriptContainerElement *)0x0;
    local_978 = 0;
    iStack_974 = 0;
    local_958[0] = 0xffffffff;
    if (uVar83 != 0) goto LAB_1443d1fb0;
  }
  else {
    iVar48 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar83,&local_8c0,(int *)&local_8b8,(int *)((longlong)&local_8b8 + 4)
                       );
    memset(local_8c0.Data + (longlong)iVar48 * 0x10,0,lVar101 << 4);
LAB_1443d1fb0:
    local_958[0] = 0xffffffff;
    local_978 = 0;
    iStack_974 = 0;
    local_980.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar83,&local_980,0,&iStack_974);
    if (0 < (int)uVar83) {
      do {
        if (((local_980.Data <= (FScriptContainerElement *)local_958) &&
            ((FScriptContainerElement *)local_958 < local_980.Data + (longlong)iStack_974 * 4)) &&
           (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar47)) {
          pcVar68 = (code *)swi(3);
          (*pcVar68)();
          return;
        }
        if (local_978 == iStack_974) {
          local_978 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_980,&iStack_974);
        }
        iVar48 = local_978 + 1;
        *(undefined4 *)(local_980.Data + (longlong)local_978 * 4) = local_958[0];
        uVar87 = uVar87 - 1;
        local_978 = iVar48;
      } while (uVar87 != 0);
    }
  }
  if (0 < (int)uVar83) {
    local_968 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
    local_918 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *
                )0x0;
    do {
      pTVar93 = local_918;
      pTVar31 = local_968;
      uVar83 = 0;
      if ((int)uVar100 < local_940) {
        uVar83 = ~uVar100 >> 0x1f;
      }
      if ((uVar83 == 0) &&
         (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar47)) {
        pcVar68 = (code *)swi(3);
        (*pcVar68)();
        return;
      }
      lVar101 = *(longlong *)(local_948.Data + (longlong)pTVar31 * 8);
      uVar83 = 0;
      if ((int)uVar100 < (int)local_8b8) {
        uVar83 = ~uVar100 >> 0x1f;
      }
      if ((uVar83 == 0) &&
         (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar47)) {
        pcVar68 = (code *)swi(3);
        (*pcVar68)();
        return;
      }
      this_07 = (TArray<FUVID,TSizedDefaultAllocator<32>_> *)(local_8c0.Data + (longlong)pTVar93);
      iVar48 = this_07->ArrayNum;
      piVar61 = &this_07->ArrayNum;
      uVar83 = *(int *)(lVar101 + 8) * 0x200 + *(int *)(lVar101 + 0xc);
      if (iVar48 < (int)uVar83) {
        iVar49 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar83 - iVar48,(ForAnyElementType *)this_07,piVar61,
                            &this_07->ArrayMax);
        DefaultConstructItems<FUVID,int>
                  ((this_07->AllocatorInstance).Data + (longlong)iVar49 * 4,uVar83 - iVar48);
      }
      else {
        if ((int)uVar83 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar83);
        }
        if ((int)uVar83 < iVar48) {
          uVar99 = iVar48 - uVar83;
          if (((int)(uVar99 | uVar83) < 0) &&
             (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar47)) {
            pcVar68 = (code *)swi(3);
            (*pcVar68)();
            return;
          }
          if (uVar99 != 0) {
            TArray<FUVID,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_07,uVar83,uVar99);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(ForAnyElementType *)this_07,*piVar61,&this_07->ArrayMax);
          }
        }
      }
      FMeshDescriptionBuilder::ReserveNewUVs(&local_7e8,*(int *)(lVar101 + 0x38),uVar100);
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                ((IndexIterator *)&local_680,(FRefCountVector *)(lVar101 + 8),0,
                 *(int *)(lVar101 + 8) * 0x200 + *(int *)(lVar101 + 0xc));
      iVar48 = *(int *)(lVar101 + 8) * 0x200 + *(int *)(lVar101 + 0xc);
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                (&local_520,(FRefCountVector *)(lVar101 + 8),iVar48,iVar48);
      uVar5 = local_520._8_4_;
      iVar48 = local_680.Index;
      uVar83 = local_988;
      this = local_860;
      while (local_988 = uVar83, local_860 = this, iVar48 != uVar5) {
        uVar83 = local_680.Index;
        local_530 = (double)*(float *)(*(longlong *)
                                        (*(longlong *)(lVar101 + 0x48) +
                                        (ulonglong)((uVar83 & 0x7fffffff) >> 8) * 8) +
                                      (ulonglong)(uVar83 * 2 & 0x1ff) * 4);
        local_528 = (double)*(float *)(*(longlong *)
                                        (*(longlong *)(lVar101 + 0x48) +
                                        (ulonglong)((uVar83 & 0x7fffffff) >> 8) * 8) +
                                      (ulonglong)(uVar83 * 2 + 1 & 0x1ff) * 4);
        FVar50 = FMeshDescriptionBuilder::AppendUV
                           (&local_7e8,(TVector2<double> *)local_698,(int)&local_530);
        uVar9 = *(undefined4 *)CONCAT44(extraout_var,FVar50);
        uVar99 = 0;
        if ((int)uVar83 < *piVar61) {
          uVar99 = ~uVar83 >> 0x1f;
        }
        if ((uVar99 == 0) &&
           (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar47)) {
          pcVar68 = (code *)swi(3);
          (*pcVar68)();
          return;
        }
        *(undefined4 *)((this_07->AllocatorInstance).Data + (longlong)(int)uVar83 * 4) = uVar9;
        UE::Geometry::FRefCountVector::BaseIterator::goto_next(&local_680);
        uVar83 = local_988;
        this = local_860;
        iVar48 = local_680.Index;
      }
      uVar100 = uVar100 + 1;
      local_968 = (TBitArray<FDefaultBitArrayAllocator> *)
                  ((local_968->AllocatorInstance).InlineData + 1);
      local_918 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *)((longlong)local_918 + 0x10);
    } while ((longlong)local_968 < local_838);
  }
  local_738.ComparisonIndex.Value = 0;
  local_738.Number = 0;
  pFVar66 = FMeshElementChannels::Get((local_7e8.MeshDescription)->PolygonGroupElements,0);
  uVar100 = FMeshElementContainer::Add(pFVar66);
  local_988 = uVar100;
  pTVar57 = TMeshAttributeArraySet<FName>::GetArrayForChannel
                      ((TMeshAttributeArraySet<FName> *)local_7e8.GroupMaterialSlotNames.ArrayPtr,0)
  ;
  pFVar58 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar57,uVar100);
  uVar70 = uStack_2e0;
  pTVar33 = local_878;
  pTVar54 = local_920;
  pTVar53 = local_960;
  *pFVar58 = local_738;
  if ((((local_96d == '\0') ||
       (local_878 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) ||
      (local_920 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) ||
     (local_960 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
    bVar47 = false;
  }
  else {
    bVar47 = true;
  }
  local_2e8 = (code *)0x0;
  plStack_2c0 = (longlong *)0x0;
  if (bVar47) {
    local_218 = (code *)0x0;
    plVar67 = FMemory::Malloc(0x28,8);
    uVar45 = uStack_1fc;
    uVar44 = uStack_200;
    uVar43 = uStack_204;
    uVar42 = local_208;
    uVar17 = uStack_210;
    plStack_1f0 = plStack_2c0;
    uVar41 = uStack_2cc;
    uVar40 = uStack_2d0;
    uVar9 = uStack_2d4;
    uVar5 = local_2d8;
    uVar70 = uStack_2e0;
    *plVar67 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::`50'::<lambda_1>,0,1>
                ::_vftable_;
    plVar67[1] = (longlong)pTVar33;
    plVar67[2] = (longlong)pTVar54;
    plVar67[3] = (longlong)pTVar53;
    plVar67[4] = (longlong)&local_7e8;
    pcVar68 = local_218;
    if (plVar67 + 1 != (longlong *)0x0) {
      pcVar68 = UE::Core::Private::Function::
                TFunctionRefCaller<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l50::<lambda_1>,void,int,FVertexInstanceID_*>
                ::Call;
    }
    uStack_2e0 = uStack_210;
    local_2c8._0_4_ = (undefined4)local_1f8;
    local_2c8._4_4_ = local_1f8._4_4_;
    plStack_2c0 = plVar67;
    local_2d8 = local_208;
    uStack_2d4 = uStack_204;
    uStack_2d0 = uStack_200;
    uStack_2cc = uStack_1fc;
    local_218 = local_2e8;
    uStack_210 = uVar70;
    local_208 = uVar5;
    uStack_204 = uVar9;
    uStack_200 = uVar40;
    uStack_1fc = uVar41;
    local_1c8 = local_1f8;
    if (local_2e8 != (code *)0x0) {
      local_2c8 = local_1f8;
      uStack_2cc = uVar45;
      uStack_2d0 = uVar44;
      uStack_2d4 = uVar43;
      local_2d8 = uVar42;
      uStack_2e0 = uVar17;
      plVar80 = (longlong *)&local_208;
      if (plStack_1f0 != (longlong *)0x0) {
        plVar80 = plStack_1f0;
      }
      local_2e8 = pcVar68;
      (**(code **)(*plVar80 + 0x10))();
      pcVar68 = local_2e8;
      local_1c8 = local_2c8;
    }
  }
  else if (local_878 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) {
    local_2e8 = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(int,FVertexInstanceID_*),void,int,FVertexInstanceID_*>
                ::Call;
    uStack_2e0 = uStack_1e0;
    local_2c8._0_4_ = (undefined4)local_1c8;
    local_2c8._4_4_ = local_1c8._4_4_;
    plStack_2c0 = (longlong *)0x0;
    local_2d8 = 0x50bcab90;
    uStack_2d4 = 1;
    uStack_2d0 = 0x443b50a0;
    uStack_2cc = 1;
    local_1e8 = 0;
    uStack_1e0 = uVar70;
    uStack_1c0 = 0;
    pcVar68 = local_2e8;
  }
  else {
    local_1c8 = &local_7e8;
    uStack_270 = SUB84(local_878,0);
    uStack_26c = (undefined4)((ulonglong)local_878 >> 0x20);
    local_2e8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l54::<lambda_2>,void,int,FVertexInstanceID_*>
                ::Call;
    uStack_2e0 = uStack_280;
    local_2c8 = local_1c8;
    plStack_2c0 = (longlong *)0x0;
    local_2d8 = 0x50bcab70;
    uStack_2d4 = 1;
    uStack_2d0 = uStack_270;
    uStack_2cc = uStack_26c;
    local_288 = 0;
    uStack_280 = uVar70;
    uStack_260 = 0;
    pcVar68 = local_2e8;
  }
  local_2e8 = pcVar68;
  uVar70 = uStack_2b0;
  pTVar89 = local_950;
  local_2b8 = (code *)0x0;
  plStack_290 = (longlong *)0x0;
  local_2c8 = local_1c8;
  if (local_950 == (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
    local_2b8 = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(int,FVertexInstanceID_*),void,int,FVertexInstanceID_*>
                ::Call;
    uStack_2b0 = uStack_1b0;
    local_298 = (undefined4)local_198;
    uStack_294 = local_198._4_4_;
    plStack_290 = (longlong *)0x0;
    local_2a8 = 0x50bcab90;
    uStack_2a4 = 1;
    uStack_2a0 = 0x443b50b0;
    uStack_29c = 1;
    local_1b8 = 0;
    uStack_1b0 = uVar70;
    uStack_190 = 0;
  }
  else {
    local_188 = (code *)0x0;
    plVar67 = FMemory::Malloc(0x20,8);
    uVar45 = uStack_16c;
    uVar44 = uStack_170;
    uVar43 = uStack_174;
    uVar42 = local_178;
    uVar17 = uStack_180;
    plStack_160 = plStack_290;
    uVar41 = uStack_29c;
    uVar40 = uStack_2a0;
    uVar9 = uStack_2a4;
    uVar5 = local_2a8;
    uVar70 = uStack_2b0;
    pcVar68 = local_2b8;
    *plVar67 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::`59'::<lambda_4>,0,1>
                ::_vftable_;
    plVar67[1] = (longlong)this;
    plVar67[2] = (longlong)pTVar89;
    plVar67[3] = (longlong)&local_7e8;
    local_2b8 = local_188;
    if (plVar67 + 1 != (longlong *)0x0) {
      local_2b8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l59::<lambda_4>,void,int,FVertexInstanceID_*>
                  ::Call;
    }
    uStack_2b0 = uStack_180;
    local_298 = (undefined4)local_168;
    uStack_294 = local_168._4_4_;
    plStack_290 = plVar67;
    local_2a8 = local_178;
    uStack_2a4 = uStack_174;
    uStack_2a0 = uStack_170;
    uStack_29c = uStack_16c;
    local_188 = pcVar68;
    uStack_180 = uVar70;
    local_178 = uVar5;
    uStack_174 = uVar9;
    uStack_170 = uVar40;
    uStack_16c = uVar41;
    if (pcVar68 != (code *)0x0) {
      uStack_29c = uVar45;
      uStack_2a0 = uVar44;
      uStack_2a4 = uVar43;
      local_2a8 = uVar42;
      uStack_2b0 = uVar17;
      plVar80 = (longlong *)&local_178;
      if (plStack_160 != (longlong *)0x0) {
        plVar80 = plStack_160;
      }
      (**(code **)(*plVar80 + 0x10))();
    }
  }
  pTVar32 = local_8d0;
  pFVar30 = local_990;
  uVar99 = 0;
  if (local_8d0 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    pFVar88 = &local_990->TriangleRefCounts;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)&local_670,pFVar88,0,
               (pFVar88->RefCounts).CurBlock * 0x200 +
               (local_990->TriangleRefCounts).RefCounts.CurBlockUsed);
    iVar48 = (pFVar88->RefCounts).CurBlock * 0x200 +
             (pFVar30->TriangleRefCounts).RefCounts.CurBlockUsed;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_510,pFVar88,iVar48,iVar48);
    if (local_670.Index != local_510._8_4_) {
      do {
        uVar82 = *(uint *)(*(longlong *)
                            (*(longlong *)&pTVar32->field_0x20 +
                            ((local_670._8_8_ & 0xffffffff) >> 9) * 8) +
                          (ulonglong)(local_670.Index & 0x1ff) * 4);
        if ((-1 < (int)uVar82) && ((int)uVar82 < (this->MaterialIDToPolygroupIDMap).ArrayNum)) {
          uVar96 = 0;
          if ((int)uVar82 < (this->MaterialIDToPolygroupIDMap).ArrayNum) {
            uVar96 = ~uVar82 >> 0x1f;
          }
          if (uVar96 == 0) {
            bVar47 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar47) {
              pcVar68 = (code *)swi(3);
              (*pcVar68)();
              return;
            }
          }
          uVar82 = *(uint *)((this->MaterialIDToPolygroupIDMap).AllocatorInstance.Data +
                            (longlong)(int)uVar82 * 4);
        }
        if ((int)uVar99 < (int)uVar82) {
          uVar99 = uVar82;
        }
        UE::Geometry::FRefCountVector::BaseIterator::goto_next(&local_670);
      } while (local_670.Index != local_510._8_4_);
      if (uVar99 != 0) {
        if (0 < (int)uVar99) {
          uVar91 = (ulonglong)uVar99;
          local_768 = 0;
          do {
            pFVar66 = FMeshElementChannels::Get((local_7e8.MeshDescription)->PolygonGroupElements,0)
            ;
            iVar48 = FMeshElementContainer::Add(pFVar66);
            pTVar57 = TMeshAttributeArraySet<FName>::GetArrayForChannel
                                ((TMeshAttributeArraySet<FName> *)
                                 local_7e8.GroupMaterialSlotNames.ArrayPtr,0);
            pFVar58 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar57,iVar48);
            pFVar58->ComparisonIndex = 0;
            pFVar58->Number = 0;
            uVar91 = uVar91 - 1;
          } while (uVar91 != 0);
        }
        goto LAB_1443d294a;
      }
    }
    local_8d0 = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
  }
LAB_1443d294a:
  local_820.Data = (FScriptContainerElement *)0x0;
  local_818[0] = 0;
  local_818[1] = 0;
  if (0 < (int)uVar83) {
    iVar48 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xc,4,uVar83,&local_820,local_818,local_818 + 1);
    DefaultConstructItems<UE::Geometry::FIndex3i,int>
              (local_820.Data + (longlong)iVar48 * 0xc,uVar83);
  }
  local_848.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_848.ArrayNum = 0;
  local_848.ArrayMax = 0;
  TArray<FTriangleID,TSizedDefaultAllocator<32>_>::SetNum
            (&local_848,
             (local_990->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (local_990->TriangleRefCounts).RefCounts.CurBlockUsed,Default);
  pFVar30 = local_990;
  pFVar88 = &local_990->TriangleRefCounts;
  UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
            (&local_8b0,pFVar88,0,
             (pFVar88->RefCounts).CurBlock * 0x200 +
             (local_990->TriangleRefCounts).RefCounts.CurBlockUsed);
  iVar48 = (pFVar88->RefCounts).CurBlock * 0x200 +
           (pFVar30->TriangleRefCounts).RefCounts.CurBlockUsed;
  UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_5a0,pFVar88,iVar48,iVar48);
  if (local_8b0._8_4_ != local_5a0._8_4_) {
    do {
      uVar99 = local_8b0._8_4_;
      local_968 = (TBitArray<FDefaultBitArrayAllocator> *)(longlong)(int)local_8b0._8_4_;
      local_850 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                   *)(ulonglong)(local_8b0._8_4_ & 0x1ff);
      local_918 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *)(ulonglong)((uint)local_8b0._8_4_ >> 9);
      local_920 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
                  CONCAT44(local_920._4_4_,local_8b0._8_4_);
      lVar101 = *(longlong *)
                 ((local_990->Triangles).Blocks.AllocatorInstance.Data + (longlong)local_918 * 8);
      local_870 = *(undefined8 *)(lVar101 + (longlong)local_850 * 0xc);
      uVar83 = *(uint *)(lVar101 + 8 + (longlong)local_850 * 0xc);
      uVar82 = (uint)local_870;
      local_b8 = 0xffffffffffffffff;
      local_b0[0] = (FPolygonGroupID)0xffffffff;
      uVar96 = 0;
      if ((int)(uint)local_870 < local_938.ArrayNum) {
        uVar96 = ~(uint)local_870 >> 0x1f;
      }
      local_868 = uVar83;
      if (uVar96 == 0) {
        bVar47 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar47) {
          pcVar68 = (code *)swi(3);
          (*pcVar68)();
          return;
        }
      }
      pFVar85 = local_7e8.MeshDescription;
      FVar10 = *(FVertexID *)(local_938.AllocatorInstance.Data + (longlong)(int)uVar82 * 4);
      pFVar66 = FMeshElementChannels::Get((local_7e8.MeshDescription)->VertexInstanceElements,0);
      FVar51 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar66);
      FMeshDescription::CreateVertexInstance_Internal(pFVar85,FVar51,FVar10);
      local_b8 = CONCAT44(local_b8._4_4_,FVar51);
      uVar82 = local_870._4_4_;
      uVar96 = 0;
      if ((int)local_870._4_4_ < local_938.ArrayNum) {
        uVar96 = ~local_870._4_4_ >> 0x1f;
      }
      if (uVar96 == 0) {
        bVar47 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar47) {
          pcVar68 = (code *)swi(3);
          (*pcVar68)();
          return;
        }
      }
      pFVar85 = local_7e8.MeshDescription;
      FVar10 = *(FVertexID *)(local_938.AllocatorInstance.Data + (longlong)(int)uVar82 * 4);
      pFVar66 = FMeshElementChannels::Get((local_7e8.MeshDescription)->VertexInstanceElements,0);
      FVar51 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar66);
      FMeshDescription::CreateVertexInstance_Internal(pFVar85,FVar51,FVar10);
      local_b8 = CONCAT44(FVar51,local_b8._0_4_);
      uVar82 = 0;
      if ((int)uVar83 < local_938.ArrayNum) {
        uVar82 = ~uVar83 >> 0x1f;
      }
      if (uVar82 == 0) {
        bVar47 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar47) {
          pcVar68 = (code *)swi(3);
          (*pcVar68)();
          return;
        }
      }
      pFVar85 = local_7e8.MeshDescription;
      FVar10 = *(FVertexID *)(local_938.AllocatorInstance.Data + (longlong)(int)uVar83 * 4);
      pFVar66 = FMeshElementChannels::Get((local_7e8.MeshDescription)->VertexInstanceElements,0);
      FVar51 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar66);
      FMeshDescription::CreateVertexInstance_Internal(pFVar85,FVar51,FVar10);
      pFVar34 = local_860;
      local_890 = uVar100;
      local_b0[0] = (FPolygonGroupID)FVar51;
      if (local_8d0 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
        local_890 = *(uint *)(*(longlong *)
                               (*(longlong *)&local_8d0->field_0x20 +
                               (((ulonglong)local_920 & 0xffffffff) >> 9) * 8) +
                             (ulonglong)((uint)local_920 & 0x1ff) * 4);
        lVar101 = (longlong)(int)local_890;
        if ((-1 < (int)local_890) &&
           ((int)local_890 < (local_860->MaterialIDToPolygroupIDMap).ArrayNum)) {
          uVar83 = 0;
          if ((int)local_890 < (local_860->MaterialIDToPolygroupIDMap).ArrayNum) {
            uVar83 = ~local_890 >> 0x1f;
          }
          if (uVar83 == 0) {
            local_890 = uVar100;
            bVar47 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar47) {
              pcVar68 = (code *)swi(3);
              (*pcVar68)();
              return;
            }
          }
          local_890 = *(uint *)((pFVar34->MaterialIDToPolygroupIDMap).AllocatorInstance.Data +
                               lVar101 * 4);
        }
      }
      FMeshDescriptionBuilder::AppendTriangle
                (&local_7e8,local_8e0,(FVertexInstanceID *)&local_b8,
                 (FVertexInstanceID *)((longlong)&local_b8 + 4),local_b0);
      FVar51 = local_8e0[0];
      pTVar31 = local_968;
      uVar83 = 0;
      if ((int)uVar99 < local_848.ArrayNum) {
        uVar83 = ~uVar99 >> 0x1f;
      }
      if (uVar83 == 0) {
        bVar47 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar47) {
          pcVar68 = (code *)swi(3);
          (*pcVar68)();
          return;
        }
      }
      uVar83 = 0;
      lVar101 = 0;
      *(FVertexInstanceID *)(local_848.AllocatorInstance.Data + (longlong)pTVar31 * 4) = FVar51;
      if (0 < local_838) {
        local_960 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
        uVar82 = (int)local_920 * 3;
        local_968 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)uVar82;
        local_8c8 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
                     *)(ulonglong)(uVar82 & 0x1ff);
        local_950 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
        do {
          pTVar73 = local_8c8;
          pTVar89 = local_950;
          pTVar31 = local_968;
          uVar99 = ~uVar83 >> 0x1f;
          uVar100 = 0;
          if ((int)uVar83 < local_940) {
            uVar100 = uVar99;
          }
          if (uVar100 == 0) {
            bVar47 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar47) {
              pcVar68 = (code *)swi(3);
              (*pcVar68)();
              return;
            }
          }
          if (*(int *)(*(longlong *)
                        (*(longlong *)(*(longlong *)(local_948.Data + lVar101 * 8) + 0x78) +
                        (ulonglong)(uVar82 >> 9) * 8) + (longlong)pTVar73 * 4) < 0) {
            uVar100 = 0;
            if ((int)uVar83 < local_978) {
              uVar100 = uVar99;
            }
            if (uVar100 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            if (*(int *)(local_980.Data + (longlong)pTVar89) == -1) {
              uVar100 = 0;
              if ((int)uVar83 < local_7e8.UVCoordinateLayers.ArrayNum) {
                uVar100 = uVar99;
              }
              if (uVar100 == 0) {
                bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar47) {
                  pcVar68 = (code *)swi(3);
                  (*pcVar68)();
                  return;
                }
              }
              this_00 = *(TMeshAttributeArraySet<UE::Math::TVector2<float>_> **)
                         (local_7e8.UVCoordinateLayers.AllocatorInstance.Data + lVar101 * 8);
              pFVar66 = FMeshElementChannels::Get((local_7e8.MeshDescription)->UVElements,uVar83);
              iVar48 = FMeshElementContainer::Add(pFVar66);
              local_760 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
              fStack_75c = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
              this_02 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                                  (this_00,0);
              pTVar69 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                   (this_02,iVar48)->field0_0x0;
              TVar28.field0_0x0._s_0.Y = fStack_75c;
              TVar28.field0_0x0._s_0.X = local_760;
              *pTVar69 = TVar28.field0_0x0;
              uVar100 = 0;
              if ((int)uVar83 < local_978) {
                uVar100 = uVar99;
              }
              if (uVar100 == 0) {
                bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar47) {
                  pcVar68 = (code *)swi(3);
                  (*pcVar68)();
                  return;
                }
              }
              *(int *)(local_980.Data + lVar101 * 4) = iVar48;
              pTVar89 = local_950;
            }
            uVar100 = 0;
            if ((int)uVar83 < local_978) {
              uVar100 = uVar99;
            }
            if (uVar100 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            FVar50 = *(FUVID *)(local_980.Data + lVar101 * 4);
            uVar100 = 0;
            if ((int)uVar83 < local_978) {
              uVar100 = uVar99;
            }
            if (uVar100 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            FVar94 = *(FUVID *)(local_980.Data + lVar101 * 4);
            uVar100 = 0;
            if ((int)uVar83 < local_978) {
              uVar100 = uVar99;
            }
            if (uVar100 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            FVar77 = *(FUVID *)(local_980.Data + lVar101 * 4);
          }
          else {
            uVar100 = 0;
            if ((int)uVar83 < (int)local_8b8) {
              uVar100 = uVar99;
            }
            if (uVar100 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            FVar86.Data = local_8c0.Data;
            uVar100 = 0;
            if ((int)uVar83 < local_940) {
              uVar100 = uVar99;
            }
            if (uVar100 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            uVar99 = (int)pTVar31 + 1;
            uVar96 = (int)pTVar31 + 2;
            lVar79 = *(longlong *)(*(longlong *)(local_948.Data + lVar101 * 8) + 0x78);
            uVar100 = *(uint *)(*(longlong *)(lVar79 + (ulonglong)(uVar82 >> 9) * 8) +
                               (longlong)pTVar73 * 4);
            uVar99 = *(uint *)(*(longlong *)(lVar79 + (ulonglong)(uVar99 >> 9) * 8) +
                              (ulonglong)(uVar99 & 0x1ff) * 4);
            uVar96 = *(uint *)(*(longlong *)(lVar79 + (ulonglong)(uVar96 >> 9) * 8) +
                              (ulonglong)(uVar96 & 0x1ff) * 4);
            uVar52 = 0;
            if ((int)uVar100 < *(int *)(FVar86.Data + 8 + (longlong)local_960)) {
              uVar52 = ~uVar100 >> 0x1f;
            }
            if (uVar52 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            FVar50 = *(FUVID *)(*(longlong *)(FVar86.Data + (longlong)local_960) +
                               (longlong)(int)uVar100 * 4);
            uVar100 = 0;
            if ((int)uVar99 < *(int *)(FVar86.Data + 8 + (longlong)local_960)) {
              uVar100 = ~uVar99 >> 0x1f;
            }
            if (uVar100 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            FVar94 = *(FUVID *)(*(longlong *)(FVar86.Data + (longlong)local_960) +
                               (longlong)(int)uVar99 * 4);
            uVar100 = 0;
            if ((int)uVar96 < *(int *)(FVar86.Data + 8 + (longlong)local_960)) {
              uVar100 = ~uVar96 >> 0x1f;
            }
            if (uVar100 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            FVar77 = *(FUVID *)(*(longlong *)(FVar86.Data + (longlong)local_960) +
                               (longlong)(int)uVar96 * 4);
            pTVar89 = local_950;
          }
          FMeshDescriptionBuilder::AppendUVTriangle
                    (&local_7e8,(FTriangleID *)local_8e0,FVar50,FVar94,FVar77,uVar83);
          local_960 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
                      ((longlong)local_960 + 0x10);
          local_950 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)
                      ((longlong)pTVar89 + 4);
          uVar83 = uVar83 + 1;
          lVar101 = lVar101 + 1;
          uVar99 = local_8b0._8_4_;
          uVar100 = local_988;
        } while (lVar101 < local_838);
      }
      local_6a0 = &local_b8;
      iVar48 = (int)local_920;
      local_818[2] = iVar48;
      UE::Core::Private::Function::CheckCallable(local_2e8);
      pcVar68 = local_2e8;
      plVar67 = (longlong *)&local_2d8;
      if (plStack_2c0 != (longlong *)0x0) {
        plVar67 = plStack_2c0;
      }
      uVar70 = (**(code **)(*plVar67 + 8))();
      (*pcVar68)(uVar70,local_818 + 2,&local_6a0);
      local_880 = &local_b8;
      local_828[0] = iVar48;
      UE::Core::Private::Function::CheckCallable(local_2b8);
      pcVar68 = local_2b8;
      plVar67 = (longlong *)&local_2a8;
      if (plStack_290 != (longlong *)0x0) {
        plVar67 = plStack_290;
      }
      uVar70 = (**(code **)(*plVar67 + 8))();
      (*pcVar68)(uVar70,local_828,&local_880);
      if (local_995 != '\0') {
        if ((local_990->TriangleGroups).bIsSet == false) {
          iVar48 = -1;
        }
        else if (((iVar48 < 0) ||
                 ((int)((local_990->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                       (local_990->TriangleRefCounts).RefCounts.CurBlockUsed) <= iVar48)) ||
                (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               ((local_990->TriangleRefCounts).RefCounts.Blocks.
                                                AllocatorInstance.Data + (longlong)local_918 * 8) +
                                             (longlong)local_850 * 2) - 1U))) {
          iVar48 = 0;
        }
        else {
          iVar48 = *(int *)(*(longlong *)
                             ((local_990->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                             (longlong)local_918 * 8) + (longlong)local_850 * 4);
        }
        FMeshDescription::GetTrianglePolygon(local_7e8.MeshDescription,SUB84(local_830,0));
        pTVar60 = TMeshAttributeArraySet<int>::GetArrayForChannel
                            ((TMeshAttributeArraySet<int> *)local_7e8.PolyGroups.ArrayPtr,0);
        piVar61 = TMeshAttributeArrayBase<int>::GetElementBase(pTVar60,local_830[0]);
        *piVar61 = iVar48;
      }
      local_8b0._8_4_ = uVar99 + 1;
      if ((int)local_8b0._8_4_ < (int)local_8b0._12_4_) {
        do {
          uVar100 = local_988;
          if ((*(short *)(*(longlong *)
                           (*(longlong *)(local_8b0._0_8_ + 8) +
                           (ulonglong)((uint)local_8b0._8_4_ >> 9) * 8) +
                         (ulonglong)(local_8b0._8_4_ & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)
                          (*(longlong *)(local_8b0._0_8_ + 8) +
                          (ulonglong)((uint)local_8b0._8_4_ >> 9) * 8) +
                        (ulonglong)(local_8b0._8_4_ & 0x1ff) * 2) != -1)) break;
          local_8b0._8_4_ = local_8b0._8_4_ + 1;
        } while ((int)local_8b0._8_4_ < (int)local_8b0._12_4_);
      }
    } while (local_8b0._8_4_ != local_5a0._8_4_);
  }
  pFVar34 = local_860;
  pFVar85 = local_888;
  ConvertPolygroupLayers(local_860,local_990,local_888,&local_848);
  ConvertWeightLayers(pFVar34,local_990,pFVar85,&local_938);
  if (((pFVar34->ConversionOptions).bSetHardEdgesFromNormalSeams == false) ||
     (local_878 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
    uVar83 = (uint)local_8d8;
  }
  else {
    pFVar66 = FMeshElementChannels::Get(pFVar85->EdgeElements,0);
    pFVar71 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar66->Attributes,MeshAttribute::Edge::IsHard);
    if (((pFVar71 == (FAttributesSetEntry *)0x0) ||
        (this_06 = (TMeshAttributeArraySet<bool> *)(pFVar71->Ptr).Ptr,
        *(uint *)&this_06->_padding_ != 5)) || (*(uint *)((longlong)&this_06->_padding_ + 4) != 1))
    {
      this_06 = (TMeshAttributeArraySet<bool> *)0x0;
    }
    local_8a0.Data = (FScriptContainerElement *)0x0;
    local_898 = 0;
    uVar100 = (local_990->EdgeRefCounts).RefCounts.CurBlockUsed +
              (local_990->EdgeRefCounts).RefCounts.CurBlock * 0x200;
    uVar83 = (uint)local_8d8;
    if ((int)uVar100 < 1) {
      if ((int)uVar100 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar100);
      }
    }
    else {
      iVar48 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (uVar83,uVar83,uVar100,&local_8a0,(int *)&local_898,
                          (int *)((longlong)&local_898 + 4));
      memset(local_8a0.Data + iVar48,0,(longlong)(int)uVar100);
    }
    local_500 = &local_990;
    local_590.DataPtr = (void **)0x0;
    local_4f8 = &local_878;
    local_590.ArrayNum = 0;
    local_4f0 = &local_8a0;
    local_580 = UE::Core::Private::Function::
                TFunctionRefCaller<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l110::<lambda_6>,void,int>
                ::Call;
    local_578 = &local_500;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               (local_990->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
               (local_990->EdgeRefCounts).RefCounts.CurBlockUsed,uVar83,
               (TFunctionRef<void___cdecl(int)> *)&local_580,local_997,None,&local_590);
    uVar91 = 0;
    if (0 < (int)local_898) {
      lVar101 = 0;
      do {
        uVar99 = (uint)uVar91;
        uVar100 = 0;
        if ((int)uVar99 < (int)local_898) {
          uVar100 = ~uVar99 >> 0x1f;
        }
        if (uVar100 == 0) {
          bVar47 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar47) {
            pcVar68 = (code *)swi(3);
            (*pcVar68)();
            return;
          }
        }
        if (local_8a0.Data[lVar101] != (FScriptContainerElement)0x0) {
          uVar100 = *(uint *)(*(longlong *)
                               ((local_990->Edges).Blocks.AllocatorInstance.Data + (uVar91 >> 9) * 8
                               ) + 8 + (ulonglong)(uVar99 & 0x1ff) * 0x10);
          lVar79 = *(longlong *)
                    ((local_990->TriangleEdges).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar100 >> 9) * 8);
          local_730 = *(undefined8 *)(lVar79 + (ulonglong)(uVar100 & 0x1ff) * 0xc);
          local_728 = *(uint *)(lVar79 + 8 + (ulonglong)(uVar100 & 0x1ff) * 0xc);
          if ((uint)local_730 == uVar99) {
            uVar82 = 0;
LAB_1443d36db:
            uVar96 = 0;
            if ((int)uVar100 < local_848.ArrayNum) {
              uVar96 = ~uVar100 >> 0x1f;
            }
            if (uVar96 == 0) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            TMeshAttributesRef<int,TArrayView<FEdgeID,int>_>::operator[]
                      (&pFVar85->TriangleEdges,&local_570,
                       *(int *)(local_848.AllocatorInstance.Data + (longlong)(int)uVar100 * 4));
            if ((-1 < (int)uVar82) && ((int)uVar82 < local_570.ArrayNum)) {
              uVar100 = 0;
              if ((int)uVar82 < local_570.ArrayNum) {
                uVar100 = ~uVar82 >> 0x1f;
              }
              if (uVar100 == 0) {
                bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar47) {
                  pcVar68 = (code *)swi(3);
                  (*pcVar68)();
                  return;
                }
              }
              FVar11 = local_570.DataPtr[(int)uVar82];
              this_03 = TMeshAttributeArraySet<bool>::GetArrayForChannel(this_06,0);
              pbVar72 = TMeshAttributeArrayBase<bool>::GetElementBase(this_03,(int)FVar11);
              *pbVar72 = true;
              goto LAB_1443d3833;
            }
            iVar48 = 0x480;
            pcVar102 = "OutTriEdges.IsValidIndex(EdgeTriSubIdx)";
            paVar81 = &bGEnsureHasExecuted<1814710123071800448>;
          }
          else {
            uVar82 = uVar83;
            if ((uint)((ulonglong)local_730 >> 0x20) == uVar99) goto LAB_1443d36db;
            if (local_728 == uVar99) {
              uVar82 = 2;
              goto LAB_1443d36db;
            }
            pcVar102 = "EdgeTriSubIdx != IndexConstants::InvalidID";
            paVar81 = &bGEnsureHasExecuted<1814710123071800441>;
            iVar48 = 0x479;
          }
          bVar47 = UE::Assert::Private::ExecCheckImplInternal
                             (paVar81,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\DynamicMeshToMeshDescription.cpp"
                              ,iVar48,pcVar102);
          if (bVar47) {
            pcVar68 = (code *)swi(3);
            (*pcVar68)();
            return;
          }
        }
LAB_1443d3833:
        uVar91 = (ulonglong)(uVar99 + 1);
        lVar101 = lVar101 + 1;
      } while ((int)(uVar99 + 1) < (int)local_898);
    }
    if (local_8a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a0.Data);
    }
  }
  if (bVar29) {
    pFVar92 = (local_990->AttributeSet).Ptr;
    pFVar78 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar92 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar78 = pFVar92;
    }
    local_808 = 0;
    iStack_7f4 = 0;
    iStack_7f0 = 0;
    pTStack_900 = (TBitArray<FDefaultBitArrayAllocator> *)
                  &(pFVar78->SkinWeightAttributes).field_0x10;
    iVar48 = *(int *)&(pFVar78->SkinWeightAttributes).field_0x28;
    pTVar93 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)
              &pFVar78->SkinWeightAttributes;
    uStack_804 = uVar83;
    if (iVar48 != 0) {
      puVar98 = *(uint **)&(pFVar78->SkinWeightAttributes).field_0x20;
      if (puVar98 == (uint *)0x0) {
        puVar98 = (uint *)pTStack_900;
      }
      uVar100 = *puVar98;
      local_808 = 0;
      iStack_7f0 = 0;
      while (uVar100 == 0) {
        iStack_7f0 = iStack_7f0 + 0x20;
        lVar101 = (longlong)local_808;
        local_808 = local_808 + 1;
        if ((int)(iVar48 + -1 + (iVar48 + -1 >> 0x1f & 0x1fU)) >> 5 < local_808) goto LAB_1443d3939;
        uVar100 = puVar98[lVar101 + 1];
      }
      uStack_804 = -uVar100 & uVar100;
      uVar91 = (ulonglong)uStack_804 * 2 + 1;
      lVar101 = 0x3f;
      if (uVar91 != 0) {
        for (; uVar91 >> lVar101 == 0; lVar101 = lVar101 + -1) {
        }
      }
      local_690.Key._4_4_ = (undefined4)lVar101;
      iStack_7f4 = iStack_7f0 + -1 + local_690.Key._4_4_;
      if (iVar48 < iStack_7f4) {
LAB_1443d3939:
        iStack_7f4 = iVar48;
      }
    }
    local_7f8 = 0xffffffff;
    uVar100 = *(uint *)&(pFVar78->SkinWeightAttributes).field_0x28;
    uStack_908 = CONCAT44(uStack_804,local_808);
    bVar76 = (byte)uVar100 & 0x1f;
    local_8e8 = *(int *)&(pFVar78->SkinWeightAttributes).field_0x8 -
                *(int *)&(pFVar78->SkinWeightAttributes).field_0x34;
    uStack_8f8._4_4_ = iStack_7f4;
    uStack_8f8._0_4_ = 0xffffffff;
    uStack_8f0._4_4_ = uStack_7ec;
    uStack_8f0._0_4_ = iStack_7f0;
    local_710._padding_._0_4_ = (int)uVar100 >> 5;
    local_710._padding_._4_4_ = uVar83 << bVar76;
    local_710.UnvisitedBitMask = -1 << bVar76;
    local_710.BaseBitIndex = uVar100 & 0xffffffe0;
    uStack_5a8 = CONCAT44(uStack_8e4,local_8e8);
    local_918 = pTVar93;
    local_910 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                 *)pTVar93;
    puStack_800 = (undefined1 *)pTStack_900;
    local_710.Array = pTStack_900;
    local_710.CurrentBitIndex = uVar100;
    local_5d0 = pTVar93;
    TStack_5c8._padding_ = uStack_908;
    TStack_5c8.Array = pTStack_900;
    TStack_5c8._16_8_ = uStack_8f8;
    TStack_5c8._24_8_ = uStack_8f0;
    if ((int)uVar100 < 0) {
      bVar47 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar47) {
        pcVar68 = (code *)swi(3);
        (*pcVar68)();
        return;
      }
    }
    if (uVar100 != *(uint *)&(pFVar78->SkinWeightAttributes).field_0x28) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_710);
    }
    uStack_908 = CONCAT44(local_710._padding_._4_4_,(int)local_710._padding_);
    uStack_8f8 = CONCAT44(local_710.CurrentBitIndex,local_710.UnvisitedBitMask);
    uStack_8f0 = CONCAT44(local_710._28_4_,local_710.BaseBitIndex);
    pTStack_900 = local_710.Array;
    local_968 = local_710.Array;
    local_988 = local_710.CurrentBitIndex;
    while( true ) {
      pTVar39 = local_5d0;
      uVar83 = local_988;
      if ((int)local_5d0->_padding_ - *(int *)((longlong)&local_5d0[1]._padding_ + 4) !=
          (int)uStack_5a8) {
        local_96e = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_96e);
      }
      lVar101 = (longlong)TStack_5c8.CurrentBitIndex;
      if (((TStack_5c8.CurrentBitIndex == uVar83) && (TStack_5c8.Array == local_968)) &&
         (pTVar39 == pTVar93)) break;
      lVar79 = pTVar39->_padding_;
      pTVar73 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>,0>_>
                 *)TMapBase<FName,FSkinWeightsVertexAttributesRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSkinWeightsVertexAttributesRef,0>_>
                   ::FindChecked((TMapBase<FName,FSkinWeightsVertexAttributesRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSkinWeightsVertexAttributesRef,0>_>
                                  *)&local_108,*(FName *)(lVar79 + lVar101 * 0x18));
      local_950 = *(TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> **)
                   (lVar79 + lVar101 * 0x18 + 8);
      uVar83 = 0;
      local_8c8 = pTVar73;
      if (0 < local_938.ArrayNum) {
        lVar101 = 0;
        do {
          uVar100 = 0;
          if ((int)uVar83 < local_938.ArrayNum) {
            uVar100 = ~uVar83 >> 0x1f;
          }
          if (uVar100 == 0) {
            bVar47 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar47) {
              pcVar68 = (code *)swi(3);
              (*pcVar68)();
              return;
            }
          }
          iVar48 = *(int *)(local_938.AllocatorInstance.Data + lVar101);
          if (iVar48 != -1) {
            local_258.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
            local_220 = 0;
            local_21c = 0xc;
            FVar90 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                     (*(longlong *)
                       (*(longlong *)&local_950->field_0x20 + (ulonglong)(uVar83 >> 9) * 8) +
                     (ulonglong)(uVar83 & 0x1ff) * 0x40);
            if ((ForElementType<UE::AnimationCore::FBoneWeight>)&local_258 != FVar90) {
              iVar49 = *(int *)((longlong)FVar90 + 0x38);
              if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar90 + 0x30) !=
                  (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                FVar90 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)
                          ((longlong)FVar90 + 0x30);
              }
              local_220 = iVar49;
              UE::Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                        (4,2,iVar49,0xc,&local_258,iVar49,&local_21c);
              _Dst = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_258;
              if (local_258.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                _Dst = local_258.SecondaryData;
              }
              if (iVar49 != 0) {
                memcpy((void *)_Dst,(void *)FVar90,(longlong)iVar49 << 2);
              }
            }
            pFVar14 = ((TMeshAttributesRef<FVertexID,TArrayAttribute<int>_> *)&pTVar73->field_0x0)->
                      ArrayPtr;
            if ((int)pFVar14[2].Type < 1) {
              bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar47) {
                pcVar68 = (code *)swi(3);
                (*pcVar68)();
                return;
              }
            }
            this_08 = pFVar14 + 1;
            if ((FMeshAttributeArraySetBase *)pFVar14[2]._padding_ !=
                (FMeshAttributeArraySetBase *)0x0) {
              this_08 = (FMeshAttributeArraySetBase *)pFVar14[2]._padding_;
            }
            TAttributeArrayContainer<int>::SetElementSize
                      ((TAttributeArrayContainer<int> *)this_08,&local_358,iVar48,local_220,true,
                       false);
            uVar100 = 0;
            if (0 < local_220) {
              lVar79 = 0;
              do {
                uVar99 = 0;
                if ((int)uVar100 < local_220) {
                  uVar99 = ~uVar100 >> 0x1f;
                }
                if (uVar99 == 0) {
                  bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar47) {
                    pcVar68 = (code *)swi(3);
                    (*pcVar68)();
                    return;
                  }
                }
                FVar90 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_258;
                if (local_258.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0)
                {
                  FVar90 = local_258.SecondaryData;
                }
                uVar7 = *(undefined2 *)(lVar79 + (longlong)FVar90);
                uVar8 = *(undefined2 *)(lVar79 + 2 + (longlong)FVar90);
                this_04 = TAttributeArrayContainer<int>::Get
                                    ((TAttributeArrayContainer<int> *)this_08,&local_368,iVar48);
                piVar61 = TArrayView<int,int>::operator[](this_04,uVar100);
                uVar100 = uVar100 + 1;
                lVar79 = lVar79 + 4;
                *piVar61 = CONCAT22(uVar7,uVar8);
                pTVar73 = local_8c8;
              } while ((int)uVar100 < local_220);
            }
            if (local_258.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FMemory::Free((void *)local_258.SecondaryData);
            }
          }
          uVar83 = uVar83 + 1;
          lVar101 = lVar101 + 4;
        } while ((int)uVar83 < local_938.ArrayNum);
      }
      TStack_5c8.UnvisitedBitMask = TStack_5c8.UnvisitedBitMask & ~TStack_5c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5c8);
      pTVar93 = local_918;
    }
    uVar83 = (uint)local_8d8;
  }
  if (local_996 != '\0') {
    pFVar92 = (local_990->AttributeSet).Ptr;
    pFVar78 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar92 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar78 = pFVar92;
    }
    iVar49 = 0;
    iVar97 = 0;
    pTStack_900 = (TBitArray<FDefaultBitArrayAllocator> *)
                  &(pFVar78->MorphTargetAttributes).field_0x10;
    iVar48 = *(int *)&(pFVar78->MorphTargetAttributes).field_0x28;
    pTVar73 = &pFVar78->MorphTargetAttributes;
    TStack_5f8.CurrentBitIndex = 0;
    if (iVar48 != 0) {
      puVar98 = *(uint **)&(pFVar78->MorphTargetAttributes).field_0x20;
      if (puVar98 == (uint *)0x0) {
        puVar98 = (uint *)pTStack_900;
      }
      uVar100 = *puVar98;
      while (uVar100 == 0) {
        lVar101 = (longlong)iVar49;
        iVar97 = iVar97 + 0x20;
        iVar49 = iVar49 + 1;
        TStack_5f8.CurrentBitIndex = iVar48;
        if ((int)(iVar48 + -1 + (iVar48 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar49) goto LAB_1443d3e00;
        uVar100 = puVar98[lVar101 + 1];
      }
      uVar83 = -uVar100 & uVar100;
      uVar91 = (ulonglong)uVar83 * 2 + 1;
      lVar101 = 0x3f;
      if (uVar91 != 0) {
        for (; uVar91 >> lVar101 == 0; lVar101 = lVar101 + -1) {
        }
      }
      local_690.Value._4_4_ = (int)lVar101;
      TStack_5f8.CurrentBitIndex = iVar97 + -1 + local_690.Value._4_4_;
      if (iVar48 < TStack_5f8.CurrentBitIndex) {
        TStack_5f8.CurrentBitIndex = iVar48;
      }
    }
LAB_1443d3e00:
    puVar2 = &(pFVar78->MorphTargetAttributes).field_0x10;
    local_8e8 = *(int *)&(pFVar78->MorphTargetAttributes).field_0x8 -
                *(int *)&(pFVar78->MorphTargetAttributes).field_0x34;
    uVar100 = *(uint *)&(pFVar78->MorphTargetAttributes).field_0x28;
    uStack_908 = CONCAT44(uVar83,iVar49);
    uVar83 = uVar100 & 0xffffffe0;
    uStack_8f8 = CONCAT44(TStack_5f8.CurrentBitIndex,0xffffffff);
    uStack_8f0 = CONCAT44(local_2ec,iVar97);
    TStack_5f8._padding_ = uStack_908;
    iVar48 = (int)uVar100 >> 5;
    uStack_5d8 = CONCAT44(uStack_8e4,local_8e8);
    TStack_5f8.UnvisitedBitMask = 0xffffffff;
    TStack_5f8._24_8_ = uStack_8f0;
    local_910 = (TMap<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                 *)pTVar73;
    local_8c8 = pTVar73;
    local_600 = pTVar73;
    TStack_5f8.Array = pTStack_900;
    if ((int)uVar100 < 0) {
      bVar47 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar47) {
        pcVar68 = (code *)swi(3);
        (*pcVar68)();
        return;
      }
    }
    uVar99 = *(uint *)&(pFVar78->MorphTargetAttributes).field_0x28;
    if (uVar100 != uVar99) {
      puVar15 = *(undefined1 **)&(pFVar78->MorphTargetAttributes).field_0x20;
      puVar95 = puVar2;
      if (puVar15 != (undefined1 *)0x0) {
        puVar95 = puVar15;
      }
      uVar100 = -1 << ((byte)uVar100 & 0x1f) & *(uint *)(puVar95 + (longlong)iVar48 * 4);
      while (uVar100 == 0) {
        lVar101 = (longlong)iVar48;
        uVar83 = uVar83 + 0x20;
        iVar48 = iVar48 + 1;
        uVar100 = uVar99;
        if ((int)((uVar99 - 1) + ((int)(uVar99 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar48)
        goto LAB_1443d3f23;
        uVar100 = *(uint *)(puVar95 + lVar101 * 4 + 4);
      }
      uVar91 = (ulonglong)(-uVar100 & uVar100) * 2 + 1;
      lVar101 = 0x3f;
      if (uVar91 != 0) {
        for (; uVar91 >> lVar101 == 0; lVar101 = lVar101 + -1) {
        }
      }
      local_690.Value._0_4_ = (int)lVar101;
      uVar100 = (int)local_690.Value + -1 + uVar83;
      if ((int)uVar99 < (int)uVar100) {
        uVar100 = uVar99;
      }
    }
LAB_1443d3f23:
    while( true ) {
      pTVar38 = local_600;
      if (*(int *)&local_600->field_0x8 - *(int *)&local_600->field_0x34 != (int)uStack_5d8) {
        local_997 = (<lambda_1>)0x0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_997);
      }
      lVar101 = (longlong)TStack_5f8.CurrentBitIndex;
      if (((TStack_5f8.CurrentBitIndex == uVar100) &&
          (TStack_5f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar38 == pTVar73)) break;
      pFVar14 = ((TMeshAttributesRef<FVertexID,TArrayAttribute<int>_> *)&pTVar38->field_0x0)->
                ArrayPtr;
      pTVar74 = TMapBase<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>,0>_>
                ::FindChecked((TMapBase<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>,0>_>
                               *)&local_158,(FName)pFVar14[lVar101]._padding_);
      lVar101 = *(longlong *)&pFVar14[lVar101].Type;
      uVar83 = 0;
      if (0 < local_938.ArrayNum) {
        lVar79 = 0;
        iVar48 = local_938.ArrayNum;
        do {
          uVar99 = 0;
          if ((int)uVar83 < iVar48) {
            uVar99 = ~uVar83 >> 0x1f;
          }
          if (uVar99 == 0) {
            bVar47 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar47) {
              pcVar68 = (code *)swi(3);
              (*pcVar68)();
              return;
            }
            iVar48 = local_938.ArrayNum;
          }
          iVar49 = *(int *)(local_938.AllocatorInstance.Data + lVar79);
          if (iVar49 != -1) {
            lVar16 = *(longlong *)(lVar101 + 0x20);
            uVar99 = uVar83 * 3;
            uVar5 = *(undefined4 *)
                     (*(longlong *)(lVar16 + (ulonglong)(uVar99 >> 9) * 8) +
                     (ulonglong)(uVar99 & 0x1ff) * 4);
            uVar9 = *(undefined4 *)
                     (*(longlong *)(lVar16 + (ulonglong)(uVar99 + 1 >> 9) * 8) +
                     (ulonglong)(uVar99 + 1 & 0x1ff) * 4);
            fVar6 = *(float *)(*(longlong *)(lVar16 + (ulonglong)(uVar99 + 2 >> 9) * 8) +
                              (ulonglong)(uVar99 + 2 & 0x1ff) * 4);
            local_4e0 = fVar6;
            this_05 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                                 pTVar74->ArrayPtr,0);
            pTVar75 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                (this_05,iVar49);
            local_4e8 = CONCAT44(uVar9,uVar5);
            *(ulonglong *)&pTVar75->field0_0x0 = CONCAT44(uVar9,uVar5);
            (pTVar75->field0_0x0)._s_0.Z = fVar6;
            iVar48 = local_938.ArrayNum;
          }
          uVar83 = uVar83 + 1;
          lVar79 = lVar79 + 4;
        } while ((int)uVar83 < iVar48);
      }
      TStack_5f8.UnvisitedBitMask = TStack_5f8.UnvisitedBitMask & ~TStack_5f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5f8);
      pTVar73 = local_8c8;
    }
  }
  ((local_7e8.MeshDescription)->VertexInstanceToTriangles).bSuspended = false;
  ((local_7e8.MeshDescription)->VertexInstanceToTriangles).bEverythingStale = true;
  ((local_7e8.MeshDescription)->EdgeToTriangles).bSuspended = false;
  ((local_7e8.MeshDescription)->EdgeToTriangles).bEverythingStale = true;
  ((local_7e8.MeshDescription)->PolygonToTriangles).bSuspended = false;
  ((local_7e8.MeshDescription)->PolygonToTriangles).bEverythingStale = true;
  ((local_7e8.MeshDescription)->PolygonGroupToPolygons).bSuspended = false;
  ((local_7e8.MeshDescription)->PolygonGroupToPolygons).bEverythingStale = true;
  ((local_7e8.MeshDescription)->PolygonGroupToTriangles).bSuspended = false;
  ((local_7e8.MeshDescription)->PolygonGroupToTriangles).bEverythingStale = true;
  ((local_7e8.MeshDescription)->UVToTriangles).bSuspended = false;
  ((local_7e8.MeshDescription)->UVToTriangles).bEverythingStale = true;
  if (local_848.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_848.AllocatorInstance.Data);
  }
  if (local_820.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_820.Data);
  }
  if (local_2b8 != (code *)0x0) {
    plVar67 = (longlong *)&local_2a8;
    if (plStack_290 != (longlong *)0x0) {
      plVar67 = plStack_290;
    }
    (**(code **)(*plVar67 + 0x10))();
  }
  if (local_2e8 != (code *)0x0) {
    plVar67 = (longlong *)&local_2d8;
    if (plStack_2c0 != (longlong *)0x0) {
      plVar67 = plStack_2c0;
    }
    (**(code **)(*plVar67 + 0x10))();
  }
  if (local_980.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_980.Data);
  }
  DestructItems<TArray<FUVID,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FUVID,TSizedDefaultAllocator<32>_> *)local_8c0.Data,(int)local_8b8);
  if ((TArray<FUVID,TSizedDefaultAllocator<32>_> *)local_8c0.Data !=
      (TArray<FUVID,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_8c0.Data);
  }
  if (local_938.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_938.AllocatorInstance.Data);
  }
  local_158.HashSize = 0;
  if (local_158.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_158.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_158.Elements);
  local_108.HashSize = 0;
  if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_108.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FSkinWeightsVertexAttributesRef>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FSkinWeightsVertexAttributesRef>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_108.Elements);
  if (local_7e8.TempUVBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7e8.TempUVBuffer.AllocatorInstance.Data);
  }
  if (local_7e8.TempBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7e8.TempBuffer.AllocatorInstance.Data);
  }
  if (local_7e8.UVCoordinateLayers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7e8.UVCoordinateLayers.AllocatorInstance.Data);
  }
  if (local_948.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_948.Data);
  }
  return;
}

// Convert_SharedInstances @ 1443d4290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDynamicMeshToMeshDescription::Convert_SharedInstances
          (FDynamicMeshToMeshDescription *this,FDynamicMesh3 *param_1,FMeshDescription *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  FVertexInstanceID FVar3;
  FDynamicMeshAttributeSet *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TVector2<float> TVar7;
  ForAnyElementType FVar8;
  FDynamicMesh3 *pFVar9;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar10;
  FDynamicMeshToMeshDescription *pFVar11;
  undefined8 uVar12;
  FMeshDescription *this_00;
  bool bVar13;
  FVertexID FVar14;
  uint uVar15;
  uint uVar16;
  FVertexInstanceID FVar17;
  undefined4 extraout_var;
  FMeshElementContainer *pFVar18;
  TMeshAttributeArrayBase<FName> *pTVar19;
  FName *pFVar20;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar21;
  TVector<float> *pTVar22;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_01;
  TVector2<float>_u_0 *pTVar23;
  TMeshAttributeArrayBase<int> *this_02;
  int *piVar24;
  undefined ***pppuVar25;
  longlong *plVar26;
  uint uVar27;
  FSmallListSet *pFVar28;
  TVector2<float>_u_0 TVar29;
  ulonglong uVar30;
  TVector2<float>_u_0 TVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  longlong lVar39;
  longlong lVar40;
  FRefCountVector *pFVar41;
  longlong lVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auStackY_558 [32];
  ForAnyElementType local_508;
  undefined8 local_500;
  char local_4f8;
  FVertexInstanceID local_4f4;
  FVertexInstanceID local_4f0;
  FVertexInstanceID local_4ec;
  uint local_4e8;
  longlong local_4e0;
  ulonglong local_4d8;
  ulonglong local_4d0;
  ulonglong local_4c8;
  ulonglong local_4c0;
  ForAnyElementType local_4b8;
  int local_4b0 [4];
  ulonglong local_4a0;
  longlong local_498;
  int local_490;
  uint local_48c;
  longlong local_488;
  FDynamicMesh3 *local_480;
  undefined8 local_478;
  TDynamicMeshScalarTriangleAttribute<int> *local_470;
  TArray<FVertexID,TSizedDefaultAllocator<32>_> local_468;
  uint local_458;
  FVertexInstanceID local_454;
  int local_450 [2];
  FPolygonGroupID *local_448;
  IndexIterator local_440;
  longlong local_430;
  FDynamicMeshToMeshDescription *local_428;
  FName local_420;
  undefined8 local_418;
  undefined4 local_410;
  undefined4 uStack_40c;
  float local_408;
  float fStack_404;
  FVertexInstanceID local_400 [4];
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined8 local_3d8;
  uint local_3d0;
  int local_3c8 [4];
  FMeshDescriptionBuilder local_3b8;
  ulonglong local_338;
  undefined1 local_330 [24];
  BaseIterator local_318;
  FSmallListSet *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  uint uStack_2f4;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  code *local_2d8 [2];
  undefined **local_2c8;
  FDynamicMesh3 *local_2c0;
  int local_2b8;
  undefined ***local_2b0;
  IndexIterator local_2a8;
  IndexIterator local_298;
  IndexIterator local_288;
  undefined8 local_278;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  BaseValueIterator local_240;
  undefined1 local_218 [40];
  longlong *local_1f0;
  FSmallListSet *local_1e8;
  ulonglong uStack_1e0;
  int local_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int local_1c8;
  undefined4 uStack_1c4;
  FSmallListSet *local_1c0;
  ulonglong uStack_1b8;
  longlong local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [144];
  undefined1 local_108 [144];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_558;
  pFVar4 = (param_1->AttributeSet).Ptr;
  if ((pFVar4 == (FDynamicMeshAttributeSet *)0x0) || ((pFVar4->NormalLayers).Array.ArrayNum < 1)) {
    lVar39 = 0;
  }
  else {
    lVar39 = *(longlong *)(pFVar4->NormalLayers).Array.AllocatorInstance.Data;
  }
  local_488 = lVar39;
  local_480 = param_1;
  local_428 = this;
  FMeshDescription::Empty(param_2);
  local_3b8.VertexPositions.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_3b8.InstanceTangents.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_3b8.InstanceBiTangentSign.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_3b8.InstanceColors.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_3b8.UVCoordinateLayers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3b8.InstanceUVs.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_3b8.InstanceNormals.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_3b8.UVCoordinateLayers.ArrayNum = 0;
  local_3b8.UVCoordinateLayers.ArrayMax = 0;
  local_3b8.TempBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3b8.TempBuffer.ArrayNum = 0;
  local_3b8.TempBuffer.ArrayMax = 0;
  local_3b8.TempUVBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3b8.TempUVBuffer.ArrayNum = 0;
  local_3b8.TempUVBuffer.ArrayMax = 0;
  local_3b8.PolyGroups.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_3b8.GroupMaterialSlotNames.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  FMeshDescriptionBuilder::SetMeshDescription(&local_3b8,param_2);
  local_4f8 = '\0';
  if (((this->ConversionOptions).bSetPolyGroups != false) &&
     ((param_1->TriangleGroups).bIsSet != false)) {
    FMeshDescriptionBuilder::EnablePolyGroups(&local_3b8);
    local_4f8 = '\x01';
  }
  pFVar41 = &param_1->VertexRefCounts;
  local_468.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_468.ArrayNum = 0;
  local_468.ArrayMax = 0;
  TArray<FVertexID,TSizedDefaultAllocator<32>_>::SetNum
            (&local_468,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed,Default);
  UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)(local_330 + 8),pFVar41,0,
             (pFVar41->RefCounts).CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  iVar34 = (pFVar41->RefCounts).CurBlock * 0x200 + (param_1->VertexRefCounts).RefCounts.CurBlockUsed
  ;
  UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_2a8,pFVar41,iVar34,iVar34);
  iVar34 = (int)local_330._16_8_;
  while (iVar34 != local_2a8._8_4_) {
    uVar27 = (uint)local_330._16_8_;
    lVar40 = *(longlong *)
              ((param_1->Vertices).Blocks.AllocatorInstance.Data +
              ((local_330._16_8_ & 0xffffffff) >> 9) * 8);
    puVar2 = (undefined8 *)(lVar40 + (ulonglong)(uVar27 & 0x1ff) * 0x18);
    local_258 = *puVar2;
    uStack_250 = puVar2[1];
    local_248 = *(undefined8 *)(lVar40 + 0x10 + (ulonglong)(uVar27 & 0x1ff) * 0x18);
    FVar14 = FMeshDescriptionBuilder::AppendVertex(&local_3b8,(TVector<double> *)local_330);
    uVar43 = *(undefined4 *)CONCAT44(extraout_var,FVar14);
    uVar15 = 0;
    if ((int)uVar27 < local_468.ArrayNum) {
      uVar15 = ~uVar27 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined4 *)(local_468.AllocatorInstance.Data + (longlong)(int)uVar27 * 4) = uVar43;
    UE::Geometry::FRefCountVector::BaseIterator::goto_next((BaseIterator *)(local_330 + 8));
    iVar34 = (int)local_330._16_8_;
  }
  local_420.ComparisonIndex.Value = 0;
  local_420.Number = 0;
  pFVar18 = FMeshElementChannels::Get((local_3b8.MeshDescription)->PolygonGroupElements,0);
  uVar15 = FMeshElementContainer::Add(pFVar18);
  local_4b0[2] = uVar15;
  pTVar19 = TMeshAttributeArraySet<FName>::GetArrayForChannel
                      ((TMeshAttributeArraySet<FName> *)local_3b8.GroupMaterialSlotNames.ArrayPtr,0)
  ;
  pFVar20 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar19,uVar15);
  *pFVar20 = local_420;
  pFVar4 = (param_1->AttributeSet).Ptr;
  if ((pFVar4 != (FDynamicMeshAttributeSet *)0x0) &&
     (local_470 = (pFVar4->MaterialIDAttrib).Ptr,
     local_470 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) {
    pFVar41 = &param_1->TriangleRefCounts;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)&local_318,pFVar41,0,
               (pFVar41->RefCounts).CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
    iVar34 = (pFVar41->RefCounts).CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_298,pFVar41,iVar34,iVar34);
    pFVar11 = local_428;
    pTVar10 = local_470;
    if (local_318.Index != local_298._8_4_) {
      uVar30 = 0;
      do {
        uVar27 = *(uint *)(*(longlong *)
                            (*(longlong *)&pTVar10->field_0x20 +
                            ((local_318._8_8_ & 0xffffffff) >> 9) * 8) +
                          (ulonglong)(local_318.Index & 0x1ff) * 4);
        if ((-1 < (int)uVar27) && ((int)uVar27 < (pFVar11->MaterialIDToPolygroupIDMap).ArrayNum)) {
          uVar16 = 0;
          if ((int)uVar27 < (pFVar11->MaterialIDToPolygroupIDMap).ArrayNum) {
            uVar16 = ~uVar27 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar27 = *(uint *)((pFVar11->MaterialIDToPolygroupIDMap).AllocatorInstance.Data +
                            (longlong)(int)uVar27 * 4);
        }
        if ((int)uVar30 < (int)uVar27) {
          uVar30 = (ulonglong)uVar27;
        }
        UE::Geometry::FRefCountVector::BaseIterator::goto_next(&local_318);
        lVar39 = local_488;
      } while (local_318.Index != local_298._8_4_);
      if ((int)uVar30 != 0) {
        if (0 < (int)uVar30) {
          local_418 = 0;
          do {
            pFVar18 = FMeshElementChannels::Get((local_3b8.MeshDescription)->PolygonGroupElements,0)
            ;
            iVar34 = FMeshElementContainer::Add(pFVar18);
            pTVar19 = TMeshAttributeArraySet<FName>::GetArrayForChannel
                                ((TMeshAttributeArraySet<FName> *)
                                 local_3b8.GroupMaterialSlotNames.ArrayPtr,0);
            pFVar20 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar19,iVar34);
            pFVar20->ComparisonIndex = 0;
            pFVar20->Number = 0;
            uVar30 = uVar30 - 1;
          } while (uVar30 != 0);
        }
        goto LAB_1443d46da;
      }
    }
  }
  local_470 = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
LAB_1443d46da:
  pFVar41 = &param_1->VertexRefCounts;
  uVar27 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  local_4b8.Data = (FScriptContainerElement *)0x0;
  local_4b0[0] = 0;
  local_4b0[1] = 0;
  if ((int)uVar27 < 1) {
    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
    }
  }
  else {
    iVar34 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xc,4,uVar27,&local_4b8,local_4b0,local_4b0 + 1);
    DefaultConstructItems<_FDynamicMeshToMeshDescription::Convert_SharedInstances_::__l2::Tri,int>
              (local_4b8.Data + (longlong)iVar34 * 0xc,uVar27);
  }
  pFVar4 = (param_1->AttributeSet).Ptr;
  local_508.Data = (FScriptContainerElement *)0x0;
  local_500 = 0;
  if (pFVar4 == (FDynamicMeshAttributeSet *)0x0) {
    iVar34 = 0;
  }
  else {
    iVar34 = (**(code **)(pFVar4->_padding_ + 0xa8))();
  }
  FMeshDescriptionBuilder::SetNumUVLayers(&local_3b8,iVar34);
  iVar32 = (lVar39 != 0) + 1 + iVar34;
  local_490 = iVar32;
  UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
            (&local_440,pFVar41,0,
             (pFVar41->RefCounts).CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  iVar35 = (pFVar41->RefCounts).CurBlock * 0x200 + (param_1->VertexRefCounts).RefCounts.CurBlockUsed
  ;
  UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_288,pFVar41,iVar35,iVar35);
  uVar30 = (ulonglong)(uint)local_440._8_4_;
  lVar39 = (longlong)iVar34;
  local_4e8 = local_440._8_4_;
  local_498 = lVar39;
  if (local_440._8_4_ != local_288._8_4_) {
    local_448 = (FPolygonGroupID *)(longlong)iVar32;
    do {
      lVar40 = local_500;
      pFVar28 = &param_1->VertexEdgeLists;
      uVar15 = local_500._4_4_;
      local_500 = (ulonglong)local_500._4_4_ << 0x20;
      if ((lVar40 < 0) && (uVar15 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_508,0,(int *)((longlong)&local_500 + 4));
      }
      local_2b0 = (undefined ***)0x0;
      local_2d8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
                     ::Call;
      iVar34 = (int)uVar30;
      local_2c8 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxTrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__TPairExpandEnumerable_VValueIterator_FSmallListSet_Geometry_UE___45_H_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_218._0_8_ = 0;
      local_1f0 = (longlong *)0x0;
      local_1e8 = (FSmallListSet *)0x0;
      uStack_1e0 = uStack_1e0 & 0xffffffff00000000;
      local_1c0 = (FSmallListSet *)0x0;
      uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
      local_2c0 = param_1;
      local_2b8 = iVar34;
      UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
                (&local_240,pFVar28,iVar34,false);
      local_1e8 = local_240.ListSet;
      uStack_1e0._0_4_ = local_240.ListIndex;
      uStack_1e0._4_4_ = local_240.block_ptr;
      local_1c8 = local_240.cur_value;
      uStack_1c4 = local_240._36_4_;
      local_1d8 = local_240.N;
      iStack_1d4 = local_240.iEnd;
      iStack_1d0 = local_240.iCur;
      iStack_1cc = local_240.cur_ptr;
      uStack_2fc = 0xffffffff;
      uStack_1b8 = CONCAT44(0xffffffff,iVar34);
      local_2f8 = 0;
      uStack_2f0 = 0xffffffffffffffff;
      local_1b0 = (ulonglong)uStack_2f4 << 0x20;
      local_1a0 = local_2e8;
      uStack_1a8 = 0xffffffffffffffff;
      local_308 = pFVar28;
      iStack_300 = iVar34;
      local_1c0 = pFVar28;
      TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=
                ((TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_218,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_2d8);
      if (local_2d8[0] != (code *)0x0) {
        pppuVar25 = &local_2c8;
        if (local_2b0 != (undefined ***)0x0) {
          pppuVar25 = local_2b0;
        }
        (*(code *)(*pppuVar25)[2])();
      }
      UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_198,
                 (ValueIterator *)&local_1e8,(ValueIterator *)&local_1c0,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_218);
      UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_108,
                 (ValueIterator *)&local_1c0,(ValueIterator *)&local_1c0,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_218);
      local_430 = (longlong)iVar34;
      while ((((uVar15 = (uint)uVar30, local_198._0_8_ != local_108._0_8_ ||
               (local_198._8_4_ != local_108._8_4_)) || (local_198._24_4_ != local_108._24_4_)) ||
             (local_198._28_4_ != local_108._28_4_))) {
        local_4a0 = (ulonglong)(uint)local_198._88_4_;
        local_458 = local_198._88_4_;
        lVar40 = *(longlong *)
                  ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)local_198._88_4_ >> 9) * 8);
        local_3d8 = *(undefined8 *)(lVar40 + (ulonglong)(local_198._88_4_ & 0x1ff) * 0xc);
        local_3d0 = *(uint *)(lVar40 + 8 + (ulonglong)(local_198._88_4_ & 0x1ff) * 0xc);
        uVar12 = local_3d8;
        if ((uint)local_3d8 == uVar15) {
          lVar40 = 0;
        }
        else if ((uint)((ulonglong)local_3d8 >> 0x20) == uVar15) {
          lVar40 = 1;
        }
        else {
          lVar40 = -1;
          if (local_3d0 == uVar15) {
            lVar40 = 2;
          }
        }
        uVar27 = 0;
        local_4f4 = (FVertexInstanceID)0xffffffff;
        local_478 = (TVector2<float>_u_0)0x0;
        local_4e0 = lVar40;
        local_3d8 = uVar12;
        if ((int)local_500 < 1) {
LAB_1443d4de6:
          lVar39 = local_430;
          uVar27 = 0;
          if ((int)uVar15 < local_468.ArrayNum) {
            uVar27 = ~uVar15 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          this_00 = local_3b8.MeshDescription;
          FVar14 = *(FVertexID *)(local_468.AllocatorInstance.Data + lVar39 * 4);
          pFVar18 = FMeshElementChannels::Get((local_3b8.MeshDescription)->VertexInstanceElements,0)
          ;
          FVar17 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar18);
          FMeshDescription::CreateVertexInstance_Internal(this_00,FVar17,FVar14);
          lVar40 = local_488;
          lVar39 = local_4e0;
          if (local_488 == 0) {
            if ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                local_3b8.InstanceNormals.ArrayPtr !=
                (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
              fVar46 = (float)UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
              fVar45 = (float)UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
              fVar44 = (float)UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
              pTVar21 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                  ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                                   local_3b8.InstanceNormals.ArrayPtr,0);
              pTVar22 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                  (pTVar21,(int)FVar17);
              (pTVar22->field0_0x0)._s_0.X = fVar46;
              (pTVar22->field0_0x0)._s_0.Y = fVar45;
              (pTVar22->field0_0x0)._s_0.Z = fVar44;
            }
            iVar34 = (int)local_4a0;
            lVar39 = local_4e0;
          }
          else {
            lVar42 = *(longlong *)(local_488 + 0x78);
            iVar34 = (int)local_4a0;
            uVar15 = iVar34 * 3;
            local_400[3] = (FVertexInstanceID)
                           *(undefined4 *)
                            (*(longlong *)(lVar42 + (ulonglong)(uVar15 >> 9) * 8) +
                            (ulonglong)(uVar15 & 0x1ff) * 4);
            local_3f0 = *(undefined4 *)
                         (*(longlong *)(lVar42 + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                         (ulonglong)(uVar15 + 1 & 0x1ff) * 4);
            local_3ec = *(undefined4 *)
                         (*(longlong *)(lVar42 + (ulonglong)(uVar15 + 2 >> 9) * 8) +
                         (ulonglong)(uVar15 + 2 & 0x1ff) * 4);
            FVar3 = local_400[local_4e0 + 3];
            local_4f0 = FVar3;
            if (((local_508.Data <= &local_4f0) &&
                (&local_4f0 <
                 (FVertexInstanceID *)(local_508.Data + (longlong)(int)local_500._4_4_ * 4))) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar32 = (int)local_500;
            if ((int)local_500 == local_500._4_4_) {
              iVar32 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_508,(int *)((longlong)&local_500 + 4));
            }
            local_500 = CONCAT44(local_500._4_4_,iVar32 + 1);
            *(FVertexInstanceID *)(local_508.Data + (longlong)iVar32 * 4) = local_4f0;
            if (FVar3 == (FVertexInstanceID)0xffffffff) {
              fVar44 = (float)((ulonglong)UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_ >>
                              0x20);
              local_278 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
              uVar12 = local_278;
              local_278._0_4_ = (float)UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
              fVar45 = (float)local_278;
              uVar43 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
              local_278 = uVar12;
            }
            else {
              lVar40 = *(longlong *)(lVar40 + 0x48);
              uVar15 = (int)FVar3 * 3;
              fVar44 = *(float *)(*(longlong *)(lVar40 + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                                 (ulonglong)(uVar15 + 1 & 0x1ff) * 4);
              fVar45 = *(float *)(*(longlong *)(lVar40 + (ulonglong)(uVar15 >> 9) * 8) +
                                 (ulonglong)(uVar15 & 0x1ff) * 4);
              uVar43 = *(float *)(*(longlong *)(lVar40 + (ulonglong)(uVar15 + 2 >> 9) * 8) +
                                 (ulonglong)(uVar15 + 2 & 0x1ff) * 4);
            }
            if ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                local_3b8.InstanceNormals.ArrayPtr !=
                (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
              pTVar21 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                  ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                                   local_3b8.InstanceNormals.ArrayPtr,0);
              pTVar22 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                  (pTVar21,(int)FVar17);
              (pTVar22->field0_0x0)._s_0.X = fVar45;
              (pTVar22->field0_0x0)._s_0.Y = fVar44;
              (pTVar22->field0_0x0)._s_0.Z = (float)uVar43;
            }
          }
          iVar32 = 0;
          lVar40 = 0;
          if (0 < local_498) {
            uVar15 = iVar34 * 3;
            local_4d0 = (ulonglong)(uVar15 + 1 >> 9);
            local_4d8 = (ulonglong)(uVar15 + 2 >> 9);
            local_4c8 = (ulonglong)(uVar15 >> 9);
            local_4c0 = (ulonglong)(uVar15 + 2 & 0x1ff);
            do {
              pFVar4 = (local_480->AttributeSet).Ptr;
              if ((iVar32 < (pFVar4->UVLayers).Array.ArrayNum) && (-1 < iVar32)) {
                if ((iVar32 < 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                lVar42 = *(longlong *)((pFVar4->UVLayers).Array.AllocatorInstance.Data + lVar40 * 8)
                ;
              }
              else {
                lVar42 = 0;
              }
              lVar1 = *(longlong *)(lVar42 + 0x78);
              local_3e8 = *(undefined4 *)
                           (*(longlong *)(lVar1 + local_4c8 * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
              local_3e4 = *(undefined4 *)
                           (*(longlong *)(lVar1 + local_4d0 * 8) +
                           (ulonglong)(uVar15 + 1 & 0x1ff) * 4);
              local_3e0 = *(undefined4 *)(*(longlong *)(lVar1 + local_4d8 * 8) + local_4c0 * 4);
              FVar3 = local_400[lVar39 + 6];
              local_4ec = FVar3;
              if (((local_508.Data <= &local_4ec) &&
                  (&local_4ec <
                   (FVertexInstanceID *)(local_508.Data + (longlong)(int)local_500._4_4_ * 4))) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar34 = (int)local_500;
              if ((int)local_500 == local_500._4_4_) {
                iVar34 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_508,(int *)((longlong)&local_500 + 4));
              }
              local_500 = CONCAT44(local_500._4_4_,iVar34 + 1);
              *(FVertexInstanceID *)(local_508.Data + (longlong)iVar34 * 4) = local_4ec;
              local_478 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
              if (FVar3 != (FVertexInstanceID)0xffffffff) {
                local_410 = *(undefined4 *)
                             (*(longlong *)
                               (*(longlong *)(lVar42 + 0x48) +
                               (ulonglong)(((uint)FVar3 & 0x7fffffff) >> 8) * 8) +
                             (ulonglong)((int)FVar3 * 2 & 0x1ff) * 4);
                uStack_40c = *(undefined4 *)
                              (*(longlong *)
                                (*(longlong *)(lVar42 + 0x48) +
                                (ulonglong)(((uint)FVar3 & 0x7fffffff) >> 8) * 8) +
                              (ulonglong)((int)FVar3 * 2 + 1U & 0x1ff) * 4);
                local_478._4_4_ = uStack_40c;
                local_478._0_4_ = local_410;
              }
              if ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)
                  local_3b8.InstanceUVs.ArrayPtr !=
                  (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) {
                if (iVar32 < (int)local_3b8.InstanceUVs.ArrayPtr[2].Type) {
                  local_408 = (float)(undefined4)local_478;
                  fStack_404 = (float)local_478._4_4_;
                  this_01 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                                      ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)
                                       local_3b8.InstanceUVs.ArrayPtr,iVar32);
                  pTVar23 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                       (this_01,(int)FVar17)->field0_0x0;
                  TVar7.field0_0x0._s_0.Y = fStack_404;
                  TVar7.field0_0x0._s_0.X = local_408;
                  *pTVar23 = TVar7.field0_0x0;
                }
                else {
                  bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<6053602128486727879>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionBuilder.cpp"
                                      ,199,"UVLayerIndex < InstanceUVs.GetNumChannels()");
                  if (bVar13) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
              }
              iVar32 = iVar32 + 1;
              lVar40 = lVar40 + 1;
              lVar39 = local_4e0;
            } while (lVar40 < local_498);
          }
          local_4f4 = FVar17;
          if (((local_508.Data <= &local_4f4) &&
              (&local_4f4 <
               (FVertexInstanceID *)(local_508.Data + (longlong)(int)local_500._4_4_ * 4))) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar34 = (int)local_500;
          if ((int)local_500 == local_500._4_4_) {
            iVar34 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_508,(int *)((longlong)&local_500 + 4));
          }
          local_500 = CONCAT44(local_500._4_4_,iVar34 + 1);
          *(FVertexInstanceID *)(local_508.Data + (longlong)iVar34 * 4) = local_4f4;
        }
        else {
          do {
            TVar29 = local_478;
            iVar34 = (int)local_4a0;
            TVar31 = local_478;
            uVar15 = uVar27;
            if (local_488 == 0) {
LAB_1443d4bbd:
              iVar32 = 0;
              lVar42 = 0;
              if (lVar39 < 1) {
LAB_1443d4d46:
                uVar16 = 0;
                if ((int)uVar15 < (int)local_500) {
                  uVar16 = ~uVar15 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                local_4f4 = *(FVertexInstanceID *)(local_508.Data + (longlong)TVar31 * 4);
                if ((uVar15 + 1 != local_490 + uVar27) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("KIItemInternalIdx == KIItemIdx + KIItemLen",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\DynamicMeshToMeshDescription.cpp"
                                        ,0x2bf,L""), bVar13)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                break;
              }
              uVar16 = iVar34 * 3;
              uVar38 = (ulonglong)(uVar16 + 1 >> 9);
              uVar30 = (ulonglong)(uVar16 + 1 & 0x1ff);
              uVar37 = (ulonglong)(uVar16 >> 9);
              uVar36 = (ulonglong)(uVar16 + 2 & 0x1ff);
              local_338 = (ulonglong)(uVar16 + 2 >> 9);
              local_4d8 = uVar30;
              local_4d0 = uVar36;
              local_4c8 = uVar37;
              local_4c0 = uVar38;
              while( true ) {
                pFVar4 = (local_480->AttributeSet).Ptr;
                if ((iVar32 < (pFVar4->UVLayers).Array.ArrayNum) && (-1 < iVar32)) {
                  if ((iVar32 < 0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), uVar30 = local_4d8, uVar36 = local_4d0,
                     uVar37 = local_4c8, uVar38 = local_4c0, bVar13)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  lVar39 = *(longlong *)
                            ((pFVar4->UVLayers).Array.AllocatorInstance.Data + lVar42 * 8);
                }
                else {
                  lVar39 = 0;
                }
                lVar39 = *(longlong *)(lVar39 + 0x78);
                local_400[0] = *(FVertexInstanceID *)
                                (*(longlong *)(lVar39 + uVar37 * 8) +
                                (ulonglong)(uVar16 & 0x1ff) * 4);
                local_400[1] = (FVertexInstanceID)
                               *(undefined4 *)(*(longlong *)(lVar39 + uVar38 * 8) + uVar30 * 4);
                local_400[2] = (FVertexInstanceID)
                               *(undefined4 *)(*(longlong *)(lVar39 + local_338 * 8) + uVar36 * 4);
                uVar33 = 0;
                if ((int)uVar15 < (int)local_500) {
                  uVar33 = ~uVar15 >> 0x1f;
                }
                if ((uVar33 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), uVar30 = local_4d8, uVar36 = local_4d0, uVar37 = local_4c8
                   , uVar38 = local_4c0, bVar13)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar15 = uVar15 + 1;
                lVar1 = (longlong)TVar31 * 4;
                TVar31._s_0 = TVar31._s_0 + 1;
                TVar29 = local_478;
                lVar40 = local_4e0;
                lVar39 = local_498;
                if (*(FVertexInstanceID *)(local_508.Data + lVar1) != local_400[local_4e0]) break;
                iVar32 = iVar32 + 1;
                lVar42 = lVar42 + 1;
                if (local_498 <= lVar42) goto LAB_1443d4d46;
              }
            }
            else {
              lVar42 = *(longlong *)(local_488 + 0x78);
              uVar15 = iVar34 * 3;
              local_3c8[0] = *(int *)(*(longlong *)(lVar42 + (ulonglong)(uVar15 >> 9) * 8) +
                                     (ulonglong)(uVar15 & 0x1ff) * 4);
              local_3c8[1] = *(undefined4 *)
                              (*(longlong *)(lVar42 + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                              (ulonglong)(uVar15 + 1 & 0x1ff) * 4);
              local_3c8[2] = *(undefined4 *)
                              (*(longlong *)(lVar42 + (ulonglong)(uVar15 + 2 >> 9) * 8) +
                              (ulonglong)(uVar15 + 2 & 0x1ff) * 4);
              uVar15 = 0;
              if ((int)uVar27 < (int)local_500) {
                uVar15 = ~uVar27 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar15 = uVar27 + 1;
              TVar31._s_0 = TVar29._s_0 + 1;
              if (*(int *)(local_508.Data + (longlong)TVar29 * 4) == local_3c8[lVar40]) {
                iVar34 = (int)local_4a0;
                goto LAB_1443d4bbd;
              }
            }
            local_478 = (longlong)&local_448->field_0x0 + TVar29._s_0;
            uVar27 = uVar27 + local_490;
          } while ((int)uVar27 < (int)local_500);
          uVar15 = local_4e8;
          if (local_4f4 == (FVertexInstanceID)0xffffffff) goto LAB_1443d4de6;
        }
        FVar17 = local_4f4;
        iVar34 = (int)local_4a0;
        uVar15 = 0;
        if (iVar34 < local_4b0[0]) {
          uVar15 = ~local_458 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(FVertexInstanceID *)(local_4b8.Data + (local_4e0 + (longlong)iVar34 * 3) * 4) = FVar17;
        UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_198);
        uVar30 = (ulonglong)local_4e8;
        lVar39 = local_498;
        param_1 = local_480;
      }
      if (local_108._96_8_ != 0) {
        plVar26 = (longlong *)(local_108 + 0x70);
        if ((longlong *)local_108._136_8_ != (longlong *)0x0) {
          plVar26 = (longlong *)local_108._136_8_;
        }
        (**(code **)(*plVar26 + 0x10))();
      }
      if (local_198._96_8_ != 0) {
        plVar26 = (longlong *)(local_198 + 0x70);
        if ((longlong *)local_198._136_8_ != (longlong *)0x0) {
          plVar26 = (longlong *)local_198._136_8_;
        }
        (**(code **)(*plVar26 + 0x10))();
      }
      if (local_218._0_8_ != 0) {
        plVar26 = (longlong *)(local_218 + 0x10);
        if (local_1f0 != (longlong *)0x0) {
          plVar26 = local_1f0;
        }
        (**(code **)(*plVar26 + 0x10))();
      }
      local_4e8 = local_440._8_4_ + 1;
      uVar30 = (ulonglong)local_4e8;
      local_440._8_4_ = local_4e8;
      if ((int)local_4e8 < (int)local_440._12_4_) {
        do {
          if ((*(short *)(*(longlong *)(*(longlong *)(local_440._0_8_ + 8) + (uVar30 >> 9) * 8) +
                         (ulonglong)(local_440._8_4_ & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)(*(longlong *)(local_440._0_8_ + 8) + (uVar30 >> 9) * 8) +
                        (ulonglong)(local_440._8_4_ & 0x1ff) * 2) != -1)) break;
          local_440._8_4_ = (int)uVar30 + 1;
          uVar30 = (ulonglong)(uint)local_440._8_4_;
        } while ((int)local_440._8_4_ < (int)local_440._12_4_);
        local_4e8 = (uint)uVar30;
        lVar39 = local_498;
      }
      uVar15 = local_4b0[2];
    } while ((uint)uVar30 != local_288._8_4_);
  }
  iVar34 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar27 = 0;
  if (((iVar34 != 0) &&
      (pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar27 = 0,
      0xfffd < (ushort)(**(short **)pFVar5 - 1U))) && (uVar27 = 1, 1 < iVar34)) {
    do {
      lVar39 = *(longlong *)(pFVar5 + (ulonglong)(uVar27 >> 9) * 8);
      if ((*(short *)(lVar39 + (ulonglong)(uVar27 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar39 + (ulonglong)(uVar27 & 0x1ff) * 2) != -1)) break;
      uVar27 = uVar27 + 1;
    } while ((int)uVar27 < iVar34);
  }
  local_4b0[2] = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if (uVar27 != local_4b0[2]) {
LAB_1443d5652:
    do {
      pFVar11 = local_428;
      local_48c = uVar15;
      if (local_470 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
        local_48c = *(uint *)(*(longlong *)
                               (*(longlong *)&local_470->field_0x20 + (ulonglong)(uVar27 >> 9) * 8)
                             + (ulonglong)(uVar27 & 0x1ff) * 4);
        lVar39 = (longlong)(int)local_48c;
        if ((-1 < (int)local_48c) &&
           ((int)local_48c < (local_428->MaterialIDToPolygroupIDMap).ArrayNum)) {
          uVar16 = 0;
          if ((int)local_48c < (local_428->MaterialIDToPolygroupIDMap).ArrayNum) {
            uVar16 = ~local_48c >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (local_48c = uVar15,
             bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_48c = *(uint *)((pFVar11->MaterialIDToPolygroupIDMap).AllocatorInstance.Data +
                               lVar39 * 4);
        }
      }
      uVar33 = ~uVar27 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar27 < local_4b0[0]) {
        uVar16 = uVar33;
      }
      if (uVar16 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar39 = (longlong)(int)uVar27;
      local_448 = (FPolygonGroupID *)(local_4b8.Data + lVar39 * 0xc + 8);
      uVar16 = 0;
      if ((int)uVar27 < local_4b0[0]) {
        uVar16 = uVar33;
      }
      iVar32 = local_4b0[0];
      if (uVar16 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar32 = local_4b0[0];
      }
      FVar8.Data = local_4b8.Data;
      uVar16 = 0;
      if ((int)uVar27 < iVar32) {
        uVar16 = uVar33;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FMeshDescriptionBuilder::AppendTriangle
                (&local_3b8,&local_454,(FVertexInstanceID *)(local_4b8.Data + lVar39 * 0xc),
                 (FVertexInstanceID *)(FVar8.Data + lVar39 * 0xc + 4),local_448);
      pFVar9 = local_480;
      if (local_4f8 != '\0') {
        if ((local_480->TriangleGroups).bIsSet == false) {
          iVar32 = -1;
        }
        else {
          if ((-1 < (int)uVar27) &&
             ((int)uVar27 <
              (int)((local_480->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (local_480->TriangleRefCounts).RefCounts.CurBlockUsed))) {
            if ((ushort)(*(short *)(*(longlong *)
                                     ((local_480->TriangleRefCounts).RefCounts.Blocks.
                                      AllocatorInstance.Data + (ulonglong)(uVar27 >> 9) * 8) +
                                   (ulonglong)(uVar27 & 0x1ff) * 2) - 1U) < 0xfffe) {
              iVar32 = *(int *)(*(longlong *)
                                 ((local_480->TriangleGroups).TypedValue.Blocks.AllocatorInstance.
                                  Data + (ulonglong)(uVar27 >> 9) * 8) +
                               (ulonglong)(uVar27 & 0x1ff) * 4);
              goto LAB_1443d586b;
            }
          }
          iVar32 = 0;
        }
LAB_1443d586b:
        FMeshDescription::GetTrianglePolygon(local_3b8.MeshDescription,SUB84(local_450,0));
        this_02 = TMeshAttributeArraySet<int>::GetArrayForChannel
                            ((TMeshAttributeArraySet<int> *)local_3b8.PolyGroups.ArrayPtr,0);
        piVar24 = TMeshAttributeArrayBase<int>::GetElementBase(this_02,local_450[0]);
        *piVar24 = iVar32;
      }
      uVar27 = uVar27 + 1;
      if ((int)uVar27 < iVar34) {
        do {
          lVar39 = *(longlong *)
                    ((pFVar9->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar27 >> 9) * 8);
          if ((*(short *)(lVar39 + (ulonglong)(uVar27 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar39 + (ulonglong)(uVar27 & 0x1ff) * 2) != -1)) goto LAB_1443d5652;
          uVar27 = uVar27 + 1;
        } while ((int)uVar27 < iVar34);
      }
    } while (uVar27 != local_4b0[2]);
  }
  if ((FVertexInstanceID *)local_508.Data != (FVertexInstanceID *)0x0) {
    FMemory::Free(local_508.Data);
  }
  if (local_4b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b8.Data);
  }
  if (local_468.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.AllocatorInstance.Data);
  }
  if (local_3b8.TempUVBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.TempUVBuffer.AllocatorInstance.Data);
  }
  if (local_3b8.TempBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.TempBuffer.AllocatorInstance.Data);
  }
  if (local_3b8.UVCoordinateLayers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.UVCoordinateLayers.AllocatorInstance.Data);
  }
  return;
}

// HaveMatchingElementCounts @ 1443d7330

bool __thiscall
FDynamicMeshToMeshDescription::HaveMatchingElementCounts
          (FDynamicMeshToMeshDescription *this,FDynamicMesh3 *param_1,FMeshDescription *param_2)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  FMeshElementContainer *pFVar5;
  bool bVar6;
  
  if (((this->ConversionOptions).bUpdateNormals == false) &&
     ((this->ConversionOptions).bUpdateUVs == false)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  bVar1 = (this->ConversionOptions).bUpdatePositions;
  if (((param_1->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_1->VertexRefCounts).FreeIndices.CurBlockUsed == 0) &&
     (iVar2 = (param_1->VertexRefCounts).UsedCount,
     pFVar5 = FMeshElementChannels::Get(param_2->VertexElements,0),
     iVar2 == (pFVar5->BitArray).NumBits - pFVar5->NumHoles)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (((param_1->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_1->TriangleRefCounts).FreeIndices.CurBlockUsed == 0) &&
     (iVar2 = (param_1->TriangleRefCounts).UsedCount,
     pFVar5 = FMeshElementChannels::Get(param_2->TriangleElements,0),
     iVar2 == (pFVar5->BitArray).NumBits - pFVar5->NumHoles)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (bVar3) {
    if (bVar1 != false) {
      if ((bVar6 != false) && (bVar4 != false)) {
        return true;
      }
      return false;
    }
    if ((param_1->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
      return bVar4;
    }
  }
  return bVar6;
}

// HaveMatchingElementCounts @ 1443d7430

bool __cdecl
FDynamicMeshToMeshDescription::HaveMatchingElementCounts
          (FDynamicMesh3 *param_1,FMeshDescription *param_2,bool param_3,bool param_4)

{
  int iVar1;
  bool bVar2;
  FMeshElementContainer *pFVar3;
  bool bVar4;
  
  if ((param_1->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
      (param_1->VertexRefCounts).FreeIndices.CurBlockUsed == 0) {
    iVar1 = (param_1->VertexRefCounts).UsedCount;
    pFVar3 = FMeshElementChannels::Get(param_2->VertexElements,0);
    if (iVar1 != (pFVar3->BitArray).NumBits - pFVar3->NumHoles) goto LAB_1443d747e;
    bVar2 = true;
  }
  else {
LAB_1443d747e:
    bVar2 = false;
  }
  if ((param_1->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
      (param_1->TriangleRefCounts).FreeIndices.CurBlockUsed == 0) {
    iVar1 = (param_1->TriangleRefCounts).UsedCount;
    pFVar3 = FMeshElementChannels::Get(param_2->TriangleElements,0);
    if (iVar1 == (pFVar3->BitArray).NumBits - pFVar3->NumHoles) {
      bVar4 = true;
      goto LAB_1443d74b3;
    }
  }
  bVar4 = false;
LAB_1443d74b3:
  if (param_3) {
    return bVar2;
  }
  if (param_4) {
    if ((param_1->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
      bVar2 = bVar4;
    }
    return bVar2;
  }
  if ((bVar2 != false) && (bVar4 != false)) {
    return true;
  }
  return false;
}

// SetMaterialIDMapFromInverseMap @ 1443d8910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDynamicMeshToMeshDescription::SetMaterialIDMapFromInverseMap
          (FDynamicMeshToMeshDescription *this,TArrayView<int_const_,int> *param_1)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  uVar11 = 0;
  uVar12 = 0xffffffff;
  puVar9 = (uint *)param_1->DataPtr;
  puVar1 = puVar9 + param_1->ArrayNum;
  uVar10 = (longlong)param_1->ArrayNum & 0x3fffffffffffffff;
  if (puVar1 < puVar9) {
    uVar10 = uVar11;
  }
  if (((uVar10 != 0) && (7 < uVar10)) && (1 < __isa_available)) {
    uVar12 = ___xmm_ffffffffffffffffffffffffffffffff;
    uVar13 = _UNK_15060db24;
    uVar14 = _UNK_15060db28;
    uVar15 = _UNK_15060db2c;
    uVar16 = ___xmm_ffffffffffffffffffffffffffffffff;
    uVar17 = _UNK_15060db24;
    uVar18 = _UNK_15060db28;
    uVar19 = _UNK_15060db2c;
    do {
      uVar4 = *puVar9;
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar7 = puVar9[3];
      uVar11 = uVar11 + 8;
      uVar12 = ((int)uVar12 < (int)uVar4) * uVar4 | ((int)uVar12 >= (int)uVar4) * uVar12;
      uVar13 = ((int)uVar13 < (int)uVar5) * uVar5 | ((int)uVar13 >= (int)uVar5) * uVar13;
      uVar14 = ((int)uVar14 < (int)uVar6) * uVar6 | ((int)uVar14 >= (int)uVar6) * uVar14;
      uVar15 = ((int)uVar15 < (int)uVar7) * uVar7 | ((int)uVar15 >= (int)uVar7) * uVar15;
      uVar4 = puVar9[4];
      uVar5 = puVar9[5];
      uVar6 = puVar9[6];
      uVar7 = puVar9[7];
      puVar9 = puVar9 + 8;
      uVar16 = ((int)uVar16 < (int)uVar4) * uVar4 | ((int)uVar16 >= (int)uVar4) * uVar16;
      uVar17 = ((int)uVar17 < (int)uVar5) * uVar5 | ((int)uVar17 >= (int)uVar5) * uVar17;
      uVar18 = ((int)uVar18 < (int)uVar6) * uVar6 | ((int)uVar18 >= (int)uVar6) * uVar18;
      uVar19 = ((int)uVar19 < (int)uVar7) * uVar7 | ((int)uVar19 >= (int)uVar7) * uVar19;
    } while (uVar11 != (uVar10 & 0xfffffffffffffff8));
    uVar12 = ((int)uVar12 < (int)uVar16) * uVar16 | ((int)uVar12 >= (int)uVar16) * uVar12;
    uVar13 = ((int)uVar13 < (int)uVar17) * uVar17 | ((int)uVar13 >= (int)uVar17) * uVar13;
    uVar14 = ((int)uVar14 < (int)uVar18) * uVar18 | ((int)uVar14 >= (int)uVar18) * uVar14;
    uVar15 = ((int)uVar15 < (int)uVar19) * uVar19 | ((int)uVar15 >= (int)uVar19) * uVar15;
    uVar12 = ((int)uVar12 < (int)uVar14) * uVar14 | ((int)uVar12 >= (int)uVar14) * uVar12;
    uVar13 = ((int)uVar13 < (int)uVar15) * uVar15 | ((int)uVar13 >= (int)uVar15) * uVar13;
    uVar12 = ((int)uVar12 < (int)uVar13) * uVar13 | ((int)uVar12 >= (int)uVar13) * uVar12;
  }
  for (; puVar9 != puVar1; puVar9 = puVar9 + 1) {
    uVar13 = *puVar9;
    if ((int)*puVar9 < (int)uVar12) {
      uVar13 = uVar12;
    }
    uVar12 = uVar13;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->MaterialIDToPolygroupIDMap,uVar12 + 1,Default);
  uVar11 = 0;
  uVar10 = uVar11;
  if (0 < (this->MaterialIDToPolygroupIDMap).ArrayNum) {
    do {
      uVar13 = (uint)uVar11;
      uVar12 = 0;
      if ((int)uVar13 < (this->MaterialIDToPolygroupIDMap).ArrayNum) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((this->MaterialIDToPolygroupIDMap).AllocatorInstance.Data + uVar10) = uVar13;
      uVar11 = (ulonglong)(uVar13 + 1);
      uVar10 = uVar10 + 4;
    } while ((int)(uVar13 + 1) < (this->MaterialIDToPolygroupIDMap).ArrayNum);
  }
  uVar11 = 0;
  iVar2 = param_1->ArrayNum;
  uVar10 = uVar11;
  if (0 < iVar2) {
    do {
      uVar13 = (uint)uVar11;
      uVar12 = 0;
      if ((int)uVar13 < iVar2) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar12 = *(uint *)(uVar10 + (longlong)param_1->DataPtr);
      if ((-1 < (int)uVar12) && ((int)uVar12 < (this->MaterialIDToPolygroupIDMap).ArrayNum)) {
        uVar14 = 0;
        if ((int)uVar12 < (this->MaterialIDToPolygroupIDMap).ArrayNum) {
          uVar14 = ~uVar12 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(uint *)((this->MaterialIDToPolygroupIDMap).AllocatorInstance.Data +
                 (longlong)(int)uVar12 * 4) = uVar13;
      }
      uVar11 = (ulonglong)(uVar13 + 1);
      uVar10 = uVar10 + 4;
    } while ((int)(uVar13 + 1) < iVar2);
  }
  return;
}

// Update @ 1443d9e10

void __thiscall
FDynamicMeshToMeshDescription::Update
          (FDynamicMeshToMeshDescription *this,FDynamicMesh3 *param_1,FMeshDescription *param_2,
          bool param_3,bool param_4,bool param_5)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  FMeshElementContainer *pFVar8;
  ulonglong uVar9;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_00;
  TVector<float> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  FMeshDescriptionBuilder local_b8;
  
  local_b8.InstanceUVs.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_b8.InstanceNormals.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  uVar12 = 0;
  local_b8.VertexPositions.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_b8.InstanceTangents.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_b8.InstanceBiTangentSign.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_b8.InstanceColors.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_b8.UVCoordinateLayers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.UVCoordinateLayers.ArrayNum = 0;
  local_b8.UVCoordinateLayers.ArrayMax = 0;
  local_b8.TempBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.TempBuffer.ArrayNum = 0;
  local_b8.TempBuffer.ArrayMax = 0;
  local_b8.TempUVBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.TempUVBuffer.ArrayNum = 0;
  local_b8.TempUVBuffer.ArrayMax = 0;
  local_b8.PolyGroups.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  local_b8.GroupMaterialSlotNames.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  FMeshDescriptionBuilder::SetMeshDescription(&local_b8,param_2);
  if (((param_1->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_1->VertexRefCounts).FreeIndices.CurBlockUsed != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshIn->IsCompactV()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\DynamicMeshToMeshDescription.cpp"
                         ,0x7e,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_5) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bUpdateUVs == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\DynamicMeshToMeshDescription.cpp"
                         ,0x83,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar8 = FMeshElementChannels::Get(param_2->VertexElements,0);
  iVar14 = (pFVar8->BitArray).NumBits - pFVar8->NumHoles;
  if (((param_1->VertexRefCounts).UsedCount < iVar14) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumVertices <= MeshIn->VertexCount()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\DynamicMeshToMeshDescription.cpp"
                         ,0x87,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar13 = uVar12;
  if (0 < iVar14) {
    do {
      uVar9 = (ulonglong)((uint)uVar13 & 0x1ff);
      lVar3 = *(longlong *)((param_1->Vertices).Blocks.AllocatorInstance.Data + (uVar12 >> 9) * 8);
      pdVar1 = (double *)(lVar3 + uVar9 * 0x18);
      dVar5 = *pdVar1;
      dVar6 = pdVar1[1];
      dVar2 = *(double *)(lVar3 + 0x10 + uVar9 * 0x18);
      this_00 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           local_b8.VertexPositions.ArrayPtr,0);
      pTVar10 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (this_00,(int)uVar12);
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      (pTVar10->field0_0x0)._s_0.X = (float)dVar5;
      (pTVar10->field0_0x0)._s_0.Y = (float)dVar6;
      (pTVar10->field0_0x0)._s_0.Z = (float)dVar2;
      uVar13 = uVar13 + 1;
    } while ((int)uVar11 < iVar14);
  }
  UpdateAttributes(this,param_1,param_2,param_3,param_4,param_5);
  if (local_b8.TempUVBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.TempUVBuffer.AllocatorInstance.Data);
  }
  if (local_b8.TempBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.TempBuffer.AllocatorInstance.Data);
  }
  if (local_b8.UVCoordinateLayers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.UVCoordinateLayers.AllocatorInstance.Data);
  }
  return;
}

// UpdateAttributes @ 1443da080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDynamicMeshToMeshDescription::UpdateAttributes
          (FDynamicMeshToMeshDescription *this,FDynamicMesh3 *param_1,FMeshDescription *param_2,
          bool param_3,bool param_4,bool param_5)

{
  FVertexInstanceID *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  short sVar4;
  FTriangleID FVar5;
  uint uVar6;
  FVertexInstanceID FVar7;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_00;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this_01;
  FMeshElementChannels *this_02;
  code *pcVar8;
  TVector2<float> TVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  FMeshElementContainer *pFVar15;
  FAttributesSetEntry *pFVar16;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_03;
  TVector<float> *pTVar17;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar18;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *pTVar19;
  TVector2<float>_u_0 *pTVar20;
  ForElementType<unsigned_int> FVar21;
  FDynamicMeshAttributeSet *pFVar22;
  FDynamicMeshAttributeSet *pFVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  TVector2<float>_u_0 TVar27;
  FRefCountVector *pFVar28;
  uchar auVar29 [4];
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar30;
  ForElementType<unsigned_int> FVar31;
  FTriangleID FVar32;
  undefined4 uVar33;
  uint uVar34;
  FVertexInstanceID *pFVar35;
  FDynamicMeshAttributeSet *pFVar36;
  FDynamicMeshAttributeSet *pFVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1a8 [16];
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_198;
  ForAnyElementType local_190;
  undefined8 local_188;
  FDynamicMeshToMeshDescription *local_180;
  FMeshDescription *local_178;
  FDynamicMesh3 *local_170;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> local_168;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector2<float>_> local_160;
  IndexIterator local_158;
  uint local_148;
  uint uStack_144;
  ForElementType<unsigned_int> FStack_140;
  undefined4 local_138;
  FTriangleID FStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  int local_120;
  int local_11c;
  FMeshElementContainer *local_118;
  TVector<float>_u_0 local_108;
  IndexIterator local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  TArrayView<FVertexInstanceID_const_,int> local_c8;
  FUVID *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<FVertexInstanceID_const_,int> local_a8 [2];
  uint local_88;
  FTriangleID FStack_84;
  TArrayView<FUVID_const_,int> local_78;
  ForElementType<FUVID> local_68;
  uint local_5c;
  uint local_58 [2];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pFVar28 = &param_1->VertexRefCounts;
  local_1a8._8_8_ = pFVar28;
  local_180 = this;
  local_178 = param_2;
  local_170 = param_1;
  if (((param_1->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_1->VertexRefCounts).FreeIndices.CurBlockUsed != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("MeshIn->IsCompactV()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\DynamicMeshToMeshDescription.cpp"
                          ,0x94,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar30 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  if (param_3) {
    pFVar15 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
    pFVar16 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar15->Attributes,MeshAttribute::VertexInstance::Normal);
    if (((pFVar16 == (FAttributesSetEntry *)0x0) ||
        (this_00 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar16->Ptr).Ptr,
        (int)this_00->_padding_ != 1)) || (*(int *)((longlong)&this_00->_padding_ + 4) != 1)) {
      local_168.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
    }
    else {
      local_168.ArrayPtr = (FMeshAttributeArraySetBase *)this_00;
      if (this_00 != (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
        pFVar37 = (param_1->AttributeSet).Ptr;
        if (pFVar37 != (FDynamicMeshAttributeSet *)0x0) {
          if (0 < (pFVar37->NormalLayers).Array.ArrayNum) {
            pTVar30 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                       (pFVar37->NormalLayers).Array.AllocatorInstance.Data;
          }
          if (pTVar30 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) {
            pFVar15 = FMeshElementChannels::Get(param_2->TriangleElements,0);
            if (((param_1->TriangleRefCounts).UsedCount !=
                 (pFVar15->BitArray).NumBits - pFVar15->NumHoles) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("MeshIn->TriangleCount() == MeshOut.Triangles().Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\DynamicMeshToMeshDescription.cpp"
                                    ,0xa4,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_108._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            local_108._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            DynamicMeshToMeshDescriptionConversionHelper::
            SetAttributesFromOverlay<UE::Math::TVector<float>,3,UE::Math::TVector<float>_>
                      (param_1,param_2,&local_168,pTVar30,(TVector<float> *)&local_108._s_0,0);
            this = local_180;
            goto LAB_1443da3b2;
          }
        }
        pFVar15 = FMeshElementChannels::Get(param_2->VertexElements,0);
        if (((param_1->VertexRefCounts).UsedCount != (pFVar15->BitArray).NumBits - pFVar15->NumHoles
            ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("MeshIn->VertexCount() == MeshOut.Vertices().Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\DynamicMeshToMeshDescription.cpp"
                                      ,0xa9,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                  (&local_158,pFVar28,0,
                   (pFVar28->RefCounts).CurBlock * 0x200 +
                   (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
        iVar12 = (pFVar28->RefCounts).CurBlock * 0x200 +
                 (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
        UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_f8,pFVar28,iVar12,iVar12)
        ;
        pFVar28 = (FRefCountVector *)local_1a8._8_8_;
        this = local_180;
        if (local_158._8_4_ != local_f8._8_4_) {
          local_198 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)
                      &param_2->VertexToVertexInstances;
          uVar26 = local_f8._8_4_;
          do {
            uVar10 = local_158._8_4_;
            if ((param_1->VertexNormals).bIsSet == false) {
              uVar38 = (undefined4)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
              uVar39 = (undefined4)
                       ((ulonglong)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_ >> 0x20);
              uVar33 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
            }
            else {
              lVar24 = *(longlong *)
                        ((param_1->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                        (ulonglong)((uint)local_158._8_4_ >> 9) * 8);
              uVar3 = *(undefined8 *)(lVar24 + (ulonglong)(local_158._8_4_ & 0x1ff) * 0xc);
              uVar38 = (undefined4)uVar3;
              uVar39 = (undefined4)((ulonglong)uVar3 >> 0x20);
              uVar33 = *(float *)(lVar24 + 8 + (ulonglong)(local_158._8_4_ & 0x1ff) * 0xc);
            }
            FMeshElementIndexer::Find<FVertexInstanceID>
                      ((FMeshElementIndexer *)local_198,&local_c8,local_158._8_4_,0);
            pFVar1 = local_c8.DataPtr + local_c8.ArrayNum;
            pFVar28 = (FRefCountVector *)local_1a8._8_8_;
            this = local_180;
            param_2 = local_178;
            param_1 = local_170;
            for (pFVar35 = local_c8.DataPtr; local_1a8._8_8_ = pFVar28, local_180 = this,
                local_178 = param_2, local_170 = param_1, pFVar35 != pFVar1; pFVar35 = pFVar35 + 1)
            {
              FVar7 = *pFVar35;
              this_03 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                  (this_00,0);
              pTVar17 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                  (this_03,(int)FVar7);
              *(ulonglong *)&pTVar17->field0_0x0 = CONCAT44(uVar39,uVar38);
              (pTVar17->field0_0x0)._s_0.Z = (float)uVar33;
              uVar26 = local_f8._8_4_;
              pFVar28 = (FRefCountVector *)local_1a8._8_8_;
              this = local_180;
              param_2 = local_178;
              param_1 = local_170;
            }
            local_158._8_4_ = uVar10 + 1;
            if ((int)local_158._8_4_ < (int)local_158._12_4_) {
              do {
                uVar26 = local_f8._8_4_;
                if ((*(short *)(*(longlong *)
                                 (*(longlong *)(local_158._0_8_ + 8) +
                                 (ulonglong)((uint)local_158._8_4_ >> 9) * 8) +
                               (ulonglong)(local_158._8_4_ & 0x1ff) * 2) != 0) &&
                   (*(short *)(*(longlong *)
                                (*(longlong *)(local_158._0_8_ + 8) +
                                (ulonglong)((uint)local_158._8_4_ >> 9) * 8) +
                              (ulonglong)(local_158._8_4_ & 0x1ff) * 2) != -1)) break;
                local_158._8_4_ = local_158._8_4_ + 1;
              } while ((int)local_158._8_4_ < (int)local_158._12_4_);
            }
          } while (local_158._8_4_ != uVar26);
        }
        goto LAB_1443da3b2;
      }
    }
    local_1a8[4] = '\0';
    `FDynamicMeshToMeshDescription::UpdateAttributes'::__l12::<lambda_1>::operator()(local_1a8 + 4);
  }
LAB_1443da3b2:
  pFVar37 = (FDynamicMeshAttributeSet *)0x0;
  if (param_4) {
    UpdateTangents(this,param_1,param_2);
  }
  if (!param_5) {
    return;
  }
  pFVar15 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  pFVar16 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar15->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  if ((((pFVar16 == (FAttributesSetEntry *)0x0) ||
       (this_01 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(pFVar16->Ptr).Ptr,
       (int)this_01->_padding_ != 2)) || (*(int *)((longlong)&this_01->_padding_ + 4) != 1)) ||
     (local_160.ArrayPtr = (FMeshAttributeArraySetBase *)this_01,
     this_01 == (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0)) {
    `FDynamicMeshToMeshDescription::UpdateAttributes'::__l48::<lambda_2>::operator()(local_1a8 + 5);
    return;
  }
  if ((param_1->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
    this_02 = param_2->TriangleElements;
    (param_2->UVToTriangles).bSuspended = true;
    pFVar15 = FMeshElementChannels::Get(this_02,0);
    if (((param_1->TriangleRefCounts).UsedCount != (pFVar15->BitArray).NumBits - pFVar15->NumHoles)
       && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("MeshIn->TriangleCount() == MeshOut.Triangles().Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\DynamicMeshToMeshDescription.cpp"
                               ,0xc6,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar12 = (**(code **)(((param_1->AttributeSet).Ptr)->_padding_ + 0xa8))();
    local_180 = (FDynamicMeshToMeshDescription *)CONCAT44(local_180._4_4_,iVar12);
    FMeshDescription::SetNumUVChannels(param_2,iVar12);
    TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumChannels(this_01,iVar12);
    local_1a8._8_8_ = local_1a8._8_8_ & 0xffffffff00000000;
    pFVar23 = pFVar37;
    if (0 < iVar12) {
      do {
        pFVar22 = (param_1->AttributeSet).Ptr;
        iVar12 = (int)pFVar23;
        pFVar23 = pFVar37;
        if (pFVar22 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar23 = pFVar22;
        }
        pTVar18 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer(pFVar23,iVar12);
        local_198 = pTVar18;
        DynamicMeshToMeshDescriptionConversionHelper::
        SetAttributesFromOverlay<UE::Math::TVector2<float>,2,UE::Math::TVector2<float>_>
                  (param_1,param_2,&local_160,pTVar18,UE::Math::TVector2<float>::ZeroVector,iVar12);
        pFVar15 = FMeshElementChannels::Get(param_2->UVElements,iVar12);
        iVar12 = (pFVar15->BitArray).MaxBits;
        (pFVar15->BitArray).NumBits = 0;
        local_118 = pFVar15;
        if ((iVar12 < 0) || (0x80 < iVar12)) {
          (pFVar15->BitArray).MaxBits = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&pFVar15->BitArray,0);
        }
        FAttributesSetBase::Initialize(&pFVar15->Attributes,0);
        pFVar15->NumHoles = 0;
        TBitArray<FDefaultBitArrayAllocator>::Reserve
                  (&pFVar15->BitArray,*(int *)&pTVar18->field_0x38);
        iVar12 = *(int *)&pTVar18->field_0x8 * 0x200 + *(int *)&pTVar18->field_0xc;
        local_190.Data = (FScriptContainerElement *)0x0;
        local_188 = 0;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar12,&local_190,(int *)&local_188,(int *)((longlong)&local_188 + 4));
        pFVar23 = pFVar37;
        pFVar22 = pFVar37;
        pFVar36 = pFVar37;
        if (0 < iVar12) {
          do {
            uVar26 = (uint)pFVar22;
            if (((int)uVar26 < *(int *)&pTVar18->field_0x8 * 0x200 + *(int *)&pTVar18->field_0xc) &&
               ((ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)&pTVar18->field_0x10 +
                                     ((ulonglong)pFVar22 >> 9) * 8) +
                                   (ulonglong)((uint)pFVar23 & 0x1ff) * 2) - 1U) < 0xfffe)) {
              local_128 = *(undefined4 *)
                           (*(longlong *)
                             (*(longlong *)&pTVar18->field_0x48 +
                             (ulonglong)((uVar26 & 0x7fffffff) >> 8) * 8) +
                           (ulonglong)(uVar26 * 2 & 0x1ff) * 4);
              uStack_124 = *(undefined4 *)
                            (*(longlong *)
                              (*(longlong *)&pTVar18->field_0x48 +
                              (ulonglong)((uVar26 & 0x7fffffff) >> 8) * 8) +
                            (ulonglong)(uVar26 * 2 + 1 & 0x1ff) * 4);
              iVar13 = FMeshElementContainer::Add(pFVar15);
              uVar34 = 0;
              if ((int)uVar26 < (int)local_188) {
                uVar34 = ~uVar26 >> 0x1f;
              }
              if ((uVar34 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(int *)(local_190.Data + (longlong)&pFVar36->_padding_) = iVar13;
              pFVar16 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                                *)&pFVar15->Attributes,MeshAttribute::UV::UVCoordinate);
              if (((pFVar16 == (FAttributesSetEntry *)0x0) ||
                  (pFVar22 = (FDynamicMeshAttributeSet *)(pFVar16->Ptr).Ptr,
                  *(uint *)&pFVar22->_padding_ != 2)) ||
                 (*(uint *)((longlong)&pFVar22->_padding_ + 4) != 1)) {
                pFVar22 = pFVar37;
              }
              pTVar19 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                                  ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)pFVar22,0);
              pTVar20 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                   (pTVar19,iVar13)->field0_0x0;
              TVar9.field0_0x0._s_0.Y = (float)uStack_124;
              TVar9.field0_0x0._s_0.X = (float)local_128;
              *pTVar20 = TVar9.field0_0x0;
              pTVar18 = local_198;
            }
            pFVar23 = (FDynamicMeshAttributeSet *)((longlong)&pFVar23->_padding_ + 1);
            pFVar22 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar26 + 1);
            param_2 = local_178;
            pFVar36 = (FDynamicMeshAttributeSet *)((longlong)&pFVar36->_padding_ + 4);
          } while ((int)(uVar26 + 1) < iVar12);
        }
        FVar21 = (ForElementType<unsigned_int>)
                 FMeshElementChannels::Get(param_2->TriangleElements,0);
        uStack_144 = 1;
        local_148 = 0;
        FVar5 = *(FTriangleID *)((longlong)FVar21 + 0x18);
        FStack_134 = (FTriangleID)0x0;
        uStack_130 = 0;
        if (FVar5 != (FTriangleID)0x0) {
          FVar31 = FVar21;
          if (*(ForElementType<unsigned_int> *)((longlong)FVar21 + 0x10) !=
              (ForElementType<unsigned_int>)0x0) {
            FVar31 = *(ForElementType<unsigned_int> *)((longlong)FVar21 + 0x10);
          }
          uVar26 = *(uint *)FVar31;
          pFVar23 = pFVar37;
          pFVar22 = pFVar37;
          while (uVar26 == 0) {
            uStack_130 = (int)pFVar22 + 0x20;
            pFVar22 = (FDynamicMeshAttributeSet *)(ulonglong)uStack_130;
            iVar12 = (int)pFVar23;
            local_148 = iVar12 + 1;
            pFVar23 = (FDynamicMeshAttributeSet *)(ulonglong)local_148;
            if ((int)(((int)FVar5 - 1U) + ((int)((int)FVar5 - 1U) >> 0x1f & 0x1fU)) >> 5 <
                (int)local_148) goto LAB_1443da79b;
            uVar26 = ((uint *)((longlong)FVar31 + 4))[iVar12];
          }
          uStack_144 = -uVar26 & uVar26;
          uVar25 = (ulonglong)uStack_144 * 2 + 1;
          lVar24 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          local_120 = (int)lVar24;
          FStack_134 = (FTriangleID)((uStack_130 - 1) + local_120);
          if ((int)FVar5 < (int)FStack_134) {
LAB_1443da79b:
            FStack_134 = FVar5;
          }
        }
        local_138 = 0xffffffff;
        local_e8._padding_ = CONCAT44(uStack_144,local_148);
        local_e8.CurrentBitIndex = (int)FStack_134;
        local_e8.UnvisitedBitMask = 0xffffffff;
        local_e8._28_4_ = uStack_12c;
        local_e8.BaseBitIndex = uStack_130;
        iVar12 = (int)FVar5 >> 5;
        uVar26 = -1 << (FVar5._0_1_ & 0x1f);
        uVar34 = (uint)FVar5 & 0xffffffe0;
        FStack_140 = FVar21;
        local_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar21;
        local_88 = uVar26;
        FStack_84 = FVar5;
        if (((int)FVar5 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar32 = *(FTriangleID *)((longlong)FVar21 + 0x18);
        if (FVar5 != FVar32) {
          FVar31 = FVar21;
          if (*(ForElementType<unsigned_int> *)((longlong)FVar21 + 0x10) !=
              (ForElementType<unsigned_int>)0x0) {
            FVar31 = *(ForElementType<unsigned_int> *)((longlong)FVar21 + 0x10);
          }
          uVar26 = uVar26 & *(uint *)((longlong)FVar31 + (longlong)iVar12 * 4);
          while (uVar26 == 0) {
            lVar24 = (longlong)iVar12;
            uVar34 = uVar34 + 0x20;
            iVar12 = iVar12 + 1;
            if ((int)(((int)FVar32 - 1U) + ((int)((int)FVar32 - 1U) >> 0x1f & 0x1fU)) >> 5 < iVar12)
            goto LAB_1443da874;
            uVar26 = *(uint *)((longlong)FVar31 + 4 + lVar24 * 4);
            local_88 = 0xffffffff;
          }
          uVar25 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
          lVar24 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          local_11c = (int)lVar24;
          FStack_84 = (FTriangleID)((uVar34 - 1) + local_11c);
          if ((int)FVar32 < (int)FStack_84) {
LAB_1443da874:
            FStack_84 = FVar32;
          }
        }
        FVar5 = FStack_84;
        param_2 = local_178;
        auVar29 = (uchar  [4])local_1a8._8_4_;
        while ((pFVar15 = local_118, (FTriangleID)local_e8.CurrentBitIndex != FVar5 ||
               ((ForElementType<unsigned_int>)local_e8.Array != FVar21))) {
          local_5c = 0;
          FVar32 = (FTriangleID)0xffffffff;
          if (local_e8.CurrentBitIndex < *(int *)((longlong)local_e8.Array + 0x18)) {
            FVar32 = (FTriangleID)local_e8.CurrentBitIndex;
          }
          local_58[0] = 3;
          uVar34 = (int)FVar32 * 3;
          lVar24 = *(longlong *)&local_198->field_0x78;
          uVar26 = *(uint *)(*(longlong *)(lVar24 + (ulonglong)(uVar34 >> 9) * 8) +
                            (ulonglong)(uVar34 & 0x1ff) * 4);
          if ((int)uVar26 < 0) {
            local_1a8._0_4_ = FMeshElementContainer::Add(local_118);
            TVar9 = UE::Math::TVector2<float>::ZeroVector;
            pFVar16 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                              *)&pFVar15->Attributes,MeshAttribute::UV::UVCoordinate);
            uVar10 = local_1a8._0_4_;
            if (((pFVar16 == (FAttributesSetEntry *)0x0) ||
                (pFVar23 = (FDynamicMeshAttributeSet *)(pFVar16->Ptr).Ptr,
                *(uint *)&pFVar23->_padding_ != 2)) ||
               (*(uint *)((longlong)&pFVar23->_padding_ + 4) != 1)) {
              pFVar23 = pFVar37;
            }
            pTVar19 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                                ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)pFVar23,0);
            pTVar20 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                 (pTVar19,uVar10)->field0_0x0;
            pTVar20->_s_0 = (TVector2<float>_u_0_s_0)TVar9.field0_0x0;
            if (((&local_68 <= (ForElementType<FUVID> *)local_1a8) &&
                (local_1a8 < local_68.InlineData + (int)local_58[0])) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (local_5c == local_58[0]) {
              local_5c = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<3>::ForElementType<FUVID>_>
                                   (0x404,&local_68,(int *)local_58);
            }
            lVar24 = (longlong)(int)local_5c;
            local_5c = local_5c + 1;
            *(undefined4 *)local_68.InlineData[lVar24].Pad = local_1a8._0_4_;
            local_1a8._0_4_ = FMeshElementContainer::Add(pFVar15);
            TVar9 = UE::Math::TVector2<float>::ZeroVector;
            pFVar16 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                              *)&pFVar15->Attributes,MeshAttribute::UV::UVCoordinate);
            uVar10 = local_1a8._0_4_;
            if (((pFVar16 == (FAttributesSetEntry *)0x0) ||
                (pFVar23 = (FDynamicMeshAttributeSet *)(pFVar16->Ptr).Ptr,
                *(uint *)&pFVar23->_padding_ != 2)) ||
               (*(uint *)((longlong)&pFVar23->_padding_ + 4) != 1)) {
              pFVar23 = pFVar37;
            }
            pTVar19 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                                ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)pFVar23,0);
            pTVar20 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                 (pTVar19,uVar10)->field0_0x0;
            pTVar20->_s_0 = (TVector2<float>_u_0_s_0)TVar9.field0_0x0;
            if (((&local_68 <= (ForElementType<FUVID> *)local_1a8) &&
                (local_1a8 < local_68.InlineData + (int)local_58[0])) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (local_5c == local_58[0]) {
              local_5c = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<3>::ForElementType<FUVID>_>
                                   (0x404,&local_68,(int *)local_58);
            }
            lVar24 = (longlong)(int)local_5c;
            local_5c = local_5c + 1;
            *(undefined4 *)local_68.InlineData[lVar24].Pad = local_1a8._0_4_;
            local_1a8._0_4_ = FMeshElementContainer::Add(pFVar15);
            TVar9 = UE::Math::TVector2<float>::ZeroVector;
            pFVar16 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                              *)&pFVar15->Attributes,MeshAttribute::UV::UVCoordinate);
            uVar10 = local_1a8._0_4_;
            if (((pFVar16 == (FAttributesSetEntry *)0x0) ||
                (pFVar23 = (FDynamicMeshAttributeSet *)(pFVar16->Ptr).Ptr,
                *(uint *)&pFVar23->_padding_ != 2)) ||
               (*(uint *)((longlong)&pFVar23->_padding_ + 4) != 1)) {
              pFVar23 = pFVar37;
            }
            pTVar19 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                                ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)pFVar23,0);
            pTVar20 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                 (pTVar19,uVar10)->field0_0x0;
            pTVar20->_s_0 = (TVector2<float>_u_0_s_0)TVar9.field0_0x0;
            if (((&local_68 <= (ForElementType<FUVID> *)local_1a8) &&
                (local_1a8 < local_68.InlineData + (int)local_58[0])) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            auVar29 = (uchar  [4])local_1a8._0_4_;
            uVar26 = local_5c;
            if (local_5c == local_58[0]) {
              uVar26 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<3>::ForElementType<FUVID>_>
                                 (0x404,&local_68,(int *)local_58);
              auVar29 = (uchar  [4])local_1a8._0_4_;
            }
          }
          else {
            uVar6 = *(uint *)(*(longlong *)(lVar24 + (ulonglong)(uVar34 + 1 >> 9) * 8) +
                             (ulonglong)(uVar34 + 1 & 0x1ff) * 4);
            uVar34 = *(uint *)(*(longlong *)(lVar24 + (ulonglong)(uVar34 + 2 >> 9) * 8) +
                              (ulonglong)(uVar34 + 2 & 0x1ff) * 4);
            uVar14 = 0;
            if ((int)uVar26 < (int)local_188) {
              uVar14 = ~uVar26 >> 0x1f;
            }
            pFVar23 = pFVar37;
            if (uVar14 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar23 = (FDynamicMeshAttributeSet *)(ulonglong)local_5c;
            }
            pFVar2 = local_190.Data + (longlong)(int)uVar26 * 4;
            uVar26 = (uint)pFVar23;
            if ((((FScriptContainerElement *)&local_68 <= pFVar2) &&
                (pFVar2 < (FScriptContainerElement *)(local_68.InlineData + (int)local_58[0]))) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), uVar26 = local_5c, bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (uVar26 == local_58[0]) {
              uVar26 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<3>::ForElementType<FUVID>_>
                                 (0x404,&local_68,(int *)local_58);
            }
            local_5c = uVar26 + 1;
            *(undefined4 *)local_68.InlineData[(int)uVar26].Pad = *(undefined4 *)pFVar2;
            uVar26 = 0;
            if ((int)uVar6 < (int)local_188) {
              uVar26 = ~uVar6 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar2 = local_190.Data + (longlong)(int)uVar6 * 4;
            if ((((FScriptContainerElement *)&local_68 <= pFVar2) &&
                (pFVar2 < (FScriptContainerElement *)(local_68.InlineData + (int)local_58[0]))) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (local_5c == local_58[0]) {
              local_5c = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<3>::ForElementType<FUVID>_>
                                   (0x404,&local_68,(int *)local_58);
            }
            lVar24 = (longlong)(int)local_5c;
            local_5c = local_5c + 1;
            *(undefined4 *)local_68.InlineData[lVar24].Pad = *(undefined4 *)pFVar2;
            uVar26 = 0;
            if ((int)uVar34 < (int)local_188) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar2 = local_190.Data + (longlong)(int)uVar34 * 4;
            if ((((FScriptContainerElement *)&local_68 <= pFVar2) &&
                (pFVar2 < (FScriptContainerElement *)(local_68.InlineData + (int)local_58[0]))) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (local_5c == local_58[0]) {
              local_5c = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<3>::ForElementType<FUVID>_>
                                   (0x404,&local_68,(int *)local_58);
            }
            auVar29 = *(uchar (*) [4])pFVar2;
            uVar26 = local_5c;
          }
          local_5c = uVar26 + 1;
          *&local_68.InlineData[(int)uVar26].Pad = auVar29;
          uVar26 = local_5c;
          local_b8 = (FUVID *)&local_68;
          if (((int)local_5c < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          param_2 = local_178;
          auVar29 = (uchar  [4])local_1a8._8_4_;
          iStack_b0 = uVar26;
          local_78._12_4_ = uStack_ac;
          local_78.ArrayNum = uVar26;
          local_78.DataPtr = local_b8;
          FMeshDescription::SetTriangleUVIndices(local_178,FVar32,&local_78,local_1a8._8_4_);
          local_e8.UnvisitedBitMask = local_e8.UnvisitedBitMask & ~local_e8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e8);
        }
        if (local_190.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data);
        }
        uVar26 = (int)auVar29 + 1;
        local_1a8._8_4_ = uVar26;
        pFVar23 = (FDynamicMeshAttributeSet *)(ulonglong)uVar26;
        param_1 = local_170;
      } while ((int)uVar26 < (int)local_180);
    }
    (param_2->UVToTriangles).bSuspended = false;
    (param_2->UVToTriangles).bEverythingStale = true;
    return;
  }
  pFVar15 = FMeshElementChannels::Get(param_2->VertexElements,0);
  if (((param_1->VertexRefCounts).UsedCount != (pFVar15->BitArray).NumBits - pFVar15->NumHoles) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("MeshIn->VertexCount() == MeshOut.Vertices().Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\DynamicMeshToMeshDescription.cpp"
                          ,0x119,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar26 = (pFVar28->RefCounts).CurBlock * 0x200 + (pFVar28->RefCounts).CurBlockUsed;
  if ((uVar26 != 0) &&
     (pFVar2 = (pFVar28->RefCounts).Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    pFVar37 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar34 = 1;
    if ((int)uVar26 < 2) goto LAB_1443db0e2;
    do {
      sVar4 = *(short *)(*(longlong *)(pFVar2 + ((ulonglong)pFVar37 >> 9) * 8) +
                        (ulonglong)((uint)pFVar37 & 0x1ff) * 2);
      param_2 = local_178;
      if ((sVar4 != 0) && (sVar4 != -1)) break;
      uVar34 = (uint)pFVar37 + 1;
      pFVar37 = (FDynamicMeshAttributeSet *)(ulonglong)uVar34;
    } while ((int)uVar34 < (int)uVar26);
  }
  uVar34 = (uint)pFVar37;
LAB_1443db0e2:
  if (uVar34 != uVar26) {
    local_198 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)
                &param_2->VertexToVertexInstances;
LAB_1443db0f4:
    do {
      uVar34 = (uint)pFVar37;
      TVar27 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      if ((param_1->VertexUVs).bIsSet != false) {
        TVar27 = *(TVector2<float>_u_0 *)
                  (*(longlong *)
                    ((param_1->VertexUVs).TypedValue.Blocks.AllocatorInstance.Data +
                    ((ulonglong)pFVar37 >> 9) * 8) + (ulonglong)(uVar34 & 0x1ff) * 8);
      }
      FMeshElementIndexer::Find<FVertexInstanceID>
                ((FMeshElementIndexer *)local_198,local_a8,uVar34,0);
      pFVar1 = local_a8[0].DataPtr + local_a8[0].ArrayNum;
      param_1 = local_170;
      for (pFVar35 = local_a8[0].DataPtr; local_170 = param_1, pFVar35 != pFVar1;
          pFVar35 = pFVar35 + 1) {
        FVar7 = *pFVar35;
        pTVar19 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel(this_01,0);
        pTVar20 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                             (pTVar19,(int)FVar7)->field0_0x0;
        *pTVar20 = TVar27;
        pFVar28 = (FRefCountVector *)local_1a8._8_8_;
        param_1 = local_170;
      }
      uVar34 = uVar34 + 1;
      pFVar37 = (FDynamicMeshAttributeSet *)(ulonglong)uVar34;
      if ((int)uVar34 < (int)uVar26) {
        do {
          uVar25 = (ulonglong)((uint)pFVar37 & 0x1ff);
          lVar24 = *(longlong *)
                    ((pFVar28->RefCounts).Blocks.AllocatorInstance.Data +
                    ((ulonglong)pFVar37 >> 9) * 8);
          if ((*(short *)(lVar24 + uVar25 * 2) != 0) && (*(short *)(lVar24 + uVar25 * 2) != -1))
          goto LAB_1443db0f4;
          uVar34 = (uint)pFVar37 + 1;
          pFVar37 = (FDynamicMeshAttributeSet *)(ulonglong)uVar34;
        } while ((int)uVar34 < (int)uVar26);
      }
    } while (uVar34 != uVar26);
  }
  return;
}

// UpdateTangents @ 1443db220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDynamicMeshToMeshDescription::UpdateTangents
          (FDynamicMeshToMeshDescription *this,FDynamicMesh3 *param_1,FMeshDescription *param_2)

{
  int iVar1;
  FVertexInstanceID FVar2;
  FDynamicMeshAttributeSet *pFVar3;
  FVertexInstanceID *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  bool bVar9;
  FMeshElementContainer *pFVar10;
  FDynamicMeshAttributeSet *pFVar11;
  FAttributesSetEntry *pFVar12;
  TArrayView<FVertexInstanceID,int> *pTVar13;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar14;
  TVector<float> *pTVar15;
  TMeshAttributeArrayBase<float> *pTVar16;
  float *pfVar17;
  ulonglong uVar18;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_00;
  TMeshAttributeArraySet<float> *this_01;
  ulonglong uVar19;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this_02;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this_03;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this_04;
  int iVar20;
  float fVar21;
  undefined1 auStackY_198 [32];
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166;
  undefined1 local_165;
  undefined1 local_164;
  undefined1 local_163 [3];
  int local_160;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_158;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_150;
  FMeshDescription *local_148;
  TArrayView<FVertexInstanceID,int> local_140;
  TVector<float>_u_0 local_130;
  TVector<float>_u_0 local_124;
  TVector<float>_u_0 local_118;
  TVector<float>_u_0 local_108;
  TVector<float>_u_0 local_fc;
  TVector<float>_u_0 local_f0;
  TVector<float>_u_0 local_e0;
  TVector<float>_u_0 local_d4;
  TVector<float>_u_0 local_c8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_148 = param_2;
  if ((param_1->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
      (param_1->TriangleRefCounts).FreeIndices.CurBlockUsed != 0) {
    local_168 = 0;
    bVar9 = `FDynamicMeshToMeshDescription::UpdateTangents'::__l3::<lambda_1>::operator()
                      (&local_168);
    if (!bVar9) {
      return;
    }
  }
  iVar20 = (param_1->TriangleRefCounts).UsedCount;
  pFVar10 = FMeshElementChannels::Get(param_2->TriangleElements,0);
  if (iVar20 != (pFVar10->BitArray).NumBits - pFVar10->NumHoles) {
    local_167 = 0;
    bVar9 = `FDynamicMeshToMeshDescription::UpdateTangents'::__l5::<lambda_2>::operator()
                      (&local_167);
    if (!bVar9) {
      return;
    }
  }
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    local_166 = 0;
    bVar9 = `FDynamicMeshToMeshDescription::UpdateTangents'::__l7::<lambda_3>::operator()
                      (&local_166);
    if (!bVar9) {
      return;
    }
  }
  pFVar3 = (param_1->AttributeSet).Ptr;
  pFVar11 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar11 = pFVar3;
  }
  if ((pFVar11->NormalLayers).Array.ArrayNum < 1) {
    this_02 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  }
  else {
    this_02 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
               (pFVar11->NormalLayers).Array.AllocatorInstance.Data;
  }
  pFVar11 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar11 = pFVar3;
  }
  if ((pFVar11->NormalLayers).Array.ArrayNum < 2) {
    this_04 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  }
  else {
    this_04 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
               ((pFVar11->NormalLayers).Array.AllocatorInstance.Data + 8);
  }
  pFVar11 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar11 = pFVar3;
  }
  if ((pFVar11->NormalLayers).Array.ArrayNum < 3) {
    this_03 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  }
  else {
    this_03 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
               ((pFVar11->NormalLayers).Array.AllocatorInstance.Data + 0x10);
  }
  local_158 = this_04;
  local_150 = this_02;
  if (((this_02 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) ||
      (this_04 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) ||
     (this_03 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
    `FDynamicMeshToMeshDescription::UpdateTangents'::__l2::<lambda_4>::operator()(local_163);
  }
  else {
    pFVar10 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
    pFVar12 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar10->Attributes,MeshAttribute::VertexInstance::Tangent);
    if (((pFVar12 == (FAttributesSetEntry *)0x0) ||
        (this_00 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar12->Ptr).Ptr,
        *(uint *)&this_00->_padding_ != 1)) || (*(uint *)((longlong)&this_00->_padding_ + 4) != 1))
    {
      this_00 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
    }
    pFVar10 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
    pFVar12 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar10->Attributes,MeshAttribute::VertexInstance::BinormalSign);
    if (((pFVar12 == (FAttributesSetEntry *)0x0) ||
        (this_01 = (TMeshAttributeArraySet<float> *)(pFVar12->Ptr).Ptr,
        *(uint *)&this_01->_padding_ != 3)) || (*(uint *)((longlong)&this_01->_padding_ + 4) != 1))
    {
      this_01 = (TMeshAttributeArraySet<float> *)0x0;
    }
    if (this_00 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
      local_165 = 0;
      bVar9 = `FDynamicMeshToMeshDescription::UpdateTangents'::__l12::<lambda_5>::operator()
                        (&local_165);
      if (!bVar9) {
        return;
      }
    }
    if (this_01 == (TMeshAttributeArraySet<float> *)0x0) {
      local_164 = 0;
      bVar9 = `FDynamicMeshToMeshDescription::UpdateTangents'::__l14::<lambda_6>::operator()
                        (&local_164);
      if (!bVar9) {
        return;
      }
    }
    fVar7 = __real_bf800000;
    fVar6 = __real_3f800000;
    local_160 = (param_1->TriangleRefCounts).UsedCount;
    iVar20 = 0;
    if (0 < local_160) {
      do {
        uVar18 = (ulonglong)(iVar20 * 3 & 0x1ff);
        uVar19 = (ulonglong)((uint)(iVar20 * 3) >> 9);
        if (((-1 < *(int *)(*(longlong *)(*(longlong *)&this_02->field_0x78 + uVar19 * 8) +
                           uVar18 * 4)) &&
            (-1 < *(int *)(*(longlong *)(*(longlong *)&this_04->field_0x78 + uVar19 * 8) +
                          uVar18 * 4))) &&
           (-1 < *(int *)(*(longlong *)(*(longlong *)&this_03->field_0x78 + uVar19 * 8) + uVar18 * 4
                         ))) {
          UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
                    (this_02,iVar20,(TVector<float> *)&local_e0._s_0,
                     (TVector<float> *)&local_d4._s_0,(TVector<float> *)&local_c8._s_0);
          UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
                    (this_04,iVar20,(TVector<float> *)&local_130._s_0,
                     (TVector<float> *)&local_124._s_0,(TVector<float> *)&local_118._s_0);
          UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
                    (this_03,iVar20,(TVector<float> *)&local_108._s_0,
                     (TVector<float> *)&local_fc._s_0,(TVector<float> *)&local_f0._s_0);
          pTVar13 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                              (&local_148->TriangleVertexInstances,&local_140,iVar20);
          uVar8 = local_130._s_0.Z;
          pFVar4 = pTVar13->DataPtr;
          iVar1 = pTVar13->ArrayNum;
          fVar21 = fVar6;
          if ((local_e0._s_0.Z * local_108._s_0.Y - local_108._s_0.Z * local_e0._s_0.Y) *
              local_130._s_0.X +
              (local_108._s_0.Z * local_e0._s_0.X - local_e0._s_0.Z * local_108._s_0.X) *
              local_130._s_0.Y +
              (local_e0._s_0.Y * local_108._s_0.X - local_e0._s_0.X * local_108._s_0.Y) *
              local_130._s_0.Z < 0.0) {
            fVar21 = fVar7;
          }
          if ((iVar1 < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar2 = *pFVar4;
          pTVar14 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_00,0)
          ;
          pTVar15 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar14,(int)FVar2);
          *(undefined8 *)&pTVar15->field0_0x0 = local_130._0_8_;
          (pTVar15->field0_0x0)._s_0.Z = (float)uVar8;
          if ((iVar1 < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar2 = *pFVar4;
          pTVar16 = TMeshAttributeArraySet<float>::GetArrayForChannel(this_01,0);
          pfVar17 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar16,(int)FVar2);
          *pfVar17 = fVar21;
          fVar21 = fVar6;
          if ((local_d4._s_0.Z * local_fc._s_0.Y - local_fc._s_0.Z * local_d4._s_0.Y) *
              local_124._s_0.X +
              (local_fc._s_0.Z * local_d4._s_0.X - local_d4._s_0.Z * local_fc._s_0.X) *
              local_124._s_0.Y +
              (local_d4._s_0.Y * local_fc._s_0.X - local_d4._s_0.X * local_fc._s_0.Y) *
              local_124._s_0.Z < 0.0) {
            fVar21 = fVar7;
          }
          if ((iVar1 < 2) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar2 = pFVar4[1];
          pTVar14 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_00,0)
          ;
          pTVar15 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar14,(int)FVar2);
          *(ulonglong *)&pTVar15->field0_0x0 = CONCAT44(local_124._s_0.Y,local_124._s_0.X);
          (pTVar15->field0_0x0)._s_0.Z = local_124._s_0.Z;
          if ((iVar1 < 2) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar2 = pFVar4[1];
          pTVar16 = TMeshAttributeArraySet<float>::GetArrayForChannel(this_01,0);
          pfVar17 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar16,(int)FVar2);
          *pfVar17 = fVar21;
          fVar21 = fVar6;
          if ((local_f0._s_0.Z * local_c8._s_0.X - local_c8._s_0.Z * local_f0._s_0.X) *
              local_118._s_0.Y +
              (local_c8._s_0.Z * local_f0._s_0.Y - local_f0._s_0.Z * local_c8._s_0.Y) *
              local_118._s_0.X +
              (local_c8._s_0.Y * local_f0._s_0.X - local_c8._s_0.X * local_f0._s_0.Y) *
              local_118._s_0.Z < 0.0) {
            fVar21 = fVar7;
          }
          if ((iVar1 < 3) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar2 = pFVar4[2];
          pTVar14 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_00,0)
          ;
          pTVar15 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar14,(int)FVar2);
          *(ulonglong *)&pTVar15->field0_0x0 = CONCAT44(local_118._s_0.Y,local_118._s_0.X);
          (pTVar15->field0_0x0)._s_0.Z = local_118._s_0.Z;
          if ((iVar1 < 3) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar2 = pFVar4[2];
          pTVar16 = TMeshAttributeArraySet<float>::GetArrayForChannel(this_01,0);
          pfVar17 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar16,(int)FVar2);
          *pfVar17 = fVar21;
          this_02 = local_150;
          this_04 = local_158;
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 < local_160);
    }
  }
  return;
}

// UpdateTangents @ 1443db990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDynamicMeshToMeshDescription::UpdateTangents
          (FDynamicMeshToMeshDescription *this,FDynamicMesh3 *param_1,FMeshDescription *param_2,
          TMeshTangents<double> *param_3)

{
  uint uVar1;
  FVertexInstanceID FVar2;
  FDynamicMeshAttributeSet *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *this_00;
  bool bVar13;
  uint uVar14;
  FMeshElementContainer *pFVar15;
  FAttributesSetEntry *pFVar16;
  TArrayView<FVertexInstanceID,int> *pTVar17;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_01;
  TVector<float> *pTVar18;
  TMeshAttributeArrayBase<float> *this_02;
  float *pfVar19;
  FDynamicMeshAttributeSet *pFVar20;
  TMeshAttributeArraySet<float> *this_03;
  int iVar21;
  int iVar22;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_04;
  longlong lVar23;
  longlong lVar24;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this_05;
  float fVar25;
  float fVar26;
  undefined1 auStackY_198 [32];
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166;
  undefined1 local_165;
  undefined1 local_164 [4];
  int local_160;
  int local_15c;
  int local_158;
  TMeshTangents<double> *local_150;
  float *local_148;
  FVertexInstanceID *local_140;
  longlong local_138;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_130;
  longlong local_128;
  TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *local_120;
  double local_108;
  TArrayView<FVertexInstanceID,int> local_100 [2];
  double local_e0;
  undefined1 local_d8 [12];
  TVector<float> local_cc;
  TVector<float> local_c0;
  ulonglong local_b0;
  
  local_b0 = __security_cookie.value ^ (ulonglong)auStackY_198;
  iVar22 = (param_1->TriangleRefCounts).UsedCount;
  local_150 = param_3;
  pFVar15 = FMeshElementChannels::Get(param_2->TriangleElements,0);
  if (iVar22 != (pFVar15->BitArray).NumBits - pFVar15->NumHoles) {
    local_168 = 0;
    bVar13 = `FDynamicMeshToMeshDescription::UpdateTangents'::__l3::<lambda_1>::operator()
                       (&local_168);
    if (!bVar13) {
      return;
    }
  }
  if ((param_1->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
      (param_1->TriangleRefCounts).FreeIndices.CurBlockUsed != 0) {
    local_167 = 0;
    bVar13 = `FDynamicMeshToMeshDescription::UpdateTangents'::__l5::<lambda_2>::operator()
                       (&local_167);
    if (!bVar13) {
      return;
    }
  }
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    local_166 = 0;
    bVar13 = `FDynamicMeshToMeshDescription::UpdateTangents'::__l7::<lambda_3>::operator()
                       (&local_166);
    if (!bVar13) {
      return;
    }
  }
  pFVar3 = (param_1->AttributeSet).Ptr;
  pFVar20 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar20 = pFVar3;
  }
  if ((pFVar20->NormalLayers).Array.ArrayNum < 1) {
    this_05 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  }
  else {
    this_05 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
               (pFVar20->NormalLayers).Array.AllocatorInstance.Data;
  }
  local_130 = this_05;
  pFVar15 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  pFVar16 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar15->Attributes,MeshAttribute::VertexInstance::Tangent);
  if (((pFVar16 == (FAttributesSetEntry *)0x0) ||
      (this_04 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar16->Ptr).Ptr,
      *(uint *)&this_04->_padding_ != 1)) || (*(uint *)((longlong)&this_04->_padding_ + 4) != 1)) {
    this_04 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  pFVar15 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  pFVar16 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar15->Attributes,MeshAttribute::VertexInstance::BinormalSign);
  if (((pFVar16 == (FAttributesSetEntry *)0x0) ||
      (this_03 = (TMeshAttributeArraySet<float> *)(pFVar16->Ptr).Ptr,
      *(uint *)&this_03->_padding_ != 3)) || (*(uint *)((longlong)&this_03->_padding_ + 4) != 1)) {
    this_03 = (TMeshAttributeArraySet<float> *)0x0;
  }
  if (this_04 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
    local_165 = 0;
    bVar13 = `FDynamicMeshToMeshDescription::UpdateTangents'::__l9::<lambda_4>::operator()
                       (&local_165);
    if (!bVar13) {
      return;
    }
  }
  if (this_03 == (TMeshAttributeArraySet<float> *)0x0) {
    local_164[0] = 0;
    bVar13 = `FDynamicMeshToMeshDescription::UpdateTangents'::__l11::<lambda_5>::operator()
                       (local_164);
    if (!bVar13) {
      return;
    }
  }
  fVar12 = __real_bf800000;
  fVar11 = __real_3f800000;
  if ((this_04 != (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) &&
     (this_03 != (TMeshAttributeArraySet<float> *)0x0)) {
    local_138 = (longlong)(param_1->TriangleRefCounts).UsedCount;
    local_15c = 0;
    if (0 < local_138) {
      local_120 = &param_2->TriangleVertexInstances;
      lVar24 = 0;
      local_160 = 0;
      do {
        this_00 = local_120;
        iVar21 = local_15c;
        iVar22 = local_160;
        UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
                  (this_05,local_15c,(TVector<float> *)local_d8,&local_cc,&local_c0);
        pTVar17 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                            (this_00,local_100,iVar21);
        iVar21 = 0;
        lVar23 = 0;
        local_140 = pTVar17->DataPtr;
        local_158 = pTVar17->ArrayNum;
        local_148 = (float *)(local_d8 + 4);
        local_128 = (longlong)iVar22;
        do {
          uVar1 = iVar22 + iVar21;
          uVar14 = 0;
          if ((int)uVar1 < (local_150->Tangents).ArrayNum) {
            uVar14 = ~uVar1 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (local_150->Tangents).AllocatorInstance.Data;
          local_108 = *(double *)(pFVar4 + lVar24 + 0x10);
          pFVar4 = pFVar4 + lVar24;
          dVar7 = *(double *)pFVar4;
          dVar8 = *(double *)(pFVar4 + 8);
          uVar14 = 0;
          if ((int)uVar1 < (local_150->Bitangents).ArrayNum) {
            uVar14 = ~uVar1 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar22 = local_158;
          pFVar5 = (local_150->Bitangents).AllocatorInstance.Data;
          pFVar4 = pFVar5 + lVar24;
          dVar9 = *(double *)pFVar4;
          dVar10 = *(double *)(pFVar4 + 8);
          local_e0 = *(double *)(pFVar5 + lVar24 + 0x10);
          fVar25 = fVar11;
          if (((double)local_148[-1] * local_e0 - (double)local_148[1] * dVar9) * dVar8 +
              ((double)local_148[1] * dVar10 - local_e0 * (double)*local_148) * dVar7 +
              (dVar9 * (double)*local_148 - (double)local_148[-1] * dVar10) * local_108 < 0.0) {
            fVar25 = fVar12;
          }
          fVar26 = (float)local_108;
          if ((local_158 <= iVar21) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar2 = local_140[lVar23];
          this_01 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_04,0)
          ;
          pTVar18 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (this_01,(int)FVar2);
          (pTVar18->field0_0x0)._s_0.X = (float)dVar7;
          (pTVar18->field0_0x0)._s_0.Y = (float)dVar8;
          (pTVar18->field0_0x0)._s_0.Z = fVar26;
          if ((iVar22 <= iVar21) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar2 = local_140[lVar23];
          this_02 = TMeshAttributeArraySet<float>::GetArrayForChannel(this_03,0);
          pfVar19 = TMeshAttributeArrayBase<float>::GetElementBase(this_02,(int)FVar2);
          local_148 = local_148 + 3;
          iVar21 = iVar21 + 1;
          lVar23 = lVar23 + 1;
          lVar24 = lVar24 + 0x18;
          *pfVar19 = fVar25;
          iVar22 = local_160;
        } while (iVar21 < 3);
        local_160 = local_160 + 3;
        local_15c = local_15c + 1;
        local_138 = local_138 + -1;
        this_05 = local_130;
      } while (local_138 != 0);
    }
  }
  return;
}

// UpdateUsingConversionOptions @ 1443dbf20

void __thiscall
FDynamicMeshToMeshDescription::UpdateUsingConversionOptions
          (FDynamicMeshToMeshDescription *this,FDynamicMesh3 *param_1,FMeshDescription *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  FMeshElementContainer *pFVar6;
  
  if (((this->ConversionOptions).bUpdateNormals == false) &&
     ((this->ConversionOptions).bUpdateUVs == false)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  bVar1 = (this->ConversionOptions).bUpdatePositions;
  if (((param_1->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_1->VertexRefCounts).FreeIndices.CurBlockUsed == 0) &&
     (iVar3 = (param_1->VertexRefCounts).UsedCount,
     pFVar6 = FMeshElementChannels::Get(param_2->VertexElements,0),
     iVar3 == (pFVar6->BitArray).NumBits - pFVar6->NumHoles)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (((param_1->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_1->TriangleRefCounts).FreeIndices.CurBlockUsed == 0) &&
     (iVar3 = (param_1->TriangleRefCounts).UsedCount,
     pFVar6 = FMeshElementChannels::Get(param_2->TriangleElements,0),
     iVar3 == (pFVar6->BitArray).NumBits - pFVar6->NumHoles)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (bVar2) {
    if (bVar1 == false) {
      if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) goto LAB_1443dbfdf;
    }
    else if (!bVar4) goto LAB_1443dc01b;
  }
  else {
LAB_1443dbfdf:
    bVar5 = bVar4;
  }
  if (bVar5) {
    bVar2 = (this->ConversionOptions).bUpdateNormals;
    if ((this->ConversionOptions).bUpdatePositions == false) {
      if (((bVar2 != false) || ((this->ConversionOptions).bUpdateTangents != false)) ||
         ((this->ConversionOptions).bUpdateUVs != false)) {
        UpdateAttributes(this,param_1,param_2,bVar2,(this->ConversionOptions).bUpdateTangents,
                         (this->ConversionOptions).bUpdateUVs);
      }
    }
    else {
      Update(this,param_1,param_2,bVar2,(this->ConversionOptions).bUpdateTangents,
             (this->ConversionOptions).bUpdateUVs);
    }
    if ((this->ConversionOptions).bUpdateVtxColors == false) {
      return;
    }
    UpdateVertexColors(this,param_1,param_2);
    return;
  }
LAB_1443dc01b:
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    Convert_NoAttributes(this,param_1,param_2);
  }
  else {
    Convert_NoSharedInstances(this,param_1,param_2,false);
  }
  return;
}

// UpdateVertexColors @ 1443dc0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FDynamicMeshToMeshDescription::UpdateVertexColors
          (FDynamicMeshToMeshDescription *this,FDynamicMesh3 *param_1,FMeshDescription *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  FVertexInstanceID FVar6;
  FDynamicMeshAttributeSet *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  FMeshElementContainer *pFVar13;
  FAttributesSetEntry *pFVar14;
  TArrayView<FVertexInstanceID,int> *pTVar15;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this_00;
  TVector4<float> *pTVar16;
  FDynamicMeshAttributeSet *pFVar17;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this_01;
  int iVar18;
  float *pfVar19;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *this_02;
  FVertexInstanceID *pFVar20;
  int iVar21;
  undefined1 auStackY_138 [32];
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106;
  undefined1 local_105;
  int local_104;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *local_100;
  FMeshDescription *local_f8;
  FDynamicMeshToMeshDescription *local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  TArrayView<FVertexInstanceID,int> local_d8;
  undefined1 local_c8 [8];
  float afStack_c0 [2];
  TVector4<float>_u_0 local_b8;
  TVector4<float>_u_0 local_a8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_f8 = param_2;
  local_f0 = this;
  pFVar13 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  pFVar14 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar13->Attributes,MeshAttribute::VertexInstance::Color);
  if (((pFVar14 == (FAttributesSetEntry *)0x0) ||
      (this_01 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)(pFVar14->Ptr).Ptr,
      *(uint *)&this_01->_padding_ != 0)) || (*(uint *)((longlong)&this_01->_padding_ + 4) != 1)) {
    this_01 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0;
  }
  if ((param_1->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
      (param_1->TriangleRefCounts).FreeIndices.CurBlockUsed != 0) {
    local_108 = 0;
    bVar12 = `FDynamicMeshToMeshDescription::UpdateVertexColors'::__l3::<lambda_1>::operator()
                       (&local_108);
    if (!bVar12) {
      return;
    }
  }
  iVar21 = (param_1->TriangleRefCounts).UsedCount;
  pFVar13 = FMeshElementChannels::Get(param_2->TriangleElements,0);
  if (iVar21 != (pFVar13->BitArray).NumBits - pFVar13->NumHoles) {
    local_107 = 0;
    bVar12 = `FDynamicMeshToMeshDescription::UpdateVertexColors'::__l5::<lambda_2>::operator()
                       (&local_107);
    if (!bVar12) {
      return;
    }
  }
  pFVar7 = (param_1->AttributeSet).Ptr;
  if ((pFVar7 == (FDynamicMeshAttributeSet *)0x0) ||
     ((pFVar7->ColorLayer).Ptr ==
      (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0)) {
    local_106 = 0;
    bVar12 = `FDynamicMeshToMeshDescription::UpdateVertexColors'::__l7::<lambda_3>::operator()
                       (&local_106);
    if (!bVar12) {
      return;
    }
  }
  if (this_01 == (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
    local_105 = 0;
    bVar12 = `FDynamicMeshToMeshDescription::UpdateVertexColors'::__l9::<lambda_4>::operator()
                       (&local_105);
    if (!bVar12) {
      return;
    }
  }
  uVar10 = _UNK_150689648;
  uVar9 = ___xmm_3f800000000000000000000000000000;
  pFVar7 = (param_1->AttributeSet).Ptr;
  pFVar17 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar7 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar17 = pFVar7;
  }
  local_104 = (param_1->TriangleRefCounts).UsedCount;
  iVar21 = 0;
  this_02 = (pFVar17->ColorLayer).Ptr;
  local_100 = this_02;
  if (0 < local_104) {
    do {
      uVar11 = _UNK_150689648;
      if (-1 < *(int *)(*(longlong *)
                         (*(longlong *)&this_02->field_0x78 +
                         (ulonglong)((uint)(iVar21 * 3) >> 9) * 8) +
                       (ulonglong)(iVar21 * 3 & 0x1ff) * 4)) {
        local_c8 = (undefined1  [8])uVar9;
        _UNK_150689648 = (undefined4)uVar10;
        _UNK_15068964c = SUB84(uVar10,4);
        afStack_c0[0] = (float)_UNK_150689648;
        afStack_c0[1] = (float)_UNK_15068964c;
        local_b8._0_8_ = uVar9;
        local_b8._8_8_ = uVar10;
        local_a8._0_8_ = uVar9;
        local_a8._8_8_ = uVar10;
        _UNK_150689648 = uVar11;
        UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>::GetTriElements
                  (this_02,iVar21,(TVector4<float> *)local_c8,(TVector4<float> *)&local_b8._s_0,
                   (TVector4<float> *)&local_a8._s_0);
        ApplyVertexColorTransform(this,(TVector4<float> *)local_c8);
        ApplyVertexColorTransform(this,(TVector4<float> *)&local_b8._s_0);
        ApplyVertexColorTransform(this,(TVector4<float> *)&local_a8._s_0);
        pTVar15 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                            (&param_2->TriangleVertexInstances,&local_d8,iVar21);
        iVar18 = 0;
        pfVar19 = (float *)(local_c8 + 4);
        iVar5 = pTVar15->ArrayNum;
        pFVar20 = pTVar15->DataPtr;
        do {
          fVar1 = pfVar19[-1];
          fVar2 = *pfVar19;
          fVar3 = pfVar19[1];
          fVar4 = pfVar19[2];
          if ((iVar5 <= iVar18) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar6 = *pFVar20;
          this_00 = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel
                              (this_01,0);
          pTVar16 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                              (this_00,(int)FVar6);
          iVar18 = iVar18 + 1;
          pfVar19 = pfVar19 + 4;
          pFVar20 = pFVar20 + 1;
          (pTVar16->field0_0x0)._s_0.X = fVar1;
          (pTVar16->field0_0x0)._s_0.Y = fVar2;
          (pTVar16->field0_0x0)._s_0.Z = fVar3;
          (pTVar16->field0_0x0)._s_0.W = fVar4;
          param_2 = local_f8;
          this_02 = local_100;
          this = local_f0;
          local_e8 = fVar1;
          fStack_e4 = fVar2;
          fStack_e0 = fVar3;
          fStack_dc = fVar4;
        } while (iVar18 < 3);
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < local_104);
  }
  return;
}

// operator() @ 1504bd900

bool __thiscall
`FDynamicMeshToMeshDescription::UpdateTangents'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1814710123071799630>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1814710123071799630>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bd940

bool __thiscall
`FDynamicMeshToMeshDescription::UpdateTangents'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1814710123071799594>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1814710123071799594>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bd980

bool __thiscall
`FDynamicMeshToMeshDescription::UpdateVertexColors'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1814710123071799692>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1814710123071799692>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bd9c0

bool __thiscall
`FDynamicMeshToMeshDescription::UpdateAttributes'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1814710123071799454>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1814710123071799454>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bdb00

bool __thiscall
`FDynamicMeshToMeshDescription::UpdateTangents'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1814710123071799631>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1814710123071799631>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bdb40

bool __thiscall
`FDynamicMeshToMeshDescription::UpdateTangents'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1814710123071799595>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1814710123071799595>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bdb80

bool __thiscall
`FDynamicMeshToMeshDescription::UpdateVertexColors'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1814710123071799693>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1814710123071799693>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bdbc0

bool __thiscall
`FDynamicMeshToMeshDescription::UpdateAttributes'::__l48::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1814710123071799487>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1814710123071799487>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bdc80

bool __thiscall
`FDynamicMeshToMeshDescription::UpdateTangents'::__l7::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1814710123071799632>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1814710123071799632>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bdcc0

bool __thiscall
`FDynamicMeshToMeshDescription::UpdateTangents'::__l7::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1814710123071799596>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1814710123071799596>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bdd00

bool __thiscall
`FDynamicMeshToMeshDescription::UpdateVertexColors'::__l7::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1814710123071799694>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1814710123071799694>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bdd40

bool __thiscall
`FDynamicMeshToMeshDescription::UpdateTangents'::__l2::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1814710123071799640>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1814710123071799640>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bdd80

bool __thiscall
`FDynamicMeshToMeshDescription::UpdateTangents'::__l9::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1814710123071799604>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1814710123071799604>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bddc0

bool __thiscall
`FDynamicMeshToMeshDescription::UpdateVertexColors'::__l9::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1814710123071799695>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1814710123071799695>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bde00

bool __thiscall
`FDynamicMeshToMeshDescription::UpdateTangents'::__l11::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1814710123071799605>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1814710123071799605>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bde40

bool __thiscall
`FDynamicMeshToMeshDescription::UpdateTangents'::__l12::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1814710123071799651>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1814710123071799651>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bde80

bool __thiscall
`FDynamicMeshToMeshDescription::UpdateTangents'::__l14::<lambda_6>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1814710123071799652>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1814710123071799652>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

