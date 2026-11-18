// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FShaderPrintSetup @ 145576140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderPrintSetup * __thiscall
ShaderPrint::FShaderPrintSetup::FShaderPrintSetup(FShaderPrintSetup *this,FSceneView *param_1)

{
  int iVar1;
  double dVar2;
  TIntPoint<int>_u_0 TVar3;
  TIntPoint<int>_u_0 TVar4;
  undefined8 uVar5;
  TConsoleVariableData<int> *pTVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  EShaderPlatform EVar9;
  undefined4 uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  
  this->bEnabled = false;
  *(undefined4 *)((longlong)&(this->ViewRect).field0_0x0 + 8) = 1;
  lVar15 = 0;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  *(undefined4 *)((longlong)&(this->ViewRect).field0_0x0 + 0xc) = 1;
  (this->CursorCoord).field0_0x0 = (TIntPoint<int>_u_0)0xffffffffffffffff;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreViewTranslation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreViewTranslation).field0_0x0._s_0.Y = (double)uVar5;
  (this->PreViewTranslation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->DPIScale = 1.0;
  (this->FontSize).field0_0x0._s_0.X = 1;
  (this->FontSize).field0_0x0._s_0.Y = 1;
  (this->FontSpacing).field0_0x0._s_0.X = 1;
  *(undefined8 *)((longlong)&(this->FontSpacing).field0_0x0 + 4) = 1;
  this->MaxStateCount = 0;
  this->MaxLineCount = 0;
  uVar14 = 0;
  this->MaxTriangleCount = 0;
  this->bIsDrawLocked = false;
  if (GEnabled == 0) {
LAB_1455761dd:
    bVar8 = false;
  }
  else {
    EVar9 = FSceneView::GetShaderPlatform(param_1);
    bVar8 = ShaderPrint::IsSupported(EVar9);
    if ((!bVar8) || ((param_1->Family->EngineShowFlags).ShaderPrint == 0)) goto LAB_1455761dd;
    bVar8 = true;
  }
  this->bEnabled = bVar8;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->UnconstrainedViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->UnconstrainedViewRect).field0_0x0._s_0.Max.field0_0x0;
  (this->CursorCoord).field0_0x0 = (param_1->CursorPos).field0_0x0;
  dVar2 = (param_1->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  (this->PreViewTranslation).field0_0x0._s_0.X =
       (param_1->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  (this->PreViewTranslation).field0_0x0._s_0.Y = dVar2;
  (this->PreViewTranslation).field0_0x0._s_0.Z =
       (param_1->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  this->DPIScale = param_1->Family->DebugDPIScale;
  pTVar6 = CVarFontSize.Ref;
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_145576249:
    lVar11 = lVar15;
  }
  else {
    bVar8 = IsInGameThread();
    lVar11 = 4;
    if (bVar8) goto LAB_145576249;
  }
  pTVar7 = CVarFontSize.Ref;
  iVar16 = *(int *)((longlong)pTVar6->ShadowedValue + lVar11);
  iVar1 = 1;
  if (1 < iVar16) {
    iVar1 = iVar16;
  }
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_145576275:
    lVar11 = lVar15;
  }
  else {
    bVar8 = IsInGameThread();
    lVar11 = 4;
    if (bVar8) goto LAB_145576275;
  }
  uVar10 = 1;
  if (1 < *(int *)((longlong)pTVar7->ShadowedValue + lVar11)) {
    uVar10 = *(undefined4 *)((longlong)pTVar7->ShadowedValue + lVar11);
  }
  TVar3._s_0.Y = iVar1;
  TVar3._s_0.X = uVar10;
  (this->FontSize).field0_0x0 = TVar3;
  pTVar6 = CVarFontSpacingY.Ref;
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_1455762b1:
    lVar11 = lVar15;
  }
  else {
    bVar8 = IsInGameThread();
    lVar11 = 4;
    if (bVar8) goto LAB_1455762b1;
  }
  pTVar7 = CVarFontSpacingX.Ref;
  iVar16 = *(int *)((longlong)pTVar6->ShadowedValue + lVar11);
  iVar1 = 1;
  if (1 < iVar16) {
    iVar1 = iVar16;
  }
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_1455762dd:
    lVar11 = lVar15;
  }
  else {
    bVar8 = IsInGameThread();
    lVar11 = 4;
    if (bVar8) goto LAB_1455762dd;
  }
  iVar16 = 1;
  if (1 < *(int *)((longlong)pTVar7->ShadowedValue + lVar11)) {
    iVar16 = *(int *)((longlong)pTVar7->ShadowedValue + lVar11);
  }
  TVar4._s_0.Y = iVar1;
  TVar4._s_0.X = iVar16;
  (this->FontSpacing).field0_0x0 = TVar4;
  pTVar6 = CVarMaxCharacterCount.Ref;
  uVar13 = uVar14;
  if (this->bEnabled != false) {
    bVar8 = IsInParallelGameThread();
    if (bVar8) {
LAB_14557631b:
      lVar11 = lVar15;
    }
    else {
      bVar8 = IsInGameThread();
      lVar11 = 4;
      if (bVar8) goto LAB_14557631b;
    }
    uVar12 = *(int *)((longlong)pTVar6->ShadowedValue + lVar11) +
             GCachedShaderPrintMaxRequest.CharacterCount;
    if (0 < (int)uVar12) {
      uVar13 = uVar12;
    }
  }
  this->MaxCharacterCount = uVar13;
  pTVar6 = CVarMaxWidgetCount.Ref;
  uVar13 = 0;
  if (this->bEnabled != false) {
    bVar8 = IsInParallelGameThread();
    if (bVar8) {
LAB_145576356:
      lVar11 = lVar15;
    }
    else {
      bVar8 = IsInGameThread();
      lVar11 = 4;
      if (bVar8) goto LAB_145576356;
    }
    uVar12 = *(int *)((longlong)pTVar6->ShadowedValue + lVar11) +
             GCachedShaderPrintMaxRequest.WidgetCount;
    uVar13 = uVar14;
    if (0 < (int)uVar12) {
      uVar13 = uVar12;
    }
  }
  this->MaxStateCount = uVar13;
  pTVar6 = CVarMaxLineCount.Ref;
  uVar13 = 0;
  if (this->bEnabled == false) goto LAB_1455763a8;
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_145576390:
    lVar11 = lVar15;
  }
  else {
    bVar8 = IsInGameThread();
    lVar11 = 4;
    if (bVar8) goto LAB_145576390;
  }
  uVar12 = *(int *)((longlong)pTVar6->ShadowedValue + lVar11) +
           GCachedShaderPrintMaxRequest.LineCount;
  uVar13 = uVar14;
  if (0 < (int)uVar12) {
    uVar13 = uVar12;
  }
