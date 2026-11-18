// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FWorldPartitionDraw2DCanvas @ 148ab3eb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FWorldPartitionDraw2DCanvas * __thiscall
FWorldPartitionDraw2DCanvas::FWorldPartitionDraw2DCanvas
          (FWorldPartitionDraw2DCanvas *this,UCanvas *param_1)

{
  FCanvas *this_00;
  code *pcVar1;
  bool bVar2;
  FWorldPartitionDraw2DCanvas *pFVar3;
  FBatchedElements *pFVar4;
  FDepthFieldGlowInfo local_78;
  FDepthFieldGlowInfo local_40;
  
  this->Canvas = param_1;
  if (param_1 == (UCanvas *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Canvas",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionDraw2DContext.cpp"
                       ,0xe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FWorldPartitionDraw2DCanvas *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_78.bEnableGlow = 0;
  this_00 = this->Canvas->Canvas;
  local_78.GlowColor.field0_0x0._0_8_ = 0;
  local_78.GlowColor.field0_0x0._8_8_ = 0;
  local_78.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_78.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_78.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
  local_78.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
  pFVar4 = FCanvas::GetBatchedElements
                     (this_00,ET_Line,(FBatchedElementParameters *)0x0,(FTexture *)0x0,SE_BLEND_MAX,
                      &local_78,true);
  local_40._0_4_ = local_40._0_4_ & 0xfffffffe;
  this->CanvasLineBatchedElements = pFVar4;
  local_40.GlowColor.field0_0x0._0_8_ = 0;
  local_40.GlowColor.field0_0x0._8_8_ = 0;
  local_40.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_40.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_40.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
  local_40.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
  pFVar4 = FCanvas::GetBatchedElements
                     (this_00,ET_Triangle,(FBatchedElementParameters *)0x0,GWhiteTexture,
                      SE_BLEND_Translucent,&local_40,true);
  this->CanvasTriangleBatchedElements = pFVar4;
  return this;
}

// Draw @ 148ac76b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FWorldPartitionDraw2DCanvas::Draw
          (FWorldPartitionDraw2DCanvas *this,FWorldPartitionCanvasItems *param_1)

{
  uint uVar1;
  HHitProxy *pHVar2;
  FColor_u_0 FVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UFont *pUVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  FString *pFVar11;
  FScriptContainerElement *pFVar12;
  FString *pFVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  undefined1 local_res18 [8];
  FColor_u_0 local_res20 [2];
  float local_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  TVector4<float>_u_0 local_c8;
  TVector4<float>_u_0 local_b8;
  TVector4<float>_u_0 local_a8;
  FScriptContainerElement *local_98;
  FDepthFieldGlowInfo local_90;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId34,"FWorldPartitionDraw2DCanvas::Draw",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionDraw2DContext.cpp"
               ,0x22);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId34);
  }
  pHVar2 = (this->Canvas->Canvas->CurrentHitProxy).Reference;
  if (pHVar2 == (HHitProxy *)0x0) {
    local_res20[0].Bits = 0xffffffff;
  }
  else {
    local_res20[0] = (FColor_u_0)(pHVar2->Id).Index;
  }
  uVar1 = (param_1->Boxes).ArrayNum;
  uVar9 = (ulonglong)(int)uVar1;
  pFVar14 = (param_1->Boxes).AllocatorInstance.Data;
  local_98 = pFVar14 + uVar9 * 0x50;
  while( true ) {
    pFVar12 = local_98;
    FVar3 = local_res20[0];
    if ((param_1->Boxes).ArrayNum != (int)uVar9) {
      `TCheckedPointerIterator<FWorldPartitionCanvasBoxItem_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar14 == pFVar12) break;
    local_c8._s_0.X = (float)*(double *)&pFVar14[0x10].field_0x0;
    local_c8._s_0.Z = 0.0;
    local_c8._s_0.W = 1.0;
    local_c8._s_0.Y = (float)*(double *)(pFVar14 + 0x18);
    iVar4 = FBatchedElements::AddVertexf
                      (this->CanvasTriangleBatchedElements,(TVector4<float> *)&local_c8._s_0,
                       &UE::Math::TVector2<float>::ZeroVector,(FLinearColor *)pFVar14,
                       (FHitProxyId)FVar3._s_0);
    local_b8._s_0.X = (float)*(double *)&pFVar14[0x20].field_0x0;
    local_b8._s_0.Z = 0.0;
    local_b8._s_0.W = 1.0;
    local_b8._s_0.Y = (float)*(double *)(pFVar14 + 0x28);
    iVar5 = FBatchedElements::AddVertexf
                      (this->CanvasTriangleBatchedElements,(TVector4<float> *)&local_b8._s_0,
                       &UE::Math::TVector2<float>::ZeroVector,(FLinearColor *)pFVar14,
                       (FHitProxyId)FVar3._s_0);
    local_a8._s_0.X = (float)*(double *)&pFVar14[0x30].field_0x0;
    local_a8._s_0.Z = 0.0;
    local_a8._s_0.W = 1.0;
    local_a8._s_0.Y = (float)*(double *)(pFVar14 + 0x38);
    iVar6 = FBatchedElements::AddVertexf
                      (this->CanvasTriangleBatchedElements,(TVector4<float> *)&local_a8._s_0,
                       &UE::Math::TVector2<float>::ZeroVector,(FLinearColor *)pFVar14,
                       (FHitProxyId)FVar3._s_0);
    uStack_d0 = 0.0078125;
    fStack_d4 = (float)*(double *)(pFVar14 + 0x48);
    local_d8 = (float)*(double *)&pFVar14[0x40].field_0x0;
    iVar7 = FBatchedElements::AddVertexf
                      (this->CanvasTriangleBatchedElements,(TVector4<float> *)&local_d8,
                       &UE::Math::TVector2<float>::ZeroVector,(FLinearColor *)pFVar14,
                       (FHitProxyId)local_res20[0]._s_0);
    local_90._0_4_ = local_90._0_4_ & 0xfffffffe;
    local_90.GlowColor.field0_0x0._0_8_ = 0;
    local_90.GlowColor.field0_0x0._8_8_ = 0;
    local_90.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
    local_90.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
    local_90.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
    local_90.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
    FBatchedElements::AddTriangle
              (this->CanvasTriangleBatchedElements,iVar4,iVar5,iVar6,GWhiteTexture,
               SE_BLEND_Translucent,&local_90);
    local_90.bEnableGlow = 0;
    local_90.GlowColor.field0_0x0._0_8_ = 0;
    local_90.GlowColor.field0_0x0._8_8_ = 0;
    local_90.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
    local_90.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
    local_90.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
    local_90.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
    FBatchedElements::AddTriangle
              (this->CanvasTriangleBatchedElements,iVar6,iVar7,iVar4,GWhiteTexture,
               SE_BLEND_Translucent,&local_90);
    uVar9 = (ulonglong)uVar1;
    pFVar14 = pFVar14 + 0x50;
  }
  iVar4 = (param_1->Lines).ArrayNum;
  pFVar12 = (param_1->Lines).AllocatorInstance.Data;
  pFVar14 = pFVar12 + (longlong)iVar4 * 0x48;
  while( true ) {
    if ((param_1->Lines).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FWorldPartitionLineCanvasItem_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar12 == pFVar14) break;
    FBatchedElements::AddLine
              (this->CanvasLineBatchedElements,(TVector<double> *)(pFVar12 + 0x10),
               (TVector<double> *)(pFVar12 + 0x28),(FLinearColor *)pFVar12,(FHitProxyId)FVar3._s_0,
               *(float *)&pFVar12[0x40].field_0x0,0.0,false);
    pFVar12 = pFVar12 + 0x48;
  }
  uVar1 = (param_1->MultiLineTexts).ArrayNum;
  uVar9 = (ulonglong)(int)uVar1;
  pFVar12 = (param_1->MultiLineTexts).AllocatorInstance.Data;
  pFVar10 = pFVar12 + uVar9 * 0x20;
  pFVar14 = pFVar12 + 0x18;
  while( true ) {
    if ((param_1->MultiLineTexts).ArrayNum != (int)uVar9) {
      `TCheckedPointerIterator<FWorldPartitionCanvasMultiLineTextItem_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar12 == pFVar10) break;
    iVar4 = *(int *)pFVar14;
    _local_d8 = *(undefined8 *)pFVar12;
    uStack_d0 = *(undefined8 *)(pFVar12 + 8);
    pFVar13 = *(FString **)(pFVar14 + -8);
    pFVar11 = pFVar13 + (longlong)iVar4 * 2;
    while( true ) {
      if (*(int *)pFVar14 != iVar4) {
        `TCheckedPointerIterator<TTuple<FString,FLinearColor>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar13 == pFVar11) break;
      FLinearColor::ToFColorSRGB((FLinearColor *)(pFVar13 + 1));
      pUVar8 = UEngine::GetSmallFont();
      FWorldPartitionDebugHelper::DrawText
                (this->Canvas,pFVar13,pUVar8,(FColor *)&local_res20[0]._s_0,
                 (TVector2<double> *)&local_d8,(float *)0x0);
      pFVar13 = pFVar13 + 2;
    }
    pFVar12 = pFVar12 + 0x20;
    uVar9 = (ulonglong)uVar1;
    pFVar14 = pFVar14 + 0x20;
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PrepareDraw @ 148ad6650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FWorldPartitionDraw2DCanvas::PrepareDraw(FWorldPartitionDraw2DCanvas *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InLineCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionDraw2DContext.cpp"
                       ,0x16,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBoxCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionDraw2DContext.cpp"
                       ,0x17,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FBatchedElements::AddReserveLines(this->CanvasLineBatchedElements,param_1,false,false);
  FBatchedElements::AddReserveLines(this->CanvasLineBatchedElements,param_1,false,true);
  FBatchedElements::ReserveVertices(this->CanvasTriangleBatchedElements,param_2 * 4);
  FBatchedElements::AddReserveTriangles
            (this->CanvasTriangleBatchedElements,param_2 * 2,GWhiteTexture,SE_BLEND_Translucent);
  return;
}

