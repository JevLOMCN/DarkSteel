// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// AppendPoint @ 1425018d0

void __thiscall
FSplineBuilder::AppendPoint(FSplineBuilder *this,TVector2<float> param_1,FColor *param_2)

{
  int iVar1;
  TTransform2<float> *pTVar2;
  TVector2<float>_u_0 TVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_res10;
  float fStackX_14;
  float local_b8;
  float fStack_b4;
  FSlateVertex local_b0;
  float local_80;
  float fStack_7c;
  
  local_res10 = param_1.field0_0x0._0_4_;
  fStackX_14 = param_1.field0_0x0._4_4_;
  fStackX_14 = this->LastPointAdded[0].field0_0x0._s_0.Y - fStackX_14;
  local_res10 = local_res10 - this->LastPointAdded[0].field0_0x0._s_0.X;
  fVar9 = 0.0;
  fVar4 = local_res10 * local_res10 + fStackX_14 * fStackX_14;
  if (fVar4 <= __real_322bcc77) {
    fVar4 = 0.0;
    local_res10 = 0.0;
  }
  else {
    fVar4 = __real_3f800000 / SQRT(fVar4);
    local_res10 = fVar4 * local_res10;
    fVar4 = fVar4 * fStackX_14;
  }
  local_80 = fVar4;
  fStack_7c = local_res10;
  if (this->NumPointsAdded == 2) {
    local_b8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
    fStack_b4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
    local_b0.Color.field0_0x0._s_0 = param_2->field0_0x0;
    local_b0.TexCoords[2] = local_b8;
    fVar7 = this->HalfLineThickness * (this->LastNormal).field0_0x0._s_0.X;
    local_b0.TexCoords[0] = 1.0;
    local_b0.TexCoords[1] = 0.0;
    fVar8 = this->HalfLineThickness * (this->LastNormal).field0_0x0._s_0.Y;
    local_b0.TexCoords[3] = fStack_b4;
    fVar6 = fVar7 + this->LastPointAdded[1].field0_0x0._s_0.X;
    local_b0.SecondaryColor.field0_0x0.Bits = (FColor_u_0)0x0;
    fVar5 = fVar8 + this->LastPointAdded[1].field0_0x0._s_0.Y;
    pTVar2 = this->RenderTransform;
    local_b0.Position.field0_0x0._s_0.X =
         fVar5 * (pTVar2->M).M[1][0] + fVar6 * (pTVar2->M).M[0][0] +
         (pTVar2->Trans).field0_0x0._s_0.X;
    local_b0.Position.field0_0x0._s_0.Y =
         fVar5 * (pTVar2->M).M[1][1] + fVar6 * (pTVar2->M).M[0][1] +
         (pTVar2->Trans).field0_0x0._s_0.Y;
    FSlateRenderBatch::AddVertex(this->RenderBatch,&local_b0);
    pTVar2 = this->RenderTransform;
    fVar7 = this->LastPointAdded[1].field0_0x0._s_0.X - fVar7;
    fVar8 = this->LastPointAdded[1].field0_0x0._s_0.Y - fVar8;
    local_b8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
    fStack_b4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
    local_b0.Color.field0_0x0._s_0 = param_2->field0_0x0;
    local_b0.TexCoords[2] = local_b8;
    local_b0.TexCoords[0] = -1.0;
    local_b0.TexCoords[1] = 0.0;
    local_b0.SecondaryColor.field0_0x0.Bits = (FColor_u_0)0x0;
    local_b0.TexCoords[3] = fStack_b4;
    local_b0.Position.field0_0x0._s_0.X =
         fVar8 * (pTVar2->M).M[1][0] + fVar7 * (pTVar2->M).M[0][0] +
         (pTVar2->Trans).field0_0x0._s_0.X;
    local_b0.Position.field0_0x0._s_0.Y =
         fVar8 * (pTVar2->M).M[1][1] + fVar7 * (pTVar2->M).M[0][1] +
         (pTVar2->Trans).field0_0x0._s_0.Y;
    FSlateRenderBatch::AddVertex(this->RenderBatch,&local_b0);
  }
  if (1 < this->NumPointsAdded) {
    local_res10 = local_res10 + (this->LastNormal).field0_0x0._s_0.Y;
    fVar4 = fVar4 + (this->LastNormal).field0_0x0._s_0.X;
    fVar5 = (local_res10 * local_res10 + fVar4 * fVar4) * __real_3e800000;
    if (fVar5 <= __real_322bcc77) {
      fVar4 = 0.0;
    }
    else {
      fVar9 = __real_3f800000 / SQRT(fVar5);
      fVar4 = fVar9 * fVar4 * __real_3f000000;
      fVar9 = fVar9 * local_res10 * __real_3f000000;
    }
    pTVar2 = this->RenderTransform;
    fVar4 = fVar4 * this->HalfLineThickness;
    local_b8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
    fVar9 = fVar9 * this->HalfLineThickness;
    local_b0.Color.field0_0x0._s_0 = param_2->field0_0x0;
    fStack_b4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
    fVar7 = fVar4 + this->LastPointAdded[0].field0_0x0._s_0.X;
    local_b0.TexCoords[2] = local_b8;
    fVar5 = fVar9 + this->LastPointAdded[0].field0_0x0._s_0.Y;
    local_b0.TexCoords[3] = fStack_b4;
    local_b0.TexCoords[0] = 1.0;
    local_b0.TexCoords[1] = 0.0;
    local_b0.SecondaryColor.field0_0x0.Bits = (FColor_u_0)0x0;
    local_b0.Position.field0_0x0._s_0.X =
         fVar5 * (pTVar2->M).M[1][0] + fVar7 * (pTVar2->M).M[0][0] +
         (pTVar2->Trans).field0_0x0._s_0.X;
    local_b0.Position.field0_0x0._s_0.Y =
         fVar5 * (pTVar2->M).M[1][1] + fVar7 * (pTVar2->M).M[0][1] +
         (pTVar2->Trans).field0_0x0._s_0.Y;
    FSlateRenderBatch::AddVertex(this->RenderBatch,&local_b0);
    pTVar2 = this->RenderTransform;
    fVar4 = this->LastPointAdded[0].field0_0x0._s_0.X - fVar4;
    fVar9 = this->LastPointAdded[0].field0_0x0._s_0.Y - fVar9;
    local_b8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
    fStack_b4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
    local_b0.Color.field0_0x0._s_0 = param_2->field0_0x0;
    local_b0.TexCoords[2] = local_b8;
    local_b0.TexCoords[0] = -1.0;
    local_b0.TexCoords[1] = 0.0;
    local_b0.SecondaryColor.field0_0x0.Bits = (FColor_u_0)0x0;
    local_b0.TexCoords[3] = fStack_b4;
    local_b0.Position.field0_0x0._s_0.X =
         fVar9 * (pTVar2->M).M[1][0] + fVar4 * (pTVar2->M).M[0][0] +
         (pTVar2->Trans).field0_0x0._s_0.X;
    local_b0.Position.field0_0x0._s_0.Y =
         fVar9 * (pTVar2->M).M[1][1] + fVar4 * (pTVar2->M).M[0][1] +
         (pTVar2->Trans).field0_0x0._s_0.Y;
    FSlateRenderBatch::AddVertex(this->RenderBatch,&local_b0);
    iVar1 = this->RenderBatch->NumVertices;
    FSlateRenderBatch::AddIndex(this->RenderBatch,iVar1 - 3);
    FSlateRenderBatch::AddIndex(this->RenderBatch,iVar1 - 4);
    FSlateRenderBatch::AddIndex(this->RenderBatch,iVar1 - 2);
    FSlateRenderBatch::AddIndex(this->RenderBatch,iVar1 - 3);
    FSlateRenderBatch::AddIndex(this->RenderBatch,iVar1 - 2);
    FSlateRenderBatch::AddIndex(this->RenderBatch,iVar1 - 1);
  }
  TVar3 = this->LastPointAdded[0].field0_0x0;
  this->NumPointsAdded = this->NumPointsAdded + 1;
  this->LastPointAdded[1].field0_0x0 = TVar3;
  TVar3._s_0.Y = fStack_7c;
  TVar3._s_0.X = local_80;
  (this->LastNormal).field0_0x0 = TVar3;
  this->LastPointAdded[0].field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_1.field0_0x0;
  return;
}

