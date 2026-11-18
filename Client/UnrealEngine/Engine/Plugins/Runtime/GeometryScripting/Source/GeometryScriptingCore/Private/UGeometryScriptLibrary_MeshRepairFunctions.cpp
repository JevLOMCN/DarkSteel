// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 37

// StaticClass @ 14ce1f7c0

UClass * __cdecl UGeometryScriptLibrary_MeshRepairFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshRepairFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshRepairFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshRepairFunctions.InnerSingleton
               ,StaticRegisterNativesUGeometryScriptLibrary_MeshRepairFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshRepairFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshRepairFunctions>,local_res8
               ,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshRepairFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshRepairFunctions @ 14ce26a60

UGeometryScriptLibrary_MeshRepairFunctions * __thiscall
UGeometryScriptLibrary_MeshRepairFunctions::UGeometryScriptLibrary_MeshRepairFunctions
          (UGeometryScriptLibrary_MeshRepairFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshRepairFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshRepairFunctions @ 14ce26a90

UGeometryScriptLibrary_MeshRepairFunctions * __thiscall
UGeometryScriptLibrary_MeshRepairFunctions::UGeometryScriptLibrary_MeshRepairFunctions
          (UGeometryScriptLibrary_MeshRepairFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshRepairFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshRepairFunctions @ 14ce273b0

void __thiscall
UGeometryScriptLibrary_MeshRepairFunctions::~UGeometryScriptLibrary_MeshRepairFunctions
          (UGeometryScriptLibrary_MeshRepairFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshRepairFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ce3df80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshRepairFunctions::RemoveHiddenTriangles'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ulong64 uVar17;
  ulonglong uVar18;
  longlong lVar19;
  FText *pFVar20;
  byte bVar21;
  ForAnyElementType FVar22;
  ulonglong uVar23;
  longlong *plVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  uint *puVar28;
  uint uVar29;
  ForElementType<unsigned_int> FVar30;
  ulonglong uVar31;
  ForAnyElementType FVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStackY_488 [32];
  ForAnyElementType local_438;
  undefined8 local_430;
  undefined1 local_428 [8];
  ForAnyElementType local_420;
  undefined8 local_418;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *local_410;
  ForAnyElementType local_408;
  undefined8 local_400;
  uint local_3f8;
  uint uStack_3f4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3f0;
  undefined4 local_3e8;
  uint uStack_3e4;
  uint uStack_3e0;
  undefined4 uStack_3dc;
  FDynamicMeshEditor local_3d8;
  FDynamicMesh3 *local_3d0;
  TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3> local_3c8;
  longlong *local_368;
  TArray<int,TSizedDefaultAllocator<32>_> local_360;
  longlong *local_350;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_348;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> local_328;
  TTransformSRT3<double> *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  FScriptContainerElement *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  FScriptContainerElement *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  TTransformSRT3<double> *local_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  FSparseArrayAllocationInfo local_2a8 [2];
  TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> local_288;
  TArrayView<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_*,int> local_278;
  TArrayView<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*,int> local_268;
  TArrayView<UE::Geometry::TTransformSRT3<double>_const_,int> local_258;
  FText local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [32];
  ForElementType<unsigned_int> local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  FScriptContainerElement local_1a8 [8];
  ForAnyElementType local_1a0;
  uint local_198;
  undefined1 local_188 [40];
  longlong *local_160;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_158;
  ulonglong local_98;
  
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar6 = _UNK_15061cbc8;
  uVar5 = ___xmm_3ff00000000000000000000000000000;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_488;
  local_3c8._padding_ =
       (longlong)&___7__TRemoveOccludedTriangles_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  local_3c8.Progress = (FProgressCancel *)0x0;
  local_3c8.RemovedT.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c8.RemovedT.ArrayNum = 0;
  local_3c8.RemovedT.ArrayMax = 0;
  local_3c8.bRemoveFailed = false;
  uVar33 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
  uVar34 = (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20);
  pbVar3 = *(byte **)this;
  local_3c8.InsideMode = (EOcclusionCalculationMode)*pbVar3;
  local_3c8.TriangleSamplingMethod = VerticesAndCentroids;
  local_3c8.WindingIsoValue = (double)*(float *)(pbVar3 + 0xc);
  local_3c8.NormalOffset = (double)*(float *)(pbVar3 + 0x14);
  local_200 = UE::Math::TVector<double>::OneVector.field0_0x0._0_8_;
  uStack_1f8 = UE::Math::TVector<double>::OneVector.field0_0x0._8_8_;
  local_3c8.AddRandomRays = *(int *)(pbVar3 + 0x10);
  local_3c8.AddTriangleSamples = *(int *)(pbVar3 + 4);
  local_420.Data = (FScriptContainerElement *)0x0;
  local_418 = 0;
  local_3d0 = param_1;
  local_3c8.Mesh = param_1;
  local_368 = this;
  iVar13 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x850,&local_420,(int *)((longlong)&local_418 + 4));
  lVar16 = (longlong)iVar13;
  local_418 = CONCAT44(local_418._4_4_,iVar13 + 1);
  local_238 = 0;
  uStack_230 = 0;
  local_228 = uVar5;
  uStack_220 = uVar6;
  local_218 = (double)uVar7;
  dStack_210 = (double)uVar8;
  *(undefined8 *)&local_420.Data[lVar16 * 0x50].field_0x0 = 0;
  *(undefined8 *)(local_420.Data + lVar16 * 0x50 + 8) = 0;
  *(undefined8 *)(local_420.Data + lVar16 * 0x50 + 0x10) = uVar5;
  *(undefined8 *)(local_420.Data + lVar16 * 0x50 + 0x10 + 8) = uVar6;
  *(undefined8 *)(local_420.Data + lVar16 * 0x50 + 0x20) = uVar7;
  *(undefined8 *)(local_420.Data + lVar16 * 0x50 + 0x20 + 8) = uVar8;
  pFVar2 = local_420.Data + lVar16 * 0x50 + 0x30;
  *(undefined4 *)pFVar2 = uVar9;
  *(undefined4 *)(pFVar2 + 4) = uVar10;
  *(undefined4 *)(pFVar2 + 8) = (undefined4)local_200;
  *(undefined4 *)(pFVar2 + 0xc) = local_200._4_4_;
  pFVar2 = local_420.Data + lVar16 * 0x50 + 0x40;
  *(undefined4 *)pFVar2 = (undefined4)uStack_1f8;
  *(undefined4 *)(pFVar2 + 4) = uStack_1f8._4_4_;
  *(undefined4 *)(pFVar2 + 8) = uVar33;
  *(undefined4 *)(pFVar2 + 0xc) = uVar34;
  uStack_208 = uVar9;
  uStack_204 = uVar10;
  uStack_1f0 = uVar33;
  uStack_1ec = uVar34;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_158,param_1,true);
  local_408.Data = (FScriptContainerElement *)0x0;
  local_400 = 0;
  iVar13 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_408,(int *)((longlong)&local_400 + 4));
  local_328.FWNBeta = __real_4000000000000000;
  local_400 = CONCAT44(local_400._4_4_,iVar13 + 1);
  *(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)(local_408.Data + (longlong)iVar13 * 8) =
       &local_158;
  local_328.Tree = &local_158;
  local_328.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.FastWindingCache.ArrayNum = 0;
  local_328.FastWindingCache.ArrayMax = 0;
  local_328.FastWindingCacheOffset = 0;
  local_328.FastWindingCacheMeshChangeStamp = 0;
  local_328.FWNApproxOrder = 2;
  local_438.Data = (FScriptContainerElement *)0x0;
  local_430 = 0;
  local_430._0_4_ = 0;
  if (**(char **)this == '\0') {
    if ((local_158.RootIndex < 0) ||
       (uVar17 = UE::Geometry::FDynamicMesh3::GetChangeStamp(local_158.Mesh),
       local_158.MeshChangeStamp != uVar17)) {
      pTVar11 = local_328.Tree;
      UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(local_328.Tree,false);
      uVar17 = UE::Geometry::FDynamicMesh3::GetChangeStamp(pTVar11->Mesh);
      pTVar11->MeshChangeStamp = uVar17;
    }
    UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache
              (&local_328);
    local_328.FastWindingCacheMeshChangeStamp = (local_328.Tree)->MeshChangeStamp;
  }
  local_410 = &local_328;
  iVar13 = (int)local_430;
  if ((local_438.Data <= (FScriptContainerElement *)&local_410) &&
     ((FScriptContainerElement *)&local_410 < local_438.Data + (longlong)local_430._4_4_ * 8)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar13 = (int)local_430;
  }
  if (iVar13 == local_430._4_4_) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_438,(int *)((longlong)&local_430 + 4));
  }
  local_430 = CONCAT44(local_430._4_4_,iVar13 + 1);
  *(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)(local_438.Data + (longlong)iVar13 * 8) =
       local_410;
  iVar13 = (int)local_418;
  local_2e8 = (TTransformSRT3<double> *)local_420.Data;
  if (((int)local_418 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iStack_2e0 = iVar13;
  iVar13 = (int)local_430;
  local_2d8 = local_438.Data;
  if (((int)local_430 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iStack_2d0 = iVar13;
  iVar13 = (int)local_400;
  local_2c8 = local_408.Data;
  if (((int)local_400 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iStack_2c0 = iVar13;
  iVar13 = (int)local_418;
  local_2b8 = (TTransformSRT3<double> *)local_420.Data;
  if (((int)local_418 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_288._12_4_ = uStack_2dc;
  local_288.ArrayNum = iStack_2e0;
  local_278._12_4_ = uStack_2cc;
  local_278.ArrayNum = iStack_2d0;
  local_288.DataPtr = local_2e8;
  local_268._12_4_ = uStack_2bc;
  local_268.ArrayNum = iStack_2c0;
  local_278.DataPtr = (TFastWindingTree<UE::Geometry::FDynamicMesh3> **)local_2d8;
  iStack_2b0 = iVar13;
  local_258._12_4_ = uStack_2ac;
  local_258.ArrayNum = iVar13;
  local_268.DataPtr = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)local_2c8;
  local_258.DataPtr = local_2b8;
  UE::Geometry::TRemoveOccludedTriangles<UE::Geometry::FDynamicMesh3>::Select
            (&local_3c8,&local_258,&local_268,&local_278,&local_288,false);
  if (0 < *(int *)(*(longlong *)this + 8)) {
    iVar13 = local_3c8.RemovedT.ArrayNum;
    local_1e0._0_8_ = (FScriptContainerElement *)0x0;
    local_1e0._8_8_ = 0;
    pFVar2 = local_3c8.RemovedT.AllocatorInstance.Data + (longlong)local_3c8.RemovedT.ArrayNum * 4;
    local_1c0 = (ForElementType<unsigned_int>)0x0;
    local_1b8 = ___xmm_00000000ffffffff0000008000000000;
    uStack_1b0._0_4_ = _UNK_150631d98;
    uStack_1b0._4_4_ = _UNK_150631d9c;
    local_1a0.Data = (FScriptContainerElement *)0x0;
    local_198 = 0;
    FVar32.Data = local_3c8.RemovedT.AllocatorInstance.Data;
    local_1e8 = (undefined1  [8])param_1;
    while( true ) {
      puVar28 = (uint *)0x0;
      if (local_3c8.RemovedT.ArrayNum != iVar13) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_428);
      }
      this = local_368;
      if (FVar32.Data == pFVar2) break;
      uVar25 = *(uint *)FVar32.Data;
      if (((-1 < (int)uVar25) &&
          ((int)uVar25 <
           (int)((((FRefCountVector *)((longlong)local_1e8 + 0x140))->RefCounts).CurBlock * 0x200 +
                (((FRefCountVector *)((longlong)local_1e8 + 0x140))->RefCounts).CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((((FRefCountVector *)((longlong)local_1e8 + 0x140))->RefCounts).
                                Blocks.AllocatorInstance.Data + (ulonglong)(uVar25 >> 9) * 8) +
                             (ulonglong)(uVar25 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        if (uStack_1b0._4_4_ == 0) {
          iVar14 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0xc,4,1,(ForAnyElementType *)local_1e0,(int *)(local_1e0 + 8),
                              (int *)(local_1e0 + 0xc));
          iVar15 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                             ((TBitArray<FDefaultBitArrayAllocator> *)(local_1e0 + 0x10),1);
          FVar30 = (ForElementType<unsigned_int>)((longlong)local_1e0 + 0x10);
          if (local_1c0 != (ForElementType<unsigned_int>)0x0) {
            FVar30 = local_1c0;
          }
          bVar21 = (byte)iVar15 & 0x1f;
          if (iVar15 < 0) {
            iVar15 = iVar15 + 0x1f;
            bVar21 = bVar21 - 0x20;
          }
          puVar1 = (uint *)((longlong)FVar30 + (longlong)(iVar15 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << (bVar21 & 0x1f));
        }
        else {
          iVar14 = (int)uStack_1b0;
          lVar16 = (longlong)(int)uStack_1b0;
          uStack_1b0._4_4_ = uStack_1b0._4_4_ + -1;
          uStack_1b0._0_4_ = *(int *)(local_1e0._0_8_ + lVar16 * 0xc + 4);
          if (uStack_1b0._4_4_ != 0) {
            *(undefined4 *)
             (local_1e0._0_8_ + (longlong)*(int *)(local_1e0._0_8_ + lVar16 * 0xc + 4) * 0xc) =
                 0xffffffff;
          }
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_1e0,local_2a8,iVar14);
        if (local_2a8[0].Pointer != (uint *)0x0) {
          *(uint *)local_2a8[0].Pointer = uVar25;
          *(uint *)((longlong)local_2a8[0].Pointer + 4) = 0xffffffff;
          puVar28 = local_2a8[0].Pointer;
        }
        uVar25 = *puVar28;
        if ((local_1e0._8_4_ - uStack_1b0._4_4_ != 1) && (local_1e0._8_4_ != uStack_1b0._4_4_)) {
          FVar22.Data = local_1a8;
          if (local_1a0.Data != (FScriptContainerElement *)0x0) {
            FVar22.Data = local_1a0.Data;
          }
          for (iVar14 = *(int *)(FVar22.Data + (ulonglong)(local_198 - 1 & uVar25) * 4);
              iVar14 != -1; iVar14 = *(int *)(local_1e0._0_8_ + (longlong)iVar14 * 0xc + 4)) {
            if (*(uint *)(local_1e0._0_8_ + (longlong)iVar14 * 0xc) == uVar25) {
              if (iVar14 != -1) {
                *(uint *)(local_1e0._0_8_ + (longlong)iVar14 * 0xc) = uVar25;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_1e0,local_2a8[0].Index,1);
                goto LAB_14ce3e92f;
              }
              break;
            }
          }
        }
        uVar23 = 0;
        uVar29 = local_1e0._8_4_ - uStack_1b0._4_4_;
        uVar27 = 1;
        if (3 < uVar29) {
          uVar26 = (ulonglong)((uVar29 >> 1) + 7) * 2 + 1;
          lVar16 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar27 = 1 << ((byte)lVar16 & 0x1f);
        }
        if (((int)uVar29 < 1) || ((int)uVar27 <= (int)local_198)) {
          uVar25 = local_198 - 1 & uVar25;
          puVar28[2] = uVar25;
          FVar22.Data = local_1a8;
          if (local_1a0.Data != (FScriptContainerElement *)0x0) {
            FVar22.Data = local_1a0.Data;
          }
          uVar23 = (longlong)(int)local_198 - 1U & (longlong)(int)uVar25;
          puVar28[1] = *(uint *)(FVar22.Data + uVar23 * 4);
          *(int *)(FVar22.Data + uVar23 * 4) = local_2a8[0].Index;
        }
        else {
          local_198 = uVar27;
          if (local_1a0.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1a0,0,0,4);
          }
          if (uVar27 != 0) {
            uVar25 = uVar27;
            if (uVar27 < 2) {
              if (local_1a0.Data != (FScriptContainerElement *)0x0) {
                uVar25 = 0;
                goto LAB_14ce3e732;
              }
            }
            else {
LAB_14ce3e732:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_1a0,0,uVar25,4);
            }
            if (0 < (int)uVar27) {
              uVar31 = (ulonglong)uVar27;
              uVar26 = uVar23;
              do {
                FVar22.Data = local_1a8;
                if (local_1a0.Data != (FScriptContainerElement *)0x0) {
                  FVar22.Data = local_1a0.Data;
                }
                uVar18 = uVar26 & (longlong)(int)uVar27 - 1U;
                uVar26 = uVar26 + 1;
                *(undefined4 *)(FVar22.Data + uVar18 * 4) = 0xffffffff;
                uVar31 = uVar31 - 1;
              } while (uVar31 != 0);
            }
          }
          if (local_198 != 0) {
            pTStack_3f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1e0 + 0x10);
            local_3f8 = 0;
            uStack_3f4 = 1;
            uStack_3e4 = 0;
            uStack_3e0 = 0;
            if ((uint)local_1b8 != 0) {
              FVar30 = (ForElementType<unsigned_int>)((longlong)local_1e0 + 0x10);
              if (local_1c0 != (ForElementType<unsigned_int>)0x0) {
                FVar30 = local_1c0;
              }
              uVar25 = *(uint *)FVar30;
              uVar26 = uVar23;
              while (uVar25 == 0) {
                uStack_3e0 = (int)uVar26 + 0x20;
                uVar26 = (ulonglong)uStack_3e0;
                iVar14 = (int)uVar23;
                local_3f8 = iVar14 + 1;
                uVar23 = (ulonglong)local_3f8;
                if ((int)(((uint)local_1b8 - 1) + ((int)((uint)local_1b8 - 1) >> 0x1f & 0x1fU)) >> 5
                    < (int)local_3f8) goto LAB_14ce3e849;
                uVar25 = ((uint *)((longlong)FVar30 + 4))[iVar14];
              }
              uStack_3f4 = -uVar25 & uVar25;
              uVar23 = (ulonglong)uStack_3f4 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar23 != 0) {
                for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              uStack_3e4 = (int)lVar16 + -1 + uStack_3e0;
              uVar23 = (ulonglong)uStack_3e4;
              if ((int)(uint)local_1b8 < (int)uStack_3e4) {
LAB_14ce3e849:
                uVar23 = local_1b8 & 0xffffffff;
                uStack_3e4 = (uint)local_1b8;
              }
            }
            local_3e8 = 0xffffffff;
            local_350 = (longlong *)local_1e0;
            local_348._padding_ = CONCAT44(uStack_3f4,local_3f8);
            local_348.CurrentBitIndex = uStack_3e4;
            local_348.UnvisitedBitMask = 0xffffffff;
            local_348._28_4_ = uStack_3dc;
            local_348.BaseBitIndex = uStack_3e0;
            local_348.Array = pTStack_3f0;
            if ((int)uVar23 < (int)(uint)local_1b8) {
              do {
                lVar16 = *local_350;
                lVar19 = (longlong)(int)uVar23;
                uVar25 = local_198 - 1 & *(uint *)(lVar16 + lVar19 * 0xc);
                *(uint *)(lVar16 + 8 + lVar19 * 0xc) = uVar25;
                FVar22.Data = local_1a8;
                if (local_1a0.Data != (FScriptContainerElement *)0x0) {
                  FVar22.Data = local_1a0.Data;
                }
                uVar26 = (longlong)(int)local_198 - 1U & (longlong)(int)uVar25;
                *(undefined4 *)(lVar16 + 4 + lVar19 * 0xc) =
                     *(undefined4 *)(FVar22.Data + uVar26 * 4);
                *(int *)(FVar22.Data + uVar26 * 4) = (int)uVar23;
                local_348.UnvisitedBitMask = local_348.UnvisitedBitMask & ~local_348._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_348);
                uVar23 = (ulonglong)(uint)local_348.CurrentBitIndex;
              } while (local_348.CurrentBitIndex < (local_348.Array)->NumBits);
            }
          }
        }
      }
LAB_14ce3e92f:
      FVar32.Data = FVar32.Data + 4;
    }
    local_188._0_8_ = 0;
    local_160 = (longlong *)0x0;
    UE::Geometry::FMeshFaceSelection::ContractBorderByOneRingNeighbours
              ((FMeshFaceSelection *)local_1e8,*(int *)(*local_368 + 8),false,
               (TUniqueFunction<bool___cdecl(int)> *)local_188);
    if (local_188._0_8_ != 0) {
      plVar24 = (longlong *)(local_188 + 0x10);
      if (local_160 != (longlong *)0x0) {
        plVar24 = local_160;
      }
      (**(code **)(*plVar24 + 0x10))();
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1e0,&local_360);
    if (local_3c8.RemovedT.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.RemovedT.AllocatorInstance.Data);
    }
    local_3c8.RemovedT.AllocatorInstance.Data = local_360.AllocatorInstance.Data;
    local_3c8.RemovedT.ArrayMax = local_360.ArrayMax;
    local_3c8.RemovedT.ArrayNum = local_360.ArrayNum;
    local_198 = 0;
    if (local_1a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data);
    }
    bVar12 = local_1e0._12_4_ != 0;
    local_1e0._8_8_ = (ulonglong)(uint)local_1e0._12_4_ << 0x20;
    if (bVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_1e0,0,(int *)(local_1e0 + 0xc));
    }
    uVar25 = local_1b8._4_4_;
    uStack_1b0._0_4_ = -1;
    uStack_1b0._4_4_ = 0;
    local_1b8 = (ulonglong)local_1b8._4_4_ << 0x20;
    if (0x80 < uVar25) {
      local_1b8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1e0 + 0x10),0);
    }
    if (local_1c0 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_1c0);
    }
    param_1 = local_3d0;
    if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1e0._0_8_);
      param_1 = local_3d0;
    }
  }
  if (0 < local_3c8.RemovedT.ArrayNum) {
    local_3d8.Mesh = local_3c8.Mesh;
    bVar12 = UE::Geometry::FDynamicMeshEditor::RemoveTriangles(&local_3d8,&local_3c8.RemovedT,true);
    if (!bVar12) {
      local_3c8.bRemoveFailed = (bool)1;
    }
    if ((param_1->TriangleRefCounts).UsedCount == 0) {
      pFVar20 = FText::AsLocalizable_Advanced_LocText
                          (&local_248,L"UGeometryScriptLibrary_MeshRepairFunctions",
                           L"RemoveHiddenTriangles_EmptyMesh",
                           L"RemoveHiddenTriangles: Operation resulted in an empty mesh");
      UE::Geometry::AppendError
                ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),OperationFailed,
                 pFVar20);
      if (local_248.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
      }
    }
    if (*(char *)(*(longlong *)this + 0x18) != '\0') {
      UE::Geometry::FDynamicMesh3::CompactInPlace(param_1,(FCompactMaps *)0x0);
    }
  }
  if (local_438.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data);
  }
  if (local_328.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.FastWindingCache.AllocatorInstance.Data);
  }
  if (local_408.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data);
  }
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_158);
  if (local_420.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_420.Data);
  }
  local_3c8._padding_ =
       (longlong)&___7__TRemoveOccludedTriangles_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  if (local_3c8.RemovedT.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.RemovedT.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ce3ed60

void __thiscall
`UGeometryScriptLibrary_MeshRepairFunctions::RepairMeshDegenerateGeometry'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  double dVar11;
  FDynamicMeshEditor local_res8;
  int local_38 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_30;
  
  uVar9 = 0;
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  uVar10 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar10 != 0) &&
     (pFVar1 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar1 - 1U))) {
    uVar9 = 1;
    uVar7 = 1;
    if ((int)uVar10 < 2) goto joined_r0x00014ce3ede9;
    do {
      uVar6 = (ulonglong)((uint)uVar9 & 0x1ff);
      lVar2 = *(longlong *)(pFVar1 + (uVar9 >> 9) * 8);
      if ((*(short *)(lVar2 + uVar6 * 2) != 0) && (*(short *)(lVar2 + uVar6 * 2) != -1)) break;
      uVar7 = (uint)uVar9 + 1;
      uVar9 = (ulonglong)uVar7;
    } while ((int)uVar7 < (int)uVar10);
  }
  uVar7 = (uint)uVar9;
joined_r0x00014ce3ede9:
  do {
    if (uVar7 == uVar10) {
      local_res8.Mesh = param_1;
      UE::Geometry::FDynamicMeshEditor::RemoveTriangles(&local_res8,&local_30,true);
      **(undefined1 **)this = 1;
      if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.AllocatorInstance.Data);
      }
      return;
    }
    while( true ) {
      iVar8 = (int)uVar9;
      local_38[0] = iVar8;
      dVar11 = UE::Geometry::FDynamicMesh3::GetTriArea(param_1,iVar8);
      if (dVar11 < *(double *)(*(longlong *)((longlong)this + 8) + 8)) {
        if (((local_30.AllocatorInstance.Data <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 <
             local_30.AllocatorInstance.Data + (longlong)local_30.ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = local_30.ArrayNum;
        if (local_30.ArrayNum == local_30.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_30.AllocatorInstance,&local_30.ArrayMax);
        }
        local_30.ArrayNum = iVar5 + 1;
        *(int *)(local_30.AllocatorInstance.Data + (longlong)iVar5 * 4) = local_38[0];
      }
      uVar7 = iVar8 + 1;
      uVar9 = (ulonglong)uVar7;
      if ((int)uVar10 <= (int)uVar7) break;
      pFVar1 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        uVar6 = (ulonglong)((uint)uVar9 & 0x1ff);
        if ((*(short *)(*(longlong *)(pFVar1 + (uVar9 >> 9) * 8) + uVar6 * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar1 + (uVar9 >> 9) * 8) + uVar6 * 2) != -1)) break;
        uVar7 = (uint)uVar9 + 1;
        uVar9 = (ulonglong)uVar7;
        if ((int)uVar10 <= (int)uVar7) goto joined_r0x00014ce3ede9;
      }
    }
  } while( true );
}

// operator() @ 14ce3ef60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshRepairFunctions::ResolveMeshTJunctions'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  bool bVar3;
  FText *pFVar4;
  undefined1 auStackY_c8 [32];
  FText local_98;
  undefined1 local_88 [8];
  ForAnyElementType local_80;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  undefined8 uStack_50;
  ForElementType<FSetElementId> local_40;
  int local_38;
  double local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_70._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_50 = _UNK_150631d98;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_40 = (ForElementType<FSetElementId>)0x0;
  local_38 = 0;
  local_28 = 0;
  local_30 = (double)(**(float **)this + **(float **)this);
  local_88 = (undefined1  [8])param_1;
  bVar3 = UE::Geometry::FMeshResolveTJunctions::Apply((FMeshResolveTJunctions *)local_88);
  if (!bVar3) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_98,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"ResolveMeshTJunctions_Error",
                        L"ResolveMeshTJunctions: ResolveTJunctions Operation returned error flag");
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),OperationFailed,pFVar4)
    ;
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
  }
  local_38 = 0;
  if (local_40 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_40);
  }
  uVar1 = local_78 >> 0x20;
  local_78 = local_78 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_80,0,(int *)((longlong)&local_78 + 4));
  }
  iVar2 = local_70.MaxBits;
  uStack_50 = 0xffffffff;
  local_70._24_8_ = (ulonglong)(uint)local_70.MaxBits << 0x20;
  if (0x80 < (uint)iVar2) {
    local_70.NumBits = 0;
    local_70.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70,0);
  }
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  return;
}

// operator() @ 14ce3f590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshRepairFunctions::SelectHiddenTrianglesFromOutside'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double *pdVar3;
  void *_Src;
  code *pcVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  ForAnyElementType FVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar17;
  undefined1 uVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStackY_3a8 [32];
  undefined1 local_358;
  undefined1 local_357;
  undefined1 local_356 [6];
  ForAnyElementType local_350;
  int local_348;
  int local_344;
  TArray<bool,TSizedDefaultAllocator<32>_> local_340;
  TArray<bool,TSizedDefaultAllocator<32>_> local_330;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_320;
  longlong *local_318;
  uint uStack_310;
  uint uStack_30c;
  TBitArray<FDefaultBitArrayAllocator> *local_308;
  undefined4 uStack_300;
  uint uStack_2fc;
  uint local_2f8;
  uint uStack_2f4;
  int iStack_2f0;
  undefined4 uStack_2ec;
  int local_2e8;
  int local_2e4;
  ulong64 local_2e0;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_2d8;
  undefined8 *local_2d0;
  ulonglong local_2c8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_2c0;
  FExteriorVisibilitySampling local_2b0;
  longlong *local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_290;
  undefined8 uStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  FScriptContainerElement *local_248;
  int iStack_240;
  undefined4 uStack_23c;
  FScriptContainerElement *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  code *local_228;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_220;
  FScriptContainerElement *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  code *local_208;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_200;
  code *local_1f8;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_1f0;
  code *local_1e8;
  undefined8 **local_1e0;
  FScriptContainerElement *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  TArrayView<bool_const_,int> local_1b8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_1a8;
  TArrayView<bool_const_,int> local_198;
  TArrayView<UE::Math::TVector<double>_const_,int> local_188;
  TArrayView<UE::Math::TVector<double>_const_,int> local_178;
  undefined1 local_168 [32];
  uint *local_148;
  uint local_140;
  undefined4 local_13c;
  undefined4 local_138;
  int local_134;
  void *local_128;
  undefined4 local_120;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_118;
  void *local_d8;
  undefined4 local_d0;
  FGeometrySelection local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  pdVar3 = *(double **)this;
  local_2b0.bMarkDegenerateAsVisible = true;
  local_2b0.bDoubleSided = *(bool *)(pdVar3 + 1);
  local_2b0.NumSearchDirections = *(int *)((longlong)pdVar3 + 0xc);
  local_2d8 = &local_118;
  local_2b0.SamplingDensity = *pdVar3;
  local_1f0 = &local_2d8;
  uVar18 = *(undefined1 *)(pdVar3 + 2);
  local_1f8 = UE::Core::Private::Function::
              TFunctionRefCaller<``UGeometryScriptLibrary_MeshRepairFunctions::SelectHiddenTrianglesFromOutside'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
              ::Call;
  local_118._0_8_ = 0;
  local_118._8_8_ = 0;
  local_118._32_8_ = 0;
  local_118._40_4_ = 0;
  local_118._44_4_ = 0x80;
  local_118._48_4_ = 0xffffffff;
  local_118._52_4_ = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_168._0_8_ = 0;
  local_168._8_8_ = 0;
  local_148 = (uint *)0x0;
  local_140 = 0;
  local_13c = 0x80;
  local_138 = 0xffffffff;
  local_134 = 0;
  local_128 = (void *)0x0;
  local_120 = 0;
  local_357 = uVar18;
  FGeometryScriptMeshSelection::ProcessByTriangleID
            (*(FGeometryScriptMeshSelection **)((longlong)this + 0x10),param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_1f8,false);
  local_2d0 = (undefined8 *)local_168;
  local_1e0 = &local_2d0;
  local_1e8 = UE::Core::Private::Function::
              TFunctionRefCaller<``UGeometryScriptLibrary_MeshRepairFunctions::SelectHiddenTrianglesFromOutside'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,void,int>
              ::Call;
  FGeometryScriptMeshSelection::ProcessByTriangleID
            (*(FGeometryScriptMeshSelection **)((longlong)this + 8),param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_1e8,false);
  local_320 = &local_118;
  local_330.ArrayMax = 0;
  local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_330.ArrayNum = 0;
  if (local_168._8_4_ != local_134) {
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&local_330,
               (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed,Default);
    uVar15 = local_140;
    uStack_310 = 0;
    uStack_30c = 1;
    uStack_2fc = uStack_310;
    local_2f8 = uStack_310;
    if (local_140 != 0) {
      puVar17 = (uint *)(local_168 + 0x10);
      if (local_148 != (uint *)0x0) {
        puVar17 = local_148;
      }
      uVar14 = *puVar17;
      uStack_310 = 0;
      local_2f8 = 0;
      while (uVar14 == 0) {
        lVar10 = (longlong)(int)uStack_310;
        local_2f8 = local_2f8 + 0x20;
        uStack_310 = uStack_310 + 1;
        uStack_2fc = local_140;
        if ((int)((local_140 - 1) + ((int)(local_140 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_310)
        goto LAB_14ce3f7d0;
        uVar14 = puVar17[lVar10 + 1];
      }
      uStack_30c = -uVar14 & uVar14;
      uVar13 = (ulonglong)uStack_30c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_2e8 = (int)lVar10;
      uStack_2fc = (local_2f8 - 1) + local_2e8;
      if ((int)local_140 < (int)uStack_2fc) {
        uStack_2fc = local_140;
      }
    }
LAB_14ce3f7d0:
    local_318 = (longlong *)local_168;
    local_308 = (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10);
    uVar14 = local_140 & 0xffffffe0;
    iStack_2f0 = local_168._8_4_ - local_134;
    uStack_300 = 0xffffffff;
    TStack_290.CurrentBitIndex = uStack_2fc;
    TStack_290.UnvisitedBitMask = 0xffffffff;
    TStack_290._padding_ = CONCAT44(uStack_30c,uStack_310);
    iVar11 = (int)local_140 >> 5;
    TStack_290._28_4_ = uStack_2fc;
    TStack_290.BaseBitIndex = local_2f8;
    uStack_270 = CONCAT44(uStack_2ec,iStack_2f0);
    bVar9 = (byte)local_140;
    uStack_2f4 = uStack_2fc;
    local_298 = local_318;
    TStack_290.Array = local_308;
    if (((int)local_140 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar15 != local_140) {
      puVar17 = (uint *)(local_168 + 0x10);
      if (local_148 != (uint *)0x0) {
        puVar17 = local_148;
      }
      uVar15 = -1 << (bVar9 & 0x1f) & puVar17[iVar11];
      while (uVar15 == 0) {
        lVar10 = (longlong)iVar11;
        uVar14 = uVar14 + 0x20;
        iVar11 = iVar11 + 1;
        uVar15 = local_140;
        if ((int)((local_140 - 1) + ((int)(local_140 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_14ce3f8e0;
        uVar15 = puVar17[lVar10 + 1];
      }
      uVar13 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_2e4 = (int)lVar10;
      uVar15 = local_2e4 + -1 + uVar14;
      if ((int)local_140 < (int)uVar15) {
        uVar15 = local_140;
      }
    }
LAB_14ce3f8e0:
    while( true ) {
      plVar6 = local_298;
      if ((int)local_298[1] - *(int *)((longlong)local_298 + 0x34) != (int)uStack_270) {
        local_358 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_358);
      }
      if (((TStack_290.CurrentBitIndex == uVar15) &&
          (TStack_290.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10))) &&
         (uVar18 = local_357, plVar6 == (longlong *)local_168)) break;
      uVar14 = *(uint *)(*plVar6 + (longlong)TStack_290.CurrentBitIndex * 0xc);
      uVar8 = 0;
      if ((int)uVar14 < local_330.ArrayNum) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_330.AllocatorInstance.Data[(int)uVar14] = (FScriptContainerElement)0x1;
      TStack_290.UnvisitedBitMask = TStack_290.UnvisitedBitMask & ~TStack_290._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_290);
    }
  }
  iVar5 = local_330.ArrayNum;
  uVar13 = 0;
  local_340.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_340.ArrayNum = 0;
  local_340.ArrayMax = 0;
  iVar11 = *(int *)(*(longlong *)this + 0x20);
  if (iVar11 == 0) {
    local_218 = local_330.AllocatorInstance.Data;
    if ((local_330.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_200 = &local_320;
    local_1b8._12_4_ = uStack_20c;
    local_1b8.ArrayNum = iVar5;
    local_1b8.DataPtr = (bool *)local_218;
    local_208 = UE::Core::Private::Function::
                TFunctionRefCaller<``UGeometryScriptLibrary_MeshRepairFunctions::SelectHiddenTrianglesFromOutside'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,bool,int>
                ::Call;
    iStack_210 = iVar5;
    UE::Geometry::FExteriorVisibilitySampling::ComputePerTriangleOcclusion
              (param_1,(TFunctionRef<bool___cdecl(int)> *)&local_208,&local_340,(bool)uVar18,
               &local_2b0,&local_1b8);
  }
  else {
    local_350.Data = (FScriptContainerElement *)0x0;
    _Src = *(void **)(*(longlong *)this + 0x18);
    local_348 = iVar11;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar11,0,&local_350,iVar11,&local_344);
    memcpy(local_350.Data,_Src,(longlong)iVar11 * 0x18);
    iVar11 = local_348;
    dVar2 = __real_3ff0000000000000;
    pFVar1 = local_350.Data + (longlong)local_348 * 0x18;
    FVar12.Data = local_350.Data;
    while( true ) {
      if (local_348 != iVar11) {
        local_356[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_356);
      }
      iVar5 = local_348;
      if (FVar12.Data == pFVar1) break;
      local_268 = *(double *)FVar12.Data;
      dStack_260 = *(double *)(FVar12.Data + 8);
      local_258 = *(double *)(FVar12.Data + 0x10);
      auVar20._0_8_ = local_258 * local_258;
      auVar20._8_8_ = 0;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = dStack_260 * dStack_260 + local_268 * local_268 + auVar20._0_8_;
      auVar21 = sqrtpd(auVar20,auVar21);
      if (auVar21._0_8_ <= 0.0) {
        local_258 = 0.0;
        local_268 = 0.0;
        dStack_260 = 0.0;
      }
      else {
        dVar19 = dVar2 / auVar21._0_8_;
        local_268 = local_268 * dVar19;
        dStack_260 = dStack_260 * dVar19;
        local_258 = local_258 * dVar19;
      }
      *(double *)FVar12.Data = local_268;
      *(double *)(FVar12.Data + 8) = dStack_260;
      *(double *)(FVar12.Data + 0x10) = local_258;
      FVar12.Data = FVar12.Data + 0x18;
    }
    iVar11 = *(int *)(*(longlong *)this + 0xc);
    dVar2 = *(double *)(*(longlong *)this + 0x28);
    local_1d8 = local_350.Data;
    if ((local_348 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iStack_1d0 = iVar5;
    local_1a8._12_4_ = uStack_1cc;
    local_1a8.ArrayNum = iVar5;
    local_1a8.DataPtr = (TVector<double> *)local_1d8;
    UE::Geometry::FExteriorVisibilitySampling::GetRestrictedViewDirections
              (&local_2c0,&local_1a8,dVar2,iVar11);
    iStack_1c0 = local_330.ArrayNum;
    local_1c8 = local_330.AllocatorInstance.Data;
    if ((local_330.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_248 = local_2c0.AllocatorInstance.Data;
    if ((local_2c0.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar11 = local_348;
    iStack_240 = local_2c0.ArrayNum;
    local_238 = local_350.Data;
    if ((local_348 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_198._12_4_ = uStack_1bc;
    local_198.ArrayNum = iStack_1c0;
    local_220 = &local_320;
    local_188._12_4_ = uStack_23c;
    local_188.ArrayNum = iStack_240;
    local_198.DataPtr = (bool *)local_1c8;
    local_228 = UE::Core::Private::Function::
                TFunctionRefCaller<``UGeometryScriptLibrary_MeshRepairFunctions::SelectHiddenTrianglesFromOutside'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,bool,int>
                ::Call;
    iStack_230 = iVar11;
    local_178._12_4_ = uStack_22c;
    local_178.ArrayNum = iVar11;
    local_188.DataPtr = (TVector<double> *)local_248;
    local_178.DataPtr = (TVector<double> *)local_238;
    UE::Geometry::FExteriorVisibilitySampling::ComputePerTriangleOcclusionFromDirections
              (param_1,(TFunctionRef<bool___cdecl(int)> *)&local_228,&local_340,(bool)uVar18,
               &local_178,&local_188,false,&local_2b0,&local_198);
    if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.AllocatorInstance.Data);
    }
    if (local_350.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_350.Data);
    }
  }
  local_c8.Selection.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_c8.Selection.Elements._48_8_ = _UNK_150631d98;
  local_c8.ElementType = Face;
  local_c8.TopologyType = Triangle;
  local_c8.Selection.Elements._0_8_ = 0;
  local_c8.Selection.Elements._8_8_ = 0;
  local_c8.Selection.Elements._32_8_ = 0;
  local_c8.Selection.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c8.Selection.HashSize = 0;
  uVar16 = uVar13;
  iVar11 = local_340.ArrayNum;
  if (0 < local_340.ArrayNum) {
    do {
      uVar14 = (uint)uVar13;
      uVar15 = 0;
      if ((int)uVar14 < iVar11) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if (uVar15 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = local_340.ArrayNum;
      }
      if (local_340.AllocatorInstance.Data[uVar16] != (FScriptContainerElement)0x0) {
        local_2c8 = uVar13;
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>(&local_c8.Selection,&local_2e0,(bool *)&local_2c8);
        iVar11 = local_340.ArrayNum;
      }
      uVar13 = (ulonglong)(uVar14 + 1);
      uVar16 = uVar16 + 1;
    } while ((int)(uVar14 + 1) < iVar11);
  }
  FGeometryScriptMeshSelection::SetSelection
            (*(FGeometryScriptMeshSelection **)((longlong)this + 0x18),&local_c8);
  local_c8.Selection.HashSize = 0;
  if (local_c8.Selection.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.Selection.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c8.Selection.Elements);
  if (local_340.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.AllocatorInstance.Data);
  }
  if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.AllocatorInstance.Data);
  }
  local_120 = 0;
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_168);
  local_d0 = 0;
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_118);
  return;
}

// operator() @ 14ce43500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshRepairFunctions::SnapMeshOpenBoundaries'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  float *pfVar1;
  ulonglong uVar2;
  int iVar3;
  bool bVar4;
  FText *pFVar5;
  undefined1 auStackY_d8 [32];
  FText local_a8;
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  TBitArray<FDefaultBitArrayAllocator> local_80;
  undefined8 uStack_60;
  ForElementType<FSetElementId> local_50;
  int local_48;
  double local_40;
  double local_38;
  int local_30;
  float local_2c;
  bool local_28;
  bool local_27;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_80._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_60 = _UNK_150631d98;
  pfVar1 = *(float **)this;
  local_38 = __real_3ff0000000000000;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_50 = (ForElementType<FSetElementId>)0x0;
  local_48 = 0;
  local_30 = 0;
  local_27 = true;
  local_40 = (double)(*pfVar1 + *pfVar1);
  local_2c = pfVar1[2];
  local_28 = *(bool *)(pfVar1 + 1);
  local_98 = (undefined1  [8])param_1;
  bVar4 = UE::Geometry::FMeshSnapOpenBoundaries::Apply((FMeshSnapOpenBoundaries *)local_98);
  if (!bVar4) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_a8,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"SnapMeshOpenBoundaries_Error",
                        L"SnapMeshOpenBoundaries: SnapMeshOpenBoundaries Operation returned error flag"
                       );
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),OperationFailed,pFVar5)
    ;
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  local_48 = 0;
  if (local_50 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_50);
  }
  uVar2 = local_88 >> 0x20;
  local_88 = local_88 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_90,0,(int *)((longlong)&local_88 + 4));
  }
  iVar3 = local_80.MaxBits;
  uStack_60 = 0xffffffff;
  local_80._24_8_ = (ulonglong)(uint)local_80.MaxBits << 0x20;
  if (0x80 < (uint)iVar3) {
    local_80.NumBits = 0;
    local_80.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_80,0);
  }
  if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return;
}

// operator() @ 14ce43680

void __thiscall
`UGeometryScriptLibrary_MeshRepairFunctions::SplitMeshBowties'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *this_00;
  FDynamicMeshEditor local_res8;
  FDynamicMeshEditResult local_78;
  
  if (**(char **)this != '\0') {
    local_78.NewVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.NewVertices.ArrayNum = 0;
    local_78.NewVertices.ArrayMax = 0;
    local_78.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.NewTriangles.ArrayNum = 0;
    local_78.NewTriangles.ArrayMax = 0;
    local_78.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.NewQuads.ArrayNum = 0;
    local_78.NewQuads.ArrayMax = 0;
    local_78.NewPolygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.NewPolygons.ArrayNum = 0;
    local_78.NewPolygons.ArrayMax = 0;
    local_78.NewGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.NewGroups.ArrayNum = 0;
    local_78.NewGroups.ArrayMax = 0;
    local_78.NewNormalOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.NewNormalOverlayElements.ArrayNum = 0;
    local_78.NewNormalOverlayElements.ArrayMax = 0;
    local_78.NewColorOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.NewColorOverlayElements.ArrayNum = 0;
    local_78.NewColorOverlayElements.ArrayMax = 0;
    local_res8.Mesh = param_1;
    UE::Geometry::FDynamicMeshEditor::SplitBowties(&local_res8,&local_78);
    if (local_78.NewColorOverlayElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.NewColorOverlayElements.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               local_78.NewNormalOverlayElements.AllocatorInstance.Data,
               local_78.NewNormalOverlayElements.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)
        local_78.NewNormalOverlayElements.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_78.NewNormalOverlayElements.AllocatorInstance.Data);
    }
    if (local_78.NewGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.NewGroups.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               local_78.NewPolygons.AllocatorInstance.Data,local_78.NewPolygons.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_78.NewPolygons.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_78.NewPolygons.AllocatorInstance.Data);
    }
    if (local_78.NewQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.NewQuads.AllocatorInstance.Data);
    }
    if (local_78.NewTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.NewTriangles.AllocatorInstance.Data);
    }
    if (local_78.NewVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.NewVertices.AllocatorInstance.Data);
    }
  }
  if ((**(char **)((longlong)this + 8) != '\0') &&
     (this_00 = (param_1->AttributeSet).Ptr, this_00 != (FDynamicMeshAttributeSet *)0x0)) {
    UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties(this_00,true);
  }
  return;
}

