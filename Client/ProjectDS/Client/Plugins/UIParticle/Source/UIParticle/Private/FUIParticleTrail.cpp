// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 4

// Empty @ 14ac95fc0

void __thiscall FUIParticleTrail::Empty(FUIParticleTrail *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->TransformCache).IndexMask + 1 <
      (this->TransformCache).AfterBack - (this->TransformCache).Front) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x37f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->TransformCache).Front = 0;
  (this->TransformCache).AfterBack = 0;
  TRingBuffer<FUIParticleTransform,TSizedDefaultAllocator<32>_>::Reallocate(&this->TransformCache,0)
  ;
  return;
}

// Enqueue @ 14ac96080

void __thiscall
FUIParticleTrail::Enqueue
          (FUIParticleTrail *this,TVector2<double> *param_1,TVector2<double> *param_2,FColor param_3
          ,FPaintGeometry *param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  TVector2<float>_u_0_s_0 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  TVector2<double> TVar10;
  bool bVar11;
  uint uVar12;
  FUIParticleTransform *pFVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  if ((((param_1->field0_0x0)._s_0.X != 0.0) || ((param_1->field0_0x0)._s_0.Y != 0.0)) ||
     ((this->TransformCache).AfterBack != (this->TransformCache).Front)) {
    uVar16 = (this->TransformCache).Front;
    uVar12 = (this->TransformCache).AfterBack - uVar16;
    if (this->MaxCount < (int)uVar12) {
      uVar16 = uVar12 - this->MaxCount;
      if ((uVar12 < uVar16) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("PopCount <= static_cast<SizeType>(Num())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                              ,0x3ec,
                              L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i")
         , bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((this->TransformCache).IndexMask + 1 < uVar16) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                              ,0x37f,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar1 = &(this->TransformCache).Front;
      *puVar1 = *puVar1 + uVar16;
      uVar16 = (this->TransformCache).Front;
    }
    dVar17 = __real_3ff0000000000000;
    iVar15 = (this->TransformCache).AfterBack - uVar16;
    if ((iVar15 < 1) ||
       (pFVar13 = TRingBuffer<FUIParticleTransform,TSizedDefaultAllocator<32>_>::operator[]
                            (&this->TransformCache,iVar15 + -1),
       dVar5 = (pFVar13->Position).field0_0x0._s_0.Y - (param_1->field0_0x0)._s_0.Y,
       dVar18 = (pFVar13->Position).field0_0x0._s_0.X - (param_1->field0_0x0)._s_0.X,
       dVar17 <= dVar5 * dVar5 + dVar18 * dVar18)) {
      iVar15 = (this->TransformCache).AfterBack - (this->TransformCache).Front;
      if (0 < iVar15) {
        pFVar13 = TRingBuffer<FUIParticleTransform,TSizedDefaultAllocator<32>_>::operator[]
                            (&this->TransformCache,iVar15 + -1);
        dVar19 = (param_1->field0_0x0)._s_0.Y - (pFVar13->Position).field0_0x0._s_0.Y;
        dVar18 = (param_1->field0_0x0)._s_0.X - (pFVar13->Position).field0_0x0._s_0.X;
        (pFVar13->Direction).field0_0x0._s_0.X = dVar18;
        dVar5 = dVar18 * dVar18 + dVar19 * dVar19;
        if (dVar5 <= __real_3e45798ee0000000) {
          (pFVar13->Direction).field0_0x0._s_0.X = 0.0;
          (pFVar13->Direction).field0_0x0._s_0.Y = 0.0;
        }
        else {
          dVar17 = dVar17 / SQRT(dVar5);
          (pFVar13->Direction).field0_0x0._s_0.X = dVar18 * dVar17;
          (pFVar13->Direction).field0_0x0._s_0.Y = dVar19 * dVar17;
        }
      }
      TVar10.field0_0x0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      dVar17 = (param_1->field0_0x0)._s_0.X;
      dVar5 = (param_1->field0_0x0)._s_0.Y;
      TVar6 = (param_4->DrawPosition).field0_0x0._s_0;
      uVar2 = *(undefined8 *)&(param_4->DrawSize).field0_0x0._s_0.Y;
      uVar7 = *(undefined8 *)&(param_4->LocalSize).field0_0x0._s_0.Y;
      dVar18 = (param_2->field0_0x0)._s_0.X;
      dVar19 = (param_2->field0_0x0)._s_0.Y;
      fStack_84 = TVar6.X;
      fStack_80 = TVar6.Y;
      uStack_7c = (undefined4)*(undefined8 *)&param_4->DrawScale;
      uStack_78 = (undefined4)((ulonglong)*(undefined8 *)&param_4->DrawScale >> 0x20);
      uVar8 = *(undefined8 *)((param_4->AccumulatedRenderTransform).M.M[0] + 1);
      uVar9 = *(undefined8 *)((param_4->AccumulatedRenderTransform).M.M[1] + 1);
      uStack_74 = (undefined4)uVar2;
      uStack_70 = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_6c = (undefined4)uVar7;
      uStack_68 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uVar2 = *(undefined8 *)&(param_4->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
      local_64 = (undefined4)uVar8;
      uStack_60 = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_5c = (undefined4)uVar9;
      uStack_58 = (undefined4)((ulonglong)uVar9 >> 0x20);
      local_54 = (undefined4)uVar2;
      uStack_50 = (undefined4)((ulonglong)uVar2 >> 0x20);
      uVar16 = TRingBuffer<FUIParticleTransform,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                         (&this->TransformCache,
                          ((this->TransformCache).AfterBack - (this->TransformCache).Front) + 1);
      if ((this->TransformCache).IndexMask + 1 < uVar16) {
        TRingBuffer<FUIParticleTransform,TSizedDefaultAllocator<32>_>::Reallocate
                  (&this->TransformCache,uVar16);
      }
      uVar16 = (this->TransformCache).AfterBack;
      (this->TransformCache).AfterBack = uVar16 + 1;
      pFVar3 = (this->TransformCache).AllocatorInstance.Data;
      lVar14 = (ulonglong)(uVar16 & (this->TransformCache).IndexMask) * 0x70;
      *(double *)(pFVar3 + lVar14) = dVar17;
      *(double *)(pFVar3 + lVar14 + 8) = dVar5;
      *(double *)(pFVar3 + lVar14 + 0x10) = dVar18;
      *(double *)(pFVar3 + lVar14 + 0x10 + 8) = dVar19;
      ((TVector2<double>_u_0 *)(pFVar3 + lVar14 + 0x20))->_s_0 =
           (TVector2<double>_u_0_s_0)TVar10.field0_0x0;
      *(ulonglong *)(pFVar3 + lVar14 + 0x30) = CONCAT44(fStack_84,param_3.field0_0x0);
      *(ulonglong *)(pFVar3 + lVar14 + 0x30 + 8) = CONCAT44(uStack_7c,fStack_80);
      *(ulonglong *)(pFVar3 + lVar14 + 0x40) = CONCAT44(uStack_74,uStack_78);
      *(ulonglong *)(pFVar3 + lVar14 + 0x40 + 8) = CONCAT44(uStack_6c,uStack_70);
      *(ulonglong *)(pFVar3 + lVar14 + 0x50) = CONCAT44(local_64,uStack_68);
      *(ulonglong *)(pFVar3 + lVar14 + 0x50 + 8) = CONCAT44(uStack_5c,uStack_60);
      *(ulonglong *)(pFVar3 + lVar14 + 0x60) = CONCAT44(local_54,uStack_58);
      *(ulonglong *)(pFVar3 + lVar14 + 0x60 + 8) = CONCAT44(uStack_4c,uStack_50);
    }
  }
  return;
}

// GenerateVertexAndIndex @ 14ac96fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUIParticleTrail::GenerateVertexAndIndex(FUIParticleTrail *this)

{
  int iVar1;
  TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [12];
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  FUIParticleTrail *pFVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  bool bVar20;
  float fVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  int *piVar25;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar26;
  uint uVar27;
  ulonglong uVar28;
  uint uVar29;
  ulonglong uVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  undefined1 auStackY_2a8 [32];
  int local_254;
  int local_250;
  int local_24c;
  int local_248;
  int local_244;
  int local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  FUIParticleTrail *local_228;
  ulonglong local_220;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  float fStack_180;
  float fStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 local_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  float fStack_150;
  float fStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  float fStack_120;
  float fStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  float fStack_f0;
  float fStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pTVar2 = &this->VertexData;
  uVar30 = 0;
  piVar3 = &(this->VertexData).ArrayMax;
  (this->VertexData).ArrayNum = 0;
  local_228 = this;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x2c,4,0,&pTVar2->AllocatorInstance,0,piVar3);
  }
  pTVar26 = &this->IndexData;
  piVar25 = &(this->IndexData).ArrayMax;
  (this->IndexData).ArrayNum = 0;
  local_218 = pTVar26;
  if (*piVar25 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar26->AllocatorInstance,0,piVar25);
  }
  fVar21 = (float)((this->TransformCache).AfterBack - (this->TransformCache).Front);
  if (1 < (int)fVar21) {
    local_23c = fVar21;
    if (fVar21 != 0.0) {
      uVar36 = (undefined4)local_210;
      uVar37 = (undefined4)((ulonglong)local_210 >> 0x20);
      uVar38 = SUB84(__real_3c91a62633145c07,0);
      uVar39 = (undefined4)((ulonglong)__real_3c91a62633145c07 >> 0x20);
      uVar40 = SUB84(local_218,0);
      uVar41 = (undefined4)((ulonglong)local_218 >> 0x20);
      local_220 = (ulonglong)((int)fVar21 + -1);
      uVar28 = uVar30;
      do {
        uVar27 = (uint)uVar28;
        uVar29 = 0;
        if ((int)uVar27 < (int)((this->TransformCache).AfterBack - (this->TransformCache).Front)) {
          uVar29 = ~uVar27 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < Num())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                ,0x3e3,
                                L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
           bVar20)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->TransformCache).AllocatorInstance.Data;
        lVar24 = (ulonglong)
                 ((this->TransformCache).Front + uVar27 & (this->TransformCache).IndexMask) * 0x70;
        local_208 = *(undefined8 *)(pFVar5 + lVar24);
        uStack_200 = *(undefined8 *)(pFVar5 + lVar24 + 8);
        dVar14 = *(double *)(pFVar5 + lVar24 + 0x10);
        dVar10 = *(double *)(pFVar5 + lVar24 + 0x10 + 8);
        auVar4 = *(undefined1 (*) [16])(pFVar5 + lVar24 + 0x20);
        local_1d8 = *(undefined8 *)(pFVar5 + lVar24 + 0x30);
        uStack_1d0 = *(undefined8 *)(pFVar5 + lVar24 + 0x30 + 8);
        local_1c8 = *(undefined8 *)(pFVar5 + lVar24 + 0x40);
        uStack_1c0 = *(undefined8 *)(pFVar5 + lVar24 + 0x40 + 8);
        uVar12 = *(undefined8 *)(pFVar5 + lVar24 + 0x50);
        uVar13 = *(undefined8 *)(pFVar5 + lVar24 + 0x50 + 8);
        uVar15 = *(undefined8 *)(pFVar5 + lVar24 + 0x60);
        uStack_1a0 = *(undefined8 *)(pFVar5 + lVar24 + 0x60 + 8);
        if ((auVar4._0_8_ != 0.0) ||
           (auVar11._4_8_ = uVar13, auVar11._0_4_ = auVar4._4_4_,
           auVar31._0_8_ = auVar11._0_8_ << 0x20, auVar31._8_4_ = auVar4._8_4_,
           auVar31._12_4_ = auVar4._12_4_, auVar31._8_8_ != 0.0)) {
          uVar36 = auVar4._8_4_;
          uVar37 = auVar4._12_4_;
          uVar40 = auVar4._0_4_;
          uVar41 = auVar4._4_4_;
        }
        uVar17 = (undefined4)local_1d8;
        local_1a8._0_4_ = (float)uVar15;
        uStack_1b0._4_4_ = (float)((ulonglong)uVar13 >> 0x20);
        uStack_1b0._0_4_ = (float)uVar13;
        local_1b8._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
        local_1b8._0_4_ = (float)uVar12;
        fVar18 = (float)local_1b8;
        local_1a8._4_4_ = (float)((ulonglong)uVar15 >> 0x20);
        fVar19 = local_1a8._4_4_;
        local_238 = (float)local_1a8;
        local_234 = uStack_1b0._4_4_;
        local_230 = (float)uStack_1b0;
        local_23c = local_1b8._4_4_;
        local_1f8 = dVar14;
        dStack_1f0 = dVar10;
        if (((double)CONCAT44(uVar41,uVar40) != 0.0) ||
           (fVar34 = (float)uStack_1b0, fVar32 = local_1b8._4_4_,
           (double)CONCAT44(uVar37,uVar36) != 0.0)) {
          dVar7 = (double)CONCAT44(uVar41,uVar40) * (double)CONCAT44(uVar39,uVar38);
          dVar8 = (double)CONCAT44(uVar37,uVar36) * __real_3c91a62633145c07;
          dVar9 = dVar10 * __real_3fe0000000000000;
          pFVar5 = (pTVar2->AllocatorInstance).Data;
          local_198 = 0;
          uStack_190 = 0x3f800000;
          uStack_18c = 0x3f800000;
          local_178 = (undefined4)local_1d8;
          uStack_174 = 0;
          fVar42 = __real_3f800000 - ((float)uVar28 / (float)(int)fVar21) * __real_3f000000;
          fVar34 = (float)(((dVar7 - (double)CONCAT44(uVar37,uVar36) * __real_bff0000000000000) +
                           __real_3ff0000000000000) * dVar14 * __real_3fe0000000000000);
          fVar32 = (float)((dVar8 - (double)CONCAT44(uVar41,uVar40)) * dVar14 *
                           __real_3fe0000000000000 + dVar9);
          fStack_180 = fVar32 * (float)uStack_1b0 + fVar34 * (float)local_1b8 + (float)local_1a8;
          fStack_17c = fVar32 * uStack_1b0._4_4_ + fVar34 * local_1b8._4_4_ + local_1a8._4_4_;
          local_1b8 = uVar12;
          uStack_1b0 = uVar13;
          local_1a8 = uVar15;
          fStack_194 = fVar42;
          if ((pFVar5 <= (FScriptContainerElement *)&local_198) &&
             (((FScriptContainerElement *)&local_198 < pFVar5 + (longlong)*piVar3 * 0x2c &&
              (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar20)))) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar22 = (this->VertexData).ArrayNum;
          if (iVar22 == *piVar3) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x42c,&pTVar2->AllocatorInstance,piVar3);
          }
          fVar34 = local_230;
          fVar32 = local_23c;
          (this->VertexData).ArrayNum = iVar22 + 1;
          pFVar5 = (pTVar2->AllocatorInstance).Data;
          lVar24 = (longlong)iVar22 * 0x2c;
          dVar7 = (dVar7 - (double)CONCAT44(uVar37,uVar36)) + __real_3ff0000000000000;
          *(ulonglong *)(pFVar5 + lVar24) = CONCAT44(fStack_194,local_198);
          *(ulonglong *)(pFVar5 + lVar24 + 8) = CONCAT44(uStack_18c,uStack_190);
          dVar7 = dVar7 * dVar14 * __real_3fe0000000000000;
          *(undefined8 *)(pFVar5 + lVar24 + 0x10) = local_188;
          *(ulonglong *)(pFVar5 + lVar24 + 0x10 + 8) = CONCAT44(fStack_17c,fStack_180);
          *(ulonglong *)(pFVar5 + lVar24 + 0x20) = CONCAT44(uStack_174,local_178);
          *(undefined4 *)(pFVar5 + lVar24 + 0x28) = local_170;
          pFVar5 = (pTVar2->AllocatorInstance).Data;
          local_168 = 0x3f800000;
          uStack_160 = 0x3f800000;
          uStack_15c = 0x3f800000;
          local_148 = uVar17;
          uStack_144 = 0;
          fVar35 = (float)dVar7;
          fVar33 = (float)(((double)CONCAT44(uVar41,uVar40) + dVar8) * dVar14 *
                           __real_3fe0000000000000 + dVar9);
          fStack_14c = fVar33 * local_234 + fVar35 * local_23c + fVar19;
          fStack_150 = fVar33 * local_230 + fVar35 * fVar18 + local_238;
          fStack_164 = fVar42;
          if (((pFVar5 <= (FScriptContainerElement *)&local_168) &&
              ((FScriptContainerElement *)&local_168 < pFVar5 + (longlong)*piVar3 * 0x2c)) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar20)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar22 = (this->VertexData).ArrayNum;
          if (iVar22 == *piVar3) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x42c,&pTVar2->AllocatorInstance,piVar3);
          }
          uVar38 = SUB84(__real_3c91a62633145c07,0);
          uVar39 = (undefined4)((ulonglong)__real_3c91a62633145c07 >> 0x20);
          lVar24 = (longlong)iVar22 * 0x2c;
          (this->VertexData).ArrayNum = iVar22 + 1;
          pFVar5 = (pTVar2->AllocatorInstance).Data;
          *(ulonglong *)(pFVar5 + lVar24) = CONCAT44(fStack_164,local_168);
          *(ulonglong *)(pFVar5 + lVar24 + 8) = CONCAT44(uStack_15c,uStack_160);
          *(undefined8 *)(pFVar5 + lVar24 + 0x10) = local_158;
          *(ulonglong *)(pFVar5 + lVar24 + 0x10 + 8) = CONCAT44(fStack_14c,fStack_150);
          *(ulonglong *)(pFVar5 + lVar24 + 0x20) = CONCAT44(uStack_144,local_148);
          *(undefined4 *)(pFVar5 + lVar24 + 0x28) = local_140;
          uVar12 = local_1b8;
          uVar13 = uStack_1b0;
          uVar15 = local_1a8;
        }
        local_1a8 = uVar15;
        uStack_1b0 = uVar13;
        local_1b8 = uVar12;
        if ((uVar28 == local_220) &&
           (((double)CONCAT44(uVar41,uVar40) != 0.0 || ((double)CONCAT44(uVar37,uVar36) != 0.0)))) {
          pFVar5 = (pTVar2->AllocatorInstance).Data;
          dVar10 = dVar10 * __real_3fe0000000000000;
          local_118 = uVar17;
          uStack_114 = 0;
          dVar7 = (double)CONCAT44(uVar41,uVar40) * (double)CONCAT44(uVar39,uVar38);
          dVar8 = (double)CONCAT44(uVar37,uVar36) * __real_3c91a62633145c07;
          fVar33 = (float)(((dVar7 - (double)CONCAT44(uVar37,uVar36) * __real_bff0000000000000) +
                            (double)CONCAT44(uVar41,uVar40) + __real_3ff0000000000000) * dVar14 *
                          __real_3fe0000000000000);
          fVar42 = (float)(((dVar8 - (double)CONCAT44(uVar41,uVar40)) +
                           (double)CONCAT44(uVar37,uVar36)) * dVar14 * __real_3fe0000000000000 +
                          dVar10);
          local_138 = ___xmm_3f8000003f8000000000000000000000;
          uStack_130 = _UNK_15076b1e8;
          fStack_11c = fVar42 * local_234 + fVar33 * fVar32 + fVar19;
          fStack_120 = fVar42 * fVar34 + fVar33 * fVar18 + local_238;
          if ((pFVar5 <= (FScriptContainerElement *)&local_138) &&
             (((FScriptContainerElement *)&local_138 < pFVar5 + (longlong)*piVar3 * 0x2c &&
              (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar20)))) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar22 = (this->VertexData).ArrayNum;
          if (iVar22 == *piVar3) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x42c,&pTVar2->AllocatorInstance,piVar3);
          }
          (this->VertexData).ArrayNum = iVar22 + 1;
          pFVar5 = (pTVar2->AllocatorInstance).Data;
          lVar24 = (longlong)iVar22 * 0x2c;
          dVar7 = (dVar7 - (double)CONCAT44(uVar37,uVar36)) + (double)CONCAT44(uVar41,uVar40) +
                  __real_3ff0000000000000;
          *(undefined8 *)(pFVar5 + lVar24) = local_138;
          *(undefined8 *)(pFVar5 + lVar24 + 8) = uStack_130;
          *(undefined8 *)(pFVar5 + lVar24 + 0x10) = local_128;
          *(ulonglong *)(pFVar5 + lVar24 + 0x10 + 8) = CONCAT44(fStack_11c,fStack_120);
          dVar7 = dVar7 * dVar14 * __real_3fe0000000000000;
          *(ulonglong *)(pFVar5 + lVar24 + 0x20) = CONCAT44(uStack_114,local_118);
          *(undefined4 *)(pFVar5 + lVar24 + 0x28) = local_110;
          pFVar5 = (pTVar2->AllocatorInstance).Data;
          local_e8 = uVar17;
          uStack_e4 = 0;
          fVar33 = (float)dVar7;
          fVar42 = (float)(((double)CONCAT44(uVar41,uVar40) + dVar8 +
                           (double)CONCAT44(uVar37,uVar36)) * dVar14 * __real_3fe0000000000000 +
                          dVar10);
          local_108 = ___xmm_3f8000003f800000000000003f800000;
          uStack_100 = _UNK_15090c6d8;
          fStack_ec = fVar42 * local_234 + fVar33 * fVar32 + fVar19;
          fStack_f0 = fVar42 * fVar34 + fVar33 * fVar18 + local_238;
          if (((pFVar5 <= (FScriptContainerElement *)&local_108) &&
              ((FScriptContainerElement *)&local_108 < pFVar5 + (longlong)*piVar3 * 0x2c)) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar20)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar22 = (this->VertexData).ArrayNum;
          if (iVar22 == *piVar3) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x42c,&pTVar2->AllocatorInstance,piVar3);
          }
          lVar24 = (longlong)iVar22 * 0x2c;
          (this->VertexData).ArrayNum = iVar22 + 1;
          pFVar5 = (pTVar2->AllocatorInstance).Data;
          *(undefined8 *)(pFVar5 + lVar24) = local_108;
          *(undefined8 *)(pFVar5 + lVar24 + 8) = uStack_100;
          *(undefined8 *)(pFVar5 + lVar24 + 0x10) = local_f8;
          *(ulonglong *)(pFVar5 + lVar24 + 0x10 + 8) = CONCAT44(fStack_ec,fStack_f0);
          *(ulonglong *)(pFVar5 + lVar24 + 0x20) = CONCAT44(uStack_e4,local_e8);
          *(undefined4 *)(pFVar5 + lVar24 + 0x28) = local_e0;
        }
        uVar28 = uVar28 + 1;
        uVar38 = SUB84(__real_3c91a62633145c07,0);
        uVar39 = (undefined4)((ulonglong)__real_3c91a62633145c07 >> 0x20);
      } while (uVar28 < (ulonglong)(longlong)(int)fVar21);
      piVar25 = &local_218->ArrayMax;
      this = local_228;
      pTVar26 = local_218;
    }
    pFVar16 = local_228;
    if (0 < (this->VertexData).ArrayNum / 2 + -1) {
      iVar22 = 1;
      do {
        pFVar5 = (pTVar26->AllocatorInstance).Data;
        local_254 = iVar22 + -1;
        if (((pFVar5 <= (FScriptContainerElement *)&local_254) &&
            ((FScriptContainerElement *)&local_254 < pFVar5 + (longlong)*piVar25 * 4)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar20)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar23 = pTVar26->ArrayNum;
        if (iVar23 == *piVar25) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar26->AllocatorInstance,piVar25);
        }
        pTVar26->ArrayNum = iVar23 + 1;
        *(int *)((pTVar26->AllocatorInstance).Data + (longlong)iVar23 * 4) = local_254;
        pFVar5 = (pTVar26->AllocatorInstance).Data;
        local_250 = iVar22;
        if (((pFVar5 <= (FScriptContainerElement *)&local_250) &&
            ((FScriptContainerElement *)&local_250 < pFVar5 + (longlong)*piVar25 * 4)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar20)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar23 = pTVar26->ArrayNum;
        if (iVar23 == *piVar25) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar26->AllocatorInstance,piVar25);
        }
        iVar1 = iVar22 + 1;
        pTVar26->ArrayNum = iVar23 + 1;
        *(int *)((pTVar26->AllocatorInstance).Data + (longlong)iVar23 * 4) = local_250;
        pFVar5 = (pTVar26->AllocatorInstance).Data;
        local_24c = iVar1;
        if (((pFVar5 <= (FScriptContainerElement *)&local_24c) &&
            ((FScriptContainerElement *)&local_24c < pFVar5 + (longlong)*piVar25 * 4)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar20)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar23 = pTVar26->ArrayNum;
        if (iVar23 == *piVar25) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar26->AllocatorInstance,piVar25);
        }
        pTVar26->ArrayNum = iVar23 + 1;
        *(int *)((pTVar26->AllocatorInstance).Data + (longlong)iVar23 * 4) = local_24c;
        pFVar5 = (pTVar26->AllocatorInstance).Data;
        local_248 = iVar22;
        if (((pFVar5 <= (FScriptContainerElement *)&local_248) &&
            ((FScriptContainerElement *)&local_248 < pFVar5 + (longlong)*piVar25 * 4)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar20)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar23 = pTVar26->ArrayNum;
        if (iVar23 == *piVar25) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar26->AllocatorInstance,piVar25);
        }
        pTVar26->ArrayNum = iVar23 + 1;
        *(int *)((pTVar26->AllocatorInstance).Data + (longlong)iVar23 * 4) = local_248;
        iVar22 = iVar22 + 2;
        pFVar5 = (pTVar26->AllocatorInstance).Data;
        local_244 = iVar22;
        if (((pFVar5 <= (FScriptContainerElement *)&local_244) &&
            ((FScriptContainerElement *)&local_244 < pFVar5 + (longlong)*piVar25 * 4)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar20)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar23 = pTVar26->ArrayNum;
        if (iVar23 == *piVar25) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar26->AllocatorInstance,piVar25);
        }
        pTVar26->ArrayNum = iVar23 + 1;
        *(int *)((pTVar26->AllocatorInstance).Data + (longlong)iVar23 * 4) = local_244;
        pFVar5 = (pTVar26->AllocatorInstance).Data;
        local_240 = iVar1;
        if (((pFVar5 <= (FScriptContainerElement *)&local_240) &&
            ((FScriptContainerElement *)&local_240 < pFVar5 + (longlong)*piVar25 * 4)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar20)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar23 = pTVar26->ArrayNum;
        if (iVar23 == *piVar25) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar26->AllocatorInstance,piVar25);
        }
        uVar29 = (int)uVar30 + 1;
        uVar30 = (ulonglong)uVar29;
        pTVar26->ArrayNum = iVar23 + 1;
        *(int *)((pTVar26->AllocatorInstance).Data + (longlong)iVar23 * 4) = local_240;
      } while ((int)uVar29 < (pFVar16->VertexData).ArrayNum / 2 + -1);
    }
  }
  return;
}

// Reserve @ 14ac9ed90

void __thiscall FUIParticleTrail::Reserve(FUIParticleTrail *this,int param_1)

{
  uint uVar1;
  
  this->MaxCount = param_1;
  uVar1 = TRingBuffer<FUIParticleTransform,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                    (&this->TransformCache,param_1);
  if ((this->TransformCache).IndexMask + 1 < uVar1) {
    TRingBuffer<FUIParticleTransform,TSizedDefaultAllocator<32>_>::Reallocate
              (&this->TransformCache,uVar1);
    return;
  }
  return;
}

