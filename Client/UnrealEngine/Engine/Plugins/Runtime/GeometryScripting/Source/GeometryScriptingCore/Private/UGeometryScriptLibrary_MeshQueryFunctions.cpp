// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 133

// StaticClass @ 14ce16d50

UClass * __cdecl UGeometryScriptLibrary_MeshQueryFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshQueryFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshQueryFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshQueryFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_MeshQueryFunctions,0x28,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshQueryFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshQueryFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshQueryFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshQueryFunctions @ 14ce26a00

UGeometryScriptLibrary_MeshQueryFunctions * __thiscall
UGeometryScriptLibrary_MeshQueryFunctions::UGeometryScriptLibrary_MeshQueryFunctions
          (UGeometryScriptLibrary_MeshQueryFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshQueryFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshQueryFunctions @ 14ce26a30

UGeometryScriptLibrary_MeshQueryFunctions * __thiscall
UGeometryScriptLibrary_MeshQueryFunctions::UGeometryScriptLibrary_MeshQueryFunctions
          (UGeometryScriptLibrary_MeshQueryFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshQueryFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshQueryFunctions @ 14ce27390

void __thiscall
UGeometryScriptLibrary_MeshQueryFunctions::~UGeometryScriptLibrary_MeshQueryFunctions
          (UGeometryScriptLibrary_MeshQueryFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshQueryFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ce33c00

TVector<double> * __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::ComputeTriangleBarycentricCoords'::__l2::<lambda_1>::
operator()(void *this,TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1)

{
  uint uVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  TVector<double> *pTVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TVector<double>_u_0 local_58 [3];
  
  uVar1 = **(uint **)((longlong)this + 8);
  if ((((int)uVar1 < 0) ||
      ((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                     .Data + (ulonglong)(uVar1 >> 9) * 8) +
                                  (ulonglong)(uVar1 & 0x1ff) * 2) - 1U))) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  **(undefined1 **)this = uVar8;
  if (**(char **)this != '\0') {
    UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
              (param_1,**(int **)((longlong)this + 8),*(TVector<double> **)((longlong)this + 0x10),
               *(TVector<double> **)((longlong)this + 0x18),
               *(TVector<double> **)((longlong)this + 0x20));
    pTVar2 = *(TVector<double> **)((longlong)this + 0x10);
    pTVar3 = *(TVector<double> **)((longlong)this + 0x18);
    pTVar4 = *(TVector<double> **)((longlong)this + 0x20);
    dVar6 = (pTVar3->field0_0x0)._s_0.Y - (pTVar2->field0_0x0)._s_0.Y;
    dVar15 = (pTVar3->field0_0x0)._s_0.X - (pTVar2->field0_0x0)._s_0.X;
    dVar12 = (pTVar3->field0_0x0)._s_0.Z - (pTVar2->field0_0x0)._s_0.Z;
    dVar5 = (pTVar4->field0_0x0)._s_0.X - (pTVar2->field0_0x0)._s_0.X;
    dVar14 = (pTVar4->field0_0x0)._s_0.Y - (pTVar2->field0_0x0)._s_0.Y;
    dVar13 = (pTVar4->field0_0x0)._s_0.Z - (pTVar2->field0_0x0)._s_0.Z;
    dVar11 = dVar15 * dVar13 - dVar12 * dVar5;
    dVar5 = dVar6 * dVar5 - dVar15 * dVar14;
    dVar14 = dVar12 * dVar14 - dVar6 * dVar13;
    if (__real_3e45798ee2308c3a < dVar11 * dVar11 + dVar14 * dVar14 + dVar5 * dVar5) {
      UE::Geometry::VectorUtil::BarycentricCoords<double>
                ((TVector<double> *)&local_58[0]._s_0,*(TVector<double> **)((longlong)this + 0x28),
                 pTVar2,pTVar3,pTVar4);
      uVar9 = 0;
      uVar10 = 0;
      if (0.0 <= (double)local_58[0]._0_8_) {
        if (__real_3ff0000000000000 <= (double)local_58[0]._0_8_) {
          local_58[0]._0_8_ = __real_3ff0000000000000;
        }
      }
      else {
        local_58[0]._0_8_ = 0.0;
      }
      if (0.0 <= (double)local_58[0]._8_8_) {
        if (__real_3ff0000000000000 <= (double)local_58[0]._8_8_) {
          local_58[0]._8_8_ = __real_3ff0000000000000;
        }
      }
      else {
        local_58[0]._8_8_ = 0.0;
      }
      if (0.0 <= (double)local_58[0]._16_8_) {
        uVar9 = (undefined4)local_58[0]._s_0.Z;
        uVar10 = (undefined4)((ulonglong)local_58[0]._16_8_ >> 0x20);
        if (__real_3ff0000000000000 <= (double)local_58[0]._16_8_) {
          uVar9 = SUB84(__real_3ff0000000000000,0);
          uVar10 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        }
      }
      (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_58[0]._0_8_;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_58[0]._8_8_;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar10,uVar9);
      return __return_storage_ptr__;
    }
  }
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// operator() @ 14ce363c0

bool __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetAllSplitUVsAtVertex'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2)

{
  uint uVar1;
  undefined8 local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  
  uVar1 = **(uint **)this;
  if (((-1 < (int)uVar1) &&
      ((int)uVar1 <
       (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) <
      0xfffe)) {
    local_28 = *(undefined8 *)((longlong)this + 8);
    local_20 = *(undefined8 *)((longlong)this + 0x10);
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<``UGeometryScriptLibrary_MeshQueryFunctions::GetAllSplitUVsAtVertex'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,bool,int,int,UE::Math::TVector2<float>_const_&>
               ::Call;
    UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>::
    EnumerateVertexElements
              (param_2,uVar1,
               (TFunctionRef<bool___cdecl(int,int,UE::Math::TVector2<float>_const_&)> *)&local_18,
               true);
    return true;
  }
  return false;
}

// operator() @ 14ce36650

bool __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetAllUVSeamEdges'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int local_28 [4];
  
  uVar12 = 0;
  uVar13 = (param_1->EdgeRefCounts).RefCounts.CurBlockUsed +
           (param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar13 != 0) &&
     (pFVar2 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar12 = 1;
    uVar10 = 1;
    if ((int)uVar13 < 2) goto joined_r0x00014ce366f3;
    do {
      lVar6 = (ulonglong)((uint)uVar12 & 0x1ff) * 2;
      lVar3 = *(longlong *)(pFVar2 + (uVar12 >> 9) * 8);
      if ((*(short *)(lVar6 + lVar3) != 0) && (*(short *)(lVar6 + lVar3) != -1)) break;
      uVar10 = (uint)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)uVar13);
  }
  uVar10 = (uint)uVar12;
joined_r0x00014ce366f3:
  do {
    if (uVar10 == uVar13) {
      return true;
    }
    while( true ) {
      iVar11 = (int)uVar12;
      local_28[0] = iVar11;
      bVar7 = UE::Geometry::TDynamicMeshOverlay<float,2>::IsSeamEdge
                        ((TDynamicMeshOverlay<float,2> *)param_2,iVar11,(bool *)0x0);
      if (bVar7) {
        lVar3 = *(longlong *)this;
        if ((*(longlong *)(lVar3 + 8) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pFVar4 = *(ForAnyElementType **)(lVar3 + 8);
        if (((pFVar4->Data <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 <
             pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        iVar9 = *(int *)&pFVar4[1].Data;
        piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,pFVar4,piVar1);
        }
        *(int *)&pFVar4[1].Data = iVar9 + 1;
        *(int *)(pFVar4->Data + (longlong)iVar9 * 4) = local_28[0];
      }
      uVar10 = iVar11 + 1;
      uVar12 = (ulonglong)uVar10;
      if ((int)uVar13 <= (int)uVar10) break;
      pFVar2 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar3 = (uVar12 >> 9) * 8;
        lVar6 = (ulonglong)((uint)uVar12 & 0x1ff) * 2;
        if ((*(short *)(lVar6 + *(longlong *)(pFVar2 + lVar3)) != 0) &&
           (*(short *)(lVar6 + *(longlong *)(pFVar2 + lVar3)) != -1)) break;
        uVar10 = (uint)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
        if ((int)uVar13 <= (int)uVar10) goto joined_r0x00014ce366f3;
      }
    }
  } while( true );
}

// operator() @ 14ce36870

bool __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexPositionsAtEdges'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ForAnyElementType *pFVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  uint *puVar17;
  ulonglong uVar18;
  undefined1 local_res8 [8];
  uint uStackX_1c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar7 = *(longlong *)this;
  if (*(longlong *)(lVar7 + 8) == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      uVar15 = (*pcVar13)();
      return (bool)uVar15;
    }
  }
  puVar8 = *(undefined8 **)(lVar7 + 8);
  puVar17 = (uint *)*puVar8;
  iVar5 = *(int *)(puVar8 + 1);
  puVar2 = puVar17 + iVar5;
  while( true ) {
    if (*(int *)(puVar8 + 1) != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar17 == puVar2) break;
    uVar6 = *puVar17;
    if ((-1 < (int)uVar6) &&
       ((int)uVar6 <
        (int)((param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->EdgeRefCounts).RefCounts.CurBlockUsed))) {
      lVar7 = (ulonglong)(uVar6 >> 9) * 8;
      if ((ushort)(*(short *)(*(longlong *)
                               ((param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               lVar7) + (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe) {
        plVar9 = *(longlong **)((longlong)this + 8);
        uVar10 = *(ulonglong *)
                  (*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar7) +
                  (ulonglong)(uVar6 & 0x1ff) * 0x10);
        if (*plVar9 == 0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar14) {
            pcVar13 = (code *)swi(3);
            uVar15 = (*pcVar13)();
            return (bool)uVar15;
          }
        }
        pFVar11 = (ForAnyElementType *)*plVar9;
        uVar18 = (ulonglong)((uint)uVar10 & 0x1ff);
        lVar7 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                 ((uVar10 & 0xffffffff) >> 9) * 8);
        puVar3 = (undefined8 *)(lVar7 + uVar18 * 0x18);
        local_68 = *puVar3;
        uStack_60 = puVar3[1];
        local_58 = *(undefined8 *)(lVar7 + 0x10 + uVar18 * 0x18);
        if ((pFVar11->Data <= (FScriptContainerElement *)&local_68) &&
           ((FScriptContainerElement *)&local_68 <
            pFVar11->Data + (longlong)*(int *)((longlong)&pFVar11[1].Data + 4) * 0x18)) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar13 = (code *)swi(3);
            uVar15 = (*pcVar13)();
            return (bool)uVar15;
          }
        }
        iVar16 = *(int *)&pFVar11[1].Data;
        piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
        if (iVar16 == *piVar1) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,pFVar11,piVar1);
        }
        *(int *)&pFVar11[1].Data = iVar16 + 1;
        pFVar12 = pFVar11->Data;
        pFVar4 = pFVar12 + (longlong)iVar16 * 0x18;
        *(undefined8 *)pFVar4 = local_68;
        *(undefined8 *)(pFVar4 + 8) = uStack_60;
        *(undefined8 *)(pFVar12 + (longlong)iVar16 * 0x18 + 0x10) = local_58;
        plVar9 = *(longlong **)((longlong)this + 0x10);
        if (*plVar9 == 0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar14) {
            pcVar13 = (code *)swi(3);
            uVar15 = (*pcVar13)();
            return (bool)uVar15;
          }
        }
        uStackX_1c = (uint)(uVar10 >> 0x20);
        pFVar11 = (ForAnyElementType *)*plVar9;
        lVar7 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)(uStackX_1c >> 9) * 8);
        puVar3 = (undefined8 *)(lVar7 + (ulonglong)(uStackX_1c & 0x1ff) * 0x18);
        local_50 = *puVar3;
        uStack_48 = puVar3[1];
        local_40 = *(undefined8 *)(lVar7 + 0x10 + (ulonglong)(uStackX_1c & 0x1ff) * 0x18);
        if ((pFVar11->Data <= (FScriptContainerElement *)&local_50) &&
           ((FScriptContainerElement *)&local_50 <
            pFVar11->Data + (longlong)*(int *)((longlong)&pFVar11[1].Data + 4) * 0x18)) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar13 = (code *)swi(3);
            uVar15 = (*pcVar13)();
            return (bool)uVar15;
          }
        }
        iVar16 = *(int *)&pFVar11[1].Data;
        piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
        if (iVar16 == *piVar1) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,pFVar11,piVar1);
        }
        *(int *)&pFVar11[1].Data = iVar16 + 1;
        pFVar12 = pFVar11->Data;
        pFVar4 = pFVar12 + (longlong)iVar16 * 0x18;
        *(undefined8 *)pFVar4 = local_50;
        *(undefined8 *)(pFVar4 + 8) = uStack_48;
        *(undefined8 *)(pFVar12 + (longlong)iVar16 * 0x18 + 0x10) = local_40;
      }
    }
    puVar17 = puVar17 + 1;
  }
  return true;
}

// operator() @ 14ce36be0

TVector<double> * __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormal'::__l2::<lambda_1>::
operator()(void *this,TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FDynamicMeshAttributeSet *pFVar4;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this_00;
  double *pdVar5;
  undefined8 uVar6;
  bool bVar7;
  TVector<float>_u_0 local_38;
  TVector<float>_u_0 local_28;
  TVector<float>_u_0 local_18;
  
  bVar7 = UE::MeshQueryFunctionLocals::ValidateMeshTriangleID(param_1,**(int **)this,true);
  uVar6 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  if ((((bVar7) && (pFVar4 = (param_1->AttributeSet).Ptr, pFVar4 != (FDynamicMeshAttributeSet *)0x0)
       ) && (0 < (pFVar4->NormalLayers).Array.ArrayNum)) &&
     ((this_00 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                  (pFVar4->NormalLayers).Array.AllocatorInstance.Data,
      this_00 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0 &&
      (-1 < *(int *)(*(longlong *)
                      (*(longlong *)&this_00->field_0x78 +
                      (ulonglong)((uint)(**(int **)this * 3) >> 9) * 8) +
                    (ulonglong)(**(int **)this * 3 & 0x1ff) * 4))))) {
    **(undefined1 **)((longlong)this + 8) = 1;
    UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
              (this_00,**(int **)this,(TVector<float> *)&local_28._s_0,
               (TVector<float> *)&local_38._s_0,(TVector<float> *)&local_18._s_0);
    pdVar5 = *(double **)((longlong)this + 0x10);
    dVar1 = *pdVar5;
    dVar2 = pdVar5[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)local_38._s_0.X * dVar2 + (double)local_28._s_0.X * dVar1 +
         (double)local_18._s_0.X * pdVar5[2];
    dVar3 = pdVar5[2];
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (double)local_38._s_0.Y * dVar2 + (double)local_28._s_0.Y * dVar1 +
         (double)local_18._s_0.Y * pdVar5[2];
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (double)local_38._s_0.Z * dVar2 + (double)local_28._s_0.Z * dVar1 +
         (double)local_18._s_0.Z * dVar3;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// operator() @ 14ce36d80

bool __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormalTangents'::__l2::<lambda_1>
::operator()(void *this,FDynamicMesh3 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FDynamicMeshAttributeSet *pFVar5;
  FScriptContainerElement *pFVar6;
  double *pdVar7;
  uint uVar8;
  bool bVar9;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this_00;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this_01;
  ulonglong uVar10;
  ulonglong uVar11;
  TVector<float>_u_0 local_58;
  TVector<float>_u_0 local_48;
  TVector<float>_u_0 local_38 [4];
  
  bVar9 = UE::MeshQueryFunctionLocals::ValidateMeshTriangleID(param_1,**(int **)this,true);
  if ((((bVar9) && (pFVar5 = (param_1->AttributeSet).Ptr, pFVar5 != (FDynamicMeshAttributeSet *)0x0)
       ) && (iVar4 = (pFVar5->NormalLayers).Array.ArrayNum, 0 < iVar4)) &&
     (((pFVar6 = (pFVar5->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar6 != 0 &&
       (1 < iVar4)) &&
      ((*(longlong *)(pFVar6 + 8) != 0 && ((2 < iVar4 && (*(longlong *)(pFVar6 + 0x10) != 0))))))))
  {
    this_00 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    this_01 = this_00;
    if (1 < iVar4) {
      this_01 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)(pFVar6 + 8);
    }
    if (2 < iVar4) {
      this_00 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)(pFVar6 + 0x10);
    }
    uVar8 = **(int **)this * 3;
    uVar11 = (ulonglong)(uVar8 & 0x1ff);
    uVar10 = (ulonglong)(uVar8 >> 9);
    if (((-1 < *(int *)(*(longlong *)
                         (*(longlong *)
                           &(*(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                              pFVar6)->field_0x78 + uVar10 * 8) + uVar11 * 4)) &&
        (-1 < *(int *)(*(longlong *)(*(longlong *)&this_01->field_0x78 + uVar10 * 8) + uVar11 * 4)))
       && (-1 < *(int *)(*(longlong *)(*(longlong *)&this_00->field_0x78 + uVar10 * 8) + uVar11 * 4)
          )) {
      UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
                (*(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)pFVar6,
                 **(int **)this,(TVector<float> *)&local_48._s_0,(TVector<float> *)&local_58._s_0,
                 (TVector<float> *)&local_38[0]._s_0);
      pdVar7 = *(double **)((longlong)this + 0x10);
      dVar1 = *pdVar7;
      dVar2 = pdVar7[1];
      dVar3 = pdVar7[2];
      pdVar7 = *(double **)((longlong)this + 8);
      *pdVar7 = (double)local_58._s_0.X * dVar2 + (double)local_48._s_0.X * dVar1 +
                (double)(float)local_38[0]._0_4_ * dVar3;
      pdVar7[1] = (double)local_58._s_0.Y * dVar2 + (double)local_48._s_0.Y * dVar1 +
                  (double)(float)local_38[0]._4_4_ * dVar3;
      pdVar7[2] = (double)local_58._s_0.Z * dVar2 + (double)local_48._s_0.Z * dVar1 +
                  (double)(float)local_38[0]._8_4_ * dVar3;
      UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
                (this_01,**(int **)this,(TVector<float> *)&local_48._s_0,
                 (TVector<float> *)&local_58._s_0,(TVector<float> *)&local_38[0]._s_0);
      pdVar7 = *(double **)((longlong)this + 0x10);
      dVar1 = *pdVar7;
      dVar2 = pdVar7[1];
      dVar3 = pdVar7[2];
      pdVar7 = *(double **)((longlong)this + 0x18);
      *pdVar7 = (double)local_58._s_0.X * dVar2 + (double)local_48._s_0.X * dVar1 +
                (double)(float)local_38[0]._0_4_ * dVar3;
      pdVar7[1] = (double)local_58._s_0.Y * dVar2 + (double)local_48._s_0.Y * dVar1 +
                  (double)(float)local_38[0]._4_4_ * dVar3;
      pdVar7[2] = (double)local_58._s_0.Z * dVar2 + (double)local_48._s_0.Z * dVar1 +
                  (double)(float)local_38[0]._8_4_ * dVar3;
      UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
                (this_00,**(int **)this,(TVector<float> *)&local_48._s_0,
                 (TVector<float> *)&local_58._s_0,(TVector<float> *)&local_38[0]._s_0);
      pdVar7 = *(double **)((longlong)this + 0x10);
      dVar1 = pdVar7[2];
      dVar2 = *pdVar7;
      dVar3 = pdVar7[1];
      pdVar7 = *(double **)((longlong)this + 0x20);
      *pdVar7 = (double)local_58._s_0.X * dVar3 + (double)local_48._s_0.X * dVar2 +
                (double)(float)local_38[0]._0_4_ * dVar1;
      pdVar7[1] = (double)local_58._s_0.Y * dVar3 + (double)local_48._s_0.Y * dVar2 +
                  (double)(float)local_38[0]._4_4_ * dVar1;
      pdVar7[2] = (double)local_58._s_0.Z * dVar3 + (double)local_48._s_0.Z * dVar2 +
                  (double)(float)local_38[0]._8_4_ * dVar1;
      return true;
    }
  }
  return false;
}

// operator() @ 14ce37110

bool __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTrianglePosition'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  double *pdVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  uVar10 = **(uint **)this;
  if ((-1 < (int)uVar10) &&
     ((int)uVar10 <
      (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
    uVar18 = (ulonglong)(uVar10 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar10 >> 9) * 8) + uVar18 * 2) - 1U) < 0xfffe) {
      pFVar11 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
      lVar12 = *(longlong *)
                ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar10 >> 9) * 8);
      uVar10 = *(uint *)(lVar12 + uVar18 * 0xc);
      uVar17 = (ulonglong)(uVar10 & 0x1ff);
      pdVar1 = (double *)(*(longlong *)(pFVar11 + (ulonglong)(uVar10 >> 9) * 8) + uVar17 * 0x18);
      dVar14 = pdVar1[1];
      dVar4 = *(double *)
               (*(longlong *)(pFVar11 + (ulonglong)(uVar10 >> 9) * 8) + 0x10 + uVar17 * 0x18);
      uVar10 = *(uint *)(lVar12 + 4 + uVar18 * 0xc);
      uVar17 = (ulonglong)(uVar10 & 0x1ff);
      pdVar2 = (double *)(*(longlong *)(pFVar11 + (ulonglong)(uVar10 >> 9) * 8) + uVar17 * 0x18);
      dVar15 = pdVar2[1];
      dVar5 = *(double *)
               (*(longlong *)(pFVar11 + (ulonglong)(uVar10 >> 9) * 8) + 0x10 + uVar17 * 0x18);
      uVar10 = *(uint *)(lVar12 + 8 + uVar18 * 0xc);
      uVar18 = (ulonglong)(uVar10 & 0x1ff);
      pdVar3 = (double *)(*(longlong *)(pFVar11 + (ulonglong)(uVar10 >> 9) * 8) + uVar18 * 0x18);
      dVar16 = pdVar3[1];
      dVar6 = *(double *)
               (*(longlong *)(pFVar11 + (ulonglong)(uVar10 >> 9) * 8) + 0x10 + uVar18 * 0x18);
      pdVar13 = *(double **)((longlong)this + 0x10);
      dVar7 = *pdVar13;
      dVar8 = pdVar13[1];
      dVar9 = pdVar13[2];
      pdVar13 = *(double **)((longlong)this + 8);
      *pdVar13 = dVar8 * *pdVar2 + dVar7 * *pdVar1 + dVar9 * *pdVar3;
      pdVar13[1] = dVar8 * dVar15 + dVar7 * dVar14 + dVar9 * dVar16;
      pdVar13[2] = dVar7 * dVar4 + dVar8 * dVar5 + dVar9 * dVar6;
      return true;
    }
  }
  return false;
}

