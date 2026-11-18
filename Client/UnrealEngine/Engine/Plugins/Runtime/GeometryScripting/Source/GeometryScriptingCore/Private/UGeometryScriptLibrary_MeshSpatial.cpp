// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 26

// StaticClass @ 14ce1e780

UClass * __cdecl UGeometryScriptLibrary_MeshSpatial::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSpatial.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSpatial",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSpatial.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_MeshSpatial,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryScriptLibrary_MeshSpatial>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSpatial>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSpatial.InnerSingleton;
}

// UGeometryScriptLibrary_MeshSpatial @ 14ce26ca0

UGeometryScriptLibrary_MeshSpatial * __thiscall
UGeometryScriptLibrary_MeshSpatial::UGeometryScriptLibrary_MeshSpatial
          (UGeometryScriptLibrary_MeshSpatial *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSpatial__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshSpatial @ 14ce26cd0

UGeometryScriptLibrary_MeshSpatial * __thiscall
UGeometryScriptLibrary_MeshSpatial::UGeometryScriptLibrary_MeshSpatial
          (UGeometryScriptLibrary_MeshSpatial *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSpatial__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshSpatial @ 14ce27470

void __thiscall
UGeometryScriptLibrary_MeshSpatial::~UGeometryScriptLibrary_MeshSpatial
          (UGeometryScriptLibrary_MeshSpatial *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSpatial__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ce32580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshSpatial::BuildBVHForMesh'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  longlong *plVar1;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> **ppTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *local_18;
  FSharedReferencer<1> FStack_10;
  
  plVar1 = *(longlong **)this;
  if (*plVar1 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar2 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)*plVar1;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar2->Mesh = param_1;
  pTVar2->MeshChangeStamp = 0;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(pTVar2,false);
  uVar6 = UE::Geometry::FDynamicMesh3::GetChangeStamp(pTVar2->Mesh);
  pTVar2->MeshChangeStamp = uVar6;
  lVar3 = **(longlong **)this;
  pTVar7 = ::operator_new(0x48);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    local_18 = ___xmm_00000000000000000000000000000010;
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_10.ReferenceController = _UNK_150651568;
    goto LAB_14ce3272a;
  }
  pTVar7->SharedReferenceCount = (atomic<int>)0x1;
  pTVar7->WeakReferenceCount = (atomic<int>)0x1;
  pTVar7->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_V__TFastWindingTree_VFDynamicMesh3_Geometry_UE___Geometry_UE___00_SharedPointerInternals__6B_
  ;
  pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
  pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
  pTVar7[2]._padding_ = 0;
  pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
  pTVar7[3].WeakReferenceCount = (atomic<int>)0x40000000;
  pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
  pTVar7[3]._padding_ = 0;
  *(undefined4 *)&pTVar7[4]._padding_ = 2;
  pTVar7[1]._padding_ = lVar3;
  if (lVar3 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Tree",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                       ,0x16c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = pTVar7[1]._padding_;
  if (*(int *)(lVar3 + 0xbc) < 0) {
LAB_14ce32695:
    pTVar2 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)pTVar7[1]._padding_;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(pTVar2,false);
    uVar6 = UE::Geometry::FDynamicMesh3::GetChangeStamp(pTVar2->Mesh);
    pTVar2->MeshChangeStamp = uVar6;
  }
  else {
    uVar6 = UE::Geometry::FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)(lVar3 + 8));
    if (*(ulong64 *)(lVar3 + 0x10) != uVar6) goto LAB_14ce32695;
  }
  UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache
            ((TFastWindingTree<UE::Geometry::FDynamicMesh3> *)(pTVar7 + 1));
  pTVar10 = pTVar7 + 1;
  pTVar7[3]._padding_ = *(longlong *)(pTVar7[1]._padding_ + 0x10);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  LOCK();
  pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
  UNLOCK();
  FStack_10.ReferenceController = pTVar7;
  pTVar9 = pTVar7;
  local_18 = pTVar10;
LAB_14ce3272a:
  lVar3 = *(longlong *)this;
  ppTVar8 = (TReferenceControllerBase<1> **)(lVar3 + 0x10);
  if (ppTVar8 != &local_18) {
    *ppTVar8 = pTVar10;
    local_18 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar3 + 0x18),&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// operator() @ 14ce3d3a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshSpatial::RebuildBVHForMesh'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> **ppTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *local_18;
  FSharedReferencer<1> FStack_10;
  
  if (**(char **)this != '\0') {
    plVar1 = *(longlong **)((longlong)this + 8);
    if ((*plVar1 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(FDynamicMesh3 **)(*plVar1 + 8) == param_1) {
      plVar1 = *(longlong **)((longlong)this + 8);
      if ((*plVar1 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *plVar1;
      if ((-1 < *(int *)(lVar2 + 0xbc)) &&
         (uVar6 = UE::Geometry::FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)(lVar2 + 8)),
         *(ulong64 *)(lVar2 + 0x10) == uVar6)) {
        return;
      }
    }
  }
  plVar1 = *(longlong **)((longlong)this + 8);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar2 = *plVar1;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  *(FDynamicMesh3 **)(lVar2 + 8) = param_1;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar1 = *(longlong **)((longlong)this + 8);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar3 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)*plVar1;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(pTVar3,false);
  uVar6 = UE::Geometry::FDynamicMesh3::GetChangeStamp(pTVar3->Mesh);
  pTVar3->MeshChangeStamp = uVar6;
  lVar2 = **(longlong **)((longlong)this + 8);
  pTVar7 = ::operator_new(0x48);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    local_18 = ___xmm_00000000000000000000000000000010;
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_10.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFastWindingTree_VFDynamicMesh3_Geometry_UE___Geometry_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x40000000;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    *(undefined4 *)&pTVar7[4]._padding_ = 2;
    pTVar7[1]._padding_ = lVar2;
    if ((lVar2 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Tree",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                           ,0x16c,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar2 = pTVar7[1]._padding_;
    if ((*(int *)(lVar2 + 0xbc) < 0) ||
       (uVar6 = UE::Geometry::FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)(lVar2 + 8)),
       *(ulong64 *)(lVar2 + 0x10) != uVar6)) {
      pTVar3 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)pTVar7[1]._padding_;
      UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(pTVar3,false);
      uVar6 = UE::Geometry::FDynamicMesh3::GetChangeStamp(pTVar3->Mesh);
      pTVar3->MeshChangeStamp = uVar6;
    }
    UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache
              ((TFastWindingTree<UE::Geometry::FDynamicMesh3> *)(pTVar7 + 1));
    pTVar10 = pTVar7 + 1;
    pTVar7[3]._padding_ = *(longlong *)(pTVar7[1]._padding_ + 0x10);
    if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    FStack_10.ReferenceController = pTVar7;
    pTVar9 = pTVar7;
    local_18 = pTVar10;
  }
  lVar2 = *(longlong *)((longlong)this + 8);
  ppTVar8 = (TReferenceControllerBase<1> **)(lVar2 + 0x10);
  if (ppTVar8 != &local_18) {
    *ppTVar8 = pTVar10;
    local_18 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar2 + 0x18),&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// operator() @ 14ce40290

