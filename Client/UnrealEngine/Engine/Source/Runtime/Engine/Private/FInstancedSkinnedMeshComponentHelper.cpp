// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// CalcBounds<UInstancedSkinnedMeshComponent> @ 147897160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffff978 : 0x00014789763f */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TBoxSphereBounds<double,double> * __cdecl
FInstancedSkinnedMeshComponentHelper::CalcBounds<UInstancedSkinnedMeshComponent>
          (TBoxSphereBounds<double,double> *__return_storage_ptr__,
          UInstancedSkinnedMeshComponent *param_1,TTransform<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  UTransformProviderData *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  TTransform<double> *pTVar17;
  bool bVar18;
  char cVar19;
  uint uVar20;
  USkinnedAsset *pUVar21;
  TBoxSphereBounds<double,double> *pTVar22;
  TMatrix<double> *pTVar23;
  double *pdVar24;
  TVector<double>_u_0 *pTVar25;
  uint uVar26;
  longlong lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  double dVar33;
  undefined1 auStackY_6b8 [32];
  TVector<double>_u_0 local_688;
  double dStack_670;
  double local_668;
  double dStack_660;
  double local_658;
  char local_650;
  undefined8 local_648;
  undefined8 uStack_640;
  float local_638;
  float local_634;
  TTransform<double> *local_630;
  TBoxSphereBounds<double,double> *local_628;
  TVector<double>_u_0 local_620;
  double local_608;
  double local_600;
  double local_5f8;
  double local_5f0;
  TVector<double>_u_0 local_5e8;
  double local_5d0;
  double local_5c8;
  double local_5c0;
  double local_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  TVector<double>_u_0 local_578;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  TBoxSphereBounds<double,double> local_540;
  undefined1 local_508 [56];
  TBoxSphereBounds<double,double> local_4d0;
  TMatrix<double> local_498;
  TVector<double>_u_0 local_418;
  double local_400;
  double local_3f8;
  double local_3f0;
  undefined1 local_3e8;
  TVector<double>_u_0 local_3e0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  undefined1 local_3b0;
  TVector<double>_u_0 local_3a8;
  double local_390;
  double local_388;
  double local_380;
  TVector<double>_u_0 local_370;
  double local_358;
  double local_350;
  double local_348;
  TTransform<double> local_338;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_6b8;
  local_630 = param_2;
  local_628 = __return_storage_ptr__;
  pUVar21 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)param_1);
  if ((pUVar21 == (USkinnedAsset *)0x0) || ((param_1->InstanceData).ArrayNum < 1)) {
    USkinnedMeshComponent::CalcMeshBound
              ((USkinnedMeshComponent *)param_1,__return_storage_ptr__,
               &UE::Math::TVector<float>::ZeroVector,false,param_2);
    return __return_storage_ptr__;
  }
  UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_498);
  local_650 = '\0';
  bVar18 = IsInParallelGameThread();
  if (!bVar18) {
    IsInGameThread();
  }
  dVar14 = __real_3fd0000000000000;
  dVar13 = __real_3fe0000000000000;
  pUVar3 = (param_1->TransformProvider).field0_0x0.DebugPtr;
  if ((((pUVar3 != (UTransformProviderData *)0x0) &&
       (cVar19 = (**(code **)(pUVar3->_padding_ + 0x2b0))(pUVar3), cVar19 != '\0')) &&
      (cVar19 = (**(code **)(pUVar3->_padding_ + 0x2d0))(pUVar3), cVar19 != '\0')) &&
     (cVar19 = (**(code **)(pUVar3->_padding_ + 0x2f8))(pUVar3), cVar19 == '\0')) {
    (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3);
    pTVar17 = local_630;
    uVar16 = _UNK_150a9e6b8;
    uVar15 = ___xmm_ff7fffff7f7fffff7f7fffff7f7fffff;
    uVar26 = 0;
    if (0 < (param_1->InstanceData).ArrayNum) {
      lVar27 = 0;
      do {
        uVar20 = 0;
        if ((int)uVar26 < (param_1->InstanceData).ArrayNum) {
          uVar20 = ~uVar26 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          pTVar22 = (TBoxSphereBounds<double,double> *)(*pcVar5)();
          return pTVar22;
        }
        pFVar4 = (param_1->InstanceData).AllocatorInstance.Data;
        local_648 = uVar15;
        uStack_640 = uVar16;
        local_638 = -3.4028235e+38;
        local_634 = -3.4028235e+38;
        cVar19 = (**(code **)(pUVar3->_padding_ + 0x2d8))
                           (pUVar3,*(undefined4 *)(pFVar4 + lVar27 + 0x30),&local_648);
        if (cVar19 != '\0') {
          pFVar1 = pFVar4 + lVar27 + 0x10;
          pFVar2 = pFVar4 + lVar27 + 0x20;
          local_418._s_0.Y = (double)local_648._4_4_;
          local_3e8 = 1;
          local_418._s_0.X = (double)(float)local_648;
          local_400 = (double)uStack_640._4_4_;
          local_418._s_0.Z = (double)(float)uStack_640;
          local_3f0 = (double)local_634;
          local_3f8 = (double)local_638;
          pFVar4 = pFVar4 + lVar27;
          local_278.Rotation.XY.m128d_f64[0] = (double)*(float *)pFVar4;
          local_278.Rotation.XY.m128d_f64[1] = (double)*(float *)(pFVar4 + 4);
          local_278.Rotation.ZW.m128d_f64[0] = (double)*(float *)(pFVar4 + 8);
          local_278.Rotation.ZW.m128d_f64[1] = (double)*(float *)(pFVar4 + 0xc);
          local_278.Translation.ZW.m128d_f64[0] = (double)*(float *)(pFVar1 + 8);
          local_278.Translation.ZW.m128d_f64[1] = (double)*(float *)(pFVar1 + 0xc);
          local_278.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)*(float *)(pFVar1 + 4),0);
          local_278.Translation.XY.m128d_f64[0] = (double)*(float *)pFVar1;
          local_278.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)*(float *)(pFVar1 + 4) >> 0x20);
          local_278.Scale3D.ZW.m128d_f64[0] = (double)*(float *)(pFVar2 + 8);
          local_278.Scale3D.ZW.m128d_f64[1] = (double)*(float *)(pFVar2 + 0xc);
          local_278.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)*(float *)(pFVar2 + 4),0);
          local_278.Scale3D.XY.m128d_f64[0] = (double)*(float *)pFVar2;
          local_278.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)*(float *)(pFVar2 + 4) >> 0x20);
          local_338.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_338.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_338.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_338.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_338.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_338.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_338.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_338.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_338.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_338.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_338.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_338.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_338.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_338.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_338.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_338,&local_278,pTVar17);
          pTVar23 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_338,&local_1b8);
          UE::Math::TBox<double>::TransformBy
                    ((TBox<double> *)&local_418._s_0,(TBox<double> *)&local_3a8._s_0,pTVar23);
          dVar33 = local_390 - local_3a8._s_0.X;
          dVar7 = local_388 - local_3a8._s_0.Y;
          local_608 = dVar33 * dVar13;
          local_600 = dVar7 * dVar13;
          local_620._s_0.X = local_3a8._s_0.X + local_608;
          local_620._s_0.Y = local_3a8._s_0.Y + local_600;
          local_5f8 = local_380 - local_3a8._s_0.Z;
          auVar28._0_8_ = local_5f8 * local_5f8;
          auVar28._8_8_ = 0;
          local_5f8 = local_5f8 * dVar13;
          local_620._s_0.Z = local_3a8._s_0.Z + local_5f8;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = (dVar7 * dVar7 + dVar33 * dVar33 + auVar28._0_8_) * dVar14;
          auVar29 = sqrtpd(auVar28,auVar29);
          local_5f0 = auVar29._0_8_;
          if (local_650 == '\0') {
            local_688._s_0.X = local_3a8._s_0.X + local_608;
            local_688._s_0.Y = local_3a8._s_0.Y + local_600;
            local_688._s_0.Z = local_3a8._s_0.Z + local_5f8;
            dStack_670 = local_608;
            local_668 = local_600;
            dStack_660 = local_5f8;
            local_658 = auVar29._0_8_;
            local_650 = '\x01';
          }
          else {
            pTVar22 = UE::Math::TBoxSphereBounds<double,double>::operator+
                                ((TBoxSphereBounds<double,double> *)&local_688._s_0,&local_540,
                                 (TBoxSphereBounds<double,double> *)&local_620._s_0);
            dVar33 = (pTVar22->Origin).field0_0x0._s_0.X;
            dVar8 = (pTVar22->Origin).field0_0x0._s_0.Y;
            dVar9 = (pTVar22->Origin).field0_0x0._s_0.Z;
            dVar10 = (pTVar22->BoxExtent).field0_0x0._s_0.X;
            dVar11 = (pTVar22->BoxExtent).field0_0x0._s_0.Y;
            dVar12 = (pTVar22->BoxExtent).field0_0x0._s_0.Z;
            dVar7 = pTVar22->SphereRadius;
            if ((local_650 == '\0') &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x1bd,
                                    L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                   ), bVar18)) {
              pcVar5 = (code *)swi(3);
              pTVar22 = (TBoxSphereBounds<double,double> *)(*pcVar5)();
              return pTVar22;
            }
            local_688._s_0.X = dVar33;
            local_688._s_0.Y = dVar8;
            local_688._s_0.Z = dVar9;
            dStack_670 = dVar10;
            local_668 = dVar11;
            dStack_660 = dVar12;
            local_658 = dVar7;
          }
        }
        uVar26 = uVar26 + 1;
        lVar27 = lVar27 + 0x40;
        param_2 = local_630;
        __return_storage_ptr__ = local_628;
      } while ((int)uVar26 < (param_1->InstanceData).ArrayNum);
    }
    if (local_650 != '\0') {
      local_580 = 0;
      local_5b0 = 0;
      uStack_5a8 = 0;
      local_5a0 = 0;
      uStack_598 = 0;
      local_590 = 0;
      uStack_588 = 0;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X = local_688._s_0.X;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = local_688._s_0.Y;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_688._s_0.Z;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dStack_670;
      uVar31 = SUB84(local_658,0);
      uVar32 = (undefined4)((ulonglong)local_658 >> 0x20);
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = local_668;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dStack_660;
      goto LAB_14789765d;
    }
  }
  pdVar24 = (double *)(**(code **)(*(longlong *)pUVar21 + 0x3e0))(pUVar21,local_508);
  uVar26 = 0;
  local_3b0 = 1;
  local_3e0._s_0.X = *pdVar24 - pdVar24[3];
  local_3e0._s_0.Y = pdVar24[1] - pdVar24[4];
  local_3c8 = pdVar24[3] + *pdVar24;
  local_3c0 = pdVar24[4] + pdVar24[1];
  local_3e0._s_0.Z = pdVar24[2] - pdVar24[5];
  local_3b8 = pdVar24[5] + pdVar24[2];
  if (0 < (param_1->InstanceData).ArrayNum) {
    lVar27 = 0;
    do {
      uVar20 = 0;
      if ((int)uVar26 < (param_1->InstanceData).ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar5 = (code *)swi(3);
        pTVar22 = (TBoxSphereBounds<double,double> *)(*pcVar5)();
        return pTVar22;
      }
      pFVar2 = (param_1->InstanceData).AllocatorInstance.Data;
      pFVar4 = pFVar2 + lVar27;
      pFVar1 = pFVar2 + lVar27 + 0x20;
      pFVar2 = pFVar2 + lVar27 + 0x10;
      local_218.Rotation.XY.m128d_f64[0] = (double)*(float *)pFVar4;
      local_218.Rotation.XY.m128d_f64[1] = (double)*(float *)(pFVar4 + 4);
      local_218.Rotation.ZW.m128d_f64[0] = (double)*(float *)(pFVar4 + 8);
      local_218.Rotation.ZW.m128d_f64[1] = (double)*(float *)(pFVar4 + 0xc);
      local_218.Translation.ZW.m128d_f64[0] = (double)*(float *)(pFVar2 + 8);
      local_218.Translation.ZW.m128d_f64[1] = (double)*(float *)(pFVar2 + 0xc);
      local_218.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)*(float *)(pFVar2 + 4),0);
      local_218.Translation.XY.m128d_f64[0] = (double)*(float *)pFVar2;
      local_218.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)*(float *)(pFVar2 + 4) >> 0x20);
      local_218.Scale3D.ZW.m128d_f64[0] = (double)*(float *)(pFVar1 + 8);
      local_218.Scale3D.ZW.m128d_f64[1] = (double)*(float *)(pFVar1 + 0xc);
      local_218.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)*(float *)(pFVar1 + 4),0);
      local_218.Scale3D.XY.m128d_f64[0] = (double)*(float *)pFVar1;
      local_218.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)*(float *)(pFVar1 + 4) >> 0x20);
      local_2d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_2d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_2d8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_2d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_2d8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_2d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_2d8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_2d8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_2d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_2d8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_2d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_2d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_2d8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_2d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_2d8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_2d8,&local_218,param_2);
      pTVar23 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_2d8,&local_138);
      UE::Math::TBox<double>::TransformBy
                ((TBox<double> *)&local_3e0._s_0,(TBox<double> *)&local_370._s_0,pTVar23);
      dVar33 = local_358 - local_370._s_0.X;
      dVar7 = local_350 - local_370._s_0.Y;
      local_5c0 = local_348 - local_370._s_0.Z;
      local_5d0 = dVar33 * dVar13;
      auVar30._0_8_ = local_5c0 * local_5c0;
      auVar30._8_8_ = 0;
      local_5c8 = dVar7 * dVar13;
      local_5c0 = local_5c0 * dVar13;
      local_5e8._s_0.X = local_370._s_0.X + local_5d0;
      local_5e8._s_0.Y = local_370._s_0.Y + local_5c8;
      local_5e8._s_0.Z = local_370._s_0.Z + local_5c0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (dVar7 * dVar7 + dVar33 * dVar33 + auVar30._0_8_) * dVar14;
      auVar29 = sqrtpd(auVar30,auVar6);
      local_5b8 = auVar29._0_8_;
      if (local_650 == '\0') {
        local_688._s_0.X = local_370._s_0.X + local_5d0;
        local_688._s_0.Y = local_370._s_0.Y + local_5c8;
        local_688._s_0.Z = local_370._s_0.Z + local_5c0;
        dStack_670 = local_5d0;
        local_668 = local_5c8;
        dStack_660 = local_5c0;
        local_658 = auVar29._0_8_;
        local_650 = '\x01';
      }
      else {
        pTVar22 = UE::Math::TBoxSphereBounds<double,double>::operator+
                            ((TBoxSphereBounds<double,double> *)&local_688._s_0,&local_4d0,
                             (TBoxSphereBounds<double,double> *)&local_5e8._s_0);
        dVar33 = (pTVar22->Origin).field0_0x0._s_0.X;
        dVar8 = (pTVar22->Origin).field0_0x0._s_0.Y;
        dVar9 = (pTVar22->Origin).field0_0x0._s_0.Z;
        dVar10 = (pTVar22->BoxExtent).field0_0x0._s_0.X;
        dVar11 = (pTVar22->BoxExtent).field0_0x0._s_0.Y;
        dVar12 = (pTVar22->BoxExtent).field0_0x0._s_0.Z;
        dVar7 = pTVar22->SphereRadius;
        if ((local_650 == '\0') &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          pTVar22 = (TBoxSphereBounds<double,double> *)(*pcVar5)();
          return pTVar22;
        }
        local_688._s_0.X = dVar33;
        local_688._s_0.Y = dVar8;
        local_688._s_0.Z = dVar9;
        dStack_670 = dVar10;
        local_668 = dVar11;
        dStack_660 = dVar12;
        local_658 = dVar7;
      }
      uVar26 = uVar26 + 1;
      lVar27 = lVar27 + 0x40;
    } while ((int)uVar26 < (param_1->InstanceData).ArrayNum);
  }
  pTVar25 = &local_688;
  if (local_650 == '\0') {
    pTVar25 = &local_578;
  }
  local_548 = 0;
  local_578._s_0.X = 0.0;
  local_578._s_0.Y = 0.0;
  local_558 = 0;
  uStack_550 = 0;
  local_578._s_0.Z = 0.0;
  uStack_560 = 0;
  dVar13 = pTVar25->XYZ[1];
  dVar14 = pTVar25->XYZ[2];
  dVar7 = pTVar25->XYZ[3];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (pTVar25->_s_0).X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar13;
  dVar13 = pTVar25->XYZ[4];
  dVar33 = pTVar25->XYZ[5];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar14;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar7;
  uVar31 = (undefined4)*(undefined8 *)(pTVar25 + 2);
  uVar32 = (undefined4)((ulonglong)*(undefined8 *)(pTVar25 + 2) >> 0x20);
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar13;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar33;
LAB_14789765d:
  __return_storage_ptr__->SphereRadius = (double)CONCAT44(uVar32,uVar31);
  return __return_storage_ptr__;
}

