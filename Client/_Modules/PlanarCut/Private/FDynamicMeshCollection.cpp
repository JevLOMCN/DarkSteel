// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 19

// InitTemplate<UE::Math::TTransform<float>_> @ 14c992880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::PlanarCut::FDynamicMeshCollection::InitTemplate<UE::Math::TTransform<float>_>
          (FDynamicMeshCollection *this,FGeometryCollection *param_1,
          TArrayView<UE::Math::TTransform<float>_const_,int> *param_2,
          TArrayView<int_const_,int> *param_3,TTransform<double> *param_4,bool param_5)

{
  TTransform<float> *pTVar1;
  undefined8 *puVar2;
  __m128 *p_Var3;
  __m128 *p_Var4;
  undefined8 uVar5;
  double dVar6;
  int iVar7;
  TTransform<float> *pTVar8;
  FScriptContainerElement *pFVar9;
  FDynamicMeshAttributeSet *pFVar10;
  undefined1 *puVar11;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar12;
  code *pcVar13;
  byte bVar14;
  TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  TVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> TVar18;
  undefined1 auVar19 [16];
  TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  TVar20;
  double dVar21;
  int iVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  TTransform<double> *pTVar28;
  FDynamicMesh3 *pFVar29;
  TVector<double> *pTVar30;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar31;
  TAxisAlignedBox3<double> *pTVar32;
  FDynamicMeshAttributeSet *pFVar33;
  uint uVar34;
  undefined1 *puVar35;
  TTypeCompatibleBytes<TManagedArray<UE::Math::TVector2<float>_>_const_*> *pTVar36;
  longlong lVar37;
  longlong lVar38;
  uint uVar39;
  uint uVar40;
  longlong lVar41;
  int *piVar42;
  uint uVar43;
  uint uVar44;
  longlong lVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auStackY_748 [32];
  FDynamicMesh3 *local_6b0;
  longlong local_6a8;
  uint local_6a0 [2];
  uint local_698 [2];
  TArrayView<UE::Math::TTransform<float>_const_,int> *local_690;
  int local_688;
  int iStack_684;
  int local_680;
  FIndex3i_u_0 local_678;
  FIndex3i_u_0 local_668;
  TQuaternion<double>_u_0 local_658;
  int local_638;
  int iStack_634;
  uint uStack_630;
  uint uStack_62c;
  undefined4 local_628;
  undefined4 uStack_624;
  int iStack_620;
  undefined4 uStack_61c;
  uint local_618;
  uint uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  TTransform<double> *local_608;
  uint *local_600;
  TVector<double>_u_0 local_5f8;
  undefined8 local_5e0;
  float local_5d8;
  undefined8 local_5d4;
  float local_5cc;
  TVector2<float>_u_0 local_5c8;
  undefined2 local_5c0;
  undefined1 local_5be;
  TVector<float>_u_0 local_5b8;
  undefined8 local_5a8;
  float local_5a0;
  TVector<float>_u_0 local_598;
  TVector<float>_u_0 local_588;
  TVector<float>_u_0 local_578;
  TVector4<float>_u_0 local_568;
  uint *local_558;
  TVector<float>_u_0 local_548;
  TVector<float>_u_0 local_538;
  TPairInitializer<int_const_&,int_const_&> local_528;
  FDynamicMeshEditor local_518 [2];
  int *local_508;
  int iStack_500;
  undefined4 uStack_4fc;
  uint *local_4f8;
  uint *local_4f0;
  TVector<double>_u_0 local_4e8;
  TVector<double>_u_0 local_4d0;
  TVector<double>_u_0 local_4b8;
  TVector<double>_u_0 local_4a0;
  TVector<double>_u_0 local_488;
  TVector<double>_u_0 local_470;
  TVector<double>_u_0 local_458;
  TVector<double>_u_0 local_440;
  TVector<double>_u_0 local_428;
  TVector<double>_u_0 local_410;
  TVector<double>_u_0 local_3f8;
  TArrayView<int_const_,int> local_3d8;
  TArrayView<UE::Math::TTransform<float>_const_,int> local_3c8;
  FScriptContainerElement *local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  int local_398;
  int iStack_394;
  uint uStack_390;
  uint uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  FScriptContainerElement *local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  int local_348;
  int iStack_344;
  uint uStack_340;
  uint uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  int local_318;
  int iStack_314;
  uint uStack_310;
  uint uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  int local_2e8;
  int iStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  TVector<double> local_2b8;
  TAxisAlignedBox3<double> local_2a0;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TArrayOfAttributesAccessor<TManagedArray<UE::Math::TVector2<float>_>_const_,8> local_1a8;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_748;
  local_608 = param_4;
  local_690 = param_2;
  GeometryCollection::UV::FindActiveUVLayers(&local_1a8,(FManagedArrayCollection *)param_1);
  iVar22 = local_1a8.Attributes.ArrayNum;
  TIndirectArray<UE::PlanarCut::FDynamicMeshCollection::FMeshData,TSizedDefaultAllocator<32>_>::
  DestructAndFreeItems(&this->Meshes);
  iVar26 = (this->Meshes).Array.ArrayMax;
  (this->Meshes).Array.ArrayNum = 0;
  if (iVar26 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->Meshes).Array.ArrayMax);
  }
  (this->Bounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  local_600 = (uint *)param_3->DataPtr;
  local_558 = local_600 + param_3->ArrayNum;
  if (local_600 != local_558) {
    do {
      piVar42 = &(this->Meshes).Array.ArrayMax;
      uVar25 = *local_600;
      lVar37 = (longlong)(int)uVar25;
      uVar44 = 0;
      if ((int)uVar25 < *(int *)&(param_1->TransformToGeometryIndex).field_0x18) {
        uVar44 = ~uVar25 >> 0x1f;
      }
      if ((uVar44 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar44 = *(uint *)(*(longlong *)&(param_1->TransformToGeometryIndex).field_0x10 + lVar37 * 4);
      lVar41 = (longlong)(int)uVar44;
      if (uVar44 != 0xffffffff) {
        if (this->bComponentSpaceTransforms == false) {
          local_508 = (int *)param_1->_padding_;
          iVar26 = (int)param_1->_padding_;
          if ((iVar26 < 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar23)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          local_3d8._12_4_ = uStack_4fc;
          local_3d8.ArrayNum = iVar26;
          local_3d8.DataPtr = local_508;
          local_3c8.DataPtr = local_690->DataPtr;
          local_3c8.ArrayNum = local_690->ArrayNum;
          local_3c8._12_4_ = *(undefined4 *)&local_690->field_0xc;
          iStack_500 = iVar26;
          pTVar28 = GeometryCollectionAlgo::GlobalMatrix(&local_f8,&local_3c8,&local_3d8,uVar25);
          local_208.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_208.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_208.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_208.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_208.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_208.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_208.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_208.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_208.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_208.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_208.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_208.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_208.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_208.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_208.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_208.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_208.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_208,pTVar28,local_608);
          local_2d8 = local_208.Translation.ZW.m128d_f64[0]._0_4_;
          uStack_2d4 = local_208.Translation.ZW.m128d_f64[0]._4_4_;
          uStack_610 = local_208.Scale3D.ZW.m128d_f64[0]._0_4_;
          uStack_60c = local_208.Scale3D.ZW.m128d_f64[0]._4_4_;
          local_2c0 = local_208.Scale3D.ZW.m128d_f64[0];
          local_2d0 = local_208.Scale3D.XY.m128d_f64[0];
          dStack_2c8 = local_208.Scale3D.XY.m128d_f64[1];
          local_358 = local_208.Rotation.ZW.m128d_f64[0];
          dStack_350 = local_208.Rotation.ZW.m128d_f64[1];
          local_658._s_0.Z = local_208.Rotation.ZW.m128d_f64[0];
          local_658._s_0.W = local_208.Rotation.ZW.m128d_f64[1];
          local_330._0_4_ = local_208.Scale3D.XY.m128d_f64[0]._0_4_;
          local_330._4_4_ = local_208.Scale3D.XY.m128d_f64[0]._4_4_;
          local_368 = (FScriptContainerElement *)local_208.Rotation.XY.m128d_f64[0];
          dStack_360 = local_208.Rotation.XY.m128d_f64[1];
          local_658._s_0.X = local_208.Rotation.XY.m128d_f64[0];
          local_658._s_0.Y = local_208.Rotation.XY.m128d_f64[1];
          uStack_328._0_4_ = local_208.Scale3D.XY.m128d_f64[1]._0_4_;
          uStack_328._4_4_ = local_208.Scale3D.XY.m128d_f64[1]._4_4_;
          uStack_338 = local_208.Translation.ZW.m128d_f64[0]._0_4_;
          uStack_334 = local_208.Translation.ZW.m128d_f64[0]._4_4_;
          local_2e8 = local_208.Translation.XY.m128d_f64[0]._0_4_;
          iStack_2e4 = local_208.Translation.XY.m128d_f64[0]._4_4_;
          uStack_2e0 = local_208.Translation.XY.m128d_f64[1]._0_4_;
          uStack_2dc = local_208.Translation.XY.m128d_f64[1]._4_4_;
          local_348 = local_208.Translation.XY.m128d_f64[0]._0_4_;
          iStack_344 = local_208.Translation.XY.m128d_f64[0]._4_4_;
          uStack_340 = local_208.Translation.XY.m128d_f64[1]._0_4_;
          uStack_33c = local_208.Translation.XY.m128d_f64[1]._4_4_;
          local_628 = local_208.Translation.ZW.m128d_f64[0]._0_4_;
          uStack_624 = local_208.Translation.ZW.m128d_f64[0]._4_4_;
          iStack_620 = (int)local_330;
          uStack_61c = local_330._4_4_;
          local_618 = (uint)uStack_328;
          uStack_614 = uStack_328._4_4_;
          local_638 = local_208.Translation.XY.m128d_f64[0]._0_4_;
          iStack_634 = local_208.Translation.XY.m128d_f64[0]._4_4_;
          uStack_630 = local_208.Translation.XY.m128d_f64[1]._0_4_;
          uStack_62c = local_208.Translation.XY.m128d_f64[1]._4_4_;
          local_330 = local_208.Scale3D.XY.m128d_f64[0];
          uStack_328 = local_208.Scale3D.XY.m128d_f64[1];
          uStack_320 = uStack_610;
          uStack_31c = uStack_60c;
        }
        else {
          uVar24 = 0;
          if ((int)uVar25 < local_690->ArrayNum) {
            uVar24 = ~uVar25 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar23)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pTVar8 = local_690->DataPtr;
          pTVar1 = pTVar8 + lVar37;
          p_Var3 = &pTVar8[lVar37].Scale3D;
          p_Var4 = &pTVar8[lVar37].Translation;
          local_158.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)(pTVar1->Rotation).m128_f32[1],0)
          ;
          local_158.Rotation.XY.m128d_f64[0] = (double)(pTVar1->Rotation).m128_f32[0];
          local_158.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)(pTVar1->Rotation).m128_f32[1] >> 0x20);
          local_158.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)(pTVar1->Rotation).m128_f32[3],0)
          ;
          local_158.Rotation.ZW.m128d_f64[0] = (double)(pTVar1->Rotation).m128_f32[2];
          local_158.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)(pTVar1->Rotation).m128_f32[3] >> 0x20);
          local_158.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)p_Var4->m128_f32[1],0);
          local_158.Translation.XY.m128d_f64[0] = (double)p_Var4->m128_f32[0];
          local_158.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)p_Var4->m128_f32[1] >> 0x20);
          local_158.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)p_Var4->m128_f32[3],0);
          local_158.Translation.ZW.m128d_f64[0] = (double)p_Var4->m128_f32[2];
          local_158.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)p_Var4->m128_f32[3] >> 0x20);
          local_158.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)p_Var3->m128_f32[1],0);
          local_158.Scale3D.XY.m128d_f64[0] = (double)p_Var3->m128_f32[0];
          local_158.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)p_Var3->m128_f32[1] >> 0x20);
          local_158.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)p_Var3->m128_f32[3],0);
          local_158.Scale3D.ZW.m128d_f64[0] = (double)p_Var3->m128_f32[2];
          local_158.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)p_Var3->m128_f32[3] >> 0x20);
          local_268.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_268.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_268.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_268.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_268.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_268.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_268.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_268.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_268.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_268.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_268.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_268.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_268.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_268.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_268.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_268.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_268.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_268.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_268,&local_158,local_608);
          local_308 = local_268.Translation.ZW.m128d_f64[0]._0_4_;
          uStack_304 = local_268.Translation.ZW.m128d_f64[0]._4_4_;
          uStack_610 = local_268.Scale3D.ZW.m128d_f64[0]._0_4_;
          uStack_60c = local_268.Scale3D.ZW.m128d_f64[0]._4_4_;
          local_2f0 = local_268.Scale3D.ZW.m128d_f64[0];
          local_300 = local_268.Scale3D.XY.m128d_f64[0];
          dStack_2f8 = local_268.Scale3D.XY.m128d_f64[1];
          local_3a8 = local_268.Rotation.ZW.m128d_f64[0];
          dStack_3a0 = local_268.Rotation.ZW.m128d_f64[1];
          local_658._s_0.Z = local_268.Rotation.ZW.m128d_f64[0];
          local_658._s_0.W = local_268.Rotation.ZW.m128d_f64[1];
          local_380._0_4_ = local_268.Scale3D.XY.m128d_f64[0]._0_4_;
          local_380._4_4_ = local_268.Scale3D.XY.m128d_f64[0]._4_4_;
          local_3b8 = (FScriptContainerElement *)local_268.Rotation.XY.m128d_f64[0];
          dStack_3b0 = local_268.Rotation.XY.m128d_f64[1];
          local_658._s_0.X = local_268.Rotation.XY.m128d_f64[0];
          local_658._s_0.Y = local_268.Rotation.XY.m128d_f64[1];
          uStack_378._0_4_ = local_268.Scale3D.XY.m128d_f64[1]._0_4_;
          uStack_378._4_4_ = local_268.Scale3D.XY.m128d_f64[1]._4_4_;
          uStack_388 = local_268.Translation.ZW.m128d_f64[0]._0_4_;
          uStack_384 = local_268.Translation.ZW.m128d_f64[0]._4_4_;
          local_318 = local_268.Translation.XY.m128d_f64[0]._0_4_;
          iStack_314 = local_268.Translation.XY.m128d_f64[0]._4_4_;
          uStack_310 = local_268.Translation.XY.m128d_f64[1]._0_4_;
          uStack_30c = local_268.Translation.XY.m128d_f64[1]._4_4_;
          local_398 = local_268.Translation.XY.m128d_f64[0]._0_4_;
          iStack_394 = local_268.Translation.XY.m128d_f64[0]._4_4_;
          uStack_390 = local_268.Translation.XY.m128d_f64[1]._0_4_;
          uStack_38c = local_268.Translation.XY.m128d_f64[1]._4_4_;
          local_628 = local_268.Translation.ZW.m128d_f64[0]._0_4_;
          uStack_624 = local_268.Translation.ZW.m128d_f64[0]._4_4_;
          iStack_620 = (int)local_380;
          uStack_61c = local_380._4_4_;
          local_618 = (uint)uStack_378;
          uStack_614 = uStack_378._4_4_;
          local_638 = local_268.Translation.XY.m128d_f64[0]._0_4_;
          iStack_634 = local_268.Translation.XY.m128d_f64[0]._4_4_;
          uStack_630 = local_268.Translation.XY.m128d_f64[1]._0_4_;
          uStack_62c = local_268.Translation.XY.m128d_f64[1]._4_4_;
          local_380 = local_268.Scale3D.XY.m128d_f64[0];
          uStack_378 = local_268.Scale3D.XY.m128d_f64[1];
          uStack_370 = uStack_610;
          uStack_36c = uStack_60c;
        }
        pFVar29 = ::operator_new(0x330);
        if (pFVar29 == (FDynamicMesh3 *)0x0) {
          pFVar29 = (FDynamicMesh3 *)0x0;
        }
        else {
          UE::Geometry::FDynamicMesh3::FDynamicMesh3(pFVar29);
          fVar50 = GlobalVectorConstants::Float0001.m128_f32[2];
          fVar51 = GlobalVectorConstants::Float0001.m128_f32[3];
          TVar15.ArrayNum = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          TVar15.AllocatorInstance.Data =
               (FScriptContainerElement *)(double)GlobalVectorConstants::Float0001.m128_f32[0];
          TVar15.ArrayMax =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          pFVar29[1].Vertices.Blocks = TVar15;
          dVar21 = (double)fVar50;
          auVar16._8_4_ = SUB84((double)fVar51,0);
          auVar16._0_8_ = dVar21;
          auVar16._12_4_ = (int)((ulonglong)(double)fVar51 >> 0x20);
          pFVar29[1].VertexRefCounts.RefCounts.CurBlock = SUB84(dVar21,0);
          pFVar29[1].VertexRefCounts.RefCounts.CurBlockUsed = (int)((ulonglong)dVar21 >> 0x20);
          pFVar29[1].VertexRefCounts.RefCounts.Blocks.AllocatorInstance =
               (ForAnyElementType)auVar16._8_8_;
          fVar50 = GlobalVectorConstants::FloatZero.m128_f32[2];
          fVar51 = GlobalVectorConstants::FloatZero.m128_f32[3];
          auVar17._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          auVar17._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          auVar17._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          *(undefined1 (*) [16])&pFVar29[1].VertexRefCounts.RefCounts.Blocks.ArrayNum = auVar17;
          TVar18.ArrayNum = SUB84((double)fVar51,0);
          TVar18.AllocatorInstance.Data = (FScriptContainerElement *)(double)fVar50;
          TVar18.ArrayMax = (int)((ulonglong)(double)fVar51 >> 0x20);
          pFVar29[1].VertexRefCounts.FreeIndices.Blocks = TVar18;
          fVar50 = GlobalVectorConstants::Float1110.m128_f32[2];
          fVar51 = GlobalVectorConstants::Float1110.m128_f32[3];
          auVar19._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          auVar19._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          auVar19._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          *(undefined1 (*) [16])&pFVar29[1].VertexRefCounts.UsedCount = auVar19;
          TVar20.ArrayNum = SUB84((double)fVar51,0);
          TVar20.AllocatorInstance.Data = (FScriptContainerElement *)(double)fVar50;
          TVar20.ArrayMax = (int)((ulonglong)(double)fVar51 >> 0x20);
          pFVar29[1].VertexNormals.TypedValue.Blocks = TVar20;
          pFVar29[1].VertexNormals.bIsSet = false;
          pFVar29[1].VertexColors.TypedValue.CurBlock = 0xffffffff;
          pFVar29[1].VertexColors.TypedValue.CurBlockUsed = 0x7fefffff;
          pFVar29[1].VertexColors.TypedValue.Blocks.AllocatorInstance.Data =
               (FScriptContainerElement *)0x7fefffffffffffff;
          pFVar29[1].VertexColors.TypedValue.Blocks.ArrayNum = -1;
          pFVar29[1].VertexColors.TypedValue.Blocks.ArrayMax = 0x7fefffff;
          *(undefined8 *)&pFVar29[1].VertexColors.bIsSet = 0xffefffffffffffff;
          pFVar29[1].VertexUVs.TypedValue.CurBlock = 0xffffffff;
          pFVar29[1].VertexUVs.TypedValue.CurBlockUsed = 0xffefffff;
          pFVar29[1].VertexUVs.TypedValue.Blocks.AllocatorInstance.Data =
               (FScriptContainerElement *)0xffefffffffffffff;
          pFVar29[1].VertexUVs.TypedValue.Blocks.ArrayNum = 0;
          pFVar29[1].VertexUVs.TypedValue.Blocks.ArrayMax = 0;
          *(undefined8 *)&pFVar29[1].VertexUVs.bIsSet = 0;
          pFVar29[1].VertexEdgeLists.ListHeads.Blocks.ArrayNum = 0;
          pFVar29[1].VertexEdgeLists.ListHeads.Blocks.ArrayMax = 0;
          pFVar29[1].VertexEdgeLists.ListBlocks.CurBlock = 0;
          pFVar29[1].VertexEdgeLists.ListBlocks.CurBlockUsed = 0x80;
          *(undefined4 *)&pFVar29[1].VertexEdgeLists.ListBlocks.Blocks.AllocatorInstance.Data =
               0xffffffff;
          *(undefined4 *)
           ((longlong)&pFVar29[1].VertexEdgeLists.ListBlocks.Blocks.AllocatorInstance.Data + 4) = 0;
          pFVar29[1].VertexEdgeLists.FreeBlocks.CurBlock = 0;
          pFVar29[1].VertexEdgeLists.FreeBlocks.CurBlockUsed = 0;
          *(undefined4 *)&pFVar29[1].VertexEdgeLists.FreeBlocks.Blocks.AllocatorInstance.Data = 0;
          AugmentedDynamicMesh::Augment(pFVar29,iVar22);
        }
        pFVar9 = (this->Meshes).Array.AllocatorInstance.Data;
        local_6b0 = pFVar29;
        if (((pFVar9 <= (FScriptContainerElement *)&local_6b0) &&
            ((FScriptContainerElement *)&local_6b0 < pFVar9 + (longlong)*piVar42 * 8)) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar24 = (this->Meshes).Array.ArrayNum;
        if (uVar24 == *piVar42) {
          uVar24 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)this,piVar42);
        }
        pFVar9 = (this->Meshes).Array.AllocatorInstance.Data;
        (this->Meshes).Array.ArrayNum = uVar24 + 1;
        *(FDynamicMesh3 **)(pFVar9 + (longlong)(int)uVar24 * 8) = local_6b0;
        uVar43 = 0;
        if ((int)uVar24 < (this->Meshes).Array.ArrayNum) {
          uVar43 = ~uVar24 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar29 = *(FDynamicMesh3 **)
                   ((this->Meshes).Array.AllocatorInstance.Data + (longlong)(int)uVar24 * 8);
        *(uint *)&pFVar29[1]._padding_ = uVar25;
        pFVar29[1].Vertices.Blocks.AllocatorInstance.Data =
             (FScriptContainerElement *)local_658._s_0.X;
        *(double *)&pFVar29[1].Vertices.Blocks.ArrayNum = local_658._s_0.Y;
        pFVar29[1].VertexRefCounts.RefCounts.CurBlock = local_658._16_4_;
        pFVar29[1].VertexRefCounts.RefCounts.CurBlockUsed = local_658._20_4_;
        *(undefined4 *)&pFVar29[1].VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data =
             local_658._24_4_;
        *(int *)((longlong)&pFVar29[1].VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data + 4)
             = (int)((ulonglong)local_658._24_8_ >> 0x20);
        pFVar29[1].VertexRefCounts.RefCounts.Blocks.ArrayNum = local_638;
        pFVar29[1].VertexRefCounts.RefCounts.Blocks.ArrayMax = iStack_634;
        pFVar29[1].VertexRefCounts.FreeIndices.CurBlock = uStack_630;
        pFVar29[1].VertexRefCounts.FreeIndices.CurBlockUsed = uStack_62c;
        pFVar29[1].VertexRefCounts.FreeIndices.Blocks.AllocatorInstance.Data =
             (FScriptContainerElement *)CONCAT44(uStack_624,local_628);
        pFVar29[1].VertexRefCounts.FreeIndices.Blocks.ArrayNum = 0;
        pFVar29[1].VertexRefCounts.FreeIndices.Blocks.ArrayMax = 0;
        pFVar29[1].VertexRefCounts.UsedCount = iStack_620;
        *(undefined4 *)&pFVar29[1].VertexRefCounts.field_0x34 = uStack_61c;
        pFVar29[1].VertexNormals.TypedValue.CurBlock = local_618;
        pFVar29[1].VertexNormals.TypedValue.CurBlockUsed = uStack_614;
        pFVar29[1].VertexNormals.TypedValue.Blocks.AllocatorInstance.Data =
             (FScriptContainerElement *)CONCAT44(uStack_60c,uStack_610);
        pFVar29[1].VertexNormals.TypedValue.Blocks.ArrayNum = 0;
        pFVar29[1].VertexNormals.TypedValue.Blocks.ArrayMax = 0;
        UE::Geometry::FDynamicMesh3::EnableAttributes(pFVar29);
        pFVar10 = (pFVar29->AttributeSet).Ptr;
        pFVar33 = (FDynamicMeshAttributeSet *)0x0;
        if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar33 = pFVar10;
        }
        UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(pFVar33);
        uVar24 = ~uVar44 >> 0x1f;
        uVar25 = 0;
        if ((int)uVar44 < *(int *)&(param_1->VertexStart).field_0x18) {
          uVar25 = uVar24;
        }
        if ((uVar25 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar25 = *(uint *)(*(longlong *)&(param_1->VertexStart).field_0x10 + lVar41 * 4);
        uVar43 = 0;
        if ((int)uVar44 < *(int *)&(param_1->VertexCount).field_0x18) {
          uVar43 = uVar24;
        }
        if ((uVar43 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar26 = *(int *)(*(longlong *)&(param_1->VertexCount).field_0x10 + lVar41 * 4);
        uVar43 = 0;
        if ((int)uVar44 < *(int *)&(param_1->FaceCount).field_0x18) {
          uVar43 = uVar24;
        }
        if ((uVar43 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar7 = *(int *)(*(longlong *)&(param_1->FaceCount).field_0x10 + lVar41 * 4);
        local_5d8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_5cc = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_5c8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        lVar37 = (longlong)(int)uVar25;
        local_5f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_5f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_6a8 = (longlong)(int)(uVar25 + iVar26);
        local_5f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_5e0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_5d4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_5c0 = 0x101;
        local_5be = 0;
        if (lVar37 < local_6a8) {
          lVar38 = lVar37 * 0xc;
          lVar41 = lVar37 << 4;
          uVar43 = uVar25;
          do {
            uVar39 = ~uVar43 >> 0x1f;
            uVar34 = 0;
            if ((int)uVar43 < *(int *)&(param_1->Vertex).field_0x18) {
              uVar34 = uVar39;
            }
            if ((uVar34 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            lVar45 = *(longlong *)&(param_1->Vertex).field_0x10;
            local_4e8._s_0.X =
                 (double)*(float *)(lVar45 + lVar38) * (double)CONCAT44(uStack_61c,iStack_620);
            local_4e8._s_0.Y =
                 (double)*(float *)(lVar45 + 4 + lVar38) * (double)CONCAT44(uStack_614,local_618);
            local_4e8._s_0.Z =
                 (double)*(float *)(lVar45 + 8 + lVar38) * (double)CONCAT44(uStack_60c,uStack_610);
            pTVar30 = UE::Geometry::operator*<double>
                                (&local_2b8,(TQuaternion<double> *)&local_658._s_0,
                                 (TVector<double> *)&local_4e8._s_0);
            local_5f8._s_0.Y =
                 (double)CONCAT44(uStack_62c,uStack_630) + (pTVar30->field0_0x0)._s_0.Y;
            local_5f8._s_0.Z = (double)CONCAT44(uStack_624,local_628) + (pTVar30->field0_0x0)._s_0.Z
            ;
            local_5f8._s_0.X = (double)CONCAT44(iStack_634,local_638) + (pTVar30->field0_0x0)._s_0.X
            ;
            uVar34 = 0;
            if ((int)uVar43 < *(int *)&(param_1->Color).field_0x18) {
              uVar34 = uVar39;
            }
            if ((uVar34 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            lVar45 = *(longlong *)&(param_1->Color).field_0x10;
            local_5cc = *(float *)(lVar41 + 8 + lVar45);
            local_5d4 = CONCAT44(*(undefined4 *)(lVar41 + 4 + lVar45),
                                 *(undefined4 *)(lVar41 + lVar45));
            uVar34 = 0;
            if ((int)uVar43 < *(int *)&(param_1->Normal).field_0x18) {
              uVar34 = uVar39;
            }
            if ((uVar34 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            lVar45 = *(longlong *)&(param_1->Normal).field_0x10;
            local_4d0._s_0.X = (double)*(float *)(lVar45 + lVar38);
            local_4d0._s_0.Y = (double)*(float *)(lVar45 + 4 + lVar38);
            local_4d0._s_0.Z = (double)*(float *)(lVar45 + 8 + lVar38);
            UE::Geometry::operator*<double>
                      ((TVector<double> *)&local_4b8._s_0,(TQuaternion<double> *)&local_658._s_0,
                       (TVector<double> *)&local_4d0._s_0);
            local_5d8 = (float)local_4b8._s_0.Z;
            local_5e0 = CONCAT44((float)local_4b8._s_0.Y,(float)local_4b8._s_0.X);
            iVar26 = UE::Geometry::FDynamicMesh3::AppendVertex
                               (pFVar29,(FVertexInfo *)&local_5f8._s_0);
            uVar34 = 0;
            if ((int)uVar43 < *(int *)&(param_1->Color).field_0x18) {
              uVar34 = uVar39;
            }
            if ((uVar34 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            puVar2 = (undefined8 *)(*(longlong *)&(param_1->Color).field_0x10 + lVar41);
            local_568._0_8_ = *puVar2;
            local_568._8_8_ = puVar2[1];
            AugmentedDynamicMesh::SetVertexColor(pFVar29,iVar26,(TVector4<float> *)&local_568._s_0);
            uVar34 = 0;
            if ((int)uVar43 < *(int *)&(param_1->TangentV).field_0x18) {
              uVar34 = uVar39;
            }
            if ((uVar34 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            lVar45 = *(longlong *)&(param_1->TangentV).field_0x10;
            local_4a0._s_0.X = (double)*(float *)(lVar38 + lVar45);
            local_4a0._s_0.Y = (double)*(float *)(lVar38 + 4 + lVar45);
            local_4a0._s_0.Z = (double)*(float *)(lVar38 + 8 + lVar45);
            UE::Geometry::operator*<double>
                      ((TVector<double> *)&local_488._s_0,(TQuaternion<double> *)&local_658._s_0,
                       (TVector<double> *)&local_4a0._s_0);
            fVar50 = (float)local_488._s_0.X;
            uVar34 = 0;
            if ((int)uVar43 < *(int *)&(param_1->TangentU).field_0x18) {
              uVar34 = uVar39;
            }
            fVar51 = (float)local_488._s_0.Y;
            fVar52 = (float)local_488._s_0.Z;
            if ((uVar34 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            lVar45 = *(longlong *)&(param_1->TangentU).field_0x10;
            local_470._s_0.X = (double)*(float *)(lVar45 + lVar38);
            local_470._s_0.Y = (double)*(float *)(lVar45 + 4 + lVar38);
            local_470._s_0.Z = (double)*(float *)(lVar45 + 8 + lVar38);
            UE::Geometry::operator*<double>
                      ((TVector<double> *)&local_458._s_0,(TQuaternion<double> *)&local_658._s_0,
                       (TVector<double> *)&local_470._s_0);
            local_5b8._s_0.X = (float)local_458._s_0.X;
            local_548._s_0.Z = local_5d8;
            local_5b8._s_0.Y = (float)local_458._s_0.Y;
            local_5b8._s_0.Z = (float)local_458._s_0.Z;
            local_548._0_8_ = local_5e0;
            local_578._s_0.X = fVar50;
            local_578._s_0.Y = fVar51;
            local_578._s_0.Z = fVar52;
            AugmentedDynamicMesh::SetTangent
                      (pFVar29,iVar26,(TVector<float> *)&local_548._s_0,
                       (TVector<float> *)&local_5b8._s_0,(TVector<float> *)&local_578._s_0);
            uVar34 = 0;
            if (0 < iVar22) {
              pTVar36 = (TTypeCompatibleBytes<TManagedArray<UE::Math::TVector2<float>_>_const_*> *)
                        &local_1a8;
              do {
                uVar40 = 0;
                if ((int)uVar34 < local_1a8.Attributes.ArrayNum) {
                  uVar40 = ~uVar34 >> 0x1f;
                }
                if ((uVar40 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                lVar45 = *(longlong *)pTVar36->Pad;
                uVar40 = 0;
                if ((int)uVar43 < *(int *)(lVar45 + 0x18)) {
                  uVar40 = uVar39;
                }
                if ((uVar40 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                AugmentedDynamicMesh::SetUV
                          (pFVar29,iVar26,
                           (TVector2<float>)
                           ((TVector2<float>_u_0 *)
                           (*(longlong *)(lVar45 + 0x10) + (longlong)(int)uVar43 * 8))->_s_0,uVar34)
                ;
                uVar34 = uVar34 + 1;
                pTVar36 = pTVar36 + 1;
              } while ((int)uVar34 < iVar22);
            }
            lVar41 = lVar41 + 0x10;
            lVar37 = lVar37 + 1;
            lVar38 = lVar38 + 0xc;
            uVar43 = uVar43 + 1;
          } while (lVar37 < local_6a8);
        }
        uVar43 = 0;
        if ((int)uVar44 < *(int *)&(param_1->FaceStart).field_0x18) {
          uVar43 = uVar24;
        }
        if ((uVar43 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar43 = *(uint *)(*(longlong *)&(param_1->FaceStart).field_0x10 + (longlong)(int)uVar44 * 4
                          );
        lVar37 = (longlong)(int)uVar43;
        uVar34 = 0;
        if ((int)uVar44 < *(int *)&(param_1->FaceStart).field_0x18) {
          uVar34 = uVar24;
        }
        if ((uVar34 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_528.Value =
             (int *)(longlong)
                    (*(int *)(*(longlong *)&(param_1->FaceStart).field_0x10 +
                             (longlong)(int)uVar44 * 4) + iVar7);
        if (lVar37 < (longlong)local_528.Value) {
          bVar14 = (byte)uVar43 & 0x1f;
          uVar44 = 1 << bVar14 | 1U >> 0x20 - bVar14;
          lVar41 = lVar37 * 0xc;
          do {
            if (this->bSkipInvisible == false) {
LAB_14c9938e3:
              uVar24 = 0;
              if ((int)uVar43 < *(int *)&(param_1->Indices).field_0x18) {
                uVar24 = ~uVar43 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              lVar38 = *(longlong *)&(param_1->Indices).field_0x10;
              uVar5 = *(undefined8 *)(lVar38 + lVar41);
              local_680 = *(int *)(lVar38 + 8 + lVar41) - uVar25;
              local_688 = (int)uVar5;
              iStack_684 = (int)((ulonglong)uVar5 >> 0x20);
              local_678._s_0.A = local_688 - uVar25;
              local_678._s_0.B = iStack_684 - uVar25;
              _local_688 = CONCAT44(local_678._s_0.B,local_678._s_0.A);
              local_678._s_0.C = local_680;
              uVar24 = UE::Geometry::FDynamicMesh3::AppendTriangle
                                 (pFVar29,(FIndex3i *)&local_678._s_0,0);
              if (uVar24 == 0xfffffffe) {
                local_668._0_8_ = 0xffffffffffffffff;
                local_6a8 = 0;
                local_668._s_0.C = -1;
                do {
                  lVar38 = local_6a8;
                  uVar34 = UE::Geometry::FDynamicMesh3::AppendVertex
                                     (pFVar29,pFVar29,*(int *)((longlong)&local_678 + local_6a8));
                  uVar39 = uVar25 + *(int *)((longlong)&local_678 + lVar38);
                  uVar40 = ~uVar39 >> 0x1f;
                  uVar24 = 0;
                  if ((int)uVar39 < *(int *)&(param_1->TangentV).field_0x18) {
                    uVar24 = uVar40;
                  }
                  if ((uVar24 == 0) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar23)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  lVar38 = *(longlong *)&(param_1->TangentV).field_0x10;
                  lVar45 = (longlong)(int)uVar39;
                  local_440._s_0.X = (double)*(float *)(lVar38 + lVar45 * 0xc);
                  local_440._s_0.Y = (double)*(float *)(lVar38 + 4 + lVar45 * 0xc);
                  local_440._s_0.Z = (double)*(float *)(lVar38 + 8 + lVar45 * 0xc);
                  UE::Geometry::operator*<double>
                            ((TVector<double> *)&local_428._s_0,
                             (TQuaternion<double> *)&local_658._s_0,
                             (TVector<double> *)&local_440._s_0);
                  uVar24 = 0;
                  if ((int)uVar39 < *(int *)&(param_1->TangentU).field_0x18) {
                    uVar24 = uVar40;
                  }
                  fVar50 = (float)local_428._s_0.X;
                  fVar51 = (float)local_428._s_0.Y;
                  fVar52 = (float)local_428._s_0.Z;
                  if ((uVar24 == 0) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar23)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  lVar38 = *(longlong *)&(param_1->TangentU).field_0x10;
                  local_410._s_0.X = (double)*(float *)(lVar38 + lVar45 * 0xc);
                  local_410._s_0.Y = (double)*(float *)(lVar38 + 4 + lVar45 * 0xc);
                  local_410._s_0.Z = (double)*(float *)(lVar38 + 8 + lVar45 * 0xc);
                  UE::Geometry::operator*<double>
                            ((TVector<double> *)&local_3f8._s_0,
                             (TQuaternion<double> *)&local_658._s_0,
                             (TVector<double> *)&local_410._s_0);
                  local_588._s_0.X = (float)local_3f8._s_0.X;
                  local_588._s_0.Y = (float)local_3f8._s_0.Y;
                  local_588._s_0.Z = (float)local_3f8._s_0.Z;
                  if ((pFVar29->VertexNormals).bIsSet == false) {
                    uVar46 = (undefined4)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
                    uVar47 = (undefined4)
                             ((ulonglong)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_ >>
                             0x20);
                    local_5a0 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
                  }
                  else {
                    lVar38 = *(longlong *)
                              ((pFVar29->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar34 >> 9) * 8);
                    uVar5 = *(undefined8 *)(lVar38 + (ulonglong)(uVar34 & 0x1ff) * 0xc);
                    uVar46 = (undefined4)uVar5;
                    uVar47 = (undefined4)((ulonglong)uVar5 >> 0x20);
                    local_5a0 = *(float *)(lVar38 + 8 + (ulonglong)(uVar34 & 0x1ff) * 0xc);
                  }
                  local_5a8 = CONCAT44(uVar47,uVar46);
                  local_538._0_8_ = CONCAT44(uVar47,uVar46);
                  local_598._s_0.X = fVar50;
                  local_598._s_0.Y = fVar51;
                  local_598._s_0.Z = fVar52;
                  local_538._s_0.Z = local_5a0;
                  AugmentedDynamicMesh::SetTangent
                            (pFVar29,uVar34,(TVector<float> *)&local_538._s_0,
                             (TVector<float> *)&local_588._s_0,(TVector<float> *)&local_598._s_0);
                  uVar24 = 0;
                  if (0 < iVar22) {
                    pTVar36 = (TTypeCompatibleBytes<TManagedArray<UE::Math::TVector2<float>_>_const_*>
                               *)&local_1a8;
                    do {
                      uVar27 = 0;
                      if ((int)uVar24 < local_1a8.Attributes.ArrayNum) {
                        uVar27 = ~uVar24 >> 0x1f;
                      }
                      if ((uVar27 == 0) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar23)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      lVar38 = *(longlong *)pTVar36->Pad;
                      uVar27 = 0;
                      if ((int)uVar39 < *(int *)(lVar38 + 0x18)) {
                        uVar27 = uVar40;
                      }
                      if ((uVar27 == 0) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar23)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      AugmentedDynamicMesh::SetUV
                                (pFVar29,uVar34,
                                 (TVector2<float>)
                                 ((TVector2<float>_u_0 *)(*(longlong *)(lVar38 + 0x10) + lVar45 * 8)
                                 )->_s_0,uVar24);
                      uVar24 = uVar24 + 1;
                      pTVar36 = pTVar36 + 1;
                    } while ((int)uVar24 < iVar22);
                  }
                  *(uint *)((longlong)&local_668 + local_6a8) = uVar34;
                  local_6a8 = local_6a8 + 4;
                } while (local_6a8 < 0xc);
                uVar24 = UE::Geometry::FDynamicMesh3::AppendTriangle
                                   (pFVar29,(FIndex3i *)&local_668._s_0,0);
              }
              if (-1 < (int)uVar24) {
                if (this->bGenerateMeshToCollectionFaceMapping != false) {
                  local_4f8 = local_6a0;
                  local_4f0 = local_698;
                  local_6a0[0] = uVar24;
                  local_698[0] = uVar43;
                  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<int_const_&,int_const_&>_>
                            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                              *)&pFVar29[1].VertexUVs.TypedValue.Blocks.ArrayNum,&local_528,
                             (bool *)&local_4f8);
                }
                pFVar10 = (pFVar29->AttributeSet).Ptr;
                pFVar33 = (FDynamicMeshAttributeSet *)0x0;
                if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
                  pFVar33 = pFVar10;
                }
                pTVar12 = (pFVar33->MaterialIDAttrib).Ptr;
                uVar34 = 0;
                if ((int)uVar43 < *(int *)&(param_1->MaterialID).field_0x18) {
                  uVar34 = ~uVar43 >> 0x1f;
                }
                if ((uVar34 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                *(undefined4 *)
                 (*(longlong *)(*(longlong *)&pTVar12->field_0x20 + (ulonglong)(uVar24 >> 9) * 8) +
                 (ulonglong)(uVar24 & 0x1ff) * 4) =
                     *(undefined4 *)(*(longlong *)&(param_1->MaterialID).field_0x10 + lVar37 * 4);
                if ((((int)uVar43 < 0) || (*(int *)&(param_1->Visible).field_0x28 <= (int)uVar43))
                   && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Index>=0 && Index<NumBits",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                           ,0x5c6,L""), bVar23)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                puVar11 = *(undefined1 **)&(param_1->Visible).field_0x20;
                puVar35 = &(param_1->Visible).field_0x10;
                if (puVar11 != (undefined1 *)0x0) {
                  puVar35 = puVar11;
                }
                lVar38 = (longlong)((int)(uVar43 + ((int)uVar43 >> 0x1f & 0x1fU)) >> 5);
                pFVar10 = (pFVar29->AttributeSet).Ptr;
                uVar34 = *(uint *)(puVar35 + lVar38 * 4);
                pFVar33 = (FDynamicMeshAttributeSet *)0x0;
                if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
                  pFVar33 = pFVar10;
                }
                pTVar31 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                          ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                                  *)&pFVar33->GenericAttributes,
                                 AugmentedDynamicMesh::VisibleAttribName);
                if ((pTVar31 ==
                     (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                      *)0x0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Pair != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                        ,0x288,L""), bVar23)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                *(bool *)((ulonglong)(uVar24 & 0x1ff) +
                         *(longlong *)
                          (*(longlong *)(*(longlong *)&pTVar31->field_0x8 + 0x20) +
                          (ulonglong)(uVar24 >> 9) * 8)) = (uVar34 & uVar44) != 0;
                if ((((int)uVar43 < 0) || (*(int *)&(param_1->Internal).field_0x28 <= (int)uVar43))
                   && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Index>=0 && Index<NumBits",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                           ,0x5c6,L""), bVar23)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                puVar11 = *(undefined1 **)&(param_1->Internal).field_0x20;
                puVar35 = &(param_1->Internal).field_0x10;
                if (puVar11 != (undefined1 *)0x0) {
                  puVar35 = puVar11;
                }
                pFVar10 = (pFVar29->AttributeSet).Ptr;
                uVar34 = *(uint *)(puVar35 + lVar38 * 4);
                pFVar33 = (FDynamicMeshAttributeSet *)0x0;
                if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
                  pFVar33 = pFVar10;
                }
                pTVar31 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                          ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                                  *)&pFVar33->GenericAttributes,
                                 AugmentedDynamicMesh::InternalAttribName);
                if ((pTVar31 ==
                     (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                      *)0x0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Pair != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                        ,0x288,L""), bVar23)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                *(bool *)((ulonglong)(uVar24 & 0x1ff) +
                         *(longlong *)
                          (*(longlong *)(*(longlong *)&pTVar31->field_0x8 + 0x20) +
                          (ulonglong)(uVar24 >> 9) * 8)) = (uVar34 & uVar44) != 0;
              }
            }
            else {
              if ((((int)uVar43 < 0) || (*(int *)&(param_1->Visible).field_0x28 <= (int)uVar43)) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5c6,L""), bVar23)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              puVar11 = *(undefined1 **)&(param_1->Visible).field_0x20;
              puVar35 = &(param_1->Visible).field_0x10;
              if (puVar11 != (undefined1 *)0x0) {
                puVar35 = puVar11;
              }
              uVar24 = uVar43;
              if ((int)uVar43 < 0) {
                uVar24 = uVar43 + 0x1f;
              }
              if ((*(uint *)(puVar35 + (longlong)((int)uVar24 >> 5) * 4) & uVar44) != 0)
              goto LAB_14c9938e3;
            }
            uVar43 = uVar43 + 1;
            lVar41 = lVar41 + 0xc;
            uVar44 = uVar44 << 1 | (uint)((int)uVar44 < 0);
            lVar37 = lVar37 + 1;
          } while (lVar37 < (longlong)local_528.Value);
        }
        if (!param_5) {
          local_518[0].Mesh = pFVar29;
          UE::Geometry::FDynamicMeshEditor::RemoveIsolatedVertices(local_518);
        }
        if (pFVar29[1].VertexNormals.bIsSet == false) {
          pTVar32 = UE::Geometry::FDynamicMesh3::GetBounds(pFVar29,&local_2a0,true);
          pFVar9 = (FScriptContainerElement *)(pTVar32->Min).field0_0x0._s_0.Y;
          *(double *)&pFVar29[1].VertexColors.TypedValue = (pTVar32->Min).field0_0x0._s_0.X;
          pFVar29[1].VertexColors.TypedValue.Blocks.AllocatorInstance.Data = pFVar9;
          dVar21 = (pTVar32->Max).field0_0x0._s_0.X;
          *(double *)&pFVar29[1].VertexColors.TypedValue.Blocks.ArrayNum =
               (pTVar32->Min).field0_0x0._s_0.Z;
          *(double *)&pFVar29[1].VertexColors.bIsSet = dVar21;
          dVar21 = (pTVar32->Max).field0_0x0._s_0.Y;
          pFVar9 = (FScriptContainerElement *)(pTVar32->Max).field0_0x0._s_0.Z;
          pFVar29[1].VertexNormals.bIsSet = true;
          *(double *)&pFVar29[1].VertexUVs.TypedValue = dVar21;
          pFVar29[1].VertexUVs.TypedValue.Blocks.AllocatorInstance.Data = pFVar9;
        }
        dVar21 = *(double *)&pFVar29[1].VertexColors.TypedValue;
        uVar46 = SUB84(dVar21,0);
        uVar47 = (undefined4)((ulonglong)dVar21 >> 0x20);
        dVar6 = *(double *)&(this->Bounds).Min.field0_0x0;
        if (dVar6 <= dVar21) {
          uVar46 = SUB84(dVar6,0);
          uVar47 = (undefined4)((ulonglong)dVar6 >> 0x20);
        }
        dVar21 = *(double *)((longlong)&(this->Bounds).Min.field0_0x0 + 8);
        uVar48 = SUB84(dVar21,0);
        uVar49 = (undefined4)((ulonglong)dVar21 >> 0x20);
        (this->Bounds).Min.field0_0x0._s_0.X = (double)CONCAT44(uVar47,uVar46);
        pFVar9 = pFVar29[1].VertexColors.TypedValue.Blocks.AllocatorInstance.Data;
        if ((double)pFVar9 <= dVar21) {
          uVar48 = SUB84(pFVar9,0);
          uVar49 = (undefined4)((ulonglong)pFVar9 >> 0x20);
        }
        dVar21 = *(double *)((longlong)&(this->Bounds).Min.field0_0x0 + 0x10);
        uVar46 = SUB84(dVar21,0);
        uVar47 = (undefined4)((ulonglong)dVar21 >> 0x20);
        (this->Bounds).Min.field0_0x0._s_0.Y = (double)CONCAT44(uVar49,uVar48);
        dVar6 = *(double *)&pFVar29[1].VertexColors.TypedValue.Blocks.ArrayNum;
        if (dVar6 <= dVar21) {
          uVar46 = SUB84(dVar6,0);
          uVar47 = (undefined4)((ulonglong)dVar6 >> 0x20);
        }
        (this->Bounds).Min.field0_0x0._s_0.Z = (double)CONCAT44(uVar47,uVar46);
        dVar21 = *(double *)&pFVar29[1].VertexColors.bIsSet;
        uVar46 = SUB84(dVar21,0);
        uVar47 = (undefined4)((ulonglong)dVar21 >> 0x20);
        dVar6 = *(double *)&(this->Bounds).Max.field0_0x0;
        if (dVar21 <= dVar6) {
          uVar46 = SUB84(dVar6,0);
          uVar47 = (undefined4)((ulonglong)dVar6 >> 0x20);
        }
        (this->Bounds).Max.field0_0x0._s_0.X = (double)CONCAT44(uVar47,uVar46);
        dVar21 = *(double *)&pFVar29[1].VertexUVs.TypedValue;
        uVar46 = SUB84(dVar21,0);
        uVar47 = (undefined4)((ulonglong)dVar21 >> 0x20);
        dVar6 = *(double *)((longlong)&(this->Bounds).Max.field0_0x0 + 8);
        if (dVar21 <= dVar6) {
          uVar46 = SUB84(dVar6,0);
          uVar47 = (undefined4)((ulonglong)dVar6 >> 0x20);
        }
        (this->Bounds).Max.field0_0x0._s_0.Y = (double)CONCAT44(uVar47,uVar46);
        pFVar9 = pFVar29[1].VertexUVs.TypedValue.Blocks.AllocatorInstance.Data;
        uVar46 = SUB84(pFVar9,0);
        uVar47 = (undefined4)((ulonglong)pFVar9 >> 0x20);
        dVar21 = *(double *)((longlong)&(this->Bounds).Max.field0_0x0 + 0x10);
        if ((double)pFVar9 <= dVar21) {
          uVar46 = SUB84(dVar21,0);
          uVar47 = (undefined4)((ulonglong)dVar21 >> 0x20);
        }
        (this->Bounds).Max.field0_0x0._s_0.Z = (double)CONCAT44(uVar47,uVar46);
      }
      local_600 = local_600 + 1;
    } while (local_600 != local_558);
  }
  return;
}

// InitTemplate<UE::Math::TTransform<double>_> @ 14c994100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::PlanarCut::FDynamicMeshCollection::InitTemplate<UE::Math::TTransform<double>_>
          (FDynamicMeshCollection *this,FGeometryCollection *param_1,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_2,
          TArrayView<int_const_,int> *param_3,TTransform<double> *param_4,bool param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FDynamicMeshAttributeSet *pFVar6;
  longlong lVar7;
  undefined1 *puVar8;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar9;
  code *pcVar10;
  byte bVar11;
  TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  TVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> TVar15;
  undefined1 auVar16 [16];
  TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  TVar17;
  double dVar18;
  int iVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  TTransform<double> *pTVar25;
  FDynamicMesh3 *pFVar26;
  TVector<double> *pTVar27;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar28;
  TAxisAlignedBox3<double> *pTVar29;
  FDynamicMeshAttributeSet *pFVar30;
  uint uVar31;
  undefined1 *puVar32;
  longlong lVar33;
  TTypeCompatibleBytes<TManagedArray<UE::Math::TVector2<float>_>_const_*> *pTVar34;
  uint uVar35;
  longlong lVar36;
  uint uVar37;
  longlong lVar38;
  uint uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  uint uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStackY_748 [32];
  uint local_6e4;
  FDynamicMesh3 *local_6c0;
  FDynamicMesh3 *local_6b8;
  longlong local_6b0;
  uint local_6a8 [2];
  TArrayView<UE::Math::TTransform<double>_const_,int> *local_6a0;
  uint local_698 [2];
  FDynamicMeshCollection *local_690;
  int local_688;
  int iStack_684;
  int local_680;
  FIndex3i_u_0 local_678;
  FIndex3i_u_0 local_668;
  TQuaternion<double>_u_0 local_658;
  int local_638;
  int iStack_634;
  uint uStack_630;
  uint uStack_62c;
  undefined4 local_628;
  undefined4 uStack_624;
  int iStack_620;
  undefined4 uStack_61c;
  uint local_618;
  uint uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  TTransform<double> *local_608;
  uint *local_600;
  TVector<double>_u_0 local_5f8;
  undefined8 local_5e0;
  float local_5d8;
  undefined8 local_5d4;
  float local_5cc;
  TVector2<float>_u_0 local_5c8;
  undefined2 local_5c0;
  undefined1 local_5be;
  TVector<float>_u_0 local_5b8;
  undefined8 local_5a8;
  float local_5a0;
  TVector<float>_u_0 local_598;
  TVector<float>_u_0 local_588;
  TVector<float>_u_0 local_578;
  TVector4<float>_u_0 local_568;
  uint *local_558;
  TVector<float>_u_0 local_548;
  TVector<float>_u_0 local_538;
  TPairInitializer<int_const_&,int_const_&> local_528;
  FDynamicMeshEditor local_518 [2];
  int *local_508;
  int iStack_500;
  undefined4 uStack_4fc;
  uint *local_4f8;
  uint *local_4f0;
  TVector<double>_u_0 local_4e8;
  TVector<double>_u_0 local_4d0;
  TVector<double>_u_0 local_4b8;
  TVector<double>_u_0 local_4a0;
  TVector<double>_u_0 local_488;
  TVector<double>_u_0 local_470;
  TVector<double>_u_0 local_458;
  TVector<double>_u_0 local_440;
  TVector<double>_u_0 local_428;
  TVector<double>_u_0 local_410;
  TVector<double>_u_0 local_3f8;
  TArrayView<int_const_,int> local_3d8;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_3c8;
  FScriptContainerElement *local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  int local_398;
  int iStack_394;
  uint uStack_390;
  uint uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  FScriptContainerElement *local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  int local_348;
  int iStack_344;
  uint uStack_340;
  uint uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  int local_318;
  int iStack_314;
  uint uStack_310;
  uint uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  int local_2e8;
  int iStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  TVector<double> local_2b8;
  TAxisAlignedBox3<double> local_2a0;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TArrayOfAttributesAccessor<TManagedArray<UE::Math::TVector2<float>_>_const_,8> local_1a8;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_748;
  local_608 = param_4;
  local_6a0 = param_2;
  local_690 = this;
  GeometryCollection::UV::FindActiveUVLayers(&local_1a8,(FManagedArrayCollection *)param_1);
  iVar19 = local_1a8.Attributes.ArrayNum;
  TIndirectArray<UE::PlanarCut::FDynamicMeshCollection::FMeshData,TSizedDefaultAllocator<32>_>::
  DestructAndFreeItems(&this->Meshes);
  iVar23 = (this->Meshes).Array.ArrayMax;
  (this->Meshes).Array.ArrayNum = 0;
  if (iVar23 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->Meshes).Array.ArrayMax);
  }
  (this->Bounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  local_600 = (uint *)param_3->DataPtr;
  local_558 = local_600 + param_3->ArrayNum;
  if (local_600 != local_558) {
    do {
      uVar22 = *local_600;
      lVar36 = (longlong)(int)uVar22;
      uVar35 = 0;
      if ((int)uVar22 < *(int *)&(param_1->TransformToGeometryIndex).field_0x18) {
        uVar35 = ~uVar22 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar35 = *(uint *)(*(longlong *)&(param_1->TransformToGeometryIndex).field_0x10 + lVar36 * 4);
      lVar38 = (longlong)(int)uVar35;
      if (uVar35 != 0xffffffff) {
        if (this->bComponentSpaceTransforms == false) {
          local_508 = (int *)param_1->_padding_;
          iVar23 = (int)param_1->_padding_;
          if ((iVar23 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar20)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          local_3d8._12_4_ = uStack_4fc;
          local_3d8.ArrayNum = iVar23;
          local_3d8.DataPtr = local_508;
          local_3c8.DataPtr = local_6a0->DataPtr;
          local_3c8.ArrayNum = local_6a0->ArrayNum;
          local_3c8._12_4_ = *(undefined4 *)&local_6a0->field_0xc;
          iStack_500 = iVar23;
          pTVar25 = GeometryCollectionAlgo::GlobalMatrix(&local_f8,&local_3c8,&local_3d8,uVar22);
          local_208.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_208.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_208.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_208.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_208.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_208.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_208.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_208.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_208.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_208.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_208.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_208.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_208.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_208.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_208.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_208.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_208.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_208,pTVar25,local_608);
          local_2d8 = local_208.Translation.ZW.m128d_f64[0]._0_4_;
          uStack_2d4 = local_208.Translation.ZW.m128d_f64[0]._4_4_;
          uStack_610 = local_208.Scale3D.ZW.m128d_f64[0]._0_4_;
          uStack_60c = local_208.Scale3D.ZW.m128d_f64[0]._4_4_;
          local_2c0 = local_208.Scale3D.ZW.m128d_f64[0];
          local_2d0 = local_208.Scale3D.XY.m128d_f64[0];
          dStack_2c8 = local_208.Scale3D.XY.m128d_f64[1];
          local_358 = local_208.Rotation.ZW.m128d_f64[0];
          dStack_350 = local_208.Rotation.ZW.m128d_f64[1];
          local_658._s_0.Z = local_208.Rotation.ZW.m128d_f64[0];
          local_658._s_0.W = local_208.Rotation.ZW.m128d_f64[1];
          local_330._0_4_ = local_208.Scale3D.XY.m128d_f64[0]._0_4_;
          local_330._4_4_ = local_208.Scale3D.XY.m128d_f64[0]._4_4_;
          local_368 = (FScriptContainerElement *)local_208.Rotation.XY.m128d_f64[0];
          dStack_360 = local_208.Rotation.XY.m128d_f64[1];
          local_658._s_0.X = local_208.Rotation.XY.m128d_f64[0];
          local_658._s_0.Y = local_208.Rotation.XY.m128d_f64[1];
          uStack_328._0_4_ = local_208.Scale3D.XY.m128d_f64[1]._0_4_;
          uStack_328._4_4_ = local_208.Scale3D.XY.m128d_f64[1]._4_4_;
          uStack_338 = local_208.Translation.ZW.m128d_f64[0]._0_4_;
          uStack_334 = local_208.Translation.ZW.m128d_f64[0]._4_4_;
          local_2e8 = local_208.Translation.XY.m128d_f64[0]._0_4_;
          iStack_2e4 = local_208.Translation.XY.m128d_f64[0]._4_4_;
          uStack_2e0 = local_208.Translation.XY.m128d_f64[1]._0_4_;
          uStack_2dc = local_208.Translation.XY.m128d_f64[1]._4_4_;
          local_348 = local_208.Translation.XY.m128d_f64[0]._0_4_;
          iStack_344 = local_208.Translation.XY.m128d_f64[0]._4_4_;
          uStack_340 = local_208.Translation.XY.m128d_f64[1]._0_4_;
          uStack_33c = local_208.Translation.XY.m128d_f64[1]._4_4_;
          local_628 = local_208.Translation.ZW.m128d_f64[0]._0_4_;
          uStack_624 = local_208.Translation.ZW.m128d_f64[0]._4_4_;
          iStack_620 = (int)local_330;
          uStack_61c = local_330._4_4_;
          local_618 = (uint)uStack_328;
          uStack_614 = uStack_328._4_4_;
          local_638 = local_208.Translation.XY.m128d_f64[0]._0_4_;
          iStack_634 = local_208.Translation.XY.m128d_f64[0]._4_4_;
          uStack_630 = local_208.Translation.XY.m128d_f64[1]._0_4_;
          uStack_62c = local_208.Translation.XY.m128d_f64[1]._4_4_;
          local_330 = local_208.Scale3D.XY.m128d_f64[0];
          uStack_328 = local_208.Scale3D.XY.m128d_f64[1];
          uStack_320 = uStack_610;
          uStack_31c = uStack_60c;
        }
        else {
          uVar21 = 0;
          if ((int)uVar22 < local_6a0->ArrayNum) {
            uVar21 = ~uVar22 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar20)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar25 = local_6a0->DataPtr;
          local_158.Rotation.XY.m128d_f64[0] = pTVar25[lVar36].Rotation.XY.m128d_f64[0];
          local_158.Rotation.XY.m128d_f64[1] = pTVar25[lVar36].Rotation.XY.m128d_f64[1];
          local_158.Rotation.ZW.m128d_f64[0] = pTVar25[lVar36].Rotation.ZW.m128d_f64[0];
          local_158.Rotation.ZW.m128d_f64[1] = pTVar25[lVar36].Rotation.ZW.m128d_f64[1];
          local_158.Translation.XY.m128d_f64[0] = pTVar25[lVar36].Translation.XY.m128d_f64[0];
          local_158.Translation.XY.m128d_f64[1] = pTVar25[lVar36].Translation.XY.m128d_f64[1];
          local_158.Translation.ZW.m128d_f64[0] = pTVar25[lVar36].Translation.ZW.m128d_f64[0];
          local_158.Translation.ZW.m128d_f64[1] = pTVar25[lVar36].Translation.ZW.m128d_f64[1];
          local_158.Scale3D.XY.m128d_f64[0] = pTVar25[lVar36].Scale3D.XY.m128d_f64[0];
          local_158.Scale3D.XY.m128d_f64[1] = pTVar25[lVar36].Scale3D.XY.m128d_f64[1];
          local_158.Scale3D.ZW.m128d_f64[0] = pTVar25[lVar36].Scale3D.ZW.m128d_f64[0];
          local_158.Scale3D.ZW.m128d_f64[1] = pTVar25[lVar36].Scale3D.ZW.m128d_f64[1];
          local_268.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_268.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_268.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_268.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_268.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_268.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_268.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_268.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_268.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_268.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_268.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_268.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_268.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_268.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_268.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_268.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_268.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_268.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_268,&local_158,local_608);
          local_308 = local_268.Translation.ZW.m128d_f64[0]._0_4_;
          uStack_304 = local_268.Translation.ZW.m128d_f64[0]._4_4_;
          uStack_610 = local_268.Scale3D.ZW.m128d_f64[0]._0_4_;
          uStack_60c = local_268.Scale3D.ZW.m128d_f64[0]._4_4_;
          local_2f0 = local_268.Scale3D.ZW.m128d_f64[0];
          local_300 = local_268.Scale3D.XY.m128d_f64[0];
          dStack_2f8 = local_268.Scale3D.XY.m128d_f64[1];
          local_3a8 = local_268.Rotation.ZW.m128d_f64[0];
          dStack_3a0 = local_268.Rotation.ZW.m128d_f64[1];
          local_658._s_0.Z = local_268.Rotation.ZW.m128d_f64[0];
          local_658._s_0.W = local_268.Rotation.ZW.m128d_f64[1];
          local_380._0_4_ = local_268.Scale3D.XY.m128d_f64[0]._0_4_;
          local_380._4_4_ = local_268.Scale3D.XY.m128d_f64[0]._4_4_;
          local_3b8 = (FScriptContainerElement *)local_268.Rotation.XY.m128d_f64[0];
          dStack_3b0 = local_268.Rotation.XY.m128d_f64[1];
          local_658._s_0.X = local_268.Rotation.XY.m128d_f64[0];
          local_658._s_0.Y = local_268.Rotation.XY.m128d_f64[1];
          uStack_378._0_4_ = local_268.Scale3D.XY.m128d_f64[1]._0_4_;
          uStack_378._4_4_ = local_268.Scale3D.XY.m128d_f64[1]._4_4_;
          uStack_388 = local_268.Translation.ZW.m128d_f64[0]._0_4_;
          uStack_384 = local_268.Translation.ZW.m128d_f64[0]._4_4_;
          local_318 = local_268.Translation.XY.m128d_f64[0]._0_4_;
          iStack_314 = local_268.Translation.XY.m128d_f64[0]._4_4_;
          uStack_310 = local_268.Translation.XY.m128d_f64[1]._0_4_;
          uStack_30c = local_268.Translation.XY.m128d_f64[1]._4_4_;
          local_398 = local_268.Translation.XY.m128d_f64[0]._0_4_;
          iStack_394 = local_268.Translation.XY.m128d_f64[0]._4_4_;
          uStack_390 = local_268.Translation.XY.m128d_f64[1]._0_4_;
          uStack_38c = local_268.Translation.XY.m128d_f64[1]._4_4_;
          local_628 = local_268.Translation.ZW.m128d_f64[0]._0_4_;
          uStack_624 = local_268.Translation.ZW.m128d_f64[0]._4_4_;
          iStack_620 = (int)local_380;
          uStack_61c = local_380._4_4_;
          local_618 = (uint)uStack_378;
          uStack_614 = uStack_378._4_4_;
          local_638 = local_268.Translation.XY.m128d_f64[0]._0_4_;
          iStack_634 = local_268.Translation.XY.m128d_f64[0]._4_4_;
          uStack_630 = local_268.Translation.XY.m128d_f64[1]._0_4_;
          uStack_62c = local_268.Translation.XY.m128d_f64[1]._4_4_;
          local_380 = local_268.Scale3D.XY.m128d_f64[0];
          uStack_378 = local_268.Scale3D.XY.m128d_f64[1];
          uStack_370 = uStack_610;
          uStack_36c = uStack_60c;
        }
        pFVar26 = ::operator_new(0x330);
        if (pFVar26 == (FDynamicMesh3 *)0x0) {
          pFVar26 = (FDynamicMesh3 *)0x0;
        }
        else {
          UE::Geometry::FDynamicMesh3::FDynamicMesh3(pFVar26);
          fVar47 = GlobalVectorConstants::Float0001.m128_f32[2];
          fVar48 = GlobalVectorConstants::Float0001.m128_f32[3];
          TVar12.ArrayNum = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          TVar12.AllocatorInstance.Data =
               (FScriptContainerElement *)(double)GlobalVectorConstants::Float0001.m128_f32[0];
          TVar12.ArrayMax =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          pFVar26[1].Vertices.Blocks = TVar12;
          dVar18 = (double)fVar47;
          auVar13._8_4_ = SUB84((double)fVar48,0);
          auVar13._0_8_ = dVar18;
          auVar13._12_4_ = (int)((ulonglong)(double)fVar48 >> 0x20);
          pFVar26[1].VertexRefCounts.RefCounts.CurBlock = SUB84(dVar18,0);
          pFVar26[1].VertexRefCounts.RefCounts.CurBlockUsed = (int)((ulonglong)dVar18 >> 0x20);
          pFVar26[1].VertexRefCounts.RefCounts.Blocks.AllocatorInstance =
               (ForAnyElementType)auVar13._8_8_;
          fVar47 = GlobalVectorConstants::FloatZero.m128_f32[2];
          fVar48 = GlobalVectorConstants::FloatZero.m128_f32[3];
          auVar14._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          auVar14._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          auVar14._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          *(undefined1 (*) [16])&pFVar26[1].VertexRefCounts.RefCounts.Blocks.ArrayNum = auVar14;
          TVar15.ArrayNum = SUB84((double)fVar48,0);
          TVar15.AllocatorInstance.Data = (FScriptContainerElement *)(double)fVar47;
          TVar15.ArrayMax = (int)((ulonglong)(double)fVar48 >> 0x20);
          pFVar26[1].VertexRefCounts.FreeIndices.Blocks = TVar15;
          fVar47 = GlobalVectorConstants::Float1110.m128_f32[2];
          fVar48 = GlobalVectorConstants::Float1110.m128_f32[3];
          auVar16._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          auVar16._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          auVar16._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          *(undefined1 (*) [16])&pFVar26[1].VertexRefCounts.UsedCount = auVar16;
          TVar17.ArrayNum = SUB84((double)fVar48,0);
          TVar17.AllocatorInstance.Data = (FScriptContainerElement *)(double)fVar47;
          TVar17.ArrayMax = (int)((ulonglong)(double)fVar48 >> 0x20);
          pFVar26[1].VertexNormals.TypedValue.Blocks = TVar17;
          pFVar26[1].VertexNormals.bIsSet = false;
          pFVar26[1].VertexColors.TypedValue.CurBlock = 0xffffffff;
          pFVar26[1].VertexColors.TypedValue.CurBlockUsed = 0x7fefffff;
          pFVar26[1].VertexColors.TypedValue.Blocks.AllocatorInstance.Data =
               (FScriptContainerElement *)0x7fefffffffffffff;
          pFVar26[1].VertexColors.TypedValue.Blocks.ArrayNum = -1;
          pFVar26[1].VertexColors.TypedValue.Blocks.ArrayMax = 0x7fefffff;
          *(undefined8 *)&pFVar26[1].VertexColors.bIsSet = 0xffefffffffffffff;
          pFVar26[1].VertexUVs.TypedValue.CurBlock = 0xffffffff;
          pFVar26[1].VertexUVs.TypedValue.CurBlockUsed = 0xffefffff;
          pFVar26[1].VertexUVs.TypedValue.Blocks.AllocatorInstance.Data =
               (FScriptContainerElement *)0xffefffffffffffff;
          pFVar26[1].VertexUVs.TypedValue.Blocks.ArrayNum = 0;
          pFVar26[1].VertexUVs.TypedValue.Blocks.ArrayMax = 0;
          *(undefined8 *)&pFVar26[1].VertexUVs.bIsSet = 0;
          pFVar26[1].VertexEdgeLists.ListHeads.Blocks.ArrayNum = 0;
          pFVar26[1].VertexEdgeLists.ListHeads.Blocks.ArrayMax = 0;
          pFVar26[1].VertexEdgeLists.ListBlocks.CurBlock = 0;
          pFVar26[1].VertexEdgeLists.ListBlocks.CurBlockUsed = 0x80;
          *(undefined4 *)&pFVar26[1].VertexEdgeLists.ListBlocks.Blocks.AllocatorInstance.Data =
               0xffffffff;
          *(undefined4 *)
           ((longlong)&pFVar26[1].VertexEdgeLists.ListBlocks.Blocks.AllocatorInstance.Data + 4) = 0;
          pFVar26[1].VertexEdgeLists.FreeBlocks.CurBlock = 0;
          pFVar26[1].VertexEdgeLists.FreeBlocks.CurBlockUsed = 0;
          *(undefined4 *)&pFVar26[1].VertexEdgeLists.FreeBlocks.Blocks.AllocatorInstance.Data = 0;
          AugmentedDynamicMesh::Augment(pFVar26,iVar19);
        }
        pFVar5 = (this->Meshes).Array.AllocatorInstance.Data;
        local_6c0 = pFVar26;
        if (((pFVar5 <= (FScriptContainerElement *)&local_6c0) &&
            ((FScriptContainerElement *)&local_6c0 <
             pFVar5 + (longlong)(this->Meshes).Array.ArrayMax * 8)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar21 = (this->Meshes).Array.ArrayNum;
        if (uVar21 == (this->Meshes).Array.ArrayMax) {
          uVar21 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)this,&(this->Meshes).Array.ArrayMax);
        }
        pFVar5 = (this->Meshes).Array.AllocatorInstance.Data;
        (this->Meshes).Array.ArrayNum = uVar21 + 1;
        *(FDynamicMesh3 **)(pFVar5 + (longlong)(int)uVar21 * 8) = local_6c0;
        uVar42 = 0;
        if ((int)uVar21 < (this->Meshes).Array.ArrayNum) {
          uVar42 = ~uVar21 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar26 = *(FDynamicMesh3 **)
                   ((this->Meshes).Array.AllocatorInstance.Data + (longlong)(int)uVar21 * 8);
        *(uint *)&pFVar26[1]._padding_ = uVar22;
        pFVar26[1].Vertices.Blocks.AllocatorInstance.Data =
             (FScriptContainerElement *)local_658._s_0.X;
        *(double *)&pFVar26[1].Vertices.Blocks.ArrayNum = local_658._s_0.Y;
        pFVar26[1].VertexRefCounts.RefCounts.CurBlock = local_658._16_4_;
        pFVar26[1].VertexRefCounts.RefCounts.CurBlockUsed = local_658._20_4_;
        *(undefined4 *)&pFVar26[1].VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data =
             local_658._24_4_;
        *(int *)((longlong)&pFVar26[1].VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data + 4)
             = (int)((ulonglong)local_658._24_8_ >> 0x20);
        pFVar26[1].VertexRefCounts.RefCounts.Blocks.ArrayNum = local_638;
        pFVar26[1].VertexRefCounts.RefCounts.Blocks.ArrayMax = iStack_634;
        pFVar26[1].VertexRefCounts.FreeIndices.CurBlock = uStack_630;
        pFVar26[1].VertexRefCounts.FreeIndices.CurBlockUsed = uStack_62c;
        pFVar26[1].VertexRefCounts.FreeIndices.Blocks.AllocatorInstance.Data =
             (FScriptContainerElement *)CONCAT44(uStack_624,local_628);
        pFVar26[1].VertexRefCounts.FreeIndices.Blocks.ArrayNum = 0;
        pFVar26[1].VertexRefCounts.FreeIndices.Blocks.ArrayMax = 0;
        pFVar26[1].VertexRefCounts.UsedCount = iStack_620;
        *(undefined4 *)&pFVar26[1].VertexRefCounts.field_0x34 = uStack_61c;
        pFVar26[1].VertexNormals.TypedValue.CurBlock = local_618;
        pFVar26[1].VertexNormals.TypedValue.CurBlockUsed = uStack_614;
        pFVar26[1].VertexNormals.TypedValue.Blocks.AllocatorInstance.Data =
             (FScriptContainerElement *)CONCAT44(uStack_60c,uStack_610);
        pFVar26[1].VertexNormals.TypedValue.Blocks.ArrayNum = 0;
        pFVar26[1].VertexNormals.TypedValue.Blocks.ArrayMax = 0;
        local_6b8 = pFVar26;
        UE::Geometry::FDynamicMesh3::EnableAttributes(pFVar26);
        pFVar6 = (pFVar26->AttributeSet).Ptr;
        pFVar30 = (FDynamicMeshAttributeSet *)0x0;
        if (pFVar6 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar30 = pFVar6;
        }
        UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(pFVar30);
        uVar21 = ~uVar35 >> 0x1f;
        uVar22 = 0;
        if ((int)uVar35 < *(int *)&(param_1->VertexStart).field_0x18) {
          uVar22 = uVar21;
        }
        if ((uVar22 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar22 = *(uint *)(*(longlong *)&(param_1->VertexStart).field_0x10 + lVar38 * 4);
        lVar36 = (longlong)(int)uVar22;
        uVar42 = 0;
        if ((int)uVar35 < *(int *)&(param_1->VertexCount).field_0x18) {
          uVar42 = uVar21;
        }
        if ((uVar42 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar23 = *(int *)(*(longlong *)&(param_1->VertexCount).field_0x10 + lVar38 * 4);
        uVar42 = 0;
        if ((int)uVar35 < *(int *)&(param_1->FaceCount).field_0x18) {
          uVar42 = uVar21;
        }
        if ((uVar42 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar4 = *(int *)(*(longlong *)&(param_1->FaceCount).field_0x10 + lVar38 * 4);
        local_5d8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_5cc = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_5c8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_6b0 = (longlong)(int)(iVar23 + uVar22);
        local_5f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_5f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_5f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_5e0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_5d4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_5c0 = 0x101;
        local_5be = 0;
        if (lVar36 < local_6b0) {
          lVar38 = lVar36 * 0xc;
          lVar33 = lVar36 << 4;
          uVar42 = uVar22;
          do {
            uVar37 = ~uVar42 >> 0x1f;
            uVar31 = 0;
            if ((int)uVar42 < *(int *)&(param_1->Vertex).field_0x18) {
              uVar31 = uVar37;
            }
            if ((uVar31 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar7 = *(longlong *)&(param_1->Vertex).field_0x10;
            local_4e8._s_0.X =
                 (double)*(float *)(lVar7 + lVar38) * (double)CONCAT44(uStack_61c,iStack_620);
            local_4e8._s_0.Y =
                 (double)*(float *)(lVar7 + 4 + lVar38) * (double)CONCAT44(uStack_614,local_618);
            local_4e8._s_0.Z =
                 (double)*(float *)(lVar7 + 8 + lVar38) * (double)CONCAT44(uStack_60c,uStack_610);
            pTVar27 = UE::Geometry::operator*<double>
                                (&local_2b8,(TQuaternion<double> *)&local_658._s_0,
                                 (TVector<double> *)&local_4e8._s_0);
            local_5f8._s_0.Y =
                 (double)CONCAT44(uStack_62c,uStack_630) + (pTVar27->field0_0x0)._s_0.Y;
            local_5f8._s_0.Z = (double)CONCAT44(uStack_624,local_628) + (pTVar27->field0_0x0)._s_0.Z
            ;
            local_5f8._s_0.X = (double)CONCAT44(iStack_634,local_638) + (pTVar27->field0_0x0)._s_0.X
            ;
            uVar31 = 0;
            if ((int)uVar42 < *(int *)&(param_1->Color).field_0x18) {
              uVar31 = uVar37;
            }
            if ((uVar31 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar7 = *(longlong *)&(param_1->Color).field_0x10;
            local_5cc = *(float *)(lVar33 + 8 + lVar7);
            local_5d4 = CONCAT44(*(undefined4 *)(lVar33 + 4 + lVar7),*(undefined4 *)(lVar33 + lVar7)
                                );
            uVar31 = 0;
            if ((int)uVar42 < *(int *)&(param_1->Normal).field_0x18) {
              uVar31 = uVar37;
            }
            if ((uVar31 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar7 = *(longlong *)&(param_1->Normal).field_0x10;
            local_4d0._s_0.X = (double)*(float *)(lVar7 + lVar38);
            local_4d0._s_0.Y = (double)*(float *)(lVar7 + 4 + lVar38);
            local_4d0._s_0.Z = (double)*(float *)(lVar7 + 8 + lVar38);
            UE::Geometry::operator*<double>
                      ((TVector<double> *)&local_4b8._s_0,(TQuaternion<double> *)&local_658._s_0,
                       (TVector<double> *)&local_4d0._s_0);
            local_5d8 = (float)local_4b8._s_0.Z;
            local_5e0 = CONCAT44((float)local_4b8._s_0.Y,(float)local_4b8._s_0.X);
            iVar23 = UE::Geometry::FDynamicMesh3::AppendVertex
                               (pFVar26,(FVertexInfo *)&local_5f8._s_0);
            uVar31 = 0;
            if ((int)uVar42 < *(int *)&(param_1->Color).field_0x18) {
              uVar31 = uVar37;
            }
            if ((uVar31 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            puVar1 = (undefined8 *)(*(longlong *)&(param_1->Color).field_0x10 + lVar33);
            local_568._0_8_ = *puVar1;
            local_568._8_8_ = puVar1[1];
            AugmentedDynamicMesh::SetVertexColor(pFVar26,iVar23,(TVector4<float> *)&local_568._s_0);
            uVar31 = 0;
            if ((int)uVar42 < *(int *)&(param_1->TangentV).field_0x18) {
              uVar31 = uVar37;
            }
            if ((uVar31 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar7 = *(longlong *)&(param_1->TangentV).field_0x10;
            local_4a0._s_0.X = (double)*(float *)(lVar7 + lVar38);
            local_4a0._s_0.Y = (double)*(float *)(lVar7 + 4 + lVar38);
            local_4a0._s_0.Z = (double)*(float *)(lVar7 + 8 + lVar38);
            UE::Geometry::operator*<double>
                      ((TVector<double> *)&local_488._s_0,(TQuaternion<double> *)&local_658._s_0,
                       (TVector<double> *)&local_4a0._s_0);
            fVar47 = (float)local_488._s_0.X;
            uVar31 = 0;
            if ((int)uVar42 < *(int *)&(param_1->TangentU).field_0x18) {
              uVar31 = uVar37;
            }
            fVar48 = (float)local_488._s_0.Y;
            fVar49 = (float)local_488._s_0.Z;
            if ((uVar31 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar7 = *(longlong *)&(param_1->TangentU).field_0x10;
            local_470._s_0.X = (double)*(float *)(lVar38 + lVar7);
            local_470._s_0.Y = (double)*(float *)(lVar38 + 4 + lVar7);
            local_470._s_0.Z = (double)*(float *)(lVar38 + 8 + lVar7);
            UE::Geometry::operator*<double>
                      ((TVector<double> *)&local_458._s_0,(TQuaternion<double> *)&local_658._s_0,
                       (TVector<double> *)&local_470._s_0);
            local_5b8._s_0.X = (float)local_458._s_0.X;
            local_548._s_0.Z = local_5d8;
            local_5b8._s_0.Y = (float)local_458._s_0.Y;
            local_5b8._s_0.Z = (float)local_458._s_0.Z;
            local_548._0_8_ = local_5e0;
            local_578._s_0.X = fVar47;
            local_578._s_0.Y = fVar48;
            local_578._s_0.Z = fVar49;
            AugmentedDynamicMesh::SetTangent
                      (pFVar26,iVar23,(TVector<float> *)&local_548._s_0,
                       (TVector<float> *)&local_5b8._s_0,(TVector<float> *)&local_578._s_0);
            uVar31 = 0;
            if (0 < iVar19) {
              pTVar34 = (TTypeCompatibleBytes<TManagedArray<UE::Math::TVector2<float>_>_const_*> *)
                        &local_1a8;
              do {
                uVar39 = 0;
                if ((int)uVar31 < local_1a8.Attributes.ArrayNum) {
                  uVar39 = ~uVar31 >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar7 = *(longlong *)pTVar34->Pad;
                uVar39 = 0;
                if ((int)uVar42 < *(int *)(lVar7 + 0x18)) {
                  uVar39 = uVar37;
                }
                if ((uVar39 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                AugmentedDynamicMesh::SetUV
                          (local_6b8,iVar23,
                           (TVector2<float>)
                           ((TVector2<float>_u_0 *)
                           (*(longlong *)(lVar7 + 0x10) + (longlong)(int)uVar42 * 8))->_s_0,uVar31);
                uVar31 = uVar31 + 1;
                pTVar34 = pTVar34 + 1;
                pFVar26 = local_6b8;
              } while ((int)uVar31 < iVar19);
            }
            lVar33 = lVar33 + 0x10;
            lVar38 = lVar38 + 0xc;
            uVar42 = uVar42 + 1;
            lVar36 = lVar36 + 1;
          } while (lVar36 < local_6b0);
        }
        uVar42 = 0;
        if ((int)uVar35 < *(int *)&(param_1->FaceStart).field_0x18) {
          uVar42 = uVar21;
        }
        if ((uVar42 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_6e4 = *(uint *)(*(longlong *)&(param_1->FaceStart).field_0x10 +
                             (longlong)(int)uVar35 * 4);
        uVar40 = (ulonglong)(int)local_6e4;
        uVar42 = 0;
        if ((int)uVar35 < *(int *)&(param_1->FaceStart).field_0x18) {
          uVar42 = uVar21;
        }
        if ((uVar42 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_528.Value =
             (int *)(longlong)
                    (*(int *)(*(longlong *)&(param_1->FaceStart).field_0x10 +
                             (longlong)(int)uVar35 * 4) + iVar4);
        if ((longlong)uVar40 < (longlong)local_528.Value) {
          bVar11 = (byte)local_6e4 & 0x1f;
          uVar35 = 1 << bVar11 | 1U >> 0x20 - bVar11;
          lVar36 = uVar40 * 0xc;
          uVar41 = uVar40;
          do {
            uVar21 = (uint)uVar41;
            if (local_690->bSkipInvisible == false) {
LAB_14c995160:
              uVar31 = ~uVar21;
              uVar42 = 0;
              if ((int)uVar21 < *(int *)&(param_1->Indices).field_0x18) {
                uVar42 = uVar31 >> 0x1f;
              }
              if ((uVar42 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar38 = *(longlong *)&(param_1->Indices).field_0x10;
              uVar2 = *(undefined8 *)(lVar36 + lVar38);
              local_680 = *(int *)(lVar36 + 8 + lVar38) - uVar22;
              local_688 = (int)uVar2;
              iStack_684 = (int)((ulonglong)uVar2 >> 0x20);
              local_678._s_0.A = local_688 - uVar22;
              local_678._s_0.B = iStack_684 - uVar22;
              _local_688 = CONCAT44(local_678._s_0.B,local_678._s_0.A);
              local_678._s_0.C = local_680;
              uVar42 = UE::Geometry::FDynamicMesh3::AppendTriangle
                                 (pFVar26,(FIndex3i *)&local_678._s_0,0);
              if (uVar42 == 0xfffffffe) {
                local_668._0_8_ = 0xffffffffffffffff;
                local_6b0 = 0;
                local_668._s_0.C = -1;
                do {
                  lVar38 = local_6b0;
                  uVar42 = UE::Geometry::FDynamicMesh3::AppendVertex
                                     (pFVar26,pFVar26,*(int *)((longlong)&local_678 + local_6b0));
                  uVar39 = uVar22 + *(int *)((longlong)&local_678 + lVar38);
                  uVar37 = ~uVar39 >> 0x1f;
                  uVar21 = 0;
                  if ((int)uVar39 < *(int *)&(param_1->TangentV).field_0x18) {
                    uVar21 = uVar37;
                  }
                  if ((uVar21 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  lVar38 = *(longlong *)&(param_1->TangentV).field_0x10;
                  lVar33 = (longlong)(int)uVar39;
                  local_440._s_0.X = (double)*(float *)(lVar38 + lVar33 * 0xc);
                  local_440._s_0.Y = (double)*(float *)(lVar38 + 4 + lVar33 * 0xc);
                  local_440._s_0.Z = (double)*(float *)(lVar38 + 8 + lVar33 * 0xc);
                  UE::Geometry::operator*<double>
                            ((TVector<double> *)&local_428._s_0,
                             (TQuaternion<double> *)&local_658._s_0,
                             (TVector<double> *)&local_440._s_0);
                  uVar21 = 0;
                  if ((int)uVar39 < *(int *)&(param_1->TangentU).field_0x18) {
                    uVar21 = uVar37;
                  }
                  fVar47 = (float)local_428._s_0.X;
                  fVar48 = (float)local_428._s_0.Y;
                  fVar49 = (float)local_428._s_0.Z;
                  if ((uVar21 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  lVar38 = *(longlong *)&(param_1->TangentU).field_0x10;
                  local_410._s_0.X = (double)*(float *)(lVar38 + lVar33 * 0xc);
                  local_410._s_0.Y = (double)*(float *)(lVar38 + 4 + lVar33 * 0xc);
                  local_410._s_0.Z = (double)*(float *)(lVar38 + 8 + lVar33 * 0xc);
                  UE::Geometry::operator*<double>
                            ((TVector<double> *)&local_3f8._s_0,
                             (TQuaternion<double> *)&local_658._s_0,
                             (TVector<double> *)&local_410._s_0);
                  local_588._s_0.X = (float)local_3f8._s_0.X;
                  local_588._s_0.Y = (float)local_3f8._s_0.Y;
                  local_588._s_0.Z = (float)local_3f8._s_0.Z;
                  if ((pFVar26->VertexNormals).bIsSet == false) {
                    uVar43 = (undefined4)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
                    uVar44 = (undefined4)
                             ((ulonglong)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_ >>
                             0x20);
                    local_5a0 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
                  }
                  else {
                    lVar38 = *(longlong *)
                              ((pFVar26->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar42 >> 9) * 8);
                    uVar2 = *(undefined8 *)(lVar38 + (ulonglong)(uVar42 & 0x1ff) * 0xc);
                    uVar43 = (undefined4)uVar2;
                    uVar44 = (undefined4)((ulonglong)uVar2 >> 0x20);
                    local_5a0 = *(float *)(lVar38 + 8 + (ulonglong)(uVar42 & 0x1ff) * 0xc);
                  }
                  local_5a8 = CONCAT44(uVar44,uVar43);
                  local_538._0_8_ = CONCAT44(uVar44,uVar43);
                  local_598._s_0.X = fVar47;
                  local_598._s_0.Y = fVar48;
                  local_598._s_0.Z = fVar49;
                  local_538._s_0.Z = local_5a0;
                  AugmentedDynamicMesh::SetTangent
                            (pFVar26,uVar42,(TVector<float> *)&local_538._s_0,
                             (TVector<float> *)&local_588._s_0,(TVector<float> *)&local_598._s_0);
                  uVar21 = 0;
                  if (0 < iVar19) {
                    pTVar34 = (TTypeCompatibleBytes<TManagedArray<UE::Math::TVector2<float>_>_const_*>
                               *)&local_1a8;
                    do {
                      uVar24 = 0;
                      if ((int)uVar21 < local_1a8.Attributes.ArrayNum) {
                        uVar24 = ~uVar21 >> 0x1f;
                      }
                      if ((uVar24 == 0) &&
                         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar20)) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      lVar38 = *(longlong *)pTVar34->Pad;
                      uVar24 = 0;
                      if ((int)uVar39 < *(int *)(lVar38 + 0x18)) {
                        uVar24 = uVar37;
                      }
                      if ((uVar24 == 0) &&
                         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar20)) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      AugmentedDynamicMesh::SetUV
                                (local_6b8,uVar42,
                                 (TVector2<float>)
                                 ((TVector2<float>_u_0 *)(*(longlong *)(lVar38 + 0x10) + lVar33 * 8)
                                 )->_s_0,uVar21);
                      uVar21 = uVar21 + 1;
                      pTVar34 = pTVar34 + 1;
                      pFVar26 = local_6b8;
                    } while ((int)uVar21 < iVar19);
                  }
                  *(uint *)((longlong)&local_668 + local_6b0) = uVar42;
                  local_6b0 = local_6b0 + 4;
                } while (local_6b0 < 0xc);
                uVar42 = UE::Geometry::FDynamicMesh3::AppendTriangle
                                   (pFVar26,(FIndex3i *)&local_668._s_0,0);
                uVar21 = local_6e4;
              }
              if (-1 < (int)uVar42) {
                if (local_690->bGenerateMeshToCollectionFaceMapping != false) {
                  local_4f8 = local_6a8;
                  local_4f0 = local_698;
                  local_6a8[0] = uVar42;
                  local_698[0] = uVar21;
                  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<int_const_&,int_const_&>_>
                            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                              *)&pFVar26[1].VertexUVs.TypedValue.Blocks.ArrayNum,&local_528,
                             (bool *)&local_4f8);
                }
                pFVar6 = (pFVar26->AttributeSet).Ptr;
                pFVar30 = (FDynamicMeshAttributeSet *)0x0;
                if (pFVar6 != (FDynamicMeshAttributeSet *)0x0) {
                  pFVar30 = pFVar6;
                }
                pTVar9 = (pFVar30->MaterialIDAttrib).Ptr;
                uVar37 = 0;
                if ((int)uVar21 < *(int *)&(param_1->MaterialID).field_0x18) {
                  uVar37 = uVar31 >> 0x1f;
                }
                if ((uVar37 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                *(undefined4 *)
                 (*(longlong *)(*(longlong *)&pTVar9->field_0x20 + (ulonglong)(uVar42 >> 9) * 8) +
                 (ulonglong)(uVar42 & 0x1ff) * 4) =
                     *(undefined4 *)(*(longlong *)&(param_1->MaterialID).field_0x10 + uVar40 * 4);
                if ((((int)uVar21 < 0) || (*(int *)&(param_1->Visible).field_0x28 <= (int)uVar21))
                   && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Index>=0 && Index<NumBits",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                           ,0x5c6,L""), bVar20)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                puVar8 = *(undefined1 **)&(param_1->Visible).field_0x20;
                puVar32 = &(param_1->Visible).field_0x10;
                if (puVar8 != (undefined1 *)0x0) {
                  puVar32 = puVar8;
                }
                lVar38 = (longlong)((int)(uVar21 + ((int)uVar21 >> 0x1f & 0x1fU)) >> 5);
                uVar31 = *(uint *)(puVar32 + lVar38 * 4);
                pFVar6 = (pFVar26->AttributeSet).Ptr;
                pFVar30 = (FDynamicMeshAttributeSet *)0x0;
                if (pFVar6 != (FDynamicMeshAttributeSet *)0x0) {
                  pFVar30 = pFVar6;
                }
                pTVar28 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                          ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                                  *)&pFVar30->GenericAttributes,
                                 AugmentedDynamicMesh::VisibleAttribName);
                if ((pTVar28 ==
                     (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                      *)0x0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Pair != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                        ,0x288,L""), bVar20)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                *(bool *)((ulonglong)(uVar42 & 0x1ff) +
                         *(longlong *)
                          (*(longlong *)(*(longlong *)&pTVar28->field_0x8 + 0x20) +
                          (ulonglong)(uVar42 >> 9) * 8)) = (uVar31 & uVar35) != 0;
                if ((((int)uVar21 < 0) || (*(int *)&(param_1->Internal).field_0x28 <= (int)uVar21))
                   && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Index>=0 && Index<NumBits",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                           ,0x5c6,L""), bVar20)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                puVar8 = *(undefined1 **)&(param_1->Internal).field_0x20;
                puVar32 = &(param_1->Internal).field_0x10;
                if (puVar8 != (undefined1 *)0x0) {
                  puVar32 = puVar8;
                }
                uVar31 = *(uint *)(puVar32 + lVar38 * 4);
                pFVar6 = (pFVar26->AttributeSet).Ptr;
                pFVar30 = (FDynamicMeshAttributeSet *)0x0;
                if (pFVar6 != (FDynamicMeshAttributeSet *)0x0) {
                  pFVar30 = pFVar6;
                }
                pTVar28 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                          ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                                  *)&pFVar30->GenericAttributes,
                                 AugmentedDynamicMesh::InternalAttribName);
                if ((pTVar28 ==
                     (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                      *)0x0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Pair != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                        ,0x288,L""), bVar20)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                *(bool *)((ulonglong)(uVar42 & 0x1ff) +
                         *(longlong *)
                          (*(longlong *)(*(longlong *)&pTVar28->field_0x8 + 0x20) +
                          (ulonglong)(uVar42 >> 9) * 8)) = (uVar31 & uVar35) != 0;
              }
            }
            else {
              if ((((int)uVar21 < 0) || (*(int *)&(param_1->Visible).field_0x28 <= (int)uVar21)) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5c6,L""), bVar20)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              puVar8 = *(undefined1 **)&(param_1->Visible).field_0x20;
              puVar32 = &(param_1->Visible).field_0x10;
              if (puVar8 != (undefined1 *)0x0) {
                puVar32 = puVar8;
              }
              uVar42 = uVar21;
              if ((int)uVar21 < 0) {
                uVar42 = uVar21 + 0x1f;
              }
              if ((*(uint *)(puVar32 + (longlong)((int)uVar42 >> 5) * 4) & uVar35) != 0)
              goto LAB_14c995160;
            }
            local_6e4 = uVar21 + 1;
            uVar41 = (ulonglong)local_6e4;
            lVar36 = lVar36 + 0xc;
            uVar35 = uVar35 << 1 | (uint)((int)uVar35 < 0);
            uVar40 = uVar40 + 1;
          } while ((longlong)uVar40 < (longlong)local_528.Value);
        }
        if (!param_5) {
          local_518[0].Mesh = pFVar26;
          UE::Geometry::FDynamicMeshEditor::RemoveIsolatedVertices(local_518);
        }
        if (pFVar26[1].VertexNormals.bIsSet == false) {
          pTVar29 = UE::Geometry::FDynamicMesh3::GetBounds(pFVar26,&local_2a0,true);
          pFVar5 = (FScriptContainerElement *)(pTVar29->Min).field0_0x0._s_0.Y;
          *(double *)&pFVar26[1].VertexColors.TypedValue = (pTVar29->Min).field0_0x0._s_0.X;
          pFVar26[1].VertexColors.TypedValue.Blocks.AllocatorInstance.Data = pFVar5;
          dVar18 = (pTVar29->Max).field0_0x0._s_0.X;
          *(double *)&pFVar26[1].VertexColors.TypedValue.Blocks.ArrayNum =
               (pTVar29->Min).field0_0x0._s_0.Z;
          *(double *)&pFVar26[1].VertexColors.bIsSet = dVar18;
          dVar18 = (pTVar29->Max).field0_0x0._s_0.Y;
          pFVar5 = (FScriptContainerElement *)(pTVar29->Max).field0_0x0._s_0.Z;
          pFVar26[1].VertexNormals.bIsSet = true;
          *(double *)&pFVar26[1].VertexUVs.TypedValue = dVar18;
          pFVar26[1].VertexUVs.TypedValue.Blocks.AllocatorInstance.Data = pFVar5;
        }
        dVar18 = *(double *)&pFVar26[1].VertexColors.TypedValue;
        uVar43 = SUB84(dVar18,0);
        uVar44 = (undefined4)((ulonglong)dVar18 >> 0x20);
        dVar3 = *(double *)&(local_690->Bounds).Min.field0_0x0;
        if (dVar3 <= dVar18) {
          uVar43 = SUB84(dVar3,0);
          uVar44 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        dVar18 = *(double *)((longlong)&(local_690->Bounds).Min.field0_0x0 + 8);
        uVar45 = SUB84(dVar18,0);
        uVar46 = (undefined4)((ulonglong)dVar18 >> 0x20);
        (local_690->Bounds).Min.field0_0x0._s_0.X = (double)CONCAT44(uVar44,uVar43);
        pFVar5 = pFVar26[1].VertexColors.TypedValue.Blocks.AllocatorInstance.Data;
        if ((double)pFVar5 <= dVar18) {
          uVar45 = SUB84(pFVar5,0);
          uVar46 = (undefined4)((ulonglong)pFVar5 >> 0x20);
        }
        dVar18 = *(double *)((longlong)&(local_690->Bounds).Min.field0_0x0 + 0x10);
        uVar43 = SUB84(dVar18,0);
        uVar44 = (undefined4)((ulonglong)dVar18 >> 0x20);
        (local_690->Bounds).Min.field0_0x0._s_0.Y = (double)CONCAT44(uVar46,uVar45);
        dVar3 = *(double *)&pFVar26[1].VertexColors.TypedValue.Blocks.ArrayNum;
        if (dVar3 <= dVar18) {
          uVar43 = SUB84(dVar3,0);
          uVar44 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (local_690->Bounds).Min.field0_0x0._s_0.Z = (double)CONCAT44(uVar44,uVar43);
        dVar18 = *(double *)&pFVar26[1].VertexColors.bIsSet;
        uVar43 = SUB84(dVar18,0);
        uVar44 = (undefined4)((ulonglong)dVar18 >> 0x20);
        dVar3 = *(double *)&(local_690->Bounds).Max.field0_0x0;
        if (dVar18 <= dVar3) {
          uVar43 = SUB84(dVar3,0);
          uVar44 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (local_690->Bounds).Max.field0_0x0._s_0.X = (double)CONCAT44(uVar44,uVar43);
        dVar18 = *(double *)&pFVar26[1].VertexUVs.TypedValue;
        uVar43 = SUB84(dVar18,0);
        uVar44 = (undefined4)((ulonglong)dVar18 >> 0x20);
        dVar3 = *(double *)((longlong)&(local_690->Bounds).Max.field0_0x0 + 8);
        if (dVar18 <= dVar3) {
          uVar43 = SUB84(dVar3,0);
          uVar44 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (local_690->Bounds).Max.field0_0x0._s_0.Y = (double)CONCAT44(uVar44,uVar43);
        pFVar5 = pFVar26[1].VertexUVs.TypedValue.Blocks.AllocatorInstance.Data;
        uVar43 = SUB84(pFVar5,0);
        uVar44 = (undefined4)((ulonglong)pFVar5 >> 0x20);
        dVar18 = *(double *)((longlong)&(local_690->Bounds).Max.field0_0x0 + 0x10);
        if ((double)pFVar5 <= dVar18) {
          uVar43 = SUB84(dVar18,0);
          uVar44 = (undefined4)((ulonglong)dVar18 >> 0x20);
        }
        (local_690->Bounds).Max.field0_0x0._s_0.Z = (double)CONCAT44(uVar44,uVar43);
        this = local_690;
      }
      local_600 = local_600 + 1;
    } while (local_600 != local_558);
  }
  return;
}

// FDynamicMeshCollection @ 14c9a1400

FDynamicMeshCollection * __thiscall
UE::PlanarCut::FDynamicMeshCollection::FDynamicMeshCollection
          (FDynamicMeshCollection *this,FGeometryCollection *param_1,
          TArrayView<int_const_,int> *param_2,TTransform<double> *param_3,bool param_4)

{
  TTransform<double> local_68;
  
  (this->Meshes).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meshes).Array.ArrayNum = 0;
  (this->Meshes).Array.ArrayMax = 0;
  (this->Bounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  local_68.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
  this->bSkipInvisible = false;
  this->bComponentSpaceTransforms = false;
  this->bGenerateMeshToCollectionFaceMapping = false;
  Init(this,param_1,(TManagedArray<UE::Math::TTransform<float>_> *)&param_1->_padding_,param_2,
       &local_68,param_4);
  return this;
}

// operator() @ 14c9addc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::PlanarCut::FDynamicMeshCollection::CutWithCellMeshes'::__l8::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  FDynamicMesh3 *pFVar3;
  double *pdVar4;
  longlong lVar5;
  FDynamicMesh3 *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FDynamicMesh3 *pFVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStackY_348 [32];
  longlong local_318 [2];
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  FMeshBoolean local_2d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_348;
  plVar1 = *(longlong **)((longlong)this + 8);
  lVar13 = (longlong)param_1;
  uVar12 = (uint)~param_1 >> 0x1f;
  uVar9 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar9 = uVar12;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  pFVar3 = *(FDynamicMesh3 **)(*plVar1 + lVar13 * 8);
  uVar9 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar9 = uVar12;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pdVar4 = *(double **)((longlong)this + 0x20);
  lVar5 = *plVar2;
  local_2f8 = pdVar4[2];
  dStack_2f0 = pdVar4[3];
  local_308 = *pdVar4;
  dStack_300 = pdVar4[1];
  local_2e8 = pdVar4[4];
  dStack_2e0 = pdVar4[5];
  pdVar4 = (double *)(lVar5 + lVar13 * 0x30);
  if (dStack_2f0 < *pdVar4 || dStack_2f0 == *pdVar4) {
    return;
  }
  if (*(double *)(lVar5 + 0x18 + lVar13 * 0x30) <= local_308) {
    return;
  }
  pdVar4 = (double *)(lVar5 + 8 + lVar13 * 0x30);
  if (local_2e8 < *pdVar4 || local_2e8 == *pdVar4) {
    return;
  }
  if (*(double *)(lVar5 + 0x20 + lVar13 * 0x30) <= dStack_300) {
    return;
  }
  pdVar4 = (double *)(lVar5 + 0x10 + lVar13 * 0x30);
  if (dStack_2e0 < *pdVar4 || dStack_2e0 == *pdVar4) {
    return;
  }
  if (*(double *)(lVar5 + 0x28 + lVar13 * 0x30) <= local_2f8) {
    return;
  }
  pFVar10 = ::operator_new(0x230);
  if (pFVar10 == (FDynamicMesh3 *)0x0) {
    pFVar10 = (FDynamicMesh3 *)0x0;
  }
  else {
    pFVar10 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(pFVar10);
  }
  plVar1 = *(longlong **)this;
  uVar9 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar9 = uVar12;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar1 = (longlong *)(*plVar1 + lVar13 * 8);
  if (plVar1 == local_318) {
    if (pFVar10 == (FDynamicMesh3 *)0x0) goto LAB_14c9adfa0;
    puVar11 = (undefined8 *)pFVar10->_padding_;
  }
  else {
    pFVar6 = (FDynamicMesh3 *)*plVar1;
    *plVar1 = (longlong)pFVar10;
    if (pFVar6 == (FDynamicMesh3 *)0x0) goto LAB_14c9adfa0;
    puVar11 = (undefined8 *)pFVar6->_padding_;
    pFVar10 = pFVar6;
  }
  (*(code *)*puVar11)(pFVar10,1);
LAB_14c9adfa0:
  plVar1 = *(longlong **)this;
  uVar9 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar9 = uVar12;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  UE::Geometry::FMeshBoolean::FMeshBoolean
            (&local_2d8,*(FDynamicMesh3 **)((longlong)this + 0x18),pFVar3,
             *(FDynamicMesh3 **)(*plVar1 + lVar13 * 8),
             (param_1 != *(int *)(*(longlong *)((longlong)this + 8) + 0x10)) + Difference);
  local_2d8.bSimplifyAlongNewEdges = true;
  local_2d8.PreserveUVsOnlyForMesh = 0;
  local_2d8.bWeldSharedEdges = false;
  local_2d8.bTrackAllNewEdges = true;
  UE::Geometry::FMeshBoolean::Compute(&local_2d8);
  UE::Geometry::FMeshBoolean::~FMeshBoolean(&local_2d8);
  return;
}

// operator() @ 14c9aea80

bool __thiscall
`UE::PlanarCut::FDynamicMeshCollection::SplitIslands'::__l6::<lambda_2>::operator()
          (void *this,int param_1,double param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  plVar2 = *(longlong **)this;
  uVar9 = (ulonglong)param_1;
  uVar1 = **(uint **)((longlong)this + 8);
  uVar7 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar7 = *(uint *)(*plVar2 + uVar9 * 4);
  while( true ) {
    if (uVar1 == uVar7) {
      return true;
    }
    uVar8 = (uint)uVar9;
    uVar6 = 0;
    if ((int)uVar8 < (int)plVar2[1]) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    *(uint *)(*plVar2 + (longlong)(int)uVar8 * 4) = uVar1;
    if (uVar8 == uVar7) {
      return true;
    }
    uVar9 = (ulonglong)uVar7;
    uVar6 = 0;
    if ((int)uVar7 < (int)plVar2[1]) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    uVar7 = *(uint *)(*plVar2 + (longlong)(int)uVar7 * 4);
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

// AddCollisionSamples @ 14c9b0af0

void __thiscall
UE::PlanarCut::FDynamicMeshCollection::AddCollisionSamples
          (FDynamicMeshCollection *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Meshes).Array.ArrayNum;
  uVar5 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      AugmentedDynamicMesh::AddCollisionSamplesPerComponent
                (*(FDynamicMesh3 **)((this->Meshes).Array.AllocatorInstance.Data + lVar6),param_1);
      iVar4 = (this->Meshes).Array.ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < iVar4);
  }
  return;
}

// AppendToCollection @ 14c9b3910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
UE::PlanarCut::FDynamicMeshCollection::AppendToCollection
          (TTransform<double> *param_1,FDynamicMesh3 *param_2,double param_3,int param_4,
          FString *param_5,FGeometryCollection *param_6,int param_7)

{
  undefined8 *puVar1;
  double *pdVar2;
  float *pfVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  FDynamicMeshAttributeSet *pFVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined8 uVar16;
  __m128 _Var17;
  __m128 _Var18;
  TVector2<float>_u_0 TVar19;
  bool bVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  TDynamicVector<UE::Math::TVector<float>,512> *pTVar27;
  TVector4<float> *pTVar28;
  __m128 *p_Var29;
  FDynamicMeshAttributeSet *pFVar30;
  undefined1 *puVar31;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar32;
  uint uVar33;
  longlong lVar34;
  uint uVar35;
  uint uVar36;
  longlong lVar37;
  ulonglong uVar38;
  char cVar39;
  uint uVar40;
  uint uVar41;
  int iVar42;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar43;
  longlong lVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
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
  double dVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  double dVar78;
  undefined1 auVar79 [16];
  double dVar86;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  double dVar87;
  double dVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  double dVar94;
  undefined4 uVar95;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  uint uVar96;
  double dVar97;
  undefined1 auVar98 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  double dVar105;
  double dVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  double dVar109;
  float fVar110;
  float fVar111;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auStackY_308 [32];
  uint local_2d4;
  char local_2d0;
  uint local_2cc;
  int local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  uint local_2a0;
  ulonglong local_298;
  TTransform<double> *local_290;
  uint local_288;
  int local_284;
  FGeometryCollection *local_280;
  undefined8 local_278;
  float local_270;
  FString *local_268;
  TVector<float>_u_0 local_260;
  TVector<float>_u_0 local_250;
  undefined8 local_240;
  int local_238;
  longlong local_230;
  int local_228 [2];
  TVector2<float>_u_0 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined1 local_1f0 [16];
  double local_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined1 local_190 [16];
  double local_180;
  undefined1 local_178 [16];
  double local_168;
  undefined1 local_160 [16];
  double local_150;
  TVector4<float> local_148;
  FLinearColor local_138;
  TArrayOfAttributesAccessor<TManagedArray<UE::Math::TVector2<float>_>,8> local_128;
  ulonglong local_e0;
  __m128 _Var99;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_268 = param_5;
  local_280 = param_6;
  lVar37 = (longlong)param_4;
  local_290 = param_1;
  if ((param_2->TriangleRefCounts).UsedCount == 0) {
    pFVar5 = (param_5->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    uVar33 = 0xffffffff;
  }
  else {
    bVar20 = UE::Geometry::FDynamicMesh3::IsCompact(param_2);
    if (!bVar20) {
      UE::Geometry::FDynamicMesh3::CompactInPlace(param_2,(FCompactMaps *)0x0);
    }
    if (0.0 < param_3) {
      AugmentedDynamicMesh::AddCollisionSamplesPerComponent(param_2,param_3);
    }
    (**(code **)(*(longlong *)&param_6->FaceStart + 0x60))();
    iVar21 = (**(code **)(*(longlong *)&param_6->Vertex + 0x60))();
    local_284 = iVar21;
    uVar22 = (**(code **)(*(longlong *)&param_6->Indices + 0x60))();
    local_2c0 = AugmentedDynamicMesh::NumEnabledUVChannels(param_2);
    if ((int)local_2c0 < 1) {
      bVar20 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5943927746286587244>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                          ,0xd6c,"UVLayerCount > 0");
      if (bVar20) {
        pcVar8 = (code *)swi(3);
        iVar21 = (*pcVar8)();
        return iVar21;
      }
      local_2c0 = 1;
    }
    local_2cc = FManagedArrayCollection::AddElements
                          ((FManagedArrayCollection *)param_6,1,FGeometryCollection::GeometryGroup);
    local_2d4 = FManagedArrayCollection::AddElements
                          ((FManagedArrayCollection *)param_6,1,FTransformCollection::TransformGroup
                          );
    iVar42 = (param_2->TriangleRefCounts).UsedCount;
    uVar33 = (param_2->VertexRefCounts).UsedCount;
    local_2bc = uVar33;
    if ((iVar42 < 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumTriangles > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                            ,0xd76,L""), bVar20)) {
      pcVar8 = (code *)swi(3);
      iVar21 = (*pcVar8)();
      return iVar21;
    }
    bVar20 = UE::Geometry::FDynamicMesh3::IsCompact(param_2);
    if ((!bVar20) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mesh.IsCompact()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                            ,0xd77,L""), bVar20)) {
      pcVar8 = (code *)swi(3);
      iVar21 = (*pcVar8)();
      return iVar21;
    }
    uVar23 = ~local_2cc >> 0x1f;
    uVar40 = 0;
    if ((int)local_2cc < *(int *)&(param_6->FaceCount).field_0x18) {
      uVar40 = uVar23;
    }
    if ((uVar40 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar8 = (code *)swi(3);
      iVar21 = (*pcVar8)();
      return iVar21;
    }
    local_2b8 = (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                 *)(longlong)(int)local_2cc;
    *(int *)(*(longlong *)&(param_6->FaceCount).field_0x10 + (longlong)local_2b8 * 4) = iVar42;
    uVar40 = 0;
    if ((int)local_2cc < *(int *)&(param_6->FaceStart).field_0x18) {
      uVar40 = uVar23;
    }
    if ((uVar40 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar8 = (code *)swi(3);
      iVar21 = (*pcVar8)();
      return iVar21;
    }
    uVar40 = local_2cc;
    *(undefined4 *)(*(longlong *)&(param_6->FaceStart).field_0x10 + (longlong)local_2b8 * 4) =
         uVar22;
    pTVar43 = (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
               *)(longlong)(int)local_2cc;
    uVar41 = 0;
    if ((int)local_2cc < *(int *)&(param_6->VertexCount).field_0x18) {
      uVar41 = uVar23;
    }
    pTVar32 = local_2b8;
    if ((uVar41 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       pTVar32 = pTVar43, bVar20)) {
      pcVar8 = (code *)swi(3);
      iVar21 = (*pcVar8)();
      return iVar21;
    }
    *(uint *)(*(longlong *)&(param_6->VertexCount).field_0x10 + (longlong)pTVar32 * 4) = uVar33;
    uVar41 = 0;
    if ((int)uVar40 < *(int *)&(param_6->VertexStart).field_0x18) {
      uVar41 = uVar23;
    }
    if ((uVar41 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       pTVar32 = pTVar43, bVar20)) {
      pcVar8 = (code *)swi(3);
      iVar21 = (*pcVar8)();
      return iVar21;
    }
    uVar41 = local_2d4;
    *(int *)(*(longlong *)&(param_6->VertexStart).field_0x10 + (longlong)pTVar32 * 4) = iVar21;
    uVar24 = 0;
    if ((int)uVar40 < *(int *)&(param_6->TransformIndex).field_0x18) {
      uVar24 = uVar23;
    }
    if ((uVar24 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       pTVar32 = pTVar43, bVar20)) {
      pcVar8 = (code *)swi(3);
      iVar21 = (*pcVar8)();
      return iVar21;
    }
    *(uint *)(*(longlong *)&(param_6->TransformIndex).field_0x10 + (longlong)pTVar32 * 4) = uVar41;
    lVar34 = (longlong)(int)local_2d4;
    uVar41 = 0;
    if ((int)local_2d4 < *(int *)&(param_6->TransformToGeometryIndex).field_0x18) {
      uVar41 = ~local_2d4 >> 0x1f;
    }
    if ((uVar41 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar8 = (code *)swi(3);
      iVar21 = (*pcVar8)();
      return iVar21;
    }
    *(uint *)(*(longlong *)&(param_6->TransformToGeometryIndex).field_0x10 + lVar34 * 4) = uVar40;
    if (-1 < param_4) {
      lVar34 = (longlong)(int)local_2d4;
      uVar40 = 0;
      uVar33 = uVar40;
      if ((int)local_2d4 < (int)param_6->_padding_) {
        uVar33 = ~local_2d4 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        iVar21 = (*pcVar8)();
        return iVar21;
      }
      iVar21 = (local_268->Data).ArrayNum;
      uVar33 = iVar21 - 1;
      if (iVar21 == 0) {
        uVar33 = uVar40;
      }
      ::FString::AssignRange
                ((FString *)(lVar34 * 0x10 + param_6->_padding_),
                 (wchar_t *)(local_268->Data).AllocatorInstance.Data,uVar33);
      uVar33 = (uint)~param_4 >> 0x1f;
      if (param_4 < (int)param_6->_padding_) {
        uVar40 = uVar33;
      }
      if ((uVar40 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        iVar21 = (*pcVar8)();
        return iVar21;
      }
      lVar34 = (longlong)(int)local_2d4;
      puVar1 = (undefined8 *)(param_6->_padding_ + lVar37 * 0x10);
      uVar4 = *puVar1;
      uVar16 = puVar1[1];
      uVar40 = 0;
      if ((int)local_2d4 < (int)param_6->_padding_) {
        uVar40 = ~local_2d4 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        iVar21 = (*pcVar8)();
        return iVar21;
      }
      lVar44 = (longlong)(int)local_2d4;
      puVar1 = (undefined8 *)(param_6->_padding_ + lVar34 * 0x10);
      *puVar1 = uVar4;
      puVar1[1] = uVar16;
      uVar40 = 0;
      if ((int)local_2d4 < (int)param_6->_padding_) {
        uVar40 = ~local_2d4 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        iVar21 = (*pcVar8)();
        return iVar21;
      }
      *(int *)(param_6->_padding_ + lVar44 * 4) = param_4;
      uVar40 = 0;
      if (param_4 < (int)param_6->_padding_) {
        uVar40 = uVar33;
      }
      if ((uVar40 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        iVar21 = (*pcVar8)();
        return iVar21;
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                 (lVar37 * 0x50 + param_6->_padding_),local_228,(bool *)&local_2d4);
      uVar40 = 0;
      if (param_4 < *(int *)&(param_6->SimulationType).field_0x18) {
        uVar40 = uVar33;
      }
      if ((uVar40 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        iVar21 = (*pcVar8)();
        return iVar21;
      }
      *(undefined4 *)(*(longlong *)&(param_6->SimulationType).field_0x10 + lVar37 * 4) = 2;
      uVar33 = local_2bc;
    }
    _Var18 = UE::Math::TTransform<float>::Identity.Scale3D;
    _Var17 = UE::Math::TTransform<float>::Identity.Translation;
    _Var99 = UE::Math::TTransform<float>::Identity.Rotation;
    lVar37 = (longlong)(int)local_2d4;
    uVar40 = 0;
    if ((int)local_2d4 < (int)param_6->_padding_) {
      uVar40 = ~local_2d4 >> 0x1f;
    }
    if ((uVar40 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar8 = (code *)swi(3);
      iVar21 = (*pcVar8)();
      return iVar21;
    }
    lVar34 = param_6->_padding_;
    lVar44 = (longlong)(int)local_2d4;
    *(__m128 *)(lVar34 + lVar37 * 0x30) = _Var99;
    *(__m128 *)(lVar34 + 0x10 + lVar37 * 0x30) = _Var17;
    *(__m128 *)(lVar34 + 0x20 + lVar37 * 0x30) = _Var18;
    uVar40 = 0;
    if ((int)local_2d4 < *(int *)&(param_6->SimulationType).field_0x18) {
      uVar40 = ~local_2d4 >> 0x1f;
    }
    if ((uVar40 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar8 = (code *)swi(3);
      iVar21 = (*pcVar8)();
      return iVar21;
    }
    *(undefined4 *)(*(longlong *)&(param_6->SimulationType).field_0x10 + lVar44 * 4) = 1;
    uVar25 = FManagedArrayCollection::AddElements
                       ((FManagedArrayCollection *)param_6,iVar42,FGeometryCollection::FacesGroup);
    local_2c4 = uVar25;
    uVar26 = FManagedArrayCollection::AddElements
                       ((FManagedArrayCollection *)param_6,uVar33,FGeometryCollection::VerticesGroup
                       );
    lVar37 = (longlong)(int)uVar26;
    local_288 = uVar26;
    FGeometryCollection::SetNumUVLayers(param_6,local_2c0);
    GeometryCollection::UV::FindActiveUVLayers(&local_128,(FManagedArrayCollection *)param_6);
    uVar24 = _UNK_15061cc8c;
    uVar41 = _UNK_15061cc88;
    uVar40 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar33 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    if (0 < (int)((param_2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_2->VertexRefCounts).RefCounts.CurBlockUsed)) {
      local_2a8 = lVar37 << 4;
      pTVar43 = (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                 *)(lVar37 * 0xc);
      local_2c8 = -uVar26;
      local_2bc = 0;
      local_218 = 0;
      uStack_210 = 0;
      do {
        auVar15._4_8_ = _Var99.m128_u64[1];
        auVar15._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
        auVar98._0_8_ = auVar15._0_8_ << 0x20;
        auVar98._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar98._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        local_298 = (ulonglong)(uVar26 + local_2c8 >> 9);
        uVar38 = (ulonglong)(local_2bc & 0x1ff);
        lVar34 = *(longlong *)((param_2->Vertices).Blocks.AllocatorInstance.Data + local_298 * 8);
        local_1f8 = *(double *)(lVar34 + 0x10 + uVar38 * 0x18);
        pdVar2 = (double *)(lVar34 + uVar38 * 0x18);
        local_208 = *pdVar2;
        dStack_200 = pdVar2[1];
        dVar62 = local_1f8 - (local_290->Translation).ZW.m128d_f64[0];
        dVar97 = (local_290->Rotation).XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar106 = (local_290->Rotation).XY.m128d_f64[1] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        uVar22 = (undefined4)((ulonglong)dVar106 >> 0x20);
        dVar78 = (local_290->Rotation).ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar105 = (local_290->Rotation).ZW.m128d_f64[1] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        auVar79._8_4_ = SUB84(dVar106,0);
        auVar79._0_8_ = dVar97;
        auVar79._12_4_ = uVar22;
        dVar86 = auVar79._8_8_;
        auVar89._8_4_ = SUB84(dVar106,0);
        auVar89._0_8_ = dVar97;
        auVar89._12_4_ = uVar22;
        auVar64._8_4_ = SUB84(dVar105,0);
        auVar64._0_8_ = dVar78;
        auVar64._12_4_ = (int)((ulonglong)dVar105 >> 0x20);
        auVar90 = blendpd(auVar89,auVar64,2);
        auVar47._8_4_ = SUB84(dVar78,0);
        auVar47._0_8_ = dVar86;
        auVar47._12_4_ = (int)((ulonglong)dVar78 >> 0x20);
        dVar88 = local_208 - (local_290->Translation).XY.m128d_f64[0];
        dVar94 = dStack_200 - (local_290->Translation).XY.m128d_f64[1];
        uVar22 = (undefined4)((ulonglong)dVar94 >> 0x20);
        auVar124._8_4_ = SUB84(dVar94,0);
        auVar124._0_8_ = dVar88;
        auVar124._12_4_ = uVar22;
        auVar63._8_4_ = SUB84(dVar94,0);
        auVar63._0_8_ = dVar88;
        auVar63._12_4_ = uVar22;
        auVar114._8_8_ = 0;
        auVar114._0_8_ = dVar62;
        auVar64 = blendpd(auVar63,auVar114,2);
        auVar125._0_8_ = auVar124._8_8_ * dVar97 - dVar86 * dVar88;
        auVar125._8_8_ = dVar62 * dVar106 - auVar47._8_8_ * dVar94;
        auVar65._0_8_ = auVar64._0_8_ * dVar78 - auVar90._0_8_ * dVar62;
        auVar65._8_8_ = auVar64._8_8_ * dVar105 - auVar90._8_8_ * 0.0;
        dVar109 = auVar125._8_8_ + auVar125._8_8_;
        dVar87 = auVar65._0_8_ + auVar65._0_8_;
        uVar22 = SUB84(dVar87,0);
        uVar95 = (undefined4)((ulonglong)dVar87 >> 0x20);
        auVar64 = blendpd(auVar125,auVar65,2);
        auVar112._8_4_ = uVar22;
        auVar112._0_8_ = dVar109;
        auVar112._12_4_ = uVar95;
        auVar48._8_4_ = uVar22;
        auVar48._0_8_ = dVar109;
        auVar48._12_4_ = uVar95;
        auVar107._8_4_ = uVar22;
        auVar107._0_8_ = dVar109;
        auVar107._12_4_ = uVar95;
        auVar126._0_8_ = auVar64._0_8_ + auVar64._0_8_;
        auVar126._8_8_ = auVar64._8_8_ + auVar64._8_8_;
        auVar64 = blendpd(auVar107,auVar126,2);
        auVar113._0_8_ = auVar112._8_8_ * dVar97 - dVar109 * dVar86;
        auVar113._8_8_ = auVar126._0_8_ * dVar106 - auVar48._8_8_ * dVar78;
        auVar49._8_4_ = SUB84(auVar126._8_8_,0);
        auVar49._0_8_ = auVar126._0_8_;
        auVar49._12_4_ = (int)((ulonglong)auVar126._8_8_ >> 0x20);
        auVar108._0_8_ = auVar64._0_8_ * dVar78 - auVar126._0_8_ * auVar90._0_8_;
        auVar108._8_8_ = auVar64._8_8_ * dVar105 - auVar49._8_8_ * auVar90._8_8_;
        auVar64 = *(undefined1 (*) [16])(local_290->Scale3D).ZW.m128d_f64;
        auVar100._8_8_ = auVar98._8_8_;
        auVar100._0_8_ = auVar64._0_8_;
        lVar34 = -(ulonglong)
                  ((double)CONCAT44(uVar40 & auVar64._4_4_,uVar33 & auVar64._0_4_) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        uVar36 = (uint)lVar34;
        uVar96 = (uint)((ulonglong)lVar34 >> 0x20);
        auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                        *(undefined1 (*) [16])(local_290->Scale3D).XY.m128d_f64);
        lVar34 = -(ulonglong)
                  ((double)CONCAT44(uVar40 & *(uint *)((longlong)(local_290->Scale3D).XY.m128d_f64 +
                                                      4),
                                    uVar33 & *(uint *)(local_290->Scale3D).XY.m128d_f64) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar44 = -(ulonglong)
                  ((double)CONCAT44(uVar24 & *(uint *)((longlong)(local_290->Scale3D).XY.m128d_f64 +
                                                      0xc),
                                    uVar41 & *(uint *)((local_290->Scale3D).XY.m128d_f64 + 1)) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        auVar90._8_4_ = SUB84(auVar113._8_8_,0);
        auVar90._0_8_ = auVar113._0_8_;
        auVar90._12_4_ = (int)((ulonglong)auVar113._8_8_ >> 0x20);
        dVar97 = (double)CONCAT44(~(uint)((ulonglong)lVar34 >> 0x20) & auVar64._4_4_,
                                  ~(uint)lVar34 & auVar64._0_4_) *
                 (dVar109 * dVar105 + dVar88 + auVar90._8_8_);
        dVar106 = (double)CONCAT44(~(uint)((ulonglong)lVar44 >> 0x20) & auVar64._12_4_,
                                   ~(uint)lVar44 & auVar64._8_4_) *
                  (dVar87 * dVar105 + dVar94 + auVar108._0_8_);
        local_1f0._8_4_ = SUB84(dVar106,0);
        local_1f0._0_8_ = dVar97;
        local_1f0._12_4_ = (int)((ulonglong)dVar106 >> 0x20);
        auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar100);
        uVar35 = ~uVar26 >> 0x1f;
        uVar25 = 0;
        if ((int)uVar26 < *(int *)&(param_6->Vertex).field_0x18) {
          uVar25 = uVar35;
        }
        auVar114 = blendpd(auVar113,auVar108,2);
        local_1e0 = (double)(CONCAT44(~uVar96 & auVar64._4_4_,~uVar36 & auVar64._0_4_) |
                            CONCAT44(uVar96 & local_218._4_4_,uVar36 & (uint)local_218)) *
                    (auVar126._0_8_ * dVar105 + dVar62 + auVar114._0_8_);
        fVar110 = (float)local_1e0;
        local_2b8 = pTVar43;
        local_2b0 = lVar37;
        local_2a0 = uVar35;
        if ((uVar25 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          iVar21 = (*pcVar8)();
          return iVar21;
        }
        lVar34 = *(longlong *)&(param_6->Vertex).field_0x10;
        *(float *)((longlong)pTVar43 + lVar34) = (float)dVar97;
        *(float *)((longlong)pTVar43 + 4 + lVar34) = (float)dVar106;
        *(float *)((longlong)pTVar43 + 8 + lVar34) = fVar110;
        if ((param_2->VertexNormals).bIsSet == false) {
          local_278 = CONCAT44(UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y,
                               UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X);
          local_270 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
          uVar22 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X;
        }
        else {
          pTVar27 = TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::GetValue
                              (&param_2->VertexNormals);
          lVar34 = *(longlong *)((pTVar27->Blocks).AllocatorInstance.Data + local_298 * 8);
          pfVar3 = (float *)(lVar34 + uVar38 * 0xc);
          uVar22 = *pfVar3;
          local_278 = *(undefined8 *)pfVar3;
          local_270 = *(float *)(lVar34 + 8 + uVar38 * 0xc);
        }
        uVar38 = 0;
        dVar78 = (double)(float)uVar22;
        dVar105 = (local_290->Rotation).XY.m128d_f64[0] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar109 = (local_290->Rotation).XY.m128d_f64[1] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar97 = (local_290->Rotation).ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar106 = (local_290->Rotation).ZW.m128d_f64[1] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        uVar22 = (undefined4)((ulonglong)dVar106 >> 0x20);
        local_1c8 = (double)local_270;
        uVar25 = 0;
        if ((int)uVar26 < *(int *)&(param_6->Normal).field_0x18) {
          uVar25 = uVar35;
        }
        auVar101._8_4_ = SUB84(dVar109,0);
        auVar101._0_8_ = dVar105;
        auVar101._12_4_ = (int)((ulonglong)dVar109 >> 0x20);
        auVar50._8_4_ = SUB84(dVar97,0);
        auVar50._0_8_ = dVar109;
        auVar50._12_4_ = (int)((ulonglong)dVar97 >> 0x20);
        auVar127._8_4_ = SUB84(dVar106,0);
        auVar127._0_8_ = dVar97;
        auVar127._12_4_ = uVar22;
        dVar87 = (double)local_278._4_4_;
        auVar9._8_4_ = SUB84(dVar106,0);
        auVar9._0_8_ = dVar97;
        auVar9._12_4_ = uVar22;
        auVar114 = blendpd(auVar101,auVar9,2);
        uVar22 = SUB84(dVar87,0);
        uVar95 = (undefined4)((ulonglong)dVar87 >> 0x20);
        auVar115._8_4_ = uVar22;
        auVar115._0_8_ = dVar78;
        auVar115._12_4_ = uVar95;
        auVar66._8_4_ = uVar22;
        auVar66._0_8_ = dVar78;
        auVar66._12_4_ = uVar95;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = local_1c8;
        auVar64 = blendpd(auVar66,auVar12,2);
        auVar116._0_8_ = auVar115._8_8_ * dVar105 - dVar109 * dVar78;
        auVar116._8_8_ = local_1c8 * dVar109 - auVar50._8_8_ * dVar87;
        auVar91._8_4_ = SUB84(auVar116._8_8_,0);
        auVar91._0_8_ = auVar116._0_8_;
        auVar91._12_4_ = (int)((ulonglong)auVar116._8_8_ >> 0x20);
        local_1d8._8_4_ = uVar22;
        local_1d8._0_8_ = dVar78;
        local_1d8._12_4_ = uVar95;
        auVar67._0_8_ = auVar64._0_8_ * dVar97 - auVar114._0_8_ * local_1c8;
        auVar67._8_8_ = auVar64._8_8_ * dVar106 - auVar114._8_8_ * 0.0;
        auVar64 = blendpd(auVar116,auVar67,2);
        dVar88 = auVar91._8_8_ + auVar91._8_8_;
        dVar94 = auVar67._0_8_ + auVar67._0_8_;
        auVar117._0_8_ = auVar64._0_8_ + auVar64._0_8_;
        auVar117._8_8_ = auVar64._8_8_ + auVar64._8_8_;
        uVar22 = SUB84(dVar94,0);
        auVar80._8_4_ = uVar22;
        auVar80._0_8_ = dVar88;
        uVar95 = (undefined4)((ulonglong)dVar94 >> 0x20);
        auVar80._12_4_ = uVar95;
        auVar51._8_4_ = uVar22;
        auVar51._0_8_ = dVar88;
        auVar51._12_4_ = uVar95;
        auVar68._8_4_ = uVar22;
        auVar68._0_8_ = dVar88;
        auVar68._12_4_ = uVar95;
        auVar64 = blendpd(auVar68,auVar117,2);
        auVar81._0_8_ = auVar80._8_8_ * dVar105 - dVar88 * dVar109;
        auVar81._8_8_ = auVar117._0_8_ * dVar109 - auVar51._8_8_ * dVar97;
        auVar52._8_4_ = SUB84(auVar117._8_8_,0);
        auVar52._0_8_ = auVar117._0_8_;
        auVar52._12_4_ = (int)((ulonglong)auVar117._8_8_ >> 0x20);
        auVar69._0_8_ = auVar64._0_8_ * dVar97 - auVar117._0_8_ * auVar114._0_8_;
        auVar69._8_8_ = auVar64._8_8_ * dVar106 - auVar52._8_8_ * auVar114._8_8_;
        auVar53._8_4_ = SUB84(auVar81._8_8_,0);
        auVar53._0_8_ = auVar81._0_8_;
        auVar53._12_4_ = (int)((ulonglong)auVar81._8_8_ >> 0x20);
        local_1c0 = dVar88 * auVar127._8_8_ + dVar78 + auVar53._8_8_;
        dStack_1b8 = dVar94 * dVar106 + dVar87 + auVar69._0_8_;
        auVar64 = blendpd(auVar81,auVar69,2);
        local_1b0 = auVar117._0_8_ * auVar127._8_8_ + local_1c8 + auVar64._0_8_;
        fVar110 = (float)local_1c0;
        fVar104 = (float)dStack_1b8;
        fVar111 = (float)local_1b0;
        if ((uVar25 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          iVar21 = (*pcVar8)();
          return iVar21;
        }
        uVar25 = local_2a0;
        lVar44 = local_2b0;
        lVar34 = *(longlong *)&(param_6->Normal).field_0x10;
        *(float *)((longlong)pTVar43 + lVar34) = fVar110;
        *(float *)((longlong)pTVar43 + 4 + lVar34) = fVar104;
        *(float *)((longlong)pTVar43 + 8 + lVar34) = fVar111;
        if (local_2c0 != 0) {
          local_298 = CONCAT44(local_298._4_4_,local_2c8 + uVar26);
          uVar45 = uVar38;
          iVar21 = local_2c8 + uVar26;
          do {
            uVar36 = (uint)uVar38;
            AugmentedDynamicMesh::GetUV(param_2,iVar21,(TVector2<float> *)&local_220._s_0,uVar36);
            TVar19 = local_220;
            uVar35 = 0;
            if ((int)uVar36 < local_128.Attributes.ArrayNum) {
              uVar35 = ~uVar36 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar8 = (code *)swi(3);
              iVar21 = (*pcVar8)();
              return iVar21;
            }
            local_230 = *(longlong *)local_128.Attributes.AllocatorInstance.InlineData[uVar45].Pad;
            uVar35 = 0;
            if ((int)uVar26 < *(int *)(local_230 + 0x18)) {
              uVar35 = uVar25;
            }
            if ((uVar35 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar8 = (code *)swi(3);
              iVar21 = (*pcVar8)();
              return iVar21;
            }
            uVar38 = (ulonglong)(uVar36 + 1);
            uVar45 = uVar45 + 1;
            *(TVector2<float>_u_0 *)(*(longlong *)(local_230 + 0x10) + lVar44 * 8) = TVar19;
            lVar37 = lVar44;
            param_6 = local_280;
            pTVar43 = local_2b8;
            iVar21 = (int)local_298;
          } while ((longlong)uVar45 < (longlong)(ulonglong)local_2c0);
        }
        AugmentedDynamicMesh::GetTangent
                  (param_2,local_2c8 + uVar26,(TVector<float> *)&local_260._s_0,
                   (TVector<float> *)&local_250._s_0);
        uVar25 = local_2a0;
        dVar78 = (local_290->Rotation).XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar105 = (local_290->Rotation).XY.m128d_f64[1] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar97 = (local_290->Rotation).ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar106 = (local_290->Rotation).ZW.m128d_f64[1] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        uVar22 = (undefined4)((ulonglong)dVar106 >> 0x20);
        uVar35 = 0;
        if ((int)uVar26 < *(int *)&(param_6->TangentU).field_0x18) {
          uVar35 = local_2a0;
        }
        auVar92._8_4_ = SUB84(dVar105,0);
        auVar92._0_8_ = dVar78;
        uVar95 = (undefined4)((ulonglong)dVar105 >> 0x20);
        auVar92._12_4_ = uVar95;
        auVar102._8_4_ = SUB84(dVar105,0);
        auVar102._0_8_ = dVar78;
        auVar102._12_4_ = uVar95;
        auVar128._8_4_ = SUB84(dVar106,0);
        auVar128._0_8_ = dVar97;
        auVar128._12_4_ = uVar22;
        local_198 = (double)local_260._s_0.Z;
        dVar88 = (double)local_260._s_0.X;
        dVar94 = (double)local_260._s_0.Y;
        auVar10._8_4_ = SUB84(dVar106,0);
        auVar10._0_8_ = dVar97;
        auVar10._12_4_ = uVar22;
        auVar114 = blendpd(auVar102,auVar10,2);
        uVar22 = SUB84(dVar94,0);
        uVar95 = (undefined4)((ulonglong)dVar94 >> 0x20);
        auVar118._8_4_ = uVar22;
        auVar118._0_8_ = dVar88;
        auVar118._12_4_ = uVar95;
        auVar70._8_4_ = uVar22;
        auVar70._0_8_ = dVar88;
        auVar70._12_4_ = uVar95;
        auVar54._8_4_ = uVar22;
        auVar54._0_8_ = dVar88;
        auVar54._12_4_ = uVar95;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = local_198;
        auVar64 = blendpd(auVar70,auVar13,2);
        auVar119._0_8_ = auVar118._8_8_ * dVar78 - dVar88 * auVar92._8_8_;
        auVar119._8_8_ = local_198 * dVar105 - auVar54._8_8_ * dVar97;
        local_1a8._8_4_ = uVar22;
        local_1a8._0_8_ = dVar88;
        local_1a8._12_4_ = uVar95;
        auVar71._0_8_ = auVar64._0_8_ * dVar97 - local_198 * auVar114._0_8_;
        auVar71._8_8_ = auVar64._8_8_ * dVar106 - auVar114._8_8_ * 0.0;
        auVar64 = blendpd(auVar119,auVar71,2);
        dVar109 = auVar119._8_8_ + auVar119._8_8_;
        dVar87 = auVar71._0_8_ + auVar71._0_8_;
        uVar22 = SUB84(dVar87,0);
        uVar95 = (undefined4)((ulonglong)dVar87 >> 0x20);
        auVar120._0_8_ = auVar64._0_8_ + auVar64._0_8_;
        auVar120._8_8_ = auVar64._8_8_ + auVar64._8_8_;
        auVar82._8_4_ = uVar22;
        auVar82._0_8_ = dVar109;
        auVar82._12_4_ = uVar95;
        auVar55._8_4_ = uVar22;
        auVar55._0_8_ = dVar109;
        auVar55._12_4_ = uVar95;
        auVar72._8_4_ = uVar22;
        auVar72._0_8_ = dVar109;
        auVar72._12_4_ = uVar95;
        auVar64 = blendpd(auVar72,auVar120,2);
        auVar83._0_8_ = auVar82._8_8_ * dVar78 - dVar109 * auVar92._8_8_;
        auVar83._8_8_ = auVar120._0_8_ * dVar105 - auVar55._8_8_ * dVar97;
        auVar56._8_4_ = SUB84(auVar120._8_8_,0);
        auVar56._0_8_ = auVar120._0_8_;
        auVar56._12_4_ = (int)((ulonglong)auVar120._8_8_ >> 0x20);
        auVar73._0_8_ = auVar64._0_8_ * dVar97 - auVar120._0_8_ * auVar114._0_8_;
        auVar73._8_8_ = auVar64._8_8_ * dVar106 - auVar56._8_8_ * auVar114._8_8_;
        auVar57._8_4_ = SUB84(auVar83._8_8_,0);
        auVar57._0_8_ = auVar83._0_8_;
        auVar57._12_4_ = (int)((ulonglong)auVar83._8_8_ >> 0x20);
        dVar97 = dVar109 * auVar128._8_8_ + dVar88 + auVar57._8_8_;
        dVar106 = dVar87 * dVar106 + dVar94 + auVar73._0_8_;
        auVar64 = blendpd(auVar83,auVar73,2);
        local_180 = auVar120._0_8_ * auVar128._8_8_ + local_198 + auVar64._0_8_;
        local_190._8_4_ = SUB84(dVar106,0);
        local_190._0_8_ = dVar97;
        local_190._12_4_ = (int)((ulonglong)dVar106 >> 0x20);
        fVar110 = (float)local_180;
        if ((uVar35 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          iVar21 = (*pcVar8)();
          return iVar21;
        }
        lVar34 = *(longlong *)&(param_6->TangentU).field_0x10;
        *(float *)(lVar34 + lVar37 * 0xc) = (float)dVar97;
        *(float *)(lVar34 + 4 + lVar37 * 0xc) = (float)dVar106;
        *(float *)(lVar34 + 8 + lVar37 * 0xc) = fVar110;
        dVar78 = (local_290->Rotation).XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar105 = (local_290->Rotation).XY.m128d_f64[1] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar97 = (local_290->Rotation).ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar106 = (local_290->Rotation).ZW.m128d_f64[1] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        uVar22 = (undefined4)((ulonglong)dVar106 >> 0x20);
        uVar35 = 0;
        if ((int)uVar26 < *(int *)&(param_6->TangentV).field_0x18) {
          uVar35 = uVar25;
        }
        auVar93._8_4_ = SUB84(dVar105,0);
        auVar93._0_8_ = dVar78;
        uVar95 = (undefined4)((ulonglong)dVar105 >> 0x20);
        auVar93._12_4_ = uVar95;
        auVar103._8_4_ = SUB84(dVar105,0);
        auVar103._0_8_ = dVar78;
        auVar103._12_4_ = uVar95;
        auVar129._8_4_ = SUB84(dVar106,0);
        auVar129._0_8_ = dVar97;
        auVar129._12_4_ = uVar22;
        local_168 = (double)local_250._s_0.Z;
        dVar88 = (double)local_250._s_0.X;
        dVar94 = (double)local_250._s_0.Y;
        auVar11._8_4_ = SUB84(dVar106,0);
        auVar11._0_8_ = dVar97;
        auVar11._12_4_ = uVar22;
        auVar114 = blendpd(auVar103,auVar11,2);
        uVar22 = SUB84(dVar94,0);
        uVar95 = (undefined4)((ulonglong)dVar94 >> 0x20);
        auVar121._8_4_ = uVar22;
        auVar121._0_8_ = dVar88;
        auVar121._12_4_ = uVar95;
        auVar74._8_4_ = uVar22;
        auVar74._0_8_ = dVar88;
        auVar74._12_4_ = uVar95;
        auVar58._8_4_ = uVar22;
        auVar58._0_8_ = dVar88;
        auVar58._12_4_ = uVar95;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = local_168;
        auVar64 = blendpd(auVar74,auVar14,2);
        auVar122._0_8_ = auVar121._8_8_ * dVar78 - dVar88 * auVar93._8_8_;
        auVar122._8_8_ = local_168 * dVar105 - auVar58._8_8_ * dVar97;
        local_178._8_4_ = uVar22;
        local_178._0_8_ = dVar88;
        local_178._12_4_ = uVar95;
        auVar75._0_8_ = auVar64._0_8_ * dVar97 - local_168 * auVar114._0_8_;
        auVar75._8_8_ = auVar64._8_8_ * dVar106 - auVar114._8_8_ * 0.0;
        auVar64 = blendpd(auVar122,auVar75,2);
        dVar109 = auVar122._8_8_ + auVar122._8_8_;
        dVar87 = auVar75._0_8_ + auVar75._0_8_;
        uVar22 = SUB84(dVar87,0);
        uVar95 = (undefined4)((ulonglong)dVar87 >> 0x20);
        auVar123._0_8_ = auVar64._0_8_ + auVar64._0_8_;
        auVar123._8_8_ = auVar64._8_8_ + auVar64._8_8_;
        auVar84._8_4_ = uVar22;
        auVar84._0_8_ = dVar109;
        auVar84._12_4_ = uVar95;
        auVar59._8_4_ = uVar22;
        auVar59._0_8_ = dVar109;
        auVar59._12_4_ = uVar95;
        auVar76._8_4_ = uVar22;
        auVar76._0_8_ = dVar109;
        auVar76._12_4_ = uVar95;
        auVar64 = blendpd(auVar76,auVar123,2);
        auVar85._0_8_ = auVar84._8_8_ * dVar78 - dVar109 * auVar93._8_8_;
        auVar85._8_8_ = auVar123._0_8_ * dVar105 - auVar59._8_8_ * dVar97;
        auVar60._8_4_ = SUB84(auVar123._8_8_,0);
        auVar60._0_8_ = auVar123._0_8_;
        auVar60._12_4_ = (int)((ulonglong)auVar123._8_8_ >> 0x20);
        auVar77._0_8_ = auVar64._0_8_ * dVar97 - auVar123._0_8_ * auVar114._0_8_;
        auVar77._8_8_ = auVar64._8_8_ * dVar106 - auVar60._8_8_ * auVar114._8_8_;
        auVar61._8_4_ = SUB84(auVar85._8_8_,0);
        auVar61._0_8_ = auVar85._0_8_;
        auVar61._12_4_ = (int)((ulonglong)auVar85._8_8_ >> 0x20);
        dVar97 = dVar109 * auVar129._8_8_ + dVar88 + auVar61._8_8_;
        dVar106 = dVar87 * dVar106 + dVar94 + auVar77._0_8_;
        auVar64 = blendpd(auVar85,auVar77,2);
        local_150 = auVar123._0_8_ * auVar129._8_8_ + local_168 + auVar64._0_8_;
        local_160._8_4_ = SUB84(dVar106,0);
        local_160._0_8_ = dVar97;
        local_160._12_4_ = (int)((ulonglong)dVar106 >> 0x20);
        fVar110 = (float)local_150;
        if ((uVar35 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          iVar21 = (*pcVar8)();
          return iVar21;
        }
        lVar34 = *(longlong *)&(param_6->TangentV).field_0x10;
        *(float *)(lVar34 + lVar37 * 0xc) = (float)dVar97;
        *(float *)(lVar34 + 4 + lVar37 * 0xc) = (float)dVar106;
        *(float *)(lVar34 + 8 + lVar37 * 0xc) = fVar110;
        pTVar28 = AugmentedDynamicMesh::GetVertexColor(&local_148,param_2,local_2c8 + uVar26);
        p_Var29 = (__m128 *)FLinearColor::FLinearColor(&local_138,pTVar28);
        _Var99 = *p_Var29;
        uVar35 = 0;
        if ((int)uVar26 < *(int *)&(param_6->Color).field_0x18) {
          uVar35 = uVar25;
        }
        if ((uVar35 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          iVar21 = (*pcVar8)();
          return iVar21;
        }
        uVar35 = local_2d4;
        *(__m128 *)(local_2a8 + *(longlong *)&(param_6->Color).field_0x10) = _Var99;
        uVar36 = 0;
        if ((int)uVar26 < *(int *)&(param_6->BoneMap).field_0x18) {
          uVar36 = uVar25;
        }
        if ((uVar36 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          iVar21 = (*pcVar8)();
          return iVar21;
        }
        uVar26 = uVar26 + 1;
        local_2a8 = local_2a8 + 0x10;
        pTVar43 = (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                   *)((longlong)pTVar43 + 0xc);
        *(uint *)(*(longlong *)&(param_6->BoneMap).field_0x10 + lVar37 * 4) = uVar35;
        lVar37 = lVar37 + 1;
        local_2bc = local_2bc + 1;
        uVar25 = local_2c4;
        local_2b8 = pTVar43;
        local_2b0 = lVar37;
      } while ((int)(local_2c8 + uVar26) <
               (int)((param_2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                    (param_2->VertexRefCounts).RefCounts.CurBlockUsed));
    }
    if (0 < (int)((param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_2->TriangleRefCounts).RefCounts.CurBlockUsed)) {
      local_2b0 = (longlong)(int)uVar25 * 0xc;
      local_2a8 = (longlong)(int)uVar25 * 4;
      local_298 = CONCAT44(local_298._4_4_,-uVar25);
      iVar21 = -uVar25;
      do {
        pFVar6 = (param_2->AttributeSet).Ptr;
        pFVar30 = (FDynamicMeshAttributeSet *)0x0;
        if (pFVar6 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar30 = pFVar6;
        }
        pTVar43 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                          *)&pFVar30->GenericAttributes,AugmentedDynamicMesh::VisibleAttribName);
        if ((pTVar43 ==
             (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
              *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x27b,L""), bVar20)) {
          pcVar8 = (code *)swi(3);
          iVar21 = (*pcVar8)();
          return iVar21;
        }
        uVar38 = (ulonglong)(iVar21 + uVar25 >> 9);
        uVar45 = (ulonglong)(iVar21 + uVar25 & 0x1ff);
        local_2d0 = *(char *)(uVar45 + *(longlong *)
                                        (*(longlong *)(*(longlong *)&pTVar43->field_0x8 + 0x20) +
                                        uVar38 * 8));
        if ((((int)uVar25 < 0) || (*(int *)&(param_6->Visible).field_0x28 <= (int)uVar25)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar20)) {
          pcVar8 = (code *)swi(3);
          iVar21 = (*pcVar8)();
          return iVar21;
        }
        puVar7 = *(undefined1 **)&(param_6->Visible).field_0x20;
        puVar31 = &(param_6->Visible).field_0x10;
        if (puVar7 != (undefined1 *)0x0) {
          puVar31 = puVar7;
        }
        uVar33 = 1 << ((byte)uVar25 & 0x1f);
        local_280 = (FGeometryCollection *)
                    (longlong)((int)(uVar25 + ((int)uVar25 >> 0x1f & 0x1fU)) >> 5);
        if (local_2d0 == '\0') {
          uVar40 = *(uint *)(puVar31 + (longlong)local_280 * 4) & ~uVar33;
        }
        else {
          uVar40 = *(uint *)(puVar31 + (longlong)local_280 * 4) | uVar33;
        }
        *(uint *)(puVar31 + (longlong)local_280 * 4) = uVar40;
        pFVar6 = (param_2->AttributeSet).Ptr;
        pFVar30 = (FDynamicMeshAttributeSet *)0x0;
        if (pFVar6 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar30 = pFVar6;
        }
        uVar46 = (ulonglong)(iVar21 + uVar25 & 0x1ff);
        local_2c4 = *(int *)(*(longlong *)
                              (*(longlong *)&((pFVar30->MaterialIDAttrib).Ptr)->field_0x20 +
                              uVar38 * 8) + uVar46 * 4);
        if ((int)local_2c4 < 0) {
          cVar39 = '\x01';
        }
        else {
          local_2b8 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                              *)&pFVar6->GenericAttributes,AugmentedDynamicMesh::InternalAttribName)
          ;
          if ((local_2b8 ==
               (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                *)0x0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x27b,L""), bVar20)) {
            pcVar8 = (code *)swi(3);
            iVar21 = (*pcVar8)();
            return iVar21;
          }
          cVar39 = *(char *)(uVar45 + *(longlong *)
                                       (*(longlong *)(*(longlong *)&local_2b8->field_0x8 + 0x20) +
                                       uVar38 * 8));
        }
        if ((((int)uVar25 < 0) || (*(int *)&(param_6->Internal).field_0x28 <= (int)uVar25)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar20)) {
          pcVar8 = (code *)swi(3);
          iVar21 = (*pcVar8)();
          return iVar21;
        }
        puVar7 = *(undefined1 **)&(param_6->Internal).field_0x20;
        puVar31 = &(param_6->Internal).field_0x10;
        if (puVar7 != (undefined1 *)0x0) {
          puVar31 = puVar7;
        }
        if (cVar39 == '\0') {
          uVar33 = *(uint *)(puVar31 + (longlong)local_280 * 4) & ~uVar33;
        }
        else {
          uVar33 = *(uint *)(puVar31 + (longlong)local_280 * 4) | uVar33;
        }
        *(uint *)(puVar31 + (longlong)local_280 * 4) = uVar33;
        uVar33 = 0;
        if ((int)uVar25 < *(int *)&(param_6->MaterialID).field_0x18) {
          uVar33 = ~uVar25 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          iVar21 = (*pcVar8)();
          return iVar21;
        }
        lVar37 = local_2a8;
        if ((int)local_2c4 < 0) {
          local_2c4 = param_7;
        }
        *(uint *)(local_2a8 + *(longlong *)&(param_6->MaterialID).field_0x10) = local_2c4;
        lVar34 = *(longlong *)((param_2->Triangles).Blocks.AllocatorInstance.Data + uVar38 * 8);
        local_238 = *(int *)(lVar34 + 8 + uVar46 * 0xc);
        local_240 = *(undefined8 *)(lVar34 + uVar46 * 0xc);
        local_2c4 = local_238 + local_288;
        iVar21 = (int)local_240 + local_288;
        iVar42 = (int)((ulonglong)local_240 >> 0x20) + local_288;
        uVar33 = 0;
        if ((int)uVar25 < *(int *)&(param_6->Indices).field_0x18) {
          uVar33 = ~uVar25 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          iVar21 = (*pcVar8)();
          return iVar21;
        }
        uVar25 = uVar25 + 1;
        lVar34 = *(longlong *)&(param_6->Indices).field_0x10;
        local_2a8 = lVar37 + 4;
        *(int *)(local_2b0 + lVar34) = iVar21;
        *(int *)(local_2b0 + 4 + lVar34) = iVar42;
        *(uint *)(local_2b0 + 8 + lVar34) = local_2c4;
        local_2b0 = local_2b0 + 0xc;
        iVar21 = (int)local_298;
      } while ((int)((int)local_298 + uVar25) <
               (int)((param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                    (param_2->TriangleRefCounts).RefCounts.CurBlockUsed));
    }
    iVar21 = (**(code **)(*(longlong *)&param_6->BoundingBox + 0x60))();
    uVar33 = local_2cc;
    if (iVar21 != 0) {
      lVar37 = (longlong)(int)local_2cc;
      uVar40 = 0;
      if ((int)local_2cc < *(int *)&(param_6->BoundingBox).field_0x18) {
        uVar40 = uVar23;
      }
      if ((uVar40 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        iVar21 = (*pcVar8)();
        return iVar21;
      }
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      lVar34 = *(longlong *)&(param_6->BoundingBox).field_0x10;
      lVar37 = lVar37 * 0x38;
      pdVar2 = (double *)(lVar34 + 0x18 + lVar37);
      *pdVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pdVar2[1] = (double)uVar4;
      *(double *)(lVar34 + 0x28 + lVar37) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      puVar1 = (undefined8 *)(lVar34 + 0x18 + lVar37);
      uVar16 = puVar1[1];
      *(undefined1 *)(lVar34 + 0x30 + lVar37) = 0;
      uVar4 = *(undefined8 *)(lVar34 + 0x28 + lVar37);
      *(undefined8 *)(lVar34 + lVar37) = *puVar1;
      ((undefined8 *)(lVar34 + lVar37))[1] = uVar16;
      *(undefined8 *)(lVar34 + 0x10 + lVar37) = uVar4;
      iVar21 = (**(code **)(*(longlong *)&param_6->Vertex + 0x60))(&param_6->Vertex);
      uVar38 = (ulonglong)local_284;
      if (local_284 < iVar21) {
        lVar34 = uVar38 * 0xc;
        do {
          uVar41 = (uint)uVar38;
          uVar40 = 0;
          if ((int)uVar41 < *(int *)&(param_6->Vertex).field_0x18) {
            uVar40 = ~uVar41 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar8 = (code *)swi(3);
            iVar21 = (*pcVar8)();
            return iVar21;
          }
          lVar44 = *(longlong *)&(param_6->Vertex).field_0x10;
          dVar97 = (double)*(float *)(lVar34 + lVar44);
          uVar40 = 0;
          if ((int)uVar33 < *(int *)&(param_6->BoundingBox).field_0x18) {
            uVar40 = uVar23;
          }
          dVar106 = (double)*(float *)(lVar34 + 4 + lVar44);
          dVar78 = (double)*(float *)(lVar34 + 8 + lVar44);
          if ((uVar40 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar8 = (code *)swi(3);
            iVar21 = (*pcVar8)();
            return iVar21;
          }
          lVar44 = *(longlong *)&(param_6->BoundingBox).field_0x10;
          if (*(char *)(lVar37 + 0x30 + lVar44) == '\0') {
            *(double *)(lVar37 + 0x18 + lVar44) = dVar97;
            *(double *)(lVar37 + 0x20 + lVar44) = dVar106;
            *(double *)(lVar37 + 0x28 + lVar44) = dVar78;
            puVar1 = (undefined8 *)(lVar37 + 0x18 + lVar44);
            uVar16 = puVar1[1];
            *(undefined1 *)(lVar37 + 0x30 + lVar44) = 1;
            uVar4 = *(undefined8 *)(lVar37 + 0x28 + lVar44);
            *(undefined8 *)(lVar37 + lVar44) = *puVar1;
            ((undefined8 *)(lVar37 + lVar44))[1] = uVar16;
            *(undefined8 *)(lVar37 + 0x10 + lVar44) = uVar4;
          }
          else {
            dVar105 = dVar97;
            if (*(double *)(lVar37 + lVar44) <= dVar97) {
              dVar105 = *(double *)(lVar37 + lVar44);
            }
            dVar109 = *(double *)(lVar37 + 8 + lVar44);
            dVar87 = dVar106;
            if (dVar109 <= dVar106) {
              dVar87 = dVar109;
            }
            dVar109 = *(double *)(lVar37 + 0x18 + lVar44);
            if (dVar97 <= dVar109) {
              dVar97 = dVar109;
            }
            dVar109 = *(double *)(lVar37 + 0x20 + lVar44);
            if (dVar106 <= dVar109) {
              dVar106 = dVar109;
            }
            *(double *)(lVar37 + lVar44) = dVar105;
            dVar105 = *(double *)(lVar37 + 0x10 + lVar44);
            dVar109 = dVar78;
            if (dVar105 <= dVar78) {
              dVar109 = dVar105;
            }
            dVar105 = *(double *)(lVar37 + 0x28 + lVar44);
            if (dVar78 <= dVar105) {
              dVar78 = dVar105;
            }
            *(double *)(lVar37 + 8 + lVar44) = dVar87;
            *(double *)(lVar37 + 0x18 + lVar44) = dVar97;
            *(double *)(lVar37 + 0x20 + lVar44) = dVar106;
            *(double *)(lVar37 + 0x10 + lVar44) = dVar109;
            *(double *)(lVar37 + 0x28 + lVar44) = dVar78;
          }
          uVar38 = (ulonglong)(uVar41 + 1);
          lVar34 = lVar34 + 0xc;
          iVar21 = (**(code **)(*(longlong *)&param_6->Vertex + 0x60))(&param_6->Vertex);
        } while ((int)(uVar41 + 1) < iVar21);
      }
    }
    pFVar5 = (local_268->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
  }
  return uVar33;
}

// CutWithCellMeshes @ 14c9c5800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::PlanarCut::FDynamicMeshCollection::CutWithCellMeshes
          (FDynamicMeshCollection *this,FInternalSurfaceMaterials *param_1,
          TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *param_2,FCellMeshes *param_3,
          bool param_4,FGeometryCollection *param_5,bool param_6,double param_7)

{
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  TAxisAlignedBox3<double> *pTVar12;
  longlong lVar13;
  FDynamicMesh3 *this_00;
  FDynamicMesh3 *pFVar14;
  FDynamicMeshAttributeSet *pFVar15;
  ulonglong uVar16;
  <lambda_1> <Var17;
  uint uVar18;
  ulonglong uVar19;
  FGeometryCollection *pFVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  FScriptContainerElement *pFVar23;
  FDynamicMesh3 *pFVar24;
  undefined1 auStackY_468 [32];
  <lambda_1> local_418 [4];
  int local_414;
  uint local_410 [2];
  ForAnyElementType local_408;
  undefined8 local_400;
  undefined1 local_3f8 [4];
  int local_3f4;
  int local_3f0 [2];
  ForAnyElementType local_3e8;
  undefined8 local_3e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_3d8;
  int local_3c8;
  FDynamicMesh3 *local_3c0;
  uint local_3b8 [2];
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> local_3b0;
  FGeometryCollection *local_3a0;
  int local_398 [2];
  FCellMeshes *local_390;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FInternalSurfaceMaterials *local_348;
  FDynamicMeshCollection *local_340;
  FScriptContainerElement *local_338;
  int *piStack_330;
  undefined8 local_328;
  FScriptContainerElement *local_320;
  FScriptContainerElement *pFStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  FScriptContainerElement *pFStack_2f8;
  int local_2f0;
  undefined1 local_2ec [8];
  undefined1 local_2e4 [8];
  undefined1 local_2dc [12];
  FString local_2d0;
  FString local_2c0;
  TArrayView<std::nullptr_t,int> local_2b0;
  code *local_2a0;
  ForAnyElementType **local_298;
  FString local_290;
  FString local_280;
  uint *local_270;
  int *local_268;
  int *local_260;
  int *local_258;
  int *local_250;
  uint *local_248;
  FString local_240;
  FString local_230;
  uint *local_220;
  int *local_218;
  int *local_210;
  uint *local_208;
  ForAnyElementType *local_200;
  FCellMeshes *local_1f8;
  ForAnyElementType *local_1f0;
  FDynamicMesh3 *local_1e8;
  FScriptContainerElement **local_1e0;
  FScriptContainerElement *local_1d8;
  int *piStack_1d0;
  undefined8 local_1c8;
  TAxisAlignedBox3<double> local_1c0;
  TAxisAlignedBox3<double> local_190;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_158;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> local_108;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_468;
  uVar18 = (param_3->CellMeshes).Array.ArrayNum;
  uVar19 = 0;
  iVar11 = -1;
  iVar7 = -1;
  local_3a0 = param_5;
  local_3d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3d8.ArrayNum = 0;
  local_3d8.ArrayMax = 0;
  local_3e8.Data = (FScriptContainerElement *)0x0;
  local_3e0 = 0;
  local_390 = param_3;
  local_348 = param_1;
  local_340 = this;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar18,&local_3e8,0,(int *)((longlong)&local_3e0 + 4));
  }
  iVar8 = (param_3->CellMeshes).Array.ArrayNum;
  uVar16 = uVar19;
  if (0 < iVar8) {
    do {
      uVar21 = (uint)uVar16;
      uVar18 = 0;
      if ((int)uVar21 < iVar8) {
        uVar18 = ~uVar21 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        iVar7 = (*pcVar2)();
        return iVar7;
      }
      pTVar12 = UE::Geometry::FDynamicMesh3::GetBounds
                          (*(FDynamicMesh3 **)
                            ((param_3->CellMeshes).Array.AllocatorInstance.Data + uVar19),&local_1c0
                           ,true);
      if (((local_3e8.Data <= pTVar12) &&
          (pTVar12 < (TAxisAlignedBox3<double> *)(local_3e8.Data + (longlong)local_3e0._4_4_ * 0x30)
          )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
        pcVar2 = (code *)swi(3);
        iVar7 = (*pcVar2)();
        return iVar7;
      }
      iVar8 = (int)local_3e0;
      if ((int)local_3e0 == local_3e0._4_4_) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_3e8,(int *)((longlong)&local_3e0 + 4));
      }
      uVar16 = (ulonglong)(uVar21 + 1);
      local_3e0 = CONCAT44(local_3e0._4_4_,iVar8 + 1);
      uVar19 = uVar19 + 8;
      dVar3 = (pTVar12->Min).field0_0x0._s_0.Y;
      lVar13 = (longlong)iVar8;
      *(double *)&local_3e8.Data[lVar13 * 0x30].field_0x0 = (pTVar12->Min).field0_0x0._s_0.X;
      *(double *)(local_3e8.Data + lVar13 * 0x30 + 8) = dVar3;
      dVar3 = (pTVar12->Max).field0_0x0._s_0.X;
      *(double *)(local_3e8.Data + lVar13 * 0x30 + 0x10) = (pTVar12->Min).field0_0x0._s_0.Z;
      *(double *)(local_3e8.Data + lVar13 * 0x30 + 0x10 + 8) = dVar3;
      dVar3 = (pTVar12->Max).field0_0x0._s_0.Z;
      *(double *)(local_3e8.Data + lVar13 * 0x30 + 0x20) = (pTVar12->Max).field0_0x0._s_0.Y;
      *(double *)(local_3e8.Data + lVar13 * 0x30 + 0x20 + 8) = dVar3;
      iVar8 = (param_3->CellMeshes).Array.ArrayNum;
    } while ((int)(uVar21 + 1) < iVar8);
  }
  dVar3 = __real_3f50624dd2f1a9fc;
  iVar8 = (this->Meshes).Array.ArrayNum;
  piStack_330 = &(this->Meshes).Array.ArrayNum;
  pFVar23 = (this->Meshes).Array.AllocatorInstance.Data;
  local_320 = pFVar23 + (longlong)iVar8 * 8;
  local_310 = CONCAT44(local_310._4_4_,iVar8);
  local_328 = local_310;
  local_310 = CONCAT44(local_310._4_4_,iVar8);
  local_1c8 = local_310;
  <Var17 = local_418[0];
  pFStack_318 = (FScriptContainerElement *)piStack_330;
  local_1d8 = local_320;
  piStack_1d0 = piStack_330;
  do {
    local_338 = pFVar23;
    if (*piStack_330 != (int)local_328) {
      local_3f8[0] = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_3f8);
    }
    if (pFVar23 == local_1d8) {
      PlanarCut::`anonymous_namespace'::SetUnsetColors(param_5,iVar7,true);
      if (0 < local_3d8.ArrayNum) {
        SetGeometryVisibility(local_340,param_5,&local_3d8,false);
      }
      if ((TAxisAlignedBox3<double> *)local_3e8.Data != (TAxisAlignedBox3<double> *)0x0) {
        FMemory::Free(local_3e8.Data);
      }
      if (local_3d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d8.AllocatorInstance.Data);
      }
      return iVar7;
    }
    iVar8 = 0;
    pFVar24 = *(FDynamicMesh3 **)local_338;
    uVar18 = (uint)pFVar24[1]._padding_;
    uVar21 = 0;
    if ((int)uVar18 < *(int *)&(param_5->TransformToGeometryIndex).field_0x18) {
      uVar21 = ~uVar18 >> 0x1f;
    }
    local_2dc._4_8_ = pFVar24;
    if ((uVar21 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      iVar7 = (*pcVar2)();
      return iVar7;
    }
    local_3f0[0] = *(int *)(*(longlong *)&(param_5->TransformToGeometryIndex).field_0x10 +
                           (longlong)(int)uVar18 * 4);
    uVar18 = (param_3->CellMeshes).Array.ArrayNum;
    local_408.Data = (FScriptContainerElement *)0x0;
    local_400 = 0;
    if ((int)uVar18 < 1) {
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
    }
    else {
      iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar18,&local_408,(int *)&local_400,(int *)((longlong)&local_400 + 4));
      memset(local_408.Data + (longlong)iVar9 * 8,0,(longlong)(int)uVar18 << 3);
    }
    if (pFVar24[1].VertexNormals.bIsSet == false) {
      pTVar12 = UE::Geometry::FDynamicMesh3::GetBounds(pFVar24,&local_190,true);
      pFVar23 = (FScriptContainerElement *)(pTVar12->Min).field0_0x0._s_0.Y;
      *(double *)&pFVar24[1].VertexColors.TypedValue = (pTVar12->Min).field0_0x0._s_0.X;
      pFVar24[1].VertexColors.TypedValue.Blocks.AllocatorInstance.Data = pFVar23;
      dVar4 = (pTVar12->Max).field0_0x0._s_0.X;
      *(double *)&pFVar24[1].VertexColors.TypedValue.Blocks.ArrayNum =
           (pTVar12->Min).field0_0x0._s_0.Z;
      *(double *)&pFVar24[1].VertexColors.bIsSet = dVar4;
      dVar4 = (pTVar12->Max).field0_0x0._s_0.Y;
      pFVar23 = (FScriptContainerElement *)(pTVar12->Max).field0_0x0._s_0.Z;
      pFVar24[1].VertexNormals.bIsSet = true;
      *(double *)&pFVar24[1].VertexUVs.TypedValue = dVar4;
      pFVar24[1].VertexUVs.TypedValue.Blocks.AllocatorInstance.Data = pFVar23;
    }
    local_320 = *(FScriptContainerElement **)&pFVar24[1].VertexColors.TypedValue;
    pFStack_318 = pFVar24[1].VertexColors.TypedValue.Blocks.AllocatorInstance.Data;
    local_200 = &local_408;
    local_310._0_4_ = pFVar24[1].VertexColors.TypedValue.Blocks.ArrayNum;
    local_310._4_4_ = pFVar24[1].VertexColors.TypedValue.Blocks.ArrayMax;
    uStack_308 = *(undefined8 *)&pFVar24[1].VertexColors.bIsSet;
    local_1f0 = &local_3e8;
    local_1e0 = &local_320;
    local_2b0.DataPtr = (void **)0x0;
    local_2a0 = Core::Private::Function::
                TFunctionRefCaller<`UE::PlanarCut::FDynamicMeshCollection::CutWithCellMeshes'::__l8::<lambda_1>,void,int>
                ::Call;
    local_298 = &local_200;
    local_300._0_4_ = pFVar24[1].VertexUVs.TypedValue.CurBlock;
    local_300._4_4_ = pFVar24[1].VertexUVs.TypedValue.CurBlockUsed;
    pFStack_2f8 = pFVar24[1].VertexUVs.TypedValue.Blocks.AllocatorInstance.Data;
    local_2b0.ArrayNum = 0;
    local_1f8 = param_3;
    local_1e8 = pFVar24;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(param_3->CellMeshes).Array.ArrayNum,1,
               (TFunctionRef<void___cdecl(int)> *)&local_2a0,<Var17,None,&local_2b0);
    iVar9 = (int)local_400;
    pFVar23 = local_408.Data + (longlong)(int)local_400 * 8;
    FVar22.Data = local_408.Data;
    while( true ) {
      if ((int)local_400 != iVar9) {
        local_418[0] = (<lambda_1>)0x0;
        `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_418);
      }
      if (FVar22.Data == pFVar23) break;
      if ((*(FDynamicMesh3 **)FVar22.Data != (FDynamicMesh3 *)0x0) &&
         (0 < ((*(FDynamicMesh3 **)FVar22.Data)->TriangleRefCounts).UsedCount)) {
        iVar8 = iVar8 + 1;
      }
      FVar22.Data = FVar22.Data + 8;
    }
    if (1 < iVar8) {
      iVar8 = 0;
      local_b8.Elements._44_4_ = 0x80;
      local_b8.Elements._0_8_ = 0;
      local_b8.Elements._8_8_ = 0;
      local_b8.Elements._32_8_ = 0;
      local_b8.Elements._40_4_ = 0;
      local_b8.Elements._48_4_ = 0xffffffff;
      local_b8.Elements._52_4_ = 0;
      local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_b8.HashSize = 0;
      local_108.Elements._0_8_ = 0;
      local_108.Elements._8_8_ = 0;
      local_108.Elements._32_8_ = 0;
      local_108.Elements._40_4_ = 0;
      local_108.Elements._44_4_ = 0x80;
      local_108.Elements._48_4_ = 0xffffffff;
      local_108.Elements._52_4_ = 0;
      local_108.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_108.HashSize = 0;
      local_158.Elements._0_8_ = 0;
      local_158.Elements._8_8_ = 0;
      local_158.Elements._32_8_ = 0;
      local_158.Elements._40_4_ = 0;
      local_158.Elements._44_4_ = 0x80;
      local_158.Elements._48_4_ = 0xffffffff;
      local_158.Elements._52_4_ = 0;
      local_158.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_158.HashSize = 0;
      local_3f4 = 0;
      if (param_6) {
        local_3c8 = FInternalSurfaceMaterials::GetDefaultMaterialIDForGeometry
                              (local_348,param_5,local_3f0[0]);
      }
      else {
        local_3c8 = local_348->GlobalMaterialID;
      }
      uVar5 = local_2dc._4_8_;
      local_410[0] = 0;
      if (0 < (local_390->CellMeshes).Array.ArrayNum) {
        do {
          uVar18 = local_410[0];
          uVar19 = 0;
          uVar10 = 0;
          uVar21 = uVar10;
          if ((int)local_410[0] < (int)local_400) {
            uVar21 = ~local_410[0] >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            iVar7 = (*pcVar2)();
            return iVar7;
          }
          if (*(longlong *)(local_408.Data + (longlong)(int)uVar18 * 8) != 0) {
            lVar13 = (longlong)(int)local_410[0];
            uVar18 = uVar10;
            if ((int)local_410[0] < (int)local_400) {
              uVar18 = ~local_410[0] >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              iVar7 = (*pcVar2)();
              return iVar7;
            }
            if (0 < *(int *)(*(longlong *)(local_408.Data + lVar13 * 8) + 0x170)) {
              lVar13 = (longlong)(int)local_410[0];
              if ((int)local_410[0] < (int)local_400) {
                uVar10 = ~local_410[0] >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                iVar7 = (*pcVar2)();
                return iVar7;
              }
              pFVar24 = *(FDynamicMesh3 **)(local_408.Data + lVar13 * 8);
              uVar18 = (pFVar24->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                       (pFVar24->TriangleRefCounts).RefCounts.CurBlockUsed;
              if ((uVar18 == 0) ||
                 (pFVar23 = (pFVar24->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
                 (ushort)(**(short **)pFVar23 - 1U) < 0xfffe)) {
LAB_14c9c5f06:
                uVar21 = (uint)uVar19;
              }
              else {
                uVar19 = 1;
                uVar21 = 1;
                if (1 < (int)uVar18) {
                  do {
                    uVar16 = (ulonglong)((uint)uVar19 & 0x1ff);
                    param_5 = local_3a0;
                    if ((*(short *)(*(longlong *)(pFVar23 + (uVar19 >> 9) * 8) + uVar16 * 2) != 0)
                       && (*(short *)(*(longlong *)(pFVar23 + (uVar19 >> 9) * 8) + uVar16 * 2) != -1
                          )) break;
                    uVar21 = (uint)uVar19 + 1;
                    uVar19 = (ulonglong)uVar21;
                  } while ((int)uVar21 < (int)uVar18);
                  goto LAB_14c9c5f06;
                }
              }
joined_r0x00014c9c5f08:
              if (uVar21 != uVar18) {
                while( true ) {
                  pFVar1 = (pFVar24->AttributeSet).Ptr;
                  pFVar15 = (FDynamicMeshAttributeSet *)0x0;
                  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
                    pFVar15 = pFVar1;
                  }
                  uVar21 = *(uint *)(*(longlong *)
                                      (*(longlong *)&((pFVar15->MaterialIDAttrib).Ptr)->field_0x20 +
                                      (uVar19 >> 9) * 8) + (ulonglong)((uint)uVar19 & 0x1ff) * 4);
                  if ((int)uVar21 < 0) {
                    local_3b8[0] = ~uVar21;
                    if ((int)uVar21 < 0) {
                      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                                (&local_b8,&local_2f0,(bool *)local_3b8);
                    }
                  }
                  else {
                    local_3b8[0] = 0xffffffff;
                  }
                  uVar21 = (uint)uVar19 + 1;
                  uVar19 = (ulonglong)uVar21;
                  if ((int)uVar18 <= (int)uVar21) break;
                  while( true ) {
                    uVar16 = (ulonglong)((uint)uVar19 & 0x1ff);
                    lVar13 = *(longlong *)
                              ((pFVar24->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                              + (uVar19 >> 9) * 8);
                    if ((*(short *)(lVar13 + uVar16 * 2) != 0) &&
                       (*(short *)(lVar13 + uVar16 * 2) != -1)) break;
                    uVar21 = (uint)uVar19 + 1;
                    uVar19 = (ulonglong)uVar21;
                    if ((int)uVar18 <= (int)uVar21) goto joined_r0x00014c9c5f08;
                  }
                }
                goto joined_r0x00014c9c5f08;
              }
              uVar18 = 0;
              local_414 = -1;
              local_3b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_3b0.ArrayNum = 0;
              local_3b0.ArrayMax = 0;
              if ((param_4) && (bVar6 = SplitIslands(local_340,pFVar24,&local_3b0,dVar3), bVar6)) {
                pFVar20 = local_3a0;
                iVar8 = local_3f4;
                if (0 < local_3b0.ArrayNum) {
                  do {
                    uVar21 = 0;
                    if ((int)uVar18 < local_3b0.ArrayNum) {
                      uVar21 = ~uVar18 >> 0x1f;
                    }
                    if ((uVar21 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar2 = (code *)swi(3);
                      iVar7 = (*pcVar2)();
                      return iVar7;
                    }
                    iVar11 = local_3f4;
                    uVar21 = (uint)((FDynamicMesh3 *)(uVar5 + 0x230))->_padding_;
                    pFVar24 = (FDynamicMesh3 *)
                              (local_3b0.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x230);
                    local_3f4 = local_3f4 + 1;
                    local_368.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_368.Data.ArrayNum = 0;
                    local_368.Data.ArrayMax = 0;
                    ::FString::AppendInt(&local_368,iVar11);
                    ::FString::FString(&local_280,"_");
                    uVar10 = 0;
                    if ((int)uVar21 < (int)pFVar20->_padding_) {
                      uVar10 = ~uVar21 >> 0x1f;
                    }
                    if ((uVar10 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar2 = (code *)swi(3);
                      iVar7 = (*pcVar2)();
                      return iVar7;
                    }
                    ::FString::ConcatFF(&local_290,
                                        (FString *)
                                        ((longlong)(int)uVar21 * 0x10 + pFVar20->_padding_),
                                        &local_280);
                    ::FString::ConcatFF(&local_2d0,&local_290,&local_368);
                    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_290.Data.AllocatorInstance.Data);
                    }
                    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_280.Data.AllocatorInstance.Data);
                    }
                    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_368.Data.AllocatorInstance.Data);
                    }
                    FVar22.Data = local_2d0.Data.AllocatorInstance.Data;
                    local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    iVar11 = local_2d0.Data.ArrayNum;
                    local_388.Data.ArrayNum = iVar11;
                    if (iVar11 == 0) {
                      local_388.Data.ArrayMax = 0;
                    }
                    else {
                      Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (2,2,iVar11,0,(ForAnyElementType *)&local_388,iVar11,
                                 &local_388.Data.ArrayMax);
                      memcpy(local_388.Data.AllocatorInstance.Data,FVar22.Data,(longlong)iVar11 * 2)
                      ;
                    }
                    param_5 = local_3a0;
                    local_414 = AppendToCollection((TTransform<double> *)
                                                   &(((FDynamicMesh3 *)(uVar5 + 0x230))->Vertices).
                                                    Blocks,pFVar24,param_7,
                                                   (int)((FDynamicMesh3 *)(uVar5 + 0x230))->
                                                        _padding_,&local_388,local_3a0,local_3c8);
                    local_270 = local_410;
                    local_268 = &local_414;
                    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<int_const_&,int_const_&>_>
                              (&local_108,(TPairInitializer<int_const_&,int_const_&> *)local_2ec,
                               (bool *)&local_270);
                    if ((int)uVar18 < 1) {
                      lVar13 = (longlong)(int)local_410[0];
                      uVar21 = 0;
                      if ((int)local_410[0] < (int)local_400) {
                        uVar21 = ~local_410[0] >> 0x1f;
                      }
                      if ((uVar21 == 0) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar6)) {
                        pcVar2 = (code *)swi(3);
                        iVar7 = (*pcVar2)();
                        return iVar7;
                      }
                      UE::Geometry::FDynamicMesh3::operator=
                                (*(FDynamicMesh3 **)(local_408.Data + lVar13 * 8),pFVar24);
                      local_250 = &local_414;
                      local_248 = local_410;
                      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      ::Emplace<TPairInitializer<int_const_&,int_const_&>_>
                                (&local_158,(TPairInitializer<int_const_&,int_const_&> *)local_2e4,
                                 (bool *)&local_250);
                    }
                    else {
                      this_00 = ::operator_new(0x230);
                      pFVar14 = (FDynamicMesh3 *)0x0;
                      if (this_00 != (FDynamicMesh3 *)0x0) {
                        pFVar14 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(this_00,pFVar24);
                      }
                      local_3c0 = pFVar14;
                      if (((local_408.Data <= (FScriptContainerElement *)&local_3c0) &&
                          ((FScriptContainerElement *)&local_3c0 <
                           local_408.Data + (longlong)local_400._4_4_ * 8)) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar6)) {
                        pcVar2 = (code *)swi(3);
                        iVar7 = (*pcVar2)();
                        return iVar7;
                      }
                      iVar11 = (int)local_400;
                      if ((int)local_400 == local_400._4_4_) {
                        iVar11 = Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x808,&local_408,(int *)((longlong)&local_400 + 4));
                      }
                      local_400 = CONCAT44(local_400._4_4_,iVar11 + 1);
                      *(FDynamicMesh3 **)(local_408.Data + (longlong)iVar11 * 8) = local_3c0;
                      local_260 = &local_414;
                      local_3c0 = (FDynamicMesh3 *)0x0;
                      local_258 = local_398;
                      local_398[0] = iVar11;
                      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      ::Emplace<TPairInitializer<int_const_&,int_&&>_>
                                (&local_158,(TPairInitializer<int_const_&,int_&&> *)(local_2ec + 4),
                                 (bool *)&local_260);
                      if (local_3c0 != (FDynamicMesh3 *)0x0) {
                        (*(code *)**(undefined8 **)local_3c0)(local_3c0,1);
                      }
                    }
                    if (iVar7 == -1) {
                      iVar7 = local_414;
                    }
                    if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
                    }
                    uVar18 = uVar18 + 1;
                    pFVar20 = param_5;
                    iVar8 = local_3f4;
                    iVar11 = iVar7;
                  } while ((int)uVar18 < local_3b0.ArrayNum);
                }
              }
              else {
                uVar18 = (uint)((FDynamicMesh3 *)(uVar5 + 0x230))->_padding_;
                local_358.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_358.Data.ArrayNum = 0;
                local_358.Data.ArrayMax = 0;
                local_3f4 = iVar8 + 1;
                ::FString::AppendInt(&local_358,iVar8);
                ::FString::FString(&local_230,"_");
                uVar21 = 0;
                if ((int)uVar18 < (int)param_5->_padding_) {
                  uVar21 = ~uVar18 >> 0x1f;
                }
                if ((uVar21 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar2 = (code *)swi(3);
                  iVar7 = (*pcVar2)();
                  return iVar7;
                }
                ::FString::ConcatFF(&local_240,
                                    (FString *)((longlong)(int)uVar18 * 0x10 + param_5->_padding_),
                                    &local_230);
                ::FString::ConcatFF(&local_2c0,&local_240,&local_358);
                if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_240.Data.AllocatorInstance.Data);
                }
                if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_230.Data.AllocatorInstance.Data);
                }
                if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_358.Data.AllocatorInstance.Data);
                }
                FVar22.Data = local_2c0.Data.AllocatorInstance.Data;
                local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                iVar9 = local_2c0.Data.ArrayNum;
                local_378.Data.ArrayNum = iVar9;
                if (iVar9 == 0) {
                  local_378.Data.ArrayMax = 0;
                }
                else {
                  Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,iVar9,0,(ForAnyElementType *)&local_378,iVar9,
                             &local_378.Data.ArrayMax);
                  memcpy(local_378.Data.AllocatorInstance.Data,FVar22.Data,(longlong)iVar9 * 2);
                }
                local_414 = AppendToCollection((TTransform<double> *)
                                               &(((FDynamicMesh3 *)(uVar5 + 0x230))->Vertices).
                                                Blocks,pFVar24,param_7,
                                               (int)((FDynamicMesh3 *)(uVar5 + 0x230))->_padding_,
                                               &local_378,param_5,local_3c8);
                local_220 = local_410;
                local_218 = &local_414;
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
                Emplace<TPairInitializer<int_const_&,int_const_&>_>
                          (&local_108,(TPairInitializer<int_const_&,int_const_&> *)(local_2e4 + 4),
                           (bool *)&local_220);
                local_210 = &local_414;
                local_208 = local_410;
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
                Emplace<TPairInitializer<int_const_&,int_const_&>_>
                          (&local_158,(TPairInitializer<int_const_&,int_const_&> *)local_2dc,
                           (bool *)&local_210);
                bVar6 = iVar7 == -1;
                iVar7 = iVar11;
                if (bVar6) {
                  iVar7 = local_414;
                }
                if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
                }
                iVar8 = iVar8 + 1;
                iVar11 = iVar7;
              }
              DestructItems<UE::Geometry::FDynamicMesh3,int>
                        ((FDynamicMesh3 *)local_3b0.AllocatorInstance.Data,local_3b0.ArrayNum);
              if ((FDynamicMesh3 *)local_3b0.AllocatorInstance.Data != (FDynamicMesh3 *)0x0) {
                FMemory::Free(local_3b0.AllocatorInstance.Data);
              }
            }
          }
          local_410[0] = local_410[0] + 1;
          <Var17 = local_418[0];
        } while ((int)local_410[0] < (local_390->CellMeshes).Array.ArrayNum);
      }
      if (((local_3d8.AllocatorInstance.Data <= (FScriptContainerElement *)local_3f0) &&
          ((FScriptContainerElement *)local_3f0 <
           local_3d8.AllocatorInstance.Data + (longlong)local_3d8.ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        iVar7 = (*pcVar2)();
        return iVar7;
      }
      iVar8 = local_3d8.ArrayNum;
      if (local_3d8.ArrayNum == local_3d8.ArrayMax) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_3d8.AllocatorInstance,&local_3d8.ArrayMax);
      }
      local_3d8.ArrayNum = iVar8 + 1;
      *(int *)(local_3d8.AllocatorInstance.Data + (longlong)iVar8 * 4) = local_3f0[0];
      local_158.HashSize = 0;
      if (local_158.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_158.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_158.Elements);
      local_108.HashSize = 0;
      if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_108.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_108.Elements);
      local_b8.HashSize = 0;
      if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_b8.Elements);
    }
    DestructItems<TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_>,int>
              ((TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_>
                *)local_408.Data,(int)local_400);
    if (local_408.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data);
    }
    pFVar23 = local_338 + 8;
    param_3 = local_390;
  } while( true );
}

// CutWithMultiplePlanes @ 14c9c6e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::PlanarCut::FDynamicMeshCollection::CutWithMultiplePlanes
          (FDynamicMeshCollection *this,TArrayView<UE::Math::TPlane<double>_const_,int> *param_1,
          double param_2,double param_3,bool param_4,int param_5,FGeometryCollection *param_6,
          FInternalSurfaceMaterials *param_7,bool param_8,FProgressCancel *param_9)

{
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *pTVar1;
  FDynamicMesh3 *pFVar2;
  TUniquePtr<UE::PlanarCut::FDynamicMeshCollection::FMeshData,TDefaultDelete<UE::PlanarCut::FDynamicMeshCollection::FMeshData>_>
  TVar3;
  void *pvVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  FScriptContainerElement *pFVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  FScriptContainerElement *pFVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  FInternalSurfaceMaterials *pFVar16;
  FProgressCancel *pFVar17;
  FGeometryCollection *pFVar18;
  TArrayView<UE::Math::TPlane<double>_const_,int> *pTVar19;
  ForAnyElementType _Src;
  bool bVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  FText *pFVar26;
  FNoiseSettings *pFVar27;
  FMeshData *this_00;
  FMeshData *pFVar28;
  TAxisAlignedBox3<double> *pTVar29;
  FMeshData *pFVar30;
  ForElementType<int> FVar31;
  FScriptContainerElement *pFVar32;
  ulonglong uVar33;
  FScriptContainerElement *pFVar34;
  ForElementType<FSetElementId> FVar35;
  ulonglong uVar36;
  EBooleanOp EVar37;
  ForAnyElementType FVar38;
  FScriptContainerElement *pFVar39;
  FDynamicMesh3 *pFVar40;
  FMeshData *pFVar41;
  longlong lVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  TOptional<FNoiseSettings> *this_01;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  float fVar52;
  undefined1 auStackY_eb8 [32];
  ForAnyElementType local_e68;
  uint local_e60;
  uint uStack_e5c;
  ForAnyElementType local_e58;
  undefined8 local_e50;
  undefined1 local_e48;
  undefined1 local_e47;
  undefined1 local_e46 [2];
  uint local_e44;
  FMeshData *local_e40;
  ForAnyElementType local_e38;
  undefined8 local_e30;
  uint local_e28;
  uint local_e24;
  int local_e20 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_e18;
  int local_e08;
  uint local_e04;
  uint local_e00;
  uint local_dfc;
  float local_df8;
  FScriptContainerElement *local_df0;
  FInternalSurfaceMaterials *local_de8;
  FMeshData *local_de0;
  FDynamicMeshCollection *local_dd8;
  FProgressCancel *local_dd0;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> local_dc8;
  TUniquePtr<UE::PlanarCut::FDynamicMeshCollection::FMeshData,TDefaultDelete<UE::PlanarCut::FDynamicMeshCollection::FMeshData>_>
  local_db8;
  FGeometryCollection *local_db0;
  FRandomStream local_da8;
  TArrayView<UE::Math::TPlane<double>_const_,int> *local_da0;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> local_d98;
  int local_d88;
  FScriptContainerElement *local_d80;
  FDynamicMesh3 *local_d78;
  int local_d70 [2];
  FScriptContainerElement *local_d68;
  int *piStack_d60;
  undefined8 local_d58;
  FString local_d50;
  TArray<int,TSizedDefaultAllocator<32>_> local_d40;
  undefined1 local_d30 [16];
  double local_d20;
  double dStack_d18;
  double local_d10;
  FScriptContainerElement *pFStack_d08;
  undefined4 local_d00;
  undefined4 uStack_cfc;
  uint local_cf8;
  uint uStack_cf4;
  undefined4 local_cf0;
  undefined4 uStack_cec;
  FString local_ce8;
  FScriptContainerElement *local_cd8;
  int *piStack_cd0;
  undefined8 local_cc8;
  FCellMeshes local_cb8;
  FString local_c58;
  longlong local_c48;
  TPairInitializer<int_const_&,int_const_&> local_c40;
  longlong local_c30;
  FScriptContainerElement *local_c28;
  int *piStack_c20;
  int local_c18;
  undefined4 uStack_c14;
  int *local_c10;
  uint *local_c08;
  FString local_c00;
  FString local_bf0;
  FPlanarCells local_bd8;
  FPlanarCells local_b68;
  FProgressScope local_af8;
  FCellMeshes local_ac8;
  FCellMeshes local_a68;
  FText local_a08;
  FText local_9f8;
  FText local_9e8;
  FText local_9d8;
  FProgressScope local_9c8;
  TVector<double>_u_0 local_998;
  double dStack_980;
  double local_978;
  double dStack_970;
  FProgressScope local_968;
  TVector<double>_u_0 local_938;
  double dStack_920;
  double local_918;
  double dStack_910;
  FProgressScope local_908;
  TTransform<double> local_8d8;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_878;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_848;
  TAxisAlignedBox3<double> local_818;
  ForElementType<int> local_7e8;
  int local_7d0;
  int local_7cc;
  ForElementType<int> local_7c8;
  int local_7b0;
  int local_7ac;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> local_7a8;
  undefined1 local_758 [392];
  undefined1 local_5d0 [32];
  void *local_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  ForElementType<FSetElementId> local_590;
  int local_588;
  bool local_580;
  undefined1 local_578 [32];
  void *local_558;
  undefined4 local_550;
  uint local_54c;
  undefined4 local_548;
  undefined4 local_544;
  void *local_538;
  undefined4 local_530;
  ForAnyElementType local_528;
  undefined8 local_520;
  TBitArray<FDefaultBitArrayAllocator> local_518;
  undefined4 local_4f8;
  undefined4 local_4f4;
  void *local_4e8;
  undefined4 local_4e0;
  undefined2 local_4d8;
  TOptional<TArray<signed_char,TSizedDefaultAllocator<32>_>_>_u_0 local_4d0;
  FMeshSelfUnion local_4b8;
  TVector<double>_u_0 local_3e8;
  double local_3d0;
  double dStack_3c8;
  FScriptContainerElement *local_3c0;
  undefined1 local_3b8;
  FMeshIndexMappings local_3a8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_eb8;
  local_dd0 = param_9;
  local_de8 = param_7;
  local_db0 = param_6;
  local_dd8 = this;
  local_da0 = param_1;
  local_d78 = (FDynamicMesh3 *)param_3;
  local_e08 = FGeometryCollection::NumUVLayers(param_6);
  fVar14 = __real_3f800000;
  local_da8.InitialSeed = param_5;
  local_da8.Seed = param_5;
  fVar52 = __real_3f800000 / (float)param_1->ArrayNum;
  local_df8 = fVar52;
  if (param_2 <= 0.0) {
    pFVar34 = (this->Meshes).Array.AllocatorInstance.Data;
    piStack_d60 = &(this->Meshes).Array.ArrayNum;
    pFVar41 = (FMeshData *)0x0;
    local_d58 = CONCAT44(local_d58._4_4_,*piStack_d60);
    pFVar32 = pFVar34 + (longlong)*piStack_d60 * 8;
    local_e68.Data = (FScriptContainerElement *)0x0;
    local_e60 = 0;
    uStack_e5c = 0;
    local_cc8 = local_d58;
    local_d68 = pFVar34;
    piStack_cd0 = piStack_d60;
    while( true ) {
      local_cd8 = pFVar34;
      if (*piStack_cd0 != (int)local_cc8) {
        local_e48 = 0;
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_e48);
      }
      dVar15 = __real_3f50624dd2f1a9fc;
      if (pFVar34 == pFVar32) break;
      pFVar30 = *(FMeshData **)pFVar34;
      this_00 = ::operator_new(0x330);
      pFVar28 = pFVar41;
      if (this_00 != (FMeshData *)0x0) {
        pFVar28 = FMeshData::FMeshData(this_00,pFVar30);
      }
      local_db8.Ptr = pFVar28;
      if (((local_e68.Data <= (FScriptContainerElement *)&local_db8) &&
          ((FScriptContainerElement *)&local_db8 < local_e68.Data + (longlong)(int)uStack_e5c * 8))
         && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar20)) {
        pcVar5 = (code *)swi(3);
        iVar21 = (*pcVar5)();
        return iVar21;
      }
      if (local_e60 == uStack_e5c) {
        local_e60 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_e68,(int *)&uStack_e5c);
      }
      pFVar34 = pFVar34 + 8;
      *(FMeshData **)(local_e68.Data + (longlong)(int)local_e60 * 8) = local_db8.Ptr;
      local_db8.Ptr = (FMeshData *)0x0;
      local_e60 = local_e60 + 1;
    }
    local_e00 = 0;
    if (0 < param_1->ArrayNum) {
      uVar50 = (undefined4)__real_3f847ae147ae147b;
      uVar51 = (undefined4)((ulonglong)__real_3f847ae147ae147b >> 0x20);
      pFVar30 = pFVar41;
LAB_14c9c78a2:
      pFVar17 = local_dd0;
      uVar44 = (uint)pFVar30;
      iVar21 = -1;
      if (local_dd0 != (FProgressCancel *)0x0) {
        if (local_dd0->WasCancelled != false) goto LAB_14c9c9a43;
        bVar20 = Core::Private::Function::
                 TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                 ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                               *)&local_dd0->CancelF);
        pFVar17->WasCancelled = bVar20;
        if (bVar20) goto LAB_14c9c9a43;
      }
      pFVar26 = FText::FText(&local_9e8);
      FProgressCancel::FProgressScope::FProgressScope(&local_908,pFVar17,fVar52,pFVar26);
      if (local_9e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_9e8.TextData.Reference + 0x10))();
      }
      uVar45 = ~uVar44 >> 0x1f;
      uVar43 = 0;
      if ((int)uVar44 < param_1->ArrayNum) {
        uVar43 = uVar45;
      }
      local_e28 = uVar45;
      if ((uVar43 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        iVar21 = (*pcVar5)();
        return iVar21;
      }
      local_c48 = (longlong)(int)uVar44;
      local_c30 = local_c48 * 0x20;
      FPlanarCells::FPlanarCells(&local_b68,param_1->DataPtr + local_c48);
      local_b68.InternalSurfaceMaterials.GlobalMaterialID = local_de8->GlobalMaterialID;
      local_b68.InternalSurfaceMaterials.GlobalUVScale = local_de8->GlobalUVScale;
      local_b68.InternalSurfaceMaterials.bGlobalVisibility = local_de8->bGlobalVisibility;
      if (&local_de8->NoiseSettings != &local_b68.InternalSurfaceMaterials.NoiseSettings) {
        if ((local_de8->NoiseSettings).bIsSet == false) {
          if (local_b68.InternalSurfaceMaterials.NoiseSettings.bIsSet != false) {
            local_b68.InternalSurfaceMaterials.NoiseSettings.bIsSet = false;
          }
        }
        else {
          pFVar27 = TOptional<FNoiseSettings>::GetValue(&local_de8->NoiseSettings);
          local_b68.InternalSurfaceMaterials.NoiseSettings.TypedValue.Amplitude = pFVar27->Amplitude
          ;
          local_b68.InternalSurfaceMaterials.NoiseSettings.TypedValue.Frequency = pFVar27->Frequency
          ;
          local_b68.InternalSurfaceMaterials.NoiseSettings.TypedValue.Octaves = pFVar27->Octaves;
          local_b68.InternalSurfaceMaterials.NoiseSettings.TypedValue.PointSpacing =
               pFVar27->PointSpacing;
          local_b68.InternalSurfaceMaterials.NoiseSettings.TypedValue.Lacunarity =
               pFVar27->Lacunarity;
          local_b68.InternalSurfaceMaterials.NoiseSettings.TypedValue.Persistence =
               pFVar27->Persistence;
          local_b68.InternalSurfaceMaterials.NoiseSettings.bIsSet = true;
        }
      }
      local_a68.CellMeshes.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_938._s_0.X = (local_dd8->Bounds).Min.field0_0x0._s_0.X;
      local_938._s_0.Y = (local_dd8->Bounds).Min.field0_0x0._s_0.Y;
      local_a68.CellMeshes.Array.ArrayNum = 0;
      local_a68.CellMeshes.Array.ArrayMax = 0;
      local_938._s_0.Z = (local_dd8->Bounds).Min.field0_0x0._s_0.Z;
      dStack_920 = (local_dd8->Bounds).Max.field0_0x0._s_0.X;
      local_a68.OutsideCellIndex = -1;
      dVar6 = (local_dd8->Bounds).Max.field0_0x0._s_0.Z - (local_dd8->Bounds).Min.field0_0x0._s_0.Z;
      local_918 = (local_dd8->Bounds).Max.field0_0x0._s_0.Y;
      dStack_910 = (local_dd8->Bounds).Max.field0_0x0._s_0.Z;
      local_a68.NumUVLayers = 1;
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
      dVar48 = (local_dd8->Bounds).Max.field0_0x0._s_0.X - (local_dd8->Bounds).Min.field0_0x0._s_0.X
      ;
      dVar46 = (local_dd8->Bounds).Max.field0_0x0._s_0.Y - (local_dd8->Bounds).Min.field0_0x0._s_0.Y
      ;
      if (dVar48 <= 0.0) {
        dVar48 = 0.0;
      }
      if (dVar46 <= 0.0) {
        dVar46 = 0.0;
      }
      if (dVar6 <= dVar46) {
        dVar6 = dVar46;
      }
      if (dVar6 <= dVar48) {
        dVar6 = dVar48;
      }
      FCellMeshes::Init(&local_a68,local_e08,&local_da8,&local_b68,
                        (TAxisAlignedBox3<double> *)&local_938._s_0,0.0,
                        dVar6 * (double)CONCAT44(uVar51,uVar50),false);
      pFVar32 = (FScriptContainerElement *)(longlong)(int)local_e60;
      local_e04 = 0;
      local_df0 = (FScriptContainerElement *)0x0;
      pFVar30 = pFVar41;
      local_d80 = pFVar32;
      if (0 < (int)local_e60) {
        do {
          pFVar34 = local_df0;
          uVar43 = ~(uint)pFVar30 >> 0x1f;
          uVar44 = 0;
          if ((int)(uint)pFVar30 < (int)pFVar32) {
            uVar44 = uVar43;
          }
          if ((uVar44 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar5 = (code *)swi(3);
            iVar21 = (*pcVar5)();
            return iVar21;
          }
          pFVar40 = *(FDynamicMesh3 **)(local_e68.Data + (longlong)pFVar34 * 8);
          iVar21 = (int)pFVar40[1]._padding_;
          pFVar32 = pFVar40[1].Vertices.Blocks.AllocatorInstance.Data;
          dVar6 = *(double *)&pFVar40[1].Vertices.Blocks.ArrayNum;
          dVar48 = *(double *)&pFVar40[1].VertexRefCounts.RefCounts;
          pFVar34 = pFVar40[1].VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
          dVar46 = *(double *)&pFVar40[1].VertexRefCounts.RefCounts.Blocks.ArrayNum;
          dVar7 = *(double *)&pFVar40[1].VertexRefCounts.FreeIndices;
          pFVar8 = pFVar40[1].VertexRefCounts.FreeIndices.Blocks.AllocatorInstance.Data;
          dVar9 = *(double *)&pFVar40[1].VertexRefCounts.FreeIndices.Blocks.ArrayNum;
          dVar10 = *(double *)&pFVar40[1].VertexRefCounts.UsedCount;
          dVar11 = *(double *)&pFVar40[1].VertexNormals.TypedValue;
          pFVar12 = pFVar40[1].VertexNormals.TypedValue.Blocks.AllocatorInstance.Data;
          dVar13 = *(double *)&pFVar40[1].VertexNormals.TypedValue.Blocks.ArrayNum;
          local_d88 = iVar21;
          if (pFVar40[1].VertexNormals.bIsSet == false) {
            pTVar29 = UE::Geometry::FDynamicMesh3::GetBounds(pFVar40,&local_818,true);
            pFVar39 = (FScriptContainerElement *)(pTVar29->Min).field0_0x0._s_0.Y;
            *(double *)&pFVar40[1].VertexColors.TypedValue = (pTVar29->Min).field0_0x0._s_0.X;
            pFVar40[1].VertexColors.TypedValue.Blocks.AllocatorInstance.Data = pFVar39;
            dVar49 = (pTVar29->Max).field0_0x0._s_0.X;
            *(double *)&pFVar40[1].VertexColors.TypedValue.Blocks.ArrayNum =
                 (pTVar29->Min).field0_0x0._s_0.Z;
            *(double *)&pFVar40[1].VertexColors.bIsSet = dVar49;
            dVar49 = (pTVar29->Max).field0_0x0._s_0.Y;
            pFVar39 = (FScriptContainerElement *)(pTVar29->Max).field0_0x0._s_0.Z;
            pFVar40[1].VertexNormals.bIsSet = true;
            *(double *)&pFVar40[1].VertexUVs.TypedValue = dVar49;
            pFVar40[1].VertexUVs.TypedValue.Blocks.AllocatorInstance.Data = pFVar39;
          }
          pTVar1 = &pFVar40[1].VertexColors;
          dVar49 = *(double *)&pTVar1->TypedValue;
          pFVar39 = pFVar40[1].VertexColors.TypedValue.Blocks.AllocatorInstance.Data;
          local_d30._0_4_ = (pTVar1->TypedValue).CurBlock;
          local_d30._4_4_ = (pTVar1->TypedValue).CurBlockUsed;
          local_d30._8_8_ = (pTVar1->TypedValue).Blocks.AllocatorInstance;
          local_d20 = *(double *)&pFVar40[1].VertexColors.TypedValue.Blocks.ArrayNum;
          dStack_d18 = *(double *)&pFVar40[1].VertexColors.bIsSet;
          local_d10 = *(double *)&pFVar40[1].VertexUVs.TypedValue;
          pFStack_d08 = pFVar40[1].VertexUVs.TypedValue.Blocks.AllocatorInstance.Data;
          if ((local_de8->NoiseSettings).bIsSet != false) {
            pFVar27 = TOptional<FNoiseSettings>::GetValue(&local_de8->NoiseSettings);
            dVar47 = (double)pFVar27->Amplitude;
            dVar49 = (double)local_d30._0_8_ - dVar47;
            pFVar39 = (FScriptContainerElement *)((double)local_d30._8_8_ - dVar47);
            pFStack_d08 = (FScriptContainerElement *)((double)pFStack_d08 + dVar47);
            local_d20 = local_d20 - dVar47;
            dStack_d18 = dStack_d18 + dVar47;
            local_d10 = local_d10 + dVar47;
            local_d30._8_4_ = (int)pFVar39;
            local_d30._0_8_ = dVar49;
            local_d30._12_4_ = (int)((ulonglong)pFVar39 >> 0x20);
          }
          pTVar19 = local_da0;
          local_3e8._8_4_ = (int)pFVar39;
          local_3e8._0_8_ = dVar49;
          local_3e8._12_4_ = (int)((ulonglong)pFVar39 >> 0x20);
          if (((dStack_d18 < dVar49) || (local_d10 < (double)pFVar39)) ||
             ((double)pFStack_d08 < local_d20)) {
            local_3b8 = 0;
          }
          else {
            local_3b8 = 1;
          }
          uVar22 = 0;
          uVar44 = uVar22;
          if ((int)local_e00 < local_da0->ArrayNum) {
            uVar44 = uVar45;
          }
          local_3e8._s_0.Z = local_d20;
          local_3d0 = dStack_d18;
          dStack_3c8 = local_d10;
          local_3c0 = pFStack_d08;
          if ((uVar44 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar20)) {
            pcVar5 = (code *)swi(3);
            iVar21 = (*pcVar5)();
            return iVar21;
          }
          bVar20 = FMath::PlaneAABBIntersection
                             ((TPlane<double> *)((longlong)&pTVar19->DataPtr->_padding_ + local_c30)
                              ,(TBox<double> *)&local_3e8._s_0);
          if (bVar20) {
            local_e58.Data = (FScriptContainerElement *)0x0;
            local_e50 = 0;
            pFVar28 = ::operator_new(0x330);
            iVar24 = local_e08;
            pFVar30 = pFVar41;
            if (pFVar28 != (FMeshData *)0x0) {
              pFVar30 = FMeshData::FMeshData(pFVar28,local_e08);
            }
            local_e40 = pFVar30;
            if (((local_e58.Data <= (FScriptContainerElement *)&local_e40) &&
                ((FScriptContainerElement *)&local_e40 <
                 local_e58.Data + (longlong)local_e50._4_4_ * 8)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar5 = (code *)swi(3);
              iVar21 = (*pcVar5)();
              return iVar21;
            }
            iVar23 = (int)local_e50;
            if ((int)local_e50 == local_e50._4_4_) {
              iVar23 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_e58,(int *)((longlong)&local_e50 + 4));
            }
            local_e50 = CONCAT44(local_e50._4_4_,iVar23 + 1);
            *(FMeshData **)(local_e58.Data + (longlong)iVar23 * 8) = local_e40;
            local_e40 = (FMeshData *)0x0;
            TDefaultDelete<UE::PlanarCut::FDynamicMeshCollection::FMeshData>::operator()
                      ((TDefaultDelete<UE::PlanarCut::FDynamicMeshCollection::FMeshData> *)
                       &local_e40,(FMeshData *)0x0);
            if (((int)local_e50 < 1) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar5 = (code *)swi(3);
              iVar21 = (*pcVar5)();
              return iVar21;
            }
            (*(FMeshData **)local_e58.Data)->TransformIndex = iVar21;
            if (((int)local_e50 < 1) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar5 = (code *)swi(3);
              iVar21 = (*pcVar5)();
              return iVar21;
            }
            TVar3.Ptr = *(FMeshData **)local_e58.Data;
            ((TVar3.Ptr)->FromCollection).Rotation.XY.m128d_f64[0] = (double)pFVar32;
            ((TVar3.Ptr)->FromCollection).Rotation.XY.m128d_f64[1] = dVar6;
            ((TVar3.Ptr)->FromCollection).Rotation.ZW.m128d_f64[0] = dVar48;
            ((TVar3.Ptr)->FromCollection).Rotation.ZW.m128d_f64[1] = (double)pFVar34;
            ((TVar3.Ptr)->FromCollection).Translation.XY.m128d_f64[0] = dVar46;
            ((TVar3.Ptr)->FromCollection).Translation.XY.m128d_f64[1] = dVar7;
            ((TVar3.Ptr)->FromCollection).Translation.ZW.m128d_f64[0] = (double)pFVar8;
            ((TVar3.Ptr)->FromCollection).Translation.ZW.m128d_f64[1] = dVar9;
            ((TVar3.Ptr)->FromCollection).Scale3D.XY.m128d_f64[0] = dVar10;
            ((TVar3.Ptr)->FromCollection).Scale3D.XY.m128d_f64[1] = dVar11;
            ((TVar3.Ptr)->FromCollection).Scale3D.ZW.m128d_f64[0] = (double)pFVar12;
            ((TVar3.Ptr)->FromCollection).Scale3D.ZW.m128d_f64[1] = dVar13;
            pFVar28 = ::operator_new(0x330);
            pFVar30 = pFVar41;
            if (pFVar28 != (FMeshData *)0x0) {
              pFVar30 = FMeshData::FMeshData(pFVar28,iVar24);
            }
            local_e40 = pFVar30;
            if (((local_e58.Data <= (FScriptContainerElement *)&local_e40) &&
                ((FScriptContainerElement *)&local_e40 <
                 local_e58.Data + (longlong)local_e50._4_4_ * 8)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar5 = (code *)swi(3);
              iVar21 = (*pcVar5)();
              return iVar21;
            }
            iVar24 = (int)local_e50;
            if ((int)local_e50 == local_e50._4_4_) {
              iVar24 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_e58,(int *)((longlong)&local_e50 + 4));
            }
            local_e50 = CONCAT44(local_e50._4_4_,iVar24 + 1);
            *(FMeshData **)(local_e58.Data + (longlong)iVar24 * 8) = local_e40;
            local_e40 = (FMeshData *)0x0;
            TDefaultDelete<UE::PlanarCut::FDynamicMeshCollection::FMeshData>::operator()
                      ((TDefaultDelete<UE::PlanarCut::FDynamicMeshCollection::FMeshData> *)
                       &local_e40,(FMeshData *)0x0);
            if (((int)local_e50 < 2) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar5 = (code *)swi(3);
              iVar21 = (*pcVar5)();
              return iVar21;
            }
            (*(FMeshData **)(local_e58.Data + 8))->TransformIndex = iVar21;
            if (((int)local_e50 < 2) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar5 = (code *)swi(3);
              iVar21 = (*pcVar5)();
              return iVar21;
            }
            TVar3.Ptr = *(FMeshData **)(local_e58.Data + 8);
            ((TVar3.Ptr)->FromCollection).Rotation.XY.m128d_f64[0] = (double)pFVar32;
            ((TVar3.Ptr)->FromCollection).Rotation.XY.m128d_f64[1] = dVar6;
            ((TVar3.Ptr)->FromCollection).Rotation.ZW.m128d_f64[0] = dVar48;
            ((TVar3.Ptr)->FromCollection).Rotation.ZW.m128d_f64[1] = (double)pFVar34;
            ((TVar3.Ptr)->FromCollection).Translation.XY.m128d_f64[0] = dVar46;
            ((TVar3.Ptr)->FromCollection).Translation.XY.m128d_f64[1] = dVar7;
            ((TVar3.Ptr)->FromCollection).Translation.ZW.m128d_f64[0] = (double)pFVar8;
            ((TVar3.Ptr)->FromCollection).Translation.ZW.m128d_f64[1] = dVar9;
            ((TVar3.Ptr)->FromCollection).Scale3D.XY.m128d_f64[0] = dVar10;
            ((TVar3.Ptr)->FromCollection).Scale3D.XY.m128d_f64[1] = dVar11;
            ((TVar3.Ptr)->FromCollection).Scale3D.ZW.m128d_f64[0] = (double)pFVar12;
            ((TVar3.Ptr)->FromCollection).Scale3D.ZW.m128d_f64[1] = dVar13;
            pFVar30 = pFVar41;
            pFVar28 = pFVar41;
            dVar49 = __real_3ff0000000000000;
            if (local_a68.CellMeshes.Array.ArrayNum != 2) {
              bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CellMeshes.CellMeshes.Num() == 2",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                                  ,0xb13,L"");
              if (bVar20) {
                pcVar5 = (code *)swi(3);
                iVar21 = (*pcVar5)();
                return iVar21;
              }
              dVar49 = __real_3ff0000000000000;
            }
            while( true ) {
              iVar21 = (int)pFVar30;
              if ((local_a68.CellMeshes.Array.ArrayNum <= iVar21) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar5 = (code *)swi(3);
                iVar21 = (*pcVar5)();
                return iVar21;
              }
              pFVar2 = *(FDynamicMesh3 **)
                        (local_a68.CellMeshes.Array.AllocatorInstance.Data +
                        (longlong)&pFVar28->AugMesh);
              EVar37 = Intersect;
              if (iVar21 == local_a68.OutsideCellIndex) {
                EVar37 = Difference;
              }
              if (((int)local_e50 <= iVar21) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar5 = (code *)swi(3);
                iVar21 = (*pcVar5)();
                return iVar21;
              }
              local_758._288_8_ = *(undefined8 *)(local_e58.Data + (longlong)&pFVar28->AugMesh);
              local_758._32_8_ = 0.0;
              local_758._40_8_ = 0.0;
              local_758._112_8_ = 0.0;
              local_758._120_8_ = 0.0;
              local_758._192_8_ = __real_3eb0c6f7a0000000;
              local_758._208_8_ = ___xmm_3fe00000000000003ff8000000000000;
              local_758._216_8_ = _UNK_1528da618;
              local_758._248_8_ = ___xmm_3fe00000000000003fb999999999999a;
              local_758._256_8_ = _UNK_1528da608;
              local_758._24_8_ = 0.0;
              local_758._304_8_ = 0.0;
              local_758._312_8_ = 0.0;
              local_5a8 = ___xmm_00000000ffffffff0000008000000000;
              uStack_5a0 = _UNK_150631d98;
              local_758._104_8_ = 0.0;
              local_758._296_8_ = 0.0;
              local_758._0_8_ = &___7FMeshBoolean_Geometry_UE__6B_;
              local_758._56_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              local_758._64_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              local_758[200] = true;
              local_758._72_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              local_758._80_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
              local_758._88_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
              local_758._96_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
              local_758._136_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              local_758._144_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              local_758._152_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              local_758._160_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
              local_758._168_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
              local_758._176_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
              local_758[0xe0] = true;
              local_758[0xe1] = true;
              local_758[0xe2] = false;
              local_758._232_8_ = (FProgressCancel *)0x0;
              local_758[0xf0] = false;
              local_758[0x108] = true;
              local_758[0x109] = true;
              local_758[0x10a] = true;
              local_758._268_4_ = 1e-06;
              local_758[0x110] = true;
              local_758._276_4_ = 0.01;
              local_758._280_4_ = -1;
              local_758._328_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              local_758._336_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              local_758._376_8_ = (ForElementType<int> *)0x0;
              local_758._344_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              local_758._352_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
              local_758._360_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
              local_758._368_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
              local_758._384_4_ = 0;
              local_758._388_4_ = 0;
              local_5d0._0_8_ = (FScriptContainerElement *)0x0;
              local_5d0._8_8_ = 0;
              local_5b0 = (void *)0x0;
              local_590 = (ForElementType<FSetElementId>)0x0;
              local_588 = 0;
              local_580 = false;
              local_578._0_8_ = (FScriptContainerElement *)0x0;
              local_578._8_8_ = 0;
              local_558 = (void *)0x0;
              local_550 = 0;
              local_54c = 0x80;
              local_548 = 0xffffffff;
              local_544 = 0;
              local_538 = (void *)0x0;
              local_530 = 0;
              local_528.Data = (FScriptContainerElement *)0x0;
              local_520 = 0;
              local_518.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
              local_518.NumBits = 0;
              local_518.MaxBits = 0x80;
              local_4f8 = 0xffffffff;
              local_4f4 = 0;
              local_4e8 = (void *)0x0;
              local_4e0 = 0;
              local_4d8._0_1_ = true;
              local_4d8._1_1_ = true;
              local_4d0.TypedValue.AllocatorInstance.Data =
                   (ForAnyElementType)(FScriptContainerElement *)0x0;
              local_4d0.TypedValue.ArrayNum = 0;
              local_4d0.TypedValue.ArrayMax = -1;
              local_758._8_8_ = pFVar40;
              local_758._16_8_ = pFVar2;
              local_758._48_8_ = dVar49;
              local_758._128_8_ = dVar49;
              local_758._184_4_ = EVar37;
              local_758._320_8_ = dVar49;
              if (((pFVar2 == (FDynamicMesh3 *)0x0) ||
                  ((FDynamicMesh3 *)local_758._288_8_ == (FDynamicMesh3 *)0x0)) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("MeshA != nullptr && MeshB != nullptr && OutputMesh != nullptr"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Operations\\MeshBoolean.h"
                                      ,0xa7,L""), bVar20)) {
                pcVar5 = (code *)swi(3);
                iVar21 = (*pcVar5)();
                return iVar21;
              }
              local_758[0xf0] = true;
              local_758._280_4_ = 0;
              local_758._225_2_ = 0x100;
              UE::Geometry::FMeshBoolean::Compute((FMeshBoolean *)local_758);
              if (((int)local_e50 <= iVar21) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar5 = (code *)swi(3);
                iVar21 = (*pcVar5)();
                return iVar21;
              }
              local_758._0_8_ = &___7FMeshBoolean_Geometry_UE__6B_;
              if (*(int *)(*(longlong *)(local_e58.Data + (longlong)&pFVar28->AugMesh) + 0x170) == 0
                 ) {
                if ((local_4d0.TypedValue.ArrayMax != -1) &&
                   (local_4d0.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
                {
                  FMemory::Free((void *)local_4d0.TypedValue.AllocatorInstance.Data);
                }
                local_4e0 = 0;
                if (local_4e8 != (void *)0x0) {
                  FMemory::Free(local_4e8);
                }
                uVar36 = local_520 >> 0x20;
                local_520 = local_520 & 0xffffffff00000000;
                if ((int)uVar36 != 0) {
                  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,4,0,&local_528,0,(int *)((longlong)&local_520 + 4));
                }
                local_4f8 = 0xffffffff;
                local_4f4 = 0;
                local_518.NumBits = 0;
                if (0x80 < (uint)local_518.MaxBits) {
                  local_518.MaxBits = 0x80;
                  TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_518,0);
                }
                if (local_518.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
                {
                  FMemory::Free((void *)local_518.AllocatorInstance.SecondaryData);
                }
                if (local_528.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_528.Data);
                }
                local_530 = 0;
                if (local_538 != (void *)0x0) {
                  FMemory::Free(local_538);
                }
                iVar21 = SUB84(local_578._8_8_,4);
                local_578._8_8_ = local_578._8_8_ & 0xffffffff00000000;
                if (iVar21 != 0) {
                  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,4,0,(ForAnyElementType *)local_578,0,(int *)(local_578 + 0xc));
                }
                local_548 = 0xffffffff;
                local_544 = 0;
                local_550 = 0;
                if (0x80 < local_54c) {
                  local_54c = 0x80;
                  TBitArray<FDefaultBitArrayAllocator>::Realloc
                            ((TBitArray<FDefaultBitArrayAllocator> *)(local_578 + 0x10),0);
                }
                if (local_558 != (void *)0x0) {
                  FMemory::Free(local_558);
                }
                if ((FScriptContainerElement *)local_578._0_8_ != (FScriptContainerElement *)0x0) {
                  FMemory::Free((void *)local_578._0_8_);
                }
                local_588 = 0;
                if (local_590 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_590);
                }
                iVar21 = SUB84(local_5d0._8_8_,4);
                local_5d0._8_8_ = local_5d0._8_8_ & 0xffffffff00000000;
                if (iVar21 != 0) {
                  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,0,(ForAnyElementType *)local_5d0,0,(int *)(local_5d0 + 0xc));
                }
                uVar44 = local_5a8._4_4_;
                uStack_5a0 = 0xffffffff;
                local_5a8 = (ulonglong)local_5a8._4_4_ << 0x20;
                if (0x80 < uVar44) {
                  local_5a8 = 0x8000000000;
                  TBitArray<FDefaultBitArrayAllocator>::Realloc
                            ((TBitArray<FDefaultBitArrayAllocator> *)(local_5d0 + 0x10),0);
                }
                if (local_5b0 != (void *)0x0) {
                  FMemory::Free(local_5b0);
                }
                FVar31 = (ForElementType<int>)local_758._376_8_;
                if ((FScriptContainerElement *)local_5d0._0_8_ != (FScriptContainerElement *)0x0) {
                  FMemory::Free((void *)local_5d0._0_8_);
                  FVar31 = (ForElementType<int>)local_758._376_8_;
                }
                goto LAB_14c9c90b0;
              }
              if ((local_4d0.TypedValue.ArrayMax != -1) &&
                 (local_4d0.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free((void *)local_4d0.TypedValue.AllocatorInstance.Data);
              }
              local_4e0 = 0;
              if (local_4e8 != (void *)0x0) {
                FMemory::Free(local_4e8);
              }
              uVar36 = local_520 >> 0x20;
              local_520 = local_520 & 0xffffffff00000000;
              if ((int)uVar36 != 0) {
                Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,4,0,&local_528,0,(int *)((longlong)&local_520 + 4));
              }
              local_4f8 = 0xffffffff;
              local_4f4 = 0;
              local_518.NumBits = 0;
              if (0x80 < (uint)local_518.MaxBits) {
                local_518.MaxBits = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_518,0);
              }
              if (local_518.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)local_518.AllocatorInstance.SecondaryData);
              }
              if (local_528.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_528.Data);
              }
              local_530 = 0;
              if (local_538 != (void *)0x0) {
                FMemory::Free(local_538);
              }
              TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::Empty((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_578,0);
              if (local_558 != (void *)0x0) {
                FMemory::Free(local_558);
              }
              if ((FScriptContainerElement *)local_578._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_578._0_8_);
              }
              local_588 = 0;
              if (local_590 != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_590);
              }
              TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_5d0,0);
              if (local_5b0 != (void *)0x0) {
                FMemory::Free(local_5b0);
              }
              if ((FScriptContainerElement *)local_5d0._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_5d0._0_8_);
              }
              if ((ForElementType<int> *)local_758._376_8_ != (ForElementType<int> *)0x0) {
                FMemory::Free((void *)local_758._376_8_);
              }
              if (1 < (int)(iVar21 + 1U)) break;
              pFVar30 = (FMeshData *)(ulonglong)(iVar21 + 1U);
              pFVar28 = (FMeshData *)&(pFVar28->AugMesh).Vertices;
            }
            if (((int)local_e50 < 1) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar5 = (code *)swi(3);
              iVar21 = (*pcVar5)();
              return iVar21;
            }
            uVar44 = local_e04;
            FVar38.Data = local_e58.Data;
            uVar45 = uVar22;
            if ((int)local_e04 < (int)local_e60) {
              uVar45 = uVar43;
            }
            if ((uVar45 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar5 = (code *)swi(3);
              iVar21 = (*pcVar5)();
              return iVar21;
            }
            pFVar39 = local_e68.Data + (longlong)local_df0 * 8;
            if (pFVar39 != FVar38.Data) {
              TVar3.Ptr = *(FMeshData **)pFVar39;
              *(FMeshData **)pFVar39 = *(FMeshData **)FVar38.Data;
              *(FMeshData **)FVar38.Data = (FMeshData *)0x0;
              if (TVar3.Ptr != (FMeshData *)0x0) {
                *(undefined4 *)&((TVar3.Ptr)->MeshToCollectionFaceMapping).field_0x48 = 0;
                pvVar4 = *(void **)&((TVar3.Ptr)->MeshToCollectionFaceMapping).field_0x40;
                if (pvVar4 != (void *)0x0) {
                  FMemory::Free(pvVar4);
                }
                TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)&(TVar3.Ptr)->MeshToCollectionFaceMapping);
                UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&(TVar3.Ptr)->AugMesh);
                ::operator_delete(TVar3.Ptr,0x330);
              }
            }
            if (((int)local_e50 < 2) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar5 = (code *)swi(3);
              iVar21 = (*pcVar5)();
              return iVar21;
            }
            pFVar39 = local_e58.Data + 8;
            if (((local_e68.Data <= pFVar39) &&
                (pFVar39 < local_e68.Data + (longlong)(int)uStack_e5c * 8)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar5 = (code *)swi(3);
              iVar21 = (*pcVar5)();
              return iVar21;
            }
            if (local_e60 == uStack_e5c) {
              local_e60 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&local_e68,(int *)&uStack_e5c);
            }
            lVar42 = (longlong)(int)local_e60;
            uStack_cf4 = local_e60;
            local_cf8 = uVar44;
            local_e60 = local_e60 + 1;
            *(FMeshData **)(local_e68.Data + lVar42 * 8) = *(FMeshData **)pFVar39;
            *(FMeshData **)pFVar39 = (FMeshData *)0x0;
            local_7e8.SecondaryData = (ForElementType<int>)0x0;
            local_7d0 = 2;
            Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,2,0,&local_7e8,2,&local_7cc);
            local_cf0 = 0;
            uStack_cec = 1;
            FVar31 = (ForElementType<int>)&local_7e8;
            if (local_7e8.SecondaryData != (ForElementType<int>)0x0) {
              FVar31 = local_7e8.SecondaryData;
            }
            *(ulonglong *)FVar31 = CONCAT44(uStack_cf4,local_cf8);
            local_7c8.SecondaryData = (ForElementType<int>)0x0;
            local_7b0 = 2;
            Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,2,0,&local_7c8,2,&local_7ac);
            iVar21 = local_d88;
            local_e44 = 0;
            FVar31 = (ForElementType<int>)&local_7c8;
            if (local_7c8.SecondaryData != (ForElementType<int>)0x0) {
              FVar31 = local_7c8.SecondaryData;
            }
            *(ulonglong *)FVar31 = CONCAT44(uStack_cec,local_cf0);
            local_dc8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_dc8.ArrayNum = 0;
            local_dc8.ArrayMax = 0;
            pFVar30 = pFVar41;
            pFVar28 = pFVar41;
            do {
              if (param_4) {
                uVar45 = (uint)pFVar28;
                uVar44 = uVar22;
                if ((int)uVar45 < local_7d0) {
                  uVar44 = ~uVar45 >> 0x1f;
                }
                if ((uVar44 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar5 = (code *)swi(3);
                  iVar21 = (*pcVar5)();
                  return iVar21;
                }
                FVar31 = (ForElementType<int>)&local_7e8;
                if (local_7e8.SecondaryData != (ForElementType<int>)0x0) {
                  FVar31 = local_7e8.SecondaryData;
                }
                uVar44 = *(uint *)((longlong)FVar31 + (longlong)(int)uVar45 * 4);
                uVar45 = uVar22;
                if ((int)uVar44 < (int)local_e60) {
                  uVar45 = ~uVar44 >> 0x1f;
                }
                if ((uVar45 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar5 = (code *)swi(3);
                  iVar21 = (*pcVar5)();
                  return iVar21;
                }
                bVar20 = SplitIslands(local_dd8,
                                      *(FDynamicMesh3 **)
                                       (local_e68.Data + (longlong)(int)uVar44 * 8),&local_dc8,
                                      dVar15);
                if (bVar20) {
                  lVar42 = (longlong)(int)local_e44;
                  uVar44 = uVar22;
                  if ((int)local_e44 < local_7d0) {
                    uVar44 = ~local_e44 >> 0x1f;
                  }
                  if ((uVar44 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar5 = (code *)swi(3);
                    iVar21 = (*pcVar5)();
                    return iVar21;
                  }
                  FVar31 = (ForElementType<int>)&local_7e8;
                  if (local_7e8.SecondaryData != (ForElementType<int>)0x0) {
                    FVar31 = local_7e8.SecondaryData;
                  }
                  uVar44 = *(uint *)((longlong)FVar31 + lVar42 * 4);
                  uVar45 = uVar22;
                  if ((int)uVar44 < (int)local_e60) {
                    uVar45 = ~uVar44 >> 0x1f;
                  }
                  if ((uVar45 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar5 = (code *)swi(3);
                    iVar21 = (*pcVar5)();
                    return iVar21;
                  }
                  pFVar40 = *(FDynamicMesh3 **)(local_e68.Data + (longlong)(int)uVar44 * 8);
                  if ((local_dc8.ArrayNum < 1) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar5 = (code *)swi(3);
                    iVar21 = (*pcVar5)();
                    return iVar21;
                  }
                  pFVar40[1].VertexNormals.bIsSet = false;
                  UE::Geometry::FDynamicMesh3::operator=
                            (pFVar40,(FDynamicMesh3 *)local_dc8.AllocatorInstance.Data);
                  pFVar30 = (FMeshData *)(ulonglong)(uint)local_dc8.ArrayNum;
                  uVar44 = 1;
                  if (1 < local_dc8.ArrayNum) {
                    do {
                      uVar45 = uVar22;
                      if ((int)uVar44 < (int)pFVar30) {
                        uVar45 = ~uVar44 >> 0x1f;
                      }
                      if ((uVar45 == 0) &&
                         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar20)) {
                        pcVar5 = (code *)swi(3);
                        iVar21 = (*pcVar5)();
                        return iVar21;
                      }
                      pFVar40 = (FDynamicMesh3 *)
                                (local_dc8.AllocatorInstance.Data + (longlong)(int)uVar44 * 0x230);
                      pFVar28 = ::operator_new(0x330);
                      pFVar30 = pFVar41;
                      if (pFVar28 != (FMeshData *)0x0) {
                        local_8d8.Rotation.XY.m128d_f64[0] = (double)pFVar32;
                        local_8d8.Rotation.XY.m128d_f64[1] = dVar6;
                        local_8d8.Rotation.ZW.m128d_f64[0] = dVar48;
                        local_8d8.Rotation.ZW.m128d_f64[1] = (double)pFVar34;
                        local_8d8.Translation.XY.m128d_f64[0] = dVar46;
                        local_8d8.Translation.XY.m128d_f64[1] = dVar7;
                        local_8d8.Translation.ZW.m128d_f64[0] = (double)pFVar8;
                        local_8d8.Translation.ZW.m128d_f64[1] = dVar9;
                        local_8d8.Scale3D.XY.m128d_f64[0] = dVar10;
                        local_8d8.Scale3D.XY.m128d_f64[1] = dVar11;
                        local_8d8.Scale3D.ZW.m128d_f64[0] = (double)pFVar12;
                        local_8d8.Scale3D.ZW.m128d_f64[1] = dVar13;
                        pFVar30 = FMeshData::FMeshData(pFVar28,pFVar40,iVar21,&local_8d8);
                      }
                      local_de0 = pFVar30;
                      if (((local_e68.Data <= (FScriptContainerElement *)&local_de0) &&
                          ((FScriptContainerElement *)&local_de0 <
                           local_e68.Data + (longlong)(int)uStack_e5c * 8)) &&
                         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar20)) {
                        pcVar5 = (code *)swi(3);
                        iVar21 = (*pcVar5)();
                        return iVar21;
                      }
                      if (local_e60 == uStack_e5c) {
                        local_e60 = Core::Private::
                                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                              (0x808,&local_e68,(int *)&uStack_e5c);
                      }
                      uVar45 = local_e60 + 1;
                      *(FMeshData **)(local_e68.Data + (longlong)(int)local_e60 * 8) = local_de0;
                      local_de0 = (FMeshData *)0x0;
                      FVar31 = (ForElementType<int>)&local_7e8;
                      if (local_7e8.SecondaryData != (ForElementType<int>)0x0) {
                        FVar31 = local_7e8.SecondaryData;
                      }
                      local_e24 = local_e60;
                      if ((ulonglong)FVar31 <= &local_e24) {
                        FVar31 = (ForElementType<int>)&local_7e8;
                        if (local_7e8.SecondaryData != (ForElementType<int>)0x0) {
                          FVar31 = local_7e8.SecondaryData;
                        }
                        if ((&local_e24 < (uint *)((longlong)FVar31 + (longlong)local_7cc * 4)) &&
                           (local_e60 = uVar45,
                           bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), uVar45 = local_e60, bVar20)) {
                          pcVar5 = (code *)swi(3);
                          iVar21 = (*pcVar5)();
                          return iVar21;
                        }
                      }
                      local_e60 = uVar45;
                      iVar24 = local_7d0;
                      if (local_7d0 == local_7cc) {
                        iVar24 = Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                           (0x404,&local_7e8,&local_7cc);
                      }
                      pFVar30 = local_de0;
                      local_7d0 = iVar24 + 1;
                      FVar31 = (ForElementType<int>)&local_7e8;
                      if (local_7e8.SecondaryData != (ForElementType<int>)0x0) {
                        FVar31 = local_7e8.SecondaryData;
                      }
                      *(uint *)((longlong)FVar31 + (longlong)iVar24 * 4) = local_e24;
                      if (local_de0 != (FMeshData *)0x0) {
                        *(undefined4 *)
                         &(((FDynamicMesh3 *)((longlong)local_de0 + 0x230))->VertexEdgeLists).
                          FreeBlocks.Blocks.AllocatorInstance.Data = 0;
                        pvVar4 = *(void **)&(((FDynamicMesh3 *)((longlong)local_de0 + 0x230))->
                                            VertexEdgeLists).FreeBlocks;
                        if (pvVar4 != (void *)0x0) {
                          FMemory::Free(pvVar4);
                        }
                        TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ::
                        ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                  ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                    *)&(((FDynamicMesh3 *)((longlong)pFVar30 + 0x230))->VertexUVs).
                                       TypedValue.Blocks.ArrayNum);
                        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&pFVar30->AugMesh);
                        ::operator_delete(pFVar30,0x330);
                      }
                      FVar31 = (ForElementType<int>)&local_7c8;
                      if (local_7c8.SecondaryData != (ForElementType<int>)0x0) {
                        FVar31 = local_7c8.SecondaryData;
                      }
                      if ((ulonglong)FVar31 <= &local_e44) {
                        FVar31 = (ForElementType<int>)&local_7c8;
                        if (local_7c8.SecondaryData != (ForElementType<int>)0x0) {
                          FVar31 = local_7c8.SecondaryData;
                        }
                        if ((&local_e44 < (uint *)((longlong)FVar31 + (longlong)local_7ac * 4)) &&
                           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar20)) {
                          pcVar5 = (code *)swi(3);
                          iVar21 = (*pcVar5)();
                          return iVar21;
                        }
                      }
                      iVar24 = local_7b0;
                      if (local_7b0 == local_7ac) {
                        iVar24 = Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                           (0x404,&local_7c8,&local_7ac);
                      }
                      local_7b0 = iVar24 + 1;
                      FVar31 = (ForElementType<int>)&local_7c8;
                      if (local_7c8.SecondaryData != (ForElementType<int>)0x0) {
                        FVar31 = local_7c8.SecondaryData;
                      }
                      uVar44 = uVar44 + 1;
                      *(uint *)((longlong)FVar31 + (longlong)iVar24 * 4) = local_e44;
                      pFVar30 = (FMeshData *)(ulonglong)(uint)local_dc8.ArrayNum;
                    } while ((int)uVar44 < local_dc8.ArrayNum);
                  }
                }
                else {
                  pFVar30 = (FMeshData *)(ulonglong)(uint)local_dc8.ArrayNum;
                }
              }
              local_e44 = local_e44 + 1;
              pFVar28 = (FMeshData *)(ulonglong)local_e44;
            } while ((int)local_e44 < 2);
            DestructItems<UE::Geometry::FDynamicMesh3,int>
                      ((FDynamicMesh3 *)local_dc8.AllocatorInstance.Data,(int)pFVar30);
            if ((FDynamicMesh3 *)local_dc8.AllocatorInstance.Data != (FDynamicMesh3 *)0x0) {
              FMemory::Free(local_dc8.AllocatorInstance.Data);
            }
            FVar31 = local_7e8.SecondaryData;
            if (local_7c8.SecondaryData != (ForElementType<int>)0x0) {
              FMemory::Free((void *)local_7c8.SecondaryData);
              FVar31 = local_7e8.SecondaryData;
            }
LAB_14c9c90b0:
            if (FVar31 != (ForElementType<int>)0x0) {
              FMemory::Free((void *)FVar31);
            }
            DestructItems<TUniquePtr<UE::PlanarCut::FDynamicMeshCollection::FMeshData,TDefaultDelete<UE::PlanarCut::FDynamicMeshCollection::FMeshData>_>,int>
                      ((TUniquePtr<UE::PlanarCut::FDynamicMeshCollection::FMeshData,TDefaultDelete<UE::PlanarCut::FDynamicMeshCollection::FMeshData>_>
                        *)local_e58.Data,(int)local_e50);
            uVar45 = local_e28;
            if (local_e58.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e58.Data);
              uVar45 = local_e28;
            }
          }
          local_e04 = local_e04 + 1;
          local_df0 = local_df0 + 1;
          if ((longlong)local_d80 <= (longlong)local_df0) goto LAB_14c9c9108;
          pFVar32 = (FScriptContainerElement *)(ulonglong)local_e60;
          pFVar30 = (FMeshData *)(ulonglong)local_e04;
        } while( true );
      }
      goto LAB_14c9c9123;
    }
LAB_14c9c91c7:
    local_7a8.Elements._0_8_ = 0;
    local_7a8.Elements._8_8_ = 0;
    local_7a8.Elements._32_8_ = 0;
    local_7a8.Elements._40_4_ = 0;
    local_7a8.Elements._44_4_ = 0x80;
    local_7a8.Elements._48_4_ = 0xffffffff;
    local_7a8.Elements._52_4_ = 0;
    local_7a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_7a8.HashSize = 0;
    local_dfc = 0;
    if (0 < (int)local_e60) {
      do {
        uVar45 = (uint)pFVar41;
        uVar44 = 0;
        if ((int)uVar45 < (int)local_e60) {
          uVar44 = ~uVar45 >> 0x1f;
        }
        if ((uVar44 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          iVar21 = (*pcVar5)();
          return iVar21;
        }
        local_c08 = &local_dfc;
        local_c10 = (int *)(*(longlong *)(local_e68.Data + (longlong)(int)uVar45 * 8) + 0x230);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  (&local_7a8,&local_c40,(bool *)&local_c10);
        local_dfc = local_dfc + 1;
        pFVar41 = (FMeshData *)(ulonglong)local_dfc;
      } while ((int)local_dfc < (int)local_e60);
    }
    local_d40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d40.ArrayNum = 0;
    local_d40.ArrayMax = 0;
    local_d70[0] = -1;
    TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_d40,local_d70,local_e60);
    iVar21 = -1;
    local_e38.Data = (FScriptContainerElement *)0x0;
    local_c18 = (local_dd8->Meshes).Array.ArrayNum;
    piStack_d60 = &(local_dd8->Meshes).Array.ArrayNum;
    pFVar34 = (local_dd8->Meshes).Array.AllocatorInstance.Data;
    local_d58 = CONCAT44(uStack_c14,local_c18);
    pFVar32 = pFVar34 + (longlong)local_c18 * 8;
    local_e30 = 0;
    local_e18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e18.ArrayNum = 0;
    local_e18.ArrayMax = 0;
    local_df0 = pFVar32;
    local_c28 = pFVar34;
    piStack_c20 = piStack_d60;
    while( true ) {
      local_d68 = pFVar34;
      if (*piStack_d60 != (int)local_d58) {
        local_e47 = 0;
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_e47);
      }
      if (pFVar34 == pFVar32) break;
      lVar42 = *(longlong *)local_d68;
      uVar44 = *(uint *)(lVar42 + 0x230);
      uVar45 = 0;
      if ((int)uVar44 < *(int *)&(param_6->TransformToGeometryIndex).field_0x18) {
        uVar45 = ~uVar44 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        iVar21 = (*pcVar5)();
        return iVar21;
      }
      local_e20[0] = *(int *)(*(longlong *)&(param_6->TransformToGeometryIndex).field_0x10 +
                             (longlong)(int)uVar44 * 4);
      if (param_8) {
        local_e28 = FInternalSurfaceMaterials::GetDefaultMaterialIDForGeometry
                              (local_de8,param_6,local_e20[0]);
      }
      else {
        local_e28 = local_de8->GlobalMaterialID;
      }
      bVar20 = (longlong)local_e30 < 0;
      local_e30 = local_e30 & 0xffffffff00000000;
      iVar24 = 0;
      if (bVar20) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_e38,0,(int *)((longlong)&local_e30 + 4));
        iVar24 = (int)(float)local_e30;
      }
      uVar44 = *(uint *)(lVar42 + 0x230);
      if (local_7a8.HashSize != 0) {
        FVar35 = (ForElementType<FSetElementId>)&local_7a8.Hash;
        if (local_7a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar35 = local_7a8.Hash.SecondaryData;
        }
        iVar23 = *(int *)((longlong)FVar35 + (longlong)(int)(local_7a8.HashSize - 1U & uVar44) * 4);
        do {
          iVar25 = iVar23;
          iVar23 = iVar25;
          if (iVar25 == -1) break;
          iVar23 = *(int *)(local_7a8.Elements._0_8_ + 8 + (longlong)iVar25 * 0x10);
        } while (*(uint *)(local_7a8.Elements._0_8_ + (longlong)iVar25 * 0x10) != uVar44);
        if (iVar25 != -1) {
          do {
            pFVar32 = (FScriptContainerElement *)
                      (local_7a8.Elements._0_8_ + 4 + (longlong)iVar25 * 0x10);
            iVar25 = iVar24;
            if ((local_e38.Data <= pFVar32) &&
               (pFVar32 < local_e38.Data + (longlong)local_e30._4_4_ * 4)) {
              bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar20) {
                pcVar5 = (code *)swi(3);
                iVar21 = (*pcVar5)();
                return iVar21;
              }
              iVar25 = (int)(float)local_e30;
            }
            if (iVar25 == local_e30._4_4_) {
              iVar25 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_e38,(int *)((longlong)&local_e30 + 4));
            }
            iVar24 = iVar25 + 1;
            local_e30 = CONCAT44(local_e30._4_4_,iVar24);
            *(uint *)(local_e38.Data + (longlong)iVar25 * 4) = *(uint *)pFVar32;
            do {
              iVar25 = iVar23;
              pFVar32 = local_df0;
              if (iVar25 == -1) goto LAB_14c9c9569;
              iVar23 = *(int *)(local_7a8.Elements._0_8_ + 8 + (longlong)iVar25 * 0x10);
            } while (*(uint *)(local_7a8.Elements._0_8_ + (longlong)iVar25 * 0x10) != uVar44);
          } while( true );
        }
      }
LAB_14c9c9569:
      if (1 < iVar24) {
        if (((local_e18.AllocatorInstance.Data <= (FScriptContainerElement *)local_e20) &&
            ((FScriptContainerElement *)local_e20 <
             local_e18.AllocatorInstance.Data + (longlong)local_e18.ArrayMax * 4)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          iVar21 = (*pcVar5)();
          return iVar21;
        }
        if (local_e18.ArrayNum == local_e18.ArrayMax) {
          iVar24 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_e18.AllocatorInstance,&local_e18.ArrayMax);
          local_e18.ArrayNum = iVar24;
        }
        lVar42 = (longlong)local_e18.ArrayNum;
        local_e18.ArrayNum = local_e18.ArrayNum + 1;
        *(int *)(local_e18.AllocatorInstance.Data + lVar42 * 4) = local_e20[0];
        uVar33 = (ulonglong)(int)(float)local_e30;
        local_df8 = (float)local_e30;
        local_d80 = local_e38.Data + uVar33 * 4;
        uVar36 = uVar33;
        FVar38.Data = local_e38.Data;
        iVar24 = 0;
        while( true ) {
          pFVar34 = local_d80;
          if ((int)uVar33 != (int)uVar36) {
            local_e46[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_e46);
          }
          pFVar32 = local_df0;
          param_6 = local_db0;
          if (FVar38.Data == pFVar34) break;
          uVar44 = *(uint *)FVar38.Data;
          lVar42 = (longlong)(int)uVar44;
          uVar43 = ~uVar44 >> 0x1f;
          uVar45 = 0;
          if ((int)uVar44 < (int)local_e60) {
            uVar45 = uVar43;
          }
          if ((uVar45 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar5 = (code *)swi(3);
            iVar21 = (*pcVar5)();
            return iVar21;
          }
          local_d78 = *(FDynamicMesh3 **)(local_e68.Data + lVar42 * 8);
          uVar45 = 0;
          if ((int)uVar44 < (int)local_e60) {
            uVar45 = uVar43;
          }
          if ((uVar45 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar5 = (code *)swi(3);
            iVar21 = (*pcVar5)();
            return iVar21;
          }
          local_ce8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_ce8.Data.ArrayNum = 0;
          local_ce8.Data.ArrayMax = 0;
          uVar45 = *(uint *)(*(longlong *)(local_e68.Data + lVar42 * 8) + 0x230);
          ::FString::AppendInt(&local_ce8,iVar24);
          ::FString::FString(&local_bf0,"_");
          pFVar18 = local_db0;
          uVar22 = 0;
          if ((int)uVar45 < (int)local_db0->_padding_) {
            uVar22 = ~uVar45 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar5 = (code *)swi(3);
            iVar21 = (*pcVar5)();
            return iVar21;
          }
          ::FString::ConcatFF(&local_c00,
                              (FString *)((longlong)(int)uVar45 * 0x10 + pFVar18->_padding_),
                              &local_bf0);
          ::FString::ConcatFF(&local_c58,&local_c00,&local_ce8);
          if (local_c00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c00.Data.AllocatorInstance.Data);
          }
          if (local_bf0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_bf0.Data.AllocatorInstance.Data);
          }
          if (local_ce8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_ce8.Data.AllocatorInstance.Data);
          }
          _Src.Data = local_c58.Data.AllocatorInstance.Data;
          local_d50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar23 = local_c58.Data.ArrayNum;
          local_d50.Data.ArrayNum = iVar23;
          if (iVar23 == 0) {
            local_d50.Data.ArrayMax = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar23,0,(ForAnyElementType *)&local_d50,iVar23,&local_d50.Data.ArrayMax)
            ;
            memcpy(local_d50.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar23 * 2);
          }
          uVar45 = 0;
          if ((int)uVar44 < (int)local_e60) {
            uVar45 = uVar43;
          }
          if ((uVar45 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar5 = (code *)swi(3);
            iVar21 = (*pcVar5)();
            return iVar21;
          }
          uVar45 = 0;
          if ((int)uVar44 < (int)local_e60) {
            uVar45 = uVar43;
          }
          iVar23 = *(int *)(*(longlong *)(local_e68.Data + lVar42 * 8) + 0x230);
          if ((uVar45 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar5 = (code *)swi(3);
            iVar21 = (*pcVar5)();
            return iVar21;
          }
          iVar23 = AppendToCollection((TTransform<double> *)
                                      (*(longlong *)(local_e68.Data + lVar42 * 8) + 0x240),local_d78
                                      ,param_3,iVar23,&local_d50,local_db0,local_e28);
          uVar45 = 0;
          if ((int)uVar44 < local_d40.ArrayNum) {
            uVar45 = uVar43;
          }
          if ((uVar45 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar5 = (code *)swi(3);
            iVar21 = (*pcVar5)();
            return iVar21;
          }
          if (iVar21 == -1) {
            iVar21 = iVar23;
          }
          *(int *)(local_d40.AllocatorInstance.Data + lVar42 * 4) = iVar23;
          if (local_c58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c58.Data.AllocatorInstance.Data);
          }
          uVar33 = local_e30 & 0xffffffff;
          FVar38.Data = FVar38.Data + 4;
          uVar36 = (ulonglong)(uint)local_df8;
          iVar24 = iVar24 + 1;
        }
      }
      pFVar34 = local_d68 + 8;
    }
    if ((local_dd0 == (FProgressCancel *)0x0) ||
       (bVar20 = FProgressCancel::Cancelled(local_dd0), !bVar20)) {
      PlanarCut::`anonymous_namespace'::SetUnsetColors(param_6,iVar21,true);
      if (0 < local_e18.ArrayNum) {
        SetGeometryVisibility(local_dd8,param_6,&local_e18,false);
      }
    }
    else {
      iVar21 = -1;
    }
    if (local_e18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e18.AllocatorInstance.Data);
    }
    if (local_e38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e38.Data);
    }
    if (local_d40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d40.AllocatorInstance.Data);
    }
    local_7a8.HashSize = 0;
    if (local_7a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_7a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_7a8.Elements);
LAB_14c9c9a43:
    DestructItems<TUniquePtr<UE::PlanarCut::FDynamicMeshCollection::FMeshData,TDefaultDelete<UE::PlanarCut::FDynamicMeshCollection::FMeshData>_>,int>
              ((TUniquePtr<UE::PlanarCut::FDynamicMeshCollection::FMeshData,TDefaultDelete<UE::PlanarCut::FDynamicMeshCollection::FMeshData>_>
                *)local_e68.Data,local_e60);
    if (local_e68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e68.Data);
    }
  }
  else {
    uVar44 = 0;
    local_ac8.CellMeshes.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_ac8.CellMeshes.Array.ArrayNum = 0;
    local_ac8.CellMeshes.Array.ArrayMax = 0;
    local_ac8.OutsideCellIndex = -1;
    local_ac8.NumUVLayers = 1;
    FCellMeshes::InitEmpty(&local_ac8,&local_da8);
    FCellMeshes::SetNumCells(&local_ac8,2);
    if ((local_ac8.CellMeshes.Array.ArrayNum < 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar5 = (code *)swi(3);
      iVar21 = (*pcVar5)();
      return iVar21;
    }
    pFVar40 = *(FDynamicMesh3 **)local_ac8.CellMeshes.Array.AllocatorInstance.Data;
    local_c40.Value = (int *)pFVar40;
    UE::Geometry::FMeshIndexMappings::FMeshIndexMappings(&local_3a8);
    pFVar16 = local_de8;
    if (0 < local_da0->ArrayNum) {
      fVar52 = fVar52 * __real_3dcccccd;
      this_01 = &local_de8->NoiseSettings;
LAB_14c9c6fa0:
      pTVar19 = local_da0;
      pFVar26 = FText::FText(&local_9d8);
      FProgressCancel::FProgressScope::FProgressScope(&local_af8,local_dd0,fVar52,pFVar26);
      if (local_9d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_9d8.TextData.Reference + 0x10))();
      }
      uVar45 = 0;
      if ((int)uVar44 < pTVar19->ArrayNum) {
        uVar45 = ~uVar44 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        iVar21 = (*pcVar5)();
        return iVar21;
      }
      FPlanarCells::FPlanarCells(&local_bd8,pTVar19->DataPtr + (int)uVar44);
      local_bd8.InternalSurfaceMaterials.GlobalMaterialID = local_de8->GlobalMaterialID;
      local_bd8.InternalSurfaceMaterials.GlobalUVScale = local_de8->GlobalUVScale;
      local_bd8.InternalSurfaceMaterials.bGlobalVisibility = local_de8->bGlobalVisibility;
      if (this_01 != &local_bd8.InternalSurfaceMaterials.NoiseSettings) {
        if ((pFVar16->NoiseSettings).bIsSet == false) {
          if (local_bd8.InternalSurfaceMaterials.NoiseSettings.bIsSet != false) {
            local_bd8.InternalSurfaceMaterials.NoiseSettings.bIsSet = false;
          }
        }
        else {
          pFVar27 = TOptional<FNoiseSettings>::GetValue(this_01);
          local_bd8.InternalSurfaceMaterials.NoiseSettings.TypedValue.Amplitude = pFVar27->Amplitude
          ;
          local_bd8.InternalSurfaceMaterials.NoiseSettings.TypedValue.Frequency = pFVar27->Frequency
          ;
          local_bd8.InternalSurfaceMaterials.NoiseSettings.TypedValue.Octaves = pFVar27->Octaves;
          local_bd8.InternalSurfaceMaterials.NoiseSettings.TypedValue.PointSpacing =
               pFVar27->PointSpacing;
          local_bd8.InternalSurfaceMaterials.NoiseSettings.TypedValue.Lacunarity =
               pFVar27->Lacunarity;
          local_bd8.InternalSurfaceMaterials.NoiseSettings.TypedValue.Persistence =
               pFVar27->Persistence;
          local_bd8.InternalSurfaceMaterials.NoiseSettings.bIsSet = true;
        }
      }
      local_cb8.CellMeshes.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_cb8.CellMeshes.Array.ArrayNum = 0;
      local_cb8.CellMeshes.Array.ArrayMax = 0;
      local_cb8.OutsideCellIndex = -1;
      local_cb8.NumUVLayers = 1;
      FCellMeshes::InitEmpty(&local_cb8,&local_da8);
      local_998._s_0.X = (local_dd8->Bounds).Min.field0_0x0._s_0.X;
      local_998._s_0.Y = (local_dd8->Bounds).Min.field0_0x0._s_0.Y;
      local_998._s_0.Z = (local_dd8->Bounds).Min.field0_0x0._s_0.Z;
      dStack_980 = (local_dd8->Bounds).Max.field0_0x0._s_0.X;
      local_978 = (local_dd8->Bounds).Max.field0_0x0._s_0.Y;
      dStack_970 = (local_dd8->Bounds).Max.field0_0x0._s_0.Z;
      FCellMeshes::MakeOnlyPlanarGroutCell
                (&local_cb8,&local_bd8,(TAxisAlignedBox3<double> *)&local_998._s_0,param_2);
      local_878._0_8_ = 0;
      local_878._40_8_ = 0;
      local_848._0_8_ = 0;
      local_848._40_8_ = 0;
      if ((local_cb8.CellMeshes.Array.ArrayNum < 1) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        iVar21 = (*pcVar5)();
        return iVar21;
      }
      UE::Geometry::FDynamicMeshEditor::AppendMesh
                ((FDynamicMeshEditor *)&local_c40.Value,
                 *(FDynamicMesh3 **)local_cb8.CellMeshes.Array.AllocatorInstance.Data,&local_3a8,
                 &local_848,&local_878,false);
      pFVar17 = local_dd0;
      if (local_dd0 == (FProgressCancel *)0x0) goto LAB_14c9c71c1;
      if (local_dd0->WasCancelled == false) {
        bVar20 = Core::Private::Function::
                 TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                 ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                               *)&local_dd0->CancelF);
        pFVar17->WasCancelled = bVar20;
        if (!bVar20) goto LAB_14c9c71c1;
      }
      FVar38.Data = local_cb8.CellMeshes.Array.AllocatorInstance.Data;
      for (iVar21 = local_cb8.CellMeshes.Array.ArrayNum; iVar21 != 0; iVar21 = iVar21 + -1) {
        pFVar40 = *(FDynamicMesh3 **)FVar38.Data;
        if (pFVar40 != (FDynamicMesh3 *)0x0) {
          UE::Geometry::FDynamicMesh3::~FDynamicMesh3(pFVar40);
          ::operator_delete(pFVar40,0x230);
        }
        FVar38.Data = FVar38.Data + 8;
      }
      iVar21 = -1;
      uVar36 = (ulonglong)local_cb8.CellMeshes.Array._8_8_ >> 0x20;
      local_cb8.CellMeshes.Array._8_8_ = local_cb8.CellMeshes.Array._8_8_ & 0xffffffff00000000;
      if ((int)uVar36 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)&local_cb8,0,&local_cb8.CellMeshes.Array.ArrayMax);
      }
      if (local_cb8.CellMeshes.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_cb8.CellMeshes.Array.AllocatorInstance.Data);
      }
      FPlanarCells::~FPlanarCells(&local_bd8);
      if (local_af8.bEnded == false) {
        FProgressCancel::FProgressScope::Done(&local_af8);
      }
      goto LAB_14c9c75f1;
    }
LAB_14c9c72e6:
    iVar21 = -1;
    pFVar26 = FText::FText(&local_a08);
    FProgressCancel::FProgressScope::FProgressScope(&local_9c8,param_9,__real_3e99999a,pFVar26);
    if (local_a08.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a08.TextData.Reference + 0x10))();
    }
    local_4b8.DegenerateEdgeTolFactor = ___xmm_3eb0c6f7a00000003ff8000000000000;
    local_4b8.SnapTolerance = _UNK_150b37c88;
    local_4b8._padding_ = (longlong)&___7FMeshSelfUnion_Geometry_UE__6B_;
    local_4b8.bCollapseDegenerateEdgesOnCut = true;
    local_4b8.NormalOffset = ___xmm_3fe00000000000003eb0c6f7a0000000;
    local_4b8.WindingThreshold = _UNK_150b37ca8;
    local_4b8.bTrimFlaps = false;
    local_4b8.bTrackAllNewEdges = false;
    local_4b8.Progress = (FProgressCancel *)0x0;
    local_4b8.bPreserveTriangleGroups = true;
    local_4b8.bPreserveVertexUVs = true;
    local_4b8.bPreserveOverlayUVs = true;
    local_4b8.UVDistortTolerance = 1e-06;
    local_4b8.bPreserveVertexNormals = true;
    local_4b8.NormalDistortTolerance = 0.01;
    local_4b8.CreatedBoundaryEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4b8.CreatedBoundaryEdges.ArrayNum = 0;
    local_4b8.CreatedBoundaryEdges.ArrayMax = 0;
    local_4b8.AllNewEdges.Elements._0_8_ = 0;
    local_4b8.AllNewEdges.Elements._8_8_ = 0;
    local_4b8.AllNewEdges.Elements._32_8_ = 0;
    local_4b8.AllNewEdges.Elements._40_4_ = 0;
    local_4b8.AllNewEdges.Elements._44_4_ = 0x80;
    local_4b8.AllNewEdges.Elements._48_4_ = 0xffffffff;
    local_4b8.AllNewEdges.Elements._52_4_ = 0;
    local_4b8.AllNewEdges.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_4b8.AllNewEdges.HashSize = 0;
    local_4b8.SimplificationAngleTolerance = ___xmm_3fd00000000000003fb999999999999a;
    local_4b8.TryToImproveTriQualityThreshold = _UNK_150b37c98;
    local_4b8.Mesh = pFVar40;
    if ((pFVar40 == (FDynamicMesh3 *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("MeshIn != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Operations\\MeshSelfUnion.h"
                            ,0x6f,L""), bVar20)) {
      pcVar5 = (code *)swi(3);
      iVar21 = (*pcVar5)();
      return iVar21;
    }
    local_4b8.bSimplifyAlongNewEdges = true;
    local_4b8.bWeldSharedEdges = false;
    UE::Geometry::FMeshSelfUnion::Compute(&local_4b8);
    FProgressCancel::FProgressScope::Done(&local_9c8);
    if ((param_9 == (FProgressCancel *)0x0) ||
       (bVar20 = FProgressCancel::Cancelled(param_9), !bVar20)) {
      pFVar26 = FText::FText(&local_9f8);
      FProgressCancel::CreateScopeTo(&local_968,param_9,fVar14,pFVar26);
      if (local_9f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_9f8.TextData.Reference + 0x10))();
      }
      if ((local_ac8.CellMeshes.Array.ArrayNum < 2) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        iVar21 = (*pcVar5)();
        return iVar21;
      }
      UE::Geometry::FDynamicMesh3::operator=
                (*(FDynamicMesh3 **)(local_ac8.CellMeshes.Array.AllocatorInstance.Data + 8),pFVar40)
      ;
      local_ac8.OutsideCellIndex = 1;
      local_d98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d98.ArrayNum = 0;
      local_d98.ArrayMax = 0;
      local_d00 = 0;
      uStack_cfc = 0xffffffff;
      iVar21 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_d98.AllocatorInstance,&local_d98.ArrayMax);
      local_d98.ArrayNum = iVar21 + 1;
      *(ulonglong *)(local_d98.AllocatorInstance.Data + (longlong)iVar21 * 8) =
           CONCAT44(uStack_cfc,local_d00);
      iVar21 = CutWithCellMeshes(local_dd8,local_de8,&local_d98,&local_ac8,param_4,local_db0,param_8
                                 ,param_3);
      if (local_d98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d98.AllocatorInstance.Data);
      }
      if (local_968.bEnded == false) {
        FProgressCancel::FProgressScope::Done(&local_968);
      }
      if (local_968.SavedProgressData.Message.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_968.SavedProgressData.Message.TextData.Reference + 0x10))();
      }
    }
    local_4b8._padding_ = (longlong)&___7FMeshSelfUnion_Geometry_UE__6B_;
    local_4b8.AllNewEdges.HashSize = 0;
    if (local_4b8.AllNewEdges.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_4b8.AllNewEdges.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_4b8.AllNewEdges.Elements);
    if (local_4b8.CreatedBoundaryEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.CreatedBoundaryEdges.AllocatorInstance.Data);
    }
    local_af8.SavedProgressData.Message.TextData.Reference =
         local_9c8.SavedProgressData.Message.TextData.Reference;
    if (local_9c8.bEnded == false) {
      FProgressCancel::FProgressScope::Done(&local_9c8);
      local_af8.SavedProgressData.Message.TextData.Reference =
           local_9c8.SavedProgressData.Message.TextData.Reference;
    }
LAB_14c9c75f1:
    if (local_af8.SavedProgressData.Message.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_af8.SavedProgressData.Message.TextData.Reference + 0x10))();
    }
    UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&local_3a8);
    TIndirectArray<UE::PlanarCut::FCellMeshes::FCellInfo,TSizedDefaultAllocator<32>_>::
    ~TIndirectArray<UE::PlanarCut::FCellMeshes::FCellInfo,TSizedDefaultAllocator<32>_>
              (&local_ac8.CellMeshes);
  }
  return iVar21;
LAB_14c9c9108:
  uVar50 = (undefined4)__real_3f847ae147ae147b;
  uVar51 = (undefined4)((ulonglong)__real_3f847ae147ae147b >> 0x20);
  param_1 = local_da0;
  fVar52 = local_df8;
  uVar44 = local_e00;
LAB_14c9c9123:
  TIndirectArray<UE::PlanarCut::FCellMeshes::FCellInfo,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<UE::PlanarCut::FCellMeshes::FCellInfo,TSizedDefaultAllocator<32>_>
            (&local_a68.CellMeshes);
  if (local_b68.PlaneBoundaryVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b68.PlaneBoundaryVertices.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             local_b68.PlaneBoundaries.AllocatorInstance.Data,local_b68.PlaneBoundaries.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_b68.PlaneBoundaries.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_b68.PlaneBoundaries.AllocatorInstance.Data);
  }
  if (local_b68.PlaneCells.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b68.PlaneCells.AllocatorInstance.Data);
  }
  if (local_b68.Planes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b68.Planes.AllocatorInstance.Data);
  }
  if (local_908.bEnded == false) {
    FProgressCancel::FProgressScope::Done(&local_908);
  }
  if (local_908.SavedProgressData.Message.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_908.SavedProgressData.Message.TextData.Reference + 0x10))();
  }
  local_e00 = uVar44 + 1;
  pFVar30 = (FMeshData *)(ulonglong)local_e00;
  param_6 = local_db0;
  param_3 = (double)local_d78;
  if (param_1->ArrayNum <= (int)local_e00) goto LAB_14c9c91c7;
  goto LAB_14c9c78a2;
LAB_14c9c71c1:
  FVar38.Data = local_cb8.CellMeshes.Array.AllocatorInstance.Data;
  for (iVar21 = local_cb8.CellMeshes.Array.ArrayNum; iVar21 != 0; iVar21 = iVar21 + -1) {
    pFVar2 = *(FDynamicMesh3 **)FVar38.Data;
    if (pFVar2 != (FDynamicMesh3 *)0x0) {
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(pFVar2);
      ::operator_delete(pFVar2,0x230);
    }
    FVar38.Data = FVar38.Data + 8;
  }
  uVar36 = (ulonglong)local_cb8.CellMeshes.Array._8_8_ >> 0x20;
  local_cb8.CellMeshes.Array._8_8_ = local_cb8.CellMeshes.Array._8_8_ & 0xffffffff00000000;
  if ((int)uVar36 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&local_cb8,0,&local_cb8.CellMeshes.Array.ArrayMax);
  }
  if (local_cb8.CellMeshes.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cb8.CellMeshes.Array.AllocatorInstance.Data);
  }
  if (local_bd8.PlaneBoundaryVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bd8.PlaneBoundaryVertices.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             local_bd8.PlaneBoundaries.AllocatorInstance.Data,local_bd8.PlaneBoundaries.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_bd8.PlaneBoundaries.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_bd8.PlaneBoundaries.AllocatorInstance.Data);
  }
  if (local_bd8.PlaneCells.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bd8.PlaneCells.AllocatorInstance.Data);
  }
  if (local_bd8.Planes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bd8.Planes.AllocatorInstance.Data);
  }
  if (local_af8.bEnded == false) {
    FProgressCancel::FProgressScope::Done(&local_af8);
  }
  if (local_af8.SavedProgressData.Message.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_af8.SavedProgressData.Message.TextData.Reference + 0x10))();
  }
  uVar44 = uVar44 + 1;
  param_9 = local_dd0;
  if (local_da0->ArrayNum <= (int)uVar44) goto LAB_14c9c72e6;
  goto LAB_14c9c6fa0;
}

// FillVertexHash @ 14c9cef80

void __thiscall
UE::PlanarCut::FDynamicMeshCollection::FillVertexHash
          (FDynamicMeshCollection *this,FDynamicMesh3 *param_1,TPointHashGrid3<int,double> *param_2)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint local_res10 [2];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 *local_98;
  uint *local_90;
  
  dVar4 = __real_41f0000000000000;
  uVar7 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
          (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  uVar6 = 0;
  if ((uVar7 != 0) &&
     (pFVar2 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar6 = 0,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar5 = 1;
    uVar6 = 1;
    if (1 < (int)uVar7) {
      do {
        lVar3 = *(longlong *)(pFVar2 + (ulonglong)(uVar5 >> 9) * 8);
        if ((*(short *)(lVar3 + (ulonglong)(uVar5 & 0x1ff) * 2) != 0) &&
           (uVar6 = uVar5, *(short *)(lVar3 + (ulonglong)(uVar5 & 0x1ff) * 2) != -1)) break;
        uVar5 = uVar5 + 1;
        uVar6 = uVar5;
      } while ((int)uVar5 < (int)uVar7);
    }
  }
  if (uVar6 != uVar7) {
    local_98 = &local_a8;
    local_90 = local_res10;
LAB_14c9cf050:
    do {
      lVar3 = *(longlong *)
               ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8);
      pdVar1 = (double *)(lVar3 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
      dVar10 = *pdVar1;
      dVar9 = pdVar1[1];
      local_res10[0] = uVar6;
      dVar8 = FGenericPlatformMath::Fmod
                        (*(double *)(lVar3 + 0x10 + (ulonglong)(uVar6 & 0x1ff) * 0x18) /
                         (param_2->Indexer).CellSize,dVar4);
      if (dVar8 < 0.0) {
        dVar8 = dVar8 + dVar4;
      }
      dVar9 = FGenericPlatformMath::Fmod(dVar9 / (param_2->Indexer).CellSize,dVar4);
      if (dVar9 < 0.0) {
        dVar9 = dVar9 + dVar4;
      }
      dVar10 = FGenericPlatformMath::Fmod(dVar10 / (param_2->Indexer).CellSize,dVar4);
      if (dVar10 < 0.0) {
        dVar10 = dVar10 + dVar4;
      }
      local_a8 = (undefined4)(longlong)dVar10;
      local_a4 = (undefined4)(longlong)dVar9;
      local_a0 = (undefined4)(longlong)dVar8;
      TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&>_>
                ((TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                  *)param_2,
                 (TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&> *)&stack0x00000020,
                 (bool *)&local_98);
      uVar6 = uVar6 + 1;
      if ((int)uVar6 < (int)uVar7) {
        pFVar2 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          if ((*(short *)(*(longlong *)(pFVar2 + (ulonglong)(uVar6 >> 9) * 8) +
                         (ulonglong)(uVar6 & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)(pFVar2 + (ulonglong)(uVar6 >> 9) * 8) +
                        (ulonglong)(uVar6 & 0x1ff) * 2) != -1)) goto LAB_14c9cf050;
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar7);
      }
    } while (uVar6 != uVar7);
  }
  return;
}

// Init @ 14c9d3a20

void __thiscall
UE::PlanarCut::FDynamicMeshCollection::Init
          (FDynamicMeshCollection *this,FGeometryCollection *param_1,
          TManagedArray<UE::Math::TTransform<float>_> *param_2,TArrayView<int_const_,int> *param_3,
          TTransform<double> *param_4,bool param_5)

{
  int iVar1;
  TTransform<float> *pTVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  undefined4 uStack_dc;
  TArrayView<UE::Math::TTransform<float>_const_,int> local_d8;
  TTransform<double> local_c8 [2];
  
  iVar1 = *(int *)&param_2->field_0x18;
  dVar4 = (param_4->Rotation).XY.m128d_f64[0];
  dVar5 = (param_4->Rotation).XY.m128d_f64[1];
  dVar6 = (param_4->Rotation).ZW.m128d_f64[0];
  dVar7 = (param_4->Rotation).ZW.m128d_f64[1];
  dVar8 = (param_4->Translation).XY.m128d_f64[0];
  dVar9 = (param_4->Translation).XY.m128d_f64[1];
  dVar10 = (param_4->Translation).ZW.m128d_f64[0];
  dVar11 = (param_4->Translation).ZW.m128d_f64[1];
  dVar12 = (param_4->Scale3D).XY.m128d_f64[0];
  dVar13 = (param_4->Scale3D).XY.m128d_f64[1];
  dVar14 = (param_4->Scale3D).ZW.m128d_f64[0];
  dVar15 = (param_4->Scale3D).ZW.m128d_f64[1];
  pTVar2 = *(TTransform<float> **)&param_2->field_0x10;
  if (iVar1 < 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar16) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_d8._12_4_ = uStack_dc;
  local_d8.ArrayNum = iVar1;
  local_d8.DataPtr = pTVar2;
  local_c8[0].Rotation.XY.m128d_f64[0] = dVar4;
  local_c8[0].Rotation.XY.m128d_f64[1] = dVar5;
  local_c8[0].Rotation.ZW.m128d_f64[0] = dVar6;
  local_c8[0].Rotation.ZW.m128d_f64[1] = dVar7;
  local_c8[0].Translation.XY.m128d_f64[0] = dVar8;
  local_c8[0].Translation.XY.m128d_f64[1] = dVar9;
  local_c8[0].Translation.ZW.m128d_f64[0] = dVar10;
  local_c8[0].Translation.ZW.m128d_f64[1] = dVar11;
  local_c8[0].Scale3D.XY.m128d_f64[0] = dVar12;
  local_c8[0].Scale3D.XY.m128d_f64[1] = dVar13;
  local_c8[0].Scale3D.ZW.m128d_f64[0] = dVar14;
  local_c8[0].Scale3D.ZW.m128d_f64[1] = dVar15;
  InitTemplate<UE::Math::TTransform<float>_>(this,param_1,&local_d8,param_3,local_c8,param_5);
  return;
}

// Init @ 14c9d3b60

void __thiscall
UE::PlanarCut::FDynamicMeshCollection::Init
          (FDynamicMeshCollection *this,FGeometryCollection *param_1,
          TArrayView<UE::Math::TTransform<float>_const_,int> *param_2,
          TArrayView<int_const_,int> *param_3,TTransform<double> *param_4,bool param_5)

{
  TArrayView<UE::Math::TTransform<float>_const_,int> local_78;
  TTransform<double> local_68;
  
  local_68.Rotation.XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (param_4->Rotation).XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (param_4->Rotation).ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (param_4->Rotation).ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (param_4->Translation).XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (param_4->Translation).XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (param_4->Translation).ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (param_4->Translation).ZW.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (param_4->Scale3D).XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (param_4->Scale3D).XY.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (param_4->Scale3D).ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (param_4->Scale3D).ZW.m128d_f64[1];
  local_78.DataPtr = param_2->DataPtr;
  local_78.ArrayNum = param_2->ArrayNum;
  local_78._12_4_ = *(undefined4 *)&param_2->field_0xc;
  InitTemplate<UE::Math::TTransform<float>_>(this,param_1,&local_78,param_3,&local_68,param_5);
  return;
}

// Init @ 14c9d3be0

void __thiscall
UE::PlanarCut::FDynamicMeshCollection::Init
          (FDynamicMeshCollection *this,FGeometryCollection *param_1,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_2,
          TArrayView<int_const_,int> *param_3,TTransform<double> *param_4,bool param_5)

{
  TArrayView<UE::Math::TTransform<double>_const_,int> local_78;
  TTransform<double> local_68;
  
  local_68.Rotation.XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (param_4->Rotation).XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (param_4->Rotation).ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (param_4->Rotation).ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (param_4->Translation).XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (param_4->Translation).XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (param_4->Translation).ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (param_4->Translation).ZW.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (param_4->Scale3D).XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (param_4->Scale3D).XY.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (param_4->Scale3D).ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (param_4->Scale3D).ZW.m128d_f64[1];
  local_78.DataPtr = param_2->DataPtr;
  local_78.ArrayNum = param_2->ArrayNum;
  local_78._12_4_ = *(undefined4 *)&param_2->field_0xc;
  InitTemplate<UE::Math::TTransform<double>_>(this,param_1,&local_78,param_3,&local_68,param_5);
  return;
}

// IsNeighboring @ 14c9d5750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::PlanarCut::FDynamicMeshCollection::IsNeighboring
          (FDynamicMeshCollection *this,FDynamicMesh3 *param_1,TPointHashGrid3<int,double> *param_2,
          TAxisAlignedBox3<double> *param_3,FDynamicMesh3 *param_4,
          TPointHashGrid3<int,double> *param_5,TAxisAlignedBox3<double> *param_6)

{
  double *pdVar1;
  undefined8 uVar2;
  TPointHashGrid3<int,double> *this_00;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [8];
  int local_190 [2];
  FDynamicMesh3 *local_188;
  undefined8 uStack_180;
  TPointHashGrid3<int,double> *local_178 [3];
  TVector<double> *local_160;
  code *local_158;
  undefined1 *local_150;
  code *local_148;
  TPointHashGrid3<int,double> **local_140;
  TTuple<int,double> local_138;
  TVector<double> local_128;
  undefined1 local_108 [32];
  longlong local_e8 [3];
  longlong *local_d0;
  FRefCountVector *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [40];
  longlong *local_90;
  undefined1 local_88 [48];
  IndexEnumerable local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  uStack_180 = param_4;
  local_178[1] = param_5;
  local_188 = param_1;
  local_178[0] = param_2;
  if ((((param_1 == (FDynamicMesh3 *)0x0) || (param_4 == (FDynamicMesh3 *)0x0)) ||
      (param_2 == (TPointHashGrid3<int,double> *)0x0)) ||
     (param_5 == (TPointHashGrid3<int,double> *)0x0)) {
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5943927746286587005>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                       ,0xc7d,"Mesh[0] && Mesh[1] && VertHash[0] && VertHash[1]");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
  }
  else {
    dVar4 = (param_6->Max).field0_0x0._s_0.X;
    dVar5 = (param_6->Max).field0_0x0._s_0.Y;
    dVar6 = (param_6->Max).field0_0x0._s_0.Z;
    if (((((param_3->Min).field0_0x0._s_0.X <= dVar4 && dVar4 != (param_3->Min).field0_0x0._s_0.X)
         && ((param_6->Min).field0_0x0._s_0.X < (param_3->Max).field0_0x0._s_0.X)) &&
        ((pdVar1 = &(param_3->Min).field0_0x0._s_0.Y, *pdVar1 <= dVar5 && dVar5 != *pdVar1 &&
         (((param_6->Min).field0_0x0._s_0.Y < (param_3->Max).field0_0x0._s_0.Y &&
          (pdVar1 = &(param_3->Min).field0_0x0._s_0.Z, *pdVar1 <= dVar6 && dVar6 != *pdVar1)))))) &&
       ((param_6->Min).field0_0x0._s_0.Z < (param_3->Max).field0_0x0._s_0.Z)) {
      lVar14 = 0;
      if ((param_4->VertexRefCounts).UsedCount < (param_1->VertexRefCounts).UsedCount) {
        lVar13 = lVar14;
        lVar14 = 8;
      }
      else {
        lVar13 = 8;
      }
      uVar2 = *(undefined8 *)((longlong)&local_188 + lVar13);
      UE::Geometry::FDynamicMesh3::VerticesItr
                (*(FDynamicMesh3 **)((longlong)&local_188 + lVar14),
                 (MappedEnumerable<UE::Math::TVector<double>_> *)local_88);
      UE::Geometry::FRefCountVector::MappedEnumerable<UE::Math::TVector<double>_>::begin
                ((MappedEnumerable<UE::Math::TVector<double>_> *)local_88,
                 (MappedIterator<int,UE::Math::TVector<double>,UE::Geometry::FRefCountVector::IndexIterator>
                  *)local_108);
      local_188 = (FDynamicMesh3 *)local_58.Vector;
      iVar11 = ((local_58.Vector)->RefCounts).CurBlock * 0x200 +
               ((local_58.Vector)->RefCounts).CurBlockUsed;
      uStack_180 = (FDynamicMesh3 *)CONCAT44(iVar11,iVar11);
      local_b8._0_8_ = 0;
      local_90 = (longlong *)0x0;
      local_c8 = local_58.Vector;
      uStack_c0 = uStack_180;
      TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
                ((TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_b8,
                 (TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_88);
      dVar4 = __real_3e7ad7f29abcaf48;
      if ((int)local_108._8_8_ != (int)uStack_c0) {
        this_00 = *(TPointHashGrid3<int,double> **)((longlong)local_178 + lVar13);
        do {
          local_190[0] = (int)local_108._8_8_;
          Core::Private::Function::CheckCallable((void *)local_108._16_8_);
          uVar7 = local_108._16_8_;
          plVar12 = local_e8;
          if (local_d0 != (longlong *)0x0) {
            plVar12 = local_d0;
          }
          uVar10 = (**(code **)(*plVar12 + 8))();
          (*(code *)uVar7)(&local_128,uVar10,local_190);
          local_160 = &local_128;
          local_150 = local_198;
          local_158 = Core::Private::Function::
                      TFunctionRefCaller<`UE::Geometry::TPointHashGrid3<int,double>::FindNearestInRadius'::__l2::<lambda_1>,bool,int_const_&>
                      ::Call;
          local_140 = local_178 + 2;
          local_148 = Core::Private::Function::
                      TFunctionRefCaller<`UE::PlanarCut::FDynamicMeshCollection::IsNeighboring'::__l15::<lambda_1>,double,int_const_&>
                      ::Call;
          local_178[2] = (TPointHashGrid3<int,double> *)uVar2;
          UE::Geometry::TPointHashGrid3<int,double>::FindInRadiusHelper<0>
                    (this_00,&local_138,&local_128,dVar4,
                     (TFunctionRef<double___cdecl(int_const_&)> *)&local_148,
                     (TFunctionRef<bool___cdecl(int_const_&)> *)&local_158);
          if (local_138._0_4_ != -1) {
            if (local_b8._0_8_ != 0) {
              plVar12 = (longlong *)(local_b8 + 0x10);
              if (local_90 != (longlong *)0x0) {
                plVar12 = local_90;
              }
              (**(code **)(*plVar12 + 0x10))();
            }
            if ((code *)local_108._16_8_ != (code *)0x0) {
              plVar12 = local_e8;
              if (local_d0 != (longlong *)0x0) {
                plVar12 = local_d0;
              }
              (**(code **)(*plVar12 + 0x10))();
            }
            if (local_88._0_8_ != 0) {
              plVar12 = (longlong *)(local_88 + 0x10);
              if ((longlong *)local_88._40_8_ != (longlong *)0x0) {
                plVar12 = (longlong *)local_88._40_8_;
              }
              (**(code **)(*plVar12 + 0x10))();
            }
            return true;
          }
          UE::Geometry::FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_108);
        } while ((int)local_108._8_8_ != (int)uStack_c0);
      }
      if (local_b8._0_8_ != 0) {
        plVar12 = (longlong *)(local_b8 + 0x10);
        if (local_90 != (longlong *)0x0) {
          plVar12 = local_90;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if ((code *)local_108._16_8_ != (code *)0x0) {
        plVar12 = local_e8;
        if (local_d0 != (longlong *)0x0) {
          plVar12 = local_d0;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (local_88._0_8_ != 0) {
        plVar12 = (longlong *)(local_88 + 0x10);
        if ((longlong *)local_88._40_8_ != (longlong *)0x0) {
          plVar12 = (longlong *)local_88._40_8_;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
    }
  }
  return false;
}

// SetGeometryVisibility @ 14c9e0300

void __thiscall
UE::PlanarCut::FDynamicMeshCollection::SetGeometryVisibility
          (FDynamicMeshCollection *this,FGeometryCollection *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  
  local_res18 = param_2->ArrayNum;
  uVar7 = (ulonglong)(int)local_res18;
  pFVar12 = (param_2->AllocatorInstance).Data;
  pFVar1 = pFVar12 + uVar7 * 4;
  while( true ) {
    if (param_2->ArrayNum != (int)uVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar12 == pFVar1) break;
    uVar11 = *(uint *)pFVar12;
    uVar6 = 0;
    if ((int)uVar11 < *(int *)&(param_1->FaceStart).field_0x18) {
      uVar6 = ~uVar11 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar6 = 0;
    if ((int)uVar11 < *(int *)&(param_1->FaceCount).field_0x18) {
      uVar6 = ~uVar11 >> 0x1f;
    }
    iVar9 = *(int *)((longlong)(int)uVar11 * 4 + *(longlong *)&(param_1->FaceStart).field_0x10);
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar10 = *(int *)(*(longlong *)&(param_1->FaceCount).field_0x10 + (longlong)(int)uVar11 * 4) +
             iVar9;
    if (iVar9 < iVar10) {
      bVar3 = (byte)iVar9 & 0x1f;
      uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
      do {
        if ((iVar9 < 0) || (*(int *)&(param_1->Visible).field_0x28 <= iVar9)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        puVar8 = *(undefined1 **)&(param_1->Visible).field_0x20;
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &(param_1->Visible).field_0x10;
        }
        iVar5 = iVar9;
        if (iVar9 < 0) {
          iVar5 = iVar9 + 0x1f;
        }
        if (param_3) {
          uVar6 = *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) | uVar11;
        }
        else {
          uVar6 = *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & ~uVar11;
        }
        iVar9 = iVar9 + 1;
        uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
        *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) = uVar6;
      } while (iVar9 < iVar10);
    }
    uVar7 = (ulonglong)local_res18;
    pFVar12 = pFVar12 + 4;
  }
  return;
}

// SplitAllIslands @ 14c9e4860

int __thiscall
UE::PlanarCut::FDynamicMeshCollection::SplitAllIslands
          (FDynamicMeshCollection *this,FGeometryCollection *param_1,double param_2)

{
  FDynamicMesh3 *pFVar1;
  code *pcVar2;
  double dVar3;
  ForAnyElementType _Src;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FDynamicMesh3 *pFVar12;
  undefined1 local_res20 [8];
  undefined4 local_f8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_f0;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> local_e0;
  FString local_d0;
  FString local_c0;
  undefined1 local_b0 [16];
  int local_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  int *piStack_90;
  undefined8 local_88;
  FScriptContainerElement *local_80;
  FString local_78;
  FString local_68 [3];
  
  dVar3 = __real_3f50624dd2f1a9fc;
  local_a0 = (this->Meshes).Array.ArrayNum;
  pFVar11 = (this->Meshes).Array.AllocatorInstance.Data;
  local_b0._8_8_ = &(this->Meshes).Array.ArrayNum;
  pFVar9 = pFVar11 + (longlong)local_a0 * 8;
  iVar6 = -1;
  local_88 = CONCAT44(uStack_9c,local_a0);
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  local_b0._0_8_ = pFVar11;
  piStack_90 = (int *)local_b0._8_8_;
  local_80 = pFVar9;
  do {
    uVar10 = 0;
    local_98 = pFVar11;
    if (*piStack_90 != (int)local_88) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20)
      ;
    }
    if (pFVar11 == pFVar9) {
      if (0 < local_f0.ArrayNum) {
        SetGeometryVisibility(this,param_1,&local_f0,false);
      }
      if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.AllocatorInstance.Data);
      }
      return iVar6;
    }
    pFVar1 = *(FDynamicMesh3 **)local_98;
    uVar7 = (uint)pFVar1[1]._padding_;
    uVar5 = 0;
    if ((int)uVar7 < *(int *)&(param_1->TransformToGeometryIndex).field_0x18) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
    local_f8[0] = *(undefined4 *)
                   (*(longlong *)&(param_1->TransformToGeometryIndex).field_0x10 +
                   (longlong)(int)uVar7 * 4);
    local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.ArrayNum = 0;
    local_e0.ArrayMax = 0;
    bVar4 = SplitIslands(this,pFVar1,&local_e0,dVar3);
    if (bVar4) {
      if (0 < local_e0.ArrayNum) {
        do {
          uVar7 = 0;
          if ((int)uVar10 < local_e0.ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
          uVar7 = (uint)pFVar1[1]._padding_;
          local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar12 = (FDynamicMesh3 *)
                    (local_e0.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x230);
          local_c0.Data.ArrayNum = 0;
          local_c0.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_c0,uVar10);
          ::FString::FString((FString *)local_b0,"_");
          uVar5 = 0;
          if ((int)uVar7 < (int)param_1->_padding_) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
          ::FString::ConcatFF(local_68,(FString *)((longlong)(int)uVar7 * 0x10 + param_1->_padding_)
                              ,(FString *)local_b0);
          ::FString::ConcatFF(&local_78,local_68,&local_c0);
          if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
          }
          if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_b0._0_8_);
          }
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
          _Src.Data = local_78.Data.AllocatorInstance.Data;
          local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar8 = local_78.Data.ArrayNum;
          local_d0.Data.ArrayNum = iVar8;
          if (iVar8 == 0) {
            local_d0.Data.ArrayMax = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar8,0,(ForAnyElementType *)&local_d0,iVar8,&local_d0.Data.ArrayMax);
            memcpy(local_d0.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar8 * 2);
          }
          iVar8 = AppendToCollection((TTransform<double> *)&pFVar1[1].Vertices.Blocks,pFVar12,
                                     param_2,(int)pFVar1[1]._padding_,&local_d0,param_1,0);
          if (iVar6 == -1) {
            iVar6 = iVar8;
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          uVar10 = uVar10 + 1;
          pFVar9 = local_80;
        } while ((int)uVar10 < local_e0.ArrayNum);
      }
      if (((local_f0.AllocatorInstance.Data <= (FScriptContainerElement *)local_f8) &&
          ((FScriptContainerElement *)local_f8 <
           local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      iVar8 = local_f0.ArrayNum;
      if (local_f0.ArrayNum == local_f0.ArrayMax) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
      }
      local_f0.ArrayNum = iVar8 + 1;
      *(undefined4 *)(local_f0.AllocatorInstance.Data + (longlong)iVar8 * 4) = local_f8[0];
    }
    DestructItems<UE::Geometry::FDynamicMesh3,int>
              ((FDynamicMesh3 *)local_e0.AllocatorInstance.Data,local_e0.ArrayNum);
    if ((FDynamicMesh3 *)local_e0.AllocatorInstance.Data != (FDynamicMesh3 *)0x0) {
      FMemory::Free(local_e0.AllocatorInstance.Data);
    }
    pFVar11 = local_98 + 8;
  } while( true );
}

// SplitIslands @ 14c9e5040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::PlanarCut::FDynamicMeshCollection::SplitIslands
          (FDynamicMeshCollection *this,FDynamicMesh3 *param_1,
          TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> *param_2,double param_3)

{
  double *pdVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStackY_698 [32];
  bool local_667 [7];
  TArray<bool,TSizedDefaultAllocator<32>_> local_660;
  undefined1 local_650 [4];
  uint local_64c;
  FDisjointSet local_648;
  int local_638 [2];
  uint local_630;
  IndexIterator local_628;
  uint local_618;
  uint local_614;
  uint local_610;
  TMeshSpatialSort<UE::Geometry::FDynamicMesh3> local_608;
  TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&> local_5b8;
  FScriptContainerElement *local_5a8;
  FScriptContainerElement *local_5a0;
  FDisjointSet *local_598;
  uint *local_590;
  code *local_588;
  undefined1 *local_580;
  code *local_578;
  FDisjointSet **local_570;
  code *local_568;
  FDynamicMesh3 **local_560;
  FVector3i *local_558;
  uint *local_550;
  FDynamicMesh3 *local_548;
  FDisjointSet *local_540;
  code *local_538;
  FDynamicMesh3 **local_530;
  FDynamicMesh3 *local_528;
  int iStack_520;
  undefined4 uStack_51c;
  TVector<double>_u_0 local_518;
  FVector3i local_500;
  IndexIterator local_4f0;
  IndexIterator local_4e0;
  FDynamicMesh3 *local_4d0;
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_4a8;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_478;
  undefined1 local_448 [32];
  longlong local_428 [3];
  longlong *local_410;
  undefined1 local_408 [64];
  void *local_3c8;
  undefined4 local_3c0;
  undefined1 local_3b8 [64];
  void *local_378;
  undefined4 local_370;
  undefined2 local_368;
  undefined1 local_360 [64];
  void *local_320;
  undefined4 local_318;
  undefined1 local_310 [64];
  void *local_2d0;
  undefined4 local_2c8;
  undefined2 local_2c0;
  undefined1 local_2b8 [64];
  void *local_278;
  undefined4 local_270;
  undefined1 local_268 [64];
  void *local_228;
  undefined4 local_220;
  undefined2 local_218;
  undefined1 local_210 [64];
  void *local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0 [64];
  void *local_180;
  undefined4 local_178;
  undefined2 local_170;
  ForAnyElementType local_168;
  undefined8 local_160;
  ForAnyElementType local_158;
  undefined8 local_150;
  IndexIterator local_148;
  undefined1 local_138 [40];
  longlong *local_110;
  undefined1 local_108 [48];
  IndexEnumerable local_d8;
  undefined1 local_c8 [72];
  int local_80;
  TWrapAroundGridIndexer3<double> local_70 [3];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_698;
  UE::Geometry::TPointHashGrid3<int,double>::TPointHashGrid3<int,double>
            ((TPointHashGrid3<int,double> *)local_c8,param_3 * __real_4024000000000000,-1);
  local_648.Parents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_648.Parents.ArrayNum = 0;
  local_648.Parents.ArrayMax = 0;
  FDisjointSet::Init(&local_648,
                     (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
            (&local_628,&param_1->VertexRefCounts,0,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  iVar20 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
            (&local_4f0,&param_1->VertexRefCounts,iVar20,iVar20);
  if (local_628._8_4_ != local_4f0._8_4_) {
    local_580 = local_650;
    local_588 = Core::Private::Function::
                TFunctionRefCaller<UE::Geometry::<lambda_37_>,bool,int_const_&>::Call;
    local_578 = Core::Private::Function::
                TFunctionRefCaller<`UE::PlanarCut::FDynamicMeshCollection::SplitIslands'::__l6::<lambda_2>,bool,int,double>
                ::Call;
    local_560 = &local_4d0;
    local_568 = Core::Private::Function::
                TFunctionRefCaller<`UE::PlanarCut::FDynamicMeshCollection::SplitIslands'::__l6::<lambda_1>,double,int_const_&>
                ::Call;
    local_558 = &local_500;
    local_550 = &local_64c;
    local_570 = &local_598;
    do {
      uVar5 = local_628._8_4_;
      local_64c = local_628._8_4_;
      lVar2 = *(longlong *)
               ((param_1->Vertices).Blocks.AllocatorInstance.Data +
               (ulonglong)((uint)local_628._8_4_ >> 9) * 8);
      local_598 = &local_648;
      local_590 = &local_64c;
      pdVar1 = (double *)(lVar2 + (ulonglong)(local_628._8_4_ & 0x1ff) * 0x18);
      local_518._s_0.X = *pdVar1;
      local_518._s_0.Y = pdVar1[1];
      local_518._s_0.Z = *(double *)(lVar2 + 0x10 + (ulonglong)(local_628._8_4_ & 0x1ff) * 0x18);
      local_4d0 = param_1;
      local_4c8 = local_518._s_0.X;
      dStack_4c0 = local_518._s_0.Y;
      local_4b8 = local_518._s_0.Z;
      UE::Geometry::TPointHashGrid3<int,double>::EnumeratePointsInBall
                ((TPointHashGrid3<int,double> *)local_c8,(TVector<double> *)&local_518._s_0,param_3,
                 (TFunctionRef<double___cdecl(int_const_&)> *)&local_568,
                 (TFunctionRef<bool___cdecl(int,double)> *)&local_578,
                 (TFunctionRef<bool___cdecl(int_const_&)> *)&local_588);
      UE::Geometry::TWrapAroundGridIndexer3<double>::ToGrid
                (local_70,&local_500,(TVector<double> *)&local_518._s_0);
      TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&>_>
                ((TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                  *)local_c8,&local_5b8,(bool *)&local_558);
      local_628._8_4_ = uVar5 + 1;
      if ((int)local_628._8_4_ < (int)local_628._12_4_) {
        do {
          if ((*(short *)(*(longlong *)
                           (*(longlong *)(local_628._0_8_ + 8) +
                           (ulonglong)((uint)local_628._8_4_ >> 9) * 8) +
                         (ulonglong)(local_628._8_4_ & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)
                          (*(longlong *)(local_628._0_8_ + 8) +
                          (ulonglong)((uint)local_628._8_4_ >> 9) * 8) +
                        (ulonglong)(local_628._8_4_ & 0x1ff) * 2) != -1)) break;
          local_628._8_4_ = local_628._8_4_ + 1;
        } while ((int)local_628._8_4_ < (int)local_628._12_4_);
      }
    } while (local_628._8_4_ != local_4f0._8_4_);
  }
  UE::Geometry::FDynamicMesh3::TrianglesItr
            (param_1,(MappedEnumerable<UE::Geometry::FIndex3i> *)local_108);
  UE::Geometry::FRefCountVector::MappedEnumerable<UE::Geometry::FIndex3i>::begin
            ((MappedEnumerable<UE::Geometry::FIndex3i> *)local_108,
             (MappedIterator<int,UE::Geometry::FIndex3i,UE::Geometry::FRefCountVector::IndexIterator>
              *)local_448);
  iVar20 = ((local_d8.Vector)->RefCounts).CurBlock * 0x200 +
           ((local_d8.Vector)->RefCounts).CurBlockUsed;
  UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
            (&local_4e0,local_d8.Vector,iVar20,iVar20);
  local_138._0_8_ = 0;
  local_148._0_8_ = local_4e0._0_8_;
  local_148._8_8_ = local_4e0._8_8_;
  local_110 = (longlong *)0x0;
  TFunction<UE::Geometry::FIndex3i___cdecl(int)>::operator=
            ((TFunction<UE::Geometry::FIndex3i___cdecl(int)> *)local_138,
             (TFunction<UE::Geometry::FIndex3i___cdecl(int)> *)local_108);
  if ((int)local_448._8_8_ != local_148._8_4_) {
    do {
      local_638[0] = (int)local_448._8_8_;
      Core::Private::Function::CheckCallable((void *)local_448._16_8_);
      uVar4 = local_448._16_8_;
      plVar14 = local_428;
      if (local_410 != (longlong *)0x0) {
        plVar14 = local_410;
      }
      uVar13 = (**(code **)(*plVar14 + 8))();
      (*(code *)uVar4)(&local_618,uVar13,local_638);
      FDisjointSet::Union(&local_648,local_618,local_614);
      FDisjointSet::Union(&local_648,local_614,local_610);
      UE::Geometry::FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_448);
    } while ((int)local_448._8_8_ != local_148._8_4_);
  }
  if (local_138._0_8_ != 0) {
    plVar14 = (longlong *)(local_138 + 0x10);
    if (local_110 != (longlong *)0x0) {
      plVar14 = local_110;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if ((code *)local_448._16_8_ != (code *)0x0) {
    plVar14 = local_428;
    if (local_410 != (longlong *)0x0) {
      plVar14 = local_410;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (local_108._0_8_ != 0) {
    plVar14 = (longlong *)(local_108 + 0x10);
    if ((longlong *)local_108._40_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_108._40_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  local_540 = &local_648;
  local_530 = &local_548;
  local_538 = Core::Private::Function::
              TFunctionRefCaller<`UE::PlanarCut::FDynamicMeshCollection::SplitIslands'::__l2::<lambda_3>,int,int>
              ::Call;
  local_548 = param_1;
  bVar7 = UE::Geometry::FDynamicMeshEditor::SplitMesh
                    (param_1,param_2,(TFunctionRef<int___cdecl(int)> *)&local_538,-1,
                     (TArray<int,TSizedDefaultAllocator<32>_> *)0x0,false);
  if (bVar7) {
    local_528 = (FDynamicMesh3 *)(param_2->AllocatorInstance).Data;
    iVar20 = param_2->ArrayNum;
    if ((iVar20 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    local_608.MeshBounds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_608.MeshBounds.ArrayNum = 0;
    local_608.MeshBounds.ArrayMax = 0;
    local_608.NestingMethod = InLargestParent;
    local_608.bOnlyNestNegativeVolumes = false;
    local_608.bOnlyParentPostiveVolumes = true;
    local_608.bOnlyCheckSingleVertexForNesting = true;
    local_608.Nests.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_608.Nests.ArrayNum = 0;
    local_608.Nests.ArrayMax = 0;
    local_608.SkippedMeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_608.SkippedMeshIndices.ArrayNum = 0;
    local_608.SkippedMeshIndices.ArrayMax = 0;
    local_608.InputMeshes._12_4_ = uStack_51c;
    local_608.InputMeshes.ArrayNum = iVar20;
    local_608.InputMeshes.DataPtr = local_528;
    iStack_520 = iVar20;
    if (iVar20 != 0) {
      UE::Geometry::TMeshSpatialSort<UE::Geometry::FDynamicMesh3>::InitBounds(&local_608);
    }
    local_608.NestingMethod = InLargestParent;
    local_608.bOnlyNestNegativeVolumes = false;
    local_608.bOnlyParentPostiveVolumes = true;
    UE::Geometry::TMeshSpatialSort<UE::Geometry::FDynamicMesh3>::Compute(&local_608);
    local_660.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_660.ArrayNum = 0;
    local_660.ArrayMax = 0;
    local_667[0] = true;
    TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_660,local_667,param_2->ArrayNum);
    uVar13 = _UNK_150631d98;
    uVar4 = ___xmm_00000000ffffffff0000008000000000;
    uVar15 = (ulonglong)local_608.Nests.ArrayNum;
    local_630 = local_608.Nests.ArrayNum;
    local_5a0 = local_608.Nests.AllocatorInstance.Data + uVar15 * 0x18;
    pFVar21 = local_608.Nests.AllocatorInstance.Data + 0x10;
    while( true ) {
      pFVar19 = local_5a0;
      uVar17 = 0;
      if (local_608.Nests.ArrayNum != (int)uVar15) {
        local_667[1] = false;
        `TCheckedPointerIterator<UE::Geometry::TMeshSpatialSort<UE::Geometry::FDynamicMesh3>::FMeshNesting,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_667 + 1);
      }
      uVar10 = 0;
      if (pFVar21 + -0x10 == pFVar19) break;
      uVar11 = *(uint *)&pFVar21[-0x10].field_0x0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      pFVar19 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar21 + -8))->AllocatorInstance).
                Data;
      iVar20 = *(int *)pFVar21;
      local_360._40_8_ = uVar4;
      local_360._48_8_ = uVar13;
      local_310._40_8_ = uVar4;
      local_310._48_8_ = uVar13;
      local_210._40_8_ = uVar4;
      local_210._48_8_ = uVar13;
      local_1c0._40_8_ = uVar4;
      local_1c0._48_8_ = uVar13;
      local_5a8 = pFVar19 + (longlong)iVar20 * 4;
      local_408._0_8_ = 0;
      local_5b8.Value = (int *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x230);
      local_408._8_8_ = 0;
      local_408._32_8_ = 0;
      local_408._40_4_ = 0;
      local_408._44_4_ = 0x80;
      local_408._48_4_ = 0xffffffff;
      local_408._52_4_ = 0;
      local_3c8 = (void *)0x0;
      local_3c0 = 0;
      local_3b8._0_8_ = 0;
      local_3b8._8_8_ = 0;
      local_3b8._32_8_ = 0;
      local_3b8._40_4_ = 0;
      local_3b8._44_4_ = 0x80;
      local_3b8._48_4_ = 0xffffffff;
      local_3b8._52_4_ = 0;
      local_378 = (void *)0x0;
      local_370 = 0;
      local_368._0_1_ = true;
      local_368._1_1_ = true;
      local_360._0_8_ = 0;
      local_360._8_8_ = 0;
      local_360._32_8_ = 0;
      local_320 = (void *)0x0;
      local_318 = 0;
      local_310._0_8_ = 0;
      local_310._8_8_ = 0;
      local_310._32_8_ = 0;
      local_2d0 = (void *)0x0;
      local_2c8 = 0;
      local_2c0._0_1_ = true;
      local_2c0._1_1_ = true;
      local_2b8._0_8_ = 0;
      local_2b8._8_8_ = 0;
      local_2b8._32_8_ = 0;
      local_2b8._40_4_ = 0;
      local_2b8._44_4_ = 0x80;
      local_2b8._48_4_ = 0xffffffff;
      local_2b8._52_4_ = 0;
      local_278 = (void *)0x0;
      local_270 = 0;
      local_268._0_8_ = 0;
      local_268._8_8_ = 0;
      local_268._32_8_ = 0;
      local_268._40_4_ = 0;
      local_268._44_4_ = 0x80;
      local_268._48_4_ = 0xffffffff;
      local_268._52_4_ = 0;
      local_228 = (void *)0x0;
      local_220 = 0;
      local_218._0_1_ = true;
      local_218._1_1_ = true;
      local_210._0_8_ = 0;
      local_210._8_8_ = 0;
      local_210._32_8_ = 0;
      local_1d0 = (void *)0x0;
      local_1c8 = 0;
      local_1c0._0_8_ = 0;
      local_1c0._8_8_ = 0;
      local_1c0._32_8_ = 0;
      local_180 = (void *)0x0;
      local_178 = 0;
      local_170._0_1_ = true;
      local_170._1_1_ = true;
      local_168.Data = (FScriptContainerElement *)0x0;
      local_160._0_4_ = 0;
      local_160._4_4_ = 0;
      local_158.Data = (FScriptContainerElement *)0x0;
      local_150._0_4_ = 0;
      local_150._4_4_ = 0;
      while( true ) {
        pFVar6 = local_5a8;
        if (*(int *)pFVar21 != iVar20) {
          local_667[2] = false;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_667 + 2);
        }
        if (pFVar19 == pFVar6) break;
        uVar10 = *(uint *)pFVar19;
        local_4a8._0_8_ = 0;
        local_4a8._40_8_ = 0;
        local_478._0_8_ = 0;
        uVar11 = 0;
        if ((int)uVar10 < param_2->ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        local_478._40_8_ = 0;
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        UE::Geometry::FDynamicMeshEditor::AppendMesh
                  ((FDynamicMeshEditor *)&local_5b8.Value,
                   (FDynamicMesh3 *)
                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x230),
                   (FMeshIndexMappings *)local_408,&local_478,&local_4a8,false);
        uVar11 = 0;
        if ((int)uVar10 < local_660.ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        pFVar19 = pFVar19 + 4;
        local_660.AllocatorInstance.Data[(int)uVar10] = (FScriptContainerElement)0x0;
      }
      DestructItems<UE::Geometry::TIndexMap<int>,int>
                ((TIndexMap<int> *)local_158.Data,(int)local_150);
      if ((TIndexMap<int> *)local_158.Data != (TIndexMap<int> *)0x0) {
        FMemory::Free(local_158.Data);
      }
      DestructItems<UE::Geometry::TIndexMap<int>,int>
                ((TIndexMap<int> *)local_168.Data,(int)local_160);
      if ((TIndexMap<int> *)local_168.Data != (TIndexMap<int> *)0x0) {
        FMemory::Free(local_168.Data);
      }
      local_178 = 0;
      if (local_180 != (void *)0x0) {
        FMemory::Free(local_180);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1c0);
      local_1c8 = 0;
      if (local_1d0 != (void *)0x0) {
        FMemory::Free(local_1d0);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_210);
      local_220 = 0;
      if (local_228 != (void *)0x0) {
        FMemory::Free(local_228);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_268);
      local_270 = 0;
      if (local_278 != (void *)0x0) {
        FMemory::Free(local_278);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_2b8);
      local_2c8 = 0;
      if (local_2d0 != (void *)0x0) {
        FMemory::Free(local_2d0);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_310);
      local_318 = 0;
      if (local_320 != (void *)0x0) {
        FMemory::Free(local_320);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_360);
      local_370 = 0;
      if (local_378 != (void *)0x0) {
        FMemory::Free(local_378);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_3b8);
      local_3c0 = 0;
      if (local_3c8 != (void *)0x0) {
        FMemory::Free(local_3c8);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_408);
      uVar15 = (ulonglong)local_630;
      pFVar21 = pFVar21 + 0x18;
    }
    if (0 < param_2->ArrayNum) {
      uVar15 = uVar17;
      iVar20 = local_660.ArrayNum;
      do {
        uVar16 = (uint)uVar17;
        uVar18 = ~uVar16 >> 0x1f;
        uVar11 = uVar10;
        if ((int)uVar16 < iVar20) {
          uVar11 = uVar18;
        }
        if (uVar11 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
          iVar20 = local_660.ArrayNum;
        }
        if (local_660.AllocatorInstance.Data[uVar15] == (FScriptContainerElement)0x0) {
          uVar11 = uVar10;
          if ((int)uVar16 < param_2->ArrayNum) {
            uVar11 = uVar18;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
          TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (param_2,uVar16);
          uVar11 = uVar10;
          if ((int)uVar16 < local_660.ArrayNum) {
            uVar11 = uVar18;
          }
          if (uVar11 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar3 = (code *)swi(3);
              uVar9 = (*pcVar3)();
              return (bool)uVar9;
            }
          }
          iVar12 = (local_660.ArrayNum - uVar16) + -1;
          if (1 < iVar12) {
            iVar12 = 1;
          }
          iVar20 = local_660.ArrayNum;
          if (iVar12 != 0) {
            memmove(local_660.AllocatorInstance.Data + uVar15,
                    local_660.AllocatorInstance.Data + (local_660.ArrayNum - iVar12),
                    (longlong)iVar12);
            iVar20 = local_660.ArrayNum;
          }
          iVar20 = iVar20 + -1;
          uVar16 = uVar16 - 1;
          local_660.ArrayNum = iVar20;
          uVar15 = uVar15 - 1;
        }
        uVar17 = (ulonglong)(uVar16 + 1);
        uVar15 = uVar15 + 1;
      } while ((int)(uVar16 + 1) < param_2->ArrayNum);
    }
    if (local_660.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_660.AllocatorInstance.Data);
    }
    if (local_608.SkippedMeshIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_608.SkippedMeshIndices.AllocatorInstance.Data);
    }
    DestructItems<UE::Geometry::TMeshSpatialSort<UE::Geometry::FDynamicMesh3>::FMeshNesting,int>
              ((FMeshNesting *)local_608.Nests.AllocatorInstance.Data,local_608.Nests.ArrayNum);
    if ((FMeshNesting *)local_608.Nests.AllocatorInstance.Data != (FMeshNesting *)0x0) {
      FMemory::Free(local_608.Nests.AllocatorInstance.Data);
    }
    if (local_608.MeshBounds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_608.MeshBounds.AllocatorInstance.Data);
    }
  }
  if (local_648.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Parents.AllocatorInstance.Data);
  }
  local_80 = 0;
  if ((ForElementType<FSetElementId>)local_c8._64_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_c8);
  return bVar7;
}

// UpdateAllCollections @ 14c9f0300

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::PlanarCut::FDynamicMeshCollection::UpdateAllCollections
          (FDynamicMeshCollection *this,FGeometryCollection *param_1)

{
  undefined4 uVar1;
  FDynamicMesh3 *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  iVar7 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)param_1,FGeometryCollection::GeometryGroup);
  uVar11 = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,iVar7,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_48,iVar7,Default);
  iVar7 = (**(code **)(*(longlong *)&param_1->FaceCount + 0x60))(&param_1->FaceCount);
  uVar10 = uVar11;
  uVar12 = uVar11;
  if (0 < iVar7) {
    do {
      uVar8 = (uint)uVar10;
      uVar13 = ~uVar8 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar8 < *(int *)&(param_1->FaceCount).field_0x18) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar1 = *(undefined4 *)(uVar12 + *(longlong *)&(param_1->FaceCount).field_0x10);
      uVar9 = 0;
      if ((int)uVar8 < local_38.ArrayNum) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      *(undefined4 *)(local_38.AllocatorInstance.Data + uVar12) = uVar1;
      uVar9 = 0;
      if ((int)uVar8 < *(int *)&(param_1->VertexCount).field_0x18) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar1 = *(undefined4 *)(uVar12 + *(longlong *)&(param_1->VertexCount).field_0x10);
      uVar9 = 0;
      if ((int)uVar8 < local_48.ArrayNum) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      *(undefined4 *)(local_48.AllocatorInstance.Data + uVar12) = uVar1;
      iVar7 = (**(code **)(*(longlong *)&param_1->FaceCount + 0x60))(&param_1->FaceCount);
      uVar10 = (ulonglong)(uVar8 + 1);
      uVar12 = uVar12 + 4;
    } while ((int)(uVar8 + 1) < iVar7);
  }
  iVar7 = (this->Meshes).Array.ArrayNum;
  uVar10 = uVar11;
  if (0 < iVar7) {
    do {
      uVar8 = (uint)uVar11;
      uVar9 = 0;
      if ((int)uVar8 < iVar7) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar14 = *(longlong *)((this->Meshes).Array.AllocatorInstance.Data + uVar10);
      uVar9 = *(uint *)(lVar14 + 0x230);
      uVar13 = 0;
      if ((int)uVar9 < *(int *)&(param_1->TransformToGeometryIndex).field_0x18) {
        uVar13 = ~uVar9 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar1 = *(undefined4 *)(lVar14 + 0x170);
      uVar9 = *(uint *)(*(longlong *)&(param_1->TransformToGeometryIndex).field_0x10 +
                       (longlong)(int)uVar9 * 4);
      uVar13 = 0;
      if ((int)uVar9 < local_38.ArrayNum) {
        uVar13 = ~uVar9 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      *(undefined4 *)(local_38.AllocatorInstance.Data + (longlong)(int)uVar9 * 4) = uVar1;
      uVar1 = *(undefined4 *)(lVar14 + 0x50);
      uVar13 = 0;
      if ((int)uVar9 < local_48.ArrayNum) {
        uVar13 = ~uVar9 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar11 = (ulonglong)(uVar8 + 1);
      *(undefined4 *)(local_48.AllocatorInstance.Data + (longlong)(int)uVar9 * 4) = uVar1;
      iVar7 = (this->Meshes).Array.ArrayNum;
      uVar10 = uVar10 + 8;
    } while ((int)(uVar8 + 1) < iVar7);
  }
  bVar4 = true;
  GeometryCollectionAlgo::ResizeGeometries(param_1,&local_38,&local_48,false);
  iVar7 = (this->Meshes).Array.ArrayNum;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar14 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar7) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = *(FDynamicMesh3 **)((this->Meshes).Array.AllocatorInstance.Data + lVar14);
      uVar8 = (uint)pFVar2[1]._padding_;
      uVar13 = 0;
      if ((int)uVar8 < *(int *)&(param_1->TransformToGeometryIndex).field_0x18) {
        uVar13 = ~uVar8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      bVar6 = UpdateCollection((TTransform<double> *)&pFVar2[1].Vertices.Blocks,pFVar2,
                               *(int *)(*(longlong *)&(param_1->TransformToGeometryIndex).field_0x10
                                       + (longlong)(int)uVar8 * 4),param_1,-1);
      iVar7 = (this->Meshes).Array.ArrayNum;
      bVar4 = (bool)(bVar4 & bVar6);
      uVar9 = uVar9 + 1;
      lVar14 = lVar14 + 8;
    } while ((int)uVar9 < iVar7);
  }
  PlanarCut::`anonymous_namespace'::SetUnsetColors(param_1,0,false);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return bVar4;
}

// UpdateCollection @ 14c9f0820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::PlanarCut::FDynamicMeshCollection::UpdateCollection
          (TTransform<double> *param_1,FDynamicMesh3 *param_2,int param_3,
          FGeometryCollection *param_4,int param_5)

{
  double *pdVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  FDynamicMeshAttributeSet *pFVar7;
  undefined1 *puVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined8 uVar17;
  uint uVar18;
  TVector2<float>_u_0 TVar19;
  bool bVar20;
  undefined1 uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  TDynamicVector<UE::Math::TVector<float>,512> *pTVar26;
  TVector4<float> *pTVar27;
  FLinearColor *pFVar28;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar29;
  FDynamicMeshAttributeSet *pFVar30;
  ulonglong uVar31;
  undefined1 *puVar32;
  ulonglong uVar33;
  uint uVar34;
  char cVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  longlong lVar39;
  uint uVar40;
  longlong lVar41;
  uint uVar42;
  uint uVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
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
  double dVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  double dVar78;
  undefined1 auVar79 [16];
  double dVar86;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  double dVar87;
  double dVar88;
  undefined4 uVar94;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  double dVar95;
  undefined4 uVar96;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  uint uVar97;
  uint uVar98;
  double dVar99;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar105;
  double dVar106;
  double dVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  double dVar110;
  float fVar111;
  float fVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auStackY_2f8 [32];
  longlong local_2a8;
  uint local_298;
  longlong local_288;
  float fStack_264;
  TVector<float>_u_0 local_250;
  TVector<float>_u_0 local_240;
  undefined8 local_230;
  int local_228;
  TVector2<float>_u_0 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined1 local_1f0 [16];
  double local_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined1 local_190 [16];
  double local_180;
  undefined1 local_178 [16];
  double local_168;
  undefined1 local_160 [16];
  double local_150;
  TVector4<float> local_148;
  FLinearColor local_138;
  TArrayOfAttributesAccessor<TManagedArray<UE::Math::TVector2<float>_>,8> local_128;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  lVar44 = (longlong)param_3;
  if ((((param_2->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
        (param_2->VertexRefCounts).FreeIndices.CurBlockUsed != 0) ||
      ((param_2->EdgeRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_2->EdgeRefCounts).FreeIndices.CurBlockUsed != 0)) ||
     ((param_2->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
      (param_2->TriangleRefCounts).FreeIndices.CurBlockUsed != 0)) {
    UE::Geometry::FDynamicMesh3::CompactInPlace(param_2,(FCompactMaps *)0x0);
  }
  uVar42 = (uint)~param_3 >> 0x1f;
  uVar22 = 0;
  if (param_3 < *(int *)&(param_4->VertexCount).field_0x18) {
    uVar22 = uVar42;
  }
  if ((uVar22 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar9 = (code *)swi(3);
    uVar21 = (*pcVar9)();
    return (bool)uVar21;
  }
  iVar24 = *(int *)(*(longlong *)&(param_4->VertexCount).field_0x10 + lVar44 * 4);
  uVar22 = 0;
  if (param_3 < *(int *)&(param_4->FaceCount).field_0x18) {
    uVar22 = uVar42;
  }
  if ((uVar22 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar9 = (code *)swi(3);
    uVar21 = (*pcVar9)();
    return (bool)uVar21;
  }
  iVar5 = *(int *)(*(longlong *)&(param_4->FaceCount).field_0x10 + lVar44 * 4);
  iVar23 = AugmentedDynamicMesh::NumEnabledUVChannels(param_2);
  FGeometryCollection::SetNumUVLayers(param_4,iVar23);
  GeometryCollection::UV::FindActiveUVLayers(&local_128,(FManagedArrayCollection *)param_4);
  if (iVar24 == (param_2->VertexRefCounts).UsedCount) {
    if (iVar5 == (param_2->TriangleRefCounts).UsedCount) {
      uVar22 = 0;
      if (param_3 < *(int *)&(param_4->VertexStart).field_0x18) {
        uVar22 = uVar42;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar9 = (code *)swi(3);
        uVar21 = (*pcVar9)();
        return (bool)uVar21;
      }
      uVar22 = *(uint *)(*(longlong *)&(param_4->VertexStart).field_0x10 + lVar44 * 4);
      lVar39 = (longlong)(int)uVar22;
      uVar40 = 0;
      if (param_3 < *(int *)&(param_4->FaceStart).field_0x18) {
        uVar40 = uVar42;
      }
      if ((uVar40 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar9 = (code *)swi(3);
        uVar21 = (*pcVar9)();
        return (bool)uVar21;
      }
      uVar40 = *(uint *)(*(longlong *)&(param_4->FaceStart).field_0x10 + lVar44 * 4);
      uVar38 = 0;
      if (param_3 < *(int *)&(param_4->TransformIndex).field_0x18) {
        uVar38 = uVar42;
      }
      if ((uVar38 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar9 = (code *)swi(3);
        uVar21 = (*pcVar9)();
        return (bool)uVar21;
      }
      uVar18 = _UNK_15061cc8c;
      uVar25 = _UNK_15061cc88;
      uVar34 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar38 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar6 = *(undefined4 *)(*(longlong *)&(param_4->TransformIndex).field_0x10 + lVar44 * 4);
      if (0 < (int)((param_2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                   (param_2->VertexRefCounts).RefCounts.CurBlockUsed)) {
        local_288 = lVar39 << 4;
        lVar41 = lVar39 * 0xc;
        iVar24 = -uVar22;
        local_298 = 0;
        local_218 = 0;
        uStack_210 = 0;
        uVar43 = uVar22;
        do {
          auVar16._4_8_ = unaff_XMM6_Qb;
          auVar16._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
          auVar100._0_8_ = auVar16._0_8_ << 0x20;
          auVar100._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar100._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          uVar31 = (ulonglong)(uVar43 + iVar24 >> 9);
          uVar33 = (ulonglong)(local_298 & 0x1ff);
          lVar45 = *(longlong *)((param_2->Vertices).Blocks.AllocatorInstance.Data + uVar31 * 8);
          local_1f8 = *(double *)(lVar45 + 0x10 + uVar33 * 0x18);
          pdVar1 = (double *)(lVar45 + uVar33 * 0x18);
          local_208 = *pdVar1;
          dStack_200 = pdVar1[1];
          dVar62 = local_1f8 - (param_1->Translation).ZW.m128d_f64[0];
          dVar99 = (param_1->Rotation).XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar107 = (param_1->Rotation).XY.m128d_f64[1] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          uVar94 = (undefined4)((ulonglong)dVar107 >> 0x20);
          dVar78 = (param_1->Rotation).ZW.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar106 = (param_1->Rotation).ZW.m128d_f64[1] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          auVar79._8_4_ = SUB84(dVar107,0);
          auVar79._0_8_ = dVar99;
          auVar79._12_4_ = uVar94;
          dVar86 = auVar79._8_8_;
          auVar89._8_4_ = SUB84(dVar107,0);
          auVar89._0_8_ = dVar99;
          auVar89._12_4_ = uVar94;
          auVar64._8_4_ = SUB84(dVar106,0);
          auVar64._0_8_ = dVar78;
          auVar64._12_4_ = (int)((ulonglong)dVar106 >> 0x20);
          auVar90 = blendpd(auVar89,auVar64,2);
          auVar47._8_4_ = SUB84(dVar78,0);
          auVar47._0_8_ = dVar86;
          auVar47._12_4_ = (int)((ulonglong)dVar78 >> 0x20);
          dVar88 = local_208 - (param_1->Translation).XY.m128d_f64[0];
          dVar95 = dStack_200 - (param_1->Translation).XY.m128d_f64[1];
          uVar94 = (undefined4)((ulonglong)dVar95 >> 0x20);
          auVar125._8_4_ = SUB84(dVar95,0);
          auVar125._0_8_ = dVar88;
          auVar125._12_4_ = uVar94;
          auVar63._8_4_ = SUB84(dVar95,0);
          auVar63._0_8_ = dVar88;
          auVar63._12_4_ = uVar94;
          auVar115._8_8_ = 0;
          auVar115._0_8_ = dVar62;
          auVar64 = blendpd(auVar63,auVar115,2);
          auVar126._0_8_ = auVar125._8_8_ * dVar99 - dVar86 * dVar88;
          auVar126._8_8_ = dVar62 * dVar107 - auVar47._8_8_ * dVar95;
          auVar65._0_8_ = auVar64._0_8_ * dVar78 - auVar90._0_8_ * dVar62;
          auVar65._8_8_ = auVar64._8_8_ * dVar106 - auVar90._8_8_ * 0.0;
          dVar110 = auVar126._8_8_ + auVar126._8_8_;
          dVar87 = auVar65._0_8_ + auVar65._0_8_;
          uVar94 = SUB84(dVar87,0);
          uVar96 = (undefined4)((ulonglong)dVar87 >> 0x20);
          auVar64 = blendpd(auVar126,auVar65,2);
          auVar113._8_4_ = uVar94;
          auVar113._0_8_ = dVar110;
          auVar113._12_4_ = uVar96;
          auVar48._8_4_ = uVar94;
          auVar48._0_8_ = dVar110;
          auVar48._12_4_ = uVar96;
          auVar108._8_4_ = uVar94;
          auVar108._0_8_ = dVar110;
          auVar108._12_4_ = uVar96;
          auVar127._0_8_ = auVar64._0_8_ + auVar64._0_8_;
          auVar127._8_8_ = auVar64._8_8_ + auVar64._8_8_;
          auVar64 = blendpd(auVar108,auVar127,2);
          auVar114._0_8_ = auVar113._8_8_ * dVar99 - dVar110 * dVar86;
          auVar114._8_8_ = auVar127._0_8_ * dVar107 - auVar48._8_8_ * dVar78;
          auVar49._8_4_ = SUB84(auVar127._8_8_,0);
          auVar49._0_8_ = auVar127._0_8_;
          auVar49._12_4_ = (int)((ulonglong)auVar127._8_8_ >> 0x20);
          auVar109._0_8_ = auVar64._0_8_ * dVar78 - auVar127._0_8_ * auVar90._0_8_;
          auVar109._8_8_ = auVar64._8_8_ * dVar106 - auVar49._8_8_ * auVar90._8_8_;
          auVar64 = *(undefined1 (*) [16])(param_1->Scale3D).ZW.m128d_f64;
          auVar101._8_8_ = auVar100._8_8_;
          auVar101._0_8_ = auVar64._0_8_;
          lVar45 = -(ulonglong)
                    ((double)CONCAT44(auVar64._4_4_ & uVar34,auVar64._0_4_ & uVar38) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          uVar97 = (uint)lVar45;
          uVar98 = (uint)((ulonglong)lVar45 >> 0x20);
          auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                          *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64);
          lVar45 = -(ulonglong)
                    ((double)CONCAT44(uVar34 & *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 +
                                                        4),
                                      uVar38 & *(uint *)(param_1->Scale3D).XY.m128d_f64) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar46 = -(ulonglong)
                    ((double)CONCAT44(uVar18 & *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 +
                                                        0xc),
                                      uVar25 & *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1)) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          auVar90._8_4_ = SUB84(auVar114._8_8_,0);
          auVar90._0_8_ = auVar114._0_8_;
          auVar90._12_4_ = (int)((ulonglong)auVar114._8_8_ >> 0x20);
          dVar99 = (double)CONCAT44(~(uint)((ulonglong)lVar45 >> 0x20) & auVar64._4_4_,
                                    ~(uint)lVar45 & auVar64._0_4_) *
                   (dVar110 * dVar106 + dVar88 + auVar90._8_8_);
          dVar107 = (double)CONCAT44(~(uint)((ulonglong)lVar46 >> 0x20) & auVar64._12_4_,
                                     ~(uint)lVar46 & auVar64._8_4_) *
                    (dVar87 * dVar106 + dVar95 + auVar109._0_8_);
          local_1f0._8_4_ = SUB84(dVar107,0);
          local_1f0._0_8_ = dVar99;
          local_1f0._12_4_ = (int)((ulonglong)dVar107 >> 0x20);
          auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar101);
          uVar36 = ~uVar43 >> 0x1f;
          uVar37 = 0;
          if ((int)uVar43 < *(int *)&(param_4->Vertex).field_0x18) {
            uVar37 = uVar36;
          }
          auVar115 = blendpd(auVar114,auVar109,2);
          local_1e0 = (double)(CONCAT44(~uVar98 & auVar64._4_4_,~uVar97 & auVar64._0_4_) |
                              CONCAT44(uVar98 & local_218._4_4_,uVar97 & (uint)local_218)) *
                      (auVar127._0_8_ * dVar106 + dVar62 + auVar115._0_8_);
          fVar111 = (float)local_1e0;
          if ((uVar37 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            uVar21 = (*pcVar9)();
            return (bool)uVar21;
          }
          lVar45 = *(longlong *)&(param_4->Vertex).field_0x10;
          *(float *)(lVar41 + lVar45) = (float)dVar99;
          *(float *)(lVar41 + 4 + lVar45) = (float)dVar107;
          *(float *)(lVar41 + 8 + lVar45) = fVar111;
          if ((param_2->VertexNormals).bIsSet == false) {
            fStack_264 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y;
            uVar94 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
            uVar96 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X;
          }
          else {
            pTVar26 = TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::
                      GetValue(&param_2->VertexNormals);
            lVar45 = *(longlong *)((pTVar26->Blocks).AllocatorInstance.Data + uVar31 * 8);
            pfVar2 = (float *)(lVar45 + uVar33 * 0xc);
            uVar96 = *pfVar2;
            fStack_264 = (float)((ulonglong)*(undefined8 *)pfVar2 >> 0x20);
            uVar94 = *(float *)(lVar45 + 8 + uVar33 * 0xc);
          }
          dVar78 = (double)(float)uVar96;
          dVar106 = (param_1->Rotation).XY.m128d_f64[0] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar110 = (param_1->Rotation).XY.m128d_f64[1] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar99 = (param_1->Rotation).ZW.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar107 = (param_1->Rotation).ZW.m128d_f64[1] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar96 = (undefined4)((ulonglong)dVar107 >> 0x20);
          local_1c8 = (double)(float)uVar94;
          uVar37 = 0;
          if ((int)uVar43 < *(int *)&(param_4->Normal).field_0x18) {
            uVar37 = uVar36;
          }
          auVar102._8_4_ = SUB84(dVar110,0);
          auVar102._0_8_ = dVar106;
          auVar102._12_4_ = (int)((ulonglong)dVar110 >> 0x20);
          auVar128._8_4_ = SUB84(dVar107,0);
          auVar128._0_8_ = dVar99;
          auVar128._12_4_ = uVar96;
          dVar87 = (double)fStack_264;
          auVar10._8_4_ = SUB84(dVar107,0);
          auVar10._0_8_ = dVar99;
          auVar10._12_4_ = uVar96;
          auVar115 = blendpd(auVar102,auVar10,2);
          uVar94 = SUB84(dVar87,0);
          uVar96 = (undefined4)((ulonglong)dVar87 >> 0x20);
          auVar116._8_4_ = uVar94;
          auVar116._0_8_ = dVar78;
          auVar116._12_4_ = uVar96;
          auVar50._8_4_ = uVar94;
          auVar50._0_8_ = dVar78;
          auVar50._12_4_ = uVar96;
          auVar66._8_4_ = uVar94;
          auVar66._0_8_ = dVar78;
          auVar66._12_4_ = uVar96;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = local_1c8;
          auVar64 = blendpd(auVar66,auVar13,2);
          auVar117._0_8_ = auVar116._8_8_ * dVar106 - dVar78 * dVar110;
          auVar117._8_8_ = local_1c8 * dVar110 - auVar50._8_8_ * dVar99;
          auVar91._8_4_ = SUB84(auVar117._8_8_,0);
          auVar91._0_8_ = auVar117._0_8_;
          auVar91._12_4_ = (int)((ulonglong)auVar117._8_8_ >> 0x20);
          local_1d8._8_4_ = uVar94;
          local_1d8._0_8_ = dVar78;
          local_1d8._12_4_ = uVar96;
          auVar67._0_8_ = auVar64._0_8_ * dVar99 - local_1c8 * auVar115._0_8_;
          auVar67._8_8_ = auVar64._8_8_ * dVar107 - auVar115._8_8_ * 0.0;
          auVar64 = blendpd(auVar117,auVar67,2);
          dVar88 = auVar91._8_8_ + auVar91._8_8_;
          dVar95 = auVar67._0_8_ + auVar67._0_8_;
          auVar118._0_8_ = auVar64._0_8_ + auVar64._0_8_;
          auVar118._8_8_ = auVar64._8_8_ + auVar64._8_8_;
          uVar94 = SUB84(dVar95,0);
          auVar80._8_4_ = uVar94;
          auVar80._0_8_ = dVar88;
          uVar96 = (undefined4)((ulonglong)dVar95 >> 0x20);
          auVar80._12_4_ = uVar96;
          auVar51._8_4_ = uVar94;
          auVar51._0_8_ = dVar88;
          auVar51._12_4_ = uVar96;
          auVar68._8_4_ = uVar94;
          auVar68._0_8_ = dVar88;
          auVar68._12_4_ = uVar96;
          auVar64 = blendpd(auVar68,auVar118,2);
          auVar81._0_8_ = auVar80._8_8_ * dVar106 - dVar88 * dVar110;
          auVar81._8_8_ = auVar118._0_8_ * dVar110 - auVar51._8_8_ * dVar99;
          auVar52._8_4_ = SUB84(auVar118._8_8_,0);
          auVar52._0_8_ = auVar118._0_8_;
          auVar52._12_4_ = (int)((ulonglong)auVar118._8_8_ >> 0x20);
          auVar69._0_8_ = auVar64._0_8_ * dVar99 - auVar118._0_8_ * auVar115._0_8_;
          auVar69._8_8_ = auVar64._8_8_ * dVar107 - auVar52._8_8_ * auVar115._8_8_;
          auVar53._8_4_ = SUB84(auVar81._8_8_,0);
          auVar53._0_8_ = auVar81._0_8_;
          auVar53._12_4_ = (int)((ulonglong)auVar81._8_8_ >> 0x20);
          local_1c0 = dVar88 * auVar128._8_8_ + dVar78 + auVar53._8_8_;
          dStack_1b8 = dVar95 * dVar107 + dVar87 + auVar69._0_8_;
          auVar64 = blendpd(auVar81,auVar69,2);
          local_1b0 = auVar118._0_8_ * auVar128._8_8_ + local_1c8 + auVar64._0_8_;
          fVar111 = (float)local_1c0;
          fVar105 = (float)dStack_1b8;
          fVar112 = (float)local_1b0;
          if ((uVar37 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            uVar21 = (*pcVar9)();
            return (bool)uVar21;
          }
          lVar45 = *(longlong *)&(param_4->Normal).field_0x10;
          uVar37 = 0;
          lVar46 = 0;
          *(float *)(lVar45 + lVar41) = fVar111;
          *(float *)(lVar45 + 4 + lVar41) = fVar105;
          *(float *)(lVar45 + 8 + lVar41) = fVar112;
          if (0 < iVar23) {
            do {
              AugmentedDynamicMesh::GetUV
                        (param_2,iVar24 + uVar43,(TVector2<float> *)&local_220._s_0,uVar37);
              TVar19 = local_220;
              uVar97 = 0;
              if ((int)uVar37 < local_128.Attributes.ArrayNum) {
                uVar97 = ~uVar37 >> 0x1f;
              }
              if ((uVar97 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar9 = (code *)swi(3);
                uVar21 = (*pcVar9)();
                return (bool)uVar21;
              }
              lVar45 = *(longlong *)local_128.Attributes.AllocatorInstance.InlineData[lVar46].Pad;
              uVar97 = 0;
              if ((int)uVar43 < *(int *)(lVar45 + 0x18)) {
                uVar97 = uVar36;
              }
              if ((uVar97 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar9 = (code *)swi(3);
                uVar21 = (*pcVar9)();
                return (bool)uVar21;
              }
              uVar37 = uVar37 + 1;
              lVar46 = lVar46 + 1;
              *(TVector2<float>_u_0 *)(*(longlong *)(lVar45 + 0x10) + lVar39 * 8) = TVar19;
            } while (lVar46 < iVar23);
          }
          AugmentedDynamicMesh::GetTangent
                    (param_2,iVar24 + uVar43,(TVector<float> *)&local_250._s_0,
                     (TVector<float> *)&local_240._s_0);
          dVar78 = (param_1->Rotation).XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar106 = (param_1->Rotation).XY.m128d_f64[1] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar99 = (param_1->Rotation).ZW.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar107 = (param_1->Rotation).ZW.m128d_f64[1] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar94 = (undefined4)((ulonglong)dVar107 >> 0x20);
          uVar37 = 0;
          if ((int)uVar43 < *(int *)&(param_4->TangentU).field_0x18) {
            uVar37 = uVar36;
          }
          auVar92._8_4_ = SUB84(dVar106,0);
          auVar92._0_8_ = dVar78;
          uVar96 = (undefined4)((ulonglong)dVar106 >> 0x20);
          auVar92._12_4_ = uVar96;
          auVar103._8_4_ = SUB84(dVar106,0);
          auVar103._0_8_ = dVar78;
          auVar103._12_4_ = uVar96;
          auVar129._8_4_ = SUB84(dVar107,0);
          auVar129._0_8_ = dVar99;
          auVar129._12_4_ = uVar94;
          local_198 = (double)local_250._s_0.Z;
          dVar88 = (double)local_250._s_0.X;
          dVar95 = (double)local_250._s_0.Y;
          auVar11._8_4_ = SUB84(dVar107,0);
          auVar11._0_8_ = dVar99;
          auVar11._12_4_ = uVar94;
          auVar115 = blendpd(auVar103,auVar11,2);
          uVar94 = SUB84(dVar95,0);
          uVar96 = (undefined4)((ulonglong)dVar95 >> 0x20);
          auVar119._8_4_ = uVar94;
          auVar119._0_8_ = dVar88;
          auVar119._12_4_ = uVar96;
          auVar70._8_4_ = uVar94;
          auVar70._0_8_ = dVar88;
          auVar70._12_4_ = uVar96;
          auVar54._8_4_ = uVar94;
          auVar54._0_8_ = dVar88;
          auVar54._12_4_ = uVar96;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = local_198;
          auVar64 = blendpd(auVar70,auVar14,2);
          auVar120._0_8_ = auVar119._8_8_ * dVar78 - dVar88 * auVar92._8_8_;
          auVar120._8_8_ = local_198 * dVar106 - auVar54._8_8_ * dVar99;
          local_1a8._8_4_ = uVar94;
          local_1a8._0_8_ = dVar88;
          local_1a8._12_4_ = uVar96;
          auVar71._0_8_ = auVar64._0_8_ * dVar99 - local_198 * auVar115._0_8_;
          auVar71._8_8_ = auVar64._8_8_ * dVar107 - auVar115._8_8_ * 0.0;
          auVar64 = blendpd(auVar120,auVar71,2);
          dVar110 = auVar120._8_8_ + auVar120._8_8_;
          dVar87 = auVar71._0_8_ + auVar71._0_8_;
          uVar94 = SUB84(dVar87,0);
          uVar96 = (undefined4)((ulonglong)dVar87 >> 0x20);
          auVar121._0_8_ = auVar64._0_8_ + auVar64._0_8_;
          auVar121._8_8_ = auVar64._8_8_ + auVar64._8_8_;
          auVar82._8_4_ = uVar94;
          auVar82._0_8_ = dVar110;
          auVar82._12_4_ = uVar96;
          auVar55._8_4_ = uVar94;
          auVar55._0_8_ = dVar110;
          auVar55._12_4_ = uVar96;
          auVar72._8_4_ = uVar94;
          auVar72._0_8_ = dVar110;
          auVar72._12_4_ = uVar96;
          auVar64 = blendpd(auVar72,auVar121,2);
          auVar83._0_8_ = auVar82._8_8_ * dVar78 - dVar110 * auVar92._8_8_;
          auVar83._8_8_ = auVar121._0_8_ * dVar106 - auVar55._8_8_ * dVar99;
          auVar56._8_4_ = SUB84(auVar121._8_8_,0);
          auVar56._0_8_ = auVar121._0_8_;
          auVar56._12_4_ = (int)((ulonglong)auVar121._8_8_ >> 0x20);
          auVar73._0_8_ = auVar64._0_8_ * dVar99 - auVar121._0_8_ * auVar115._0_8_;
          auVar73._8_8_ = auVar64._8_8_ * dVar107 - auVar56._8_8_ * auVar115._8_8_;
          auVar57._8_4_ = SUB84(auVar83._8_8_,0);
          auVar57._0_8_ = auVar83._0_8_;
          auVar57._12_4_ = (int)((ulonglong)auVar83._8_8_ >> 0x20);
          dVar99 = dVar110 * auVar129._8_8_ + dVar88 + auVar57._8_8_;
          dVar107 = dVar87 * dVar107 + dVar95 + auVar73._0_8_;
          auVar64 = blendpd(auVar83,auVar73,2);
          local_180 = auVar121._0_8_ * auVar129._8_8_ + local_198 + auVar64._0_8_;
          local_190._8_4_ = SUB84(dVar107,0);
          local_190._0_8_ = dVar99;
          local_190._12_4_ = (int)((ulonglong)dVar107 >> 0x20);
          fVar111 = (float)local_180;
          if ((uVar37 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            uVar21 = (*pcVar9)();
            return (bool)uVar21;
          }
          lVar45 = *(longlong *)&(param_4->TangentU).field_0x10;
          *(float *)(lVar45 + lVar39 * 0xc) = (float)dVar99;
          *(float *)(lVar45 + 4 + lVar39 * 0xc) = (float)dVar107;
          *(float *)(lVar45 + 8 + lVar39 * 0xc) = fVar111;
          dVar78 = (param_1->Rotation).XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar106 = (param_1->Rotation).XY.m128d_f64[1] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar99 = (param_1->Rotation).ZW.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar107 = (param_1->Rotation).ZW.m128d_f64[1] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar94 = (undefined4)((ulonglong)dVar107 >> 0x20);
          uVar37 = 0;
          if ((int)uVar43 < *(int *)&(param_4->TangentV).field_0x18) {
            uVar37 = uVar36;
          }
          auVar93._8_4_ = SUB84(dVar106,0);
          auVar93._0_8_ = dVar78;
          uVar96 = (undefined4)((ulonglong)dVar106 >> 0x20);
          auVar93._12_4_ = uVar96;
          auVar104._8_4_ = SUB84(dVar106,0);
          auVar104._0_8_ = dVar78;
          auVar104._12_4_ = uVar96;
          auVar130._8_4_ = SUB84(dVar107,0);
          auVar130._0_8_ = dVar99;
          auVar130._12_4_ = uVar94;
          local_168 = (double)local_240._s_0.Z;
          dVar88 = (double)local_240._s_0.X;
          dVar95 = (double)local_240._s_0.Y;
          auVar12._8_4_ = SUB84(dVar107,0);
          auVar12._0_8_ = dVar99;
          auVar12._12_4_ = uVar94;
          auVar115 = blendpd(auVar104,auVar12,2);
          uVar94 = SUB84(dVar95,0);
          uVar96 = (undefined4)((ulonglong)dVar95 >> 0x20);
          auVar122._8_4_ = uVar94;
          auVar122._0_8_ = dVar88;
          auVar122._12_4_ = uVar96;
          auVar74._8_4_ = uVar94;
          auVar74._0_8_ = dVar88;
          auVar74._12_4_ = uVar96;
          auVar58._8_4_ = uVar94;
          auVar58._0_8_ = dVar88;
          auVar58._12_4_ = uVar96;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = local_168;
          auVar64 = blendpd(auVar74,auVar15,2);
          auVar123._0_8_ = auVar122._8_8_ * dVar78 - dVar88 * auVar93._8_8_;
          auVar123._8_8_ = local_168 * dVar106 - auVar58._8_8_ * dVar99;
          local_178._8_4_ = uVar94;
          local_178._0_8_ = dVar88;
          local_178._12_4_ = uVar96;
          auVar75._0_8_ = auVar64._0_8_ * dVar99 - local_168 * auVar115._0_8_;
          auVar75._8_8_ = auVar64._8_8_ * dVar107 - auVar115._8_8_ * 0.0;
          auVar64 = blendpd(auVar123,auVar75,2);
          dVar110 = auVar123._8_8_ + auVar123._8_8_;
          dVar87 = auVar75._0_8_ + auVar75._0_8_;
          uVar94 = SUB84(dVar87,0);
          uVar96 = (undefined4)((ulonglong)dVar87 >> 0x20);
          auVar124._0_8_ = auVar64._0_8_ + auVar64._0_8_;
          auVar124._8_8_ = auVar64._8_8_ + auVar64._8_8_;
          auVar84._8_4_ = uVar94;
          auVar84._0_8_ = dVar110;
          auVar84._12_4_ = uVar96;
          auVar59._8_4_ = uVar94;
          auVar59._0_8_ = dVar110;
          auVar59._12_4_ = uVar96;
          auVar76._8_4_ = uVar94;
          auVar76._0_8_ = dVar110;
          auVar76._12_4_ = uVar96;
          auVar64 = blendpd(auVar76,auVar124,2);
          auVar85._0_8_ = auVar84._8_8_ * dVar78 - dVar110 * auVar93._8_8_;
          auVar85._8_8_ = auVar124._0_8_ * dVar106 - auVar59._8_8_ * dVar99;
          auVar60._8_4_ = SUB84(auVar124._8_8_,0);
          auVar60._0_8_ = auVar124._0_8_;
          auVar60._12_4_ = (int)((ulonglong)auVar124._8_8_ >> 0x20);
          auVar77._0_8_ = auVar64._0_8_ * dVar99 - auVar124._0_8_ * auVar115._0_8_;
          auVar77._8_8_ = auVar64._8_8_ * dVar107 - auVar60._8_8_ * auVar115._8_8_;
          auVar61._8_4_ = SUB84(auVar85._8_8_,0);
          auVar61._0_8_ = auVar85._0_8_;
          auVar61._12_4_ = (int)((ulonglong)auVar85._8_8_ >> 0x20);
          dVar99 = dVar110 * auVar130._8_8_ + dVar88 + auVar61._8_8_;
          dVar107 = dVar87 * dVar107 + dVar95 + auVar77._0_8_;
          auVar64 = blendpd(auVar85,auVar77,2);
          local_150 = auVar124._0_8_ * auVar130._8_8_ + local_168 + auVar64._0_8_;
          local_160._8_4_ = SUB84(dVar107,0);
          local_160._0_8_ = dVar99;
          local_160._12_4_ = (int)((ulonglong)dVar107 >> 0x20);
          fVar111 = (float)local_150;
          if ((uVar37 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            uVar21 = (*pcVar9)();
            return (bool)uVar21;
          }
          lVar45 = *(longlong *)&(param_4->TangentV).field_0x10;
          *(float *)(lVar45 + lVar39 * 0xc) = (float)dVar99;
          *(float *)(lVar45 + 4 + lVar39 * 0xc) = (float)dVar107;
          *(float *)(lVar45 + 8 + lVar39 * 0xc) = fVar111;
          pTVar27 = AugmentedDynamicMesh::GetVertexColor(&local_148,param_2,iVar24 + uVar43);
          pFVar28 = FLinearColor::FLinearColor(&local_138,pTVar27);
          uVar4 = *(undefined8 *)&pFVar28->field0_0x0;
          unaff_XMM6_Qb = *(undefined8 *)((longlong)&pFVar28->field0_0x0 + 8);
          uVar37 = 0;
          if ((int)uVar43 < *(int *)&(param_4->Color).field_0x18) {
            uVar37 = uVar36;
          }
          if ((uVar37 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            uVar21 = (*pcVar9)();
            return (bool)uVar21;
          }
          puVar3 = (undefined8 *)(local_288 + *(longlong *)&(param_4->Color).field_0x10);
          *puVar3 = uVar4;
          puVar3[1] = unaff_XMM6_Qb;
          uVar37 = 0;
          if ((int)uVar43 < *(int *)&(param_4->BoneMap).field_0x18) {
            uVar37 = uVar36;
          }
          if ((uVar37 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            uVar21 = (*pcVar9)();
            return (bool)uVar21;
          }
          uVar43 = uVar43 + 1;
          local_288 = local_288 + 0x10;
          lVar41 = lVar41 + 0xc;
          *(undefined4 *)(*(longlong *)&(param_4->BoneMap).field_0x10 + lVar39 * 4) = uVar6;
          lVar39 = lVar39 + 1;
          local_298 = local_298 + 1;
        } while ((int)(iVar24 + uVar43) <
                 (int)((param_2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (param_2->VertexRefCounts).RefCounts.CurBlockUsed));
      }
      if (0 < (int)((param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (param_2->TriangleRefCounts).RefCounts.CurBlockUsed)) {
        local_2a8 = (longlong)(int)uVar40 * 0xc;
        local_288 = (longlong)(int)uVar40 * 4;
        iVar24 = -uVar40;
        do {
          pFVar7 = (param_2->AttributeSet).Ptr;
          pFVar30 = (FDynamicMeshAttributeSet *)0x0;
          if (pFVar7 != (FDynamicMeshAttributeSet *)0x0) {
            pFVar30 = pFVar7;
          }
          pTVar29 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                            *)&pFVar30->GenericAttributes,AugmentedDynamicMesh::VisibleAttribName);
          if ((pTVar29 ==
               (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                *)0x0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x27b,L""), bVar20)) {
            pcVar9 = (code *)swi(3);
            uVar21 = (*pcVar9)();
            return (bool)uVar21;
          }
          uVar38 = iVar24 + uVar40;
          uVar31 = (ulonglong)(uVar38 >> 9);
          cVar35 = *(char *)((ulonglong)(uVar38 & 0x1ff) +
                            *(longlong *)
                             (*(longlong *)(*(longlong *)&pTVar29->field_0x8 + 0x20) + uVar31 * 8));
          if ((((int)uVar40 < 0) || (*(int *)&(param_4->Visible).field_0x28 <= (int)uVar40)) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar20)) {
            pcVar9 = (code *)swi(3);
            uVar21 = (*pcVar9)();
            return (bool)uVar21;
          }
          puVar8 = *(undefined1 **)&(param_4->Visible).field_0x20;
          puVar32 = &(param_4->Visible).field_0x10;
          if (puVar8 != (undefined1 *)0x0) {
            puVar32 = puVar8;
          }
          uVar34 = uVar40;
          if ((int)uVar40 < 0) {
            uVar34 = uVar40 + 0x1f;
          }
          lVar39 = (longlong)((int)uVar34 >> 5);
          uVar34 = 1 << ((byte)uVar40 & 0x1f);
          if (cVar35 == '\0') {
            uVar25 = ~uVar34 & *(uint *)(puVar32 + lVar39 * 4);
          }
          else {
            uVar25 = uVar34 | *(uint *)(puVar32 + lVar39 * 4);
          }
          *(uint *)(puVar32 + lVar39 * 4) = uVar25;
          pFVar7 = (param_2->AttributeSet).Ptr;
          pFVar30 = (FDynamicMeshAttributeSet *)0x0;
          if (pFVar7 != (FDynamicMeshAttributeSet *)0x0) {
            pFVar30 = pFVar7;
          }
          uVar33 = (ulonglong)(uVar38 & 0x1ff);
          iVar5 = *(int *)(*(longlong *)
                            (*(longlong *)&((pFVar30->MaterialIDAttrib).Ptr)->field_0x20 +
                            uVar31 * 8) + uVar33 * 4);
          if (iVar5 < 0) {
            cVar35 = '\x01';
          }
          else {
            pTVar29 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                              *)&pFVar7->GenericAttributes,AugmentedDynamicMesh::InternalAttribName)
            ;
            if ((pTVar29 ==
                 (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                  *)0x0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Pair != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                    ,0x27b,L""), bVar20)) {
              pcVar9 = (code *)swi(3);
              uVar21 = (*pcVar9)();
              return (bool)uVar21;
            }
            cVar35 = *(char *)((ulonglong)(uVar38 & 0x1ff) +
                              *(longlong *)
                               (*(longlong *)(*(longlong *)&pTVar29->field_0x8 + 0x20) + uVar31 * 8)
                              );
          }
          if ((((int)uVar40 < 0) || (*(int *)&(param_4->Internal).field_0x28 <= (int)uVar40)) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar20)) {
            pcVar9 = (code *)swi(3);
            uVar21 = (*pcVar9)();
            return (bool)uVar21;
          }
          puVar8 = *(undefined1 **)&(param_4->Internal).field_0x20;
          puVar32 = &(param_4->Internal).field_0x10;
          if (puVar8 != (undefined1 *)0x0) {
            puVar32 = puVar8;
          }
          if (cVar35 == '\0') {
            uVar34 = ~uVar34 & *(uint *)(puVar32 + lVar39 * 4);
          }
          else {
            uVar34 = uVar34 | *(uint *)(puVar32 + lVar39 * 4);
          }
          *(uint *)(puVar32 + lVar39 * 4) = uVar34;
          uVar38 = 0;
          if ((int)uVar40 < *(int *)&(param_4->MaterialID).field_0x18) {
            uVar38 = ~uVar40 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            uVar21 = (*pcVar9)();
            return (bool)uVar21;
          }
          if (iVar5 < 0) {
            iVar5 = param_5;
          }
          *(int *)(local_288 + *(longlong *)&(param_4->MaterialID).field_0x10) = iVar5;
          lVar39 = *(longlong *)((param_2->Triangles).Blocks.AllocatorInstance.Data + uVar31 * 8);
          local_228 = *(int *)(lVar39 + 8 + uVar33 * 0xc);
          local_230 = *(undefined8 *)(lVar39 + uVar33 * 0xc);
          iVar5 = local_228 + uVar22;
          iVar23 = (int)local_230 + uVar22;
          uVar31 = (ulonglong)local_230 >> 0x20;
          uVar38 = 0;
          if ((int)uVar40 < *(int *)&(param_4->Indices).field_0x18) {
            uVar38 = ~uVar40 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            uVar21 = (*pcVar9)();
            return (bool)uVar21;
          }
          local_288 = local_288 + 4;
          lVar39 = *(longlong *)&(param_4->Indices).field_0x10;
          uVar40 = uVar40 + 1;
          *(int *)(local_2a8 + lVar39) = iVar23;
          *(uint *)(local_2a8 + 4 + lVar39) = (int)uVar31 + uVar22;
          *(int *)(local_2a8 + 8 + lVar39) = iVar5;
          local_2a8 = local_2a8 + 0xc;
        } while ((int)(iVar24 + uVar40) <
                 (int)((param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                      (param_2->TriangleRefCounts).RefCounts.CurBlockUsed));
      }
      iVar24 = (**(code **)(*(longlong *)&param_4->BoundingBox + 0x60))();
      if (iVar24 != 0) {
        uVar40 = 0;
        if (param_3 < *(int *)&(param_4->BoundingBox).field_0x18) {
          uVar40 = uVar42;
        }
        if ((uVar40 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar9 = (code *)swi(3);
          uVar21 = (*pcVar9)();
          return (bool)uVar21;
        }
        uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        lVar39 = *(longlong *)&(param_4->BoundingBox).field_0x10;
        lVar41 = lVar44 * 0x38;
        lVar45 = (longlong)(int)uVar22 * 0xc;
        pdVar1 = (double *)(lVar39 + 0x18 + lVar41);
        *pdVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        pdVar1[1] = (double)uVar4;
        *(double *)(lVar39 + 0x28 + lVar41) =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        puVar3 = (undefined8 *)(lVar39 + 0x18 + lVar41);
        uVar17 = puVar3[1];
        *(undefined1 *)(lVar39 + 0x30 + lVar41) = 0;
        uVar4 = *(undefined8 *)(lVar39 + 0x28 + lVar41);
        *(undefined8 *)(lVar39 + lVar41) = *puVar3;
        ((undefined8 *)(lVar39 + lVar41))[1] = uVar17;
        *(undefined8 *)(lVar39 + 0x10 + lVar41) = uVar4;
        uVar40 = uVar22;
        while( true ) {
          uVar38 = 0;
          if (param_3 < *(int *)&(param_4->VertexCount).field_0x18) {
            uVar38 = uVar42;
          }
          if ((uVar38 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            uVar21 = (*pcVar9)();
            return (bool)uVar21;
          }
          if ((int)(*(int *)(*(longlong *)&(param_4->VertexCount).field_0x10 + lVar44 * 4) + uVar22)
              <= (int)uVar40) break;
          uVar38 = 0;
          if ((int)uVar40 < *(int *)&(param_4->Vertex).field_0x18) {
            uVar38 = ~uVar40 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            uVar21 = (*pcVar9)();
            return (bool)uVar21;
          }
          lVar39 = *(longlong *)&(param_4->Vertex).field_0x10;
          dVar99 = (double)*(float *)(lVar45 + lVar39);
          uVar38 = 0;
          if (param_3 < *(int *)&(param_4->BoundingBox).field_0x18) {
            uVar38 = uVar42;
          }
          dVar107 = (double)*(float *)(lVar45 + 4 + lVar39);
          dVar78 = (double)*(float *)(lVar45 + 8 + lVar39);
          if ((uVar38 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            uVar21 = (*pcVar9)();
            return (bool)uVar21;
          }
          lVar39 = *(longlong *)&(param_4->BoundingBox).field_0x10;
          if (*(char *)(lVar41 + 0x30 + lVar39) == '\0') {
            *(double *)(lVar41 + 0x18 + lVar39) = dVar99;
            uVar40 = uVar40 + 1;
            *(double *)(lVar41 + 0x20 + lVar39) = dVar107;
            lVar45 = lVar45 + 0xc;
            *(double *)(lVar41 + 0x28 + lVar39) = dVar78;
            puVar3 = (undefined8 *)(lVar41 + 0x18 + lVar39);
            uVar17 = puVar3[1];
            *(undefined1 *)(lVar41 + 0x30 + lVar39) = 1;
            uVar4 = *(undefined8 *)(lVar41 + 0x28 + lVar39);
            *(undefined8 *)(lVar41 + lVar39) = *puVar3;
            ((undefined8 *)(lVar41 + lVar39))[1] = uVar17;
            *(undefined8 *)(lVar41 + 0x10 + lVar39) = uVar4;
          }
          else {
            dVar106 = dVar99;
            if (*(double *)(lVar41 + lVar39) <= dVar99) {
              dVar106 = *(double *)(lVar41 + lVar39);
            }
            dVar110 = *(double *)(lVar41 + 8 + lVar39);
            dVar87 = dVar107;
            if (dVar110 <= dVar107) {
              dVar87 = dVar110;
            }
            dVar110 = *(double *)(lVar41 + 0x18 + lVar39);
            if (dVar99 <= dVar110) {
              dVar99 = dVar110;
            }
            dVar110 = *(double *)(lVar41 + 0x20 + lVar39);
            if (dVar107 <= dVar110) {
              dVar107 = dVar110;
            }
            uVar40 = uVar40 + 1;
            *(double *)(lVar41 + lVar39) = dVar106;
            lVar45 = lVar45 + 0xc;
            dVar106 = *(double *)(lVar41 + 0x10 + lVar39);
            if (dVar78 <= dVar106) {
              dVar106 = dVar78;
            }
            *(double *)(lVar41 + 8 + lVar39) = dVar87;
            dVar110 = *(double *)(lVar41 + 0x28 + lVar39);
            if (dVar78 <= dVar110) {
              dVar78 = dVar110;
            }
            *(double *)(lVar41 + 0x18 + lVar39) = dVar99;
            *(double *)(lVar41 + 0x20 + lVar39) = dVar107;
            *(double *)(lVar41 + 0x10 + lVar39) = dVar106;
            *(double *)(lVar41 + 0x28 + lVar39) = dVar78;
          }
        }
      }
      bVar20 = true;
    }
    else {
      bVar20 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5943927746286587164>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                          ,0xd1c,"OldTriangleCount == NewTriangleCount");
      if (bVar20) goto code_r0x00014c9f09e2;
      bVar20 = false;
    }
  }
  else {
    bVar20 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5943927746286587164>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                        ,0xd1c,"OldVertexCount == NewVertexCount");
    if (bVar20) {
code_r0x00014c9f09e2:
      pcVar9 = (code *)swi(3);
      uVar21 = (*pcVar9)();
      return (bool)uVar21;
    }
    bVar20 = false;
  }
  return bVar20;
}