// operator() @ 14ce44150

void __thiscall
`UGeometryScriptLibrary_MeshRepairFunctions::WeldMeshEdges'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  bool bVar1;
  FText *pFVar2;
  FText local_78;
  FMergeCoincidentMeshEdges local_68;
  
  local_68._padding_ = (longlong)&___7FMergeCoincidentMeshEdges_Geometry_UE__6B_;
  local_68.MergeSearchTolerance = 0.0;
  local_68.InitialNumBoundaryEdges = 0;
  local_68.FinalNumBoundaryEdges = 0;
  local_68.bWeldAttrsOnMergedEdges = false;
  local_68.SplitAttributeWelder.UVDistSqrdThreshold = 0.0;
  local_68.SplitAttributeWelder.ColorDistSqrdThreshold = 0.0;
  local_68.SplitAttributeWelder.NormalVecDotThreshold = 0.0;
  local_68.SplitAttributeWelder.TangentVecDotThreshold = 0.0;
  local_68.EdgesToMerge = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
  local_68.MergeVertexTolerance = (double)**(float **)this;
  local_68.OnlyUniquePairs = *(bool *)(*(float **)this + 1);
  local_68.Mesh = param_1;
  bVar1 = UE::Geometry::FMergeCoincidentMeshEdges::Apply(&local_68);
  if (!bVar1) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"WeldMeshEdges_Error",L"WeldMeshEdges: Weld Operation returned error flag")
    ;
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),OperationFailed,pFVar2)
    ;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
  }
  return;
}

// operator() @ 14ce4a820

void __thiscall
`UGeometryScriptLibrary_MeshRepairFunctions::RepairMeshDegenerateGeometry'::__l2::<lambda_2>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  FDynamicMeshEditor local_res8;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  undefined1 local_48 [16];
  
  uVar8 = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  uVar9 = (param_1->EdgeRefCounts).RefCounts.CurBlockUsed +
          (param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar9 != 0) &&
     (pFVar3 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar8 = 1;
    uVar7 = 1;
    if ((int)uVar9 < 2) goto joined_r0x00014ce4a8a9;
    do {
      uVar6 = (ulonglong)((uint)uVar8 & 0x1ff);
      lVar4 = *(longlong *)(pFVar3 + (uVar8 >> 9) * 8);
      if ((*(short *)(lVar4 + uVar6 * 2) != 0) && (*(short *)(lVar4 + uVar6 * 2) != -1)) break;
      uVar7 = (uint)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < (int)uVar9);
  }
  uVar7 = (uint)uVar8;
