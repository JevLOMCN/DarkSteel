// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FSquare2DGridHelper @ 148a7f410

FSquare2DGridHelper * __thiscall
FSquare2DGridHelper::FSquare2DGridHelper
          (FSquare2DGridHelper *this,TBox<double> *param_1,TVector<double> *param_2,long64 param_3)

{
  FSquare2DGridHelper(this,param_1,param_2,param_3,true);
  return this;
}

// FSquare2DGridHelper @ 148a7f440

FSquare2DGridHelper * __thiscall
FSquare2DGridHelper::FSquare2DGridHelper
          (FSquare2DGridHelper *this,TBox<double> *param_1,TVector<double> *param_2,long64 param_3,
          bool param_4)

{
  TArray<FSquare2DGridHelper::FGridLevel,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  bool bVar12;
  int iVar13;
  FSquare2DGridHelper *pFVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  long64 lVar18;
  int iVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  uint uVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar26;
  undefined1 auVar27 [16];
  uint uVar28;
  uint uVar29;
  TIntVector2<__int64>_u_0 local_68 [3];
  
  dVar22 = (param_1->Min).field0_0x0._s_0.Y;
  iVar19 = 0;
  pTVar1 = &this->Levels;
  piVar2 = &(this->Levels).ArrayMax;
  uVar17 = 1;
  (this->WorldBounds).Min.field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  (this->WorldBounds).Min.field0_0x0._s_0.Y = dVar22;
  dVar22 = (param_1->Max).field0_0x0._s_0.X;
  (this->WorldBounds).Min.field0_0x0._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
  (this->WorldBounds).Max.field0_0x0._s_0.X = dVar22;
  dVar22 = (param_1->Max).field0_0x0._s_0.Z;
  (this->WorldBounds).Max.field0_0x0._s_0.Y = (param_1->Max).field0_0x0._s_0.Y;
  (this->WorldBounds).Max.field0_0x0._s_0.Z = dVar22;
  uVar5 = param_1->Pad[0];
  uVar6 = param_1->Pad[1];
  uVar7 = param_1->Pad[2];
  uVar8 = param_1->Pad[3];
  uVar9 = param_1->Pad[4];
  uVar10 = param_1->Pad[5];
  uVar11 = param_1->Pad[6];
  (this->WorldBounds).IsValid = param_1->IsValid;
  (this->WorldBounds).Pad[0] = uVar5;
  (this->WorldBounds).Pad[1] = uVar6;
  (this->WorldBounds).Pad[2] = uVar7;
  (this->WorldBounds).Pad[3] = uVar8;
  (this->WorldBounds).Pad[4] = uVar9;
  (this->WorldBounds).Pad[5] = uVar10;
  (this->WorldBounds).Pad[6] = uVar11;
  dVar22 = (param_2->field0_0x0)._s_0.Y;
  (this->Origin).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = dVar22;
  (this->Origin).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  this->CellSize = param_3;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Levels).ArrayNum = 0;
  *piVar2 = 0;
  uVar20 = 1;
  if ((this->WorldBounds).IsValid != '\0') {
    dVar22 = (this->WorldBounds).Max.field0_0x0._s_0.Y - (this->Origin).field0_0x0._s_0.Y;
    dVar21 = (this->WorldBounds).Max.field0_0x0._s_0.X - (this->Origin).field0_0x0._s_0.X;
    dVar26 = (this->WorldBounds).Min.field0_0x0._s_0.Y - (this->Origin).field0_0x0._s_0.Y;
    uVar28 = SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar29 = (uint)((ulonglong)dVar22 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar20 = SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar25 = (uint)((ulonglong)dVar21 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((double)CONCAT44(uVar29,uVar28) <= (double)CONCAT44(uVar25,uVar20)) {
      uVar28 = uVar20;
      uVar29 = uVar25;
    }
    dVar21 = (this->WorldBounds).Min.field0_0x0._s_0.X - (this->Origin).field0_0x0._s_0.X;
    dVar22 = (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar21 = (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (dVar22 <= dVar21) {
      dVar22 = dVar21;
    }
    if ((double)CONCAT44(uVar29,uVar28) <= dVar22) {
      uVar28 = SUB84(dVar22,0);
      uVar29 = (uint)((ulonglong)dVar22 >> 0x20);
    }
    uVar20 = 1;
    if (0.0 <= (double)CONCAT44(uVar29,uVar28) && (double)CONCAT44(uVar29,uVar28) != 0.0) {
      auVar23._0_8_ = (double)this->CellSize;
      auVar23._8_8_ = 0;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = (double)CONCAT44(uVar29,uVar28) / auVar23._0_8_;
      auVar24 = roundpd(auVar23,auVar24,2);
      uVar15 = (ulonglong)(auVar24._0_8_ + auVar24._0_8_);
      if ((uVar15 & uVar15 - 1) != 0) {
        dVar22 = log((double)(longlong)uVar15);
        auVar27._8_8_ = 0;
        auVar27._0_8_ = dVar22 * __real_3ff71547652b82fe;
        auVar24 = roundpd(auVar27,auVar27,2);
        dVar22 = pow(__real_4000000000000000,auVar24._0_8_);
        uVar15 = (ulonglong)dVar22;
      }
      if (1 < (longlong)uVar15) {
        uVar17 = uVar15;
      }
      lVar16 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar13 = 0;
      if (uVar17 != 0) {
        iVar13 = (int)lVar16;
      }
      uVar20 = iVar13 + 1;
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("GridSize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\RuntimeSpatialHash\\RuntimeSpatialHashGridHelper.cpp"
                              ,0x45,L""), bVar12)) {
        pcVar4 = (code *)swi(3);
        pFVar14 = (FSquare2DGridHelper *)(*pcVar4)();
        return pFVar14;
      }
      if (((uVar17 & uVar17 - 1) != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("FMath::IsPowerOfTwo(GridSize)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\RuntimeSpatialHash\\RuntimeSpatialHashGridHelper.cpp"
                              ,0x46,L""), bVar12)) {
        pcVar4 = (code *)swi(3);
        pFVar14 = (FSquare2DGridHelper *)(*pcVar4)();
        return pFVar14;
      }
      if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
      }
    }
  }
  if (*piVar2 < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,uVar20,&pTVar1->AllocatorInstance,(this->Levels).ArrayNum,piVar2);
  }
  lVar18 = this->CellSize;
  if (0 < (int)uVar20) {
    do {
      uVar15 = uVar17;
      if ((!param_4) && (iVar19 != uVar20 - 1)) {
        uVar15 = uVar17 + 1;
      }
      dVar22 = (param_2->field0_0x0)._s_0.X;
      dVar21 = (param_2->field0_0x0)._s_0.Y;
      iVar13 = (this->Levels).ArrayNum;
      if (iVar13 == *piVar2) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x888,&pTVar1->AllocatorInstance,piVar2);
      }
      uVar17 = (longlong)uVar17 >> 1;
      (this->Levels).ArrayNum = iVar13 + 1;
      lVar16 = (longlong)iVar13 * 0x88;
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      *(double *)(pFVar3 + lVar16) = dVar22;
      *(double *)(pFVar3 + lVar16 + 8) = dVar21;
      *(long64 *)(pFVar3 + lVar16 + 0x10) = lVar18;
      lVar18 = lVar18 * 2;
      *(int *)(pFVar3 + lVar16 + 0x20) = iVar19;
      iVar19 = iVar19 + 1;
      *(ulonglong *)(pFVar3 + lVar16 + 0x18) = uVar15;
      *(undefined8 *)(pFVar3 + lVar16 + 0x28) = 0;
      *(undefined8 *)(pFVar3 + lVar16 + 0x30) = 0;
      *(undefined8 *)(pFVar3 + lVar16 + 0x38) = 0;
      *(undefined8 *)(pFVar3 + lVar16 + 0x40) = 0;
      *(undefined8 *)(pFVar3 + lVar16 + 0x58) = 0;
      *(undefined4 *)(pFVar3 + lVar16 + 0x60) = 0;
      *(undefined4 *)(pFVar3 + lVar16 + 100) = 0x80;
      *(undefined4 *)(pFVar3 + lVar16 + 0x68) = 0xffffffff;
      *(undefined4 *)(pFVar3 + lVar16 + 0x6c) = 0;
      *(undefined8 *)(pFVar3 + lVar16 + 0x78) = 0;
      *(undefined4 *)(pFVar3 + lVar16 + 0x80) = 0;
    } while (iVar19 < (int)uVar20);
  }
  iVar19 = (this->Levels).ArrayNum;
  uVar28 = iVar19 - 1;
  uVar20 = 0;
  if ((int)uVar28 < iVar19) {
    uVar20 = ~uVar28 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar4 = (code *)swi(3);
    pFVar14 = (FSquare2DGridHelper *)(*pcVar4)();
    return pFVar14;
  }
  local_68[0]._s_0.X = 0;
  local_68[0]._s_0.Y = 0;
  FGridLevel::GetCell((FGridLevel *)
                      ((pTVar1->AllocatorInstance).Data +
                      (longlong)((this->Levels).ArrayNum + -1) * 0x88),
                      (TIntVector2<__int64> *)&local_68[0]._s_0);
  return this;
}