bool __thiscall
`UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,int param_2,TAxisAlignedBox3<double> *param_3,
          int param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  double *pdVar12;
  int iVar13;
  int iVar14;
  uint local_38;
  
  pFVar5 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
  dVar2 = (param_3->Min).field0_0x0._s_0.X;
  lVar6 = *(longlong *)
           ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8
           );
  uVar9 = *(ulonglong *)(lVar6 + (ulonglong)(param_2 & 0x1ff) * 0xc);
  uVar4 = *(uint *)(lVar6 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc);
  local_38 = (uint)uVar9;
  pdVar1 = (double *)
           (*(longlong *)(pFVar5 + (ulonglong)(local_38 >> 9) * 8) +
           (ulonglong)(local_38 & 0x1ff) * 0x18);
  dVar7 = *pdVar1;
  dVar8 = pdVar1[1];
  dVar3 = *(double *)
           (*(longlong *)(pFVar5 + (ulonglong)(local_38 >> 9) * 8) + 0x10 +
           (ulonglong)(local_38 & 0x1ff) * 0x18);
  iVar13 = 1;
  if (((((dVar7 < dVar2) || (dVar8 < (param_3->Min).field0_0x0._s_0.Y)) ||
       (dVar3 < (param_3->Min).field0_0x0._s_0.Z)) ||
      (((param_3->Max).field0_0x0._s_0.X <= dVar7 && dVar7 != (param_3->Max).field0_0x0._s_0.X ||
       (pdVar1 = &(param_3->Max).field0_0x0._s_0.Y, *pdVar1 <= dVar8 && dVar8 != *pdVar1)))) ||
     (pdVar1 = &(param_3->Max).field0_0x0._s_0.Z, *pdVar1 <= dVar3 && dVar3 != *pdVar1)) {
    iVar11 = 0;
  }
  else {
    iVar11 = 1;
  }
  pdVar12 = &(param_3->Max).field0_0x0._s_0.Y;
  uVar10 = (ulonglong)((uint)(uVar9 >> 0x20) & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar5 + (uVar9 >> 0x29) * 8) + uVar10 * 0x18);
  dVar7 = *pdVar1;
  dVar8 = pdVar1[1];
  dVar3 = *(double *)(*(longlong *)(pFVar5 + (uVar9 >> 0x29) * 8) + 0x10 + uVar10 * 0x18);
  if (((dVar7 < dVar2) || (dVar8 < (param_3->Min).field0_0x0._s_0.Y)) ||
     ((dVar3 < (param_3->Min).field0_0x0._s_0.Z ||
      ((((param_3->Max).field0_0x0._s_0.X <= dVar7 && dVar7 != (param_3->Max).field0_0x0._s_0.X ||
        (*pdVar12 <= dVar8 && dVar8 != *pdVar12)) ||
       (pdVar1 = &(param_3->Max).field0_0x0._s_0.Z, *pdVar1 <= dVar3 && dVar3 != *pdVar1)))))) {
    iVar14 = 0;
  }
  else {
    iVar14 = 1;
  }
  uVar9 = (ulonglong)(uVar4 & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + uVar9 * 0x18);
  dVar7 = *pdVar1;
  dVar8 = pdVar1[1];
  dVar3 = *(double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar9 * 0x18);
  if ((((dVar7 < dVar2) || (dVar8 < (param_3->Min).field0_0x0._s_0.Y)) ||
      ((dVar3 < (param_3->Min).field0_0x0._s_0.Z ||
       (((param_3->Max).field0_0x0._s_0.X <= dVar7 && dVar7 != (param_3->Max).field0_0x0._s_0.X ||
        (*pdVar12 <= dVar8 && dVar8 != *pdVar12)))))) ||
     (pdVar1 = &(param_3->Max).field0_0x0._s_0.Z, *pdVar1 <= dVar3 && dVar3 != *pdVar1)) {
    iVar13 = 0;
  }
  return param_4 <= iVar11 + iVar14 + iVar13;
}

// operator() @ 14ce48060

void __thiscall
`UGeometryScriptLibrary_MeshSpatial::IsBVHValidForMesh'::__l8::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  
  plVar1 = *(longlong **)this;
  if (*plVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(FDynamicMesh3 **)(*plVar1 + 8) == param_1) {
    plVar1 = *(longlong **)this;
    if (*plVar1 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar2 = *plVar1;
    if (*(int *)(lVar2 + 0xbc) < 0) {
      bVar4 = false;
    }
    else {
      uVar5 = UE::Geometry::FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)(lVar2 + 8));
      bVar4 = *(ulong64 *)(lVar2 + 0x10) == uVar5;
    }
    **(undefined1 **)((longlong)this + 8) = bVar4;
  }
  return;
}