// operator() @ 14ce372e0

bool __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleUV'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  double *pdVar12;
  
  uVar7 = **(uint **)this;
  if (((-1 < (int)uVar7) &&
      ((int)uVar7 <
       (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) <
      0xfffe)) {
    lVar10 = *(longlong *)&param_2->field_0x78;
    uVar7 = uVar7 * 3;
    uVar8 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar7 >> 9) * 8) +
                     (ulonglong)(uVar7 & 0x1ff) * 4);
    if (-1 < (int)uVar8) {
      lVar11 = *(longlong *)&param_2->field_0x48;
      uVar9 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                       (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
      uVar7 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                       (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
      pdVar12 = *(double **)((longlong)this + 0x10);
      dVar4 = *pdVar12;
      dVar5 = pdVar12[1];
      dVar6 = pdVar12[2];
      fVar1 = *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar9 * 2 + 1 & 0x1ff) * 4);
      fVar2 = *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar8 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar8 * 2 + 1 & 0x1ff) * 4);
      fVar3 = *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar7 * 2 + 1 & 0x1ff) * 4);
      pdVar12 = *(double **)((longlong)this + 8);
      *pdVar12 = (double)*(float *)(*(longlong *)
                                     (lVar11 + (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar9 * 2 & 0x1ff) * 4) * dVar5 +
                 (double)*(float *)(*(longlong *)
                                     (lVar11 + (ulonglong)((uVar8 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar8 * 2 & 0x1ff) * 4) * dVar4 +
                 (double)*(float *)(*(longlong *)
                                     (lVar11 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar7 * 2 & 0x1ff) * 4) * dVar6;
      pdVar12[1] = (double)fVar1 * dVar5 + (double)fVar2 * dVar4 + (double)fVar3 * dVar6;
      return true;
    }
  }
  return false;
}

// operator() @ 14ce374c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLinearColor * __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleVertexColor'::__l2::<lambda_1>::
operator()(void *this,FLinearColor *__return_storage_ptr__,FDynamicMesh3 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FDynamicMeshAttributeSet *pFVar4;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *this_00;
  double *pdVar5;
  uint uVar6;
  undefined8 uVar7;
  bool bVar8;
  TVector4<float>_u_0 local_58;
  TVector4<float>_u_0 local_48;
  TVector4<float>_u_0 local_38;
  TVector4<float>_u_0 local_28 [2];
  
  bVar8 = UE::MeshQueryFunctionLocals::ValidateMeshTriangleID(param_1,**(int **)this,true);
  if ((((bVar8) && (pFVar4 = (param_1->AttributeSet).Ptr, pFVar4 != (FDynamicMeshAttributeSet *)0x0)
       ) && (this_00 = (pFVar4->ColorLayer).Ptr,
            this_00 != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0)) &&
     (uVar6 = **(int **)this * 3,
     -1 < *(int *)(*(longlong *)(*(longlong *)&this_00->field_0x78 + (ulonglong)(uVar6 >> 9) * 8) +
                  (ulonglong)(uVar6 & 0x1ff) * 4))) {
    local_48._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_48._8_8_ = _UNK_150689648;
    local_58._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_58._8_8_ = _UNK_150689648;
    local_38._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_38._8_8_ = _UNK_150689648;
    UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>::GetTriElements
              (this_00,**(int **)this,(TVector4<float> *)&local_48._s_0,
               (TVector4<float> *)&local_58._s_0,(TVector4<float> *)&local_38._s_0);
    pdVar5 = *(double **)((longlong)this + 0x10);
    dVar1 = pdVar5[1];
    dVar2 = *pdVar5;
    dVar3 = pdVar5[2];
    local_28[0]._0_4_ =
         (float)((double)local_58._s_0.X * dVar1) + (float)((double)local_48._s_0.X * dVar2) +
         (float)((double)local_38._s_0.X * dVar3);
    local_28[0]._4_4_ =
         (float)((double)local_58._s_0.Y * dVar1) + (float)((double)local_48._s_0.Y * dVar2) +
         (float)((double)local_38._s_0.Y * dVar3);
    local_28[0]._8_4_ =
         (float)((double)local_58._s_0.Z * dVar1) + (float)((double)local_48._s_0.Z * dVar2) +
         (float)((double)local_38._s_0.Z * dVar3);
    local_28[0]._12_4_ =
         (float)((double)local_58._s_0.W * dVar1) + (float)((double)local_48._s_0.W * dVar2) +
         (float)((double)local_38._s_0.W * dVar3);
    **(undefined1 **)((longlong)this + 0x18) = 1;
    FLinearColor::FLinearColor(__return_storage_ptr__,(TVector4<float> *)&local_28[0]._s_0);
  }
  else {
    uVar7 = (*(undefined8 **)((longlong)this + 8))[1];
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = **(undefined8 **)((longlong)this + 8);
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar7;
  }
  return __return_storage_ptr__;
}

// operator() @ 14ce376d0

TBox<double> * __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetMeshBoundingBox'::__l2::<lambda_1>::operator()
          (void *this,TBox<double> *__return_storage_ptr__,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TAxisAlignedBox3<double> *pTVar6;
  TAxisAlignedBox3<double> local_38;
  double dVar5;
  
  pTVar6 = UE::Geometry::FDynamicMesh3::GetBounds(param_1,&local_38,true);
  dVar3 = (pTVar6->Min).field0_0x0._s_0.Y;
  dVar2 = (pTVar6->Min).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (pTVar6->Min).field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3;
  dVar3 = (pTVar6->Max).field0_0x0._s_0.X;
  dVar4 = (pTVar6->Max).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  dVar2 = (pTVar6->Max).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar4;
  dVar3 = (pTVar6->Min).field0_0x0._s_0.X;
  dVar4 = (pTVar6->Max).field0_0x0._s_0.X;
  dVar5 = (pTVar6->Max).field0_0x0._s_0.X;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar2;
  if (((dVar3 < dVar5 || dVar3 == dVar4) &&
      (dVar2 = (pTVar6->Min).field0_0x0._s_0.Y, pdVar1 = &(pTVar6->Max).field0_0x0._s_0.Y,
      dVar2 < *pdVar1 || dVar2 == *pdVar1)) &&
     (dVar2 = (pTVar6->Min).field0_0x0._s_0.Z, pdVar1 = &(pTVar6->Max).field0_0x0._s_0.Z,
     dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
    __return_storage_ptr__->IsValid = '\x01';
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->IsValid = '\0';
  return __return_storage_ptr__;
}

// operator() @ 14ce39860

double __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetMeshUVArea'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  uint uVar10;
  double dVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  dVar9 = 0.0;
  uVar15 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar14 = 0;
  if ((uVar15 != 0) &&
     (pFVar6 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar14 = 0,
     0xfffd < (ushort)(**(short **)pFVar6 - 1U))) {
    uVar13 = 1;
    uVar14 = 1;
    if (1 < (int)uVar15) {
      do {
        lVar7 = *(longlong *)(pFVar6 + (ulonglong)(uVar13 >> 9) * 8);
        if ((*(short *)(lVar7 + (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
           (uVar14 = uVar13, *(short *)(lVar7 + (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) break;
        uVar13 = uVar13 + 1;
        uVar14 = uVar13;
      } while ((int)uVar13 < (int)uVar15);
    }
  }
  dVar11 = 0.0;
  if (uVar14 != uVar15) {
    lVar7 = *(longlong *)&param_2->field_0x78;
LAB_14ce39940:
    do {
      uVar10 = uVar14 * 3;
      uVar13 = *(uint *)(*(longlong *)(lVar7 + (ulonglong)(uVar10 >> 9) * 8) +
                        (ulonglong)(uVar10 & 0x1ff) * 4);
      if (-1 < (int)uVar13) {
        lVar8 = *(longlong *)&param_2->field_0x48;
        fVar1 = *(float *)(*(longlong *)(lVar8 + (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) +
                          (ulonglong)(uVar13 * 2 & 0x1ff) * 4);
        fVar2 = *(float *)(*(longlong *)(lVar8 + (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) +
                          (ulonglong)(uVar13 * 2 + 1 & 0x1ff) * 4);
        uVar13 = *(uint *)(*(longlong *)(lVar7 + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                          (ulonglong)(uVar10 + 1 & 0x1ff) * 4);
        fVar3 = *(float *)(*(longlong *)(lVar8 + (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) +
                          (ulonglong)(uVar13 * 2 & 0x1ff) * 4);
        fVar4 = *(float *)(*(longlong *)(lVar8 + (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) +
                          (ulonglong)(uVar13 * 2 + 1 & 0x1ff) * 4);
        uVar13 = *(uint *)(*(longlong *)(lVar7 + (ulonglong)(uVar10 + 2 >> 9) * 8) +
                          (ulonglong)(uVar10 + 2 & 0x1ff) * 4);
        fVar5 = *(float *)(*(longlong *)(lVar8 + (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) +
                          (ulonglong)(uVar13 * 2 & 0x1ff) * 4);
        lVar8 = *(longlong *)(lVar8 + (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8);
        uVar12 = (ulonglong)(uVar13 * 2 + 1 & 0x1ff);
        dVar9 = dVar9 + (double)(float)((uint)((fVar1 * fVar4 - fVar3 * fVar2) * __real_3f000000 +
                                               (fVar3 * *(float *)(lVar8 + uVar12 * 4) -
                                               fVar5 * fVar4) * __real_3f000000 +
                                              (fVar5 * fVar2 -
                                              fVar1 * *(float *)(lVar8 + uVar12 * 4)) *
                                              __real_3f000000) &
                                       __xmm_7fffffff7fffffff7fffffff7fffffff);
      }
      uVar14 = uVar14 + 1;
      if ((int)uVar14 < (int)uVar15) {
        pFVar6 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          if ((*(short *)(*(longlong *)(pFVar6 + (ulonglong)(uVar14 >> 9) * 8) +
                         (ulonglong)(uVar14 & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)(pFVar6 + (ulonglong)(uVar14 >> 9) * 8) +
                        (ulonglong)(uVar14 & 0x1ff) * 2) != -1)) goto LAB_14ce39940;
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)uVar15);
      }
      dVar11 = dVar9;
    } while (uVar14 != uVar15);
  }
  return dVar11;
}

// operator() @ 14ce39c80

int __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetNumConnectedComponents'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FMeshConnectedComponents local_58;
  TFunction<bool___cdecl(int,int)> local_38;
  
  local_58.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Components.Array.ArrayNum = 0;
  local_58.Components.Array.ArrayMax = 0;
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  local_58.Mesh = param_1;
  UE::Geometry::FMeshConnectedComponents::FindConnectedTriangles(&local_58,&local_38);
  iVar3 = local_58.Components.Array.ArrayNum;
  FVar4.Data = local_58.Components.Array.AllocatorInstance.Data;
  for (iVar5 = local_58.Components.Array.ArrayNum; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = *(undefined8 **)FVar4.Data;
    if (puVar1 != (undefined8 *)0x0) {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      ::operator_delete(puVar1,0x10);
    }
    FVar4.Data = FVar4.Data + 8;
  }
  uVar2 = (ulonglong)local_58.Components.Array._8_8_ >> 0x20;
  local_58.Components.Array._8_8_ = local_58.Components.Array._8_8_ & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&local_58.Components,0,&local_58.Components.Array.ArrayMax
              );
  }
  if (local_58.Components.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Components.Array.AllocatorInstance.Data);
  }
  return iVar3;
}

// operator() @ 14ce39d80

int __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderEdges'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  iVar6 = 0;
  uVar5 = 0;
  uVar7 = (param_1->EdgeRefCounts).RefCounts.CurBlockUsed +
          (param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar7 != 0) &&
     (pFVar2 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar5 = 1;
    bVar8 = uVar7 == 1;
    if ((int)uVar7 < 2) goto LAB_14ce39e0a;
    do {
      lVar1 = (ulonglong)(uVar5 & 0x1ff) * 2;
      if ((*(short *)(lVar1 + *(longlong *)(pFVar2 + (ulonglong)(uVar5 >> 9) * 8)) != 0) &&
         (*(short *)(lVar1 + *(longlong *)(pFVar2 + (ulonglong)(uVar5 >> 9) * 8)) != -1)) break;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar7);
  }
  bVar8 = uVar5 == uVar7;
LAB_14ce39e0a:
  if (!bVar8) {
    do {
      iVar4 = iVar6 + 1;
      if (*(int *)(*(longlong *)
                    ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8) +
                   0xc + (ulonglong)(uVar5 & 0x1ff) * 0x10) != -1) {
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      uVar5 = uVar5 + 1;
      if ((int)uVar5 < (int)uVar7) {
        pFVar2 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          lVar1 = (ulonglong)(uVar5 >> 9) * 8;
          lVar3 = (ulonglong)(uVar5 & 0x1ff) * 2;
          if ((*(short *)(lVar3 + *(longlong *)(pFVar2 + lVar1)) != 0) &&
             (*(short *)(lVar3 + *(longlong *)(pFVar2 + lVar1)) != -1)) break;
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)uVar7);
      }
    } while (uVar5 != uVar7);
  }
  return iVar6;
}

// operator() @ 14ce39ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderLoops'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [104];
  longlong *local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  bool local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8._44_4_ = Compute;
  local_b8._8_8_ = (FEdgeLoop *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_8_ = (FEdgeSpan *)0x0;
  local_b8._32_4_ = 0;
  local_b8._36_4_ = 0;
  local_b8[0x28] = false;
  local_b8[0x29] = false;
  local_b8[0x2a] = false;
  local_b8._64_8_ = 0;
  local_50 = (longlong *)0x0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  local_38 = false;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28._0_4_ = 0;
  local_28._4_4_ = 0;
  local_b8._48_4_ = ConvertToOpenSpan;
  local_b8._0_8_ = param_1;
  bVar2 = UE::Geometry::FMeshBoundaryLoops::Compute((FMeshBoundaryLoops *)local_b8);
  *(bool *)*(undefined8 *)this = !bVar2;
  uVar1 = local_b8._16_4_;
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if (local_50 != (longlong *)0x0) {
      plVar3 = local_50;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  DestructItems<UE::Geometry::FEdgeSpan,int>((FEdgeSpan *)local_b8._24_8_,local_b8._32_4_);
  if ((FEdgeSpan *)local_b8._24_8_ != (FEdgeSpan *)0x0) {
    FMemory::Free((void *)local_b8._24_8_);
  }
  DestructItems<UE::Geometry::FEdgeLoop,int>((FEdgeLoop *)local_b8._8_8_,local_b8._16_4_);
  if ((FEdgeLoop *)local_b8._8_8_ != (FEdgeLoop *)0x0) {
    FMemory::Free((void *)local_b8._8_8_);
  }
  return uVar1;
}

// operator() @ 14ce39fd0

int __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVIslands'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  ForAnyElementType FVar8;
  int iVar9;
  undefined1 local_res10 [8];
  FMeshConnectedComponents local_a8;
  FScriptContainerElement *local_90;
  int *piStack_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  int *piStack_70;
  int local_68;
  undefined4 uStack_64;
  code *local_58 [2];
  undefined **local_48;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_40;
  undefined8 local_30;
  
  iVar7 = 0;
  local_a8.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVIslands'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_a8.Components.Array.ArrayNum = 0;
  local_a8.Components.Array.ArrayMax = 0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVIslands'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
                ::Call;
  local_30 = 0;
  local_a8.Mesh = param_1;
  local_40 = param_2;
  UE::Geometry::FMeshConnectedComponents::FindConnectedTriangles
            (&local_a8,(TFunction<bool___cdecl(int,int)> *)local_58);
  piStack_88 = &local_a8.Components.Array.ArrayNum;
  local_78 = local_a8.Components.Array.AllocatorInstance.Data;
  local_68 = local_a8.Components.Array.ArrayNum;
  local_80 = CONCAT44(uStack_64,local_a8.Components.Array.ArrayNum);
  pFVar1 = local_a8.Components.Array.AllocatorInstance.Data +
           (longlong)local_a8.Components.Array.ArrayNum * 8;
  FVar8.Data = local_a8.Components.Array.AllocatorInstance.Data;
  piStack_70 = piStack_88;
  do {
    local_90 = FVar8.Data;
    if (*piStack_88 != (int)local_80) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10)
      ;
    }
    if (FVar8.Data == pFVar1) {
      FVar8.Data = local_a8.Components.Array.AllocatorInstance.Data;
      for (iVar9 = local_a8.Components.Array.ArrayNum; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar2 = *(undefined8 **)FVar8.Data;
        if (puVar2 != (undefined8 *)0x0) {
          if ((void *)*puVar2 != (void *)0x0) {
            FMemory::Free((void *)*puVar2);
          }
          ::operator_delete(puVar2,0x10);
        }
        FVar8.Data = FVar8.Data + 8;
      }
      uVar5 = (ulonglong)local_a8.Components.Array._8_8_ >> 0x20;
      local_a8.Components.Array._8_8_ = local_a8.Components.Array._8_8_ & 0xffffffff00000000;
      if ((int)uVar5 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)&local_a8.Components,0,
                   &local_a8.Components.Array.ArrayMax);
      }
      if (local_a8.Components.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Components.Array.AllocatorInstance.Data);
      }
      return iVar7;
    }
    puVar2 = *(undefined8 **)FVar8.Data;
    iVar9 = *(int *)(puVar2 + 1);
    if (iVar9 == 0) {
LAB_14ce3a0f2:
      iVar9 = 0;
    }
    else {
      if ((iVar9 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      uVar4 = *(int *)*puVar2 * 3;
      iVar9 = 1;
      if (*(int *)(*(longlong *)(*(longlong *)&param_2->field_0x78 + (ulonglong)(uVar4 >> 9) * 8) +
                  (ulonglong)(uVar4 & 0x1ff) * 4) < 0) goto LAB_14ce3a0f2;
    }
    iVar7 = iVar7 + iVar9;
    FVar8.Data = FVar8.Data + 8;
  } while( true );
}

// operator() @ 14ce3af90

TVector<double> * __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleFaceNormal'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1)

{
  double dVar1;
  uint uVar2;
  double dVar3;
  TVector<double>_u_0 *pTVar4;
  undefined1 uVar5;
  TVector<double>_u_0 local_28;
  
  uVar2 = **(uint **)((longlong)this + 8);
  if ((((int)uVar2 < 0) ||
      ((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar2)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                     .Data + (ulonglong)(uVar2 >> 9) * 8) +
                                  (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  **(undefined1 **)this = uVar5;
  if (**(char **)this == '\0') {
    pTVar4 = &local_28;
    local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pTVar4 = &UE::Geometry::FDynamicMesh3::GetTriNormal
                        (param_1,(TVector<double> *)&local_28._s_0,**(int **)((longlong)this + 8))->
              field0_0x0;
  }
  dVar3 = (pTVar4->_s_0).Y;
  dVar1 = (pTVar4->_s_0).Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (((TVector<double>_u_0 *)&(pTVar4->_s_0).X)->_s_0).X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// operator() @ 14ce3b050

TIntVector3<int> * __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleIndices'::__l2::<lambda_1>::operator()
          (void *this,TIntVector3<int> *__return_storage_ptr__,FDynamicMesh3 *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined8 local_1c;
  int local_14;
  
  puVar4 = (undefined8 *)&local_28;
  uVar1 = **(uint **)((longlong)this + 8);
  if ((((int)uVar1 < 0) ||
      ((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                     .Data + (ulonglong)(uVar1 >> 9) * 8) +
                                  (ulonglong)(uVar1 & 0x1ff) * 2) - 1U))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  **(undefined1 **)this = uVar5;
  if (**(char **)this == '\0') {
    local_14 = UE::Math::TIntVector3<int>::NoneValue.field0_0x0._s_0.Z;
    puVar4 = &local_1c;
    local_1c = UE::Math::TIntVector3<int>::NoneValue.field0_0x0._0_8_;
  }
  else {
    uVar6 = (ulonglong)(**(uint **)((longlong)this + 8) & 0x1ff);
    lVar3 = *(longlong *)
             ((param_1->Triangles).Blocks.AllocatorInstance.Data +
             (ulonglong)(**(uint **)((longlong)this + 8) >> 9) * 8);
    local_1c = *(undefined8 *)(lVar3 + uVar6 * 0xc);
    local_28 = (undefined4)local_1c;
    uStack_24 = (int)((ulonglong)local_1c >> 0x20);
    local_20 = *(undefined4 *)(lVar3 + 8 + uVar6 * 0xc);
  }
  iVar2 = *(int *)(puVar4 + 1);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *puVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar2;
  return __return_storage_ptr__;
}

// operator() @ 14ce3b140

bool __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormalTangents'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FScriptContainerElement *pFVar3;
  double *pdVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this_00;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this_01;
  ulonglong uVar8;
  ulonglong uVar9;
  TVector<float>_u_0 local_38;
  TVector<float>_u_0 local_28;
  TVector<float>_u_0 local_18;
  
  bVar7 = UE::MeshQueryFunctionLocals::ValidateMeshTriangleID(param_1,**(int **)this,true);
  if ((((bVar7) && (pFVar2 = (param_1->AttributeSet).Ptr, pFVar2 != (FDynamicMeshAttributeSet *)0x0)
       ) && (iVar1 = (pFVar2->NormalLayers).Array.ArrayNum, 0 < iVar1)) &&
     (((pFVar3 = (pFVar2->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar3 != 0 &&
       (1 < iVar1)) &&
      ((*(longlong *)(pFVar3 + 8) != 0 && ((2 < iVar1 && (*(longlong *)(pFVar3 + 0x10) != 0))))))))
  {
    this_00 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    this_01 = this_00;
    if (1 < iVar1) {
      this_01 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)(pFVar3 + 8);
    }
    if (2 < iVar1) {
      this_00 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)(pFVar3 + 0x10);
    }
    uVar6 = **(int **)this * 3;
    uVar9 = (ulonglong)(uVar6 & 0x1ff);
    uVar8 = (ulonglong)(uVar6 >> 9);
    if (((-1 < *(int *)(*(longlong *)
                         (*(longlong *)
                           &(*(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                              pFVar3)->field_0x78 + uVar8 * 8) + uVar9 * 4)) &&
        (-1 < *(int *)(*(longlong *)(*(longlong *)&this_01->field_0x78 + uVar8 * 8) + uVar9 * 4)))
       && (-1 < *(int *)(*(longlong *)(*(longlong *)&this_00->field_0x78 + uVar8 * 8) + uVar9 * 4)))
    {
      UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
                (*(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)pFVar3,
                 **(int **)this,(TVector<float> *)&local_38._s_0,(TVector<float> *)&local_28._s_0,
                 (TVector<float> *)&local_18._s_0);
      pdVar4 = *(double **)((longlong)this + 8);
      *pdVar4 = (double)local_38._s_0.X;
      pdVar4[1] = (double)local_38._s_0.Y;
      pdVar4[2] = (double)local_38._s_0.Z;
      lVar5 = *(longlong *)((longlong)this + 8);
      *(double *)(lVar5 + 0x18) = (double)local_28._s_0.X;
      *(double *)(lVar5 + 0x20) = (double)local_28._s_0.Y;
      *(double *)(lVar5 + 0x28) = (double)local_28._s_0.Z;
      lVar5 = *(longlong *)((longlong)this + 8);
      *(double *)(lVar5 + 0x30) = (double)local_18._s_0.X;
      *(double *)(lVar5 + 0x38) = (double)local_18._s_0.Y;
      *(double *)(lVar5 + 0x40) = (double)local_18._s_0.Z;
      UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
                (this_01,**(int **)this,(TVector<float> *)&local_38._s_0,
                 (TVector<float> *)&local_28._s_0,(TVector<float> *)&local_18._s_0);
      pdVar4 = *(double **)((longlong)this + 0x10);
      *pdVar4 = (double)local_38._s_0.X;
      pdVar4[1] = (double)local_38._s_0.Y;
      pdVar4[2] = (double)local_38._s_0.Z;
      lVar5 = *(longlong *)((longlong)this + 0x10);
      *(double *)(lVar5 + 0x18) = (double)local_28._s_0.X;
      *(double *)(lVar5 + 0x20) = (double)local_28._s_0.Y;
      *(double *)(lVar5 + 0x28) = (double)local_28._s_0.Z;
      lVar5 = *(longlong *)((longlong)this + 0x10);
      *(double *)(lVar5 + 0x30) = (double)local_18._s_0.X;
      *(double *)(lVar5 + 0x38) = (double)local_18._s_0.Y;
      *(double *)(lVar5 + 0x40) = (double)local_18._s_0.Z;
      UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
                (this_00,**(int **)this,(TVector<float> *)&local_38._s_0,
                 (TVector<float> *)&local_28._s_0,(TVector<float> *)&local_18._s_0);
      pdVar4 = *(double **)((longlong)this + 0x18);
      *pdVar4 = (double)local_38._s_0.X;
      pdVar4[1] = (double)local_38._s_0.Y;
      pdVar4[2] = (double)local_38._s_0.Z;
      lVar5 = *(longlong *)((longlong)this + 0x18);
      *(double *)(lVar5 + 0x18) = (double)local_28._s_0.X;
      *(double *)(lVar5 + 0x20) = (double)local_28._s_0.Y;
      *(double *)(lVar5 + 0x28) = (double)local_28._s_0.Z;
      lVar5 = *(longlong *)((longlong)this + 0x18);
      *(double *)(lVar5 + 0x30) = (double)local_18._s_0.X;
      *(double *)(lVar5 + 0x38) = (double)local_18._s_0.Y;
      *(double *)(lVar5 + 0x40) = (double)local_18._s_0.Z;
      return true;
    }
  }
  return false;
}

// operator() @ 14ce3b440

bool __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormals'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this_00;
  double *pdVar2;
  uint uVar3;
  bool bVar4;
  TVector<float>_u_0 local_38;
  TVector<float>_u_0 local_28;
  TVector<float>_u_0 local_18;
  
  bVar4 = UE::MeshQueryFunctionLocals::ValidateMeshTriangleID(param_1,**(int **)this,true);
  if ((((bVar4) && (pFVar1 = (param_1->AttributeSet).Ptr, pFVar1 != (FDynamicMeshAttributeSet *)0x0)
       ) && (0 < (pFVar1->NormalLayers).Array.ArrayNum)) &&
     ((this_00 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                  (pFVar1->NormalLayers).Array.AllocatorInstance.Data,
      this_00 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0 &&
      (uVar3 = **(int **)this * 3,
      -1 < *(int *)(*(longlong *)(*(longlong *)&this_00->field_0x78 + (ulonglong)(uVar3 >> 9) * 8) +
                   (ulonglong)(uVar3 & 0x1ff) * 4))))) {
    UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
              (this_00,**(int **)this,(TVector<float> *)&local_38._s_0,
               (TVector<float> *)&local_28._s_0,(TVector<float> *)&local_18._s_0);
    pdVar2 = *(double **)((longlong)this + 8);
    *pdVar2 = (double)local_38._s_0.X;
    pdVar2[1] = (double)local_38._s_0.Y;
    pdVar2[2] = (double)local_38._s_0.Z;
    pdVar2 = *(double **)((longlong)this + 0x10);
    *pdVar2 = (double)local_28._s_0.X;
    pdVar2[1] = (double)local_28._s_0.Y;
    pdVar2[2] = (double)local_28._s_0.Z;
    pdVar2 = *(double **)((longlong)this + 0x18);
    *pdVar2 = (double)local_18._s_0.X;
    pdVar2[1] = (double)local_18._s_0.Y;
    pdVar2[2] = (double)local_18._s_0.Z;
    return true;
  }
  return false;
}

// operator() @ 14ce3b590

bool __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetTrianglePositions'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  uint uVar1;
  TVector<double> *pTVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  
  uVar1 = **(uint **)((longlong)this + 8);
  if ((((int)uVar1 < 0) ||
      ((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                     .Data + (ulonglong)(uVar1 >> 9) * 8) +
                                  (ulonglong)(uVar1 & 0x1ff) * 2) - 1U))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  **(undefined1 **)this = uVar6;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pTVar2 = *(TVector<double> **)((longlong)this + 0x20);
  if (**(char **)this != '\0') {
    UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
              (param_1,**(int **)((longlong)this + 8),*(TVector<double> **)((longlong)this + 0x10),
               *(TVector<double> **)((longlong)this + 0x18),pTVar2);
    return (bool)**(undefined1 **)this;
  }
  (pTVar2->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (pTVar2->field0_0x0)._s_0.Y = (double)uVar5;
  (pTVar2->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  puVar3 = *(undefined8 **)((longlong)this + 0x20);
  puVar4 = *(undefined8 **)((longlong)this + 0x18);
  uVar5 = puVar3[1];
  *puVar4 = *puVar3;
  puVar4[1] = uVar5;
  puVar4[2] = puVar3[2];
  puVar3 = *(undefined8 **)((longlong)this + 0x18);
  puVar4 = *(undefined8 **)((longlong)this + 0x10);
  uVar5 = puVar3[1];
  *puVar4 = *puVar3;
  puVar4[1] = uVar5;
  puVar4[2] = puVar3[2];
  return (bool)**(undefined1 **)this;
}

// operator() @ 14ce3b680

bool __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleUVs'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  double *pdVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  uVar6 = **(uint **)this;
  if (((-1 < (int)uVar6) &&
      ((int)uVar6 <
       (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) <
      0xfffe)) {
    lVar9 = *(longlong *)&param_2->field_0x78;
    uVar6 = uVar6 * 3;
    uVar7 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar6 >> 9) * 8) +
                     (ulonglong)(uVar6 & 0x1ff) * 4);
    if (-1 < (int)uVar7) {
      lVar10 = *(longlong *)&param_2->field_0x48;
      uVar8 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                       (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
      fVar1 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar8 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar8 * 2 & 0x1ff) * 4);
      fVar2 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar8 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar8 * 2 + 1 & 0x1ff) * 4);
      uVar6 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar6 + 2 >> 9) * 8) +
                       (ulonglong)(uVar6 + 2 & 0x1ff) * 4);
      fVar3 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar6 * 2 & 0x1ff) * 4);
      fVar4 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar6 * 2 + 1 & 0x1ff) * 4);
      fVar5 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar7 * 2 + 1 & 0x1ff) * 4);
      pdVar11 = *(double **)((longlong)this + 8);
      *pdVar11 = (double)*(float *)(*(longlong *)
                                     (lVar10 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar7 * 2 & 0x1ff) * 4);
      pdVar11[1] = (double)fVar5;
      pdVar11 = *(double **)((longlong)this + 0x10);
      *pdVar11 = (double)fVar1;
      pdVar11[1] = (double)fVar2;
      pdVar11 = *(double **)((longlong)this + 0x18);
      *pdVar11 = (double)fVar3;
      pdVar11[1] = (double)fVar4;
      return true;
    }
  }
  (*(TVector2<double>_u_0 **)((longlong)this + 0x18))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  puVar12 = *(undefined8 **)((longlong)this + 0x10);
  uVar13 = (*(undefined8 **)((longlong)this + 0x18))[1];
  *puVar12 = **(undefined8 **)((longlong)this + 0x18);
  puVar12[1] = uVar13;
  puVar12 = *(undefined8 **)((longlong)this + 8);
  uVar13 = (*(undefined8 **)((longlong)this + 0x10))[1];
  *puVar12 = **(undefined8 **)((longlong)this + 0x10);
  puVar12[1] = uVar13;
  return false;
}

