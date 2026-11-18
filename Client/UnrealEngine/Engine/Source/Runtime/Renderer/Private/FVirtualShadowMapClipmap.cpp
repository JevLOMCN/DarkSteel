// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// GetVirtualShadowMapId @ 14568b1b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __thiscall FVirtualShadowMapClipmap::GetVirtualShadowMapId(FVirtualShadowMapClipmap *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->PerLightCacheEntry).Object != (FVirtualShadowMapPerLightCacheEntry *)0x0) {
    return ((this->PerLightCacheEntry).Object)->VirtualShadowMapId;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return ((this->PerLightCacheEntry).Object)->VirtualShadowMapId;
}

// FVirtualShadowMapClipmap @ 1457c1f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FVirtualShadowMapClipmap * __thiscall
FVirtualShadowMapClipmap::FVirtualShadowMapClipmap
          (FVirtualShadowMapClipmap *this,FVirtualShadowMapArray *param_1,FLightSceneInfo *param_2,
          FViewMatrices *param_3,TIntPoint<int> param_4,FViewInfo *param_5,float param_6,
          FVirtualShadowMapClipmapConfig *param_7)

{
  int *piVar1;
  double dVar2;
  FVirtualShadowMapArrayCacheManager *this_00;
  FLightSceneProxy *pFVar3;
  longlong *plVar4;
  FName FVar5;
  FVirtualShadowMapPerLightCacheEntry *pFVar6;
  ForElementType<FVirtualShadowMapClipmap::FLevelData> FVar7;
  ForElementType<UE::Math::TPlane<double>_> FVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  TConsoleVariableData<float> *pTVar18;
  TConsoleVariableData<int> *pTVar19;
  TConsoleVariableData<int> *pTVar20;
  TConsoleVariableData<bool> *pTVar21;
  FVirtualShadowMapProjectionShaderData *pFVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  TInverseRotationMatrix<double> *pTVar29;
  FVirtualShadowMapClipmap *pFVar30;
  UWorld *this_01;
  FCollisionQueryFlag *pFVar31;
  FName *pFVar32;
  TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *pTVar33;
  FVirtualShadowMapProjectionShaderData *pFVar34;
  FVirtualShadowMapProjectionShaderData *pFVar35;
  TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar36
  ;
  longlong lVar37;
  ForElementType<FVirtualShadowMapClipmap::FLevelData> FVar38;
  FVirtualShadowMapProjectionShaderData *pFVar39;
  undefined8 *puVar40;
  int iVar41;
  double *pdVar42;
  uint uVar43;
  double dVar44;
  FVirtualShadowMapCacheEntry *this_02;
  float fVar45;
  float fVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  uint uVar54;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar55;
  double dVar56;
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar61;
  undefined1 auVar60 [16];
  undefined4 uVar62;
  undefined4 uVar63;
  float fVar64;
  undefined1 auStackY_988 [32];
  longlong local_940;
  longlong local_938;
  FCollisionObjectQueryParams local_930;
  int local_928;
  int iStack_924;
  longlong local_920;
  double local_918;
  double dStack_910;
  double local_908;
  TStatId local_900;
  longlong local_8f8;
  longlong local_8f0;
  double local_8e8;
  longlong local_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined4 uStack_8c0;
  undefined1 uStack_8bc;
  undefined2 uStack_8bb;
  undefined1 uStack_8b9;
  TIntPoint<__int64>_u_0 local_8b8;
  double local_8a8;
  double dStack_8a0;
  double local_898;
  double dStack_890;
  double local_888;
  double dStack_880;
  double local_878;
  double dStack_870;
  double local_868;
  double dStack_860;
  double local_858;
  double dStack_850;
  double local_848;
  double dStack_840;
  double local_838;
  double dStack_830;
  TVector<double>_u_0 local_828;
  double local_810;
  FName local_808 [2];
  TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> local_7f8;
  undefined1 local_7e8 [16];
  undefined1 local_7d8 [16];
  TRotator<double> local_7c8;
  FHitResult local_7a8;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5c8 [36];
  FVirtualShadowMapProjectionShaderData local_4a8;
  TMatrix<double> local_378;
  TMatrix<double> local_2f8;
  TMatrix<double> local_278;
  FCollisionQueryParams local_1f8;
  TInverseRotationMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_988;
  this->_padding_ = (longlong)&___7FVirtualShadowMapClipmap__6B_;
  piVar1 = &(this->LevelData).ArrayMax;
  *(undefined4 *)&this->_padding_ = 0;
  dVar13 = __real_3ff0000000000000;
  iVar28 = param_7->LastLevel;
  iVar26 = param_7->FirstCoarseLevel;
  iVar41 = param_7->LastCoarseLevel;
  (this->Config).FirstLevel = param_7->FirstLevel;
  (this->Config).LastLevel = iVar28;
  (this->Config).FirstCoarseLevel = iVar26;
  (this->Config).LastCoarseLevel = iVar41;
  uVar43 = param_7->ShadowTypeId;
  fVar55 = param_7->ResolutionLodBias;
  fVar46 = param_7->ResolutionLodBiasMoving;
  bVar23 = param_7->bForceInvalidate;
  bVar25 = param_7->bIsFirstPersonShadow;
  bVar24 = param_7->bCullDynamicTightly;
  bVar17 = param_7->bUseReceiverMask;
  this->LightSceneInfo = param_2;
  this->DependentView = param_5;
  (this->Config).ShadowTypeId = uVar43;
  (this->Config).ResolutionLodBias = fVar55;
  (this->Config).ResolutionLodBiasMoving = fVar46;
  (this->Config).bForceInvalidate = bVar23;
  (this->Config).bIsFirstPersonShadow = bVar25;
  (this->Config).bCullDynamicTightly = bVar24;
  (this->Config).bUseReceiverMask = bVar17;
  (this->LevelData).AllocatorInstance.SecondaryData =
       (ForElementType<FVirtualShadowMapClipmap::FLevelData>)0x0;
  (this->LevelData).ArrayNum = 0;
  *piVar1 = 0x20;
  (this->ViewFrustumBounds).Planes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (this->ViewFrustumBounds).Planes.ArrayNum = 0;
  (this->ViewFrustumBounds).Planes.ArrayMax = 6;
  (this->ViewFrustumBounds).PermutedPlanes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (this->ViewFrustumBounds).PermutedPlanes.ArrayNum = 0;
  (this->ViewFrustumBounds).PermutedPlanes.ArrayMax = 8;
  (this->PerLightCacheEntry).Object = (FVirtualShadowMapPerLightCacheEntry *)0x0;
  (this->PerLightCacheEntry).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->RenderedPrimitives).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->RenderedPrimitives).NumBits = 0;
  (this->RenderedPrimitives).MaxBits = 0x80;
  this_00 = param_1->CacheManager;
  pFVar3 = this->LightSceneInfo->Proxy;
  dStack_910 = (pFVar3->WorldToLight).M[1][0];
  local_918 = (pFVar3->WorldToLight).M[0][0];
  local_908 = (pFVar3->WorldToLight).M[2][0];
  dVar56 = dStack_910 * dStack_910 + local_918 * local_918 + local_908 * local_908;
  if (dVar56 != dVar13) {
    if (__real_3e45798ee0000000 <= dVar56) {
      local_810 = dVar13 / SQRT(dVar56);
      local_918 = local_918 * local_810;
      dStack_910 = local_810 * dStack_910;
      local_908 = local_810 * local_908;
    }
    else {
      local_908 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_918 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_910 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
  }
  (this->LightDirection).field0_0x0._s_0.X = local_918;
  (this->LightDirection).field0_0x0._s_0.Y = dStack_910;
  (this->LightDirection).field0_0x0._s_0.Z = local_908;
  UE::Math::TVector<double>::ToOrientationRotator(&this->LightDirection,&local_7c8);
  pTVar29 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                      (&local_168,&local_7c8);
  local_2f8.M[0][0] = *(double *)pTVar29;
  local_2f8.M[0][1] = *(double *)&pTVar29->field_0x8;
  local_2f8.M[0][2] = *(double *)&pTVar29->field_0x10;
  local_2f8.M[0][3] = *(double *)&pTVar29->field_0x18;
  local_2f8.M[1][0] = *(double *)&pTVar29->field_0x20;
  local_2f8.M[1][1] = *(double *)&pTVar29->field_0x28;
  local_2f8.M[1][2] = *(double *)&pTVar29->field_0x30;
  local_2f8.M[1][3] = *(double *)&pTVar29->field_0x38;
  local_2f8.M[2][0] = *(double *)&pTVar29->field_0x40;
  local_2f8.M[2][1] = *(double *)&pTVar29->field_0x48;
  local_2f8.M[2][2] = *(double *)&pTVar29->field_0x50;
  local_2f8.M[2][3] = *(double *)&pTVar29->field_0x58;
  local_2f8.M[3][0] = *(double *)&pTVar29->field_0x60;
  local_2f8.M[3][1] = *(double *)&pTVar29->field_0x68;
  local_2f8.M[3][2] = *(double *)&pTVar29->field_0x70;
  local_2f8.M[3][3] = *(double *)&pTVar29->field_0x78;
  local_378.M[0][0] = 0.0;
  local_378.M[0][1] = 0.0;
  local_378.M[0][2] = ___xmm_00000000000000003ff0000000000000;
  local_378.M[0][3] = _UNK_150689518;
  local_378.M[2][0] = ___xmm_0000000000000000bff0000000000000;
  local_378.M[2][1] = _UNK_15076ad98;
  local_378.M[3][0] = 0.0;
  local_378.M[3][1] = 0.0;
  local_378.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_378.M[1][1] = _UNK_15061cbc8;
  local_378.M[1][2] = 0.0;
  local_378.M[1][3] = 0.0;
  local_378.M[2][2] = 0.0;
  local_378.M[2][3] = 0.0;
  local_378.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_378.M[3][3] = _UNK_15061cbc8;
  VectorMatrixMultiply(&local_278,&local_2f8,&local_378);
  (this->WorldToLightViewRotationMatrix).M[0][0] = local_278.M[0][0];
  (this->WorldToLightViewRotationMatrix).M[0][1] = local_278.M[0][1];
  (this->WorldToLightViewRotationMatrix).M[0][2] = local_278.M[0][2];
  (this->WorldToLightViewRotationMatrix).M[0][3] = local_278.M[0][3];
  (this->WorldToLightViewRotationMatrix).M[1][0] = local_278.M[1][0];
  (this->WorldToLightViewRotationMatrix).M[1][1] = local_278.M[1][1];
  (this->WorldToLightViewRotationMatrix).M[1][2] = local_278.M[1][2];
  (this->WorldToLightViewRotationMatrix).M[1][3] = local_278.M[1][3];
  (this->WorldToLightViewRotationMatrix).M[2][0] = local_278.M[2][0];
  (this->WorldToLightViewRotationMatrix).M[2][1] = local_278.M[2][1];
  (this->WorldToLightViewRotationMatrix).M[2][2] = local_278.M[2][2];
  (this->WorldToLightViewRotationMatrix).M[2][3] = local_278.M[2][3];
  (this->WorldToLightViewRotationMatrix).M[3][0] = local_278.M[3][0];
  (this->WorldToLightViewRotationMatrix).M[3][1] = local_278.M[3][1];
  (this->WorldToLightViewRotationMatrix).M[3][2] = local_278.M[3][2];
  (this->WorldToLightViewRotationMatrix).M[3][3] = local_278.M[3][3];
  pTVar19 = CVarVirtualShadowMapClipmapMinCameraViewportWidth.Ref;
  local_8a8 = (this->WorldToLightViewRotationMatrix).M[0][0];
  dStack_8a0 = (this->WorldToLightViewRotationMatrix).M[1][0];
  local_898 = (this->WorldToLightViewRotationMatrix).M[2][0];
  local_888 = (this->WorldToLightViewRotationMatrix).M[0][1];
  dStack_890 = (this->WorldToLightViewRotationMatrix).M[3][0];
  local_878 = (this->WorldToLightViewRotationMatrix).M[2][1];
  dStack_880 = (this->WorldToLightViewRotationMatrix).M[1][1];
  local_868 = (this->WorldToLightViewRotationMatrix).M[0][2];
  dStack_870 = (this->WorldToLightViewRotationMatrix).M[3][1];
  local_858 = (this->WorldToLightViewRotationMatrix).M[2][2];
  dStack_860 = (this->WorldToLightViewRotationMatrix).M[1][2];
  dStack_850 = (this->WorldToLightViewRotationMatrix).M[3][2];
  local_848 = (this->WorldToLightViewRotationMatrix).M[0][3];
  dStack_840 = (this->WorldToLightViewRotationMatrix).M[1][3];
  dStack_830 = (this->WorldToLightViewRotationMatrix).M[3][3];
  local_838 = (this->WorldToLightViewRotationMatrix).M[2][3];
  bVar23 = IsInParallelRenderingThread();
  if ((!bVar23) &&
     (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
    pcVar9 = (code *)swi(3);
    pFVar30 = (FVirtualShadowMapClipmap *)(*pcVar9)();
    return pFVar30;
  }
  dVar56 = __real_3fe0000000000000;
  pdVar42 = (param_3->ProjectionMatrix).M[3] + 3;
  bVar23 = dVar13 != *pdVar42;
  bVar25 = *pdVar42 <= dVar13;
  if ((!bVar25 || !bVar23) &&
     (dVar47 = (param_3->InvProjectionMatrix).M[0][0], dVar47 = dVar47 + dVar47,
     lVar37 = -((longlong)ROUND(__real_bfe0000000000000 - (dVar47 + dVar47)) >> 1),
     param_4.field0_0x0._s_0.X < lVar37)) {
    param_4.field0_0x0._s_0.X = (int)lVar37;
  }
  fVar55 = (this->Config).ResolutionLodBias;
  if (param_4.field0_0x0._s_0.X < pTVar19->ShadowedValue[1]) {
    param_4.field0_0x0._s_0.X = pTVar19->ShadowedValue[1];
  }
  fVar45 = logf((__real_46800000 / (float)param_4.field0_0x0._s_0.X) *
                (float)(__real_3fe0000000000000 / (param_3->ProjectionScale).field0_0x0._s_0.X));
  fVar64 = __real_3f800000;
  fVar46 = (this->Config).ResolutionLodBiasMoving;
  if (fVar46 <= fVar55) {
    fVar46 = fVar55;
  }
  fVar55 = fVar45 * __real_3fb8aa3b + (fVar46 - fVar55) * param_6 + fVar55;
  this->ResolutionLodBias = fVar55;
  fVar55 = fVar55 + this->LightSceneInfo->Proxy->VSMResolutionLodBias;
  if (fVar55 <= 0.0) {
    fVar55 = 0.0;
  }
  this->ResolutionLodBias = fVar55;
  dVar47 = (param_3->ViewOrigin).field0_0x0._s_0.Y;
  (this->WorldOrigin).field0_0x0._s_0.X = (param_3->ViewOrigin).field0_0x0._s_0.X;
  (this->WorldOrigin).field0_0x0._s_0.Y = dVar47;
  (this->WorldOrigin).field0_0x0._s_0.Z = (param_3->ViewOrigin).field0_0x0._s_0.Z;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CameraToViewTarget).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CameraToViewTarget).field0_0x0._s_0.Y = (double)uVar12;
  (this->CameraToViewTarget).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pTVar21 = CVarOrthoVSMProjectViewOrigin.Ref;
  if (bVar25 && bVar23) {
LAB_1457c27dd:
    iVar28 = (this->Config).LastLevel;
    this->FirstLevel = (this->Config).FirstLevel;
    if (!bVar25 || !bVar23) goto LAB_1457c27f2;
  }
  else {
    bVar24 = IsInParallelRenderingThread();
    if ((!bVar24) &&
       (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar24)) {
      pcVar9 = (code *)swi(3);
      pFVar30 = (FVirtualShadowMapClipmap *)(*pcVar9)();
      return pFVar30;
    }
    if (pTVar21->ShadowedValue[1] == false) goto LAB_1457c27dd;
    dVar47 = (param_3->CameraToViewTarget).field0_0x0._s_0.Y;
    (this->CameraToViewTarget).field0_0x0._s_0.X = (param_3->CameraToViewTarget).field0_0x0._s_0.X;
    (this->CameraToViewTarget).field0_0x0._s_0.Y = dVar47;
    dVar47 = (param_3->CameraToViewTarget).field0_0x0._s_0.Z;
    (this->CameraToViewTarget).field0_0x0._s_0.Z = dVar47;
    pTVar21 = CVarOrthoVSMRayCastViewOrigin.Ref;
    dVar61 = (this->CameraToViewTarget).field0_0x0._s_0.X;
    dVar2 = (this->CameraToViewTarget).field0_0x0._s_0.Y;
    auVar48._0_8_ = dVar61 * dVar61;
    auVar48._8_8_ = 0;
    auVar51._0_8_ = dVar2 * dVar2 + auVar48._0_8_ + dVar47 * dVar47;
    auVar51._8_8_ = 0;
    auVar48 = sqrtpd(auVar48,auVar51);
    if (auVar48._0_8_ == 0.0) {
      bVar23 = IsInParallelRenderingThread();
      if ((!bVar23) &&
         (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
        pcVar9 = (code *)swi(3);
        pFVar30 = (FVirtualShadowMapClipmap *)(*pcVar9)();
        return pFVar30;
      }
      if ((((pTVar21->ShadowedValue[1] != false) && (this->DependentView != (FViewInfo *)0x0)) &&
          (lVar37 = this->DependentView->_padding_, lVar37 != 0)) &&
         ((plVar4 = *(longlong **)(lVar37 + 0x40), plVar4 != (longlong *)0x0 &&
          (this_01 = (UWorld *)(**(code **)(*plVar4 + 0x410))(), this_01 != (UWorld *)0x0)))) {
        dVar47 = (param_3->ViewMatrix).M[2][2];
        dVar61 = (param_3->ViewMatrix).M[1][2];
        dVar2 = (param_3->ViewMatrix).M[0][2];
        pFVar31 = FCollisionQueryFlag::Get();
        local_930.ObjectTypesToQuery = pFVar31->AllObjectQueryFlag;
        local_930.IgnoreMask = '\0';
        pFVar32 = ::FName::FName(local_808,L"OrthoCamera_VSMTrace");
        FVar5 = *pFVar32;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::
             __l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::
           __l2::_thread_safe_static_guard_0__ == -1)) {
          `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::
          __l2::StatPtr_UnknownSceneQuery =
               (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
                )0x0;
          FThreadSafeStaticStatInner<`FCollisionQueryParams::GetUnknownStatId'::__l2::FStat_UnknownSceneQuery,1>
          ::GetStatId(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                       ::__l2::StatPtr_UnknownSceneQuery);
          _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        FThreadSafeStaticStatInner<`FCollisionQueryParams::GetUnknownStatId'::__l2::FStat_UnknownSceneQuery,1>
        ::GetStatId(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                     ::__l2::StatPtr_UnknownSceneQuery);
        FCollisionQueryParams::FCollisionQueryParams(&local_1f8,FVar5,&local_900,true,(AActor *)0x0)
        ;
        uVar43 = (uint)this->DependentView->_padding_;
        if (uVar43 != 0) {
          FCollisionQueryParams::AddIgnoredSourceObject(&local_1f8,uVar43);
        }
        memset(&local_7a8,0,0x100);
        dVar57 = (param_3->InvProjectionMatrix).M[2][2];
        dVar57 = (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar57,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        uStack_8c0 = 0xffffffff;
        uStack_8bb = 0;
        local_8d8 = 0;
        uStack_8d0 = 0;
        uStack_8b9 = 0;
        local_7a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
        local_7a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
        local_7a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
        local_7a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
        local_8c8 = 0;
        uStack_8bc = 0;
        local_7a8.HitObjectHandle.InstanceIndex = -1;
        local_7a8.HitObjectHandle.ResolutionStatus = Invalid;
        local_7a8.HitObjectHandle._29_3_ = 0;
        local_7a8.Time = 1.0;
        local_7a8.HitObjectHandle.ManagerInterface.InterfaceInstance =
             (IActorInstanceManagerInterface *)0x0;
        local_7a8.MyItem = -1;
        local_828._s_0.Y = dVar57 * dVar61 + (this->WorldOrigin).field0_0x0._s_0.Y;
        local_828._s_0.X = dVar57 * dVar2 + (this->WorldOrigin).field0_0x0._s_0.X;
        local_828._s_0.Z = dVar57 * dVar47 + (this->WorldOrigin).field0_0x0._s_0.Z;
        bVar23 = UWorld::LineTraceSingleByObjectType
                           (this_01,&local_7a8,&this->WorldOrigin,(TVector<double> *)&local_828._s_0
                            ,&local_930,&local_1f8);
        if (bVar23) {
          dVar57 = (double)local_7a8.Distance;
          (this->CameraToViewTarget).field0_0x0._s_0.X = dVar57 * dVar2;
          (this->CameraToViewTarget).field0_0x0._s_0.Y = dVar57 * dVar61;
          (this->CameraToViewTarget).field0_0x0._s_0.Z = dVar57 * dVar47;
        }
        if (local_1f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_1f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
        }
        if (local_1f8.IgnoreComponents.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_1f8.IgnoreComponents.AllocatorInstance.SecondaryData);
        }
      }
    }
    (this->WorldOrigin).field0_0x0._s_0.X =
         (this->CameraToViewTarget).field0_0x0._s_0.X + (this->WorldOrigin).field0_0x0._s_0.X;
    (this->WorldOrigin).field0_0x0._s_0.Y =
         (this->CameraToViewTarget).field0_0x0._s_0.Y + (this->WorldOrigin).field0_0x0._s_0.Y;
    (this->WorldOrigin).field0_0x0._s_0.Z =
         (this->CameraToViewTarget).field0_0x0._s_0.Z + (this->WorldOrigin).field0_0x0._s_0.Z;
    iVar28 = (this->Config).LastLevel;
    this->FirstLevel = (this->Config).FirstLevel;
LAB_1457c27f2:
    pTVar21 = CVarOrthoVSMEstimateClipmapLevels.Ref;
    bVar23 = IsInParallelRenderingThread();
    if ((!bVar23) &&
       (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
      pcVar9 = (code *)swi(3);
      pFVar30 = (FVirtualShadowMapClipmap *)(*pcVar9)();
      return pFVar30;
    }
    if (pTVar21->ShadowedValue[1] != false) {
      fVar55 = logf((float)(param_3->InvProjectionMatrix).M[0][0]);
      iVar26 = (int)ROUND(fVar55 * __real_4038aa3b - __real_3f000000) >> 1;
      if (this->FirstLevel < iVar26) {
        this->FirstLevel = iVar26;
      }
      pTVar19 = CVarOrthoVSMClipmapLODBias.Ref;
      bVar23 = IsInParallelRenderingThread();
      if ((!bVar23) &&
         (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
        pcVar9 = (code *)swi(3);
        pFVar30 = (FVirtualShadowMapClipmap *)(*pcVar9)();
        return pFVar30;
      }
      iVar41 = this->FirstLevel + pTVar19->ShadowedValue[1];
      iVar26 = 0;
      if (0 < iVar41) {
        iVar26 = iVar41;
      }
      this->FirstLevel = iVar26;
    }
  }
  iVar26 = this->FirstLevel;
  if (iVar28 < iVar26) {
    iVar28 = iVar26;
  }
  (this->LevelData).ArrayNum = 0;
  uVar43 = (iVar28 - iVar26) + 1;
  if ((this->LevelData).ArrayMax != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FVirtualShadowMapClipmap::FLevelData>_>
              (0xc0,0x10,0,&(this->LevelData).AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FVirtualShadowMapClipmap::FLevelData>_>
            (0xc0,0x10,uVar43,&(this->LevelData).AllocatorInstance,&(this->LevelData).ArrayNum,
             piVar1);
  if (((this->Config).bForceInvalidate == false) &&
     (bVar23 = FVirtualShadowMapArrayCacheManager::IsCacheEnabled(this_00), bVar23)) {
    bVar23 = false;
  }
  else {
    bVar23 = true;
  }
  if (param_5->ViewState == (FSceneViewState *)0x0) {
    uVar27 = 0;
  }
  else {
    uVar27 = (**(code **)(param_5->ViewState->_padding_ + 0x70))();
  }
  pTVar33 = FVirtualShadowMapArrayCacheManager::FindCreateLightCacheEntry
                      (this_00,&local_7f8,this->LightSceneInfo->Id,uVar27,uVar43,
                       (this->Config).ShadowTypeId);
  uVar43 = 0;
  if (&this->PerLightCacheEntry != pTVar33) {
    (this->PerLightCacheEntry).Object = pTVar33->Object;
    pTVar33->Object = (FVirtualShadowMapPerLightCacheEntry *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PerLightCacheEntry).SharedReferenceCount,&pTVar33->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7f8.SharedReferenceCount.ReferenceController);
  if (((this->PerLightCacheEntry).Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar25)) {
    pcVar9 = (code *)swi(3);
    pFVar30 = (FVirtualShadowMapClipmap *)(*pcVar9)();
    return pFVar30;
  }
  pFVar6 = (this->PerLightCacheEntry).Object;
  bVar25 = (this->Config).bUseReceiverMask;
  iVar41 = this->FirstLevel;
  if ((((bVar23) ||
       ((pFVar6->ClipmapCacheKey).LightDirection.field0_0x0._s_0.X !=
        (this->LightDirection).field0_0x0._s_0.X)) ||
      ((pFVar6->ClipmapCacheKey).LightDirection.field0_0x0._s_0.Y !=
       (this->LightDirection).field0_0x0._s_0.Y)) ||
     (((pFVar6->ClipmapCacheKey).LightDirection.field0_0x0._s_0.Z !=
       (this->LightDirection).field0_0x0._s_0.Z || (iVar41 != (pFVar6->ClipmapCacheKey).FirstLevel))
     )) {
    pFVar6->RenderedFrameNumber = -1;
    dVar47 = (this->LightDirection).field0_0x0._s_0.Y;
    (pFVar6->ClipmapCacheKey).LightDirection.field0_0x0._s_0.X =
         (this->LightDirection).field0_0x0._s_0.X;
    (pFVar6->ClipmapCacheKey).LightDirection.field0_0x0._s_0.Y = dVar47;
    (pFVar6->ClipmapCacheKey).LightDirection.field0_0x0._s_0.Z =
         (this->LightDirection).field0_0x0._s_0.Z;
    (pFVar6->ClipmapCacheKey).FirstLevel = iVar41;
  }
  if (bVar25 != pFVar6->bUseReceiverMask) {
    pFVar6->RenderedFrameNumber = -1;
    pFVar6->bUseReceiverMask = bVar25;
  }
  iVar41 = pFVar6->RenderedFrameNumber;
  bVar23 = SUB41((uint)iVar41 >> 0x1f,0);
  if (bVar23 == pFVar6->bIsUncached) {
    (pFVar6->LightOrigin).field0_0x0._s_0.X = 0.0;
    (pFVar6->LightOrigin).field0_0x0._s_0.Y = 0.0;
    (pFVar6->LightOrigin).field0_0x0._s_0.Z = 0.0;
    pFVar6->LightRadius = -1.0;
    if (-1 < iVar41) goto LAB_1457c2ad9;
  }
  else {
    pFVar6->RenderedFrameNumber = -1;
    pFVar6->bIsUncached = bVar23;
    (pFVar6->LightOrigin).field0_0x0._s_0.X = 0.0;
    (pFVar6->LightOrigin).field0_0x0._s_0.Y = 0.0;
    (pFVar6->LightOrigin).field0_0x0._s_0.Z = 0.0;
    pFVar6->LightRadius = -1.0;
  }
  pFVar6->PrevVirtualShadowMapId = -1;
  pFVar6->VirtualShadowMapId = -1;
LAB_1457c2ad9:
  fVar55 = __real_40000000;
  fVar46 = powf(__real_40000000,(float)iVar28 + fVar64);
  pTVar18 = CVarVirtualShadowMapClipmapZRangeScale.Ref;
  dVar61 = (this->WorldOrigin).field0_0x0._s_0.X;
  dVar2 = (this->WorldOrigin).field0_0x0._s_0.Y;
  dVar47 = (this->WorldOrigin).field0_0x0._s_0.Z;
  iVar41 = (int)fVar46;
  dVar57 = dVar2 * (this->WorldToLightViewRotationMatrix).M[1][0] +
           dVar61 * (this->WorldToLightViewRotationMatrix).M[0][0] +
           dVar47 * (this->WorldToLightViewRotationMatrix).M[2][0] +
           dVar13 * (this->WorldToLightViewRotationMatrix).M[3][0];
  dVar61 = dVar2 * (this->WorldToLightViewRotationMatrix).M[1][1] +
           dVar61 * (this->WorldToLightViewRotationMatrix).M[0][1] +
           dVar47 * (this->WorldToLightViewRotationMatrix).M[2][1] +
           dVar13 * (this->WorldToLightViewRotationMatrix).M[3][1];
  dVar47 = (double)(((longlong)ROUND((dVar57 + dVar57) * (dVar13 / (double)iVar41) + dVar56) >> 1) *
                   (longlong)iVar41);
  bVar23 = IsInParallelRenderingThread();
  if ((!bVar23) &&
     (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
    pcVar9 = (code *)swi(3);
    pFVar30 = (FVirtualShadowMapClipmap *)(*pcVar9)();
    return pFVar30;
  }
  dVar10 = (this->WorldOrigin).field0_0x0._s_0.X;
  dVar11 = (this->WorldOrigin).field0_0x0._s_0.Y;
  local_8e0 = (longlong)(iVar28 - iVar26) + 1;
  dVar2 = (this->WorldOrigin).field0_0x0._s_0.Z;
  auVar58._8_8_ = dVar10;
  auVar58._0_8_ = dVar10;
  local_8e8 = (double)pTVar18->ShadowedValue[1];
  dVar57 = (this->WorldToLightViewRotationMatrix).M[1][0] * dVar11 +
           (this->WorldToLightViewRotationMatrix).M[0][0] * dVar10 +
           (this->WorldToLightViewRotationMatrix).M[2][0] * dVar2 +
           (this->WorldToLightViewRotationMatrix).M[3][0] * dVar13;
  dVar44 = (this->WorldToLightViewRotationMatrix).M[1][1] * dVar11 +
           (this->WorldToLightViewRotationMatrix).M[0][1] * dVar10 +
           (this->WorldToLightViewRotationMatrix).M[2][1] * dVar2 +
           (this->WorldToLightViewRotationMatrix).M[3][1] * dVar13;
  uVar62 = (undefined4)((ulonglong)dVar44 >> 0x20);
  local_7e8._8_4_ = SUB84(dVar44,0);
  local_7e8._0_8_ = dVar57;
  local_7e8._12_4_ = uVar62;
  auVar60._0_8_ = dVar2 * (this->WorldToLightViewRotationMatrix).M[2][2];
  auVar60._8_8_ = dVar2 * (this->WorldToLightViewRotationMatrix).M[2][3];
  dVar2 = (this->WorldToLightViewRotationMatrix).M[0][2] * dVar10 +
          dVar11 * (this->WorldToLightViewRotationMatrix).M[1][2] + auVar60._0_8_ +
          (this->WorldToLightViewRotationMatrix).M[3][2] * dVar13;
  if (0 < local_8e0) {
    local_8f8 = (longlong)
                (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) ^
                                 __xmm_80000000000000008000000000000000._4_4_,
                                 SUB84(dVar47,0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_920 = 0;
    local_940 = 0;
    local_938 = 0;
    local_8f0 = (longlong)
                (double)(((longlong)ROUND((dVar61 + dVar61) * (dVar13 / (double)iVar41) + dVar56) >>
                         1) * (longlong)iVar41);
    local_7d8._8_4_ = SUB84(dVar44,0);
    local_7d8._0_8_ = dVar44;
    local_7d8._12_4_ = uVar62;
    dVar56 = dVar44;
    do {
      uVar27 = 0;
      if ((int)uVar43 < (this->LevelData).ArrayNum) {
        uVar27 = ~uVar43 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar9 = (code *)swi(3);
        pFVar30 = (FVirtualShadowMapClipmap *)(*pcVar9)();
        return pFVar30;
      }
      FVar7 = (this->LevelData).AllocatorInstance.SecondaryData;
      FVar38 = (ForElementType<FVirtualShadowMapClipmap::FLevelData>)&this->LevelData;
      if (FVar7 != (ForElementType<FVirtualShadowMapClipmap::FLevelData>)0x0) {
        FVar38 = FVar7;
      }
      iVar28 = this->FirstLevel + uVar43;
      pdVar42 = (double *)(local_938 + (longlong)FVar38);
      fVar55 = powf(fVar55,(float)iVar28 + fVar64);
      dVar11 = (double)fVar55;
      dVar61 = dVar13 / dVar11;
      dVar10 = dVar11 + dVar11;
      auVar49._8_8_ = 0;
      auVar49._0_8_ = dVar56 * dVar61 + __real_3fe0000000000000;
      auVar52._8_4_ = SUB84(dVar44,0);
      auVar52._0_8_ = dVar57;
      auVar52._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
      auVar48 = roundpd(auVar60,auVar49,1);
      auVar53._8_8_ = auVar52._8_8_;
      auVar53._0_8_ = dVar57 * dVar61 + __real_3fe0000000000000;
      dVar44 = (double)((longlong)auVar48._0_8_ + 2);
      dVar47 = dVar11 * auVar48._0_8_;
      auVar50._8_8_ = 0;
      auVar50._0_8_ = auVar53._0_8_;
      auVar48 = roundpd(auVar58,auVar50,1);
      dVar56 = dVar11 * auVar48._0_8_;
      dVar57 = (double)(2 - (longlong)auVar48._0_8_);
      pdVar42[0x10] =
           local_888 * dVar47 + local_8a8 * dVar56 + local_868 * dVar2 + local_848 * dVar13;
      pdVar42[0x11] =
           dStack_880 * dVar47 + dStack_8a0 * dVar56 + dStack_860 * dVar2 + dStack_840 * dVar13;
      pdVar42[0x12] =
           local_878 * dVar47 + local_898 * dVar56 + local_858 * dVar2 + local_838 * dVar13;
      pdVar42[0x13] = dVar57;
      pdVar42[0x14] = dVar44;
      local_928 = (int)((double)(((longlong)fVar55 * 2 - (longlong)dVar56) - local_8f8) * dVar61);
      iStack_924 = (int)((double)(((longlong)dVar47 - local_8f0) + (longlong)fVar55 * 2) * dVar61);
      pdVar42[0x15] = (double)CONCAT44(iStack_924,local_928);
      if (((this->PerLightCacheEntry).Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar23)) {
        pcVar9 = (code *)swi(3);
        pFVar30 = (FVirtualShadowMapClipmap *)(*pcVar9)();
        return pFVar30;
      }
      pFVar6 = (this->PerLightCacheEntry).Object;
      uVar27 = 0;
      if ((int)uVar43 < (pFVar6->ShadowMapEntries).ArrayNum) {
        uVar27 = ~uVar43 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar9 = (code *)swi(3);
        pFVar30 = (FVirtualShadowMapClipmap *)(*pcVar9)();
        return pFVar30;
      }
      pTVar19 = CVarClipmapWPODisableDistance.Ref;
      dVar56 = dVar11 * local_8e8;
      this_02 = (FVirtualShadowMapCacheEntry *)
                ((pFVar6->ShadowMapEntries).AllocatorInstance.Data + local_940);
      bVar23 = IsInParallelRenderingThread();
      if ((!bVar23) &&
         (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
        pcVar9 = (code *)swi(3);
        pFVar30 = (FVirtualShadowMapClipmap *)(*pcVar9)();
        return pFVar30;
      }
      pTVar20 = CVarClipmapWPODisableDistanceLodBias.Ref;
      if (pTVar19->ShadowedValue[1] < 1) {
        uVar62 = 0;
        uVar63 = 0;
      }
      else {
        bVar23 = IsInParallelRenderingThread();
        if ((!bVar23) &&
           (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007955>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
          pcVar9 = (code *)swi(3);
          pFVar30 = (FVirtualShadowMapClipmap *)(*pcVar9)();
          return pFVar30;
        }
        auVar59._0_8_ =
             (double)(iVar28 - pTVar20->ShadowedValue[1]) - (double)this->ResolutionLodBias;
        auVar59._8_8_ = 0;
        auVar48 = roundpd(auVar53,auVar59,2);
        dVar47 = pow(__real_4000000000000000,auVar48._0_8_ + auVar48._0_8_);
        uVar62 = SUB84(dVar47,0);
        uVar63 = (undefined4)((ulonglong)dVar47 >> 0x20);
      }
      pdVar42[0x16] = (double)CONCAT44(uVar63,uVar62);
      if (((this->PerLightCacheEntry).Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar23)) {
        pcVar9 = (code *)swi(3);
        pFVar30 = (FVirtualShadowMapClipmap *)(*pcVar9)();
        return pFVar30;
      }
      local_8b8._s_0.X = (longlong)dVar57 * 0x20;
      local_8b8._s_0.Y = (longlong)dVar44 * 0x20;
      FVirtualShadowMapCacheEntry::UpdateClipmapLevel
                (this_02,(this->PerLightCacheEntry).Object,(TIntPoint<__int64> *)&local_8b8._s_0,
                 dVar11,dVar2,dVar56,(double)CONCAT44(uVar63,uVar62));
      dVar56 = (this_02->Clipmap).ViewRadiusZ;
      dVar47 = (this_02->Clipmap).ViewCenterZ;
      *(undefined4 *)(pdVar42 + 0x17) = 0;
      *(undefined4 *)((longlong)pdVar42 + 0xbc) = 0x7f7fffff;
      fVar55 = __real_40000000;
      fVar64 = __real_3f800000;
      if (((this->Config).bForceInvalidate == false) ||
         ((this->Config).bCullDynamicTightly == false)) {
        dVar61 = __real_3fe0000000000000 / dVar56;
        uVar27 = SUB84(dVar61,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar54 = (uint)((ulonglong)dVar61 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
        auVar60._0_8_ = dVar13 - ((dVar2 - dVar47) + dVar56) * dVar61;
        auVar60._8_8_ = 0.0;
        dVar56 = dVar13;
        if (dVar10 != 0.0) {
          dVar56 = dVar13 / dVar10;
        }
        auVar58._8_8_ = 0.0;
        auVar58._0_8_ = dVar56;
        *pdVar42 = dVar56;
        pdVar42[1] = 0.0;
        pdVar42[2] = 0.0;
        pdVar42[3] = 0.0;
        pdVar42[4] = 0.0;
        pdVar42[5] = dVar56;
        pdVar42[6] = 0.0;
        pdVar42[7] = 0.0;
        pdVar42[8] = 0.0;
        pdVar42[9] = 0.0;
        pdVar42[10] = (double)CONCAT44(uVar54,uVar27);
        pdVar42[0xb] = 0.0;
        pdVar42[0xc] = 0.0;
        pdVar42[0xd] = 0.0;
        pdVar42[0xe] = auVar60._0_8_;
        pdVar42[0xf] = 1.0;
        fVar55 = __real_40000000;
        fVar64 = __real_3f800000;
        if (((this->Config).bUseReceiverMask != false) &&
           ((this->Config).bCullDynamicTightly != false)) {
          fVar46 = powf(__real_40000000,((float)iVar28 - this->ResolutionLodBias) + __real_3f800000)
          ;
          auVar58._0_8_ = dVar13 * pdVar42[0xe];
          auVar58._8_8_ = dVar13 * pdVar42[0xf];
          auVar60._0_8_ =
               pdVar42[6] * 0.0 + pdVar42[2] * 0.0 + (double)fVar46 * pdVar42[10] + auVar58._0_8_;
          auVar60._8_8_ =
               pdVar42[7] * 0.0 + pdVar42[3] * 0.0 + (double)fVar46 * pdVar42[0xb] + auVar58._8_8_;
          *(float *)(pdVar42 + 0x17) = (float)auVar60._0_8_;
        }
      }
      else {
        fVar46 = powf(__real_40000000,((float)iVar28 - this->ResolutionLodBias) + __real_3f800000);
        dVar47 = dVar13 / ((double)fVar46 + dVar56);
        auVar58._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar47,0) ^ (uint)__xmm_80000000000000008000000000000000);
        auVar58._8_4_ = _UNK_15066df78;
        auVar58._12_4_ = _UNK_15066df7c;
        auVar60._0_8_ = dVar13 - dVar47 * dVar56;
        auVar60._8_8_ = 0.0;
        dVar56 = dVar13;
        if (dVar10 != 0.0) {
          dVar56 = dVar13 / dVar10;
        }
        *pdVar42 = dVar56;
        pdVar42[1] = 0.0;
        pdVar42[2] = 0.0;
        pdVar42[3] = 0.0;
        pdVar42[4] = 0.0;
        pdVar42[5] = dVar56;
        pdVar42[6] = 0.0;
        pdVar42[7] = 0.0;
        pdVar42[8] = 0.0;
        pdVar42[9] = 0.0;
        pdVar42[10] = auVar58._0_8_;
        pdVar42[0xb] = 0.0;
        pdVar42[0xc] = 0.0;
        pdVar42[0xd] = 0.0;
        pdVar42[0xe] = auVar60._0_8_;
        pdVar42[0xf] = 1.0;
      }
      pFVar34 = ComputeProjectionShaderData(this,&local_4a8,uVar43);
      lVar37 = 2;
      pFVar22 = &this_02->ProjectionData;
      do {
        pFVar39 = pFVar22;
        pFVar35 = pFVar34;
        uVar12 = *(undefined8 *)((pFVar35->ShadowViewToClipMatrix).M[0] + 2);
        *(undefined8 *)(pFVar39->ShadowViewToClipMatrix).M[0] =
             *(undefined8 *)(pFVar35->ShadowViewToClipMatrix).M[0];
        *(undefined8 *)((pFVar39->ShadowViewToClipMatrix).M[0] + 2) = uVar12;
        uVar12 = *(undefined8 *)((pFVar35->ShadowViewToClipMatrix).M[1] + 2);
        *(undefined8 *)(pFVar39->ShadowViewToClipMatrix).M[1] =
             *(undefined8 *)(pFVar35->ShadowViewToClipMatrix).M[1];
        *(undefined8 *)((pFVar39->ShadowViewToClipMatrix).M[1] + 2) = uVar12;
        uVar12 = *(undefined8 *)((pFVar35->ShadowViewToClipMatrix).M[2] + 2);
        *(undefined8 *)(pFVar39->ShadowViewToClipMatrix).M[2] =
             *(undefined8 *)(pFVar35->ShadowViewToClipMatrix).M[2];
        *(undefined8 *)((pFVar39->ShadowViewToClipMatrix).M[2] + 2) = uVar12;
        uVar12 = *(undefined8 *)((pFVar35->ShadowViewToClipMatrix).M[3] + 2);
        *(undefined8 *)(pFVar39->ShadowViewToClipMatrix).M[3] =
             *(undefined8 *)(pFVar35->ShadowViewToClipMatrix).M[3];
        *(undefined8 *)((pFVar39->ShadowViewToClipMatrix).M[3] + 2) = uVar12;
        uVar12 = *(undefined8 *)((pFVar35->TranslatedWorldToShadowUVMatrix).M[0] + 2);
        *(undefined8 *)(pFVar39->TranslatedWorldToShadowUVMatrix).M[0] =
             *(undefined8 *)(pFVar35->TranslatedWorldToShadowUVMatrix).M[0];
        *(undefined8 *)((pFVar39->TranslatedWorldToShadowUVMatrix).M[0] + 2) = uVar12;
        uVar12 = *(undefined8 *)((pFVar35->TranslatedWorldToShadowUVMatrix).M[1] + 2);
        *(undefined8 *)(pFVar39->TranslatedWorldToShadowUVMatrix).M[1] =
             *(undefined8 *)(pFVar35->TranslatedWorldToShadowUVMatrix).M[1];
        *(undefined8 *)((pFVar39->TranslatedWorldToShadowUVMatrix).M[1] + 2) = uVar12;
        uVar12 = *(undefined8 *)((pFVar35->TranslatedWorldToShadowUVMatrix).M[2] + 2);
        *(undefined8 *)(pFVar39->TranslatedWorldToShadowUVMatrix).M[2] =
             *(undefined8 *)(pFVar35->TranslatedWorldToShadowUVMatrix).M[2];
        *(undefined8 *)((pFVar39->TranslatedWorldToShadowUVMatrix).M[2] + 2) = uVar12;
        uVar12 = *(undefined8 *)((pFVar35->TranslatedWorldToShadowUVMatrix).M[3] + 2);
        *(undefined8 *)(pFVar39->TranslatedWorldToShadowUVMatrix).M[3] =
             *(undefined8 *)(pFVar35->TranslatedWorldToShadowUVMatrix).M[3];
        *(undefined8 *)((pFVar39->TranslatedWorldToShadowUVMatrix).M[3] + 2) = uVar12;
        lVar37 = lVar37 + -1;
        pFVar34 = (FVirtualShadowMapProjectionShaderData *)
                  &pFVar35->TranslatedWorldToShadowUVNormalMatrix;
        pFVar22 = (FVirtualShadowMapProjectionShaderData *)
                  &pFVar39->TranslatedWorldToShadowUVNormalMatrix;
      } while (lVar37 != 0);
      uVar12 = *(undefined8 *)((pFVar35->TranslatedWorldToShadowUVNormalMatrix).M[0] + 2);
      local_920 = local_920 + 1;
      local_940 = local_940 + 0x12b0;
      local_938 = local_938 + 0xc0;
      uVar43 = uVar43 + 1;
      *(undefined8 *)(pFVar39->TranslatedWorldToShadowUVNormalMatrix).M[0] =
           *(undefined8 *)(pFVar35->TranslatedWorldToShadowUVNormalMatrix).M[0];
      *(undefined8 *)((pFVar39->TranslatedWorldToShadowUVNormalMatrix).M[0] + 2) = uVar12;
      uVar12 = *(undefined8 *)((pFVar35->TranslatedWorldToShadowUVNormalMatrix).M[1] + 2);
      *(undefined8 *)(pFVar39->TranslatedWorldToShadowUVNormalMatrix).M[1] =
           *(undefined8 *)(pFVar35->TranslatedWorldToShadowUVNormalMatrix).M[1];
      *(undefined8 *)((pFVar39->TranslatedWorldToShadowUVNormalMatrix).M[1] + 2) = uVar12;
      uVar12 = *(undefined8 *)((pFVar35->TranslatedWorldToShadowUVNormalMatrix).M[2] + 2);
      *(undefined8 *)(pFVar39->TranslatedWorldToShadowUVNormalMatrix).M[2] =
           *(undefined8 *)(pFVar35->TranslatedWorldToShadowUVNormalMatrix).M[2];
      *(undefined8 *)((pFVar39->TranslatedWorldToShadowUVNormalMatrix).M[2] + 2) = uVar12;
      dVar57 = (double)local_7e8._0_8_;
      dVar44 = (double)local_7e8._8_8_;
      dVar56 = (double)local_7d8._0_8_;
    } while (local_920 < local_8e0);
  }
  lVar37 = 2;
  dVar13 = (this->WorldOrigin).field0_0x0._s_0.X;
  dVar56 = (this->WorldOrigin).field0_0x0._s_0.Y;
  uVar62 = *(undefined4 *)((longlong)&(this->WorldOrigin).field0_0x0 + 0x10);
  uVar63 = *(undefined4 *)((longlong)&(this->WorldOrigin).field0_0x0 + 0x14);
  if (&this->ViewFrustumBounds != (FConvexVolume *)&local_6a8) {
    *(undefined8 *)(this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData = local_6a8;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 8) = uStack_6a0;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x10) =
         local_698;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x18) =
         uStack_690;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x20) =
         local_688;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x28) =
         uStack_680;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x30) =
         local_678;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x38) =
         uStack_670;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x40) =
         local_668;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x48) =
         uStack_660;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x50) =
         local_658;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x58) =
         uStack_650;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x60) =
         local_648;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x68) =
         uStack_640;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x70) =
         local_638;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x78) =
         uStack_630;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x80) =
         local_628;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x88) =
         uStack_620;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x90) =
         local_618;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x98) =
         uStack_610;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0xa0) =
         local_608;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0xa8) =
         uStack_600;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0xb0) =
         local_5f8;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0xb8) =
         uStack_5f0;
    FVar8 = (this->ViewFrustumBounds).Planes.AllocatorInstance.SecondaryData;
    if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)FVar8);
    }
    (this->ViewFrustumBounds).Planes.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Math::TPlane<double>_>)0x0;
    (this->ViewFrustumBounds).Planes.ArrayNum = 0;
    (this->ViewFrustumBounds).Planes.ArrayMax = 6;
  }
  pTVar36 = &(this->ViewFrustumBounds).PermutedPlanes;
  if (pTVar36 !=
      (TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_5c8) {
    puVar40 = local_5c8;
    do {
      uVar12 = puVar40[1];
      uVar14 = puVar40[2];
      uVar15 = puVar40[3];
      *(undefined8 *)(pTVar36->AllocatorInstance).InlineData = *puVar40;
      *(undefined8 *)((pTVar36->AllocatorInstance).InlineData + 8) = uVar12;
      uVar12 = puVar40[4];
      uVar16 = puVar40[5];
      *(undefined8 *)((pTVar36->AllocatorInstance).InlineData + 0x10) = uVar14;
      *(undefined8 *)((pTVar36->AllocatorInstance).InlineData + 0x18) = uVar15;
      uVar14 = puVar40[6];
      uVar15 = puVar40[7];
      *(undefined8 *)((pTVar36->AllocatorInstance).InlineData + 0x20) = uVar12;
      *(undefined8 *)((pTVar36->AllocatorInstance).InlineData + 0x28) = uVar16;
      uVar12 = puVar40[8];
      uVar16 = puVar40[9];
      *(undefined8 *)((pTVar36->AllocatorInstance).InlineData + 0x30) = uVar14;
      *(undefined8 *)((pTVar36->AllocatorInstance).InlineData + 0x38) = uVar15;
      uVar14 = puVar40[10];
      uVar15 = puVar40[0xb];
      *(undefined8 *)((pTVar36->AllocatorInstance).InlineData + 0x40) = uVar12;
      *(undefined8 *)((pTVar36->AllocatorInstance).InlineData + 0x48) = uVar16;
      uVar12 = puVar40[0xc];
      uVar16 = puVar40[0xd];
      *(undefined8 *)((pTVar36->AllocatorInstance).InlineData + 0x50) = uVar14;
      *(undefined8 *)((pTVar36->AllocatorInstance).InlineData + 0x58) = uVar15;
      uVar14 = puVar40[0xe];
      uVar15 = puVar40[0xf];
      *(undefined8 *)((pTVar36->AllocatorInstance).InlineData + 0x60) = uVar12;
      *(undefined8 *)((pTVar36->AllocatorInstance).InlineData + 0x68) = uVar16;
      *(undefined8 *)((pTVar36->AllocatorInstance).InlineData + 0x70) = uVar14;
      *(undefined8 *)((pTVar36->AllocatorInstance).InlineData + 0x78) = uVar15;
      lVar37 = lVar37 + -1;
      pTVar36 = (TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *)((pTVar36->AllocatorInstance).InlineData + 0x80);
      puVar40 = puVar40 + 0x10;
    } while (lVar37 != 0);
    FVar8 = (this->ViewFrustumBounds).PermutedPlanes.AllocatorInstance.SecondaryData;
    if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)FVar8);
    }
    (this->ViewFrustumBounds).PermutedPlanes.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Math::TPlane<double>_>)0x0;
    (this->ViewFrustumBounds).PermutedPlanes.ArrayNum = 0;
    (this->ViewFrustumBounds).PermutedPlanes.ArrayMax = 8;
  }
  fVar55 = powf(fVar55,(float)((this->LevelData).ArrayNum + this->FirstLevel + -1) + fVar64);
  (this->BoundingSphere).Center.field0_0x0._s_0.X = dVar13;
  (this->BoundingSphere).Center.field0_0x0._s_0.Y = dVar56;
  *(undefined4 *)((longlong)&(this->BoundingSphere).Center.field0_0x0 + 0x10) = uVar62;
  *(undefined4 *)((longlong)&(this->BoundingSphere).Center.field0_0x0 + 0x14) = uVar63;
  (this->BoundingSphere).W = (double)fVar55;
  return this;
}

// ComputeBoundingVolumes @ 1457debc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FVirtualShadowMapClipmap::ComputeBoundingVolumes
          (FVirtualShadowMapClipmap *this,TVector<double> *param_1)

{
  ForElementType<UE::Math::TPlane<double>_> FVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar10
  ;
  undefined8 *puVar11;
  longlong lVar12;
  float fVar13;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_138 [38];
  
  if (&this->ViewFrustumBounds != (FConvexVolume *)&local_218) {
    *(undefined8 *)(this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData = local_218;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 8) = uStack_210;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x10) =
         local_208;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x18) =
         uStack_200;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x20) =
         local_1f8;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x28) =
         uStack_1f0;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x30) =
         local_1e8;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x38) =
         uStack_1e0;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x40) =
         local_1d8;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x48) =
         uStack_1d0;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x50) =
         local_1c8;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x58) =
         uStack_1c0;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x60) =
         local_1b8;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x68) =
         uStack_1b0;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x70) =
         local_1a8;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x78) =
         uStack_1a0;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x80) =
         local_198;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x88) =
         uStack_190;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x90) =
         local_188;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0x98) =
         uStack_180;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0xa0) =
         local_178;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0xa8) =
         uStack_170;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0xb0) =
         local_168;
    *(undefined8 *)((this->ViewFrustumBounds).Planes.AllocatorInstance.InlineData + 0xb8) =
         uStack_160;
    FVar1 = (this->ViewFrustumBounds).Planes.AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->ViewFrustumBounds).Planes.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Math::TPlane<double>_>)0x0;
    (this->ViewFrustumBounds).Planes.ArrayNum = 0;
    (this->ViewFrustumBounds).Planes.ArrayMax = 6;
  }
  pTVar10 = &(this->ViewFrustumBounds).PermutedPlanes;
  if (pTVar10 !=
      (TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_138) {
    lVar12 = 2;
    puVar11 = local_138;
    do {
      uVar4 = puVar11[1];
      uVar5 = puVar11[2];
      uVar6 = puVar11[3];
      *(undefined8 *)(pTVar10->AllocatorInstance).InlineData = *puVar11;
      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 8) = uVar4;
      uVar4 = puVar11[4];
      uVar7 = puVar11[5];
      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x10) = uVar5;
      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x18) = uVar6;
      uVar5 = puVar11[6];
      uVar6 = puVar11[7];
      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x20) = uVar4;
      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x28) = uVar7;
      uVar4 = puVar11[8];
      uVar7 = puVar11[9];
      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x30) = uVar5;
      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x38) = uVar6;
      uVar5 = puVar11[10];
      uVar6 = puVar11[0xb];
      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x40) = uVar4;
      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x48) = uVar7;
      uVar4 = puVar11[0xc];
      uVar7 = puVar11[0xd];
      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x50) = uVar5;
      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x58) = uVar6;
      uVar5 = puVar11[0xe];
      uVar6 = puVar11[0xf];
      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x60) = uVar4;
      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x68) = uVar7;
      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x70) = uVar5;
      *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 0x78) = uVar6;
      lVar12 = lVar12 + -1;
      pTVar10 = (TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *)((pTVar10->AllocatorInstance).InlineData + 0x80);
      puVar11 = puVar11 + 0x10;
    } while (lVar12 != 0);
    FVar1 = (this->ViewFrustumBounds).PermutedPlanes.AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->ViewFrustumBounds).PermutedPlanes.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Math::TPlane<double>_>)0x0;
    (this->ViewFrustumBounds).PermutedPlanes.ArrayNum = 0;
    (this->ViewFrustumBounds).PermutedPlanes.ArrayMax = 8;
  }
  dVar8 = (param_1->field0_0x0)._s_0.X;
  dVar9 = (param_1->field0_0x0)._s_0.Y;
  fVar13 = powf(__real_40000000,
                (float)((this->LevelData).ArrayNum + this->FirstLevel + -1) + __real_3f800000);
  uVar2 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar3 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
  (this->BoundingSphere).Center.field0_0x0._s_0.X = dVar8;
  (this->BoundingSphere).Center.field0_0x0._s_0.Y = dVar9;
  *(undefined4 *)((longlong)&(this->BoundingSphere).Center.field0_0x0 + 0x10) = uVar2;
  *(undefined4 *)((longlong)&(this->BoundingSphere).Center.field0_0x0 + 0x14) = uVar3;
  (this->BoundingSphere).W = (double)fVar13;
  return;
}

// ComputeProjectionShaderData @ 1457dedc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FVirtualShadowMapProjectionShaderData * __thiscall
FVirtualShadowMapClipmap::ComputeProjectionShaderData
          (FVirtualShadowMapClipmap *this,
          FVirtualShadowMapProjectionShaderData *__return_storage_ptr__,int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ForElementType<FVirtualShadowMapClipmap::FLevelData> FVar5;
  FViewInfo *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  bool bVar25;
  FVirtualShadowMapProjectionShaderData *pFVar26;
  TMatrix<double> *pTVar27;
  int iVar28;
  longlong lVar29;
  ForElementType<FVirtualShadowMapClipmap::FLevelData> FVar30;
  TMatrix<double> *pTVar31;
  longlong lVar32;
  uint uVar33;
  float fVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined1 auStack_3f8 [32];
  longlong local_3d8;
  longlong local_3d0;
  undefined8 local_3c8;
  float local_3c0;
  undefined8 local_3bc;
  float local_3b4;
  TMatrix<double> local_3a8;
  TMatrix<double> local_328;
  TMatrix<double> local_2a8;
  TMatrix<double> local_228;
  TMatrix<double> local_1a8;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  lVar32 = (longlong)param_1;
  if ((param_1 < 0) || ((this->LevelData).ArrayNum <= param_1)) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("ClipmapIndex >= 0 && ClipmapIndex < LevelData.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapClipmap.cpp"
                        ,0x202,L"");
    if (bVar25) {
      pcVar7 = (code *)swi(3);
      pFVar26 = (FVirtualShadowMapProjectionShaderData *)(*pcVar7)();
      return pFVar26;
    }
  }
  iVar28 = (this->LevelData).ArrayNum;
  uVar33 = 0;
  if (param_1 < iVar28) {
    uVar33 = (uint)~param_1 >> 0x1f;
  }
  if (uVar33 == 0) {
    local_3d8 = lVar32;
    local_3d0 = (longlong)iVar28;
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar25) {
      pcVar7 = (code *)swi(3);
      pFVar26 = (FVirtualShadowMapProjectionShaderData *)(*pcVar7)();
      return pFVar26;
    }
  }
  FVar5 = (this->LevelData).AllocatorInstance.SecondaryData;
  iVar28 = (this->LevelData).ArrayNum;
  FVar30 = (ForElementType<FVirtualShadowMapClipmap::FLevelData>)&this->LevelData;
  if (FVar5 != (ForElementType<FVirtualShadowMapClipmap::FLevelData>)0x0) {
    FVar30 = FVar5;
  }
  lVar29 = lVar32 * 0xc0;
  pTVar31 = (TMatrix<double> *)((longlong)FVar30 + lVar29);
  uVar33 = 0;
  if (param_1 < iVar28) {
    uVar33 = (uint)~param_1 >> 0x1f;
  }
  if (uVar33 == 0) {
    local_3d8 = lVar32;
    local_3d0 = (longlong)iVar28;
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar25) {
      pcVar7 = (code *)swi(3);
      pFVar26 = (FVirtualShadowMapProjectionShaderData *)(*pcVar7)();
      return pFVar26;
    }
  }
  FVar5 = (this->LevelData).AllocatorInstance.SecondaryData;
  uVar33 = (uint)__xmm_80000000000000008000000000000000;
  uVar41 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  FVar30 = (ForElementType<FVirtualShadowMapClipmap::FLevelData>)&this->LevelData;
  if (FVar5 != (ForElementType<FVirtualShadowMapClipmap::FLevelData>)0x0) {
    FVar30 = FVar5;
  }
  uVar1 = *(undefined8 *)(lVar29 + 0x80 + (longlong)FVar30);
  uVar2 = *(undefined8 *)(lVar29 + 0x88 + (longlong)FVar30);
  uVar35 = (uint)uVar1 ^ uVar33;
  uVar36 = (uint)((ulonglong)uVar1 >> 0x20) ^ uVar41;
  uVar1 = *(undefined8 *)(lVar29 + 0x90 + (longlong)FVar30);
  uVar37 = (uint)uVar2 ^ uVar33;
  uVar38 = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar41;
  uVar39 = (uint)uVar1 ^ uVar33;
  uVar40 = (uint)((ulonglong)uVar1 >> 0x20) ^ uVar41;
  local_3c8 = CONCAT44((float)(double)CONCAT44(uVar38,uVar37),(float)(double)CONCAT44(uVar36,uVar35)
                      );
  dVar8 = (double)CONCAT44(uVar36,uVar35) + (this->WorldOrigin).field0_0x0._s_0.X;
  dVar9 = (double)CONCAT44(uVar38,uVar37) + (this->WorldOrigin).field0_0x0._s_0.Y;
  local_3c0 = (float)(double)CONCAT44(uVar40,uVar39);
  dVar10 = (double)CONCAT44(uVar40,uVar39) + (this->WorldOrigin).field0_0x0._s_0.Z;
  __return_storage_ptr__->LightType = 0;
  __return_storage_ptr__->ResolutionLodBias = 0.0;
  (__return_storage_ptr__->ClipmapCornerRelativeOffset).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  __return_storage_ptr__->ClipmapLevel_ClipmapLevelCountRemaining = -1;
  __return_storage_ptr__->PackedCullingViewId = 0;
  __return_storage_ptr__->Flags = 0;
  __return_storage_ptr__->ClipmapLevelWPODistanceDisableThresholdSquared = 0.0;
  __return_storage_ptr__->MinMipLevel = 0;
  __return_storage_ptr__->LightId = -1;
  uVar1 = *(undefined8 *)((longlong)&(this->LightDirection).field0_0x0 + 8);
  local_3bc = CONCAT44((float)((double)CONCAT44(uVar38,uVar37) -
                              (double)(float)(double)CONCAT44(uVar38,uVar37)),
                       (float)((double)CONCAT44(uVar36,uVar35) -
                              (double)(float)(double)CONCAT44(uVar36,uVar35)));
  uVar2 = *(undefined8 *)((longlong)&(this->LightDirection).field0_0x0 + 0x10);
  uVar3 = *(undefined8 *)&(this->LightDirection).field0_0x0;
  local_3b4 = (float)((double)CONCAT44(uVar40,uVar39) - (double)local_3c0);
  (__return_storage_ptr__->LightDirection).field0_0x0._s_0.X =
       (float)(double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar41,(uint)uVar3 ^ uVar33);
  (__return_storage_ptr__->LightDirection).field0_0x0._s_0.Y =
       (float)(double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar41,(uint)uVar1 ^ uVar33);
  (__return_storage_ptr__->LightDirection).field0_0x0._s_0.Z =
       (float)(double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar41,(uint)uVar2 ^ uVar33);
  dVar11 = pTVar31->M[1][2];
  dVar12 = pTVar31->M[1][3];
  dVar13 = pTVar31->M[1][0];
  dVar14 = pTVar31->M[1][1];
  dVar15 = pTVar31->M[2][2];
  dVar16 = pTVar31->M[2][3];
  dVar17 = pTVar31->M[2][0];
  dVar18 = pTVar31->M[2][1];
  dVar19 = pTVar31->M[3][0];
  dVar20 = pTVar31->M[3][1];
  dVar21 = pTVar31->M[3][2];
  dVar22 = pTVar31->M[3][3];
  dVar23 = pTVar31->M[0][2];
  dVar24 = pTVar31->M[0][3];
  *(ulonglong *)(__return_storage_ptr__->ShadowViewToClipMatrix).M[0] =
       CONCAT44((float)pTVar31->M[0][1],(float)pTVar31->M[0][0]);
  *(ulonglong *)((__return_storage_ptr__->ShadowViewToClipMatrix).M[0] + 2) =
       CONCAT44((float)dVar24,(float)dVar23);
  (__return_storage_ptr__->ShadowViewToClipMatrix).M[1][0] = (float)dVar13;
  (__return_storage_ptr__->ShadowViewToClipMatrix).M[1][1] = (float)dVar14;
  (__return_storage_ptr__->ShadowViewToClipMatrix).M[1][2] = (float)dVar11;
  (__return_storage_ptr__->ShadowViewToClipMatrix).M[1][3] = (float)dVar12;
  (__return_storage_ptr__->ShadowViewToClipMatrix).M[2][0] = (float)dVar17;
  (__return_storage_ptr__->ShadowViewToClipMatrix).M[2][1] = (float)dVar18;
  (__return_storage_ptr__->ShadowViewToClipMatrix).M[2][2] = (float)dVar15;
  (__return_storage_ptr__->ShadowViewToClipMatrix).M[2][3] = (float)dVar16;
  (__return_storage_ptr__->ShadowViewToClipMatrix).M[3][0] = (float)dVar19;
  (__return_storage_ptr__->ShadowViewToClipMatrix).M[3][1] = (float)dVar20;
  (__return_storage_ptr__->ShadowViewToClipMatrix).M[3][2] = (float)dVar21;
  (__return_storage_ptr__->ShadowViewToClipMatrix).M[3][3] = (float)dVar22;
  VectorMatrixMultiply(&local_128,&this->WorldToLightViewRotationMatrix,pTVar31);
  local_2a8.M[0][0] = ___xmm_00000000000000003fe0000000000000;
  local_2a8.M[0][1] = _UNK_150978bb8;
  local_2a8.M[0][2] = 0.0;
  local_2a8.M[0][3] = 0.0;
  local_2a8.M[1][2] = 0.0;
  local_2a8.M[1][3] = 0.0;
  local_2a8.M[3][0] = 0.0;
  local_2a8.M[3][1] = 0.0;
  local_328.M[0][2] = 0.0;
  local_328.M[0][3] = 0.0;
  local_328.M[1][2] = 0.0;
  local_328.M[1][3] = 0.0;
  local_2a8.M[1][0] = ___xmm_bfe00000000000000000000000000000;
  local_2a8.M[1][1] = _UNK_150e374c8;
  local_328.M[3][0] = ___xmm_3fe00000000000003fe0000000000000;
  local_328.M[3][1] = _UNK_150689678;
  local_2a8.M[2][0] = 0.0;
  local_2a8.M[2][1] = 0.0;
  local_2a8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_2a8.M[2][3] = _UNK_150689518;
  local_2a8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_2a8.M[3][3] = _UNK_15061cbc8;
  local_328.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_328.M[0][1] = _UNK_150689518;
  local_328.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_328.M[1][1] = _UNK_15061cbc8;
  local_328.M[2][0] = 0.0;
  local_328.M[2][1] = 0.0;
  local_328.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_328.M[2][3] = _UNK_150689518;
  local_328.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_328.M[3][3] = _UNK_15061cbc8;
  VectorMatrixMultiply(&local_1a8,&local_2a8,&local_328);
  VectorMatrixMultiply(&local_228,&local_128,&local_1a8);
  *(ulonglong *)(__return_storage_ptr__->TranslatedWorldToShadowUVMatrix).M[0] =
       CONCAT44((float)local_228.M[0][1],(float)local_228.M[0][0]);
  *(ulonglong *)((__return_storage_ptr__->TranslatedWorldToShadowUVMatrix).M[0] + 2) =
       CONCAT44((float)local_228.M[0][3],(float)local_228.M[0][2]);
  (__return_storage_ptr__->TranslatedWorldToShadowUVMatrix).M[1][0] = (float)local_228.M[1][0];
  (__return_storage_ptr__->TranslatedWorldToShadowUVMatrix).M[1][1] = (float)local_228.M[1][1];
  (__return_storage_ptr__->TranslatedWorldToShadowUVMatrix).M[1][2] = (float)local_228.M[1][2];
  (__return_storage_ptr__->TranslatedWorldToShadowUVMatrix).M[1][3] = (float)local_228.M[1][3];
  *(ulonglong *)(__return_storage_ptr__->TranslatedWorldToShadowUVMatrix).M[2] =
       CONCAT44((float)local_228.M[2][1],(float)local_228.M[2][0]);
  *(ulonglong *)((__return_storage_ptr__->TranslatedWorldToShadowUVMatrix).M[2] + 2) =
       CONCAT44((float)local_228.M[2][3],(float)local_228.M[2][2]);
  *(ulonglong *)(__return_storage_ptr__->TranslatedWorldToShadowUVMatrix).M[3] =
       CONCAT44((float)local_228.M[3][1],(float)local_228.M[3][0]);
  *(ulonglong *)((__return_storage_ptr__->TranslatedWorldToShadowUVMatrix).M[3] + 2) =
       CONCAT44((float)local_228.M[3][3],(float)local_228.M[3][2]);
  pTVar27 = CalcTranslatedWorldToShadowUVNormalMatrix
                      (&local_3a8,&this->WorldToLightViewRotationMatrix,pTVar31);
  dVar11 = pTVar27->M[1][2];
  dVar12 = pTVar27->M[1][3];
  dVar13 = pTVar27->M[1][0];
  dVar14 = pTVar27->M[1][1];
  dVar15 = pTVar27->M[2][2];
  dVar16 = pTVar27->M[2][3];
  dVar17 = pTVar27->M[2][0];
  dVar18 = pTVar27->M[2][1];
  dVar19 = pTVar27->M[3][2];
  dVar20 = pTVar27->M[3][3];
  dVar21 = pTVar27->M[3][0];
  dVar22 = pTVar27->M[3][1];
  dVar23 = pTVar27->M[0][2];
  dVar24 = pTVar27->M[0][3];
  *(ulonglong *)(__return_storage_ptr__->TranslatedWorldToShadowUVNormalMatrix).M[0] =
       CONCAT44((float)pTVar27->M[0][1],(float)pTVar27->M[0][0]);
  *(ulonglong *)((__return_storage_ptr__->TranslatedWorldToShadowUVNormalMatrix).M[0] + 2) =
       CONCAT44((float)dVar24,(float)dVar23);
  (__return_storage_ptr__->TranslatedWorldToShadowUVNormalMatrix).M[1][0] = (float)dVar13;
  (__return_storage_ptr__->TranslatedWorldToShadowUVNormalMatrix).M[1][1] = (float)dVar14;
  (__return_storage_ptr__->TranslatedWorldToShadowUVNormalMatrix).M[1][2] = (float)dVar11;
  (__return_storage_ptr__->TranslatedWorldToShadowUVNormalMatrix).M[1][3] = (float)dVar12;
  (__return_storage_ptr__->TranslatedWorldToShadowUVNormalMatrix).M[2][0] = (float)dVar17;
  (__return_storage_ptr__->TranslatedWorldToShadowUVNormalMatrix).M[2][1] = (float)dVar18;
  (__return_storage_ptr__->TranslatedWorldToShadowUVNormalMatrix).M[2][2] = (float)dVar15;
  (__return_storage_ptr__->TranslatedWorldToShadowUVNormalMatrix).M[2][3] = (float)dVar16;
  (__return_storage_ptr__->TranslatedWorldToShadowUVNormalMatrix).M[3][0] = (float)dVar21;
  (__return_storage_ptr__->TranslatedWorldToShadowUVNormalMatrix).M[3][1] = (float)dVar22;
  (__return_storage_ptr__->TranslatedWorldToShadowUVNormalMatrix).M[3][2] = (float)dVar19;
  (__return_storage_ptr__->TranslatedWorldToShadowUVNormalMatrix).M[3][3] = (float)dVar20;
  *(undefined8 *)&(__return_storage_ptr__->PreViewTranslationHigh).field0_0x0 = local_3c8;
  (__return_storage_ptr__->PreViewTranslationHigh).field0_0x0._s_0.Z = local_3c0;
  *(undefined8 *)&(__return_storage_ptr__->PreViewTranslationLow).field0_0x0 = local_3bc;
  __return_storage_ptr__->LightType = 0;
  (__return_storage_ptr__->PreViewTranslationLow).field0_0x0._s_0.Z = local_3b4;
  (__return_storage_ptr__->NegativeClipmapWorldOriginLWCOffset).field0_0x0._s_0.X =
       (float)(double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar41,SUB84(dVar8,0) ^ uVar33);
  (__return_storage_ptr__->NegativeClipmapWorldOriginLWCOffset).field0_0x0._s_0.Y =
       (float)(double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^ uVar41,SUB84(dVar9,0) ^ uVar33);
  (__return_storage_ptr__->NegativeClipmapWorldOriginLWCOffset).field0_0x0._s_0.Z =
       (float)(double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) ^ uVar41,SUB84(dVar10,0) ^ uVar33);
  iVar28 = this->FirstLevel + param_1;
  uVar33 = (this->LevelData).ArrayNum - param_1;
  if (iVar28 + 0x400 < 0) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("ClipmapLevel + 1024 >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapClipmap.cpp"
                        ,0x1fa,L"");
    if (bVar25) {
      pcVar7 = (code *)swi(3);
      pFVar26 = (FVirtualShadowMapProjectionShaderData *)(*pcVar7)();
      return pFVar26;
    }
  }
  if ((int)uVar33 < 0) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("ClipmapLevelCountRemaining >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapClipmap.cpp"
                        ,0x1fb,L"");
    if (bVar25) {
      pcVar7 = (code *)swi(3);
      pFVar26 = (FVirtualShadowMapProjectionShaderData *)(*pcVar7)();
      return pFVar26;
    }
  }
  __return_storage_ptr__->ClipmapLevel_ClipmapLevelCountRemaining =
       (iVar28 + 0x400) * 0x10000 | uVar33;
  __return_storage_ptr__->ResolutionLodBias = this->ResolutionLodBias;
  (__return_storage_ptr__->ClipmapCornerRelativeOffset).field0_0x0 =
       *(TIntPoint<int>_u_0 *)(pTVar31[1].M[1] + 1);
  __return_storage_ptr__->ClipmapLevelWPODistanceDisableThresholdSquared = (float)pTVar31[1].M[1][2]
  ;
  fVar34 = (float)(**(code **)(this->LightSceneInfo->Proxy->_padding_ + 0x28))();
  __return_storage_ptr__->LightSourceRadius = fVar34;
  if ((this->PerLightCacheEntry).Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar25) {
      pcVar7 = (code *)swi(3);
      pFVar26 = (FVirtualShadowMapProjectionShaderData *)(*pcVar7)();
      return pFVar26;
    }
  }
  __return_storage_ptr__->Flags =
       -(uint)(((this->PerLightCacheEntry).Object)->bIsUncached != false) & 2;
  pFVar6 = this->DependentView;
  iVar4 = pFVar6->SceneRendererPrimaryViewId;
  if ((iVar4 < -1) || (0xfffe < iVar4)) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("SceneRendererPrimaryViewId >= -1 && SceneRendererPrimaryViewId < ((1 << 16u) - 1)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                        ,0x30d,L"");
    if (bVar25) {
      pcVar7 = (code *)swi(3);
      pFVar26 = (FVirtualShadowMapProjectionShaderData *)(*pcVar7)();
      return pFVar26;
    }
  }
  if ((pFVar6->PersistentViewId).Index < -1) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("PersistentViewId.Index >= -1",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                        ,0x30e,L"");
    if (bVar25) {
      pcVar7 = (code *)swi(3);
      pFVar26 = (FVirtualShadowMapProjectionShaderData *)(*pcVar7)();
      return pFVar26;
    }
  }
  __return_storage_ptr__->PackedCullingViewId =
       iVar4 * 0x10000 + 0x10000U | (pFVar6->PersistentViewId).Index + 1U;
  __return_storage_ptr__->LightId = this->LightSceneInfo->Id;
  iVar4 = (this->Config).FirstCoarseLevel;
  if ((-1 < iVar4) &&
     (((iVar4 <= iVar28 && (iVar28 <= (this->Config).LastCoarseLevel)) || (uVar33 == 1)))) {
    __return_storage_ptr__->Flags = __return_storage_ptr__->Flags | 8;
  }
  if ((this->Config).bIsFirstPersonShadow != false) {
    __return_storage_ptr__->Flags = __return_storage_ptr__->Flags | 0x10;
  }
  if ((this->Config).bUseReceiverMask != false) {
    __return_storage_ptr__->Flags = __return_storage_ptr__->Flags | 0x20;
  }
  __return_storage_ptr__->TexelDitherScale = this->LightSceneInfo->Proxy->VSMTexelDitherScale;
  return __return_storage_ptr__;
}

// GetLevelRadius @ 1457f4c80

float __cdecl FVirtualShadowMapClipmap::GetLevelRadius(float param_1)

{
  float fVar1;
  
  fVar1 = powf(__real_40000000,param_1 + __real_3f800000);
  return fVar1;
}

// GetMaxRadius @ 1457f4de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

float __thiscall FVirtualShadowMapClipmap::GetMaxRadius(FVirtualShadowMapClipmap *this)

{
  float fVar1;
  
  fVar1 = powf(__real_40000000,
               (float)(this->FirstLevel + (this->LevelData).ArrayNum + -1) + __real_3f800000);
  return fVar1;
}

// GetProjectionShaderData @ 1457f51f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FVirtualShadowMapProjectionShaderData * __thiscall
FVirtualShadowMapClipmap::GetProjectionShaderData(FVirtualShadowMapClipmap *this,int param_1)

{
  FVirtualShadowMapPerLightCacheEntry *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FVirtualShadowMapProjectionShaderData *pFVar5;
  
  if ((this->PerLightCacheEntry).Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FVirtualShadowMapProjectionShaderData *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar1 = (this->PerLightCacheEntry).Object;
  uVar4 = 0;
  if (param_1 < (pFVar1->ShadowMapEntries).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FVirtualShadowMapProjectionShaderData *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FVirtualShadowMapProjectionShaderData *)
         ((pFVar1->ShadowMapEntries).AllocatorInstance.Data + (longlong)param_1 * 0x12b0 + 0x1150);
}

// GetViewMatrices @ 145800d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FViewMatrices * __thiscall
FVirtualShadowMapClipmap::GetViewMatrices
          (FVirtualShadowMapClipmap *this,FViewMatrices *__return_storage_ptr__,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FViewMatrices *pFVar5;
  longlong lVar6;
  ForElementType<FVirtualShadowMapClipmap::FLevelData> FVar7;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong local_1b0;
  FMinimalInitializer local_1a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  if ((param_1 < 0) || ((this->LevelData).ArrayNum <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ClipmapIndex >= 0 && ClipmapIndex < LevelData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapClipmap.cpp"
                       ,0x1e7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FViewMatrices *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar1 = (this->LevelData).ArrayNum;
  uVar4 = 0;
  if (param_1 < iVar1) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    local_1b8 = (longlong)param_1;
    local_1b0 = (longlong)iVar1;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FViewMatrices *)(*pcVar2)();
      return pFVar5;
    }
  }
  FVar7 = (this->LevelData).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<FVirtualShadowMapClipmap::FLevelData>)0x0) {
    FVar7 = (ForElementType<FVirtualShadowMapClipmap::FLevelData>)&this->LevelData;
  }
  local_1a8.CameraToViewTarget.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  lVar6 = (longlong)param_1 * 0xc0;
  local_1a8.CameraToViewTarget.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_1a8.CameraToViewTarget.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1a8.StereoPass = eSSP_FULL;
  local_1a8.FirstPersonParams.FOVCorrectionFactor = 1.0;
  local_1a8.FirstPersonParams.Scale = 1.0;
  local_1a8.FirstPersonParams.bUseParameters = false;
  local_1a8.FirstPersonParams._9_3_ = 0;
  local_1a8.ViewOrigin.field0_0x0._s_0.X =
       (double)*(undefined8 *)((uchar *)((longlong)FVar7 + 0x80) + lVar6);
  local_1a8.ViewOrigin.field0_0x0._s_0.Y =
       (double)*(undefined8 *)((uchar *)((longlong)FVar7 + 0x80) + lVar6 + 8);
  local_1a8.ViewOrigin.field0_0x0._s_0.Z =
       (double)*(undefined8 *)((uchar *)((longlong)FVar7 + 0x90) + lVar6);
  local_1a8.ViewRotationMatrix.M[0][0] = (this->WorldToLightViewRotationMatrix).M[0][0];
  local_1a8.ViewRotationMatrix.M[0][1] = (this->WorldToLightViewRotationMatrix).M[0][1];
  local_1a8.ViewRotationMatrix.M[0][2] = (this->WorldToLightViewRotationMatrix).M[0][2];
  local_1a8.ViewRotationMatrix.M[0][3] = (this->WorldToLightViewRotationMatrix).M[0][3];
  local_1a8.ViewRotationMatrix.M[1][0] = (this->WorldToLightViewRotationMatrix).M[1][0];
  local_1a8.ViewRotationMatrix.M[1][1] = (this->WorldToLightViewRotationMatrix).M[1][1];
  local_1a8.ViewRotationMatrix.M[1][2] = (this->WorldToLightViewRotationMatrix).M[1][2];
  local_1a8.ViewRotationMatrix.M[1][3] = (this->WorldToLightViewRotationMatrix).M[1][3];
  local_1a8.ViewRotationMatrix.M[2][0] = (this->WorldToLightViewRotationMatrix).M[2][0];
  local_1a8.ViewRotationMatrix.M[2][1] = (this->WorldToLightViewRotationMatrix).M[2][1];
  local_1a8.ViewRotationMatrix.M[2][2] = (this->WorldToLightViewRotationMatrix).M[2][2];
  local_1a8.ViewRotationMatrix.M[2][3] = (this->WorldToLightViewRotationMatrix).M[2][3];
  local_1a8.ViewRotationMatrix.M[3][0] = (this->WorldToLightViewRotationMatrix).M[3][0];
  local_1a8.ViewRotationMatrix.M[3][1] = (this->WorldToLightViewRotationMatrix).M[3][1];
  local_1a8.ViewRotationMatrix.M[3][2] = (this->WorldToLightViewRotationMatrix).M[3][2];
  local_1a8.ViewRotationMatrix.M[3][3] = (this->WorldToLightViewRotationMatrix).M[3][3];
  local_1a8.ProjectionMatrix.M[0][0] = *(double *)((longlong)FVar7 + lVar6);
  local_1a8.ProjectionMatrix.M[0][1] = ((double *)((longlong)FVar7 + lVar6))[1];
  local_1a8.ProjectionMatrix.M[0][2] = *(double *)((uchar *)((longlong)FVar7 + 0x10) + lVar6);
  local_1a8.ProjectionMatrix.M[0][3] = *(double *)((uchar *)((longlong)FVar7 + 0x10) + lVar6 + 8);
  local_1a8.ProjectionMatrix.M[1][0] = *(double *)((uchar *)((longlong)FVar7 + 0x20) + lVar6);
  local_1a8.ProjectionMatrix.M[1][1] = *(double *)((uchar *)((longlong)FVar7 + 0x20) + lVar6 + 8);
  local_1a8.ProjectionMatrix.M[1][2] = *(double *)((uchar *)((longlong)FVar7 + 0x30) + lVar6);
  local_1a8.ProjectionMatrix.M[1][3] = *(double *)((uchar *)((longlong)FVar7 + 0x30) + lVar6 + 8);
  local_1a8.ProjectionMatrix.M[2][0] = *(double *)((uchar *)((longlong)FVar7 + 0x40) + lVar6);
  local_1a8.ProjectionMatrix.M[2][1] = *(double *)((uchar *)((longlong)FVar7 + 0x40) + lVar6 + 8);
  local_1a8.ProjectionMatrix.M[2][2] = *(double *)((uchar *)((longlong)FVar7 + 0x50) + lVar6);
  local_1a8.ProjectionMatrix.M[2][3] = *(double *)((uchar *)((longlong)FVar7 + 0x50) + lVar6 + 8);
  local_1a8.ProjectionMatrix.M[3][0] = *(double *)((uchar *)((longlong)FVar7 + 0x60) + lVar6);
  local_1a8.ProjectionMatrix.M[3][1] = *(double *)((uchar *)((longlong)FVar7 + 0x60) + lVar6 + 8);
  local_1a8.ProjectionMatrix.M[3][2] = *(double *)((uchar *)((longlong)FVar7 + 0x70) + lVar6);
  local_1a8.ProjectionMatrix.M[3][3] = *(double *)((uchar *)((longlong)FVar7 + 0x70) + lVar6 + 8);
  local_1a8.ConstrainedViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)___xmm_00004000000040000000000000000000;
  local_1a8.ConstrainedViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)_UNK_151030628;
  FViewMatrices::FViewMatrices(__return_storage_ptr__,&local_1a8);
  return __return_storage_ptr__;
}

// OnPrimitiveRendered @ 145803cf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FVirtualShadowMapClipmap::OnPrimitiveRendered
          (FVirtualShadowMapClipmap *this,FPrimitiveSceneInfo *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  FVirtualShadowMapPerLightCacheEntry *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined1 uVar9;
  ForElementType<unsigned_int> FVar10;
  int local_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  pFVar4 = (this->PerLightCacheEntry).Object;
  if (pFVar4 != (FVirtualShadowMapPerLightCacheEntry *)0x0) {
    iVar8 = (param_1->PersistentIndex).Index;
    iVar2 = (pFVar4->RenderedPrimitives).NumBits;
    if ((iVar8 == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PersistentPrimitiveId.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapClipmap.cpp"
                           ,0x247,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((iVar2 <= iVar8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PersistentPrimitiveId.Index < RenderedPrimitivesMaxNum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapClipmap.cpp"
                           ,0x248,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((this->PerLightCacheEntry).Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (this->PerLightCacheEntry).Object;
    if (((iVar8 < 0) || ((pFVar4->RenderedPrimitives).NumBits <= iVar8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar10 = (pFVar4->RenderedPrimitives).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<unsigned_int>)0x0) {
      FVar10 = (ForElementType<unsigned_int>)&pFVar4->RenderedPrimitives;
    }
    uVar3 = *(uint *)((longlong)FVar10 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4
                     );
    LazyInitAndSetBitArray(&this->RenderedPrimitives,iVar8,true,iVar2);
    if (((this->PerLightCacheEntry).Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = 1;
    pFVar4 = (this->PerLightCacheEntry).Object;
    if (((GVSMCacheDeformableMeshesInvalidate == 0) || (!(bool)param_1->Proxy->bHasDeformableMesh))
       || (param_1->Proxy->ShadowCacheInvalidationBehavior != Auto)) {
      if ((uVar3 & 1 << ((byte)iVar8 & 0x1f)) != 0) {
        return;
      }
      if (GVSMCacheDebugSkipRevealedPrimitivesInvalidate != 0) {
        return;
      }
      uVar9 = 0;
    }
    local_28 = (param_1->PersistentIndex).Index;
    iStack_24 = param_1->InstanceSceneDataOffset;
    iStack_20 = param_1->NumInstanceSceneDataEntries;
    uStack_1c = CONCAT31(uStack_1c._1_3_,uVar9);
    pFVar5 = (pFVar4->PrimitiveInstancesToInvalidate).AllocatorInstance.Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         pFVar5 + (longlong)(pFVar4->PrimitiveInstancesToInvalidate).ArrayMax * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = (pFVar4->PrimitiveInstancesToInvalidate).ArrayNum;
    piVar1 = &(pFVar4->PrimitiveInstancesToInvalidate).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&(pFVar4->PrimitiveInstancesToInvalidate).AllocatorInstance,piVar1);
    }
    (pFVar4->PrimitiveInstancesToInvalidate).ArrayNum = iVar8 + 1;
    pFVar5 = (pFVar4->PrimitiveInstancesToInvalidate).AllocatorInstance.Data +
             (longlong)iVar8 * 0x10;
    *(ulonglong *)pFVar5 = CONCAT44(iStack_24,local_28);
    *(ulonglong *)(pFVar5 + 8) = CONCAT44(uStack_1c,iStack_20);
  }
  return;
}

// UpdateCachedFrameData @ 1458160f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FVirtualShadowMapClipmap::UpdateCachedFrameData(FVirtualShadowMapClipmap *this)

{
  FVirtualShadowMapPerLightCacheEntry *pFVar1;
  ForElementType<unsigned_int> FVar2;
  
  pFVar1 = (this->PerLightCacheEntry).Object;
  if ((pFVar1 != (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
     ((this->RenderedPrimitives).NumBits != 0)) {
    if (&pFVar1->RenderedPrimitives != &this->RenderedPrimitives) {
      if ((this->RenderedPrimitives).AllocatorInstance.SecondaryData ==
          (ForElementType<unsigned_int>)0x0) {
        memmove(&pFVar1->RenderedPrimitives,&this->RenderedPrimitives,0x10);
      }
      FVar2 = (pFVar1->RenderedPrimitives).AllocatorInstance.SecondaryData;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)FVar2);
      }
      (pFVar1->RenderedPrimitives).AllocatorInstance.SecondaryData =
           (this->RenderedPrimitives).AllocatorInstance.SecondaryData;
      (this->RenderedPrimitives).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
      ;
      (pFVar1->RenderedPrimitives).NumBits = (this->RenderedPrimitives).NumBits;
      (pFVar1->RenderedPrimitives).MaxBits = (this->RenderedPrimitives).MaxBits;
      (this->RenderedPrimitives).NumBits = 0;
      (this->RenderedPrimitives).MaxBits = 0;
    }
  }
  return;
}