// BuildBVHForMesh @ 14ce5cf60

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSpatial::BuildBVHForMesh
          (UDynamicMesh *param_1,FGeometryScriptDynamicMeshBVH *param_2,
          UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  TSharedRef<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *pTVar2;
  FGeometryScriptDynamicMeshBVH *local_res8;
  FGeometryScriptDynamicMeshBVH local_28;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_28.FWNTree,L"UGeometryScriptLibrary_MeshSpatial",
                        L"BuildBVHForMesh_InvalidInput",L"BuildBVHForMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar1);
    if (local_28.FWNTree.Object != (TFastWindingTree<UE::Geometry::FDynamicMesh3> *)0x0) {
      (*(code *)(local_28.FWNTree.Object)->Tree->MeshChangeStamp)();
    }
    return (UDynamicMesh *)0x0;
  }
  if ((param_2->Spatial).Object == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    pTVar2 = MakeShared<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>
                       ((TSharedRef<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *)
                        &local_28.FWNTree);
    local_28.Spatial.SharedReferenceCount.ReferenceController =
         (pTVar2->SharedReferenceCount).ReferenceController;
    local_28.Spatial.Object = pTVar2->Object;
    if (local_28.Spatial.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.Spatial.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.Spatial.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
           1);
      UNLOCK();
    }
    if (param_2 != &local_28) {
      (param_2->Spatial).Object = local_28.Spatial.Object;
      local_28.Spatial.Object = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_2->Spatial).SharedReferenceCount,&local_28.Spatial.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.Spatial.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.FWNTree.SharedReferenceCount.ReferenceController);
  }
  local_28.FWNTree.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)&local_res8;
  local_28.FWNTree.Object =
       (TFastWindingTree<UE::Geometry::FDynamicMesh3> *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSpatial::BuildBVHForMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_res8 = param_2;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                     &local_28.FWNTree);
  return param_1;
}

// FindNearestPointOnMesh @ 14ce6a030

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSpatial::FindNearestPointOnMesh
          (UDynamicMesh *param_1,FGeometryScriptDynamicMeshBVH *param_2,TVector<double> *param_3,
          FGeometryScriptSpatialQueryOptions *param_4,FGeometryScriptTrianglePoint *param_5,
          EGeometryScriptSearchOutcomePins *param_6,UGeometryScriptDebug *param_7)

{
  EGeometryScriptSearchOutcomePins *pEVar1;
  FText *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  UDynamicMesh *local_res8 [4];
  undefined1 local_58 [16];
  FGeometryScriptDynamicMeshBVH *local_48;
  UDynamicMesh **local_40;
  FGeometryScriptSpatialQueryOptions *local_38;
  EGeometryScriptSearchOutcomePins **local_30;
  TVector<double> *local_28;
  EGeometryScriptSearchOutcomePins *local_20;
  FGeometryScriptTrianglePoint *local_18;
  
  pEVar1 = param_6;
  *param_6 = NotFound;
  param_5->bValid = false;
  local_res8[0] = param_1;
  if (param_1 == (UDynamicMesh *)0x0) {
    pwVar4 = L"FindNearestPointOnMesh: TargetMesh is Null";
    pwVar3 = L"FindNearestPointOnMesh_InvalidInput";
  }
  else {
    local_40 = local_res8;
    local_58._8_8_ = &local_48;
    local_30 = &param_6;
    param_6._0_1_ = '\0';
    local_18 = param_5;
    local_58._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSpatial::FindNearestPointOnMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_48 = param_2;
    local_38 = param_4;
    local_28 = param_3;
    local_20 = pEVar1;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_58);
    if ((char)param_6 != '\0') {
      return local_res8[0];
    }
    pwVar4 = L"FindNearestPointOnMesh: QueryBVH is Invalid for this TargetMesh";
    pwVar3 = L"FindNearestPointOnMesh_InvalidBVH";
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_58,L"UGeometryScriptLibrary_MeshSpatial",pwVar3,pwVar4);
  UE::Geometry::AppendError(param_7,InvalidInputs,pFVar2);
  if ((ITextData *)local_58._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_58._0_8_ + 0x10))();
  }
  return local_res8[0];
}

// FindNearestRayIntersectionWithMesh @ 14ce6a100

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSpatial::FindNearestRayIntersectionWithMesh
          (UDynamicMesh *param_1,FGeometryScriptDynamicMeshBVH *param_2,TVector<double> *param_3,
          TVector<double> *param_4,FGeometryScriptSpatialQueryOptions *param_5,
          FGeometryScriptRayHitResult *param_6,EGeometryScriptSearchOutcomePins *param_7,
          UGeometryScriptDebug *param_8)

{
  EGeometryScriptSearchOutcomePins *pEVar1;
  FText *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  UDynamicMesh *local_res8 [4];
  undefined1 local_58 [16];
  FGeometryScriptDynamicMeshBVH *local_48;
  UDynamicMesh **local_40;
  FGeometryScriptSpatialQueryOptions *local_38;
  EGeometryScriptSearchOutcomePins **local_30;
  TVector<double> *local_28;
  TVector<double> *local_20;
  EGeometryScriptSearchOutcomePins *local_18;
  FGeometryScriptRayHitResult *local_10;
  
  pEVar1 = param_7;
  *param_7 = NotFound;
  param_6->bHit = false;
  local_res8[0] = param_1;
  if (param_1 == (UDynamicMesh *)0x0) {
    pwVar4 = L"FindNearestRayIntersectionWithMesh: TargetMesh is Null";
    pwVar3 = L"FindNearestRayIntersectionWithMesh_InvalidInput";
  }
  else {
    local_40 = local_res8;
    local_38 = param_5;
    local_30 = &param_7;
    local_58._8_8_ = &local_48;
    local_58._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSpatial::FindNearestRayIntersectionWithMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    param_7._0_1_ = '\0';
    local_10 = param_6;
    local_48 = param_2;
    local_28 = param_3;
    local_20 = param_4;
    local_18 = pEVar1;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_58);
    if ((char)param_7 != '\0') {
      return local_res8[0];
    }
    pwVar4 = L"FindNearestRayIntersectionWithMesh: QueryBVH is Invalid for this TargetMesh";
    pwVar3 = L"FindNearestRayIntersectionWithMesh_InvalidBVH";
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_58,L"UGeometryScriptLibrary_MeshSpatial",pwVar3,pwVar4);
  UE::Geometry::AppendError(param_8,InvalidInputs,pFVar2);
  if ((ITextData *)local_58._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_58._0_8_ + 0x10))();
  }
  return local_res8[0];
}