// BuildBezierGeometry_WithColorGradient @ 1425020d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSplineBuilder::BuildBezierGeometry_WithColorGradient
          (FSplineBuilder *this,TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,TVector2<float> param_3,TVector2<float> param_4,TVector2<float> param_5,
          TVector2<float> param_6,FSlateElementBatcher *param_7)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TVector2<float> TVar3;
  TVector2<float> TVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FColor FVar12;
  undefined4 extraout_var;
  TVector2<float>_u_0 TVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined1 auStackY_138 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  FLinearColor_u_0 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  ulonglong local_98;
  
  fVar5 = __real_3f800000;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_138;
  iVar14 = param_1->ArrayNum;
  iVar10 = iVar14 - param_2;
  local_d8._8_8_ = this;
  if (param_2 < iVar14 + -1) {
    local_d8._0_8_ = param_6.field0_0x0;
    uVar7 = local_d8._0_8_;
    local_d8._s_0.G = param_6.field0_0x0._4_4_;
    uVar8 = local_d8._s_0.G;
    local_d8._s_0.R = param_6.field0_0x0._0_4_;
    uVar6 = local_d8._s_0.R;
    TVar13 = param_3.field0_0x0;
    local_d8._0_8_ = uVar7;
    do {
      fVar16 = fVar5 / (float)iVar10;
      local_b8._0_4_ = param_5.field0_0x0._0_4_;
      local_c8._0_4_ = param_4.field0_0x0._0_4_;
      local_c8._4_4_ = param_4.field0_0x0._4_4_;
      local_c0._4_4_ = TVar13._s_0.Y;
      local_c0._0_4_ = TVar13._s_0.X;
      uVar11 = 0;
      if (param_2 < iVar14) {
        uVar11 = (uint)~param_2 >> 0x1f;
      }
      local_e0._0_4_ = ((float)uVar6 - (float)local_b8) * fVar16 + (float)local_b8;
      fVar15 = ((float)local_b8 - (float)local_c8) * fVar16 + (float)local_c8;
      local_b8._4_4_ = param_5.field0_0x0._4_4_;
      local_a0 = ((float)local_c8 - (float)local_c0) * fVar16 + (float)local_c0;
      fStack_9c = (local_c8._4_4_ - local_c0._4_4_) * fVar16 + local_c0._4_4_;
      local_c8._4_4_ = (local_b8._4_4_ - local_c8._4_4_) * fVar16 + local_c8._4_4_;
      local_e8._0_4_ = ((float)(undefined4)local_e0 - fVar15) * fVar16 + fVar15;
      local_e0._4_4_ = ((float)uVar8 - local_b8._4_4_) * fVar16 + local_b8._4_4_;
      fStack_a4 = (local_c8._4_4_ - fStack_9c) * fVar16 + fStack_9c;
      local_a8 = (fVar15 - local_a0) * fVar16 + local_a0;
      local_e8._4_4_ = ((float)local_e0._4_4_ - local_c8._4_4_) * fVar16 + local_c8._4_4_;
      local_b0 = ((float)(undefined4)local_e8 - local_a8) * fVar16 + local_a8;
      fStack_ac = ((float)local_e8._4_4_ - fStack_a4) * fVar16 + fStack_a4;
      local_c8 = param_4.field0_0x0;
      local_c0 = TVar13;
      local_b8 = param_5.field0_0x0;
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar11 = 0;
      if ((int)(param_2 - 1U) < param_1->ArrayNum) {
        uVar11 = (uint)-param_2 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      param_3.field0_0x0._s_0.Y = fStack_ac;
      param_3.field0_0x0._s_0.X = local_b0;
      TVar3.field0_0x0._s_0.Y = fStack_a4;
      TVar3.field0_0x0._s_0.X = local_a8;
      TVar4.field0_0x0._s_0.Y = fStack_9c;
      TVar4.field0_0x0._s_0.X = local_a0;
      Subdivide_WithColorGradient
                ((FLinearColor *)
                 ((param_1->AllocatorInstance).Data + ((longlong)(int)(param_2 - 1U) * 3 + 1) * 8),
                 (FLinearColor *)(pFVar1 + (longlong)param_2 * 0x18 + 8),param_7,
                 (TVector2<float>)TVar13._s_0,TVar4,TVar3,param_3,this,fVar5);
      iVar14 = param_1->ArrayNum;
      param_2 = param_2 + 1;
      iVar10 = iVar14 - param_2;
      param_4.field0_0x0 = local_e8;
      param_5.field0_0x0 = local_e0;
      TVar13 = param_3.field0_0x0;
    } while (param_2 < iVar14 + -1);
  }
  uVar11 = 0;
  if (param_2 < iVar14) {
    uVar11 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  uVar11 = 0;
  if ((int)(param_2 - 1U) < param_1->ArrayNum) {
    uVar11 = ~(param_2 - 1U) >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  Subdivide_WithColorGradient
            ((FLinearColor *)
             ((param_1->AllocatorInstance).Data + ((longlong)(int)(param_2 - 1) * 3 + 1) * 8),
             (FLinearColor *)(pFVar1 + (longlong)param_2 * 0x18 + 8),param_7,param_3,param_4,param_5
             ,param_6,(FSplineBuilder *)local_d8._8_8_,fVar5);
  uVar11 = 0;
  if (param_2 < param_1->ArrayNum) {
    uVar11 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar12 = FSlateElementBatcher::PackVertexColor(param_7,(FLinearColor *)&local_d8._s_0);
  Finish((FSplineBuilder *)local_d8._8_8_,param_6,(FColor *)CONCAT44(extraout_var,FVar12.field0_0x0)
        );
  return;
}

// ComputeCurviness @ 142504f70

float __cdecl
FSplineBuilder::ComputeCurviness
          (TVector2<float> param_1,TVector2<float> param_2,TVector2<float> param_3,
          TVector2<float> param_4)

{
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined4 local_res20;
  undefined4 uStackX_24;
  
  local_res18 = param_3.field0_0x0._0_4_;
  uStackX_1c = param_3.field0_0x0._4_4_;
  uStackX_24 = param_4.field0_0x0._4_4_;
  uStackX_14 = param_2.field0_0x0._4_4_;
  local_res8 = param_1.field0_0x0._0_4_;
  local_res10 = param_2.field0_0x0._0_4_;
  local_res20 = param_4.field0_0x0._0_4_;
  uStackX_c = param_1.field0_0x0._4_4_;
  return (float)((uint)((local_res20 + local_res10) - local_res18 * __real_40000000) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) +
         (float)((uint)((uStackX_24 + uStackX_14) - uStackX_1c * __real_40000000) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) +
         (float)((uint)((local_res8 + local_res18) - local_res10 * __real_40000000) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) +
         (float)((uint)((uStackX_c + uStackX_1c) - uStackX_14 * __real_40000000) &
                __xmm_7fffffff7fffffff7fffffff7fffffff);
}

// Finish @ 14250ae50

void __thiscall FSplineBuilder::Finish(FSplineBuilder *this,TVector2<float> param_1,FColor *param_2)

{
  int iVar1;
  TTransform2<float> *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_68;
  float fStack_64;
  FSlateVertex local_60 [2];
  
  if (this->NumPointsAdded < 3) {
    AppendPoint(this,param_1,param_2);
    return;
  }
  local_68 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
  fStack_64 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
  local_60[0].Color.field0_0x0._s_0 = param_2->field0_0x0;
  local_60[0].TexCoords[2] = local_68;
  fVar5 = this->HalfLineThickness * (this->LastNormal).field0_0x0._s_0.X;
  local_60[0].TexCoords[0] = 1.0;
  local_60[0].TexCoords[1] = 0.0;
  fVar6 = this->HalfLineThickness * (this->LastNormal).field0_0x0._s_0.Y;
  local_60[0].TexCoords[3] = fStack_64;
  fVar4 = fVar5 + this->LastPointAdded[0].field0_0x0._s_0.X;
  local_60[0].SecondaryColor.field0_0x0.Bits = (FColor_u_0)0x0;
  fVar3 = fVar6 + this->LastPointAdded[0].field0_0x0._s_0.Y;
  pTVar2 = this->RenderTransform;
  local_60[0].Position.field0_0x0._0_4_ =
       fVar3 * (pTVar2->M).M[1][0] + fVar4 * (pTVar2->M).M[0][0] + (pTVar2->Trans).field0_0x0._s_0.X
  ;
  local_60[0].Position.field0_0x0._4_4_ =
       fVar3 * (pTVar2->M).M[1][1] + fVar4 * (pTVar2->M).M[0][1] + (pTVar2->Trans).field0_0x0._s_0.Y
  ;
  FSlateRenderBatch::AddVertex(this->RenderBatch,local_60);
  pTVar2 = this->RenderTransform;
  fVar5 = this->LastPointAdded[0].field0_0x0._s_0.X - fVar5;
  fVar6 = this->LastPointAdded[0].field0_0x0._s_0.Y - fVar6;
  local_68 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
  fStack_64 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
  local_60[0].Color.field0_0x0._s_0 = param_2->field0_0x0;
  local_60[0].TexCoords[2] = local_68;
  local_60[0].TexCoords[0] = -1.0;
  local_60[0].TexCoords[1] = 0.0;
  local_60[0].TexCoords[3] = fStack_64;
  local_60[0].SecondaryColor.field0_0x0.Bits = (FColor_u_0)0x0;
  local_60[0].Position.field0_0x0._0_4_ =
       fVar6 * (pTVar2->M).M[1][0] + fVar5 * (pTVar2->M).M[0][0] + (pTVar2->Trans).field0_0x0._s_0.X
  ;
  local_60[0].Position.field0_0x0._4_4_ =
       fVar6 * (pTVar2->M).M[1][1] + fVar5 * (pTVar2->M).M[0][1] + (pTVar2->Trans).field0_0x0._s_0.Y
  ;
  FSlateRenderBatch::AddVertex(this->RenderBatch,local_60);
  iVar1 = this->RenderBatch->NumVertices;
  FSlateRenderBatch::AddIndex(this->RenderBatch,iVar1 - 3);
  FSlateRenderBatch::AddIndex(this->RenderBatch,iVar1 - 4);
  FSlateRenderBatch::AddIndex(this->RenderBatch,iVar1 - 2);
  FSlateRenderBatch::AddIndex(this->RenderBatch,iVar1 - 3);
  FSlateRenderBatch::AddIndex(this->RenderBatch,iVar1 - 2);
  FSlateRenderBatch::AddIndex(this->RenderBatch,iVar1 - 1);
  return;
}

// Subdivide @ 14251fde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FSplineBuilder::Subdivide
          (TVector2<float> param_1,TVector2<float> param_2,TVector2<float> param_3,
          TVector2<float> param_4,FSplineBuilder *param_5,float param_6)

{
  float fVar1;
  undefined1 auStackY_88 [32];
  TVector2<float>_u_0 local_58;
  TVector2<float>_u_0 local_50;
  TVector2<float>_u_0 local_48;
  TVector2<float>_u_0 local_40;
  TVector2<float>_u_0 local_38;
  TVector2<float>_u_0 local_30;
  TVector2<float>_u_0 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_88;
  fVar1 = ComputeCurviness(param_1,param_2,param_3,param_4);
  while (param_6 < fVar1) {
    deCasteljauSplit(param_1,param_2,param_3,param_4,(TVector2<float> *)&local_58._s_0);
    param_1.field0_0x0 = local_40;
    Subdivide((TVector2<float>)local_58._s_0,(TVector2<float>)local_50._s_0,
              (TVector2<float>)local_48._s_0,(TVector2<float>)local_40._s_0,param_5,param_6);
    param_4.field0_0x0 = local_28;
    param_3.field0_0x0 = local_30;
    param_2.field0_0x0 = local_38;
    fVar1 = ComputeCurviness(param_1,(TVector2<float>)local_38._s_0,(TVector2<float>)local_30._s_0,
                             (TVector2<float>)local_28._s_0);
  }
  AppendPoint(param_5,param_4,&param_5->SingleColor);
  return;
}

// Subdivide_WithColorGradient @ 14251fef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl
FSplineBuilder::Subdivide_WithColorGradient
          (FLinearColor *param_1,FLinearColor *param_2,FSlateElementBatcher *param_3,
          TVector2<float> param_4,TVector2<float> param_5,TVector2<float> param_6,
          TVector2<float> param_7,FSplineBuilder *param_8,float param_9)

{
  FColor FVar1;
  undefined4 extraout_var;
  float fVar2;
  undefined1 auStackY_c8 [32];
  undefined1 local_78 [24];
  TVector2<float>_u_0 local_60;
  TVector2<float>_u_0 local_58;
  TVector2<float>_u_0 local_50;
  TVector2<float>_u_0 local_48;
  TVector2<float>_u_0 local_40;
  TVector2<float>_u_0 local_38;
  TVector2<float>_u_0 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  fVar2 = ComputeCurviness(param_4,param_5,param_6,param_7);
  if (fVar2 <= param_9) {
    FVar1 = FSlateElementBatcher::PackVertexColor(param_3,(FLinearColor *)local_78);
    AppendPoint(param_8,param_7,(FColor *)CONCAT44(extraout_var,FVar1.field0_0x0));
  }
  else {
    deCasteljauSplit(param_4,param_5,param_6,param_7,(TVector2<float> *)&local_60._s_0);
    FLinearColor::LerpUsingHSV((FLinearColor *)(local_78 + 8),param_1,param_2,__real_3f000000);
    Subdivide_WithColorGradient
              (param_1,(FLinearColor *)(local_78 + 8),param_3,(TVector2<float>)local_60,
               (TVector2<float>)local_58,(TVector2<float>)local_50,(TVector2<float>)local_48,param_8
               ,param_9);
    Subdivide_WithColorGradient
              ((FLinearColor *)(local_78 + 8),param_2,param_3,(TVector2<float>)local_48,
               (TVector2<float>)local_40,(TVector2<float>)local_38,(TVector2<float>)local_30,param_8
               ,param_9);
  }
  return;
}

// deCasteljauSplit @ 142524ad0

void __cdecl
FSplineBuilder::deCasteljauSplit
          (TVector2<float> param_1,TVector2<float> param_2,TVector2<float> param_3,
          TVector2<float> param_4,TVector2<float> *param_5)

{
  TVector2<float> TVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  fVar2 = __real_3f000000;
  local_res18._0_4_ = param_3.field0_0x0._0_4_;
  local_res20._0_4_ = param_4.field0_0x0._0_4_;
  local_res10._0_4_ = param_2.field0_0x0._0_4_;
  fVar3 = (float)(undefined4)local_res20 + (float)(undefined4)local_res18;
  local_res8._0_4_ = param_1.field0_0x0._0_4_;
  fVar4 = (float)(undefined4)local_res8 + (float)(undefined4)local_res10;
  local_res8._4_4_ = param_1.field0_0x0._4_4_;
  local_res10._4_4_ = param_2.field0_0x0._4_4_;
  fVar5 = (float)local_res8._4_4_ + (float)local_res10._4_4_;
  local_res20._4_4_ = param_4.field0_0x0._4_4_;
  local_res8._0_4_ = fVar4 * __real_3f000000;
  (param_5->field0_0x0)._s_0 = (TVector2<float>_u_0_s_0)param_1;
  param_5[6].field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_4.field0_0x0;
  local_res8._4_4_ = fVar5 * fVar2;
  local_res18._4_4_ = param_3.field0_0x0._4_4_;
  fVar6 = (float)local_res20._4_4_ + (float)local_res18._4_4_;
  param_5[1].field0_0x0 = local_res8;
  local_res20._4_4_ =
       (fVar6 + (float)local_res18._4_4_ + (float)local_res10._4_4_) * __real_3e800000;
  local_res20._0_4_ =
       (fVar3 + (float)(undefined4)local_res18 + (float)(undefined4)local_res10) * __real_3e800000;
  local_res10._4_4_ =
       ((float)local_res18._4_4_ + (float)local_res10._4_4_ + fVar5) * __real_3e800000;
  local_res10._0_4_ =
       ((float)(undefined4)local_res18 + (float)(undefined4)local_res10 + fVar4) * __real_3e800000;
  param_5[2].field0_0x0 = local_res10;
  local_res18._4_4_ = ((float)local_res20._4_4_ + (float)local_res10._4_4_) * fVar2;
  local_res18._0_4_ = ((float)(undefined4)local_res20 + (float)(undefined4)local_res10) * fVar2;
  param_5[3].field0_0x0 = local_res18;
  param_5[4].field0_0x0 = local_res20;
  TVar1.field0_0x0._s_0.Y = fVar6 * fVar2;
  TVar1.field0_0x0._s_0.X = fVar3 * fVar2;
  param_5[5].field0_0x0 = TVar1.field0_0x0;
  return;
}

