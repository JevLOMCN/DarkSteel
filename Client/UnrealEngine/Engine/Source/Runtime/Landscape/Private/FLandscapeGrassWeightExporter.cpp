// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 8

// FLandscapeGrassWeightExporter @ 145f78f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FLandscapeGrassWeightExporter * __thiscall
FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter
          (FLandscapeGrassWeightExporter *this,ALandscapeProxy *param_1,
          TArrayView<ULandscapeComponent_*_const,int> *param_2,bool param_3,bool param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5,bool param_6,bool param_7)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TObjectPtr<ULandscapeComponent>_u_0 TVar7;
  undefined8 uVar8;
  ALandscapeProxy *pAVar9;
  longlong lVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  FLandscapeGrassWeightExporter *pFVar19;
  FSceneInterface *pFVar20;
  FComponentInfo *pFVar21;
  undefined1 *puVar22;
  TIntPoint<int> TVar23;
  FPayload *pFVar24;
  TRotator<double> *pTVar25;
  TInverseRotationMatrix<double> *pTVar26;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar27;
  TObjectPtr<ULandscapeComponent>_u_0 *pTVar28;
  undefined1 *puVar29;
  FRotationConversionCache *this_02;
  undefined ***pppuVar30;
  ulonglong uVar31;
  undefined4 *puVar32;
  TTransform<double> *pTVar33;
  uint uVar34;
  TObjectPtr<ULandscapeComponent>_u_0 *pTVar35;
  double *pdVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  undefined4 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auStackY_3c8 [32];
  undefined1 local_377 [3];
  uint local_374;
  TObjectPtr<ULandscapeComponent>_u_0 *local_370;
  undefined4 local_368;
  uint uStack_364;
  TObjectPtr<ULandscapeComponent>_u_0 local_360;
  ForAnyElementType local_358;
  undefined8 local_350;
  TVector2<double>_u_0 local_348;
  undefined4 local_338;
  longlong local_330;
  int local_328;
  undefined4 local_324;
  undefined8 local_320;
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  TRotator<double> local_2f0;
  undefined1 local_2d8 [16];
  undefined8 local_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined8 local_298;
  TRotator<double> local_290;
  FScopedCapture local_278;
  code *local_238 [2];
  undefined **local_228;
  FLandscapeGrassWeightExporter *pFStack_220;
  undefined8 local_218;
  undefined ***local_210;
  undefined1 local_208 [16];
  undefined **local_1f8;
  FLandscapeGrassWeightExporter *pFStack_1f0;
  undefined8 local_1e8;
  undefined ***local_1e0;
  byte local_1d8;
  FSyncScope local_1c8;
  TMatrix<double> local_1a8;
  TInverseRotationMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  puVar1 = &this->field_0x68;
  puVar22 = &this->field_0x5c;
  *(undefined ***)this = &___7FLandscapeGrassWeightExporter_RenderThread__6B_;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined4 *)&this->field_0x58 = 0;
  *(undefined4 *)puVar22 = 1;
  *(undefined8 *)puVar1 = 0;
  iVar16 = param_5->ArrayNum;
  pFVar6 = (param_5->AllocatorInstance).Data;
  *(int *)&this->field_0x70 = iVar16;
  if (iVar16 == 0) {
    *(undefined4 *)&this->field_0x74 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar16,0,(ForAnyElementType *)puVar1,iVar16,(int *)&this->field_0x74);
    memcpy(*(void **)puVar1,pFVar6,(longlong)iVar16 << 2);
  }
  puVar32 = (undefined4 *)0x0;
  *(undefined8 *)&this->field_0x98 = 0;
  uVar34 = 0;
  if (param_7) {
    puVar17 = ::operator_new(0x28);
    puVar18 = puVar32;
    if (puVar17 != (undefined4 *)0x0) {
      *puVar17 = 0;
      *(undefined2 *)(puVar17 + 1) = 0;
      *(undefined1 *)((longlong)puVar17 + 6) = 0;
      *(undefined8 *)(puVar17 + 2) = 0;
      *(undefined8 *)(puVar17 + 4) = 0;
      *(undefined8 *)(puVar17 + 6) = 0;
      *(undefined8 *)(puVar17 + 8) = 0;
      puVar18 = puVar17;
    }
    *(undefined4 **)&this->field_0x98 = puVar18;
  }
  *(undefined ***)this = &___7FLandscapeGrassWeightExporter__6B_;
  (this->LandscapeProxy).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ALandscapeProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  iVar16 = param_2->ArrayNum;
  this->ComponentSizeVerts = param_1->ComponentSizeQuads + 1;
  this->SubsectionSizeQuads = param_1->SubsectionSizeQuads;
  this->NumSubsections = param_1->NumSubsections;
  (this->GrassTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GrassTypes).ArrayNum = 0;
  (this->GrassTypes).ArrayMax = 0;
  if ((iVar16 < 1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InLandscapeComponents.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                          ,499,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    pFVar19 = (FLandscapeGrassWeightExporter *)(*pcVar11)();
    return pFVar19;
  }
  if ((param_2->ArrayNum < 1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar15)) {
    pcVar11 = (code *)swi(3);
    pFVar19 = (FLandscapeGrassWeightExporter *)(*pcVar11)();
    return pFVar19;
  }
  pTVar35 = (TObjectPtr<ULandscapeComponent>_u_0 *)param_2->DataPtr;
  pFVar20 = UActorComponent::GetScene((UActorComponent *)pTVar35->DebugPtr);
  local_374 = this->ComponentSizeVerts;
  puVar1 = &this->field_0x10;
  uVar2 = param_2->ArrayNum;
  local_368 = 0;
  *(FSceneInterface **)&this->field_0x8 = pFVar20;
  *(ulonglong *)&this->field_0x60 = (ulonglong)local_374 << 0x20;
  uStack_364 = local_374;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (*(int *)&this->field_0x5c < (int)uVar2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo>_>
              (0x40,8,uVar2,
               (ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo> *)puVar1,
               *(int *)&this->field_0x58,(int *)puVar22);
  }
  local_370 = pTVar35 + (int)uVar2;
  if (pTVar35 != local_370) {
    do {
      TVar7 = (TObjectPtr<ULandscapeComponent>_u_0)pTVar35->DebugPtr;
      if (((TVar7.DebugPtr)->_padding_ == 0) &&
         (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_7012649994763107841>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                              ,0x1ff,"Component->SceneProxy"), bVar15)) {
        pcVar11 = (code *)swi(3);
        pFVar19 = (FLandscapeGrassWeightExporter *)(*pcVar11)();
        return pFVar19;
      }
      local_360 = TVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
      }
      local_330 = (TVar7.DebugPtr)->_padding_;
      local_358.Data = (FScriptContainerElement *)0x0;
      local_348 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      local_350 = 0;
      local_338 = 0;
      local_328 = 0;
      local_324 = 0x7fffffff;
      iVar16 = 0;
      if ((param_3) &&
         ((TArray<TObjectPtr<ULandscapeGrassType>,TSizedDefaultAllocator<32>_> *)&local_358 !=
          &(TVar7.DebugPtr)->GrassTypes)) {
        uVar34 = ((TVar7.DebugPtr)->GrassTypes).ArrayNum;
        pFVar6 = ((TVar7.DebugPtr)->GrassTypes).AllocatorInstance.Data;
        local_350 = (ulonglong)uVar34;
        iVar16 = 0;
        if (uVar34 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar34,0,&local_358,uVar34,(int *)((longlong)&local_350 + 4));
          ConstructItems<TObjectPtr<ULandscapeGrassType>,TObjectPtr<ULandscapeGrassType>,int>
                    (local_358.Data,(TObjectPtr<ULandscapeGrassType> *)pFVar6,uVar34);
          iVar16 = (int)local_350;
        }
      }
      if ((param_4) || (0 < iVar16)) {
        local_328 = local_328 + ((int)(iVar16 + 5 + (iVar16 + 5 >> 0x1f & 3U)) >> 2);
      }
      pTVar28 = *(TObjectPtr<ULandscapeComponent>_u_0 **)&this->field_0x50;
      if (*(TObjectPtr<ULandscapeComponent>_u_0 **)&this->field_0x50 ==
          (TObjectPtr<ULandscapeComponent>_u_0 *)0x0) {
        pTVar28 = (TObjectPtr<ULandscapeComponent>_u_0 *)puVar1;
      }
      if (((pTVar28 <= &local_360) && (&local_360 < pTVar28 + (longlong)*(int *)puVar22 * 8)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar11 = (code *)swi(3);
        pFVar19 = (FLandscapeGrassWeightExporter *)(*pcVar11)();
        return pFVar19;
      }
      iVar16 = *(int *)&this->field_0x58;
      if (iVar16 == *(int *)puVar22) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo>_>
                           (0x840,(ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo>
                                   *)puVar1,(int *)puVar22);
      }
      *(int *)&this->field_0x58 = iVar16 + 1;
      puVar29 = *(undefined1 **)&this->field_0x50;
      if (*(undefined1 **)&this->field_0x50 == (undefined1 *)0x0) {
        puVar29 = puVar1;
      }
      pFVar21 = FLandscapeGrassWeightExporter_RenderThread::FComponentInfo::FComponentInfo
                          ((FComponentInfo *)(puVar29 + (longlong)iVar16 * 0x40),
                           (FComponentInfo *)&local_360.ObjectPtr);
      if (local_358.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_358.Data);
      }
      pFVar21->PixelOffsetX = (int)puVar32;
      pTVar35 = pTVar35 + 1;
      uVar34 = (int)puVar32 + local_374 * pFVar21->NumPasses;
      puVar32 = (undefined4 *)(ulonglong)uVar34;
    } while (pTVar35 != local_370);
  }
  dVar12 = __real_3fe0000000000000;
  *(uint *)&this->field_0x60 = uVar34;
  uVar8 = *(undefined8 *)&this->field_0x60;
  local_320._4_4_ = (int)((ulonglong)uVar8 >> 0x20);
  local_370 = (TObjectPtr<ULandscapeComponent>_u_0 *)CONCAT44(local_320._4_4_ + -1,(int)uVar8 + -1);
  *(float *)&this->field_0x78 = ((float)(int)local_374 + (float)(int)local_374) / (float)(int)uVar34
  ;
  iVar16 = *(int *)&this->field_0x58;
  puVar22 = *(undefined1 **)&this->field_0x50;
  if (*(undefined1 **)&this->field_0x50 == (undefined1 *)0x0) {
    puVar22 = puVar1;
  }
  pdVar36 = (double *)(puVar22 + 0x18);
  local_320 = uVar8;
  while( true ) {
    if (*(int *)&this->field_0x58 != iVar16) {
      local_377[0] = 0;
      `TCheckedPointerIterator<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_377);
    }
    if (pdVar36 + -3 == (double *)(puVar22 + (longlong)iVar16 * 0x40)) break;
    dVar40 = pdVar36[-3];
    iVar3 = *(int *)((longlong)dVar40 + 0x548);
    iVar4 = *(int *)((longlong)dVar40 + 0x54c);
    TVar23 = ALandscapeProxy::GetSectionBase((this->LandscapeProxy).field0_0x0.DebugPtr);
    uVar8 = *(undefined8 *)&this->field_0x60;
    iVar5 = *(int *)((longlong)TVar23.field0_0x0 + 4);
    *pdVar36 = ((double)(*(int *)TVar23.field0_0x0 - iVar3) + (double)*(int *)(pdVar36 + 2)) /
               ((double)(int)uVar8 * dVar12);
    pdVar36[1] = (double)(iVar4 - iVar5) / ((double)(int)((ulonglong)uVar8 >> 0x20) * dVar12);
    pdVar36 = pdVar36 + 8;
  }
  pAVar9 = (this->LandscapeProxy).field0_0x0.DebugPtr;
  lVar10 = pAVar9->_padding_;
  pTVar33 = (TTransform<double> *)(lVar10 + 0x1f0);
  if (lVar10 == 0) {
    pTVar33 = &UE::Math::TTransform<double>::Identity;
  }
  auVar39 = *(undefined1 (*) [16])(pTVar33->Rotation).ZW.m128d_f64;
  dVar14 = auVar39._8_8_;
  local_2c8 = 0;
  dVar13 = (pTVar33->Scale3D).ZW.m128d_f64[0] * 0.0;
  dVar47 = (pTVar33->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar40 = (double)(int)local_370 * dVar12;
  dVar37 = (double)(int)((ulonglong)local_370 >> 0x20) * dVar12;
  auVar52 = *(undefined1 (*) [16])(pTVar33->Rotation).ZW.m128d_f64;
  dVar41 = auVar52._0_8_;
  local_318 = *(undefined1 (*) [16])(pTVar33->Rotation).XY.m128d_f64;
  auVar43 = blendpd(local_318,auVar52,2);
  local_2d8._8_4_ = SUB84(dVar37,0);
  local_2d8._0_8_ = dVar40;
  local_2d8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
  dVar40 = dVar40 * (pTVar33->Scale3D).XY.m128d_f64[0];
  dVar37 = dVar37 * (pTVar33->Scale3D).XY.m128d_f64[1];
  uVar49 = (undefined4)((ulonglong)dVar37 >> 0x20);
  auVar53._8_4_ = SUB84(dVar37,0);
  auVar53._0_8_ = dVar40;
  auVar53._12_4_ = uVar49;
  auVar54._0_8_ = auVar53._8_8_ * local_318._0_8_ - local_318._8_8_ * dVar40;
  auVar54._8_8_ = dVar13 * local_318._8_8_ - dVar41 * dVar37;
  auVar55._8_4_ = SUB84(dVar37,0);
  auVar55._0_8_ = dVar40;
  auVar55._12_4_ = uVar49;
  auVar38._8_4_ = SUB84(dVar47,0);
  auVar38._0_8_ = dVar13;
  auVar38._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
  auVar38 = blendpd(auVar55,auVar38,2);
  auVar45._0_8_ = auVar38._0_8_ * dVar41 - auVar43._0_8_ * dVar13;
  auVar45._8_8_ = auVar38._8_8_ * auVar52._8_8_ - auVar43._8_8_ * dVar47;
  auVar38 = *(undefined1 (*) [16])(pTVar33->Rotation).XY.m128d_f64;
  dVar47 = auVar54._8_8_ + auVar54._8_8_;
  dVar48 = auVar45._0_8_ + auVar45._0_8_;
  auVar55 = blendpd(auVar54,auVar45,2);
  auVar56._0_8_ = auVar55._0_8_ + auVar55._0_8_;
  auVar56._8_8_ = auVar55._8_8_ + auVar55._8_8_;
  auVar50._8_4_ = SUB84(dVar48,0);
  auVar50._0_8_ = dVar47;
  uVar49 = (undefined4)((ulonglong)dVar48 >> 0x20);
  auVar50._12_4_ = uVar49;
  auVar44._8_4_ = SUB84(dVar48,0);
  auVar44._0_8_ = dVar47;
  auVar44._12_4_ = uVar49;
  auVar45 = blendpd(auVar44,auVar56,2);
  auVar55 = blendpd(auVar38,auVar52,2);
  auVar43._8_4_ = auVar39._8_4_;
  auVar43._0_8_ = dVar14;
  auVar43._12_4_ = auVar39._12_4_;
  auVar51._0_8_ = auVar50._8_8_ * auVar38._0_8_ - auVar38._8_8_ * dVar47;
  auVar51._8_8_ = auVar56._0_8_ * auVar38._8_8_ - dVar41 * dVar48;
  auVar39._8_4_ = SUB84(auVar51._8_8_,0);
  auVar39._0_8_ = auVar51._0_8_;
  auVar39._12_4_ = (int)((ulonglong)auVar51._8_8_ >> 0x20);
  auVar46._0_8_ = auVar45._0_8_ * dVar41 - auVar55._0_8_ * auVar56._0_8_;
  auVar46._8_8_ = auVar45._8_8_ * auVar52._8_8_ - auVar55._8_8_ * auVar56._8_8_;
  auVar52 = blendpd(auVar51,auVar46,2);
  local_2b0 = dVar14 * auVar56._0_8_ + dVar13 + auVar52._0_8_ +
              (pTVar33->Translation).ZW.m128d_f64[0];
  local_2c0 = dVar14 * dVar47 + dVar40 + auVar39._8_8_ + (pTVar33->Translation).XY.m128d_f64[0];
  dStack_2b8 = auVar43._8_8_ * dVar48 + dVar37 + auVar46._0_8_ +
               (pTVar33->Translation).XY.m128d_f64[1];
  dVar40 = ___xmm_3ff00000000000003ff0000000000000;
  dVar37 = _UNK_150689688;
  if (lVar10 != 0) {
    local_298 = *(undefined8 *)(lVar10 + 0x240);
    local_2a8 = *(double *)(lVar10 + 0x230);
    dStack_2a0 = *(double *)(lVar10 + 0x238);
    dVar40 = local_2a8;
    dVar37 = dStack_2a0;
    local_1c8.PipeBits._16_8_ = local_298;
  }
  *(double *)&this->field_0x80 = local_2c0;
  *(double *)&this->field_0x88 = dStack_2b8;
  *(double *)&this->field_0x90 = local_2b0;
  lVar10 = pAVar9->_padding_;
  dVar37 = dVar37 * (double)(int)((ulonglong)*(undefined8 *)&this->field_0x60 >> 0x20) * dVar12;
  dVar12 = dVar40 * (double)(int)*(undefined8 *)&this->field_0x60 * dVar12;
  local_2f0.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_2f0.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_2f0.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  if (lVar10 != 0) {
    local_318 = *(undefined1 (*) [16])(lVar10 + 0x1f0);
    local_308 = *(double *)(lVar10 + 0x200);
    dStack_300 = *(double *)(lVar10 + 0x208);
    this_02 = (FRotationConversionCache *)(lVar10 + 0x1e0);
    pFVar24 = FRotationConversionCache::GetOrCreatePayload(this_02);
    auVar52._8_8_ = -(ulonglong)((pFVar24->CachedQuat).W != dStack_300);
    auVar52._0_8_ = -(ulonglong)((pFVar24->CachedQuat).Z != local_308);
    uVar34 = movmskpd((int)this_02,auVar52);
    auVar42._8_8_ = -(ulonglong)((pFVar24->CachedQuat).Y != (double)local_318._8_8_);
    auVar42._0_8_ = -(ulonglong)((pFVar24->CachedQuat).X != (double)local_318._0_8_);
    iVar16 = movmskpd((int)pFVar24,auVar42);
    if ((uVar34 & 0x3fffffff) != 0 || iVar16 != 0) {
      (pFVar24->CachedQuat).X = (double)local_318._0_8_;
      (pFVar24->CachedQuat).Y = (double)local_318._8_8_;
      (pFVar24->CachedQuat).Z = local_308;
      (pFVar24->CachedQuat).W = dStack_300;
      pTVar25 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_318,&local_290);
      dVar40 = pTVar25->Yaw;
      (pFVar24->CachedRotator).Pitch = pTVar25->Pitch;
      (pFVar24->CachedRotator).Yaw = dVar40;
      (pFVar24->CachedRotator).Roll = pTVar25->Roll;
    }
    local_2f0.Roll = (pFVar24->CachedRotator).Roll;
    local_2f0.Pitch = (pFVar24->CachedRotator).Pitch;
    local_2f0.Yaw = (pFVar24->CachedRotator).Yaw;
  }
  puVar1 = &this->field_0xa0;
  pTVar26 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                      (&local_128,&local_2f0);
  uVar8 = *(undefined8 *)&pTVar26->field_0x8;
  *(undefined8 *)puVar1 = *(undefined8 *)pTVar26;
  *(undefined8 *)&this->field_0xa8 = uVar8;
  uVar8 = *(undefined8 *)&pTVar26->field_0x18;
  *(undefined8 *)&this->field_0xb0 = *(undefined8 *)&pTVar26->field_0x10;
  *(undefined8 *)&this->field_0xb8 = uVar8;
  uVar8 = *(undefined8 *)&pTVar26->field_0x28;
  *(undefined8 *)&this->field_0xc0 = *(undefined8 *)&pTVar26->field_0x20;
  *(undefined8 *)&this->field_0xc8 = uVar8;
  uVar8 = *(undefined8 *)&pTVar26->field_0x38;
  *(undefined8 *)&this->field_0xd0 = *(undefined8 *)&pTVar26->field_0x30;
  *(undefined8 *)&this->field_0xd8 = uVar8;
  uVar8 = *(undefined8 *)&pTVar26->field_0x48;
  *(undefined8 *)&this->field_0xe0 = *(undefined8 *)&pTVar26->field_0x40;
  *(undefined8 *)&this->field_0xe8 = uVar8;
  uVar8 = *(undefined8 *)&pTVar26->field_0x58;
  *(undefined8 *)&this->field_0xf0 = *(undefined8 *)&pTVar26->field_0x50;
  *(undefined8 *)&this->field_0xf8 = uVar8;
  uVar8 = *(undefined8 *)&pTVar26->field_0x68;
  *(undefined8 *)&this->field_0x100 = *(undefined8 *)&pTVar26->field_0x60;
  *(undefined8 *)&this->field_0x108 = uVar8;
  local_1a8.M[0][1] = _UNK_150689518;
  local_1a8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  uVar8 = *(undefined8 *)&pTVar26->field_0x78;
  *(undefined8 *)&this->field_0x110 = *(undefined8 *)&pTVar26->field_0x70;
  *(undefined8 *)&this->field_0x118 = uVar8;
  local_1a8.M[1][0] = ___xmm_bff00000000000000000000000000000;
  local_1a8.M[1][1] = _UNK_1508ffb28;
  local_1a8.M[0][2] = 0.0;
  local_1a8.M[0][3] = 0.0;
  local_1a8.M[1][2] = 0.0;
  local_1a8.M[1][3] = 0.0;
  local_1a8.M[2][0] = 0.0;
  local_1a8.M[2][1] = 0.0;
  local_1a8.M[2][2] = ___xmm_0000000000000000bff0000000000000;
  local_1a8.M[2][3] = _UNK_15076ad98;
  local_1a8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_1a8.M[3][3] = _UNK_15061cbc8;
  local_1a8.M[3][0] = 0.0;
  local_1a8.M[3][1] = 0.0;
  VectorMatrixMultiply((TMatrix<double> *)puVar1,(TMatrix<double> *)puVar1,&local_1a8);
  dVar40 = __real_3ff0000000000000;
  if (dVar37 != 0.0) {
    dVar40 = __real_3ff0000000000000 / dVar37;
  }
  dVar37 = __real_3ff0000000000000;
  if (dVar12 != 0.0) {
    dVar37 = __real_3ff0000000000000 / dVar12;
  }
  *(double *)&this->field_0x120 = dVar37;
  *(undefined8 *)&this->field_0x128 = 0;
  *(undefined8 *)&this->field_0x130 = 0;
  *(undefined8 *)&this->field_0x138 = 0;
  *(undefined8 *)&this->field_0x140 = 0;
  *(double *)&this->field_0x148 = dVar40;
  *(undefined8 *)&this->field_0x150 = 0;
  *(undefined8 *)&this->field_0x158 = 0;
  *(undefined8 *)&this->field_0x160 = 0;
  *(undefined8 *)&this->field_0x168 = 0;
  *(undefined8 *)&this->field_0x170 = 0xbe90000000000000;
  *(undefined8 *)&this->field_0x178 = 0;
  *(undefined8 *)&this->field_0x180 = 0;
  *(undefined8 *)&this->field_0x188 = 0;
  *(undefined8 *)&this->field_0x190 = 0x3fe0000000000000;
  *(undefined8 *)&this->field_0x198 = 0x3ff0000000000000;
  if (param_6) {
    UE::RenderCommandPipe::FSyncScope::FSyncScope(&local_1c8);
    RenderCaptureInterface::FScopedCapture::FScopedCapture
              (&local_278,GRenderCaptureNextGrassmapDraws != 0,L"LandscapeGrassmapCapture",
               (wchar_t *)0x0);
    GRenderCaptureNextGrassmapDraws = GRenderCaptureNextGrassmapDraws + -1;
    local_210 = (undefined ***)0x0;
    if (GRenderCaptureNextGrassmapDraws < 0) {
      GRenderCaptureNextGrassmapDraws = 0;
    }
    local_228 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter'::`20'::<lambda_1>,1,0>
                 ::_vftable_;
    local_218 = *(undefined8 *)&this->field_0x98;
    local_238[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter'::__l20::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
    pFStack_220 = this;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter_::__l20::TSTR_FDrawSceneCommand562>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_238);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_208._0_8_ = local_238[0];
      local_1e0 = local_210;
      local_1f8 = local_228;
      pFStack_1f0 = pFStack_220;
      local_1e8 = local_218;
      local_238[0] = (code *)0x0;
      local_1d8 = 2;
      pFVar27 = (FRenderCommandTag *)
                TRenderCommandTag<`FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter'::__l20::TSTR_FDrawSceneCommand562>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_208,pFVar27);
      uVar31 = (ulonglong)local_1d8;
      if ((2 < uVar31) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        pFVar19 = (FLandscapeGrassWeightExporter *)(*pcVar11)();
        return pFVar19;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar31] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_208._0_8_ != (code *)0x0) {
          pppuVar30 = (undefined ***)(local_208 + 0x10);
          if (local_1e0 != (undefined ***)0x0) {
            pppuVar30 = local_1e0;
          }
          (*(code *)(*pppuVar30)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar31])(local_208);
      }
    }
    if (local_238[0] != (code *)0x0) {
      pppuVar30 = &local_228;
      if (local_210 != (undefined ***)0x0) {
        pppuVar30 = local_210;
      }
      (*(code *)(*pppuVar30)[2])();
    }
    RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_278);
    UE::RenderCommandPipe::FSyncScope::~FSyncScope(&local_1c8);
  }
  return this;
}

// ApplyResults @ 145f81dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FLandscapeGrassWeightExporter::ApplyResults(FLandscapeGrassWeightExporter *this)

{
  bool bVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [88];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId850,"ApplyResults",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
               ,0x352);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId850);
  }
  FetchResults(this,(TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
                     *)local_78,true);
  ApplyResults((TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
                *)local_78);
  local_20 = 0;
  if ((void *)local_78._80_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._80_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>_>,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>_>,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>_>,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)local_78);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyResults @ 145f81ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FLandscapeGrassWeightExporter::ApplyResults
          (TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
           *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ULandscapeComponent *this;
  FLandscapeComponentGrassData *pFVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  int iVar9;
  TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
  *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  TReferenceControllerBase<1> *pTVar16;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  FName local_res20;
  FString local_b8;
  TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
  *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
  *local_78;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> TStack_70;
  undefined8 uStack_50;
  
  uVar3 = *(uint *)&param_1->field_0x38;
  puVar1 = &param_1->field_0x28;
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  uStack_a0 = 0;
  uStack_9c = 1;
  uStack_8c = uStack_a0;
  local_88 = uStack_a0;
  if (uVar3 != 0) {
    puVar15 = *(uint **)&param_1->field_0x30;
    if (*(uint **)&param_1->field_0x30 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    pTVar11 = pTVar16;
    pTVar7 = pTVar16;
    local_88 = 0;
    uStack_a0 = 0;
    while (uVar13 == 0) {
      iVar9 = (int)pTVar11;
      local_88 = (int)pTVar7 + 0x20;
      pTVar7 = (TReferenceControllerBase<1> *)(ulonglong)local_88;
      uStack_a0 = iVar9 + 1;
      pTVar11 = (TReferenceControllerBase<1> *)(ulonglong)uStack_a0;
      uStack_8c = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_a0)
      goto LAB_145f81f3d;
      uVar13 = puVar15[(longlong)iVar9 + 1];
    }
    uStack_9c = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    uStack_8c = local_res10 + -1 + local_88;
    if ((int)uVar3 < (int)uStack_8c) {
      uStack_8c = uVar3;
    }
  }
LAB_145f81f3d:
  uVar13 = *(uint *)&param_1->field_0x38;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_80 = *(int *)&param_1->field_0x20 - *(int *)&param_1->field_0x44;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,uStack_a0);
  TStack_70.CurrentBitIndex = uStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar13 >> 5;
  TStack_70._28_4_ = uStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = param_1;
  local_98 = puVar1;
  uStack_84 = uStack_8c;
  local_78 = param_1;
  TStack_70.Array = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar1;
  if ((((int)uVar13 < 0) || ((int)uVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&param_1->field_0x38;
  if (uVar13 != uVar3) {
    puVar14 = *(undefined1 **)&param_1->field_0x30;
    if (*(undefined1 **)&param_1->field_0x30 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar9 * 4);
    while (uVar13 == 0) {
      lVar8 = (longlong)iVar9;
      uVar12 = uVar12 + 0x20;
      iVar9 = iVar9 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_145f82040;
      uVar13 = *(uint *)(puVar14 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    uVar13 = local_res18 + -1 + uVar12;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_145f82040:
  while( true ) {
    pTVar10 = local_78;
    if (*(int *)&local_78->field_0x20 - *(int *)&local_78->field_0x44 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>_>,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar8 = (longlong)TStack_70.CurrentBitIndex;
    if (((TStack_70.CurrentBitIndex == uVar13) &&
        (TStack_70.Array ==
         (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar1)) &&
       (pTVar10 == param_1)) {
      return;
    }
    if (*(TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
          **)&pTVar10->field_0x18 !=
        (TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
         *)0x0) {
      pTVar10 = *(TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
                  **)&pTVar10->field_0x18;
    }
    this = *(ULandscapeComponent **)(&pTVar10->field_0x0 + lVar8 * 0x18);
    pFVar4 = *(FLandscapeComponentGrassData **)(&pTVar10->field_0x8 + lVar8 * 0x18);
    *(undefined8 *)(&pTVar10->field_0x8 + lVar8 * 0x18) = 0;
    ULandscapeComponent::GetLandscapeProxy(this);
    if (5 < (byte)LogGrass._0_1_) {
      local_res20 = (FName)this->_padding_;
      ::FName::ToString(&local_res20,&local_b8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    if ((pFVar4 == (FLandscapeComponentGrassData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InRawPtrProxy.Object != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x18d,L""), bVar6)) break;
    pTVar7 = ::operator_new(0x18);
    pTVar11 = pTVar16;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFLandscapeComponentGrassData__U__DefaultDeleter_UFLandscapeComponentGrassData___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pTVar7[1]._padding_ = (longlong)pFVar4;
      pTVar11 = pTVar7;
    }
    if ((pFVar4 == (FLandscapeComponentGrassData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InRawPtrProxy.Object != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0xe3,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar7 = (this->GrassData).SharedReferenceCount.ReferenceController;
    (this->GrassData).Object = pFVar4;
    (this->GrassData).SharedReferenceCount.ReferenceController = pTVar11;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FindFirstSetBit
              (&TStack_70);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// CancelAndSelfDestruct @ 145f85430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FLandscapeGrassWeightExporter::CancelAndSelfDestruct(FLandscapeGrassWeightExporter *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FLandscapeGrassWeightExporter *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FLandscapeGrassWeightExporter *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (*(longlong *)&this->field_0x98 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameThreadAsyncReadbackPtr != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                       ,0x2b3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FLandscapeAsyncTextureReadback::CancelAndSelfDestruct
            (*(FLandscapeAsyncTextureReadback **)&this->field_0x98);
  *(undefined8 *)&this->field_0x98 = 0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLandscapeGrassWeightExporter::CancelAndSelfDestruct'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FLandscapeGrassWeightExporter::CancelAndSelfDestruct'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FLandscapeGrassWeightExporter::CancelAndSelfDestruct_::__l2::TSTR_FCancelAndDestructCommand699>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FLandscapeGrassWeightExporter::CancelAndSelfDestruct'::__l2::TSTR_FCancelAndDestructCommand699>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// CheckAndUpdateAsyncReadback @ 145f855f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FLandscapeGrassWeightExporter::CheckAndUpdateAsyncReadback
          (FLandscapeGrassWeightExporter *this,bool *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)&this->field_0x98 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameThreadAsyncReadbackPtr != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                       ,0x23d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FLandscapeAsyncTextureReadback::CheckAndUpdate
                    (*(FLandscapeAsyncTextureReadback **)&this->field_0x98,param_1,param_2);
  return bVar2;
}

// FetchResults @ 145f8c410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
* __thiscall
FLandscapeGrassWeightExporter::FetchResults
          (FLandscapeGrassWeightExporter *this,
          TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
          *__return_storage_ptr__,bool param_1)

{
  void *pvVar1;
  code *pcVar2;
  uint *puVar3;
  FLandscapeGrassWeightExporter *pFVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
  *pTVar8;
  undefined1 *puVar9;
  FLandscapeComponentGrassData *this_00;
  FLandscapeComponentGrassData *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  uint *puVar16;
  TSet<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  longlong lVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStackY_188 [32];
  undefined1 local_157 [7];
  ForAnyElementType local_150;
  int local_148 [2];
  longlong local_140;
  int local_138;
  uint local_134;
  FLandscapeComponentGrassData *local_130;
  uint *local_128;
  FLandscapeGrassWeightExporter *local_120;
  ULandscapeComponent *local_118;
  TSet<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *local_110;
  void *local_108;
  IBuffer2DView<unsigned_short> local_100;
  void *local_f8;
  undefined8 local_f0;
  int local_e8;
  undefined1 local_e0 [8];
  IBuffer2DView<unsigned_char> **local_d8;
  FScriptContainerElement *local_d0;
  uint *local_c8;
  undefined1 *local_c0;
  IBuffer2DView<unsigned_char> ***local_b8;
  FScriptContainerElement **local_b0;
  ULandscapeComponent **local_a8;
  FLandscapeComponentGrassData **local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar21 = -1 < CpuChannel->Enabled;
  local_120 = this;
  local_110 = (TSet<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               *)__return_storage_ptr__;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId708,"FetchResults",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
               ,0x2c4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId708);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = 1;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0x20;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0;
  if ((*(longlong *)&this->field_0x98 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GameThreadAsyncReadbackPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                         ,0x2c8,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
              *)(*pcVar2)();
    return pTVar8;
  }
  lVar20 = *(longlong *)&this->field_0x98;
  if ((*(char *)(lVar20 + 6) == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bFinishedOnRenderThread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeAsyncTextureReadback.h"
                         ,0x48,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
              *)(*pcVar2)();
    return pTVar8;
  }
  local_108 = *(void **)(lVar20 + 0x18);
  iVar6 = *(int *)(lVar20 + 0x10);
  iVar19 = *(int *)(lVar20 + 0x14);
  *(undefined8 *)(lVar20 + 0x18) = 0;
  local_138 = *(int *)(lVar20 + 0x20);
  *(undefined8 *)(lVar20 + 0x20) = 0;
  if (param_1) {
    if ((*(longlong *)&this->field_0x98 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("GameThreadAsyncReadbackPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                           ,0x2ac,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
                *)(*pcVar2)();
      return pTVar8;
    }
    FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread
              (*(FLandscapeAsyncTextureReadback **)&this->field_0x98);
    *(undefined8 *)&this->field_0x98 = 0;
  }
  if (((iVar6 != *(int *)&this->field_0x60) || (iVar19 != *(int *)&this->field_0x64)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size == TargetSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                         ,0x2d1,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
              *)(*pcVar2)();
    return pTVar8;
  }
  TSet<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::Reserve((TSet<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
             *)__return_storage_ptr__,*(int *)&this->field_0x58);
  local_134 = *(uint *)&this->field_0x58;
  uVar11 = (ulonglong)(int)local_134;
  local_c0 = &this->field_0x10;
  local_100 = (IBuffer2DView<unsigned_short>)&___7FHeightBuffer2DView__6B_;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  puVar9 = *(undefined1 **)&this->field_0x50;
  if (*(undefined1 **)&this->field_0x50 == (undefined1 *)0x0) {
    puVar9 = local_c0;
  }
  local_e8 = 0;
  local_c8 = (uint *)(puVar9 + uVar11 * 0x40);
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  puVar16 = (uint *)(puVar9 + 0x10);
  local_98._8_8_ = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  pTVar17 = local_110;
  do {
    puVar3 = local_c8;
    pFVar10 = (FLandscapeComponentGrassData *)0x0;
    local_128 = puVar16;
    if (*(int *)(local_c0 + 0x48) != (int)uVar11) {
      local_157[0] = 0;
      `TCheckedPointerIterator<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_157);
    }
    if (puVar16 + -4 == puVar3) {
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      if (local_108 != (void *)0x0) {
        FMemory::Free(local_108);
      }
      if (bVar21) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return (TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
              *)pTVar17;
    }
    local_118 = *(ULandscapeComponent **)(puVar16 + -4);
    this_00 = ::operator_new(0x68);
    if (this_00 != (FLandscapeComponentGrassData *)0x0) {
      pFVar10 = FLandscapeComponentGrassData::FLandscapeComponentGrassData(this_00,local_118);
    }
    local_e8 = this->ComponentSizeVerts;
    local_f0 = CONCAT44(local_e8,*(undefined4 *)&this->field_0x60);
    bVar5 = 1 < local_50;
    local_130 = pFVar10;
    if (!bVar5) {
      TSet<TTuple<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*>,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*>,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*,0>,FDefaultSetAllocator>
                        *)local_98);
    }
    bVar22 = local_98._12_4_ != 0;
    local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
    if (bVar22) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_68 = 0xffffffff;
    local_64 = 0;
    local_70 = 0;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (bVar5) {
      local_50 = 1;
      TSet<TTuple<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*>,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*>,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*,0>,FDefaultSetAllocator>
                *)local_98);
    }
    uVar12 = *puVar16;
    iVar6 = 0;
    local_150.Data = (FScriptContainerElement *)0x0;
    local_148[0] = 0;
    local_148[1] = 0;
    if ((int)uVar12 < 1) {
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
    }
    else {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,uVar12,&local_150,local_148,local_148 + 1);
      DefaultConstructItems<FByteBuffer2DView,int>(local_150.Data + (longlong)iVar6 * 0x20,uVar12);
      iVar6 = local_148[0];
    }
    pFVar4 = local_120;
    uVar12 = 0;
    lVar20 = 0;
    if (0 < iVar6) {
      lVar15 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar12 < iVar6) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
                    *)(*pcVar2)();
          return pTVar8;
        }
        pFVar18 = local_150.Data + lVar15;
        uVar7 = 0;
        if ((int)uVar12 < (int)*puVar16) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
                    *)(*pcVar2)();
          return pTVar8;
        }
        local_d8 = *(IBuffer2DView<unsigned_char> ***)(*(longlong *)(puVar16 + -2) + lVar20 * 8);
        *(int *)(pFVar18 + 0x18) = pFVar4->ComponentSizeVerts;
        *(int *)(pFVar18 + 0x1c) = pFVar4->ComponentSizeVerts;
        *(undefined4 *)(pFVar18 + 0x14) = 4;
        *(int *)(pFVar18 + 0x10) = *(int *)&pFVar4->field_0x60 << 2;
        local_b8 = &local_d8;
        local_b0 = &local_d0;
        *(undefined8 *)(pFVar18 + 8) = 0;
        local_d0 = pFVar18;
        TSet<TTuple<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*>,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<ULandscapeGrassType_*_const_&,IBuffer2DView<unsigned_char>_*_&&>_>
                  ((TSet<TTuple<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*>,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*,0>,FDefaultSetAllocator>
                    *)local_98,
                   (TPairInitializer<ULandscapeGrassType_*_const_&,IBuffer2DView<unsigned_char>_*_&&>
                    *)local_e0,(bool *)&local_b8);
        uVar12 = uVar12 + 1;
        lVar20 = lVar20 + 1;
        lVar15 = lVar15 + 0x20;
        iVar6 = local_148[0];
      } while ((int)uVar12 < local_148[0]);
    }
    puVar3 = local_128;
    iVar19 = 0;
    if (0 < (int)puVar16[10]) {
      lVar20 = (longlong)(int)*puVar16;
      lVar15 = 0x20;
      local_140 = 1;
      uVar12 = 0;
      do {
        lVar13 = local_140;
        uVar14 = iVar19 * local_120->ComponentSizeVerts + puVar3[6];
        uVar7 = 0;
        if ((int)uVar14 < local_138) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
                      *)(*pcVar2)();
            return pTVar8;
          }
          iVar6 = local_148[0];
        }
        pvVar1 = (void *)((longlong)local_108 + (longlong)(int)uVar14 * 4);
        if (iVar19 < (int)puVar3[0xb]) {
          if (iVar19 == 0) {
            local_f8 = pvVar1;
            if (lVar20 < 1) goto LAB_145f8cbde;
            if ((iVar6 < 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
            *(void **)(local_150.Data + 8) = pvVar1;
            if (1 < lVar20) {
              if ((local_148[0] < 2) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                pTVar8 = (TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
                          *)(*pcVar2)();
                return pTVar8;
              }
              *(longlong *)(local_150.Data + 0x28) = (longlong)pvVar1 + 3;
            }
          }
          else {
            uVar7 = 0;
            if ((int)(uVar12 - 2) < iVar6) {
              uVar7 = 1 - uVar12 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
                        *)(*pcVar2)();
              return pTVar8;
            }
            *(longlong *)(local_150.Data + lVar15 + -0x58) = (longlong)pvVar1 + 2;
            lVar13 = local_140;
            if (local_140 + -2 < lVar20) {
              uVar7 = 0;
              if ((int)(uVar12 - 1) < local_148[0]) {
                uVar7 = ~(uVar12 - 1) >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                pTVar8 = (TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
                          *)(*pcVar2)();
                return pTVar8;
              }
              *(longlong *)(local_150.Data + lVar15 + -0x38) = (longlong)pvVar1 + 1;
              lVar13 = local_140;
              if (local_140 + -1 < lVar20) {
                uVar7 = 0;
                if ((int)uVar12 < local_148[0]) {
                  uVar7 = ~uVar12 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar2 = (code *)swi(3);
                  pTVar8 = (TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
                            *)(*pcVar2)();
                  return pTVar8;
                }
                lVar13 = local_140;
                *(void **)(local_150.Data + lVar15 + -0x18) = pvVar1;
                if (local_140 < lVar20) {
                  uVar7 = 0;
                  if ((int)(uVar12 + 1) < local_148[0]) {
                    uVar7 = ~(uVar12 + 1) >> 0x1f;
                  }
                  if ((uVar7 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    pTVar8 = (TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
                              *)(*pcVar2)();
                    return pTVar8;
                  }
                  *(longlong *)(local_150.Data + lVar15 + 8) = (longlong)pvVar1 + 3;
                }
              }
            }
          }
          iVar6 = local_148[0];
        }
LAB_145f8cbde:
        local_140 = lVar13 + 4;
        iVar19 = iVar19 + 1;
        lVar15 = lVar15 + 0x80;
        uVar12 = uVar12 + 4;
        puVar16 = local_128;
      } while (iVar19 < (int)puVar3[10]);
    }
    FLandscapeComponentGrassData::InitializeFrom
              (local_130,&local_100,
               (TMap<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*,0>_>
                *)local_98,true);
    pTVar17 = local_110;
    local_a8 = &local_118;
    local_a0 = &local_130;
    TSet<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
    ::
    Emplace<TPairInitializer<ULandscapeComponent_*_const_&,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_&&>_>
              (local_110,
               (TPairInitializer<ULandscapeComponent_*_const_&,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_&&>
                *)(local_e0 + 4),(bool *)&local_a8);
    if (local_150.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data);
    }
    pFVar10 = local_130;
    if (local_130 != (FLandscapeComponentGrassData *)0x0) {
      pFVar18 = (local_130->HeightWeightData).AllocatorInstance.Data;
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
      }
      *(undefined4 *)&(pFVar10->WeightOffsets).field_0x48 = 0;
      pvVar1 = *(void **)&(pFVar10->WeightOffsets).field_0x40;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULandscapeGrassType>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULandscapeGrassType>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULandscapeGrassType>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&pFVar10->WeightOffsets);
      ::operator_delete(pFVar10,0x68);
    }
    puVar16 = puVar16 + 0x10;
    uVar11 = (ulonglong)local_134;
    this = local_120;
  } while( true );
}

// FreeAsyncReadback @ 145f8da20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FLandscapeGrassWeightExporter::FreeAsyncReadback(FLandscapeGrassWeightExporter *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)&this->field_0x98 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameThreadAsyncReadbackPtr != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                       ,0x2ac,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread
            (*(FLandscapeAsyncTextureReadback **)&this->field_0x98);
  *(undefined8 *)&this->field_0x98 = 0;
  return;
}

// IsAsyncReadbackComplete @ 145f97e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FLandscapeGrassWeightExporter::IsAsyncReadbackComplete(FLandscapeGrassWeightExporter *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (*(longlong *)&this->field_0x98 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameThreadAsyncReadbackPtr != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                       ,0x243,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)(*(longlong *)&this->field_0x98 + 6);
}