joined_r0x00014ce4a8a9:
  do {
    if (uVar7 == uVar9) {
      local_res8.Mesh = param_1;
      UE::Geometry::FDynamicMeshEditor::RemoveTriangles(&local_res8,&local_58,true);
      **(undefined1 **)this = 1;
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return;
    }
    while( true ) {
      pFVar3 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
      local_48 = *(undefined1 (*) [16])
                  (*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + (uVar8 >> 9) * 8)
                  + (ulonglong)((uint)uVar8 & 0x1ff) * 0x10);
      uVar6 = (ulonglong)(local_48._4_4_ & 0x1ff);
      lVar4 = *(longlong *)(pFVar3 + (local_48._0_8_ >> 0x29) * 8);
      pdVar1 = (double *)(lVar4 + uVar6 * 0x18);
      uVar10 = (ulonglong)(local_48._0_4_ & 0x1ff);
      lVar5 = *(longlong *)(pFVar3 + ((local_48._0_8_ & 0xffffffff) >> 9) * 8);
      pdVar2 = (double *)(lVar5 + uVar10 * 0x18);
      dVar12 = *(double *)(lVar4 + 0x10 + uVar6 * 0x18) - *(double *)(lVar5 + 0x10 + uVar10 * 0x18);
      dVar11 = *pdVar1 - *pdVar2;
      dVar13 = pdVar1[1] - pdVar2[1];
      if (SQRT(dVar13 * dVar13 + dVar11 * dVar11 + dVar12 * dVar12) <
          *(double *)(*(longlong *)((longlong)this + 8) + 0x10)) {
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (&local_58,(int *)(local_48 + 8));
        if (local_48._12_4_ != -1) {
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (&local_58,(int *)(local_48 + 0xc));
        }
      }
      uVar7 = (uint)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar9 <= (int)uVar7) break;
      pFVar3 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        uVar6 = (ulonglong)((uint)uVar8 & 0x1ff);
        if ((*(short *)(*(longlong *)(pFVar3 + (uVar8 >> 9) * 8) + uVar6 * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar3 + (uVar8 >> 9) * 8) + uVar6 * 2) != -1)) break;
        uVar7 = (uint)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        if ((int)uVar9 <= (int)uVar7) goto joined_r0x00014ce4a8a9;
      }
    }
  } while( true );
}