// GetPrivateStaticClass @ 14ce6d5f0

UClass * __cdecl UGeometryScriptLibrary_MeshSpatial::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSpatial.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSpatial",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSpatial.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_MeshSpatial,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryScriptLibrary_MeshSpatial>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSpatial>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSpatial.InnerSingleton;
}

// IsBVHValidForMesh @ 14ce6f1d0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSpatial::IsBVHValidForMesh
          (UDynamicMesh *param_1,FGeometryScriptDynamicMeshBVH *param_2,bool *param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  FGeometryScriptDynamicMeshBVH *local_28;
  bool *local_20;
  undefined1 local_18 [16];
  
  *param_3 = false;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshSpatial",
                        L"IsBVHValidForMesh_InvalidInput",L"IsBVHValidForMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  if ((param_2->Spatial).Object != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    local_18._8_8_ = &local_28;
    local_18._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSpatial::IsBVHValidForMesh'::__l8::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_28 = param_2;
    local_20 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_18);
  }
  return param_1;
}

// IsPointInsideMesh @ 14ce6f280

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSpatial::IsPointInsideMesh
          (UDynamicMesh *param_1,FGeometryScriptDynamicMeshBVH *param_2,TVector<double> *param_3,
          FGeometryScriptSpatialQueryOptions *param_4,bool *param_5,
          EGeometryScriptContainmentOutcomePins *param_6,UGeometryScriptDebug *param_7)

{
  EGeometryScriptContainmentOutcomePins *pEVar1;
  FText *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  UDynamicMesh *local_res8 [4];
  undefined1 local_58 [16];
  FGeometryScriptDynamicMeshBVH *local_48;
  UDynamicMesh **local_40;
  FGeometryScriptSpatialQueryOptions *local_38;
  EGeometryScriptContainmentOutcomePins **local_30;
  bool *local_28;
  TVector<double> *local_20;
  EGeometryScriptContainmentOutcomePins *local_18;
  
  pEVar1 = param_6;
  *param_6 = Outside;
  *param_5 = false;
  local_res8[0] = param_1;
  if (param_1 == (UDynamicMesh *)0x0) {
    pwVar4 = L"IsPointInsideMesh: TargetMesh is Null";
    pwVar3 = L"IsPointInsideMesh_InvalidInput";
  }
  else {
    local_40 = local_res8;
    local_58._8_8_ = &local_48;
    local_30 = &param_6;
    param_6._0_1_ = '\0';
    local_28 = param_5;
    local_58._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSpatial::IsPointInsideMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_48 = param_2;
    local_38 = param_4;
    local_20 = param_3;
    local_18 = pEVar1;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_58);
    if ((char)param_6 != '\0') {
      return local_res8[0];
    }
    pwVar4 = L"IsPointInsideMesh: QueryBVH is Invalid for this TargetMesh";
    pwVar3 = L"IsPointInsideMesh_InvalidBVH";
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_58,L"UGeometryScriptLibrary_MeshSpatial",pwVar3,pwVar4);
  UE::Geometry::AppendError(param_7,InvalidInputs,pFVar2);
  if ((ITextData *)local_58._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_58._0_8_ + 0x10))();
  }
  return local_res8[0];
}

// RebuildBVHForMesh @ 14ce70bc0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSpatial::RebuildBVHForMesh
          (UDynamicMesh *param_1,FGeometryScriptDynamicMeshBVH *param_2,bool param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  TSharedRef<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *pTVar2;
  undefined1 local_res18;
  FGeometryScriptDynamicMeshBVH local_38;
  TSharedRef<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> local_18;
  
  local_res18 = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_18,L"UGeometryScriptLibrary_MeshSpatial",
                        L"RebuildBVHForMesh_InvalidInput",L"RebuildBVHForMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if (local_18.Object != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
      (**(code **)((local_18.Object)->_padding_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  if ((param_2->Spatial).Object == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    pTVar2 = MakeShared<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>(&local_18);
    local_38.Spatial.SharedReferenceCount.ReferenceController =
         (pTVar2->SharedReferenceCount).ReferenceController;
    local_38.Spatial.Object = pTVar2->Object;
    if (local_38.Spatial.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.Spatial.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.Spatial.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
           1);
      UNLOCK();
    }
    if (param_2 != &local_38) {
      (param_2->Spatial).Object = local_38.Spatial.Object;
      local_38.Spatial.Object = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_2->Spatial).SharedReferenceCount,&local_38.Spatial.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.Spatial.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  local_38.FWNTree.Object = (TFastWindingTree<UE::Geometry::FDynamicMesh3> *)&local_res18;
  local_18.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)&local_38.FWNTree;
  local_18.Object =
       (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSpatial::RebuildBVHForMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_38.FWNTree.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)param_2
  ;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
  return param_1;
}

// ResetBVH @ 14ce71410

void __cdecl UGeometryScriptLibrary_MeshSpatial::ResetBVH(FGeometryScriptDynamicMeshBVH *param_1)

{
  FGeometryScriptDynamicMeshBVH local_28;
  
  local_28.Spatial.Object = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  local_28.Spatial.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 != &local_28) {
    (param_1->Spatial).Object = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->Spatial).SharedReferenceCount,&local_28.Spatial.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Spatial.SharedReferenceCount.ReferenceController);
  local_28.FWNTree.Object = (TFastWindingTree<UE::Geometry::FDynamicMesh3> *)0x0;
  local_28.FWNTree.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&param_1->FWNTree != &local_28.FWNTree) {
    (param_1->FWNTree).Object = (TFastWindingTree<UE::Geometry::FDynamicMesh3> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->FWNTree).SharedReferenceCount,&local_28.FWNTree.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.FWNTree.SharedReferenceCount.ReferenceController);
  return;
}