// ForEachCells @ 148a90320

void __thiscall
FSquare2DGridHelper::ForEachCells
          (FSquare2DGridHelper *this,
          TFunctionRef<void___cdecl(FSquare2DGridHelper::FGridLevel::FGridCell_const_&)> *param_1)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  
  uVar8 = 0;
  if (0 < (this->Levels).ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->Levels).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Levels).AllocatorInstance.Data;
      iVar2 = *(int *)(pFVar3 + lVar9 + 0x30);
      lVar7 = *(longlong *)(pFVar3 + lVar9 + 0x28);
      lVar1 = lVar7 + (longlong)iVar2 * 0x18;
      while( true ) {
        if (*(int *)(pFVar3 + lVar9 + 0x30) != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FSquare2DGridHelper::FGridLevel::FGridCell_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (lVar7 == lVar1) break;
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar7);
        lVar7 = lVar7 + 0x18;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x88;
    } while ((int)uVar8 < (this->Levels).ArrayNum);
  }
  return;
}

// ForEachIntersectingCells @ 148a90a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FSquare2DGridHelper::ForEachIntersectingCells
          (FSquare2DGridHelper *this,TBox<double> *param_1,
          TFunctionRef<void___cdecl(UE::Math::TIntVector3<__int64>_const_&)> *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  FSquare2DGridHelper *pFVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  FGrid2D *this_00;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  undefined1 local_148 [4];
  int local_144;
  uint local_140;
  TBox<double> *local_138;
  TFunctionRef<void___cdecl(UE::Math::TIntVector3<__int64>_const_&)> *local_130;
  longlong local_128;
  TIntVector2<__int64>_u_0 local_120;
  TIntVector2<__int64>_u_0 local_110;
  longlong local_100;
  longlong local_f8;
  FSquare2DGridHelper *local_f0;
  TIntVector2<__int64>_u_0 local_e8;
  TVector2<double>_u_0 local_d8;
  TVector2<double>_u_0 local_c8;
  undefined1 local_b8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  uint local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  uVar15 = (ulonglong)param_3;
  iVar6 = 0;
  local_144 = 0;
  if (param_3 < (this->Levels).ArrayNum) {
    lVar11 = uVar15 * 0x88;
    local_140 = param_3;
    local_138 = param_1;
    local_130 = param_2;
    local_f0 = this;
    do {
      pFVar3 = local_f0;
      iVar6 = (local_f0->Levels).ArrayNum;
      uVar14 = (uint)uVar15;
      uVar5 = 0;
      if ((int)uVar14 < iVar6) {
        uVar5 = ~uVar14 >> 0x1f;
      }
      local_128 = lVar11;
      if (uVar5 == 0) {
        local_158 = (longlong)(int)uVar14;
        local_150 = (longlong)iVar6;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          iVar6 = (*pcVar1)();
          return iVar6;
        }
      }
      local_98 = (param_1->Min).field0_0x0._s_0.X;
      dStack_90 = (param_1->Min).field0_0x0._s_0.Y;
      local_58 = *(undefined8 *)param_2;
      local_88 = (param_1->Min).field0_0x0._s_0.Z;
      dStack_80 = (param_1->Max).field0_0x0._s_0.X;
      this_00 = (FGrid2D *)((pFVar3->Levels).AllocatorInstance.Data + lVar11);
      local_78 = (param_1->Max).field0_0x0._s_0.Y;
      dStack_70 = (param_1->Max).field0_0x0._s_0.Z;
      iVar10 = 0;
      local_68._0_1_ = param_1->IsValid;
      local_68._1_1_ = param_1->Pad[0];
      local_68._2_1_ = param_1->Pad[1];
      local_68._3_1_ = param_1->Pad[2];
      local_68._4_1_ = param_1->Pad[3];
      local_68._5_1_ = param_1->Pad[4];
      local_68._6_1_ = param_1->Pad[5];
      local_68._7_1_ = param_1->Pad[6];
      local_50 = *(undefined8 *)&param_2->field_0x8;
      local_d8._s_0.X = (param_1->Min).field0_0x0._s_0.X;
      local_d8._s_0.Y = (param_1->Min).field0_0x0._s_0.Y;
      local_c8._s_0.X = (param_1->Max).field0_0x0._s_0.X;
      local_c8._s_0.Y = (param_1->Max).field0_0x0._s_0.Y;
      local_b8 = 1;
      local_60 = uVar14;
      FGrid2D::GetCellCoords
                (this_00,(TVector2<double> *)&local_d8._s_0,(TIntVector2<__int64> *)&local_120._s_0)
      ;
      uVar2 = local_120._s_0.Y;
      uVar8 = local_120._s_0.X;
      iVar6 = iVar10;
      if ((((local_120._s_0.X < this_00->GridSize) &&
           (param_1 = local_138, local_120._s_0.Y < this_00->GridSize)) &&
          (FGrid2D::GetCellCoords
                     (this_00,(TVector2<double> *)&local_c8._s_0,
                      (TIntVector2<__int64> *)&local_110._s_0), param_1 = local_138, iVar6 = 0,
          -1 < local_110._s_0.X)) && (-1 < local_110._s_0.Y)) {
        uVar9 = this_00->GridSize + -1;
        uVar7 = uVar9;
        if ((longlong)uVar8 < (longlong)uVar9) {
          uVar7 = uVar8;
        }
        lVar11 = 0;
        if (0 < (longlong)uVar7) {
          lVar11 = uVar7;
        }
        uVar8 = uVar9;
        if ((longlong)uVar2 < (longlong)uVar9) {
          uVar8 = uVar2;
        }
        lVar12 = 0;
        if (0 < (longlong)uVar8) {
          lVar12 = uVar8;
        }
        uVar8 = uVar9;
        if (local_110._s_0.X < (longlong)uVar9) {
          uVar8 = local_110._s_0.X;
        }
        lVar17 = 0;
        if (0 < (longlong)uVar8) {
          lVar17 = uVar8;
        }
        if (local_110._s_0.Y < (longlong)uVar9) {
          uVar9 = local_110._s_0.Y;
        }
        lVar16 = 0;
        if (0 < (longlong)uVar9) {
          lVar16 = uVar9;
        }
        param_2 = local_130;
        iVar6 = iVar10;
        local_120._s_0.X = lVar11;
        local_120._s_0.Y = lVar12;
        local_110._s_0.X = lVar17;
        local_110._s_0.Y = lVar16;
        local_100 = lVar16;
        local_f8 = lVar11;
        if (lVar12 <= lVar16) {
          do {
            lVar13 = lVar11;
            if (lVar11 <= lVar17) {
              do {
                local_e8._s_0.X = lVar11;
                local_e8._s_0.Y = lVar12;
                if (((-1 < lVar11) && (lVar16 = this_00->GridSize, lVar11 < lVar16)) &&
                   ((-1 < lVar12 && (lVar12 < lVar16)))) {
                  if (lVar16 * lVar12 + lVar11 < 0) {
                    local_148[0] = 0;
                    bVar4 = `FSquare2DGridHelper::FGrid2D::IsValidCoords'::__l6::<lambda_1>::
                            operator()(local_148);
                    if (!bVar4) goto LAB_148a90c49;
                  }
                  UE::Core::Private::Function::
                  TFunctionRefCaller<`FSquare2DGridHelper::ForEachIntersectingCells'::__l4::<lambda_1>,void,UE::Math::TIntVector2<__int64>_const_&>
                  ::Call(&local_98,(TIntVector2<__int64> *)&local_e8._s_0);
                  iVar6 = iVar6 + 1;
                }
LAB_148a90c49:
                lVar11 = lVar11 + 1;
                lVar13 = local_f8;
                lVar16 = local_100;
              } while (lVar11 <= lVar17);
            }
            lVar12 = lVar12 + 1;
            param_1 = local_138;
            lVar11 = lVar13;
            param_2 = local_130;
            uVar14 = local_140;
          } while (lVar12 <= lVar16);
        }
      }
      local_140 = uVar14 + 1;
      uVar15 = (ulonglong)local_140;
      iVar6 = local_144 + iVar6;
      lVar11 = local_128 + 0x88;
      local_144 = iVar6;
    } while ((int)local_140 < (local_f0->Levels).ArrayNum);
  }
  return iVar6;
}

