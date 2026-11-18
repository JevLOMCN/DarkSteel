// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FMotionBlurViewports @ 1452110c0

FMotionBlurViewports * __thiscall
FMotionBlurViewports::FMotionBlurViewports
          (FMotionBlurViewports *this,FScreenPassTextureViewport *param_1,
          FScreenPassTextureViewport *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TVector2<float>_u_0 TVar4;
  TIntPoint<int> TVar5;
  int iVar6;
  FScreenPassTextureViewportParameters *pFVar7;
  FScreenTransform *pFVar8;
  TIntPoint<int>_u_0 TVar9;
  FScreenTransform local_88;
  FScreenPassTextureViewportParameters local_78;
  
  (this->Color).Extent.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->Color).Rect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Color).Rect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Velocity).Extent.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->Velocity).Rect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Velocity).Rect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->VelocityTile).Extent.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->VelocityTile).Rect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->VelocityTile).Rect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Color).Extent.field0_0x0 = (param_1->Extent).field0_0x0;
  (this->Color).Rect.field0_0x0._s_0.Min.field0_0x0 = (param_1->Rect).field0_0x0._s_0.Min.field0_0x0
  ;
  (this->Color).Rect.field0_0x0._s_0.Max.field0_0x0 = (param_1->Rect).field0_0x0._s_0.Max.field0_0x0
  ;
  (this->Velocity).Extent.field0_0x0 = (param_2->Extent).field0_0x0;
  uVar2 = *(undefined8 *)&(param_2->Rect).field0_0x0;
  *(undefined8 *)&(this->Velocity).Rect.field0_0x0 = uVar2;
  uVar3 = *(undefined8 *)((longlong)&(param_2->Rect).field0_0x0 + 8);
  *(undefined8 *)((longlong)&(this->Velocity).Rect.field0_0x0 + 8) = uVar3;
  TVar5 = UE::Math::TIntPoint<int>::ZeroValue;
  iVar6 = ((int)((ulonglong)uVar3 >> 0x20) - (int)((ulonglong)uVar2 >> 0x20)) + 0xf;
  iVar1 = ((int)uVar3 - (int)uVar2) + 0xf;
  TVar9._s_0.Y = (int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4;
  TVar9._s_0.X = (int)((iVar1 >> 0x1f & 0xfU) + iVar1) >> 4;
  (this->VelocityTile).Extent.field0_0x0 = TVar9;
  (this->VelocityTile).Rect.field0_0x0._s_0.Min.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)TVar5.field0_0x0;
  (this->VelocityTile).Rect.field0_0x0._s_0.Max.field0_0x0 = TVar9;
  pFVar7 = GetScreenPassTextureViewportParameters(&local_78,&this->Color);
  TVar4 = (pFVar7->ExtentInverse).field0_0x0;
  (this->ColorParameters).Extent.field0_0x0 = (pFVar7->Extent).field0_0x0;
  (this->ColorParameters).ExtentInverse.field0_0x0 = TVar4;
  TVar4 = (pFVar7->ScreenPosToViewportBias).field0_0x0;
  (this->ColorParameters).ScreenPosToViewportScale.field0_0x0 =
       (pFVar7->ScreenPosToViewportScale).field0_0x0;
  (this->ColorParameters).ScreenPosToViewportBias.field0_0x0 = TVar4;
  TVar9 = (pFVar7->ViewportMax).field0_0x0;
  (this->ColorParameters).ViewportMin.field0_0x0 = (pFVar7->ViewportMin).field0_0x0;
  (this->ColorParameters).ViewportMax.field0_0x0 = TVar9;
  TVar4 = (pFVar7->ViewportSizeInverse).field0_0x0;
  (this->ColorParameters).ViewportSize.field0_0x0 = (pFVar7->ViewportSize).field0_0x0;
  (this->ColorParameters).ViewportSizeInverse.field0_0x0 = TVar4;
  TVar4 = (pFVar7->UVViewportMax).field0_0x0;
  (this->ColorParameters).UVViewportMin.field0_0x0 = (pFVar7->UVViewportMin).field0_0x0;
  (this->ColorParameters).UVViewportMax.field0_0x0 = TVar4;
  TVar4 = (pFVar7->UVViewportSizeInverse).field0_0x0;
  (this->ColorParameters).UVViewportSize.field0_0x0 = (pFVar7->UVViewportSize).field0_0x0;
  (this->ColorParameters).UVViewportSizeInverse.field0_0x0 = TVar4;
  TVar4 = (pFVar7->UVViewportBilinearMax).field0_0x0;
  (this->ColorParameters).UVViewportBilinearMin.field0_0x0 =
       (pFVar7->UVViewportBilinearMin).field0_0x0;
  (this->ColorParameters).UVViewportBilinearMax.field0_0x0 = TVar4;
  pFVar7 = GetScreenPassTextureViewportParameters(&local_78,&this->Velocity);
  TVar4 = (pFVar7->ExtentInverse).field0_0x0;
  (this->VelocityParameters).Extent.field0_0x0 = (pFVar7->Extent).field0_0x0;
  (this->VelocityParameters).ExtentInverse.field0_0x0 = TVar4;
  TVar4 = (pFVar7->ScreenPosToViewportBias).field0_0x0;
  (this->VelocityParameters).ScreenPosToViewportScale.field0_0x0 =
       (pFVar7->ScreenPosToViewportScale).field0_0x0;
  (this->VelocityParameters).ScreenPosToViewportBias.field0_0x0 = TVar4;
  TVar9 = (pFVar7->ViewportMax).field0_0x0;
  (this->VelocityParameters).ViewportMin.field0_0x0 = (pFVar7->ViewportMin).field0_0x0;
  (this->VelocityParameters).ViewportMax.field0_0x0 = TVar9;
  TVar4 = (pFVar7->ViewportSizeInverse).field0_0x0;
  (this->VelocityParameters).ViewportSize.field0_0x0 = (pFVar7->ViewportSize).field0_0x0;
  (this->VelocityParameters).ViewportSizeInverse.field0_0x0 = TVar4;
  TVar4 = (pFVar7->UVViewportMax).field0_0x0;
  (this->VelocityParameters).UVViewportMin.field0_0x0 = (pFVar7->UVViewportMin).field0_0x0;
  (this->VelocityParameters).UVViewportMax.field0_0x0 = TVar4;
  TVar4 = (pFVar7->UVViewportSizeInverse).field0_0x0;
  (this->VelocityParameters).UVViewportSize.field0_0x0 = (pFVar7->UVViewportSize).field0_0x0;
  (this->VelocityParameters).UVViewportSizeInverse.field0_0x0 = TVar4;
  TVar4 = (pFVar7->UVViewportBilinearMax).field0_0x0;
  (this->VelocityParameters).UVViewportBilinearMin.field0_0x0 =
       (pFVar7->UVViewportBilinearMin).field0_0x0;
  (this->VelocityParameters).UVViewportBilinearMax.field0_0x0 = TVar4;
  pFVar7 = GetScreenPassTextureViewportParameters(&local_78,&this->VelocityTile);
  TVar4 = (pFVar7->ExtentInverse).field0_0x0;
  (this->VelocityTileParameters).Extent.field0_0x0 = (pFVar7->Extent).field0_0x0;
  (this->VelocityTileParameters).ExtentInverse.field0_0x0 = TVar4;
  TVar4 = (pFVar7->ScreenPosToViewportBias).field0_0x0;
  (this->VelocityTileParameters).ScreenPosToViewportScale.field0_0x0 =
       (pFVar7->ScreenPosToViewportScale).field0_0x0;
  (this->VelocityTileParameters).ScreenPosToViewportBias.field0_0x0 = TVar4;
  TVar9 = (pFVar7->ViewportMax).field0_0x0;
  (this->VelocityTileParameters).ViewportMin.field0_0x0 = (pFVar7->ViewportMin).field0_0x0;
  (this->VelocityTileParameters).ViewportMax.field0_0x0 = TVar9;
  TVar4 = (pFVar7->ViewportSizeInverse).field0_0x0;
  (this->VelocityTileParameters).ViewportSize.field0_0x0 = (pFVar7->ViewportSize).field0_0x0;
  (this->VelocityTileParameters).ViewportSizeInverse.field0_0x0 = TVar4;
  TVar4 = (pFVar7->UVViewportMax).field0_0x0;
  (this->VelocityTileParameters).UVViewportMin.field0_0x0 = (pFVar7->UVViewportMin).field0_0x0;
  (this->VelocityTileParameters).UVViewportMax.field0_0x0 = TVar4;
  TVar4 = (pFVar7->UVViewportSizeInverse).field0_0x0;
  (this->VelocityTileParameters).UVViewportSize.field0_0x0 = (pFVar7->UVViewportSize).field0_0x0;
  (this->VelocityTileParameters).UVViewportSizeInverse.field0_0x0 = TVar4;
  TVar4 = (pFVar7->UVViewportBilinearMax).field0_0x0;
  (this->VelocityTileParameters).UVViewportBilinearMin.field0_0x0 =
       (pFVar7->UVViewportBilinearMin).field0_0x0;
  (this->VelocityTileParameters).UVViewportBilinearMax.field0_0x0 = TVar4;
  pFVar8 = FScreenTransform::ChangeTextureUVCoordinateFromTo(&local_88,&this->Color,&this->Velocity)
  ;
  TVar4 = (pFVar8->Bias).field0_0x0;
  (this->ColorToVelocityTransform).Scale.field0_0x0 = (pFVar8->Scale).field0_0x0;
  (this->ColorToVelocityTransform).Bias.field0_0x0 = TVar4;
  return this;
}

