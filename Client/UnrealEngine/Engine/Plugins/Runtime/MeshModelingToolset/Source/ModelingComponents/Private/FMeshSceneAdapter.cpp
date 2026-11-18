// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 38

// operator() @ 14cad5130

void __thiscall
`UE::Geometry::FMeshSceneAdapter::Build'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FSpatialWrapperInfo *pFVar3;
  IMeshSpatialWrapper *pIVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  TUniquePtr<UE::Geometry::IMeshSpatialWrapper,TDefaultDelete<UE::Geometry::IMeshSpatialWrapper>_>
  TVar8;
  TUniquePtr<UE::Geometry::IMeshSpatialWrapper,TDefaultDelete<UE::Geometry::IMeshSpatialWrapper>_>
  *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  
  if (param_1->Object == (FSpatialWrapperInfo *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar3 = param_1->Object;
  if (pFVar3 == (FSpatialWrapperInfo *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TVar8 = UE::Geometry::SpatialWrapperFactory
                    ((FMeshTypeContainer *)&local_res10,
                     (TArray<UE::Geometry::FActorChildMesh_*,TSizedDefaultAllocator<32>_> *)
                     param_1->Object,(FMeshSceneAdapterBuildOptions *)&pFVar3->ParentMeshes);
  if (param_1->Object == (FSpatialWrapperInfo *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar9 = &param_1->Object->SpatialWrapper;
  if ((IMeshSpatialWrapper *)pTVar9 != TVar8.Ptr) {
    pIVar4 = pTVar9->Ptr;
    pTVar9->Ptr = (IMeshSpatialWrapper *)(TVar8.Ptr)->_padding_;
    (TVar8.Ptr)->_padding_ = 0;
    if (pIVar4 != (IMeshSpatialWrapper *)0x0) {
      (**(code **)pIVar4->_padding_)(pIVar4,1);
    }
  }
  if (local_res10 != (undefined8 *)0x0) {
    (**(code **)*local_res10)(local_res10,1);
  }
  if (param_1->Object == (FSpatialWrapperInfo *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar3 = param_1->Object;
  pFVar10 = (pFVar3->ParentMeshes).AllocatorInstance.Data;
  iVar2 = (pFVar3->ParentMeshes).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar3->ParentMeshes).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FActorChildMesh_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    lVar5 = *(longlong *)pFVar10;
    if (param_1->Object == (FSpatialWrapperInfo *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar10 = pFVar10 + 8;
    *(IMeshSpatialWrapper **)(lVar5 + 0xd8) = (param_1->Object->SpatialWrapper).Ptr;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 14cad52e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::Geometry::FMeshSceneAdapter::BuildSpatialEvaluationCache'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FSpatialWrapperInfo *pFVar3;
  IMeshSpatialWrapper *pIVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  if (param_1->Object == (FSpatialWrapperInfo *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = param_1->Object;
  pFVar7 = (pFVar3->ParentMeshes).AllocatorInstance.Data;
  iVar2 = (pFVar3->ParentMeshes).ArrayNum;
  pIVar4 = (pFVar3->SpatialWrapper).Ptr;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar3->ParentMeshes).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FActorChildMesh_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (pFVar7 == pFVar1) break;
    if (*(IMeshSpatialWrapper **)(*(longlong *)pFVar7 + 0xd8) != pIVar4) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8012027019833379168>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                         ,0x960,"MeshInstance->MeshSpatial == SpatialWrapper");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (2 < (byte)LogGeometry._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
    }
    pFVar7 = pFVar7 + 8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 14cad53e0

void __thiscall
`UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSpatialWrapperInfo *local_18 [2];
  
  local_18[0] = param_1->Object;
  pFVar2 = *(ForAnyElementType **)this;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(FSpatialWrapperInfo **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 14cad5970

TAxisAlignedBox3<double> * __thiscall
`UE::Geometry::FMeshSceneAdapter::FindNearestRayIntersection'::__l2::<lambda_1>::operator()
          (void *this,TAxisAlignedBox3<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  TAxisAlignedBox3<double> *pTVar11;
  longlong lVar12;
  
  lVar3 = *(longlong *)this;
  lVar12 = (longlong)param_1;
  uVar10 = 0;
  if (param_1 < *(int *)(lVar3 + 0x88)) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TAxisAlignedBox3<double> *)(*pcVar4)();
      return pTVar11;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x80);
  pdVar1 = (double *)(lVar3 + 0x18 + lVar12 * 0x48);
  dVar5 = pdVar1[1];
  pdVar2 = (double *)(lVar3 + 0x28 + lVar12 * 0x48);
  dVar6 = *pdVar2;
  dVar7 = pdVar2[1];
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = *pdVar1;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar5;
  pdVar1 = (double *)(lVar3 + 0x38 + lVar12 * 0x48);
  dVar5 = *pdVar1;
  dVar8 = pdVar1[1];
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar6;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar7;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar8;
  return __return_storage_ptr__;
}

// operator() @ 14cad6040

void __thiscall
`UE::Geometry::FMeshSceneAdapter::GenerateBaseClosingMesh'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong lVar4;
  ForAnyElementType *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  void **local_res18;
  void *local_c8;
  undefined8 local_c0;
  TConvexHull2<double> local_b8;
  undefined8 local_a0;
  void **local_98;
  code *local_90;
  undefined8 *local_88;
  void *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  code *local_68;
  undefined1 *local_60;
  code *local_58;
  undefined8 **local_50;
  void *local_48;
  undefined8 uStack_40;
  
  plVar3 = *(longlong **)this;
  uVar14 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar14 = (uint)~param_1 >> 0x1f;
  }
  if (uVar14 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar4 = *(longlong *)(*plVar3 + (longlong)param_1 * 8);
  local_c8 = (void *)0x0;
  local_c0 = 0;
  plVar3 = *(longlong **)(lVar4 + 0xd8);
  local_a0 = *(undefined8 *)((longlong)this + 8);
  local_98 = &local_c8;
  local_88 = &local_a0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::FMeshSceneAdapter::GenerateBaseClosingMesh'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&>
             ::Call;
  (**(code **)(*plVar3 + 0x38))(plVar3,&local_90,lVar4 + 0x20);
  if (0 < (int)local_c0) {
    local_78 = local_c8;
    local_60 = local_res8;
    iStack_70 = (int)local_c0;
    uStack_40 = CONCAT44(uStack_6c,(int)local_c0);
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TConvexHull2<double>::Solve'::__l2::<lambda_2>,bool,int>
               ::Call;
    local_res18 = &local_48;
    local_50 = &local_res18;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TConvexHull2<double>::Solve'::__l2::<lambda_1>,UE::Math::TVector2<double>,int>
               ::Call;
    local_b8.Dimension = 0;
    local_b8.NumUniquePoints = 0;
    local_b8.Hull.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Hull.ArrayNum = 0;
    local_b8.Hull.ArrayMax = 0;
    local_48 = local_c8;
    bVar10 = UE::Geometry::TConvexHull2<double>::Solve
                       (&local_b8,(int)local_c0,
                        (TFunctionRef<UE::Math::TVector2<double>___cdecl(int)> *)&local_58,
                        (TFunctionRef<bool___cdecl(int)> *)&local_68);
    if (bVar10) {
      EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
      if (local_b8.Dimension != 2) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_2612336754539102086>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\CompGeom\\ConvexHull2.h"
                            ,0x7a,"IsSolutionAvailable()");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar9 = local_b8.Hull.ArrayNum;
      uVar13 = (ulonglong)local_b8.Hull.ArrayNum;
      pFVar2 = local_b8.Hull.AllocatorInstance.Data + uVar13 * 4;
      FVar15.Data = local_b8.Hull.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar13 != iVar9) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar15.Data == pFVar2) break;
        uVar14 = *(uint *)FVar15.Data;
        pFVar5 = *(ForAnyElementType **)((longlong)this + 0x18);
        uVar11 = 0;
        if ((int)uVar14 < (int)local_c0) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        pFVar16 = (FScriptContainerElement *)((longlong)(int)uVar14 * 0x10 + (longlong)local_c8);
        if ((pFVar5->Data <= pFVar16) &&
           (pFVar16 < pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 0x10)) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar12 = *(int *)&pFVar5[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,pFVar5,piVar1);
        }
        *(int *)&pFVar5[1].Data = iVar12 + 1;
        uVar8 = *(undefined8 *)(pFVar16 + 8);
        pFVar6 = pFVar5->Data;
        FVar15.Data = FVar15.Data + 4;
        *(undefined8 *)(pFVar6 + (longlong)iVar12 * 0x10) = *(undefined8 *)pFVar16;
        *(undefined8 *)(pFVar6 + (longlong)iVar12 * 0x10 + 8) = uVar8;
        uVar13 = local_b8.Hull._8_8_ & 0xffffffff;
      }
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
    }
    if (local_b8.Hull.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Hull.AllocatorInstance.Data);
    }
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}

// operator() @ 14cad64d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FMeshSceneAdapter::ParallelMeshVertexEnumeration'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  longlong local_120;
  char local_118 [8];
  int local_110 [2];
  int local_108 [2];
  undefined8 local_100;
  undefined8 local_f8;
  code *local_f0;
  undefined1 **local_e8;
  char *local_e0;
  undefined8 local_d8;
  int *local_d0;
  undefined8 *local_c8;
  TTransformSequence3<double> local_c0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_148;
  lVar3 = *(longlong *)this;
  iVar2 = *(int *)(lVar3 + 0x88);
  uVar6 = 0;
  if (param_1 < iVar2) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  local_110[0] = param_1;
  if (uVar6 == 0) {
    local_128 = (undefined8 *)(longlong)param_1;
    local_120 = (longlong)iVar2;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x80) + (longlong)param_1 * 0x48);
  local_100 = puVar1[1];
  local_f8 = *(undefined8 *)*puVar1;
  local_108[0] = local_110[0];
  local_128 = puVar1 + 3;
  local_118[0] = (*(code *)**(undefined8 **)((longlong)this + 8))
                           ((*(undefined8 **)((longlong)this + 8))[1],local_108,&local_f8,&local_100
                           );
  if (local_118[0] != '\0') {
    UE::Geometry::TTransformSequence3<double>::TTransformSequence3<double>
              (&local_c0,(TTransformSequence3<double> *)(puVar1[1] + 0x20));
    local_e0 = local_118;
    local_d8 = *(undefined8 *)((longlong)this + 0x10);
    local_d0 = local_110;
    local_e8 = &local_e0;
    local_f0 = UE::Core::Private::Function::
               TFunctionRefCaller<``UE::Geometry::FMeshSceneAdapter::ParallelMeshVertexEnumeration'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&>
               ::Call;
    local_c8 = puVar1;
    (**(code **)(*(longlong *)puVar1[2] + 0x38))((longlong *)puVar1[2],&local_f0,&local_c0);
    if (local_c0.Transforms.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
      FMemory::Free((void *)local_c0.Transforms.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// operator() @ 14cad6d10

void __thiscall
`UE::Geometry::FMeshSceneAdapter::UpdateActorBounds'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong local_res8;
  code *local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [48];
  
  lVar2 = *(longlong *)this;
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar2 + 0x10)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar2 = *(longlong *)(lVar2 + 8);
  local_res8 = lVar2 + lVar8 * 8;
  plVar3 = *(longlong **)(*(longlong *)(lVar2 + lVar8 * 8) + 0xd8);
  if (plVar3 != (longlong *)0x0) {
    local_80 = &local_res8;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<``UE::Geometry::FMeshSceneAdapter::UpdateActorBounds'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
               ::Call;
    puVar7 = (undefined4 *)(**(code **)(*plVar3 + 0x18))(plVar3,local_48,&local_88);
    plVar3 = *(longlong **)((longlong)this + 8);
    local_78 = *puVar7;
    uStack_74 = puVar7[1];
    uStack_70 = puVar7[2];
    uStack_6c = puVar7[3];
    local_68 = *(undefined8 *)(puVar7 + 4);
    uStack_60 = *(undefined8 *)(puVar7 + 6);
    local_58 = *(undefined8 *)(puVar7 + 8);
    uStack_50 = *(undefined8 *)(puVar7 + 10);
    uVar6 = 0;
    if (param_1 < (int)plVar3[1]) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar2 = *plVar3;
    puVar7 = (undefined4 *)(lVar2 + lVar8 * 0x30);
    *puVar7 = local_78;
    puVar7[1] = uStack_74;
    puVar7[2] = uStack_70;
    puVar7[3] = uStack_6c;
    puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar8 * 0x30);
    *puVar1 = local_68;
    puVar1[1] = uStack_60;
    puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar8 * 0x30);
    *puVar1 = local_58;
    puVar1[1] = uStack_50;
  }
  return;
}

// operator() @ 14cad84c0

bool __thiscall
`UE::Geometry::FMeshSceneAdapter::FastWindingNumber'::__l15::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  double dVar8;
  
  lVar1 = *(longlong *)this;
  uVar7 = 0;
  if (param_1 < *(int *)(lVar1 + 0x88)) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  lVar2 = *(longlong *)this;
  plVar3 = *(longlong **)(*(longlong *)(lVar1 + 0x80) + 0x10 + (longlong)param_1 * 0x48);
  pcVar4 = *(code **)(*plVar3 + 0x20);
  uVar7 = 0;
  if (param_1 < *(int *)(lVar2 + 0x88)) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  dVar8 = (double)(*pcVar4)(plVar3,*(undefined8 *)((longlong)this + 8),
                            *(longlong *)
                             (*(longlong *)(lVar2 + 0x80) + 8 + (longlong)param_1 * 0x48) + 0x20);
  bVar5 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
          __real_3fefae147ae147ae;
  **(double **)((longlong)this + 0x10) = dVar8 + **(double **)((longlong)this + 0x10);
  return bVar5;
}

// operator() @ 14cad8a10

void __thiscall
`UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  plVar1 = *(longlong **)this;
  uVar4 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar1 = *(longlong **)(*(longlong *)(*plVar1 + (longlong)param_1 * 8) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00014cad8a93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1,*(undefined8 *)((longlong)this + 8));
  return;
}

// operator() @ 14cad8aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
`UE::Geometry::FMeshSceneAdapter::FindNearestRayIntersection'::__l2::<lambda_2>::operator()
          (void *this,int param_1,TRay<double> *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 local_f0;
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_110 = 0xffffffffffffffff;
  local_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_150 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_140 = 0;
  uStack_138 = 0;
  lVar9 = (longlong)param_1;
  local_130 = ___xmm_bff00000000000003ff0000000000000;
  uStack_128 = _UNK_15076c6f8;
  local_120 = 0;
  uStack_118 = 0;
  lVar2 = *(longlong *)this;
  local_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_f0 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 2;
  iVar1 = *(int *)(lVar2 + 0x88);
  uVar8 = 0;
  if (param_1 < iVar1) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    local_168 = lVar9;
    local_160 = (longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      dVar5 = (double)(*pcVar4)();
      return dVar5;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x80);
  plVar3 = *(longlong **)(lVar2 + 0x10 + lVar9 * 0x48);
  cVar7 = (**(code **)(*plVar3 + 0x28))
                    (plVar3,param_2,*(longlong *)(lVar2 + 8 + lVar9 * 0x48) + 0x20,&local_158);
  if (cVar7 == '\0') {
    uVar10 = (undefined4)__real_7fefffffffffffff;
    uVar11 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  }
  else {
    uVar10 = (undefined4)uStack_128;
    uVar11 = (undefined4)((ulonglong)uStack_128 >> 0x20);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return (double)CONCAT44(uVar11,uVar10);
}

// operator() @ 14cad98a0

void __thiscall
`UE::Geometry::FMeshSceneAdapter::Build'::__l7::<lambda_2>::operator()
          (void *this,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSpatialWrapperInfo *local_18 [2];
  
  local_18[0] = param_1->Object;
  pFVar2 = *(ForAnyElementType **)this;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(FSpatialWrapperInfo **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 14cad9de0

void __thiscall
`UE::Geometry::FMeshSceneAdapter::FastWindingNumber'::__l17::<lambda_2>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  double dVar7;
  
  lVar1 = *(longlong *)this;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar1 + 0x88)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)this;
  plVar3 = *(longlong **)(*(longlong *)(lVar1 + 0x80) + 0x10 + (longlong)param_1 * 0x48);
  pcVar4 = *(code **)(*plVar3 + 0x20);
  uVar6 = 0;
  if (param_1 < *(int *)(lVar2 + 0x88)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  dVar7 = (double)(*pcVar4)(plVar3,*(undefined8 *)((longlong)this + 8),
                            *(longlong *)
                             (*(longlong *)(lVar2 + 0x80) + 8 + (longlong)param_1 * 0x48) + 0x20);
  **(double **)((longlong)this + 0x10) = dVar7 + **(double **)((longlong)this + 0x10);
  return;
}

// operator() @ 14cadac40

void __thiscall
`UE::Geometry::FMeshSceneAdapter::Build'::__l7::<lambda_3>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  
  plVar1 = *(longlong **)this;
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  cVar4 = (**(code **)(**(longlong **)(*(longlong *)(*plVar1 + (longlong)param_1 * 8) + 0x28) + 8))
                    ();
  if (cVar4 == '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8012027019833378461>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                       ,0x69d,"bOK");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// operator() @ 14cadb250

void __thiscall
`UE::Geometry::FMeshSceneAdapter::BuildSpatialEvaluationCache'::__l14::<lambda_3>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  uint local_res10 [2];
  undefined8 local_88;
  uint *local_80;
  code *local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [48];
  
  lVar2 = *(longlong *)this;
  uVar7 = 0;
  if (param_1 < *(int *)(lVar2 + 0x88)) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  local_res10[0] = param_1;
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x80) + 0x10 + (longlong)param_1 * 0x48);
  local_88 = *(undefined8 *)this;
  local_80 = local_res10;
  local_70 = &local_88;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::FMeshSceneAdapter::BuildSpatialEvaluationCache'::__l14::<lambda_3>::operator()'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
             ::Call;
  puVar6 = (undefined4 *)(**(code **)(*plVar3 + 0x18))(plVar3,local_38,&local_78);
  lVar8 = (longlong)(int)local_res10[0];
  lVar2 = *(longlong *)this;
  local_68 = *puVar6;
  uStack_64 = puVar6[1];
  uStack_60 = puVar6[2];
  uStack_5c = puVar6[3];
  local_58 = *(undefined8 *)(puVar6 + 4);
  uStack_50 = *(undefined8 *)(puVar6 + 6);
  local_48 = *(undefined8 *)(puVar6 + 8);
  uStack_40 = *(undefined8 *)(puVar6 + 10);
  uVar7 = 0;
  if ((int)local_res10[0] < *(int *)(lVar2 + 0x88)) {
    uVar7 = ~local_res10[0] >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar2 = *(longlong *)(lVar2 + 0x80);
  puVar6 = (undefined4 *)(lVar2 + 0x18 + lVar8 * 0x48);
  *puVar6 = local_68;
  puVar6[1] = uStack_64;
  puVar6[2] = uStack_60;
  puVar6[3] = uStack_5c;
  puVar1 = (undefined8 *)(lVar2 + 0x28 + lVar8 * 0x48);
  *puVar1 = local_58;
  puVar1[1] = uStack_50;
  puVar1 = (undefined8 *)(lVar2 + 0x38 + lVar8 * 0x48);
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
  return;
}

// operator() @ 14cadb510

