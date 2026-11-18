// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 14

// StaticClass @ 14cd949e0

UClass * __cdecl UGeometryScriptLibrary_MeshGeodesicFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshGeodesicFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshGeodesicFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshGeodesicFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshGeodesicFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshGeodesicFunctions @ 14cda60c0

UGeometryScriptLibrary_MeshGeodesicFunctions * __thiscall
UGeometryScriptLibrary_MeshGeodesicFunctions::UGeometryScriptLibrary_MeshGeodesicFunctions
          (UGeometryScriptLibrary_MeshGeodesicFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshGeodesicFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshGeodesicFunctions @ 14cda60f0

UGeometryScriptLibrary_MeshGeodesicFunctions * __thiscall
UGeometryScriptLibrary_MeshGeodesicFunctions::UGeometryScriptLibrary_MeshGeodesicFunctions
          (UGeometryScriptLibrary_MeshGeodesicFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshGeodesicFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshGeodesicFunctions @ 14cda6b20

void __thiscall
UGeometryScriptLibrary_MeshGeodesicFunctions::~UGeometryScriptLibrary_MeshGeodesicFunctions
          (UGeometryScriptLibrary_MeshGeodesicFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshGeodesicFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14cdba800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshGeodesicFunctions::CreateSurfacePath'::__l2::<lambda_2>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStackY_188 [32];
  TVector<double>_u_0 local_138;
  FMeshGeodesicSurfaceTracer local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_118.SurfaceTrace._8_8_ = ___xmm_ffffffffffffffff0000000000000000;
  local_118.ScratchTri2._0_8_ = _UNK_15076cb68;
  local_118.SurfaceTrace.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ScratchTri2.PermutedTriVIDs.field0_0x0._4_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_118.ScratchTri2.PermutedTriEIDs.field0_0x0._0_8_ = _UNK_15060db28;
  local_118.ScratchTri2._24_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_118.ScratchTri2.PermutedIndices.field0_0x0._4_8_ = _UNK_15060db28;
  local_118.ScratchTri2.EdgeOrientationSign.field0_0x0._0_8_ = 0xffffffffffffffff;
  local_118.ScratchTri2.EdgeOrientationSign.field0_0x0._s_0.C = -1;
  local_118.Mesh = param_1;
  UE::Geometry::FMeshGeodesicSurfaceTracer::TraceMeshFromBaryPoint
            (&local_118,**(int **)this,*(TVector<double> **)((longlong)this + 8),
             *(TVector<double> **)((longlong)this + 0x10),
             (double)**(float **)((longlong)this + 0x18));
  uVar7 = local_118.SurfaceTrace._8_8_;
  iVar10 = local_118.SurfaceTrace.ArrayNum;
  lVar11 = (longlong)local_118.SurfaceTrace.ArrayNum;
  *(undefined1 *)(*(longlong *)((longlong)this + 0x20) + 0x10) = 0;
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if ((*plVar3 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (ForAnyElementType *)*plVar3;
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar7 & 0xffffffff);
  }
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  if (*piVar1 < iVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar10,pFVar4,*(int *)&pFVar4[1].Data,piVar1);
  }
  uVar14 = 0;
  if (0 < iVar10) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar14 < local_118.SurfaceTrace.ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = *(uint *)(local_118.SurfaceTrace.AllocatorInstance.Data + lVar13 + 0x10);
      if (uVar9 == 0xffffffff) break;
      if (((-1 < (int)uVar9) &&
          ((int)uVar9 <
           (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 2) - 1U
                  ) < 0xfffe)) {
        UE::Geometry::FDynamicMesh3::GetTriBaryPoint
                  (param_1,(TVector<double> *)&local_138._s_0,uVar9,
                   *(double *)(local_118.SurfaceTrace.AllocatorInstance.Data + lVar13 + 0x30),
                   *(double *)(local_118.SurfaceTrace.AllocatorInstance.Data + lVar13 + 0x38),
                   *(double *)(local_118.SurfaceTrace.AllocatorInstance.Data + lVar13 + 0x38 + 8));
        plVar3 = *(longlong **)((longlong)this + 0x20);
        if ((*plVar3 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (ForAnyElementType *)*plVar3;
        if ((((TVector<double>_u_0 *)pFVar4->Data <= &local_138) &&
            (&local_138 <
             (TVector<double>_u_0 *)pFVar4->Data + *(int *)((longlong)&pFVar4[1].Data + 4))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = *(int *)&pFVar4[1].Data;
        piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,pFVar4,piVar1);
        }
        *(int *)&pFVar4[1].Data = iVar10 + 1;
        pFVar5 = pFVar4->Data;
        pFVar2 = pFVar5 + (longlong)iVar10 * 0x18;
        *(double *)pFVar2 = local_138._s_0.X;
        *(double *)(pFVar2 + 8) = local_138._s_0.Y;
        *(double *)(pFVar5 + (longlong)iVar10 * 0x18 + 0x10) = local_138._s_0.Z;
      }
      uVar14 = uVar14 + 1;
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + 0x58;
    } while (lVar12 < lVar11);
  }
  if (local_118.SurfaceTrace.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.SurfaceTrace.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14cdbd0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UE::Geometry::FEdgePath::FDirectedSegment,TSizedDefaultAllocator<32>_> * __thiscall
`UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestSurfacePath'::__l18::<lambda_5>::
operator()(void *this,
          TArray<UE::Geometry::FEdgePath::FDirectedSegment,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TArray<UE::Geometry::FEdgePath::FDirectedSegment,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStackY_208 [32];
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1c8;
  TArray<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FSeedPoint,TSizedDefaultAllocator<32>_>
  local_1b8;
  longlong *local_1a8;
  TArray<UE::Geometry::FEdgePath::FDirectedSegment,TSizedDefaultAllocator<32>_> *local_1a0;
  FScriptContainerElement *local_198;
  TMeshDijkstra<UE::Geometry::FDynamicMesh3> local_188;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1a8 = this;
  local_1a0 = __return_storage_ptr__;
  UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::
  TMeshDijkstra<UE::Geometry::FDynamicMesh3>(&local_188,*(FDynamicMesh3 **)this);
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 0;
  local_1b8.ArrayMax = 0;
  iVar7 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_1b8.AllocatorInstance,&local_1b8.ArrayMax);
  pFVar10 = local_1b8.AllocatorInstance.Data + (longlong)iVar7 * 0x10;
  local_1b8.ArrayNum = iVar7 + 1;
  DefaultConstructItems<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FSeedPoint,int>
            (pFVar10,1);
  dVar5 = __real_7fefffffffffffff;
  *(undefined4 *)(pFVar10 + 4) = *(undefined4 *)((longlong)this + 0xc);
  UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::ComputeToTargetPoint
            (&local_188,&local_1b8,*(int *)((longlong)this + 8),dVar5);
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FindPathToNearestSeed
            (&local_188,*(int *)((longlong)this + 8),&local_1c8,100000);
  FVar11.Data = local_1c8.AllocatorInstance.Data;
  iVar7 = local_1c8.ArrayNum;
  local_198 = local_1c8.AllocatorInstance.Data;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::
  ~TMeshDijkstra<UE::Geometry::FDynamicMesh3>(&local_188);
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0 = 0;
  if (iVar7 == 0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    uVar13 = iVar7 - 1;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if (0 < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar13,&local_1d8,0,(int *)((longlong)&local_1d0 + 4));
    }
    iVar12 = 1;
    FVar4.Data = FVar11.Data;
    if (1 < iVar7) {
      do {
        if ((iVar12 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<UE::Geometry::FEdgePath::FDirectedSegment,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
        iVar1 = *(int *)(FVar4.Data + 4);
        uVar13 = 0;
        if (iVar12 + -1 < iVar7) {
          uVar13 = (uint)-iVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<UE::Geometry::FEdgePath::FDirectedSegment,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
        uVar13 = UE::Geometry::FDynamicMesh3::FindEdge
                           (*(FDynamicMesh3 **)this,iVar1,*(int *)FVar4.Data);
        if (uVar13 != 0xffffffff) {
          uVar2 = *(undefined8 *)
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)this + 0x1c0) + (ulonglong)(uVar13 >> 9) * 8) +
                   (ulonglong)(uVar13 & 0x1ff) * 0x10);
          iVar8 = (int)local_1d0;
          if ((int)local_1d0 == local_1d0._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_1d8,(int *)((longlong)&local_1d0 + 4));
          }
          local_1d0 = CONCAT44(local_1d0._4_4_,iVar8 + 1);
          pFVar10 = local_1d8.Data + (longlong)iVar8 * 8;
          DefaultConstructItems<UE::Geometry::FEdgePath::FDirectedSegment,int>(pFVar10,1);
          *(uint *)pFVar10 = uVar13;
          *(uint *)(pFVar10 + 4) = (uint)((int)((ulonglong)uVar2 >> 0x20) == iVar1);
          this = local_1a8;
        }
        iVar12 = iVar12 + 1;
        FVar11.Data = local_198;
        __return_storage_ptr__ = local_1a0;
        FVar4.Data = FVar4.Data + 4;
      } while (iVar12 < iVar7);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_1d8.Data;
    __return_storage_ptr__->ArrayNum = (int)local_1d0;
    __return_storage_ptr__->ArrayMax = local_1d0._4_4_;
  }
  local_1d0 = 0;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  return __return_storage_ptr__;
}

// CreateSurfacePath @ 14cdd2af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshGeodesicFunctions::CreateSurfacePath
          (UDynamicMesh *param_1,TVector<double> *param_2,int param_3,TVector<double> *param_4,
          float param_5,FGeometryScriptPolyPath *param_6,bool *param_7,UGeometryScriptDebug *param_8
          )

{
  undefined1 auVar1 [16];
  FGeometryScriptPolyPath *pFVar2;
  bool *pbVar3;
  FText *pFVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_res18 [2];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  int *local_68;
  undefined1 *local_60;
  double *local_58;
  float *local_50;
  FGeometryScriptPolyPath *local_48;
  
  pbVar3 = param_7;
  pFVar2 = param_6;
  *param_7 = true;
  local_res18[0] = param_3;
  FGeometryScriptPolyPath::Reset(param_6,0);
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_a8,L"UGeometryScriptLibrary_MeshGeodesicFunctions",
                        L"CreateSurfacePath_InvalidInput",L"CreateSurfacePath: TargetMesh is Null");
    UE::Geometry::AppendError(param_8,InvalidInputs,pFVar4);
    if ((ITextData *)local_a8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_a8._0_8_ + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    local_80 = (param_2->field0_0x0)._s_0.X;
    dStack_78 = (param_2->field0_0x0)._s_0.Y;
    local_70 = (param_2->field0_0x0)._s_0.Z;
    dVar7 = dStack_78 * dStack_78 + local_80 * local_80 + local_70 * local_70;
    if (dVar7 == __real_3ff0000000000000) {
      local_80 = (param_2->field0_0x0)._s_0.X;
      dStack_78 = (param_2->field0_0x0)._s_0.Y;
      local_70 = (param_2->field0_0x0)._s_0.Z;
    }
    else if (__real_3ee4f8b588e368f1 <= dVar7) {
      dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
      local_80 = local_80 * dVar7;
      dStack_78 = dStack_78 * dVar7;
      local_70 = local_70 * dVar7;
    }
    else {
      local_80 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
      dStack_78 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
      local_70 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    }
    auVar1 = *(undefined1 (*) [16])&param_4->field0_0x0;
    uVar9 = auVar1._0_4_;
    uVar10 = auVar1._4_4_;
    local_88 = (param_4->field0_0x0)._s_0.Z;
    if ((auVar1._0_8_ < 0.0) && (__real_bf847ae147ae147b <= auVar1._0_8_)) {
      uVar9 = 0;
      uVar10 = 0;
    }
    local_98._8_8_ = auVar1._8_8_;
    if (((double)local_98._8_8_ < 0.0) && (__real_bf847ae147ae147b <= (double)local_98._8_8_)) {
      local_98._8_8_ = 0.0;
    }
    if ((local_88 < 0.0) && (__real_bf847ae147ae147b <= local_88)) {
      local_88 = 0.0;
    }
    if ((((double)CONCAT44(uVar10,uVar9) < 0.0) || ((double)local_98._8_8_ < 0.0)) ||
       (local_88 < 0.0)) {
      local_98._8_8_ = __xmm_3fd55555555555553fd5555555555555._8_8_;
      uVar9 = (undefined4)__xmm_3fd55555555555553fd5555555555555;
      uVar10 = __xmm_3fd55555555555553fd5555555555555._4_4_;
      local_88 = __real_3fd5555555555555;
    }
    dVar8 = (param_4->field0_0x0)._s_0.Y + (param_4->field0_0x0)._s_0.X +
            (param_4->field0_0x0)._s_0.Z;
    dVar7 = dVar8 - __real_3ff0000000000000;
    uVar5 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar6 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((double)CONCAT44(uVar6,uVar5) < __real_3fa999999999999a ||
        (double)CONCAT44(uVar6,uVar5) == __real_3fa999999999999a) {
      dVar8 = __real_3ff0000000000000 / dVar8;
      local_88 = local_88 * dVar8;
      local_98._8_8_ = (double)local_98._8_8_ * dVar8;
      local_98._0_8_ = (double)CONCAT44(uVar10,uVar9) * dVar8;
    }
    else {
      local_88 = __real_3fd5555555555555;
      local_98 = ___xmm_3fd55555555555553fd5555555555555;
    }
    local_68 = local_res18;
    local_48 = pFVar2;
    local_60 = local_98;
    local_58 = &local_80;
    local_50 = &param_5;
    local_a8._8_8_ = &local_68;
    local_a8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshGeodesicFunctions::CreateSurfacePath'::__l2::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_a8);
    *pbVar3 = false;
  }
  return param_1;
}

// GetPrivateStaticClass @ 14cdd8aa0

UClass * __cdecl UGeometryScriptLibrary_MeshGeodesicFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshGeodesicFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshGeodesicFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshGeodesicFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshGeodesicFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions.InnerSingleton;
}

// GetShortestSurfacePath @ 14cdd9800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestSurfacePath
          (UDynamicMesh *param_1,int param_2,TVector<double> *param_3,int param_4,
          TVector<double> *param_5,FGeometryScriptPolyPath *param_6,bool *param_7,
          UGeometryScriptDebug *param_8)

{
  int *piVar1;
  FSurfacePoint *pFVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  TVector<double>_u_0 *pTVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  EMeshResult EVar12;
  int iVar13;
  FText *pFVar14;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar15;
  UDynamicMesh *pUVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStackY_898 [32];
  char local_848;
  char local_847 [2];
  bool local_845 [5];
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  local_840;
  TVector<double>_u_0 local_830;
  TVector<double>_u_0 local_818;
  double local_800;
  double dStack_7f8;
  double local_7f0;
  double local_7e8;
  double dStack_7e0;
  double local_7d8;
  FDynamicMesh3 *local_7d0;
  bool *local_7c8;
  FDynamicMesh3 *local_7c0;
  int local_7b8;
  int local_7b4;
  TArray<UE::Geometry::FEdgePath::FDirectedSegment,TSizedDefaultAllocator<32>_> local_7b0;
  TVector<double>_u_0 local_7a0;
  int local_788 [2];
  char *local_780;
  code *local_778;
  int *local_770;
  int local_768 [2];
  char *local_760;
  code *local_758;
  int *local_750;
  code *local_748;
  int *local_740;
  code *local_738;
  int *local_730;
  code *local_728;
  FDynamicMesh3 **local_720;
  FPokeTriangleInfo local_718;
  int local_6d8 [2];
  TVector<double>_u_0 *local_6d0;
  double *local_6c8;
  int local_6c0 [2];
  TVector<double>_u_0 *local_6b8;
  double *local_6b0;
  FEdgePathDeformationInfo local_6a8;
  FText local_690;
  FText local_680;
  FText local_670;
  FText local_660;
  FText local_650;
  FText local_640;
  FDynamicMesh3 local_628;
  FDeformableEdgePath local_3f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_898;
  local_7c8 = param_7;
  *param_7 = true;
  FGeometryScriptPolyPath::Reset(param_6,0);
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_660,L"UGeometryScriptLibrary_MeshGeodesicFunctions",
                         L"GetShortestSurfacePath_InvalidInput",
                         L"GetShortestSurfacePath: TargetMesh is Null");
    UE::Geometry::AppendError(param_8,InvalidInputs,pFVar14);
    if (local_660.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_660.TextData.Reference + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    local_780 = &local_848;
    local_770 = local_788;
    local_848 = '\0';
    local_778 = UE::Core::Private::Function::
                TFunctionRefCaller<``UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestSurfacePath'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    local_788[0] = param_2;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_778
              );
    local_760 = local_847;
    local_847[0] = '\0';
    local_750 = local_768;
    local_758 = UE::Core::Private::Function::
                TFunctionRefCaller<``UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestSurfacePath'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    local_768[0] = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_758
              );
    if (local_848 == '\0') {
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_650,L"UGeometryScriptLibrary_MeshGeodesicFunctions",
                           L"GetShortestSurfacePath_InvalidStartTriangle",
                           L"GetShortestSurfacePath: Start Point triangle not part of mesh");
      UE::Geometry::AppendError(param_8,InvalidInputs,pFVar14);
      if (local_650.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_650.TextData.Reference + 0x10))();
      }
    }
    else if (local_847[0] == '\0') {
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_640,L"UGeometryScriptLibrary_MeshGeodesicFunctions",
                           L"GetShortestSurfacePath_InvalidEndTriangle",
                           L"GetShortestSurfacePath: End Point triangle not part of mesh");
      UE::Geometry::AppendError(param_8,InvalidInputs,pFVar14);
      if (local_640.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_640.TextData.Reference + 0x10))();
      }
    }
    else {
      dVar3 = (param_3->field0_0x0)._s_0.X;
      if ((((dVar3 < 0.0) || (dVar4 = (param_3->field0_0x0)._s_0.Y, dVar4 < 0.0)) ||
          (dVar21 = (param_3->field0_0x0)._s_0.Z, dVar21 < 0.0)) ||
         (dVar22 = dVar3 + dVar4 + dVar21, dVar9 = dVar22 - __real_3ff0000000000000,
         uVar18 = SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar19 = (uint)((ulonglong)dVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3fa999999999999a <= (double)CONCAT44(uVar19,uVar18) &&
         (double)CONCAT44(uVar19,uVar18) != __real_3fa999999999999a)) {
        local_830._s_0.X = ___xmm_3fd55555555555553fd5555555555555;
        local_830._s_0.Z = __real_3fd5555555555555;
        local_830._s_0.Y = _UNK_150aa23f8;
        dVar3 = __real_3fd5555555555555;
      }
      else {
        dVar22 = __real_3ff0000000000000 / dVar22;
        local_830._s_0.Y = dVar22 * dVar4;
        dVar3 = dVar22 * dVar3;
        local_830._s_0.Z = dVar22 * dVar21;
        local_830._s_0.X = dVar3;
      }
      dVar4 = (param_5->field0_0x0)._s_0.X;
      if (((dVar4 < 0.0) || (dVar21 = (param_5->field0_0x0)._s_0.Y, dVar21 < 0.0)) ||
         ((dVar9 = (param_5->field0_0x0)._s_0.Z, dVar9 < 0.0 ||
          (dVar20 = dVar4 + dVar21 + dVar9, dVar22 = dVar20 - __real_3ff0000000000000,
          uVar18 = SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar19 = (uint)((ulonglong)dVar22 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3fa999999999999a <= (double)CONCAT44(uVar19,uVar18) &&
          (double)CONCAT44(uVar19,uVar18) != __real_3fa999999999999a)))) {
        local_818._s_0.X = ___xmm_3fd55555555555553fd5555555555555;
        local_818._s_0.Y = _UNK_150aa23f8;
        local_818._s_0.Z = __real_3fd5555555555555;
        dVar21 = __real_3fd5555555555555;
        dVar4 = __real_3fd5555555555555;
      }
      else {
        dVar20 = __real_3ff0000000000000 / dVar20;
        local_818._s_0.X = dVar20 * dVar4;
        local_818._s_0.Y = dVar20 * dVar21;
        local_818._s_0.Z = dVar20 * dVar9;
        dVar21 = local_818._s_0.X;
        dVar4 = local_818._s_0.Y;
      }
      if (param_2 == param_4) {
        if (((dVar3 == dVar21) && (local_830._s_0.Y == dVar4)) &&
           (local_830._s_0.Z == local_818._s_0.Z)) {
          pFVar14 = FText::AsLocalizable_Advanced_LocText
                              (&local_690,L"UGeometryScriptLibrary_MeshGeodesicFunctions",
                               L"GetShortestSurfacePath_DuplicateInputs",
                               L"GetShortestSurfacePath: Start and End Point are the same");
          UE::Geometry::AppendError(param_8,InvalidInputs,pFVar14);
          if (local_690.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_690.TextData.Reference + 0x10))
                      (local_690.TextData.Reference);
          }
        }
        else {
          local_6d0 = &local_830;
          local_6c8 = &local_800;
          local_748 = UE::Core::Private::Function::
                      TFunctionRefCaller<``UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestSurfacePath'::__l14::<lambda_3>::operator()'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                      ::Call;
          local_800 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_7f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_740 = local_6d8;
          local_7f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_6d8[0] = param_2;
          UDynamicMesh::ProcessMesh
                    (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                             &local_748);
          local_6b8 = &local_818;
          local_6b0 = &local_7e8;
          local_738 = UE::Core::Private::Function::
                      TFunctionRefCaller<``UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestSurfacePath'::__l14::<lambda_3>::operator()'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                      ::Call;
          local_7e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_7e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_730 = local_6c0;
          local_7d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_6c0[0] = param_4;
          UDynamicMesh::ProcessMesh
                    (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                             &local_738);
          param_6->bClosedLoop = false;
          pTVar15 = TSharedPtr<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,1>::
                    operator->(&param_6->Path);
          pFVar5 = (pTVar15->AllocatorInstance).Data;
          if (((pFVar5 <= (FScriptContainerElement *)&local_800) &&
              ((FScriptContainerElement *)&local_800 < pFVar5 + (longlong)pTVar15->ArrayMax * 0x18))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
            pcVar8 = (code *)swi(3);
            pUVar16 = (UDynamicMesh *)(*pcVar8)();
            return pUVar16;
          }
          iVar11 = pTVar15->ArrayNum;
          if (iVar11 == pTVar15->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
          }
          pTVar15->ArrayNum = iVar11 + 1;
          pFVar6 = (pTVar15->AllocatorInstance).Data;
          pFVar5 = pFVar6 + (longlong)iVar11 * 0x18;
          *(double *)pFVar5 = local_800;
          *(double *)(pFVar5 + 8) = dStack_7f8;
          *(double *)(pFVar6 + (longlong)iVar11 * 0x18 + 0x10) = local_7f0;
          pTVar15 = TSharedPtr<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,1>::
                    operator->(&param_6->Path);
          pFVar5 = (pTVar15->AllocatorInstance).Data;
          if (((pFVar5 <= (FScriptContainerElement *)&local_7e8) &&
              ((FScriptContainerElement *)&local_7e8 < pFVar5 + (longlong)pTVar15->ArrayMax * 0x18))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
            pcVar8 = (code *)swi(3);
            pUVar16 = (UDynamicMesh *)(*pcVar8)();
            return pUVar16;
          }
          iVar11 = pTVar15->ArrayNum;
          if (iVar11 == pTVar15->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
          }
          pTVar15->ArrayNum = iVar11 + 1;
          pFVar6 = (pTVar15->AllocatorInstance).Data;
          pFVar5 = pFVar6 + (longlong)iVar11 * 0x18;
          *(double *)pFVar5 = local_7e8;
          *(double *)(pFVar5 + 8) = dStack_7e0;
          *(double *)(pFVar6 + (longlong)iVar11 * 0x18 + 0x10) = local_7d8;
          *param_7 = false;
        }
      }
      else {
        UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_628);
        local_7d0 = &local_628;
        local_720 = &local_7d0;
        local_728 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestSurfacePath'::__l18::<lambda_4>,void,UE::Geometry::FDynamicMesh3_const_&>
                    ::Call;
        UDynamicMesh::ProcessMesh
                  (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                           &local_728);
        local_718.TriVertices.field0_0x0._0_8_ = 0xffffffffffffffff;
        local_718.TriVertices.field0_0x0._s_0.C = -1;
        local_718.NewEdges.field0_0x0._s_0.C = -1;
        local_718.NewTriangles.field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
        local_718.NewEdges.field0_0x0._0_8_ = 0xffffffffffffffff;
        EVar12 = UE::Geometry::FDynamicMesh3::PokeTriangle
                           (&local_628,param_2,(TVector<double> *)&local_830._s_0,&local_718);
        iVar11 = -1;
        if (EVar12 == Ok) {
          iVar11 = local_718.NewVertex;
        }
        EVar12 = UE::Geometry::FDynamicMesh3::PokeTriangle
                           (&local_628,param_4,(TVector<double> *)&local_818._s_0,&local_718);
        iVar13 = -1;
        if (EVar12 == Ok) {
          iVar13 = local_718.NewVertex;
        }
        if ((iVar11 == -1) || (iVar13 == -1)) {
          pFVar14 = FText::AsLocalizable_Advanced_LocText
                              (&local_670,L"UGeometryScriptLibrary_MeshGeodesicFunctions",
                               L"GetShortestSurfacePath_PokeFailure",
                               L"GetShortestSurfacePath: failed");
          UE::Geometry::AppendError(param_8,InvalidInputs,pFVar14);
          if (local_670.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_670.TextData.Reference + 0x10))();
          }
        }
        else {
          local_7c0 = &local_628;
          local_7b8 = iVar11;
          local_7b4 = iVar13;
          `UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestSurfacePath'::__l18::<lambda_5>
          ::operator()(&local_7c0,&local_7b0);
          if (local_7b0.ArrayNum == 0) {
            pFVar14 = FText::AsLocalizable_Advanced_LocText
                                (&local_680,L"UGeometryScriptLibrary_MeshGeodesicFunctions",
                                 L"GetShortestSurfacePath_DijkstraFailure",
                                 L"GetShortestSurfacePath: failed to find a path connecting the points"
                                );
            UE::Geometry::AppendError(param_8,InvalidInputs,pFVar14);
            if (local_680.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_680.TextData.Reference + 0x10))();
            }
          }
          else {
            UE::Geometry::FDeformableEdgePath::FDeformableEdgePath(&local_3f8,&local_628,&local_7b0)
            ;
            local_6a8.NumIterations = 0;
            local_6a8.NumEdgeFlips = 0;
            local_6a8.OriginalLength = 0.0;
            local_6a8.FinalLength = 0.0;
            UE::Geometry::FDeformableEdgePath::Minimize(&local_3f8,&local_6a8,0x7fffffff);
            param_6->bClosedLoop = false;
            pTVar15 = TSharedPtr<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,1>::
                      operator*<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                                (&param_6->Path);
            piVar1 = &pTVar15->ArrayMax;
            pTVar15->ArrayNum = 0;
            if (*piVar1 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,0,&pTVar15->AllocatorInstance,0,piVar1);
            }
            UE::Geometry::FDeformableEdgePath::AsSurfacePoints
                      (&local_3f8,&local_840,__real_3f847ae147ae147b);
            iVar11 = local_840.ArrayNum;
            if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum(local_840._8_8_ & 0xffffffff);
            }
            if (*piVar1 < iVar11) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,iVar11,&pTVar15->AllocatorInstance,pTVar15->ArrayNum,piVar1);
            }
            iVar11 = local_840.ArrayNum;
            pFVar2 = (FSurfacePoint *)(local_840.AllocatorInstance.Data + (longlong)iVar11 * 0x28);
            FVar17.Data = local_840.AllocatorInstance.Data;
            while( true ) {
              if (local_840.ArrayNum != iVar11) {
                local_847[1] = 0;
                `TCheckedPointerIterator<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(local_847 + 1);
              }
              if ((FSurfacePoint *)FVar17.Data == pFVar2) break;
              UE::Geometry::IntrinsicCorrespondenceUtils::AsR3Position
                        ((TVector<double> *)&local_7a0._s_0,(FSurfacePoint *)FVar17.Data,
                         (FDynamicMesh3 *)local_3f8.EdgeFlipMesh.NormalCoordinates._padding_,
                         local_845);
              pTVar7 = (TVector<double>_u_0 *)(pTVar15->AllocatorInstance).Data;
              if (((pTVar7 <= &local_7a0) && (&local_7a0 < pTVar7 + *piVar1)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar8 = (code *)swi(3);
                pUVar16 = (UDynamicMesh *)(*pcVar8)();
                return pUVar16;
              }
              iVar13 = pTVar15->ArrayNum;
              if (iVar13 == *piVar1) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&pTVar15->AllocatorInstance,piVar1);
              }
              FVar17.Data = FVar17.Data + 0x28;
              pTVar15->ArrayNum = iVar13 + 1;
              pFVar6 = (pTVar15->AllocatorInstance).Data;
              pFVar5 = pFVar6 + (longlong)iVar13 * 0x18;
              *(double *)pFVar5 = local_7a0._s_0.X;
              *(double *)(pFVar5 + 8) = local_7a0._s_0.Y;
              *(double *)(pFVar6 + (longlong)iVar13 * 0x18 + 0x10) = local_7a0._s_0.Z;
            }
            if ((FSurfacePoint *)local_840.AllocatorInstance.Data != (FSurfacePoint *)0x0) {
              FMemory::Free(local_840.AllocatorInstance.Data);
            }
            *local_7c8 = false;
            UE::Geometry::FDeformableEdgePath::~FDeformableEdgePath(&local_3f8);
          }
          if (local_7b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7b0.AllocatorInstance.Data);
          }
        }
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_628);
      }
    }
  }
  return param_1;
}

// GetShortestVertexPath @ 14cdda180

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestVertexPath
          (UDynamicMesh *param_1,int param_2,int param_3,FGeometryScriptIndexList *param_4,
          bool *param_5,UGeometryScriptDebug *param_6)

{
  code *pcVar1;
  bool *pbVar2;
  void *_Src;
  bool bVar3;
  int iVar4;
  FText *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  UDynamicMesh *pUVar7;
  longlong lVar8;
  char local_108 [8];
  void *local_100;
  undefined8 local_f8;
  int local_f0;
  int local_ec;
  void **local_e8;
  int local_e0 [2];
  bool **local_d8;
  code *local_d0;
  int *local_c8;
  int local_c0 [2];
  char *local_b8;
  code *local_b0;
  int *local_a8;
  code *local_a0;
  int *local_98;
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  TArray<int,TSizedDefaultAllocator<32>_> local_40;
  
  pbVar2 = param_5;
  *param_5 = true;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_90,L"UGeometryScriptLibrary_MeshGeodesicFunctions",
                        L"GetShortestVertexPath_InvalidInput",
                        L"GetShortestVertexPath: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar5);
  }
  else if (param_2 == param_3) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_80,L"UGeometryScriptLibrary_MeshGeodesicFunctions",
                        L"GetShortestVertexPath_DuplicateInputs",
                        L"GetShortestVertexPath: Start and End vertex are the same");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar5);
    local_90.TextData.Reference = local_80.TextData.Reference;
  }
  else {
    local_d8 = &param_5;
    param_5._0_1_ = '\0';
    local_c8 = local_e0;
    local_d0 = UE::Core::Private::Function::
               TFunctionRefCaller<``UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestVertexPath'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_e0[0] = param_2;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_d0)
    ;
    local_b8 = local_108;
    local_108[0] = '\0';
    local_a8 = local_c0;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<``UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestVertexPath'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_c0[0] = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_b0)
    ;
    if ((char)param_5 == '\0') {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_70,L"UGeometryScriptLibrary_MeshGeodesicFunctions",
                          L"GetShortestVertexPath_InvalidStart",
                          L"GetShortestVertexPath: Start vertex not part of mesh");
      UE::Geometry::AppendError(param_6,InvalidInputs,pFVar5);
      local_90.TextData.Reference = local_70.TextData.Reference;
    }
    else {
      if (local_108[0] != '\0') {
        local_e8 = &local_100;
        local_98 = &local_f0;
        local_100 = (void *)0x0;
        local_a0 = UE::Core::Private::Function::
                   TFunctionRefCaller<``UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestVertexPath'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                   ::Call;
        local_f8 = 0;
        local_f0 = param_2;
        local_ec = param_3;
        UDynamicMesh::ProcessMesh
                  (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                           &local_a0);
        _Src = local_100;
        iVar4 = (int)local_f8;
        lVar8 = (longlong)(int)local_f8;
        local_100 = (void *)0x0;
        local_f8 = 0;
        if (iVar4 == 0) {
          pFVar5 = FText::AsLocalizable_Advanced_LocText
                             (&local_50,L"UGeometryScriptLibrary_MeshGeodesicFunctions",
                              L"GetShortestVertexPath_Failed",
                              L"GetShortestVertexPath: Failed to find connecting path");
          UE::Geometry::AppendError(param_6,InvalidInputs,pFVar5);
          if (local_50.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
          }
        }
        else {
          FGeometryScriptIndexList::Reset(param_4,Vertex,0);
          pTVar6 = TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1>::operator->(&param_4->List)
          ;
          if ((pTVar6 == &local_40) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x96e,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            pUVar7 = (UDynamicMesh *)(*pcVar1)();
            return pUVar7;
          }
          iVar4 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar4,&pTVar6->AllocatorInstance,&pTVar6->ArrayNum,
                             &pTVar6->ArrayMax);
          memcpy((pTVar6->AllocatorInstance).Data + (longlong)iVar4 * 4,_Src,lVar8 << 2);
          *pbVar2 = false;
        }
        if (_Src == (void *)0x0) {
          return param_1;
        }
        FMemory::Free(_Src);
        return param_1;
      }
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_60,L"UGeometryScriptLibrary_MeshGeodesicFunctions",
                          L"GetShortestVertexPath_InvalidEnd",
                          L"GetShortestVertexPath: End vertex not part of mesh");
      UE::Geometry::AppendError(param_6,InvalidInputs,pFVar5);
      local_90.TextData.Reference = local_60.TextData.Reference;
    }
  }
  if (local_90.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
  }
  return param_1;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshGeodesicFunctions @ 14cde7320

void __cdecl
UGeometryScriptLibrary_MeshGeodesicFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshGeodesicFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreateSurfacePath @ 14cdff870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshGeodesicFunctions::execCreateSurfacePath
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGeometryScriptPolyPath *pFVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  longlong lVar8;
  UDynamicMesh *this_00;
  uchar *puVar9;
  FGeometryScriptPolyPath *this_01;
  uint uVar10;
  uint uVar11;
  double dVar12;
  uchar local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined2 local_1b8;
  ITextData *local_1b0;
  uint local_1a8;
  undefined4 local_1a0 [2];
  undefined4 local_198 [2];
  longlong local_190;
  UDynamicMesh *local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  FGeometryScriptPolyPath local_148;
  code *local_128;
  undefined4 **local_120;
  double local_118;
  FText local_108;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  undefined4 *local_b8;
  double *local_b0;
  double *local_a8;
  undefined4 *local_a0;
  FGeometryScriptPolyPath *local_98;
  
  local_188 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_res18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_148.bClosedLoop = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_148.Path.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_148.Path.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  pFVar1 = (FGeometryScriptPolyPath *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this_01 = &local_148;
  if (pFVar1 != (FGeometryScriptPolyPath *)0x0) {
    this_01 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_190 = 0;
  puVar9 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_190,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_190);
  }
  this_00 = local_188;
  lVar5 = local_190;
  local_1a0[0] = local_res20[0];
  local_198[0] = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar9 = '\x01';
  local_118 = local_d8;
  local_f8 = local_c0;
  FGeometryScriptPolyPath::Reset(this_01,0);
  if (this_00 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_108,L"UGeometryScriptLibrary_MeshGeodesicFunctions",
                      L"CreateSurfacePath_InvalidInput",L"CreateSurfacePath: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_1b0 = (this->TextData).Reference;
    local_1b8 = 0x200;
    if (local_1b0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0 + 8))(local_1b0,local_150);
    }
    local_1a8 = this->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_1b8) &&
          (&local_1b8 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)(lVar5 + 0x30);
      if (iVar7 == *(int *)(lVar5 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      lVar8 = (longlong)iVar7;
      *(int *)(lVar5 + 0x30) = iVar7 + 1;
      pFVar3 = ((ForAnyElementType *)(lVar5 + 0x28))->Data;
      pFVar3[lVar8 * 0x18] = local_1b8._0_1_;
      pFVar3[lVar8 * 0x18 + 1] = local_1b8._1_1_;
      *(undefined8 *)(pFVar3 + lVar8 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar3 + lVar8 * 0x18 + 8) = local_1b0;
      if (local_1b0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1b0 + 8))(local_1b0,local_14c);
      }
      *(uint *)(pFVar3 + lVar8 * 0x18 + 0x10) = local_1a8;
    }
    if (local_1b0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0 + 0x10))();
    }
    this_00 = (UDynamicMesh *)0x0;
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
  }
  else {
    dVar12 = dStack_c8 * dStack_c8 + local_d0 * local_d0 + local_f8 * local_f8;
    if (dVar12 == __real_3ff0000000000000) {
      local_168 = local_d0;
      dStack_160 = dStack_c8;
      local_158 = local_c0;
    }
    else if (__real_3ee4f8b588e368f1 <= dVar12) {
      local_158 = __real_3ff0000000000000 / SQRT(dVar12);
      local_168 = local_d0 * local_158;
      dStack_160 = dStack_c8 * local_158;
      local_158 = local_f8 * local_158;
    }
    else {
      local_168 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
      dStack_160 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
      local_158 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    }
    local_180 = local_e8;
    if ((local_e8 < 0.0) && (__real_bf847ae147ae147b <= local_e8)) {
      local_180 = 0.0;
    }
    dStack_178 = dStack_e0;
    if ((dStack_e0 < 0.0) && (__real_bf847ae147ae147b <= dStack_e0)) {
      dStack_178 = 0.0;
    }
    if ((local_d8 < 0.0) && (__real_bf847ae147ae147b <= local_d8)) {
      local_d8 = 0.0;
    }
    if (((local_180 < 0.0) || (dStack_178 < 0.0)) || (local_d8 < 0.0)) {
      dStack_178 = _UNK_150aa23f8;
      local_d8 = __real_3fd5555555555555;
      local_180 = ___xmm_3fd55555555555553fd5555555555555;
    }
    local_170 = dStack_e0 + local_e8 + local_118;
    dVar12 = local_170 - __real_3ff0000000000000;
    uVar10 = SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar11 = (uint)((ulonglong)dVar12 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((double)CONCAT44(uVar11,uVar10) < __real_3fa999999999999a ||
        (double)CONCAT44(uVar11,uVar10) == __real_3fa999999999999a) {
      local_170 = __real_3ff0000000000000 / local_170;
      local_180 = local_180 * local_170;
      dStack_178 = dStack_178 * local_170;
      local_170 = local_d8 * local_170;
    }
    else {
      local_170 = __real_3fd5555555555555;
      local_180 = ___xmm_3fd55555555555553fd5555555555555;
      dStack_178 = _UNK_150aa23f8;
    }
    local_b8 = local_1a0;
    local_b0 = &local_180;
    local_a8 = &local_168;
    local_a0 = local_198;
    local_120 = &local_b8;
    local_128 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshGeodesicFunctions::CreateSurfacePath'::__l2::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    local_98 = this_01;
    UDynamicMesh::ProcessMesh
              (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_128
              );
    *puVar9 = '\0';
  }
  *(UDynamicMesh **)param_3 = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.Path.SharedReferenceCount.ReferenceController);
  return;
}

// execGetShortestSurfacePath @ 14ce06c40

void __cdecl
UGeometryScriptLibrary_MeshGeodesicFunctions::execGetShortestSurfacePath
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGeometryScriptPolyPath *pFVar1;
  FProperty *pFVar2;
  UDynamicMesh *pUVar3;
  bool *pbVar4;
  FGeometryScriptPolyPath *pFVar5;
  bool local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  UGeometryScriptDebug *local_c8;
  UDynamicMesh *local_c0;
  FGeometryScriptPolyPath local_b8;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48;
  
  local_c0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_b8.bClosedLoop = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_b8.Path.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_b8.Path.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pFVar1 = (FGeometryScriptPolyPath *)param_2->MostRecentPropertyAddress;
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_b8;
  if (pFVar1 != (FGeometryScriptPolyPath *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_c8 = (UGeometryScriptDebug *)0x0;
  pbVar4 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar4 = (bool *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_68._s_0.X = local_a0;
  local_68._s_0.Y = dStack_98;
  local_68._s_0.Z = local_90;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48._s_0.X = local_88;
  local_48._s_0.Y = dStack_80;
  local_48._s_0.Z = local_78;
  pUVar3 = GetShortestSurfacePath
                     (local_c0,local_res20[0],(TVector<double> *)&local_48._s_0,local_res18[0],
                      (TVector<double> *)&local_68._s_0,pFVar5,pbVar4,local_c8);
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.Path.SharedReferenceCount.ReferenceController);
  return;
}

// execGetShortestVertexPath @ 14ce06f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshGeodesicFunctions::execGetShortestVertexPath
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FGeometryScriptIndexList *pFVar3;
  FProperty *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  int iVar7;
  void *_Src;
  UGeometryScriptDebug *pUVar8;
  UDynamicMesh *this;
  bool bVar9;
  int iVar10;
  FText *pFVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  uchar *puVar13;
  FGeometryScriptIndexList *this_00;
  longlong lVar14;
  uchar local_res10 [8];
  char local_res18 [8];
  char local_res20 [8];
  int local_178;
  int local_174;
  void *local_170;
  undefined8 local_168;
  undefined2 local_160;
  ITextData *local_158;
  uint local_150;
  undefined2 local_148;
  ITextData *local_140;
  uint local_138;
  UGeometryScriptDebug *local_130;
  UDynamicMesh *local_128;
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  int local_110;
  int local_10c;
  void **local_108;
  FGeometryScriptIndexList local_100;
  int local_e8 [2];
  char *local_e0;
  code *local_d8;
  int *local_d0;
  int local_c8 [2];
  char *local_c0;
  code *local_b8;
  int *local_b0;
  code *local_a8;
  int *local_a0;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  
  local_128 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_174 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_174,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_174);
  }
  local_178 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  local_100.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_100.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_100.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  pFVar3 = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this_00 = &local_100;
  if (pFVar3 != (FGeometryScriptIndexList *)0x0) {
    this_00 = pFVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_130 = (UGeometryScriptDebug *)0x0;
  puVar13 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar13 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  this = local_128;
  pUVar8 = local_130;
  iVar7 = local_174;
  iVar10 = local_178;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar13 = '\x01';
  if (local_128 == (UDynamicMesh *)0x0) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_98,L"UGeometryScriptLibrary_MeshGeodesicFunctions",
                         L"GetShortestVertexPath_InvalidInput",
                         L"GetShortestVertexPath: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar11);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_158 = (pFVar11->TextData).Reference;
    local_160 = 0x200;
    if (local_158 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158 + 8))(local_158,local_120);
    }
    local_150 = pFVar11->Flags;
    if (pUVar8 != (UGeometryScriptDebug *)0x0) {
      pFVar5 = (pUVar8->Messages).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_160) &&
          ((FScriptContainerElement *)&local_160 <
           pFVar5 + (longlong)(pUVar8->Messages).ArrayMax * 0x18)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = (pUVar8->Messages).ArrayNum;
      piVar1 = &(pUVar8->Messages).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(pUVar8->Messages).AllocatorInstance,piVar1);
      }
      (pUVar8->Messages).ArrayNum = iVar10 + 1;
      pFVar5 = (pUVar8->Messages).AllocatorInstance.Data + (longlong)iVar10 * 0x18;
      *pFVar5 = local_160._0_1_;
      pFVar5[1] = local_160._1_1_;
      *(undefined8 *)(pFVar5 + 8) = 0;
      *(ITextData **)(pFVar5 + 8) = local_158;
      if (local_158 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158 + 8))(local_158,local_11c);
      }
      *(uint *)(pFVar5 + 0x10) = local_150;
    }
    if (local_158 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158 + 0x10))();
    }
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
  }
  else if (local_174 == local_178) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_88,L"UGeometryScriptLibrary_MeshGeodesicFunctions",
                         L"GetShortestVertexPath_DuplicateInputs",
                         L"GetShortestVertexPath: Start and End vertex are the same");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar11);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_140 = (pFVar11->TextData).Reference;
    local_148 = 0x200;
    if (local_140 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_140 + 8))(local_140,local_118);
    }
    local_138 = pFVar11->Flags;
    if (pUVar8 != (UGeometryScriptDebug *)0x0) {
      pFVar5 = (pUVar8->Messages).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_148) &&
          ((FScriptContainerElement *)&local_148 <
           pFVar5 + (longlong)(pUVar8->Messages).ArrayMax * 0x18)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = (pUVar8->Messages).ArrayNum;
      piVar1 = &(pUVar8->Messages).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(pUVar8->Messages).AllocatorInstance,piVar1);
      }
      (pUVar8->Messages).ArrayNum = iVar10 + 1;
      pFVar5 = (pUVar8->Messages).AllocatorInstance.Data + (longlong)iVar10 * 0x18;
      *pFVar5 = local_148._0_1_;
      pFVar5[1] = local_148._1_1_;
      *(undefined8 *)(pFVar5 + 8) = 0;
      *(ITextData **)(pFVar5 + 8) = local_140;
      if (local_140 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_140 + 8))(local_140,local_114);
      }
      *(uint *)(pFVar5 + 0x10) = local_138;
    }
    if (local_140 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_140 + 0x10))();
    }
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
  }
  else {
    local_e0 = local_res18;
    local_res18[0] = '\0';
    local_d0 = local_e8;
    local_e8[0] = local_174;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<``UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestVertexPath'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_128,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_d8);
    local_c0 = local_res20;
    local_res20[0] = '\0';
    local_c8[0] = iVar10;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<``UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestVertexPath'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_b0 = local_c8;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_b8);
    if (local_res18[0] == '\0') {
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_78,L"UGeometryScriptLibrary_MeshGeodesicFunctions",
                           L"GetShortestVertexPath_InvalidStart",
                           L"GetShortestVertexPath: Start vertex not part of mesh");
      UE::Geometry::AppendError(pUVar8,InvalidInputs,pFVar11);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
    }
    else if (local_res20[0] == '\0') {
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_68,L"UGeometryScriptLibrary_MeshGeodesicFunctions",
                           L"GetShortestVertexPath_InvalidEnd",
                           L"GetShortestVertexPath: End vertex not part of mesh");
      UE::Geometry::AppendError(pUVar8,InvalidInputs,pFVar11);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
    }
    else {
      local_110 = iVar7;
      local_170 = (void *)0x0;
      local_168 = 0;
      local_108 = &local_170;
      local_10c = iVar10;
      local_a0 = &local_110;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<``UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestVertexPath'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
      UDynamicMesh::ProcessMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_a8);
      _Src = local_170;
      iVar10 = (int)local_168;
      lVar14 = (longlong)(int)local_168;
      local_170 = (void *)0x0;
      local_168 = 0;
      if (iVar10 == 0) {
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            (&local_58,L"UGeometryScriptLibrary_MeshGeodesicFunctions",
                             L"GetShortestVertexPath_Failed",
                             L"GetShortestVertexPath: Failed to find connecting path");
        UE::Geometry::AppendError(pUVar8,InvalidInputs,pFVar11);
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
      }
      else {
        FGeometryScriptIndexList::Reset(this_00,Vertex,0);
        pTVar12 = TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1>::operator->(&this_00->List);
        if ((pTVar12 == &local_48) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar10,&pTVar12->AllocatorInstance,&pTVar12->ArrayNum,
                            &pTVar12->ArrayMax);
        memcpy((pTVar12->AllocatorInstance).Data + (longlong)iVar10 * 4,_Src,lVar14 << 2);
        *puVar13 = '\0';
      }
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.List.SharedReferenceCount.ReferenceController);
  return;
}