// SelectMeshElementsInBoxWithBVH @ 14ce72f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH
          (UDynamicMesh *param_1,FGeometryScriptDynamicMeshBVH *param_2,TBox<double> *param_3,
          FGeometryScriptSpatialQueryOptions *param_4,FGeometryScriptMeshSelection *param_5,
          EGeometryScriptMeshSelectionType param_6,int param_7,UGeometryScriptDebug *param_8)

{
  ulonglong uVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  UDynamicMesh *pUVar4;
  int iVar5;
  longlong *plVar6;
  float fVar7;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  UDynamicMesh *local_170;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double dStack_138;
  double local_130;
  FGeometryScriptDynamicMeshBVH *local_128;
  UDynamicMesh **local_120;
  FGeometryScriptSpatialQueryOptions *local_118;
  EGeometryScriptMeshSelectionType *local_110;
  undefined1 *local_108;
  undefined8 *local_100;
  double *local_f8;
  undefined1 *local_f0;
  int *local_e8;
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  undefined8 local_c8;
  TBitArray<FDefaultBitArrayAllocator> local_c0;
  undefined8 uStack_a0;
  ForElementType<FSetElementId> local_90;
  int local_88;
  double local_78 [2];
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  undefined1 local_38;
  ulonglong local_28;
  
  pUVar2 = param_8;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  iVar5 = 3;
  if (param_7 < 3) {
    iVar5 = param_7;
  }
  param_7 = 1;
  if (1 < iVar5) {
    param_7 = iVar5;
  }
  local_170 = param_1;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_168,L"UGeometryScriptLibrary_MeshSpatial",
                        L"SelectMeshElementsInBoxWithBVH_InvalidInput",
                        L"SelectMeshElementsInBoxWithBVH: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    pUVar4 = local_170;
    if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
      pUVar4 = local_170;
    }
  }
  else {
    if (param_3->IsValid == '\0') {
      local_158 = ___xmm_7fefffffffffffff7fefffffffffffff;
      dStack_150 = _UNK_150a9e648;
      dStack_138 = ___xmm_ffefffffffffffffffefffffffffffff;
      local_130 = _UNK_1508ffb58;
      local_148 = ___xmm_ffefffffffffffff7fefffffffffffff;
      dStack_140 = _UNK_150a9e6d8;
    }
    else {
      local_158 = (param_3->Min).field0_0x0._s_0.X;
      dStack_150 = (param_3->Min).field0_0x0._s_0.Y;
      local_148 = (param_3->Min).field0_0x0._s_0.Z;
      dStack_140 = (param_3->Max).field0_0x0._s_0.X;
      dStack_138 = (param_3->Max).field0_0x0._s_0.Y;
      local_130 = (param_3->Max).field0_0x0._s_0.Z;
    }
    local_68 = 0;
    local_40 = (longlong *)0x0;
    local_38 = 0;
    fVar7 = param_4->MaxDistance;
    if (param_4->MaxDistance == 0.0) {
      fVar7 = __real_7f7fffff;
    }
    local_78[0] = (double)fVar7;
    local_120 = &local_170;
    local_110 = &param_6;
    local_d8._0_4_ = Face;
    local_108 = local_d8;
    local_d8._4_4_ = Triangle;
    local_100 = &local_158;
    local_f8 = local_78;
    local_f0 = local_178;
    local_e8 = &param_7;
    local_168._8_8_ = &local_128;
    local_168._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH'::__l2::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_d0.Data = (FScriptContainerElement *)0x0;
    local_c8 = 0;
    local_c0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_c0._24_8_ = ___xmm_00000000ffffffff0000008000000000;
    uStack_a0 = _UNK_150631d98;
    local_90 = (ForElementType<FSetElementId>)0x0;
    local_88 = 0;
    local_128 = param_2;
    local_118 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_168)
    ;
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_168,L"UGeometryScriptLibrary_MeshSpatial",
                        L"IsPointInsideMesh_InvalidBVH",
                        L"IsPointInsideMesh: QueryBVH is Invalid for this TargetMesh");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
    }
    FGeometryScriptMeshSelection::SetSelection(param_5,(FGeometrySelection *)local_d8);
    pUVar4 = local_170;
    local_88 = 0;
    if (local_90 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_90);
    }
    uVar1 = local_c8 >> 0x20;
    local_c8 = local_c8 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_d0,0,(int *)((longlong)&local_c8 + 4));
    }
    iVar5 = local_c0.MaxBits;
    local_c0._24_8_ = (ulonglong)(uint)local_c0.MaxBits << 0x20;
    uStack_a0 = 0xffffffff;
    if (0x80 < (uint)iVar5) {
      local_c0.NumBits = 0;
      local_c0.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c0,0);
    }
    if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_c0.AllocatorInstance.SecondaryData);
    }
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
    if (local_68 != 0) {
      plVar6 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar6 = local_40;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  return pUVar4;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshSpatial @ 14ce751c0

void __cdecl
UGeometryScriptLibrary_MeshSpatial::StaticRegisterNativesUGeometryScriptLibrary_MeshSpatial(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBuildBVHForMesh @ 14ce89240

void __cdecl
UGeometryScriptLibrary_MeshSpatial::execBuildBVHForMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  TSharedRef<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *pTVar4;
  UDynamicMesh *this;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **ppTVar5;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **local_res20;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_68;
  FSharedReferencer<1> local_60;
  TSharedRef<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> local_58;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  ppTVar5 = &local_48;
  if ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)param_2->MostRecentPropertyAddress !=
      (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)0x0) {
    ppTVar5 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)param_2->MostRecentPropertyAddress;
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
  this = local_res18;
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_58,L"UGeometryScriptLibrary_MeshSpatial",
                        L"BuildBVHForMesh_InvalidInput",L"BuildBVHForMesh: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    this = (UDynamicMesh *)0x0;
    if (local_58.Object != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
      (**(code **)((local_58.Object)->_padding_ + 0x10))();
    }
  }
  else {
    if (*ppTVar5 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar4 = MakeShared<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>(&local_58);
      local_60.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
      local_68 = pTVar4->Object;
      if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_60.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (ppTVar5 != &local_68) {
        *ppTVar5 = local_68;
        local_68 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(ppTVar5 + 1),&local_60);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)&local_res20;
    local_58.Object =
         (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSpatial::BuildBVHForMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_res20 = ppTVar5;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_58);
  }
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// execFindNearestPointOnMesh @ 14ce8f370

