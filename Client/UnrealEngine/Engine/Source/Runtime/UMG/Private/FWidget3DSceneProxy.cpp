// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 8

// CanBeOccluded @ 146a60500

bool __thiscall FWidget3DSceneProxy::CanBeOccluded(FWidget3DSceneProxy *this)

{
  return (bool)(~(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 2) & 1);
}

// GetDynamicMeshElements @ 146a74d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWidget3DSceneProxy::GetDynamicMeshElements
          (FWidget3DSceneProxy *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1
          ,FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

{
  UTextureRenderTarget2D *pUVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FTextureResource *pFVar11;
  FPrimitiveDrawInterface *pFVar12;
  longlong lVar13;
  uint uVar14;
  double dVar15;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  uint uVar16;
  uint uVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  undefined1 auVar24 [16];
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  double dVar35;
  float fVar36;
  undefined1 auStackY_538 [32];
  uint local_4e4;
  uint local_4e0;
  FDynamicMeshBuilderSettings local_4d8;
  FDynamicMeshBuilderSettings local_4d0;
  float local_4c8;
  float local_4c4;
  float local_4c0;
  uint local_4bc;
  longlong local_4b8;
  FSceneViewFamily *local_4b0;
  double local_4a8;
  int local_4a0;
  FMaterialRenderProxy *local_498;
  FMeshElementCollector *local_490;
  TVector2<float>_u_0 local_488;
  TVector2<float>_u_0 local_480;
  TVector2<float>_u_0 local_478;
  TVector2<float>_u_0 local_470;
  TVector2<float>_u_0 local_468;
  TVector2<float>_u_0 local_460;
  double local_458;
  double local_450;
  double local_448;
  TVector2<float>_u_0 local_440;
  TVector2<float>_u_0 local_438;
  double local_430;
  double local_428;
  double local_420;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_418;
  longlong local_410;
  TVector<float>_u_0 local_408;
  TVector<float>_u_0 local_3fc;
  TVector<float>_u_0 local_3f0;
  TVector<float>_u_0 local_3e4;
  TVector<float>_u_0 local_3d8;
  TVector<float>_u_0 local_3cc;
  TVector<float>_u_0 local_3c0;
  TVector<float>_u_0 local_3b4;
  TVector<float>_u_0 local_3a8;
  TVector<float>_u_0 local_39c;
  TVector<float>_u_0 local_390;
  TVector<float>_u_0 local_384;
  TVector<float>_u_0 local_378;
  TVector<float>_u_0 local_36c;
  TVector<float>_u_0 local_360;
  TVector<float>_u_0 local_354;
  TVector<float>_u_0 local_348;
  TVector<float>_u_0 local_33c;
  TVector<float>_u_0 local_330;
  TVector<float>_u_0 local_324;
  TVector<float>_u_0 local_318;
  TVector<float>_u_0 local_30c;
  TVector<float>_u_0 local_300;
  TVector<float>_u_0 local_2f4;
  TVector<float>_u_0 local_2e8;
  TVector<float>_u_0 local_2dc;
  TVector<float>_u_0 local_2d0;
  TVector<float>_u_0 local_2c4;
  TVector<float>_u_0 local_2b8;
  TVector<float>_u_0 local_2ac;
  TVector<float>_u_0 local_2a0;
  TVector<float>_u_0 local_294;
  double local_288;
  double local_280;
  double local_278;
  undefined8 local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  undefined8 local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  FDynamicMeshBuilder local_210;
  FDynamicMeshBuilder local_1e8;
  double local_1c0;
  double local_1b8;
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  uint local_178;
  uint uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_538;
  uVar14 = 0;
  local_490 = param_4;
  local_4b0 = param_2;
  local_418 = param_1;
  if (this->MaterialInstance == (UMaterialInstanceDynamic *)0x0) {
    local_498 = (FMaterialRenderProxy *)0x0;
  }
  else {
    local_498 = (FMaterialRenderProxy *)(**(code **)(this->MaterialInstance->_padding_ + 0x310))();
  }
  cVar3 = (**(code **)(*(longlong *)this->_padding_ + 0xe8))
                    ((longlong *)this->_padding_,this->_padding_,&local_168);
  if (cVar3 == '\0') {
    local_168.M[0][0] = (double)this->_padding_;
    local_168.M[0][1] = (double)this->_padding_;
    local_168.M[0][2] = (double)this->_padding_;
    local_168.M[0][3] = (double)this->_padding_;
    local_168.M[1][0] = (double)this->_padding_;
    local_168.M[1][1] = (double)this->_padding_;
    local_168.M[1][2] = (double)this->_padding_;
    local_168.M[1][3] = (double)this->_padding_;
    local_168.M[2][0] = (double)this->_padding_;
    local_168.M[2][1] = (double)this->_padding_;
    local_168.M[2][2] = (double)this->_padding_;
    local_168.M[2][3] = (double)this->_padding_;
    local_168.M[3][0] = (double)this->_padding_;
    local_168.M[3][1] = (double)this->_padding_;
    local_168.M[3][2] = (double)this->_padding_;
    local_168.M[3][3] = (double)this->_padding_;
  }
  if ((this->RenderTarget != (UTextureRenderTarget2D *)0x0) &&
     (pFVar11 = UTexture::GetResource((UTexture *)this->RenderTarget),
     uVar18 = __xmm_80000000800000008000000080000000, fVar27 = __real_3f800000,
     pFVar11 != (FTextureResource *)0x0)) {
    if (this->GeometryMode == Plane) {
      fVar34 = (float)(this->Pivot).field0_0x0._s_0.X;
      iVar10 = this->RenderTarget->SizeX;
      iVar9 = this->RenderTarget->SizeY;
      iVar5 = param_1->ArrayNum;
      fVar36 = (float)(this->Pivot).field0_0x0._s_0.Y;
      if (0 < iVar5) {
        local_4e4 = 1;
        local_4b8 = 0;
        do {
          lVar13 = local_4b8;
          uVar16 = 0;
          if ((int)uVar14 < iVar5) {
            uVar16 = ~uVar14 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FDynamicMeshBuilder::FDynamicMeshBuilder
                    (&local_210,
                     *(Type *)(*(longlong *)((param_1->AllocatorInstance).Data + lVar13) + 0x1bf8),1
                     ,0,false,(FDynamicMeshBufferAllocator *)0x0);
          if ((param_3 & local_4e4) != 0) {
            local_36c._0_8_ = 0x3f800000;
            local_36c._s_0.Z = 0.0;
            local_360._0_8_ = 0;
            fVar22 = (float)((uint)((float)-iVar10 * fVar34) ^ uVar18);
            local_360._s_0.Z = -1.0;
            fVar29 = (float)((uint)((float)-iVar9 * fVar36) ^ uVar18);
            local_354._s_0.X = 0.0;
            local_354._s_0.Y = -1.0;
            local_354._s_0.Z = 0.0;
            local_488 = (TVector2<float>_u_0)0x0;
            local_348._s_0.X = -0.0;
            local_348._s_0.Y = fVar22;
            local_348._s_0.Z = fVar29;
            iVar5 = FDynamicMeshBuilder::AddVertex
                              (&local_210,(TVector<float> *)&local_348._s_0,
                               (TVector2<float> *)&local_488._s_0,(TVector<float> *)&local_354._s_0,
                               (TVector<float> *)&local_360._s_0,(TVector<float> *)&local_36c._s_0,
                               &FColor::White);
            local_33c._0_8_ = 0x3f800000;
            local_33c._s_0.Z = 0.0;
            local_3f0._0_8_ = 0;
            local_3f0._s_0.Z = -1.0;
            fVar25 = (fVar36 - fVar27) * (float)iVar9;
            local_330._s_0.X = 0.0;
            local_330._s_0.Y = -1.0;
            local_330._s_0.Z = 0.0;
            local_480._s_0.X = 0.0;
            local_480._s_0.Y = 1.0;
            local_324._s_0.X = -0.0;
            local_324._s_0.Y = fVar22;
            local_324._s_0.Z = fVar25;
            iVar6 = FDynamicMeshBuilder::AddVertex
                              (&local_210,(TVector<float> *)&local_324._s_0,
                               (TVector2<float> *)&local_480._s_0,(TVector<float> *)&local_330._s_0,
                               (TVector<float> *)&local_3f0._s_0,(TVector<float> *)&local_33c._s_0,
                               &FColor::White);
            local_318._0_8_ = 0x3f800000;
            local_318._s_0.Z = 0.0;
            local_30c._0_8_ = 0;
            local_30c._s_0.Z = -1.0;
            fVar22 = (fVar34 - fVar27) * (float)iVar10;
            local_300._s_0.X = 0.0;
            local_300._s_0.Y = -1.0;
            local_300._s_0.Z = 0.0;
            local_478._s_0.X = 1.0;
            local_478._s_0.Y = 1.0;
            local_2f4._s_0.X = -0.0;
            local_2f4._s_0.Y = fVar22;
            local_2f4._s_0.Z = fVar25;
            iVar7 = FDynamicMeshBuilder::AddVertex
                              (&local_210,(TVector<float> *)&local_2f4._s_0,
                               (TVector2<float> *)&local_478._s_0,(TVector<float> *)&local_300._s_0,
                               (TVector<float> *)&local_30c._s_0,(TVector<float> *)&local_318._s_0,
                               &FColor::White);
            local_2e8._0_8_ = 0x3f800000;
            local_2e8._s_0.Z = 0.0;
            local_2dc._0_8_ = 0;
            local_2dc._s_0.Z = -1.0;
            local_2d0._s_0.X = 0.0;
            local_2d0._s_0.Y = -1.0;
            local_2d0._s_0.Z = 0.0;
            local_470 = (TVector2<float>_u_0)0x3f800000;
            local_2c4._s_0.X = -0.0;
            local_2c4._s_0.Y = fVar22;
            local_2c4._s_0.Z = fVar29;
            iVar8 = FDynamicMeshBuilder::AddVertex
                              (&local_210,(TVector<float> *)&local_2c4._s_0,
                               (TVector2<float> *)&local_470._s_0,(TVector<float> *)&local_2d0._s_0,
                               (TVector<float> *)&local_2dc._s_0,(TVector<float> *)&local_2e8._s_0,
                               &FColor::White);
            FDynamicMeshBuilder::AddTriangle(&local_210,iVar5,iVar6,iVar7);
            FDynamicMeshBuilder::AddTriangle(&local_210,iVar5,iVar7,iVar8);
            local_4d8.bIsFirstPerson = (bool)(*(byte *)((longlong)&this->_padding_ + 5) & 1);
            local_4d8.CastShadow = true;
            local_4d8.bDisableBackfaceCulling = false;
            local_4d8.bWireframe = false;
            local_4d8.bReceivesDecals = true;
            local_4d8.bCanApplyViewModeOverrides = false;
            local_4d8.bUseWireframeSelectionColoring = false;
            local_4d8.bUseSelectionOutline = true;
            FDynamicMeshBuilder::GetMesh
                      (&local_210,(TMatrix<double> *)&this->_padding_,&local_168,local_498,'\0',
                       &local_4d8,(FDynamicMeshDrawOffset *)0x0,uVar14,local_490,
                       (FHitProxyId)0xffffffff);
            lVar13 = local_4b8;
            param_1 = local_418;
          }
          FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_210);
          iVar5 = param_1->ArrayNum;
          local_4b8 = lVar13 + 8;
          local_4e4 = local_4e4 << 1 | (uint)((int)local_4e4 < 0);
          uVar14 = uVar14 + 1;
          param_2 = local_4b0;
        } while ((int)uVar14 < iVar5);
      }
    }
    else {
      if ((this->GeometryMode != Cylinder) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4348376515700851103>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetComponent.cpp"
                             ,0x19f,"GeometryMode == EWidgetGeometryMode::Cylinder"), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      dVar32 = __real_3fe0000000000000;
      pUVar1 = this->RenderTarget;
      dVar35 = (double)pUVar1->SizeX / this->ArcAngle;
      iVar5 = (int)(this->ArcAngle * ___real_4021d34a57be1a7e + __real_4010000000000000);
      local_4a0 = iVar5;
      local_420 = dVar35;
      __libm_sse2_sincos_();
      iVar10 = pUVar1->SizeY;
      local_230 = *(double *)((longlong)&(this->Pivot).field0_0x0 + 8);
      uVar26 = SUB84(local_230,0);
      uVar28 = (undefined4)((ulonglong)local_230 >> 0x20);
      iVar9 = param_1->ArrayNum;
      dStack_190 = extraout_XMM0._8_8_;
      local_4bc = 0;
      local_1a8._8_4_ = extraout_XMM0._0_4_;
      local_1a8._0_8_ = dStack_190 * dVar35;
      local_1a8._12_4_ = extraout_XMM0._4_4_;
      auVar24._0_8_ = (double)-iVar10 * local_230;
      auVar24._8_8_ = 0;
      local_198 = extraout_XMM0._0_8_ * (dVar35 + dVar35) *
                  (dVar32 - (this->Pivot).field0_0x0._s_0.X);
      local_288 = (double)iVar10;
      param_2 = local_4b0;
      local_220 = auVar24._0_8_;
      if (0 < iVar9) {
        uVar14 = (uint)__xmm_80000000000000008000000000000000;
        uVar18 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        uVar30 = (undefined4)__real_3ff0000000000000;
        uVar31 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        local_4e0 = 1;
        local_410 = 0;
        fVar27 = __real_3f800000;
        do {
          lVar13 = local_410;
          uVar16 = local_4bc;
          uVar17 = 0;
          if ((int)local_4bc < iVar9) {
            uVar17 = ~local_4bc >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FDynamicMeshBuilder::FDynamicMeshBuilder
                    (&local_1e8,
                     *(Type *)(*(longlong *)((param_1->AllocatorInstance).Data + lVar13) + 0x1bf8),1
                     ,0,false,(FDynamicMeshBufferAllocator *)0x0);
          if ((param_3 & local_4e0) != 0) {
            local_218 = this->ArcAngle / (double)iVar5;
            if (0 < iVar5) {
              local_240 = ((double)CONCAT44(uVar28,uVar26) - (double)CONCAT44(uVar31,uVar30)) *
                          local_288;
              uVar16 = auVar24._0_4_ ^ uVar14;
              uVar17 = auVar24._4_4_ ^ uVar18;
              local_4b8 = CONCAT44(local_4b8._4_4_,fVar27 / (float)iVar5);
              local_4c8 = (float)local_240;
              local_240 = local_240 - (double)CONCAT44(uVar17,uVar16);
              local_4c0 = (float)(double)CONCAT44(uVar17,uVar16);
              local_238 = local_240 * local_240;
              fVar27 = fVar27 / (float)iVar5;
              iVar10 = 0;
              do {
                dVar19 = local_238;
                dVar15 = local_240;
                uVar28 = 0;
                uVar26 = 0;
                __libm_sse2_sincos_();
                __libm_sse2_sincos_();
                iVar9 = iVar10 + 1;
                uStack_170 = extraout_XMM0_01._8_4_;
                uStack_16c = extraout_XMM0_01._12_4_;
                dVar23 = (double)local_1a8._0_8_ - extraout_XMM0_00._8_8_ * dVar35;
                local_4c4 = (float)iVar9 * fVar27;
                dVar32 = extraout_XMM0_00._0_8_ * dVar35 + local_198;
                local_188._0_8_ =
                     (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) ^ uVar18,
                                      SUB84(dVar32,0) ^ uVar14);
                local_188._8_4_ = extraout_XMM0_00._8_4_;
                local_188._12_4_ = extraout_XMM0_00._12_4_;
                dVar32 = extraout_XMM0_01._0_8_ * dVar35 + local_198;
                local_280 = (double)local_1a8._0_8_ - extraout_XMM0_01._8_8_ * dVar35;
                local_178 = SUB84(dVar32,0) ^ uVar14;
                uStack_174 = (uint)((ulonglong)dVar32 >> 0x20) ^ uVar18;
                local_448 = (double)CONCAT44(uStack_174,local_178) - local_188._0_8_;
                local_450 = local_280 - dVar23;
                dVar32 = local_448 * local_448 + local_450 * local_450;
                if (__real_3e45798ee0000000 < dVar32) {
                  local_1c0 = (double)CONCAT44(uVar31,uVar30) / SQRT(dVar32);
                  local_450 = local_450 * local_1c0;
                  local_448 = local_448 * local_1c0;
                }
                if (__real_3e45798ee0000000 < dVar19) {
                  local_1b8 = (double)CONCAT44(uVar31,uVar30) / SQRT(dVar19);
                  dVar15 = dVar15 * local_1b8;
                }
                local_430 = dVar15 * local_448;
                uVar14 = SUB84(dVar15 * local_450,0) ^ uVar14;
                uVar18 = (uint)((ulonglong)(dVar15 * local_450) >> 0x20) ^ uVar18;
                local_428 = (double)CONCAT44(uVar18,uVar14);
                if (iVar10 == 0) {
                  dVar19 = 0.0;
                  dVar20 = local_450;
                  dVar21 = local_448;
                  uVar30 = uVar26;
                  uVar31 = uVar28;
                  dVar32 = local_430;
                  dVar35 = dVar15;
                  dVar33 = 0.0;
                }
                else {
                  uVar26 = (undefined4)local_270;
                  uVar28 = (undefined4)((ulonglong)local_270 >> 0x20);
                  uVar14 = SUB84(local_250,0);
                  uVar18 = (uint)((ulonglong)local_250 >> 0x20);
                  uVar30 = (undefined4)local_248;
                  uVar31 = (undefined4)((ulonglong)local_248 >> 0x20);
                  dVar19 = local_278;
                  dVar20 = local_4a8;
                  dVar21 = local_228;
                  dVar32 = local_258;
                  dVar35 = local_260;
                  dVar33 = local_268;
                }
                local_2b8._s_0.X = (float)dVar32;
                local_468._s_0.Y = 0.0;
                local_4a8 = (double)CONCAT44(local_4a8._4_4_,local_2b8._s_0.X);
                fVar36 = (float)dVar23;
                fVar34 = (float)local_188._0_8_;
                local_294._s_0.Z = local_4c0;
                local_468._s_0.X = (float)iVar10 * fVar27;
                local_458 = dVar15;
                local_2b8._s_0.Y = (float)(double)CONCAT44(uVar18,uVar14);
                local_2b8._s_0.Z = (float)(double)CONCAT44(uVar31,uVar30);
                local_2ac._s_0.X = (float)(double)CONCAT44(uVar28,uVar26);
                local_2ac._s_0.Y = (float)dVar33;
                local_2ac._s_0.Z = (float)dVar35;
                local_2a0._s_0.X = (float)dVar20;
                local_2a0._s_0.Y = (float)dVar21;
                local_2a0._s_0.Z = (float)dVar19;
                local_294._s_0.X = fVar36;
                local_294._s_0.Y = fVar34;
                iVar5 = FDynamicMeshBuilder::AddVertex
                                  (&local_1e8,(TVector<float> *)&local_294._s_0,
                                   (TVector2<float> *)&local_468._s_0,
                                   (TVector<float> *)&local_2a0._s_0,
                                   (TVector<float> *)&local_2ac._s_0,
                                   (TVector<float> *)&local_2b8._s_0,&FColor::White);
                local_408._s_0.X = local_4a8._0_4_;
                local_3d8._s_0.Z = local_4c8;
                local_460._s_0.Y = 1.0;
                local_460._s_0.X = (float)iVar10 * fVar27;
                local_408._s_0.Y = (float)(double)CONCAT44(uVar18,uVar14);
                local_408._s_0.Z = (float)(double)CONCAT44(uVar31,uVar30);
                local_3fc._s_0.X = (float)(double)CONCAT44(uVar28,uVar26);
                local_3fc._s_0.Y = (float)dVar33;
                local_3fc._s_0.Z = (float)dVar35;
                local_3e4._s_0.X = (float)dVar20;
                local_3e4._s_0.Y = (float)dVar21;
                local_3e4._s_0.Z = (float)dVar19;
                local_3d8._s_0.X = fVar36;
                local_3d8._s_0.Y = fVar34;
                iVar10 = FDynamicMeshBuilder::AddVertex
                                   (&local_1e8,(TVector<float> *)&local_3d8._s_0,
                                    (TVector2<float> *)&local_460._s_0,
                                    (TVector<float> *)&local_3e4._s_0,
                                    (TVector<float> *)&local_3fc._s_0,
                                    (TVector<float> *)&local_408._s_0,&FColor::White);
                dVar19 = local_448;
                dVar15 = local_450;
                dVar32 = local_458;
                fVar29 = (float)local_430;
                dVar35 = (double)CONCAT44(uStack_174,local_178);
                fVar25 = (float)local_428;
                local_3cc._s_0.Z = 0.0;
                local_3c0._0_8_ = 0;
                local_3b4._s_0.Z = 0.0;
                fVar22 = (float)local_458;
                local_440._s_0.Y = 1.0;
                fVar36 = (float)local_450;
                fVar34 = (float)local_448;
                fVar27 = (float)local_280;
                local_440._s_0.X = local_4c4;
                local_3a8._s_0.Z = local_4c8;
                local_3cc._s_0.X = fVar29;
                local_3cc._s_0.Y = fVar25;
                local_3c0._s_0.Z = fVar22;
                local_3b4._s_0.X = fVar36;
                local_3b4._s_0.Y = fVar34;
                local_3a8._s_0.X = fVar27;
                local_3a8._s_0.Y = (float)dVar35;
                iVar6 = FDynamicMeshBuilder::AddVertex
                                  (&local_1e8,(TVector<float> *)&local_3a8._s_0,
                                   (TVector2<float> *)&local_440._s_0,
                                   (TVector<float> *)&local_3b4._s_0,
                                   (TVector<float> *)&local_3c0._s_0,
                                   (TVector<float> *)&local_3cc._s_0,&FColor::White);
                local_438._s_0.X = local_4c4;
                local_384._s_0.Z = local_4c0;
                local_378._s_0.Z = 0.0;
                local_39c._0_8_ = 0;
                local_390._s_0.Z = 0.0;
                local_438._s_0.Y = 0.0;
                local_39c._s_0.Z = fVar22;
                local_390._s_0.X = fVar36;
                local_390._s_0.Y = fVar34;
                local_384._s_0.X = fVar27;
                local_384._s_0.Y = (float)dVar35;
                local_378._s_0.X = fVar29;
                local_378._s_0.Y = fVar25;
                iVar7 = FDynamicMeshBuilder::AddVertex
                                  (&local_1e8,(TVector<float> *)&local_384._s_0,
                                   (TVector2<float> *)&local_438._s_0,
                                   (TVector<float> *)&local_390._s_0,
                                   (TVector<float> *)&local_39c._s_0,
                                   (TVector<float> *)&local_378._s_0,&FColor::White);
                FDynamicMeshBuilder::AddTriangle(&local_1e8,iVar5,iVar10,iVar6);
                FDynamicMeshBuilder::AddTriangle(&local_1e8,iVar5,iVar6,iVar7);
                local_258 = local_430;
                local_278 = 0.0;
                local_270 = 0;
                local_268 = 0.0;
                local_4a8 = dVar15;
                local_228 = dVar19;
                local_260 = dVar32;
                uVar14 = (uint)__xmm_80000000000000008000000000000000;
                uVar18 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
                uVar30 = (undefined4)__real_3ff0000000000000;
                uVar31 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
                local_250 = local_428;
                local_248 = 0;
                fVar27 = (float)local_4b8;
                dVar35 = local_420;
                iVar10 = iVar9;
              } while (iVar9 < local_4a0);
              auVar24._8_8_ = 0;
              auVar24._0_8_ = local_220;
              uVar26 = SUB84(local_230,0);
              uVar28 = (undefined4)((ulonglong)local_230 >> 0x20);
              param_1 = local_418;
              iVar5 = local_4a0;
              uVar16 = local_4bc;
              fVar27 = __real_3f800000;
            }
            local_4d0.bIsFirstPerson = (bool)(*(byte *)((longlong)&this->_padding_ + 5) & 1);
            local_4d0.CastShadow = true;
            local_4d0.bDisableBackfaceCulling = false;
            local_4d0.bWireframe = false;
            local_4d0.bReceivesDecals = true;
            local_4d0.bCanApplyViewModeOverrides = false;
            local_4d0.bUseWireframeSelectionColoring = false;
            local_4d0.bUseSelectionOutline = true;
            FDynamicMeshBuilder::GetMesh
                      (&local_1e8,(TMatrix<double> *)&this->_padding_,&local_168,local_498,'\0',
                       &local_4d0,(FDynamicMeshDrawOffset *)0x0,uVar16,local_490,
                       (FHitProxyId)0xffffffff);
            lVar13 = local_410;
          }
          FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_1e8);
          iVar9 = param_1->ArrayNum;
          local_4bc = uVar16 + 1;
          local_4e0 = local_4e0 << 1 | (uint)((int)local_4e0 < 0);
          local_410 = lVar13 + 8;
          param_2 = local_4b0;
        } while ((int)local_4bc < iVar9);
      }
    }
  }
  uVar14 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      if ((param_3 >> (uVar14 & 0x1f) & 1) != 0) {
        RenderCollision(this,this->BodySetup,local_490,uVar14,&param_2->EngineShowFlags,
                        (TBoxSphereBounds<double,double> *)&this->_padding_,
                        (this->_padding_ & 0x600) != 0);
        lVar13 = this->_padding_;
        pFVar12 = FMeshElementCollector::GetPDI(local_490,uVar14);
        FPrimitiveSceneProxy::RenderBounds
                  ((FPrimitiveSceneProxy *)this,pFVar12,&param_2->EngineShowFlags,
                   (TBoxSphereBounds<double,double> *)&this->_padding_,(lVar13 & 0x600) != 0);
      }
      uVar14 = uVar14 + 1;
      param_2 = local_4b0;
    } while ((int)uVar14 < param_1->ArrayNum);
  }
  return;
}