void __thiscall
`UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_4>::operator()
          (void *this,IMeshSpatialWrapper *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 8));
  pFVar3 = *(ForAnyElementType **)this;
  local_18 = param_2;
  uStack_10 = param_1;
  if ((pFVar3->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar6 + 1;
  pFVar2 = pFVar3->Data + (longlong)iVar6 * 0x10;
  *(int *)pFVar2 = local_18;
  *(undefined4 *)(pFVar2 + 4) = uStack_14;
  *(undefined4 *)(pFVar2 + 8) = (undefined4)uStack_10;
  *(undefined4 *)(pFVar2 + 0xc) = uStack_10._4_4_;
                    /* WARNING: Could not recover jumptable at 0x00014cadb602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 8));
  return;
}

// operator() @ 14cadbbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014caddede) */
/* WARNING: Removing unreachable block (ram,0x00014caddeea) */
/* WARNING: Removing unreachable block (ram,0x00014caddeef) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_5>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  FMutex *this_00;
  uchar *puVar2;
  double *pdVar3;
  atomic<unsigned_char> aVar4;
  longlong *plVar5;
  longlong *plVar6;
  FMeshTypeContainer *pFVar7;
  IMeshSpatialWrapper *pIVar8;
  ForAnyElementType *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  FSpatialWrapperInfo *pFVar17;
  FSpatialWrapperInfo *pFVar18;
  FInstancedSubmesh *pFVar19;
  FSharedReferencer<1> FVar20;
  bool bVar21;
  bool bVar22;
  short sVar23;
  int iVar24;
  int iVar25;
  UStaticMesh *pUVar26;
  FString *pFVar27;
  TReferenceControllerBase<1> *pTVar28;
  ulonglong uVar29;
  FCompressedMeshSpatialWrapper *pFVar30;
  FCompressedMeshSpatialWrapper *pFVar31;
  FCompressedMeshSpatialWrapper *pFVar32;
  FCompressedMeshSpatialWrapper *pFVar33;
  FDynamicMeshSpatialWrapper *pFVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  ulonglong uVar37;
  uint uVar38;
  uint uVar39;
  FScriptContainerElement *pFVar40;
  uint *puVar41;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> *_Dst;
  uint uVar42;
  ForAnyElementType FVar43;
  longlong lVar44;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar45;
  double *pdVar46;
  longlong lVar47;
  FScriptContainerElement *pFVar48;
  FScriptContainerElement *pFVar49;
  void *pvVar50;
  FString *pFVar51;
  uint *puVar52;
  int iVar53;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *pTVar54;
  FDynamicMesh3 *pFVar55;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar56;
  bool bVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  undefined8 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined1 auStackY_e18 [32];
  undefined1 local_dc6;
  bool local_dc5;
  bool local_dc4 [5];
  FScriptContainerElement local_dbf;
  undefined1 local_dbe;
  undefined1 local_dbd;
  undefined1 local_dbc;
  undefined1 local_dbb;
  undefined1 local_dba;
  undefined1 local_db9;
  undefined1 local_db8;
  undefined1 local_db7 [7];
  undefined8 *local_db0;
  TArray<UE::Geometry::TTransformSequence3<double>,TSizedDefaultAllocator<32>_> local_da8;
  ForAnyElementType local_d98;
  undefined8 local_d90;
  int local_d88;
  uint local_d84;
  uint local_d80;
  FInstancedSubmesh local_d78;
  int local_d4c;
  int local_d48;
  uint local_d44;
  uint local_d40;
  undefined8 *local_d38;
  TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> local_d30;
  ForAnyElementType local_d20;
  int local_d18 [2];
  FString *local_d10;
  void *local_d08;
  TArray<UE::Geometry::FActorChildMesh_*,TSizedDefaultAllocator<32>_> local_d00;
  uint local_cf0;
  int iStack_cec;
  longlong local_ce8;
  longlong local_ce0;
  undefined8 *local_cd8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_cd0;
  FInstancedSubmesh *local_cc0;
  FMeshTypeContainer *local_cb8;
  FScriptContainerElement *local_cb0;
  double local_ca8;
  TArray<bool,TSizedDefaultAllocator<32>_> local_ca0;
  TArray<bool,TSizedDefaultAllocator<32>_> local_c90;
  TArray<UE::Geometry::TTransformSequence3<double>,TSizedDefaultAllocator<32>_> local_c80;
  double local_c70;
  FDynamicMeshEditResult local_c68;
  FMeshConnectedComponents local_bf8;
  undefined8 *local_be0;
  uint local_bd8;
  int iStack_bd4;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  FSharedReferencer<1> local_bc0;
  FDynamicMeshEditor local_bb8;
  FDynamicMeshEditor local_bb0;
  longlong local_ba8;
  IMeshSpatialWrapper *local_ba0;
  FName local_b98;
  TArrayView<int_const_,int> local_b90;
  FString local_b80;
  code *local_b70;
  FMeshConnectedComponents **local_b68;
  TArrayView<int_const_,int> local_b60;
  double local_b50;
  double dStack_b48;
  double local_b40;
  TVector<double>_u_0 local_b38;
  FMergeCoincidentMeshEdges local_b18;
  FMeshConnectedComponents *local_ab8;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_ab0;
  FDynamicMesh3 *local_aa8;
  int *local_aa0;
  ForAnyElementType *local_a98;
  int *local_a90;
  TArray<UE::Geometry::TTransformSequence3<double>,TSizedDefaultAllocator<32>_> *local_a88;
  undefined8 local_a80;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_a78;
  int *local_a70;
  FString local_a68;
  TVector<double> local_a58;
  TFunction<bool___cdecl(int,int)> local_a38;
  FDynamicMesh3 local_a08;
  FDynamicMesh3 local_7d8;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> local_5a8;
  int local_500;
  int local_4fc;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> local_4f8;
  int local_450;
  int local_44c;
  FMeshIndexMappings local_448;
  undefined1 local_188 [160];
  void *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_e18;
  bVar57 = -1 < CpuChannel->Enabled;
  local_d08 = this;
  if (bVar57) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1892,"MeshScene_Build_ProcessMesh",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x764);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1892);
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)this);
  if ((*(int *)(*(longlong *)((longlong)this + 8) + 8) < 1) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("ToBuild.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                          ,0x768,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  plVar5 = *(longlong **)((longlong)this + 0x10);
  uVar38 = *(int *)(*(longlong *)((longlong)this + 8) + 8) - 1;
  uVar42 = 0;
  if ((int)uVar38 < (int)plVar5[1]) {
    uVar42 = ~uVar38 >> 0x1f;
  }
  if ((uVar42 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  plVar6 = *(longlong **)((longlong)this + 8);
  pFVar51 = (FString *)((longlong)(int)uVar38 * 0x50 + *plVar5);
  local_d10 = pFVar51;
  if (((int)plVar6[1] < 1) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar7 = *(FMeshTypeContainer **)(*plVar6 + -8 + (longlong)(int)plVar6[1] * 8);
  *(int *)(plVar6 + 1) = (int)plVar6[1] + -1;
  local_cb8 = pFVar7;
  iVar24 = (**(code **)(**(longlong **)&pFVar7[2].MeshType + 0x10))();
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + iVar24;
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)this);
  pUVar26 = UE::Geometry::FMeshTypeContainer::GetStaticMesh(pFVar7);
  if (pUVar26 == (UStaticMesh *)0x0) {
    pFVar27 = ::FString::FString(&local_a68,L"Unknown");
    ::FString::operator=(pFVar51,pFVar27);
    local_b80.Data.AllocatorInstance.Data = local_a68.Data.AllocatorInstance.Data;
  }
  else {
    pUVar26 = UE::Geometry::FMeshTypeContainer::GetStaticMesh(pFVar7);
    local_b98 = (FName)pUVar26->_padding_;
    ::FName::ToString(&local_b98,&local_b80);
    ::FString::operator=(pFVar51,&local_b80);
  }
  if (local_b80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b80.Data.AllocatorInstance.Data);
  }
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_a08);
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1908,"MeshScene_Build_ProcessMesh_1Copy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x774);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1908);
  }
  plVar5 = *(longlong **)&pFVar7[2].MeshType;
  pcVar10 = *(code **)(*plVar5 + 0x40);
  memset(local_188,0,0xa0);
  local_dc = 2;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  (*pcVar10)(plVar5,&local_a08,local_188);
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  *(int *)&pFVar51[1].Data.AllocatorInstance.Data = local_a08.TriangleRefCounts.UsedCount;
  local_cc0 = (FInstancedSubmesh *)(pFVar7 + 1);
  local_d00.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<UE::Geometry::FActorChildMesh_*,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<UE::Geometry::FActorChildMesh_*,int>
            (&local_d00,(FActorChildMesh **)(local_cc0->Mesh).Object,pFVar7[1].MeshType,0);
  iVar25 = local_d00.ArrayNum;
  local_da8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_da8.ArrayNum = 0;
  local_da8.ArrayMax = 0;
  pFVar49 = local_d00.AllocatorInstance.Data + (longlong)iVar25 * 8;
  FVar43.Data = local_d00.AllocatorInstance.Data;
  iVar24 = 0;
  while( true ) {
    if (local_d00.ArrayNum != iVar25) {
      local_dc6 = 0;
      `TCheckedPointerIterator<UE::Geometry::FActorChildMesh_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_dc6);
      iVar24 = local_da8.ArrayNum;
    }
    pFVar51 = local_d10;
    dVar59 = __real_3f847ae147ae147b;
    if (FVar43.Data == pFVar49) break;
    pFVar40 = (FScriptContainerElement *)(*(longlong *)FVar43.Data + 0x20);
    if ((local_da8.AllocatorInstance.Data <= pFVar40) &&
       (pFVar40 < local_da8.AllocatorInstance.Data + (longlong)local_da8.ArrayMax * 0xb0)) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar21) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar24 = local_da8.ArrayNum;
    }
    if (iVar24 == local_da8.ArrayMax) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x8b0,&local_da8.AllocatorInstance,&local_da8.ArrayMax);
    }
    local_da8.ArrayNum = iVar24 + 1;
    UE::Geometry::TTransformSequence3<double>::TTransformSequence3<double>
              ((TTransformSequence3<double> *)
               (local_da8.AllocatorInstance.Data + (longlong)iVar24 * 0xb0),
               (TTransformSequence3<double> *)pFVar40);
    LOCK();
    **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
    UNLOCK();
    FVar43.Data = FVar43.Data + 8;
    iVar24 = local_da8.ArrayNum;
  }
  *(undefined4 *)((longlong)&local_d10[1].Data.AllocatorInstance.Data + 4) =
       **(undefined4 **)((longlong)this + 0x20);
  local_cd0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cd0.ArrayNum = 0;
  local_cd0.ArrayMax = 0;
  local_c80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c80.ArrayNum = 0;
  local_c80.ArrayMax = 0;
  ConstructUniqueScalesMapping(&local_da8,&local_cd0,&local_c80,dVar59);
  local_d88 = local_cd0.ArrayNum;
  pFVar51[1].Data.ArrayMax = local_cd0.ArrayNum;
  if (local_a08.TriangleRefCounts.UsedCount < 100000) {
    local_b18._padding_ = (longlong)&___7FMergeCoincidentMeshEdges_Geometry_UE__6B_;
    local_b18.Mesh = &local_a08;
    local_b18.MergeVertexTolerance = UE::Geometry::FMergeCoincidentMeshEdges::DEFAULT_TOLERANCE;
    local_b18.MergeSearchTolerance = 0.0;
    local_b18.OnlyUniquePairs = false;
    local_b18.InitialNumBoundaryEdges = 0;
    local_b18.FinalNumBoundaryEdges = 0;
    local_b18.bWeldAttrsOnMergedEdges = false;
    local_b18.SplitAttributeWelder.UVDistSqrdThreshold = 0.0;
    local_b18.SplitAttributeWelder.ColorDistSqrdThreshold = 0.0;
    local_b18.SplitAttributeWelder.NormalVecDotThreshold = 0.0;
    local_b18.SplitAttributeWelder.TangentVecDotThreshold = 0.0;
    local_b18.EdgesToMerge = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
    UE::Geometry::FMergeCoincidentMeshEdges::Apply(&local_b18);
  }
  local_bf8.Mesh = &local_a08;
  local_bf8.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_bf8.Components.Array.ArrayNum = 0;
  local_bf8.Components.Array.ArrayMax = 0;
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1942,"MeshScene_Build_ProcessMesh_2Components",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x796);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1942);
  }
  local_a38._0_8_ = 0;
  local_a38._40_8_ = 0;
  UE::Geometry::FMeshConnectedComponents::FindConnectedTriangles(&local_bf8,&local_a38);
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  uVar61 = local_bf8.Components.Array._8_8_;
  iVar24 = local_bf8.Components.Array.ArrayNum;
  lVar44 = (longlong)local_bf8.Components.Array.ArrayNum;
  pFVar51[1].Data.ArrayNum = local_bf8.Components.Array.ArrayNum;
  local_c90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c90.ArrayNum = 0;
  local_c90.ArrayMax = 0;
  local_ca0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ca0.ArrayNum = 0;
  local_ca0.ArrayMax = 0;
  local_dc5 = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (&local_c90,&local_dc5,local_bf8.Components.Array.ArrayNum);
  local_dc4[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_ca0,local_dc4,iVar24);
  local_d4c = 0;
  local_d20.Data = (FScriptContainerElement *)0x0;
  local_d18[0] = 0;
  local_d18[1] = 0;
  if (iVar24 < 1) {
    if (iVar24 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar61 & 0xffffffff);
    }
  }
  else {
    iVar25 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar24,&local_d20,local_d18,local_d18 + 1);
    memset(local_d20.Data + (longlong)iVar25 * 0x10,0,lVar44 << 4);
  }
  local_d48 = 0;
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1957,"MeshScene_Build_ProcessMesh_3Closed",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x7a5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1957);
  }
  local_ab8 = &local_bf8;
  local_ab0 = &local_c90;
  local_aa8 = &local_a08;
  local_aa0 = &local_d4c;
  local_a98 = &local_d20;
  local_a90 = &local_d88;
  local_a88 = &local_c80;
  local_a80 = *(undefined8 *)((longlong)this + 0x28);
  local_a78 = &local_ca0;
  local_a70 = &local_d48;
  local_b68 = &local_ab8;
  local_b70 = UE::Core::Private::Function::
              TFunctionRefCaller<``UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_5>::operator()'::__l19::<lambda_1>,void,int>
              ::Call;
  ParallelFor(iVar24,(TFunctionRef<void___cdecl(int)> *)&local_b70,
              **(EParallelForFlags **)((longlong)this + 0x30));
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  *(int *)&pFVar51[2].Data.AllocatorInstance.Data = local_d4c;
  *(int *)((longlong)&pFVar51[2].Data.AllocatorInstance.Data + 4) = local_d48;
  if ((local_d4c == 0) && (local_d48 == 0)) {
    __l2::<lambda_4>::operator()
              (*(void **)((longlong)this + 0x38),*(IMeshSpatialWrapper **)&local_cb8[2].MeshType,
               local_a08.TriangleRefCounts.UsedCount);
  }
  else {
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_7d8);
    local_bb0.Mesh = &local_7d8;
    local_d98.Data = (FScriptContainerElement *)0x0;
    local_d90 = 0;
    UE::Geometry::FMeshIndexMappings::FMeshIndexMappings(&local_448);
    local_c68.NewVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c68.NewVertices.ArrayNum = 0;
    local_c68.NewVertices.ArrayMax = 0;
    local_c68.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c68.NewTriangles.ArrayNum = 0;
    local_c68.NewTriangles.ArrayMax = 0;
    local_c68.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c68.NewQuads.ArrayNum = 0;
    local_c68.NewQuads.ArrayMax = 0;
    local_c68.NewPolygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c68.NewPolygons.ArrayNum = 0;
    local_c68.NewPolygons.ArrayMax = 0;
    local_c68.NewGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c68.NewGroups.ArrayNum = 0;
    local_c68.NewGroups.ArrayMax = 0;
    local_c68.NewNormalOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c68.NewNormalOverlayElements.ArrayNum = 0;
    local_c68.NewNormalOverlayElements.ArrayMax = 0;
    local_c68.NewColorOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c68.NewColorOverlayElements.ArrayNum = 0;
    local_c68.NewColorOverlayElements.ArrayMax = 0;
    bVar21 = -1 < CpuChannel->Enabled;
    if (bVar21) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2013,"MeshScene_Build_ProcessMesh_4Accumulate",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                 ,0x7dd);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2013);
    }
    local_d84 = 0;
    local_ba8 = lVar44;
    if (0 < lVar44) {
      uVar62 = SUB84(__real_ffefffffffffffff,0);
      uVar63 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
      local_ce0 = 0;
      dVar59 = __real_7fefffffffffffff;
      do {
        lVar44 = local_ce0;
        uVar42 = local_d84;
        uVar39 = ~local_d84 >> 0x1f;
        uVar38 = 0;
        if ((int)local_d84 < local_bf8.Components.Array.ArrayNum) {
          uVar38 = uVar39;
        }
        local_d80 = uVar39;
        if ((uVar38 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        puVar36 = *(undefined8 **)(local_bf8.Components.Array.AllocatorInstance.Data + lVar44 * 8);
        iVar24 = local_d88 * *(int *)(puVar36 + 1);
        uVar38 = 0;
        if ((int)uVar42 < local_c90.ArrayNum) {
          uVar38 = uVar39;
        }
        local_be0 = puVar36;
        if ((uVar38 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_dbf = local_c90.AllocatorInstance.Data[lVar44];
        uVar38 = 0;
        if ((int)uVar42 < local_ca0.ArrayNum) {
          uVar38 = uVar39;
        }
        if ((uVar38 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((local_ca0.AllocatorInstance.Data[lVar44] == (FScriptContainerElement)0x0) ||
           (1000000 < iVar24)) {
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&local_448);
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&local_448.VertexMap.ReverseMap);
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&local_448.TriangleMap);
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&local_448.TriangleMap.ReverseMap);
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&local_448.GroupMap);
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&local_448.GroupMap.ReverseMap);
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&local_448.ColorMap);
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&local_448.ColorMap.ReverseMap);
          iVar24 = local_448.UVMaps.ArrayNum;
          pTVar54 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)(local_448.UVMaps.AllocatorInstance.Data + (longlong)iVar24 * 0xa8);
          FVar43.Data = local_448.UVMaps.AllocatorInstance.Data;
          while( true ) {
            if (local_448.UVMaps.ArrayNum != iVar24) {
              local_dbc = 0;
              `TCheckedPointerIterator<UE::Geometry::TIndexMap<int>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_dbc);
            }
            if ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *
                )FVar43.Data == pTVar54) break;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)FVar43.Data);
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)((longlong)FVar43.Data + 0x50));
            FVar43.Data = (FScriptContainerElement *)
                          &(((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                              *)((longlong)FVar43.Data + 0xa0))->Elements).field_0x8;
          }
          iVar24 = local_448.NormalMaps.ArrayNum;
          pTVar54 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)(local_448.NormalMaps.AllocatorInstance.Data + (longlong)iVar24 * 0xa8);
          FVar43.Data = local_448.NormalMaps.AllocatorInstance.Data;
          while( true ) {
            if (local_448.NormalMaps.ArrayNum != iVar24) {
              local_dbb = 0;
              `TCheckedPointerIterator<UE::Geometry::TIndexMap<int>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_dbb);
            }
            if ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *
                )FVar43.Data == pTVar54) break;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)FVar43.Data);
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)((longlong)FVar43.Data + 0x50));
            FVar43.Data = (FScriptContainerElement *)
                          &(((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                              *)((longlong)FVar43.Data + 0xa0))->Elements).field_0x8;
          }
          UE::Geometry::FDynamicMeshEditResult::Reset(&local_c68);
          local_b90.DataPtr = (int *)*puVar36;
          iVar24 = *(int *)(puVar36 + 1);
          if ((iVar24 < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar22)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          local_b90.ArrayNum = iVar24;
          UE::Geometry::FDynamicMeshEditor::AppendTriangles
                    (&local_bb0,&local_a08,&local_b90,&local_448,&local_c68,false);
          piVar1 = &local_d10[2].Data.ArrayNum;
          *piVar1 = *piVar1 + 1;
          pFVar51 = local_d10;
          uVar42 = local_d84;
        }
        else {
          local_d44 = 0;
          local_ce8 = 0;
          if (0 < local_d88) {
            do {
              lVar44 = local_ce8;
              dVar14 = (double)CONCAT44(uVar63,uVar62);
              local_d78.ComputedThickness = 0.0;
              local_d40 = ~local_d44 >> 0x1f;
              local_d78.NewTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_d78.NewTransforms.ArrayNum = 0;
              local_d78.NewTransforms.ArrayMax = 0;
              uVar42 = 0;
              if ((int)local_d44 < local_cd0.ArrayNum) {
                uVar42 = local_d40;
              }
              local_d78.Mesh.Object = (FDynamicMesh3 *)0x0;
              local_d78.Mesh.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              if ((uVar42 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar49 = local_cd0.AllocatorInstance.Data + lVar44 * 0x10;
              local_cb0 = pFVar49;
              pTVar28 = ::operator_new(0x240);
              if (pTVar28 == (TReferenceControllerBase<1> *)0x0) {
                local_bc0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                pFVar55 = (FDynamicMesh3 *)&DAT_00000010;
              }
              else {
                pTVar28->SharedReferenceCount = (atomic<int>)0x1;
                pTVar28->WeakReferenceCount = (atomic<int>)0x1;
                pTVar28->_padding_ =
                     (longlong)
                     &
                     ___7__TIntrusiveReferenceController_VFDynamicMesh3_Geometry_UE___00_SharedPointerInternals__6B_
                ;
                UE::Geometry::FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)(pTVar28 + 1));
                pFVar55 = (FDynamicMesh3 *)(pTVar28 + 1);
                if ((pFVar55 == (FDynamicMesh3 *)0x0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InObject != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x246,L""), bVar22)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                LOCK();
                pTVar28->SharedReferenceCount =
                     (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
                UNLOCK();
                local_bc0.ReferenceController = pTVar28;
              }
              FVar20.ReferenceController = local_bc0.ReferenceController;
              local_bc8 = 0;
              local_d78.Mesh.Object = pFVar55;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&local_d78.Mesh.SharedReferenceCount,&local_bc0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_bc0.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar20.ReferenceController);
              local_bb8.Mesh = local_d78.Mesh.Object;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Reset((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)&local_448);
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Reset((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)&local_448.VertexMap.ReverseMap);
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Reset((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)&local_448.TriangleMap);
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Reset((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)&local_448.TriangleMap.ReverseMap);
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Reset((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)&local_448.GroupMap);
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Reset((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)&local_448.GroupMap.ReverseMap);
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Reset((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)&local_448.ColorMap);
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Reset((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)&local_448.ColorMap.ReverseMap);
              iVar24 = local_448.UVMaps.ArrayNum;
              pTVar54 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                         *)(local_448.UVMaps.AllocatorInstance.Data + (longlong)iVar24 * 0xa8);
              FVar43.Data = local_448.UVMaps.AllocatorInstance.Data;
              while( true ) {
                if (local_448.UVMaps.ArrayNum != iVar24) {
                  local_dc4[1] = false;
                  `TCheckedPointerIterator<UE::Geometry::TIndexMap<int>,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_dc4 + 1);
                }
                if ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)FVar43.Data == pTVar54) break;
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
                Reset((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                       *)FVar43.Data);
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
                Reset((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                       *)((longlong)FVar43.Data + 0x50));
                FVar43.Data = (FScriptContainerElement *)
                              &(((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                                  *)((longlong)FVar43.Data + 0xa0))->Elements).field_0x8;
              }
              iVar24 = local_448.NormalMaps.ArrayNum;
              pTVar54 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                         *)(local_448.NormalMaps.AllocatorInstance.Data + (longlong)iVar24 * 0xa8);
              FVar43.Data = local_448.NormalMaps.AllocatorInstance.Data;
              while( true ) {
                if (local_448.NormalMaps.ArrayNum != iVar24) {
                  local_dc4[2] = false;
                  `TCheckedPointerIterator<UE::Geometry::TIndexMap<int>,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_dc4 + 2);
                }
                if ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)FVar43.Data == pTVar54) break;
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
                Reset((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                       *)FVar43.Data);
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
                Reset((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                       *)((longlong)FVar43.Data + 0x50));
                FVar43.Data = (FScriptContainerElement *)
                              &(((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                                  *)((longlong)FVar43.Data + 0xa0))->Elements).field_0x8;
              }
              bVar22 = (longlong)local_c68.NewVertices._8_8_ < 0;
              local_c68.NewVertices._8_8_ = local_c68.NewVertices._8_8_ & 0xffffffff00000000;
              if (bVar22) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,0,(ForAnyElementType *)&local_c68,0,&local_c68.NewVertices.ArrayMax);
              }
              bVar22 = (longlong)local_c68.NewTriangles._8_8_ < 0;
              local_c68.NewTriangles._8_8_ = local_c68.NewTriangles._8_8_ & 0xffffffff00000000;
              if (bVar22) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,0,&local_c68.NewTriangles.AllocatorInstance,0,
                           &local_c68.NewTriangles.ArrayMax);
              }
              bVar22 = (longlong)local_c68.NewQuads._8_8_ < 0;
              local_c68.NewQuads._8_8_ = local_c68.NewQuads._8_8_ & 0xffffffff00000000;
              if (bVar22) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,0,&local_c68.NewQuads.AllocatorInstance,0,
                           &local_c68.NewQuads.ArrayMax);
              }
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Reset
                        (&local_c68.NewPolygons,0);
              bVar22 = (longlong)local_c68.NewGroups._8_8_ < 0;
              local_c68.NewGroups._8_8_ = local_c68.NewGroups._8_8_ & 0xffffffff00000000;
              if (bVar22) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,0,&local_c68.NewGroups.AllocatorInstance,0,
                           &local_c68.NewGroups.ArrayMax);
              }
              TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Reset
                        (&local_c68.NewNormalOverlayElements,0);
              bVar22 = (longlong)local_c68.NewColorOverlayElements._8_8_ < 0;
              local_c68.NewColorOverlayElements._8_8_ =
                   local_c68.NewColorOverlayElements._8_8_ & 0xffffffff00000000;
              if (bVar22) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,0,&local_c68.NewColorOverlayElements.AllocatorInstance,0,
                           &local_c68.NewColorOverlayElements.ArrayMax);
              }
              local_b60.DataPtr = (int *)*puVar36;
              iVar24 = *(int *)(puVar36 + 1);
              if ((iVar24 < 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar22)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              local_b60.ArrayNum = iVar24;
              UE::Geometry::FDynamicMeshEditor::AppendTriangles
                        (&local_bb8,&local_a08,&local_b60,&local_448,&local_c68,false);
              if ((*(int *)(pFVar49 + 8) < 1) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              uVar42 = **(uint **)&pFVar49->field_0x0;
              uVar38 = 0;
              if ((int)uVar42 < local_da8.ArrayNum) {
                uVar38 = ~uVar42 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              FVar45 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)
                       ((longlong)(int)uVar42 * 0xb0 + (longlong)local_da8.AllocatorInstance.Data);
              piVar1 = (int *)((longlong)FVar45 + 0xa8);
              iVar24 = *piVar1;
              if (*(ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
                   ((longlong)FVar45 + 0xa0) !=
                  (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
                FVar45 = *(ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
                          ((longlong)FVar45 + 0xa0);
              }
              pdVar46 = (double *)((longlong)FVar45 + 0x48);
              local_ca8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
              local_c70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
              uVar61 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
              while( true ) {
                if (*piVar1 != iVar24) {
                  local_dc4[3] = false;
                  `TCheckedPointerIterator<UE::Geometry::TTransformSRT3<double>_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(local_dc4 + 3);
                }
                if (pdVar46 + -9 == (double *)((longlong)iVar24 * 0x50 + (longlong)FVar45)) break;
                local_c70 = local_c70 * pdVar46[-1];
                local_ca8 = local_ca8 * *pdVar46;
                uVar61 = (double)uVar61 * pdVar46[-2];
                pdVar46 = pdVar46 + 10;
              }
              iVar24 = local_c68.NewVertices.ArrayNum;
              pFVar49 = local_c68.NewVertices.AllocatorInstance.Data +
                        (longlong)local_c68.NewVertices.ArrayNum * 4;
              FVar43.Data = local_c68.NewVertices.AllocatorInstance.Data;
              dVar15 = dVar59;
              dVar16 = dVar59;
              dVar58 = dVar14;
              dVar13 = dVar14;
              while( true ) {
                if (local_c68.NewVertices.ArrayNum != iVar24) {
                  local_dc4[4] = false;
                  `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (local_dc4 + 4);
                }
                puVar36 = local_be0;
                pvVar50 = local_d08;
                uVar42 = local_d40;
                if (FVar43.Data == pFVar49) break;
                uVar42 = *(uint *)FVar43.Data;
                if ((local_d78.Mesh.Object == (FDynamicMesh3 *)0x0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar22)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pFVar55 = local_d78.Mesh.Object;
                uVar29 = (ulonglong)(uVar42 & 0x1ff);
                lVar44 = *(longlong *)
                          (((local_d78.Mesh.Object)->Vertices).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar42 >> 9) * 8);
                pdVar46 = (double *)(lVar44 + uVar29 * 0x18);
                local_b50 = *pdVar46;
                dStack_b48 = pdVar46[1];
                local_b40 = *(double *)(lVar44 + 0x10 + uVar29 * 0x18);
                dVar11 = dStack_b48 * local_c70;
                dVar60 = local_b50 * (double)uVar61;
                dVar12 = local_b40 * local_ca8;
                sVar23 = _dclass(SUB84(dVar60,0));
                if (((sVar23 < 1) && (sVar23 = _dclass(SUB84(dVar11,0)), sVar23 < 1)) &&
                   (sVar23 = _dclass(SUB84(dVar12,0)), sVar23 < 1)) {
                  *(double *)(lVar44 + uVar29 * 0x18) = dVar60;
                  *(double *)(lVar44 + 8 + uVar29 * 0x18) = dVar11;
                  *(double *)(lVar44 + 0x10 + uVar29 * 0x18) = dVar12;
                  if ((pFVar55->ChangeStampShape).bIsEnabled != false) {
                    this_00 = &(pFVar55->ChangeStampShape).Mutex;
                    LOCK();
                    bVar22 = this_00->State == (atomic<unsigned_char>)0x0;
                    if (bVar22) {
                      this_00->State = (atomic<unsigned_char>)0x1;
                    }
                    UNLOCK();
                    if (!bVar22) {
                      UE::FMutex::LockSlow(this_00);
                    }
                    puVar52 = &(pFVar55->ChangeStampShape).Value;
                    *puVar52 = *puVar52 + 1;
                    LOCK();
                    aVar4 = this_00->State;
                    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
                    UNLOCK();
                    if (((byte)aVar4 & 2) != 0) {
                      UE::FMutex::WakeWaitingThread(this_00);
                    }
                  }
                }
                if (dVar60 < dVar59) {
                  dVar59 = dVar60;
                }
                if (dVar14 < dVar60) {
                  dVar14 = dVar60;
                }
                if (dVar11 < dVar15) {
                  dVar15 = dVar11;
                }
                if (dVar58 < dVar11) {
                  dVar58 = dVar11;
                }
                if (dVar12 < dVar16) {
                  dVar16 = dVar12;
                }
                if (dVar13 < dVar12) {
                  dVar13 = dVar12;
                }
                FVar43.Data = FVar43.Data + 4;
              }
              if (*(char *)(*(longlong *)((longlong)local_d08 + 0x28) + 0x10) == '\0') {
LAB_14cadccfb:
                if (local_dbf == (FScriptContainerElement)0x0) {
                  local_d78.ComputedThickness = 0.0;
                }
                else {
                  uVar38 = 0;
                  if ((int)local_d84 < local_d18[0]) {
                    uVar38 = local_d80;
                  }
                  if ((uVar38 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  lVar44 = local_ce8;
                  FVar43.Data = local_d20.Data;
                  lVar47 = local_ce0 * 0x10;
                  uVar38 = 0;
                  if ((int)local_d44 < *(int *)(local_d20.Data + lVar47 + 8)) {
                    uVar38 = uVar42;
                  }
                  if ((uVar38 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pdVar46 = (double *)(lVar44 * 0x38 + *(longlong *)&FVar43.Data[lVar47].field_0x0);
                  if ((local_d78.Mesh.Object == (FDynamicMesh3 *)0x0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x44d,L""), bVar22)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pFVar55 = local_d78.Mesh.Object;
                  uVar42 = 0;
                  uVar62 = SUB84(__real_7fefffffffffffff,0);
                  uVar63 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
                  iVar24 = ((local_d78.Mesh.Object)->VertexRefCounts).UsedCount;
                  uVar61 = __real_ffefffffffffffff;
                  if (0 < iVar24) {
                    uVar38 = 0;
                    do {
                      if ((int)uVar42 <
                          (int)((pFVar55->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                               (pFVar55->VertexRefCounts).RefCounts.CurBlockUsed)) {
                        uVar29 = (ulonglong)(uVar38 & 0x1ff);
                        if ((ushort)(*(short *)(*(longlong *)
                                                 ((pFVar55->VertexRefCounts).RefCounts.Blocks.
                                                  AllocatorInstance.Data +
                                                 (ulonglong)(uVar42 >> 9) * 8) + uVar29 * 2) - 1U) <
                            0xfffe) {
                          lVar44 = *(longlong *)
                                    ((pFVar55->Vertices).Blocks.AllocatorInstance.Data +
                                    (ulonglong)(uVar42 >> 9) * 8);
                          pdVar3 = (double *)(lVar44 + uVar29 * 0x18);
                          local_b40 = *(double *)(lVar44 + 0x10 + uVar29 * 0x18);
                          local_b38._s_0.X = *pdVar3 - *pdVar46;
                          local_b38._s_0.Z = local_b40 - pdVar46[2];
                          local_b38._s_0.Y = pdVar3[1] - pdVar46[1];
                          UE::Geometry::TQuaternion<double>::InverseMultiply
                                    ((TQuaternion<double> *)(pdVar46 + 3),&local_a58,
                                     (TVector<double> *)&local_b38._s_0);
                          if (local_a58.field0_0x0._s_0.Z < (double)CONCAT44(uVar63,uVar62)) {
                            uVar62 = SUB84(local_a58.field0_0x0._s_0.Z,0);
                            uVar63 = (int)((ulonglong)local_a58.field0_0x0._16_8_ >> 0x20);
                          }
                          if ((double)uVar61 < local_a58.field0_0x0._s_0.Z) {
                            uVar61 = local_a58.field0_0x0._s_0.Z;
                          }
                        }
                      }
                      uVar42 = uVar42 + 1;
                      uVar38 = uVar38 + 1;
                      pvVar50 = local_d08;
                    } while ((int)uVar42 < iVar24);
                  }
                  local_d78.ComputedThickness = (double)uVar61 - (double)CONCAT44(uVar63,uVar62);
                  if (local_d78.ComputedThickness <= 0.0) {
                    local_d78.ComputedThickness = 0.0;
                  }
                  dVar59 = *(double *)(*(longlong *)((longlong)pvVar50 + 0x28) + 8);
                  if (dVar59 <= local_d78.ComputedThickness) {
                    local_d78.ComputedThickness = dVar59;
                  }
                }
                iVar24 = *(int *)(local_cb0 + 8);
                puVar52 = *(uint **)&local_cb0->field_0x0;
                puVar41 = puVar52 + iVar24;
                while( true ) {
                  if (*(int *)(local_cb0 + 8) != iVar24) {
                    local_dbe = 0;
                    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_dbe);
                  }
                  if (puVar52 == puVar41) break;
                  uVar42 = *puVar52;
                  uVar38 = 0;
                  if ((int)uVar42 < local_da8.ArrayNum) {
                    uVar38 = ~uVar42 >> 0x1f;
                  }
                  if ((uVar38 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  FVar45 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)
                           ((longlong)(int)uVar42 * 0xb0 +
                           (longlong)local_da8.AllocatorInstance.Data);
                  local_5a8.SecondaryData =
                       (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0;
                  local_500 = *(int *)((longlong)FVar45 + 0xa8);
                  lVar44 = (longlong)local_500;
                  if (*(ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
                       ((longlong)FVar45 + 0xa0) !=
                      (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
                    FVar45 = *(ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
                              ((longlong)FVar45 + 0xa0);
                  }
                  if (local_500 == 0) {
                    local_4fc = 2;
                    iVar25 = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TTransformSRT3<double>_>_>
                              (0x50,8,local_500,0,&local_5a8,local_500,&local_4fc);
                    FVar56 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)&local_5a8;
                    if (local_5a8.SecondaryData !=
                        (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
                      FVar56 = local_5a8.SecondaryData;
                    }
                    memcpy((void *)FVar56,(void *)FVar45,lVar44 * 0x50);
                    iVar25 = local_500;
                  }
                  FVar45 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)&local_5a8;
                  if (local_5a8.SecondaryData !=
                      (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
                    FVar45 = local_5a8.SecondaryData;
                  }
                  FVar56 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)
                           ((longlong)iVar25 * 0x50 + (longlong)FVar45);
                  iVar53 = iVar25;
                  while( true ) {
                    if (iVar53 != iVar25) {
                      local_dbd = 0;
                      `TCheckedPointerIterator<UE::Geometry::TTransformSRT3<double>,int,0>::
                      operator!='::__l2::<lambda_1>::operator()(&local_dbd);
                    }
                    if (FVar45 == FVar56) break;
                    *(double *)((longlong)FVar45 + 0x38) =
                         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
                    *(double *)((longlong)FVar45 + 0x40) =
                         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
                    *(double *)((longlong)FVar45 + 0x48) =
                         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
                    FVar45 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)
                             ((longlong)FVar45 + 0x50);
                    iVar53 = local_500;
                  }
                  if (((local_d78.NewTransforms.AllocatorInstance.Data <= &local_5a8) &&
                      (&local_5a8 <
                       (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
                       (local_d78.NewTransforms.AllocatorInstance.Data +
                       (longlong)local_d78.NewTransforms.ArrayMax * 0xb0))) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar22)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  iVar25 = local_d78.NewTransforms.ArrayNum;
                  if (local_d78.NewTransforms.ArrayNum == local_d78.NewTransforms.ArrayMax) {
                    iVar25 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x8b0,&local_d78.NewTransforms.AllocatorInstance,
                                        &local_d78.NewTransforms.ArrayMax);
                  }
                  local_d78.NewTransforms.ArrayNum = iVar25 + 1;
                  FVar45 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)
                           ((longlong)iVar25 * 0xb0 +
                           (longlong)local_d78.NewTransforms.AllocatorInstance.Data);
                  *(ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
                   ((longlong)FVar45 + 0xa0) =
                       (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0;
                  lVar44 = (longlong)local_500;
                  *(int *)((ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
                          ((longlong)FVar45 + 0xa8))->InlineData = local_500;
                  FVar56 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)&local_5a8;
                  if (local_5a8.SecondaryData !=
                      (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
                    FVar56 = local_5a8.SecondaryData;
                  }
                  puVar2 = (uchar *)((longlong)FVar45 + 0xac);
                  if (local_500 == 0) {
                    puVar2[0] = '\x02';
                    puVar2[1] = '\0';
                    puVar2[2] = '\0';
                    puVar2[3] = '\0';
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TTransformSRT3<double>_>_>
                              (0x50,8,local_500,0,
                               (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)FVar45,
                               local_500,(int *)puVar2);
                    if (*(ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
                         ((longlong)FVar45 + 0xa0) !=
                        (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
                      FVar45 = *(ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
                                ((longlong)FVar45 + 0xa0);
                    }
                    memcpy((void *)FVar45,(void *)FVar56,lVar44 * 0x50);
                  }
                  if (local_5a8.SecondaryData !=
                      (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
                    FMemory::Free((void *)local_5a8.SecondaryData);
                  }
                  puVar52 = puVar52 + 1;
                }
                if (((local_d98.Data <= &local_d78) &&
                    (&local_d78 <
                     (FInstancedSubmesh *)(local_d98.Data + (longlong)local_d90._4_4_ * 0x28))) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar22)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                iVar24 = (uint)local_d90;
                if ((uint)local_d90 == local_d90._4_4_) {
                  iVar24 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x828,&local_d98,(int *)((longlong)&local_d90 + 4));
                }
                local_d90 = CONCAT44(local_d90._4_4_,iVar24 + 1);
                lVar44 = (longlong)iVar24;
                *(FDynamicMesh3 **)&local_d98.Data[lVar44 * 0x28].field_0x0 = local_d78.Mesh.Object;
                *(TReferenceControllerBase<1> **)(local_d98.Data + lVar44 * 0x28 + 8) =
                     local_d78.Mesh.SharedReferenceCount.ReferenceController;
                local_d78.Mesh.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                local_d78.Mesh.Object = (FDynamicMesh3 *)0x0;
                *(undefined8 *)(local_d98.Data + lVar44 * 0x28 + 0x10) = 0;
                *(FScriptContainerElement **)(local_d98.Data + lVar44 * 0x28 + 0x10) =
                     local_d78.NewTransforms.AllocatorInstance.Data;
                local_d78.NewTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                *(int *)(local_d98.Data + lVar44 * 0x28 + 0x18) = local_d78.NewTransforms.ArrayNum;
                *(int *)(local_d98.Data + lVar44 * 0x28 + 0x1c) = local_d78.NewTransforms.ArrayMax;
                local_d78.NewTransforms.ArrayNum = 0;
                local_d78.NewTransforms.ArrayMax = 0;
                *(double *)(local_d98.Data + lVar44 * 0x28 + 0x20) = local_d78.ComputedThickness;
                DestructItems<UE::Geometry::TTransformSequence3<double>,int>
                          ((TTransformSequence3<double> *)0x0,0);
                if ((ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
                    local_d78.NewTransforms.AllocatorInstance.Data !=
                    (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)0x0) {
                  FMemory::Free(local_d78.NewTransforms.AllocatorInstance.Data);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_d78.Mesh.SharedReferenceCount.ReferenceController);
                puVar36 = local_be0;
              }
              else {
                dVar58 = dVar58 - dVar15;
                dVar13 = dVar13 - dVar16;
                dVar14 = dVar14 - dVar59;
                if (dVar58 <= 0.0) {
                  dVar58 = 0.0;
                }
                if (dVar13 <= 0.0) {
                  dVar13 = 0.0;
                }
                if (dVar14 <= 0.0) {
                  dVar14 = 0.0;
                }
                if (dVar58 <= dVar13) {
                  dVar58 = dVar13;
                }
                if (dVar58 <= dVar14) {
                  dVar58 = dVar14;
                }
                if (*(double *)(*(longlong *)((longlong)local_d08 + 0x28) + 0x18) <= dVar58)
                goto LAB_14cadccfb;
                LOCK();
                **(int **)((longlong)local_d08 + 0x40) = **(int **)((longlong)local_d08 + 0x40) + 1;
                UNLOCK();
                LOCK();
                **(int **)((longlong)local_d08 + 0x48) =
                     **(int **)((longlong)local_d08 + 0x48) + *(int *)(local_cb0 + 8);
                UNLOCK();
                LOCK();
                **(int **)((longlong)local_d08 + 0x50) =
                     **(int **)((longlong)local_d08 + 0x50) +
                     *(int *)(local_be0 + 1) * *(int *)(local_cb0 + 8);
                UNLOCK();
                DestructItems<UE::Geometry::TTransformSequence3<double>,int>
                          ((TTransformSequence3<double> *)
                           local_d78.NewTransforms.AllocatorInstance.Data,
                           local_d78.NewTransforms.ArrayNum);
                if ((ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
                    local_d78.NewTransforms.AllocatorInstance.Data !=
                    (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)0x0) {
                  FMemory::Free(local_d78.NewTransforms.AllocatorInstance.Data);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_d78.Mesh.SharedReferenceCount.ReferenceController);
              }
              local_d44 = local_d44 + 1;
              local_ce8 = local_ce8 + 1;
              uVar62 = SUB84(__real_ffefffffffffffff,0);
              uVar63 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
              lVar44 = local_ce0;
              pFVar51 = local_d10;
              uVar42 = local_d84;
              dVar59 = __real_7fefffffffffffff;
            } while ((int)local_d44 < local_d88);
          }
        }
        local_d84 = uVar42 + 1;
        local_ce0 = lVar44 + 1;
        this = local_d08;
      } while (local_ce0 < local_ba8);
    }
    pFVar31 = (FCompressedMeshSpatialWrapper *)0x0;
    if (bVar21) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    UE::Geometry::FDynamicMeshEditResult::~FDynamicMeshEditResult(&local_c68);
    UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&local_448);
    piVar1 = &pFVar51[4].Data.ArrayNum;
    *piVar1 = *piVar1 + local_7d8.TriangleRefCounts.UsedCount;
    pFVar51[2].Data.ArrayMax = local_7d8.TriangleRefCounts.UsedCount;
    if (local_7d8.TriangleRefCounts.UsedCount < 1) {
      iVar24 = local_d00.ArrayNum;
      pFVar49 = local_d00.AllocatorInstance.Data + (longlong)iVar24 * 8;
      FVar43.Data = local_d00.AllocatorInstance.Data;
      while( true ) {
        if (local_d00.ArrayNum != iVar24) {
          local_db9 = 0;
          `TCheckedPointerIterator<UE::Geometry::FActorChildMesh_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_db9);
        }
        if (FVar43.Data == pFVar49) break;
        lVar44 = *(longlong *)FVar43.Data;
        FVar43.Data = FVar43.Data + 8;
        *(undefined8 *)(lVar44 + 0xd8) = 0;
      }
      iVar24 = *(int *)((longlong)&(local_cc0->Mesh).SharedReferenceCount.ReferenceController + 4);
      *(ESceneMeshType *)&(local_cc0->Mesh).SharedReferenceCount.ReferenceController =
           StaticMeshAsset;
      if (iVar24 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)local_cc0,0,
                   (int *)((longlong)&(local_cc0->Mesh).SharedReferenceCount.ReferenceController + 4
                          ));
      }
    }
    else {
      if (**(char **)((longlong)this + 0x58) == '\0') {
        pFVar34 = ::operator_new(0x270);
        if (pFVar34 != (FDynamicMeshSpatialWrapper *)0x0) {
          pFVar31 = (FCompressedMeshSpatialWrapper *)
                    UE::Geometry::FDynamicMeshSpatialWrapper::FDynamicMeshSpatialWrapper
                              (pFVar34,&local_7d8);
        }
      }
      else {
        pFVar30 = ::operator_new(0x380);
        if (pFVar30 != (FCompressedMeshSpatialWrapper *)0x0) {
          pFVar31 = UE::Geometry::FCompressedMeshSpatialWrapper::FCompressedMeshSpatialWrapper
                              (pFVar30,&local_7d8);
        }
      }
      pFVar7 = local_cb8;
      puVar36 = *(undefined8 **)&local_cb8[2].MeshType;
      *(FCompressedMeshSpatialWrapper **)&local_cb8[2].MeshType = pFVar31;
      if (puVar36 != (undefined8 *)0x0) {
        (**(code **)*puVar36)(puVar36,1);
      }
      __l2::<lambda_4>::operator()
                (*(void **)((longlong)this + 0x38),*(IMeshSpatialWrapper **)&pFVar7[2].MeshType,
                 local_7d8.TriangleRefCounts.UsedCount);
      iVar24 = local_d00.ArrayNum;
      pFVar49 = local_d00.AllocatorInstance.Data + (longlong)iVar24 * 8;
      FVar43.Data = local_d00.AllocatorInstance.Data;
      while( true ) {
        if (local_d00.ArrayNum != iVar24) {
          local_dba = 0;
          `TCheckedPointerIterator<UE::Geometry::FActorChildMesh_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_dba);
        }
        if (FVar43.Data == pFVar49) break;
        lVar44 = *(longlong *)FVar43.Data;
        FVar43.Data = FVar43.Data + 8;
        *(undefined8 *)(lVar44 + 0xd8) = *(undefined8 *)&pFVar7[2].MeshType;
      }
      EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x60));
      **(int **)((longlong)this + 0x68) =
           **(int **)((longlong)this + 0x68) +
           local_da8.ArrayNum * local_7d8.TriangleRefCounts.UsedCount;
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x60));
    }
    if ((uint)local_d90 == 0) {
      LOCK();
      **(int **)((longlong)this + 0x70) = **(int **)((longlong)this + 0x70) + 1;
      UNLOCK();
    }
    else {
      LOCK();
      **(int **)((longlong)this + 0x78) = **(int **)((longlong)this + 0x78) + 1;
      pFVar31 = _UNK_150651568;
      pFVar17 = ___xmm_00000000000000000000000000000010;
      dVar14 = __real_3fe3333333333333;
      dVar59 = __real_3fe0000000000000;
      UNLOCK();
      uVar37 = (ulonglong)(int)(uint)local_d90;
      local_cc0 = (FInstancedSubmesh *)(local_d98.Data + uVar37 * 0x28);
      local_d40 = (uint)local_d90;
      pFVar51 = local_d10;
      uVar29 = uVar37;
      FVar43.Data = local_d98.Data;
      while( true ) {
        pFVar19 = local_cc0;
        if ((int)uVar37 != (int)uVar29) {
          local_db8 = 0;
          `TCheckedPointerIterator<``UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_5>::operator()'::__l2::FInstancedSubmesh,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_db8);
        }
        if ((FInstancedSubmesh *)FVar43.Data == pFVar19) break;
        LOCK();
        **(int **)((longlong)this + 0x80) = **(int **)((longlong)this + 0x80) + 1;
        UNLOCK();
        local_d38 = ::operator_new(0x48);
        if (local_d38 == (undefined8 *)0x0) {
          local_d38 = (undefined8 *)0x0;
        }
        else {
          local_d38[1] = 0;
          local_d38[2] = 0;
          local_d38[3] = 0x7fefffffffffffff;
          local_d38[4] = 0x7fefffffffffffff;
          local_d38[5] = 0x7fefffffffffffff;
          local_d38[6] = 0xffefffffffffffff;
          local_d38[7] = 0xffefffffffffffff;
          local_d38[8] = 0xffefffffffffffff;
        }
        pFVar30 = (FCompressedMeshSpatialWrapper *)0x0;
        *local_d38 = 0;
        if (((((FInstancedSubmesh *)FVar43.Data)->Mesh).Object == (FDynamicMesh3 *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar42 = (((((FInstancedSubmesh *)FVar43.Data)->Mesh).Object)->TriangleRefCounts).UsedCount;
        local_d80 = uVar42;
        if (((int)uVar42 < 1) &&
           (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<8012027019833378914>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                                ,0x862,"SubmeshTriangleCount > 0"), bVar21)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar55 = (((FInstancedSubmesh *)FVar43.Data)->Mesh).Object;
        pFVar33 = pFVar30;
        if (**(char **)((longlong)this + 0x58) == '\0') {
          if ((pFVar55 == (FDynamicMesh3 *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar21)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar55 = (((FInstancedSubmesh *)FVar43.Data)->Mesh).Object;
          pFVar34 = ::operator_new(0x270);
          if (pFVar34 != (FDynamicMeshSpatialWrapper *)0x0) {
            pFVar33 = (FCompressedMeshSpatialWrapper *)
                      UE::Geometry::FDynamicMeshSpatialWrapper::FDynamicMeshSpatialWrapper
                                (pFVar34,pFVar55);
          }
        }
        else {
          if ((pFVar55 == (FDynamicMesh3 *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar21)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar55 = (((FInstancedSubmesh *)FVar43.Data)->Mesh).Object;
          pFVar32 = ::operator_new(0x380);
          if (pFVar32 != (FCompressedMeshSpatialWrapper *)0x0) {
            pFVar33 = UE::Geometry::FCompressedMeshSpatialWrapper::FCompressedMeshSpatialWrapper
                                (pFVar32,pFVar55);
          }
        }
        *(undefined2 *)&pFVar33->field_0x18 = 0x100;
        dVar58 = *(double *)(*(longlong *)((longlong)this + 0x28) + 8);
        if (((FInstancedSubmesh *)FVar43.Data)->ComputedThickness <= dVar58 &&
            dVar58 != ((FInstancedSubmesh *)FVar43.Data)->ComputedThickness) {
          pFVar33->field_0x1a = 1;
          dVar58 = (*(double *)(*(longlong *)((longlong)this + 0x28) + 8) -
                   ((FInstancedSubmesh *)FVar43.Data)->ComputedThickness) * dVar59;
          *(double *)&pFVar33->field_0x20 = dVar58;
          pFVar33->field_0x28 =
               dVar58 < *(double *)(*(longlong *)((longlong)this + 0x28) + 8) * dVar14;
        }
        pFVar32 = ::operator_new(0x40);
        if (pFVar32 == (FCompressedMeshSpatialWrapper *)0x0) {
          local_d30.Object = pFVar17;
          local_d30.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar31;
        }
        else {
          *(undefined4 *)&pFVar32->field_0x8 = 1;
          *(undefined4 *)&pFVar32->field_0xc = 1;
          *(undefined ***)pFVar32 =
               &
               ___7__TIntrusiveReferenceController_UFSpatialWrapperInfo_FMeshSceneAdapter_Geometry_UE___00_SharedPointerInternals__6B_
          ;
          *(undefined8 *)&pFVar32->field_0x10 = 0;
          *(undefined8 *)&pFVar32->field_0x20 = 0;
          (pFVar32->BuildInputMesh).Vertices.CurBlock = 0;
          (pFVar32->BuildInputMesh).Vertices.CurBlockUsed = 0;
          *(undefined8 *)&pFVar32->field_0x18 = 1;
          (pFVar32->BuildInputMesh)._padding_ = 0;
          *(undefined8 *)&pFVar32->field_0x28 = 0;
          if ((&pFVar32->field_0x10 == (undefined1 *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar21)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          LOCK();
          *(int *)&pFVar32->field_0x8 = *(int *)&pFVar32->field_0x8 + 1;
          UNLOCK();
          pFVar30 = pFVar32;
          local_d30.Object = (FSpatialWrapperInfo *)&pFVar32->field_0x10;
          local_d30.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar32;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar30);
        if ((local_d30.Object == (FSpatialWrapperInfo *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pIVar8 = ((local_d30.Object)->SpatialWrapper).Ptr;
        ((local_d30.Object)->SpatialWrapper).Ptr = (IMeshSpatialWrapper *)pFVar33;
        if (pIVar8 != (IMeshSpatialWrapper *)0x0) {
          (**(code **)pIVar8->_padding_)(pIVar8,1);
        }
        puVar36 = *(undefined8 **)((longlong)this + 0x38);
        if ((local_d30.Object == (FSpatialWrapperInfo *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pIVar8 = ((local_d30.Object)->SpatialWrapper).Ptr;
        EnterCriticalSection((LPCRITICAL_SECTION)puVar36[1]);
        pFVar9 = (ForAnyElementType *)*puVar36;
        local_bd8 = uVar42;
        uStack_bd0 = pIVar8;
        if (((pFVar9->Data <= (FScriptContainerElement *)&local_bd8) &&
            ((FScriptContainerElement *)&local_bd8 <
             pFVar9->Data + (longlong)*(int *)((longlong)&pFVar9[1].Data + 4) * 0x10)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar24 = *(int *)&pFVar9[1].Data;
        piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
        if (iVar24 == *piVar1) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,pFVar9,piVar1);
        }
        *(int *)&pFVar9[1].Data = iVar24 + 1;
        pFVar49 = pFVar9->Data + (longlong)iVar24 * 0x10;
        *(uint *)pFVar49 = local_bd8;
        *(int *)(pFVar49 + 4) = iStack_bd4;
        *(int *)(pFVar49 + 8) = (int)uStack_bd0;
        *(int *)(pFVar49 + 0xc) = uStack_bd0._4_4_;
        LeaveCriticalSection((LPCRITICAL_SECTION)puVar36[1]);
        EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x60));
        **(int **)((longlong)this + 0x88) = **(int **)((longlong)this + 0x88) + uVar42;
        **(int **)((longlong)this + 0x68) =
             **(int **)((longlong)this + 0x68) +
             uVar42 * (((FInstancedSubmesh *)FVar43.Data)->NewTransforms).ArrayNum;
        if ((local_d30.Object == (FSpatialWrapperInfo *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_ba0 = ((local_d30.Object)->SpatialWrapper).Ptr;
        TMapBase<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,0>_>
        ::
        Emplace<void_*_const_&,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_const_&>
                  ((TMapBase<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,0>_>
                    *)(*(longlong *)((longlong)this + 0x90) + 0x18),&local_ba0,&local_d30);
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x60));
        iVar24 = (((FInstancedSubmesh *)FVar43.Data)->NewTransforms).ArrayNum;
        pFVar49 = (((FInstancedSubmesh *)FVar43.Data)->NewTransforms).AllocatorInstance.Data;
        pFVar40 = pFVar49 + (longlong)iVar24 * 0xb0;
        while( true ) {
          puVar36 = (undefined8 *)0x0;
          if ((((FInstancedSubmesh *)FVar43.Data)->NewTransforms).ArrayNum != iVar24) {
            local_db7[0] = 0;
            `TCheckedPointerIterator<UE::Geometry::TTransformSequence3<double>,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_db7);
          }
          pFVar51 = local_d10;
          uVar42 = local_d80;
          if (pFVar49 == pFVar40) break;
          local_450 = *(int *)(pFVar49 + 0xa8);
          lVar44 = (longlong)local_450;
          local_4f8.SecondaryData = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0;
          pFVar48 = pFVar49;
          if (*(FScriptContainerElement **)(pFVar49 + 0xa0) != (FScriptContainerElement *)0x0) {
            pFVar48 = *(FScriptContainerElement **)(pFVar49 + 0xa0);
          }
          if (local_450 == 0) {
            local_44c = 2;
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TTransformSRT3<double>_>_>
                      (0x50,8,local_450,0,&local_4f8,local_450,&local_44c);
            FVar45 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)&local_4f8;
            if (local_4f8.SecondaryData !=
                (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
              FVar45 = local_4f8.SecondaryData;
            }
            memcpy((void *)FVar45,pFVar48,lVar44 * 0x50);
          }
          puVar35 = ::operator_new(0xe0);
          iVar25 = local_450;
          if (puVar35 != (undefined8 *)0x0) {
            puVar35[2] = 0;
            *(undefined4 *)(puVar35 + 3) = 1;
            puVar35[0x18] = 0;
            puVar35[1] = 5;
            *(undefined4 *)(puVar35 + 0x19) = 0;
            *(undefined4 *)((longlong)puVar35 + 0xcc) = 2;
            *(undefined1 *)(puVar35 + 0x1a) = 0;
            puVar35[0x1b] = 0;
            puVar36 = puVar35;
          }
          *puVar36 = 0;
          *(undefined4 *)(puVar36 + 1) = 4;
          *(undefined4 *)((longlong)puVar36 + 0xc) = 0;
          _Dst = (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)(puVar36 + 4);
          local_db0 = puVar36;
          if (_Dst != &local_4f8) {
            lVar44 = (longlong)local_450;
            piVar1 = (int *)((longlong)puVar36 + 0xcc);
            *(int *)(puVar36 + 0x19) = local_450;
            FVar45 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)&local_4f8;
            if (local_4f8.SecondaryData !=
                (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
              FVar45 = local_4f8.SecondaryData;
            }
            if ((local_450 == 0) && (*piVar1 == 0)) {
              *piVar1 = 2;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TTransformSRT3<double>_>_>
                        (0x50,8,local_450,*piVar1,_Dst,local_450,piVar1);
              if ((ForElementType<UE::Geometry::TTransformSRT3<double>_> *)puVar36[0x18] !=
                  (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)0x0) {
                _Dst = (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)puVar36[0x18];
              }
              if (iVar25 != 0) {
                memcpy(_Dst,(void *)FVar45,lVar44 * 0x50);
              }
            }
          }
          *(undefined1 *)(local_db0 + 0x1a) = 0;
          if ((local_d30.Object == (FSpatialWrapperInfo *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar21)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar18 = local_d30.Object;
          local_cd8 = local_db0;
          pFVar48 = ((local_d30.Object)->ParentMeshes).AllocatorInstance.Data;
          if (((pFVar48 <= (FScriptContainerElement *)&local_cd8) &&
              ((FScriptContainerElement *)&local_cd8 <
               pFVar48 + (longlong)((local_d30.Object)->ParentMeshes).ArrayMax * 8)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar21)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar25 = (pFVar18->ParentMeshes).ArrayNum;
          piVar1 = &(pFVar18->ParentMeshes).ArrayMax;
          if (iVar25 == *piVar1) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(pFVar18->ParentMeshes).AllocatorInstance,piVar1);
          }
          (pFVar18->ParentMeshes).ArrayNum = iVar25 + 1;
          *(undefined8 **)((pFVar18->ParentMeshes).AllocatorInstance.Data + (longlong)iVar25 * 8) =
               local_cd8;
          if ((local_d30.Object == (FSpatialWrapperInfo *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar21)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          puVar36 = local_d38;
          local_db0[0x1b] =
               *(undefined8 *)
                &((TDynamicVector<UE::Math::TVector<double>,512> *)
                 &(local_d30.Object)->SpatialWrapper)->CurBlock;
          if ((((undefined8 **)local_d38[1] <= &local_db0) &&
              (&local_db0 < (undefined8 **)local_d38[1] + *(int *)((longlong)local_d38 + 0x14))) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar21)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar25 = *(int *)(puVar36 + 2);
          if (iVar25 == *(int *)((longlong)puVar36 + 0x14)) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)(puVar36 + 1),
                                (int *)((longlong)puVar36 + 0x14));
          }
          *(int *)(puVar36 + 2) = iVar25 + 1;
          *(undefined8 **)(puVar36[1] + (longlong)iVar25 * 8) = local_db0;
          LOCK();
          **(int **)((longlong)local_d08 + 0x98) = **(int **)((longlong)local_d08 + 0x98) + 1;
          UNLOCK();
          local_db0 = (undefined8 *)0x0;
          if (local_4f8.SecondaryData != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0)
          {
            FMemory::Free((void *)local_4f8.SecondaryData);
          }
          pFVar49 = pFVar49 + 0xb0;
        }
        iStack_cec = (((FInstancedSubmesh *)FVar43.Data)->NewTransforms).ArrayNum;
        local_cf0 = local_d80;
        pFVar49 = local_d10[3].Data.AllocatorInstance.Data;
        if (((pFVar49 <= (FScriptContainerElement *)&local_cf0) &&
            ((FScriptContainerElement *)&local_cf0 <
             pFVar49 + (longlong)local_d10[3].Data.ArrayMax * 8)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar24 = pFVar51[3].Data.ArrayNum;
        piVar1 = &pFVar51[3].Data.ArrayMax;
        if (iVar24 == *piVar1) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,(ForAnyElementType *)(pFVar51 + 3),piVar1);
        }
        this = local_d08;
        pFVar51[3].Data.ArrayNum = iVar24 + 1;
        *(ulonglong *)(pFVar51[3].Data.AllocatorInstance.Data + (longlong)iVar24 * 8) =
             CONCAT44(iStack_cec,local_cf0);
        piVar1 = (int *)((longlong)&pFVar51[4].Data.AllocatorInstance.Data + 4);
        *piVar1 = *piVar1 + (((FInstancedSubmesh *)FVar43.Data)->NewTransforms).ArrayNum;
        *(uint *)&pFVar51[4].Data.AllocatorInstance.Data =
             *(int *)&pFVar51[4].Data.AllocatorInstance.Data + uVar42;
        piVar1 = &pFVar51[4].Data.ArrayNum;
        *piVar1 = *piVar1 + uVar42;
        EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)local_d08 + 0x60));
        lVar44 = *(longlong *)((longlong)this + 0x90);
        if (((*(undefined8 ***)(lVar44 + 8) <= &local_d38) &&
            (&local_d38 < *(undefined8 ***)(lVar44 + 8) + *(int *)(lVar44 + 0x14))) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar24 = *(int *)(lVar44 + 0x10);
        if (iVar24 == *(int *)(lVar44 + 0x14)) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)(lVar44 + 8),(int *)(lVar44 + 0x14));
        }
        *(int *)(lVar44 + 0x10) = iVar24 + 1;
        *(undefined8 **)(*(longlong *)(lVar44 + 8) + (longlong)iVar24 * 8) = local_d38;
        local_d38 = (undefined8 *)0x0;
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x60));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d30.SharedReferenceCount.ReferenceController);
        puVar36 = local_d38;
        if (local_d38 != (undefined8 *)0x0) {
          DestructItems<TUniquePtr<UE::Geometry::FActorChildMesh,TDefaultDelete<UE::Geometry::FActorChildMesh>_>,int>
                    ((TUniquePtr<UE::Geometry::FActorChildMesh,TDefaultDelete<UE::Geometry::FActorChildMesh>_>
                      *)local_d38[1],*(int *)(local_d38 + 2));
          pvVar50 = (void *)puVar36[1];
          if (pvVar50 != (void *)0x0) {
            FMemory::Free(pvVar50);
          }
          ::operator_delete(puVar36,0x48);
        }
        uVar37 = local_d90 & 0xffffffff;
        FVar43.Data = FVar43.Data + 0x28;
        uVar29 = (ulonglong)local_d40;
      }
      LOCK();
      **(int **)((longlong)this + 0xa0) =
           **(int **)((longlong)this + 0xa0) + pFVar51[4].Data.ArrayNum;
      UNLOCK();
    }
    DestructItems<__UE::Geometry::FMeshSceneAdapter::Build_FullDecompose_::__l2::<lambda_5>::operator()_::__l2::FInstancedSubmesh,int>
              ((FInstancedSubmesh *)local_d98.Data,(uint)local_d90);
    if ((FInstancedSubmesh *)local_d98.Data != (FInstancedSubmesh *)0x0) {
      FMemory::Free(local_d98.Data);
    }
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_7d8);
  }
  DestructItems<TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_> *)local_d20.Data,
             local_d18[0]);
  if ((TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_> *)local_d20.Data !=
      (TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_d20.Data);
  }
  if (local_ca0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ca0.AllocatorInstance.Data);
  }
  if (local_c90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c90.AllocatorInstance.Data);
  }
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
            (&local_bf8.Components);
  DestructItems<UE::Geometry::TTransformSequence3<double>,int>
            ((TTransformSequence3<double> *)local_c80.AllocatorInstance.Data,local_c80.ArrayNum);
  if (local_c80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c80.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_cd0.AllocatorInstance.Data,
             local_cd0.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_cd0.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_cd0.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::TTransformSequence3<double>,int>
            ((TTransformSequence3<double> *)local_da8.AllocatorInstance.Data,local_da8.ArrayNum);
  if (local_da8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_da8.AllocatorInstance.Data);
  }
  if (local_d00.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d00.AllocatorInstance.Data);
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_a08);
  if (bVar57) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14cadf850

void __thiscall
`UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_7>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)this);
  if (*(int *)(*(longlong *)((longlong)this + 8) + 8) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingBuildJobs.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                       ,0x8b6,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar1 = *(longlong **)((longlong)this + 8);
  if ((int)plVar1[1] < 1) {
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
  plVar3 = *(longlong **)(*plVar1 + (longlong)(int)plVar1[1] * 0x10 + -8);
  *(int *)(plVar1 + 1) = (int)plVar1[1] + -1;
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)this);
  (**(code **)(*plVar3 + 8))(plVar3,*(undefined8 *)((longlong)this + 0x10));
  iVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
  if (iVar5 == 1) {
    LOCK();
    **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
    UNLOCK();
  }
  return;
}

// AddActors @ 14cae4860

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshSceneAdapter::AddActors
          (FMeshSceneAdapter *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  uint uVar3;
  AActor *pAVar4;
  uint *puVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  FActorAdapter *pFVar12;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  int iVar19;
  uint uVar20;
  undefined1 *puVar22;
  uint *puVar23;
  uint uVar24;
  bool bVar25;
  undefined1 local_res20 [8];
  undefined1 local_188;
  undefined1 local_187;
  undefined1 local_186 [6];
  FActorAdapter *local_180;
  TArray<UE::Geometry::FActorAdapter_*,TSizedDefaultAllocator<32>_> local_178;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_168;
  FActorAdapter *local_158;
  AActor *local_150;
  uint local_148;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_140;
  uint uStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  uint uStack_124;
  uint local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  FScriptContainerElement *local_110;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined4 local_6c;
  undefined4 local_4c;
  FActorAdapter *pFVar21;
  
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1523,"MeshScene_AddActors",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x5f3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1523);
  }
  local_148 = param_1->ArrayNum;
  uVar14 = (ulonglong)(int)local_148;
  pFVar17 = (param_1->AllocatorInstance).Data;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0 = pFVar17 + uVar14 * 8;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  do {
    pFVar9 = local_f0;
    pFVar21 = (FActorAdapter *)0x0;
    local_110 = pFVar17;
    if (param_1->ArrayNum != (int)uVar14) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar17 == pFVar9) {
      InitializeSpatialWrappers(this,&local_178);
      if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
      if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.AllocatorInstance.Data);
      }
      if (bVar25) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    pAVar4 = *(AActor **)pFVar17;
    local_150 = pAVar4;
    pFVar12 = ::operator_new(0x48);
    local_180 = pFVar21;
    if (pFVar12 != (FActorAdapter *)0x0) {
      (pFVar12->ChildMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar12->ChildMeshes).ArrayNum = 0;
      (pFVar12->ChildMeshes).ArrayMax = 0;
      (pFVar12->WorldBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
      (pFVar12->WorldBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
      (pFVar12->WorldBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
      (pFVar12->WorldBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
      (pFVar12->WorldBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
      (pFVar12->WorldBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
      local_180 = pFVar12;
    }
    local_180->SourceActor = pAVar4;
    pTVar13 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                        (&pAVar4->OwnedComponents);
    uVar3 = *(uint *)&(pTVar13->Elements).field_0x28;
    uStack_134 = 1;
    local_120 = 0;
    puVar1 = &(pTVar13->Elements).field_0x10;
    uStack_124 = local_120;
    if (uVar3 != 0) {
      puVar5 = *(uint **)&(pTVar13->Elements).field_0x20;
      puVar23 = (uint *)puVar1;
      if (puVar5 != (uint *)0x0) {
        puVar23 = puVar5;
      }
      uVar20 = *puVar23;
      pFVar12 = pFVar21;
      while (local_120 = (uint)pFVar12, uVar20 == 0) {
        iVar19 = (int)pFVar21;
        local_120 = local_120 + 0x20;
        pFVar12 = (FActorAdapter *)(ulonglong)local_120;
        uVar20 = iVar19 + 1;
        pFVar21 = (FActorAdapter *)(ulonglong)uVar20;
        uStack_124 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
        goto LAB_14cae4a1e;
        uVar20 = puVar23[(longlong)iVar19 + 1];
      }
      uStack_134 = -uVar20 & uVar20;
      uVar14 = (ulonglong)uStack_134 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_108 = (int)lVar15;
      uStack_124 = (local_120 - 1) + local_108;
      if ((int)uVar3 < (int)uStack_124) {
        uStack_124 = uVar3;
      }
    }
LAB_14cae4a1e:
    uVar20 = *(uint *)&(pTVar13->Elements).field_0x28;
    uStack_11c = local_6c;
    uVar24 = uVar20 & 0xffffffe0;
    iStack_118 = *(int *)&(pTVar13->Elements).field_0x8 - *(int *)&(pTVar13->Elements).field_0x34;
    uStack_138 = (uint)pFVar21;
    TStack_e0._padding_ = CONCAT44(uStack_134,uStack_138);
    uStack_128 = 0xffffffff;
    TStack_e0.CurrentBitIndex = uStack_124;
    TStack_e0.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar20 >> 5;
    TStack_e0._28_4_ = local_6c;
    TStack_e0.BaseBitIndex = local_120;
    uStack_c0 = CONCAT44(uStack_114,iStack_118);
    local_140 = pTVar13;
    local_130 = puVar1;
    local_e8 = pTVar13;
    TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar20 < 0) || ((int)uVar3 < (int)uVar20)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar3 = *(uint *)&(pTVar13->Elements).field_0x28;
    if (uVar20 != uVar3) {
      puVar6 = *(undefined1 **)&(pTVar13->Elements).field_0x20;
      puVar22 = puVar1;
      if (puVar6 != (undefined1 *)0x0) {
        puVar22 = puVar6;
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar19 * 4);
      while (uVar20 == 0) {
        lVar15 = (longlong)iVar19;
        uVar24 = uVar24 + 0x20;
        iVar19 = iVar19 + 1;
        uVar20 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_14cae4b21;
        uVar20 = *(uint *)(puVar22 + lVar15 * 4 + 4);
      }
      uVar14 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_104 = (int)lVar15;
      uVar20 = local_104 + -1 + uVar24;
      if ((int)uVar3 < (int)uVar20) {
        uVar20 = uVar3;
      }
    }
LAB_14cae4b21:
    while( true ) {
      pTVar10 = local_e8;
      if (*(int *)&(local_e8->Elements).field_0x8 - *(int *)&(local_e8->Elements).field_0x34 !=
          (int)uStack_c0) {
        local_188 = 0;
        `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_188);
      }
      uVar8 = local_168._8_8_;
      if (((TStack_e0.CurrentBitIndex == uVar20) &&
          (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar10 == pTVar13)) break;
      CollectComponentChildMeshes
                (*(UActorComponent **)
                  (*(longlong *)&pTVar10->Elements + (longlong)TStack_e0.CurrentBitIndex * 0x10),
                 local_180);
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    }
    iVar19 = local_168.ArrayMax;
    local_168._8_8_ = (ulonglong)(uint)local_168.ArrayMax << 0x20;
    if (((longlong)uVar8 < 0) && (iVar19 != 0)) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_168.AllocatorInstance,0,&local_168.ArrayMax);
    }
    AActor::GetAllChildActors(local_150,&local_168,true);
    uVar16 = (ulonglong)local_168.ArrayNum;
    local_150 = (AActor *)CONCAT44(local_150._4_4_,local_168.ArrayNum);
    local_f8 = local_168.AllocatorInstance.Data + uVar16 * 8;
    uVar14 = uVar16;
    FVar18.Data = local_168.AllocatorInstance.Data;
    while( true ) {
      pFVar17 = local_f8;
      if ((int)uVar16 != (int)uVar14) {
        local_187 = 0;
        `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_187);
      }
      if (FVar18.Data == pFVar17) break;
      pTVar13 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                          ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                            *)(*(longlong *)FVar18.Data + 0x248));
      uVar3 = *(uint *)&(pTVar13->Elements).field_0x28;
      uStack_138 = 0;
      uStack_134 = 1;
      puVar1 = &(pTVar13->Elements).field_0x10;
      uStack_124 = uStack_138;
      local_120 = uStack_138;
      if (uVar3 != 0) {
        puVar5 = *(uint **)&(pTVar13->Elements).field_0x20;
        puVar23 = (uint *)puVar1;
        if (puVar5 != (uint *)0x0) {
          puVar23 = puVar5;
        }
        uVar20 = *puVar23;
        local_120 = 0;
        uStack_138 = 0;
        while (uVar20 == 0) {
          lVar15 = (longlong)(int)uStack_138;
          local_120 = local_120 + 0x20;
          uStack_138 = uStack_138 + 1;
          uStack_124 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_138)
          goto LAB_14cae4c8e;
          uVar20 = puVar23[lVar15 + 1];
        }
        uStack_134 = -uVar20 & uVar20;
        uVar14 = (ulonglong)uStack_134 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_100 = (int)lVar15;
        uStack_124 = (local_120 - 1) + local_100;
        if ((int)uVar3 < (int)uStack_124) {
          uStack_124 = uVar3;
        }
      }
LAB_14cae4c8e:
      uVar20 = *(uint *)&(pTVar13->Elements).field_0x28;
      uStack_11c = local_4c;
      uVar24 = uVar20 & 0xffffffe0;
      iStack_118 = *(int *)&(pTVar13->Elements).field_0x8 - *(int *)&(pTVar13->Elements).field_0x34;
      TStack_b0._padding_ = CONCAT44(uStack_134,uStack_138);
      uStack_128 = 0xffffffff;
      TStack_b0.CurrentBitIndex = uStack_124;
      TStack_b0.UnvisitedBitMask = 0xffffffff;
      iVar19 = (int)uVar20 >> 5;
      TStack_b0._28_4_ = local_4c;
      TStack_b0.BaseBitIndex = local_120;
      uStack_90 = CONCAT44(uStack_114,iStack_118);
      local_140 = pTVar13;
      local_130 = puVar1;
      local_b8 = pTVar13;
      TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar20 < 0) || ((int)uVar3 < (int)uVar20)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(uint *)&(pTVar13->Elements).field_0x28;
      if (uVar20 != uVar3) {
        puVar6 = *(undefined1 **)&(pTVar13->Elements).field_0x20;
        puVar22 = puVar1;
        if (puVar6 != (undefined1 *)0x0) {
          puVar22 = puVar6;
        }
        uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar19 * 4);
        while (uVar20 == 0) {
          lVar15 = (longlong)iVar19;
          uVar24 = uVar24 + 0x20;
          iVar19 = iVar19 + 1;
          uVar20 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
          goto LAB_14cae4da0;
          uVar20 = *(uint *)(puVar22 + lVar15 * 4 + 4);
        }
        uVar14 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_fc = (int)lVar15;
        uVar20 = local_fc + -1 + uVar24;
        if ((int)uVar3 < (int)uVar20) {
          uVar20 = uVar3;
        }
      }
LAB_14cae4da0:
      while( true ) {
        pTVar10 = local_b8;
        if (*(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34 !=
            (int)uStack_90) {
          local_186[0] = 0;
          `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_186);
        }
        if (((TStack_b0.CurrentBitIndex == uVar20) &&
            (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar10 == pTVar13)) break;
        CollectComponentChildMeshes
                  (*(UActorComponent **)
                    (*(longlong *)&pTVar10->Elements + (longlong)TStack_b0.CurrentBitIndex * 0x10),
                   local_180);
        TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
      }
      uVar16 = local_168._8_8_ & 0xffffffff;
      FVar18.Data = FVar18.Data + 8;
      uVar14 = (ulonglong)local_150 & 0xffffffff;
    }
    local_158 = local_180;
    if (((local_178.AllocatorInstance.Data <= (FScriptContainerElement *)&local_158) &&
        ((FScriptContainerElement *)&local_158 <
         local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 8)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar19 = local_178.ArrayNum;
    if (local_178.ArrayNum == local_178.ArrayMax) {
      iVar19 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_178.AllocatorInstance,&local_178.ArrayMax);
    }
    local_178.ArrayNum = iVar19 + 1;
    *(FActorAdapter **)(local_178.AllocatorInstance.Data + (longlong)iVar19 * 8) = local_158;
    pFVar17 = (this->SceneActors).AllocatorInstance.Data;
    if (((pFVar17 <= (FScriptContainerElement *)&local_180) &&
        ((FScriptContainerElement *)&local_180 <
         pFVar17 + (longlong)(this->SceneActors).ArrayMax * 8)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar19 = (this->SceneActors).ArrayNum;
    piVar2 = &(this->SceneActors).ArrayMax;
    if (iVar19 == *piVar2) {
      iVar19 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(this->SceneActors).AllocatorInstance,piVar2);
    }
    pFVar17 = local_110 + 8;
    (this->SceneActors).ArrayNum = iVar19 + 1;
    *(FActorAdapter **)((this->SceneActors).AllocatorInstance.Data + (longlong)iVar19 * 8) =
         local_180;
    uVar14 = (ulonglong)local_148;
    local_180 = (FActorAdapter *)0x0;
  } while( true );
}

// AddComponents @ 14cae64d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshSceneAdapter::AddComponents
          (FMeshSceneAdapter *this,TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UActorComponent *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FActorAdapter *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  FActorAdapter *local_48;
  FActorAdapter *local_40;
  TArray<UE::Geometry::FActorAdapter_*,TSizedDefaultAllocator<32>_> local_38;
  
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  pFVar2 = pFVar10 + (longlong)iVar3 * 8;
  do {
    if (param_1->ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UActorComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar10 == pFVar2) {
      InitializeSpatialWrappers(this,&local_38);
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return;
    }
    pUVar4 = *(UActorComponent **)pFVar10;
    if (pUVar4 != (UActorComponent *)0x0) {
      pFVar9 = ::operator_new(0x48);
      local_48 = (FActorAdapter *)0x0;
      if (pFVar9 != (FActorAdapter *)0x0) {
        pFVar9->SourceActor = (AActor *)0x0;
        (pFVar9->ChildMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar9->ChildMeshes).ArrayNum = 0;
        (pFVar9->ChildMeshes).ArrayMax = 0;
        (pFVar9->WorldBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
        (pFVar9->WorldBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
        (pFVar9->WorldBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
        (pFVar9->WorldBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
        (pFVar9->WorldBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
        (pFVar9->WorldBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
        local_48 = pFVar9;
      }
      local_48->SourceActor = pUVar4->OwnerPrivate;
      CollectComponentChildMeshes(pUVar4,local_48);
      if (0 < (local_48->ChildMeshes).ArrayNum) {
        local_40 = local_48;
        if (((local_38.AllocatorInstance.Data <= (FScriptContainerElement *)&local_40) &&
            ((FScriptContainerElement *)&local_40 <
             local_38.AllocatorInstance.Data + (longlong)local_38.ArrayMax * 8)) &&
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
        iVar8 = local_38.ArrayNum;
        if (local_38.ArrayNum == local_38.ArrayMax) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_38.AllocatorInstance,&local_38.ArrayMax);
        }
        local_38.ArrayNum = iVar8 + 1;
        *(FActorAdapter **)(local_38.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_40;
        pFVar5 = (this->SceneActors).AllocatorInstance.Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 <
             pFVar5 + (longlong)(this->SceneActors).ArrayMax * 8)) &&
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
        iVar8 = (this->SceneActors).ArrayNum;
        piVar1 = &(this->SceneActors).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->SceneActors).AllocatorInstance,piVar1);
        }
        (this->SceneActors).ArrayNum = iVar8 + 1;
        *(FActorAdapter **)((this->SceneActors).AllocatorInstance.Data + (longlong)iVar8 * 8) =
             local_48;
        local_48 = (FActorAdapter *)0x0;
      }
      pFVar9 = local_48;
      if (local_48 != (FActorAdapter *)0x0) {
        DestructItems<TUniquePtr<UE::Geometry::FActorChildMesh,TDefaultDelete<UE::Geometry::FActorChildMesh>_>,int>
                  ((TUniquePtr<UE::Geometry::FActorChildMesh,TDefaultDelete<UE::Geometry::FActorChildMesh>_>
                    *)(local_48->ChildMeshes).AllocatorInstance.Data,
                   (local_48->ChildMeshes).ArrayNum);
        pFVar5 = (pFVar9->ChildMeshes).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        ::operator_delete(pFVar9,0x48);
      }
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// Build @ 14caedb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshSceneAdapter::Build
          (FMeshSceneAdapter *this,FMeshSceneAdapterBuildOptions *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined1 auStackY_d8 [32];
  <lambda_1> local_98;
  FMeshSceneAdapterBuildOptions *local_90;
  undefined1 local_88 [8];
  FMeshSceneAdapterBuildOptions **local_80;
  undefined1 local_78 [16];
  TArrayView<std::nullptr_t,int> local_68;
  undefined1 local_58 [16];
  _RTL_CRITICAL_SECTION local_48;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1654,"MeshScene_Build",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x676);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1654);
  }
  local_80 = &local_90;
  local_88 = (undefined1  [8])
             Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::Build'::__l2::<lambda_1>,void,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_>
             ::Call;
  local_90 = param_1;
  ForEachSpatialWrapper
            (this,(TFunctionRef<void___cdecl(TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>)>
                   *)local_88);
  if (param_1->bThickenThinMeshes == false) {
    local_68.DataPtr = (void **)local_88;
    local_88 = (undefined1  [8])0x0;
    local_78._8_8_ = &local_68;
    local_80 = (FMeshSceneAdapterBuildOptions **)0x0;
    local_78._0_8_ =
         Core::Private::Function::
         TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::Build'::__l7::<lambda_2>,void,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_>
         ::Call;
    ForEachSpatialWrapper
              (this,(TFunctionRef<void___cdecl(TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>)>
                     *)local_78);
    InitializeCriticalSectionAndSpinCount(&local_48,4000);
    local_78._0_8_ = local_88;
    LOCK();
    local_90 = (FMeshSceneAdapterBuildOptions *)((ulonglong)local_90 & 0xffffffff00000000);
    UNLOCK();
    LOCK();
    UNLOCK();
    local_58._0_8_ =
         Core::Private::Function::
         TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::Build'::__l7::<lambda_3>,void,int>::
         Call;
    local_58._8_8_ = local_78;
    local_68.DataPtr = (void **)0x0;
    local_68.ArrayNum = 0;
    local_78._8_8_ = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(int)local_80,1,(TFunctionRef<void___cdecl(int)> *)local_58,
               local_98,None,&local_68);
    if ((param_1->bPrintDebugMessages != false) && (2 < (byte)LogGeometry._0_1_)) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    DeleteCriticalSection(&local_48);
    if (local_88 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_88);
    }
  }
  else {
    Build_FullDecompose(this,param_1);
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1706,"MeshScene_Build_ActorBounds",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x6aa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1706);
  }
  local_78._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::Build'::__l29::<lambda_4>,void,int>::
       Call;
  local_78._8_8_ = &local_68;
  local_58._0_8_ = (void **)0x0;
  local_58._8_8_ = local_58._8_8_ & 0xffffffff00000000;
  local_68.DataPtr = (void **)this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->SceneActors).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)local_78,local_98,None,
             (TArrayView<std::nullptr_t,int> *)local_58);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BuildSpatialEvaluationCache @ 14caedd80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshSceneAdapter::BuildSpatialEvaluationCache(FMeshSceneAdapter *this)

{
  int *piVar1;
  TArray<UE::Geometry::FMeshSceneAdapter::FSpatialCacheInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedPtr<UE::Geometry::FSparseDynamicOctree3,1> *pTVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plVar21;
  TReferenceControllerBase<1> *pTVar22;
  longlong *plVar23;
  FSparseDynamicOctree3 *pFVar24;
  longlong lVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  bool bVar29;
  double dVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  double dVar33;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136 [6];
  longlong *local_130;
  FSparseDynamicOctree3 *local_128;
  FSharedReferencer<1> FStack_120;
  FScriptContainerElement *local_118;
  FMeshSceneAdapter *local_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  code *local_b8;
  undefined1 *local_b0;
  TArrayView<std::nullptr_t,int> local_a8;
  code *local_98;
  FMeshSceneAdapter **local_90;
  
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2391,"MeshScene_BuildSpatialEvaluationCache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x957);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2391);
  }
  local_b0 = local_136;
  local_b8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::BuildSpatialEvaluationCache'::__l2::<lambda_1>,void,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_>
             ::Call;
  ForEachSpatialWrapper
            (this,(TFunctionRef<void___cdecl(TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>)>
                   *)&local_b8);
  pTVar2 = &this->SortedSpatials;
  piVar1 = &(this->SortedSpatials).ArrayMax;
  (this->SortedSpatials).ArrayNum = 0;
  if ((this->SortedSpatials).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar15 = _UNK_150a9e648;
  uVar14 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar13 = _UNK_1508ffb58;
  uVar12 = ___xmm_ffefffffffffffffffefffffffffffff;
  uVar11 = __real_ffefffffffffffff;
  lVar25 = __real_7fefffffffffffff;
  pFVar27 = (this->SceneActors).AllocatorInstance.Data;
  iVar5 = (this->SceneActors).ArrayNum;
  local_118 = pFVar27 + (longlong)iVar5 * 8;
  while( true ) {
    pFVar9 = local_118;
    if ((this->SceneActors).ArrayNum != iVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FActorAdapter,TDefaultDelete<UE::Geometry::FActorAdapter>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar27 == pFVar9) break;
    lVar7 = *(longlong *)pFVar27;
    plVar23 = *(longlong **)(lVar7 + 8);
    iVar6 = *(int *)(lVar7 + 0x10);
    plVar21 = plVar23 + iVar6;
    local_130 = plVar21;
    while( true ) {
      if (*(int *)(lVar7 + 0x10) != iVar6) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FActorChildMesh,TDefaultDelete<UE::Geometry::FActorChildMesh>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        plVar21 = local_130;
      }
      if (plVar23 == plVar21) break;
      lVar20 = *plVar23;
      lVar8 = *(longlong *)(lVar20 + 0xd8);
      if (lVar8 != 0) {
        local_108 = *(longlong *)pFVar27;
        pFVar9 = (pTVar2->AllocatorInstance).Data;
        lStack_f0 = lVar25;
        local_c8 = uVar11;
        local_e8 = uVar14;
        uStack_e0 = uVar15;
        local_d8 = uVar12;
        uStack_d0 = uVar13;
        lStack_100 = lVar20;
        local_f8 = lVar8;
        if (((pFVar9 <= (FScriptContainerElement *)&local_108) &&
            ((FScriptContainerElement *)&local_108 < pFVar9 + (longlong)*piVar1 * 0x48)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar18 = (this->SortedSpatials).ArrayNum;
        if (iVar18 == *piVar1) {
          iVar18 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->SortedSpatials).ArrayNum = iVar18 + 1;
        lVar20 = (longlong)iVar18;
        pFVar9 = (pTVar2->AllocatorInstance).Data;
        *(longlong *)(pFVar9 + lVar20 * 0x48) = local_108;
        *(longlong *)(pFVar9 + lVar20 * 0x48 + 8) = lStack_100;
        *(longlong *)(pFVar9 + lVar20 * 0x48 + 0x10) = local_f8;
        *(longlong *)(pFVar9 + lVar20 * 0x48 + 0x10 + 8) = lStack_f0;
        *(undefined8 *)(pFVar9 + lVar20 * 0x48 + 0x20) = local_e8;
        *(undefined8 *)(pFVar9 + lVar20 * 0x48 + 0x20 + 8) = uStack_e0;
        *(undefined8 *)(pFVar9 + lVar20 * 0x48 + 0x30) = local_d8;
        *(undefined8 *)(pFVar9 + lVar20 * 0x48 + 0x30 + 8) = uStack_d0;
        *(undefined8 *)(pFVar9 + lVar20 * 0x48 + 0x40) = local_c8;
        plVar21 = local_130;
      }
      plVar23 = plVar23 + 1;
    }
    pFVar27 = pFVar27 + 8;
  }
  local_res8 = SUB81(this,0);
  local_138 = 0;
  AlgoImpl::
  IntroSortInternal<UE::Geometry::FMeshSceneAdapter::FSpatialCacheInfo,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FMeshSceneAdapter::FSpatialCacheInfo,_UE::Geometry::FMeshSceneAdapter::BuildSpatialEvaluationCache_::__l2::<lambda_2>_>_>
            ((FSpatialCacheInfo *)(pTVar2->AllocatorInstance).Data,(this->SortedSpatials).ArrayNum,
             local_res8,(<lambda_2> *)&local_138);
  local_130 = (longlong *)CONCAT44(local_130._4_4_,(this->SortedSpatials).ArrayNum);
  (this->CachedWorldBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->CachedWorldBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->CachedWorldBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->CachedWorldBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->CachedWorldBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->CachedWorldBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2433,"MeshScene_BuildSpatialEvaluationCache_Bounds",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x981);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2433);
  }
  local_98 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::BuildSpatialEvaluationCache'::__l14::<lambda_3>,void,int>
             ::Call;
  local_90 = &local_110;
  local_a8.DataPtr = (void **)0x0;
  local_a8.ArrayNum = 0;
  local_110 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->SortedSpatials).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_98,(<lambda_1>)local_res8,None,&local_a8);
  pFVar28 = (pTVar2->AllocatorInstance).Data;
  iVar5 = (this->SortedSpatials).ArrayNum;
  pFVar27 = pFVar28 + 0x28;
  pFVar9 = pFVar28 + (longlong)iVar5 * 0x48;
  while( true ) {
    if ((this->SortedSpatials).ArrayNum != iVar5) {
      local_137 = 0;
      `TCheckedPointerIterator<UE::Geometry::FMeshSceneAdapter::FSpatialCacheInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_137);
    }
    if (pFVar28 == pFVar9) break;
    pFVar28 = pFVar28 + 0x48;
    dVar4 = (this->CachedWorldBounds).Min.field0_0x0._s_0.X;
    dVar33 = *(double *)(pFVar27 + -0x10);
    if (dVar4 <= *(double *)(pFVar27 + -0x10)) {
      dVar33 = dVar4;
    }
    (this->CachedWorldBounds).Min.field0_0x0._s_0.X = dVar33;
    dVar4 = *(double *)(pFVar27 + -8);
    uVar31 = SUB84(dVar4,0);
    uVar32 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar33 = *(double *)((longlong)&(this->CachedWorldBounds).Min.field0_0x0 + 8);
    if (dVar33 <= dVar4) {
      uVar31 = SUB84(dVar33,0);
      uVar32 = (undefined4)((ulonglong)dVar33 >> 0x20);
    }
    (this->CachedWorldBounds).Min.field0_0x0._s_0.Y = (double)CONCAT44(uVar32,uVar31);
    dVar4 = (this->CachedWorldBounds).Min.field0_0x0._s_0.Z;
    dVar33 = *(double *)pFVar27;
    if (dVar4 <= *(double *)pFVar27) {
      dVar33 = dVar4;
    }
    (this->CachedWorldBounds).Min.field0_0x0._s_0.Z = dVar33;
    dVar4 = *(double *)(pFVar27 + 8);
    uVar31 = SUB84(dVar4,0);
    uVar32 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar33 = *(double *)&(this->CachedWorldBounds).Max.field0_0x0;
    if (dVar4 <= dVar33) {
      uVar31 = SUB84(dVar33,0);
      uVar32 = (undefined4)((ulonglong)dVar33 >> 0x20);
    }
    (this->CachedWorldBounds).Max.field0_0x0._s_0.X = (double)CONCAT44(uVar32,uVar31);
    dVar4 = (this->CachedWorldBounds).Max.field0_0x0._s_0.Y;
    dVar33 = *(double *)(pFVar27 + 0x10);
    if (*(double *)(pFVar27 + 0x10) <= dVar4) {
      dVar33 = dVar4;
    }
    (this->CachedWorldBounds).Max.field0_0x0._s_0.Y = dVar33;
    dVar4 = *(double *)(pFVar27 + 0x18);
    uVar31 = SUB84(dVar4,0);
    uVar32 = (undefined4)((ulonglong)dVar4 >> 0x20);
    pFVar27 = pFVar27 + 0x48;
    dVar33 = *(double *)((longlong)&(this->CachedWorldBounds).Max.field0_0x0 + 0x10);
    if (dVar4 <= dVar33) {
      uVar31 = SUB84(dVar33,0);
      uVar32 = (undefined4)((ulonglong)dVar33 >> 0x20);
    }
    (this->CachedWorldBounds).Max.field0_0x0._s_0.Z = (double)CONCAT44(uVar32,uVar31);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pTVar22 = ::operator_new(0x1e0);
  if (pTVar22 == (TReferenceControllerBase<1> *)0x0) {
    pTVar22 = (TReferenceControllerBase<1> *)0x0;
    local_128 = ___xmm_00000000000000000000000000000010;
    pFVar24 = (FSparseDynamicOctree3 *)&DAT_00000010;
    FStack_120.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar22->SharedReferenceCount = (atomic<int>)0x1;
    pTVar22->WeakReferenceCount = (atomic<int>)0x1;
    pTVar22->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSparseDynamicOctree3_Geometry_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar22 + 1,0,0x1d0);
    FSparseDynamicOctree3::FSparseDynamicOctree3((FSparseDynamicOctree3 *)(pTVar22 + 1));
    pFVar24 = (FSparseDynamicOctree3 *)(pTVar22 + 1);
    if ((pFVar24 == (FSparseDynamicOctree3 *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar16)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    LOCK();
    pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
    UNLOCK();
    FStack_120.ReferenceController = pTVar22;
    local_128 = pFVar24;
  }
  pTVar3 = &this->Octree;
  if (pTVar3 != (TSharedPtr<UE::Geometry::FSparseDynamicOctree3,1> *)&local_128) {
    pTVar3->Object = pFVar24;
    local_128 = (FSparseDynamicOctree3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Octree).SharedReferenceCount,&FStack_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_120.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  dVar33 = (this->CachedWorldBounds).Max.field0_0x0._s_0.Z -
           (this->CachedWorldBounds).Min.field0_0x0._s_0.Z;
  dVar30 = (this->CachedWorldBounds).Max.field0_0x0._s_0.Y -
           (this->CachedWorldBounds).Min.field0_0x0._s_0.Y;
  dVar4 = (this->CachedWorldBounds).Max.field0_0x0._s_0.X -
          (this->CachedWorldBounds).Min.field0_0x0._s_0.X;
  if (dVar33 <= 0.0) {
    dVar33 = 0.0;
  }
  if (dVar30 <= 0.0) {
    dVar30 = 0.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  if (dVar33 <= dVar30) {
    dVar33 = dVar30;
  }
  if (dVar33 <= dVar4) {
    dVar33 = dVar4;
  }
  dVar33 = dVar33 * __real_3fd0000000000000;
  if ((pTVar3->Object == (FSparseDynamicOctree3 *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar3->Object->RootDimension = dVar33;
  if ((pTVar3->Object == (FSparseDynamicOctree3 *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar3->Object->MaxTreeDepth = 5;
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2452,"MeshScene_BuildSpatialEvaluationCache_OctreeInserts",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x994);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2452);
  }
  uVar26 = 0;
  if (0 < (int)local_130) {
    lVar25 = 0;
    do {
      if ((pTVar3->Object == (FSparseDynamicOctree3 *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar24 = pTVar3->Object;
      uVar19 = 0;
      if ((int)uVar26 < (this->SortedSpatials).ArrayNum) {
        uVar19 = ~uVar26 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FSparseDynamicOctree3::InsertObject
                (pFVar24,uVar26,
                 (TAxisAlignedBox3<double> *)((pTVar2->AllocatorInstance).Data + lVar25 + 0x18));
      uVar26 = uVar26 + 1;
      lVar25 = lVar25 + 0x48;
    } while ((int)uVar26 < (int)local_130);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  this->bHaveSpatialEvaluationCache = true;
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Build_FullDecompose @ 14caefd40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshSceneAdapter::Build_FullDecompose
          (FMeshSceneAdapter *this,FMeshSceneAdapterBuildOptions *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar4;
  undefined1 uVar6;
  undefined3 uVar8;
  code *pcVar9;
  TConsoleVariableData<int> *pTVar10;
  FProcessedSourceMeshStats *pFVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 auStackY_348 [32];
  <lambda_1> local_2c8;
  FIdentityFunctor local_2c7;
  undefined1 local_2c6;
  undefined1 local_2c5;
  FIdentityFunctor local_2c4 [4];
  EParallelForFlags local_2c0 [2];
  FProcessedSourceMeshStats *local_2b8;
  undefined8 local_2b0;
  FSpatialWrapperInfo **local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268 [2];
  FBuildJob *local_260;
  undefined8 local_258;
  FString local_250;
  FSpatialWrapperInfo ***local_240;
  FString local_238;
  code *local_228;
  FSpatialWrapperInfo ****local_220;
  FSpatialWrapperInfo ***local_218;
  undefined8 *local_210;
  TArrayView<std::nullptr_t,int> local_208;
  code *local_1f8;
  FSpatialWrapperInfo ****local_1f0;
  FBuildJob **local_1e8;
  _RTL_CRITICAL_SECTION *local_1e0;
  TArrayView<std::nullptr_t,int> local_1d8;
  code *local_1c8;
  _RTL_CRITICAL_SECTION **local_1c0;
  TArrayView<std::nullptr_t,int> local_1b8;
  code *local_1a8;
  _RTL_CRITICAL_SECTION **local_1a0;
  _RTL_CRITICAL_SECTION *local_198;
  FBuildJob **local_190;
  FMeshSceneAdapterBuildOptions *local_188;
  undefined4 *local_180;
  _RTL_CRITICAL_SECTION *local_178;
  FSpatialWrapperInfo ***local_170;
  FProcessedSourceMeshStats **local_168;
  undefined4 *local_160;
  undefined4 *local_158;
  FMeshSceneAdapterBuildOptions *local_150;
  EParallelForFlags *local_148;
  FBuildJob ***local_140;
  undefined4 *local_138;
  undefined4 *local_130;
  undefined4 *local_128;
  undefined1 *local_120;
  _RTL_CRITICAL_SECTION *local_118;
  undefined4 *local_110;
  undefined4 *local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined4 *local_f0;
  FMeshSceneAdapter *local_e8;
  undefined4 *local_e0;
  undefined4 *local_d8;
  undefined8 local_d0;
  double dStack_c8;
  undefined8 local_c0;
  double dStack_b8;
  ushort local_b0;
  undefined6 uStack_ae;
  _RTL_CRITICAL_SECTION local_a8;
  _RTL_CRITICAL_SECTION local_80;
  _RTL_CRITICAL_SECTION local_58;
  ulonglong local_30;
  undefined6 uVar3;
  undefined5 uVar5;
  undefined4 uVar7;
  
  pTVar10 = CVarMeshSceneAdapterDisableMultiThreading.Ref;
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_348;
  bVar12 = IsInParallelGameThread();
  if (!bVar12) {
    bVar12 = IsInGameThread();
    lVar15 = 4;
    if (!bVar12) goto LAB_14caefda1;
  }
  lVar15 = 0;
LAB_14caefda1:
  local_2c0[0] = Unbalanced - (*(int *)((longlong)pTVar10->ShadowedValue + lVar15) != 0);
  if ((param_1->bEnableUVQueries == false) && (param_1->bEnableNormalsQueries == false)) {
    local_2c5 = 1;
  }
  else {
    local_2c5 = 0;
  }
  local_240 = &local_2a8;
  local_2a8 = (FSpatialWrapperInfo **)0x0;
  local_220 = &local_240;
  local_2a0 = 0;
  local_228 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_1>,void,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_>
              ::Call;
  ForEachSpatialWrapper
            (this,(TFunctionRef<void___cdecl(TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>)>
                   *)&local_228);
  local_d0._0_1_ = param_1->bPrintDebugMessages;
  local_d0._1_1_ = param_1->bThickenThinMeshes;
  local_d0._2_6_ = *(undefined6 *)&param_1->field_0x2;
  dStack_c8 = param_1->DesiredMinThickness;
  local_218 = &local_2a8;
  local_c0 = *(undefined8 *)&param_1->bFilterTinyObjects;
  dStack_b8 = param_1->TinyObjectBoxMaxDimension;
  local_210 = &local_d0;
  local_208.DataPtr = (void **)0x0;
  local_208.ArrayNum = 0;
  local_1f8 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_2>,void,int>
              ::Call;
  local_1f0 = &local_218;
  uVar1 = param_1->bOnlySurfaceMaterials;
  uVar2 = param_1->bEnableUVQueries;
  uVar4 = param_1->bEnableNormalsQueries;
  uVar6 = param_1->bIgnoreStaticMeshSourceData;
  uVar8 = *(undefined3 *)&param_1->field_0x25;
  uVar7 = CONCAT31(uVar8,uVar6);
  uVar5 = CONCAT41(uVar7,uVar4);
  uVar3 = CONCAT51(uVar5,uVar2);
  _local_b0 = CONCAT62(uVar3,(ushort)(byte)uVar1);
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(int)local_2a0,1,(TFunctionRef<void___cdecl(int)> *)&local_1f8,
             local_2c8,local_2c0[0],&local_208);
  local_2c6 = 0;
  AlgoImpl::
  IntroSortInternal<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo_*,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo_*,_UE::Geometry::FMeshSceneAdapter::Build_FullDecompose_::__l2::<lambda_3>_>_>
            (local_2a8,(int)local_2a0,(FIdentityFunctor)local_2c8,(<lambda_3> *)&local_2c6);
  local_270 = 0;
  local_268[0] = 0;
  local_26c = 0;
  local_278 = 0;
  local_274 = 0;
  local_288 = 0;
  local_298 = 0;
  local_280 = 0;
  local_27c = 0;
  local_284 = 0;
  local_2b8 = (FProcessedSourceMeshStats *)0x0;
  local_2b0 = 0;
  TArray<`UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::FProcessedSourceMeshStats,TSizedDefaultAllocator<32>_>
  ::SetNum(&local_2b8,(int)local_2a0,Default);
  InitializeCriticalSectionAndSpinCount(&local_a8,4000);
  InitializeCriticalSectionAndSpinCount(&local_58,4000);
  local_260 = (FBuildJob *)0x0;
  local_258 = 0;
  InitializeCriticalSectionAndSpinCount(&local_80,4000);
  local_1e8 = &local_260;
  local_28c = 0;
  local_1e0 = &local_80;
  local_290 = 0;
  local_294 = 0;
  local_178 = &local_a8;
  local_170 = &local_2a8;
  local_168 = &local_2b8;
  local_160 = &local_270;
  local_1d8.DataPtr = (void **)0x0;
  local_158 = &local_26c;
  local_148 = local_2c0;
  local_140 = &local_1e8;
  local_138 = &local_28c;
  local_130 = &local_290;
  local_128 = &local_294;
  local_120 = &local_2c5;
  local_118 = &local_58;
  local_110 = &local_284;
  local_108 = &local_288;
  local_100 = local_268;
  local_f8 = &local_274;
  local_f0 = &local_27c;
  local_e0 = &local_278;
  local_d8 = &local_280;
  local_1c8 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_5>,void,int>
              ::Call;
  local_1c0 = &local_178;
  local_1d8.ArrayNum = 0;
  local_150 = param_1;
  local_e8 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(int)local_2a0,1,(TFunctionRef<void___cdecl(int)> *)&local_1c8,
             local_2c8,local_2c0[0],&local_1d8);
  if (((int)local_2a0 != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ToBuild.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                          ,0x8a8,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  AlgoImpl::
  IntroSortInternal<_UE::Geometry::FMeshSceneAdapter::Build_FullDecompose_::__l2::FBuildJob,int,FIdentityFunctor,TDereferenceWrapper<_UE::Geometry::FMeshSceneAdapter::Build_FullDecompose_::__l2::FBuildJob,_UE::Geometry::FMeshSceneAdapter::Build_FullDecompose_::__l2::<lambda_6>_>_>
            (local_260,(int)local_258,local_2c7,(<lambda_6> *)&local_2c7);
  local_198 = &local_a8;
  local_190 = &local_260;
  local_180 = &local_298;
  local_1b8.DataPtr = (void **)0x0;
  local_1b8.ArrayNum = 0;
  local_1a8 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::Build_FullDecompose'::__l2::<lambda_7>,void,int>
              ::Call;
  local_1a0 = &local_198;
  local_188 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(int)local_258,1,(TFunctionRef<void___cdecl(int)> *)&local_1a8,
             (<lambda_1>)local_2c7,local_2c0[0],&local_1b8);
  if (((int)local_258 != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PendingBuildJobs.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                          ,0x8bf,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  this->bSceneIsAllSolids = true;
  if (param_1->bPrintDebugMessages != false) {
    if (2 < (byte)LogGeometry._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    uVar18 = 0;
    AlgoImpl::
    IntroSortInternal<_UE::Geometry::FMeshSceneAdapter::Build_FullDecompose_::__l2::FProcessedSourceMeshStats,int,FIdentityFunctor,TDereferenceWrapper<_UE::Geometry::FMeshSceneAdapter::Build_FullDecompose_::__l2::FProcessedSourceMeshStats,_UE::Geometry::FMeshSceneAdapter::Build_FullDecompose_::__l19::<lambda_8>_>_>
              (local_2b8,(int)local_2b0,local_2c4[0],(<lambda_8> *)local_2c4);
    iVar13 = 0x14;
    if ((int)local_2b0 < 0x14) {
      iVar13 = (int)local_2b0;
    }
    uVar20 = uVar18;
    if (0 < iVar13) {
      do {
        uVar17 = (uint)uVar18;
        uVar14 = 0;
        if ((int)uVar17 < (int)local_2b0) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar11 = local_2b8;
        local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_250.Data.ArrayNum = 0;
        local_250.Data.ArrayMax = 0;
        lVar16 = *(longlong *)
                  ((longlong)&(local_2b8->SubmeshSizeCount).AllocatorInstance.Data + uVar20);
        iVar13 = *(int *)((longlong)&(local_2b8->SubmeshSizeCount).ArrayNum + uVar20);
        lVar15 = lVar16 + (longlong)iVar13 * 8;
        while( true ) {
          if (*(int *)((longlong)&(pFVar11->SubmeshSizeCount).ArrayNum + uVar20) != iVar13) {
            local_2c8 = (<lambda_1>)0x0;
            `TCheckedPointerIterator<UE::Geometry::FVector2i_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_2c8);
          }
          if (lVar16 == lVar15) break;
          ::FString::PrintfImpl(&local_238,L" (%d,%d)");
          iVar19 = local_238.Data.ArrayNum + -1;
          if (local_238.Data.ArrayNum == 0) {
            iVar19 = 0;
          }
          ::FString::AppendChars(&local_250,(wchar_t *)local_238.Data.AllocatorInstance.Data,iVar19)
          ;
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
          lVar16 = lVar16 + 8;
        }
        if (2 < (byte)LogTemp._0_1_) {
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        }
        if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_250.Data.AllocatorInstance.Data);
        }
        uVar18 = (ulonglong)(uVar17 + 1);
        iVar13 = 0x14;
        if ((int)local_2b0 < 0x14) {
          iVar13 = (int)local_2b0;
        }
        uVar20 = uVar20 + 0x50;
      } while ((int)(uVar17 + 1) < iVar13);
    }
  }
  DeleteCriticalSection(&local_80);
  if (local_260 != (FBuildJob *)0x0) {
    FMemory::Free(local_260);
  }
  DeleteCriticalSection(&local_58);
  DeleteCriticalSection(&local_a8);
  DestructItems<_UE::Geometry::FMeshSceneAdapter::Build_FullDecompose_::__l2::FProcessedSourceMeshStats,int>
            (local_2b8,(int)local_2b0);
  if (local_2b8 != (FProcessedSourceMeshStats *)0x0) {
    FMemory::Free(local_2b8);
  }
  if (local_2a8 != (FSpatialWrapperInfo **)0x0) {
    FMemory::Free(local_2a8);
  }
  return;
}

// CollectMeshSeedPoints @ 14caf6070

void __thiscall
UE::Geometry::FMeshSceneAdapter::CollectMeshSeedPoints
          (FMeshSceneAdapter *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 local_res20 [8];
  longlong *local_58;
  FScriptContainerElement *local_50;
  code *local_48;
  longlong **local_40;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2332,"MeshScene_CollectMeshSeedPoints",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x91c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2332);
  }
  pFVar8 = (this->SceneActors).AllocatorInstance.Data;
  iVar2 = (this->SceneActors).ArrayNum;
  local_50 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    pFVar6 = local_50;
    if ((this->SceneActors).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FActorAdapter,TDefaultDelete<UE::Geometry::FActorAdapter>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar8 == pFVar6) break;
    lVar4 = *(longlong *)pFVar8;
    plVar7 = *(longlong **)(lVar4 + 8);
    iVar3 = *(int *)(lVar4 + 0x10);
    plVar1 = plVar7 + iVar3;
    while( true ) {
      if (*(int *)(lVar4 + 0x10) != iVar3) {
        `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FActorChildMesh,TDefaultDelete<UE::Geometry::FActorChildMesh>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (plVar7 == plVar1) break;
      plVar5 = *(longlong **)(*plVar7 + 0xd8);
      if (plVar5 != (longlong *)0x0) {
        local_40 = &local_58;
        local_48 = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::CollectMeshSeedPoints'::__l13::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                   ::Call;
        local_58 = plVar7;
        (**(code **)(*plVar5 + 0x30))(plVar5,param_1,&local_48);
      }
      plVar7 = plVar7 + 1;
    }
    pFVar8 = pFVar8 + 8;
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FastUpdateTransforms @ 14cb06c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshSceneAdapter::FastUpdateTransforms(FMeshSceneAdapter *this,bool param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> *pFVar4;
  code *pcVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  FMeshSceneAdapter *pFVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  int iVar12;
  UClass *pUVar13;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> *pFVar14;
  longlong lVar15;
  undefined1 uVar16;
  ulonglong uVar17;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> *pFVar18;
  longlong lVar19;
  double *pdVar20;
  UInstancedStaticMeshComponent *pUVar21;
  FScriptContainerElement *pFVar22;
  longlong *plVar23;
  uint uVar24;
  uint uVar25;
  double dVar26;
  undefined1 auStackY_318 [32];
  undefined1 local_2c7;
  undefined1 local_2c6;
  undefined1 local_2c5;
  undefined1 local_2c4 [4];
  uint local_2c0;
  FScriptContainerElement *local_2b8;
  longlong *local_2b0;
  FMeshSceneAdapter *local_2a8;
  FScriptContainerElement *local_2a0;
  FMeshSceneAdapter *local_298;
  undefined1 local_290 [80];
  undefined1 local_240 [16];
  double local_230;
  double dStack_228;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> local_220;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FStack_218;
  double local_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  TArrayView<std::nullptr_t,int> local_1f0;
  code *local_1e0;
  FMeshSceneAdapter **local_1d8;
  longlong local_1d0;
  longlong lStack_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  longlong local_1a8;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> local_1a0;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FStack_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  TTransform<double> local_168;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar6 = __real_3e45798ee2308c3a;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_318;
  pFVar22 = (this->SceneActors).AllocatorInstance.Data;
  local_2c0 = (this->SceneActors).ArrayNum;
  uVar17 = (ulonglong)(int)local_2c0;
  local_2a0 = pFVar22 + uVar17 * 8;
  local_2a8 = this;
  do {
    pFVar10 = local_2a0;
    pFVar9 = local_2a8;
    local_2b8 = pFVar22;
    if ((local_2a8->SceneActors).ArrayNum != (int)uVar17) {
      local_2c7 = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FActorAdapter,TDefaultDelete<UE::Geometry::FActorAdapter>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_2c7);
    }
    if (pFVar22 == pFVar10) {
      pFVar9->bHaveSpatialEvaluationCache = false;
      bVar11 = -1 < CpuChannel->Enabled;
      if (bVar11) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId2535,"MeshScene_FastUpdateTransforms_ActorBounds",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                   ,0x9e7);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2535);
      }
      local_1e0 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::FastUpdateTransforms'::__l21::<lambda_1>,void,int>
                  ::Call;
      local_1d8 = &local_298;
      local_1f0.DataPtr = (void **)0x0;
      local_1f0.ArrayNum = 0;
      local_298 = pFVar9;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",(pFVar9->SceneActors).ArrayNum,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_1e0,(<lambda_1>)param_1,None,&local_1f0);
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (param_1) {
        (**(code **)(pFVar9->_padding_ + 8))(pFVar9);
      }
      return;
    }
    lVar2 = *(longlong *)pFVar22;
    plVar23 = *(longlong **)(lVar2 + 8);
    iVar1 = *(int *)(lVar2 + 0x10);
    local_2b0 = plVar23 + iVar1;
LAB_14cb06cc0:
    plVar3 = local_2b0;
    if (*(int *)(lVar2 + 0x10) != iVar1) {
      local_2c6 = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FActorChildMesh,TDefaultDelete<UE::Geometry::FActorChildMesh>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_2c6);
    }
    if (plVar23 != plVar3) {
      memset(&local_108,0,0xa0);
      lVar19 = *plVar23;
      local_68 = 0;
      local_60 = 0;
      local_5c = 2;
      if ((undefined8 *)(lVar19 + 0x20) != &local_108) {
        *(undefined8 *)(lVar19 + 0x20) = local_108;
        *(undefined8 *)(lVar19 + 0x28) = uStack_100;
        *(undefined8 *)(lVar19 + 0x30) = local_f8;
        *(undefined8 *)(lVar19 + 0x38) = uStack_f0;
        *(undefined8 *)(lVar19 + 0x40) = local_e8;
        *(undefined8 *)(lVar19 + 0x48) = uStack_e0;
        *(undefined8 *)(lVar19 + 0x50) = local_d8;
        *(undefined8 *)(lVar19 + 0x58) = uStack_d0;
        *(undefined8 *)(lVar19 + 0x60) = local_c8;
        *(undefined8 *)(lVar19 + 0x68) = uStack_c0;
        *(undefined8 *)(lVar19 + 0x70) = local_b8;
        *(undefined8 *)(lVar19 + 0x78) = uStack_b0;
        *(undefined8 *)(lVar19 + 0x80) = local_a8;
        *(undefined8 *)(lVar19 + 0x88) = uStack_a0;
        *(undefined8 *)(lVar19 + 0x90) = local_98;
        *(undefined8 *)(lVar19 + 0x98) = uStack_90;
        *(undefined8 *)(lVar19 + 0xa0) = local_88;
        *(undefined8 *)(lVar19 + 0xa8) = uStack_80;
        *(undefined8 *)(lVar19 + 0xb0) = local_78;
        *(undefined8 *)(lVar19 + 0xb8) = uStack_70;
        if (*(void **)(lVar19 + 0xc0) != (void *)0x0) {
          FMemory::Free(*(void **)(lVar19 + 0xc0));
        }
        *(undefined8 *)(lVar19 + 0xc0) = 0;
        *(undefined4 *)(lVar19 + 200) = 0;
        *(undefined4 *)(lVar19 + 0xcc) = 2;
      }
      plVar3 = (longlong *)*plVar23;
      iVar12 = (int)plVar3[1];
      if ((iVar12 != 1) && (iVar12 != 2)) {
        if ((iVar12 != 0) && (iVar12 != 3)) goto LAB_14cb072fe;
        pUVar21 = (UInstancedStaticMeshComponent *)*plVar3;
        if (pUVar21 == (UInstancedStaticMeshComponent *)0x0) {
LAB_14cb06dfb:
          pUVar21 = (UInstancedStaticMeshComponent *)0x0;
        }
        else {
          pUVar13 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
          iVar12 = (int)pUVar13->_padding_;
          if ((*(int *)(pUVar21->_padding_ + 0x38) < iVar12) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar21->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
              &pUVar13->_padding_)) goto LAB_14cb06dfb;
        }
        local_290._0_8_ = pUVar21->_padding_;
        local_290._8_8_ = pUVar21->_padding_;
        local_290._16_8_ = pUVar21->_padding_;
        local_290._24_8_ = pUVar21->_padding_;
        lVar19 = *plVar23;
        pFVar18 = (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)(lVar19 + 0x20);
        pFVar4 = *(ForElementType<UE::Geometry::TTransformSRT3<double>_> **)(lVar19 + 0xc0);
        local_290._48_8_ = pUVar21->_padding_;
        local_290._72_8_ = pUVar21->_padding_;
        local_290._32_8_ = pUVar21->_padding_;
        local_290._40_8_ = pUVar21->_padding_;
        pFVar14 = pFVar18;
        if (pFVar4 != (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)0x0) {
          pFVar14 = pFVar4;
        }
        local_290._56_8_ = pUVar21->_padding_;
        local_290._64_8_ = pUVar21->_padding_;
        local_1d0 = local_290._32_8_;
        lStack_1c8 = local_290._40_8_;
        local_1c0 = local_290._48_8_;
        local_1b8 = local_290._56_8_;
        lStack_1b0 = local_290._64_8_;
        local_1a8 = local_290._72_8_;
        if (pFVar14 <= (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)local_290) {
          pFVar14 = pFVar18;
          if (pFVar4 != (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)0x0) {
            pFVar14 = pFVar4;
          }
          if ((local_290 < pFVar14->InlineData + (longlong)*(int *)(lVar19 + 0xcc) * 0x50) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar12 = *(int *)(lVar19 + 200);
        if (iVar12 == *(int *)(lVar19 + 0xcc)) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TTransformSRT3<double>_>_>
                             (0x850,pFVar18,(int *)(lVar19 + 0xcc));
        }
        lVar15 = (longlong)iVar12;
        *(int *)(lVar19 + 200) = iVar12 + 1;
        if (*(ForElementType<UE::Geometry::TTransformSRT3<double>_> **)(lVar19 + 0xc0) !=
            (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)0x0) {
          pFVar18 = *(ForElementType<UE::Geometry::TTransformSRT3<double>_> **)(lVar19 + 0xc0);
        }
        *(undefined8 *)(pFVar18->InlineData + lVar15 * 0x50) = local_290._0_8_;
        *(undefined8 *)(pFVar18->InlineData + lVar15 * 0x50 + 8) = local_290._8_8_;
        *(undefined8 *)(pFVar18->InlineData + lVar15 * 0x50 + 0x10) = local_290._16_8_;
        *(undefined8 *)(pFVar18->InlineData + lVar15 * 0x50 + 0x10 + 8) = local_290._24_8_;
        *(undefined8 *)(pFVar18->InlineData + lVar15 * 0x50 + 0x20) = local_290._32_8_;
        *(undefined8 *)(pFVar18->InlineData + lVar15 * 0x50 + 0x20 + 8) = local_290._40_8_;
        *(undefined8 *)(pFVar18->InlineData + lVar15 * 0x50 + 0x30) = local_290._48_8_;
        *(undefined8 *)(pFVar18->InlineData + lVar15 * 0x50 + 0x30 + 8) = local_290._56_8_;
        *(undefined8 *)(pFVar18->InlineData + lVar15 * 0x50 + 0x40) = local_290._64_8_;
        *(undefined8 *)(pFVar18->InlineData + lVar15 * 0x50 + 0x40 + 8) = local_290._72_8_;
        lVar15 = *plVar23;
        lVar19 = lVar15 + 0x20;
        iVar12 = *(int *)(lVar15 + 200);
        if (*(longlong *)(lVar15 + 0xc0) != 0) {
          lVar19 = *(longlong *)(lVar15 + 0xc0);
        }
        pdVar20 = (double *)(lVar19 + 0x40);
        while( true ) {
          if (*(int *)(lVar15 + 200) != iVar12) {
            local_2c5 = 0;
            `TCheckedPointerIterator<UE::Geometry::TTransformSRT3<double>_const_,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(&local_2c5);
          }
          if (pdVar20 + -8 == (double *)((longlong)iVar12 * 0x50 + lVar19)) goto LAB_14cb072f0;
          dVar26 = pdVar20[-1] - *pdVar20;
          uVar24 = SUB84(dVar26,0) & uVar7;
          uVar25 = (uint)((ulonglong)dVar26 >> 0x20) & uVar8;
          if (((dVar6 <= (double)CONCAT44(uVar25,uVar24) && (double)CONCAT44(uVar25,uVar24) != dVar6
               ) || (dVar26 = pdVar20[-1] - pdVar20[1],
                    dVar6 < (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar8,
                                             SUB84(dVar26,0) & uVar7))) ||
             (dVar26 = *pdVar20 - pdVar20[1], uVar24 = SUB84(dVar26,0) & uVar7,
             uVar25 = (uint)((ulonglong)dVar26 >> 0x20) & uVar8,
             dVar6 <= (double)CONCAT44(uVar25,uVar24) && (double)CONCAT44(uVar25,uVar24) != dVar6))
          break;
          pdVar20 = pdVar20 + 10;
        }
LAB_14cb072ec:
        uVar16 = 1;
        goto LAB_14cb072f2;
      }
      pUVar21 = (UInstancedStaticMeshComponent *)*plVar3;
      if (pUVar21 == (UInstancedStaticMeshComponent *)0x0) {
LAB_14cb07046:
        pUVar21 = (UInstancedStaticMeshComponent *)0x0;
      }
      else {
        pUVar13 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
        iVar12 = (int)pUVar13->_padding_;
        if ((*(int *)(pUVar21->_padding_ + 0x38) < iVar12) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar21->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
            &pUVar13->_padding_)) goto LAB_14cb07046;
      }
      bVar11 = UInstancedStaticMeshComponent::IsValidInstance(pUVar21,*(int *)(*plVar23 + 0xc));
      if (bVar11) {
        local_168.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_168.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_168.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_168.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_168.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_168.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_168.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_168.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_168.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_168.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_168.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_168.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UInstancedStaticMeshComponent::GetInstanceTransform
                  (pUVar21,*(int *)(*plVar23 + 0xc),&local_168,true);
        lVar19 = *plVar23;
        pFVar18 = (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)(lVar19 + 0x20);
        local_240._0_8_ = local_168.Rotation.XY.m128d_f64[0];
        local_230 = local_168.Rotation.ZW.m128d_f64[0];
        pFVar4 = *(ForElementType<UE::Geometry::TTransformSRT3<double>_> **)(lVar19 + 0xc0);
        local_240._8_8_ = local_168.Rotation.XY.m128d_f64[1];
        local_190 = local_168.Translation.ZW.m128d_f64[0];
        local_210 = local_168.Translation.ZW.m128d_f64[0];
        dStack_228 = local_168.Rotation.ZW.m128d_f64[1];
        local_178 = local_168.Scale3D.ZW.m128d_f64[0];
        dStack_1f8 = local_168.Scale3D.ZW.m128d_f64[0];
        pFVar14 = pFVar18;
        if (pFVar4 != (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)0x0) {
          pFVar14 = pFVar4;
        }
        local_1a0 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)
                    local_168.Translation.XY.m128d_f64[0];
        FStack_198 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)
                     local_168.Translation.XY.m128d_f64[1];
        local_220 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)
                    local_168.Translation.XY.m128d_f64[0];
        FStack_218 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)
                     local_168.Translation.XY.m128d_f64[1];
        local_188 = local_168.Scale3D.XY.m128d_f64[0];
        dStack_180 = local_168.Scale3D.XY.m128d_f64[1];
        dStack_208 = local_168.Scale3D.XY.m128d_f64[0];
        dStack_200 = local_168.Scale3D.XY.m128d_f64[1];
        if (pFVar14 <= (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)local_240) {
          pFVar14 = pFVar18;
          if (pFVar4 != (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)0x0) {
            pFVar14 = pFVar4;
          }
          if ((local_240 < pFVar14->InlineData + (longlong)*(int *)(lVar19 + 0xcc) * 0x50) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar12 = *(int *)(lVar19 + 200);
        if (iVar12 == *(int *)(lVar19 + 0xcc)) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TTransformSRT3<double>_>_>
                             (0x850,pFVar18,(int *)(lVar19 + 0xcc));
        }
        lVar15 = (longlong)iVar12;
        *(int *)(lVar19 + 200) = iVar12 + 1;
        if (*(ForElementType<UE::Geometry::TTransformSRT3<double>_> **)(lVar19 + 0xc0) !=
            (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)0x0) {
          pFVar18 = *(ForElementType<UE::Geometry::TTransformSRT3<double>_> **)(lVar19 + 0xc0);
        }
        *(undefined8 *)(pFVar18->InlineData + lVar15 * 0x50) = local_240._0_8_;
        *(undefined8 *)(pFVar18->InlineData + lVar15 * 0x50 + 8) = local_240._8_8_;
        *(double *)(pFVar18->InlineData + lVar15 * 0x50 + 0x10) = local_230;
        *(double *)(pFVar18->InlineData + lVar15 * 0x50 + 0x10 + 8) = dStack_228;
        *(ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
         (pFVar18->InlineData + lVar15 * 0x50 + 0x20) = local_220;
        ((ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
        (pFVar18->InlineData + lVar15 * 0x50 + 0x20))[1] = FStack_218;
        *(double *)(pFVar18->InlineData + lVar15 * 0x50 + 0x30) = local_210;
        *(double *)(pFVar18->InlineData + lVar15 * 0x50 + 0x30 + 8) = dStack_208;
        *(double *)(pFVar18->InlineData + lVar15 * 0x50 + 0x40) = dStack_200;
        *(double *)(pFVar18->InlineData + lVar15 * 0x50 + 0x40 + 8) = dStack_1f8;
        lVar15 = *plVar23;
        lVar19 = lVar15 + 0x20;
        iVar12 = *(int *)(lVar15 + 200);
        if (*(longlong *)(lVar15 + 0xc0) != 0) {
          lVar19 = *(longlong *)(lVar15 + 0xc0);
        }
        pdVar20 = (double *)(lVar19 + 0x40);
        while( true ) {
          if (*(int *)(lVar15 + 200) != iVar12) {
            local_2c4[0] = 0;
            `TCheckedPointerIterator<UE::Geometry::TTransformSRT3<double>_const_,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(local_2c4);
          }
          if (pdVar20 + -8 == (double *)((longlong)iVar12 * 0x50 + lVar19)) goto LAB_14cb072f0;
          dVar26 = pdVar20[-1] - *pdVar20;
          uVar24 = SUB84(dVar26,0) & uVar7;
          uVar25 = (uint)((ulonglong)dVar26 >> 0x20) & uVar8;
          if (((dVar6 <= (double)CONCAT44(uVar25,uVar24) && (double)CONCAT44(uVar25,uVar24) != dVar6
               ) || (dVar26 = pdVar20[-1] - pdVar20[1],
                    dVar6 < (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar8,
                                             SUB84(dVar26,0) & uVar7))) ||
             (dVar26 = *pdVar20 - pdVar20[1], uVar24 = SUB84(dVar26,0) & uVar7,
             uVar25 = (uint)((ulonglong)dVar26 >> 0x20) & uVar8,
             dVar6 <= (double)CONCAT44(uVar25,uVar24) && (double)CONCAT44(uVar25,uVar24) != dVar6))
          break;
          pdVar20 = pdVar20 + 10;
        }
        goto LAB_14cb072ec;
      }
      goto LAB_14cb072fe;
    }
    pFVar22 = local_2b8 + 8;
    uVar17 = (ulonglong)local_2c0;
  } while( true );
LAB_14cb072f0:
  uVar16 = 0;
LAB_14cb072f2:
  *(undefined1 *)(*plVar23 + 0xd0) = uVar16;
LAB_14cb072fe:
  plVar23 = plVar23 + 1;
  goto LAB_14cb06cc0;
}

// FastWindingNumber @ 14cb07c60

double __thiscall
UE::Geometry::FMeshSceneAdapter::FastWindingNumber
          (FMeshSceneAdapter *this,TVector<double> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FSparseDynamicOctree3 *pFVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  undefined1 local_res8 [8];
  double local_res20;
  code *local_68;
  FMeshSceneAdapter **local_60;
  code *local_58;
  FMeshSceneAdapter **local_50;
  FMeshSceneAdapter *local_48;
  TVector<double> *local_40;
  double *local_38;
  FMeshSceneAdapter *local_30;
  TVector<double> *local_28;
  double *local_20;
  
  if (this->bHaveSpatialEvaluationCache == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bHaveSpatialEvaluationCache",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                       ,0x92d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      dVar7 = (double)(*pcVar4)();
      return dVar7;
    }
  }
  local_res20 = 0.0;
  if (this->bSceneIsAllSolids != false) {
    pFVar3 = (this->Octree).Object;
    if (!param_2) {
      if (pFVar3 == (FSparseDynamicOctree3 *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          dVar7 = (double)(*pcVar4)();
          return dVar7;
        }
      }
      local_20 = &local_res20;
      local_50 = &local_30;
      local_58 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::FastWindingNumber'::__l17::<lambda_2>,void,int>
                 ::Call;
      local_30 = this;
      local_28 = param_1;
      FSparseDynamicOctree3::ContainmentQuery
                ((this->Octree).Object,param_1,(TFunctionRef<void___cdecl(int)> *)&local_58);
      return local_res20;
    }
    if (pFVar3 == (FSparseDynamicOctree3 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        dVar7 = (double)(*pcVar4)();
        return dVar7;
      }
    }
    local_38 = &local_res20;
    local_60 = &local_48;
    local_68 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::FastWindingNumber'::__l15::<lambda_1>,bool,int>
               ::Call;
    local_48 = this;
    local_40 = param_1;
    FSparseDynamicOctree3::ContainmentQueryCancellable
              ((this->Octree).Object,param_1,(TFunctionRef<bool___cdecl(int)> *)&local_68);
    return local_res20;
  }
  pFVar6 = (this->SortedSpatials).AllocatorInstance.Data;
  iVar2 = (this->SortedSpatials).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->SortedSpatials).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::FMeshSceneAdapter::FSpatialCacheInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    dVar7 = (double)(**(code **)(**(longlong **)(pFVar6 + 0x10) + 0x20))
                              (*(longlong **)(pFVar6 + 0x10),param_1,
                               *(longlong *)(pFVar6 + 8) + 0x20);
    pFVar6 = pFVar6 + 0x48;
    local_res20 = local_res20 + dVar7;
  }
  return local_res20;
}

// FindNearestRayIntersection @ 14cb09580

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::Geometry::FMeshSceneAdapter::FindNearestRayIntersection
          (FMeshSceneAdapter *this,TRay<double> *param_1,FMeshSceneRayHit *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  FMeshSceneAdapter *local_res8;
  FMeshSceneAdapter *local_res20;
  double dVar9;
  code *local_38;
  FMeshSceneAdapter **local_30;
  code *local_28;
  FMeshSceneAdapter **local_20;
  
  if (this->bHaveSpatialEvaluationCache == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bHaveSpatialEvaluationCache",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                       ,0x9a2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((this->Octree).Object == (FSparseDynamicOctree3 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_30 = &local_res8;
  local_38 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::FindNearestRayIntersection'::__l2::<lambda_2>,double,int,UE::Math::TRay<double>_const_&>
             ::Call;
  local_20 = &local_res20;
  local_28 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::FindNearestRayIntersection'::__l2::<lambda_1>,UE::Geometry::TAxisAlignedBox3<double>,int>
             ::Call;
  local_res8 = this;
  local_res20 = this;
  dVar9 = __real_7fefffffffffffff;
  uVar6 = FSparseDynamicOctree3::FindNearestHitObject
                    ((this->Octree).Object,param_1,
                     (TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *)&local_28,
                     (TFunctionRef<double___cdecl(int,UE::Math::TRay<double>_const_&)> *)&local_38,
                     __real_7fefffffffffffff);
  dVar8 = (double)(longlong)(int)uVar6;
  if (-1 < (int)uVar6) {
    uVar7 = 0;
    if ((int)uVar6 < (this->SortedSpatials).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      dVar9 = dVar8;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (this->SortedSpatials).AllocatorInstance.Data;
    cVar5 = (**(code **)(**(longlong **)(pFVar1 + (longlong)dVar8 * 0x48 + 0x10) + 0x28))
                      (*(longlong **)(pFVar1 + (longlong)dVar8 * 0x48 + 0x10),param_1,
                       *(longlong *)(pFVar1 + (longlong)dVar8 * 0x48 + 8) + 0x20,param_2,dVar9);
    if (cVar5 != '\0') {
      param_2->HitActor = (AActor *)**(undefined8 **)(pFVar1 + (longlong)dVar8 * 0x48);
      param_2->HitComponent =
           (UActorComponent *)**(undefined8 **)(pFVar1 + (longlong)dVar8 * 0x48 + 8);
      param_2->HitComponentElementIndex =
           *(int *)(*(longlong *)(pFVar1 + (longlong)dVar8 * 0x48 + 8) + 0xc);
      dVar9 = (param_1->Origin).field0_0x0._s_0.Y;
      (param_2->Ray).Origin.field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
      (param_2->Ray).Origin.field0_0x0._s_0.Y = dVar9;
      dVar9 = (param_1->Direction).field0_0x0._s_0.X;
      (param_2->Ray).Origin.field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
      (param_2->Ray).Direction.field0_0x0._s_0.X = dVar9;
      dVar9 = (param_1->Direction).field0_0x0._s_0.Z;
      (param_2->Ray).Direction.field0_0x0._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y;
      (param_2->Ray).Direction.field0_0x0._s_0.Z = dVar9;
      TTransformSequence3<double>::operator=
                (&param_2->LocalToWorld,
                 (TTransformSequence3<double> *)
                 (*(longlong *)(pFVar1 + (longlong)dVar8 * 0x48 + 8) + 0x20));
      return true;
    }
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8012027019833379252>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                       ,0x9b4,"bHit");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return false;
}

// ForEachSpatialWrapper @ 14cb0a570

void __thiscall
UE::Geometry::FMeshSceneAdapter::ForEachSpatialWrapper
          (FMeshSceneAdapter *this,
          TFunctionRef<void___cdecl(TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>)>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  TMap<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined8 local_b8;
  TReferenceControllerBase<1> *local_b0;
  undefined8 local_a8;
  TReferenceControllerBase<1> *local_a0;
  TMap<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->SpatialAdapters).field_0x28;
  puVar1 = &(this->SpatialAdapters).field_0x10;
  iStack_90 = 0;
  local_98 = &this->SpatialAdapters;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->SpatialAdapters).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14cb0a61f;
      uVar11 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_7c = local_78 + -1 + local_res20;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14cb0a61f:
  uVar11 = *(uint *)&(this->SpatialAdapters).field_0x28;
  uVar15 = uVar11 & 0xffffffe0;
  iStack_70 = *(int *)&(this->SpatialAdapters).field_0x8 -
              *(int *)&(this->SpatialAdapters).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = local_98;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->SpatialAdapters).field_0x28;
  if (uVar11 != uVar4) {
    puVar13 = *(undefined1 **)&(this->SpatialAdapters).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar15 = uVar15 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14cb0a71b;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14cb0a71b:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar7 == &this->SpatialAdapters)) break;
    lVar9 = *(longlong *)pTVar7;
    pTVar5 = *(TReferenceControllerBase<1> **)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 + lVar9);
    local_b8 = *(undefined8 *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 + lVar9);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b0 = pTVar5;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  iVar3 = (this->SplineMeshSpatialAdapters).ArrayNum;
  pFVar12 = (this->SplineMeshSpatialAdapters).AllocatorInstance.Data;
  pFVar16 = pFVar12 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->SplineMeshSpatialAdapters).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar12 == pFVar16) break;
    pTVar5 = *(TReferenceControllerBase<1> **)(pFVar12 + 8);
    local_a8 = *(undefined8 *)pFVar12;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a0 = pTVar5;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    pFVar12 = pFVar12 + 0x10;
  }
  return;
}

// GenerateBaseClosingMesh @ 14cb0c0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshSceneAdapter::GenerateBaseClosingMesh
          (FMeshSceneAdapter *this,double param_1,double param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  short sVar3;
  IMeshSpatialWrapper *pIVar4;
  void *pvVar5;
  code *pcVar6;
  undefined8 uVar7;
  FSpatialWrapperInfo *pFVar8;
  FMeshSceneAdapter *this_00;
  TArray<TUniquePtr<UE::Geometry::FActorAdapter,TDefaultDelete<UE::Geometry::FActorAdapter>_>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  ESceneMeshType EVar13;
  FMeshShapeGenerator *pFVar14;
  FActorAdapter *pFVar15;
  TSharedRef<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> *pTVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  uint uVar20;
  longlong *plVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  FActorAdapter *pFVar24;
  uint uVar25;
  ForAnyElementType FVar26;
  undefined1 auStackY_688 [32];
  <lambda_1> local_638;
  undefined1 local_637;
  undefined1 local_636 [6];
  FActorAdapter *local_630;
  uint local_628 [2];
  FActorAdapter *local_620;
  ForAnyElementType local_618;
  int local_610;
  int iStack_60c;
  undefined1 local_608 [8];
  ForAnyElementType local_600;
  undefined8 local_5f8;
  longlong local_5f0;
  FActorAdapter *local_5e8;
  TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> local_5e0;
  void *local_5d0;
  undefined8 local_5c8;
  FMeshSceneAdapter *local_5c0;
  TConvexHull2<double> local_5b8;
  TArray<TUniquePtr<UE::Geometry::FActorAdapter,TDefaultDelete<UE::Geometry::FActorAdapter>_>,TSizedDefaultAllocator<32>_>
  *local_5a0;
  undefined2 local_598 [4];
  undefined8 local_590;
  undefined1 local_588;
  undefined8 local_580;
  undefined4 local_578;
  undefined1 local_574;
  double local_570;
  double local_568;
  void **local_560;
  FActorAdapter *local_558 [2];
  void *local_548;
  int iStack_540;
  undefined4 uStack_53c;
  code *local_538;
  undefined1 *local_530;
  code *local_528;
  void ***local_520;
  TArrayView<std::nullptr_t,int> local_518;
  code *local_508;
  ForAnyElementType **local_500;
  TVector<double>_u_0 local_4f8;
  ForAnyElementType *local_4e0;
  double *local_4d8;
  _RTL_CRITICAL_SECTION *local_4d0;
  void **local_4c8;
  void *local_4b8;
  undefined8 uStack_4b0;
  TSharedRef<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> local_4a8;
  FPlanarPolygonMeshGenerator local_498;
  undefined1 local_3c8 [16];
  double local_3b8;
  FDynamicMesh3 local_398;
  undefined **local_168 [2];
  ForAnyElementType local_158;
  int local_150;
  int local_14c;
  longlong local_148;
  longlong local_138 [3];
  longlong *local_120;
  double local_118;
  EVertexExtrusionVectorType local_110;
  longlong local_108;
  longlong local_f8 [3];
  longlong *local_e0;
  bool local_d3;
  ForAnyElementType local_b0;
  int local_a8;
  ForAnyElementType local_a0;
  _RTL_CRITICAL_SECTION local_88;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_688;
  local_5c0 = this;
  (**(code **)(this->_padding_ + 0x10))(this,local_3c8);
  local_5a0 = &this->SceneActors;
  pFVar22 = (local_5a0->AllocatorInstance).Data;
  iVar12 = (this->SceneActors).ArrayNum;
  local_570 = local_3b8;
  local_568 = local_3b8 + param_1;
  local_618.Data = (FScriptContainerElement *)0x0;
  local_610 = 0;
  iStack_60c = 0;
  pFVar2 = pFVar22 + (longlong)iVar12 * 8;
  while( true ) {
    if (local_5a0->ArrayNum != iVar12) {
      local_637 = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FActorAdapter,TDefaultDelete<UE::Geometry::FActorAdapter>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_637);
    }
    if (pFVar22 == pFVar2) break;
    lVar23 = *(longlong *)pFVar22;
    plVar21 = *(longlong **)(lVar23 + 8);
    iVar11 = *(int *)(lVar23 + 0x10);
    plVar19 = plVar21 + iVar11;
    while( true ) {
      if (*(int *)(lVar23 + 0x10) != iVar11) {
        local_636[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FActorChildMesh,TDefaultDelete<UE::Geometry::FActorChildMesh>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_636);
      }
      if (plVar21 == plVar19) break;
      lVar17 = *plVar21;
      if (*(longlong *)(lVar17 + 0xd8) != 0) {
        local_5f0 = lVar17;
        if (((local_618.Data <= (FScriptContainerElement *)&local_5f0) &&
            ((FScriptContainerElement *)&local_5f0 < local_618.Data + (longlong)iStack_60c * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_610 == iStack_60c) {
          local_610 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_618,&iStack_60c);
        }
        lVar17 = (longlong)local_610;
        local_610 = local_610 + 1;
        *(longlong *)(local_618.Data + lVar17 * 8) = local_5f0;
      }
      plVar21 = plVar21 + 1;
    }
    pFVar22 = pFVar22 + 8;
  }
  pFVar24 = (FActorAdapter *)0x0;
  local_5d0 = (void *)0x0;
  local_5c8 = 0;
  InitializeCriticalSectionAndSpinCount(&local_88,4000);
  local_4e0 = &local_618;
  local_4d8 = &local_570;
  local_518.DataPtr = (void **)0x0;
  local_4d0 = &local_88;
  local_518.ArrayNum = 0;
  local_4c8 = &local_5d0;
  local_508 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::GenerateBaseClosingMesh'::__l2::<lambda_1>,void,int>
              ::Call;
  local_500 = &local_4e0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_610,1,(TFunctionRef<void___cdecl(int)> *)&local_508,local_638
             ,None,&local_518);
  iStack_540 = (int)local_5c8;
  local_548 = local_5d0;
  local_5b8.Dimension = 0;
  local_5b8.NumUniquePoints = 0;
  local_5b8.Hull.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5b8.Hull.ArrayNum = 0;
  local_5b8.Hull.ArrayMax = 0;
  if (((int)local_5c8 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_530 = local_608;
  uStack_4b0 = CONCAT44(uStack_53c,iStack_540);
  local_4b8 = local_548;
  local_538 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TConvexHull2<double>::Solve'::__l2::<lambda_2>,bool,int>
              ::Call;
  local_560 = &local_4b8;
  local_520 = &local_560;
  local_528 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TConvexHull2<double>::Solve'::__l2::<lambda_1>,UE::Math::TVector2<double>,int>
              ::Call;
  bVar10 = TConvexHull2<double>::Solve
                     (&local_5b8,iStack_540,
                      (TFunctionRef<UE::Math::TVector2<double>___cdecl(int)> *)&local_528,
                      (TFunctionRef<bool___cdecl(int)> *)&local_538);
  if (!bVar10) {
    if (2 < (byte)LogTemp._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    goto LAB_14cb0cd62;
  }
  local_600.Data = (FScriptContainerElement *)0x0;
  local_5f8 = 0;
  if ((local_5b8.Dimension != 2) &&
     (bVar10 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2612336754539102086>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\CompGeom\\ConvexHull2.h"
                          ,0x7a,"IsSolutionAvailable()"), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar12 = local_5b8.Hull.ArrayNum;
  uVar18 = (ulonglong)local_5b8.Hull.ArrayNum;
  pFVar2 = local_5b8.Hull.AllocatorInstance.Data + uVar18 * 4;
  FVar26.Data = local_5b8.Hull.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar18 != iVar12) {
      local_638 = (<lambda_1>)0x0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_638);
    }
    if (FVar26.Data == pFVar2) break;
    uVar25 = *(uint *)FVar26.Data;
    uVar20 = 0;
    if ((int)uVar25 < (int)local_5c8) {
      uVar20 = ~uVar25 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar22 = (FScriptContainerElement *)((longlong)(int)uVar25 * 0x10 + (longlong)local_5d0);
    if (((local_600.Data <= pFVar22) &&
        (pFVar22 < local_600.Data + (longlong)local_5f8._4_4_ * 0x10)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = (int)local_5f8;
    if ((int)local_5f8 == local_5f8._4_4_) {
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_600,(int *)((longlong)&local_5f8 + 4));
    }
    local_5f8 = CONCAT44(local_5f8._4_4_,iVar11 + 1);
    uVar7 = *(undefined8 *)(pFVar22 + 8);
    FVar26.Data = FVar26.Data + 4;
    *(undefined8 *)(local_600.Data + (longlong)iVar11 * 0x10) = *(undefined8 *)pFVar22;
    *(undefined8 *)(local_600.Data + (longlong)iVar11 * 0x10 + 8) = uVar7;
    uVar18 = local_5b8.Hull._8_8_ & 0xffffffff;
  }
  if ((int)local_5f8 < 2) {
    if (2 < (byte)LogTemp._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  else {
    FPlanarPolygonMeshGenerator::FPlanarPolygonMeshGenerator(&local_498);
    FVar26.Data = local_600.Data;
    iVar12 = (int)local_5f8;
    lVar23 = (longlong)(int)local_5f8;
    local_498.Polygon.Vertices.ArrayNum = (int)local_5f8;
    if (((int)local_5f8 == 0) && (local_498.Polygon.Vertices.ArrayMax == 0)) {
      local_498.Polygon.Vertices.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_5f8,local_498.Polygon.Vertices.ArrayMax,
                 (ForAnyElementType *)&local_498.Polygon,(int)local_5f8,
                 &local_498.Polygon.Vertices.ArrayMax);
      if (iVar12 != 0) {
        memcpy(local_498.Polygon.Vertices.AllocatorInstance.Data,FVar26.Data,lVar23 << 4);
      }
    }
    pFVar14 = FPlanarPolygonMeshGenerator::Generate(&local_498);
    FDynamicMesh3::FDynamicMesh3(&local_398,pFVar14);
    local_4f8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z * local_570;
    local_4f8._8_4_ = SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y * local_570,0);
    local_4f8._0_8_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X * local_570;
    local_4f8._12_4_ =
         (int)((ulonglong)(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y * local_570) >>
              0x20);
    MeshTransforms::Translate(&local_398,(TVector<double> *)&local_4f8._s_0,All);
    if (param_2 == 0.0) {
      FDynamicMesh3::ReverseOrientation(&local_398,true);
      local_5c0->bSceneIsAllSolids = false;
    }
    else {
      FOffsetMeshRegion::FOffsetMeshRegion((FOffsetMeshRegion *)local_168,&local_398);
      uVar25 = local_398.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
               local_398.TriangleRefCounts.RefCounts.CurBlockUsed;
      pFVar15 = pFVar24;
      if ((uVar25 == 0) ||
         (pFVar15 = (FActorAdapter *)0x0,
         (ushort)(**(short **)local_398.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data -
                 1U) < 0xfffe)) {
LAB_14cb0c6a6:
        uVar20 = (uint)pFVar15;
      }
      else {
        pFVar15 = (FActorAdapter *)&DAT_00000001;
        uVar20 = 1;
        if (1 < (int)uVar25) {
          do {
            sVar3 = *(short *)(*(longlong *)
                                (local_398.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data
                                + ((ulonglong)pFVar15 >> 9) * 8) +
                              (ulonglong)((uint)pFVar15 & 0x1ff) * 2);
            if ((sVar3 != 0) && (sVar3 != -1)) break;
            uVar20 = (uint)pFVar15 + 1;
            pFVar15 = (FActorAdapter *)(ulonglong)uVar20;
          } while ((int)uVar20 < (int)uVar25);
          goto LAB_14cb0c6a6;
        }
      }
joined_r0x00014cb0c6a8:
      if (uVar20 != uVar25) {
        do {
          uVar20 = (uint)pFVar15;
          local_628[0] = uVar20;
          if (((local_158.Data <= (FScriptContainerElement *)local_628) &&
              ((FScriptContainerElement *)local_628 < local_158.Data + (longlong)local_14c * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (local_150 == local_14c) {
            local_150 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_158,&local_14c);
          }
          iVar12 = local_150 + 1;
          *(uint *)(local_158.Data + (longlong)local_150 * 4) = local_628[0];
          do {
            uVar20 = uVar20 + 1;
            pFVar15 = (FActorAdapter *)(ulonglong)uVar20;
            local_150 = iVar12;
            if ((int)uVar25 <= (int)uVar20) goto joined_r0x00014cb0c6a8;
            sVar3 = *(short *)(*(longlong *)
                                (local_398.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data
                                + (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 2);
          } while ((sVar3 == 0) || (sVar3 == -1));
        } while( true );
      }
      local_110 = SelectionTriNormalsAngleWeightedAverage;
      local_d3 = 0.0 < param_2;
      local_118 = param_2;
      FOffsetMeshRegion::Apply((FOffsetMeshRegion *)local_168);
      local_168[0] = &___7FOffsetMeshRegion_Geometry_UE__6B_;
      if (local_a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data);
      }
      DestructItems<UE::Geometry::FOffsetMeshRegion::FOffsetInfo,int>
                ((FOffsetInfo *)local_b0.Data,local_a8);
      if ((FOffsetInfo *)local_b0.Data != (FOffsetInfo *)0x0) {
        FMemory::Free(local_b0.Data);
      }
      if (local_108 != 0) {
        plVar19 = local_f8;
        if (local_e0 != (longlong *)0x0) {
          plVar19 = local_e0;
        }
        (**(code **)(*plVar19 + 0x10))();
      }
      if (local_148 != 0) {
        plVar19 = local_138;
        if (local_120 != (longlong *)0x0) {
          plVar19 = local_120;
        }
        (**(code **)(*plVar19 + 0x10))();
      }
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data);
      }
    }
    this_00 = local_5c0;
    pFVar15 = ::operator_new(0x48);
    local_620 = pFVar24;
    if (pFVar15 != (FActorAdapter *)0x0) {
      (pFVar15->ChildMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined8 *)&(pFVar15->ChildMeshes).ArrayNum = 0;
      (pFVar15->WorldBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
      (pFVar15->WorldBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
      (pFVar15->WorldBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
      (pFVar15->WorldBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
      (pFVar15->WorldBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
      (pFVar15->WorldBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
      local_620 = pFVar15;
    }
    local_620->SourceActor = (AActor *)0x0;
    pFVar15 = ::operator_new(0xe0);
    local_630 = pFVar24;
    if (pFVar15 != (FActorAdapter *)0x0) {
      *(undefined8 *)&(pFVar15->ChildMeshes).ArrayNum = 0;
      *(undefined4 *)&(pFVar15->WorldBounds).Min.field0_0x0 = 1;
      pFVar15[2].WorldBounds.Max.field0_0x0._s_0.X = 0.0;
      (pFVar15->ChildMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x5;
      *(undefined4 *)((longlong)&pFVar15[2].WorldBounds.Max.field0_0x0 + 8) = 0;
      *(undefined4 *)((longlong)&pFVar15[2].WorldBounds.Max.field0_0x0 + 0xc) = 2;
      *(undefined1 *)((longlong)&pFVar15[2].WorldBounds.Max.field0_0x0 + 0x10) = 0;
      pFVar15[3].SourceActor = (AActor *)0x0;
      local_630 = pFVar15;
    }
    local_630->SourceActor = (AActor *)0x0;
    *(undefined4 *)&(local_630->ChildMeshes).AllocatorInstance.Data = 4;
    *(undefined4 *)((longlong)&(local_630->ChildMeshes).AllocatorInstance.Data + 4) = 0;
    *(undefined1 *)((longlong)&local_630[2].WorldBounds.Max.field0_0x0 + 0x10) = 0;
    pTVar16 = MakeShared<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>(&local_4a8);
    local_5e0.Object = pTVar16->Object;
    local_5e0.SharedReferenceCount.ReferenceController =
         (pTVar16->SharedReferenceCount).ReferenceController;
    if (local_5e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_5e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4a8.SharedReferenceCount.ReferenceController);
    local_558[0] = local_630;
    TMapBase<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,0>_>
    ::Emplace<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_const_&>
              ((TMapBase<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,0>_>
                *)&this_00->SpatialAdapters,local_558,&local_5e0);
    pFVar15 = ::operator_new(0x270);
    if (pFVar15 != (FActorAdapter *)0x0) {
      (pFVar15->ChildMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar15->ChildMeshes).ArrayNum = Unknown;
      *(undefined2 *)&(pFVar15->WorldBounds).Min.field0_0x0 = 0;
      *(undefined1 *)((longlong)&(pFVar15->WorldBounds).Min.field0_0x0 + 2) = 0;
      (pFVar15->WorldBounds).Min.field0_0x0._s_0.Y = 0.0;
      *(undefined1 *)((longlong)&(pFVar15->WorldBounds).Min.field0_0x0 + 0x10) = 0;
      pFVar15->SourceActor = (AActor *)&___7FDynamicMeshSpatialWrapper_Geometry_UE__6B_;
      FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)&(pFVar15->WorldBounds).Max);
      pFVar15[8].WorldBounds.Min.field0_0x0._s_0.Y = 0.0;
      pFVar15[8].WorldBounds.Min.field0_0x0._s_0.Z = 0.0;
      pFVar24 = pFVar15;
    }
    FDynamicMesh3::operator=((FDynamicMesh3 *)&(pFVar24->WorldBounds).Max,&local_398);
    local_590 = __real_3fb999999999999a;
    local_580 = __real_3f50624dd2f1a9fc;
    *(undefined2 *)&(pFVar24->WorldBounds).Min.field0_0x0 = 0x101;
    local_598[0] = 0;
    local_588 = 0;
    local_578 = 0x1010100;
    local_574 = 0;
    (*(code *)pFVar24->SourceActor->_padding_)(pFVar24,local_598);
    if ((local_5e0.Object == (FSpatialWrapperInfo *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pIVar4 = ((local_5e0.Object)->SpatialWrapper).Ptr;
    ((local_5e0.Object)->SpatialWrapper).Ptr = (IMeshSpatialWrapper *)pFVar24;
    if (pIVar4 != (IMeshSpatialWrapper *)0x0) {
      (**(code **)pIVar4->_padding_)(pIVar4,1);
    }
    if ((local_5e0.Object == (FSpatialWrapperInfo *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar8 = local_5e0.Object;
    local_5e8 = local_630;
    pFVar2 = ((local_5e0.Object)->ParentMeshes).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_5e8) &&
        ((FScriptContainerElement *)&local_5e8 <
         pFVar2 + (longlong)((local_5e0.Object)->ParentMeshes).ArrayMax * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar12 = (pFVar8->ParentMeshes).ArrayNum;
    piVar1 = &(pFVar8->ParentMeshes).ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(pFVar8->ParentMeshes).AllocatorInstance,piVar1);
    }
    (pFVar8->ParentMeshes).ArrayNum = iVar12 + 1;
    *(FActorAdapter **)((pFVar8->ParentMeshes).AllocatorInstance.Data + (longlong)iVar12 * 8) =
         local_5e8;
    if ((local_5e0.Object == (FSpatialWrapperInfo *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar24 = local_620;
    local_630[3].SourceActor = (AActor *)((local_5e0.Object)->SpatialWrapper).Ptr;
    pFVar2 = (local_620->ChildMeshes).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_630) &&
        ((FScriptContainerElement *)&local_630 <
         pFVar2 + (longlong)(local_620->ChildMeshes).ArrayMax * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EVar13 = (pFVar24->ChildMeshes).ArrayNum;
    piVar1 = &(pFVar24->ChildMeshes).ArrayMax;
    if (EVar13 == *piVar1) {
      EVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(pFVar24->ChildMeshes).AllocatorInstance,piVar1);
    }
    (pFVar24->ChildMeshes).ArrayNum = EVar13 + Unknown;
    *(FActorAdapter **)((pFVar24->ChildMeshes).AllocatorInstance.Data + (longlong)(int)EVar13 * 8) =
         local_630;
    local_630 = (void *)0x0;
    UpdateActorBounds(this_00,local_620);
    pTVar9 = local_5a0;
    pFVar2 = (local_5a0->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_620) &&
        ((FScriptContainerElement *)&local_620 < pFVar2 + (longlong)local_5a0->ArrayMax * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar12 = pTVar9->ArrayNum;
    if (iVar12 == pTVar9->ArrayMax) {
      iVar12 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
    }
    pTVar9->ArrayNum = iVar12 + 1;
    *(FActorAdapter **)((pTVar9->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_620;
    local_620 = (void *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5e0.SharedReferenceCount.ReferenceController);
    pFVar24 = local_630;
    if (local_630 != (void *)0x0) {
      if (*(void **)((longlong)local_630 + 0xc0) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)local_630 + 0xc0));
      }
      ::operator_delete(pFVar24,0xe0);
    }
    pFVar24 = local_620;
    if (local_620 != (void *)0x0) {
      DestructItems<TUniquePtr<UE::Geometry::FActorChildMesh,TDefaultDelete<UE::Geometry::FActorChildMesh>_>,int>
                (*(TUniquePtr<UE::Geometry::FActorChildMesh,TDefaultDelete<UE::Geometry::FActorChildMesh>_>
                   **)((longlong)local_620 + 8),*(int *)((longlong)local_620 + 0x10));
      pvVar5 = *(void **)((longlong)pFVar24 + 8);
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      ::operator_delete(pFVar24,0x48);
    }
    FDynamicMesh3::~FDynamicMesh3(&local_398);
    FPlanarPolygonMeshGenerator::~FPlanarPolygonMeshGenerator(&local_498);
  }
  if (local_600.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_600.Data);
  }
LAB_14cb0cd62:
  if (local_5b8.Hull.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b8.Hull.AllocatorInstance.Data);
  }
  DeleteCriticalSection(&local_88);
  if (local_5d0 != (void *)0x0) {
    FMemory::Free(local_5d0);
  }
  if (local_618.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_618.Data);
  }
  return;
}

// GetAccumulatedMesh @ 14cb0d180

void __thiscall
UE::Geometry::FMeshSceneAdapter::GetAccumulatedMesh(FMeshSceneAdapter *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->SceneActors).AllocatorInstance.Data;
  iVar3 = (this->SceneActors).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->SceneActors).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FActorAdapter,TDefaultDelete<UE::Geometry::FActorAdapter>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    lVar5 = *(longlong *)pFVar8;
    plVar7 = *(longlong **)(lVar5 + 8);
    iVar4 = *(int *)(lVar5 + 0x10);
    plVar2 = plVar7 + iVar4;
    while( true ) {
      if (*(int *)(lVar5 + 0x10) != iVar4) {
        `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FActorChildMesh,TDefaultDelete<UE::Geometry::FActorChildMesh>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (plVar7 == plVar2) break;
      plVar6 = *(longlong **)(*plVar7 + 0xd8);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x40))(plVar6,param_1,*plVar7 + 0x20);
      }
      plVar7 = plVar7 + 1;
    }
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// GetBoundingBox @ 14cb0dd40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::FMeshSceneAdapter::GetBoundingBox
          (FMeshSceneAdapter *this,TAxisAlignedBox3<double> *__return_storage_ptr__)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 local_res20 [8];
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  longlong *local_f8;
  FScriptContainerElement *local_f0;
  code *local_e8;
  longlong **local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2305,"MeshScene_GetBoundingBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x901);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2305);
  }
  if (this->bHaveSpatialEvaluationCache == false) {
    iVar2 = (this->SceneActors).ArrayNum;
    pFVar9 = (this->SceneActors).AllocatorInstance.Data;
    local_f0 = pFVar9 + (longlong)iVar2 * 8;
    local_128 = ___xmm_7fefffffffffffff7fefffffffffffff;
    uStack_120 = _UNK_150a9e648;
    uVar12 = (undefined4)_UNK_150a9e648;
    uVar18 = (undefined4)((ulonglong)_UNK_150a9e648 >> 0x20);
    local_118 = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_110 = _UNK_150a9e6d8;
    uVar14 = SUB84(_UNK_150a9e6d8,0);
    uVar20 = (undefined4)((ulonglong)_UNK_150a9e6d8 >> 0x20);
    uVar13 = SUB84(___xmm_ffefffffffffffff7fefffffffffffff,0);
    uVar19 = (undefined4)((ulonglong)___xmm_ffefffffffffffff7fefffffffffffff >> 0x20);
    local_108 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_100 = _UNK_1508ffb58;
    uVar16 = SUB84(_UNK_1508ffb58,0);
    uVar22 = (undefined4)((ulonglong)_UNK_1508ffb58 >> 0x20);
    uVar15 = SUB84(___xmm_ffefffffffffffffffefffffffffffff,0);
    uVar21 = (undefined4)((ulonglong)___xmm_ffefffffffffffffffefffffffffffff >> 0x20);
    uVar11 = (undefined4)___xmm_7fefffffffffffff7fefffffffffffff;
    uVar17 = (undefined4)((ulonglong)___xmm_7fefffffffffffff7fefffffffffffff >> 0x20);
    while( true ) {
      pFVar7 = local_f0;
      if ((this->SceneActors).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FActorAdapter,TDefaultDelete<UE::Geometry::FActorAdapter>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar9 == pFVar7) break;
      lVar4 = *(longlong *)pFVar9;
      plVar8 = *(longlong **)(lVar4 + 8);
      iVar3 = *(int *)(lVar4 + 0x10);
      plVar1 = plVar8 + iVar3;
      while( true ) {
        if (*(int *)(lVar4 + 0x10) != iVar3) {
          `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FActorChildMesh,TDefaultDelete<UE::Geometry::FActorChildMesh>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (plVar8 == plVar1) break;
        plVar5 = *(longlong **)(*plVar8 + 0xd8);
        if (plVar5 != (longlong *)0x0) {
          local_e0 = &local_f8;
          local_e8 = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::GetBoundingBox'::__l16::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                     ::Call;
          local_f8 = plVar8;
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_d8,&local_e8);
          if (local_d8 <= (double)CONCAT44(uVar17,uVar11)) {
            uVar11 = SUB84(local_d8,0);
            uVar17 = (undefined4)((ulonglong)local_d8 >> 0x20);
          }
          if (local_d0 <= (double)CONCAT44(uVar18,uVar12)) {
            uVar12 = SUB84(local_d0,0);
            uVar18 = (undefined4)((ulonglong)local_d0 >> 0x20);
          }
          if (local_c8 <= (double)CONCAT44(uVar19,uVar13)) {
            uVar13 = SUB84(local_c8,0);
            uVar19 = (undefined4)((ulonglong)local_c8 >> 0x20);
          }
          if ((double)CONCAT44(uVar20,uVar14) < local_c0 ||
              (double)CONCAT44(uVar20,uVar14) == local_c0) {
            uVar14 = SUB84(local_c0,0);
            uVar20 = (undefined4)((ulonglong)local_c0 >> 0x20);
          }
          if ((double)CONCAT44(uVar21,uVar15) < local_b8 ||
              (double)CONCAT44(uVar21,uVar15) == local_b8) {
            uVar15 = SUB84(local_b8,0);
            uVar21 = (undefined4)((ulonglong)local_b8 >> 0x20);
          }
          if ((double)CONCAT44(uVar22,uVar16) < local_b0 ||
              (double)CONCAT44(uVar22,uVar16) == local_b0) {
            uVar16 = SUB84(local_b0,0);
            uVar22 = (undefined4)((ulonglong)local_b0 >> 0x20);
          }
        }
        plVar8 = plVar8 + 1;
      }
      pFVar9 = pFVar9 + 8;
      dStack_100 = (double)CONCAT44(uVar22,uVar16);
      local_108 = (double)CONCAT44(uVar21,uVar15);
      dStack_110 = (double)CONCAT44(uVar20,uVar14);
      local_118 = (double)CONCAT44(uVar19,uVar13);
      uStack_120 = CONCAT44(uVar18,uVar12);
      local_128 = CONCAT44(uVar17,uVar11);
    }
    *(undefined8 *)&(__return_storage_ptr__->Min).field0_0x0 = local_128;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uStack_120;
  }
  else {
    dVar6 = (this->CachedWorldBounds).Min.field0_0x0._s_0.Y;
    local_118 = (this->CachedWorldBounds).Min.field0_0x0._s_0.Z;
    dStack_110 = (this->CachedWorldBounds).Max.field0_0x0._s_0.X;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X =
         (this->CachedWorldBounds).Min.field0_0x0._s_0.X;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar6;
    local_108 = (this->CachedWorldBounds).Max.field0_0x0._s_0.Y;
    dStack_100 = (this->CachedWorldBounds).Max.field0_0x0._s_0.Z;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_118;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dStack_110;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = local_108;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dStack_100;
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetGeometryStatistics @ 14cb100e0

void __thiscall
UE::Geometry::FMeshSceneAdapter::GetGeometryStatistics(FMeshSceneAdapter *this,FStatistics *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  FStatistics *local_res8;
  FScriptContainerElement *local_res10;
  code *local_48;
  FStatistics **local_40;
  
  local_40 = &local_res8;
  param_1->UniqueMeshCount = 0;
  param_1->UniqueMeshTriangleCount = 0;
  local_48 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::GetGeometryStatistics'::__l2::<lambda_1>,void,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_>
             ::Call;
  local_res8 = param_1;
  ForEachSpatialWrapper
            (this,(TFunctionRef<void___cdecl(TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>)>
                   *)&local_48);
  param_1->InstanceMeshCount = 0;
  param_1->InstanceMeshTriangleCount = 0;
  pFVar8 = (this->SceneActors).AllocatorInstance.Data;
  iVar2 = (this->SceneActors).ArrayNum;
  local_res10 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    pFVar5 = local_res10;
    if ((this->SceneActors).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FActorAdapter,TDefaultDelete<UE::Geometry::FActorAdapter>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar8 == pFVar5) break;
    lVar4 = *(longlong *)pFVar8;
    plVar7 = *(longlong **)(lVar4 + 8);
    iVar3 = *(int *)(lVar4 + 0x10);
    plVar1 = plVar7 + iVar3;
    while( true ) {
      if (*(int *)(lVar4 + 0x10) != iVar3) {
        `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FActorChildMesh,TDefaultDelete<UE::Geometry::FActorChildMesh>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (plVar7 == plVar1) break;
      param_1->InstanceMeshCount = param_1->InstanceMeshCount + 1;
      if (*(longlong **)(*plVar7 + 0xd8) != (longlong *)0x0) {
        iVar6 = (**(code **)(**(longlong **)(*plVar7 + 0xd8) + 0x10))();
        param_1->InstanceMeshTriangleCount = param_1->InstanceMeshTriangleCount + (longlong)iVar6;
      }
      plVar7 = plVar7 + 1;
    }
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// GetMeshBoundingBox @ 14cb10cd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::FMeshSceneAdapter::GetMeshBoundingBox
          (FMeshSceneAdapter *this,TAxisAlignedBox3<double> *__return_storage_ptr__,
          UActorComponent *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  TAxisAlignedBox3<double> *pTVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  double dVar11;
  undefined1 local_res8 [8];
  
  if ((this->bHaveSpatialEvaluationCache == false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bHaveSpatialEvaluationCache",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                         ,0xa15,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TAxisAlignedBox3<double> *)(*pcVar3)();
    return pTVar8;
  }
  iVar2 = (this->SortedSpatials).ArrayNum;
  pFVar9 = (this->SortedSpatials).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->SortedSpatials).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::FMeshSceneAdapter::FSpatialCacheInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    dVar5 = __real_3ff0000000000000;
    if (pFVar9 == pFVar1) break;
    if (((UActorComponent *)**(longlong **)(pFVar9 + 8) == param_1) &&
       ((param_2 == -1 || (param_2 == *(int *)((longlong)*(longlong **)(pFVar9 + 8) + 0xc))))) {
      dVar5 = *(double *)(pFVar9 + 0x20);
      dVar4 = *(double *)(pFVar9 + 0x28);
      dVar10 = *(double *)(pFVar9 + 0x30);
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = *(double *)(pFVar9 + 0x18);
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar5;
      dVar5 = *(double *)(pFVar9 + 0x38);
      dVar11 = *(double *)(pFVar9 + 0x40);
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar4;
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar10;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar5;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar11;
      return __return_storage_ptr__;
    }
    pFVar9 = pFVar9 + 0x48;
  }
  dVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X + __real_3ff0000000000000;
  dVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z - __real_3ff0000000000000;
  dVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z + __real_3ff0000000000000;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X - __real_3ff0000000000000;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)uVar6 - dVar5;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar10;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)uVar6 + dVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar11;
  return __return_storage_ptr__;
}

// GetMeshBoundingBoxes @ 14cb10e00

void __thiscall
UE::Geometry::FMeshSceneAdapter::GetMeshBoundingBoxes
          (FMeshSceneAdapter *this,
          TArray<UE::Geometry::TAxisAlignedBox3<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_98 [8];
  longlong *local_90;
  FScriptContainerElement *local_88;
  code *local_80;
  longlong **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (this->bHaveSpatialEvaluationCache == false) {
    pFVar14 = (this->SceneActors).AllocatorInstance.Data;
    iVar3 = (this->SceneActors).ArrayNum;
    local_88 = pFVar14 + (longlong)iVar3 * 8;
    while( true ) {
      pFVar1 = local_88;
      if ((this->SceneActors).ArrayNum != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FActorAdapter,TDefaultDelete<UE::Geometry::FActorAdapter>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar14 == pFVar1) break;
      lVar12 = *(longlong *)pFVar14;
      plVar15 = *(longlong **)(lVar12 + 8);
      iVar10 = *(int *)(lVar12 + 0x10);
      plVar2 = plVar15 + iVar10;
      while( true ) {
        if (*(int *)(lVar12 + 0x10) != iVar10) {
          local_98[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FActorChildMesh,TDefaultDelete<UE::Geometry::FActorChildMesh>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_98);
        }
        if (plVar15 == plVar2) break;
        plVar6 = *(longlong **)(*plVar15 + 0xd8);
        if (plVar6 != (longlong *)0x0) {
          local_78 = &local_90;
          local_80 = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::GetMeshBoundingBoxes'::__l22::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                     ::Call;
          local_90 = plVar15;
          (**(code **)(*plVar6 + 0x18))(plVar6,&local_70,&local_80);
          pFVar1 = (param_1->AllocatorInstance).Data;
          if (((pFVar1 <= (FScriptContainerElement *)&local_70) &&
              ((FScriptContainerElement *)&local_70 < pFVar1 + (longlong)param_1->ArrayMax * 0x30))
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar11 = param_1->ArrayNum;
          if (iVar11 == param_1->ArrayMax) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          lVar13 = (longlong)iVar11;
          param_1->ArrayNum = iVar11 + 1;
          pFVar1 = (param_1->AllocatorInstance).Data;
          *(undefined8 *)(pFVar1 + lVar13 * 0x30) = local_70;
          *(undefined8 *)(pFVar1 + lVar13 * 0x30 + 8) = uStack_68;
          *(undefined8 *)(pFVar1 + lVar13 * 0x30 + 0x10) = local_60;
          *(undefined8 *)(pFVar1 + lVar13 * 0x30 + 0x10 + 8) = uStack_58;
          *(undefined8 *)(pFVar1 + lVar13 * 0x30 + 0x20) = local_50;
          *(undefined8 *)(pFVar1 + lVar13 * 0x30 + 0x20 + 8) = uStack_48;
        }
        plVar15 = plVar15 + 1;
      }
      pFVar14 = pFVar14 + 8;
    }
  }
  else {
    iVar3 = (this->SortedSpatials).ArrayNum;
    pFVar16 = (this->SortedSpatials).AllocatorInstance.Data;
    pFVar14 = pFVar16 + 0x18;
    pFVar1 = pFVar16 + (longlong)iVar3 * 0x48;
    while( true ) {
      if ((this->SortedSpatials).ArrayNum != iVar3) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FMeshSceneAdapter::FSpatialCacheInfo,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar16 == pFVar1) break;
      pFVar4 = (param_1->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar14) && (pFVar14 < pFVar4 + (longlong)param_1->ArrayMax * 0x30)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == param_1->ArrayMax) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar10;
      }
      pFVar16 = pFVar16 + 0x48;
      param_1->ArrayNum = iVar10 + 1;
      uVar8 = *(undefined8 *)(pFVar14 + 8);
      lVar12 = (longlong)iVar10;
      pFVar5 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar5 + lVar12 * 0x30) = *(undefined8 *)pFVar14;
      *(undefined8 *)(pFVar5 + lVar12 * 0x30 + 8) = uVar8;
      uVar8 = *(undefined8 *)(pFVar14 + 0x18);
      *(undefined8 *)(pFVar5 + lVar12 * 0x30 + 0x10) = *(undefined8 *)(pFVar14 + 0x10);
      *(undefined8 *)(pFVar5 + lVar12 * 0x30 + 0x10 + 8) = uVar8;
      pFVar4 = pFVar14 + 0x20;
      uVar8 = *(undefined8 *)(pFVar14 + 0x28);
      pFVar14 = pFVar14 + 0x48;
      *(undefined8 *)(pFVar5 + lVar12 * 0x30 + 0x20) = *(undefined8 *)pFVar4;
      *(undefined8 *)(pFVar5 + lVar12 * 0x30 + 0x20 + 8) = uVar8;
    }
  }
  return;
}

// InitializeSpatialWrappers @ 14cb20480

void __thiscall
UE::Geometry::FMeshSceneAdapter::InitializeSpatialWrappers
          (FMeshSceneAdapter *this,
          TArray<UE::Geometry::FActorAdapter_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  IMeshSpatialWrapper *pIVar6;
  undefined1 *puVar7;
  code *pcVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  int iVar11;
  TSharedRef<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> *pTVar12;
  ulonglong *puVar13;
  uint uVar14;
  ulonglong uVar15;
  FSharedReferencer<1> FVar16;
  FScriptContainerElement *pFVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  FSpatialWrapperInfo *pFVar20;
  ulonglong *puVar21;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FSpatialWrapperInfo *local_b8;
  TReferenceControllerBase<1> *local_b0;
  longlong local_a8;
  TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> local_a0;
  uint local_90;
  FScriptContainerElement *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  ESceneMeshType EStack_78;
  undefined4 uStack_74;
  void *local_70;
  FScriptContainerElement *local_68;
  TSharedRef<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> local_60;
  TSharedRef<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1> local_50;
  
  pFVar17 = (param_1->AllocatorInstance).Data;
  local_90 = param_1->ArrayNum;
  uVar15 = (ulonglong)(int)local_90;
  local_68 = pFVar17 + uVar15 * 8;
  do {
    pFVar9 = local_68;
    local_88 = pFVar17;
    if (param_1->ArrayNum != (int)uVar15) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FActorAdapter_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar17 == pFVar9) {
      return;
    }
    lVar4 = *(longlong *)pFVar17;
    plVar19 = *(longlong **)(lVar4 + 8);
    iVar3 = *(int *)(lVar4 + 0x10);
    plVar2 = plVar19 + iVar3;
    while( true ) {
      if (*(int *)(lVar4 + 0x10) != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FActorChildMesh,TDefaultDelete<UE::Geometry::FActorChildMesh>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (plVar19 == plVar2) break;
      if (*(int *)(*plVar19 + 8) == 3) {
        pTVar12 = MakeShared<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>(&local_60);
        local_b8 = pTVar12->Object;
        local_b0 = (pTVar12->SharedReferenceCount).ReferenceController;
        if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60.SharedReferenceCount.ReferenceController);
        lVar5 = *plVar19;
        local_80 = *(undefined4 *)(lVar5 + 0x10);
        uStack_7c = *(undefined4 *)(lVar5 + 0x14);
        EStack_78 = *(ESceneMeshType *)(lVar5 + 0x18);
        uStack_74 = *(undefined4 *)(lVar5 + 0x1c);
        if ((local_b8 == (FSpatialWrapperInfo *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(undefined4 *)&(local_b8->SourceContainer).MeshPointer = local_80;
        *(undefined4 *)((longlong)&(local_b8->SourceContainer).MeshPointer + 4) = uStack_7c;
        (local_b8->SourceContainer).MeshType = EStack_78;
        *(undefined4 *)&(local_b8->SourceContainer).field_0xc = uStack_74;
        if ((local_b8 == (FSpatialWrapperInfo *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pIVar6 = (local_b8->SpatialWrapper).Ptr;
        (local_b8->SpatialWrapper).Ptr = (IMeshSpatialWrapper *)0x0;
        if (pIVar6 != (IMeshSpatialWrapper *)0x0) {
          (**(code **)pIVar6->_padding_)(pIVar6,1);
        }
        pFVar17 = (this->SplineMeshSpatialAdapters).AllocatorInstance.Data;
        if (((pFVar17 <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 <
             pFVar17 + (longlong)(this->SplineMeshSpatialAdapters).ArrayMax * 0x10)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar11 = (this->SplineMeshSpatialAdapters).ArrayNum;
        piVar1 = &(this->SplineMeshSpatialAdapters).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(this->SplineMeshSpatialAdapters).AllocatorInstance,piVar1);
        }
        (this->SplineMeshSpatialAdapters).ArrayNum = iVar11 + 1;
        pFVar17 = (this->SplineMeshSpatialAdapters).AllocatorInstance.Data + (longlong)iVar11 * 0x10
        ;
        *(FSpatialWrapperInfo **)pFVar17 = local_b8;
        *(TReferenceControllerBase<1> **)(pFVar17 + 8) = local_b0;
        FVar16.ReferenceController = local_b0;
        pFVar20 = local_b8;
        if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      else {
        local_70 = *(void **)(*plVar19 + 0x10);
        uVar14 = ((uint)((ulonglong)local_70 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_70 >> 4)) *
                 -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        if (*(int *)&(this->SpatialAdapters).field_0x8 !=
            *(int *)&(this->SpatialAdapters).field_0x34) {
          puVar7 = *(undefined1 **)&(this->SpatialAdapters).field_0x40;
          puVar18 = &(this->SpatialAdapters).field_0x38;
          if (puVar7 != (undefined1 *)0x0) {
            puVar18 = puVar7;
          }
          iVar11 = *(int *)(puVar18 +
                           (ulonglong)
                           (*(int *)&(this->SpatialAdapters).field_0x48 - 1U &
                           (uVar14 >> 0x10 ^ uVar14)) * 4);
          if (iVar11 != -1) {
            do {
              puVar13 = (ulonglong *)((longlong)iVar11 * 0x20 + *(longlong *)&this->SpatialAdapters)
              ;
              if ((void *)*puVar13 == local_70) {
                puVar21 = puVar13 + 1;
                if (puVar13 == (ulonglong *)0x0) {
                  puVar21 = (ulonglong *)0x0;
                }
                if (puVar21 != (ulonglong *)0x0) {
                  pFVar20 = (FSpatialWrapperInfo *)*puVar21;
                  goto LAB_14cb207df;
                }
                break;
              }
              iVar11 = (int)puVar13[3];
            } while (iVar11 != -1);
          }
        }
        pTVar12 = MakeShared<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>(&local_50);
        local_a0.Object = pTVar12->Object;
        local_a0.SharedReferenceCount.ReferenceController =
             (pTVar12->SharedReferenceCount).ReferenceController;
        if (local_a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50.SharedReferenceCount.ReferenceController);
        lVar5 = *plVar19;
        local_80 = *(undefined4 *)(lVar5 + 0x10);
        uStack_7c = *(undefined4 *)(lVar5 + 0x14);
        EStack_78 = *(ESceneMeshType *)(lVar5 + 0x18);
        uStack_74 = *(undefined4 *)(lVar5 + 0x1c);
        if ((local_a0.Object == (FSpatialWrapperInfo *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(undefined4 *)&((local_a0.Object)->SourceContainer).MeshPointer = local_80;
        *(undefined4 *)((longlong)&((local_a0.Object)->SourceContainer).MeshPointer + 4) = uStack_7c
        ;
        ((local_a0.Object)->SourceContainer).MeshType = EStack_78;
        *(undefined4 *)&((local_a0.Object)->SourceContainer).field_0xc = uStack_74;
        if ((local_a0.Object == (FSpatialWrapperInfo *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pIVar6 = ((local_a0.Object)->SpatialWrapper).Ptr;
        ((local_a0.Object)->SpatialWrapper).Ptr = (IMeshSpatialWrapper *)0x0;
        if (pIVar6 != (IMeshSpatialWrapper *)0x0) {
          (**(code **)pIVar6->_padding_)(pIVar6,1);
        }
        TMapBase<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,0>_>
        ::
        Emplace<void_*_const_&,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>_const_&>
                  ((TMapBase<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>,0>_>
                    *)&this->SpatialAdapters,&local_70,&local_a0);
        FVar16.ReferenceController = local_a0.SharedReferenceCount.ReferenceController;
        pFVar20 = local_a0.Object;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar16.ReferenceController);
LAB_14cb207df:
      local_a8 = *plVar19;
      pFVar17 = (pFVar20->ParentMeshes).AllocatorInstance.Data;
      if (((pFVar17 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 <
           pFVar17 + (longlong)(pFVar20->ParentMeshes).ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = (pFVar20->ParentMeshes).ArrayNum;
      piVar1 = &(pFVar20->ParentMeshes).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(pFVar20->ParentMeshes).AllocatorInstance,piVar1);
      }
      (pFVar20->ParentMeshes).ArrayNum = iVar11 + 1;
      *(longlong *)((pFVar20->ParentMeshes).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           local_a8;
      if (*(char *)(*plVar19 + 0xd0) != '\0') {
        pFVar20->NonUniformScaleCount = pFVar20->NonUniformScaleCount + 1;
      }
      lVar5 = *plVar19;
      plVar19 = plVar19 + 1;
      *(undefined8 *)(lVar5 + 0xd8) = 0;
    }
    pFVar17 = local_88 + 8;
    uVar15 = (ulonglong)local_90;
  } while( true );
}

// IsValid @ 14cb232f0

bool __thiscall UE::Geometry::FMeshSceneAdapter::IsValid(FMeshSceneAdapter *this)

{
  if ((*(int *)&(this->SpatialAdapters).field_0x8 == *(int *)&(this->SpatialAdapters).field_0x34) &&
     ((this->SplineMeshSpatialAdapters).ArrayNum == 0)) {
    return false;
  }
  return true;
}

// ParallelMeshVertexEnumeration @ 14cb28830

void __thiscall
UE::Geometry::FMeshSceneAdapter::ParallelMeshVertexEnumeration
          (FMeshSceneAdapter *this,TFunctionRef<bool___cdecl(int)> *param_1,
          TFunctionRef<bool___cdecl(int,AActor_*,UE::Geometry::FActorChildMesh_const_*,UE::Geometry::TAxisAlignedBox3<double>_const_&)>
          *param_2,TFunctionRef<bool___cdecl(int,AActor_*,UE::Geometry::FActorChildMesh_const_*,UE::Math::TVector<double>_const_&)>
                   *param_3,bool param_4)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  char cVar3;
  bool bVar4;
  EParallelForFlags EVar5;
  longlong lVar6;
  int local_res8 [2];
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  FMeshSceneAdapter **local_40;
  FMeshSceneAdapter *local_38;
  TFunctionRef<bool___cdecl(int,AActor_*,UE::Geometry::FActorChildMesh_const_*,UE::Geometry::TAxisAlignedBox3<double>_const_&)>
  *local_30;
  TFunctionRef<bool___cdecl(int,AActor_*,UE::Geometry::FActorChildMesh_const_*,UE::Math::TVector<double>_const_&)>
  *local_28;
  
  iVar1 = (this->SortedSpatials).ArrayNum;
  local_res8[0] = iVar1;
  cVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res8);
  pTVar2 = CVarMeshSceneAdapterDisableMultiThreading.Ref;
  if (cVar3 == '\0') {
    return;
  }
  if (!param_4) {
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar6 = 0;
    }
    else {
      lVar6 = 4;
    }
    EVar5 = Unbalanced;
    if (*(int *)((longlong)pTVar2->ShadowedValue + lVar6) == 0) goto LAB_14cb288b9;
  }
  EVar5 = ForceSingleThread;
LAB_14cb288b9:
  local_48 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::ParallelMeshVertexEnumeration'::__l2::<lambda_1>,void,int>
             ::Call;
  local_40 = &local_38;
  local_58.DataPtr = (void **)0x0;
  local_58.ArrayNum = 0;
  local_38 = this;
  local_30 = param_2;
  local_28 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_48,
             local_res8[0]._0_1_,EVar5,&local_58);
  return;
}

// ProcessActorChildMeshes @ 14cb28c80

void __thiscall
UE::Geometry::FMeshSceneAdapter::ProcessActorChildMeshes
          (FMeshSceneAdapter *this,
          TFunctionRef<void___cdecl(UE::Geometry::FActorAdapter_const_*,UE::Geometry::FActorChildMesh_const_*)>
          *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong local_res8;
  longlong local_res18;
  FScriptContainerElement *local_res20;
  
  pFVar7 = (this->SceneActors).AllocatorInstance.Data;
  iVar2 = (this->SceneActors).ArrayNum;
  pFVar6 = pFVar7 + (longlong)iVar2 * 8;
  local_res20 = pFVar6;
  while( true ) {
    if ((this->SceneActors).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FActorAdapter,TDefaultDelete<UE::Geometry::FActorAdapter>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar7 == pFVar6) break;
    lVar4 = *(longlong *)pFVar7;
    if (lVar4 != 0) {
      plVar5 = *(longlong **)(lVar4 + 8);
      iVar3 = *(int *)(lVar4 + 0x10);
      plVar1 = plVar5 + iVar3;
      while( true ) {
        if (*(int *)(lVar4 + 0x10) != iVar3) {
          `TCheckedPointerIterator<TUniquePtr<UE::Geometry::FActorChildMesh,TDefaultDelete<UE::Geometry::FActorChildMesh>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
        }
        pFVar6 = local_res20;
        if (plVar5 == plVar1) break;
        if (*plVar5 != 0) {
          local_res18 = *(longlong *)pFVar7;
          local_res8 = *plVar5;
          (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res18,&local_res8);
        }
        plVar5 = plVar5 + 1;
      }
    }
    pFVar7 = pFVar7 + 8;
  }
  return;
}

// UpdateActorBounds @ 14cb44750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshSceneAdapter::UpdateActorBounds(FMeshSceneAdapter *this,FActorAdapter *param_1)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  longlong lVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  double dVar16;
  <lambda_1> local_res10 [8];
  ForAnyElementType local_88;
  uint local_80;
  uint local_7c;
  FActorAdapter *local_78;
  ForAnyElementType *local_70;
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  FActorAdapter **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar4 = (param_1->ChildMeshes).ArrayNum;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  local_48 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uStack_40 = _UNK_150a9e648;
  local_28 = ___xmm_ffefffffffffffffffefffffffffffff;
  uStack_20 = _UNK_1508ffb58;
  local_38 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uStack_30 = _UNK_150a9e6d8;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  local_80 = 0;
  if ((uVar4 != 0) &&
     (Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar4,&local_88,0,(int *)&local_7c), 0 < (int)uVar4)) {
    uVar13 = (ulonglong)uVar4;
    do {
      if (((local_88.Data <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < local_88.Data + (longlong)(int)local_7c * 0x30))
         && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_80 == local_7c) {
        local_80 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&local_88,(int *)&local_7c);
      }
      uVar1 = local_80 + 1;
      lVar12 = (longlong)(int)local_80;
      *(undefined8 *)(local_88.Data + lVar12 * 0x30) = local_48;
      *(undefined8 *)(local_88.Data + lVar12 * 0x30 + 8) = uStack_40;
      *(undefined8 *)(local_88.Data + lVar12 * 0x30 + 0x10) = local_38;
      *(undefined8 *)(local_88.Data + lVar12 * 0x30 + 0x10 + 8) = uStack_30;
      *(undefined8 *)(local_88.Data + lVar12 * 0x30 + 0x20) = local_28;
      *(undefined8 *)(local_88.Data + lVar12 * 0x30 + 0x20 + 8) = uStack_20;
      uVar13 = uVar13 - 1;
      local_80 = uVar1;
    } while (uVar13 != 0);
  }
  local_70 = &local_88;
  local_68.DataPtr = (void **)0x0;
  local_58 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshSceneAdapter::UpdateActorBounds'::__l2::<lambda_1>,void,int>
             ::Call;
  local_50 = &local_78;
  local_68.ArrayNum = 0;
  local_78 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",uVar4,1,(TFunctionRef<void___cdecl(int)> *)&local_58,local_res10[0]
             ,None,&local_68);
  uVar4 = local_80;
  (param_1->WorldBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (param_1->WorldBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (param_1->WorldBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (param_1->WorldBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (param_1->WorldBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (param_1->WorldBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  uVar13 = (ulonglong)(int)local_80;
  pFVar14 = local_88.Data + uVar13 * 0x30;
  FVar15.Data = local_88.Data;
  while( true ) {
    if ((uint)uVar13 != uVar4) {
      `TCheckedPointerIterator<UE::Geometry::TAxisAlignedBox3<double>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
      uVar13 = (ulonglong)local_80;
    }
    if (FVar15.Data == pFVar14) break;
    dVar3 = *(double *)FVar15.Data;
    pFVar6 = FVar15.Data + 8;
    dVar7 = *(double *)(FVar15.Data + 0x10);
    dVar8 = *(double *)(FVar15.Data + 0x18);
    dVar9 = *(double *)(FVar15.Data + 0x20);
    dVar10 = *(double *)(FVar15.Data + 0x28);
    FVar15.Data = FVar15.Data + 0x30;
    dVar2 = (param_1->WorldBounds).Min.field0_0x0._s_0.X;
    if (dVar3 <= dVar2) {
      dVar2 = dVar3;
    }
    dVar3 = (param_1->WorldBounds).Min.field0_0x0._s_0.Y;
    dVar16 = *(double *)pFVar6;
    if (dVar3 <= *(double *)pFVar6) {
      dVar16 = dVar3;
    }
    (param_1->WorldBounds).Min.field0_0x0._s_0.X = dVar2;
    dVar2 = (param_1->WorldBounds).Min.field0_0x0._s_0.Z;
    (param_1->WorldBounds).Min.field0_0x0._s_0.Y = dVar16;
    if (dVar7 <= dVar2) {
      dVar2 = dVar7;
    }
    dVar3 = (param_1->WorldBounds).Max.field0_0x0._s_0.X;
    if (dVar3 <= dVar8) {
      dVar3 = dVar8;
    }
    (param_1->WorldBounds).Min.field0_0x0._s_0.Z = dVar2;
    dVar2 = (param_1->WorldBounds).Max.field0_0x0._s_0.Y;
    if (dVar2 <= dVar9) {
      dVar2 = dVar9;
    }
    (param_1->WorldBounds).Max.field0_0x0._s_0.X = dVar3;
    dVar3 = (param_1->WorldBounds).Max.field0_0x0._s_0.Z;
    if (dVar3 <= dVar10) {
      dVar3 = dVar10;
    }
    (param_1->WorldBounds).Max.field0_0x0._s_0.Y = dVar2;
    (param_1->WorldBounds).Max.field0_0x0._s_0.Z = dVar3;
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

