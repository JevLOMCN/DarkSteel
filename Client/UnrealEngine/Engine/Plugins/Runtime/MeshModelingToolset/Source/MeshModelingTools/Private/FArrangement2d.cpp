// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 9

// find_existing_vertex @ 14cc8bb10

int __thiscall
UE::Geometry::FArrangement2d::find_existing_vertex(FArrangement2d *this,TVector2<double> *param_1)

{
  int iVar1;
  TTuple<int,double> *pTVar2;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  TVector2<double>_u_0 *local_58;
  FArrangement2d *local_50;
  code *local_48;
  undefined1 *local_40;
  code *local_38;
  TVector2<double>_u_0 **local_30;
  TVector2<double>_u_0 local_28;
  TTuple<int,double> local_18;
  
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_58 = &local_28;
  local_40 = local_res8;
  local_48 = Core::Private::Function::
             TFunctionRefCaller<UE::Geometry::<lambda_38_>,bool,int_const_&>::Call;
  local_30 = &local_58;
  local_res10 = 0xffffffff;
  local_38 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FArrangement2d::find_nearest_vertex'::__l2::<lambda_1>,double,int_const_&>
             ::Call;
  local_50 = this;
  pTVar2 = TPointHashGrid2<int,double>::FindNearestInRadius
                     (&this->PointHash,&local_18,(TVector2<double> *)&local_28._s_0,
                      this->VertexSnapTol,(TFunctionRef<double___cdecl(int_const_&)> *)&local_38,
                      (TFunctionRef<bool___cdecl(int_const_&)> *)&local_48);
  iVar1 = *(int *)pTVar2;
  if (*(int *)pTVar2 == (this->PointHash).InvalidValue) {
    iVar1 = -1;
  }
  return iVar1;
}

// find_intersecting_edges @ 14cc8bbc0