// GetComponentDesc<UInstancedSkinnedMeshComponent,1> @ 14789e200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInstanceDataManagerSourceDataDesc * __cdecl
FInstancedSkinnedMeshComponentHelper::GetComponentDesc<UInstancedSkinnedMeshComponent,1>
          (FInstanceDataManagerSourceDataDesc *__return_storage_ptr__,
          UInstancedSkinnedMeshComponent *param_1,EShaderPlatform param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  UTransformProviderData *pUVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  bool bVar15;
  float fVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  TConsoleVariableData<int> *pTVar20;
  bool bVar21;
  char cVar22;
  byte bVar23;
  FPrimitiveMaterialPropertyDescriptor *pFVar24;
  USkinnedAsset *pUVar25;
  double *pdVar26;
  undefined8 *puVar27;
  longlong lVar28;
  longlong *plVar29;
  ushort uVar30;
  ushort uVar31;
  undefined1 auStack_248 [32];
  ushort local_228;
  UInstancedSkinnedMeshComponent *local_218;
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
  UTransformProviderData *local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  ushort local_188;
  undefined6 uStack_186;
  undefined8 uStack_180;
  FPrimitiveMaterialPropertyDescriptor local_178;
  undefined1 local_168 [64];
  code *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [128];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_248;
  __return_storage_ptr__->ComponentMobility = Movable;
  (__return_storage_ptr__->Flags).Packed = 0;
  (__return_storage_ptr__->MeshBounds).Min.field0_0x0._s_0.X = 3.4028235e+38;
  (__return_storage_ptr__->MeshBounds).Min.field0_0x0._s_0.Y = 3.4028235e+38;
  (__return_storage_ptr__->MeshBounds).Min.field0_0x0._s_0.Z = 3.4028235e+38;
  (__return_storage_ptr__->MeshBounds).Max.field0_0x0._s_0.X = -3.4028235e+38;
  (__return_storage_ptr__->MeshBounds).Max.field0_0x0._s_0.Y = -3.4028235e+38;
  (__return_storage_ptr__->MeshBounds).Max.field0_0x0._s_0.Z = -3.4028235e+38;
  (__return_storage_ptr__->PrimitiveMaterialDesc).MinMaxMaterialDisplacement.field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (__return_storage_ptr__->PrimitiveMaterialDesc).MaxWorldPositionOffsetDisplacement = 0.0;
  (__return_storage_ptr__->PrimitiveMaterialDesc).bAnyMaterialHasWorldPositionOffset = false;
  (__return_storage_ptr__->PrimitiveMaterialDesc).bAnyMaterialHasPixelAnimation = false;
  (__return_storage_ptr__->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceCustomData = false;
  (__return_storage_ptr__->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceRandom = false;
  __return_storage_ptr__->NumInstances = -1;
  bVar15 = false;
  __return_storage_ptr__->NumCustomDataFloats = 0;
  *(undefined8 *)&__return_storage_ptr__->BuildChangeSet = 0;
  *(undefined8 *)&(__return_storage_ptr__->BuildChangeSet).field_0x28 = 0;
  pFVar24 = FPrimitiveComponentHelper::GetUsedMaterialPropertyDesc<UInstancedSkinnedMeshComponent>
                      (&local_178,param_1,param_2);
  fVar16 = pFVar24->MaxWorldPositionOffsetDisplacement;
  bVar21 = pFVar24->bAnyMaterialHasWorldPositionOffset;
  bVar17 = pFVar24->bAnyMaterialHasPixelAnimation;
  bVar18 = pFVar24->bAnyMaterialHasPerInstanceCustomData;
  bVar19 = pFVar24->bAnyMaterialHasPerInstanceRandom;
  (__return_storage_ptr__->PrimitiveMaterialDesc).MinMaxMaterialDisplacement.field0_0x0 =
       (pFVar24->MinMaxMaterialDisplacement).field0_0x0;
  (__return_storage_ptr__->PrimitiveMaterialDesc).MaxWorldPositionOffsetDisplacement = fVar16;
  (__return_storage_ptr__->PrimitiveMaterialDesc).bAnyMaterialHasWorldPositionOffset = bVar21;
  (__return_storage_ptr__->PrimitiveMaterialDesc).bAnyMaterialHasPixelAnimation = bVar17;
  (__return_storage_ptr__->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceCustomData = bVar18;
  (__return_storage_ptr__->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceRandom = bVar19;
  local_228 = (ushort)((__return_storage_ptr__->PrimitiveMaterialDesc).
                       bAnyMaterialHasPerInstanceRandom & 1);
  if (((__return_storage_ptr__->PrimitiveMaterialDesc).bAnyMaterialHasPerInstanceCustomData == false
      ) || (uVar31 = 10, param_1->NumCustomDataFloats == 0)) {
    uVar31 = 8;
  }
  pUVar25 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)param_1);
  pTVar20 = CVarInstancedSkinnedMeshesForceRefPose.Ref;
  pUVar7 = (param_1->TransformProvider).field0_0x0.DebugPtr;
  bVar21 = IsInParallelGameThread();
  if (bVar21) {
LAB_14789e33b:
    lVar28 = 0;
  }
  else {
    bVar21 = IsInGameThread();
    lVar28 = 4;
    if (bVar21) goto LAB_14789e33b;
  }
  if (*(int *)((longlong)pTVar20->ShadowedValue + lVar28) == 0) {
    if (pUVar7 != (UTransformProviderData *)0x0) {
      cVar22 = (**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7);
      if (cVar22 != '\0') {
        bVar15 = true;
        bVar23 = (**(code **)(pUVar7->_padding_ + 0x2d0))(pUVar7);
        goto LAB_14789e382;
      }
      goto LAB_14789e36d;
    }
  }
  else {
LAB_14789e36d:
    if (pUVar7 != (UTransformProviderData *)0x0) {
      bVar23 = (**(code **)(pUVar7->_padding_ + 0x2d0))(pUVar7);
      goto LAB_14789e382;
    }
  }
  bVar23 = 0;
LAB_14789e382:
  uVar30 = (ushort)(bVar23 & 1) << 5 | local_228;
  (__return_storage_ptr__->Flags).Packed = uVar30 | uVar31;
  pdVar26 = (double *)(**(code **)(*(longlong *)pUVar25 + 0x3e0))(pUVar25,local_168);
  dVar1 = pdVar26[3];
  dVar2 = pdVar26[4];
  dVar3 = pdVar26[5];
  dVar4 = *pdVar26;
  dVar5 = pdVar26[1];
  dVar6 = pdVar26[2];
  (__return_storage_ptr__->MeshBounds).Min.field0_0x0._s_0.X = (float)(dVar4 - dVar1);
  (__return_storage_ptr__->MeshBounds).Min.field0_0x0._s_0.Y = (float)(dVar5 - dVar2);
  (__return_storage_ptr__->MeshBounds).Min.field0_0x0._s_0.Z = (float)(dVar6 - dVar3);
  (__return_storage_ptr__->MeshBounds).Max.field0_0x0._s_0.X = (float)(dVar1 + dVar4);
  (__return_storage_ptr__->MeshBounds).Max.field0_0x0._s_0.Y = (float)(dVar2 + dVar5);
  (__return_storage_ptr__->MeshBounds).Max.field0_0x0._s_0.Z = (float)(dVar3 + dVar6);
  __return_storage_ptr__->NumCustomDataFloats = param_1->NumCustomDataFloats;
  __return_storage_ptr__->NumInstances = (param_1->InstanceData).ArrayNum;
  pdVar26 = (double *)(**(code **)(*(longlong *)param_1 + 0x808))(param_1,local_f8);
  dVar1 = pdVar26[1];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[0][0] = *pdVar26;
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[0][1] = dVar1;
  dVar1 = pdVar26[3];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[0][2] = pdVar26[2];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[0][3] = dVar1;
  dVar1 = pdVar26[5];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[1][0] = pdVar26[4];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[1][1] = dVar1;
  dVar1 = pdVar26[7];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[1][2] = pdVar26[6];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[1][3] = dVar1;
  dVar1 = pdVar26[9];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[2][0] = pdVar26[8];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[2][1] = dVar1;
  dVar1 = pdVar26[0xb];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[2][2] = pdVar26[10];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[2][3] = dVar1;
  dVar1 = pdVar26[0xd];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[3][0] = pdVar26[0xc];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[3][1] = dVar1;
  dVar1 = pdVar26[0xf];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[3][2] = pdVar26[0xe];
  (__return_storage_ptr__->PrimitiveLocalToWorld).M[3][3] = dVar1;
  __return_storage_ptr__->ComponentMobility = (uint)(byte)param_1->field_0x1ab;
  local_208 = *(undefined8 *)&param_1->field_0x1f0;
  uStack_200 = *(undefined8 *)&param_1->field_0x1f8;
  local_1f8 = *(undefined8 *)&param_1->field_0x200;
  uStack_1f0 = *(undefined8 *)&param_1->field_0x208;
  local_1a8 = (UTransformProviderData *)0x0;
  if (bVar15) {
    local_1a8 = pUVar7;
  }
  local_1e8 = *(undefined8 *)&param_1->field_0x210;
  uStack_1e0 = *(undefined8 *)&param_1->field_0x218;
  local_1d8 = *(undefined8 *)&param_1->field_0x220;
  uStack_1d0 = *(undefined8 *)&param_1->field_0x228;
  local_1c8 = *(undefined8 *)&param_1->field_0x230;
  uStack_1c0 = *(undefined8 *)&param_1->field_0x238;
  local_1b8 = *(undefined8 *)&param_1->field_0x240;
  uStack_1b0 = *(undefined8 *)&param_1->field_0x248;
  uStack_1a0 = *(undefined8 *)&(__return_storage_ptr__->MeshBounds).Min.field0_0x0;
  uStack_198 = *(undefined8 *)((longlong)&(__return_storage_ptr__->MeshBounds).Min.field0_0x0 + 8);
  local_190 = *(undefined8 *)((longlong)&(__return_storage_ptr__->MeshBounds).Max.field0_0x0 + 4);
  local_188 = uVar30 >> 5;
  local_128 = (code *)0x0;
  local_218 = param_1;
  puVar27 = FMemory::Malloc(0xb0,0x10);
  *puVar27 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____GetComponentDesc_VUInstancedSkinnedMeshComponent___00_FInstancedSkinnedMeshComponentHelper__SA_AUFInstanceDataManagerSourceDataDesc__AEAVUInstancedSkinnedMeshComponent__W4EShaderPlatform___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar27[2] = local_218;
  puVar27[3] = uStack_210;
  puVar27[4] = local_208;
  puVar27[5] = uStack_200;
  puVar27[6] = local_1f8;
  puVar27[7] = uStack_1f0;
  puVar27[8] = local_1e8;
  puVar27[9] = uStack_1e0;
  puVar27[10] = local_1d8;
  puVar27[0xb] = uStack_1d0;
  puVar27[0xc] = local_1c8;
  puVar27[0xd] = uStack_1c0;
  puVar27[0xe] = local_1b8;
  puVar27[0xf] = uStack_1b0;
  puVar27[0x10] = local_1a8;
  puVar27[0x11] = uStack_1a0;
  puVar27[0x12] = uStack_198;
  puVar27[0x13] = local_190;
  puVar27[0x14] = CONCAT62(uStack_186,local_188);
  puVar27[0x15] = uStack_180;
  lVar28 = *(longlong *)&__return_storage_ptr__->BuildChangeSet;
  uVar14 = *(undefined8 *)&(__return_storage_ptr__->BuildChangeSet).field_0x8;
  if (puVar27 + 2 != (undefined8 *)0x0) {
    local_128 = UE::Core::Private::Function::
                TFunctionRefCaller<`FInstancedSkinnedMeshComponentHelper::GetComponentDesc<UInstancedSkinnedMeshComponent,1>'::__l2::<lambda_1>,void,FInstanceUpdateChangeSet_&>
                ::Call;
  }
  uVar8 = *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x10;
  uVar9 = *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x14;
  uVar10 = *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x18;
  uVar11 = *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x1c;
  uVar12 = *(undefined8 *)&(__return_storage_ptr__->BuildChangeSet).field_0x20;
  plVar13 = *(longlong **)&(__return_storage_ptr__->BuildChangeSet).field_0x28;
  *(code **)&__return_storage_ptr__->BuildChangeSet = local_128;
  *(undefined8 *)&(__return_storage_ptr__->BuildChangeSet).field_0x8 = uStack_120;
  uStack_100._0_4_ = SUB84(puVar27,0);
  uStack_100._4_4_ = (undefined4)((ulonglong)puVar27 >> 0x20);
  *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x10 = local_118;
  *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x14 = uStack_114;
  *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x18 = uStack_110;
  *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x1c = uStack_10c;
  *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x20 = (undefined4)local_108;
  *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x24 = local_108._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x28 = (undefined4)uStack_100;
  *(undefined4 *)&(__return_storage_ptr__->BuildChangeSet).field_0x2c = uStack_100._4_4_;
  local_118 = uVar8;
  uStack_114 = uVar9;
  uStack_110 = uVar10;
  uStack_10c = uVar11;
  local_108 = uVar12;
  uStack_100 = plVar13;
  if (lVar28 != 0) {
    plVar29 = (longlong *)&local_118;
    if (plVar13 != (longlong *)0x0) {
      plVar29 = plVar13;
    }
    local_128 = (code *)lVar28;
    uStack_120 = uVar14;
    (**(code **)(*plVar29 + 0x10))();
  }
  return __return_storage_ptr__;
}

// IsEnabled<UInstancedSkinnedMeshComponent> @ 1478a2960

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FInstancedSkinnedMeshComponentHelper::IsEnabled<UInstancedSkinnedMeshComponent>
          (UInstancedSkinnedMeshComponent *param_1)

{
  int iVar1;
  USkinnedAsset *pUVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  pUVar2 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)param_1);
  if (pUVar2 != (USkinnedAsset *)0x0) {
    pUVar3 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      lVar4 = (**(code **)(*(longlong *)pUVar2 + 0x398))(pUVar2);
      if (lVar4 != 0) {
        lVar4 = 0x9c4;
        if (param_1->bIsInstanceDataGPUOnly == false) {
          lVar4 = 0x950;
        }
        return 0 < *(int *)(&param_1->field_0x0 + lVar4);
      }
    }
  }
  return false;
}

// operator() @ 1478ad070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FInstancedSkinnedMeshComponentHelper::GetComponentDesc<UInstancedSkinnedMeshComponent,1>'::__l2::
<lambda_1>::operator()(void *this,FInstanceUpdateChangeSet *param_1)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  byte bVar14;
  byte bVar15;
  ulonglong uVar16;
  undefined1 auStackY_2a8 [32];
  undefined4 local_258 [2];
  undefined8 local_250;
  FInstanceUpdateChangeSet *pFStack_248;
  int local_240;
  int iStack_23c;
  FInstanceUpdateChangeSet *pFStack_238;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_230;
  FIdentityDeltaRange FStack_228;
  int iStack_224;
  uint local_220;
  int iStack_21c;
  TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *local_218;
  FIdentityDeltaRange FStack_210;
  int iStack_20c;
  uint local_208;
  int iStack_204;
  TArray<float,TSizedDefaultAllocator<32>_> *local_200;
  ulonglong uStack_1f8;
  FInstanceUpdateChangeSet *pFStack_1f0;
  int iStack_1e8;
  uint uStack_1e4;
  int local_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *local_1d0;
  FDeltaRange<1> FStack_1c8;
  int iStack_1b8;
  undefined4 uStack_1b4;
  int local_1b0;
  undefined4 uStack_1ac;
  code *local_1a8;
  undefined8 *local_1a0;
  float *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  code *local_188;
  undefined8 *local_180;
  code *local_178;
  undefined8 *local_170;
  TArrayView<float,int> local_168;
  FWriter local_158;
  FWriter local_140;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  FWriter local_100;
  FWriter local_d8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_1b0 = param_1->NumSourceInstances;
  if (((param_1->bNeedFullUpdate == false) && (param_1->bUpdateAllInstanceTransforms == false)) &&
     (iStack_23c = (param_1->InstanceAttributeTracker).NumChanged[0] +
                   (param_1->InstanceAttributeTracker).NumChanged[1], iStack_23c != local_1b0)) {
    local_240 = (uint)local_240._1_3_ << 8;
  }
  else {
    local_240 = CONCAT31(local_240._1_3_,1);
    iStack_23c = local_1b0;
  }
  local_1d0 = &param_1->Transforms;
  FStack_1c8.NumItems = iStack_23c;
  FStack_1c8._0_4_ = local_240;
  iStack_1b8 = 1;
  uStack_1b4 = CONCAT31(uStack_1b4._1_3_,1);
  pFStack_238 = param_1;
  FStack_1c8.Tracker = &param_1->InstanceAttributeTracker;
  if (((param_1->Transforms).ArrayNum != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                          ,0x113,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_1d8 = *(undefined8 *)this;
  local_1a0 = &local_1d8;
  local_100.Setup._28_4_ = uStack_1b4;
  local_100.Setup.ElementStride = iStack_1b8;
  local_100.Setup.DeltaDataArray = local_1d0;
  local_100.Setup.Delta.bFullUpdate = FStack_1c8.bFullUpdate;
  local_100.Setup.Delta._1_3_ = FStack_1c8._1_3_;
  local_100.Setup.Delta.NumItems = FStack_1c8.NumItems;
  local_100.Setup._36_4_ = uStack_1ac;
  local_100.Setup.NumInstances = local_1b0;
  local_1a8 = UE::Core::Private::Function::
              TFunctionRefCaller<``FInstancedSkinnedMeshComponentHelper::GetComponentDesc<UInstancedSkinnedMeshComponent,1>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,FRenderTransform,int>
              ::Call;
  local_100.Setup.Delta.Tracker = FStack_1c8.Tracker;
  TDeltaSetup<FRenderTransform,FInstanceAttributeTracker::FDeltaRange<1>_>::FWriter::Gather
            (&local_100,(TFunctionRef<FRenderTransform___cdecl(int)> *)&local_1a8);
  iStack_1e8 = param_1->NumCustomDataFloats;
  bVar15 = *(byte *)&param_1->Flags >> 1;
  if ((bVar15 & 1) == 0) {
    local_200 = &param_1->PerInstanceCustomData;
    local_250 = 1;
    pFStack_248 = (FInstanceUpdateChangeSet *)0x0;
    local_1e0 = param_1->NumSourceInstances;
    uStack_1f8 = 1;
    pFStack_1f0 = (FInstanceUpdateChangeSet *)0x0;
    uStack_1e4 = CONCAT31(uStack_1e4._1_3_,bVar15) & 0xffffff01;
  }
  else {
    local_1e0 = param_1->NumSourceInstances;
    if (((param_1->bNeedFullUpdate == false) && ((*(byte *)&param_1->ForceFullFlags >> 1 & 1) == 0))
       && (iVar13 = (param_1->InstanceAttributeTracker).NumChanged[0] +
                    (param_1->InstanceAttributeTracker).NumChanged[2], iVar13 != local_1e0)) {
      local_250 = CONCAT44(iVar13,(undefined4)local_250) & 0xffffffffffffff00;
    }
    else {
      local_250 = CONCAT44(local_1e0,(undefined4)local_250);
      local_250 = CONCAT71(local_250._1_7_,1);
    }
    local_200 = &param_1->PerInstanceCustomData;
    uStack_1e4 = CONCAT31(uStack_1e4._1_3_,bVar15) & 0xffffff01;
    uStack_1f8 = local_250;
    pFStack_248 = param_1;
    pFStack_1f0 = param_1;
    if (((param_1->PerInstanceCustomData).ArrayNum != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                            ,0x113,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  lVar7 = *(longlong *)this;
  local_d8.Setup._28_4_ = uStack_1e4;
  local_d8.Setup.ElementStride = iStack_1e8;
  local_198 = *(float **)(lVar7 + 0x960);
  iVar13 = *(int *)(lVar7 + 0x968);
  iVar5 = *(int *)(lVar7 + 0x958);
  local_d8.Setup.DeltaDataArray = local_200;
  local_d8.Setup.Delta.bFullUpdate = (bool)(undefined1)uStack_1f8;
  local_d8.Setup.Delta._1_3_ = uStack_1f8._1_3_;
  local_d8.Setup.Delta.NumItems = uStack_1f8._4_4_;
  local_d8.Setup._36_4_ = uStack_1dc;
  local_d8.Setup.NumInstances = local_1e0;
  local_d8.Setup.Delta.Tracker = &pFStack_1f0->InstanceAttributeTracker;
  if ((iVar13 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_168._12_4_ = uStack_18c;
  local_168.ArrayNum = iVar13;
  local_168.DataPtr = local_198;
  iStack_190 = iVar13;
  TDeltaSetup<float,FInstanceAttributeTracker::FDeltaRange<2>_>::FWriter::Gather<float>
            (&local_d8,&local_168,iVar5);
  bVar15 = *(byte *)&param_1->Flags >> 3;
  bVar14 = bVar15 & 1;
  if (*(longlong *)((longlong)this + 0x70) == 0) {
    if (bVar14 == 0) {
      local_258[0] = 0;
    }
    else {
      uVar6 = param_1->NumSourceInstances;
      pTVar2 = &param_1->InstanceSkinningData;
      uVar16 = (ulonglong)uVar6;
      if (((param_1->InstanceSkinningData).ArrayNum != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                              ,0x113,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_258[0] = 0;
      if (uVar6 == 0) {
        (param_1->InstanceSkinningData).ArrayNum = 0;
        if ((param_1->InstanceSkinningData).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&pTVar2->AllocatorInstance,0,&(param_1->InstanceSkinningData).ArrayMax);
        }
      }
      else {
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
        }
        piVar1 = &(param_1->InstanceSkinningData).ArrayMax;
        (param_1->InstanceSkinningData).ArrayNum = 0;
        if (*piVar1 != uVar6) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar6,&pTVar2->AllocatorInstance,0,piVar1);
        }
        if (0 < (int)uVar6) {
          do {
            pFVar4 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)local_258) &&
                ((FScriptContainerElement *)local_258 < pFVar4 + (longlong)*piVar1 * 4)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar13 = (param_1->InstanceSkinningData).ArrayNum;
            if (iVar13 == *piVar1) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar2->AllocatorInstance,piVar1);
              (param_1->InstanceSkinningData).ArrayNum = iVar13;
            }
            (param_1->InstanceSkinningData).ArrayNum = iVar13 + 1;
            *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_258[0];
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
      }
    }
  }
  else {
    iStack_224 = 1;
    local_230 = &param_1->InstanceSkinningData;
    iStack_21c = param_1->NumSourceInstances;
    local_220 = CONCAT31(local_220._1_3_,bVar15) & 0xffffff01;
    if (bVar14 == 0) {
      FStack_228.NumItems = 0;
    }
    else {
      FStack_228.NumItems = iStack_21c;
      if (((param_1->InstanceSkinningData).ArrayNum != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                              ,0x113,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    local_158.Setup.ElementStride = iStack_224;
    local_158.Setup.Delta.NumItems = FStack_228.NumItems;
    local_a8 = *(undefined8 *)this;
    local_158.Setup.NumInstances = iStack_21c;
    local_158.Setup._16_4_ = local_220;
    local_158.Setup.DeltaDataArray = local_230;
    local_98 = *(undefined8 *)((longlong)this + 0x10);
    uStack_90 = *(undefined8 *)((longlong)this + 0x18);
    local_a0 = *(undefined8 *)((longlong)this + 0x70);
    local_88 = *(undefined8 *)((longlong)this + 0x20);
    uStack_80 = *(undefined8 *)((longlong)this + 0x28);
    local_78 = *(undefined8 *)((longlong)this + 0x30);
    uStack_70 = *(undefined8 *)((longlong)this + 0x38);
    local_180 = &local_a8;
    local_68 = *(undefined8 *)((longlong)this + 0x40);
    uStack_60 = *(undefined8 *)((longlong)this + 0x48);
    local_58 = *(undefined8 *)((longlong)this + 0x50);
    uStack_50 = *(undefined8 *)((longlong)this + 0x58);
    local_48 = *(undefined8 *)((longlong)this + 0x60);
    uStack_40 = *(undefined8 *)((longlong)this + 0x68);
    local_188 = UE::Core::Private::Function::
                TFunctionRefCaller<``FInstancedSkinnedMeshComponentHelper::GetComponentDesc<UInstancedSkinnedMeshComponent,1>'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,unsigned_int,int>
                ::Call;
    TDeltaSetup<unsigned_int,FIdentityDeltaRange>::FWriter::Gather
              (&local_158,(TFunctionRef<unsigned_int___cdecl(int)> *)&local_188);
  }
  if ((*(longlong *)((longlong)this + 0x70) == 0) || (*(short *)((longlong)this + 0x90) == 0)) {
    if ((*(byte *)&param_1->Flags >> 5 & 1) != 0) {
      uVar6 = param_1->NumSourceInstances;
      pTVar3 = &param_1->InstanceLocalBounds;
      uVar16 = (ulonglong)uVar6;
      if (((param_1->InstanceLocalBounds).ArrayNum != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                              ,0x113,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar4 = (FScriptContainerElement *)((longlong)this + 0x78);
      if (uVar6 == 0) {
        (param_1->InstanceLocalBounds).ArrayNum = 0;
        if ((param_1->InstanceLocalBounds).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,4,0,&pTVar3->AllocatorInstance,0,&(param_1->InstanceLocalBounds).ArrayMax)
          ;
        }
      }
      else {
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
        }
        piVar1 = &(param_1->InstanceLocalBounds).ArrayMax;
        (param_1->InstanceLocalBounds).ArrayNum = 0;
        if (*piVar1 != uVar6) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,4,uVar6,&pTVar3->AllocatorInstance,0,piVar1);
        }
        if (0 < (int)uVar6) {
          do {
            pFVar8 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar8 <= pFVar4) && (pFVar4 < pFVar8 + (longlong)*piVar1 * 0x18)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar13 = (param_1->InstanceLocalBounds).ArrayNum;
            if (iVar13 == *piVar1) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x418,&pTVar3->AllocatorInstance,piVar1);
              (param_1->InstanceLocalBounds).ArrayNum = iVar13;
            }
            (param_1->InstanceLocalBounds).ArrayNum = iVar13 + 1;
            uVar11 = *(undefined8 *)((longlong)this + 0x80);
            pFVar9 = (pTVar3->AllocatorInstance).Data;
            pFVar8 = pFVar9 + (longlong)iVar13 * 0x18;
            *(undefined8 *)pFVar8 = *(undefined8 *)pFVar4;
            *(undefined8 *)(pFVar8 + 8) = uVar11;
            *(undefined8 *)(pFVar9 + (longlong)iVar13 * 0x18 + 0x10) =
                 *(undefined8 *)((longlong)this + 0x88);
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
      }
    }
  }
  else {
    local_218 = &param_1->InstanceLocalBounds;
    bVar15 = *(byte *)&param_1->Flags >> 5;
    iStack_204 = param_1->NumSourceInstances;
    local_208 = CONCAT31(local_208._1_3_,bVar15) & 0xffffff01;
    iStack_20c = 1;
    if ((bVar15 & 1) == 0) {
      FStack_210.NumItems = 0;
    }
    else {
      FStack_210.NumItems = iStack_204;
      if (((param_1->InstanceLocalBounds).ArrayNum != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                              ,0x113,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    local_128 = *(undefined8 *)this;
    local_140.Setup.ElementStride = iStack_20c;
    local_140.Setup.Delta.NumItems = FStack_210.NumItems;
    local_140.Setup.NumInstances = iStack_204;
    local_140.Setup._16_4_ = local_208;
    local_120 = *(undefined8 *)((longlong)this + 0x70);
    local_170 = &local_128;
    local_140.Setup.DeltaDataArray = local_218;
    local_118 = *(undefined8 *)((longlong)this + 0x78);
    uStack_110 = *(undefined8 *)((longlong)this + 0x80);
    local_178 = UE::Core::Private::Function::
                TFunctionRefCaller<``FInstancedSkinnedMeshComponentHelper::GetComponentDesc<UInstancedSkinnedMeshComponent,1>'::__l2::<lambda_1>::operator()'::__l10::<lambda_3>,FRenderBounds,int>
                ::Call;
    local_108 = *(undefined8 *)((longlong)this + 0x88);
    TDeltaSetup<FRenderBounds,FIdentityDeltaRange>::FWriter::Gather
              (&local_140,(TFunctionRef<FRenderBounds___cdecl(int)> *)&local_178);
  }
  return;
}