void __cdecl
UGeometryScriptLibrary_MeshSpatial::execFindNearestPointOnMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  UGeometryScriptDebug *pUVar3;
  FText *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar local_res10 [8];
  undefined8 *local_res18;
  char local_res20 [8];
  undefined4 local_158;
  uint uStack_154;
  undefined4 local_150;
  UGeometryScriptDebug *local_148;
  UDynamicMesh *local_140;
  undefined1 local_138 [16];
  UDynamicMesh *local_128 [2];
  undefined8 local_118;
  undefined4 local_110;
  uchar local_108 [8];
  TReferenceControllerBase<1> *pTStack_100;
  undefined8 local_f8;
  TReferenceControllerBase<1> *pTStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  uchar local_d0 [4];
  undefined4 local_cc;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  uchar *local_98;
  UDynamicMesh **local_90;
  undefined8 *local_88;
  char *local_80;
  undefined8 *local_78;
  uchar *local_70;
  uchar *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_140 = (UDynamicMesh *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_140,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_140);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_108[0] = '\0';
  local_108[1] = '\0';
  local_108[2] = '\0';
  local_108[3] = '\0';
  local_108[4] = '\0';
  local_108[5] = '\0';
  local_108[6] = '\0';
  local_108[7] = '\0';
  pTStack_100 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_f8 = 0;
  pTStack_f0 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  puVar8 = local_108;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_158 = 0;
  uStack_154 = uStack_154 & 0xffffff00;
  local_150 = 0x3f000000;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_d0[0] = '\0';
  local_cc = 0xffffffff;
  local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_a0 = local_b8;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d0);
  }
  puVar9 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar7 = local_d0;
  if (puVar9 != (uchar *)0x0) {
    puVar7 = puVar9;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_148 = (UGeometryScriptDebug *)0x0;
  puVar9 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  pUVar3 = local_148;
  local_118 = CONCAT44(uStack_154,local_158);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_110 = local_150;
  local_48 = local_d8;
  local_128[0] = local_140;
  *puVar9 = '\x01';
  *puVar7 = '\0';
  local_58 = local_e8;
  uStack_50 = uStack_e0;
  if (local_140 == (UDynamicMesh *)0x0) {
    pwVar6 = L"FindNearestPointOnMesh: TargetMesh is Null";
    pwVar5 = L"FindNearestPointOnMesh_InvalidInput";
  }
  else {
    local_90 = local_128;
    local_res20[0] = '\0';
    local_88 = &local_118;
    local_80 = local_res20;
    local_78 = &local_58;
    local_138._8_8_ = &local_98;
    local_138._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSpatial::FindNearestPointOnMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_98 = puVar8;
    local_70 = puVar9;
    local_68 = puVar7;
    UDynamicMesh::ProcessMesh
              (local_140,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_138);
    if (local_res20[0] != '\0') goto LAB_14ce8f695;
    pwVar6 = L"FindNearestPointOnMesh: QueryBVH is Invalid for this TargetMesh";
    pwVar5 = L"FindNearestPointOnMesh_InvalidBVH";
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_138,L"UGeometryScriptLibrary_MeshSpatial",pwVar5,pwVar6);
  UE::Geometry::AppendError(pUVar3,InvalidInputs,pFVar4);
  if ((ITextData *)local_138._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_138._0_8_ + 0x10))();
  }
LAB_14ce8f695:
  *local_res18 = local_128[0];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_100);
  return;
}

// execFindNearestRayIntersectionWithMesh @ 14ce8f6e0

void __cdecl
UGeometryScriptLibrary_MeshSpatial::execFindNearestRayIntersectionWithMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  UGeometryScriptDebug *pUVar3;
  FText *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar local_res10 [8];
  undefined8 *local_res18;
  char local_res20 [8];
  undefined4 local_198;
  uint uStack_194;
  undefined4 local_190;
  UGeometryScriptDebug *local_188;
  UDynamicMesh *local_180;
  undefined1 local_178 [16];
  UDynamicMesh *local_168 [2];
  undefined8 local_158;
  undefined4 local_150;
  uchar local_148 [8];
  TReferenceControllerBase<1> *pTStack_140;
  undefined8 local_138;
  TReferenceControllerBase<1> *pTStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  uchar local_f8 [4];
  undefined4 local_f4;
  undefined4 local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  uchar *local_b8;
  UDynamicMesh **local_b0;
  undefined8 *local_a8;
  char *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  uchar *local_88;
  uchar *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_180 = (UDynamicMesh *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_148[0] = '\0';
  local_148[1] = '\0';
  local_148[2] = '\0';
  local_148[3] = '\0';
  local_148[4] = '\0';
  local_148[5] = '\0';
  local_148[6] = '\0';
  local_148[7] = '\0';
  pTStack_140 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_138 = 0;
  pTStack_130 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  puVar8 = local_148;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_198 = 0;
  uStack_194 = uStack_194 & 0xffffff00;
  local_190 = 0x3f000000;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  local_f8[0] = '\0';
  local_f4 = 0;
  local_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_f0 = 0xffffffff;
  local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  puVar9 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar7 = local_f8;
  if (puVar9 != (uchar *)0x0) {
    puVar7 = puVar9;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_188 = (UGeometryScriptDebug *)0x0;
  puVar9 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  pUVar3 = local_188;
  local_158 = CONCAT44(uStack_194,local_198);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = local_118;
  local_150 = local_190;
  local_68 = local_100;
  local_168[0] = local_180;
  local_58 = local_128;
  uStack_50 = uStack_120;
  *puVar9 = '\x01';
  *puVar7 = '\0';
  local_78 = local_110;
  uStack_70 = uStack_108;
  if (local_180 == (UDynamicMesh *)0x0) {
    pwVar6 = L"FindNearestRayIntersectionWithMesh: TargetMesh is Null";
    pwVar5 = L"FindNearestRayIntersectionWithMesh_InvalidInput";
  }
  else {
    local_b0 = local_168;
    local_res20[0] = '\0';
    local_a8 = &local_158;
    local_a0 = local_res20;
    local_98 = &local_78;
    local_90 = &local_58;
    local_178._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSpatial::FindNearestRayIntersectionWithMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_178._8_8_ = &local_b8;
    local_b8 = puVar8;
    local_88 = puVar9;
    local_80 = puVar7;
    UDynamicMesh::ProcessMesh
              (local_180,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_178);
    if (local_res20[0] != '\0') goto LAB_14ce8fa55;
    pwVar6 = L"FindNearestRayIntersectionWithMesh: QueryBVH is Invalid for this TargetMesh";
    pwVar5 = L"FindNearestRayIntersectionWithMesh_InvalidBVH";
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_178,L"UGeometryScriptLibrary_MeshSpatial",pwVar5,pwVar6);
  UE::Geometry::AppendError(pUVar3,InvalidInputs,pFVar4);
  if ((ITextData *)local_178._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_178._0_8_ + 0x10))();
  }
