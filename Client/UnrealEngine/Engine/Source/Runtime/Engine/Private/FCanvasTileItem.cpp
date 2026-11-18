// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FCanvasTileItem @ 148906240

FCanvasTileItem * __thiscall
FCanvasTileItem::FCanvasTileItem
          (FCanvasTileItem *this,TVector2<double> *param_1,TVector2<double> *param_2,
          FLinearColor *param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  FLinearColor FVar4;
  FTexture *pFVar5;
  
  this->_padding_ = (longlong)&___7FCanvasItem__6B_;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  this->_padding_ = 0;
  this->_padding_ = (longlong)dVar1;
  this->_padding_ = (longlong)dVar2;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  FVar4 = FLinearColor::White;
  this->_padding_ = (longlong)&___7FCanvasTileItem__6B_;
  *(FLinearColor_u_0 *)&this->_padding_ = (FLinearColor_u_0_s_0)FVar4.field0_0x0;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  this->Z = 1.0;
  (this->Size).field0_0x0._s_0.X = dVar1;
  (this->Size).field0_0x0._s_0.Y = dVar2;
  (this->UV1).field0_0x0._s_0.X = 1.0;
  (this->UV1).field0_0x0._s_0.Y = 1.0;
  (this->UV0).field0_0x0._s_0.X = 0.0;
  (this->UV0).field0_0x0._s_0.Y = 0.0;
  pFVar5 = GWhiteTexture;
  (this->Rotation).Pitch = 0.0;
  (this->Rotation).Yaw = 0.0;
  (this->Rotation).Roll = 0.0;
  this->Texture = pFVar5;
  this->MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
  (this->PivotPoint).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  lVar3 = *(longlong *)((longlong)&param_3->field0_0x0 + 8);
  this->_padding_ = *(longlong *)&param_3->field0_0x0;
  this->_padding_ = lVar3;
  return this;
}

// FCanvasTileItem @ 1489062f0

FCanvasTileItem * __thiscall
FCanvasTileItem::FCanvasTileItem
          (FCanvasTileItem *this,TVector2<double> *param_1,FMaterialRenderProxy *param_2,
          TVector2<double> *param_3,TVector2<double> *param_4,TVector2<double> *param_5)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  FLinearColor FVar4;
  bool bVar5;
  FCanvasTileItem *pFVar6;
  
  this->_padding_ = (longlong)&___7FCanvasItem__6B_;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)(param_1->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar2;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  FVar4 = FLinearColor::White;
  this->_padding_ = (longlong)&___7FCanvasTileItem__6B_;
  *(FLinearColor_u_0 *)&this->_padding_ = (FLinearColor_u_0_s_0)FVar4.field0_0x0;
  dVar2 = (param_3->field0_0x0)._s_0.X;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  this->Z = 1.0;
  (this->Size).field0_0x0._s_0.X = dVar2;
  (this->Size).field0_0x0._s_0.Y = dVar3;
  dVar2 = (param_4->field0_0x0)._s_0.Y;
  (this->UV0).field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
  (this->UV0).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_5->field0_0x0)._s_0.X;
  dVar3 = (param_5->field0_0x0)._s_0.Y;
  this->Texture = (FTexture *)0x0;
  this->MaterialRenderProxy = param_2;
  (this->UV1).field0_0x0._s_0.X = dVar2;
  (this->UV1).field0_0x0._s_0.Y = dVar3;
  (this->Rotation).Pitch = 0.0;
  (this->Rotation).Yaw = 0.0;
  (this->Rotation).Roll = 0.0;
  (this->PivotPoint).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  if (param_2 == (FMaterialRenderProxy *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMaterialRenderProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                       ,0x1a0,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FCanvasTileItem *)(*pcVar1)();
      return pFVar6;
    }
  }
  return this;
}

// FCanvasTileItem @ 1489063c0

FCanvasTileItem * __thiscall
FCanvasTileItem::FCanvasTileItem
          (FCanvasTileItem *this,TVector2<double> *param_1,FMaterialRenderProxy *param_2,
          TVector2<double> *param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  FLinearColor FVar4;
  bool bVar5;
  FCanvasTileItem *pFVar6;
  
  this->_padding_ = (longlong)&___7FCanvasItem__6B_;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)(param_1->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar2;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  FVar4 = FLinearColor::White;
  this->_padding_ = (longlong)&___7FCanvasTileItem__6B_;
  *(FLinearColor_u_0 *)&this->_padding_ = (FLinearColor_u_0_s_0)FVar4.field0_0x0;
  dVar2 = (param_3->field0_0x0)._s_0.X;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  this->Z = 1.0;
  this->Texture = (FTexture *)0x0;
  this->MaterialRenderProxy = param_2;
  (this->Size).field0_0x0._s_0.X = dVar2;
  (this->Size).field0_0x0._s_0.Y = dVar3;
  (this->UV0).field0_0x0._s_0.X = 0.0;
  (this->UV0).field0_0x0._s_0.Y = 0.0;
  (this->UV1).field0_0x0._s_0.X = 1.0;
  (this->UV1).field0_0x0._s_0.Y = 1.0;
  (this->Rotation).Pitch = 0.0;
  (this->Rotation).Yaw = 0.0;
  (this->Rotation).Roll = 0.0;
  (this->PivotPoint).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  if (param_2 == (FMaterialRenderProxy *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMaterialRenderProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                       ,0x191,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FCanvasTileItem *)(*pcVar1)();
      return pFVar6;
    }
  }
  return this;
}

