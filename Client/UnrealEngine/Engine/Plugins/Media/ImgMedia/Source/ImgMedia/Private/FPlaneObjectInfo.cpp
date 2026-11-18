// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 1

// CalculateVisibleTiles @ 14ea43580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
_anon_FB6FC205::FPlaneObjectInfo::CalculateVisibleTiles
          (FPlaneObjectInfo *this,TArray<FImgMediaViewInfo,TSizedDefaultAllocator<32>_> *param_1,
          FSequenceInfo *param_2,
          TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
          *param_3)

{
  int *piVar1;
  uint *puVar2;
  atomic<int> aVar3;
  int iVar4;
  TIntPoint<int>_u_0_s_0 TVar5;
  TIntPoint<int>_u_0_s_0 TVar6;
  ForElementType<FSetElementId> FVar7;
  undefined1 (*pauVar8) [16];
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  TConsoleVariableData<float> *pTVar19;
  float fVar20;
  TVector2<float>_u_0 TVar21;
  TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
  *this_00;
  void *pvVar22;
  bool bVar23;
  atomic<int> aVar24;
  int iVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  TSparseSetElement<TTuple<int,FImgMediaTileSelection>_> *pTVar28;
  undefined1 (*pauVar29) [16];
  FImgMediaTileSelection *this_01;
  ForElementType<unsigned_int> FVar30;
  ForElementType<FSetElementId> FVar31;
  TReferenceControllerBase<1> *pTVar32;
  uint uVar33;
  int iVar34;
  FScriptContainerElement *pFVar35;
  TSparseSetElement<TTuple<int,FImgMediaTileSelection>_> *pTVar36;
  FImgMediaViewInfo *pFVar37;
  uint uVar38;
  FImgMediaViewInfo *pFVar39;
  uint uVar40;
  TSparseSetElement<TTuple<int,FImgMediaTileSelection>_> *pTVar41;
  int iVar42;
  ulonglong uVar43;
  uint uVar44;
  longlong lVar45;
  TArray<float,TSizedDefaultAllocator<32>_> *this_02;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  double dVar72;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined4 uVar73;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar94;
  float fVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar106;
  double dVar107;
  double dVar108;
  double dVar109;
  undefined1 auVar110 [16];
  double dVar116;
  undefined4 uVar117;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  double dVar124;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined4 uVar125;
  undefined4 uVar126;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  uint uVar137;
  undefined1 auVar138 [16];
  double dVar139;
  double dVar140;
  undefined1 auStackY_5b8 [32];
  int local_578;
  uint local_574;
  undefined1 local_570;
  undefined1 local_56f [3];
  float local_56c;
  uint local_568;
  int local_564;
  int local_560;
  int local_55c;
  int local_558;
  float local_554;
  uint local_550;
  int local_54c;
  undefined8 local_548;
  undefined1 (*local_540) [16];
  int local_538 [2];
  FImgMediaViewInfo *local_530;
  FScriptContainerElement *local_528;
  float local_520;
  float local_51c;
  uint local_518;
  uint local_514;
  USceneComponent *local_510;
  undefined8 local_508;
  uint local_500;
  FImgMediaViewInfo *local_4f8;
  TArray<FImgMediaViewInfo,TSizedDefaultAllocator<32>_> *local_4f0;
  TArray<float,TSizedDefaultAllocator<32>_> *local_4e8;
  double local_4e0;
  double dStack_4d8;
  double local_4d0;
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double local_4b0;
  double dStack_4a8;
  double local_4a0;
  undefined1 (*local_498) [16];
  TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
  *local_488;
  TReferenceControllerBase<1> *local_480;
  FPlaneObjectInfo *local_478;
  undefined8 local_470;
  undefined4 local_468;
  double local_460;
  double dStack_458;
  double local_450;
  undefined1 local_448 [16];
  double local_438;
  double local_430;
  double dStack_428;
  double local_420;
  FSparseArrayAllocationInfo local_418;
  TVector<double>_u_0 local_408;
  TVector<double>_u_0 local_3f0;
  TVector<double>_u_0 local_3d8;
  TVector<double>_u_0 local_3c0;
  undefined8 local_3a8;
  double dStack_3a0;
  double local_398;
  undefined8 local_390;
  double dStack_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  double local_368;
  undefined8 local_360;
  double dStack_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  FImgMediaTileSelection local_328;
  FConvexVolume local_2e8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  local_4f0 = param_1;
  local_488 = (TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
               *)param_3;
  local_478 = this;
  local_510 = (USceneComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if ((local_510 != (USceneComponent *)0x0) &&
     (bVar23 = USceneComponent::ShouldRender(local_510), bVar23)) {
    local_480 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar32 = local_480;
    if (local_480 != (TReferenceControllerBase<1> *)0x0) {
      aVar24 = local_480->SharedReferenceCount;
      if (aVar24 != (atomic<int>)0x0) {
LAB_14ea43620:
        LOCK();
        aVar3 = local_480->SharedReferenceCount;
        bVar23 = aVar24 == aVar3;
        if (bVar23) {
          local_480->SharedReferenceCount = (atomic<int>)((int)aVar24 + 1);
          aVar3 = aVar24;
        }
        aVar24 = aVar3;
        pTVar19 = CVarImgMediaMipLevelPadding.Ref;
        UNLOCK();
        if (!bVar23) goto code_r0x00014ea4362a;
        if ((this->_padding_ != 0) && (param_1->ArrayNum != 0)) {
          local_56c = *(float *)(this->_padding_ + 8);
          bVar23 = IsInParallelGameThread();
          pTVar41 = (TSparseSetElement<TTuple<int,FImgMediaTileSelection>_> *)0x0;
          if (bVar23) {
LAB_14ea43679:
            pTVar28 = pTVar41;
          }
          else {
            bVar23 = IsInGameThread();
            pTVar28 = (TSparseSetElement<TTuple<int,FImgMediaTileSelection>_> *)&DAT_00000004;
            if (bVar23) goto LAB_14ea43679;
          }
          local_51c = *(float *)(&pTVar28->field_0x0 + (longlong)pTVar19->ShadowedValue);
          this_02 = &this->CornerMipLevelsCached;
          piVar1 = &(this->CornerMipLevelsCached).ArrayNum;
          iVar42 = *piVar1;
          uVar33 = ((param_2->TilingDescription).TileNum.field0_0x0._s_0.Y + 1) *
                   ((param_2->TilingDescription).TileNum.field0_0x0._s_0.X + 1);
          if (local_51c <= 0.0) {
            local_51c = 0.0;
          }
          local_4e8 = this_02;
          if (iVar42 < (int)uVar33) {
            iVar25 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,uVar33 - iVar42,&this_02->AllocatorInstance,piVar1,
                                &(this->CornerMipLevelsCached).ArrayMax);
            memset((this_02->AllocatorInstance).Data + (longlong)iVar25 * 4,0,
                   (longlong)(int)(uVar33 - iVar42) << 2);
          }
          else {
            if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
            }
            if ((int)uVar33 < iVar42) {
              uVar38 = iVar42 - uVar33;
              if (((int)(uVar38 | uVar33) < 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x458,
                                      L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                     ), bVar23)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if (uVar38 != 0) {
                TArray<float,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_02,uVar33,uVar38);
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,&this_02->AllocatorInstance,*piVar1,
                           &(this->CornerMipLevelsCached).ArrayMax);
              }
            }
          }
          fVar20 = local_56c;
          fVar18 = __real_3f000000;
          uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          uVar38 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          fVar16 = __real_bf000000;
          fVar15 = __real_3f800000;
          auVar71 = *(undefined1 (*) [16])(local_510->ComponentToWorld).Rotation.ZW.m128d_f64;
          local_460 = (local_510->ComponentToWorld).Scale3D.XY.m128d_f64[0];
          dStack_458 = (local_510->ComponentToWorld).Scale3D.XY.m128d_f64[1];
          dStack_388 = (this->PlaneSize).field0_0x0._s_0.Y;
          dStack_3a0 = dStack_388 * __real_bfe0000000000000;
          dVar109 = (this->PlaneSize).field0_0x0._s_0.Z;
          local_398 = dVar109 * __real_3fe0000000000000;
          local_450 = (local_510->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
          dVar14 = (local_510->ComponentToWorld).Scale3D.ZW.m128d_f64[1];
          local_3a8 = 0;
          auVar127._0_8_ = local_398 * local_450;
          auVar127._8_8_ = dVar14 * 0.0;
          dVar47 = local_460 * 0.0;
          dVar108 = dStack_458 * dStack_3a0;
          uVar73 = (undefined4)((ulonglong)dVar108 >> 0x20);
          auVar75 = *(undefined1 (*) [16])(local_510->ComponentToWorld).Rotation.XY.m128d_f64;
          auVar118._8_4_ = SUB84(dVar108,0);
          auVar118._0_8_ = dVar47;
          auVar118._12_4_ = uVar73;
          dVar139 = auVar75._0_8_;
          dVar140 = auVar75._8_8_;
          dVar12 = auVar71._0_8_;
          auVar138 = blendpd(auVar75,auVar71,2);
          auVar48._8_4_ = auVar71._0_4_;
          auVar48._0_8_ = dVar140;
          auVar48._12_4_ = auVar71._4_4_;
          dVar13 = auVar71._8_8_;
          auVar74._8_4_ = SUB84(dVar108,0);
          auVar74._0_8_ = dVar47;
          auVar74._12_4_ = uVar73;
          auVar119._0_8_ = auVar118._8_8_ * dVar139 - dVar140 * dVar47;
          auVar119._8_8_ = auVar127._0_8_ * dVar140 - auVar48._8_8_ * dVar108;
          auVar75 = blendpd(auVar74,auVar127,2);
          auVar110._8_4_ = SUB84(auVar119._8_8_,0);
          auVar110._0_8_ = auVar119._0_8_;
          auVar110._12_4_ = (int)((ulonglong)auVar119._8_8_ >> 0x20);
          dVar46 = auVar138._0_8_;
          dVar72 = auVar138._8_8_;
          auVar76._0_8_ = auVar75._0_8_ * dVar12 - dVar46 * auVar127._0_8_;
          auVar76._8_8_ = auVar75._8_8_ * dVar13 - dVar72 * auVar127._8_8_;
          auVar75 = blendpd(auVar119,auVar76,2);
          auVar120._0_8_ = auVar75._0_8_ + auVar75._0_8_;
          auVar120._8_8_ = auVar75._8_8_ + auVar75._8_8_;
          dVar107 = auVar110._8_8_ + auVar110._8_8_;
          dVar116 = auVar76._0_8_ + auVar76._0_8_;
          uVar73 = SUB84(dVar116,0);
          auVar96._8_4_ = uVar73;
          auVar96._0_8_ = dVar107;
          uVar117 = (undefined4)((ulonglong)dVar116 >> 0x20);
          auVar96._12_4_ = uVar117;
          auVar49._8_4_ = uVar73;
          auVar49._0_8_ = dVar107;
          auVar49._12_4_ = uVar117;
          auVar77._8_4_ = uVar73;
          auVar77._0_8_ = dVar107;
          auVar77._12_4_ = uVar117;
          auVar75 = blendpd(auVar77,auVar120,2);
          auVar97._0_8_ = auVar96._8_8_ * dVar139 - dVar107 * dVar140;
          auVar97._8_8_ = auVar120._0_8_ * dVar140 - auVar49._8_8_ * dVar12;
          auVar50._8_4_ = SUB84(auVar120._8_8_,0);
          auVar50._0_8_ = auVar120._0_8_;
          auVar50._12_4_ = (int)((ulonglong)auVar120._8_8_ >> 0x20);
          auVar78._0_8_ = auVar75._0_8_ * dVar12 - auVar120._0_8_ * dVar46;
          auVar78._8_8_ = auVar75._8_8_ * dVar13 - auVar50._8_8_ * dVar72;
          auVar51._8_4_ = SUB84(auVar97._8_8_,0);
          auVar51._0_8_ = auVar97._0_8_;
          auVar51._12_4_ = (int)((ulonglong)auVar97._8_8_ >> 0x20);
          auVar75 = blendpd(auVar97,auVar78,2);
          local_4b0 = dVar107 * dVar13 + dVar47 + auVar51._8_8_ +
                      (local_510->ComponentToWorld).Translation.XY.m128d_f64[0];
          dStack_4a8 = dVar116 * dVar13 + dVar108 + auVar78._0_8_ +
                       (local_510->ComponentToWorld).Translation.XY.m128d_f64[1];
          local_4a0 = auVar120._0_8_ * dVar13 + auVar127._0_8_ + auVar75._0_8_ +
                      (local_510->ComponentToWorld).Translation.ZW.m128d_f64[0];
          dVar116 = (local_510->ComponentToWorld).Scale3D.XY.m128d_f64[0] * 0.0;
          dVar124 = (local_510->ComponentToWorld).Scale3D.XY.m128d_f64[1] * dStack_388;
          local_390 = 0;
          dVar47 = local_450 * 0.0;
          uVar125 = SUB84(dVar14 * 0.0,0);
          uVar126 = (undefined4)((ulonglong)(dVar14 * 0.0) >> 0x20);
          uVar73 = SUB84(dVar124,0);
          auVar128._8_4_ = uVar73;
          auVar128._0_8_ = dVar116;
          uVar117 = (undefined4)((ulonglong)dVar124 >> 0x20);
          auVar128._12_4_ = uVar117;
          local_380 = 0;
          auVar52._8_4_ = uVar73;
          auVar52._0_8_ = dVar116;
          auVar52._12_4_ = uVar117;
          auVar79._8_4_ = uVar73;
          auVar79._0_8_ = dVar116;
          auVar79._12_4_ = uVar117;
          auVar129._0_8_ = auVar128._8_8_ * dVar139 - dVar116 * dVar140;
          auVar129._8_8_ = dVar47 * dVar140 - auVar52._8_8_ * dVar12;
          auVar75._8_4_ = uVar125;
          auVar75._0_8_ = dVar47;
          auVar75._12_4_ = uVar126;
          auVar75 = blendpd(auVar79,auVar75,2);
          auVar111._8_4_ = SUB84(auVar129._8_8_,0);
          auVar111._0_8_ = auVar129._0_8_;
          auVar111._12_4_ = (int)((ulonglong)auVar129._8_8_ >> 0x20);
          auVar53._8_4_ = uVar125;
          auVar53._0_8_ = dVar47;
          auVar53._12_4_ = uVar126;
          auVar80._0_8_ = auVar75._0_8_ * dVar12 - dVar47 * dVar46;
          auVar80._8_8_ = auVar75._8_8_ * dVar13 - auVar53._8_8_ * dVar72;
          auVar75 = blendpd(auVar129,auVar80,2);
          auVar130._0_8_ = auVar75._0_8_ + auVar75._0_8_;
          auVar130._8_8_ = auVar75._8_8_ + auVar75._8_8_;
          dVar108 = auVar111._8_8_ + auVar111._8_8_;
          dVar107 = auVar80._0_8_ + auVar80._0_8_;
          uVar73 = SUB84(dVar107,0);
          auVar98._8_4_ = uVar73;
          auVar98._0_8_ = dVar108;
          uVar117 = (undefined4)((ulonglong)dVar107 >> 0x20);
          auVar98._12_4_ = uVar117;
          auVar54._8_4_ = uVar73;
          auVar54._0_8_ = dVar108;
          auVar54._12_4_ = uVar117;
          auVar81._8_4_ = uVar73;
          auVar81._0_8_ = dVar108;
          auVar81._12_4_ = uVar117;
          auVar75 = blendpd(auVar81,auVar130,2);
          auVar99._0_8_ = auVar98._8_8_ * dVar139 - dVar108 * dVar140;
          auVar99._8_8_ = auVar130._0_8_ * dVar140 - auVar54._8_8_ * dVar12;
          auVar55._8_4_ = SUB84(auVar130._8_8_,0);
          auVar55._0_8_ = auVar130._0_8_;
          auVar55._12_4_ = (int)((ulonglong)auVar130._8_8_ >> 0x20);
          auVar82._0_8_ = auVar75._0_8_ * dVar12 - auVar130._0_8_ * dVar46;
          auVar82._8_8_ = auVar75._8_8_ * dVar13 - auVar55._8_8_ * dVar72;
          auVar56._8_4_ = SUB84(auVar99._8_8_,0);
          auVar56._0_8_ = auVar99._0_8_;
          auVar56._12_4_ = (int)((ulonglong)auVar99._8_8_ >> 0x20);
          auVar75 = blendpd(auVar99,auVar82,2);
          local_4e0 = dVar108 * dVar13 + dVar116 + auVar56._8_8_;
          dStack_4d8 = dVar107 * dVar13 + dVar124 + auVar82._0_8_;
          local_4d0 = auVar130._0_8_ * dVar13 + dVar47 + auVar75._0_8_;
          local_368 = (double)CONCAT44((uint)((ulonglong)dVar109 >> 0x20) ^
                                       __xmm_80000000000000008000000000000000._4_4_,
                                       SUB84(dVar109,0) ^
                                       (uint)__xmm_80000000000000008000000000000000);
          dVar116 = (local_510->ComponentToWorld).Scale3D.XY.m128d_f64[0] * 0.0;
          dVar124 = (local_510->ComponentToWorld).Scale3D.XY.m128d_f64[1] * 0.0;
          local_378 = 0;
          uStack_370 = 0;
          uVar73 = SUB84(dVar124,0);
          auVar131._8_4_ = uVar73;
          auVar131._0_8_ = dVar116;
          uVar117 = (undefined4)((ulonglong)dVar124 >> 0x20);
          auVar131._12_4_ = uVar117;
          dVar47 = local_368 * local_450;
          uVar125 = SUB84(dVar14 * 0.0,0);
          uVar126 = (undefined4)((ulonglong)(dVar14 * 0.0) >> 0x20);
          auVar57._8_4_ = uVar73;
          auVar57._0_8_ = dVar116;
          auVar57._12_4_ = uVar117;
          auVar83._8_4_ = uVar73;
          auVar83._0_8_ = dVar116;
          auVar83._12_4_ = uVar117;
          auVar132._0_8_ = auVar131._8_8_ * dVar139 - dVar116 * dVar140;
          auVar132._8_8_ = dVar47 * dVar140 - auVar57._8_8_ * dVar12;
          auVar138._8_4_ = uVar125;
          auVar138._0_8_ = dVar47;
          auVar138._12_4_ = uVar126;
          auVar75 = blendpd(auVar83,auVar138,2);
          auVar112._8_4_ = SUB84(auVar132._8_8_,0);
          auVar112._0_8_ = auVar132._0_8_;
          auVar112._12_4_ = (int)((ulonglong)auVar132._8_8_ >> 0x20);
          auVar58._8_4_ = uVar125;
          auVar58._0_8_ = dVar47;
          auVar58._12_4_ = uVar126;
          auVar84._0_8_ = auVar75._0_8_ * dVar12 - dVar47 * dVar46;
          auVar84._8_8_ = auVar75._8_8_ * dVar13 - auVar58._8_8_ * dVar72;
          dVar108 = auVar112._8_8_ + auVar112._8_8_;
          dVar107 = auVar84._0_8_ + auVar84._0_8_;
          auVar75 = blendpd(auVar132,auVar84,2);
          auVar133._0_8_ = auVar75._0_8_ + auVar75._0_8_;
          auVar133._8_8_ = auVar75._8_8_ + auVar75._8_8_;
          uVar73 = SUB84(dVar107,0);
          auVar100._8_4_ = uVar73;
          auVar100._0_8_ = dVar108;
          uVar117 = (undefined4)((ulonglong)dVar107 >> 0x20);
          auVar100._12_4_ = uVar117;
          auVar59._8_4_ = uVar73;
          auVar59._0_8_ = dVar108;
          auVar59._12_4_ = uVar117;
          auVar85._8_4_ = uVar73;
          auVar85._0_8_ = dVar108;
          auVar85._12_4_ = uVar117;
          auVar75 = blendpd(auVar85,auVar133,2);
          auVar101._0_8_ = auVar100._8_8_ * dVar139 - dVar108 * dVar140;
          auVar101._8_8_ = auVar133._0_8_ * dVar140 - auVar59._8_8_ * dVar12;
          auVar60._8_4_ = SUB84(auVar133._8_8_,0);
          auVar60._0_8_ = auVar133._0_8_;
          auVar60._12_4_ = (int)((ulonglong)auVar133._8_8_ >> 0x20);
          local_350 = 0;
          auVar86._0_8_ = auVar75._0_8_ * dVar12 - auVar133._0_8_ * dVar46;
          auVar86._8_8_ = auVar75._8_8_ * dVar13 - auVar60._8_8_ * dVar72;
          auVar61._8_4_ = SUB84(auVar101._8_8_,0);
          auVar61._0_8_ = auVar101._0_8_;
          auVar61._12_4_ = (int)((ulonglong)auVar101._8_8_ >> 0x20);
          auVar75 = blendpd(auVar101,auVar86,2);
          local_4b8 = auVar133._0_8_ * dVar13 + dVar47 + auVar75._0_8_;
          local_4c8 = dVar108 * dVar13 + dVar116 + auVar61._8_8_;
          dStack_4c0 = dVar107 * dVar13 + dVar124 + auVar86._0_8_;
          dVar47 = local_450 * 0.0;
          uVar125 = SUB84(dVar14 * 0.0,0);
          uVar126 = (undefined4)((ulonglong)(dVar14 * 0.0) >> 0x20);
          dStack_358 = dStack_388 / (double)(param_2->Dim).field0_0x0._s_0.X;
          dVar116 = (local_510->ComponentToWorld).Scale3D.XY.m128d_f64[0] * 0.0;
          dVar124 = (local_510->ComponentToWorld).Scale3D.XY.m128d_f64[1] * dStack_358;
          local_360 = 0;
          uVar73 = SUB84(dVar124,0);
          auVar134._8_4_ = uVar73;
          auVar134._0_8_ = dVar116;
          uVar117 = (undefined4)((ulonglong)dVar124 >> 0x20);
          auVar134._12_4_ = uVar117;
          auVar62._8_4_ = uVar73;
          auVar62._0_8_ = dVar116;
          auVar62._12_4_ = uVar117;
          auVar87._8_4_ = uVar73;
          auVar87._0_8_ = dVar116;
          auVar87._12_4_ = uVar117;
          auVar10._8_4_ = uVar125;
          auVar10._0_8_ = dVar47;
          auVar10._12_4_ = uVar126;
          auVar75 = blendpd(auVar87,auVar10,2);
          auVar135._0_8_ = auVar134._8_8_ * dVar139 - dVar116 * dVar140;
          auVar135._8_8_ = dVar47 * dVar140 - auVar62._8_8_ * dVar12;
          auVar63._8_4_ = uVar125;
          auVar63._0_8_ = dVar47;
          auVar63._12_4_ = uVar126;
          auVar113._8_4_ = SUB84(auVar135._8_8_,0);
          auVar113._0_8_ = auVar135._0_8_;
          auVar113._12_4_ = (int)((ulonglong)auVar135._8_8_ >> 0x20);
          auVar88._0_8_ = auVar75._0_8_ * dVar12 - dVar47 * dVar46;
          auVar88._8_8_ = auVar75._8_8_ * dVar13 - auVar63._8_8_ * dVar72;
          auVar75 = blendpd(auVar135,auVar88,2);
          auVar136._0_8_ = auVar75._0_8_ + auVar75._0_8_;
          auVar136._8_8_ = auVar75._8_8_ + auVar75._8_8_;
          dVar108 = auVar113._8_8_ + auVar113._8_8_;
          dVar107 = auVar88._0_8_ + auVar88._0_8_;
          uVar73 = SUB84(dVar107,0);
          auVar102._8_4_ = uVar73;
          auVar102._0_8_ = dVar108;
          uVar117 = (undefined4)((ulonglong)dVar107 >> 0x20);
          auVar102._12_4_ = uVar117;
          auVar64._8_4_ = uVar73;
          auVar64._0_8_ = dVar108;
          auVar64._12_4_ = uVar117;
          auVar89._8_4_ = uVar73;
          auVar89._0_8_ = dVar108;
          auVar89._12_4_ = uVar117;
          auVar75 = blendpd(auVar89,auVar136,2);
          auVar103._0_8_ = auVar102._8_8_ * dVar139 - dVar108 * dVar140;
          auVar103._8_8_ = auVar136._0_8_ * dVar140 - auVar64._8_8_ * dVar12;
          auVar65._8_4_ = SUB84(auVar136._8_8_,0);
          auVar65._0_8_ = auVar136._0_8_;
          auVar65._12_4_ = (int)((ulonglong)auVar136._8_8_ >> 0x20);
          auVar90._0_8_ = auVar75._0_8_ * dVar12 - auVar136._0_8_ * dVar46;
          auVar90._8_8_ = auVar75._8_8_ * dVar13 - auVar65._8_8_ * dVar72;
          auVar66._8_4_ = SUB84(auVar103._8_8_,0);
          auVar66._0_8_ = auVar103._0_8_;
          auVar66._12_4_ = (int)((ulonglong)auVar103._8_8_ >> 0x20);
          local_430 = dVar108 * dVar13 + dVar116 + auVar66._8_8_;
          dStack_428 = dVar107 * dVar13 + dVar124 + auVar90._0_8_;
          auVar75 = blendpd(auVar103,auVar90,2);
          local_420 = auVar136._0_8_ * dVar13 + dVar47 + auVar75._0_8_;
          dVar109 = dVar109 / (double)(param_2->Dim).field0_0x0._s_0.Y;
          uVar33 = SUB84(dVar109,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar137 = (uint)((ulonglong)dVar109 >> 0x20) ^
                    __xmm_80000000000000008000000000000000._4_4_;
          dVar107 = (local_510->ComponentToWorld).Scale3D.XY.m128d_f64[0] * 0.0;
          dVar116 = (local_510->ComponentToWorld).Scale3D.XY.m128d_f64[1] * 0.0;
          dVar109 = (double)CONCAT44(uVar137,uVar33) * local_450;
          uVar73 = SUB84(dVar14 * 0.0,0);
          uVar117 = (undefined4)((ulonglong)(dVar14 * 0.0) >> 0x20);
          uVar125 = SUB84(dVar116,0);
          auVar121._8_4_ = uVar125;
          auVar121._0_8_ = dVar107;
          uVar126 = (undefined4)((ulonglong)dVar116 >> 0x20);
          auVar121._12_4_ = uVar126;
          local_338 = CONCAT44(uVar137,uVar33);
          local_348 = 0;
          uStack_340 = 0;
          auVar67._8_4_ = uVar125;
          auVar67._0_8_ = dVar107;
          auVar67._12_4_ = uVar126;
          auVar91._8_4_ = uVar125;
          auVar91._0_8_ = dVar107;
          auVar91._12_4_ = uVar126;
          local_514 = local_4f0->ArrayNum;
          uVar43 = (ulonglong)(int)local_514;
          pFVar39 = (FImgMediaViewInfo *)(local_4f0->AllocatorInstance).Data;
          local_560 = local_508._4_4_;
          local_568 = local_500;
          local_558 = (int)local_508;
          auVar11._8_4_ = uVar73;
          auVar11._0_8_ = dVar109;
          auVar11._12_4_ = uVar117;
          auVar75 = blendpd(auVar91,auVar11,2);
          auVar122._0_8_ = auVar121._8_8_ * dVar139 - dVar107 * dVar140;
          auVar122._8_8_ = dVar109 * dVar140 - auVar67._8_8_ * dVar12;
          auVar68._8_4_ = uVar73;
          auVar68._0_8_ = dVar109;
          auVar68._12_4_ = uVar117;
          pFVar37 = pFVar39 + uVar43;
          auVar92._0_8_ = auVar75._0_8_ * dVar12 - dVar109 * dVar46;
          auVar92._8_8_ = auVar75._8_8_ * dVar13 - auVar68._8_8_ * dVar72;
          auVar69._8_4_ = SUB84(auVar122._8_8_,0);
          auVar69._0_8_ = auVar122._0_8_;
          auVar69._12_4_ = (int)((ulonglong)auVar122._8_8_ >> 0x20);
          dVar47 = auVar69._8_8_ + auVar69._8_8_;
          dVar108 = auVar92._0_8_ + auVar92._0_8_;
          auVar75 = blendpd(auVar122,auVar92,2);
          auVar93._8_4_ = auVar71._8_4_;
          auVar93._0_8_ = dVar13;
          auVar93._12_4_ = auVar71._12_4_;
          auVar114._8_4_ = SUB84(dVar108,0);
          auVar114._0_8_ = dVar47;
          uVar73 = (undefined4)((ulonglong)dVar108 >> 0x20);
          auVar114._12_4_ = uVar73;
          auVar123._0_8_ = auVar75._0_8_ + auVar75._0_8_;
          auVar123._8_8_ = auVar75._8_8_ + auVar75._8_8_;
          auVar104._8_4_ = SUB84(dVar108,0);
          auVar104._0_8_ = dVar47;
          auVar104._12_4_ = uVar73;
          auVar115._0_8_ = auVar114._8_8_ * dVar139 - dVar140 * dVar47;
          auVar115._8_8_ = auVar123._0_8_ * dVar140 - dVar12 * dVar108;
          auVar75 = blendpd(auVar104,auVar123,2);
          auVar71._8_4_ = SUB84(auVar115._8_8_,0);
          auVar71._0_8_ = auVar115._0_8_;
          auVar71._12_4_ = (int)((ulonglong)auVar115._8_8_ >> 0x20);
          auVar105._0_8_ = auVar75._0_8_ * dVar12 - dVar46 * auVar123._0_8_;
          auVar105._8_8_ = auVar75._8_8_ * dVar13 - dVar72 * auVar123._8_8_;
          auVar75 = blendpd(auVar115,auVar105,2);
          local_438 = dVar13 * auVar123._0_8_ + dVar109 + auVar75._0_8_;
          local_448._0_8_ = dVar13 * dVar47 + dVar107 + auVar71._8_8_;
          local_448._8_8_ = auVar93._8_8_ * dVar108 + dVar116 + auVar105._0_8_;
          uVar33 = local_500;
          local_4f8 = pFVar37;
          while( true ) {
            local_530 = pFVar39;
            if (local_4f0->ArrayNum != (int)uVar43) {
              local_570 = 0;
              `TCheckedPointerIterator<FImgMediaViewInfo_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_570);
            }
            pTVar32 = local_480;
            if (pFVar39 == pFVar37) break;
            bVar23 = ::`anonymous_namespace'::IsPrimitiveComponentHidden
                               ((FPrimitiveComponentId)local_510[1].AttachChildren.ArrayMax,pFVar39)
            ;
            if (!bVar23) {
              iVar42 = this_02->ArrayNum;
              pFVar35 = (this_02->AllocatorInstance).Data;
              pFVar27 = pFVar35 + (longlong)iVar42 * 4;
              local_528 = pFVar27;
              while( true ) {
                if (this_02->ArrayNum != iVar42) {
                  local_56f[0] = 0;
                  `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (local_56f);
                  pFVar27 = local_528;
                }
                if (pFVar35 == pFVar27) break;
                *(undefined4 *)pFVar35 = 0xbf800000;
                pFVar35 = pFVar35 + 4;
              }
              local_2e8.Planes.AllocatorInstance.SecondaryData =
                   (ForElementType<UE::Math::TPlane<double>_>)0x0;
              uVar40 = 0;
              local_2e8.Planes.ArrayNum = 0;
              local_2e8.Planes.ArrayMax = 6;
              local_2e8.PermutedPlanes.AllocatorInstance.SecondaryData =
                   (ForElementType<UE::Math::TPlane<double>_>)0x0;
              local_2e8.PermutedPlanes.ArrayNum = 0;
              local_2e8.PermutedPlanes.ArrayMax = 8;
              GetViewFrustumBounds(&local_2e8,&pFVar39->OverscanViewProjectionMatrix,false,false);
              uVar137 = param_2->NumMipLevels - 1;
              local_564 = 1;
              local_578 = 1;
              iVar42 = 1 << ((byte)uVar137 & 0x1f);
              if ((1 < (param_2->TilingDescription).TileNum.field0_0x0._s_0.X) ||
                 (1 < (param_2->TilingDescription).TileNum.field0_0x0._s_0.Y)) {
                fVar94 = (float)((param_2->Dim).field0_0x0._s_0.X / iVar42);
                fVar95 = (float)((param_2->Dim).field0_0x0._s_0.Y / iVar42);
                local_564 = -((int)ROUND(fVar16 - (fVar94 + fVar94) /
                                                  (float)(param_2->TilingDescription).TileSize.
                                                         field0_0x0._s_0.X) >> 1);
                local_578 = -((int)ROUND(fVar16 - (fVar95 + fVar95) /
                                                  (float)(param_2->TilingDescription).TileSize.
                                                         field0_0x0._s_0.Y) >> 1);
              }
              local_518 = uVar137;
              local_540 = ::operator_new(0x18);
              iVar42 = local_564;
              if (local_540 == (undefined1 (*) [16])0x0) {
                local_540 = (undefined1 (*) [16])0x0;
              }
              else {
                *local_540 = ZEXT816(0);
                *(undefined8 *)local_540[1] = 0;
                *(undefined8 *)*local_540 = 0;
              }
              local_574 = 0;
              pTVar28 = pTVar41;
              local_498 = local_540;
              if (0 < local_578) {
                do {
                  pTVar36 = pTVar41;
                  uVar33 = (uint)pTVar28;
                  if (0 < iVar42) {
                    do {
                      pauVar29 = ::operator_new(0x18);
                      if (pauVar29 != (undefined1 (*) [16])0x0) {
                        *(undefined8 *)*pauVar29 = 0;
                        *(int *)((longlong)*pauVar29 + 8) = (int)pTVar36;
                        *(uint *)((longlong)*pauVar29 + 0xc) = local_574;
                        *(uint *)pauVar29[1] = uVar137;
                        *(undefined1 (**) [16])*local_498 = pauVar29;
                        local_498 = pauVar29;
                      }
                      uVar44 = (int)pTVar36 + 1;
                      pTVar36 = (TSparseSetElement<TTuple<int,FImgMediaTileSelection>_> *)
                                (ulonglong)uVar44;
                      uVar33 = local_574;
                    } while ((int)uVar44 < iVar42);
                  }
                  local_574 = uVar33 + 1;
                  pTVar28 = (TSparseSetElement<TTuple<int,FImgMediaTileSelection>_> *)
                            (ulonglong)local_574;
                  pFVar39 = local_530;
                  this_02 = local_4e8;
                  uVar33 = local_568;
                } while ((int)local_574 < local_578);
              }
              lVar45 = *(longlong *)*local_540;
              iVar42 = local_578;
              pauVar29 = local_540;
              while (local_540 = pauVar29, lVar45 != 0) {
                local_540 = *(undefined1 (**) [16])*pauVar29;
                if (local_540 != (undefined1 (*) [16])0x0) {
                  local_508 = *(undefined8 *)((longlong)*local_540 + 8);
                  uVar33 = *(uint *)local_540[1];
                  local_470 = 0;
                  *(undefined8 *)((longlong)*local_540 + 8) = 0;
                  *(undefined4 *)local_540[1] = 0;
                  local_468 = 0;
                  local_568 = uVar33;
                  ::operator_delete(pauVar29,0x18);
                  local_558 = (int)local_508;
                  local_560 = local_508._4_4_;
                  pauVar29 = local_540;
                }
                local_540 = pauVar29;
                iVar34 = local_560;
                iVar25 = (param_2->TilingDescription).TileNum.field0_0x0._s_0.X;
                if ((1 < iVar25) || (1 < (param_2->TilingDescription).TileNum.field0_0x0._s_0.Y)) {
                  fVar94 = (float)(param_2->Dim).field0_0x0._s_0.X;
                  fVar106 = (float)(1 << ((byte)uVar33 & 0x1f));
                  fVar95 = (float)(param_2->Dim).field0_0x0._s_0.Y;
                  local_564 = -((int)ROUND(fVar16 - (fVar94 + fVar94) /
                                                    ((float)(param_2->TilingDescription).TileSize.
                                                            field0_0x0._s_0.X * fVar106)) >> 1);
                  if (local_564 < 1) {
                    local_564 = 1;
                  }
                  iVar42 = -((int)ROUND(fVar16 - (fVar95 + fVar95) /
                                                 ((float)(param_2->TilingDescription).TileSize.
                                                         field0_0x0._s_0.Y * fVar106)) >> 1);
                  local_578 = iVar42;
                  if (iVar42 < 1) {
                    iVar42 = 1;
                    local_578 = 1;
                  }
                }
                iVar4 = local_564;
                if ((iVar25 < 2) && ((param_2->TilingDescription).TileNum.field0_0x0._s_0.Y < 2)) {
                  local_548 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
                  TVar21._s_0 = local_548;
                  local_548._4_4_ = UE::Math::TVector2<float>::UnitVector.field0_0x0._4_4_;
                  local_548._0_4_ = UE::Math::TVector2<float>::UnitVector.field0_0x0._0_4_;
                  fVar95 = local_548._4_4_;
                  fVar94 = (float)(undefined4)local_548;
                  local_548 = TVar21._s_0;
                }
                else {
                  if (((int)uVar33 < 0) &&
                     (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<_1074237875542818770>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Internal\\Assets\\ImgMediaMipMapInfo.h"
                                          ,0x2e,"MipLevel >= 0"), bVar23)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  TVar5 = (param_2->Dim).field0_0x0._s_0;
                  TVar6 = (param_2->TilingDescription).TileSize.field0_0x0._s_0;
                  fVar95 = fVar15 / (float)(1 << ((byte)uVar33 & 0x1f));
                  fVar94 = ((float)TVar5.X / (float)TVar6.X) * fVar95;
                  fVar95 = ((float)TVar5.Y / (float)TVar6.Y) * fVar95;
                }
                if ((local_558 < iVar4) && (iVar34 < iVar42)) {
                  dVar47 = (double)(((float)local_558 + fVar18) * (fVar15 / fVar94));
                  dVar109 = (double)(((float)iVar34 + fVar18) * (fVar15 / fVar95));
                  local_408._s_0.X = local_4c8 * dVar109 + local_4e0 * dVar47 + local_4b0;
                  local_408._s_0.Y = dStack_4c0 * dVar109 + dStack_4d8 * dVar47 + dStack_4a8;
                  local_408._s_0.Z = local_4b8 * dVar109 + local_4d0 * dVar47 + local_4a0;
                  dVar109 = (dStack_458 * (local_478->PlaneSize).field0_0x0._s_0.Y) / (double)fVar94
                  ;
                  dVar47 = local_460 * (local_478->PlaneSize).field0_0x0._s_0.X;
                  dVar109 = (double)CONCAT44((uint)((ulonglong)dVar109 >> 0x20) & uVar17,
                                             SUB84(dVar109,0) & uVar38);
                  dVar47 = (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) & uVar17,
                                            SUB84(dVar47,0) & uVar38);
                  if (dVar109 <= dVar47) {
                    dVar109 = dVar47;
                  }
                  dVar47 = (local_450 * (local_478->PlaneSize).field0_0x0._s_0.Z) / (double)fVar95;
                  dVar47 = (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) & uVar17,
                                            SUB84(dVar47,0) & uVar38);
                  if (dVar109 <= dVar47) {
                    dVar109 = dVar47;
                  }
                  auVar70._0_8_ = (dVar109 + dVar109) * dVar109;
                  auVar70._8_8_ = 0;
                  auVar71 = sqrtpd(auVar70,auVar70);
                  local_520 = (float)auVar71._0_8_ * fVar18;
                  bVar23 = FConvexVolume::IntersectSphere
                                     (&local_2e8,(TVector<double> *)&local_408._s_0,&local_520);
                  if (bVar23) {
                    local_54c = 0;
                    local_56c = 0.0;
                    local_550 = 0x7fffffff;
                    local_574 = 0;
                    do {
                      local_55c = (int)local_56c + iVar34;
                      local_528 = (FScriptContainerElement *)0x2;
                      uVar137 = local_55c << ((byte)uVar33 & 0x1f);
                      local_548._0_4_ = uVar137;
                      iVar42 = local_558;
                      do {
                        uVar44 = (param_2->TilingDescription).TileNum.field0_0x0._s_0.X;
                        uVar26 = iVar42 << ((byte)uVar33 & 0x1f);
                        uVar33 = uVar44;
                        if ((int)uVar26 < (int)uVar44) {
                          uVar33 = uVar26;
                        }
                        uVar26 = (param_2->TilingDescription).TileNum.field0_0x0._s_0.Y;
                        if ((int)uVar137 < (int)uVar26) {
                          uVar26 = uVar137;
                        }
                        uVar137 = uVar40;
                        if (0 < (int)uVar26) {
                          uVar137 = uVar26;
                        }
                        uVar26 = uVar40;
                        if (0 < (int)uVar33) {
                          uVar26 = uVar33;
                        }
                        uVar26 = uVar137 * (uVar44 + 1) + uVar26;
                        uVar137 = ~uVar26 >> 0x1f;
                        uVar33 = uVar40;
                        if ((int)uVar26 < this_02->ArrayNum) {
                          uVar33 = uVar137;
                        }
                        if ((uVar33 == 0) &&
                           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar23)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        lVar45 = (longlong)(int)uVar26;
                        pFVar27 = (this_02->AllocatorInstance).Data + lVar45 * 4;
                        uVar44 = 0;
                        if (*(float *)pFVar27 <= 0.0 && *(float *)pFVar27 != 0.0) {
                          dVar47 = (double)((float)iVar42 * (fVar15 / fVar94));
                          dVar109 = (double)((float)local_55c * (fVar15 / fVar95));
                          local_3c0._s_0.X = local_4e0 * dVar47 + local_4c8 * dVar109 + local_4b0;
                          local_3c0._s_0.Y = dStack_4d8 * dVar47 + dStack_4c0 * dVar109 + dStack_4a8
                          ;
                          local_3f0._s_0.X = (double)local_448._0_8_ + local_3c0._s_0.X;
                          local_3f0._s_0.Y = (double)local_448._8_8_ + local_3c0._s_0.Y;
                          local_3c0._s_0.Z = local_4d0 * dVar47 + local_4b8 * dVar109 + local_4a0;
                          local_3f0._s_0.Z = local_438 + local_3c0._s_0.Z;
                          local_3d8._s_0.X = local_430 + local_3c0._s_0.X;
                          local_3d8._s_0.Y = dStack_428 + local_3c0._s_0.Y;
                          local_3d8._s_0.Z = local_420 + local_3c0._s_0.Z;
                          bVar23 = ::`anonymous_namespace'::CalculateMipLevelAniso
                                             (local_530,(TVector<double> *)&local_3c0._s_0,
                                              (TVector<double> *)&local_3d8._s_0,
                                              (TVector<double> *)&local_3f0._s_0,&local_554);
                          if (bVar23) {
                            uVar33 = uVar44;
                            if ((int)uVar26 < this_02->ArrayNum) {
                              uVar33 = uVar137;
                            }
                            fVar106 = fVar20 + local_530->MaterialTextureMipBias + local_554;
                            local_554 = fVar106;
                            if ((uVar33 == 0) &&
                               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar23)) {
                              pcVar9 = (code *)swi(3);
                              (*pcVar9)();
                              return;
                            }
                            *(float *)((this_02->AllocatorInstance).Data + lVar45 * 4) = fVar106;
                            goto LAB_14ea444e1;
                          }
                        }
                        else {
                          uVar33 = uVar40;
                          if ((int)uVar26 < this_02->ArrayNum) {
                            uVar33 = uVar137;
                          }
                          if ((uVar33 == 0) &&
                             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar23)) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          fVar106 = *(float *)((this_02->AllocatorInstance).Data + lVar45 * 4);
                          local_554 = fVar106;
LAB_14ea444e1:
                          uVar137 = (int)ROUND(((fVar106 - local_51c) + (fVar106 - local_51c)) -
                                               fVar18) >> 1;
                          uVar33 = local_518;
                          if ((int)uVar137 < (int)local_518) {
                            uVar33 = uVar137;
                          }
                          uVar137 = uVar44;
                          if (0 < (int)uVar33) {
                            uVar137 = uVar33;
                          }
                          if ((int)local_550 < (int)uVar137) {
                            uVar137 = local_550;
                          }
                          uVar26 = -((int)ROUND(fVar16 - (fVar106 + local_51c + fVar106 + local_51c)
                                               ) >> 1);
                          uVar33 = local_518;
                          if ((int)uVar26 < (int)local_518) {
                            uVar33 = uVar26;
                          }
                          uVar26 = uVar44;
                          if (0 < (int)uVar33) {
                            uVar26 = uVar33;
                          }
                          if ((int)uVar26 < (int)local_574) {
                            uVar26 = local_574;
                          }
                          local_54c = local_54c + 1;
                          local_574 = uVar26;
                          local_550 = uVar137;
                        }
                        iVar25 = local_560;
                        iVar42 = iVar42 + 1;
                        local_528 = (FScriptContainerElement *)((longlong)local_528 + -1);
                        uVar33 = local_568;
                        uVar137 = (undefined4)local_548;
                      } while (local_528 != (FScriptContainerElement *)0x0);
                      local_56c = (float)((int)local_56c + 1);
                      iVar34 = local_560;
                    } while ((int)local_56c < 2);
                    uVar137 = local_550;
                    if (local_54c - 1U < 3) {
                      uVar137 = uVar44;
                    }
                    local_528 = (FScriptContainerElement *)0x0;
                    if ((int)uVar137 < (int)local_568) {
                      local_56c = 0.0;
                      iVar42 = 2;
                      if ((param_2->TilingDescription).TileNum.field0_0x0._s_0.Y < 2) {
                        iVar42 = (param_2->TilingDescription).TileNum.field0_0x0._s_0.Y;
                      }
                      pTVar28 = pTVar41;
                      uVar137 = local_568;
                      if (0 < iVar42) {
                        do {
                          iVar42 = 2;
                          if ((param_2->TilingDescription).TileNum.field0_0x0._s_0.X < 2) {
                            iVar42 = (param_2->TilingDescription).TileNum.field0_0x0._s_0.X;
                          }
                          uVar33 = uVar137;
                          fVar94 = SUB84(pTVar28,0);
                          if (0 < iVar42) {
                            iVar42 = local_558 * 2;
                            local_548._0_4_ = iVar42;
                            pTVar36 = pTVar41;
                            do {
                              pauVar29 = ::operator_new(0x18);
                              if (pauVar29 != (undefined1 (*) [16])0x0) {
                                *(undefined8 *)*pauVar29 = 0;
                                *(int *)((longlong)*pauVar29 + 8) = iVar42 + (int)pTVar36;
                                *(int *)((longlong)*pauVar29 + 0xc) =
                                     (int)SUB84(pTVar28,0) + iVar25 * 2;
                                *(uint *)pauVar29[1] = uVar137 - 1;
                                *(undefined1 (**) [16])*local_498 = pauVar29;
                                local_498 = pauVar29;
                              }
                              uVar44 = (int)pTVar36 + 1;
                              pTVar36 = (TSparseSetElement<TTuple<int,FImgMediaTileSelection>_> *)
                                        (ulonglong)uVar44;
                              iVar34 = 2;
                              if ((param_2->TilingDescription).TileNum.field0_0x0._s_0.X < 2) {
                                iVar34 = (param_2->TilingDescription).TileNum.field0_0x0._s_0.X;
                              }
                              uVar33 = local_568;
                              fVar94 = local_56c;
                            } while ((int)uVar44 < iVar34);
                          }
                          local_56c = (float)((int)fVar94 + 1);
                          iVar42 = 2;
                          if ((param_2->TilingDescription).TileNum.field0_0x0._s_0.Y < 2) {
                            iVar42 = (param_2->TilingDescription).TileNum.field0_0x0._s_0.Y;
                          }
                          pTVar28 = (TSparseSetElement<TTuple<int,FImgMediaTileSelection>_> *)
                                    (ulonglong)(uint)local_56c;
                          this_02 = local_4e8;
                          uVar137 = uVar33;
                        } while ((int)local_56c < iVar42);
                      }
                    }
                    this_00 = local_488;
                    iVar25 = local_564;
                    iVar42 = local_578;
                    if ((int)uVar33 <= (int)local_574) {
                      if (*(int *)&(local_488->Elements).field_0x8 !=
                          *(int *)&(local_488->Elements).field_0x34) {
                        FVar7 = (local_488->Hash).SecondaryData;
                        FVar31 = (ForElementType<FSetElementId>)&local_488->Hash;
                        if (FVar7 != (ForElementType<FSetElementId>)0x0) {
                          FVar31 = FVar7;
                        }
                        iVar34 = *(int *)((longlong)FVar31 +
                                         (ulonglong)(local_488->HashSize - 1U & uVar33) * 4);
                        if (iVar34 != -1) {
                          do {
                            if (*(uint *)(*(longlong *)&local_488->Elements +
                                         (longlong)iVar34 * 0x50) == uVar33) {
                              if (iVar34 != -1) goto LAB_14ea448e6;
                              break;
                            }
                            iVar34 = *(int *)(*(longlong *)&local_488->Elements + 0x48 +
                                             (longlong)iVar34 * 0x50);
                          } while (iVar34 != -1);
                        }
                      }
                      local_328.Tiles.NumBits = local_578 * local_564;
                      local_328.Tiles.AllocatorInstance.SecondaryData =
                           (ForElementType<unsigned_int>)0x0;
                      local_328.Tiles.MaxBits = 0x80;
                      uVar137 = local_328.Tiles.NumBits + 0x1fU >> 5;
                      if (local_328.Tiles.NumBits + 0x1fU >> 5 != 0) {
                        if (4 < uVar137) {
                          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
                          ForElementType<unsigned_int>::ResizeAllocation
                                    ((ForElementType<unsigned_int> *)&local_328,0,uVar137,4);
                          local_328.Tiles.MaxBits = uVar137 << 5;
                        }
                        FVar30 = (ForElementType<unsigned_int>)&local_328;
                        if (local_328.Tiles.AllocatorInstance.SecondaryData !=
                            (ForElementType<unsigned_int>)0x0) {
                          FVar30 = local_328.Tiles.AllocatorInstance.SecondaryData;
                        }
                        memset((void *)FVar30,0,(ulonglong)uVar137 << 2);
                        uVar137 = local_328.Tiles.NumBits & 0x8000001f;
                        if ((int)uVar137 < 0) {
                          uVar137 = (uVar137 - 1 | 0xffffffe0) + 1;
                        }
                        if (uVar137 != 0) {
                          FVar30 = (ForElementType<unsigned_int>)&local_328;
                          if (local_328.Tiles.AllocatorInstance.SecondaryData !=
                              (ForElementType<unsigned_int>)0x0) {
                            FVar30 = local_328.Tiles.AllocatorInstance.SecondaryData;
                          }
                          puVar2 = (uint *)((longlong)FVar30 +
                                           (longlong)
                                           ((int)(local_328.Tiles.NumBits +
                                                 (local_328.Tiles.NumBits >> 0x1f & 0x1fU)) >> 5) *
                                           4);
                          *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)uVar137 & 0x1f);
                        }
                      }
                      iVar34 = *(int *)&(this_00->Elements).field_0x34;
                      local_328.Dimensions.field0_0x0._s_0.X = iVar25;
                      local_328.Dimensions.field0_0x0._s_0.Y = local_578;
                      local_328.CachedVisibleRegion.field0_0x0._s_0.Min.field0_0x0 =
                           (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
                      local_328.CachedVisibleRegion.field0_0x0._s_0.Max.field0_0x0 =
                           (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
                      local_328.bCachedVisibleRegionDirty = true;
                      if (iVar34 == 0) {
                        iVar25 = UE::Core::Private::
                                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x50,8,1,(ForAnyElementType *)this_00,
                                            (int *)&(this_00->Elements).field_0x8,
                                            (int *)&(this_00->Elements).field_0xc);
                        TBitArray<FDefaultBitArrayAllocator>::Add
                                  ((TBitArray<FDefaultBitArrayAllocator> *)
                                   &(this_00->Elements).field_0x10,false);
                      }
                      else {
                        iVar25 = *(int *)&(this_00->Elements).field_0x30;
                        iVar34 = iVar34 + -1;
                        lVar45 = *(longlong *)&this_00->Elements;
                        iVar4 = *(int *)(lVar45 + 4 + (longlong)iVar25 * 0x50);
                        *(int *)&(this_00->Elements).field_0x30 = iVar4;
                        *(int *)&(this_00->Elements).field_0x34 = iVar34;
                        if (iVar34 != 0) {
                          *(undefined4 *)(lVar45 + (longlong)iVar4 * 0x50) = 0xffffffff;
                        }
                      }
                      TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                       *)this_00,&local_418,iVar25);
                      pvVar22 = local_418.Pointer;
                      pTVar28 = pTVar41;
                      if (local_418.Pointer !=
                          (TSparseSetElement<TTuple<int,FImgMediaTileSelection>_> *)0x0) {
                        *(uint *)local_418.Pointer = uVar33;
                        FImgMediaTileSelection::FImgMediaTileSelection
                                  ((FImgMediaTileSelection *)((longlong)local_418.Pointer + 8),
                                   &local_328);
                        *(undefined4 *)((longlong)pvVar22 + 0x48) = 0xffffffff;
                        pTVar28 = pvVar22;
                      }
                      uVar137 = *(uint *)pTVar28;
                      local_538[0] = local_418.Index;
                      bVar23 = TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
                               ::TryReplaceExisting(this_00,uVar137,pTVar28,local_538,(bool *)0x0);
                      if (!bVar23) {
                        TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
                        ::RehashOrLink(this_00,uVar137,pTVar28,local_538[0]);
                      }
                      if (local_328.Tiles.AllocatorInstance.SecondaryData !=
                          (ForElementType<unsigned_int>)0x0) {
                        FMemory::Free((void *)local_328.Tiles.AllocatorInstance.SecondaryData);
                      }
LAB_14ea448e6:
                      this_01 = TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                                ::FindChecked((TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                                               *)this_00,uVar33);
                      FImgMediaTileSelection::SetVisible(this_01,local_558,local_560);
                    }
                  }
                }
                pFVar39 = local_530;
                pauVar29 = local_540;
                lVar45 = *(longlong *)*local_540;
              }
              while (pauVar29 != (undefined1 (*) [16])0x0) {
                pauVar8 = *(undefined1 (**) [16])*pauVar29;
                ::operator_delete(pauVar29,0x18);
                pauVar29 = pauVar8;
              }
              if (local_2e8.PermutedPlanes.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Math::TPlane<double>_>)0x0) {
                FMemory::Free((void *)local_2e8.PermutedPlanes.AllocatorInstance.SecondaryData);
              }
              pFVar37 = local_4f8;
              if (local_2e8.Planes.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Math::TPlane<double>_>)0x0) {
                FMemory::Free((void *)local_2e8.Planes.AllocatorInstance.SecondaryData);
                pFVar37 = local_4f8;
              }
            }
            pFVar39 = pFVar39 + 1;
            uVar43 = (ulonglong)local_514;
          }
        }
        goto LAB_14ea449e2;
      }
LAB_14ea4362e:
      pTVar32 = (TReferenceControllerBase<1> *)0x0;
    }
LAB_14ea449e2:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  }
  return;
code_r0x00014ea4362a:
  if (aVar24 == (atomic<int>)0x0) goto LAB_14ea4362e;
  goto LAB_14ea43620;
}

