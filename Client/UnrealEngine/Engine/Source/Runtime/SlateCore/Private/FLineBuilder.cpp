// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// operator() @ 1424f9a60

void __thiscall
`FLineBuilder::AddQuadIndices'::__l2::<lambda_1>::operator()
          (void *this,FSlateRenderBatch *param_1,int param_2,int param_3,int param_4,int param_5)

{
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar1;
  longlong lVar2;
  int iVar3;
  
  pTVar1 = param_1->SourceIndices;
  iVar3 = pTVar1->ArrayNum;
  if (iVar3 == pTVar1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar3 + 1;
  *(int *)((pTVar1->AllocatorInstance)._padding_ + (longlong)iVar3 * 4) = param_2;
  pTVar1 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar3 = pTVar1->ArrayNum;
  if (iVar3 == pTVar1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar3 + 1;
  *(int *)((pTVar1->AllocatorInstance)._padding_ + (longlong)iVar3 * 4) = param_3;
  pTVar1 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar3 = pTVar1->ArrayNum;
  if (iVar3 == pTVar1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar3 + 1;
  *(int *)((pTVar1->AllocatorInstance)._padding_ + (longlong)iVar3 * 4) = param_4;
  pTVar1 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar3 = pTVar1->ArrayNum;
  if (iVar3 == pTVar1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar3 + 1;
  *(int *)((pTVar1->AllocatorInstance)._padding_ + (longlong)iVar3 * 4) = param_4;
  pTVar1 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar3 = pTVar1->ArrayNum;
  if (iVar3 == pTVar1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar2 = (pTVar1->AllocatorInstance)._padding_;
  pTVar1->ArrayNum = iVar3 + 1;
  *(int *)(lVar2 + (longlong)iVar3 * 4) = param_5;
  pTVar1 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar3 = pTVar1->ArrayNum;
  if (iVar3 == pTVar1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar3 + 1;
  *(int *)((pTVar1->AllocatorInstance)._padding_ + (longlong)iVar3 * 4) = param_2;
  param_1->NumIndices = param_1->NumIndices + 1;
  return;
}

// BuildLineGeometry @ 142502610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FLineBuilder::BuildLineGeometry
          (FLineBuilder *this,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FColor,TSizedDefaultAllocator<32>_> *param_2,FColor *param_3,
          ESlateVertexRounding param_4)

{
  FColor_u_0 FVar1;
  FSlateRenderBatch *pFVar2;
  code *pcVar3;
  TVector2<float> TVar4;
  TVector2<float> TVar5;
  TVector2<float> TVar6;
  TVector2<float> TVar7;
  TVector2<float> TVar8;
  TVector2<float> TVar9;
  TVector2<float> TVar10;
  TVector2<float> TVar11;
  float fVar12;
  uint uVar13;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  FSlateVertex *pFVar18;
  FColor_u_0 *pFVar19;
  TVector2<float>_u_0 TVar20;
  TVector2<float>_u_0 TVar21;
  TVector2<float>_u_0 TVar22;
  TVector2<float>_u_0 TVar23;
  int iVar24;
  ulonglong uVar25;
  TVector2<float>_u_0 TVar26;
  TVector2<float>_u_0 TVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint uVar36;
  FColor_u_0 local_274;
  undefined8 local_270;
  undefined8 local_268;
  undefined1 local_260 [8];
  undefined8 local_258;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_250;
  TVector2<float>_u_0 local_248;
  uint local_240;
  int local_23c;
  FLineBuilder *local_238;
  undefined8 local_230;
  float local_228;
  float fStack_224;
  float local_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float local_210;
  float fStack_20c;
  undefined8 local_208;
  float local_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float local_1e0;
  float fStack_1dc;
  undefined8 local_1d8;
  float local_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  float local_1b8;
  float fStack_1b4;
  TArray<FColor,TSizedDefaultAllocator<32>_> *local_1b0;
  longlong local_1a8;
  FColor_u_0 *local_1a0;
  FSlateVertex local_198;
  FSlateVertex local_168;
  FSlateVertex local_138;
  FSlateVertex local_108 [4];
  
  bVar16 = __real_c1200000 != this->DashLength;
  local_250 = param_1;
  local_238 = this;
  local_1b0 = param_2;
  local_1a0 = &param_3->field0_0x0;
  if (param_2->ArrayNum != 0) {
    if ((param_2->ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_3 = (FColor *)(param_2->AllocatorInstance).Data;
  }
  local_274 = param_3->field0_0x0;
  if ((param_1->ArrayNum < 1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar25 = 1;
  local_248 = (TVector2<float>_u_0)0x1;
  TVar20 = (TVector2<float>_u_0)
           *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)(param_1->AllocatorInstance).Data)->_s_0
  ;
  local_270 = TVar20;
  if ((param_1->ArrayNum < 2) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar13 = __xmm_80000000800000008000000080000000;
  fVar28 = __real_3f800000;
  fVar12 = __real_322bcc77;
  TVar27 = (TVector2<float>_u_0)
           *(TVector2<float>_u_0 *)
            &((TVector2<float>_u_0 *)((param_1->AllocatorInstance).Data + 8))->_s_0;
  local_268._0_4_ = TVar27._s_0.X;
  local_268._4_4_ = TVar27._s_0.Y;
  local_268._0_4_ = (float)local_268 - (float)(undefined4)local_270;
  local_268._4_4_ = local_268._4_4_ - (float)local_270._4_4_;
  fVar32 = SQRT(local_268._4_4_ * local_268._4_4_ + (float)local_268 * (float)local_268);
  TVar21 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  if (__real_322bcc77 < fVar32) {
    fStack_224 = (__real_3f800000 / fVar32) * local_268._4_4_;
    local_228 = (__real_3f800000 / fVar32) * (float)local_268;
    TVar21._s_0.Y = fStack_224;
    TVar21._s_0.X = local_228;
  }
  local_258._4_4_ = TVar21._s_0.Y;
  this->PositionAlongLine = this->DashOffset;
  local_258._0_4_ = TVar21._s_0.X;
  local_270._4_4_ = (float)local_258 * this->LocalHalfThickness;
  local_270._0_4_ = (uint)(local_258._4_4_ * this->LocalHalfThickness) ^ uVar13;
  TVar23 = local_270;
  local_268 = TVar27;
  local_258 = TVar21;
  MakeStartCap(this,(TVector2<float>)TVar20,(TVector2<float>)TVar21._s_0,fVar32,
               (TVector2<float>)local_270,(FColor *)&local_274._s_0,param_4);
  this->PositionAlongLine = fVar32 + this->PositionAlongLine;
  local_23c = local_250->ArrayNum + -1;
  local_1a8 = (longlong)local_23c;
  if (1 < local_1a8) {
    local_258 = (TVector2<float>_u_0)0x1;
    TVar20 = TVar21;
    TVar22 = TVar23;
    TVar26 = TVar27;
    fVar35 = fVar32;
    uVar36 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    do {
      pTVar14 = local_1b0;
      iVar24 = (int)uVar25;
      pFVar19 = local_1a0;
      if (iVar24 < local_1b0->ArrayNum) {
        if ((iVar24 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar19 = (FColor_u_0 *)((pTVar14->AllocatorInstance).Data + (longlong)iVar24 * 4);
      }
      FVar1 = (FColor_u_0)*(FColor_u_0 *)&pFVar19->_s_0;
      local_240 = local_248._0_4_ + 1;
      uVar17 = 0;
      if ((int)local_240 < local_250->ArrayNum) {
        uVar17 = ~local_240 >> 0x1f;
      }
      local_274 = FVar1;
      local_270 = TVar26;
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this = local_238;
      fVar33 = (float)(undefined4)local_270;
      fVar34 = (float)local_270._4_4_;
      TVar27 = (TVector2<float>_u_0)
               *(TVector2<float>_u_0 *)
                &((TVector2<float>_u_0 *)
                 ((local_250->AllocatorInstance).Data + (longlong)local_258 * 8 + 8))->_s_0;
      local_268._0_4_ = TVar27._s_0.X;
      local_268._4_4_ = TVar27._s_0.Y;
      local_268._0_4_ = (float)local_268 - (float)(undefined4)local_270;
      local_268._4_4_ = local_268._4_4_ - (float)local_270._4_4_;
      fVar32 = SQRT(local_268._4_4_ * local_268._4_4_ + (float)local_268 * (float)local_268);
      TVar21 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      if (fVar12 < fVar32) {
        fStack_21c = (fVar28 / fVar32) * local_268._4_4_;
        local_220 = (fVar28 / fVar32) * (float)local_268;
        TVar21._s_0.Y = fStack_21c;
        TVar21._s_0.X = local_220;
      }
      local_270._4_4_ = TVar21._s_0.Y;
      local_230._0_4_ = TVar20._s_0.X;
      local_230._4_4_ = TVar20._s_0.Y;
      local_270._0_4_ = TVar21._s_0.X;
      fStack_214 = local_238->LocalHalfThickness * (float)(undefined4)local_270;
      fVar30 = (float)local_230 + (float)(undefined4)local_270;
      fVar29 = local_230._4_4_ + (float)local_270._4_4_;
      local_218 = (float)((uint)((float)local_270._4_4_ * local_238->LocalHalfThickness) ^ uVar13);
      TVar23._s_0.Y = fStack_214;
      TVar23._s_0.X = local_218;
      fVar28 = fVar29 * fVar29 + fVar30 * fVar30;
      if (fVar28 <= fVar12) {
        fVar30 = (float)((uint)local_230._4_4_ ^ uVar13);
      }
      else {
        local_230._0_4_ = __real_3f800000 / SQRT(fVar28);
        fVar30 = fVar30 * (float)local_230;
        local_230._0_4_ = fVar29 * (float)local_230;
      }
      fVar28 = fVar35;
      if (fVar32 <= fVar35) {
        fVar28 = fVar32;
      }
      fVar31 = (float)local_230 * fStack_214 + fVar30 * local_218;
      fVar29 = (float)local_230 * (float)local_270._4_4_ + fVar30 * (float)(undefined4)local_270;
      local_270 = TVar23;
      local_268 = TVar21;
      local_248 = TVar21;
      local_230 = TVar20;
      if (((fVar28 <= fVar12) || (fVar29 < local_238->AngleCosineLimit)) ||
         (fVar28 * __real_3f000000 * fVar29 < (float)((uint)fVar31 & uVar36))) {
        MakeEndCap(local_238,(TVector2<float>)TVar26._s_0,(TVector2<float>)TVar20._s_0,fVar35,
                   (TVector2<float>)TVar22._s_0,(FColor *)&local_274._s_0,param_4);
        MakeStartCap(this,(TVector2<float>)TVar26._s_0,(TVector2<float>)TVar21._s_0,fVar32,
                     (TVector2<float>)TVar23._s_0,(FColor *)&local_274._s_0,param_4);
      }
      else {
        pFVar2 = local_238->RenderBatch;
        fVar31 = fVar31 / fVar29;
        local_208 = 0x3f800000;
        fVar35 = fStack_214 - fVar31 * (float)local_270._4_4_;
        fVar29 = local_218 - fVar31 * (float)(undefined4)local_270;
        fVar31 = fVar35 + fVar34;
        fVar30 = fVar29 + fVar33;
        fVar28 = fVar35 * (float)local_270._4_4_ + fVar29 * (float)(undefined4)local_270;
        TVar5.field0_0x0._s_0.Y = fVar31;
        TVar5.field0_0x0._s_0.X = fVar30;
        local_210 = local_238->PositionAlongLine - fVar28;
        fStack_20c = local_238->DashLength;
        TVar4.field0_0x0._s_0.Y = fStack_20c;
        TVar4.field0_0x0._s_0.X = local_210;
        local_200 = fVar30;
        fStack_1fc = fVar31;
        pFVar18 = FSlateVertex::Make(&local_198,local_238->RenderTransform,TVar5,
                                     (TVector2<float>)0x3f800000,TVar4,(FColor)FVar1._s_0,
                                     (FColor)0x0,param_4);
        FSlateRenderBatch::EmplaceVertex(pFVar2,pFVar18);
        fVar33 = fVar33 - fVar29;
        pFVar2 = this->RenderBatch;
        fVar34 = fVar34 - fVar35;
        local_1f8 = fVar28 + this->PositionAlongLine;
        TVar7.field0_0x0._s_0.Y = fVar34;
        TVar7.field0_0x0._s_0.X = fVar33;
        fStack_1f4 = this->DashLength;
        TVar6.field0_0x0._s_0.Y = fStack_1f4;
        TVar6.field0_0x0._s_0.X = local_1f8;
        local_1f0 = 0xbf800000;
        uStack_1ec = 0;
        local_1e8 = fVar33;
        fStack_1e4 = fVar34;
        pFVar18 = FSlateVertex::Make(&local_168,this->RenderTransform,TVar7,
                                     (TVector2<float>)0xbf800000,TVar6,(FColor)FVar1._s_0,
                                     (FColor)0x0,param_4);
        FSlateRenderBatch::EmplaceVertex(pFVar2,pFVar18);
        iVar24 = this->RenderBatch->NumVertices;
        `FLineBuilder::AddQuadIndices'::__l2::<lambda_1>::operator()
                  (local_260,this->RenderBatch,iVar24 + -3,iVar24 + -1,iVar24 + -2,iVar24 + -4);
        uVar36 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        if (bVar16) {
          pFVar2 = this->RenderBatch;
          local_1e0 = fVar28 + this->PositionAlongLine;
          TVar9.field0_0x0._s_0.Y = fVar31;
          TVar9.field0_0x0._s_0.X = fVar30;
          fStack_1dc = this->DashLength;
          TVar8.field0_0x0._s_0.Y = fStack_1dc;
          TVar8.field0_0x0._s_0.X = local_1e0;
          local_1d8 = 0x3f800000;
          local_1d0 = fVar30;
          fStack_1cc = fVar31;
          pFVar18 = FSlateVertex::Make(&local_138,this->RenderTransform,TVar9,
                                       (TVector2<float>)0x3f800000,TVar8,(FColor)FVar1._s_0,
                                       (FColor)0x0,param_4);
          FSlateRenderBatch::EmplaceVertex(pFVar2,pFVar18);
          local_1c8 = this->PositionAlongLine - fVar28;
          pFVar2 = this->RenderBatch;
          TVar11.field0_0x0._s_0.Y = fVar34;
          TVar11.field0_0x0._s_0.X = fVar33;
          fStack_1c4 = this->DashLength;
          TVar10.field0_0x0._s_0.Y = fStack_1c4;
          TVar10.field0_0x0._s_0.X = local_1c8;
          local_1c0 = 0xbf800000;
          uStack_1bc = 0;
          local_1b8 = fVar33;
          fStack_1b4 = fVar34;
          pFVar18 = FSlateVertex::Make(local_108,this->RenderTransform,TVar11,
                                       (TVector2<float>)0xbf800000,TVar10,(FColor)FVar1._s_0,
                                       (FColor)0x0,param_4);
          FSlateRenderBatch::EmplaceVertex(pFVar2,pFVar18);
          uVar36 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        }
      }
      fVar28 = __real_3f800000;
      local_258 = local_258 + 1;
      uVar25 = (ulonglong)local_240;
      this->PositionAlongLine = fVar32 + this->PositionAlongLine;
      TVar20 = TVar21;
      TVar22 = TVar23;
      TVar26 = TVar27;
      fVar35 = fVar32;
      local_248 = (TVector2<float>_u_0)uVar25;
    } while ((longlong)local_258 < local_1a8);
  }
  pTVar14 = local_1b0;
  pFVar19 = local_1a0;
  if (local_23c < local_1b0->ArrayNum) {
    if ((local_23c < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar19 = (FColor_u_0 *)((pTVar14->AllocatorInstance).Data + local_1a8 * 4);
  }
  local_274 = *pFVar19;
  MakeEndCap(this,(TVector2<float>)TVar27._s_0,(TVector2<float>)TVar21._s_0,fVar32,
             (TVector2<float>)TVar23._s_0,(FColor *)&local_274._s_0,param_4);
  return;
}

// MakeEndCap @ 142513470

void __thiscall
FLineBuilder::MakeEndCap
          (FLineBuilder *this,TVector2<float> param_1,TVector2<float> param_2,float param_3,
          TVector2<float> param_4,FColor *param_5,ESlateVertexRounding param_6)

{
  int iVar1;
  FSlateRenderBatch *pFVar2;
  TVector2<float> TVar3;
  TVector2<float> TVar4;
  TVector2<float> TVar5;
  TVector2<float> TVar6;
  TVector2<float> TVar7;
  TVector2<float> TVar8;
  TVector2<float> TVar9;
  TVector2<float> TVar10;
  FSlateVertex *pFVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_res10;
  float fStackX_14;
  float local_res18;
  float fStackX_1c;
  undefined1 local_d8 [4];
  float local_d4;
  float fStack_d0;
  undefined8 local_cc;
  float local_c4;
  float fStack_c0;
  FSlateVertex local_b8 [3];
  
  if (__real_322bcc77 < param_3) {
    pFVar2 = this->RenderBatch;
    fVar13 = this->LocalFilterRadius;
    if (param_3 * __real_3f000000 <= this->LocalFilterRadius) {
      fVar13 = param_3 * __real_3f000000;
    }
    local_d4 = this->PositionAlongLine - fVar13;
    fVar15 = fVar13 - this->LocalCapLength;
    local_res18 = param_2.field0_0x0._0_4_;
    fStackX_1c = param_2.field0_0x0._4_4_;
    local_res10 = param_1.field0_0x0._0_4_;
    fVar12 = (float)((uint)fVar13 ^ __xmm_80000000800000008000000080000000) * local_res18 +
             local_res10;
    fStack_d0 = this->DashLength;
    fStackX_14 = param_1.field0_0x0._4_4_;
    fVar14 = (float)((uint)fVar13 ^ __xmm_80000000800000008000000080000000) * fStackX_1c +
             fStackX_14;
    TVar3.field0_0x0._s_0.Y = fStack_d0;
    TVar3.field0_0x0._s_0.X = local_d4;
    local_c4 = fVar12 + param_4.field0_0x0._s_0.X;
    local_cc = 0x3f800000;
    fStack_c0 = fVar14 + param_4.field0_0x0._s_0.Y;
    TVar7.field0_0x0._s_0.Y = fStack_c0;
    TVar7.field0_0x0._s_0.X = local_c4;
    pFVar11 = FSlateVertex::Make(local_b8,this->RenderTransform,TVar7,(TVector2<float>)0x3f800000,
                                 TVar3,(FColor)(param_5->field0_0x0)._s_0,(FColor)0x0,param_6);
    FSlateRenderBatch::EmplaceVertex(pFVar2,pFVar11);
    local_d4 = fVar12 - param_4.field0_0x0._s_0.X;
    local_c4 = this->PositionAlongLine - fVar13;
    fStack_d0 = fVar14 - param_4.field0_0x0._s_0.Y;
    pFVar2 = this->RenderBatch;
    fStack_c0 = this->DashLength;
    TVar8.field0_0x0._s_0.Y = fStack_c0;
    TVar8.field0_0x0._s_0.X = local_c4;
    TVar4.field0_0x0._s_0.Y = fStack_d0;
    TVar4.field0_0x0._s_0.X = local_d4;
    local_cc = 0xbf800000;
    pFVar11 = FSlateVertex::Make(local_b8,this->RenderTransform,TVar4,(TVector2<float>)0xbf800000,
                                 TVar8,(FColor)(param_5->field0_0x0)._s_0,(FColor)0x0,param_6);
    FSlateRenderBatch::EmplaceVertex(pFVar2,pFVar11);
    iVar1 = this->RenderBatch->NumVertices;
    `FLineBuilder::AddQuadIndices'::__l2::<lambda_1>::operator()
              (local_d8,this->RenderBatch,iVar1 + -3,iVar1 + -1,iVar1 + -2,iVar1 + -4);
    pFVar2 = this->RenderBatch;
    local_c4 = fVar15 + this->PositionAlongLine;
    local_res10 = fVar15 * local_res18 + local_res10;
    fStackX_14 = fVar15 * fStackX_1c + fStackX_14;
    fStack_c0 = this->DashLength;
    TVar9.field0_0x0._s_0.Y = fStack_c0;
    TVar9.field0_0x0._s_0.X = local_c4;
    fStack_d0 = fStackX_14 + param_4.field0_0x0._s_0.Y;
    local_d4 = local_res10 + param_4.field0_0x0._s_0.X;
    local_cc = 0x3f8000003f800000;
    TVar5.field0_0x0._s_0.Y = fStack_d0;
    TVar5.field0_0x0._s_0.X = local_d4;
    pFVar11 = FSlateVertex::Make(local_b8,this->RenderTransform,TVar5,
                                 (TVector2<float>)0x3f8000003f800000,TVar9,
                                 (FColor)(param_5->field0_0x0)._s_0,(FColor)0x0,param_6);
    FSlateRenderBatch::EmplaceVertex(pFVar2,pFVar11);
    local_d4 = local_res10 - param_4.field0_0x0._s_0.X;
    local_c4 = fVar15 + this->PositionAlongLine;
    fStack_c0 = this->DashLength;
    fStack_d0 = fStackX_14 - param_4.field0_0x0._s_0.Y;
    pFVar2 = this->RenderBatch;
    TVar10.field0_0x0._s_0.Y = fStack_c0;
    TVar10.field0_0x0._s_0.X = local_c4;
    TVar6.field0_0x0._s_0.Y = fStack_d0;
    TVar6.field0_0x0._s_0.X = local_d4;
    local_cc = 0x3f800000bf800000;
    pFVar11 = FSlateVertex::Make(local_b8,this->RenderTransform,TVar6,
                                 (TVector2<float>)0x3f800000bf800000,TVar10,
                                 (FColor)(param_5->field0_0x0)._s_0,(FColor)0x0,param_6);
    FSlateRenderBatch::EmplaceVertex(pFVar2,pFVar11);
    iVar1 = this->RenderBatch->NumVertices;
    `FLineBuilder::AddQuadIndices'::__l2::<lambda_1>::operator()
              (local_d8,this->RenderBatch,iVar1 + -3,iVar1 + -1,iVar1 + -2,iVar1 + -4);
  }
  return;
}

// MakeStartCap @ 1425153d0

void __thiscall
FLineBuilder::MakeStartCap
          (FLineBuilder *this,TVector2<float> param_1,TVector2<float> param_2,float param_3,
          TVector2<float> param_4,FColor *param_5,ESlateVertexRounding param_6)

{
  int iVar1;
  FSlateRenderBatch *pFVar2;
  TVector2<float> TVar3;
  TVector2<float> TVar4;
  TVector2<float> TVar5;
  TVector2<float> TVar6;
  TVector2<float> TVar7;
  TVector2<float> TVar8;
  TVector2<float> TVar9;
  TVector2<float> TVar10;
  FSlateVertex *pFVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_res10;
  float fStackX_14;
  float local_res18;
  float fStackX_1c;
  undefined1 local_c0 [8];
  FSlateVertex local_b8 [3];
  
  if (__real_322bcc77 < param_3) {
    pFVar2 = this->RenderBatch;
    fVar15 = this->LocalFilterRadius;
    if (param_3 * __real_3f000000 <= this->LocalFilterRadius) {
      fVar15 = param_3 * __real_3f000000;
    }
    fVar14 = fVar15 - this->LocalCapLength;
    local_res18 = param_2.field0_0x0._0_4_;
    fStackX_1c = param_2.field0_0x0._4_4_;
    local_res10 = param_1.field0_0x0._0_4_;
    fVar13 = fVar14 * local_res18 + local_res10;
    fStackX_14 = param_1.field0_0x0._4_4_;
    fVar12 = fVar14 * fStackX_1c + fStackX_14;
    TVar3.field0_0x0._s_0.Y = this->DashLength;
    TVar3.field0_0x0._s_0.X = fVar14 + this->PositionAlongLine;
    TVar7.field0_0x0._s_0.Y = fVar12 + param_4.field0_0x0._s_0.Y;
    TVar7.field0_0x0._s_0.X = fVar13 + param_4.field0_0x0._s_0.X;
    pFVar11 = FSlateVertex::Make(local_b8,this->RenderTransform,TVar7,
                                 (TVector2<float>)0xbf8000003f800000,TVar3,
                                 (FColor)(param_5->field0_0x0)._s_0,(FColor)0x0,param_6);
    FSlateRenderBatch::EmplaceVertex(pFVar2,pFVar11);
    pFVar2 = this->RenderBatch;
    TVar8.field0_0x0._s_0.Y = this->DashLength;
    TVar8.field0_0x0._s_0.X = fVar14 + this->PositionAlongLine;
    TVar4.field0_0x0._s_0.Y = fVar12 - param_4.field0_0x0._s_0.Y;
    TVar4.field0_0x0._s_0.X = fVar13 - param_4.field0_0x0._s_0.X;
    pFVar11 = FSlateVertex::Make(local_b8,this->RenderTransform,TVar4,
                                 (TVector2<float>)0xbf800000bf800000,TVar8,
                                 (FColor)(param_5->field0_0x0)._s_0,(FColor)0x0,param_6);
    FSlateRenderBatch::EmplaceVertex(pFVar2,pFVar11);
    pFVar2 = this->RenderBatch;
    local_res10 = fVar15 * local_res18 + local_res10;
    fStackX_14 = fVar15 * fStackX_1c + fStackX_14;
    TVar9.field0_0x0._s_0.Y = this->DashLength;
    TVar9.field0_0x0._s_0.X = fVar15 + this->PositionAlongLine;
    TVar5.field0_0x0._s_0.Y = fStackX_14 + param_4.field0_0x0._s_0.Y;
    TVar5.field0_0x0._s_0.X = local_res10 + param_4.field0_0x0._s_0.X;
    pFVar11 = FSlateVertex::Make(local_b8,this->RenderTransform,TVar5,(TVector2<float>)0x3f800000,
                                 TVar9,(FColor)(param_5->field0_0x0)._s_0,(FColor)0x0,param_6);
    FSlateRenderBatch::EmplaceVertex(pFVar2,pFVar11);
    pFVar2 = this->RenderBatch;
    TVar10.field0_0x0._s_0.Y = this->DashLength;
    TVar10.field0_0x0._s_0.X = fVar15 + this->PositionAlongLine;
    TVar6.field0_0x0._s_0.Y = fStackX_14 - param_4.field0_0x0._s_0.Y;
    TVar6.field0_0x0._s_0.X = local_res10 - param_4.field0_0x0._s_0.X;
    pFVar11 = FSlateVertex::Make(local_b8,this->RenderTransform,TVar6,(TVector2<float>)0xbf800000,
                                 TVar10,(FColor)(param_5->field0_0x0)._s_0,(FColor)0x0,param_6);
    FSlateRenderBatch::EmplaceVertex(pFVar2,pFVar11);
    iVar1 = this->RenderBatch->NumVertices;
    `FLineBuilder::AddQuadIndices'::__l2::<lambda_1>::operator()
              (local_c0,this->RenderBatch,iVar1 + -3,iVar1 + -1,iVar1 + -2,iVar1 + -4);
  }
  return;
}

// NumElements @ 142517240

void __thiscall
FLineBuilder::NumElements
          (FLineBuilder *this,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1
          ,uint *param_2,uint *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  TVector2<float>_u_0 TVar9;
  uint uVar10;
  TVector2<float>_u_0 TVar11;
  TVector2<float>_u_0 TVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_res8;
  float fStackX_c;
  float local_res10;
  float fStackX_14;
  float local_d8;
  float fStack_d4;
  
  uVar14 = 2;
  iVar3 = 2;
  if (__real_c1200000 != this->DashLength) {
    iVar3 = 4;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar15 = 1;
  uVar1 = *(undefined8 *)(param_1->AllocatorInstance).Data;
  if ((param_1->ArrayNum < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar5 = __real_3f800000;
  fVar4 = __real_322bcc77;
  uVar13 = *(undefined8 *)((param_1->AllocatorInstance).Data + 8);
  local_res8 = (float)uVar13;
  fStackX_c = (float)((ulonglong)uVar13 >> 0x20);
  local_res10 = (float)uVar1;
  local_res8 = local_res8 - local_res10;
  fStackX_14 = (float)((ulonglong)uVar1 >> 0x20);
  fStackX_c = fStackX_c - fStackX_14;
  fVar20 = SQRT(fStackX_c * fStackX_c + local_res8 * local_res8);
  TVar11 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  if (__real_322bcc77 < fVar20) {
    *param_2 = *param_2 + 4;
    *param_3 = *param_3 + 6;
    fVar17 = fVar5 / fVar20;
    TVar11._s_0.Y = fVar17 * fStackX_c;
    TVar11._s_0.X = fVar17 * local_res8;
  }
  uVar7 = __xmm_80000000800000008000000080000000;
  fVar17 = __real_3f000000;
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  lVar16 = (longlong)(param_1->ArrayNum + -1);
  TVar9 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  fVar21 = fVar20;
  if (1 < lVar16) {
    do {
      uVar10 = 0;
      if ((int)uVar14 < param_1->ArrayNum) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         TVar9 = UE::Math::TVector2<float>::ZeroVector.field0_0x0, bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar1 = *(undefined8 *)((param_1->AllocatorInstance).Data + lVar15 * 8 + 8);
      local_res8 = (float)uVar1;
      fStackX_c = (float)((ulonglong)uVar1 >> 0x20);
      local_res10 = (float)uVar13;
      local_res8 = local_res8 - local_res10;
      fStackX_14 = (float)((ulonglong)uVar13 >> 0x20);
      fStackX_c = fStackX_c - fStackX_14;
      fVar20 = SQRT(fStackX_c * fStackX_c + local_res8 * local_res8);
      TVar12 = TVar9;
      if (fVar4 < fVar20) {
        fVar18 = fVar5 / fVar20;
        TVar12._s_0.Y = fVar18 * fStackX_c;
        TVar12._s_0.X = fVar18 * local_res8;
      }
      local_d8 = TVar11._s_0.X;
      fStack_d4 = TVar11._s_0.Y;
      fStackX_14 = TVar12._s_0.Y;
      local_res10 = TVar12._s_0.X;
      fVar19 = local_d8 + local_res10;
      fVar22 = fStack_d4 + fStackX_14;
      fVar18 = fVar22 * fVar22 + fVar19 * fVar19;
      if (fVar18 <= fVar4) {
        fStack_d4 = (float)((uint)fStack_d4 ^ uVar7);
      }
      else {
        fStack_d4 = __real_3f800000 / SQRT(fVar18);
        local_d8 = fStack_d4 * fVar22;
        fStack_d4 = fStack_d4 * fVar19;
      }
      fVar18 = fVar21;
      if (fVar20 <= fVar21) {
        fVar18 = fVar20;
      }
      fVar19 = local_d8 * fStackX_14 + fStack_d4 * local_res10;
      if (((fVar18 <= fVar4) || (fVar19 < this->AngleCosineLimit)) ||
         (fVar18 * fVar17 * fVar19 <
          (float)((uint)(local_d8 * this->LocalHalfThickness * local_res10 +
                        fStack_d4 * (float)((uint)(this->LocalHalfThickness * fStackX_14) ^ uVar7))
                 & uVar6))) {
        if (fVar4 < fVar20) {
          *param_2 = *param_2 + 4;
          *param_3 = *param_3 + 0xc;
          TVar9 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        }
        if (fVar4 < fVar21) {
          *param_2 = *param_2 + 4;
          goto LAB_14251761e;
        }
      }
      else {
        *param_2 = *param_2 + iVar3;
LAB_14251761e:
        *param_3 = *param_3 + 6;
        TVar9 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 1;
      TVar11 = TVar12;
      uVar13 = uVar1;
      fVar21 = fVar20;
    } while (lVar15 < lVar16);
  }
  if (fVar4 < fVar20) {
    *param_2 = *param_2 + 4;
    *param_3 = *param_3 + 0xc;
  }
  return;
}