// operator() @ 14ce4cd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshRepairFunctions::RepairMeshDegenerateGeometry'::__l2::<lambda_3>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  char cVar1;
  FDynamicMeshAttributeSet *this_00;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStackY_478 [32];
  FMeshConstraints local_428;
  char local_370;
  undefined1 local_368 [32];
  void *local_348;
  undefined4 local_340;
  uint local_33c;
  undefined4 local_338;
  undefined4 local_334;
  void *local_328;
  undefined4 local_320;
  ForAnyElementType local_318;
  undefined8 local_310;
  TBitArray<FDefaultBitArrayAllocator> local_308;
  undefined4 local_2e8;
  undefined4 local_2e4;
  void *local_2d8;
  undefined4 local_2d0;
  int local_2c8;
  ForAnyElementType local_2c0;
  undefined8 local_2b8;
  undefined1 local_2a8 [200];
  char local_1e0;
  undefined1 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  bool local_164;
  bool local_162;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_478;
  cVar1 = **(char **)this;
  if (cVar1 != '\0') {
    UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
    TMeshSimplification<UE::Geometry::TQuadricError<double>_>
              ((TMeshSimplification<UE::Geometry::TQuadricError<double>_> *)local_2a8,param_1);
    this_00 = (param_1->AttributeSet).Ptr;
    local_180 = 0;
    local_17c = 0;
    local_164 = false;
    if (this_00 != (FDynamicMeshAttributeSet *)0x0) {
      local_178 = __real_3ee4f8b588e368f1;
      local_162 = true;
      UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties(this_00,true);
    }
    local_368._0_8_ = (FScriptContainerElement *)0x0;
    local_368._8_8_ = 0;
    local_348 = (void *)0x0;
    local_340 = 0;
    local_33c = 0x80;
    local_338 = 0xffffffff;
    local_334 = 0;
    local_328 = (void *)0x0;
    local_320 = 0;
    local_318.Data = (FScriptContainerElement *)0x0;
    local_310 = 0;
    local_308.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_308.NumBits = 0;
    local_308.MaxBits = 0x80;
    local_2e8 = 0xffffffff;
    local_2e4 = 0;
    local_2d8 = (void *)0x0;
    local_2d0 = 0;
    local_2c0.Data = (FScriptContainerElement *)0x0;
    local_2b8._0_4_ = 0;
    local_2b8._4_4_ = 0;
    local_2c8 = 0;
    UE::Geometry::FMeshConstraintsUtil::ConstrainAllBoundariesAndSeams
              ((FMeshConstraints *)local_368,param_1,NoFlip,NoConstraint,NoConstraint,false,false,
               true,true);
    UE::Geometry::FMeshConstraints::FMeshConstraints(&local_428,(FMeshConstraints *)local_368);
    local_370 = '\x01';
    if (local_1e0 != '\0') {
      UE::Geometry::FMeshConstraints::~FMeshConstraints((FMeshConstraints *)(local_2a8 + 0x10));
    }
    UE::Geometry::FMeshConstraints::FMeshConstraints
              ((FMeshConstraints *)(local_2a8 + 0x10),&local_428);
    local_1e0 = '\x01';
    if (local_370 != '\0') {
      UE::Geometry::FMeshConstraints::~FMeshConstraints(&local_428);
    }
    UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToEdgeLength
              ((TMeshSimplification<UE::Geometry::TQuadricError<double>_> *)local_2a8,
               *(double *)(*(longlong *)this + 0x10));
    **(undefined1 **)((longlong)this + 8) = 1;
    DestructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int>
              ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_2c0.Data,(int)local_2b8);
    if ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_2c0.Data !=
        (TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)0x0) {
      FMemory::Free(local_2c0.Data);
    }
    local_2d0 = 0;
    if (local_2d8 != (void *)0x0) {
      FMemory::Free(local_2d8);
    }
    uVar3 = local_310 >> 0x20;
    local_310 = local_310 & 0xffffffff00000000;
    if ((int)uVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&local_318,0,(int *)((longlong)&local_310 + 4));
    }
    local_2e8 = 0xffffffff;
    local_2e4 = 0;
    local_308.NumBits = 0;
    if (0x80 < (uint)local_308.MaxBits) {
      local_308.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_308,0);
    }
    if (local_308.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_308.AllocatorInstance.SecondaryData);
    }
    if (local_318.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data);
    }
    local_320 = 0;
    if (local_328 != (void *)0x0) {
      FMemory::Free(local_328);
    }
    iVar2 = SUB84(local_368._8_8_,4);
    local_368._8_8_ = local_368._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_368,0,(int *)(local_368 + 0xc));
    }
    local_334 = 0;
    local_340 = 0;
    local_338 = 0xffffffff;
    if (0x80 < local_33c) {
      local_33c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_368 + 0x10),0);
    }
    if (local_348 != (void *)0x0) {
      FMemory::Free(local_348);
    }
    if ((FScriptContainerElement *)local_368._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_368._0_8_);
    }
    UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
    ~TMeshSimplification<UE::Geometry::TQuadricError<double>_>
              ((TMeshSimplification<UE::Geometry::TQuadricError<double>_> *)local_2a8);
    if (cVar1 == '\x02') goto LAB_14ce4d01f;
  }
  __l2::<lambda_1>::operator()(*(void **)((longlong)this + 0x10),param_1);
  __l2::<lambda_2>::operator()(*(void **)((longlong)this + 0x18),param_1);