// operator() @ 14ce3b880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleVertexColors'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *this_00;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  FLinearColor *pFVar6;
  TVector4<float>_u_0 local_48;
  TVector4<float>_u_0 local_38;
  TVector4<float>_u_0 local_28;
  FLinearColor local_18;
  
  bVar5 = UE::MeshQueryFunctionLocals::ValidateMeshTriangleID(param_1,**(int **)this,true);
  if ((((bVar5) && (pFVar1 = (param_1->AttributeSet).Ptr, pFVar1 != (FDynamicMeshAttributeSet *)0x0)
       ) && (this_00 = (pFVar1->ColorLayer).Ptr,
            this_00 != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0)) &&
     (uVar3 = **(int **)this * 3,
     -1 < *(int *)(*(longlong *)(*(longlong *)&this_00->field_0x78 + (ulonglong)(uVar3 >> 9) * 8) +
                  (ulonglong)(uVar3 & 0x1ff) * 4))) {
    local_48._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_48._8_8_ = _UNK_150689648;
    local_38._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_38._8_8_ = _UNK_150689648;
    local_28._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_28._8_8_ = _UNK_150689648;
    UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>::GetTriElements
              (this_00,**(int **)this,(TVector4<float> *)&local_48._s_0,
               (TVector4<float> *)&local_38._s_0,(TVector4<float> *)&local_28._s_0);
    pFVar6 = FLinearColor::FLinearColor(&local_18,(TVector4<float> *)&local_48._s_0);
    puVar2 = *(undefined8 **)((longlong)this + 8);
    uVar4 = *(undefined8 *)((longlong)&pFVar6->field0_0x0 + 8);
    *puVar2 = *(undefined8 *)&pFVar6->field0_0x0;
    puVar2[1] = uVar4;
    pFVar6 = FLinearColor::FLinearColor(&local_18,(TVector4<float> *)&local_38._s_0);
    puVar2 = *(undefined8 **)((longlong)this + 0x10);
    uVar4 = *(undefined8 *)((longlong)&pFVar6->field0_0x0 + 8);
    *puVar2 = *(undefined8 *)&pFVar6->field0_0x0;
    puVar2[1] = uVar4;
    pFVar6 = FLinearColor::FLinearColor(&local_18,(TVector4<float> *)&local_28._s_0);
    puVar2 = *(undefined8 **)((longlong)this + 0x18);
    uVar4 = *(undefined8 *)((longlong)&pFVar6->field0_0x0 + 8);
    *puVar2 = *(undefined8 *)&pFVar6->field0_0x0;
    puVar2[1] = uVar4;
    return true;
  }
  return false;
}

// operator() @ 14ce3bc10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox2<double> * __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetUVSetBoundingBox'::__l2::<lambda_1>::operator()
          (void *this,TBox2<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int local_78;
  
  uVar8 = 0;
  local_78 = 0;
  uVar9 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
          (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar9 != 0) &&
     (pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    uVar8 = 1;
    bVar10 = uVar9 == 1;
    if ((int)uVar9 < 2) goto LAB_14ce3bcce;
    do {
      lVar5 = *(longlong *)(pFVar4 + (ulonglong)(uVar8 >> 9) * 8);
      if ((*(short *)(lVar5 + (ulonglong)(uVar8 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar5 + (ulonglong)(uVar8 & 0x1ff) * 2) != -1)) break;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar9);
  }
  bVar10 = uVar8 == uVar9;
LAB_14ce3bcce:
  iVar7 = 0;
  dVar16 = ___xmm_7fefffffffffffff7fefffffffffffff;
  dVar11 = _UNK_150a9e648;
  dVar15 = ___xmm_ffefffffffffffffffefffffffffffff;
  dVar14 = _UNK_1508ffb58;
  if (!bVar10) {
    lVar5 = *(longlong *)&param_2->field_0x78;
LAB_14ce3bd10:
    do {
      uVar3 = uVar8 * 3;
      uVar1 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar3 >> 9) * 8) +
                       (ulonglong)(uVar3 & 0x1ff) * 4);
      if (-1 < (int)uVar1) {
        lVar6 = *(longlong *)&param_2->field_0x48;
        uVar2 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                         (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
        uVar3 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                         (ulonglong)(uVar3 + 2 & 0x1ff) * 4);
        dVar13 = (double)*(float *)(*(longlong *)
                                     (lVar6 + (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar1 * 2 & 0x1ff) * 4);
        dVar12 = (double)*(float *)(*(longlong *)
                                     (lVar6 + (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar1 * 2 + 1 & 0x1ff) * 4);
        if (dVar13 < dVar16) {
          dVar16 = dVar13;
        }
        if (dVar15 < dVar13) {
          dVar15 = dVar13;
        }
        if (dVar12 < dVar11) {
          dVar11 = dVar12;
        }
        if (dVar14 < dVar12) {
          dVar14 = dVar12;
        }
        dVar12 = (double)*(float *)(*(longlong *)
                                     (lVar6 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar2 * 2 & 0x1ff) * 4);
        dVar13 = (double)*(float *)(*(longlong *)
                                     (lVar6 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar2 * 2 + 1 & 0x1ff) * 4);
        if (dVar12 < dVar16) {
          dVar16 = dVar12;
        }
        if (dVar15 < dVar12) {
          dVar15 = dVar12;
        }
        if (dVar13 < dVar11) {
          dVar11 = dVar13;
        }
        if (dVar14 < dVar13) {
          dVar14 = dVar13;
        }
        dVar13 = (double)*(float *)(*(longlong *)
                                     (lVar6 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar3 * 2 & 0x1ff) * 4);
        dVar12 = (double)*(float *)(*(longlong *)
                                     (lVar6 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar3 * 2 + 1 & 0x1ff) * 4);
        if (dVar13 < dVar16) {
          dVar16 = dVar13;
        }
        if (dVar15 < dVar13) {
          dVar15 = dVar13;
        }
        if (dVar12 < dVar11) {
          dVar11 = dVar12;
        }
        if (dVar14 < dVar12) {
          dVar14 = dVar12;
        }
        iVar7 = local_78 + 1;
        local_78 = iVar7;
      }
      uVar8 = uVar8 + 1;
      if ((int)uVar8 < (int)uVar9) {
        pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          iVar7 = local_78;
          if ((*(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar8 >> 9) * 8) +
                         (ulonglong)(uVar8 & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar8 >> 9) * 8) +
                        (ulonglong)(uVar8 & 0x1ff) * 2) != -1)) goto LAB_14ce3bd10;
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar9);
      }
    } while (uVar8 != uVar9);
  }
  *(bool *)*(undefined8 *)this = iVar7 == 0;
  if (iVar7 < 1) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
    *(undefined8 *)&__return_storage_ptr__->bIsValid = 0;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar16;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar11;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar15;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar14;
  if ((dVar16 <= dVar15) && (dVar11 <= dVar14)) {
    __return_storage_ptr__->bIsValid = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsValid = false;
  return __return_storage_ptr__;
}

// operator() @ 14ce3bfd0

int __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetVertexConnectedVertices'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  bool bVar1;
  undefined8 local_res8;
  code *local_38;
  undefined8 *local_30;
  FDynamicMesh3 *local_28;
  code **local_20;
  int local_18;
  
  bVar1 = UE::MeshQueryFunctionLocals::ValidateMeshVertexID(param_1,**(int **)this,true);
  if (bVar1) {
    local_res8 = *(undefined8 *)((longlong)this + 8);
    local_30 = &local_res8;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<``UGeometryScriptLibrary_MeshQueryFunctions::GetVertexConnectedVertices'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
               ::Call;
    local_18 = **(int **)this;
    local_20 = &local_38;
    local_28 = param_1;
    UE::Geometry::FSmallListSet::
    Enumerate<_UE::Geometry::FDynamicMesh3::EnumerateVertexVertices_::__l2::<lambda_1>_>
              (&param_1->VertexEdgeLists,local_18,(<lambda_1> *)&local_28);
  }
  return 0;
}

// operator() @ 14ce3c050

