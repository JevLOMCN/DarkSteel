// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ~FSkinnedMeshObject @ 1456de6f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FSkinnedMeshObject::~FSkinnedMeshObject(FSkinnedMeshObject *this)

{
  undefined1 *puVar1;
  int iVar2;
  FSceneInterface *pFVar3;
  FTransformObject *pFVar4;
  FScriptContainerElement *pFVar5;
  
  *(undefined ***)this = &___7FSkinnedMeshObject__6B_;
  pFVar3 = ((this->PrimitiveSceneData).SceneProxy)->Scene;
  (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,&this->PrimitiveSceneDesc);
  pFVar4 = (this->TransformObject).Reference;
  if (pFVar4 != (FTransformObject *)0x0) {
    FTransformObject::RemoveListener(pFVar4,(FTransformObjectListener *)this);
    pFVar4 = (this->TransformObject).Reference;
    if (pFVar4 != (FTransformObject *)0x0) {
      (this->TransformObject).Reference = (FTransformObject *)0x0;
      puVar1 = &pFVar4->field_0x18;
      LOCK();
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
        (**(code **)(*(longlong *)pFVar4 + 8))(pFVar4,1);
      }
    }
  }
  pFVar5 = (this->PrevTransforms).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->CustomPrimitiveData).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar4 = (this->TransformObject).Reference;
  if (pFVar4 != (FTransformObject *)0x0) {
    puVar1 = &pFVar4->field_0x18;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (**(code **)(*(longlong *)pFVar4 + 8))(pFVar4,1);
    }
  }
  return;
}

// OnTransformObjectDirty @ 145718b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FSkinnedMeshObject::OnTransformObjectDirty(FSkinnedMeshObject *this)