LAB_14ce4d01f:
  if ((**(char **)((longlong)this + 8) != '\0') && (*(char *)(*(longlong *)this + 0x18) != '\0')) {
    UE::Geometry::FDynamicMesh3::CompactInPlace(param_1,(FCompactMaps *)0x0);
  }
  return;
}

// CompactMesh @ 14ce609d0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::CompactMesh
          (UDynamicMesh *param_1,UGeometryScriptDebug *param_2)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"CompactMesh_InvalidInput",L"CompactMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_2,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = local_res8;
  local_res8[0] = 0;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::CompactMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// FillAllMeshHoles @ 14ce69af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::FillAllMeshHoles
          (UDynamicMesh *param_1,FGeometryScriptFillHolesOptions param_2,int *param_3,int *param_4,
          UGeometryScriptDebug *param_5)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  FText *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  UDynamicMesh *pUVar6;
  longlong *plVar7;
  EGeometryScriptFillHolesMethod EVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bStackX_11;
  undefined1 auStack_268 [32];
  FDynamicMesh3 *local_248;
  TReferenceControllerBase<1> *pTStack_240;
  FDynamicMesh3 **local_238 [2];
  FHoleFillOp local_228;
  code *local_118;
  FDynamicMesh3 ***local_110;
  FText local_108;
  undefined1 local_f8 [104];
  longlong *local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  bool local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_268;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_108,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"FillAllMeshHoles_InvalidInput",L"FillAllMeshHoles: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar4);
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    pTVar5 = ::operator_new(0x240);
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      local_248 = ___xmm_00000000000000000000000000000010;
      pTStack_240 = _UNK_150651568;
    }
    else {
      pTVar5->SharedReferenceCount = (atomic<int>)0x1;
      pTVar5->WeakReferenceCount = (atomic<int>)0x1;
      pTVar5->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFDynamicMesh3_Geometry_UE___00_SharedPointerInternals__6B_
      ;
      UE::Geometry::FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)(pTVar5 + 1));
      local_248 = (FDynamicMesh3 *)(pTVar5 + 1);
      if (local_248 == (FDynamicMesh3 *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pUVar6 = (UDynamicMesh *)(*pcVar1)();
          return pUVar6;
        }
      }
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      pTVar9 = pTVar5;
      pTStack_240 = pTVar5;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    local_238[0] = &local_248;
    local_110 = local_238;
    local_118 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::FillAllMeshHoles'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_118
              );
    local_f8._0_8_ = local_248;
    local_f8._8_8_ = (FEdgeLoop *)0x0;
    local_f8._16_4_ = 0;
    local_f8._20_4_ = 0;
    local_f8._24_8_ = (FEdgeSpan *)0x0;
    local_f8._32_4_ = 0;
    local_f8._36_4_ = 0;
    local_f8[0x28] = false;
    local_f8[0x29] = false;
    local_f8[0x2a] = false;
    local_f8._44_4_ = Compute;
    local_f8._48_4_ = ConvertToOpenSpan;
    local_f8._64_8_ = 0;
    local_90 = (longlong *)0x0;
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80._0_4_ = 0;
    local_80._4_4_ = 0;
    local_78 = false;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    UE::Geometry::FMeshBoundaryLoops::Compute((FMeshBoundaryLoops *)local_f8);
    UE::Geometry::FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)&local_228);
    local_228._padding_ = (longlong)&___7FHoleFillOp_Geometry_UE__6B_;
    local_228.MeshUVScaleFactor = __real_3ff0000000000000;
    local_228.SmoothFillOptions.InteriorSmoothness = __real_3fc999999999999a;
    local_228.SmoothFillOptions.FillDensityScalar = __real_3ff0000000000000;
    local_228.FillType = Minimal;
    local_228.Loops.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.Loops.ArrayNum = 0;
    local_228.Loops.ArrayMax = 0;
    local_228.FillOptions.bRemoveIsolatedTriangles = false;
    local_228.FillOptions.bQuickFillSmallHoles = false;
    local_228.SmoothFillOptions.bConstrainToHoleInterior = true;
    local_228.SmoothFillOptions.RemeshingExteriorRegionWidth = 2;
    local_228.SmoothFillOptions.SmoothingExteriorRegionWidth = 2;
    local_228.SmoothFillOptions.SmoothingInteriorRegionWidth = 2;
    local_228.SmoothFillOptions.bProjectDuringRemesh = false;
    local_228.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.NewTriangles.ArrayNum = 0;
    local_228.NewTriangles.ArrayMax = 0;
    local_228.NumFailedLoops = 0;
    if (pTStack_240 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_240->SharedReferenceCount = (atomic<int>)((int)pTStack_240->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_228.OriginalMesh.Object = local_248;
    local_228.OriginalMesh.SharedReferenceCount.ReferenceController = pTStack_240;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    DestructItems<UE::Geometry::FEdgeLoop,int>
              ((FEdgeLoop *)local_228.Loops.AllocatorInstance.Data,local_228.Loops.ArrayNum);
    if ((FEdgeLoop *)local_228.Loops.AllocatorInstance.Data != (FEdgeLoop *)0x0) {
      FMemory::Free(local_228.Loops.AllocatorInstance.Data);
    }
    local_228.Loops.AllocatorInstance.Data = (FScriptContainerElement *)local_f8._8_8_;
    local_228.Loops.ArrayNum = local_f8._16_4_;
    local_228.Loops.ArrayMax = local_f8._20_4_;
    local_f8._16_4_ = 0;
    local_f8._20_4_ = 0;
    local_f8._8_8_ = (FEdgeLoop *)0x0;
    EVar8 = param_2.FillMethod;
    if ((EVar8 == Automatic) || (EVar8 == MinimalFill)) {
      local_228.FillType = Minimal;
    }
    else if (EVar8 == PolygonTriangulation) {
      local_228.FillType = PolygonEarClipping;
    }
    else if (EVar8 == TriangleFan) {
      local_228.FillType = TriangleFan;
    }
    else if (EVar8 == PlanarProjection) {
      local_228.FillType = Planar;
    }
    bStackX_11 = param_2.bDeleteIsolatedTriangles;
    local_228.FillOptions.bQuickFillSmallHoles = true;
    local_228.FillOptions.bRemoveIsolatedTriangles = bStackX_11;
    UE::Geometry::FHoleFillOp::CalculateResult(&local_228,(FProgressCancel *)0x0);
    lVar2 = local_228._padding_;
    *param_4 = local_228.NumFailedLoops;
    *param_3 = local_228.Loops.ArrayNum - local_228.NumFailedLoops;
    local_228._padding_ = 0;
    UDynamicMesh::SetMesh(param_1,(FDynamicMesh3 *)lVar2);
    if (local_228.NewTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.NewTriangles.AllocatorInstance.Data);
    }
    DestructItems<UE::Geometry::FEdgeLoop,int>
              ((FEdgeLoop *)local_228.Loops.AllocatorInstance.Data,local_228.Loops.ArrayNum);
    if ((FEdgeLoop *)local_228.Loops.AllocatorInstance.Data != (FEdgeLoop *)0x0) {
      FMemory::Free(local_228.Loops.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.OriginalMesh.SharedReferenceCount.ReferenceController);
    local_228._padding_ = (longlong)&___7FDynamicMeshOperator_Geometry_UE__6B_;
    DestructItems<UE::Geometry::FGeometryWarning,int>
              ((FGeometryWarning *)local_228._padding_,(int)local_228._padding_);
    if ((FGeometryWarning *)local_228._padding_ != (FGeometryWarning *)0x0) {
      FMemory::Free((void *)local_228._padding_);
    }
    DestructItems<UE::Geometry::FGeometryError,int>
              ((FGeometryError *)local_228._padding_,(int)local_228._padding_);
    if ((FGeometryError *)local_228._padding_ != (FGeometryError *)0x0) {
      FMemory::Free((void *)local_228._padding_);
    }
    if ((undefined8 *)local_228._padding_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_228._padding_)(local_228._padding_,1);
    }
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
    if (local_f8._64_8_ != 0) {
      plVar7 = (longlong *)(local_f8 + 0x50);
      if (local_90 != (longlong *)0x0) {
        plVar7 = local_90;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    DestructItems<UE::Geometry::FEdgeSpan,int>((FEdgeSpan *)local_f8._24_8_,local_f8._32_4_);
    if ((FEdgeSpan *)local_f8._24_8_ != (FEdgeSpan *)0x0) {
      FMemory::Free((void *)local_f8._24_8_);
    }
    DestructItems<UE::Geometry::FEdgeLoop,int>((FEdgeLoop *)local_f8._8_8_,local_f8._16_4_);
    if ((FEdgeLoop *)local_f8._8_8_ != (FEdgeLoop *)0x0) {
      FMemory::Free((void *)local_f8._8_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_240)
    ;
  }
  return param_1;
}

// GetPrivateStaticClass @ 14ce6d170

UClass * __cdecl UGeometryScriptLibrary_MeshRepairFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshRepairFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshRepairFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshRepairFunctions.InnerSingleton
               ,StaticRegisterNativesUGeometryScriptLibrary_MeshRepairFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshRepairFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshRepairFunctions>,local_res8
               ,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshRepairFunctions.InnerSingleton;
}

// RemoveHiddenTriangles @ 14ce70fb0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::RemoveHiddenTriangles
          (UDynamicMesh *param_1,FGeometryScriptRemoveHiddenTrianglesOptions *param_2,
          UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  UGeometryScriptDebug *local_res18 [2];
  FGeometryScriptRemoveHiddenTrianglesOptions *local_28;
  UGeometryScriptDebug **local_20;
  undefined1 local_18 [16];
  
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"RemoveHiddenTriangles_InvalidInput",
                        L"RemoveHiddenTriangles: TargetMesh is Null");
    UE::Geometry::AppendError(local_res18[0],InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_20 = local_res18;
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::RemoveHiddenTriangles'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// RemoveSmallComponents @ 14ce71060

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::RemoveSmallComponents
          (UDynamicMesh *param_1,FGeometryScriptRemoveSmallComponentOptions *param_2,
          UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  FGeometryScriptRemoveSmallComponentOptions *local_res8;
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"RemoveSmallComponents_InvalidInput",
                        L"RemoveSmallComponents: TargetMesh is Null");
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::RemoveSmallComponents'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_res8 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// RemoveUnusedVertices @ 14ce71110

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::RemoveUnusedVertices
          (UDynamicMesh *param_1,UGeometryScriptDebug *param_2)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"RemoveUnusedVertices_InvalidInput",
                        L"RemoveUnusedVertices: TargetMesh is Null");
    UE::Geometry::AppendError(param_2,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = local_res8;
  local_res8[0] = 0;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::RemoveUnusedVertices'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// RepairMeshDegenerateGeometry @ 14ce71310

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::RepairMeshDegenerateGeometry
          (UDynamicMesh *param_1,FGeometryScriptDegenerateTriangleOptions *param_2,
          UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  undefined1 *local_58;
  FGeometryScriptDegenerateTriangleOptions *local_50;
  undefined1 *local_48;
  FGeometryScriptDegenerateTriangleOptions *local_40;
  undefined1 local_38 [16];
  FGeometryScriptDegenerateTriangleOptions *local_28;
  undefined1 *local_20;
  undefined1 **local_18;
  undefined1 **local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"RepairMeshDegenerateGeometry_InvalidInput",
                        L"RepairMeshDegenerateGeometry: TargetMesh is Null");
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_58 = local_res8;
  local_48 = local_res8;
  local_20 = local_res8;
  local_18 = &local_58;
  local_res8[0] = 0;
  local_10 = &local_48;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::RepairMeshDegenerateGeometry'::__l2::<lambda_3>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_50 = param_2;
  local_40 = param_2;
  local_28 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ResolveMeshTJunctions @ 14ce71490

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::ResolveMeshTJunctions
          (UDynamicMesh *param_1,FGeometryScriptResolveTJunctionOptions param_2,
          UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  UGeometryScriptDebug *local_res18 [2];
  float local_38 [2];
  float *local_30;
  UGeometryScriptDebug **local_28;
  undefined1 local_20 [24];
  
  local_res18[0] = param_3;
  local_38[0] = param_2.Tolerance;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_20,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"ResolveMeshTJunctions_InvalidInput",
                        L"ResolveMeshTJunctions: TargetMesh is Null");
    UE::Geometry::AppendError(local_res18[0],InvalidInputs,pFVar1);
    if ((ITextData *)local_20._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_20._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_30 = local_38;
  local_28 = local_res18;
  local_20._8_8_ = &local_30;
  local_20._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::ResolveMeshTJunctions'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_20,
             GeneralEdit,Unknown,false);
  return param_1;
}

// SelectHiddenTrianglesFromOutside @ 14ce729a0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::SelectHiddenTrianglesFromOutside
          (UDynamicMesh *param_1,FGeometryScriptSelectHiddenTrianglesFromOutsideOptions *param_2,
          FGeometryScriptMeshSelection *param_3,FGeometryScriptMeshSelection *param_4,
          FGeometryScriptMeshSelection *param_5,UGeometryScriptDebug *param_6)

{
  FScriptContainerElement *pFVar1;
  FText *pFVar2;
  undefined1 local_38 [16];
  FGeometryScriptSelectHiddenTrianglesFromOutsideOptions *local_28;
  FGeometryScriptMeshSelection *local_20;
  FGeometryScriptMeshSelection *local_18;
  FGeometryScriptMeshSelection *local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"SelectHiddenTrianglesFromOutside_InvalidInput",
                        L"SelectHiddenTrianglesFromOutside: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar2);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    pFVar1 = (param_2->RestrictToViewDirections).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    local_10 = param_5;
    local_38._8_8_ = &local_28;
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::SelectHiddenTrianglesFromOutside'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_28 = param_2;
    local_20 = param_3;
    local_18 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_38);
    pFVar1 = (param_2->RestrictToViewDirections).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
  }
  return param_1;
}