// GetLightRelevance @ 146a76d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
FWidget3DSceneProxy::GetLightRelevance
          (FWidget3DSceneProxy *this,FLightSceneProxy *param_1,bool *param_2,bool *param_3,
          bool *param_4,bool *param_5)

{
  *param_2 = false;
  *param_3 = false;
  *param_4 = false;
  *param_5 = false;
  return;
}

// GetMemoryFootprint @ 146a77260

uint __thiscall FWidget3DSceneProxy::GetMemoryFootprint(FWidget3DSceneProxy *this)

{
  return *(int *)((longlong)&this->_padding_ + 4) * 4 + 0x2e0;
}

// GetTypeHash @ 146a795c0

ulong64 __thiscall FWidget3DSceneProxy::GetTypeHash(FWidget3DSceneProxy *this)

{
  return 0x1551b90a0;
}

// GetViewRelevance @ 146a797a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FWidget3DSceneProxy::GetViewRelevance
          (FWidget3DSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  bVar5 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  uVar7 = 0;
  if ((!bVar5) || (uVar6 = 4, (param_1->Family->EngineShowFlags).WidgetComponents == 0)) {
    uVar6 = uVar7;
  }
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | uVar6 | 2;
  bVar5 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar5 << 5;
  uVar6 = ((uint)*(byte *)((longlong)&this->_padding_ + 3) << 4 ^
          *(uint *)&__return_storage_ptr__->field_0x8) & 0x80 ^
          *(uint *)&__return_storage_ptr__->field_0x8;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar6;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
    uVar7 = 0x2000;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar7 | uVar6 & 0xffffdfff;
  bVar5 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar5 << 3;
  uVar4 = *(undefined4 *)&__return_storage_ptr__->field_0x8;
  uVar7 = ((uint)*(byte *)((longlong)&this->_padding_ + 7) << 0xe ^
          *(uint *)&__return_storage_ptr__->field_0x8) & 0x4000 ^ uVar4;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar7 & 0xfffffeff;
  cVar2 = (char)this->_padding_;
  if (((((cVar2 == '\x02') || (cVar2 == '\x01')) || ((this->_padding_ & 0x1000000000000) != 0)) ||
      ((bVar3 = *(byte *)((longlong)&this->_padding_ + 2), (char)bVar3 < '\0' ||
       (uVar6 = 0, (bVar3 & 0x72) != 0)))) &&
     ((uVar6 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      ((char)(ZPULL(uVar4,7,1) << 7) < '\0')))) {
    uVar6 = 0x10;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar7 & 0xfffffeef | uVar6;
  return __return_storage_ptr__;
}

// OnTransformChanged @ 146a87470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWidget3DSceneProxy::OnTransformChanged(FWidget3DSceneProxy *this,FRHICommandListBase *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)this->_padding_;
  dVar2 = (double)this->_padding_;
  (this->Origin).field0_0x0._s_0.X = (double)this->_padding_;
  (this->Origin).field0_0x0._s_0.Y = dVar1;
  (this->Origin).field0_0x0._s_0.Z = dVar2;
  return;
}