// FCanvasTileItem @ 148906490

FCanvasTileItem * __thiscall
FCanvasTileItem::FCanvasTileItem
          (FCanvasTileItem *this,TVector2<double> *param_1,FTexture *param_2,
          TVector2<double> *param_3,TVector2<double> *param_4,TVector2<double> *param_5,
          FLinearColor *param_6)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  FLinearColor FVar5;
  bool bVar6;
  FCanvasTileItem *pFVar7;
  
  this->_padding_ = (longlong)&___7FCanvasItem__6B_;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)(param_1->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar2;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  FVar5 = FLinearColor::White;
  this->_padding_ = (longlong)&___7FCanvasTileItem__6B_;
  *(FLinearColor_u_0 *)&this->_padding_ = (FLinearColor_u_0_s_0)FVar5.field0_0x0;
  dVar2 = (param_3->field0_0x0)._s_0.X;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  this->Z = 1.0;
  (this->Size).field0_0x0._s_0.X = dVar2;
  (this->Size).field0_0x0._s_0.Y = dVar3;
  dVar2 = (param_4->field0_0x0)._s_0.Y;
  (this->UV0).field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
  (this->UV0).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_5->field0_0x0)._s_0.X;
  dVar3 = (param_5->field0_0x0)._s_0.Y;
  this->Texture = param_2;
  this->MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
  (this->UV1).field0_0x0._s_0.X = dVar2;
  (this->UV1).field0_0x0._s_0.Y = dVar3;
  (this->Rotation).Pitch = 0.0;
  (this->Rotation).Yaw = 0.0;
  (this->Rotation).Roll = 0.0;
  (this->PivotPoint).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  lVar4 = *(longlong *)((longlong)&param_6->field0_0x0 + 8);
  this->_padding_ = *(longlong *)&param_6->field0_0x0;
  this->_padding_ = lVar4;
  if (param_2 == (FTexture *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTexture != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                       ,0x182,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FCanvasTileItem *)(*pcVar1)();
      return pFVar7;
    }
  }
  return this;
}

// FCanvasTileItem @ 148906570

FCanvasTileItem * __thiscall
FCanvasTileItem::FCanvasTileItem
          (FCanvasTileItem *this,TVector2<double> *param_1,FTexture *param_2,
          TVector2<double> *param_3,TVector2<double> *param_4,FLinearColor *param_5)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  FLinearColor FVar5;
  bool bVar6;
  uint uVar7;
  FCanvasTileItem *pFVar8;
  
  this->_padding_ = (longlong)&___7FCanvasItem__6B_;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)(param_1->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar2;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  FVar5 = FLinearColor::White;
  this->_padding_ = (longlong)&___7FCanvasTileItem__6B_;
  this->Z = 1.0;
  *(FLinearColor_u_0 *)&this->_padding_ = (FLinearColor_u_0_s_0)FVar5.field0_0x0;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  (this->UV0).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->UV0).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_4->field0_0x0)._s_0.X;
  dVar3 = (param_4->field0_0x0)._s_0.Y;
  this->Texture = param_2;
  this->MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
  (this->UV1).field0_0x0._s_0.X = dVar2;
  (this->UV1).field0_0x0._s_0.Y = dVar3;
  (this->Rotation).Pitch = 0.0;
  (this->Rotation).Yaw = 0.0;
  (this->Rotation).Roll = 0.0;
  (this->PivotPoint).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  lVar4 = *(longlong *)((longlong)&param_5->field0_0x0 + 8);
  this->_padding_ = *(longlong *)&param_5->field0_0x0;
  this->_padding_ = lVar4;
  if (param_2 == (FTexture *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                       ,0x16f,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FCanvasTileItem *)(*pcVar1)();
      return pFVar8;
    }
  }
  uVar7 = (**(code **)(param_2->_padding_ + 0x30))(param_2);
  (this->Size).field0_0x0._s_0.X = (double)uVar7;
  uVar7 = (**(code **)(param_2->_padding_ + 0x38))(param_2);
  (this->Size).field0_0x0._s_0.Y = (double)uVar7;
  return this;
}