LAB_1455763a8:
  this->MaxLineCount = uVar13;
  pTVar6 = CVarMaxTriangleCount.Ref;
  if (this->bEnabled != false) {
    bVar8 = IsInParallelGameThread();
    if ((bVar8) || (bVar8 = IsInGameThread(), lVar11 = 4, bVar8)) {
      lVar11 = lVar15;
    }
    uVar13 = *(int *)((longlong)pTVar6->ShadowedValue + lVar11) +
             GCachedShaderPrintMaxRequest.TriangleCount;
    uVar14 = 0;
    if (0 < (int)uVar13) {
      uVar14 = uVar13;
    }
  }
  this->MaxTriangleCount = uVar14;
  if (param_1->State == (FSceneViewStateInterface *)0x0) {
    this->bIsDrawLocked = false;
  }
  else {
    this->bIsDrawLocked = SUB81(param_1->State[0x2ab]._padding_,0);
  }
  return this;
}

// FShaderPrintSetup @ 145576420

FShaderPrintSetup * __thiscall
ShaderPrint::FShaderPrintSetup::FShaderPrintSetup(FShaderPrintSetup *this,TIntRect<int> *param_1)

{
  int iVar1;
  int iVar2;
  TIntPoint<int>_u_0 TVar3;
  TIntPoint<int>_u_0 TVar4;
  undefined8 uVar5;
  TConsoleVariableData<int> *pTVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  undefined4 uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  
  this->bEnabled = false;
  *(undefined4 *)((longlong)&(this->ViewRect).field0_0x0 + 8) = 1;
  lVar15 = 0;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  *(undefined4 *)((longlong)&(this->ViewRect).field0_0x0 + 0xc) = 1;
  (this->CursorCoord).field0_0x0 = (TIntPoint<int>_u_0)0xffffffffffffffff;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreViewTranslation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreViewTranslation).field0_0x0._s_0.Y = (double)uVar5;
  (this->PreViewTranslation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->FontSize).field0_0x0._s_0.X = 1;
  (this->FontSize).field0_0x0._s_0.Y = 1;
  (this->FontSpacing).field0_0x0._s_0.X = 1;
  *(undefined8 *)((longlong)&(this->FontSpacing).field0_0x0 + 4) = 1;
  this->MaxStateCount = 0;
  this->MaxLineCount = 0;
  uVar14 = 0;
  this->MaxTriangleCount = 0;
  this->bIsDrawLocked = false;
  this->DPIScale = 1.0;
  this->bEnabled = GEnabled != 0;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (param_1->field0_0x0)._s_0.Min.field0_0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (param_1->field0_0x0)._s_0.Max.field0_0x0;
  pTVar6 = CVarFontSize.Ref;
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_1455764c7:
    lVar10 = lVar15;
  }
  else {
    bVar8 = IsInGameThread();
    lVar10 = 4;
    if (bVar8) goto LAB_1455764c7;
  }
  pTVar7 = CVarFontSize.Ref;
  iVar1 = *(int *)((longlong)pTVar6->ShadowedValue + lVar10);
  iVar2 = 1;
  if (1 < iVar1) {
    iVar2 = iVar1;
  }
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_1455764f3:
    lVar10 = lVar15;
  }
  else {
    bVar8 = IsInGameThread();
    lVar10 = 4;
    if (bVar8) goto LAB_1455764f3;
  }
  uVar9 = 1;
  if (1 < *(int *)((longlong)pTVar7->ShadowedValue + lVar10)) {
    uVar9 = *(undefined4 *)((longlong)pTVar7->ShadowedValue + lVar10);
  }
  TVar3._s_0.Y = iVar2;
  TVar3._s_0.X = uVar9;
  (this->FontSize).field0_0x0 = TVar3;
  pTVar6 = CVarFontSpacingY.Ref;
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_14557652f:
    lVar10 = lVar15;
  }
  else {
    bVar8 = IsInGameThread();
    lVar10 = 4;
    if (bVar8) goto LAB_14557652f;
  }
  pTVar7 = CVarFontSpacingX.Ref;
  iVar1 = *(int *)((longlong)pTVar6->ShadowedValue + lVar10);
  iVar2 = 1;
  if (1 < iVar1) {
    iVar2 = iVar1;
  }
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_14557655b:
    lVar10 = lVar15;
  }
  else {
    bVar8 = IsInGameThread();
    lVar10 = 4;
    if (bVar8) goto LAB_14557655b;
  }
  uVar9 = 1;
  if (1 < *(int *)((longlong)pTVar7->ShadowedValue + lVar10)) {
    uVar9 = *(undefined4 *)((longlong)pTVar7->ShadowedValue + lVar10);
  }
  TVar4._s_0.Y = iVar2;
  TVar4._s_0.X = uVar9;
  (this->FontSpacing).field0_0x0 = TVar4;
  pTVar6 = CVarMaxCharacterCount.Ref;
  uVar13 = uVar14;
  if (this->bEnabled != false) {
    bVar8 = IsInParallelGameThread();
    if (bVar8) {
LAB_145576599:
      lVar10 = lVar15;
    }
    else {
      bVar8 = IsInGameThread();
      lVar10 = 4;
      if (bVar8) goto LAB_145576599;
    }
    uVar11 = *(int *)((longlong)pTVar6->ShadowedValue + lVar10) +
             GCachedShaderPrintMaxRequest.CharacterCount;
    if (0 < (int)uVar11) {
      uVar13 = uVar11;
    }
  }
  this->MaxCharacterCount = uVar13;
  pTVar6 = CVarMaxWidgetCount.Ref;
  uVar11 = 0;
  uVar13 = uVar11;
  if (this->bEnabled != false) {
    bVar8 = IsInParallelGameThread();
    if (bVar8) {
LAB_1455765d4:
      lVar10 = lVar15;
    }
    else {
      bVar8 = IsInGameThread();
      lVar10 = 4;
      if (bVar8) goto LAB_1455765d4;
    }
    uVar12 = *(int *)((longlong)pTVar6->ShadowedValue + lVar10) +
             GCachedShaderPrintMaxRequest.WidgetCount;
    uVar13 = uVar14;
    if (0 < (int)uVar12) {
      uVar13 = uVar12;
    }
  }
  this->MaxStateCount = uVar13;
  pTVar6 = CVarMaxLineCount.Ref;
  uVar13 = uVar11;
  if (this->bEnabled == false) goto LAB_145576627;
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_14557660f:
    lVar10 = lVar15;
  }
  else {
    bVar8 = IsInGameThread();
    lVar10 = 4;
    if (bVar8) goto LAB_14557660f;
  }
  uVar12 = *(int *)((longlong)pTVar6->ShadowedValue + lVar10) +
           GCachedShaderPrintMaxRequest.LineCount;
  uVar13 = uVar14;
  if (0 < (int)uVar12) {
    uVar13 = uVar12;
  }
LAB_145576627:
  this->MaxLineCount = uVar13;
  pTVar6 = CVarMaxTriangleCount.Ref;
  if (this->bEnabled != false) {
    bVar8 = IsInParallelGameThread();
    if ((bVar8) || (bVar8 = IsInGameThread(), lVar10 = 4, bVar8)) {
      lVar10 = lVar15;
    }
    uVar13 = *(int *)((longlong)pTVar6->ShadowedValue + lVar10) +
             GCachedShaderPrintMaxRequest.TriangleCount;
    uVar14 = uVar11;
    if (0 < (int)uVar13) {
      uVar14 = uVar13;
    }
  }
  this->MaxTriangleCount = uVar14;
  this->bIsDrawLocked = false;
  return this;
}

