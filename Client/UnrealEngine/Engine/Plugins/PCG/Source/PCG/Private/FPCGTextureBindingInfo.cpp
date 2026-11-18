// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// FPCGTextureBindingInfo @ 149739a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPCGTextureBindingInfo * __thiscall
FPCGTextureBindingInfo::FPCGTextureBindingInfo
          (FPCGTextureBindingInfo *this,FPCGDataDesc *param_1,TTransform<double> *param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  TIntPoint<int>_u_0 TVar4;
  TMatrix<double> *pTVar5;
  undefined1 auStack_138 [32];
  int local_118;
  int iStack_114;
  TVector<double>_u_0 local_110;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  TVector<double>_u_0 local_d8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  this->ResourceType = TextureObject;
  local_e0 = 1;
  (this->Texture).Reference = (FRHITexture *)0x0;
  (this->ExportedTexture).Reference = (IPooledRenderTarget *)0x0;
  (this->Size).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  this->Dimension = Texture2D;
  this->bPointSample = false;
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->TextureBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->TextureBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->TextureBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->TextureBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->TextureBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->TextureBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->TextureBounds).IsValid = '\0';
  (this->TextureBounds).Pad[0] = '\0';
  (this->TextureBounds).Pad[1] = '\0';
  (this->TextureBounds).Pad[2] = '\0';
  (this->TextureBounds).Pad[3] = '\0';
  (this->TextureBounds).Pad[4] = '\0';
  (this->TextureBounds).Pad[5] = '\0';
  (this->TextureBounds).Pad[6] = '\0';
  iVar1 = (param_1->ElementCount).field0_0x0._s_0.X;
  iVar2 = (param_1->ElementCount).field0_0x0._s_0.Y;
  local_118 = 1;
  if (1 < iVar1) {
    local_118 = iVar1;
  }
  iStack_114 = 1;
  if (1 < iVar2) {
    iStack_114 = iVar2;
  }
  TVar4._s_0.Y = iStack_114;
  TVar4._s_0.X = local_118;
  (this->Size).field0_0x0 = TVar4;
  dVar3 = (param_2->Rotation).XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_2->Rotation).ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_2->Translation).XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_2->Translation).ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_2->Scale3D).XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar3;
  local_110._s_0.Y = _UNK_15076c718;
  local_110._s_0.X = ___xmm_bff0000000000000bff0000000000000;
  dVar3 = (param_2->Scale3D).ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar3;
  local_110._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  uStack_f8 = _UNK_15061cbc8;
  local_f0 = ___xmm_00000000000000003ff0000000000000;
  uStack_e8 = _UNK_150689518;
  pTVar5 = UE::Math::TTransform<double>::ToMatrixWithScale(&this->Transform,&local_98);
  UE::Math::TBox<double>::TransformBy
            ((TBox<double> *)&local_110._s_0,(TBox<double> *)&local_d8._s_0,pTVar5);
  (this->TextureBounds).Min.field0_0x0._s_0.X = local_d8._s_0.X;
  (this->TextureBounds).Min.field0_0x0._s_0.Y = local_d8._s_0.Y;
  (this->TextureBounds).Min.field0_0x0._s_0.Z = local_d8._s_0.Z;
  (this->TextureBounds).Max.field0_0x0._s_0.X = dStack_c0;
  (this->TextureBounds).Max.field0_0x0._s_0.Y = local_b8;
  (this->TextureBounds).Max.field0_0x0._s_0.Z = dStack_b0;
  (this->TextureBounds).IsValid = (undefined1)local_a8;
  (this->TextureBounds).Pad[0] = local_a8._1_1_;
  (this->TextureBounds).Pad[1] = local_a8._2_1_;
  (this->TextureBounds).Pad[2] = local_a8._3_1_;
  (this->TextureBounds).Pad[3] = local_a8._4_1_;
  (this->TextureBounds).Pad[4] = local_a8._5_1_;
  (this->TextureBounds).Pad[5] = local_a8._6_1_;
  (this->TextureBounds).Pad[6] = local_a8._7_1_;
  return this;
}