// FCanvasTileItem @ 148906680

FCanvasTileItem * __thiscall
FCanvasTileItem::FCanvasTileItem
          (FCanvasTileItem *this,TVector2<double> *param_1,FTexture *param_2,
          TVector2<double> *param_3,FLinearColor *param_4)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  FLinearColor FVar5;
  bool bVar6;
  FCanvasTileItem *pFVar7;
  
  this->_padding_ = (longlong)&___7FCanvasItem__6B_;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)(param_1->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar2;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  FVar5 = FLinearColor::White;
  this->_padding_ = (longlong)&___7FCanvasTileItem__6B_;
  *(FLinearColor_u_0 *)&this->_padding_ = (FLinearColor_u_0_s_0)FVar5.field0_0x0;
  dVar2 = (param_3->field0_0x0)._s_0.X;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  this->Z = 1.0;
  this->Texture = param_2;
  this->MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
  (this->Size).field0_0x0._s_0.X = dVar2;
  (this->Size).field0_0x0._s_0.Y = dVar3;
  (this->UV1).field0_0x0._s_0.X = 1.0;
  (this->UV1).field0_0x0._s_0.Y = 1.0;
  (this->UV0).field0_0x0._s_0.X = 0.0;
  (this->UV0).field0_0x0._s_0.Y = 0.0;
  (this->Rotation).Pitch = 0.0;
  (this->Rotation).Yaw = 0.0;
  (this->Rotation).Roll = 0.0;
  (this->PivotPoint).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  lVar4 = *(longlong *)((longlong)&param_4->field0_0x0 + 8);
  this->_padding_ = *(longlong *)&param_4->field0_0x0;
  this->_padding_ = lVar4;
  if (param_2 == (FTexture *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                       ,0x152,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FCanvasTileItem *)(*pcVar1)();
      return pFVar7;
    }
  }
  return this;
}

// FCanvasTileItem @ 148906760

FCanvasTileItem * __thiscall
FCanvasTileItem::FCanvasTileItem
          (FCanvasTileItem *this,TVector2<double> *param_1,FTexture *param_2,FLinearColor *param_3)

{
  code *pcVar1;
  double dVar2;
  longlong lVar3;
  FLinearColor FVar4;
  bool bVar5;
  uint uVar6;
  FCanvasTileItem *pFVar7;
  
  this->_padding_ = (longlong)&___7FCanvasItem__6B_;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)(param_1->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar2;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  FVar4 = FLinearColor::White;
  this->_padding_ = (longlong)&___7FCanvasTileItem__6B_;
  this->Z = 1.0;
  this->Texture = param_2;
  this->MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
  *(FLinearColor_u_0 *)&this->_padding_ = (FLinearColor_u_0_s_0)FVar4.field0_0x0;
  (this->UV0).field0_0x0._s_0.X = 0.0;
  (this->UV0).field0_0x0._s_0.Y = 0.0;
  (this->UV1).field0_0x0._s_0.X = 1.0;
  (this->UV1).field0_0x0._s_0.Y = 1.0;
  (this->Rotation).Pitch = 0.0;
  (this->Rotation).Yaw = 0.0;
  (this->Rotation).Roll = 0.0;
  (this->PivotPoint).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  lVar3 = *(longlong *)((longlong)&param_3->field0_0x0 + 8);
  this->_padding_ = *(longlong *)&param_3->field0_0x0;
  this->_padding_ = lVar3;
  if (param_2 == (FTexture *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                       ,0x140,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FCanvasTileItem *)(*pcVar1)();
      return pFVar7;
    }
  }
  uVar6 = (**(code **)(param_2->_padding_ + 0x30))(param_2);
  (this->Size).field0_0x0._s_0.X = (double)uVar6;
  uVar6 = (**(code **)(param_2->_padding_ + 0x38))(param_2);
  (this->Size).field0_0x0._s_0.Y = (double)uVar6;
  return this;
}

// Draw @ 14892ba40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCanvasTileItem::Draw(FCanvasTileItem *this,FCanvas *param_1)