TVector<double> * __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetVertexPosition'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  double local_28;
  double dStack_20;
  double local_18;
  
  uVar2 = **(uint **)((longlong)this + 8);
  if ((((int)uVar2 < 0) ||
      ((int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar2)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                     Data + (ulonglong)(uVar2 >> 9) * 8) +
                                  (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  **(undefined1 **)this = uVar4;
  if (**(char **)this == '\0') {
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    uVar5 = (ulonglong)(**(uint **)((longlong)this + 8) & 0x1ff);
    lVar3 = *(longlong *)
             ((param_1->Vertices).Blocks.AllocatorInstance.Data +
             (ulonglong)(**(uint **)((longlong)this + 8) >> 9) * 8);
    pdVar1 = (double *)(lVar3 + uVar5 * 0x18);
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
    local_18 = *(double *)(lVar3 + 0x10 + uVar5 * 0x18);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  return __return_storage_ptr__;
}

// operator() @ 14ce461c0

void __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIDs'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_28 [4];
  
  lVar3 = *(longlong *)this;
  if ((*(longlong *)(lVar3 + 8) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar11 = (param_1->TriangleRefCounts).UsedCount;
  pFVar4 = *(ForAnyElementType **)(lVar3 + 8);
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,pFVar4,*(int *)&pFVar4[1].Data,piVar1);
  }
  uVar12 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar11 = 0;
  if ((uVar12 != 0) &&
     (pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar11 = 0,
     0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
    uVar10 = 1;
    uVar11 = 1;
    if (1 < (int)uVar12) {
      do {
        sVar2 = *(short *)(*(longlong *)(pFVar5 + (ulonglong)(uVar10 >> 9) * 8) +
                          (ulonglong)(uVar10 & 0x1ff) * 2);
        if ((sVar2 != 0) && (uVar11 = uVar10, sVar2 != -1)) break;
        uVar10 = uVar10 + 1;
        uVar11 = uVar10;
      } while ((int)uVar10 < (int)uVar12);
    }
  }
joined_r0x00014ce462aa:
  do {
    if (uVar11 == uVar12) {
      *(bool *)*(undefined8 *)((longlong)this + 8) =
           (param_1->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).FreeIndices.CurBlockUsed != 0;
      return;
    }
    while( true ) {
      lVar3 = *(longlong *)this;
      local_28[0] = uVar11;
      if ((*(longlong *)(lVar3 + 8) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = *(ForAnyElementType **)(lVar3 + 8);
      if (((pFVar4->Data <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 <
           pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) &&
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
      iVar9 = *(int *)&pFVar4[1].Data;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar9 + 1;
      uVar11 = uVar11 + 1;
      *(uint *)(pFVar4->Data + (longlong)iVar9 * 4) = local_28[0];
      if ((int)uVar12 <= (int)uVar11) break;
      pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar3 = (ulonglong)(uVar11 >> 9) * 8;
        lVar7 = (ulonglong)(uVar11 & 0x1ff) * 2;
        if ((*(short *)(lVar7 + *(longlong *)(pFVar5 + lVar3)) != 0) &&
           (*(short *)(lVar7 + *(longlong *)(pFVar5 + lVar3)) != -1)) break;
        uVar11 = uVar11 + 1;
        if ((int)uVar12 <= (int)uVar11) goto joined_r0x00014ce462aa;
      }
    }
  } while( true );
}

// operator() @ 14ce46430

void __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIndices'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  short sVar5;
  ForAnyElementType *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  longlong *plVar9;
  code *pcVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  pFVar6 = *(ForAnyElementType **)((longlong)this + 8);
  if (**(char **)this != '\0') {
    uVar16 = (param_1->TriangleRefCounts).UsedCount;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if (*(int *)((longlong)&pFVar6[1].Data + 4) < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar16,pFVar6,*(int *)&pFVar6[1].Data,(int *)((longlong)&pFVar6[1].Data + 4))
      ;
    }
    uVar14 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
             (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
    uVar16 = 0;
    if ((uVar14 != 0) &&
       (pFVar7 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar16 = 0,
       0xfffd < (ushort)(**(short **)pFVar7 - 1U))) {
      uVar15 = 1;
      uVar16 = 1;
      if (1 < (int)uVar14) {
        do {
          sVar5 = *(short *)(*(longlong *)(pFVar7 + (ulonglong)(uVar15 >> 9) * 8) +
                            (ulonglong)(uVar15 & 0x1ff) * 2);
          if ((sVar5 != 0) && (uVar16 = uVar15, sVar5 != -1)) break;
          uVar15 = uVar15 + 1;
          uVar16 = uVar15;
        } while ((int)uVar15 < (int)uVar14);
      }
    }
joined_r0x00014ce46509:
    do {
      if (uVar16 == uVar14) {
        **(undefined1 **)((longlong)this + 0x10) = 0;
        return;
      }
      while( true ) {
        pFVar6 = *(ForAnyElementType **)((longlong)this + 8);
        lVar8 = *(longlong *)
                 ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8)
        ;
        local_40 = *(undefined8 *)(lVar8 + (ulonglong)(uVar16 & 0x1ff) * 0xc);
        local_50 = *(undefined4 *)(lVar8 + 8 + (ulonglong)(uVar16 & 0x1ff) * 0xc);
        local_58 = (undefined4)local_40;
        uStack_54 = (undefined4)((ulonglong)local_40 >> 0x20);
        local_38 = local_50;
        if (((pFVar6->Data <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 <
             pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 0xc)) &&
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
        iVar13 = *(int *)&pFVar6[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,pFVar6,piVar1);
        }
        uVar16 = uVar16 + 1;
        *(int *)&pFVar6[1].Data = iVar13 + 1;
        pFVar7 = pFVar6->Data;
        *(ulonglong *)(pFVar7 + (longlong)iVar13 * 0xc) = CONCAT44(uStack_54,local_58);
        *(undefined4 *)(pFVar7 + (longlong)iVar13 * 0xc + 8) = local_50;
        if ((int)uVar14 <= (int)uVar16) break;
        pFVar7 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        while( true ) {
          lVar8 = (ulonglong)(uVar16 >> 9) * 8;
          lVar11 = (ulonglong)(uVar16 & 0x1ff) * 2;
          if ((*(short *)(lVar11 + *(longlong *)(pFVar7 + lVar8)) != 0) &&
             (*(short *)(lVar11 + *(longlong *)(pFVar7 + lVar8)) != -1)) break;
          uVar16 = uVar16 + 1;
          if ((int)uVar14 <= (int)uVar16) goto joined_r0x00014ce46509;
        }
      }
    } while( true );
  }
  uVar16 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar17 = (ulonglong)uVar16;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  puVar2 = (uint *)((longlong)&pFVar6[1].Data + 4);
  *(undefined4 *)&pFVar6[1].Data = 0;
  if (*puVar2 != uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar16,pFVar6,0,(int *)puVar2);
  }
  if (0 < (int)uVar16) {
    do {
      if (((pFVar6->Data <
            (FScriptContainerElement *)
            ((longlong)&UE::Math::TIntVector3<int>::NoneValue.field0_0x0 + 1)) &&
          (&UE::Math::TIntVector3<int>::NoneValue < pFVar6->Data + (longlong)(int)*puVar2 * 0xc)) &&
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
      uVar16 = *(uint *)&pFVar6[1].Data;
      if (uVar16 == *puVar2) {
        uVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,pFVar6,(int *)puVar2);
      }
      *(uint *)&pFVar6[1].Data = uVar16 + 1;
      pFVar7 = pFVar6->Data;
      *(undefined8 *)(pFVar7 + (longlong)(int)uVar16 * 0xc) =
           UE::Math::TIntVector3<int>::NoneValue.field0_0x0._0_8_;
      *(int *)(pFVar7 + (longlong)(int)uVar16 * 0xc + 8) =
           UE::Math::TIntVector3<int>::NoneValue.field0_0x0._s_0.Z;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  uVar17 = 0;
  uVar16 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar16 != 0) &&
     (pFVar7 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar7 - 1U))) {
    uVar17 = 1;
    uVar14 = 1;
    if ((int)uVar16 < 2) goto joined_r0x00014ce467e9;
    do {
      sVar5 = *(short *)(*(longlong *)(pFVar7 + (uVar17 >> 9) * 8) +
                        (ulonglong)((uint)uVar17 & 0x1ff) * 2);
      if ((sVar5 != 0) && (sVar5 != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)uVar16);
  }
  uVar14 = (uint)uVar17;
joined_r0x00014ce467e9:
  do {
    if (uVar14 == uVar16) {
      *(bool *)*(undefined8 *)((longlong)this + 0x10) =
           (param_1->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).FreeIndices.CurBlockUsed != 0;
      return;
    }
    while( true ) {
      plVar9 = *(longlong **)((longlong)this + 8);
      uVar15 = (uint)uVar17;
      lVar8 = *(longlong *)((param_1->Triangles).Blocks.AllocatorInstance.Data + (uVar17 >> 9) * 8);
      uVar4 = *(undefined8 *)(lVar8 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
      local_44 = *(undefined4 *)(lVar8 + 8 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
      uVar14 = 0;
      if ((int)uVar15 < (int)plVar9[1]) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      local_4c = uVar4;
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar14 = uVar15 + 1;
      uVar17 = (ulonglong)uVar14;
      puVar3 = (undefined4 *)(*plVar9 + (longlong)(int)uVar15 * 0xc);
      *puVar3 = (undefined4)local_4c;
      puVar3[1] = (int)((ulonglong)uVar4 >> 0x20);
      puVar3[2] = local_44;
      if ((int)uVar16 <= (int)uVar14) break;
      while( true ) {
        lVar11 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
        lVar8 = *(longlong *)
                 ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 (uVar17 >> 9) * 8);
        if ((*(short *)(lVar11 + lVar8) != 0) && (*(short *)(lVar11 + lVar8) != -1)) break;
        uVar14 = (uint)uVar17 + 1;
        uVar17 = (ulonglong)uVar14;
        if ((int)uVar16 <= (int)uVar14) goto joined_r0x00014ce467e9;
      }
    }
  } while( true );
}

// operator() @ 14ce46970

void __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexIDs'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_28 [4];
  
  lVar3 = *(longlong *)this;
  if ((*(longlong *)(lVar3 + 8) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar11 = (param_1->VertexRefCounts).UsedCount;
  pFVar4 = *(ForAnyElementType **)(lVar3 + 8);
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,pFVar4,*(int *)&pFVar4[1].Data,piVar1);
  }
  uVar12 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar11 = 0;
  if ((uVar12 != 0) &&
     (pFVar5 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar11 = 0,
     0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
    uVar10 = 1;
    uVar11 = 1;
    if (1 < (int)uVar12) {
      do {
        sVar2 = *(short *)(*(longlong *)(pFVar5 + (ulonglong)(uVar10 >> 9) * 8) +
                          (ulonglong)(uVar10 & 0x1ff) * 2);
        if ((sVar2 != 0) && (uVar11 = uVar10, sVar2 != -1)) break;
        uVar10 = uVar10 + 1;
        uVar11 = uVar10;
      } while ((int)uVar10 < (int)uVar12);
    }
  }
joined_r0x00014ce46a59:
  do {
    if (uVar11 == uVar12) {
      *(bool *)*(undefined8 *)((longlong)this + 8) =
           (param_1->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
           (param_1->VertexRefCounts).FreeIndices.CurBlockUsed != 0;
      return;
    }
    while( true ) {
      lVar3 = *(longlong *)this;
      local_28[0] = uVar11;
      if ((*(longlong *)(lVar3 + 8) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = *(ForAnyElementType **)(lVar3 + 8);
      if (((pFVar4->Data <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 <
           pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) &&
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
      iVar9 = *(int *)&pFVar4[1].Data;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar9 + 1;
      uVar11 = uVar11 + 1;
      *(uint *)(pFVar4->Data + (longlong)iVar9 * 4) = local_28[0];
      if ((int)uVar12 <= (int)uVar11) break;
      pFVar5 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar3 = (ulonglong)(uVar11 >> 9) * 8;
        lVar7 = (ulonglong)(uVar11 & 0x1ff) * 2;
        if ((*(short *)(lVar7 + *(longlong *)(pFVar5 + lVar3)) != 0) &&
           (*(short *)(lVar7 + *(longlong *)(pFVar5 + lVar3)) != -1)) break;
        uVar11 = uVar11 + 1;
        if ((int)uVar12 <= (int)uVar11) goto joined_r0x00014ce46a59;
      }
    }
  } while( true );
}

// operator() @ 14ce46be0

void __thiscall
`UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexPositions'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  short sVar5;
  ForAnyElementType *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  longlong *plVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (**(char **)this != '\0') {
    uVar20 = (param_1->VertexRefCounts).UsedCount;
    pFVar6 = *(ForAnyElementType **)((longlong)this + 8);
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    if (*(int *)((longlong)&pFVar6[1].Data + 4) < (int)uVar20) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar20,pFVar6,*(int *)&pFVar6[1].Data,(int *)((longlong)&pFVar6[1].Data + 4)
                );
    }
    uVar18 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
    uVar20 = 0;
    if ((uVar18 != 0) &&
       (pFVar7 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar20 = 0,
       0xfffd < (ushort)(**(short **)pFVar7 - 1U))) {
      uVar19 = 1;
      uVar20 = 1;
      if (1 < (int)uVar18) {
        do {
          sVar5 = *(short *)(*(longlong *)(pFVar7 + (ulonglong)(uVar19 >> 9) * 8) +
                            (ulonglong)(uVar19 & 0x1ff) * 2);
          if ((sVar5 != 0) && (uVar20 = uVar19, sVar5 != -1)) break;
          uVar19 = uVar19 + 1;
          uVar20 = uVar19;
        } while ((int)uVar19 < (int)uVar18);
      }
    }
joined_r0x00014ce46c9a:
    do {
      if (uVar20 == uVar18) {
        **(undefined1 **)((longlong)this + 0x10) = 0;
        return;
      }
      while( true ) {
        pFVar6 = *(ForAnyElementType **)((longlong)this + 8);
        lVar8 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar8 + (ulonglong)(uVar20 & 0x1ff) * 0x18);
        local_48 = *puVar2;
        uStack_40 = puVar2[1];
        local_38 = *(undefined8 *)(lVar8 + 0x10 + (ulonglong)(uVar20 & 0x1ff) * 0x18);
        if (((pFVar6->Data <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 <
             pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 0x18)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar17 = *(int *)&pFVar6[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,pFVar6,piVar1);
        }
        uVar20 = uVar20 + 1;
        *(int *)&pFVar6[1].Data = iVar17 + 1;
        pFVar9 = pFVar6->Data;
        pFVar7 = pFVar9 + (longlong)iVar17 * 0x18;
        *(undefined8 *)pFVar7 = local_48;
        *(undefined8 *)(pFVar7 + 8) = uStack_40;
        *(undefined8 *)(pFVar9 + (longlong)iVar17 * 0x18 + 0x10) = local_38;
        if ((int)uVar18 <= (int)uVar20) break;
        pFVar7 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        while( true ) {
          lVar8 = (ulonglong)(uVar20 >> 9) * 8;
          lVar21 = (ulonglong)(uVar20 & 0x1ff) * 2;
          if ((*(short *)(lVar21 + *(longlong *)(pFVar7 + lVar8)) != 0) &&
             (*(short *)(lVar21 + *(longlong *)(pFVar7 + lVar8)) != -1)) break;
          uVar20 = uVar20 + 1;
          if ((int)uVar18 <= (int)uVar20) goto joined_r0x00014ce46c9a;
        }
      }
    } while( true );
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
            (*(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)((longlong)this + 8)
             ,&UE::Math::TVector<double>::ZeroVector,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  uVar20 = 0;
  uVar18 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((uVar18 != 0) &&
     (pFVar7 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar7 - 1U))) {
    uVar20 = 1;
    bVar16 = uVar18 == 1;
    if ((int)uVar18 < 2) goto LAB_14ce46e5b;
    do {
      sVar5 = *(short *)(*(longlong *)(pFVar7 + (ulonglong)(uVar20 >> 9) * 8) +
                        (ulonglong)(uVar20 & 0x1ff) * 2);
      if ((sVar5 != 0) && (sVar5 != -1)) break;
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < (int)uVar18);
  }
  bVar16 = uVar20 == uVar18;
LAB_14ce46e5b:
  if (!bVar16) {
LAB_14ce46e71:
    do {
      plVar10 = *(longlong **)((longlong)this + 8);
      lVar21 = (longlong)(int)uVar20;
      lVar8 = *(longlong *)
               ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8);
      puVar3 = (undefined4 *)(lVar8 + (ulonglong)(uVar20 & 0x1ff) * 0x18);
      uVar12 = *puVar3;
      uVar13 = puVar3[1];
      uVar14 = puVar3[2];
      uVar15 = puVar3[3];
      uVar4 = *(undefined8 *)(lVar8 + 0x10 + (ulonglong)(uVar20 & 0x1ff) * 0x18);
      uVar19 = 0;
      if ((int)uVar20 < (int)plVar10[1]) {
        uVar19 = ~uVar20 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar8 = *plVar10;
      uVar20 = uVar20 + 1;
      puVar3 = (undefined4 *)(lVar8 + lVar21 * 0x18);
      *puVar3 = uVar12;
      puVar3[1] = uVar13;
      puVar3[2] = uVar14;
      puVar3[3] = uVar15;
      *(undefined8 *)(lVar8 + 0x10 + lVar21 * 0x18) = uVar4;
      if ((int)uVar20 < (int)uVar18) {
        do {
          lVar21 = (ulonglong)(uVar20 & 0x1ff) * 2;
          lVar8 = *(longlong *)
                   ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar20 >> 9) * 8);
          if ((*(short *)(lVar21 + lVar8) != 0) && (*(short *)(lVar21 + lVar8) != -1))
          goto LAB_14ce46e71;
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < (int)uVar18);
      }
    } while (uVar20 != uVar18);
  }
  *(bool *)*(undefined8 *)((longlong)this + 0x10) =
       (param_1->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_1->VertexRefCounts).FreeIndices.CurBlockUsed != 0;
  return;
}

// ComputeTriangleBarycentricCoords @ 14ce64340

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::ComputeTriangleBarycentricCoords
          (UDynamicMesh *param_1,int param_2,bool *param_3,TVector<double> *param_4,
          TVector<double> *param_5,TVector<double> *param_6,TVector<double> *param_7,
          TVector<double> *param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_res10 [6];
  code *local_88;
  bool **local_80;
  undefined4 *local_78;
  code **local_70;
  code *local_68;
  undefined4 **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  bool *local_40;
  int *local_38;
  TVector<double> *local_30;
  TVector<double> *local_28;
  TVector<double> *local_20;
  TVector<double> *local_18;
  
  local_38 = local_res10;
  local_30 = param_5;
  local_28 = param_6;
  local_20 = param_7;
  local_80 = &local_40;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::ComputeTriangleBarycentricCoords'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_78 = &local_58;
    local_70 = &local_88;
    local_60 = &local_78;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<UE::Math::TVector<double>_>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    local_40 = param_3;
    local_18 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_68)
    ;
    uVar1 = local_48;
    uVar2 = local_58;
    uVar3 = uStack_54;
    uVar4 = uStack_50;
    uVar5 = uStack_4c;
  }
  *(undefined4 *)&param_8->field0_0x0 = uVar2;
  *(undefined4 *)((longlong)&param_8->field0_0x0 + 4) = uVar3;
  *(undefined4 *)((longlong)&param_8->field0_0x0 + 8) = uVar4;
  *(undefined4 *)((longlong)&param_8->field0_0x0 + 0xc) = uVar5;
  (param_8->field0_0x0)._s_0.Z = (double)uVar1;
  return param_1;
}

// GetAllSplitUVsAtVertex @ 14ce6a720

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetAllSplitUVsAtVertex
          (UDynamicMesh *param_1,int param_2,int param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_5,bool *param_6)

{
  bool *pbVar1;
  bool local_res10 [8];
  int local_res18 [4];
  code *local_68;
  undefined4 **local_60;
  code *local_58;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> ***local_50;
  int *local_48;
  TArray<int,TSizedDefaultAllocator<32>_> *local_40;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_38;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> **local_30;
  bool *local_28;
  bool *local_20;
  code **local_18;
  
  pbVar1 = param_6;
  local_48 = local_res18;
  local_38 = param_5;
  local_60 = &local_48;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetAllSplitUVsAtVertex'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&>
             ::Call;
  *param_6 = false;
  local_res10[0] = false;
  if (param_1 == (UDynamicMesh *)0x0) {
    *param_6 = false;
  }
  else {
    local_30 = &param_5;
    local_28 = param_6;
    local_20 = local_res10;
    local_18 = &local_68;
    local_50 = &local_30;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshUVSetQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res18[0] = param_3;
    param_5._0_4_ = param_2;
    local_40 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_58)
    ;
    *pbVar1 = local_res10[0];
  }
  return param_1;
}

// GetAllTriangleIDs @ 14ce6a7e0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIDs
          (UDynamicMesh *param_1,FGeometryScriptIndexList *param_2,bool *param_3)

{
  FGeometryScriptIndexList *local_28;
  bool *local_20;
  code *local_18;
  FGeometryScriptIndexList **local_10;
  
  FGeometryScriptIndexList::Reset(param_2,Triangle,0);
  *param_3 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIDs'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_28 = param_2;
    local_20 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
  }
  return param_1;
}

// GetAllTriangleIndices @ 14ce6a860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIndices
          (UDynamicMesh *param_1,FGeometryScriptTriangleList *param_2,bool param_3,bool *param_4)

{
  code *pcVar1;
  bool bVar2;
  UDynamicMesh *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined1 local_res18 [16];
  FGeometryScriptTriangleList local_68;
  code *local_58;
  undefined1 **local_50;
  undefined1 *local_48;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *local_40;
  bool *local_38;
  
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  local_res18[0] = param_3;
  if ((param_2->List).Object ==
      (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_68.List.SharedReferenceCount.ReferenceController = ::operator_new(0x20);
    if (local_68.List.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0
       ) {
      local_68.List.Object = ___xmm_00000000000000000000000000000010;
      pTVar5 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
      local_68.List.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      (local_68.List.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)0x1;
      pTVar5 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
               (local_68.List.SharedReferenceCount.ReferenceController + 1);
      (local_68.List.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)0x1;
      (local_68.List.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TArray_U__TIntVector3_H_Math_UE__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
      ;
      local_68.List.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
      local_68.List.SharedReferenceCount.ReferenceController[1].SharedReferenceCount =
           (atomic<int>)0x0;
      local_68.List.SharedReferenceCount.ReferenceController[1].WeakReferenceCount =
           (atomic<int>)0x0;
      if (pTVar5 == (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar3 = (UDynamicMesh *)(*pcVar1)();
          return pUVar3;
        }
      }
      LOCK();
      (local_68.List.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.List.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
      pTVar4 = local_68.List.SharedReferenceCount.ReferenceController;
      local_68.List.Object = pTVar5;
    }
    if (param_2 != &local_68) {
      (param_2->List).Object = pTVar5;
      local_68.List.Object = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_2->List).SharedReferenceCount,&local_68.List.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.List.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if ((param_2->List).Object ==
        (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UDynamicMesh *)(*pcVar1)();
        return pUVar3;
      }
    }
  }
  pTVar5 = (param_2->List).Object;
  pTVar5->ArrayNum = 0;
  if (pTVar5->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&pTVar5->AllocatorInstance,0,&pTVar5->ArrayMax);
  }
  if ((param_2->List).Object ==
      (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UDynamicMesh *)(*pcVar1)();
      return pUVar3;
    }
  }
  local_40 = (param_2->List).Object;
  *param_4 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_48 = local_res18;
    local_50 = &local_48;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIndices'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_38 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_58)
    ;
  }
  return param_1;
}

// GetAllUVSeamEdges @ 14ce6ab70

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetAllUVSeamEdges
          (UDynamicMesh *param_1,int param_2,bool *param_3,FGeometryScriptIndexList *param_4)

{
  int local_res8 [2];
  bool local_res10 [8];
  FGeometryScriptIndexList *local_res18;
  code *local_58;
  FGeometryScriptIndexList **local_50;
  code *local_48;
  undefined4 **local_40;
  int *local_38;
  bool *local_30;
  bool *local_28;
  code **local_20;
  
  FGeometryScriptIndexList::Reset(param_4,Edge,0);
  local_50 = &local_res18;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetAllUVSeamEdges'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&>
             ::Call;
  *param_3 = false;
  local_res10[0] = false;
  if (param_1 == (UDynamicMesh *)0x0) {
    *param_3 = false;
  }
  else {
    local_38 = local_res8;
    local_28 = local_res10;
    local_20 = &local_58;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshUVSetQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res8[0] = param_2;
    local_res18 = param_4;
    local_30 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48)
    ;
    *param_3 = local_res10[0];
  }
  return param_1;
}

// GetAllVertexIDs @ 14ce6ac40

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexIDs
          (UDynamicMesh *param_1,FGeometryScriptIndexList *param_2,bool *param_3)

{
  FGeometryScriptIndexList *local_28;
  bool *local_20;
  code *local_18;
  FGeometryScriptIndexList **local_10;
  
  FGeometryScriptIndexList::Reset(param_2,Vertex,0);
  *param_3 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexIDs'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_28 = param_2;
    local_20 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
  }
  return param_1;
}

// GetAllVertexPositions @ 14ce6acc0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexPositions
          (UDynamicMesh *param_1,FGeometryScriptVectorList *param_2,bool param_3,bool *param_4)

{
  code *pcVar1;
  bool bVar2;
  UDynamicMesh *pUVar3;
  undefined1 local_res18 [16];
  code *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_20;
  bool *local_18;
  
  local_res18[0] = param_3;
  FGeometryScriptVectorList::Reset(param_2,0);
  if ((param_2->List).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UDynamicMesh *)(*pcVar1)();
      return pUVar3;
    }
  }
  local_20 = (param_2->List).Object;
  *param_4 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res18;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexPositions'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_18 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
  }
  return param_1;
}

// GetAllVertexPositionsAtEdges @ 14ce6ad70

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexPositionsAtEdges
          (UDynamicMesh *param_1,FGeometryScriptIndexList *param_2,
          FGeometryScriptVectorList *param_3,FGeometryScriptVectorList *param_4)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 local_res10 [8];
  code *local_58;
  FGeometryScriptIndexList **local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  undefined1 **local_30;
  FGeometryScriptIndexList *local_28;
  FGeometryScriptVectorList *local_20;
  FGeometryScriptVectorList *local_18;
  
  FGeometryScriptVectorList::Reset(param_3,0);
  FGeometryScriptVectorList::Reset(param_4,0);
  if ((((param_2->IndexType == Edge) || (param_2->IndexType == Any)) ||
      (pTVar1 = (param_2->List).Object, pTVar1 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0))
     || (pTVar1->ArrayNum < 1)) {
    local_50 = &local_28;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexPositionsAtEdges'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    if (param_1 != (UDynamicMesh *)0x0) {
      local_48 = local_res10;
      local_40 = &local_58;
      local_30 = &local_48;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
      local_28 = param_2;
      local_20 = param_3;
      local_18 = param_4;
      UDynamicMesh::ProcessMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                         &local_38);
    }
  }
  return param_1;
}

// GetHasMaterialIDs @ 14ce6ae60

bool __cdecl UGeometryScriptLibrary_MeshQueryFunctions::GetHasMaterialIDs(UDynamicMesh *param_1)

{
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  code *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code **local_20;
  code *local_18;
  undefined1 **local_10;
  
  local_res8[0] = 0;
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetHasMaterialIDs'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return (bool)local_res10[0];
  }
  return false;
}

// GetHasPolygroups @ 14ce6aed0

bool __cdecl UGeometryScriptLibrary_MeshQueryFunctions::GetHasPolygroups(UDynamicMesh *param_1)

{
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  code *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code **local_20;
  code *local_18;
  undefined1 **local_10;
  
  local_res8[0] = 0;
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetHasPolygroups'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return (bool)local_res10[0];
  }
  return false;
}

// GetHasTriangleIDGaps @ 14ce6af40

bool __cdecl UGeometryScriptLibrary_MeshQueryFunctions::GetHasTriangleIDGaps(UDynamicMesh *param_1)

{
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  code *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code **local_20;
  code *local_18;
  undefined1 **local_10;
  
  local_res8[0] = 0;
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetHasTriangleIDGaps'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return (bool)local_res10[0];
  }
  return false;
}

// GetHasTriangleNormals @ 14ce6afb0

bool __cdecl UGeometryScriptLibrary_MeshQueryFunctions::GetHasTriangleNormals(UDynamicMesh *param_1)

{
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  code *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code **local_20;
  code *local_18;
  undefined1 **local_10;
  
  local_res8[0] = 0;
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetHasTriangleNormals'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return (bool)local_res10[0];
  }
  return false;
}

// GetHasVertexColors @ 14ce6b020

bool __cdecl UGeometryScriptLibrary_MeshQueryFunctions::GetHasVertexColors(UDynamicMesh *param_1)

{
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  code *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code **local_20;
  code *local_18;
  undefined1 **local_10;
  
  local_res8[0] = 0;
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetHasVertexColors'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return (bool)local_res10[0];
  }
  return false;
}

// GetHasVertexIDGaps @ 14ce6b090

bool __cdecl UGeometryScriptLibrary_MeshQueryFunctions::GetHasVertexIDGaps(UDynamicMesh *param_1)

{
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  code *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code **local_20;
  code *local_18;
  undefined1 **local_10;
  
  local_res8[0] = 0;
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetHasVertexIDGaps'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return (bool)local_res10[0];
  }
  return false;
}

// GetInterpolatedTriangleNormal @ 14ce6b100

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormal
          (UDynamicMesh *param_1,int param_2,TVector<double> *param_3,bool *param_4,
          TVector<double> *param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_res10 [6];
  code *local_68;
  int **local_60;
  undefined4 *local_58;
  code **local_50;
  code *local_48;
  undefined4 **local_40;
  int *local_38;
  bool *local_30;
  TVector<double> *local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  double local_10;
  
  *param_4 = false;
  local_38 = local_res10;
  local_60 = &local_38;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormal'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  uVar1 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_;
  uVar3 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_;
  uVar4 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_;
  uVar5 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_58 = &local_20;
    local_50 = &local_68;
    local_40 = &local_58;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<UE::Math::TVector<double>_>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    local_30 = param_4;
    local_28 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48)
    ;
    uVar1 = local_10;
    uVar2 = local_20;
    uVar3 = uStack_1c;
    uVar4 = uStack_18;
    uVar5 = uStack_14;
  }
  *(undefined4 *)&param_5->field0_0x0 = uVar2;
  *(undefined4 *)((longlong)&param_5->field0_0x0 + 4) = uVar3;
  *(undefined4 *)((longlong)&param_5->field0_0x0 + 8) = uVar4;
  *(undefined4 *)((longlong)&param_5->field0_0x0 + 0xc) = uVar5;
  (param_5->field0_0x0)._s_0.Z = (double)uVar1;
  return param_1;
}

// GetInterpolatedTriangleNormalTangents @ 14ce6b1b0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormalTangents
          (UDynamicMesh *param_1,int param_2,TVector<double> *param_3,bool *param_4,
          TVector<double> *param_5,TVector<double> *param_6,TVector<double> *param_7)

{
  int local_res10 [6];
  code *local_68;
  undefined4 **local_60;
  TVector<double> **local_58;
  code **local_50;
  code *local_48;
  TVector<double> ***local_40;
  int *local_38;
  TVector<double> *local_30;
  TVector<double> *local_28;
  TVector<double> *local_20;
  TVector<double> *local_18;
  
  local_38 = local_res10;
  local_30 = param_5;
  local_20 = param_6;
  local_18 = param_7;
  local_60 = &local_38;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormalTangents'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 == (UDynamicMesh *)0x0) {
    *param_4 = false;
  }
  else {
    local_58 = &param_5;
    local_50 = &local_68;
    local_40 = &local_58;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    local_28 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48)
    ;
    *param_4 = (bool)param_5._0_1_;
  }
  return param_1;
}

// GetInterpolatedTrianglePosition @ 14ce6b270

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTrianglePosition
          (UDynamicMesh *param_1,int param_2,TVector<double> *param_3,bool *param_4,
          TVector<double> *param_5)

{
  undefined8 uVar1;
  int local_res10 [6];
  code *local_58;
  int **local_50;
  TVector<double> **local_48;
  code **local_40;
  code *local_38;
  TVector<double> ***local_30;
  int *local_28;
  TVector<double> *local_20;
  TVector<double> *local_18;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_20 = param_5;
  local_28 = local_res10;
  (param_5->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_5->field0_0x0)._s_0.Y = (double)uVar1;
  (param_5->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_50 = &local_28;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTrianglePosition'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_48 = &param_5;
    local_40 = &local_58;
    local_30 = &local_48;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    local_18 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
    *param_4 = (bool)param_5._0_1_;
    return param_1;
  }
  *param_4 = false;
  return (UDynamicMesh *)0x0;
}

// GetInterpolatedTriangleUV @ 14ce6b340

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleUV
          (UDynamicMesh *param_1,int param_2,int param_3,TVector<double> *param_4,bool *param_5,
          TVector2<double> *param_6)

{
  bool local_res10 [8];
  int local_res18 [4];
  code *local_68;
  undefined4 **local_60;
  code *local_58;
  TVector2<double> ***local_50;
  int *local_48;
  TVector2<double> *local_40;
  TVector<double> *local_38;
  TVector2<double> **local_30;
  bool *local_28;
  bool *local_20;
  code **local_18;
  
  local_40 = param_6;
  local_48 = local_res18;
  local_res10[0] = false;
  (param_6->field0_0x0)._s_0 = (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  *param_5 = false;
  local_60 = &local_48;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleUV'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&>
             ::Call;
  if (param_1 == (UDynamicMesh *)0x0) {
    *param_5 = false;
  }
  else {
    local_30 = &param_6;
    local_28 = param_5;
    local_20 = local_res10;
    local_18 = &local_68;
    local_50 = &local_30;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshUVSetQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res18[0] = param_3;
    param_6._0_4_ = param_2;
    local_38 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_58)
    ;
    *param_5 = local_res10[0];
  }
  return param_1;
}

// GetInterpolatedTriangleVertexColor @ 14ce6b410

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleVertexColor
          (UDynamicMesh *param_1,int param_2,TVector<double> *param_3,FLinearColor *param_4,
          bool *param_5,FLinearColor *param_6)

{
  undefined8 uVar1;
  int local_res10 [6];
  code *local_68;
  undefined4 **local_60;
  undefined8 *local_58;
  code **local_50;
  code *local_48;
  undefined8 **local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  int *local_28;
  FLinearColor *local_20;
  TVector<double> *local_18;
  bool *local_10;
  
  local_10 = param_5;
  local_28 = local_res10;
  *param_5 = false;
  local_60 = &local_28;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleVertexColor'::__l2::<lambda_1>,FLinearColor,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_58 = &local_38;
    local_50 = &local_68;
    local_40 = &local_58;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<FLinearColor>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    local_20 = param_4;
    local_18 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48)
    ;
    *(undefined8 *)&param_6->field0_0x0 = local_38;
    *(undefined8 *)((longlong)&param_6->field0_0x0 + 8) = uStack_30;
    return param_1;
  }
  uVar1 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  *(undefined8 *)&param_6->field0_0x0 = *(undefined8 *)&param_4->field0_0x0;
  *(undefined8 *)((longlong)&param_6->field0_0x0 + 8) = uVar1;
  return (UDynamicMesh *)0x0;
}

// GetIsClosedMesh @ 14ce6b4d0

bool __cdecl UGeometryScriptLibrary_MeshQueryFunctions::GetIsClosedMesh(UDynamicMesh *param_1)

{
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  code *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code **local_20;
  code *local_18;
  undefined1 **local_10;
  
  local_res8[0] = 0;
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetIsClosedMesh'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return (bool)local_res10[0];
  }
  return true;
}

// GetIsDenseMesh @ 14ce6b540

bool __cdecl UGeometryScriptLibrary_MeshQueryFunctions::GetIsDenseMesh(UDynamicMesh *param_1)

{
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  code *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code **local_20;
  code *local_18;
  undefined1 **local_10;
  
  local_res8[0] = 0;
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetIsDenseMesh'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return (bool)local_res10[0];
  }
  return true;
}

// GetMeshBoundingBox @ 14ce6b5b0

TBox<double> * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetMeshBoundingBox
          (TBox<double> *__return_storage_ptr__,UDynamicMesh *param_1)

{
  undefined1 local_78 [8];
  code *local_70;
  undefined1 *local_68;
  TBox<double> *local_60;
  code **local_58;
  code *local_50;
  TBox<double> **local_48;
  undefined1 local_10;
  undefined4 uStack_f;
  undefined2 uStack_b;
  undefined1 uStack_9;
  
  local_78[0] = 0;
  local_68 = local_78;
  local_10 = 0;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetMeshBoundingBox'::__l2::<lambda_1>,UE::Math::TBox<double>,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  uStack_f = 0;
  uStack_b = 0;
  uStack_9 = 0;
  if (param_1 != (UDynamicMesh *)0x0) {
    __return_storage_ptr__->IsValid = '\0';
    local_58 = &local_70;
    local_48 = &local_60;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<UE::Math::TBox<double>_>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_60 = __return_storage_ptr__;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_50)
    ;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  return __return_storage_ptr__;
}

// GetMeshHasAttributeSet @ 14ce6b660

bool __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetMeshHasAttributeSet(UDynamicMesh *param_1)

{
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  code *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code **local_20;
  code *local_18;
  undefined1 **local_10;
  
  local_res8[0] = 0;
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetMeshHasAttributeSet'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return (bool)local_res10[0];
  }
  return true;
}

// GetMeshInfoString @ 14ce6b770

FString * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetMeshInfoString
          (FString *__return_storage_ptr__,UDynamicMesh *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  undefined1 local_res8 [8];
  ForAnyElementType local_58;
  undefined8 local_50;
  code *local_48;
  undefined1 *local_40;
  ForAnyElementType *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  FString local_18;
  
  local_40 = local_res8;
  local_res8[0] = 0;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetMeshInfoString'::__l2::<lambda_1>,FString,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  pFVar2 = ::FString::FString(&local_18,L"Mesh is Null");
  if (param_1 == (UDynamicMesh *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  else {
    local_38 = &local_58;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_30 = &local_48;
    local_50 = 0;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<FString>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28)
    ;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data;
    (__return_storage_ptr__->Data).ArrayNum = (int)local_50;
    (__return_storage_ptr__->Data).ArrayMax = local_50._4_4_;
    local_50 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
  }
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// GetMeshUVArea @ 14ce6c040

double __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetMeshUVArea
          (UDynamicMesh *param_1,int param_2,bool *param_3)

{
  double dVar1;
  int local_res8 [2];
  undefined1 local_res10 [8];
  double local_res18 [2];
  code *local_48;
  undefined1 *local_40;
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  bool *local_20;
  double *local_18;
  code **local_10;
  
  local_40 = local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetMeshUVArea'::__l2::<lambda_1>,double,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&>
             ::Call;
  local_res18[0] = 0.0;
  *param_3 = false;
  dVar1 = 0.0;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res8;
    local_18 = local_res18;
    local_10 = &local_48;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshUVSetQuery<double>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res8[0] = param_2;
    local_20 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
    dVar1 = local_res18[0];
  }
  return dVar1;
}

// GetMeshVolumeArea @ 14ce6c430

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetMeshVolumeArea
          (UDynamicMesh *param_1,float *param_2,float *param_3)

{
  undefined1 local_res8 [32];
  float *local_48;
  float *local_40;
  code *local_38;
  float **local_30;
  undefined1 *local_28;
  code **local_20;
  code *local_18;
  undefined1 **local_10;
  
  *param_3 = 0.0;
  *param_2 = 0.0;
  local_30 = &local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetMeshVolumeArea'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res8;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_48 = param_3;
    local_40 = param_2;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
  }
  return;
}

// GetMeshVolumeAreaCenter @ 14ce6c4a0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetMeshVolumeAreaCenter
          (UDynamicMesh *param_1,float *param_2,float *param_3,TVector<double> *param_4)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  code *local_58;
  float **local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  undefined1 **local_30;
  float *local_28;
  float *local_20;
  TVector<double> *local_18;
  
  *param_3 = 0.0;
  *param_2 = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_50 = &local_28;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetMeshVolumeAreaCenter'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (double)uVar1;
  (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_48 = local_res8;
    local_40 = &local_58;
    local_30 = &local_48;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_28 = param_3;
    local_20 = param_2;
    local_18 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
  }
  return;
}

// GetNumConnectedComponents @ 14ce6c530

int __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetNumConnectedComponents(UDynamicMesh *param_1)

{
  undefined1 local_res8 [8];
  int local_res10 [6];
  code *local_38;
  undefined1 *local_30;
  int *local_28;
  code **local_20;
  code *local_18;
  undefined4 **local_10;
  
  local_res8[0] = 0;
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetNumConnectedComponents'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return local_res10[0];
  }
  return 0;
}

// GetNumExtendedPolygroupLayers @ 14ce6c5a0

int __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetNumExtendedPolygroupLayers(UDynamicMesh *param_1)

{
  undefined1 local_res8 [8];
  int local_res10 [6];
  code *local_38;
  undefined1 *local_30;
  int *local_28;
  code **local_20;
  code *local_18;
  undefined4 **local_10;
  
  local_res8[0] = 0;
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetNumExtendedPolygroupLayers'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return local_res10[0];
  }
  return 0;
}

// GetNumOpenBorderEdges @ 14ce6c610

int __cdecl UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderEdges(UDynamicMesh *param_1)

{
  undefined1 local_res8 [8];
  int local_res10 [6];
  code *local_38;
  undefined1 *local_30;
  int *local_28;
  code **local_20;
  code *local_18;
  undefined4 **local_10;
  
  local_res8[0] = 0;
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderEdges'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return local_res10[0];
  }
  return 0;
}

// GetNumOpenBorderLoops @ 14ce6c680

int __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderLoops
          (UDynamicMesh *param_1,bool *param_2)

{
  int local_res8 [2];
  bool *local_res10 [3];
  code *local_38;
  bool **local_30;
  int *local_28;
  code **local_20;
  code *local_18;
  undefined4 **local_10;
  
  local_30 = local_res10;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderLoops'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res8;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return local_res8[0];
  }
  return 0;
}

// GetNumTriangleIDs @ 14ce6c760

int __cdecl UGeometryScriptLibrary_MeshQueryFunctions::GetNumTriangleIDs(UDynamicMesh *param_1)

{
  undefined1 local_res8 [8];
  int local_res10 [6];
  code *local_38;
  undefined1 *local_30;
  int *local_28;
  code **local_20;
  code *local_18;
  undefined4 **local_10;
  
  local_res8[0] = 0;
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetNumTriangleIDs'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return local_res10[0];
  }
  return 0;
}

// GetNumUVIslands @ 14ce6c7d0

int __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVIslands
          (UDynamicMesh *param_1,int param_2,bool *param_3)

{
  int local_res8 [2];
  undefined1 local_res10 [8];
  int local_res18 [4];
  code *local_48;
  undefined1 *local_40;
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  bool *local_20;
  int *local_18;
  code **local_10;
  
  local_40 = local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVIslands'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&>
             ::Call;
  *param_3 = false;
  local_res8[0] = -1;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res18;
    local_18 = local_res8;
    local_10 = &local_48;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshUVSetQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res18[0] = param_2;
    local_20 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
    return local_res8[0];
  }
  return -1;
}

// GetNumUVSets @ 14ce6c850

int __cdecl UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVSets(UDynamicMesh *param_1)

{
  undefined1 local_res8 [8];
  int local_res10 [6];
  code *local_38;
  undefined1 *local_30;
  int *local_28;
  code **local_20;
  code *local_18;
  undefined4 **local_10;
  
  local_res8[0] = 0;
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVSets'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return local_res10[0];
  }
  return 0;
}

// GetNumVertexIDs @ 14ce6c8c0

int __cdecl UGeometryScriptLibrary_MeshQueryFunctions::GetNumVertexIDs(UDynamicMesh *param_1)

{
  undefined1 local_res8 [8];
  int local_res10 [6];
  code *local_38;
  undefined1 *local_30;
  int *local_28;
  code **local_20;
  code *local_18;
  undefined4 **local_10;
  
  local_res8[0] = 0;
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetNumVertexIDs'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return local_res10[0];
  }
  return 0;
}

// GetPrivateStaticClass @ 14ce6d0b0

UClass * __cdecl UGeometryScriptLibrary_MeshQueryFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshQueryFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshQueryFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshQueryFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_MeshQueryFunctions,0x28,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshQueryFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshQueryFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshQueryFunctions.InnerSingleton;
}

// GetTriangleFaceNormal @ 14ce6da30

TVector<double> * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleFaceNormal
          (TVector<double> *__return_storage_ptr__,UDynamicMesh *param_1,int param_2,bool *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_res18 [4];
  bool *local_48;
  int *local_40;
  code *local_38;
  bool **local_30;
  TVector<double> *local_28;
  code **local_20;
  code *local_18;
  TVector<double> **local_10;
  
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_40 = local_res18;
  local_30 = &local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleFaceNormal'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<UE::Math::TVector<double>_>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res18[0] = param_2;
    local_48 = param_3;
    local_28 = __return_storage_ptr__;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar2;
  return __return_storage_ptr__;
}

// GetTriangleIndices @ 14ce6dac0

TIntVector3<int> * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleIndices
          (TIntVector3<int> *__return_storage_ptr__,UDynamicMesh *param_1,int param_2,bool *param_3)

{
  undefined4 uVar1;
  int local_res18 [4];
  bool *local_48;
  int *local_40;
  code *local_38;
  bool **local_30;
  TIntVector3<int> *local_28;
  code **local_20;
  code *local_18;
  TIntVector3<int> **local_10;
  
  uVar1 = UE::Math::TIntVector3<int>::NoneValue.field0_0x0._s_0.Z;
  local_40 = local_res18;
  local_30 = &local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleIndices'::__l2::<lambda_1>,UE::Math::TIntVector3<int>,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<UE::Math::TIntVector3<int>_>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res18[0] = param_2;
    local_48 = param_3;
    local_28 = __return_storage_ptr__;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       UE::Math::TIntVector3<int>::NoneValue.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = uVar1;
  return __return_storage_ptr__;
}

// GetTriangleNormalTangents @ 14ce6db50

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormalTangents
          (UDynamicMesh *param_1,int param_2,bool *param_3,FGeometryScriptTriangle *param_4,
          FGeometryScriptTriangle *param_5,FGeometryScriptTriangle *param_6)

{
  int local_res10 [6];
  code *local_58;
  undefined4 **local_50;
  FGeometryScriptTriangle **local_48;
  code **local_40;
  code *local_38;
  FGeometryScriptTriangle ***local_30;
  int *local_28;
  FGeometryScriptTriangle *local_20;
  FGeometryScriptTriangle *local_18;
  FGeometryScriptTriangle *local_10;
  
  local_28 = local_res10;
  local_18 = param_5;
  local_10 = param_6;
  local_50 = &local_28;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormalTangents'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_48 = &param_5;
    local_40 = &local_58;
    local_30 = &local_48;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    local_20 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
    *param_3 = (bool)param_5._0_1_;
    return param_1;
  }
  *param_3 = false;
  return (UDynamicMesh *)0x0;
}

// GetTriangleNormals @ 14ce6dc10

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormals
          (UDynamicMesh *param_1,int param_2,TVector<double> *param_3,TVector<double> *param_4,
          TVector<double> *param_5,bool *param_6)

{
  int local_res10 [6];
  code *local_58;
  undefined4 **local_50;
  TVector<double> **local_48;
  code **local_40;
  code *local_38;
  TVector<double> ***local_30;
  int *local_28;
  TVector<double> *local_20;
  TVector<double> *local_18;
  TVector<double> *local_10;
  
  local_28 = local_res10;
  local_10 = param_5;
  local_50 = &local_28;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormals'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_48 = &param_5;
    local_40 = &local_58;
    local_30 = &local_48;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    local_20 = param_3;
    local_18 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
    *param_6 = (bool)param_5._0_1_;
    return param_1;
  }
  *param_6 = false;
  return (UDynamicMesh *)0x0;
}

// GetTrianglePositions @ 14ce6dd60

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetTrianglePositions
          (UDynamicMesh *param_1,int param_2,bool *param_3,TVector<double> *param_4,
          TVector<double> *param_5,TVector<double> *param_6)

{
  int local_res10 [6];
  code *local_68;
  bool **local_60;
  TVector<double> **local_58;
  code **local_50;
  code *local_48;
  TVector<double> ***local_40;
  bool *local_38;
  int *local_30;
  TVector<double> *local_28;
  TVector<double> *local_20;
  TVector<double> *local_18;
  
  local_30 = local_res10;
  local_20 = param_5;
  local_18 = param_6;
  local_60 = &local_38;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetTrianglePositions'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_58 = &param_5;
    local_50 = &local_68;
    local_40 = &local_58;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    local_38 = param_3;
    local_28 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48)
    ;
    *param_3 = (bool)param_5._0_1_;
    return;
  }
  *param_3 = false;
  return;
}

// GetTriangleUVs @ 14ce6de10

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleUVs
          (UDynamicMesh *param_1,int param_2,int param_3,TVector2<double> *param_4,
          TVector2<double> *param_5,TVector2<double> *param_6,bool *param_7)

{
  bool *pbVar1;
  bool local_res10 [8];
  int local_res18 [4];
  code *local_68;
  undefined4 **local_60;
  code *local_58;
  TVector2<double> ***local_50;
  int *local_48;
  TVector2<double> *local_40;
  TVector2<double> *local_38;
  TVector2<double> *local_30;
  TVector2<double> **local_28;
  bool *local_20;
  bool *local_18;
  code **local_10;
  
  pbVar1 = param_7;
  local_48 = local_res18;
  local_38 = param_5;
  local_30 = param_6;
  local_60 = &local_48;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleUVs'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&>
             ::Call;
  *param_7 = false;
  local_res10[0] = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = &param_5;
    local_20 = param_7;
    local_18 = local_res10;
    local_10 = &local_68;
    local_50 = &local_28;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshUVSetQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res18[0] = param_3;
    param_5._0_4_ = param_2;
    local_40 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_58)
    ;
    *pbVar1 = local_res10[0];
    return;
  }
  *param_7 = false;
  return;
}

// GetTriangleVertexColors @ 14ce6ded0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleVertexColors
          (UDynamicMesh *param_1,int param_2,FLinearColor *param_3,FLinearColor *param_4,
          FLinearColor *param_5,bool *param_6)

{
  int local_res10 [6];
  code *local_58;
  undefined4 **local_50;
  FLinearColor **local_48;
  code **local_40;
  code *local_38;
  FLinearColor ***local_30;
  int *local_28;
  FLinearColor *local_20;
  FLinearColor *local_18;
  FLinearColor *local_10;
  
  local_28 = local_res10;
  local_10 = param_5;
  local_50 = &local_28;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleVertexColors'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_48 = &param_5;
    local_40 = &local_58;
    local_30 = &local_48;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    local_20 = param_3;
    local_18 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
    *param_6 = (bool)param_5._0_1_;
    return param_1;
  }
  *param_6 = false;
  return (UDynamicMesh *)0x0;
}

// GetUVSetBoundingBox @ 14ce6e080

TBox2<double> * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetUVSetBoundingBox
          (TBox2<double> *__return_storage_ptr__,UDynamicMesh *param_1,int param_2,bool *param_3,
          bool *param_4)

{
  int local_res18 [4];
  code *local_58;
  bool **local_50;
  code *local_48;
  int **local_40;
  int *local_38;
  bool *local_30;
  TBox2<double> *local_28;
  code **local_20;
  undefined8 local_18;
  
  local_50 = &param_4;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetUVSetBoundingBox'::__l2::<lambda_1>,UE::Math::TBox2<double>,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&>
             ::Call;
  *param_3 = false;
  local_18 = 0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&__return_storage_ptr__->bIsValid = 0;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_38 = local_res18;
    local_20 = &local_58;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshUVSetQuery<UE::Math::TBox2<double>_>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res18[0] = param_2;
    local_30 = param_3;
    local_28 = __return_storage_ptr__;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48)
    ;
  }
  return __return_storage_ptr__;
}

// GetVertexConnectedTriangles @ 14ce6e120

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetVertexConnectedTriangles
          (UDynamicMesh *param_1,int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 local_res8 [8];
  int local_res10 [6];
  int *local_48;
  TArray<int,TSizedDefaultAllocator<32>_> *local_40;
  code *local_38;
  undefined4 **local_30;
  undefined1 *local_28;
  code **local_20;
  code *local_18;
  undefined1 **local_10;
  
  local_48 = local_res10;
  local_30 = &local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetVertexConnectedTriangles'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res8;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    local_40 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
  }
  return param_1;
}

// GetVertexConnectedVertices @ 14ce6e190

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetVertexConnectedVertices
          (UDynamicMesh *param_1,int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 local_res8 [8];
  int local_res10 [6];
  int *local_48;
  TArray<int,TSizedDefaultAllocator<32>_> *local_40;
  code *local_38;
  undefined4 **local_30;
  undefined1 *local_28;
  code **local_20;
  code *local_18;
  undefined1 **local_10;
  
  local_48 = local_res10;
  local_30 = &local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetVertexConnectedVertices'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res8;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    local_40 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
  }
  return param_1;
}

// GetVertexCount @ 14ce6e200

int __cdecl UGeometryScriptLibrary_MeshQueryFunctions::GetVertexCount(UDynamicMesh *param_1)

{
  undefined1 local_res8 [8];
  int local_res10 [6];
  code *local_38;
  undefined1 *local_30;
  int *local_28;
  code **local_20;
  code *local_18;
  undefined4 **local_10;
  
  local_res8[0] = 0;
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetVertexCount'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return local_res10[0];
  }
  return 0;
}

// GetVertexPosition @ 14ce6e270

TVector<double> * __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::GetVertexPosition
          (TVector<double> *__return_storage_ptr__,UDynamicMesh *param_1,int param_2,bool *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_res18 [4];
  bool *local_48;
  int *local_40;
  code *local_38;
  bool **local_30;
  TVector<double> *local_28;
  code **local_20;
  code *local_18;
  TVector<double> **local_10;
  
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_40 = local_res18;
  local_30 = &local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetVertexPosition'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<UE::Math::TVector<double>_>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res18[0] = param_2;
    local_48 = param_3;
    local_28 = __return_storage_ptr__;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar2;
  return __return_storage_ptr__;
}

// IsValidTriangleID @ 14ce6f350

bool __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::IsValidTriangleID(UDynamicMesh *param_1,int param_2)

{
  undefined1 local_res8 [8];
  int local_res10 [2];
  int *local_res18 [2];
  code *local_38;
  undefined4 **local_30;
  undefined1 *local_28;
  code **local_20;
  code *local_18;
  undefined1 **local_10;
  
  local_res18[0] = local_res10;
  local_30 = local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::IsValidTriangleID'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res8;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return (bool)local_res8[0];
  }
  return false;
}

// IsValidVertexID @ 14ce6f3c0

bool __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::IsValidVertexID(UDynamicMesh *param_1,int param_2)

{
  undefined1 local_res8 [8];
  int local_res10 [2];
  int *local_res18 [2];
  code *local_38;
  undefined4 **local_30;
  undefined1 *local_28;
  code **local_20;
  code *local_18;
  undefined1 **local_10;
  
  local_res18[0] = local_res10;
  local_30 = local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::IsValidVertexID'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res8;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
    return (bool)local_res8[0];
  }
  return false;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshQueryFunctions @ 14ce75000

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshQueryFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x31;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execComputeTriangleBarycentricCoords @ 14ce8b150

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execComputeTriangleBarycentricCoords
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uchar local_res10 [8];
  undefined8 *local_res18;
  undefined4 local_res20 [2];
  undefined4 local_168 [2];
  UDynamicMesh *local_160;
  code *local_158;
  uchar **local_150;
  undefined4 *local_148;
  code **local_140;
  code *local_138;
  undefined4 **local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  uchar *local_110;
  undefined4 *local_108;
  uchar *local_100;
  uchar *local_f8;
  uchar *local_f0;
  undefined8 *local_e8;
  uchar local_e0 [24];
  uchar local_c8 [24];
  uchar local_b0 [24];
  uchar local_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  local_160 = (UDynamicMesh *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e0);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar4 = local_e0;
  if (puVar3 != (uchar *)0x0) {
    puVar4 = puVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar7 = local_c8;
  if (puVar3 != (uchar *)0x0) {
    puVar7 = puVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b0);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar6 = local_b0;
  if (puVar3 != (uchar *)0x0) {
    puVar6 = puVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  pUVar2 = local_160;
  puVar3 = local_98;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  local_78 = local_128;
  uStack_70 = uStack_120;
  local_68 = local_118;
  local_168[0] = local_res20[0];
  local_108 = local_168;
  local_e8 = &local_78;
  local_150 = &local_110;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_158 = UE::Core::Private::Function::
              TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::ComputeTriangleBarycentricCoords'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Geometry::FDynamicMesh3_const_&>
              ::Call;
  if (local_160 == (UDynamicMesh *)0x0) {
    uVar8 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar9 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20)
    ;
    local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uStack_54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_4c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    local_148 = &local_58;
    local_140 = &local_158;
    local_130 = &local_148;
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`SimpleMeshQuery<UE::Math::TVector<double>_>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    local_110 = puVar5;
    local_100 = puVar4;
    local_f8 = puVar7;
    local_f0 = puVar6;
    UDynamicMesh::ProcessMesh
              (local_160,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_138);
    uVar8 = (undefined4)local_48;
    uVar9 = (undefined4)((ulonglong)local_48 >> 0x20);
  }
  *(undefined4 *)puVar3 = local_58;
  *(undefined4 *)(puVar3 + 4) = uStack_54;
  *(undefined4 *)(puVar3 + 8) = uStack_50;
  *(undefined4 *)(puVar3 + 0xc) = uStack_4c;
  *(ulonglong *)(puVar3 + 0x10) = CONCAT44(uVar9,uVar8);
  *local_res18 = pUVar2;
  return;
}

// execGetAllSplitUVsAtVertex @ 14ce8ff20

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetAllSplitUVsAtVertex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  void **ppvVar1;
  FProperty *pFVar2;
  UDynamicMesh *pUVar3;
  uchar *puVar4;
  void **ppvVar5;
  void **ppvVar6;
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_d8 [2];
  undefined4 local_d0 [2];
  undefined4 local_c8 [2];
  UDynamicMesh *local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined4 **local_90;
  code *local_88;
  undefined4 **local_80;
  undefined4 *local_78;
  void **local_70;
  void **local_68;
  undefined4 *local_60;
  uchar *local_58;
  uchar *local_50;
  code **local_48;
  
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
  local_d8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
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
  local_a8 = (void *)0x0;
  local_a0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_b8 = (void *)0x0;
  local_b0 = 0;
  ppvVar6 = &local_a8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar6 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  ppvVar1 = (void **)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  ppvVar5 = &local_b8;
  if (ppvVar1 != (void **)0x0) {
    ppvVar5 = ppvVar1;
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
  pUVar3 = local_c0;
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  local_d0[0] = local_res20[0];
  local_78 = local_d0;
  local_90 = &local_78;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetAllSplitUVsAtVertex'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8[0] = local_d8[0];
  *puVar4 = '\0';
  local_res18[0] = '\0';
  local_70 = ppvVar6;
  local_68 = ppvVar5;
  if (local_c0 != (UDynamicMesh *)0x0) {
    local_60 = local_c8;
    local_50 = local_res18;
    local_48 = &local_98;
    local_80 = &local_60;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshUVSetQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_58 = puVar4;
    UDynamicMesh::ProcessMesh
              (local_c0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_88
              );
  }
  *puVar4 = local_res18[0];
  *(UDynamicMesh **)param_3 = pUVar3;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// execGetAllTriangleIDs @ 14ce901b0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetAllTriangleIDs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGeometryScriptIndexList *pFVar1;
  FProperty *pFVar2;
  UDynamicMesh *this;
  FGeometryScriptIndexList *this_00;
  uchar *puVar3;
  uchar local_res10 [8];
  UDynamicMesh *local_res18;
  FGeometryScriptIndexList *local_58;
  uchar *local_50;
  code *local_48;
  FGeometryScriptIndexList **local_40;
  FGeometryScriptIndexList local_38;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_38.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_38.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this_00 = &local_38;
  if (pFVar1 != (FGeometryScriptIndexList *)0x0) {
    this_00 = pFVar1;
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
  this = local_res18;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGeometryScriptIndexList::Reset(this_00,Triangle,0);
  *puVar3 = '\0';
  if (this != (UDynamicMesh *)0x0) {
    local_40 = &local_58;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIDs'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_58 = this_00;
    local_50 = puVar3;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48);
  }
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.List.SharedReferenceCount.ReferenceController);
  return;
}

// execGetAllTriangleIndices @ 14ce90360

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetAllTriangleIndices
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FGeometryScriptTriangleList *pFVar3;
  bool *pbVar4;
  bool bVar5;
  bool local_res10 [8];
  int local_res18 [2];
  UDynamicMesh *local_res20;
  FGeometryScriptTriangleList local_38;
  
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_38.List.Object = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0;
  local_38.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res18[0] = 0;
  pFVar3 = &local_38;
  if ((FGeometryScriptTriangleList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptTriangleList *)0x0) {
    pFVar3 = (FGeometryScriptTriangleList *)param_2->MostRecentPropertyAddress;
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
  bVar5 = local_res18[0] != 0;
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar4 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar4 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetAllTriangleIndices(local_res20,pFVar3,bVar5,pbVar4);
  *(UDynamicMesh **)param_3 = pUVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.List.SharedReferenceCount.ReferenceController);
  return;
}

// execGetAllUVSeamEdges @ 14ce906d0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetAllUVSeamEdges
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  FProperty *pFVar2;
  undefined4 uVar3;
  UDynamicMesh *this;
  FGeometryScriptIndexList *this_00;
  uchar *puVar4;
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_98 [2];
  UDynamicMesh *local_90;
  FGeometryScriptIndexList *local_88;
  FGeometryScriptIndexList local_80;
  code *local_68;
  FGeometryScriptIndexList **local_60;
  code *local_58;
  undefined4 **local_50;
  undefined4 *local_48;
  uchar *local_40;
  uchar *local_38;
  code **local_30;
  
  local_90 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
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
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  local_80.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar4 = local_res10;
  if (puVar1 != (uchar *)0x0) {
    puVar4 = puVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_80.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_80.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  this = local_90;
  uVar3 = local_res20[0];
  this_00 = &local_80;
  if ((FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptIndexList *)0x0) {
    this_00 = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGeometryScriptIndexList::Reset(this_00,Edge,0);
  local_60 = &local_88;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetAllUVSeamEdges'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&>
             ::Call;
  local_98[0] = uVar3;
  *puVar4 = '\0';
  local_res18[0] = '\0';
  local_88 = this_00;
  if (this != (UDynamicMesh *)0x0) {
    local_48 = local_98;
    local_38 = local_res18;
    local_30 = &local_68;
    local_50 = &local_48;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshUVSetQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_40 = puVar4;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_58);
  }
  *puVar4 = local_res18[0];
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.List.SharedReferenceCount.ReferenceController);
  return;
}

// execGetAllVertexIDs @ 14ce908d0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetAllVertexIDs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGeometryScriptIndexList *pFVar1;
  FProperty *pFVar2;
  UDynamicMesh *this;
  FGeometryScriptIndexList *this_00;
  uchar *puVar3;
  uchar local_res10 [8];
  UDynamicMesh *local_res18;
  FGeometryScriptIndexList *local_58;
  uchar *local_50;
  code *local_48;
  FGeometryScriptIndexList **local_40;
  FGeometryScriptIndexList local_38;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_38.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_38.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this_00 = &local_38;
  if (pFVar1 != (FGeometryScriptIndexList *)0x0) {
    this_00 = pFVar1;
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
  this = local_res18;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGeometryScriptIndexList::Reset(this_00,Vertex,0);
  *puVar3 = '\0';
  if (this != (UDynamicMesh *)0x0) {
    local_40 = &local_58;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexIDs'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_58 = this_00;
    local_50 = puVar3;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48);
  }
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.List.SharedReferenceCount.ReferenceController);
  return;
}

// execGetAllVertexPositions @ 14ce90a80

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetAllVertexPositions
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  UDynamicMesh *this;
  uchar *puVar4;
  FGeometryScriptVectorList *this_00;
  bool bVar5;
  uchar local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  UDynamicMesh *local_78;
  FGeometryScriptVectorList local_70;
  code *local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_48;
  uchar *local_40;
  
  local_78 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_70.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_70.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_res20[0] = 0;
  this_00 = &local_70;
  if ((FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptVectorList *)0x0) {
    this_00 = (FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress;
  }
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
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_78;
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = bVar5;
  FGeometryScriptVectorList::Reset(this_00,0);
  if ((this_00->List).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar2 = (this_00->List).Object;
  *puVar4 = '\0';
  if (this != (UDynamicMesh *)0x0) {
    local_50 = local_res18;
    local_58 = &local_50;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexPositions'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_48 = pTVar2;
    local_40 = puVar4;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_60);
  }
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.List.SharedReferenceCount.ReferenceController);
  return;
}