LAB_14ce8fa55:
  *local_res18 = local_168[0];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_130);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_140);
  return;
}

// execIsBVHValidForMesh @ 14ce982e0

void __cdecl
UGeometryScriptLibrary_MeshSpatial::execIsBVHValidForMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  FProperty *pFVar2;
  UGeometryScriptDebug *pUVar3;
  FText *pFVar4;
  uchar *puVar5;
  UDynamicMesh *this;
  longlong *plVar6;
  uchar local_res10 [8];
  UGeometryScriptDebug *local_res18;
  UDynamicMesh *local_res20;
  longlong *local_78;
  uchar *local_70;
  undefined1 local_68 [16];
  longlong local_58;
  TReferenceControllerBase<1> *pTStack_50;
  undefined8 local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_58 = 0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_48 = 0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  plVar1 = (longlong *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  plVar6 = &local_58;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
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
  local_res18 = (UGeometryScriptDebug *)0x0;
  puVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  this = local_res20;
  pUVar3 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar5 = '\0';
  if (this == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_68,L"UGeometryScriptLibrary_MeshSpatial",
                        L"IsBVHValidForMesh_InvalidInput",L"IsBVHValidForMesh: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar3,InvalidInputs,pFVar4);
    this = (UDynamicMesh *)0x0;
    if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
    }
  }
  else if (*plVar6 != 0) {
    local_68._8_8_ = &local_78;
    local_68._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSpatial::IsBVHValidForMesh'::__l8::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_78 = plVar6;
    local_70 = puVar5;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_68);
  }
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  return;
}

// execIsPointInsideMesh @ 14ce984e0

void __cdecl
UGeometryScriptLibrary_MeshSpatial::execIsPointInsideMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  UGeometryScriptDebug *pUVar3;
  FText *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar local_res10 [8];
  undefined8 *local_res18;
  uchar local_res20 [8];
  char local_118 [8];
  undefined4 local_110;
  uint uStack_10c;
  undefined4 local_108;
  UGeometryScriptDebug *local_100;
  UDynamicMesh *local_f8;
  undefined1 local_f0 [16];
  UDynamicMesh *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  uchar local_c8 [8];
  TReferenceControllerBase<1> *pTStack_c0;
  undefined8 local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uchar *local_90;
  UDynamicMesh **local_88;
  undefined8 *local_80;
  char *local_78;
  uchar *local_70;
  undefined8 *local_68;
  uchar *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_f8 = (UDynamicMesh *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_c8[0] = '\0';
  local_c8[1] = '\0';
  local_c8[2] = '\0';
  local_c8[3] = '\0';
  local_c8[4] = '\0';
  local_c8[5] = '\0';
  local_c8[6] = '\0';
  local_c8[7] = '\0';
  pTStack_c0 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_b8 = 0;
  pTStack_b0 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  puVar8 = local_c8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_110 = 0;
  uStack_10c = uStack_10c & 0xffffff00;
  local_108 = 0x3f000000;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar9 = param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar7 = local_res10;
  if (puVar9 != (uchar *)0x0) {
    puVar7 = puVar9;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_100 = (UGeometryScriptDebug *)0x0;
  puVar9 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  pUVar3 = local_100;
  local_d8 = CONCAT44(uStack_10c,local_110);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d0 = local_108;
  local_48 = local_98;
  local_e0 = local_f8;
  *puVar9 = '\x01';
  *puVar7 = '\0';
  local_58 = local_a8;
  uStack_50 = uStack_a0;
  if (local_f8 == (UDynamicMesh *)0x0) {
    pwVar6 = L"IsPointInsideMesh: TargetMesh is Null";
    pwVar5 = L"IsPointInsideMesh_InvalidInput";
  }
  else {
    local_88 = &local_e0;
    local_118[0] = '\0';
    local_80 = &local_d8;
    local_78 = local_118;
    local_68 = &local_58;
    local_f0._8_8_ = &local_90;
    local_f0._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSpatial::IsPointInsideMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_90 = puVar8;
    local_70 = puVar7;
    local_60 = puVar9;
    UDynamicMesh::ProcessMesh
              (local_f8,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_f0)
    ;
    if (local_118[0] != '\0') goto LAB_14ce987c4;
    pwVar6 = L"IsPointInsideMesh: QueryBVH is Invalid for this TargetMesh";
    pwVar5 = L"IsPointInsideMesh_InvalidBVH";
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_f0,L"UGeometryScriptLibrary_MeshSpatial",pwVar5,pwVar6);
  UE::Geometry::AppendError(pUVar3,InvalidInputs,pFVar4);
  if ((ITextData *)local_f0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_f0._0_8_ + 0x10))();
  }