{
  int *piVar1;
  TRotator<double> *pTVar2;
  HHitProxy *pHVar3;
  double dVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_Canvas_TileTextureItemTime> FVar16;
  LARGE_INTEGER LVar17;
  FThreadStats *pFVar18;
  FThreadStatsPool *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_Canvas_TileMaterialItemTime> FVar20;
  LARGE_INTEGER LVar21;
  FHitProxyId FVar22;
  undefined4 uVar23;
  bool bVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  float fVar29;
  uint uVar30;
  float fVar31;
  undefined1 auStackY_528 [32];
  LARGE_INTEGER local_4c0;
  LARGE_INTEGER local_4b8 [2];
  float local_4a8;
  float fStack_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  TVector2<float>_u_0 local_498;
  FCanvas *local_490;
  LARGE_INTEGER local_488;
  FLinearColor_u_0 local_478;
  FDepthFieldGlowInfo local_468;
  TRotator<double> *local_430;
  TMatrix<double> local_428;
  TMatrix<double> local_3a8;
  TMatrix<double> local_328;
  TMatrix<double> local_2a8;
  TMatrix<double> local_228;
  TMatrix<double> local_1a8;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  dVar6 = __real_4076800000000000;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_528;
  pTVar2 = &this->Rotation;
  local_490 = param_1;
  local_430 = pTVar2;
  dVar25 = FGenericPlatformMath::Fmod(pTVar2->Pitch,__real_4076800000000000);
  if (dVar25 < 0.0) {
    dVar25 = dVar25 + dVar6;
  }
  if (dVar25 == 0.0) {
    dVar25 = FGenericPlatformMath::Fmod((this->Rotation).Yaw,dVar6);
    if (dVar25 < 0.0) {
      dVar25 = dVar25 + dVar6;
    }
    if (dVar25 != 0.0) goto LAB_14892bb2c;
    dVar25 = FGenericPlatformMath::Fmod((this->Rotation).Roll,dVar6);
    if (dVar25 < 0.0) {
      dVar25 = dVar25 + dVar6;
    }
    if (dVar25 != 0.0) goto LAB_14892bb2c;
  }
  else {
LAB_14892bb2c:
    dVar4 = (this->PivotPoint).field0_0x0._s_0.X * (this->Size).field0_0x0._s_0.X;
    dVar25 = (this->PivotPoint).field0_0x0._s_0.Y * (this->Size).field0_0x0._s_0.Y;
    UE::Math::TRotationMatrix<double>::TRotationMatrix<double>
              ((TRotationMatrix<double> *)&local_1a8,pTVar2);
    dVar8 = _UNK_150689518;
    dVar7 = ___xmm_00000000000000003ff0000000000000;
    uVar28 = (uint)__xmm_80000000000000008000000000000000;
    uVar30 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_428.M[1][0] = ___xmm_3ff00000000000000000000000000000;
    local_428.M[1][1] = _UNK_15061cbc8;
    local_428.M[0][2] = 0.0;
    local_428.M[0][3] = 0.0;
    local_428.M[1][2] = 0.0;
    local_428.M[1][3] = 0.0;
    local_428.M[3][0] =
         (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ uVar30,SUB84(dVar4,0) ^ uVar28);
    local_428.M[2][0] = 0.0;
    local_428.M[2][1] = 0.0;
    local_428.M[3][1] =
         (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) ^ uVar30,SUB84(dVar25,0) ^ uVar28);
    local_428.M[0][0] = ___xmm_00000000000000003ff0000000000000;
    local_428.M[0][1] = _UNK_150689518;
    local_428.M[2][2] = ___xmm_00000000000000003ff0000000000000;
    local_428.M[2][3] = _UNK_150689518;
    local_428.M[3][2] = ___xmm_3ff00000000000008000000000000000;
    local_428.M[3][3] = _UNK_151be7c48;
    VectorMatrixMultiply(&local_228,&local_428,&local_1a8);
    local_3a8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
    local_3a8.M[1][1] = _UNK_15061cbc8;
    local_3a8.M[0][2] = 0.0;
    local_3a8.M[0][3] = 0.0;
    local_3a8.M[1][2] = 0.0;
    local_3a8.M[1][3] = 0.0;
    local_3a8.M[2][0] = 0.0;
    local_3a8.M[2][1] = 0.0;
    local_3a8.M[3][2] = ___xmm_3ff00000000000008000000000000000;
    local_3a8.M[3][3] = _UNK_151be7c48;
    local_3a8.M[0][0] = dVar7;
    local_3a8.M[0][1] = dVar8;
    local_3a8.M[2][2] = dVar7;
    local_3a8.M[2][3] = dVar8;
    local_3a8.M[3][0] = dVar4;
    local_3a8.M[3][1] = dVar25;
    VectorMatrixMultiply(&local_328,&local_228,&local_3a8);
    dVar25 = (double)this->_padding_;
    dVar4 = (double)this->_padding_;
    local_2a8.M[0][2] = local_328.M[0][2];
    local_2a8.M[0][3] = local_328.M[0][3];
    local_2a8.M[0][0] = local_328.M[0][0];
    local_2a8.M[0][1] = local_328.M[0][1];
    local_2a8.M[1][2] = local_328.M[1][2];
    local_2a8.M[1][3] = local_328.M[1][3];
    local_2a8.M[1][0] = local_328.M[1][0];
    local_2a8.M[1][1] = local_328.M[1][1];
    local_2a8.M[2][2] = local_328.M[2][2];
    local_2a8.M[2][3] = local_328.M[2][3];
    local_2a8.M[2][0] = local_328.M[2][0];
    local_2a8.M[2][1] = local_328.M[2][1];
    local_2a8.M[3][2] = local_328.M[3][2];
    local_2a8.M[3][3] = local_328.M[3][3];
    local_2a8.M[3][0] = local_328.M[3][0];
    local_2a8.M[3][1] = local_328.M[3][1];
    local_3a8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
    local_3a8.M[1][1] = _UNK_15061cbc8;
    local_3a8.M[0][2] = 0.0;
    local_3a8.M[0][3] = 0.0;
    local_3a8.M[1][2] = 0.0;
    local_3a8.M[1][3] = 0.0;
    local_3a8.M[2][0] = 0.0;
    local_3a8.M[2][1] = 0.0;
    local_3a8.M[3][0] =
         (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) ^ uVar30,SUB84(dVar25,0) ^ uVar28);
    local_3a8.M[3][1] =
         (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ uVar30,SUB84(dVar4,0) ^ uVar28);
    local_3a8.M[0][0] = dVar7;
    local_3a8.M[0][1] = dVar8;
    local_3a8.M[2][2] = dVar7;
    local_3a8.M[2][3] = dVar8;
    local_3a8.M[3][2] = ___xmm_3ff00000000000008000000000000000;
    local_3a8.M[3][3] = _UNK_151be7c48;
    VectorMatrixMultiply(&local_228,&local_3a8,&local_2a8);
    local_428.M[1][0] = ___xmm_3ff00000000000000000000000000000;
    local_428.M[1][1] = _UNK_15061cbc8;
    local_428.M[0][2] = 0.0;
    local_428.M[0][3] = 0.0;
    local_428.M[1][2] = 0.0;
    local_428.M[1][3] = 0.0;
    local_428.M[2][0] = 0.0;
    local_428.M[2][1] = 0.0;
    local_428.M[3][2] = ___xmm_3ff00000000000008000000000000000;
    local_428.M[3][3] = _UNK_151be7c48;
    local_428.M[0][0] = dVar7;
    local_428.M[0][1] = dVar8;
    local_428.M[2][2] = dVar7;
    local_428.M[2][3] = dVar8;
    local_428.M[3][0] = dVar25;
    local_428.M[3][1] = dVar4;
    VectorMatrixMultiply(&local_128,&local_228,&local_428);
    FCanvas::PushRelativeTransform(param_1,&local_128);
  }
  uVar23 = 0.0;
  if (this->Texture == (FTexture *)0x0) {
    FVar20 = StatPtr_STAT_Canvas_TileMaterialItemTime;
    if (StatPtr_STAT_Canvas_TileMaterialItemTime ==
        (FThreadSafeStaticStat<FStat_STAT_Canvas_TileMaterialItemTime>)0x0) {
      pFVar15 = ::FName::FName((FName *)&local_498._s_0,"STAT_Canvas_TileMaterialItemTime");
      FVar20 = (FThreadSafeStaticStat<FStat_STAT_Canvas_TileMaterialItemTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_TileMaterialItemTime,
                          *pFVar15,L"CanvasTileMaterialItem Time","STATGROUP_Canvas",
                          "STATCAT_Advanced",L"Canvas",true,true,ST_int64,true,false,MCR_Invalid);
    }
    LVar21 = *(LARGE_INTEGER *)FVar20;
    bVar5 = false;
    bVar9 = false;
    local_488.s.LowPart = 0;
    local_488.s.HighPart = 0;
    if ((LVar21.s.LowPart == 0) && (LVar21.s.HighPart == 0)) {
      RenderMaterialTile(this,param_1,(TVector2<double> *)&this->_padding_);
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_4c0.QuadPart = local_4c0.QuadPart & 0xffffffff00000000;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_4c0.s,(char *)*(FName *)((longlong)FVar20 + 0x10));
        bVar5 = false;
        bVar9 = true;
        if (-1 < CpuChannel->Enabled) {
          local_4b8[0] = LVar21;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_4b8[0].s,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                     ,0x1e0);
          bVar5 = true;
          bVar9 = true;
        }
      }
      bVar24 = FThreadStats::bPrimaryEnable != false;
      LVar17 = local_488;
      if (bVar24) {
        local_4b8[0] = LVar21;
        local_488 = LVar21;
        FThreadStats::AddMessage((FName)LVar21.s,CycleScopeStart);
        LVar17 = LVar21;
        uVar23 = local_488._0_4_;
      }
      RenderMaterialTile(this,param_1,(TVector2<double> *)&this->_padding_);
      if (bVar9) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar24) && ((FName)LVar17.QuadPart != (FName)0x0)) &&
          (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff))
      {
        pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar18 == (FThreadStats *)0x0) {
          pFVar19 = FThreadStatsPool::Get();
          pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
        }
        if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
          local_49c = LVar17.s.HighPart & 0xffff6fffU | 0x6000;
          local_4a0 = uVar23;
          QueryPerformanceCounter(local_4b8);
          _local_4a8 = local_4b8[0].QuadPart & 0xffffffff;
          FThreadStats::AddStatMessage(pFVar18,(FStatMessage *)&local_4a8);
          piVar1 = &pFVar18->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar18,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar18,false,false);
          }
        }
      }
    }
    goto LAB_14892c27f;
  }
  FVar16 = StatPtr_STAT_Canvas_TileTextureItemTime;
  if (StatPtr_STAT_Canvas_TileTextureItemTime ==
      (FThreadSafeStaticStat<FStat_STAT_Canvas_TileTextureItemTime>)0x0) {
    pFVar15 = ::FName::FName((FName *)&local_4b8[0].s,"STAT_Canvas_TileTextureItemTime");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_Canvas_TileTextureItemTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_TileTextureItemTime,
                        *pFVar15,L"CanvasTileTextureItem Time","STATGROUP_Canvas","STATCAT_Advanced"
                        ,L"Canvas",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar21 = *(LARGE_INTEGER *)FVar16;
  bVar5 = false;
  bVar24 = false;
  local_488.s.LowPart = 0;
  local_488.s.HighPart = 0;
  bVar9 = false;
  bVar10 = false;
  if ((LVar21.s.LowPart == 0) && (LVar21.s.HighPart == 0)) {
LAB_14892bf08:
    bVar24 = bVar10;
    bVar5 = bVar9;
    bVar9 = false;
    LVar21 = local_488;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_4c0.QuadPart = local_4c0.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_4c0.s,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar5 = false;
      bVar24 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_4c0 = LVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_4c0.s,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                   ,0x1b7);
        bVar5 = true;
        bVar24 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14892bf08;
    local_4c0 = LVar21;
    local_488 = LVar21;
    FThreadStats::AddMessage((FName)LVar21.s,CycleScopeStart);
    bVar9 = true;
    uVar23 = local_488._0_4_;
  }
  local_4b8[0] = (LARGE_INTEGER)this->Texture;
  local_478._s_0.R = (float)*(undefined4 *)&this->_padding_;
  local_478._s_0.G = *(float *)((longlong)&this->_padding_ + 4);
  local_478._s_0.B = (float)*(undefined4 *)&this->_padding_;
  local_468.bEnableGlow = 0;
  local_478._s_0.A = *(float *)((longlong)&this->_padding_ + 4) * param_1->AlphaModulate;
  local_468.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT416(0);
  local_468.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_468.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_468.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)local_468.GlowColor.field0_0x0;
  LVar17 = (LARGE_INTEGER)
           FCanvas::GetBatchedElements
                     (param_1,ET_Triangle,(FBatchedElementParameters *)this->_padding_,
                      (FTexture *)local_4b8[0],
                      *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),&local_468,true);
  pHVar3 = (param_1->CurrentHitProxy).Reference;
  if (pHVar3 == (HHitProxy *)0x0) {
    FVar22.Index = -1;
  }
  else {
    FVar22.Index = (pHVar3->Id).Index;
  }
  local_49c = this->Z;
  local_4a0 = 0.0;
  dVar25 = (double)(float)local_49c;
  fVar27 = (float)((double)this->_padding_ * dVar25);
  fVar26 = (float)((double)this->_padding_ * dVar25);
  local_498._s_0.X = (float)(this->UV0).field0_0x0._s_0.X;
  local_498._s_0.Y = (float)(this->UV0).field0_0x0._s_0.Y;
  fStack_4a4 = fVar26;
  local_4a8 = fVar27;
  fVar31 = (float)(((double)this->_padding_ + (this->Size).field0_0x0._s_0.X) * dVar25);
  fVar29 = (float)(((double)this->_padding_ + (this->Size).field0_0x0._s_0.Y) * dVar25);
  local_4c0 = LVar17;
  iVar11 = FBatchedElements::AddVertexf
                     ((FBatchedElements *)LVar17,(TVector4<float> *)&local_4a8,
                      (TVector2<float> *)&local_498._s_0,(FLinearColor *)&local_478._s_0,FVar22);
  local_4a0 = 0.0;
  local_498._s_0.X = (float)(this->UV1).field0_0x0._s_0.X;
  local_498._s_0.Y = (float)(this->UV0).field0_0x0._s_0.Y;
  local_49c = this->Z;
  local_4a8 = fVar31;
  iVar12 = FBatchedElements::AddVertexf
                     ((FBatchedElements *)LVar17,(TVector4<float> *)&local_4a8,
                      (TVector2<float> *)&local_498._s_0,(FLinearColor *)&local_478._s_0,FVar22);
  local_498._s_0.X = (float)(this->UV0).field0_0x0._s_0.X;
  local_4a0 = 0.0;
  local_498._s_0.Y = (float)(this->UV1).field0_0x0._s_0.Y;
  local_49c = this->Z;
  fStack_4a4 = fVar29;
  local_4a8 = fVar27;
  iVar13 = FBatchedElements::AddVertexf
                     ((FBatchedElements *)local_4c0,(TVector4<float> *)&local_4a8,
                      (TVector2<float> *)&local_498._s_0,(FLinearColor *)&local_478._s_0,FVar22);
  local_498._s_0.X = (float)(this->UV1).field0_0x0._s_0.X;
  local_4a0 = 0.0;
  local_498._s_0.Y = (float)(this->UV1).field0_0x0._s_0.Y;
  local_49c = this->Z;
  local_4a8 = fVar31;
  iVar14 = FBatchedElements::AddVertexf
                     ((FBatchedElements *)local_4c0,(TVector4<float> *)&local_4a8,
                      (TVector2<float> *)&local_498._s_0,(FLinearColor *)&local_478._s_0,FVar22);
  local_468._0_4_ = local_468._0_4_ & 0xfffffffe;
  local_468.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_468.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_468.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_468.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            ((FBatchedElements *)local_4c0,iVar11,iVar12,iVar14,
             (FBatchedElementParameters *)this->_padding_,(FTexture *)local_4b8[0],
             *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),&local_468);
  local_468.bEnableGlow = 0;
  local_468.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_468.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_468.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_468.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            ((FBatchedElements *)local_4c0,iVar11,iVar14,iVar13,
             (FBatchedElementParameters *)this->_padding_,(FTexture *)local_4b8[0],
             *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),&local_468);
  if (bVar24) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  param_1 = local_490;
  if (((bVar9) && ((FName)LVar21.QuadPart != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    param_1 = local_490;
    if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
      local_49c = LVar21.s.HighPart & 0xffff6fffU | 0x6000;
      local_4a0 = uVar23;
      QueryPerformanceCounter(local_4b8);
      _local_4a8 = local_4b8[0].QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(pFVar18,(FStatMessage *)&local_4a8);
      piVar1 = &pFVar18->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar18,false,false);
        param_1 = local_490;
      }
      else {
        param_1 = local_490;
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar18,false,false);
          param_1 = local_490;
        }
      }
    }
  }
