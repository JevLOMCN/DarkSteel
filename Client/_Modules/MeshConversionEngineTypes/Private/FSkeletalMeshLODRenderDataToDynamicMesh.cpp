// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversionEngineTypes
// Functions: 4

// operator() @ 14ca354f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert'::__l77::<lambda_8>::operator()
          (void *this,TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  short sVar4;
  int iVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  ushort *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar16;
  short *psVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar21;
  ulonglong uVar22;
  ForElementType<UE::AnimationCore::FBoneWeight> _Src;
  uint uVar23;
  ulonglong uVar24;
  undefined1 auStackY_138 [32];
  FIdentityFunctor local_f8;
  FBoneWeight local_f4;
  code *local_d8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_d0;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_88;
  ulonglong local_48;
  ulonglong uVar20;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar22 = 0;
  iVar5 = *(int *)(*(longlong *)this + 8);
  uVar24 = uVar22;
  local_c8 = param_1;
  if (0 < (longlong)iVar5) {
    do {
      plVar6 = *(longlong **)this;
      uVar23 = (uint)uVar24;
      uVar19 = 0;
      if ((int)uVar23 < (int)plVar6[1]) {
        uVar19 = ~uVar23 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar13 = *(longlong *)((longlong)this + 0x10);
      uVar19 = *(uint *)(*plVar6 + uVar22 * 4);
      lVar15 = (longlong)(int)uVar19;
      uVar9 = 0;
      if ((int)uVar19 < *(int *)(lVar13 + 0x80)) {
        uVar9 = ~uVar19 >> 0x1f;
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
      lVar13 = *(longlong *)(lVar13 + 0x78);
      uVar12 = 0;
      psVar17 = (short *)&uStack_a8;
      puVar2 = (undefined8 *)(lVar13 + lVar15 * 0x30);
      puVar3 = (undefined8 *)(lVar13 + 0x10 + lVar15 * 0x30);
      local_c0 = *puVar2;
      uStack_b8 = puVar2[1];
      puVar2 = (undefined8 *)(lVar13 + 0x20 + lVar15 * 0x30);
      local_d0.Container = &local_88;
      local_88.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0
      ;
      local_b0 = *puVar3;
      uStack_a8 = puVar3[1];
      local_88.ArrayNum = 0;
      local_a0 = *puVar2;
      uStack_98 = puVar2[1];
      local_88.ArrayMax = 0xc;
      uVar11 = uVar12;
      uVar20 = uVar12;
      do {
        uVar9 = (uint)uVar11;
        sVar4 = *psVar17;
        uVar19 = uVar9;
        if (sVar4 == 0) break;
        uVar18 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar18;
        psVar17 = psVar17 + 1;
        uVar19 = uVar9 + 1;
        if (sVar4 == 0) {
          uVar19 = uVar9;
        }
        uVar11 = (ulonglong)uVar19;
      } while ((int)uVar18 < 0xc);
      UE::AnimationCore::FBoneWeights::
      TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
      ::SetNum(&local_88,uVar19);
      puVar10 = (ushort *)&local_c0;
      uVar11 = uVar12;
      uVar20 = uVar12;
      do {
        iVar14 = (int)uVar12;
        local_f4.RawWeight = puVar10[0xc];
        if (local_f4.RawWeight == 0) break;
        local_f4.BoneIndex = *puVar10;
        uVar21 = uVar20;
        if (local_f4.RawWeight != 0) {
          uVar12 = (ulonglong)(iVar14 + 1);
          uVar21 = uVar20 + 1;
          FVar16 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_88;
          if (local_88.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar16 = local_88.AllocatorInstance.SecondaryData;
          }
          *(FBoneWeight *)((longlong)FVar16 + uVar20 * 4) = local_f4;
        }
        iVar14 = (int)uVar12;
        uVar19 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar19;
        puVar10 = puVar10 + 1;
        uVar20 = uVar21;
      } while ((int)uVar19 < 0xc);
      local_d8 = UE::AnimationCore::FBoneWeight::DescSortByWeightPredicate;
      FVar16 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_88;
      if (local_88.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar16 = local_88.AllocatorInstance.SecondaryData;
      }
      AlgoImpl::
      IntroSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_>
                ((FBoneWeight *)FVar16,local_88.ArrayNum,local_f8,
                 (TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>
                  )&local_d8);
      if (0xc < iVar14) {
        UE::AnimationCore::FBoneWeights::
        TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
        ::SetNum(&local_88,0xc);
      }
      UE::AnimationCore::
      TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
      ::NormalizeWeights(&local_d0,Always);
      iVar14 = local_88.ArrayNum;
      FVar16 = (ForElementType<UE::AnimationCore::FBoneWeight>)
               (*(longlong *)
                 ((local_c8->VertexBoneWeights).Blocks.AllocatorInstance.Data + (uVar24 >> 9) * 8) +
               (ulonglong)(uVar23 & 0x1ff) * 0x40);
      if (FVar16 != (ForElementType<UE::AnimationCore::FBoneWeight>)&local_88) {
        lVar13 = (longlong)local_88.ArrayNum;
        piVar1 = (int *)((longlong)FVar16 + 0x3c);
        *(int *)((longlong)FVar16 + 0x38) = local_88.ArrayNum;
        _Src = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          _Src = local_88.AllocatorInstance.SecondaryData;
        }
        if ((local_88.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0xc;
        }
        else {
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                    (4,2,local_88.ArrayNum,*piVar1,
                     (ForElementType<UE::AnimationCore::FBoneWeight> *)FVar16,local_88.ArrayNum,
                     piVar1);
          if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar16 + 0x30) !=
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar16 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar16 + 0x30);
          }
          if (iVar14 != 0) {
            memcpy((void *)FVar16,(void *)_Src,lVar13 << 2);
          }
        }
      }
      if (local_88.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
      }
      uVar22 = uVar22 + 1;
      uVar24 = (ulonglong)(uVar23 + 1);
    } while ((longlong)uVar22 < (longlong)iVar5);
  }
  return;
}

// Convert @ 14ca363b0

bool __cdecl
UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert
          (FSkeletalMeshLODRenderData *param_1,FReferenceSkeleton *param_2,
          ConversionOptions *param_3,FDynamicMesh3 *param_4)