bool __thiscall
UE::Geometry::FArrangement2d::find_intersecting_edges
          (FArrangement2d *this,TVector2<double> *param_1,TVector2<double> *param_2,
          TArray<UE::Geometry::FArrangement2d::FIntersection,TSizedDefaultAllocator<32>_> *param_3,
          double param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 in_XMM4 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  uint uVar36;
  int local_res8;
  double local_res10;
  double local_268;
  double local_260;
  undefined1 local_258 [24];
  double local_240;
  TVector2<double>_u_0 local_228;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  uint local_188;
  int iStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  
  iVar13 = 0;
  dVar23 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar25 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  local_res8 = 0;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = dVar25 * dVar25 + dVar23 * dVar23;
  auVar27 = sqrtpd(in_XMM4,auVar27);
  if (auVar27._0_8_ <= 0.0) {
    dVar25 = 0.0;
    dVar26 = 0.0;
  }
  else {
    dVar26 = __real_3ff0000000000000 / auVar27._0_8_;
    dVar25 = dVar26 * dVar25;
    dVar26 = dVar26 * dVar23;
  }
  uVar20 = (int)(this->Graph)._padding_ * 0x200 + *(int *)((longlong)&(this->Graph)._padding_ + 4);
  uVar17 = 0;
  if ((uVar20 != 0) &&
     (puVar5 = (undefined8 *)(this->Graph)._padding_, uVar17 = 0,
     0xfffd < (ushort)(*(short *)*puVar5 - 1U))) {
    uVar16 = 1;
    uVar17 = 1;
    if (1 < (int)uVar20) {
      do {
        lVar6 = puVar5[uVar16 >> 9];
        if ((*(short *)(lVar6 + (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
           (uVar17 = uVar16, *(short *)(lVar6 + (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) break;
        uVar16 = uVar16 + 1;
        uVar17 = uVar16;
      } while ((int)uVar16 < (int)uVar20);
    }
  }
  if (uVar17 != uVar20) {
    local_258._8_8_ = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
    dVar23 = (double)local_258._8_8_;
    uVar21 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
    uVar22 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
    uVar30 = SUB84(__real_3fe0000000000000,0);
    uVar31 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
    local_240 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
    uVar32 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
    uVar33 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
    uVar16 = SUB84(param_4,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar36 = (uint)((ulonglong)param_4 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    local_260 = (double)local_258._8_8_;
    local_res10 = local_240;
    local_268 = (double)local_258._8_8_;
    local_258._0_16_ = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    uVar34 = uVar32;
    uVar35 = uVar33;
LAB_14cc8bd90:
    do {
      if ((-1 < (int)uVar17) &&
         ((int)uVar17 <
          (int)(this->Graph)._padding_ * 0x200 + *(int *)((longlong)&(this->Graph)._padding_ + 4)))
      {
        uVar14 = (ulonglong)(uVar17 & 0x1ff);
        iVar13 = local_res8;
        if ((ushort)(*(short *)(*(longlong *)
                                 ((this->Graph)._padding_ + (ulonglong)(uVar17 >> 9) * 8) +
                               uVar14 * 2) - 1U) < 0xfffe) {
          pFVar15 = (this->Graph).vertices.Data.Blocks.AllocatorInstance.Data;
          lVar6 = *(longlong *)((this->Graph)._padding_ + (ulonglong)(uVar17 >> 9) * 8);
          uVar4 = *(uint *)(lVar6 + uVar14 * 0xc);
          local_res10 = *(double *)
                         (*(longlong *)(pFVar15 + (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) +
                         (ulonglong)(uVar4 * 2 & 0x1ff) * 8);
          uVar34 = SUB84(local_res10,0);
          uVar35 = (undefined4)((ulonglong)local_res10 >> 0x20);
          local_260 = *(double *)
                       (*(longlong *)(pFVar15 + (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar4 * 2 + 1 & 0x1ff) * 8);
          uVar21 = SUB84(local_260,0);
          uVar22 = (undefined4)((ulonglong)local_260 >> 0x20);
          uVar4 = *(uint *)(lVar6 + 4 + uVar14 * 0xc);
          uVar1 = *(undefined8 *)
                   (*(longlong *)(pFVar15 + (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) +
                   (ulonglong)(uVar4 * 2 & 0x1ff) * 8);
          uVar32 = (undefined4)uVar1;
          uVar33 = (undefined4)((ulonglong)uVar1 >> 0x20);
          local_258._0_8_ = uVar1;
          dVar23 = *(double *)
                    (*(longlong *)(pFVar15 + (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar4 * 2 + 1 & 0x1ff) * 8);
          local_268 = dVar23;
        }
      }
      dVar2 = (param_1->field0_0x0)._s_0.X;
      dVar3 = (param_1->field0_0x0)._s_0.Y;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = dVar3;
      dVar24 = ((double)CONCAT44(uVar35,uVar34) - dVar2) * dVar26 +
               ((double)CONCAT44(uVar22,uVar21) - dVar3) * dVar25;
      dVar10 = ((double)CONCAT44(uVar33,uVar32) - dVar2) * dVar26 + (dVar23 - dVar3) * dVar25;
      if (dVar24 <= param_4) {
        iVar19 = ((double)CONCAT44(uVar36,uVar16) < dVar24 ||
                 (double)CONCAT44(uVar36,uVar16) == dVar24) - 1;
      }
      else {
        iVar19 = 1;
      }
      if (dVar10 <= param_4) {
        iVar18 = ((double)CONCAT44(uVar36,uVar16) < dVar10 ||
                 (double)CONCAT44(uVar36,uVar16) == dVar10) - 1;
      }
      else {
        iVar18 = 1;
      }
      if ((iVar19 != iVar18) || (iVar19 == 0)) {
        dVar23 = (param_2->field0_0x0)._s_0.X;
        dVar10 = (param_2->field0_0x0)._s_0.Y;
        dStack_1f0 = dVar23 - dVar2;
        auVar28._0_8_ = dVar10 - dVar3;
        auVar28._8_8_ = 0;
        dStack_200 = (dVar2 + dVar23) * (double)CONCAT44(uVar31,uVar30);
        local_1f8 = (dVar10 + dVar3) * (double)CONCAT44(uVar31,uVar30);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = dStack_1f0 * dStack_1f0 + auVar28._0_8_ * auVar28._0_8_;
        auVar27 = sqrtpd(auVar29,auVar8);
        dStack_1e0 = auVar27._0_8_;
        if (dStack_1e0 <= 0.0) {
          dStack_1e0 = 0.0;
          local_1e8 = 0.0;
          dStack_1f0 = 0.0;
        }
        else {
          dStack_1f0 = (__real_3ff0000000000000 / dStack_1e0) * dStack_1f0;
          local_1e8 = (__real_3ff0000000000000 / dStack_1e0) * auVar28._0_8_;
        }
        local_218 = (double)local_258._0_8_ - local_res10;
        dStack_1e0 = dStack_1e0 * (double)CONCAT44(uVar31,uVar30);
        local_228._s_0.X =
             ((double)CONCAT44(uVar33,uVar32) + (double)CONCAT44(uVar35,uVar34)) *
             (double)CONCAT44(uVar31,uVar30);
        local_228._s_0.Y = (local_268 + local_260) * (double)CONCAT44(uVar31,uVar30);
        dStack_210 = local_268 - local_260;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = dStack_210 * dStack_210 + local_218 * local_218;
        auVar27 = sqrtpd(auVar28,auVar9);
        local_208 = auVar27._0_8_;
        if (local_208 <= 0.0) {
          local_208 = 0.0;
          dStack_210 = 0.0;
          local_218 = 0.0;
        }
        else {
          local_218 = (__real_3ff0000000000000 / local_208) * local_218;
          dStack_210 = (__real_3ff0000000000000 / local_208) * dStack_210;
        }
        uVar30 = SUB84(__real_3fe0000000000000,0);
        uVar31 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
        local_1d8 = param_4;
        if (param_4 <= 0.0) {
          local_1d8 = 0.0;
        }
        local_208 = local_208 * __real_3fe0000000000000;
        local_1c8 = 0;
        uStack_1d0 = __real_3f1a36e2eb1c432d;
        uStack_1c0 = 0;
        bVar11 = TIntrSegment2Segment2<double>::Find
                           ((TIntrSegment2Segment2<double> *)&local_228._s_0);
        if (bVar11) {
          local_178 = local_228._s_0.X;
          dStack_170 = local_228._s_0.Y;
          local_168 = local_218;
          dStack_160 = dStack_210;
          local_158 = local_208;
          dStack_150 = dStack_200;
          local_148 = local_1f8;
          dStack_140 = dStack_1f0;
          local_138 = local_1e8;
          dStack_130 = dStack_1e0;
          uStack_110 = CONCAT44(uStack_1bc,uStack_1c0);
          local_128 = local_1d8;
          uStack_120 = uStack_1d0;
          local_118 = local_1c8;
          local_108 = local_1b8;
          uStack_100 = uStack_1b0;
          local_f8 = local_1a8;
          uStack_f0 = uStack_1a0;
          local_e8 = local_198;
          uStack_e0 = uStack_190;
          pFVar15 = (param_3->AllocatorInstance).Data;
          local_188 = uVar17;
          iStack_184 = iVar19;
          iStack_180 = iVar18;
          if (((pFVar15 <= (FScriptContainerElement *)&local_188) &&
              ((FScriptContainerElement *)&local_188 < pFVar15 + (longlong)param_3->ArrayMax * 0xb0)
              ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          iVar13 = param_3->ArrayNum;
          if (iVar13 == param_3->ArrayMax) {
            iVar13 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x8b0,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar13 + 1;
          pFVar15 = (param_3->AllocatorInstance).Data + (longlong)iVar13 * 0xb0;
          local_res8 = local_res8 + 1;
          *(ulonglong *)pFVar15 = CONCAT44(iStack_184,local_188);
          *(ulonglong *)(pFVar15 + 8) = CONCAT44(uStack_17c,iStack_180);
          *(double *)(pFVar15 + 0x10) = local_178;
          *(double *)(pFVar15 + 0x18) = dStack_170;
          *(double *)(pFVar15 + 0x20) = local_168;
          *(double *)(pFVar15 + 0x28) = dStack_160;
          *(double *)(pFVar15 + 0x30) = local_158;
          *(double *)(pFVar15 + 0x38) = dStack_150;
          *(double *)(pFVar15 + 0x40) = local_148;
          *(double *)(pFVar15 + 0x48) = dStack_140;
          *(double *)(pFVar15 + 0x50) = local_138;
          *(double *)(pFVar15 + 0x58) = dStack_130;
          *(double *)(pFVar15 + 0x60) = local_128;
          *(undefined8 *)(pFVar15 + 0x68) = uStack_120;
          *(undefined8 *)(pFVar15 + 0x70) = local_118;
          *(undefined8 *)(pFVar15 + 0x78) = uStack_110;
          *(undefined8 *)(pFVar15 + 0x80) = local_108;
          *(undefined8 *)(pFVar15 + 0x88) = uStack_100;
          *(undefined8 *)(pFVar15 + 0x90) = local_f8;
          *(undefined8 *)(pFVar15 + 0x98) = uStack_f0;
          *(undefined8 *)(pFVar15 + 0xa0) = local_e8;
          *(undefined8 *)(pFVar15 + 0xa8) = uStack_e0;
        }
        uVar32 = local_258._0_4_;
        uVar33 = local_258._4_4_;
        uVar34 = SUB84(local_res10,0);
        uVar35 = (undefined4)((ulonglong)local_res10 >> 0x20);
        dVar23 = local_268;
        iVar13 = local_res8;
      }
      uVar17 = uVar17 + 1;
      uVar21 = SUB84(local_260,0);
      uVar22 = (undefined4)((ulonglong)local_260 >> 0x20);
      if ((int)uVar17 < (int)uVar20) {
        do {
          lVar6 = *(longlong *)((this->Graph)._padding_ + (ulonglong)(uVar17 >> 9) * 8);
          if ((*(short *)(lVar6 + (ulonglong)(uVar17 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar6 + (ulonglong)(uVar17 & 0x1ff) * 2) != -1)) goto LAB_14cc8bd90;
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < (int)uVar20);
      }
    } while (uVar17 != uVar20);
  }
  return 0 < iVar13;
}

// find_intersecting_floating_vertices @ 14cc8c320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FArrangement2d::find_intersecting_floating_vertices
          (FArrangement2d *this,TSegment2<double> *param_1,int param_2,int param_3,
          TArray<UE::Geometry::FArrangement2d::FSegmentPoint,TSizedDefaultAllocator<32>_> *param_4,
          double param_5)

{
  double dVar1;
  double dVar2;
  undefined8 *puVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_108 [32];
  double *local_e8;
  FScriptContainerElement *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  TVector2<double>_u_0 local_b8;
  double local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_108;
  iVar13 = 0;
  uVar14 = (int)(this->Graph)._padding_ * 0x200 + *(int *)((longlong)&(this->Graph)._padding_ + 4);
  uVar12 = 0;
  if ((uVar14 != 0) &&
     (puVar3 = (undefined8 *)(this->Graph)._padding_, uVar12 = 0,
     0xfffd < (ushort)(*(short *)*puVar3 - 1U))) {
    uVar11 = 1;
    uVar12 = 1;
    if (1 < (int)uVar14) {
      do {
        lVar4 = puVar3[uVar11 >> 9];
        if ((*(short *)(lVar4 + (ulonglong)(uVar11 & 0x1ff) * 2) != 0) &&
           (uVar12 = uVar11, *(short *)(lVar4 + (ulonglong)(uVar11 & 0x1ff) * 2) != -1)) break;
        uVar11 = uVar11 + 1;
        uVar12 = uVar11;
      } while ((int)uVar11 < (int)uVar14);
    }
  }
  if (uVar12 != uVar14) {
    uVar11 = (uint)__xmm_80000000000000008000000000000000;
    uVar7 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
LAB_14cc8c400:
    do {
      if (((int)uVar12 < 0) ||
         ((int)(this->Graph)._padding_ * 0x200 + *(int *)((longlong)&(this->Graph)._padding_ + 4) <=
          (int)uVar12)) {
LAB_14cc8c46c:
        if ((uVar12 != param_2) && (uVar12 != param_3)) {
          FDynamicGraph2<double>::GetVertex(&this->Graph,(TVector2<double> *)&local_b8._s_0,uVar12);
          dVar18 = (param_1->Center).field0_0x0._s_0.X;
          dVar17 = (param_1->Center).field0_0x0._s_0.Y;
          dVar20 = (param_1->Direction).field0_0x0._s_0.X;
          dVar1 = (param_1->Direction).field0_0x0._s_0.Y;
          dVar2 = param_1->Extent;
          dVar19 = (local_b8._s_0.Y - dVar17) * dVar1 + (local_b8._s_0.X - dVar18) * dVar20;
          if (dVar19 < dVar2) {
            uVar15 = SUB84(dVar2,0) ^ uVar11;
            uVar16 = (uint)((ulonglong)dVar2 >> 0x20) ^ (uint)uVar7;
            if ((double)CONCAT44(uVar16,uVar15) <= dVar19 &&
                dVar19 != (double)CONCAT44(uVar16,uVar15)) {
              dVar17 = local_b8._s_0.Y - (dVar1 * dVar19 + dVar17);
              dVar18 = local_b8._s_0.X - (dVar20 * dVar19 + dVar18);
              dVar18 = dVar17 * dVar17 + dVar18 * dVar18;
            }
            else {
              dVar19 = (double)CONCAT44(uVar16,uVar15);
              dVar20 = (dVar18 - dVar20 * dVar2) - local_b8._s_0.X;
              dVar18 = (dVar17 - dVar1 * dVar2) - local_b8._s_0.Y;
              dVar18 = dVar18 * dVar18 + dVar20 * dVar20;
            }
          }
          else {
            dVar17 = (dVar1 * dVar2 + dVar17) - local_b8._s_0.Y;
            dVar18 = (dVar20 * dVar2 + dVar18) - local_b8._s_0.X;
            dVar18 = dVar17 * dVar17 + dVar18 * dVar18;
            dVar19 = dVar2;
          }
          if (dVar18 < param_5 * param_5) {
            pFVar5 = (param_4->AllocatorInstance).Data;
            local_a8 = dVar19;
            uStack_a0 = uVar12;
            if ((pFVar5 <= (FScriptContainerElement *)&local_a8) &&
               ((FScriptContainerElement *)&local_a8 < pFVar5 + (longlong)param_4->ArrayMax * 0x10))
            {
              local_d0 = (longlong)param_4->ArrayNum;
              local_c8 = 0x10;
              local_e8 = &local_a8;
              local_e0 = pFVar5;
              local_d8 = (longlong)param_4->ArrayMax;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar8) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
            }
            iVar10 = param_4->ArrayNum;
            if (iVar10 == param_4->ArrayMax) {
              iVar10 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
            }
            param_4->ArrayNum = iVar10 + 1;
            iVar13 = iVar13 + 1;
            pFVar5 = (param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
            *(double *)pFVar5 = local_a8;
            *(ulonglong *)(pFVar5 + 8) = CONCAT44(uStack_9c,uStack_a0);
          }
        }
      }
      else {
        if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((this->Graph)._padding_ + (ulonglong)(uVar12 >> 9) * 8) +
                                        (ulonglong)(uVar12 & 0x1ff) * 2) - 1U)) goto LAB_14cc8c46c;
        uVar15 = *(uint *)(*(longlong *)((this->Graph)._padding_ + (ulonglong)(uVar12 >> 9) * 8) +
                          (ulonglong)(uVar12 & 0x1ff) * 4);
        if (uVar15 == 0xffffffff) {
          iVar10 = 0;
        }
        else {
          iVar10 = *(int *)(*(longlong *)((this->Graph)._padding_ + (ulonglong)(uVar15 >> 9) * 8) +
                           (ulonglong)(uVar15 & 0x1ff) * 4);
        }
        if (iVar10 < 1) goto LAB_14cc8c46c;
      }
      uVar12 = uVar12 + 1;
      if ((int)uVar12 < (int)uVar14) {
        do {
          lVar4 = *(longlong *)((this->Graph)._padding_ + (ulonglong)(uVar12 >> 9) * 8);
          if ((*(short *)(lVar4 + (ulonglong)(uVar12 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar4 + (ulonglong)(uVar12 & 0x1ff) * 2) != -1)) goto LAB_14cc8c400;
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar14);
      }
    } while (uVar12 != uVar14);
  }
  return 0 < iVar13;
}

// insert_point @ 14cc8c6e0

int __thiscall
UE::Geometry::FArrangement2d::insert_point
          (FArrangement2d *this,TVector2<double> *param_1,double param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  EMeshResult EVar11;
  uint uVar12;
  TTuple<int,double> *pTVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 unaff_XMM7 [16];
  undefined1 local_res8 [8];
  uint local_res10 [2];
  FEdgeSplitInfo local_res20;
  TVector2<double>_u_0 *local_128;
  FArrangement2d *local_120;
  code *local_118;
  undefined1 *local_110;
  code *local_108;
  TVector2<double>_u_0 **local_100;
  TVector2<double>_u_0 local_f8;
  TTuple<int,double> local_e8 [9];
  
  local_f8._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_f8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_128 = &local_f8;
  local_110 = local_res8;
  local_118 = Core::Private::Function::
              TFunctionRefCaller<UE::Geometry::<lambda_38_>,bool,int_const_&>::Call;
  uVar12 = 0xffffffff;
  local_100 = &local_128;
  local_res20.VNew = -1;
  local_108 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FArrangement2d::find_nearest_vertex'::__l2::<lambda_1>,double,int_const_&>
              ::Call;
  local_120 = this;
  pTVar13 = TPointHashGrid2<int,double>::FindNearestInRadius
                      (&this->PointHash,local_e8,(TVector2<double> *)&local_f8._s_0,
                       this->VertexSnapTol,(TFunctionRef<double___cdecl(int_const_&)> *)&local_108,
                       (TFunctionRef<bool___cdecl(int_const_&)> *)&local_118);
  if ((*(int *)pTVar13 == (this->PointHash).InvalidValue) || (*(int *)pTVar13 < 0)) {
    uVar15 = 0;
    iVar17 = (int)(this->Graph)._padding_ * 0x200 + *(int *)((longlong)&(this->Graph)._padding_ + 4)
    ;
    dVar10 = param_2 * param_2;
    if (0 < iVar17) {
      uVar16 = 0;
      do {
        uVar14 = (ulonglong)(uVar16 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 ((this->Graph)._padding_ + (ulonglong)(uVar15 >> 9) * 8) +
                               uVar14 * 2) - 1U) < 0xfffe) {
          pFVar6 = (this->Graph).vertices.Data.Blocks.AllocatorInstance.Data;
          lVar7 = *(longlong *)((this->Graph)._padding_ + (ulonglong)(uVar15 >> 9) * 8);
          uVar5 = *(uint *)(lVar7 + uVar14 * 0xc);
          dVar20 = *(double *)
                    (*(longlong *)(pFVar6 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar5 * 2 & 0x1ff) * 8);
          dVar3 = *(double *)
                   (*(longlong *)(pFVar6 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                   (ulonglong)(uVar5 * 2 + 1 & 0x1ff) * 8);
          uVar5 = *(uint *)(lVar7 + 4 + uVar14 * 0xc);
          dVar22 = *(double *)
                    (*(longlong *)(pFVar6 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar5 * 2 & 0x1ff) * 8);
          uVar14 = (ulonglong)(uVar5 * 2 + 1 & 0x1ff);
          dVar18 = dVar22 - dVar20;
          dVar19 = *(double *)
                    (*(longlong *)(pFVar6 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) + uVar14 * 8
                    ) - dVar3;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = dVar19 * dVar19 + dVar18 * dVar18;
          unaff_XMM7 = sqrtpd(unaff_XMM7,auVar8);
          if (unaff_XMM7._0_8_ <= 0.0) {
            unaff_XMM7 = ZEXT816(0);
            dVar18 = 0.0;
            dVar19 = 0.0;
          }
          else {
            dVar21 = __real_3ff0000000000000 / unaff_XMM7._0_8_;
            dVar18 = dVar18 * dVar21;
            dVar19 = dVar19 * dVar21;
          }
          dVar21 = (param_1->field0_0x0)._s_0.X;
          dVar4 = (param_1->field0_0x0)._s_0.Y;
          dVar9 = unaff_XMM7._0_8_ * __real_3fe0000000000000;
          dVar3 = (dVar3 + *(double *)
                            (*(longlong *)(pFVar6 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                            uVar14 * 8)) * __real_3fe0000000000000;
          dVar20 = (dVar22 + dVar20) * __real_3fe0000000000000;
          dVar22 = (dVar21 - dVar20) * dVar18 + (dVar4 - dVar3) * dVar19;
          if (dVar22 < dVar9) {
            unaff_XMM7._0_8_ = unaff_XMM7._0_8_ * __real_bfe0000000000000;
            if (unaff_XMM7._0_8_ < dVar22) {
              dVar21 = dVar21 - (dVar18 * dVar22 + dVar20);
              dVar4 = dVar4 - (dVar19 * dVar22 + dVar3);
              dVar20 = dVar4 * dVar4 + dVar21 * dVar21;
            }
            else {
              dVar21 = (dVar20 - dVar9 * dVar18) - dVar21;
              dVar4 = (dVar3 - dVar9 * dVar19) - dVar4;
              dVar20 = dVar4 * dVar4 + dVar21 * dVar21;
            }
          }
          else {
            dVar4 = (dVar9 * dVar19 + dVar3) - dVar4;
            dVar21 = (dVar9 * dVar18 + dVar20) - dVar21;
            dVar20 = dVar4 * dVar4 + dVar21 * dVar21;
          }
          if (dVar20 < dVar10) {
            dVar10 = dVar20;
            uVar12 = uVar15;
          }
        }
        uVar15 = uVar15 + 1;
        uVar16 = uVar16 + 1;
      } while ((int)uVar15 < iVar17);
      if (-1 < (int)uVar12) {
        EVar11 = FDynamicGraph::SplitEdge((FDynamicGraph *)this,uVar12,&local_res20);
        if (EVar11 != Ok) {
          `UE::Geometry::FArrangement2d::insert_point'::__l16::<lambda_1>::operator()(local_res8);
        }
        local_f8._s_0.X = (param_1->field0_0x0)._s_0.X;
        local_f8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
        FDynamicGraph2<double>::SetVertex
                  (&this->Graph,local_res20.VNew,(TVector2<double> *)&local_f8._s_0);
        TPointHashGrid2<int,double>::InsertPointUnsafe(&this->PointHash,&local_res20.VNew,param_1);
        return local_res20.VNew;
      }
    }
    dVar10 = (param_1->field0_0x0)._s_0.X;
    dVar20 = (param_1->field0_0x0)._s_0.Y;
    uVar12 = FRefCountVector::Allocate((FRefCountVector *)&(this->Graph)._padding_);
    if ((int)uVar12 <
        (int)(this->Graph)._padding_ * 0x200 + *(int *)((longlong)&(this->Graph)._padding_ + 4)) {
      FSmallListSet::Clear((FSmallListSet *)&(this->Graph)._padding_,uVar12);
    }
    FSmallListSet::AllocateAt((FSmallListSet *)&(this->Graph)._padding_,uVar12);
    plVar1 = &(this->Graph)._padding_;
    *(int *)plVar1 = (int)*plVar1 + 1;
    piVar2 = (int *)((longlong)&(this->Graph)._padding_ + 4);
    *piVar2 = *piVar2 + 1;
    local_f8._s_0.X = dVar10;
    local_f8._s_0.Y = dVar20;
    TDynamicVectorN<double,2>::InsertAt
              (&(this->Graph).vertices,(ElementVectorN *)&local_f8._s_0,uVar12);
    local_res10[0] = uVar12;
    TPointHashGrid2<int,double>::InsertPointUnsafe(&this->PointHash,(int *)local_res10,param_1);
  }
  else {
    local_res10[0] = 0xffffffff;
  }
  return local_res10[0];
}

// insert_segment @ 14cc8cbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::FArrangement2d::insert_segment
          (FArrangement2d *this,TVector2<double> *param_1,TVector2<double> *param_2,int param_3,
          double param_4)

{
  longlong *plVar1;
  int *piVar2;
  short *psVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  EMeshResult EVar15;
  TTuple<int,double> *pTVar16;
  TVector2<double> *pTVar17;
  TVector2<double> *pTVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  TPointHashGrid2<int,double> *this_00;
  longlong lVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  uint uVar35;
  undefined1 auStackY_558 [32];
  TArray<UE::Geometry::FArrangement2d::FSegmentPoint,TSizedDefaultAllocator<32>_> local_508;
  int local_4f8;
  int local_4f4;
  undefined1 local_4f0;
  FIdentityFunctor local_4ef;
  undefined1 local_4ee;
  undefined1 local_4ed;
  undefined1 local_4ec;
  undefined1 local_4eb;
  undefined1 local_4ea [2];
  longlong local_4e8;
  longlong local_4e0;
  FEdgeSplitInfo local_4d8;
  int local_4d0;
  TVector2<double> *local_4c8;
  TArray<UE::Geometry::FArrangement2d::FIntersection,TSizedDefaultAllocator<32>_> local_4c0;
  TVector2<double>_u_0 local_4b0;
  double local_4a0;
  double local_498;
  double local_490;
  undefined4 local_488;
  undefined4 local_480;
  undefined4 local_478;
  undefined4 local_470;
  undefined1 local_468 [8];
  undefined1 local_460 [8];
  TVector2<double> *local_458;
  code *local_450;
  undefined1 *local_448;
  code *local_440;
  TVector2<double>_u_0 **local_438;
  TVector2<double>_u_0 local_428;
  code *local_418;
  TVector2<double>_u_0 **local_410;
  TVector2<double>_u_0 *local_408;
  FArrangement2d *local_400;
  code *local_3f8;
  undefined1 *local_3f0;
  code *local_3e8;
  TVector2<double>_u_0 **local_3e0;
  TVector2<double>_u_0 local_3d8;
  TVector2<double>_u_0 *local_3c8;
  FArrangement2d *local_3c0;
  code *local_3b8;
  undefined1 *local_3b0;
  TVector2<double>_u_0 local_3a8;
  TVector2<double>_u_0 local_398;
  TVector2<double>_u_0 local_388;
  TVector2<double>_u_0 local_378;
  TVector2<double>_u_0 local_368;
  TVector2<double>_u_0 local_358;
  TVector2<double>_u_0 local_348;
  TVector2<double>_u_0 local_338;
  TVector2<double>_u_0 *local_328;
  FArrangement2d *local_320;
  code *local_318;
  undefined1 *local_310;
  code *local_308;
  TVector2<double>_u_0 **local_300;
  TVector2<double>_u_0 local_2f8;
  TVector2<double>_u_0 *local_2e8;
  FArrangement2d *local_2e0;
  BaseValueIterator local_2d8;
  TVector2<double>_u_0 local_2b0;
  double local_2a0;
  double local_298;
  double local_290;
  TVector2<double>_u_0 local_288;
  TVector2<double>_u_0 local_278;
  TVector2<double>_u_0 local_268;
  TVector2<double>_u_0 local_258;
  TVector2<double>_u_0 local_248;
  double local_238;
  double local_230;
  ulonglong local_218;
  ulonglong uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  ulonglong local_1e8;
  ulonglong uStack_1e0;
  ulonglong local_1d8;
  ulonglong uStack_1d0;
  ulonglong local_1c8;
  ulonglong uStack_1c0;
  ulonglong local_1b8;
  ulonglong uStack_1b0;
  ulonglong local_1a8;
  ulonglong uStack_1a0;
  ulonglong local_198;
  ulonglong uStack_190;
  ulonglong local_188;
  ulonglong uStack_180;
  double local_178;
  double dStack_170;
  TTuple<int,double> local_168;
  TTuple<int,double> local_158;
  TVector2<double> local_148;
  TVector2<double> local_138;
  TVector2<double> local_128;
  TTuple<int,double> local_118;
  TTuple<int,double> local_108;
  TVector2<double> local_f8;
  FSegmentPoint local_e8;
  FSegmentPoint local_d8;
  FSegmentPoint local_c8;
  FSegmentPoint local_b8;
  FSegmentPoint local_a8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_558;
  local_3d8._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_3d8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_408 = &local_3d8;
  local_3f0 = &local_4ed;
  local_3e0 = &local_408;
  local_488 = 0xffffffff;
  local_3f8 = Core::Private::Function::
              TFunctionRefCaller<UE::Geometry::<lambda_38_>,bool,int_const_&>::Call;
  local_3e8 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FArrangement2d::find_nearest_vertex'::__l2::<lambda_1>,double,int_const_&>
              ::Call;
  local_4d0 = param_3;
  local_4c8 = param_2;
  local_458 = param_1;
  local_400 = this;
  pTVar16 = TPointHashGrid2<int,double>::FindNearestInRadius
                      (&this->PointHash,&local_168,(TVector2<double> *)&local_3d8._s_0,
                       this->VertexSnapTol,(TFunctionRef<double___cdecl(int_const_&)> *)&local_3e8,
                       (TFunctionRef<bool___cdecl(int_const_&)> *)&local_3f8);
  local_398._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_398._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_4f8 = *(int *)pTVar16;
  if (*(int *)pTVar16 == (this->PointHash).InvalidValue) {
    local_4f8 = -1;
  }
  local_480 = 0xffffffff;
  local_3c8 = &local_398;
  local_3b0 = &local_4ec;
  local_410 = &local_3c8;
  local_3b8 = Core::Private::Function::
              TFunctionRefCaller<UE::Geometry::<lambda_38_>,bool,int_const_&>::Call;
  local_418 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FArrangement2d::find_nearest_vertex'::__l2::<lambda_1>,double,int_const_&>
              ::Call;
  local_3c0 = this;
  pTVar16 = TPointHashGrid2<int,double>::FindNearestInRadius
                      (&this->PointHash,&local_158,(TVector2<double> *)&local_398._s_0,
                       this->VertexSnapTol,(TFunctionRef<double___cdecl(int_const_&)> *)&local_418,
                       (TFunctionRef<bool___cdecl(int_const_&)> *)&local_3b8);
  local_4f4 = *(int *)pTVar16;
  if (*(int *)pTVar16 == (this->PointHash).InvalidValue) {
    local_4f4 = -1;
  }
  if (-1 < local_4f8) {
    if (local_4f8 == local_4f4) {
      return false;
    }
    pTVar17 = FDynamicGraph2<double>::GetVertex(&this->Graph,&local_148,local_4f8);
    dVar32 = (pTVar17->field0_0x0)._s_0.Y;
    (param_1->field0_0x0)._s_0.X = (pTVar17->field0_0x0)._s_0.X;
    (param_1->field0_0x0)._s_0.Y = dVar32;
  }
  if (-1 < local_4f4) {
    pTVar17 = FDynamicGraph2<double>::GetVertex(&this->Graph,&local_138,local_4f4);
    dVar32 = (pTVar17->field0_0x0)._s_0.Y;
    (param_2->field0_0x0)._s_0.X = (pTVar17->field0_0x0)._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar32;
  }
  dVar31 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar32 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar32 = dVar31 * dVar31 + dVar32 * dVar32;
  if (dVar32 <= this->VertexSnapTol * this->VertexSnapTol) {
    if ((local_4f8 < 0) && (local_4f4 < 0)) {
      iVar12 = insert_point(this,param_1,param_4);
      return iVar12 != -1;
    }
    return false;
  }
  local_288._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_288._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_278._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_278._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_4c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4c0.ArrayNum = 0;
  local_4c0.ArrayMax = 0;
  find_intersecting_edges
            (this,(TVector2<double> *)&local_278._s_0,(TVector2<double> *)&local_288._s_0,&local_4c0
             ,param_4);
  local_508.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_508.ArrayNum = 0;
  local_508.ArrayMax = 0;
  TSegment2<double>::TSegment2<double>((TSegment2<double> *)&local_4b0._s_0,param_1,param_2);
  find_intersecting_floating_vertices
            (this,(TSegment2<double> *)&local_4b0._s_0,local_4f8,local_4f4,&local_508,param_4);
  local_4e8 = (longlong)local_4c0.ArrayNum;
  uVar23 = 0;
  uVar35 = (uint)__xmm_80000000000000008000000000000000;
  uVar25 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (0 < local_4e8) {
    uVar34 = (undefined4)__real_7fefffffffffffff;
    uVar8 = (ulonglong)__real_7fefffffffffffff >> 0x20;
    local_4e0 = 0;
    do {
      lVar26 = local_4e0;
      uVar13 = 0;
      if ((int)uVar23 < local_4c0.ArrayNum) {
        uVar13 = ~uVar23 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      pFVar19 = local_4c0.AllocatorInstance.Data + lVar26;
      uVar13 = 0xffffffff;
      local_218 = *(ulonglong *)pFVar19;
      uStack_210 = *(ulonglong *)(pFVar19 + 8);
      local_208 = *(double *)(pFVar19 + 0x10);
      dStack_200 = *(double *)(pFVar19 + 0x18);
      local_1f8 = *(double *)(pFVar19 + 0x20);
      dStack_1f0 = *(double *)(pFVar19 + 0x28);
      local_1e8 = *(ulonglong *)(pFVar19 + 0x30);
      uStack_1e0 = *(ulonglong *)(pFVar19 + 0x38);
      local_1d8 = *(ulonglong *)(pFVar19 + 0x40);
      uStack_1d0 = *(ulonglong *)(pFVar19 + 0x48);
      local_1c8 = *(ulonglong *)(pFVar19 + 0x50);
      uStack_1c0 = *(ulonglong *)(pFVar19 + 0x58);
      local_1b8 = *(ulonglong *)(pFVar19 + 0x60);
      uStack_1b0 = *(ulonglong *)(pFVar19 + 0x68);
      local_1a8 = *(ulonglong *)(pFVar19 + 0x70);
      uStack_1a0 = *(ulonglong *)(pFVar19 + 0x78);
      local_198 = *(ulonglong *)(pFVar19 + 0x80);
      uStack_190 = *(ulonglong *)(pFVar19 + 0x88);
      local_188 = *(ulonglong *)(pFVar19 + 0x90);
      uStack_180 = *(ulonglong *)(pFVar19 + 0x98);
      local_178 = *(double *)(pFVar19 + 0xa0);
      dStack_170 = *(double *)(pFVar19 + 0xa8);
      iVar12 = (int)uStack_1a0;
      if ((int)uStack_1a0 - 1U < 2) {
        dVar32 = this->VertexSnapTol;
        uVar24 = (uint)local_218;
        if (((int)uVar24 < 0) ||
           ((int)(this->Graph)._padding_ * 0x200 + *(int *)((longlong)&(this->Graph)._padding_ + 4)
            <= (int)uVar24)) {
LAB_14cc8d013:
          uVar21 = 0xffffffffffffffff;
        }
        else {
          uVar21 = (ulonglong)(uVar24 & 0x1ff);
          uVar22 = (local_218 & 0xffffffff) >> 9;
          if (0xfffd < (ushort)(*(short *)(*(longlong *)((this->Graph)._padding_ + uVar22 * 8) +
                                          uVar21 * 2) - 1U)) goto LAB_14cc8d013;
          lVar5 = *(longlong *)((this->Graph)._padding_ + uVar22 * 8);
          uVar21 = CONCAT44(*(undefined4 *)(lVar5 + 4 + uVar21 * 0xc),
                            *(undefined4 *)(lVar5 + uVar21 * 0xc));
        }
        pTVar17 = FDynamicGraph2<double>::GetVertex(&this->Graph,&local_f8,(int)(uVar21 >> 0x20));
        pTVar18 = FDynamicGraph2<double>::GetVertex(&this->Graph,&local_128,(int)uVar21);
        TSegment2<double>::TSegment2<double>((TSegment2<double> *)&local_2b0._s_0,pTVar18,pTVar17);
        uVar13 = 0xffffffff;
        dVar32 = local_290 - dVar32;
        if ((double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) ^ uVar25,SUB84(dVar32,0) ^ uVar35) <=
            local_178) {
          if (local_178 <= dVar32) {
            dVar33 = local_2a0 * local_178 + local_2b0._s_0.X;
            dVar31 = local_298 * local_178 + local_2b0._s_0.Y;
            local_388._s_0.X = dVar33;
            local_388._s_0.Y = dVar31;
            local_368._s_0.X = dVar33;
            local_368._s_0.Y = dVar31;
            iVar14 = find_existing_vertex(this,(TVector2<double> *)&local_388._s_0);
            if (iVar14 == -1) {
              EVar15 = FDynamicGraph::SplitEdge((FDynamicGraph *)this,uVar24,&local_4d8);
            }
            else {
              EVar15 = FDynamicGraph::SplitEdgeWithExistingVertex
                                 ((FDynamicGraph *)this,uVar24,iVar14,&local_4d8);
            }
            if (EVar15 != Ok) {
              local_4ee = 0;
              `UE::Geometry::FArrangement2d::split_segment_at_t'::__l11::<lambda_1>::operator()
                        (&local_4ee);
            }
            uVar13 = local_4d8.ENewBN;
            uVar21 = (ulonglong)(uint)local_4d8.VNew;
            lVar26 = local_4e0;
            if (iVar14 == -1) {
              local_378._s_0.X = dVar33;
              local_378._s_0.Y = dVar31;
              FDynamicGraph2<double>::SetVertex
                        (&this->Graph,local_4d8.VNew,(TVector2<double> *)&local_378._s_0);
              TPointHashGrid2<int,double>::InsertPointUnsafe
                        (&this->PointHash,&local_4d8.VNew,(TVector2<double> *)&local_368._s_0);
              lVar26 = local_4e0;
            }
          }
          else {
            uVar21 = uVar21 >> 0x20;
          }
        }
        local_e8.VID = (int)uVar21;
        if (((local_e8.VID < 0) ||
            ((int)(this->Graph)._padding_ * 0x200 + *(int *)((longlong)&(this->Graph)._padding_ + 4)
             <= local_e8.VID)) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((this->Graph)._padding_ +
                                          ((uVar21 & 0xffffffff) >> 9) * 8) +
                                        (ulonglong)(local_e8.VID & 0x1ff) * 2) - 1U))) {
          uVar27 = 0;
          uVar29 = 0;
          uVar28 = uVar34;
          uVar30 = (int)uVar8;
        }
        else {
          pFVar19 = (this->Graph).vertices.Data.Blocks.AllocatorInstance.Data;
          uVar4 = *(undefined8 *)
                   (*(longlong *)(pFVar19 + (ulonglong)((local_e8.VID & 0x7fffffffU) >> 8) * 8) +
                   (ulonglong)(local_e8.VID * 2 + 1U & 0x1ff) * 8);
          uVar27 = (undefined4)uVar4;
          uVar29 = (undefined4)((ulonglong)uVar4 >> 0x20);
          uVar4 = *(undefined8 *)
                   (*(longlong *)(pFVar19 + (ulonglong)((local_e8.VID & 0x7fffffffU) >> 8) * 8) +
                   (ulonglong)(local_e8.VID * 2 & 0x1ff) * 8);
          uVar28 = (int)uVar4;
          uVar30 = (int)((ulonglong)uVar4 >> 0x20);
        }
        local_e8.T = ((double)CONCAT44(uVar29,uVar27) - local_4b0._s_0.Y) * local_498 +
                     ((double)CONCAT44(uVar30,uVar28) - local_4b0._s_0.X) * local_4a0;
        if (((local_508.AllocatorInstance.Data <= &local_e8) &&
            (&local_e8 <
             (FSegmentPoint *)
             (local_508.AllocatorInstance.Data + (longlong)local_508.ArrayMax * 0x10))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        if (local_508.ArrayNum == local_508.ArrayMax) {
          local_508.ArrayNum =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_508.AllocatorInstance,&local_508.ArrayMax);
        }
        *(double *)&local_508.AllocatorInstance.Data[(longlong)local_508.ArrayNum * 0x10].field_0x0
             = local_e8.T;
        *(ulonglong *)(local_508.AllocatorInstance.Data + (longlong)local_508.ArrayNum * 0x10 + 8) =
             CONCAT44(local_e8._12_4_,local_e8.VID);
        local_508.ArrayNum = local_508.ArrayNum + 1;
      }
      if (iVar12 == 2) {
        if (uVar13 == 0xffffffff) {
          split_segment_at_t(this,(int)local_468,dVar32,dStack_170);
          iVar12 = local_468._0_4_;
          FDynamicGraph2<double>::GetVertex(&this->Graph,(TVector2<double> *)&local_358._s_0,iVar12)
          ;
          local_d8.T = (local_358._s_0.Y - local_4b0._s_0.Y) * local_498 +
                       (local_358._s_0.X - local_4b0._s_0.X) * local_4a0;
          local_d8.VID = iVar12;
          if (((local_508.AllocatorInstance.Data <= &local_d8) &&
              (&local_d8 <
               (FSegmentPoint *)
               (local_508.AllocatorInstance.Data + (longlong)local_508.ArrayMax * 0x10))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
          if (local_508.ArrayNum == local_508.ArrayMax) {
            local_508.ArrayNum =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_508.AllocatorInstance,&local_508.ArrayMax);
          }
          uVar28 = local_d8.T._0_4_;
          uVar30 = local_d8.T._4_4_;
          iVar12 = local_d8.VID;
          uVar27 = local_d8._12_4_;
        }
        else {
          if ((((int)uVar13 < 0) ||
              ((int)(this->Graph)._padding_ * 0x200 +
               *(int *)((longlong)&(this->Graph)._padding_ + 4) <= (int)uVar13)) ||
             (uVar21 = (ulonglong)(uVar13 >> 9),
             0xfffd < (ushort)(*(short *)(*(longlong *)((this->Graph)._padding_ + uVar21 * 8) +
                                         (ulonglong)(uVar13 & 0x1ff) * 2) - 1U))) {
            uVar21 = (ulonglong)(uVar13 >> 9);
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("edges_refcount.IsValid(EID)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Curve\\DynamicGraph2.h"
                                ,0x44,L"FDynamicGraph2.GetEdgeSegment: invalid segment with id %d");
            if (bVar10) {
              pcVar6 = (code *)swi(3);
              uVar11 = (*pcVar6)();
              return (bool)uVar11;
            }
          }
          pFVar19 = (this->Graph).vertices.Data.Blocks.AllocatorInstance.Data;
          lVar5 = *(longlong *)((this->Graph)._padding_ + uVar21 * 8);
          uVar24 = *(uint *)(lVar5 + 4 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
          local_348._s_0.X =
               *(double *)
                (*(longlong *)(pFVar19 + (ulonglong)((uVar24 & 0x7fffffff) >> 8) * 8) +
                (ulonglong)(uVar24 * 2 & 0x1ff) * 8);
          local_348._s_0.Y =
               *(double *)
                (*(longlong *)(pFVar19 + (ulonglong)((uVar24 & 0x7fffffff) >> 8) * 8) +
                (ulonglong)(uVar24 * 2 + 1 & 0x1ff) * 8);
          uVar13 = *(uint *)(lVar5 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
          local_338._s_0.X =
               *(double *)
                (*(longlong *)(pFVar19 + (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) +
                (ulonglong)(uVar13 * 2 & 0x1ff) * 8);
          local_338._s_0.Y =
               *(double *)
                (*(longlong *)(pFVar19 + (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) +
                (ulonglong)(uVar13 * 2 + 1 & 0x1ff) * 8);
          TSegment2<double>::TSegment2<double>
                    ((TSegment2<double> *)&local_248._s_0,(TVector2<double> *)&local_338._s_0,
                     (TVector2<double> *)&local_348._s_0);
          split_segment_at_t(this,(int)local_460,dVar32,
                             ((dStack_1f0 * dStack_170 + dStack_200) - local_248._s_0.Y) * local_230
                             + ((local_1f8 * dStack_170 + local_208) - local_248._s_0.X) * local_238
                            );
          iVar12 = local_460._0_4_;
          FDynamicGraph2<double>::GetVertex(&this->Graph,(TVector2<double> *)&local_3a8._s_0,iVar12)
          ;
          local_c8.T = (local_3a8._s_0.Y - local_4b0._s_0.Y) * local_498 +
                       (local_3a8._s_0.X - local_4b0._s_0.X) * local_4a0;
          local_c8.VID = iVar12;
          if (((local_508.AllocatorInstance.Data <= &local_c8) &&
              (&local_c8 <
               (FSegmentPoint *)
               (local_508.AllocatorInstance.Data + (longlong)local_508.ArrayMax * 0x10))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
          if (local_508.ArrayNum == local_508.ArrayMax) {
            local_508.ArrayNum =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_508.AllocatorInstance,&local_508.ArrayMax);
          }
          uVar28 = local_c8.T._0_4_;
          uVar30 = local_c8.T._4_4_;
          iVar12 = local_c8.VID;
          uVar27 = local_c8._12_4_;
        }
        pFVar19 = local_508.AllocatorInstance.Data + (longlong)local_508.ArrayNum * 0x10;
        *(undefined4 *)&pFVar19->field_0x0 = uVar28;
        *(undefined4 *)(pFVar19 + 4) = uVar30;
        *(int *)(pFVar19 + 8) = iVar12;
        *(undefined4 *)(pFVar19 + 0xc) = uVar27;
        local_508.ArrayNum = local_508.ArrayNum + 1;
      }
      local_4e0 = lVar26 + 0xb0;
      uVar23 = uVar23 + 1;
      local_4e8 = local_4e8 + -1;
    } while (local_4e8 != 0);
    local_4e8 = 0;
    param_1 = local_458;
    param_2 = local_4c8;
  }
  this_00 = &this->PointHash;
  if (local_4f8 == -1) {
    local_2f8._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_2f8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_328 = &local_2f8;
    local_310 = &local_4eb;
    local_300 = &local_328;
    local_478 = 0xffffffff;
    local_318 = Core::Private::Function::
                TFunctionRefCaller<UE::Geometry::<lambda_38_>,bool,int_const_&>::Call;
    local_308 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FArrangement2d::find_nearest_vertex'::__l2::<lambda_1>,double,int_const_&>
                ::Call;
    local_320 = this;
    pTVar16 = TPointHashGrid2<int,double>::FindNearestInRadius
                        (this_00,&local_118,(TVector2<double> *)&local_2f8._s_0,this->VertexSnapTol,
                         (TFunctionRef<double___cdecl(int_const_&)> *)&local_308,
                         (TFunctionRef<bool___cdecl(int_const_&)> *)&local_318);
    iVar12 = *(int *)pTVar16;
    if ((iVar12 == (this->PointHash).InvalidValue) || (local_4f8 = iVar12, iVar12 == -1)) {
      local_268._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_268._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      local_4f8 = FDynamicGraph2<double>::AppendVertex
                            (&this->Graph,(TVector2<double> *)&local_268._s_0);
      TPointHashGrid2<int,double>::InsertPointUnsafe(this_00,&local_4f8,param_1);
    }
  }
  if (local_4f4 == -1) {
    local_428._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_428._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_2e8 = &local_428;
    local_448 = local_4ea;
    local_438 = &local_2e8;
    local_470 = 0xffffffff;
    local_450 = Core::Private::Function::
                TFunctionRefCaller<UE::Geometry::<lambda_38_>,bool,int_const_&>::Call;
    local_440 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FArrangement2d::find_nearest_vertex'::__l2::<lambda_1>,double,int_const_&>
                ::Call;
    local_2e0 = this;
    pTVar16 = TPointHashGrid2<int,double>::FindNearestInRadius
                        (this_00,&local_108,(TVector2<double> *)&local_428._s_0,this->VertexSnapTol,
                         (TFunctionRef<double___cdecl(int_const_&)> *)&local_440,
                         (TFunctionRef<bool___cdecl(int_const_&)> *)&local_450);
    iVar12 = *(int *)pTVar16;
    if ((iVar12 == (this->PointHash).InvalidValue) || (local_4f4 = iVar12, iVar12 == -1)) {
      local_258._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_258._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_4f4 = FDynamicGraph2<double>::AppendVertex
                            (&this->Graph,(TVector2<double> *)&local_258._s_0);
      TPointHashGrid2<int,double>::InsertPointUnsafe(this_00,&local_4f4,param_2);
    }
  }
  local_b8.VID = local_4f8;
  local_b8.T = (double)CONCAT44((uint)((ulonglong)local_490 >> 0x20) ^ uVar25,
                                SUB84(local_490,0) ^ uVar35);
  if (((local_508.AllocatorInstance.Data <= &local_b8) &&
      (&local_b8 <
       (FSegmentPoint *)(local_508.AllocatorInstance.Data + (longlong)local_508.ArrayMax * 0x10)))
     && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  if (local_508.ArrayNum == local_508.ArrayMax) {
    local_508.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_508.AllocatorInstance,&local_508.ArrayMax);
  }
  iVar12 = local_508.ArrayNum + 1;
  local_a8.T = local_490;
  *(double *)&local_508.AllocatorInstance.Data[(longlong)local_508.ArrayNum * 0x10].field_0x0 =
       local_b8.T;
  *(ulonglong *)(local_508.AllocatorInstance.Data + (longlong)local_508.ArrayNum * 0x10 + 8) =
       CONCAT44(local_b8._12_4_,local_b8.VID);
  local_a8.VID = local_4f4;
  local_508.ArrayNum = iVar12;
  if (((local_508.AllocatorInstance.Data <= &local_a8) &&
      (&local_a8 <
       (FSegmentPoint *)(local_508.AllocatorInstance.Data + (longlong)local_508.ArrayMax * 0x10)))
     && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  iVar12 = local_508.ArrayNum;
  if (local_508.ArrayNum == local_508.ArrayMax) {
    iVar12 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_508.AllocatorInstance,&local_508.ArrayMax);
  }
  local_508.ArrayNum = iVar12 + 1;
  *(double *)&local_508.AllocatorInstance.Data[(longlong)iVar12 * 0x10].field_0x0 = local_a8.T;
  *(ulonglong *)(local_508.AllocatorInstance.Data + (longlong)iVar12 * 0x10 + 8) =
       CONCAT44(local_a8._12_4_,local_a8.VID);
  AlgoImpl::
  IntroSortInternal<UE::Geometry::FArrangement2d::FSegmentPoint,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FArrangement2d::FSegmentPoint,_UE::Geometry::FArrangement2d::insert_segment_::__l2::<lambda_1>_>_>
            ((FSegmentPoint *)local_508.AllocatorInstance.Data,iVar12 + 1,local_4ef,
             (<lambda_1> *)&local_4ef);
  dVar32 = __real_3e80000000000000;
  uVar35 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar23 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar25 = 0;
  if (0 < local_508.ArrayNum + -1) {
    local_4e8 = 0;
    do {
      lVar26 = local_4e8;
      uVar13 = 0;
      if ((int)uVar25 < local_508.ArrayNum) {
        uVar13 = ~uVar25 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      uVar20 = ~(uVar25 + 1) >> 0x1f;
      uVar13 = *(uint *)(local_508.AllocatorInstance.Data + lVar26 + 8);
      local_4e0 = CONCAT44(local_4e0._4_4_,uVar20);
      uVar24 = 0;
      if ((int)(uVar25 + 1) < local_508.ArrayNum) {
        uVar24 = uVar20;
      }
      if ((uVar24 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      uVar24 = *(uint *)(local_508.AllocatorInstance.Data + lVar26 + 0x18);
      if (uVar13 != uVar24) {
        uVar20 = uVar24;
        if ((int)uVar13 < (int)uVar24) {
          uVar20 = uVar13;
        }
        uVar7 = uVar24;
        if ((int)uVar24 < (int)uVar13) {
          uVar7 = uVar13;
        }
        FSmallListSet::BaseValueIterator::BaseValueIterator
                  (&local_2d8,(FSmallListSet *)&(this->Graph)._padding_,uVar20,false);
        while( true ) {
          if ((((local_2d8.ListSet == (FSmallListSet *)&(this->Graph)._padding_) &&
               (local_2d8.ListIndex == uVar20)) && (local_2d8.iCur == -1)) &&
             (local_2d8.cur_ptr == -1)) goto LAB_14cc8dbdc;
          if (*(uint *)(*(longlong *)
                         ((this->Graph)._padding_ + ((local_2d8._32_8_ & 0xffffffff) >> 9) * 8) + 4
                       + (ulonglong)(local_2d8.cur_value & 0x1ff) * 0xc) == uVar7) break;
          FSmallListSet::BaseValueIterator::GotoNext(&local_2d8);
        }
        if (local_2d8.cur_value == 0xffffffff) {
LAB_14cc8dbdc:
          uVar20 = 0;
          if ((int)uVar25 < local_508.ArrayNum) {
            uVar20 = ~uVar25 >> 0x1f;
          }
          if (uVar20 == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar6 = (code *)swi(3);
              uVar11 = (*pcVar6)();
              return (bool)uVar11;
            }
          }
          FVar9.Data = local_508.AllocatorInstance.Data;
          iVar12 = 0;
          if ((int)(uVar25 + 1) < local_508.ArrayNum) {
            iVar12 = (int)local_4e0;
          }
          if ((iVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
          if ((double)CONCAT44((uint)((ulonglong)
                                      (*(double *)(FVar9.Data + local_4e8) -
                                      *(double *)
                                       (local_508.AllocatorInstance.Data + local_4e8 + 0x10)) >>
                                     0x20) & uVar35,
                               SUB84(*(double *)(FVar9.Data + local_4e8) -
                                     *(double *)
                                      (local_508.AllocatorInstance.Data + local_4e8 + 0x10),0) &
                               uVar23) < dVar32) {
            local_4f0 = 0;
            `UE::Geometry::FArrangement2d::insert_segment'::__l50::<lambda_2>::operator()
                      (&local_4f0);
          }
          if ((-1 < (int)uVar13) &&
             (iVar12 = *(int *)((longlong)&(this->Graph)._padding_ + 4) +
                       (int)(this->Graph)._padding_ * 0x200, (int)uVar13 < iVar12)) {
            lVar26 = (this->Graph)._padding_;
            local_4c8 = (TVector2<double> *)(ulonglong)(uVar13 >> 9);
            if (((ushort)(*(short *)(*(longlong *)(lVar26 + (longlong)local_4c8 * 8) +
                                    (ulonglong)(uVar13 & 0x1ff) * 2) - 1U) < 0xfffe) &&
               ((-1 < (int)uVar24 && ((int)uVar24 < iVar12)))) {
              if ((ushort)(*(short *)(*(longlong *)(lVar26 + (ulonglong)(uVar24 >> 9) * 8) +
                                     (ulonglong)(uVar24 & 0x1ff) * 2) - 1U) < 0xfffe) {
                iVar12 = FDynamicGraph::FindEdge((FDynamicGraph *)this,uVar13,uVar24);
                if (iVar12 == -1) {
                  psVar3 = (short *)(*(longlong *)
                                      ((this->Graph)._padding_ + (longlong)local_4c8 * 8) +
                                    (ulonglong)(uVar13 & 0x1ff) * 2);
                  *psVar3 = *psVar3 + 1;
                  psVar3 = (short *)(*(longlong *)
                                      ((this->Graph)._padding_ + (ulonglong)(uVar24 >> 9) * 8) +
                                    (ulonglong)(uVar24 & 0x1ff) * 2);
                  *psVar3 = *psVar3 + 1;
                  iVar12 = (int)(this->Graph)._padding_;
                  iVar14 = local_4d0 + 1;
                  if (local_4d0 + 1 < iVar12) {
                    iVar14 = iVar12;
                  }
                  *(int *)&(this->Graph)._padding_ = iVar14;
                  FDynamicGraph::add_edge((FDynamicGraph *)this,uVar13,uVar24,local_4d0);
                  plVar1 = &(this->Graph)._padding_;
                  *(int *)plVar1 = (int)*plVar1 + 1;
                  piVar2 = (int *)((longlong)&(this->Graph)._padding_ + 4);
                  *piVar2 = *piVar2 + 1;
                }
                goto LAB_14cc8ddb2;
              }
            }
          }
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Curve\\DynamicGraph.h"
                              ,0xe2,L"");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
        }
      }
LAB_14cc8ddb2:
      uVar25 = uVar25 + 1;
      local_4e8 = local_4e8 + 0x10;
    } while ((int)uVar25 < local_508.ArrayNum + -1);
  }
  if ((FSegmentPoint *)local_508.AllocatorInstance.Data != (FSegmentPoint *)0x0) {
    FMemory::Free(local_508.AllocatorInstance.Data);
  }
  if (local_4c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c0.AllocatorInstance.Data);
  }
  return true;
}

// split_segment_at_t @ 14cc8df10

FIndex2i __thiscall
UE::Geometry::FArrangement2d::split_segment_at_t
          (FArrangement2d *this,int param_1,double param_2,double param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  EMeshResult EVar5;
  TVector2<double> *pTVar6;
  TVector2<double> *pTVar7;
  undefined4 in_register_00000014;
  FIndex2i_u_0 FVar8;
  ulonglong uVar9;
  uint in_R8D;
  int iVar10;
  undefined1 local_res18 [8];
  uint in_stack_00000028;
  int in_stack_0000002c;
  TVector2<double>_u_0 local_98;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78;
  double local_68;
  double local_60;
  double local_58;
  
  FVar8._s_0.B = in_register_00000014;
  FVar8._s_0.A = param_1;
  if ((-1 < (int)in_R8D) &&
     ((int)in_R8D <
      (int)(this->Graph)._padding_ * 0x200 + *(int *)((longlong)&(this->Graph)._padding_ + 4))) {
    uVar9 = (ulonglong)(in_R8D & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)((this->Graph)._padding_ + (ulonglong)(in_R8D >> 9) * 8) +
                           uVar9 * 2) - 1U) < 0xfffe) {
      lVar1 = *(longlong *)((this->Graph)._padding_ + (ulonglong)(in_R8D >> 9) * 8);
      uVar9 = CONCAT44(*(undefined4 *)(lVar1 + 4 + uVar9 * 0xc),*(undefined4 *)(lVar1 + uVar9 * 0xc)
                      );
      goto LAB_14cc8dfab;
    }
  }
  uVar9 = 0xffffffffffffffff;
LAB_14cc8dfab:
  pTVar6 = FDynamicGraph2<double>::GetVertex
                     (&this->Graph,(TVector2<double> *)&local_88._s_0,(int)(uVar9 >> 0x20));
  pTVar7 = FDynamicGraph2<double>::GetVertex
                     (&this->Graph,(TVector2<double> *)&local_98._s_0,(int)uVar9);
  TSegment2<double>::TSegment2<double>((TSegment2<double> *)&local_78._s_0,pTVar7,pTVar6);
  local_58 = local_58 - (double)CONCAT44(in_stack_0000002c,in_stack_00000028);
  iVar10 = -1;
  if ((double)CONCAT44((uint)((ulonglong)local_58 >> 0x20) ^
                       __xmm_80000000000000008000000000000000._4_4_,
                       SUB84(local_58,0) ^ (uint)__xmm_80000000000000008000000000000000) <= param_3)
  {
    if (param_3 <= local_58) {
      dVar3 = local_60 * param_3 + local_78._s_0.Y;
      dVar2 = local_68 * param_3 + local_78._s_0.X;
      local_98._s_0.X = dVar2;
      local_98._s_0.Y = dVar3;
      local_88._s_0.X = dVar2;
      local_88._s_0.Y = dVar3;
      iVar4 = find_existing_vertex(this,(TVector2<double> *)&local_98._s_0);
      if (iVar4 == -1) {
        EVar5 = FDynamicGraph::SplitEdge
                          ((FDynamicGraph *)this,in_R8D,(FEdgeSplitInfo *)&stack0x00000028);
      }
      else {
        EVar5 = FDynamicGraph::SplitEdgeWithExistingVertex
                          ((FDynamicGraph *)this,in_R8D,iVar4,(FEdgeSplitInfo *)&stack0x00000028);
      }
      if (EVar5 != Ok) {
        `UE::Geometry::FArrangement2d::split_segment_at_t'::__l11::<lambda_1>::operator()
                  (local_res18);
      }
      uVar9 = (ulonglong)in_stack_00000028;
      iVar10 = in_stack_0000002c;
      if (iVar4 == -1) {
        local_98._s_0.X = dVar2;
        local_98._s_0.Y = dVar3;
        FDynamicGraph2<double>::SetVertex
                  (&this->Graph,in_stack_00000028,(TVector2<double> *)&local_98._s_0);
        TPointHashGrid2<int,double>::InsertPointUnsafe
                  (&this->PointHash,(int *)&stack0x00000028,(TVector2<double> *)&local_88._s_0);
      }
    }
    else {
      uVar9 = uVar9 >> 0x20;
    }
  }
  *(int *)FVar8 = (int)uVar9;
  *(int *)((longlong)FVar8 + 4) = iVar10;
  return (FIndex2i)FVar8;
}

// operator() @ 150577110

bool __thiscall
`UE::Geometry::FArrangement2d::insert_point'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2212733207772659985>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2212733207772659985>,
                       &`public:___cdecl_`protected:_int___cdecl_UE::Geometry::FArrangement2d::insert_point(UE::Math::TVector2<double>_const&___ptr64,double)___ptr64'::`16'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150577190

bool __thiscall
`UE::Geometry::FArrangement2d::split_segment_at_t'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2212733207772660165>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2212733207772660165>,
                       &`public:___cdecl_`protected:_struct_UE::Geometry::FIndex2i___cdecl_UE::Geometry::FArrangement2d::split_segment_at_t(int,double,double)___ptr64'::`11'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150577210

bool __thiscall
`UE::Geometry::FArrangement2d::insert_segment'::__l50::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2212733207772660123>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2212733207772660123>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::Geometry::FArrangement2d::insert_segment(UE::Math::TVector2<double>,UE::Math::TVector2<double>,int,double)___ptr64'::`50'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