// SnapMeshOpenBoundaries @ 14ce74d50

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::SnapMeshOpenBoundaries
          (UDynamicMesh *param_1,FGeometryScriptSnapBoundariesOptions *param_2,
          UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  UGeometryScriptDebug *local_res18 [2];
  FGeometryScriptSnapBoundariesOptions *local_28;
  UGeometryScriptDebug **local_20;
  undefined1 local_18 [16];
  
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"SnapMeshOpenBoundaries_InvalidInput",
                        L"SnapMeshOpenBoundaries: TargetMesh is Null");
    UE::Geometry::AppendError(local_res18[0],InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_20 = local_res18;
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::SnapMeshOpenBoundaries'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// SplitMeshBowties @ 14ce74e00

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::SplitMeshBowties
          (UDynamicMesh *param_1,bool param_2,bool param_3,UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined1 *local_28;
  undefined1 *local_20;
  undefined1 local_18 [16];
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"SplitMeshBowties_InvalidInput",L"SplitMeshBowties: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = local_res10;
  local_20 = local_res18;
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::SplitMeshBowties'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshRepairFunctions @ 14ce75040

void __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshRepairFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// WeldMeshEdges @ 14ce75ef0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::WeldMeshEdges
          (UDynamicMesh *param_1,FGeometryScriptWeldEdgesOptions param_2,
          UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  FGeometryScriptWeldEdgesOptions local_res10;
  UGeometryScriptDebug *local_res18 [2];
  FGeometryScriptWeldEdgesOptions *local_28;
  UGeometryScriptDebug **local_20;
  undefined1 local_18 [16];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"WeldMeshEdges_InvalidInput",L"WeldMeshEdges: TargetMesh is Null");
    UE::Geometry::AppendError(local_res18[0],InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = &local_res10;
  local_20 = local_res18;
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::WeldMeshEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// execCompactMesh @ 14ce899f0

void __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::execCompactMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  undefined1 local_res10 [8];
  UGeometryScriptDebug *local_res18;
  UDynamicMesh *local_res20;
  undefined1 local_28 [16];
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar3 = local_res20;
  pUVar2 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"CompactMesh_InvalidInput",L"CompactMesh: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_28._8_8_ = local_res10;
  local_res10[0] = 0;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::CompactMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execFillAllMeshHoles @ 14ce8ef60

void __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::execFillAllMeshHoles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  int *piVar3;
  int *piVar4;
  FGeometryScriptFillHolesOptions local_res10 [4];
  int local_res18 [2];
  int local_res20 [2];
  UGeometryScriptDebug *local_38;
  UDynamicMesh *local_30;
  
  local_30 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res10[0].FillMethod = Automatic;
  local_res10[0].bDeleteIsolatedTriangles = true;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  piVar4 = (int *)param_2->MostRecentPropertyAddress;
  local_res20[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  piVar3 = local_res18;
  if (piVar4 != (int *)0x0) {
    piVar3 = piVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_38 = (UGeometryScriptDebug *)0x0;
  piVar4 = local_res20;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar4 = (int *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = FillAllMeshHoles(local_30,local_res10[0],piVar3,piVar4,local_38);
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execRemoveHiddenTriangles @ 14ce99b50

void __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::execRemoveHiddenTriangles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  UGeometryScriptDebug *local_res20;
  undefined8 *local_78;
  UGeometryScriptDebug **local_70;
  undefined1 local_68 [16];
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_58 = local_58 & 0xffffff00;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3f000000;
  uStack_48 = 0;
  uStack_44 = 0x358637bd;
  local_40 = CONCAT31(local_40._1_3_,1);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res18;
  local_38 = CONCAT44(uStack_54,local_58);
  uStack_30 = CONCAT44(uStack_4c,uStack_50);
  local_28 = CONCAT44(uStack_44,uStack_48);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20 = local_40;
  local_res20 = local_res10;
  if (local_res18 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_68,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"RemoveHiddenTriangles_InvalidInput",
                        L"RemoveHiddenTriangles: TargetMesh is Null");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar3);
    if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_78 = &local_38;
    local_70 = &local_res20;
    local_68._8_8_ = &local_78;
    local_68._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::RemoveHiddenTriangles'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_res18,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_68,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar2;
  }
  return;
}

// execRemoveSmallComponents @ 14ce99d10

void __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::execRemoveSmallComponents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  undefined8 *local_res20;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_48 = 0x38d1b717;
  uStack_44 = 0x38d1b717;
  local_40 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res18;
  pUVar2 = local_res10;
  local_38 = CONCAT44(uStack_44,local_48);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_30 = local_40;
  if (local_res18 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"RemoveSmallComponents_InvalidInput",
                        L"RemoveSmallComponents: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_res20 = &local_38;
  local_28._8_8_ = &local_res20;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::RemoveSmallComponents'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res18,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execRemoveUnusedVertices @ 14ce99ed0

void __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::execRemoveUnusedVertices
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  undefined1 local_res10 [8];
  UGeometryScriptDebug *local_res18;
  UDynamicMesh *local_res20;
  undefined1 local_28 [16];
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar3 = local_res20;
  pUVar2 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"RemoveUnusedVertices_InvalidInput",
                        L"RemoveUnusedVertices: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_28._8_8_ = local_res10;
  local_res10[0] = 0;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::RemoveUnusedVertices'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execRepairMeshDegenerateGeometry @ 14ce9a270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::execRepairMeshDegenerateGeometry
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  undefined1 local_res10 [8];
  UGeometryScriptDebug *local_res18;
  UDynamicMesh *local_res20;
  undefined1 local_a8 [16];
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  undefined1 *local_30;
  undefined1 **local_28;
  undefined1 **local_20;
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  uStack_90 = ___xmm_3f1a36e2eb1c432d3f50624dd2f1a9fc;
  uStack_88 = _UNK_152a006e8;
  local_98 = 1;
  uStack_80 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res18 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar3 = local_res20;
  pUVar2 = local_res18;
  local_58 = CONCAT71(uStack_97,local_98);
  uStack_40 = CONCAT71(uStack_7f,uStack_80);
  uStack_50 = uStack_90;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = uStack_88;
  if (local_res20 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_a8,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"RepairMeshDegenerateGeometry_InvalidInput",
                        L"RepairMeshDegenerateGeometry: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_a8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_a8._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_78 = local_res10;
    local_res10[0] = 0;
    local_70 = &local_58;
    local_68 = local_res10;
    local_60 = &local_58;
    local_38 = &local_58;
    local_30 = local_res10;
    local_28 = &local_78;
    local_20 = &local_68;
    local_a8._8_8_ = &local_38;
    local_a8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::RepairMeshDegenerateGeometry'::__l2::<lambda_3>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_a8,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar3;
  }
  return;
}

// execResolveMeshTJunctions @ 14ce9a590

void __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::execResolveMeshTJunctions
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  UGeometryScriptDebug *local_res20;
  UDynamicMesh *local_48;
  UGeometryScriptDebug *local_40;
  undefined4 *local_38;
  UGeometryScriptDebug **local_30;
  undefined1 local_28 [16];
  
  local_48 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0x3a83126f;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar2 = local_48;
  local_res18[0] = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_40 = local_res20;
  if (local_48 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"ResolveMeshTJunctions_InvalidInput",
                        L"ResolveMeshTJunctions: TargetMesh is Null");
    UE::Geometry::AppendError(local_40,InvalidInputs,pFVar3);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_38 = local_res18;
  local_30 = &local_40;
  local_28._8_8_ = &local_38;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::ResolveMeshTJunctions'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_48,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execSelectHiddenTrianglesFromOutside @ 14ce9b6b0

void __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::execSelectHiddenTrianglesFromOutside
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  void *_Src;
  FText *pFVar3;
  longlong lVar4;
  FGeometryScriptMeshSelection *pFVar5;
  UDynamicMesh *pUVar6;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  undefined8 local_108;
  undefined1 local_100;
  undefined4 local_fc;
  undefined1 local_f8;
  void *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  FGeometryScriptMeshSelection local_d8;
  FGeometryScriptMeshSelection local_c8;
  FGeometryScriptMeshSelection local_b8;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  ForAnyElementType local_80;
  int local_78;
  int local_74;
  undefined8 local_70;
  FGeometrySelection *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FGeometrySelection *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  undefined8 *local_48;
  FGeometrySelection **local_40;
  FGeometrySelection **local_38;
  FGeometryScriptMeshSelection *local_30;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_108 = __real_3ff0000000000000;
  local_e0 = __real_4046800000000000;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0;
  local_f0 = (void *)0x0;
  local_e8 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_b8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_c8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_d8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  pFVar5 = &local_d8;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    pFVar5 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  _Src = local_f0;
  pUVar2 = local_res10;
  local_58 = local_c8.GeoSelection.Object;
  pTStack_50 = local_c8.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_c8.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = local_b8.GeoSelection.Object;
  pTStack_60 = local_b8.GeoSelection.SharedReferenceCount.ReferenceController;
  if (local_b8.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  lVar4 = (longlong)(int)local_e8;
  local_90 = local_100;
  local_8c = local_fc;
  local_88 = local_f8;
  local_98 = local_108;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = (int)local_e8;
  if ((int)local_e8 == 0) {
    local_74 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(int)local_e8,0,&local_80,(int)local_e8,&local_74);
    memcpy(local_80.Data,_Src,lVar4 * 0x18);
  }
  pUVar6 = local_res18;
  local_70 = local_e0;
  if (local_res18 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_a8,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"SelectHiddenTrianglesFromOutside_InvalidInput",
                        L"SelectHiddenTrianglesFromOutside: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    if ((ITextData *)local_a8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_a8._0_8_ + 0x10))();
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
    pUVar6 = (UDynamicMesh *)0x0;
  }
  else {
    local_48 = &local_98;
    local_40 = &local_68;
    local_38 = &local_58;
    local_a8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::SelectHiddenTrianglesFromOutside'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_a8._8_8_ = &local_48;
    local_30 = pFVar5;
    UDynamicMesh::ProcessMesh
              (local_res18,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_a8);
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  *(UDynamicMesh **)param_3 = pUVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.GeoSelection.SharedReferenceCount.ReferenceController);
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  return;
}

// execSnapMeshOpenBoundaries @ 14cea0e00

void __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::execSnapMeshOpenBoundaries
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  UGeometryScriptDebug *local_res20;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 *local_38;
  UGeometryScriptDebug **local_30;
  undefined1 local_28 [16];
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_58 = 0x3a83126f;
  uStack_54 = CONCAT31(uStack_54._1_3_,1);
  local_50 = 5;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res18;
  local_48 = CONCAT44(uStack_54,local_58);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_40 = local_50;
  local_res20 = local_res10;
  if (local_res18 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"SnapMeshOpenBoundaries_InvalidInput",
                        L"SnapMeshOpenBoundaries: TargetMesh is Null");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar3);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_38 = &local_48;
  local_30 = &local_res20;
  local_28._8_8_ = &local_38;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::SnapMeshOpenBoundaries'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res18,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execSplitMeshBowties @ 14cea0fb0

void __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::execSplitMeshBowties
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  bool bVar5;
  bool bVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  int local_78 [2];
  UGeometryScriptDebug *local_70;
  UDynamicMesh *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 local_50 [24];
  
  local_68 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar5 = local_res20[0] != 0;
  local_78[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  bVar6 = local_78[0] != 0;
  local_70 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  pUVar3 = local_68;
  pUVar2 = local_70;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10[0] = bVar5;
  local_res18[0] = bVar6;
  if (local_68 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_50,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"SplitMeshBowties_InvalidInput",L"SplitMeshBowties: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_50._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_50._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_60 = local_res10;
  local_58 = local_res18;
  local_50._8_8_ = &local_60;
  local_50._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::SplitMeshBowties'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_68,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_50,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execWeldMeshEdges @ 14cea2a60

void __cdecl
UGeometryScriptLibrary_MeshRepairFunctions::execWeldMeshEdges
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  undefined4 local_res10;
  undefined4 uStackX_14;
  UGeometryScriptDebug *local_res18;
  UDynamicMesh *local_res20;
  UGeometryScriptDebug *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  UGeometryScriptDebug **local_30;
  undefined1 local_28 [16];
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0x358637bd;
  uStackX_14 = CONCAT31(uStackX_14._1_3_,1);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = local_res18;
  local_40 = CONCAT44(uStackX_14,local_res10);
  if (local_res20 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshRepairFunctions",
                        L"WeldMeshEdges_InvalidInput",L"WeldMeshEdges: TargetMesh is Null");
    UE::Geometry::AppendError(local_48,InvalidInputs,pFVar3);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_38 = &local_40;
  local_30 = &local_48;
  local_28._8_8_ = &local_38;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshRepairFunctions::WeldMeshEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