{
  bool bVar1;
  FSkeletalMeshLODRenderData *local_res8;
  code *local_18;
  FSkeletalMeshLODRenderData **local_10;
  
  if (param_1 != (FSkeletalMeshLODRenderData *)0x0) {
    bVar1 = FColorVertexBuffer::GetAllowCPUAccess(&(param_1->StaticVertexBuffers).ColorVertexBuffer)
    ;
    if (bVar1) {
      bVar1 = true;
      goto LAB_14ca363eb;
    }
  }
  bVar1 = false;
LAB_14ca363eb:
  local_10 = &local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert'::__l2::<lambda_1>,FColor,int>
             ::Call;
  local_res8 = param_1;
  bVar1 = Convert(param_1,param_2,param_3,param_4,bVar1,
                  (TFunctionRef<FColor___cdecl(int)> *)&local_18);
  return bVar1;
}

// Convert @ 14ca36440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert
          (FSkeletalMeshLODRenderData *param_1,FReferenceSkeleton *param_2,
          ConversionOptions *param_3,FDynamicMesh3 *param_4,bool param_5,
          TFunctionRef<FColor___cdecl(int)> *param_6)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this;
  double dVar1;
  undefined4 uVar2;
  FStaticMeshVertexDataInterface *pFVar3;
  uchar *puVar4;
  FScriptContainerElement *pFVar5;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar23;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar24;
  FSkeletalMeshLODRenderData *pFVar25;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar26;
  char cVar27;
  bool bVar28;
  undefined1 uVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  FDynamicMesh3 *pFVar33;
  FDynamicMeshAttributeSet *pFVar34;
  FDynamicMeshAttributeSet *pFVar35;
  FDynamicMeshAttributeSet *pFVar36;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar37;
  int iVar38;
  ulonglong uVar39;
  uint uVar40;
  ulonglong uVar41;
  longlong lVar42;
  FDynamicMeshAttributeSet *pFVar43;
  uint uVar44;
  FDynamicMeshAttributeSet *pFVar45;
  uint uVar46;
  uint uVar47;
  char local_508;
  undefined2 uStack_507;
  undefined1 local_504 [4];
  TArray<int,TSizedDefaultAllocator<32>_> local_500;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *local_4f0;
  undefined8 local_4e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_4e0;
  uint local_4d0 [4];
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *local_4c0;
  FSkeletalMeshLODRenderDataMeshAdapter local_4b8;
  int local_428 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_420;
  TArray<int,TSizedDefaultAllocator<32>_> *local_418;
  FDynamicMesh3 *local_410;
  longlong local_408;
  FIndex3i_u_0 local_3f8;
  FIndex3i_u_0 local_3ec;
  float local_3e0 [2];
  FIndex3i_u_0 local_3d8;
  TVector<double>_u_0 local_3c8;
  undefined8 local_3b0;
  float local_3a8;
  undefined8 local_3a4;
  float local_39c;
  TVector2<float>_u_0 local_398;
  undefined2 local_390;
  undefined1 local_38e;
  TVector<double>_u_0 local_388;
  undefined8 local_370;
  float local_368;
  undefined8 local_364;
  float local_35c;
  TVector2<float>_u_0 local_358;
  undefined2 local_350;
  undefined1 local_34e;
  TArray<int,TSizedDefaultAllocator<32>_> *local_348;
  FDynamicMesh3 *local_340;
  FSkeletalMeshLODRenderDataMeshAdapter *local_338;
  FBoneWeights local_330;
  FDynamicMesh3 local_2e8;
  
  if ((((param_1 == (FSkeletalMeshLODRenderData *)0x0) ||
       (pFVar3 = (param_1->StaticVertexBuffers).StaticMeshVertexBuffer.TangentsData,
       pFVar3 == (FStaticMeshVertexDataInterface *)0x0)) ||
      ((param_1->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData ==
       (FStaticMeshVertexDataInterface *)0x0)) ||
     ((cVar27 = (**(code **)((longlong)*pFVar3 + 0x58))(), cVar27 == '\0' ||
      (cVar27 = (**(code **)((longlong)
                             *(param_1->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                            0x58))(), cVar27 == '\0')))) {
    local_504[0] = 0;
    bVar28 = `UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert'::__l3::<lambda_1>::
             operator()(local_504);
    if (!bVar28) {
      return false;
    }
  }
  FSkeletalMeshLODRenderDataMeshAdapter::FSkeletalMeshLODRenderDataMeshAdapter(&local_4b8,param_1);
  local_4b8.BuildScale.field0_0x0._s_0.X = (param_3->BuildScale).field0_0x0._s_0.X;
  local_4b8.BuildScale.field0_0x0._s_0.Y = (param_3->BuildScale).field0_0x0._s_0.Y;
  local_4b8.BuildScale.field0_0x0._s_0.Z = (param_3->BuildScale).field0_0x0._s_0.Z;
  dVar1 = *(double *)&(param_3->BuildScale).field0_0x0;
  uVar46 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar47 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_4b8.InvBuildScale.field0_0x0._s_0.Z = 0.0;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar47,uVar46) &&
      (double)CONCAT44(uVar47,uVar46) != __real_3e45798ee2308c3a) {
    local_4b8.InvBuildScale.field0_0x0._s_0.X = __real_3ff0000000000000 / dVar1;
  }
  else {
    local_4b8.InvBuildScale.field0_0x0._s_0.X = 0.0;
  }
  dVar1 = *(double *)((longlong)&(param_3->BuildScale).field0_0x0 + 8);
  uVar46 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar47 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar47,uVar46) &&
      (double)CONCAT44(uVar47,uVar46) != __real_3e45798ee2308c3a) {
    local_4b8.InvBuildScale.field0_0x0._s_0.Y = __real_3ff0000000000000 / dVar1;
  }
  else {
    local_4b8.InvBuildScale.field0_0x0._s_0.Y = 0.0;
  }
  dVar1 = *(double *)((longlong)&(param_3->BuildScale).field0_0x0 + 0x10);
  uVar46 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar47 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar47,uVar46) &&
      (double)CONCAT44(uVar47,uVar46) != __real_3e45798ee2308c3a) {
    local_4b8.InvBuildScale.field0_0x0._s_0.Z = __real_3ff0000000000000 / dVar1;
  }
  local_4b8.bScaleNormals = false;
  pFVar33 = FDynamicMesh3::FDynamicMesh3(&local_2e8);
  FDynamicMesh3::operator=(param_4,pFVar33);
  FDynamicMesh3::~FDynamicMesh3(&local_2e8);
  FDynamicMesh3::EnableTriangleGroups(param_4,0);
  if (((param_3->bWantNormals != false) || (param_3->bWantTangents != false)) ||
     ((param_3->bWantUVs != false ||
      ((param_3->bWantVertexColors != false || (param_3->bWantMaterialIDs != false)))))) {
    FDynamicMesh3::EnableAttributes(param_4);
  }
  local_4e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4e0.ArrayNum = 0;
  local_4e0.ArrayMax = 0;
  local_500.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_500.ArrayNum = 0;
  local_500.ArrayMax = 0;
  if (local_4b8.Mesh != (FSkeletalMeshLODRenderData *)0x0) {
    bVar28 = FPositionVertexBuffer::GetAllowCPUAccess
                       (&((local_4b8.Mesh)->StaticVertexBuffers).PositionVertexBuffer);
    if (bVar28) {
      uVar46 = ((local_4b8.Mesh)->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_500,uVar46,Default);
      uVar47 = 0;
      if (0 < (int)uVar46) {
        do {
          local_390 = 0;
          local_38e = 0;
          puVar4 = ((local_4b8.Mesh)->StaticVertexBuffers).PositionVertexBuffer.Data;
          uVar39 = (ulonglong)
                   (uVar47 * ((local_4b8.Mesh)->StaticVertexBuffers).PositionVertexBuffer.Stride);
          local_3c8._s_0.X =
               (double)*(float *)(puVar4 + uVar39) * local_4b8.BuildScale.field0_0x0._s_0.X;
          local_3c8._s_0.Y =
               (double)*(float *)(puVar4 + uVar39 + 4) * local_4b8.BuildScale.field0_0x0._s_0.Y;
          local_3a8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_39c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_398 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          local_3c8._s_0.Z =
               (double)*(float *)(puVar4 + uVar39 + 8) * local_4b8.BuildScale.field0_0x0._s_0.Z;
          local_3b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_3a4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          uVar30 = FDynamicMesh3::AppendVertex(param_4,(FVertexInfo *)&local_3c8._s_0);
          uVar40 = 0;
          if ((int)uVar30 < local_500.ArrayNum) {
            uVar40 = ~uVar30 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar9 = (code *)swi(3);
            uVar29 = (*pcVar9)();
            return (bool)uVar29;
          }
          *(uint *)(local_500.AllocatorInstance.Data + (longlong)(int)uVar30 * 4) = uVar47;
          if (uVar30 != uVar47) {
            FDynamicMesh3::Clear(param_4);
            bVar28 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_5345115855325757378>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\SkeletalMeshLODRenderDataToDynamicMesh.cpp"
                                ,0x3e,"false");
            if (bVar28) {
              pcVar9 = (code *)swi(3);
              uVar29 = (*pcVar9)();
              return (bool)uVar29;
            }
            if (local_500.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_500.AllocatorInstance.Data);
            }
            if (local_4e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4e0.AllocatorInstance.Data);
            }
            if (local_4b8.SkinWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4b8.SkinWeights.AllocatorInstance.Data);
            }
            if (local_4b8.SrcIndexBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4b8.SrcIndexBuffer.AllocatorInstance.Data);
            }
            if (local_4b8.TriangleOffsetArray.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4b8.TriangleOffsetArray.AllocatorInstance.Data);
            }
            if (local_4b8.ValidSections.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return false;
            }
            FMemory::Free(local_4b8.ValidSections.AllocatorInstance.Data);
            return false;
          }
          uVar47 = uVar47 + 1;
        } while ((int)uVar47 < (int)uVar46);
      }
      goto LAB_14ca36732;
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_500,0,Default);
LAB_14ca36732:
  uVar46 = 0;
  if ((local_4b8.Mesh == (FSkeletalMeshLODRenderData *)0x0) ||
     (((local_4b8.Mesh)->MultiSizeIndexContainer).IndexBuffer ==
      (FRawStaticIndexBuffer16or32Interface *)0x0)) {
    local_4e8 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                 *)((ulonglong)local_4e8._4_4_ << 0x20);
    TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_4e0,&FDynamicMesh3::InvalidID,0);
  }
  else {
    local_4e8 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                 *)CONCAT44(local_4e8._4_4_,local_4b8.NumTriangles);
    TArray<int,TSizedDefaultAllocator<32>_>::Init
              (&local_4e0,&FDynamicMesh3::InvalidID,local_4b8.NumTriangles);
    if (0 < local_4b8.NumTriangles) {
      local_4f0 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0;
      local_4e8 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                   *)CONCAT44(local_4e8._4_4_,local_4b8.NumTriangles);
      local_4c0 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *)(longlong)local_4b8.NumTriangles;
      do {
        uVar40 = 0;
        uVar47 = 0;
        uVar30 = local_4b8.TriangleOffsetArray.ArrayNum;
        if (0 < local_4b8.TriangleOffsetArray.ArrayNum) {
          do {
            uVar44 = uVar30 >> 1;
            uVar47 = uVar40;
            if (*(int *)(local_4b8.TriangleOffsetArray.AllocatorInstance.Data +
                        (longlong)(int)(uVar44 + uVar40) * 4) <= (int)uVar46) {
              uVar47 = uVar44 + uVar40 + (uVar30 & 1);
            }
            uVar40 = uVar47;
            uVar30 = uVar44;
          } while (uVar44 != 0);
        }
        uVar47 = uVar47 - 1;
        uVar40 = 0;
        if ((int)uVar47 < local_4b8.TriangleOffsetArray.ArrayNum) {
          uVar40 = ~uVar47 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar9 = (code *)swi(3);
          uVar29 = (*pcVar9)();
          return (bool)uVar29;
        }
        iVar38 = *(int *)(local_4b8.TriangleOffsetArray.AllocatorInstance.Data +
                         (longlong)(int)uVar47 * 4);
        uVar40 = 0;
        if ((int)uVar47 < local_4b8.ValidSections.ArrayNum) {
          uVar40 = ~uVar47 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar9 = (code *)swi(3);
          uVar29 = (*pcVar9)();
          return (bool)uVar29;
        }
        iVar38 = (uVar46 - iVar38) * 3;
        lVar42 = *(longlong *)
                  (local_4b8.ValidSections.AllocatorInstance.Data + (longlong)(int)uVar47 * 8);
        uVar40 = *(int *)(lVar42 + 4) + 2 + iVar38;
        uVar47 = 0;
        if ((int)uVar40 < local_4b8.SrcIndexBuffer.ArrayNum) {
          uVar47 = ~uVar40 >> 0x1f;
        }
        if ((uVar47 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar9 = (code *)swi(3);
          uVar29 = (*pcVar9)();
          return (bool)uVar29;
        }
        uVar30 = *(int *)(lVar42 + 4) + 1 + iVar38;
        iVar32 = *(int *)(local_4b8.SrcIndexBuffer.AllocatorInstance.Data +
                         (longlong)(int)uVar40 * 4);
        uVar47 = 0;
        if ((int)uVar30 < local_4b8.SrcIndexBuffer.ArrayNum) {
          uVar47 = ~uVar30 >> 0x1f;
        }
        if ((uVar47 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar9 = (code *)swi(3);
          uVar29 = (*pcVar9)();
          return (bool)uVar29;
        }
        uVar40 = *(int *)(lVar42 + 4) + iVar38;
        iVar38 = *(int *)(local_4b8.SrcIndexBuffer.AllocatorInstance.Data +
                         (longlong)(int)uVar30 * 4);
        uVar47 = 0;
        if ((int)uVar40 < local_4b8.SrcIndexBuffer.ArrayNum) {
          uVar47 = ~uVar40 >> 0x1f;
        }
        if ((uVar47 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar9 = (code *)swi(3);
          uVar29 = (*pcVar9)();
          return (bool)uVar29;
        }
        uVar47 = *(uint *)(local_4b8.SrcIndexBuffer.AllocatorInstance.Data +
                          (longlong)(int)uVar40 * 4);
        local_4d0[0] = uVar47;
        local_4d0[1] = iVar38;
        local_4d0[2] = iVar32;
        local_3f8._s_0.A = uVar47;
        local_3f8._s_0.B = iVar38;
        local_3f8._s_0.C = iVar32;
        iVar31 = FDynamicMesh3::AppendTriangle(param_4,(FIndex3i *)&local_3f8._s_0,0);
        if ((iVar31 + 3U & 0xfffffffd) != 0) {
          if (iVar31 == -2) {
            uVar40 = FDynamicMesh3::FindEdge(param_4,uVar47,iVar38);
            uVar30 = FDynamicMesh3::FindEdge(param_4,iVar38,iVar32);
            uVar47 = FDynamicMesh3::FindEdge(param_4,iVar32,uVar47);
            _local_508 = 0;
            if ((uVar40 != 0xffffffff) &&
               (*(int *)(*(longlong *)
                          ((param_4->Edges).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar40 >> 9) * 8) + 0xc + (ulonglong)(uVar40 & 0x1ff) * 0x10)
                != -1)) {
              _local_508 = 0x101;
            }
            if ((uVar30 != 0xffffffff) &&
               (*(int *)(*(longlong *)
                          ((param_4->Edges).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar30 >> 9) * 8) + 0xc + (ulonglong)(uVar30 & 0x1ff) * 0x10)
                != -1)) {
              _local_508 = CONCAT21(0x101,local_508);
            }
            if ((uVar47 != 0xffffffff) &&
               (*(int *)(*(longlong *)
                          ((param_4->Edges).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar47 >> 9) * 8) + 0xc + (ulonglong)(uVar47 & 0x1ff) * 0x10)
                != -1)) {
              _local_508 = CONCAT12(1,_local_508);
              _local_508 = CONCAT21(uStack_507,1);
            }
            lVar42 = 0;
            do {
              if ((&local_508)[lVar42] != '\0') {
                uVar47 = local_4d0[lVar42];
                local_350 = 0;
                local_34e = 0;
                puVar4 = ((local_4b8.Mesh)->StaticVertexBuffers).PositionVertexBuffer.Data;
                uVar39 = (ulonglong)
                         (uVar47 * ((local_4b8.Mesh)->StaticVertexBuffers).PositionVertexBuffer.
                                   Stride);
                local_388._s_0.X =
                     (double)*(float *)(puVar4 + uVar39) * local_4b8.BuildScale.field0_0x0._s_0.X;
                local_388._s_0.Y =
                     (double)*(float *)(puVar4 + uVar39 + 4) *
                     local_4b8.BuildScale.field0_0x0._s_0.Y;
                local_368 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                local_35c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                local_358 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
                local_388._s_0.Z =
                     (double)*(float *)(puVar4 + uVar39 + 8) *
                     local_4b8.BuildScale.field0_0x0._s_0.Z;
                local_370 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                local_364 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                uVar40 = FDynamicMesh3::AppendVertex(param_4,(FVertexInfo *)&local_388._s_0);
                local_4d0[lVar42] = uVar40;
                uVar30 = uVar40 + 1;
                if (local_500.ArrayNum < (int)uVar30) {
                  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,uVar30 - local_500.ArrayNum,&local_500.AllocatorInstance,
                             &local_500.ArrayNum,&local_500.ArrayMax);
LAB_14ca36d00:
                  iVar38 = local_500.ArrayNum;
                }
                else {
                  if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
                    Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
                  }
                  iVar38 = local_500.ArrayNum;
                  if ((int)uVar30 < local_500.ArrayNum) {
                    uVar44 = local_500.ArrayNum - uVar30;
                    if ((int)(uVar30 | uVar44) < 0) {
                      bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x458,
                                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                         );
                      if (bVar28) {
                        pcVar9 = (code *)swi(3);
                        uVar29 = (*pcVar9)();
                        return (bool)uVar29;
                      }
                      iVar38 = local_500.ArrayNum;
                    }
                    if (uVar44 != 0) {
                      iVar32 = (iVar38 - uVar30) - uVar44;
                      if (iVar32 != 0) {
                        memmove(local_500.AllocatorInstance.Data + (longlong)(int)uVar30 * 4,
                                local_500.AllocatorInstance.Data + (longlong)(int)uVar30 * 4 +
                                (longlong)(int)uVar44 * 4,(longlong)iVar32 << 2);
                        iVar38 = local_500.ArrayNum;
                      }
                      local_500.ArrayNum = iVar38 - uVar44;
                      Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,&local_500.AllocatorInstance,iVar38 - uVar44,
                                 &local_500.ArrayMax);
                      goto LAB_14ca36d00;
                    }
                  }
                }
                uVar30 = 0;
                if ((int)uVar40 < iVar38) {
                  uVar30 = ~uVar40 >> 0x1f;
                }
                if ((uVar30 == 0) &&
                   (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar28)) {
                  pcVar9 = (code *)swi(3);
                  uVar29 = (*pcVar9)();
                  return (bool)uVar29;
                }
                *(uint *)(local_500.AllocatorInstance.Data + (longlong)(int)uVar40 * 4) = uVar47;
              }
              lVar42 = lVar42 + 1;
            } while (lVar42 < 3);
            local_3d8._0_8_ = CONCAT44(local_4d0[1],local_4d0[0]);
            local_3d8._s_0.C = local_4d0[2];
            iVar31 = FDynamicMesh3::AppendTriangle(param_4,(FIndex3i *)&local_3d8._s_0,0);
          }
          uVar47 = 0;
          if ((int)uVar46 < local_4e0.ArrayNum) {
            uVar47 = ~uVar46 >> 0x1f;
          }
          if ((uVar47 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar9 = (code *)swi(3);
            uVar29 = (*pcVar9)();
            return (bool)uVar29;
          }
          *(int *)(local_4e0.AllocatorInstance.Data + (longlong)local_4f0 * 4) = iVar31;
        }
        uVar46 = uVar46 + 1;
        local_4f0 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)
                    ((longlong)&local_4f0->_padding_ + 1);
      } while ((longlong)local_4f0 < (longlong)local_4c0);
    }
  }
  pFVar35 = (FDynamicMeshAttributeSet *)0x0;
  pFVar43 = pFVar35;
  if (param_3->bWantMaterialIDs != false) {
    pFVar43 = (param_4->AttributeSet).Ptr;
    pFVar34 = pFVar35;
    if (pFVar43 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar34 = pFVar43;
    }
    FDynamicMeshAttributeSet::EnableMaterialID(pFVar34);
    pFVar43 = (param_4->AttributeSet).Ptr;
    pFVar34 = pFVar35;
    if (pFVar43 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar34 = pFVar43;
    }
    pFVar43 = (FDynamicMeshAttributeSet *)(pFVar34->MaterialIDAttrib).Ptr;
  }
  pFVar34 = pFVar35;
  if (0 < (param_1->RenderSections).ArrayNum) {
    do {
      uVar47 = (uint)pFVar34;
      uVar46 = 0;
      if ((int)uVar47 < (param_1->RenderSections).ArrayNum) {
        uVar46 = ~uVar47 >> 0x1f;
      }
      if ((uVar46 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar9 = (code *)swi(3);
        uVar29 = (*pcVar9)();
        return (bool)uVar29;
      }
      pFVar5 = (param_1->RenderSections).AllocatorInstance.Data;
      uVar46 = 0;
      if (*(int *)((longlong)&pFVar35->_padding_ + (longlong)pFVar5) != 0) {
        do {
          uVar40 = *(uint *)((longlong)&pFVar35->_padding_ + (longlong)(pFVar5 + 4)) / 3 + uVar46;
          uVar30 = 0;
          if ((int)uVar40 < local_4e0.ArrayNum) {
            uVar30 = ~uVar40 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar9 = (code *)swi(3);
            uVar29 = (*pcVar9)();
            return (bool)uVar29;
          }
          uVar40 = *(uint *)(local_4e0.AllocatorInstance.Data + (longlong)(int)uVar40 * 4);
          if (uVar40 != 0xffffffff) {
            if ((param_4->TriangleGroups).bIsSet != false) {
              *(uint *)(*(longlong *)
                         ((param_4->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar40 >> 9) * 8) + (ulonglong)(uVar40 & 0x1ff) * 4) = uVar47;
              iVar38 = uVar47 + 1;
              if ((int)(uVar47 + 1) < param_4->GroupIDCounter) {
                iVar38 = param_4->GroupIDCounter;
              }
              param_4->GroupIDCounter = iVar38;
            }
            if (pFVar43 != (FDynamicMeshAttributeSet *)0x0) {
              *(uint *)(*(longlong *)
                         ((pFVar43->UVLayers).Array.AllocatorInstance.Data +
                         (ulonglong)(uVar40 >> 9) * 8) + (ulonglong)(uVar40 & 0x1ff) * 4) =
                   (uint)*(ushort *)((longlong)&pFVar35->_padding_ + (longlong)pFVar5);
            }
          }
          uVar46 = uVar46 + 1;
        } while (uVar46 < *(uint *)((longlong)&pFVar35->_padding_ + (longlong)pFVar5));
      }
      pFVar35 = (FDynamicMeshAttributeSet *)&pFVar35->BoneParentIndexAttrib;
      pFVar34 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar47 + 1);
    } while ((int)(uVar47 + 1) < (param_1->RenderSections).ArrayNum);
  }
  pFVar25 = local_4b8.Mesh;
  pFVar43 = (FDynamicMeshAttributeSet *)0x0;
  local_428[0] = (int)local_4e8;
  local_420 = &local_500;
  local_418 = &local_4e0;
  local_410 = param_4;
  if (local_4b8.Mesh != (FSkeletalMeshLODRenderData *)0x0) {
    pFVar3 = ((local_4b8.Mesh)->StaticVertexBuffers).StaticMeshVertexBuffer.TangentsData;
    if ((((pFVar3 != (FStaticMeshVertexDataInterface *)0x0) &&
         (((local_4b8.Mesh)->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
          (FStaticMeshVertexDataInterface *)0x0)) &&
        (cVar27 = (**(code **)((longlong)*pFVar3 + 0x58))(), cVar27 != '\0')) &&
       (((cVar27 = (**(code **)((longlong)
                                *(pFVar25->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData
                               + 0x58))(), cVar27 != '\0' &&
         (((local_4b8.Mesh)->StaticVertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr !=
          (uchar *)0x0)) && (param_3->bWantNormals != false)))) {
      pFVar35 = (param_4->AttributeSet).Ptr;
      pFVar34 = pFVar43;
      if (pFVar35 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar34 = pFVar35;
      }
      if ((0 < (pFVar34->NormalLayers).Array.ArrayNum) &&
         (pTVar6 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                    (pFVar34->NormalLayers).Array.AllocatorInstance.Data,
         pTVar6 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
        `UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert'::__l2::<lambda_2>::
        operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,_UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert_::__l54::<lambda_3>_>
                  (local_428,pTVar6,&local_4b8);
      }
    }
    pFVar25 = local_4b8.Mesh;
    if (local_4b8.Mesh != (FSkeletalMeshLODRenderData *)0x0) {
      pFVar3 = ((local_4b8.Mesh)->StaticVertexBuffers).StaticMeshVertexBuffer.TangentsData;
      if ((((pFVar3 != (FStaticMeshVertexDataInterface *)0x0) &&
           (((local_4b8.Mesh)->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
            (FStaticMeshVertexDataInterface *)0x0)) &&
          (cVar27 = (**(code **)((longlong)*pFVar3 + 0x58))(), cVar27 != '\0')) &&
         (((cVar27 = (**(code **)((longlong)
                                  *(pFVar25->StaticVertexBuffers).StaticMeshVertexBuffer.
                                   TexcoordData + 0x58))(), cVar27 != '\0' &&
           (((local_4b8.Mesh)->StaticVertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr !=
            (uchar *)0x0)) && (param_3->bWantTangents != false)))) {
        pFVar35 = (param_4->AttributeSet).Ptr;
        pFVar34 = pFVar43;
        if (pFVar35 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar34 = pFVar35;
        }
        FDynamicMeshAttributeSet::EnableTangents(pFVar34);
        pFVar35 = (param_4->AttributeSet).Ptr;
        if ((1 < (pFVar35->NormalLayers).Array.ArrayNum) &&
           (pTVar6 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                      ((pFVar35->NormalLayers).Array.AllocatorInstance.Data + 8),
           pTVar6 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
          `UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert'::__l2::<lambda_2>::
          operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,_UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert_::__l60::<lambda_4>_>
                    (local_428,pTVar6,&local_4b8);
        }
        pFVar35 = (param_4->AttributeSet).Ptr;
        pFVar34 = pFVar43;
        if (pFVar35 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar34 = pFVar35;
        }
        if ((2 < (pFVar34->NormalLayers).Array.ArrayNum) &&
           (pTVar6 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                      ((pFVar34->NormalLayers).Array.AllocatorInstance.Data + 0x10),
           pTVar6 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
          `UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert'::__l2::<lambda_2>::
          operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,_UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert_::__l63::<lambda_5>_>
                    (local_428,pTVar6,&local_4b8);
        }
      }
      pFVar25 = local_4b8.Mesh;
      if ((((((local_4b8.Mesh != (FSkeletalMeshLODRenderData *)0x0) &&
             (pFVar3 = ((local_4b8.Mesh)->StaticVertexBuffers).StaticMeshVertexBuffer.TangentsData,
             pFVar3 != (FStaticMeshVertexDataInterface *)0x0)) &&
            (((local_4b8.Mesh)->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
             (FStaticMeshVertexDataInterface *)0x0)) &&
           ((cVar27 = (**(code **)((longlong)*pFVar3 + 0x58))(), cVar27 != '\0' &&
            (cVar27 = (**(code **)((longlong)
                                   *(pFVar25->StaticVertexBuffers).StaticMeshVertexBuffer.
                                    TexcoordData + 0x58))(), pFVar25 = local_4b8.Mesh,
            cVar27 != '\0')))) &&
          (((local_4b8.Mesh)->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr !=
           (uchar *)0x0)) &&
         ((((0 < (int)((local_4b8.Mesh)->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords &&
            (param_3->bWantUVs != false)) &&
           ((pFVar3 = ((local_4b8.Mesh)->StaticVertexBuffers).StaticMeshVertexBuffer.TangentsData,
            pFVar3 != (FStaticMeshVertexDataInterface *)0x0 &&
            (((((local_4b8.Mesh)->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
               (FStaticMeshVertexDataInterface *)0x0 &&
              (cVar27 = (**(code **)((longlong)*pFVar3 + 0x58))(), cVar27 != '\0')) &&
             (cVar27 = (**(code **)((longlong)
                                    *(pFVar25->StaticVertexBuffers).StaticMeshVertexBuffer.
                                     TexcoordData + 0x58))(), cVar27 != '\0')))))) &&
          ((((local_4b8.Mesh)->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr !=
            (uchar *)0x0 &&
           (uVar46 = ((local_4b8.Mesh)->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords,
           0 < (int)uVar46)))))) {
        pFVar35 = (param_4->AttributeSet).Ptr;
        if (pFVar35 == (FDynamicMeshAttributeSet *)0x0) {
          (**(code **)(_DAT_00000000 + 0xb0))(0,uVar46);
        }
        else {
          (**(code **)(pFVar35->_padding_ + 0xb0))();
        }
        do {
          pFVar35 = (FDynamicMeshAttributeSet *)0x0;
          iVar38 = (int)pFVar43;
          pFVar43 = (param_4->AttributeSet).Ptr;
          if (pFVar43 == (FDynamicMeshAttributeSet *)0x0) {
            pFVar43 = pFVar35;
          }
          pFVar34 = pFVar35;
          if ((iVar38 < (pFVar43->UVLayers).Array.ArrayNum) && (-1 < iVar38)) {
            if ((iVar38 < 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar9 = (code *)swi(3);
              uVar29 = (*pcVar9)();
              return (bool)uVar29;
            }
            pFVar34 = *(FDynamicMeshAttributeSet **)
                       ((pFVar43->UVLayers).Array.AllocatorInstance.Data + (longlong)iVar38 * 8);
          }
          iVar32 = local_420->ArrayNum;
          pFVar43 = pFVar35;
          if (0 < (longlong)iVar32) {
            do {
              pTVar26 = local_420;
              uVar40 = (uint)pFVar35;
              uVar47 = 0;
              if ((int)uVar40 < local_420->ArrayNum) {
                uVar47 = ~uVar40 >> 0x1f;
              }
              if ((uVar47 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar9 = (code *)swi(3);
                uVar29 = (*pcVar9)();
                return (bool)uVar29;
              }
              FStaticMeshVertexBuffer::GetVertexUV
                        (&((local_4b8.Mesh)->StaticVertexBuffers).StaticMeshVertexBuffer,
                         (uint)local_3e0,
                         *(uint *)((pTVar26->AllocatorInstance).Data + (longlong)pFVar43 * 4));
              uVar47 = TDynamicMeshOverlay<float,2>::AppendElement
                                 ((TDynamicMeshOverlay<float,2> *)pFVar34,local_3e0);
              if ((uVar47 != uVar40) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ElemID == DstVertID",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\SkeletalMeshLODRenderDataToDynamicMesh.cpp"
                                      ,0x9f,L""), bVar28)) {
                pcVar9 = (code *)swi(3);
                uVar29 = (*pcVar9)();
                return (bool)uVar29;
              }
              pFVar35 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar40 + 1);
              pFVar43 = (FDynamicMeshAttributeSet *)((longlong)&pFVar43->_padding_ + 1);
            } while ((longlong)pFVar43 < (longlong)iVar32);
          }
          uVar41 = 0;
          uVar39 = uVar41;
          if (0 < local_428[0]) {
            do {
              pTVar26 = local_418;
              uVar40 = (uint)uVar41;
              uVar47 = 0;
              if ((int)uVar40 < local_418->ArrayNum) {
                uVar47 = ~uVar40 >> 0x1f;
              }
              if ((uVar47 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar9 = (code *)swi(3);
                uVar29 = (*pcVar9)();
                return (bool)uVar29;
              }
              uVar47 = *(uint *)((pTVar26->AllocatorInstance).Data + uVar39);
              if (uVar47 != 0xffffffff) {
                lVar42 = *(longlong *)
                          ((local_410->Triangles).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar47 >> 9) * 8);
                local_3ec._s_0.C = *(int *)(lVar42 + 8 + (ulonglong)(uVar47 & 0x1ff) * 0xc);
                local_408 = *(longlong *)(lVar42 + (ulonglong)(uVar47 & 0x1ff) * 0xc);
                local_3ec._s_0.A = (int)local_408;
                local_3ec._s_0.B = (int)((ulonglong)local_408 >> 0x20);
                TDynamicMeshOverlay<float,2>::SetTriangle
                          ((TDynamicMeshOverlay<float,2> *)pFVar34,uVar47,
                           (FIndex3i *)&local_3ec._s_0,true);
              }
              uVar41 = (ulonglong)(uVar40 + 1);
              uVar39 = uVar39 + 4;
            } while ((int)(uVar40 + 1) < local_428[0]);
          }
          pFVar43 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar38 + 1U);
        } while ((int)(iVar38 + 1U) < (int)uVar46);
      }
    }
  }
  pFVar43 = (FDynamicMeshAttributeSet *)0x0;
  if ((param_5) && (param_3->bWantVertexColors != false)) {
    pFVar35 = (param_4->AttributeSet).Ptr;
    pFVar34 = pFVar43;
    if (pFVar35 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar34 = pFVar35;
    }
    FDynamicMeshAttributeSet::EnablePrimaryColors(pFVar34);
    pFVar35 = (param_4->AttributeSet).Ptr;
    pFVar34 = pFVar43;
    if (pFVar35 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar34 = pFVar35;
    }
    `UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert'::__l2::<lambda_2>::
    operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>,_UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert_::__l74::<lambda_7>_>
              (local_428,(pFVar34->ColorLayer).Ptr,(<lambda_7>)param_6);
  }
  if ((((local_4b8.Mesh != (FSkeletalMeshLODRenderData *)0x0) &&
       (local_4b8.Mesh != (FSkeletalMeshLODRenderData *)0xfffffffffffffe78)) &&
      ((int)((local_4b8.Mesh)->SkinWeightVertexBuffer).DataVertexBuffer._padding_ != -1)) &&
     ((((local_4b8.Mesh)->SkinWeightVertexBuffer).DataVertexBuffer.NumVertices != 0 &&
      (param_3->bWantSkinWeights != false)))) {
    local_348 = &local_500;
    local_338 = &local_4b8;
    local_340 = param_4;
    pFVar34 = ::operator_new(0x30);
    pFVar35 = pFVar43;
    if (pFVar34 != (FDynamicMeshAttributeSet *)0x0) {
      this = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar34->ParentMesh;
      pFVar34->_padding_ = 0;
      pFVar34->_padding_ = (longlong)param_4;
      pFVar34->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this->CurBlock = 0;
      this->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar34->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar34->UVLayers).Array.ArrayNum = 0;
      (pFVar34->UVLayers).Array.ArrayMax = 0;
      TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this);
      local_330.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_330.BoneWeights.ArrayNum = 0;
      local_330.BoneWeights.ArrayMax = 0xc;
      local_330.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_330.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_330.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar34,
                 &local_330);
      pFVar35 = pFVar34;
    }
    `UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert'::__l77::<lambda_8>::operator()
              (&local_348,(TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar35
              );
    pFVar35->_padding_ = (longlong)FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
    pFVar34 = (param_4->AttributeSet).Ptr;
    pFVar36 = pFVar43;
    if (pFVar34 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar36 = pFVar34;
    }
    FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar36,FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar35);
    iVar38 = (param_2->RawRefBoneInfo).ArrayNum;
    if (iVar38 != 0) {
      pFVar35 = (param_4->AttributeSet).Ptr;
      pFVar34 = pFVar43;
      if (pFVar35 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar34 = pFVar35;
      }
      FDynamicMeshAttributeSet::EnableBones(pFVar34,iVar38);
      uVar22 = _UNK_15076b1f8;
      uVar21 = ___xmm_3f8000003f8000003f8000003f800000;
      pFVar35 = (param_4->AttributeSet).Ptr;
      if (pFVar35 == (FDynamicMeshAttributeSet *)0x0) {
        local_4e8 = _DAT_00000120;
        local_4f0 = _DAT_00000118;
        pFVar35 = pFVar43;
        pTVar37 = _DAT_00000110;
      }
      else {
        local_4e8 = (pFVar35->BonePoseAttrib).Ptr;
        local_4f0 = (pFVar35->BoneParentIndexAttrib).Ptr;
        pTVar37 = (pFVar35->BoneNameAttrib).Ptr;
      }
      local_4c0 = (pFVar35->BoneColorAttrib).Ptr;
      pFVar35 = pFVar43;
      pFVar34 = pFVar43;
      pFVar36 = pFVar43;
      pFVar45 = pFVar43;
      local_408 = (longlong)iVar38;
      if (0 < iVar38) {
        do {
          uVar40 = (uint)pFVar43;
          uVar47 = ~uVar40 >> 0x1f;
          uVar46 = 0;
          if ((int)uVar40 < (param_2->RawRefBoneInfo).ArrayNum) {
            uVar46 = uVar47;
          }
          if ((uVar46 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar9 = (code *)swi(3);
            uVar29 = (*pcVar9)();
            return (bool)uVar29;
          }
          uVar7 = *(undefined8 *)
                   ((longlong)&pFVar35->_padding_ +
                   (longlong)(param_2->RawRefBoneInfo).AllocatorInstance.Data);
          uVar46 = 0;
          if ((int)uVar40 < (pTVar37->AttribValues).ArrayNum) {
            uVar46 = uVar47;
          }
          if ((uVar46 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar9 = (code *)swi(3);
            uVar29 = (*pcVar9)();
            return (bool)uVar29;
          }
          *(undefined8 *)((pTVar37->AttribValues).AllocatorInstance.Data + (longlong)pFVar45 * 8) =
               uVar7;
          uVar46 = 0;
          if ((int)uVar40 < (param_2->RawRefBoneInfo).ArrayNum) {
            uVar46 = uVar47;
          }
          if ((uVar46 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar9 = (code *)swi(3);
            uVar29 = (*pcVar9)();
            return (bool)uVar29;
          }
          uVar2 = *(undefined4 *)
                   ((longlong)&pFVar35->_padding_ +
                   (longlong)(param_2->RawRefBoneInfo).AllocatorInstance.Data);
          uVar46 = 0;
          if ((int)uVar40 < (local_4f0->AttribValues).ArrayNum) {
            uVar46 = uVar47;
          }
          if ((uVar46 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar9 = (code *)swi(3);
            uVar29 = (*pcVar9)();
            return (bool)uVar29;
          }
          *(undefined4 *)((local_4f0->AttribValues).AllocatorInstance.Data + (longlong)pFVar45 * 4)
               = uVar2;
          uVar46 = 0;
          if ((int)uVar40 < (param_2->RawRefBonePose).ArrayNum) {
            uVar46 = uVar47;
          }
          if ((uVar46 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar9 = (code *)swi(3);
            uVar29 = (*pcVar9)();
            return (bool)uVar29;
          }
          pTVar23 = local_4e8;
          pFVar8 = (param_2->RawRefBonePose).AllocatorInstance.Data;
          pFVar5 = (FScriptContainerElement *)((longlong)&pFVar36->_padding_ + (longlong)pFVar8);
          uVar7 = *(undefined8 *)pFVar5;
          uVar10 = *(undefined8 *)(pFVar5 + 8);
          pFVar5 = (FScriptContainerElement *)((longlong)&pFVar36->_padding_ + (longlong)pFVar8);
          uVar11 = *(undefined8 *)pFVar5;
          uVar12 = *(undefined8 *)(pFVar5 + 8);
          uVar13 = *(undefined8 *)(pFVar8 + (longlong)&(pFVar36->UVLayers).Array);
          uVar14 = *(undefined8 *)(pFVar8 + (longlong)&(pFVar36->UVLayers).Array + 8);
          uVar15 = *(undefined8 *)(pFVar8 + (longlong)&(pFVar36->NormalLayers).Array);
          uVar16 = *(undefined8 *)(pFVar8 + (longlong)&(pFVar36->NormalLayers).Array + 8);
          uVar17 = *(undefined8 *)(pFVar8 + (longlong)&(pFVar36->ColorLayer).Ptr);
          uVar18 = *(undefined8 *)(pFVar8 + (longlong)&(pFVar36->ColorLayer).Ptr + 8);
          uVar19 = *(undefined8 *)(pFVar8 + (longlong)&(pFVar36->WeightLayers).Array);
          uVar20 = *(undefined8 *)(pFVar8 + (longlong)&(pFVar36->WeightLayers).Array + 8);
          uVar46 = 0;
          if ((int)uVar40 < (local_4e8->AttribValues).ArrayNum) {
            uVar46 = uVar47;
          }
          if ((uVar46 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar9 = (code *)swi(3);
            uVar29 = (*pcVar9)();
            return (bool)uVar29;
          }
          pTVar24 = local_4c0;
          pFVar8 = (pTVar23->AttribValues).AllocatorInstance.Data;
          pFVar5 = (FScriptContainerElement *)((longlong)&pFVar36->_padding_ + (longlong)pFVar8);
          *(undefined8 *)pFVar5 = uVar7;
          *(undefined8 *)(pFVar5 + 8) = uVar10;
          pFVar5 = (FScriptContainerElement *)((longlong)&pFVar36->_padding_ + (longlong)pFVar8);
          *(undefined8 *)pFVar5 = uVar11;
          *(undefined8 *)(pFVar5 + 8) = uVar12;
          *(undefined8 *)(pFVar8 + (longlong)&(pFVar36->UVLayers).Array) = uVar13;
          *(undefined8 *)(pFVar8 + (longlong)&(pFVar36->UVLayers).Array + 8) = uVar14;
          *(undefined8 *)(pFVar8 + (longlong)&(pFVar36->NormalLayers).Array) = uVar15;
          *(undefined8 *)(pFVar8 + (longlong)&(pFVar36->NormalLayers).Array + 8) = uVar16;
          *(undefined8 *)(pFVar8 + (longlong)&(pFVar36->ColorLayer).Ptr) = uVar17;
          *(undefined8 *)(pFVar8 + (longlong)&(pFVar36->ColorLayer).Ptr + 8) = uVar18;
          *(undefined8 *)(pFVar8 + (longlong)&(pFVar36->WeightLayers).Array) = uVar19;
          *(undefined8 *)(pFVar8 + (longlong)&(pFVar36->WeightLayers).Array + 8) = uVar20;
          uVar46 = 0;
          if ((int)uVar40 < (local_4c0->AttribValues).ArrayNum) {
            uVar46 = uVar47;
          }
          if ((uVar46 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar9 = (code *)swi(3);
            uVar29 = (*pcVar9)();
            return (bool)uVar29;
          }
          pFVar43 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar40 + 1);
          pFVar45 = (FDynamicMeshAttributeSet *)((longlong)&pFVar45->_padding_ + 1);
          pFVar5 = (FScriptContainerElement *)
                   ((longlong)&pFVar34->_padding_ +
                   (longlong)(pTVar24->AttribValues).AllocatorInstance.Data);
          *(undefined8 *)pFVar5 = uVar21;
          *(undefined8 *)(pFVar5 + 8) = uVar22;
          pFVar35 = (FDynamicMeshAttributeSet *)((longlong)&pFVar35->_padding_ + 4);
          pFVar34 = (FDynamicMeshAttributeSet *)&pFVar34->_padding_;
          pFVar36 = (FDynamicMeshAttributeSet *)&pFVar36->PolygroupLayers;
        } while ((longlong)pFVar45 < local_408);
      }
    }
  }
  if (local_500.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.AllocatorInstance.Data);
  }
  if (local_4e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e0.AllocatorInstance.Data);
  }
  if (local_4b8.SkinWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b8.SkinWeights.AllocatorInstance.Data);
  }
  if (local_4b8.SrcIndexBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b8.SrcIndexBuffer.AllocatorInstance.Data);
  }
  if (local_4b8.TriangleOffsetArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b8.TriangleOffsetArray.AllocatorInstance.Data);
  }
  if (local_4b8.ValidSections.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b8.ValidSections.AllocatorInstance.Data);
  }
  return true;
}

// operator() @ 1505759e0

bool __thiscall
`UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5345115855325757418>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5345115855325757418>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