LAB_14892c27f:
  pTVar2 = local_430;
  dVar25 = FGenericPlatformMath::Fmod(local_430->Pitch,dVar6);
  if (dVar25 < 0.0) {
    dVar25 = dVar25 + dVar6;
  }
  if (dVar25 == 0.0) {
    dVar25 = FGenericPlatformMath::Fmod(pTVar2->Yaw,dVar6);
    if (dVar25 < 0.0) {
      dVar25 = dVar25 + dVar6;
    }
    if (dVar25 == 0.0) {
      dVar25 = FGenericPlatformMath::Fmod(pTVar2->Roll,dVar6);
      if (dVar25 < 0.0) {
        dVar25 = dVar25 + dVar6;
      }
      if (dVar25 == 0.0) {
        return;
      }
    }
  }
  FCanvas::PopTransform(param_1);
  return;
}

// RenderMaterialTile @ 148978c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCanvasTileItem::RenderMaterialTile
          (FCanvasTileItem *this,FCanvas *param_1,TVector2<double> *param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  HHitProxy *pHVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FCanvasSortElement *pFVar11;
  FCanvasTileRendererItem *pFVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_Canvas_NumBatchesCreated> FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar15;
  FTransformEntry *pFVar16;
  FHitProxyId FVar17;
  FColor local_res8;
  FName local_res20;
  FCanvasTileRendererItem *local_88;
  FName local_80;
  FStatMessage local_78 [3];
  
  iVar9 = FCanvas::TopDepthSortKey(param_1);
  pFVar11 = FCanvas::GetSortElement(param_1,iVar9);
  iVar9 = (param_1->TransformStack).ArrayNum;
  uVar15 = iVar9 - 1;
  uVar10 = 0;
  if ((int)uVar15 < iVar9) {
    uVar10 = ~uVar15 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar17.Index = -1;
  iVar9 = (pFVar11->RenderBatchArray).ArrayNum;
  pFVar16 = (FTransformEntry *)
            ((param_1->TransformStack).AllocatorInstance.Data +
            (longlong)((param_1->TransformStack).ArrayNum + -1) * 0x90);
  if (0 < iVar9) {
    uVar10 = 0;
    if ((int)(iVar9 - 1U) < iVar9) {
      uVar10 = ~(iVar9 - 1U) >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar12 = (FCanvasTileRendererItem *)
              (**(code **)(**(longlong **)
                             ((pFVar11->RenderBatchArray).AllocatorInstance.Data +
                             (longlong)(pFVar11->RenderBatchArray).ArrayNum * 8 + -8) + 0x20))();
    if ((pFVar12 != (FCanvasTileRendererItem *)0x0) &&
       (bVar8 = FCanvasTileRendererItem::IsMatch(pFVar12,this->MaterialRenderProxy,pFVar16), bVar8))
    goto LAB_148978fa8;
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar14 = StatPtr_STAT_Canvas_NumBatchesCreated;
    if (StatPtr_STAT_Canvas_NumBatchesCreated ==
        (FThreadSafeStaticStat<FStat_STAT_Canvas_NumBatchesCreated>)0x0) {
      pFVar13 = ::FName::FName(&local_80,"STAT_Canvas_NumBatchesCreated");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_Canvas_NumBatchesCreated>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_NumBatchesCreated,
                          *pFVar13,L"Num Batches Created","STATGROUP_Canvas","STATCAT_Advanced",
                          L"Canvas",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar4 = *(FName *)FVar14;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_78[0].NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
      local_78[0].StatData.Pad[0] = '\x01';
      local_78[0].StatData.Pad[1] = '\0';
      local_78[0].StatData.Pad[2] = '\0';
      local_78[0].StatData.Pad[3] = '\0';
      local_78[0].StatData.Pad[4] = '\0';
      local_78[0].StatData.Pad[5] = '\0';
      local_78[0].StatData.Pad[6] = '\0';
      local_78[0].StatData.Pad[7] = '\0';
      local_res20 = FVar4;
      local_78[0].NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,local_78);
      FStatsTrace::Add(&local_res20,1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  pFVar12 = ::operator_new(0x20);
  if (pFVar12 == (FCanvasTileRendererItem *)0x0) {
    pFVar12 = (FCanvasTileRendererItem *)0x0;
  }
  else {
    pFVar12 = FCanvasTileRendererItem::FCanvasTileRendererItem
                        (pFVar12,param_1->FeatureLevel,this->MaterialRenderProxy,pFVar16,
                         SUB81(this->_padding_,0));
  }
  pFVar5 = (pFVar11->RenderBatchArray).AllocatorInstance.Data;
  local_88 = pFVar12;
  if (((pFVar5 <= (FScriptContainerElement *)&local_88) &&
      ((FScriptContainerElement *)&local_88 <
       pFVar5 + (longlong)(pFVar11->RenderBatchArray).ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = (pFVar11->RenderBatchArray).ArrayNum;
  piVar1 = &(pFVar11->RenderBatchArray).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pFVar11->RenderBatchArray).AllocatorInstance,piVar1);
  }
  (pFVar11->RenderBatchArray).ArrayNum = iVar9 + 1;
  *(FCanvasTileRendererItem **)
   ((pFVar11->RenderBatchArray).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_88;
LAB_148978fa8:
  pHVar6 = (param_1->CurrentHitProxy).Reference;
  if (pHVar6 != (HHitProxy *)0x0) {
    FVar17.Index = (pHVar6->Id).Index;
  }
  FLinearColor::ToFColorSRGB((FLinearColor *)&this->_padding_);
  dVar2 = (this->UV0).field0_0x0._s_0.Y;
  dVar3 = (this->UV0).field0_0x0._s_0.X;
  FCanvasTileRendererItem::AddTile
            (pFVar12,(float)(param_2->field0_0x0)._s_0.X,(float)(param_2->field0_0x0)._s_0.Y,
             (float)(this->Size).field0_0x0._s_0.X,(float)(this->Size).field0_0x0._s_0.Y,
             (float)dVar3,(float)dVar2,(float)((this->UV1).field0_0x0._s_0.X - dVar3),
             (float)((this->UV1).field0_0x0._s_0.Y - dVar2),FVar17,local_res8);
  return;
}