// execGetAllVertexPositionsAtEdges @ 14ce90c70

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetAllVertexPositionsAtEdges
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  uchar *puVar2;
  FProperty *pFVar3;
  UDynamicMesh *this;
  FGeometryScriptVectorList *pFVar4;
  FGeometryScriptVectorList *this_00;
  uchar *puVar5;
  undefined1 local_res10 [8];
  UDynamicMesh *local_res18 [2];
  FGeometryScriptVectorList local_b8;
  FGeometryScriptVectorList local_a8;
  uchar local_98 [8];
  undefined8 local_90;
  TReferenceControllerBase<1> *pTStack_88;
  code *local_80;
  uchar **local_78;
  undefined1 *local_70;
  code **local_68;
  code *local_60;
  undefined1 **local_58;
  uchar *local_50;
  FGeometryScriptVectorList *local_48;
  FGeometryScriptVectorList *local_40;
  
  local_res18[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_98[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_90 = 0;
  pTStack_88 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar5 = local_98;
  if (puVar2 != (uchar *)0x0) {
    puVar5 = puVar2;
  }
  local_a8.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_a8.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pFVar4 = (FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  this_00 = &local_a8;
  if (pFVar4 != (FGeometryScriptVectorList *)0x0) {
    this_00 = pFVar4;
  }
  local_b8.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_b8.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  this = local_res18[0];
  pFVar4 = &local_b8;
  if ((FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptVectorList *)0x0) {
    pFVar4 = (FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGeometryScriptVectorList::Reset(this_00,0);
  FGeometryScriptVectorList::Reset(pFVar4,0);
  if ((((*puVar5 == '\x02') || (*puVar5 == '\0')) || (*(longlong *)(puVar5 + 8) == 0)) ||
     (*(int *)(*(longlong *)(puVar5 + 8) + 8) < 1)) {
    local_78 = &local_50;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexPositionsAtEdges'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_50 = puVar5;
    local_48 = this_00;
    local_40 = pFVar4;
    if (this != (UDynamicMesh *)0x0) {
      local_70 = local_res10;
      local_68 = &local_80;
      local_58 = &local_70;
      local_60 = UE::Core::Private::Function::
                 TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
      UDynamicMesh::ProcessMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_60);
    }
  }
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_88);
  return;
}

// execGetHasMaterialIDs @ 14ce90ed0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetHasMaterialIDs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UDynamicMesh *local_res20;
  code *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
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
  local_res10[0] = 0;
  local_40 = local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetHasMaterialIDs'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UDynamicMesh *)0x0) {
    local_38 = local_res18;
    local_30 = &local_48;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_res20,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28);
    *(undefined1 *)param_3 = local_res18[0];
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetHasPolygroups @ 14ce90fc0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetHasPolygroups
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UDynamicMesh *local_res20;
  code *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
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
  local_res10[0] = 0;
  local_40 = local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetHasPolygroups'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UDynamicMesh *)0x0) {
    local_38 = local_res18;
    local_30 = &local_48;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_res20,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28);
    *(undefined1 *)param_3 = local_res18[0];
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetHasTriangleIDGaps @ 14ce910b0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetHasTriangleIDGaps
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UDynamicMesh *local_res20;
  code *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
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
  local_res10[0] = 0;
  local_40 = local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetHasTriangleIDGaps'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UDynamicMesh *)0x0) {
    local_38 = local_res18;
    local_30 = &local_48;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_res20,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28);
    *(undefined1 *)param_3 = local_res18[0];
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetHasTriangleNormals @ 14ce911a0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetHasTriangleNormals
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UDynamicMesh *local_res20;
  code *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
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
  local_res10[0] = 0;
  local_40 = local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetHasTriangleNormals'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UDynamicMesh *)0x0) {
    local_38 = local_res18;
    local_30 = &local_48;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_res20,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28);
    *(undefined1 *)param_3 = local_res18[0];
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetHasVertexColors @ 14ce91290

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetHasVertexColors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UDynamicMesh *local_res20;
  code *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
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
  local_res10[0] = 0;
  local_40 = local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetHasVertexColors'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UDynamicMesh *)0x0) {
    local_38 = local_res18;
    local_30 = &local_48;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_res20,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28);
    *(undefined1 *)param_3 = local_res18[0];
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetHasVertexIDGaps @ 14ce91380

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetHasVertexIDGaps
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UDynamicMesh *local_res20;
  code *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
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
  local_res10[0] = 0;
  local_40 = local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetHasVertexIDGaps'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UDynamicMesh *)0x0) {
    local_38 = local_res18;
    local_30 = &local_48;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_res20,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28);
    *(undefined1 *)param_3 = local_res18[0];
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetInterpolatedTriangleNormal @ 14ce91470

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetInterpolatedTriangleNormal
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  uchar *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uchar local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  UDynamicMesh *local_e8;
  code *local_e0;
  undefined4 **local_d8;
  undefined4 *local_d0;
  code **local_c8;
  code *local_c0;
  undefined4 **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 *local_98;
  uchar *local_90;
  undefined8 *local_88;
  uchar local_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_e8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar4 = local_res10;
  if (puVar3 != (uchar *)0x0) {
    puVar4 = puVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_80);
  }
  pUVar2 = local_e8;
  puVar3 = local_80;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  local_68 = local_b0;
  uStack_60 = uStack_a8;
  local_58 = local_a0;
  local_res20[0] = local_res18[0];
  local_98 = local_res20;
  local_88 = &local_68;
  local_d8 = &local_98;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e0 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormal'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  *puVar4 = '\0';
  if (local_e8 == (UDynamicMesh *)0x0) {
    uVar5 = SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z,0);
    uVar6 = (undefined4)
            ((ulonglong)UE::Math::TVector<double>::ZAxisVector.field0_0x0._16_8_ >> 0x20);
    local_48 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_;
    uStack_44 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_;
    uStack_40 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_;
    uStack_3c = UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_;
  }
  else {
    local_d0 = &local_48;
    local_c8 = &local_e0;
    local_b8 = &local_d0;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<UE::Math::TVector<double>_>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_90 = puVar4;
    UDynamicMesh::ProcessMesh
              (local_e8,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_c0
              );
    uVar5 = (undefined4)local_38;
    uVar6 = (undefined4)((ulonglong)local_38 >> 0x20);
  }
  *(undefined4 *)puVar3 = local_48;
  *(undefined4 *)(puVar3 + 4) = uStack_44;
  *(undefined4 *)(puVar3 + 8) = uStack_40;
  *(undefined4 *)(puVar3 + 0xc) = uStack_3c;
  *(ulonglong *)(puVar3 + 0x10) = CONCAT44(uVar6,uVar5);
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execGetInterpolatedTriangleNormalTangents @ 14ce916b0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetInterpolatedTriangleNormalTangents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  FProperty *pFVar2;
  UDynamicMesh *pUVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_128 [2];
  UDynamicMesh *local_120;
  code *local_118;
  undefined4 **local_110;
  uchar *local_108;
  code **local_100;
  code *local_f8;
  undefined1 **local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 *local_d0;
  uchar *local_c8;
  undefined8 *local_c0;
  uchar *local_b8;
  uchar *local_b0;
  uchar local_a8 [24];
  uchar local_90 [24];
  uchar local_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_120 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
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
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar4 = local_res10;
  if (puVar1 != (uchar *)0x0) {
    puVar4 = puVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar6 = local_a8;
  if (puVar1 != (uchar *)0x0) {
    puVar6 = puVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_90);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar5 = local_90;
  if (puVar1 != (uchar *)0x0) {
    puVar5 = puVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  pUVar3 = local_120;
  local_b0 = local_78;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_b0 = param_2->MostRecentPropertyAddress;
  }
  local_58 = local_e8;
  uStack_50 = uStack_e0;
  local_48 = local_d8;
  local_128[0] = local_res20[0];
  local_d0 = local_128;
  local_c0 = &local_58;
  local_110 = &local_d0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_118 = UE::Core::Private::Function::
              TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormalTangents'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
              ::Call;
  if (local_120 == (UDynamicMesh *)0x0) {
    *puVar4 = '\0';
  }
  else {
    local_108 = local_res18;
    local_100 = &local_118;
    local_f0 = &local_108;
    local_f8 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_c8 = puVar6;
    local_b8 = puVar5;
    UDynamicMesh::ProcessMesh
              (local_120,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_f8);
    *puVar4 = local_res18[0];
  }
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execGetInterpolatedTrianglePosition @ 14ce91980

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetInterpolatedTrianglePosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  FProperty *pFVar2;
  UDynamicMesh *pUVar3;
  uchar *puVar4;
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_d8 [2];
  UDynamicMesh *local_d0;
  code *local_c8;
  undefined4 **local_c0;
  uchar *local_b8;
  code **local_b0;
  code *local_a8;
  undefined1 **local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 *local_80;
  double *local_78;
  undefined8 *local_70;
  double local_68 [4];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_d0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
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
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar4 = local_res10;
  if (puVar1 != (uchar *)0x0) {
    puVar4 = puVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  pUVar3 = local_d0;
  local_78 = local_68;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    local_78 = (double *)param_2->MostRecentPropertyAddress;
  }
  local_48 = local_98;
  uStack_40 = uStack_90;
  local_38 = local_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8[0] = local_res20[0];
  local_80 = local_d8;
  local_70 = &local_48;
  local_c0 = &local_80;
  local_c8 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTrianglePosition'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  *local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_78[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_78[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (local_d0 == (UDynamicMesh *)0x0) {
    *puVar4 = '\0';
  }
  else {
    local_b8 = local_res18;
    local_b0 = &local_c8;
    local_a0 = &local_b8;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_d0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_a8
              );
    *puVar4 = local_res18[0];
  }
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execGetInterpolatedTriangleUV @ 14ce91bb0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetInterpolatedTriangleUV
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  FProperty *pFVar2;
  UDynamicMesh *pUVar3;
  uchar *puVar4;
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_e8 [2];
  undefined4 local_e0 [2];
  undefined4 local_d8 [2];
  UDynamicMesh *local_d0;
  TVector2<double>_u_0 local_c8;
  code *local_b8;
  undefined4 **local_b0;
  code *local_a8;
  undefined4 **local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 *local_80;
  TVector2<double>_u_0 *local_78;
  undefined8 *local_70;
  undefined4 *local_68;
  uchar *local_60;
  uchar *local_58;
  code **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_d0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_e8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
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
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar4 = local_res10;
  if (puVar1 != (uchar *)0x0) {
    puVar4 = puVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  pUVar3 = local_d0;
  local_80 = local_e0;
  local_78 = &local_c8;
  if ((TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector2<double>_u_0 *)0x0) {
    local_78 = (TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  local_48 = local_98;
  uStack_40 = uStack_90;
  local_38 = local_88;
  local_res18[0] = '\0';
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e0[0] = local_res20[0];
  local_d8[0] = local_e8[0];
  local_78->_s_0 = (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  *puVar4 = '\0';
  local_70 = &local_48;
  local_b0 = &local_80;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleUV'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&>
             ::Call;
  if (local_d0 == (UDynamicMesh *)0x0) {
    *puVar4 = '\0';
  }
  else {
    local_68 = local_d8;
    local_58 = local_res18;
    local_50 = &local_b8;
    local_a0 = &local_68;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshUVSetQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_60 = puVar4;
    UDynamicMesh::ProcessMesh
              (local_d0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_a8
              );
    *puVar4 = local_res18[0];
  }
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execGetInterpolatedTriangleVertexColor @ 14ce91e30

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetInterpolatedTriangleVertexColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  uchar *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uchar local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  UDynamicMesh *local_108;
  uchar local_100 [24];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  code *local_d8;
  undefined4 **local_d0;
  undefined4 *local_c8;
  code **local_c0;
  code *local_b8;
  undefined4 **local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined8 *local_80;
  uchar *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_108 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar4 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar3 = local_res10;
  if (puVar4 != (uchar *)0x0) {
    puVar3 = puVar4;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_100);
  }
  pUVar2 = local_108;
  puVar4 = local_100;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  local_68 = local_e8;
  uStack_64 = uStack_e4;
  uStack_60 = uStack_e0;
  uStack_5c = uStack_dc;
  local_48 = local_a8;
  uStack_40 = uStack_a0;
  local_38 = local_98;
  local_res20[0] = local_res18[0];
  local_90 = local_res20;
  local_88 = &local_68;
  local_80 = &local_48;
  local_d0 = &local_90;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleVertexColor'::__l2::<lambda_1>,FLinearColor,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  *puVar3 = '\0';
  uVar5 = uStack_e4;
  uVar6 = uStack_e0;
  uVar7 = uStack_dc;
  if (local_108 != (UDynamicMesh *)0x0) {
    local_c8 = &local_58;
    local_c0 = &local_d8;
    local_b0 = &local_c8;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<FLinearColor>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_78 = puVar3;
    UDynamicMesh::ProcessMesh
              (local_108,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_b8);
    local_e8 = local_58;
    uVar5 = uStack_54;
    uVar6 = uStack_50;
    uVar7 = uStack_4c;
  }
  *(undefined4 *)puVar4 = local_e8;
  *(undefined4 *)(puVar4 + 4) = uVar5;
  *(undefined4 *)(puVar4 + 8) = uVar6;
  *(undefined4 *)(puVar4 + 0xc) = uVar7;
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execGetIsClosedMesh @ 14ce920a0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetIsClosedMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UDynamicMesh *local_res20;
  code *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
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
  local_res10[0] = 0;
  local_40 = local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetIsClosedMesh'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UDynamicMesh *)0x0) {
    local_38 = local_res18;
    local_30 = &local_48;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_res20,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28);
    *(undefined1 *)param_3 = local_res18[0];
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execGetIsDenseMesh @ 14ce92190

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetIsDenseMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UDynamicMesh *local_res20;
  code *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
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
  local_res10[0] = 0;
  local_40 = local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetIsDenseMesh'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UDynamicMesh *)0x0) {
    local_38 = local_res18;
    local_30 = &local_48;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_res20,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28);
    *(undefined1 *)param_3 = local_res18[0];
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execGetMeshBoundingBox @ 14ce92280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetMeshBoundingBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  UDynamicMesh *local_90;
  code *local_88;
  undefined1 *local_80;
  undefined4 *local_78;
  code **local_70;
  code *local_68;
  undefined4 **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined4 uStack_27;
  undefined2 uStack_23;
  undefined1 uStack_21;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98[0] = 0;
  local_28 = 0;
  local_80 = local_98;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetMeshBoundingBox'::__l2::<lambda_1>,UE::Math::TBox<double>,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  uStack_27 = 0;
  uStack_23 = 0;
  uStack_21 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  if (local_90 != (UDynamicMesh *)0x0) {
    local_28 = 0;
    local_78 = &local_58;
    local_70 = &local_88;
    local_60 = &local_78;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<UE::Math::TBox<double>_>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_90,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_68
              );
    uVar2 = local_38;
    uVar3 = uStack_34;
    uVar4 = uStack_30;
    uVar5 = uStack_2c;
    uVar6 = local_48;
    uVar7 = uStack_44;
    uVar8 = uStack_40;
    uVar9 = uStack_3c;
    uVar10 = local_58;
    uVar11 = uStack_54;
    uVar12 = uStack_50;
    uVar13 = uStack_4c;
  }
  *(undefined4 *)param_3 = uVar10;
  *(undefined4 *)((longlong)param_3 + 4) = uVar11;
  *(undefined4 *)((longlong)param_3 + 8) = uVar12;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar13;
  *(undefined4 *)((longlong)param_3 + 0x10) = uVar6;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar7;
  *(undefined4 *)((longlong)param_3 + 0x18) = uVar8;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar9;
  *(undefined4 *)((longlong)param_3 + 0x20) = uVar2;
  *(undefined4 *)((longlong)param_3 + 0x24) = uVar3;
  *(undefined4 *)((longlong)param_3 + 0x28) = uVar4;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uVar5;
  *(ulonglong *)((longlong)param_3 + 0x30) =
       CONCAT17(uStack_21,CONCAT25(uStack_23,CONCAT41(uStack_27,local_28)));
  return;
}