// ForEachIntersectingCells @ 148a90cf0

int __thiscall
FSquare2DGridHelper::ForEachIntersectingCells
          (FSquare2DGridHelper *this,TSphere<double> *param_1,
          TFunctionRef<void___cdecl(UE::Math::TIntVector3<__int64>_const_&)> *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int local_res20 [2];
  double local_f8;
  double local_f0;
  code *local_e8;
  undefined8 *local_e0;
  code *local_d8;
  FGrid2D **local_d0;
  FGrid2D *local_c8;
  double local_c0;
  double *local_b8;
  code **local_b0;
  int *local_a8;
  TVector<double>_u_0 local_a0;
  double local_88;
  double local_80;
  double local_78;
  undefined1 local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  uint local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  iVar4 = 0;
  if (param_3 < (this->Levels).ArrayNum) {
    do {
      uVar3 = 0;
      if (param_3 < (this->Levels).ArrayNum) {
        uVar3 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      local_c0 = param_1->W;
      local_f8 = (param_1->Center).field0_0x0._s_0.X;
      local_f0 = (param_1->Center).field0_0x0._s_0.Y;
      local_68 = (param_1->Center).field0_0x0._s_0.X;
      dStack_60 = (param_1->Center).field0_0x0._s_0.Y;
      local_58 = (param_1->Center).field0_0x0._s_0.Z;
      dStack_50 = param_1->W;
      local_78 = (param_1->Center).field0_0x0._s_0.Z;
      local_a0._s_0.X = local_f8 - local_c0;
      local_40 = *(undefined8 *)param_2;
      local_c8 = (FGrid2D *)((this->Levels).AllocatorInstance.Data + (longlong)param_3 * 0x88);
      local_38 = *(undefined8 *)&param_2->field_0x8;
      local_e0 = &local_68;
      local_b8 = &local_f8;
      local_b0 = &local_e8;
      local_a0._s_0.Z = local_78 - local_c0;
      local_e8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FSquare2DGridHelper::ForEachIntersectingCells'::__l4::<lambda_1>,void,UE::Math::TIntVector2<__int64>_const_&>
                 ::Call;
      local_a0._s_0.Y = local_f0 - local_c0;
      local_res20[0] = 0;
      local_78 = local_78 + local_c0;
      local_70 = 1;
      local_a8 = local_res20;
      local_80 = local_f0 + local_c0;
      local_d0 = &local_c8;
      local_88 = local_f8 + local_c0;
      local_c0 = local_c0 * local_c0;
      local_d8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FSquare2DGridHelper::FGrid2D::ForEachIntersectingCells'::__l2::<lambda_1>,void,UE::Math::TIntVector2<__int64>_const_&>
                 ::Call;
      local_48 = param_3;
      FGrid2D::ForEachIntersectingCells
                (local_c8,(TBox<double> *)&local_a0._s_0,
                 (TFunctionRef<void___cdecl(UE::Math::TIntVector2<__int64>_const_&)> *)&local_d8);
      iVar4 = iVar4 + local_res20[0];
      param_3 = param_3 + 1;
    } while (param_3 < (this->Levels).ArrayNum);
  }
  return iVar4;
}

// ForEachIntersectingCells @ 148a90ec0

int __thiscall
FSquare2DGridHelper::ForEachIntersectingCells
          (FSquare2DGridHelper *this,FSphericalSector *param_1,
          TFunctionRef<void___cdecl(UE::Math::TIntVector3<__int64>_const_&)> *param_2,int param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  FGrid2D *this_00;
  uint uVar9;
  uint uVar10;
  int local_res20 [2];
  code *local_108;
  FGrid2D **local_100;
  uint local_f8 [2];
  undefined8 local_f0;
  undefined8 local_e8;
  TVector<double>_u_0 local_e0;
  double dStack_c8;
  FGrid2D *local_c0;
  undefined1 local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  code *local_70;
  uint *local_68;
  int *local_60;
  
  dVar6 = __real_4076800000000000;
  uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar3 = __real_3e45798ee2308c3a;
  iVar8 = 0;
  if (param_3 < (this->Levels).ArrayNum) {
    do {
      uVar9 = 0;
      if (param_3 < (this->Levels).ArrayNum) {
        uVar9 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar1 = (code *)swi(3);
        iVar8 = (*pcVar1)();
        return iVar8;
      }
      local_f0 = *(undefined8 *)param_2;
      this_00 = (FGrid2D *)((this->Levels).AllocatorInstance.Data + (longlong)param_3 * 0x88);
      local_e8 = *(undefined8 *)&param_2->field_0x8;
      local_f8[0] = param_3;
      bVar7 = FSphericalSector::IsNearlyZero(param_1);
      if ((bVar7) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InShape.IsNearlyZero()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\RuntimeSpatialHash\\RuntimeSpatialHashGridHelper.cpp"
                             ,0x123,L""), bVar7)) {
        pcVar1 = (code *)swi(3);
        iVar8 = (*pcVar1)();
        return iVar8;
      }
      local_e0._s_0.Z = (param_1->Center).field0_0x0._s_0.Z;
      dStack_c8 = param_1->Radius;
      local_e0._s_0.X = (param_1->Center).field0_0x0._s_0.X;
      local_e0._s_0.Y = (param_1->Center).field0_0x0._s_0.Y;
      local_70 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FSquare2DGridHelper::ForEachIntersectingCells'::__l4::<lambda_1>,void,UE::Math::TIntVector2<__int64>_const_&>
                 ::Call;
      local_68 = local_f8;
      local_res20[0] = 0;
      local_60 = local_res20;
      dVar2 = param_1->Angle - dVar6;
      local_100 = &local_c0;
      local_80 = (param_1->Axis).field0_0x0._s_0.Z;
      dStack_78 = param_1->Angle;
      local_108 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSquare2DGridHelper::FGrid2D::ForEachIntersectingCells'::__l2::<lambda_1>,void,UE::Math::TIntVector2<__int64>_const_&>
                  ::Call;
      uVar9 = SUB84(dVar2,0) & uVar4;
      uVar10 = (uint)((ulonglong)dVar2 >> 0x20) & uVar5;
      local_b0 = (param_1->Center).field0_0x0._s_0.X;
      dStack_a8 = (param_1->Center).field0_0x0._s_0.Y;
      local_b8 = (double)CONCAT44(uVar10,uVar9) < dVar3 || (double)CONCAT44(uVar10,uVar9) == dVar3;
      local_90 = (param_1->Axis).field0_0x0._s_0.X;
      dStack_88 = (param_1->Axis).field0_0x0._s_0.Y;
      local_c0 = this_00;
      local_a0 = local_e0._s_0.Z;
      dStack_98 = dStack_c8;
      FGrid2D::ForEachIntersectingCells
                (this_00,(TSphere<double> *)&local_e0._s_0,
                 (TFunctionRef<void___cdecl(UE::Math::TIntVector2<__int64>_const_&)> *)&local_108);
      iVar8 = iVar8 + local_res20[0];
      param_3 = param_3 + 1;
    } while (param_3 < (this->Levels).ArrayNum);
  }
  return iVar8;
}