// FPCGTextureBindingInfo @ 149739c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FPCGTextureBindingInfo * __thiscall
FPCGTextureBindingInfo::FPCGTextureBindingInfo
          (FPCGTextureBindingInfo *this,UPCGBaseTextureData *param_1)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  TRefCountPtr<IPooledRenderTarget> *pTVar2;
  FRHITexture *pFVar3;
  IPooledRenderTarget *pIVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  bool bVar10;
  EPCGTextureResourceType EVar11;
  FPCGTextureBindingInfo *pFVar12;
  undefined8 *puVar13;
  double *pdVar14;
  longlong lVar15;
  undefined1 auStack_b8 [32];
  FRHIResource *local_98;
  longlong *local_90;
  FName local_88;
  FString local_80;
  undefined1 local_70 [56];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pTVar1 = &this->Texture;
  this->ResourceType = TextureObject;
  pTVar2 = &this->ExportedTexture;
  pTVar1->Reference = (FRHITexture *)0x0;
  pTVar2->Reference = (IPooledRenderTarget *)0x0;
  (this->Size).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  this->Dimension = Texture2D;
  this->bPointSample = false;
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->TextureBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->TextureBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->TextureBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->TextureBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->TextureBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->TextureBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->TextureBounds).IsValid = '\0';
  (this->TextureBounds).Pad[0] = '\0';
  (this->TextureBounds).Pad[1] = '\0';
  (this->TextureBounds).Pad[2] = '\0';
  (this->TextureBounds).Pad[3] = '\0';
  (this->TextureBounds).Pad[4] = '\0';
  (this->TextureBounds).Pad[5] = '\0';
  (this->TextureBounds).Pad[6] = '\0';
  if ((param_1 == (UPCGBaseTextureData *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTextureData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGTextureDataInterface.cpp"
                          ,0x4e,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FPCGTextureBindingInfo *)(*pcVar5)();
    return pFVar12;
  }
  EVar11 = (**(code **)(param_1->_padding_ + 0x4b0))(param_1);
  this->ResourceType = EVar11;
  puVar13 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x4a8))(param_1,&local_98);
  if (pTVar1 != (TRefCountPtr<FRHITexture> *)puVar13) {
    pFVar3 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)*puVar13;
    *puVar13 = 0;
    if (pFVar3 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  if (local_98 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_98);
  }
  puVar13 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x4b8))(param_1,&local_90);
  if (pTVar2 != (TRefCountPtr<IPooledRenderTarget> *)puVar13) {
    pIVar4 = pTVar2->Reference;
    pTVar2->Reference = (IPooledRenderTarget *)*puVar13;
    *puVar13 = 0;
    if (pIVar4 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar4->_padding_ + 0x38))();
    }
  }
  if (local_90 != (longlong *)0x0) {
    (**(code **)(*local_90 + 0x38))();
  }
  dVar9 = (double)param_1->_padding_;
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)param_1->_padding_;
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (double)param_1->_padding_;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)param_1->_padding_;
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (double)param_1->_padding_;
  (this->Transform).Translation.XY.m128d_f64[0] = (double)param_1->_padding_;
  (this->Transform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (double)param_1->_padding_;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)param_1->_padding_;
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar9;
  uVar6 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar15 = param_1->_padding_;
  uVar7 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)(this->Transform).Scale3D.XY.m128d_f64 = (int)param_1->_padding_;
  *(undefined4 *)((longlong)(this->Transform).Scale3D.XY.m128d_f64 + 4) = uVar6;
  *(int *)((this->Transform).Scale3D.XY.m128d_f64 + 1) = (int)lVar15;
  *(undefined4 *)((longlong)(this->Transform).Scale3D.XY.m128d_f64 + 0xc) = uVar7;
  uVar6 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar15 = param_1->_padding_;
  uVar7 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)(this->Transform).Scale3D.ZW.m128d_f64 = (int)param_1->_padding_;
  *(undefined4 *)((longlong)(this->Transform).Scale3D.ZW.m128d_f64 + 4) = uVar6;
  *(int *)((this->Transform).Scale3D.ZW.m128d_f64 + 1) = (int)lVar15;
  *(undefined4 *)((longlong)(this->Transform).Scale3D.ZW.m128d_f64 + 0xc) = uVar7;
  pdVar14 = (double *)(**(code **)(param_1->_padding_ + 0x388))(param_1,local_70);
  pFVar3 = pTVar1->Reference;
  dVar9 = pdVar14[1];
  (this->TextureBounds).Min.field0_0x0._s_0.X = *pdVar14;
  (this->TextureBounds).Min.field0_0x0._s_0.Y = dVar9;
  dVar9 = pdVar14[3];
  (this->TextureBounds).Min.field0_0x0._s_0.Z = pdVar14[2];
  (this->TextureBounds).Max.field0_0x0._s_0.X = dVar9;
  uVar6 = *(undefined4 *)((longlong)pdVar14 + 0x24);
  uVar7 = *(undefined4 *)(pdVar14 + 5);
  uVar8 = *(undefined4 *)((longlong)pdVar14 + 0x2c);
  *(undefined4 *)((longlong)&(this->TextureBounds).Max.field0_0x0 + 8) =
       *(undefined4 *)(pdVar14 + 4);
  *(undefined4 *)((longlong)&(this->TextureBounds).Max.field0_0x0 + 0xc) = uVar6;
  *(undefined4 *)((longlong)&(this->TextureBounds).Max.field0_0x0 + 0x10) = uVar7;
  *(undefined4 *)((longlong)&(this->TextureBounds).Max.field0_0x0 + 0x14) = uVar8;
  *(double *)&(this->TextureBounds).IsValid = pdVar14[6];
  this->bPointSample = param_1->Filter == Point;
  if (pFVar3 == (FRHITexture *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      local_88 = (FName)param_1->_padding_;
      ::FName::ToString(&local_88,&local_80);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    lVar15 = (**(code **)(pFVar3->_padding_ + 0x20))();
    (this->Size).field0_0x0 = *(TIntPoint<int>_u_0 *)(lVar15 + 0x24);
    this->Dimension = *(ETextureDimension *)(lVar15 + 0x32);
  }
  return this;
}