// RenderCollision @ 146a90820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWidget3DSceneProxy::RenderCollision
          (FWidget3DSceneProxy *this,UBodySetup *param_1,FMeshElementCollector *param_2,int param_3,
          FEngineShowFlags *param_4,TBoxSphereBounds<double,double> *param_5,bool param_6)

{
  byte bVar1;
  double dVar2;
  FName FVar3;
  longlong lVar4;
  bool bVar5;
  FNameEntryId FVar6;
  FColoredMaterialRenderProxy *pFVar7;
  undefined4 extraout_var;
  FMaterialRenderProxy *pFVar8;
  FLinearColor *this_00;
  undefined1 auStackY_128 [32];
  bool bVar9;
  FColor_u_0 local_d8;
  uint uStack_d4;
  FLinearColor_u_0 local_d0;
  FLinearColor_u_0 local_c0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  if ((((param_1 != (UBodySetup *)0x0) &&
       (local_48 = __security_cookie.value ^ (ulonglong)auStackY_128, param_4->Collision != 0)) &&
      ((this->_padding_ & 0x20000000) != 0)) &&
     ((bVar5 = AllowDebugViewmodes(), bVar5 &&
      (dVar2 = UE::Math::TMatrix<double>::Determinant((TMatrix<double> *)&this->_padding_),
      __real_3e45798ee0000000 <=
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
    lVar4 = this->_padding_;
    if (*(char *)((longlong)&param_1->_padding_ + 1) == '\x03') {
      pFVar7 = ::operator_new(0xe0);
      if (pFVar7 == (FColoredMaterialRenderProxy *)0x0) {
        pFVar7 = (FColoredMaterialRenderProxy *)0x0;
      }
      else {
        FVar6 = FNameEntryId::FromValidEName((EName)&local_d8);
        local_d0._s_0.R = (float)*(undefined4 *)&this->_padding_;
        local_d0._s_0.G = *(float *)((longlong)&this->_padding_ + 4);
        local_d0._s_0.B = (float)*(undefined4 *)&this->_padding_;
        local_d0._s_0.A = *(float *)((longlong)&this->_padding_ + 4);
        local_d8 = (FColor_u_0)((FColor_u_0 *)CONCAT44(extraout_var,FVar6.Value))->Bits;
        uStack_d4 = 0;
        pFVar8 = (FMaterialRenderProxy *)
                 (**(code **)(((GEngine->ShadedLevelColorationUnlitMaterial).field0_0x0.DebugPtr)->
                              _padding_ + 0x310))();
        FVar3.Number = uStack_d4;
        FVar3.ComparisonIndex.Value = local_d8.Bits;
        pFVar7 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                           (pFVar7,pFVar8,(FLinearColor *)&local_d0._s_0,FVar3);
      }
      FMeshElementCollector::RegisterOneFrameMaterialProxy(param_2,(FMaterialRenderProxy *)pFVar7);
      UE::Math::TTransform<double>::SetFromMatrix(&local_a8,(TMatrix<double> *)&this->_padding_);
      bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
      if (((((char)bVar1 < '\0') || ((bVar1 & 0x10) != 0)) || ((bVar1 & 3) == 3)) ||
         ((bVar1 & 0x60) != 0)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      local_c0._0_8_ = this->_padding_;
      local_c0._8_8_ = this->_padding_;
      FLinearColor::ToFColorSRGB((FLinearColor *)&local_c0._s_0);
      bVar9 = true;
    }
    else {
      UE::Math::TTransform<double>::SetFromMatrix(&local_a8,(TMatrix<double> *)&this->_padding_);
      bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
      if ((((char)bVar1 < '\0') || ((bVar1 & 0x10) != 0)) ||
         (((bVar1 & 3) == 3 || ((bVar1 & 0x60) != 0)))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      local_d0._s_0.R = FLinearColor::sRGBToLinearTable[0x9d];
      local_d0._s_0.B = FLinearColor::sRGBToLinearTable[0xdf];
      local_d0._s_0.G = FLinearColor::sRGBToLinearTable[0x95];
      local_d0._s_0.A = 1.0;
      this_00 = GetSelectionColor((FLinearColor *)&local_c0._s_0,(FLinearColor *)&local_d0._s_0,
                                  (lVar4 & 0x600) != 0,
                                  (bool)(*(byte *)((longlong)&this->_padding_ + 1) >> 4 & 1),true);
      FLinearColor::ToFColorSRGB(this_00);
      pFVar7 = (FColoredMaterialRenderProxy *)0x0;
      bVar9 = false;
    }
    FKAggregateGeom::GetAggGeom
              (&param_1->AggGeom,&local_a8,(FColor)local_d8._s_0,(FMaterialRenderProxy *)pFVar7,
               false,bVar9,bVar5,param_3,param_2);
  }
  return;
}