// execGetMeshHasAttributeSet @ 14ce923b0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetMeshHasAttributeSet
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UDynamicMesh *local_res20;
  code *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
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
  local_res10[0] = 0;
  local_40 = local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetMeshHasAttributeSet'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UDynamicMesh *)0x0) {
    local_38 = local_res18;
    local_30 = &local_48;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_res20,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28);
    *(undefined1 *)param_3 = local_res18[0];
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execGetMeshInfoString @ 14ce92650

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetMeshInfoString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  UDynamicMesh *this;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  undefined1 local_res10 [8];
  UDynamicMesh *local_res18 [2];
  FScriptContainerElement *local_98;
  undefined8 local_90;
  code *local_88;
  undefined1 *local_80;
  FScriptContainerElement **local_78;
  code **local_70;
  code *local_68;
  void ***local_60;
  FString local_58;
  undefined1 local_48 [16];
  
  local_res18[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  this = local_res18[0];
  local_res10[0] = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_80 = local_res10;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetMeshInfoString'::__l2::<lambda_1>,FString,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  pFVar3 = ::FString::FString(&local_58,L"Mesh is Null");
  if (this == (UDynamicMesh *)0x0) {
    pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar6 = (pFVar3->Data).ArrayNum;
    iVar5 = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  else {
    local_78 = &local_98;
    local_98 = (FScriptContainerElement *)0x0;
    local_70 = &local_88;
    local_90 = 0;
    local_60 = &local_78;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<FString>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_68);
    pFVar4 = local_98;
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    iVar6 = (int)local_90;
    iVar5 = local_90._4_4_;
    local_98 = (FScriptContainerElement *)0x0;
    local_90 = 0;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  if (param_3 == local_48) {
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  else {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = pFVar4;
    *(int *)((longlong)param_3 + 8) = iVar6;
    *(int *)((longlong)param_3 + 0xc) = iVar5;
  }
  return;
}

// execGetMeshUVArea @ 14ce939f0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetMeshUVArea
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  uchar local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_78 [2];
  UDynamicMesh *local_70;
  undefined8 local_68;
  code *local_60;
  undefined1 *local_58;
  code *local_50;
  undefined4 **local_48;
  undefined4 *local_40;
  uchar *local_38;
  undefined8 *local_30;
  code **local_28;
  
  local_70 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_38 = param_2->MostRecentPropertyAddress;
  }
  local_68 = 0;
  local_58 = local_res18;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetMeshUVArea'::__l2::<lambda_1>,double,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78[0] = local_res20[0];
  *local_38 = '\0';
  uVar2 = 0;
  if (local_70 != (UDynamicMesh *)0x0) {
    local_40 = local_78;
    local_30 = &local_68;
    local_28 = &local_60;
    local_48 = &local_40;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshUVSetQuery<double>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_70,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_50
              );
    uVar2 = local_68;
  }
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execGetMeshVolumeArea @ 14ce94550

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetMeshVolumeArea
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  uchar *puVar4;
  UDynamicMesh *this;
  uchar *puVar5;
  undefined1 local_res10 [16];
  uchar local_res20 [8];
  uchar local_68 [8];
  UDynamicMesh *local_60;
  uchar *local_58;
  uchar *local_50;
  code *local_48;
  uchar **local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined1 **local_20;
  
  local_60 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  local_68[0] = '\0';
  local_68[1] = '\0';
  local_68[2] = '\0';
  local_68[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar5 = local_res20;
  if (puVar1 != (uchar *)0x0) {
    puVar5 = puVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  this = local_60;
  local_58 = local_68;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_58 = param_2->MostRecentPropertyAddress;
  }
  local_40 = &local_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = local_58 + 1;
  puVar3 = local_58 + 2;
  puVar4 = local_58 + 3;
  local_50 = puVar5;
  local_58[0] = '\0';
  *puVar1 = '\0';
  *puVar3 = '\0';
  *puVar4 = '\0';
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetMeshVolumeArea'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  if (this != (UDynamicMesh *)0x0) {
    local_38 = local_res10;
    local_30 = &local_48;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28);
  }
  return;
}