LAB_14ce987c4:
  *local_res18 = local_e0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c0);
  return;
}

// execRebuildBVHForMesh @ 14ce991d0

void __cdecl
UGeometryScriptLibrary_MeshSpatial::execRebuildBVHForMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  TSharedRef<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *pTVar4;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **ppTVar5;
  UDynamicMesh *this;
  bool bVar6;
  undefined1 local_res10 [8];
  int local_res18 [2];
  UGeometryScriptDebug *local_res20;
  UDynamicMesh *local_98;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_90;
  FSharedReferencer<1> local_88;
  undefined1 local_80 [16];
  TSharedRef<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> local_70;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  undefined8 local_50;
  TReferenceControllerBase<1> *pTStack_48;
  
  local_98 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_60 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  pTStack_58 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_50 = 0;
  pTStack_48 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res18[0] = 0;
  ppTVar5 = &local_60;
  if ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)param_2->MostRecentPropertyAddress !=
      (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)0x0) {
    ppTVar5 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar6 = local_res18[0] != 0;
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
  this = local_98;
  pUVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10[0] = bVar6;
  if (local_98 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_70,L"UGeometryScriptLibrary_MeshSpatial",
                        L"RebuildBVHForMesh_InvalidInput",L"RebuildBVHForMesh: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    this = (UDynamicMesh *)0x0;
    if (local_70.Object != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
      (**(code **)((local_70.Object)->_padding_ + 0x10))();
    }
  }
  else {
    if (*ppTVar5 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar4 = MakeShared<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>(&local_70);
      local_88.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
      local_90 = pTVar4->Object;
      if (local_88.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_88.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (ppTVar5 != &local_90) {
        *ppTVar5 = local_90;
        local_90 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(ppTVar5 + 1),&local_88);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.SharedReferenceCount.ReferenceController);
    }
    local_80._0_8_ = local_res10;
    local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_80;
    local_70.Object =
         (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSpatial::RebuildBVHForMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_80._8_8_ = ppTVar5;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_70);
  }
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_58);
  return;
}

// execResetBVH @ 14ce9a460

void __cdecl
UGeometryScriptLibrary_MeshSpatial::execResetBVH(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar local_48 [8];
  FSharedReferencer<1> FStack_40;
  uchar local_38 [8];
  FSharedReferencer<1> FStack_30;
  uchar local_28 [8];
  TReferenceControllerBase<1> *pTStack_20;
  undefined8 local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_18 = 0;
  pTStack_10 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  puVar2 = param_2->Code;
  if (puVar3 == (uchar *)0x0) {
    puVar3 = local_28;
    param_2->Code = puVar2 + (puVar2 != (uchar *)0x0);
  }
  else {
    local_48[0] = '\0';
    local_48[1] = '\0';
    local_48[2] = '\0';
    local_48[3] = '\0';
    local_48[4] = '\0';
    local_48[5] = '\0';
    local_48[6] = '\0';
    local_48[7] = '\0';
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_2->Code = puVar2 + (puVar2 != (uchar *)0x0);
    if (puVar3 == local_48) goto LAB_14ce9a522;
  }
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  puVar3[0] = '\0';
  puVar3[1] = '\0';
  puVar3[2] = '\0';
  puVar3[3] = '\0';
  puVar3[4] = '\0';
  puVar3[5] = '\0';
  puVar3[6] = '\0';
  puVar3[7] = '\0';
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(puVar3 + 8),&FStack_40);
LAB_14ce9a522:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  puVar2 = puVar3 + 0x10;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar2 != local_38) {
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(puVar3 + 0x18),&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return;
}

// execSelectMeshElementsInBoxWithBVH @ 14ce9c660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshSpatial::execSelectMeshElementsInBoxWithBVH
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FGeometryScriptMeshSelection *pFVar3;
  FGeometryScriptDynamicMeshBVH *pFVar4;
  undefined1 auStackY_158 [32];
  EGeometryScriptMeshSelectionType local_118 [4];
  int local_114;
  float local_110;
  uint uStack_10c;
  float local_108;
  UGeometryScriptDebug *local_100;
  UDynamicMesh *local_f8;
  FGeometryScriptMeshSelection local_f0;
  FGeometryScriptSpatialQueryOptions local_d8;
  FGeometryScriptDynamicMeshBVH local_c8;
  TVector<double>_u_0 local_a8;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined7 uStack_37;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_f8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_c8.Spatial.Object = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  local_c8.Spatial.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_c8.FWNTree.Object = (TFastWindingTree<UE::Geometry::FDynamicMesh3> *)0x0;
  local_c8.FWNTree.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_38 = 0;
  pFVar4 = &local_c8;
  if ((FGeometryScriptDynamicMeshBVH *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptDynamicMeshBVH *)0x0) {
    pFVar4 = (FGeometryScriptDynamicMeshBVH *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_110 = 0.0;
  uStack_10c = uStack_10c & 0xffffff00;
  local_108 = 0.5;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_f0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_118[0] = Vertices;
  pFVar3 = &local_f0;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    pFVar3 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  local_114 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_114,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_114);
  }
  local_100 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_d8._4_4_ = uStack_10c;
  local_d8.MaxDistance = local_110;
  local_a8._s_0.Z = local_58;
  uStack_90 = uStack_50;
  local_78 = CONCAT71(uStack_37,local_38);
  local_d8.WindingIsoThreshold = local_108;
  local_a8._s_0.X = local_68;
  local_a8._s_0.Y = dStack_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88 = local_48;
  uStack_80 = uStack_40;
  pUVar2 = SelectMeshElementsInBoxWithBVH
                     (local_f8,pFVar4,(TBox<double> *)&local_a8._s_0,&local_d8,pFVar3,local_118[0],
                      local_114,local_100);
  *(UDynamicMesh **)param_3 = pUVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.FWNTree.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.Spatial.SharedReferenceCount.ReferenceController);
  return;
}