{
  double dVar1;
  double dVar2;
  int iVar3;
  FPrimitiveSceneProxy *pFVar4;
  FScene *this_00;
  FSkeletalMeshObject *pFVar5;
  code *pcVar6;
  TTransform<double> *pTVar7;
  TTransform<double> *pTVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  uint uVar16;
  bool bVar17;
  undefined4 uVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStackY_558 [32];
  ForAnyElementType local_508;
  undefined8 local_500;
  void *local_4f8;
  undefined8 local_4f0;
  Info local_4e8;
  TVector<double>_u_0 local_4d0;
  double local_4b8;
  double dStack_4b0;
  double dStack_4a8;
  undefined8 local_4a0;
  double dStack_498;
  double dStack_490;
  double local_488;
  undefined1 local_480 [48];
  double local_450;
  TMatrix<double> local_448;
  TOptional<UE::Math::TTransform<double>_> local_3c8;
  undefined1 local_358 [24];
  undefined8 uStack_340;
  void *local_338;
  undefined4 local_330;
  uint local_32c;
  undefined4 local_328;
  undefined4 local_324;
  ForElementType<FSetElementId> local_320;
  ulonglong local_310;
  ForAnyElementType local_308;
  undefined8 local_300;
  TBitArray<FDefaultBitArrayAllocator> local_2f8;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined8 local_2d0;
  void *local_2c8;
  ulonglong local_2c0;
  undefined1 local_2b8 [24];
  undefined8 uStack_2a0;
  void *local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  void *local_278;
  ulonglong uStack_270;
  undefined8 local_268;
  FSkinnedMeshSceneProxyDynamicData local_258;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_558;
  pFVar4 = (this->PrimitiveSceneData).SceneProxy;
  this_00 = (FScene *)pFVar4->Scene;
  FTransformObject::GetInfo((this->TransformObject).Reference,&local_4e8);
  UE::Math::TTransform<double>::ToMatrixWithScale(local_4e8.WorldTransform,&local_148);
  pFVar5 = this->MeshObject;
  pcVar6 = *(code **)(pFVar5->_padding_ + 0x108);
  uVar18 = (**(code **)(*(longlong *)this_00 + 0x4e8))(this_00);
  (*pcVar6)(pFVar5,&local_148,uVar18);
  pFVar5 = this->MeshObject;
  pcVar6 = *(code **)(pFVar5->_padding_ + 0x110);
  uVar18 = (**(code **)(*(longlong *)this_00 + 0x4e8))(this_00);
  (*pcVar6)(pFVar5,&local_148,uVar18);
  UE::Math::TTransform<double>::ToMatrixWithScale(local_4e8.WorldTransform,&local_448);
  dVar13 = (pFVar4->LocalBounds).BoxExtent.field0_0x0._s_0.X;
  dVar14 = (pFVar4->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
  auVar22 = *(undefined1 (*) [16])&(pFVar4->LocalBounds).Origin.field0_0x0;
  dVar1 = (pFVar4->LocalBounds).BoxExtent.field0_0x0._s_0.Z;
  dVar2 = (pFVar4->LocalBounds).Origin.field0_0x0._s_0.Z;
  dVar11 = auVar22._0_8_;
  dVar12 = auVar22._8_8_;
  dVar10 = (double)CONCAT44((uint)((ulonglong)(dVar14 * local_448.M[1][0]) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar14 * local_448.M[1][0],0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
           (double)CONCAT44((uint)((ulonglong)(dVar13 * local_448.M[0][0]) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar13 * local_448.M[0][0],0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
           (double)CONCAT44((uint)((ulonglong)(dVar1 * local_448.M[2][0]) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar1 * local_448.M[2][0],0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dStack_498 = (double)CONCAT44((uint)((ulonglong)(dVar14 * local_448.M[1][1]) >> 0x20) &
                                _UNK_15061cc8c,SUB84(dVar14 * local_448.M[1][1],0) & _UNK_15061cc88)
               + (double)CONCAT44((uint)((ulonglong)(dVar13 * local_448.M[0][1]) >> 0x20) &
                                  _UNK_15061cc8c,
                                  SUB84(dVar13 * local_448.M[0][1],0) & _UNK_15061cc88) +
               (double)CONCAT44((uint)((ulonglong)(dVar1 * local_448.M[2][1]) >> 0x20) &
                                _UNK_15061cc8c,SUB84(dVar1 * local_448.M[2][1],0) & _UNK_15061cc88);
  auVar20._8_4_ = auVar22._8_4_;
  auVar20._0_8_ = dVar12;
  auVar20._12_4_ = auVar22._12_4_;
  dStack_490 = (double)CONCAT44((uint)((ulonglong)(dVar14 * local_448.M[1][2]) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar14 * local_448.M[1][2],0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
               (double)CONCAT44((uint)((ulonglong)(dVar13 * local_448.M[0][2]) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar13 * local_448.M[0][2],0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
               (double)CONCAT44((uint)((ulonglong)(dVar1 * local_448.M[2][2]) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar1 * local_448.M[2][2],0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  local_4a0._0_4_ = SUB84(dVar10,0);
  local_4a0._4_4_ = (undefined4)((ulonglong)dVar10 >> 0x20);
  local_4b8 = dVar12 * local_448.M[1][0] + dVar11 * local_448.M[0][0] + dVar2 * local_448.M[2][0] +
              local_448.M[3][0];
  dStack_4b0 = auVar20._8_8_ * local_448.M[1][1] + dVar11 * local_448.M[0][1] +
               dVar2 * local_448.M[2][1] + local_448.M[3][1];
  local_3c8.bIsSet = false;
  auVar21._0_8_ =
       local_448.M[1][0] * local_448.M[1][0] + local_448.M[0][0] * local_448.M[0][0] +
       local_448.M[2][0] * local_448.M[2][0];
  auVar21._8_8_ =
       local_448.M[1][1] * local_448.M[1][1] + local_448.M[0][1] * local_448.M[0][1] +
       local_448.M[2][1] * local_448.M[2][1];
  auVar22._8_4_ = SUB84(auVar21._8_8_,0);
  auVar22._0_8_ = auVar21._8_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar21._8_8_ >> 0x20);
  auVar22 = maxpd(auVar21,auVar22);
  dVar1 = local_448.M[1][2] * local_448.M[1][2] + local_448.M[0][2] * local_448.M[0][2] +
          local_448.M[2][2] * local_448.M[2][2];
  auVar9._8_4_ = SUB84(dVar1,0);
  auVar9._0_8_ = dVar1;
  auVar9._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar22 = maxpd(auVar22,auVar9);
  local_488 = SQRT(dStack_490 * dStack_490 + dVar10 * dVar10 + dStack_498 * dStack_498);
  dVar1 = SQRT(auVar22._0_8_) * (pFVar4->LocalBounds).SphereRadius;
  if (dVar1 <= local_488) {
    local_488 = dVar1;
  }
  dStack_4a8 = dVar12 * local_448.M[1][2] + dVar11 * local_448.M[0][2] + dVar2 * local_448.M[2][2] +
               local_448.M[3][2];
  local_480._24_4_ = (undefined4)local_4a0;
  local_480._16_8_ = dStack_4a8;
  local_480._28_4_ = local_4a0._4_4_;
  local_4d0._s_0.Z = 0.0;
  local_4d0._s_0.X = 0.0;
  local_4d0._s_0.Y = 0.0;
  local_480._0_8_ = local_4b8;
  local_480._8_8_ = dStack_4b0;
  local_480._40_8_ = dStack_490;
  local_450 = local_488;
  local_4a0 = dVar10;
  local_480._32_8_ = dStack_498;
  FScene::UpdatePrimitiveTransform_RenderThread
            (this_00,pFVar4,(TBoxSphereBounds<double,double> *)local_480,&pFVar4->LocalBounds,
             &local_148,(TVector<double> *)&local_4d0._s_0,&local_3c8);
  local_32c = 0x80;
  local_508.Data = (FScriptContainerElement *)0x0;
  local_358._16_8_ = 0;
  uStack_340 = 0;
  local_500 = 0;
  local_320.InlineData[0] = '\0';
  local_320.InlineData[1] = '\0';
  local_320.InlineData[2] = '\0';
  local_320.InlineData[3] = '\0';
  local_320._padding_ = 0;
  local_310 = 0;
  local_358._0_8_ = (FScriptContainerElement *)0x0;
  local_358._8_8_ = 0;
  local_338 = (void *)0x0;
  local_330 = 0;
  local_328 = 0xffffffff;
  local_324 = 0;
  local_320.SecondaryData = (ForElementType<FSetElementId>)0x0;
  iVar19 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x850,&local_508,(int *)((longlong)&local_500 + 4));
  local_500 = CONCAT44(local_500._4_4_,iVar19 + 1);
  TSet<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>,FDefaultSetAllocator>
              *)(local_508.Data + (longlong)iVar19 * 0x50),
             (TSet<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>,FDefaultSetAllocator>
              *)local_358);
  local_310 = local_310 & 0xffffffff00000000;
  if (local_320.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_320.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_358,0,local_358._8_4_);
  iVar19 = SUB84(local_358._8_8_,4);
  local_358._8_8_ = local_358._8_8_ & 0xffffffff00000000;
  if (iVar19 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_358,0,(int *)(local_358 + 0xc));
  }
  local_328 = 0xffffffff;
  local_324 = 0;
  local_330 = 0;
  if (0x80 < local_32c) {
    local_32c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_358 + 0x10),0);
  }
  if (local_338 != (void *)0x0) {
    FMemory::Free(local_338);
  }
  if ((FScriptContainerElement *)local_358._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_358._0_8_);
  }
  FSkinnedMeshSceneProxyDynamicData::FSkinnedMeshSceneProxyDynamicData(&local_258);
  local_258.ExternalMorphSets.DataPtr =
       (TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
        *)local_508.Data;
  local_258.ExternalMorphSets.ArrayNum = (int)local_500;
  if ((int)local_500 < 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar17) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_258.ExternalMorphSets._12_4_ = local_4f0._4_4_;
  iVar19 = (local_4e8.BoneTransforms)->ArrayNum;
  pTVar7 = (TTransform<double> *)((local_4e8.BoneTransforms)->AllocatorInstance).Data;
  if (iVar19 < 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar17) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar8 = (TTransform<double> *)(this->PrevTransforms).AllocatorInstance.Data;
  iVar3 = (this->PrevTransforms).ArrayNum;
  local_258.ComponentSpaceTransforms._12_4_ = local_4f0._4_4_;
  local_258.ComponentSpaceTransforms.DataPtr = pTVar7;
  local_258.ComponentSpaceTransforms.ArrayNum = iVar19;
  if (iVar3 < 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar17) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_258.PreviousComponentSpaceTransforms._12_4_ = local_4f0._4_4_;
  local_258.PreviousBoneTransformRevisionNumber = this->BoneTransformRevisionNumber;
  local_258.ComponentWorldTransform.Rotation.XY.m128d_f64[0] =
       ((local_4e8.WorldTransform)->Rotation).XY.m128d_f64[0];
  local_258.ComponentWorldTransform.Rotation.XY.m128d_f64[1] =
       ((local_4e8.WorldTransform)->Rotation).XY.m128d_f64[1];
  local_258.ComponentWorldTransform.Rotation.ZW.m128d_f64[0] =
       ((local_4e8.WorldTransform)->Rotation).ZW.m128d_f64[0];
  local_258.ComponentWorldTransform.Rotation.ZW.m128d_f64[1] =
       ((local_4e8.WorldTransform)->Rotation).ZW.m128d_f64[1];
  local_258.ComponentWorldTransform.Translation.XY.m128d_f64[0] =
       ((local_4e8.WorldTransform)->Translation).XY.m128d_f64[0];
  local_258.ComponentWorldTransform.Translation.XY.m128d_f64[1] =
       ((local_4e8.WorldTransform)->Translation).XY.m128d_f64[1];
  local_258.ComponentWorldTransform.Translation.ZW.m128d_f64[0] =
       ((local_4e8.WorldTransform)->Translation).ZW.m128d_f64[0];
  local_258.ComponentWorldTransform.Translation.ZW.m128d_f64[1] =
       ((local_4e8.WorldTransform)->Translation).ZW.m128d_f64[1];
  local_258.ComponentWorldTransform.Scale3D.XY.m128d_f64[0] =
       ((local_4e8.WorldTransform)->Scale3D).XY.m128d_f64[0];
  local_258.ComponentWorldTransform.Scale3D.XY.m128d_f64[1] =
       ((local_4e8.WorldTransform)->Scale3D).XY.m128d_f64[1];
  local_258.ComponentWorldTransform.Scale3D.ZW.m128d_f64[0]._0_4_ =
       *(undefined4 *)((local_4e8.WorldTransform)->Scale3D).ZW.m128d_f64;
  local_258.ComponentWorldTransform.Scale3D.ZW.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)((local_4e8.WorldTransform)->Scale3D).ZW.m128d_f64 + 4);
  local_258.ComponentWorldTransform.Scale3D.ZW.m128d_f64[1]._0_4_ =
       *(undefined4 *)(((local_4e8.WorldTransform)->Scale3D).ZW.m128d_f64 + 1);
  local_258.ComponentWorldTransform.Scale3D.ZW.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)((local_4e8.WorldTransform)->Scale3D).ZW.m128d_f64 + 0xc);
  local_258.CurrentBoneTransformRevisionNumber = local_258.PreviousBoneTransformRevisionNumber + 1;
  this->BoneTransformRevisionNumber = local_258.CurrentBoneTransformRevisionNumber;
  local_258.NumLODs = 1;
  uStack_280 = 0;
  local_298 = (void *)0x0;
  local_2b8._0_8_ = (FScriptContainerElement *)0x0;
  local_2b8._8_8_ = 0;
  uStack_290 = 0x8000000000;
  local_2b8._16_8_ = 0;
  uStack_2a0 = 0;
  local_288 = 0xffffffff;
  local_278 = (void *)0x0;
  uStack_270 = 0;
  local_268 = 0;
  local_4f8 = (void *)0x0;
  local_4f0 = 0;
  local_2f8.AllocatorInstance.InlineData[0] = '\0';
  local_2f8.AllocatorInstance.InlineData[1] = '\0';
  local_2f8.AllocatorInstance.InlineData[2] = '\0';
  local_2f8.AllocatorInstance.InlineData[3] = '\0';
  local_2f8.AllocatorInstance.InlineData[4] = '\0';
  local_2f8.AllocatorInstance.InlineData[5] = '\0';
  local_2f8.AllocatorInstance.InlineData[6] = '\0';
  local_2f8.AllocatorInstance.InlineData[7] = '\0';
  local_2f8.AllocatorInstance.InlineData[8] = '\0';
  local_2f8.AllocatorInstance.InlineData[9] = '\0';
  local_2f8.AllocatorInstance.InlineData[10] = '\0';
  local_2f8.AllocatorInstance.InlineData[0xb] = '\0';
  local_2f8.AllocatorInstance.InlineData[0xc] = '\0';
  local_2f8.AllocatorInstance.InlineData[0xd] = '\0';
  local_2f8.AllocatorInstance.InlineData[0xe] = '\0';
  local_2f8.AllocatorInstance.InlineData[0xf] = '\0';
  local_2d0 = 0;
  local_2c0 = 0;
  local_308.Data = (FScriptContainerElement *)0x0;
  local_300 = 0;
  local_2f8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_2f8.NumBits = 0;
  local_2f8.MaxBits = 0x80;
  local_2d8 = 0xffffffff;
  local_2d4 = 0;
  local_2c8 = (void *)0x0;
  local_258.PreviousComponentSpaceTransforms.DataPtr = pTVar8;
  local_258.PreviousComponentSpaceTransforms.ArrayNum = iVar3;
  local_258.CurrentBoneTransformFrame = local_258.PreviousBoneTransformRevisionNumber;
  (**(code **)(this->MeshObject->_padding_ + 0x18))(this->MeshObject,0,&local_258,pFVar4);
  local_2c0 = local_2c0 & 0xffffffff00000000;
  if (local_2c8 != (void *)0x0) {
    FMemory::Free(local_2c8);
  }
  uVar15 = local_300 >> 0x20;
  local_300 = local_300 & 0xffffffff00000000;
  if ((int)uVar15 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&local_308,0,(int *)((longlong)&local_300 + 4));
  }
  local_2d8 = 0xffffffff;
  local_2d4 = 0;
  local_2f8.NumBits = 0;
  if (0x80 < (uint)local_2f8.MaxBits) {
    local_2f8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2f8,0);
  }
  if (local_2f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2f8.AllocatorInstance.SecondaryData);
  }
  if (local_308.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data);
  }
  if (local_4f8 != (void *)0x0) {
    FMemory::Free(local_4f8);
  }
  uStack_270 = uStack_270 & 0xffffffff00000000;
  if (local_278 != (void *)0x0) {
    FMemory::Free(local_278);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FExternalMorphSetWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FExternalMorphSetWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_2b8,0,local_2b8._8_4_);
  iVar19 = SUB84(local_2b8._8_8_,4);
  local_2b8._8_8_ = local_2b8._8_8_ & 0xffffffff00000000;
  if (iVar19 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_2b8,0,(int *)(local_2b8 + 0xc));
  }
  uVar16 = uStack_290._4_4_;
  local_288 = 0xffffffff;
  uStack_290 = (ulonglong)uStack_290._4_4_ << 0x20;
  if (0x80 < uVar16) {
    uStack_290 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_2b8 + 0x10),0);
  }
  if (local_298 != (void *)0x0) {
    FMemory::Free(local_298);
  }
  if ((FScriptContainerElement *)local_2b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2b8._0_8_);
  }
  this->MeshObject->bHasBeenUpdatedAtLeastOnce = true;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->PrevTransforms,local_4e8.BoneTransforms);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.RefPoseOverride.SharedReferenceCount.ReferenceController);
  DestructItems<TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>,int>
            ((TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
              *)local_508.Data,(int)local_500);
  if ((TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
       *)local_508.Data !=
      (TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
       *)0x0) {
    FMemory::Free(local_508.Data);
  }
  return;
}

