// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// FPCGLandscapeResource @ 1497381a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPCGLandscapeResource * __thiscall
FPCGLandscapeResource::FPCGLandscapeResource(FPCGLandscapeResource *this,FResourceKey *param_1)

{
  int *piVar1;
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  ULandscapeHeightfieldCollisionComponent *this_00;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  bool bVar8;
  int iVar9;
  UObject *pUVar10;
  longlong lVar11;
  FPCGLandscapeTextureResource *this_01;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar12;
  ULandscapeHeightfieldCollisionComponent **ppUVar13;
  FPCGLandscapeResource *pFVar14;
  TTransform<double> *pTVar15;
  TMatrix<double> *pTVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  TIntPoint<int>_u_0 *pTVar20;
  int iVar21;
  TIntPoint<int>_u_0 TVar22;
  TIntPoint<int>_u_0 *pTVar23;
  float fVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined1 auStackY_308 [32];
  undefined1 local_2c8 [4];
  int local_2c4;
  undefined8 local_2c0;
  int local_2b8;
  uint local_2b4;
  int local_2b0;
  int local_2ac;
  TIntPoint<int>_u_0 *local_2a8;
  int local_2a0;
  int iStack_29c;
  TIntPoint<int>_u_0_s_0 local_298;
  undefined8 local_290;
  TIntPoint<int>_u_0_s_0 local_288;
  TIntPoint<int>_u_0_s_0 local_280;
  longlong local_278;
  TIntPoint<int>_u_0 local_270;
  ulonglong local_268;
  FScriptContainerElement *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  TVector<double>_u_0 local_248;
  double local_230;
  double local_228;
  double local_220;
  TArrayView<float,int> local_218;
  TVector<double>_u_0 local_208;
  TTransform<double> local_1e8;
  TMatrix<double> local_168;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_308;
  this->LandscapeTexture = (FPCGLandscapeTextureResource *)0x0;
  pTVar2 = &(this->ResourceKey).CapturedRegions;
  *(undefined8 *)&(this->LandscapeLWCTile).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->LandscapeLWCTile).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  dVar31 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[0][1]._4_4_,
                            UE::Math::TMatrix<double>::Identity.M[0][1]._0_4_);
  (this->ActorToWorldTransform).M[0][0] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[0][0]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[0][0]._0_4_);
  (this->ActorToWorldTransform).M[0][1] = dVar31;
  dVar31 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->ActorToWorldTransform).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->ActorToWorldTransform).M[0][3] = dVar31;
  dVar31 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[1][1]._4_4_,
                            UE::Math::TMatrix<double>::Identity.M[1][1]._0_4_);
  (this->ActorToWorldTransform).M[1][0] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[1][0]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[1][0]._0_4_);
  (this->ActorToWorldTransform).M[1][1] = dVar31;
  dVar31 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[1][3]._4_4_,
                            UE::Math::TMatrix<double>::Identity.M[1][3]._0_4_);
  (this->ActorToWorldTransform).M[1][2] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[1][2]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[1][2]._0_4_);
  (this->ActorToWorldTransform).M[1][3] = dVar31;
  dVar31 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_,
                            UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_);
  (this->ActorToWorldTransform).M[2][0] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_);
  (this->ActorToWorldTransform).M[2][1] = dVar31;
  dVar31 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[2][3]._4_4_,
                            UE::Math::TMatrix<double>::Identity.M[2][3]._0_4_);
  (this->ActorToWorldTransform).M[2][2] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[2][2]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[2][2]._0_4_);
  (this->ActorToWorldTransform).M[2][3] = dVar31;
  dVar31 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_,
                            UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_);
  (this->ActorToWorldTransform).M[3][0] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_);
  (this->ActorToWorldTransform).M[3][1] = dVar31;
  dVar31 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_,
                            UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_);
  (this->ActorToWorldTransform).M[3][2] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_);
  (this->ActorToWorldTransform).M[3][3] = dVar31;
  dVar31 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[0][1]._4_4_,
                            UE::Math::TMatrix<double>::Identity.M[0][1]._0_4_);
  (this->WorldToActorTransform).M[0][0] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[0][0]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[0][0]._0_4_);
  (this->WorldToActorTransform).M[0][1] = dVar31;
  dVar31 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->WorldToActorTransform).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->WorldToActorTransform).M[0][3] = dVar31;
  dVar31 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[1][1]._4_4_,
                            UE::Math::TMatrix<double>::Identity.M[1][1]._0_4_);
  (this->WorldToActorTransform).M[1][0] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[1][0]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[1][0]._0_4_);
  (this->WorldToActorTransform).M[1][1] = dVar31;
  dVar31 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[1][3]._4_4_,
                            UE::Math::TMatrix<double>::Identity.M[1][3]._0_4_);
  (this->WorldToActorTransform).M[1][2] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[1][2]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[1][2]._0_4_);
  (this->WorldToActorTransform).M[1][3] = dVar31;
  dVar31 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_,
                            UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_);
  (this->WorldToActorTransform).M[2][0] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_);
  (this->WorldToActorTransform).M[2][1] = dVar31;
  dVar31 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[2][3]._4_4_,
                            UE::Math::TMatrix<double>::Identity.M[2][3]._0_4_);
  (this->WorldToActorTransform).M[2][2] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[2][2]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[2][2]._0_4_);
  (this->WorldToActorTransform).M[2][3] = dVar31;
  dVar31 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_,
                            UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_);
  (this->WorldToActorTransform).M[3][0] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_);
  (this->WorldToActorTransform).M[3][1] = dVar31;
  dVar31 = (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_,
                            UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_);
  (this->WorldToActorTransform).M[3][2] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_);
  (this->WorldToActorTransform).M[3][3] = dVar31;
  (this->UVScaleBias).field0_0x0._s_0.X = 1.0;
  (this->UVScaleBias).field0_0x0._s_0.Y = 1.0;
  (this->CellCount).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->UVScaleBias).field0_0x0._s_0.Z = 0.0;
  (this->UVScaleBias).field0_0x0._s_0.W = 0.0;
  (this->ResourceKey).Source.WeakPtr = (param_1->Source).WeakPtr;
  piVar1 = &(this->ResourceKey).CapturedRegions.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar17 = (param_1->CapturedRegions).ArrayNum;
  _Src = (param_1->CapturedRegions).AllocatorInstance.Data;
  (this->ResourceKey).CapturedRegions.ArrayNum = iVar17;
  if (iVar17 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar17,0,&pTVar2->AllocatorInstance,iVar17,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar17 << 3);
  }
  (this->ResourceKey).MinCaptureRegion.field0_0x0 = (param_1->MinCaptureRegion).field0_0x0;
  (this->ResourceKey).MaxCaptureRegion.field0_0x0 = (param_1->MaxCaptureRegion).field0_0x0;
  pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ResourceKey);
  lVar11 = (**(code **)(*(longlong *)&pUVar10[0x11].field_0x18 + 0x18))();
  if (lVar11 != 0) {
    local_278 = lVar11;
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ResourceKey);
    local_298 = (this->ResourceKey).MaxCaptureRegion.field0_0x0._s_0;
    local_2c4 = *(int *)&pUVar10[0x2f].field_0x18;
    iVar17 = (local_298.X - (this->ResourceKey).MinCaptureRegion.field0_0x0._s_0.X) + 1;
    iVar19 = (local_298.Y - (this->ResourceKey).MinCaptureRegion.field0_0x0._s_0.Y) + 1;
    local_2c0 = CONCAT44(iVar19,iVar17);
    local_290 = local_2c0;
    iVar17 = iVar17 * local_2c4 + 1;
    local_2b0 = iVar19 * local_2c4 + 1;
    iVar19 = iVar17 * local_2b0;
    TVar22._s_0.Y = local_2b0;
    TVar22._s_0.X = iVar17;
    local_2b8 = iVar17;
    local_270 = TVar22;
    this_01 = ::operator_new(0x50);
    if (this_01 != (FPCGLandscapeTextureResource *)0x0) {
      FRenderResource::FRenderResource((FRenderResource *)this_01);
      this_01->_padding_ = (longlong)&___7FPCGLandscapeTextureResource__6B_;
      (this_01->HeightTexture).Buffer.Reference = (FRHITexture *)0x0;
      (this_01->HeightTexture).SRV.Reference = (FRHIShaderResourceView *)0x0;
      (this_01->HeightTexture).NumBytes = 0;
      (this_01->CellCount).field0_0x0 = TVar22;
      (this_01->HeightValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_01->HeightValues).ArrayNum = 0;
      (this_01->HeightValues).ArrayMax = 0;
    }
    this->LandscapeTexture = this_01;
    pTVar12 = FPCGLandscapeTextureResource::EditHeightValues(this_01,iVar19);
    local_288 = (this->ResourceKey).MinCaptureRegion.field0_0x0._s_0;
    local_2b4 = (this->ResourceKey).CapturedRegions.ArrayNum;
    uVar18 = (ulonglong)(int)local_2b4;
    pTVar20 = (TIntPoint<int>_u_0 *)(this->ResourceKey).CapturedRegions.AllocatorInstance.Data;
    local_268 = (ulonglong)(uint)(local_288.X * local_2c4);
    pTVar23 = pTVar20 + uVar18;
    local_2ac = local_288.Y * local_2c4;
    iVar19 = local_2c4;
    local_2a8 = pTVar23;
    while( true ) {
      if ((this->ResourceKey).CapturedRegions.ArrayNum != (int)uVar18) {
        local_2c8[0] = 0;
        `TCheckedPointerIterator<UE::Math::TIntPoint<int>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_2c8);
      }
      fVar24 = __real_3f800000;
      if (pTVar20 == pTVar23) break;
      ppUVar13 = TMapBase<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>_>
                 ::Find((TMapBase<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>_>
                         *)(lVar11 + 0xa0),(TIntPoint<int>)pTVar20->_s_0);
      if (ppUVar13 == (ULandscapeHeightfieldCollisionComponent **)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("FoundCollisionComponent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGLandscapeDataInterface.cpp"
                           ,0x6a,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pFVar14 = (FPCGLandscapeResource *)(*pcVar4)();
          return pFVar14;
        }
      }
      else {
        this_00 = *ppUVar13;
        pTVar23 = local_2a8;
        if ((this_00 != (ULandscapeHeightfieldCollisionComponent *)0x0) &&
           (pTVar12 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0)) {
          local_280 = pTVar20->_s_0;
          iVar3 = pTVar12->ArrayNum;
          iVar9 = local_280.X - (this->ResourceKey).MinCaptureRegion.field0_0x0._s_0.X;
          local_258 = (pTVar12->AllocatorInstance).Data;
          iVar21 = (local_280.Y - (this->ResourceKey).MinCaptureRegion.field0_0x0._s_0.Y) *
                   local_2c4;
          _local_2a0 = CONCAT44(iVar21,iVar9);
          if ((iVar3 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            pFVar14 = (FPCGLandscapeResource *)(*pcVar4)();
            return pFVar14;
          }
          iVar17 = local_2b8;
          local_218._12_4_ = uStack_24c;
          local_218.ArrayNum = iVar3;
          local_218.DataPtr = (float *)local_258;
          iStack_250 = iVar3;
          ULandscapeHeightfieldCollisionComponent::FillHeightTile
                    (this_00,&local_218,iVar9 * iVar19 + iVar21 * local_2b8,local_2b8);
          pTVar23 = local_2a8;
          lVar11 = local_278;
          iVar19 = local_2c4;
        }
      }
      uVar18 = (ulonglong)local_2b4;
      pTVar20 = pTVar20 + 1;
    }
    (this->CellCount).field0_0x0 = local_270;
    dVar7 = (double)(fVar24 / (float)iVar17);
    dVar31 = (double)(fVar24 / (float)local_2b0);
    fVar24 = __real_3f000000 - (float)(int)local_268;
    fVar33 = __real_3f000000 - (float)local_2ac;
    auVar5._8_4_ = SUB84(dVar31,0);
    auVar5._0_8_ = dVar7;
    auVar5._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    *(undefined1 (*) [16])&(this->UVScaleBias).field0_0x0 = auVar5;
    dVar31 = (double)fVar33 * dVar31;
    auVar6._8_4_ = SUB84(dVar31,0);
    auVar6._0_8_ = (double)fVar24 * dVar7;
    auVar6._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->UVScaleBias).field0_0x0 + 0x10) = auVar6;
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ResourceKey);
    if (*(longlong *)(pUVar10 + 0xb) == 0) {
      pTVar15 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar15 = (TTransform<double> *)(*(longlong *)(pUVar10 + 0xb) + 0x1f0);
    }
    local_1e8.Rotation.XY.m128d_f64[0] = (pTVar15->Rotation).XY.m128d_f64[0];
    local_1e8.Rotation.XY.m128d_f64[1] = (pTVar15->Rotation).XY.m128d_f64[1];
    local_1e8.Rotation.ZW.m128d_f64[0] = (pTVar15->Rotation).ZW.m128d_f64[0];
    local_1e8.Rotation.ZW.m128d_f64[1] = (pTVar15->Rotation).ZW.m128d_f64[1];
    local_208._s_0.X = (pTVar15->Translation).XY.m128d_f64[0];
    local_208._s_0.Y = (pTVar15->Translation).XY.m128d_f64[1];
    local_208._s_0.Z = (pTVar15->Translation).ZW.m128d_f64[0];
    local_1e8.Scale3D.XY.m128d_f64[0] = (pTVar15->Scale3D).XY.m128d_f64[0];
    local_1e8.Scale3D.XY.m128d_f64[1] = (pTVar15->Scale3D).XY.m128d_f64[1];
    local_1e8.Scale3D.ZW.m128d_f64[0] = (pTVar15->Scale3D).ZW.m128d_f64[0];
    local_1e8.Scale3D.ZW.m128d_f64[1] = (pTVar15->Scale3D).ZW.m128d_f64[1];
    TLargeWorldRenderPosition<double>::TLargeWorldRenderPosition<double><double>
              ((TLargeWorldRenderPosition<double> *)&local_248._s_0,
               (TVector<double> *)&local_208._s_0);
    (this->LandscapeLWCTile).field0_0x0._s_0.X = (float)local_248._s_0.X;
    (this->LandscapeLWCTile).field0_0x0._s_0.Y = (float)local_248._s_0.Y;
    (this->LandscapeLWCTile).field0_0x0._s_0.Z = (float)local_248._s_0.Z;
    local_1e8.Translation.ZW.m128d_f64[0] = (double)(float)local_220;
    local_1e8.Translation.ZW.m128d_f64[1] = 0.0;
    local_1e8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)(float)local_228,0);
    local_1e8.Translation.XY.m128d_f64[0] = (double)(float)local_230;
    local_1e8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)(float)local_228 >> 0x20)
    ;
    pTVar16 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_1e8,&local_168);
    dVar7 = __real_3e45798ee0000000;
    dVar31 = pTVar16->M[0][1];
    (this->ActorToWorldTransform).M[0][0] = pTVar16->M[0][0];
    (this->ActorToWorldTransform).M[0][1] = dVar31;
    dVar31 = pTVar16->M[0][3];
    (this->ActorToWorldTransform).M[0][2] = pTVar16->M[0][2];
    (this->ActorToWorldTransform).M[0][3] = dVar31;
    dVar31 = pTVar16->M[1][1];
    (this->ActorToWorldTransform).M[1][0] = pTVar16->M[1][0];
    (this->ActorToWorldTransform).M[1][1] = dVar31;
    dVar31 = pTVar16->M[1][3];
    (this->ActorToWorldTransform).M[1][2] = pTVar16->M[1][2];
    (this->ActorToWorldTransform).M[1][3] = dVar31;
    dVar31 = pTVar16->M[2][1];
    (this->ActorToWorldTransform).M[2][0] = pTVar16->M[2][0];
    (this->ActorToWorldTransform).M[2][1] = dVar31;
    dVar31 = pTVar16->M[2][3];
    (this->ActorToWorldTransform).M[2][2] = pTVar16->M[2][2];
    (this->ActorToWorldTransform).M[2][3] = dVar31;
    dVar31 = pTVar16->M[3][1];
    (this->ActorToWorldTransform).M[3][0] = pTVar16->M[3][0];
    (this->ActorToWorldTransform).M[3][1] = dVar31;
    dVar31 = pTVar16->M[3][3];
    (this->ActorToWorldTransform).M[3][2] = pTVar16->M[3][2];
    (this->ActorToWorldTransform).M[3][3] = dVar31;
    dVar31 = (this->ActorToWorldTransform).M[0][0];
    uVar25 = SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar27 = (uint)((ulonglong)dVar31 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((((((dVar7 <= (double)CONCAT44(uVar27,uVar25) && (double)CONCAT44(uVar27,uVar25) != dVar7)
           || (dVar31 = (this->ActorToWorldTransform).M[0][1],
              uVar25 = SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
              uVar27 = (uint)((ulonglong)dVar31 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
              dVar7 <= (double)CONCAT44(uVar27,uVar25) && (double)CONCAT44(uVar27,uVar25) != dVar7))
          || (dVar31 = (this->ActorToWorldTransform).M[0][2],
             uVar25 = SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
             uVar27 = (uint)((ulonglong)dVar31 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
             dVar7 <= (double)CONCAT44(uVar27,uVar25) && (double)CONCAT44(uVar27,uVar25) != dVar7))
         || ((dVar31 = (this->ActorToWorldTransform).M[1][0],
             uVar25 = SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
             uVar27 = (uint)((ulonglong)dVar31 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
             dVar7 <= (double)CONCAT44(uVar27,uVar25) && (double)CONCAT44(uVar27,uVar25) != dVar7 ||
             (dVar31 = (this->ActorToWorldTransform).M[1][1],
             uVar25 = SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
             uVar27 = (uint)((ulonglong)dVar31 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
             dVar7 <= (double)CONCAT44(uVar27,uVar25) && (double)CONCAT44(uVar27,uVar25) != dVar7)))
         ) || ((dVar31 = (this->ActorToWorldTransform).M[1][2],
               uVar25 = SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
               uVar27 = (uint)((ulonglong)dVar31 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
               dVar7 <= (double)CONCAT44(uVar27,uVar25) && (double)CONCAT44(uVar27,uVar25) != dVar7
               || ((dVar31 = (this->ActorToWorldTransform).M[2][0],
                   uVar25 = SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
                   uVar27 = (uint)((ulonglong)dVar31 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                   dVar7 <= (double)CONCAT44(uVar27,uVar25) &&
                   (double)CONCAT44(uVar27,uVar25) != dVar7 ||
                   (dVar31 = (this->ActorToWorldTransform).M[2][1],
                   uVar25 = SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
                   uVar27 = (uint)((ulonglong)dVar31 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                   dVar7 <= (double)CONCAT44(uVar27,uVar25) &&
                   (double)CONCAT44(uVar27,uVar25) != dVar7)))))) ||
       (dVar31 = (this->ActorToWorldTransform).M[2][2],
       uVar25 = SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar27 = (uint)((ulonglong)dVar31 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       uVar26 = UE::Math::TMatrix<double>::Identity.M[0][0]._0_4_,
       uVar28 = UE::Math::TMatrix<double>::Identity.M[0][0]._4_4_,
       uVar29 = UE::Math::TMatrix<double>::Identity.M[0][1]._0_4_,
       uVar30 = UE::Math::TMatrix<double>::Identity.M[0][1]._4_4_,
       uVar34 = UE::Math::TMatrix<double>::Identity.M[1][0]._0_4_,
       uVar35 = UE::Math::TMatrix<double>::Identity.M[1][0]._4_4_,
       uVar36 = UE::Math::TMatrix<double>::Identity.M[1][1]._0_4_,
       uVar37 = UE::Math::TMatrix<double>::Identity.M[1][1]._4_4_,
       uVar38 = UE::Math::TMatrix<double>::Identity.M[1][2]._0_4_,
       uVar39 = UE::Math::TMatrix<double>::Identity.M[1][2]._4_4_,
       uVar40 = UE::Math::TMatrix<double>::Identity.M[1][3]._0_4_,
       uVar41 = UE::Math::TMatrix<double>::Identity.M[1][3]._4_4_,
       uVar42 = UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_,
       uVar43 = UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_,
       uVar44 = UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_,
       uVar45 = UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_,
       uVar46 = UE::Math::TMatrix<double>::Identity.M[2][2]._0_4_,
       uVar47 = UE::Math::TMatrix<double>::Identity.M[2][2]._4_4_,
       uVar48 = UE::Math::TMatrix<double>::Identity.M[2][3]._0_4_,
       uVar49 = UE::Math::TMatrix<double>::Identity.M[2][3]._4_4_,
       uVar50 = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_,
       uVar51 = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_,
       uVar52 = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_,
       uVar53 = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_,
       uVar54 = UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_,
       uVar55 = UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_,
       uVar56 = UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_,
       uVar57 = UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_,
       dVar31 = UE::Math::TMatrix<double>::Identity.M[0][2],
       dVar32 = UE::Math::TMatrix<double>::Identity.M[0][3],
       dVar7 <= (double)CONCAT44(uVar27,uVar25) && (double)CONCAT44(uVar27,uVar25) != dVar7)) {
      FMath::MatrixInverse(&local_e8,&this->ActorToWorldTransform);
      uVar26 = local_e8.M[0][0]._0_4_;
      uVar28 = local_e8.M[0][0]._4_4_;
      uVar29 = local_e8.M[0][1]._0_4_;
      uVar30 = local_e8.M[0][1]._4_4_;
      uVar34 = local_e8.M[1][0]._0_4_;
      uVar35 = local_e8.M[1][0]._4_4_;
      uVar36 = local_e8.M[1][1]._0_4_;
      uVar37 = local_e8.M[1][1]._4_4_;
      uVar38 = local_e8.M[1][2]._0_4_;
      uVar39 = local_e8.M[1][2]._4_4_;
      uVar40 = local_e8.M[1][3]._0_4_;
      uVar41 = local_e8.M[1][3]._4_4_;
      uVar42 = local_e8.M[2][0]._0_4_;
      uVar43 = local_e8.M[2][0]._4_4_;
      uVar44 = local_e8.M[2][1]._0_4_;
      uVar45 = local_e8.M[2][1]._4_4_;
      uVar46 = local_e8.M[2][2]._0_4_;
      uVar47 = local_e8.M[2][2]._4_4_;
      uVar48 = local_e8.M[2][3]._0_4_;
      uVar49 = local_e8.M[2][3]._4_4_;
      uVar50 = local_e8.M[3][0]._0_4_;
      uVar51 = local_e8.M[3][0]._4_4_;
      uVar52 = local_e8.M[3][1]._0_4_;
      uVar53 = local_e8.M[3][1]._4_4_;
      uVar54 = local_e8.M[3][2]._0_4_;
      uVar55 = local_e8.M[3][2]._4_4_;
      uVar56 = local_e8.M[3][3]._0_4_;
      uVar57 = local_e8.M[3][3]._4_4_;
      dVar31 = local_e8.M[0][2];
      dVar32 = local_e8.M[0][3];
    }
    *(undefined4 *)(this->WorldToActorTransform).M[0] = uVar26;
    *(undefined4 *)((longlong)(this->WorldToActorTransform).M[0] + 4) = uVar28;
    *(undefined4 *)((this->WorldToActorTransform).M[0] + 1) = uVar29;
    *(undefined4 *)((longlong)(this->WorldToActorTransform).M[0] + 0xc) = uVar30;
    (this->WorldToActorTransform).M[0][2] = dVar31;
    (this->WorldToActorTransform).M[0][3] = dVar32;
    *(undefined4 *)(this->WorldToActorTransform).M[1] = uVar34;
    *(undefined4 *)((longlong)(this->WorldToActorTransform).M[1] + 4) = uVar35;
    *(undefined4 *)((this->WorldToActorTransform).M[1] + 1) = uVar36;
    *(undefined4 *)((longlong)(this->WorldToActorTransform).M[1] + 0xc) = uVar37;
    *(undefined4 *)((this->WorldToActorTransform).M[1] + 2) = uVar38;
    *(undefined4 *)((longlong)(this->WorldToActorTransform).M[1] + 0x14) = uVar39;
    *(undefined4 *)((this->WorldToActorTransform).M[1] + 3) = uVar40;
    *(undefined4 *)((longlong)(this->WorldToActorTransform).M[1] + 0x1c) = uVar41;
    *(undefined4 *)(this->WorldToActorTransform).M[2] = uVar42;
    *(undefined4 *)((longlong)(this->WorldToActorTransform).M[2] + 4) = uVar43;
    *(undefined4 *)((this->WorldToActorTransform).M[2] + 1) = uVar44;
    *(undefined4 *)((longlong)(this->WorldToActorTransform).M[2] + 0xc) = uVar45;
    *(undefined4 *)((this->WorldToActorTransform).M[2] + 2) = uVar46;
    *(undefined4 *)((longlong)(this->WorldToActorTransform).M[2] + 0x14) = uVar47;
    *(undefined4 *)((this->WorldToActorTransform).M[2] + 3) = uVar48;
    *(undefined4 *)((longlong)(this->WorldToActorTransform).M[2] + 0x1c) = uVar49;
    *(undefined4 *)(this->WorldToActorTransform).M[3] = uVar50;
    *(undefined4 *)((longlong)(this->WorldToActorTransform).M[3] + 4) = uVar51;
    *(undefined4 *)((this->WorldToActorTransform).M[3] + 1) = uVar52;
    *(undefined4 *)((longlong)(this->WorldToActorTransform).M[3] + 0xc) = uVar53;
    *(undefined4 *)((this->WorldToActorTransform).M[3] + 2) = uVar54;
    *(undefined4 *)((longlong)(this->WorldToActorTransform).M[3] + 0x14) = uVar55;
    *(undefined4 *)((this->WorldToActorTransform).M[3] + 3) = uVar56;
    *(undefined4 *)((longlong)(this->WorldToActorTransform).M[3] + 0x1c) = uVar57;
  }
  return this;
}

// ~FPCGLandscapeResource @ 14973d4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FPCGLandscapeResource::~FPCGLandscapeResource(FPCGLandscapeResource *this)

{
  int iVar1;
  FCommandList *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FRenderCommandList *this_00;
  FRenderCommandTag *pFVar7;
  undefined ***pppuVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  code *local_88 [2];
  undefined **local_78;
  FPCGLandscapeTextureResource *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FPCGLandscapeTextureResource *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (this->LandscapeTexture != (FPCGLandscapeTextureResource *)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPCGLandscapeResource::~FPCGLandscapeResource'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FPCGLandscapeResource::~FPCGLandscapeResource'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    pFStack_70 = this->LandscapeTexture;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FPCGLandscapeResource::~FPCGLandscapeResource_::__l5::TSTR_BeginDestroyCommand148>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      if (this_00->bInitialized == 0) {
        FRenderCommandList::Init(this_00);
      }
      iVar1 = (this_00->CommandLists).ArrayNum;
      uVar9 = iVar1 - 1;
      uVar6 = 0;
      if ((int)uVar9 < iVar1) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_98 = (longlong)(int)uVar9;
        local_90 = (longlong)iVar1;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar1 = (this_00->CommandLists).ArrayNum;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_28 = 2;
      pFVar2 = (this_00->CommandLists).AllocatorInstance.Data;
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_88[0] = (code *)0x0;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`FPCGLandscapeResource::~FPCGLandscapeResource'::__l5::TSTR_BeginDestroyCommand148>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar2 + (iVar1 + -1),
                 (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  *)local_58,pFVar7);
      uVar10 = (ulonglong)local_28;
      if (2 < uVar10) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar8 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar8 = local_30;
          }
          (*(code *)(*pppuVar8)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar8 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar8 = local_60;
      }
      (*(code *)(*pppuVar8)[2])();
    }
    this->LandscapeTexture = (FPCGLandscapeTextureResource *)0x0;
  }
  pFVar3 = (this->ResourceKey).CapturedRegions.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// operator() @ 149741f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPCGLandscapeResource::~FPCGLandscapeResource'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RT_Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGLandscapeDataInterface.cpp"
                       ,0x96,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(**(longlong **)this + 0x20))();
  puVar1 = *(undefined8 **)this;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar4 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar4;
    *(undefined8 **)&param_1->field_0x30 = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &TRHILambdaCommand<FRHICommandListImmediate,``FPCGLandscapeResource::~FPCGLandscapeResource'::`5'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = L"TRHILambdaCommand";
    puVar4[2] = puVar1;
  }
  else if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149741fea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