// operator== @ 14973f880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGTextureBindingInfo::operator==(FPCGTextureBindingInfo *this,FPCGTextureBindingInfo *param_1)

{
  uchar uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  if ((((this->ResourceType == param_1->ResourceType) &&
       ((this->Texture).Reference == (param_1->Texture).Reference)) &&
      ((this->ExportedTexture).Reference == (param_1->ExportedTexture).Reference)) &&
     ((((this->Size).field0_0x0._s_0.X == (param_1->Size).field0_0x0._s_0.X &&
       ((this->Size).field0_0x0._s_0.Y == (param_1->Size).field0_0x0._s_0.Y)) &&
      ((this->Dimension == param_1->Dimension && (this->bPointSample == param_1->bPointSample))))))
  {
    dVar15 = (this->Transform).Translation.ZW.m128d_f64[0] -
             (param_1->Transform).Translation.ZW.m128d_f64[0];
    dVar17 = (this->Transform).Translation.ZW.m128d_f64[1] -
             (param_1->Transform).Translation.ZW.m128d_f64[1];
    dVar19 = (this->Transform).Translation.XY.m128d_f64[0] -
             (param_1->Transform).Translation.XY.m128d_f64[0];
    dVar21 = (this->Transform).Translation.XY.m128d_f64[1] -
             (param_1->Transform).Translation.XY.m128d_f64[1];
    lVar14 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar17,0) & _UNK_15061cc88));
    auVar2._8_4_ = (int)lVar14;
    auVar2._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar2._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    uVar11 = movmskpd((int)this,auVar2);
    lVar14 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar21,0) & _UNK_15061cc88));
    auVar7._8_4_ = (int)lVar14;
    auVar7._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar7._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    iVar10 = movmskpd((uint)param_1->bPointSample,auVar7);
    if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
      dVar19 = (this->Transform).Rotation.ZW.m128d_f64[0];
      dVar21 = (this->Transform).Rotation.ZW.m128d_f64[1];
      dVar15 = (this->Transform).Rotation.XY.m128d_f64[0];
      dVar17 = (this->Transform).Rotation.XY.m128d_f64[1];
      dVar16 = dVar19 - (param_1->Transform).Rotation.ZW.m128d_f64[0];
      dVar18 = dVar21 - (param_1->Transform).Rotation.ZW.m128d_f64[1];
      dVar19 = dVar19 + (param_1->Transform).Rotation.ZW.m128d_f64[0];
      dVar21 = dVar21 + (param_1->Transform).Rotation.ZW.m128d_f64[1];
      dVar20 = dVar15 - (param_1->Transform).Rotation.XY.m128d_f64[0];
      dVar22 = dVar17 - (param_1->Transform).Rotation.XY.m128d_f64[1];
      dVar15 = dVar15 + (param_1->Transform).Rotation.XY.m128d_f64[0];
      dVar17 = dVar17 + (param_1->Transform).Rotation.XY.m128d_f64[1];
      lVar14 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar18,0) & _UNK_15061cc88));
      auVar3._8_4_ = (int)lVar14;
      auVar3._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar16,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar3._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      iVar12 = movmskpd(0,auVar3);
      lVar14 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar22,0) & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar14;
      auVar4._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar20,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar4._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      uVar11 = movmskpd(iVar10,auVar4);
      uVar13 = iVar12 << 2 | uVar11;
      if (uVar13 != 0) {
        lVar14 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar21,0) & _UNK_15061cc88));
        auVar5._8_4_ = (int)lVar14;
        auVar5._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar19,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar5._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
        uVar13 = movmskpd(uVar13,auVar5);
        lVar14 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar17,0) & _UNK_15061cc88));
        auVar8._8_4_ = (int)lVar14;
        auVar8._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar15,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar8._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
        uVar11 = movmskpd(uVar11,auVar8);
        if ((uVar13 & 0x3fffffff) != 0 || uVar11 != 0) {
          return false;
        }
      }
      dVar15 = (this->Transform).Scale3D.ZW.m128d_f64[0] -
               (param_1->Transform).Scale3D.ZW.m128d_f64[0];
      dVar17 = (this->Transform).Scale3D.ZW.m128d_f64[1] -
               (param_1->Transform).Scale3D.ZW.m128d_f64[1];
      dVar19 = (this->Transform).Scale3D.XY.m128d_f64[0] -
               (param_1->Transform).Scale3D.XY.m128d_f64[0];
      dVar21 = (this->Transform).Scale3D.XY.m128d_f64[1] -
               (param_1->Transform).Scale3D.XY.m128d_f64[1];
      lVar14 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar17,0) & _UNK_15061cc88));
      auVar6._8_4_ = (int)lVar14;
      auVar6._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar15,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar6._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      uVar13 = movmskpd(0,auVar6);
      lVar14 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar21,0) & _UNK_15061cc88));
      auVar9._8_4_ = (int)lVar14;
      auVar9._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar19,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar9._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      iVar10 = movmskpd(uVar11,auVar9);
      if ((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) {
        uVar1 = (param_1->TextureBounds).IsValid;
        if ((this->TextureBounds).IsValid == '\0') {
          if (uVar1 == '\0') {
            return true;
          }
        }
        else if ((((uVar1 != '\0') &&
                  ((param_1->TextureBounds).Min.field0_0x0._s_0.X ==
                   (this->TextureBounds).Min.field0_0x0._s_0.X)) &&
                 (((param_1->TextureBounds).Min.field0_0x0._s_0.Y ==
                   (this->TextureBounds).Min.field0_0x0._s_0.Y &&
                  ((((param_1->TextureBounds).Min.field0_0x0._s_0.Z ==
                     (this->TextureBounds).Min.field0_0x0._s_0.Z &&
                    ((param_1->TextureBounds).Max.field0_0x0._s_0.X ==
                     (this->TextureBounds).Max.field0_0x0._s_0.X)) &&
                   ((param_1->TextureBounds).Max.field0_0x0._s_0.Y ==
                    (this->TextureBounds).Max.field0_0x0._s_0.Y)))))) &&
                ((param_1->TextureBounds).Max.field0_0x0._s_0.Z ==
                 (this->TextureBounds).Max.field0_0x0._s_0.Z)) {
          return true;
        }
      }
    }
  }
  return false;
}

// IsValid @ 14976c210

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FPCGTextureBindingInfo::IsValid(FPCGTextureBindingInfo *this)

{
  int iVar1;
  int iVar2;
  
  if ((((this->ResourceType != Invalid) && (iVar1 = (this->Size).field0_0x0._s_0.X, 0 < iVar1)) &&
      (iVar2 = (this->Size).field0_0x0._s_0.Y, 0 < iVar2)) &&
     ((iVar1 <= GRHIGlobals.MaxTextureDimensions.Value &&
      (iVar2 <= GRHIGlobals.MaxTextureDimensions.Value)))) {
    return true;
  }
  return false;
}