// execGetMeshVolumeAreaCenter @ 14ce946c0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetMeshVolumeAreaCenter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  FProperty *pFVar2;
  UDynamicMesh *this;
  double *pdVar3;
  uchar *puVar4;
  uchar *puVar5;
  undefined1 local_res10 [8];
  uchar local_res20 [8];
  uchar local_88 [8];
  UDynamicMesh *local_80;
  code *local_78;
  uchar **local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  undefined1 **local_50;
  uchar *local_48;
  uchar *local_40;
  double *local_38;
  double local_30 [3];
  
  local_80 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar4 = local_res20;
  if (puVar1 != (uchar *)0x0) {
    puVar4 = puVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar5 = local_88;
  if (puVar1 != (uchar *)0x0) {
    puVar5 = puVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_30,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_30);
  }
  this = local_80;
  pdVar3 = local_30;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = puVar5;
  local_40 = puVar4;
  local_38 = pdVar3;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar4[0] = '\0';
  puVar4[1] = '\0';
  puVar4[2] = '\0';
  puVar4[3] = '\0';
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetMeshVolumeAreaCenter'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  *pdVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pdVar3[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pdVar3[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (this != (UDynamicMesh *)0x0) {
    local_68 = local_res10;
    local_60 = &local_78;
    local_50 = &local_68;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_70 = &local_48;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_58);
  }
  return;
}

// execGetNumConnectedComponents @ 14ce948b0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetNumConnectedComponents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  UDynamicMesh *local_res20;
  code *local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  code **local_20;
  code *local_18;
  undefined4 **local_10;
  
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
  local_res10[0] = 0;
  local_30 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetNumConnectedComponents'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (local_res20 != (UDynamicMesh *)0x0) {
    local_28 = local_res18;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_res20,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
    *(undefined4 *)param_3 = local_res18[0];
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumExtendedPolygroupLayers @ 14ce949a0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetNumExtendedPolygroupLayers
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  UDynamicMesh *local_res20;
  code *local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  code **local_20;
  code *local_18;
  undefined4 **local_10;
  
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
  local_res10[0] = 0;
  local_30 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetNumExtendedPolygroupLayers'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (local_res20 != (UDynamicMesh *)0x0) {
    local_28 = local_res18;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_res20,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
    *(undefined4 *)param_3 = local_res18[0];
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumOpenBorderEdges @ 14ce94a90

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetNumOpenBorderEdges
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  UDynamicMesh *local_res20;
  code *local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  code **local_20;
  code *local_18;
  undefined4 **local_10;
  
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
  local_res10[0] = 0;
  local_30 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderEdges'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (local_res20 != (UDynamicMesh *)0x0) {
    local_28 = local_res18;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_res20,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
    *(undefined4 *)param_3 = local_res18[0];
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumOpenBorderLoops @ 14ce94b80

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetNumOpenBorderLoops
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar local_res10 [8];
  undefined4 local_res18 [2];
  UDynamicMesh *local_res20;
  uchar *local_58;
  code *local_50;
  uchar **local_48;
  undefined4 *local_40;
  code **local_38;
  code *local_30;
  undefined4 **local_28;
  
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
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_58 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_58 = param_2->MostRecentPropertyAddress;
  }
  local_48 = &local_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderLoops'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (local_res20 != (UDynamicMesh *)0x0) {
    local_40 = local_res18;
    local_38 = &local_50;
    local_28 = &local_40;
    local_30 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_res20,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_30);
    *(undefined4 *)param_3 = local_res18[0];
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumTriangleIDs @ 14ce94db0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetNumTriangleIDs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  UDynamicMesh *local_res20;
  code *local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  code **local_20;
  code *local_18;
  undefined4 **local_10;
  
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
  local_res10[0] = 0;
  local_30 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetNumTriangleIDs'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (local_res20 != (UDynamicMesh *)0x0) {
    local_28 = local_res18;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_res20,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
    *(undefined4 *)param_3 = local_res18[0];
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumUVIslands @ 14ce94ea0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetNumUVIslands
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_78 [2];
  undefined4 local_70 [2];
  UDynamicMesh *local_68;
  code *local_60;
  undefined1 *local_58;
  code *local_50;
  undefined4 **local_48;
  undefined4 *local_40;
  uchar *local_38;
  undefined4 *local_30;
  code **local_28;
  
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
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_78[0] = 0xffffffff;
  local_38 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_38 = param_2->MostRecentPropertyAddress;
  }
  local_58 = local_res18;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVIslands'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_70[0] = local_res20[0];
  *local_38 = '\0';
  if (local_68 == (UDynamicMesh *)0x0) {
    *(undefined4 *)param_3 = 0xffffffff;
  }
  else {
    local_40 = local_70;
    local_30 = local_78;
    local_28 = &local_60;
    local_48 = &local_40;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshUVSetQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_68,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_50
              );
    *(undefined4 *)param_3 = local_78[0];
  }
  return;
}

// execGetNumUVSets @ 14ce95020

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetNumUVSets
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  UDynamicMesh *local_res20;
  code *local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  code **local_20;
  code *local_18;
  undefined4 **local_10;
  
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
  local_res10[0] = 0;
  local_30 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVSets'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (local_res20 != (UDynamicMesh *)0x0) {
    local_28 = local_res18;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_res20,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
    *(undefined4 *)param_3 = local_res18[0];
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumVertexIDs @ 14ce95110

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetNumVertexIDs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  UDynamicMesh *local_res20;
  code *local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  code **local_20;
  code *local_18;
  undefined4 **local_10;
  
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
  local_res10[0] = 0;
  local_30 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetNumVertexIDs'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (local_res20 != (UDynamicMesh *)0x0) {
    local_28 = local_res18;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_res20,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
    *(undefined4 *)param_3 = local_res18[0];
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetTriangleFaceNormal @ 14ce95cc0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetTriangleFaceNormal
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uchar local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  UDynamicMesh *local_78;
  uchar *local_70;
  undefined4 *local_68;
  code *local_60;
  uchar **local_58;
  undefined4 *local_50;
  code **local_48;
  code *local_40;
  undefined4 **local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  double local_20;
  
  local_78 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_70 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_70 = param_2->MostRecentPropertyAddress;
  }
  local_res20[0] = local_res18[0];
  local_68 = local_res20;
  local_58 = &local_70;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleFaceNormal'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  if (local_78 != (UDynamicMesh *)0x0) {
    local_50 = &local_30;
    local_48 = &local_60;
    local_38 = &local_50;
    local_40 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<UE::Math::TVector<double>_>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_78,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_40
              );
    uVar2 = local_20;
    uVar3 = local_30;
    uVar4 = uStack_2c;
    uVar5 = uStack_28;
    uVar6 = uStack_24;
  }
  *(undefined4 *)param_3 = uVar3;
  *(undefined4 *)((longlong)param_3 + 4) = uVar4;
  *(undefined4 *)((longlong)param_3 + 8) = uVar5;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar2;
  return;
}

// execGetTriangleIndices @ 14ce95e50

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetTriangleIndices
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uchar local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  UDynamicMesh *local_78;
  undefined8 local_70;
  int local_68;
  uchar *local_60;
  undefined4 *local_58;
  code *local_50;
  uchar **local_48;
  undefined8 *local_40;
  code **local_38;
  code *local_30;
  undefined8 **local_28;
  
  local_78 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_60 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_60 = param_2->MostRecentPropertyAddress;
  }
  local_res20[0] = local_res18[0];
  local_58 = local_res20;
  local_48 = &local_60;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleIndices'::__l2::<lambda_1>,UE::Math::TIntVector3<int>,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = UE::Math::TIntVector3<int>::NoneValue.field0_0x0._0_8_;
  uVar2 = UE::Math::TIntVector3<int>::NoneValue.field0_0x0._s_0.Z;
  if (local_78 != (UDynamicMesh *)0x0) {
    local_40 = &local_70;
    local_38 = &local_50;
    local_28 = &local_40;
    local_30 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<UE::Math::TIntVector3<int>_>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_78,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_30
              );
    uVar3 = local_70;
    uVar2 = local_68;
  }
  *(undefined8 *)param_3 = uVar3;
  *(undefined4 *)((longlong)param_3 + 8) = uVar2;
  return;
}

// execGetTriangleNormalTangents @ 14ce95fe0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetTriangleNormalTangents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  double *pdVar4;
  double *pdVar5;
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_188 [2];
  UDynamicMesh *local_180;
  code *local_178;
  undefined4 **local_170;
  uchar *local_168;
  code **local_160;
  code *local_158;
  undefined1 **local_150;
  undefined4 *local_148;
  double *local_140;
  double *local_138;
  double *local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  double dStack_68;
  double local_60;
  double local_58;
  double dStack_50;
  double local_48;
  
  local_180 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_e8 = local_100;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pdVar4 = &local_128;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar4 = (double *)param_2->MostRecentPropertyAddress;
  }
  local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_98 = local_b0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pdVar5 = &local_d8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  }
  local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48 = local_60;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pUVar2 = local_180;
  local_130 = &local_88;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    local_130 = (double *)param_2->MostRecentPropertyAddress;
  }
  local_188[0] = local_res20[0];
  local_148 = local_188;
  local_170 = &local_148;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_178 = UE::Core::Private::Function::
              TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormalTangents'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
              ::Call;
  if (local_180 == (UDynamicMesh *)0x0) {
    *puVar3 = '\0';
  }
  else {
    local_168 = local_res18;
    local_160 = &local_178;
    local_150 = &local_168;
    local_158 = UE::Core::Private::Function::
                TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    local_140 = pdVar4;
    local_138 = pdVar5;
    UDynamicMesh::ProcessMesh
              (local_180,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_158);
    *puVar3 = local_res18[0];
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execGetTriangleNormals @ 14ce962f0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetTriangleNormals
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_e8 [2];
  UDynamicMesh *local_e0;
  code *local_d8;
  undefined4 **local_d0;
  uchar *local_c8;
  code **local_c0;
  code *local_b8;
  undefined1 **local_b0;
  undefined4 *local_a8;
  uchar *local_a0;
  uchar *local_98;
  uchar *local_90;
  uchar local_88 [24];
  uchar local_70 [24];
  uchar local_58 [32];
  
  local_e0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar4 = local_88;
  if (puVar3 != (uchar *)0x0) {
    puVar4 = puVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar6 = local_70;
  if (puVar3 != (uchar *)0x0) {
    puVar6 = puVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar5 = local_58;
  if (puVar3 != (uchar *)0x0) {
    puVar5 = puVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar2 = local_e0;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  local_e8[0] = local_res20[0];
  local_a8 = local_e8;
  local_d0 = &local_a8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormals'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (local_e0 == (UDynamicMesh *)0x0) {
    *puVar3 = '\0';
  }
  else {
    local_c8 = local_res18;
    local_c0 = &local_d8;
    local_b0 = &local_c8;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_a0 = puVar4;
    local_98 = puVar6;
    local_90 = puVar5;
    UDynamicMesh::ProcessMesh
              (local_e0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_b8
              );
    *puVar3 = local_res18[0];
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execGetTrianglePositions @ 14ce96750

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetTrianglePositions
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar local_res10 [16];
  uchar local_res20 [8];
  undefined4 local_e8 [2];
  undefined4 local_e0 [2];
  UDynamicMesh *local_d8;
  code *local_d0;
  uchar **local_c8;
  uchar *local_c0;
  code **local_b8;
  code *local_b0;
  undefined1 **local_a8;
  uchar *local_a0;
  undefined4 *local_98;
  uchar *local_90;
  uchar *local_88;
  uchar *local_80;
  uchar local_78 [24];
  uchar local_60 [24];
  uchar local_48 [32];
  
  local_d8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_e8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar3 = local_res10;
  if (puVar1 != (uchar *)0x0) {
    puVar3 = puVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar5 = local_78;
  if (puVar1 != (uchar *)0x0) {
    puVar5 = puVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_60,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_60);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar4 = local_60;
  if (puVar1 != (uchar *)0x0) {
    puVar4 = puVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_80 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_80 = param_2->MostRecentPropertyAddress;
  }
  local_e0[0] = local_e8[0];
  local_98 = local_e0;
  local_c8 = &local_a0;
  local_d0 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetTrianglePositions'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_d8 == (UDynamicMesh *)0x0) {
    *puVar3 = '\0';
  }
  else {
    local_c0 = local_res20;
    local_b8 = &local_d0;
    local_a8 = &local_c0;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_a0 = puVar3;
    local_90 = puVar5;
    local_88 = puVar4;
    UDynamicMesh::ProcessMesh
              (local_d8,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_b0
              );
    *puVar3 = local_res20[0];
  }
  return;
}

// execGetTriangleUVs @ 14ce969c0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetTriangleUVs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar local_res10 [8];
  uchar local_res20 [8];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0 [2];
  undefined4 local_c8 [2];
  UDynamicMesh *local_c0;
  uchar local_b8 [16];
  uchar local_a8 [16];
  uchar local_98 [16];
  code *local_88;
  undefined4 **local_80;
  code *local_78;
  undefined4 **local_70;
  undefined4 *local_68;
  uchar *local_60;
  uchar *local_58;
  uchar *local_50;
  undefined4 *local_48;
  uchar *local_40;
  uchar *local_38;
  code **local_30;
  
  local_c0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_d4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d4);
  }
  local_d8 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar3 = local_b8;
  if (puVar2 != (uchar *)0x0) {
    puVar3 = puVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar5 = local_a8;
  if (puVar2 != (uchar *)0x0) {
    puVar5 = puVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar4 = local_98;
  if (puVar2 != (uchar *)0x0) {
    puVar4 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  local_res20[0] = '\0';
  local_d0[0] = local_d8;
  local_68 = local_d0;
  local_80 = &local_68;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleUVs'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8[0] = local_d4;
  *puVar2 = '\0';
  if (local_c0 == (UDynamicMesh *)0x0) {
    *puVar2 = '\0';
  }
  else {
    local_48 = local_c8;
    local_38 = local_res20;
    local_30 = &local_88;
    local_70 = &local_48;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshUVSetQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_60 = puVar3;
    local_58 = puVar5;
    local_50 = puVar4;
    local_40 = puVar2;
    UDynamicMesh::ProcessMesh
              (local_c0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_78
              );
    *puVar2 = local_res20[0];
  }
  return;
}

// execGetTriangleVertexColors @ 14ce96c80

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetTriangleVertexColors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_c8 [2];
  UDynamicMesh *local_c0;
  uchar local_b8 [16];
  uchar local_a8 [16];
  uchar local_98 [16];
  code *local_88;
  undefined4 **local_80;
  uchar *local_78;
  code **local_70;
  code *local_68;
  undefined1 **local_60;
  undefined4 *local_58;
  uchar *local_50;
  uchar *local_48;
  uchar *local_40;
  
  local_c0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar4 = local_b8;
  if (puVar3 != (uchar *)0x0) {
    puVar4 = puVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar6 = local_a8;
  if (puVar3 != (uchar *)0x0) {
    puVar6 = puVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar5 = local_98;
  if (puVar3 != (uchar *)0x0) {
    puVar5 = puVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar2 = local_c0;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  local_c8[0] = local_res20[0];
  local_58 = local_c8;
  local_80 = &local_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleVertexColors'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (local_c0 == (UDynamicMesh *)0x0) {
    *puVar3 = '\0';
  }
  else {
    local_78 = local_res18;
    local_70 = &local_88;
    local_60 = &local_78;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_50 = puVar4;
    local_48 = puVar6;
    local_40 = puVar5;
    UDynamicMesh::ProcessMesh
              (local_c0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_68
              );
    *puVar3 = local_res18[0];
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execGetUVSetBoundingBox @ 14ce97120

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetUVSetBoundingBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  undefined8 uVar4;
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_b8 [2];
  UDynamicMesh *local_b0;
  uchar *local_a8;
  code *local_a0;
  uchar **local_98;
  code *local_90;
  undefined4 **local_88;
  undefined4 *local_80;
  uchar *local_78;
  undefined8 *local_70;
  code **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_b0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
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
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  local_res18[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar3 = local_res10;
  if (puVar1 != (uchar *)0x0) {
    puVar3 = puVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  uStack_50._0_4_ = 0;
  uStack_50._4_4_ = 0;
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  uStack_40._0_4_ = 0;
  uStack_40._4_4_ = 0;
  local_a8 = local_res18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_a8 = param_2->MostRecentPropertyAddress;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_98 = &local_a8;
  local_a0 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetUVSetBoundingBox'::__l2::<lambda_1>,UE::Math::TBox2<double>,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_&>
             ::Call;
  local_60 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = 0;
  local_b8[0] = local_res20[0];
  *puVar3 = '\0';
  local_48 = 0;
  uStack_40 = 0;
  uVar4 = 0;
  if (local_b0 != (UDynamicMesh *)0x0) {
    local_80 = local_b8;
    local_70 = &local_58;
    local_68 = &local_a0;
    local_88 = &local_80;
    local_90 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshUVSetQuery<UE::Math::TBox2<double>_>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_78 = puVar3;
    UDynamicMesh::ProcessMesh
              (local_b0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_90
              );
    uVar4 = local_38;
  }
  *(undefined4 *)param_3 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_3 + 4) = local_58._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_50._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x10) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_3 + 0x14) = local_48._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x18) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_40._4_4_;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar4;
  return;
}

// execGetVertexConnectedTriangles @ 14ce97320

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetVertexConnectedTriangles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  UDynamicMesh *local_78;
  void *local_70;
  undefined8 local_68;
  undefined4 *local_60;
  void **local_58;
  code *local_50;
  undefined4 **local_48;
  undefined1 *local_40;
  code **local_38;
  code *local_30;
  undefined1 **local_28;
  
  local_78 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_70 = (void *)0x0;
  local_68 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  pUVar2 = local_78;
  local_58 = &local_70;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    local_58 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_res18[0] = local_res10[0];
  local_60 = local_res18;
  local_48 = &local_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetVertexConnectedTriangles'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (local_78 != (UDynamicMesh *)0x0) {
    local_40 = local_res20;
    local_38 = &local_50;
    local_28 = &local_40;
    local_30 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_78,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_30
              );
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  return;
}

// execGetVertexConnectedVertices @ 14ce974a0

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetVertexConnectedVertices
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  UDynamicMesh *local_78;
  void *local_70;
  undefined8 local_68;
  undefined4 *local_60;
  void **local_58;
  code *local_50;
  undefined4 **local_48;
  undefined1 *local_40;
  code **local_38;
  code *local_30;
  undefined1 **local_28;
  
  local_78 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_70 = (void *)0x0;
  local_68 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  pUVar2 = local_78;
  local_58 = &local_70;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    local_58 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_res18[0] = local_res10[0];
  local_60 = local_res18;
  local_48 = &local_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetVertexConnectedVertices'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (local_78 != (UDynamicMesh *)0x0) {
    local_40 = local_res20;
    local_38 = &local_50;
    local_28 = &local_40;
    local_30 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_78,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_30
              );
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  return;
}

// execGetVertexCount @ 14ce97620

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetVertexCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  UDynamicMesh *local_res20;
  code *local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  code **local_20;
  code *local_18;
  undefined4 **local_10;
  
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
  local_res10[0] = 0;
  local_30 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetVertexCount'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  if (local_res20 != (UDynamicMesh *)0x0) {
    local_28 = local_res18;
    local_20 = &local_38;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_res20,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
    *(undefined4 *)param_3 = local_res18[0];
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetVertexPosition @ 14ce97710

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execGetVertexPosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uchar local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  UDynamicMesh *local_78;
  uchar *local_70;
  undefined4 *local_68;
  code *local_60;
  uchar **local_58;
  undefined4 *local_50;
  code **local_48;
  code *local_40;
  undefined4 **local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  double local_20;
  
  local_78 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_70 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_70 = param_2->MostRecentPropertyAddress;
  }
  local_res20[0] = local_res18[0];
  local_68 = local_res20;
  local_58 = &local_70;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::GetVertexPosition'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  if (local_78 != (UDynamicMesh *)0x0) {
    local_50 = &local_30;
    local_48 = &local_60;
    local_38 = &local_50;
    local_40 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<UE::Math::TVector<double>_>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_78,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_40
              );
    uVar2 = local_20;
    uVar3 = local_30;
    uVar4 = uStack_2c;
    uVar5 = uStack_28;
    uVar6 = uStack_24;
  }
  *(undefined4 *)param_3 = uVar3;
  *(undefined4 *)((longlong)param_3 + 4) = uVar4;
  *(undefined4 *)((longlong)param_3 + 8) = uVar5;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar2;
  return;
}

// execIsValidTriangleID @ 14ce98810

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execIsValidTriangleID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  UDynamicMesh *local_58;
  undefined4 *local_50;
  code *local_48;
  undefined4 **local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined1 **local_20;
  
  local_58 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20[0] = local_res18[0];
  local_50 = local_res20;
  local_40 = &local_50;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::IsValidTriangleID'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_58 != (UDynamicMesh *)0x0) {
    local_38 = local_res10;
    local_30 = &local_48;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_58,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28
              );
    *(undefined1 *)param_3 = local_res10[0];
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsValidVertexID @ 14ce98950

void __cdecl
UGeometryScriptLibrary_MeshQueryFunctions::execIsValidVertexID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  UDynamicMesh *local_58;
  undefined4 *local_50;
  code *local_48;
  undefined4 **local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined1 **local_20;
  
  local_58 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20[0] = local_res18[0];
  local_50 = local_res20;
  local_40 = &local_50;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshQueryFunctions::IsValidVertexID'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_58 != (UDynamicMesh *)0x0) {
    local_38 = local_res10;
    local_30 = &local_48;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_58,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28
              );
    *(undefined1 *)param_3 = local_res10[0];
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

