// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 89

// StaticClass @ 14ce188e0

UClass * __cdecl UGeometryScriptLibrary_MeshPrimitiveFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshPrimitiveFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshPrimitiveFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshPrimitiveFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshPrimitiveFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshPrimitiveFunctions @ 14ce269a0

UGeometryScriptLibrary_MeshPrimitiveFunctions * __thiscall
UGeometryScriptLibrary_MeshPrimitiveFunctions::UGeometryScriptLibrary_MeshPrimitiveFunctions
          (UGeometryScriptLibrary_MeshPrimitiveFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshPrimitiveFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshPrimitiveFunctions @ 14ce269d0

UGeometryScriptLibrary_MeshPrimitiveFunctions * __thiscall
UGeometryScriptLibrary_MeshPrimitiveFunctions::UGeometryScriptLibrary_MeshPrimitiveFunctions
          (UGeometryScriptLibrary_MeshPrimitiveFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshPrimitiveFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshPrimitiveFunctions @ 14ce27370

void __thiscall
UGeometryScriptLibrary_MeshPrimitiveFunctions::~UGeometryScriptLibrary_MeshPrimitiveFunctions
          (UGeometryScriptLibrary_MeshPrimitiveFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshPrimitiveFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ce2a5b0

void __thiscall
`UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleCollisionShapes'::__l2::<lambda_1>::
operator()(void *this,int param_1,FKShapeElem *param_2,FDynamicMesh3 *param_3)

{
  undefined8 *puVar1;
  UDynamicMesh *this_00;
  bool bVar2;
  undefined8 local_res8;
  code *local_b8;
  FDynamicMesh3 **local_b0;
  FDynamicMesh3 *local_a8;
  undefined8 **local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_res8 = **(undefined8 **)((longlong)this + 0x10);
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_68 = *puVar1;
  uStack_60 = puVar1[1];
  local_58 = puVar1[2];
  uStack_50 = puVar1[3];
  local_48 = puVar1[4];
  uStack_40 = puVar1[5];
  local_38 = puVar1[6];
  uStack_30 = puVar1[7];
  local_28 = puVar1[8];
  uStack_20 = puVar1[9];
  local_18 = puVar1[10];
  uStack_10 = puVar1[0xb];
  this_00 = (UDynamicMesh *)**(undefined8 **)this;
  local_98 = &local_68;
  local_90 = &local_res8;
  local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  bVar2 = UDynamicMesh::IsEmpty(this_00);
  if (bVar2) {
    local_a0 = &local_98;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`AppendPrimitiveMesh'::__l5::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
  }
  else {
    `AppendPrimitiveMesh'::__l2::<lambda_1>::operator()(&local_98,param_3);
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`AppendPrimitiveMesh'::__l7::<lambda_3>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
  }
  local_b0 = &local_a8;
  local_a8 = param_3;
  UDynamicMesh::EditMesh
            (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_b8,
             GeneralEdit,Unknown,false);
  return;
}

// operator() @ 14ce2a6b0

bool __thiscall
`UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTriangulatedPolygon'::__l2::<lambda_1>::
operator()(void *this,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          FIndex3i *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  ulonglong uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  TPolygon2<double> *this_00;
  longlong lVar13;
  double *pdVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 local_res8 [8];
  uint local_res10;
  TPolygon2<double> *local_res18;
  TVector2<double>_u_0 local_88 [5];
  
  this_00 = *(TPolygon2<double> **)this;
  uVar16 = (param_2->field0_0x0)._s_0.A;
  uVar15 = 0;
  if ((int)uVar16 < param_1->ArrayNum) {
    uVar15 = ~uVar16 >> 0x1f;
  }
  local_res18 = this_00;
  if ((uVar15 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  uVar15 = (param_2->field0_0x0)._s_0.B;
  pFVar12 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x10;
  uVar16 = 0;
  if ((int)uVar15 < param_1->ArrayNum) {
    uVar16 = ~uVar15 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pFVar6 = (param_1->AllocatorInstance).Data;
  dVar2 = *(double *)pFVar12;
  dVar3 = *(double *)(pFVar6 + (longlong)(int)uVar15 * 0x10 + 8);
  dVar4 = *(double *)(pFVar6 + (longlong)(int)uVar15 * 0x10);
  dVar19 = *(double *)(pFVar12 + 8);
  uVar16 = (param_2->field0_0x0)._s_0.C;
  uVar15 = 0;
  if ((int)uVar16 < param_1->ArrayNum) {
    uVar15 = ~uVar16 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pFVar12 = (param_1->AllocatorInstance).Data;
  dVar4 = (dVar2 + dVar4 + *(double *)(pFVar12 + (longlong)(int)uVar16 * 0x10)) *
          __real_3fd5555555555555;
  dVar2 = (dVar3 + dVar19 + *(double *)(pFVar12 + (longlong)(int)uVar16 * 0x10 + 8)) *
          __real_3fd5555555555555;
  local_88[0]._0_8_ = dVar4;
  local_88[0]._8_8_ = dVar2;
  bVar8 = UE::Geometry::TPolygon2<double>::Contains(this_00,(TVector2<double> *)&local_88[0]._s_0);
  if (!bVar8) {
    return false;
  }
  local_res10 = *(uint *)&this_00[2].Vertices.AllocatorInstance.Data;
  uVar10 = (ulonglong)(int)local_res10;
  plVar17 = *(longlong **)&this_00[1].Vertices.ArrayNum;
  plVar18 = plVar17 + uVar10 * 2;
  do {
    if (*(int *)&this_00[2].Vertices.AllocatorInstance.Data != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar17 == plVar18) {
      return true;
    }
    iVar5 = (int)plVar17[1];
    lVar13 = (longlong)iVar5;
    pdVar14 = (double *)*plVar17;
    if ((iVar5 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    iVar11 = 0;
    if (iVar5 != 0) {
      uVar15 = iVar5 - 1;
      uVar16 = 0;
      if ((int)uVar15 < iVar5) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      uVar16 = 0;
      pdVar1 = pdVar14 + (longlong)(int)uVar15 * 2;
      uVar20 = *(undefined4 *)pdVar1;
      uVar21 = *(undefined4 *)((longlong)pdVar1 + 4);
      uVar22 = *(undefined4 *)(pdVar1 + 1);
      uVar23 = *(undefined4 *)((longlong)pdVar1 + 0xc);
      if (0 < iVar5) {
        do {
          uVar15 = 0;
          if ((int)uVar16 < iVar5) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          dVar3 = pdVar14[1];
          dVar19 = (double)CONCAT44(uVar23,uVar22);
          if (dVar2 < dVar19) {
            if ((dVar3 <= dVar2) &&
               ((*pdVar14 - (double)CONCAT44(uVar21,uVar20)) * (dVar2 - dVar19) -
                (dVar4 - (double)CONCAT44(uVar21,uVar20)) * (dVar3 - dVar19) < 0.0)) {
              iVar11 = iVar11 + -1;
            }
          }
          else if ((dVar2 < dVar3) &&
                  (0.0 < (*pdVar14 - (double)CONCAT44(uVar21,uVar20)) * (dVar2 - dVar19) -
                         (dVar4 - (double)CONCAT44(uVar21,uVar20)) * (dVar3 - dVar19))) {
            iVar11 = iVar11 + 1;
          }
          uVar20 = *(undefined4 *)pdVar14;
          uVar21 = *(undefined4 *)((longlong)pdVar14 + 4);
          uVar22 = *(undefined4 *)(pdVar14 + 1);
          uVar23 = *(undefined4 *)((longlong)pdVar14 + 0xc);
          pdVar14 = pdVar14 + 2;
          uVar16 = uVar16 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        if (iVar11 != 0) {
          return false;
        }
      }
    }
    plVar17 = plVar17 + 2;
    uVar10 = (ulonglong)local_res10;
    this_00 = local_res18;
  } while( true );
}

// operator() @ 14ce2aa90

void __thiscall
`UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendVoronoiDiagram2D'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FText *pFVar8;
  int iVar9;
  FText local_38;
  
  if ((param_1 < 0) || ((int)(*(longlong **)((longlong)this + 8))[1] <= param_1)) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"PrimitiveFunctions_AppendVoronoiDiagram2D_BadID",
                        L"AppendVoronoiDiagram2D: Requested invalid cell ID");
    UE::Geometry::AppendWarning
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 0x10),InvalidInputs,pFVar8
              );
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      return;
    }
  }
  else {
    iVar1 = *(int *)(*(longlong *)this + 0xa8);
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::
    Append<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
              ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)this + 0xa0),
               (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               (**(longlong **)((longlong)this + 8) + (longlong)param_1 * 0x10));
    iVar9 = 2;
    while( true ) {
      plVar2 = *(longlong **)((longlong)this + 8);
      uVar6 = 0;
      if (param_1 < (int)plVar2[1]) {
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
      if (*(int *)(*plVar2 + 8 + (longlong)param_1 * 0x10) <= iVar9) break;
      lVar3 = *(longlong *)this;
      iVar7 = *(int *)(lVar3 + 0xb8);
      if (iVar7 == *(int *)(lVar3 + 0xbc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)(lVar3 + 0xb0),(int *)(lVar3 + 0xbc));
      }
      *(int *)(lVar3 + 0xb8) = iVar7 + 1;
      lVar3 = *(longlong *)(lVar3 + 0xb0);
      *(int *)(lVar3 + (longlong)iVar7 * 0xc) = iVar1;
      lVar3 = lVar3 + (longlong)iVar7 * 0xc;
      *(int *)(lVar3 + 4) = iVar9 + iVar1;
      *(int *)(lVar3 + 8) = iVar1 + -1 + iVar9;
      lVar3 = *(longlong *)this;
      iVar7 = *(int *)(lVar3 + 200);
      if (iVar7 == *(int *)(lVar3 + 0xcc)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)(lVar3 + 0xc0),(int *)(lVar3 + 0xcc));
      }
      iVar9 = iVar9 + 1;
      *(int *)(lVar3 + 200) = iVar7 + 1;
      *(int *)(*(longlong *)(lVar3 + 0xc0) + (longlong)iVar7 * 4) = param_1;
    }
  }
  return;
}

// operator() @ 14ce48b90

void __thiscall
`UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendDelaunayTriangulation2D'::__l38::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < *(int *)(*(longlong *)this + 8)) {
    lVar6 = 0;
    do {
      uVar4 = UE::Geometry::FDelaunay2::RemapIfDuplicate(*(FDelaunay2 **)((longlong)this + 8),uVar5)
      ;
      if (uVar5 != uVar4) {
        plVar1 = *(longlong **)this;
        uVar4 = 0;
        if ((int)uVar5 < (int)plVar1[1]) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UE::Geometry::FDynamicMesh3::RemoveVertex(param_1,*(int *)(lVar6 + *plVar1),false);
        plVar1 = *(longlong **)this;
        uVar4 = 0;
        if ((int)uVar5 < (int)plVar1[1]) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)(lVar6 + *plVar1) = 0xffffffff;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < *(int *)(*(longlong *)this + 8));
  }
  return;
}

// operator() @ 14ce49f40

bool __thiscall
`UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePath'::__l15::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  plVar1 = *(longlong **)this;
  lVar9 = (longlong)param_2;
  lVar10 = (longlong)param_3;
  uVar8 = 0;
  if (param_2 < (int)plVar1[1]) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  plVar2 = *(longlong **)this;
  lVar3 = *plVar1;
  uVar8 = 0;
  if (param_3 < (int)plVar2[1]) {
    uVar8 = (uint)~param_3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  lVar4 = *plVar2;
  return (double)**(float **)((longlong)this + 8) <=
         *(double *)(lVar4 + 8 + lVar10 * 0x18) * *(double *)(lVar3 + 8 + lVar9 * 0x18) +
         *(double *)(lVar3 + lVar9 * 0x18) * *(double *)(lVar4 + lVar10 * 0x18) +
         *(double *)(lVar4 + 0x10 + lVar10 * 0x18) * *(double *)(lVar3 + 0x10 + lVar9 * 0x18);
}

// operator() @ 14ce4a060

bool __thiscall
`UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePolygon'::__l15::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  plVar1 = *(longlong **)this;
  lVar9 = (longlong)param_2;
  lVar10 = (longlong)param_3;
  uVar8 = 0;
  if (param_2 < (int)plVar1[1]) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  plVar2 = *(longlong **)this;
  lVar3 = *plVar1;
  uVar8 = 0;
  if (param_3 < (int)plVar2[1]) {
    uVar8 = (uint)~param_3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  lVar4 = *plVar2;
  return (double)**(float **)((longlong)this + 8) <=
         *(double *)(lVar4 + 8 + lVar10 * 0x18) * *(double *)(lVar3 + 8 + lVar9 * 0x18) +
         *(double *)(lVar3 + lVar9 * 0x18) * *(double *)(lVar4 + lVar10 * 0x18) +
         *(double *)(lVar4 + 0x10 + lVar10 * 0x18) * *(double *)(lVar3 + 0x10 + lVar9 * 0x18);
}

// operator() @ 14ce4a180

bool __thiscall
`UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSpiralRevolvePolygon'::__l15::<lambda_1>::
operator()(void *this,int param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  plVar1 = *(longlong **)this;
  lVar9 = (longlong)param_2;
  lVar10 = (longlong)param_3;
  uVar8 = 0;
  if (param_2 < (int)plVar1[1]) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  plVar2 = *(longlong **)this;
  lVar3 = *plVar1;
  uVar8 = 0;
  if (param_3 < (int)plVar2[1]) {
    uVar8 = (uint)~param_3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  lVar4 = *plVar2;
  return (double)**(float **)((longlong)this + 8) <=
         *(double *)(lVar4 + 8 + lVar10 * 0x18) * *(double *)(lVar3 + 8 + lVar9 * 0x18) +
         *(double *)(lVar3 + lVar9 * 0x18) * *(double *)(lVar4 + lVar10 * 0x18) +
         *(double *)(lVar4 + 0x10 + lVar10 * 0x18) * *(double *)(lVar3 + 0x10 + lVar9 * 0x18);
}

// AppendBoundingBox @ 14ce4fed0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendBoundingBox
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,TBox<double> *param_4,int param_5,int param_6,int param_7,UGeometryScriptDebug *param_8)

{
  UDynamicMesh *pUVar1;
  TVector<double>_u_0 local_a8;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  TTransform<double> local_68;
  
  local_a8._s_0.X = (param_4->Min).field0_0x0._s_0.X;
  local_a8._s_0.Y = (param_4->Min).field0_0x0._s_0.Y;
  local_a8._s_0.Z = (param_4->Min).field0_0x0._s_0.Z;
  dStack_90 = (param_4->Max).field0_0x0._s_0.X;
  local_88 = (param_4->Max).field0_0x0._s_0.Y;
  dStack_80 = (param_4->Max).field0_0x0._s_0.Z;
  local_78._0_1_ = param_4->IsValid;
  local_78._1_1_ = param_4->Pad[0];
  local_78._2_1_ = param_4->Pad[1];
  local_78._3_1_ = param_4->Pad[2];
  local_78._4_1_ = param_4->Pad[3];
  local_78._5_1_ = param_4->Pad[4];
  local_78._6_1_ = param_4->Pad[5];
  local_78._7_1_ = param_4->Pad[6];
  local_68.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
  pUVar1 = UE::Private::AppendMeshHelper::AppendBoundingBox
                     (param_1,(FGeometryScriptSimpleCollision *)0x0,param_2,&local_68,
                      (TBox<double> *)&local_a8._s_0,param_5,param_6,param_7,param_8);
  return pUVar1;
}

// AppendBoundingBoxWithCollision @ 14ce4ff90

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendBoundingBoxWithCollision
          (UDynamicMesh *param_1,FGeometryScriptSimpleCollision *param_2,
          FGeometryScriptPrimitiveOptions param_3,TTransform<double> *param_4,TBox<double> *param_5,
          int param_6,int param_7,int param_8,UGeometryScriptDebug *param_9)

{
  UDynamicMesh *pUVar1;
  TVector<double>_u_0 local_a8;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  TTransform<double> local_68;
  
  FKAggregateGeom::EmptyElements(&param_2->AggGeom);
  local_a8._s_0.X = (param_5->Min).field0_0x0._s_0.X;
  local_a8._s_0.Y = (param_5->Min).field0_0x0._s_0.Y;
  local_a8._s_0.Z = (param_5->Min).field0_0x0._s_0.Z;
  dStack_90 = (param_5->Max).field0_0x0._s_0.X;
  local_88 = (param_5->Max).field0_0x0._s_0.Y;
  dStack_80 = (param_5->Max).field0_0x0._s_0.Z;
  local_78._0_1_ = param_5->IsValid;
  local_78._1_1_ = param_5->Pad[0];
  local_78._2_1_ = param_5->Pad[1];
  local_78._3_1_ = param_5->Pad[2];
  local_78._4_1_ = param_5->Pad[3];
  local_78._5_1_ = param_5->Pad[4];
  local_78._6_1_ = param_5->Pad[5];
  local_78._7_1_ = param_5->Pad[6];
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
  pUVar1 = UE::Private::AppendMeshHelper::AppendBoundingBox
                     (param_1,param_2,param_3,&local_68,(TBox<double> *)&local_a8._s_0,param_6,
                      param_7,param_8,param_9);
  return pUVar1;
}

// AppendBox @ 14ce50880

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendBox
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,float param_4,float param_5,float param_6,int param_7,int param_8,int param_9,
          EGeometryScriptPrimitiveOriginMode param_10,UGeometryScriptDebug *param_11)

{
  UDynamicMesh *pUVar1;
  float fVar2;
  TVector<double>_u_0 local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  double local_70;
  TTransform<double> local_68;
  
  local_68.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
  local_68.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
  fVar2 = param_6 * __real_3f000000;
  local_80 = (double)(param_4 * __real_3f000000);
  local_78 = (double)(param_5 * __real_3f000000);
  local_70 = (double)fVar2;
  if (param_10 != Base) {
    fVar2 = 0.0;
  }
  local_b8._s_0.Z = (double)fVar2;
  local_a0 = 0;
  local_b8._s_0.X = 0.0;
  local_b8._s_0.Y = 0.0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = __real_3ff0000000000000;
  pUVar1 = UE::Private::AppendMeshHelper::AppendBox
                     (param_1,(FGeometryScriptSimpleCollision *)0x0,param_2,&local_68,
                      (TOrientedBox3<double> *)&local_b8._s_0,param_7,param_8,param_9,param_11);
  return pUVar1;
}

// AppendBoxWithCollision @ 14ce509b0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendBoxWithCollision
          (UDynamicMesh *param_1,FGeometryScriptSimpleCollision *param_2,
          FGeometryScriptPrimitiveOptions param_3,TTransform<double> *param_4,float param_5,
          float param_6,float param_7,int param_8,int param_9,int param_10,
          EGeometryScriptPrimitiveOriginMode param_11,UGeometryScriptDebug *param_12)

{
  UDynamicMesh *pUVar1;
  float fVar2;
  TVector<double>_u_0 local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  double local_70;
  TTransform<double> local_68;
  
  FKAggregateGeom::EmptyElements(&param_2->AggGeom);
  local_68.Rotation.XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (param_4->Rotation).XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (param_4->Rotation).ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (param_4->Rotation).ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (param_4->Translation).XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (param_4->Translation).XY.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (param_4->Scale3D).XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (param_4->Scale3D).XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (param_4->Translation).ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (param_4->Translation).ZW.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (param_4->Scale3D).ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (param_4->Scale3D).ZW.m128d_f64[1];
  fVar2 = param_7 * __real_3f000000;
  local_80 = (double)(param_5 * __real_3f000000);
  local_70 = (double)fVar2;
  local_78 = (double)(param_6 * __real_3f000000);
  if (param_11 != Base) {
    fVar2 = 0.0;
  }
  local_b8._s_0.Z = (double)fVar2;
  local_a0 = 0;
  local_b8._s_0.X = 0.0;
  local_b8._s_0.Y = 0.0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = __real_3ff0000000000000;
  pUVar1 = UE::Private::AppendMeshHelper::AppendBox
                     (param_1,param_2,param_3,&local_68,(TOrientedBox3<double> *)&local_b8._s_0,
                      param_8,param_9,param_10,param_12);
  return pUVar1;
}

// AppendCapsule @ 14ce51340

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCapsule
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,float param_4,float param_5,int param_6,int param_7,int param_8,
          EGeometryScriptPrimitiveOriginMode param_9,UGeometryScriptDebug *param_10)

{
  UDynamicMesh *pUVar1;
  TTransform<double> local_68;
  
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
  pUVar1 = UE::Private::AppendMeshHelper::AppendCapsule
                     (param_1,(FGeometryScriptSimpleCollision *)0x0,param_2,&local_68,param_4,
                      param_5,param_6,param_7,param_8,param_9,param_10);
  return pUVar1;
}

// AppendCapsuleWithCollision @ 14ce513f0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCapsuleWithCollision
          (UDynamicMesh *param_1,FGeometryScriptSimpleCollision *param_2,
          FGeometryScriptPrimitiveOptions param_3,TTransform<double> *param_4,float param_5,
          float param_6,int param_7,int param_8,int param_9,
          EGeometryScriptPrimitiveOriginMode param_10,UGeometryScriptDebug *param_11)

{
  UDynamicMesh *pUVar1;
  TTransform<double> local_68;
  
  FKAggregateGeom::EmptyElements(&param_2->AggGeom);
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
  pUVar1 = UE::Private::AppendMeshHelper::AppendCapsule
                     (param_1,param_2,param_3,&local_68,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11);
  return pUVar1;
}

// AppendCone @ 14ce514f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCone
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,float param_4,float param_5,float param_6,int param_7,int param_8,bool param_9,
          EGeometryScriptPrimitiveOriginMode param_10,UGeometryScriptDebug *param_11)

{
  bool bVar1;
  FText *pFVar2;
  undefined1 auStackY_4a8 [32];
  ITextData local_478;
  FGeometryScriptPrimitiveOptions local_470;
  TVector<double>_u_0 local_468;
  undefined1 *local_450;
  undefined1 *local_448;
  undefined1 local_438 [96];
  double dStack_3d8;
  double local_3d0;
  double dStack_3c8;
  char local_3c0;
  TTransform<double> local_3b8;
  FDynamicMesh3 local_358;
  undefined1 local_128 [160];
  undefined1 local_88;
  undefined1 local_87;
  int local_58;
  bool local_54;
  undefined1 local_53;
  undefined4 local_50;
  float local_48;
  float local_44;
  float local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_468._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"PrimitiveFunctions_AppendCone",L"AppendCone: TargetMesh is Null");
    UE::Geometry::AppendError(param_11,InvalidInputs,pFVar2);
    if ((longlong *)local_468._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_468._s_0.X + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    if (param_4 <= __real_358637bd) {
      param_4 = __real_358637bd;
    }
    local_128._0_8_ = &___7FCylinderGenerator_Geometry_UE__6B_;
    local_128._8_8_ = (FScriptContainerElement *)0x0;
    local_128._16_8_ = 0;
    local_58 = param_7;
    if (param_7 < 3) {
      local_58 = 3;
    }
    if (param_5 <= 0.0) {
      param_5 = 0.0;
    }
    local_128._24_8_ = (FScriptContainerElement *)0x0;
    local_128._32_8_ = 0;
    local_3c = param_8;
    if (param_8 < 0) {
      local_3c = 0;
    }
    local_128._40_8_ = (FScriptContainerElement *)0x0;
    local_88 = param_2.PolygroupMode == PerQuad;
    local_40 = param_6;
    if (param_6 <= __real_358637bd) {
      local_40 = __real_358637bd;
    }
    local_54 = param_9;
    local_128._48_8_ = 0;
    local_128._56_8_ = (FScriptContainerElement *)0x0;
    local_128._64_8_ = 0;
    local_128._72_8_ = (FScriptContainerElement *)0x0;
    local_128._80_8_ = 0;
    local_128._88_8_ = (FScriptContainerElement *)0x0;
    local_128._96_8_ = 0;
    local_128._104_8_ = (FScriptContainerElement *)0x0;
    local_128._112_8_ = 0;
    local_128._120_8_ = (FScriptContainerElement *)0x0;
    local_128._128_8_ = 0;
    local_128._136_8_ = (FScriptContainerElement *)0x0;
    local_128._144_8_ = 0;
    local_128[0x98] = false;
    local_87 = 1;
    local_53 = 1;
    local_50 = 2;
    local_48 = param_4;
    local_44 = param_5;
    UE::Geometry::FCylinderGenerator::Generate((FCylinderGenerator *)local_128);
    local_438._16_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_438._20_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_438._24_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_438._28_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_438._32_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (param_10 == Center) {
      local_438._16_4_ = 0;
      local_438._20_4_ = 0;
      local_438._24_4_ = 0;
      local_438._28_4_ = 0;
      local_438._32_8_ = (FGeometryScriptPrimitiveOptions *)(double)(param_6 * __real_bf000000);
    }
    local_3b8.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    local_3b8.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
    local_478 = (ITextData)local_128;
    local_3b8.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    local_3b8.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
    local_3b8.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    local_3b8.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
    local_3b8.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    local_3b8.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
    local_3b8.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    local_3b8.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
    local_3b8.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    local_3b8.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
    local_438[0x50] = '\0';
    local_470 = param_2;
    bVar1 = UDynamicMesh::IsEmpty(param_1);
    if (bVar1) {
      local_468._s_0.X = (double)&local_478;
      local_468._s_0.Y = (double)&local_3b8;
      local_468._s_0.Z = (double)&local_470;
      local_450 = local_438 + 0x10;
      local_448 = local_438 + 0x30;
      local_438._8_8_ = &local_468;
      local_438._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_438,
                 GeneralEdit,Unknown,false);
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_358,(FMeshShapeGenerator *)local_478);
      local_3c0 = local_438[0x50];
      if (local_438[0x50] != '\0') {
        local_438._88_8_ = local_438._48_8_;
        dStack_3d8 = (double)local_438._56_8_;
        local_3d0 = (double)local_438._64_8_;
        dStack_3c8 = (double)local_438._72_8_;
      }
      local_468._s_0.X = (double)CONCAT44(local_438._20_4_,local_438._16_4_);
      local_468._s_0.Y = (double)CONCAT44(local_438._28_4_,local_438._24_4_);
      local_468._s_0.Z = (double)local_438._32_8_;
      ApplyPrimitiveOptionsToMesh
                (&local_358,&local_3b8,local_470,(TVector<double> *)&local_468._s_0,
                 (TOptional<UE::Geometry::TQuaternion<double>_> *)(local_438 + 0x58));
      local_438._0_8_ = &local_358;
      local_468._s_0.Y = (double)local_438;
      local_468._s_0.X =
           (double)UE::Core::Private::Function::
                   TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                   ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)
                         &local_468._s_0,GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_358);
    }
    local_128._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((FScriptContainerElement *)local_128._136_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._136_8_);
    }
    if ((FScriptContainerElement *)local_128._120_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._120_8_);
    }
    if ((FScriptContainerElement *)local_128._104_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._104_8_);
    }
    if ((FScriptContainerElement *)local_128._88_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._88_8_);
    }
    if ((FScriptContainerElement *)local_128._72_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._72_8_);
    }
    if ((FScriptContainerElement *)local_128._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._56_8_);
    }
    if ((FScriptContainerElement *)local_128._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._40_8_);
    }
    if ((FScriptContainerElement *)local_128._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._24_8_);
    }
    if ((FScriptContainerElement *)local_128._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._8_8_);
    }
  }
  return param_1;
}

// AppendCurvedStairs @ 14ce51920

/* WARNING: Removing unreachable block (ram,0x00014ce51a35) */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCurvedStairs
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,float param_4,float param_5,float param_6,float param_7,int param_8,bool param_9,
          UGeometryScriptDebug *param_10)

{
  FText *pFVar1;
  FCurvedStairGenerator *this;
  EGeometryScriptPrimitiveUVMode EStackX_12;
  TVector<double>_u_0 local_d8;
  TTransform<double> local_b8;
  TOptional<UE::Geometry::TQuaternion<double>_> local_58;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_d8._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"PrimitiveFunctions_AppendCurvedStairs",
                        L"AppendCurvedStairs: TargetMesh is Null");
    UE::Geometry::AppendError(param_10,InvalidInputs,pFVar1);
    if ((longlong *)local_d8._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_d8._s_0.X + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    this = ::operator_new(0x168);
    if (param_9) {
      if (this == (FCurvedStairGenerator *)0x0) {
        this = (FCurvedStairGenerator *)0x0;
      }
      else {
        UE::Geometry::FCurvedStairGenerator::FCurvedStairGenerator(this);
        *(undefined4 *)&this->_padding_ = 1;
        this->_padding_ = (longlong)&___7FSpiralStairGenerator_Geometry_UE__6B_;
      }
    }
    else {
      if (this == (FCurvedStairGenerator *)0x0) {
        this = (FCurvedStairGenerator *)0x0;
      }
      else {
        this = UE::Geometry::FCurvedStairGenerator::FCurvedStairGenerator(this);
      }
      local_d8._s_0.X = 0.0;
    }
    *(float *)((longlong)&this->_padding_ + 4) = param_4;
    if (param_8 < 1) {
      param_8 = 1;
    }
    *(float *)&this->_padding_ = param_5;
    *(int *)((longlong)&this->_padding_ + 4) = param_8;
    EStackX_12 = param_2.UVMode;
    this->InnerRadius = param_6;
    this->CurveAngle = param_7;
    *(bool *)((longlong)&this->_padding_ + 1) = param_2.PolygroupMode == PerQuad;
    *(bool *)&this->_padding_ = EStackX_12 == Uniform;
    (**(code **)(this->_padding_ + 8))(this);
    local_b8.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    local_b8.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
    local_d8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_d8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_b8.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    local_b8.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
    local_b8.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    local_b8.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
    local_b8.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    local_b8.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
    local_b8.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    local_b8.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
    local_b8.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    local_b8.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
    local_58.bIsSet = false;
    AppendPrimitive(param_1,(FMeshShapeGenerator *)this,&local_b8,param_2,
                    (TVector<double> *)&local_d8._s_0,&local_58);
    (**(code **)this->_padding_)(this,1);
  }
  return param_1;
}

// AppendCylinder @ 14ce51b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCylinder
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,float param_4,float param_5,int param_6,int param_7,bool param_8,
          EGeometryScriptPrimitiveOriginMode param_9,UGeometryScriptDebug *param_10)

{
  bool bVar1;
  FText *pFVar2;
  undefined1 auStackY_4a8 [32];
  ITextData local_478;
  FGeometryScriptPrimitiveOptions local_470;
  TVector<double>_u_0 local_468;
  undefined1 *local_450;
  undefined1 *local_448;
  undefined1 local_438 [96];
  double dStack_3d8;
  double local_3d0;
  double dStack_3c8;
  char local_3c0;
  TTransform<double> local_3b8;
  FDynamicMesh3 local_358;
  undefined1 local_128 [160];
  undefined1 local_88;
  undefined1 local_87;
  int local_58;
  bool local_54;
  undefined1 local_53;
  undefined4 local_50;
  float local_48;
  float local_44;
  float local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_468._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"PrimitiveFunctions_AppendCylinder",L"AppendCylinder: TargetMesh is Null");
    UE::Geometry::AppendError(param_10,InvalidInputs,pFVar2);
    if ((longlong *)local_468._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_468._s_0.X + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    if (param_4 <= __real_358637bd) {
      param_4 = __real_358637bd;
    }
    local_87 = 1;
    local_128._8_8_ = (FScriptContainerElement *)0x0;
    local_128._0_8_ = &___7FCylinderGenerator_Geometry_UE__6B_;
    local_40 = param_5;
    if (param_5 <= __real_358637bd) {
      local_40 = __real_358637bd;
    }
    local_58 = param_6;
    if (param_6 < 3) {
      local_58 = 3;
    }
    local_128._16_8_ = 0;
    local_3c = param_7;
    if (param_7 < 0) {
      local_3c = 0;
    }
    local_128._24_8_ = (FScriptContainerElement *)0x0;
    local_88 = param_2.PolygroupMode == PerQuad;
    local_54 = param_8;
    local_128._32_8_ = 0;
    local_128._40_8_ = (FScriptContainerElement *)0x0;
    local_128._48_8_ = 0;
    local_128._56_8_ = (FScriptContainerElement *)0x0;
    local_128._64_8_ = 0;
    local_128._72_8_ = (FScriptContainerElement *)0x0;
    local_128._80_8_ = 0;
    local_128._88_8_ = (FScriptContainerElement *)0x0;
    local_128._96_8_ = 0;
    local_128._104_8_ = (FScriptContainerElement *)0x0;
    local_128._112_8_ = 0;
    local_128._120_8_ = (FScriptContainerElement *)0x0;
    local_128._128_8_ = 0;
    local_128._136_8_ = (FScriptContainerElement *)0x0;
    local_128._144_8_ = 0;
    local_128[0x98] = false;
    local_53 = 1;
    local_50 = 2;
    local_48 = param_4;
    local_44 = param_4;
    UE::Geometry::FCylinderGenerator::Generate((FCylinderGenerator *)local_128);
    local_438._16_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_438._20_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_438._24_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_438._28_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_438._32_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (param_9 == Center) {
      local_438._16_4_ = 0;
      local_438._20_4_ = 0;
      local_438._24_4_ = 0;
      local_438._28_4_ = 0;
      local_438._32_8_ = (FGeometryScriptPrimitiveOptions *)(double)(param_5 * __real_bf000000);
    }
    local_3b8.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    local_3b8.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
    local_478 = (ITextData)local_128;
    local_3b8.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    local_3b8.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
    local_3b8.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    local_3b8.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
    local_3b8.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    local_3b8.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
    local_3b8.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    local_3b8.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
    local_3b8.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    local_3b8.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
    local_438[0x50] = '\0';
    local_470 = param_2;
    bVar1 = UDynamicMesh::IsEmpty(param_1);
    if (bVar1) {
      local_468._s_0.X = (double)&local_478;
      local_468._s_0.Y = (double)&local_3b8;
      local_468._s_0.Z = (double)&local_470;
      local_450 = local_438 + 0x10;
      local_448 = local_438 + 0x30;
      local_438._8_8_ = &local_468;
      local_438._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_438,
                 GeneralEdit,Unknown,false);
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_358,(FMeshShapeGenerator *)local_478);
      local_3c0 = local_438[0x50];
      if (local_438[0x50] != '\0') {
        local_438._88_8_ = local_438._48_8_;
        dStack_3d8 = (double)local_438._56_8_;
        local_3d0 = (double)local_438._64_8_;
        dStack_3c8 = (double)local_438._72_8_;
      }
      local_468._s_0.X = (double)CONCAT44(local_438._20_4_,local_438._16_4_);
      local_468._s_0.Y = (double)CONCAT44(local_438._28_4_,local_438._24_4_);
      local_468._s_0.Z = (double)local_438._32_8_;
      ApplyPrimitiveOptionsToMesh
                (&local_358,&local_3b8,local_470,(TVector<double> *)&local_468._s_0,
                 (TOptional<UE::Geometry::TQuaternion<double>_> *)(local_438 + 0x58));
      local_438._0_8_ = &local_358;
      local_468._s_0.Y = (double)local_438;
      local_468._s_0.X =
           (double)UE::Core::Private::Function::
                   TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                   ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)
                         &local_468._s_0,GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_358);
    }
    local_128._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((FScriptContainerElement *)local_128._136_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._136_8_);
    }
    if ((FScriptContainerElement *)local_128._120_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._120_8_);
    }
    if ((FScriptContainerElement *)local_128._104_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._104_8_);
    }
    if ((FScriptContainerElement *)local_128._88_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._88_8_);
    }
    if ((FScriptContainerElement *)local_128._72_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._72_8_);
    }
    if ((FScriptContainerElement *)local_128._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._56_8_);
    }
    if ((FScriptContainerElement *)local_128._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._40_8_);
    }
    if ((FScriptContainerElement *)local_128._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._24_8_);
    }
    if ((FScriptContainerElement *)local_128._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._8_8_);
    }
  }
  return param_1;
}

// AppendDelaunayTriangulation2D @ 14ce51fa0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendDelaunayTriangulation2D
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *param_5,
          FGeometryScriptConstrainedDelaunayTriangulationOptions *param_6,
          TArray<int,TSizedDefaultAllocator<32>_> *param_7,bool *param_8,
          UGeometryScriptDebug *param_9)

{
  EGeometryScriptPolygonFillMode EVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  FText *pFVar9;
  UDynamicMesh *pUVar10;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  EFillMode EVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_5e8 [8];
  ForAnyElementType local_5e0;
  undefined8 local_5d8;
  FDelaunay2 local_5d0;
  uint local_5b0;
  FMeshShapeGenerator *local_5a8;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_5a0;
  FScriptContainerElement *local_590;
  FGeometryScriptPrimitiveOptions local_588;
  undefined8 local_580;
  double local_578;
  double dStack_570;
  double local_568;
  FScriptContainerElement *local_558;
  int iStack_550;
  undefined4 uStack_54c;
  FScriptContainerElement *local_548;
  int iStack_540;
  undefined4 uStack_53c;
  FScriptContainerElement *local_538;
  int iStack_530;
  undefined4 uStack_52c;
  code *local_528;
  FMeshShapeGenerator ***local_520;
  code *local_518;
  FDynamicMesh3 **local_510;
  TArray<int,TSizedDefaultAllocator<32>_> *local_508;
  FDelaunay2 *local_500;
  code *local_4f8;
  TArray<int,TSizedDefaultAllocator<32>_> **local_4f0;
  FDynamicMesh3 *local_4e8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_4e0;
  FMeshShapeGenerator **local_4d8;
  FMeshShapeGenerator **local_4d0;
  TTransform<double> *local_4c8;
  FGeometryScriptPrimitiveOptions *local_4c0;
  double *local_4b8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_4b0;
  FText local_4a8;
  FText local_498;
  FText local_488;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_478;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_468;
  FText local_458;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_448;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_438;
  TVector<double>_u_0 local_428;
  FFlatTriangulationMeshGenerator local_408;
  TTransform<double> local_318;
  TOptional<UE::Geometry::TQuaternion<double>_> local_2b8;
  FDynamicMesh3 local_288;
  
  *param_8 = false;
  param_7->ArrayNum = 0;
  if (param_7->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_7->AllocatorInstance,0,&param_7->ArrayMax);
  }
  uVar14 = 0;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_4a8,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"PrimitiveFunctions_AppendDelaunayTriangulation2D_NullTarget",
                        L"AppendDelaunayTriangulation2D: TargetMesh is Null");
    UE::Geometry::AppendError(param_9,InvalidInputs,pFVar9);
    if (local_4a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4a8.TextData.Reference + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  if (param_4->ArrayNum < 3) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_498,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"PrimitiveFunctions_AppendDelaunayTriangulation2D_TooFewVertices",
                        L"AppendDelaunayTriangulation2D: VertexPositions array requires at least 3 positions"
                       );
    UE::Geometry::AppendError(param_9,InvalidInputs,pFVar9);
    if (local_498.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_498.TextData.Reference + 0x10))();
    }
  }
  else {
    local_5d0.RandomStream.InitialSeed = 0;
    local_5d0.RandomStream.Seed = 0;
    iVar8 = 0;
    local_5d0.bKeepFastEdgeAdjacencyData = false;
    local_5d0.bValidateEdges = true;
    local_5d0.bAutomaticallyFixEdgesToDuplicateVertices = false;
    uVar2 = param_5->ArrayNum;
    local_5d0.Connectivity.Ptr = (FDelaunay2Connectivity *)0x0;
    local_5d0.bIsConstrained = false;
    local_5d0.Result = NotComputed;
    local_5e0.Data = (FScriptContainerElement *)0x0;
    local_5d8 = 0;
    if (uVar2 == 0) {
      local_5d0.bAutomaticallyFixEdgesToDuplicateVertices = param_6->bRemoveDuplicateVertices;
LAB_14ce5229e:
      local_558 = local_5e0.Data;
      if ((iVar8 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pUVar10 = (UDynamicMesh *)(*pcVar3)();
        return pUVar10;
      }
      local_548 = (param_4->AllocatorInstance).Data;
      iVar13 = param_4->ArrayNum;
      iStack_550 = iVar8;
      if ((iVar13 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pUVar10 = (UDynamicMesh *)(*pcVar3)();
        return pUVar10;
      }
      local_478._12_4_ = uStack_54c;
      local_478.ArrayNum = iStack_550;
      local_468._12_4_ = uStack_53c;
      local_468.ArrayNum = iVar13;
      local_468.DataPtr = (TVector2<double> *)local_548;
      local_478.DataPtr = (FIndex2i *)local_558;
      iStack_540 = iVar13;
      bVar7 = UE::Geometry::FDelaunay2::Triangulate(&local_5d0,&local_468,&local_478);
      if (bVar7) {
        bVar7 = UE::Geometry::FDelaunay2::HasDuplicates(&local_5d0);
        *param_8 = bVar7;
        UE::Geometry::FFlatTriangulationMeshGenerator::FFlatTriangulationMeshGenerator(&local_408);
        local_408._padding_._0_1_ = 1;
        if (&local_408.Vertices2D != param_4) {
          iVar8 = param_4->ArrayNum;
          pFVar16 = (param_4->AllocatorInstance).Data;
          local_408.Vertices2D.ArrayNum = iVar8;
          if ((iVar8 == 0) && (local_408.Vertices2D.ArrayMax == 0)) {
            local_408.Vertices2D.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar8,local_408.Vertices2D.ArrayMax,
                       &local_408.Vertices2D.AllocatorInstance,iVar8,&local_408.Vertices2D.ArrayMax)
            ;
            if (iVar8 != 0) {
              memcpy(local_408.Vertices2D.AllocatorInstance.Data,pFVar16,(longlong)iVar8 << 4);
            }
          }
        }
        EVar15 = Solid;
        if ((param_5->ArrayNum == 0) || (EVar1 = param_6->ConstrainedEdgesFillMode, EVar1 == All)) {
          pTVar11 = UE::Geometry::FDelaunay2::GetTriangles(&local_5d0,&local_438);
          if (&local_408.Triangles2D != pTVar11) {
            if (local_408.Triangles2D.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_408.Triangles2D.AllocatorInstance.Data);
            }
            local_408.Triangles2D.AllocatorInstance.Data = (pTVar11->AllocatorInstance).Data;
            (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            local_408.Triangles2D.ArrayNum = pTVar11->ArrayNum;
            local_408.Triangles2D.ArrayMax = pTVar11->ArrayMax;
            pTVar11->ArrayNum = 0;
            pTVar11->ArrayMax = 0;
          }
          if (local_438.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_438.AllocatorInstance.Data);
          }
        }
        else {
          if ((EVar1 != Solid) && (EVar15 = PositiveWinding, EVar1 != PositiveWinding)) {
            if (EVar1 == NonZeroWinding) {
              EVar15 = NonZeroWinding;
            }
            else {
              EVar15 = (EVar1 != NegativeWinding) + NegativeWinding;
            }
          }
          iVar8 = (int)local_5d8;
          local_538 = local_5e0.Data;
          if (((int)local_5d8 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            pUVar10 = (UDynamicMesh *)(*pcVar3)();
            return pUVar10;
          }
          iStack_530 = iVar8;
          local_448._12_4_ = uStack_52c;
          local_448.ArrayNum = iVar8;
          local_448.DataPtr = (FIndex2i *)local_538;
          local_5a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_5a0.ArrayNum = 0;
          local_5a0.ArrayMax = 0;
          UE::Geometry::FDelaunay2::GetFilledTriangles(&local_5d0,&local_5a0,&local_448,EVar15);
          if (local_408.Triangles2D.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_408.Triangles2D.AllocatorInstance.Data);
          }
          local_408.Triangles2D.AllocatorInstance.Data = local_5a0.AllocatorInstance.Data;
          local_408.Triangles2D.ArrayNum = local_5a0.ArrayNum;
          local_408.Triangles2D.ArrayMax = local_5a0.ArrayMax;
        }
        uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        if ((2 < local_408.Vertices2D.ArrayNum) && (0 < local_408.Triangles2D.ArrayNum)) {
          local_5a8 = UE::Geometry::FFlatTriangulationMeshGenerator::Generate(&local_408);
          local_578 = (double)uVar4;
          dStack_570 = (double)uVar5;
          local_568 = (double)uVar6;
          local_318.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
          local_318.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
          local_318.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
          local_318.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
          local_318.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
          local_318.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
          local_318.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
          local_318.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
          local_318.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
          local_318.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
          local_318.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
          local_318.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
          local_588 = param_2;
          bVar7 = UDynamicMesh::IsEmpty(param_1);
          if (bVar7) {
            local_4d0 = &local_5a8;
            local_4c8 = &local_318;
            local_4b0 = param_7;
            local_4c0 = &local_588;
            local_4b8 = &local_578;
            local_520 = &local_4d0;
            local_528 = UE::Core::Private::Function::
                        TFunctionRefCaller<`AppendPrimitiveWithVertexIndexMap'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                        ::Call;
            UDynamicMesh::EditMesh
                      (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)
                               &local_528,GeneralEdit,Unknown,false);
          }
          else {
            UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_288,local_5a8);
            local_428._s_0.X = local_578;
            local_428._s_0.Y = dStack_570;
            local_428._s_0.Z = local_568;
            local_2b8.bIsSet = false;
            ApplyPrimitiveOptionsToMesh
                      (&local_288,&local_318,local_588,(TVector<double> *)&local_428._s_0,&local_2b8
                      );
            local_4e8 = &local_288;
            local_4d8 = &local_5a8;
            local_4e0 = param_7;
            local_510 = &local_4e8;
            local_518 = UE::Core::Private::Function::
                        TFunctionRefCaller<`AppendPrimitiveWithVertexIndexMap'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                        ::Call;
            UDynamicMesh::EditMesh
                      (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)
                               &local_518,GeneralEdit,Unknown,false);
            UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_288);
          }
          if ((param_6->bRemoveDuplicateVertices != false) && (*param_8 != false)) {
            local_500 = &local_5d0;
            local_508 = param_7;
            local_4f0 = &local_508;
            local_4f8 = UE::Core::Private::Function::
                        TFunctionRefCaller<`UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendDelaunayTriangulation2D'::__l38::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                        ::Call;
            UDynamicMesh::EditMesh
                      (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)
                               &local_4f8,GeneralEdit,Unknown,false);
          }
        }
        UE::Geometry::FFlatTriangulationMeshGenerator::~FFlatTriangulationMeshGenerator(&local_408);
      }
      else {
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_458,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                            L"PrimitiveFunctions_AppendDelaunayTriangulation2D_GenFailed",
                            L"AppendDelaunayTriangulation2D: Delaunay triangulation failed");
        UE::Geometry::AppendError(param_9,OperationFailed,pFVar9);
        if (local_458.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_458.TextData.Reference + 0x10))();
        }
      }
    }
    else {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if (0 < (int)uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar2,&local_5e0,0,(int *)((longlong)&local_5d8 + 4));
        uVar14 = local_5d8 & 0xffffffff;
      }
      local_5b0 = param_5->ArrayNum;
      uVar12 = (ulonglong)(int)local_5b0;
      pFVar16 = (param_5->AllocatorInstance).Data;
      local_590 = pFVar16 + uVar12 * 8;
      while( true ) {
        while( true ) {
          if (param_5->ArrayNum != (int)uVar12) {
            local_5e8[0] = 0;
            `TCheckedPointerIterator<UE::Math::TIntPoint<int>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_5e8);
            uVar14 = local_5d8 & 0xffffffff;
          }
          iVar8 = (int)uVar14;
          if (pFVar16 == local_590) {
            local_5d0.bValidateEdges = param_6->bValidateEdgesInResult;
            local_5d0.bAutomaticallyFixEdgesToDuplicateVertices = true;
            goto LAB_14ce5229e;
          }
          local_580 = *(longlong *)pFVar16;
          iVar13 = (int)local_580;
          if ((((iVar13 < 0) || (param_4->ArrayNum <= iVar13)) || (local_580 < 0)) ||
             (param_4->ArrayNum <= (int)((ulonglong)local_580 >> 0x20))) break;
          if (iVar8 == local_5d8._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_5e0,(int *)((longlong)&local_5d8 + 4));
          }
          local_5d8 = CONCAT44(local_5d8._4_4_,iVar8 + 1U);
          pFVar16 = pFVar16 + 8;
          *(int *)(local_5e0.Data + (longlong)iVar8 * 8) = iVar13;
          uVar12 = (ulonglong)local_5b0;
          *(undefined4 *)(local_5e0.Data + (longlong)iVar8 * 8 + 4) = local_580._4_4_;
          uVar14 = (ulonglong)(iVar8 + 1U);
        }
        if (param_6->bValidateEdgesInResult != false) break;
        pFVar16 = pFVar16 + 8;
        uVar12 = (ulonglong)local_5b0;
      }
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_488,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                          L"PrimitiveFunctions_AppendDelaunayTriangulation2D_InvalidEdges",
                          L"AppendDelaunayTriangulation2D: Constrained Edges must only contain valid indices into Vertex Positions"
                         );
      UE::Geometry::AppendError(param_9,InvalidInputs,pFVar9);
      if (local_488.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_488.TextData.Reference + 0x10))();
      }
    }
    if (local_5e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e0.Data);
    }
    if (local_5d0.Connectivity.Ptr != (FDelaunay2Connectivity *)0x0) {
      (**(code **)&local_5d0.Connectivity.Ptr[-1].DuplicateVertices.field_0x40)
                (&local_5d0.Connectivity.Ptr[-1].DuplicateVertices.field_0x40);
    }
  }
  return param_1;
}

// AppendDisc @ 14ce52810

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendDisc
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,float param_4,int param_5,int param_6,float param_7,float param_8,float param_9,
          UGeometryScriptDebug *param_10)

{
  FText *pFVar1;
  FPuncturedDiscMeshGenerator *pFVar2;
  TVector<double>_u_0 local_278;
  TTransform<double> local_258;
  FPuncturedDiscMeshGenerator local_1f8;
  undefined1 local_118 [240];
  undefined1 local_28;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_278._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"PrimitiveFunctions_AppendDisc",L"AppendDisc: TargetMesh is Null");
    UE::Geometry::AppendError(param_10,InvalidInputs,pFVar1);
    if ((longlong *)local_278._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_278._s_0.X + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    UE::Geometry::FDiscMeshGenerator::FDiscMeshGenerator((FDiscMeshGenerator *)local_118);
    UE::Geometry::FPuncturedDiscMeshGenerator::FPuncturedDiscMeshGenerator(&local_1f8);
    pFVar2 = (FPuncturedDiscMeshGenerator *)local_118;
    if (0.0 < param_9) {
      local_1f8.HoleRadius = param_9;
      pFVar2 = &local_1f8;
    }
    if (param_4 <= __real_358637bd) {
      param_4 = __real_358637bd;
    }
    *(undefined8 *)((longlong)&pFVar2->_padding_ + 4) =
         UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
    *(float *)((longlong)&pFVar2->_padding_ + 4) =
         UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
    *(float *)&pFVar2->_padding_ = param_4;
    if (param_5 < 3) {
      param_5 = 3;
    }
    *(float *)&pFVar2->_padding_ = param_7;
    *(int *)&pFVar2->_padding_ = param_5;
    *(float *)((longlong)&pFVar2->_padding_ + 4) = param_8;
    if (param_6 < 1) {
      param_6 = 1;
    }
    *(int *)((longlong)&pFVar2->_padding_ + 4) = param_6;
    *(bool *)&pFVar2->_padding_ = param_2.PolygroupMode != PerQuad;
    (**(code **)(pFVar2->_padding_ + 8))(pFVar2);
    local_258.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    local_258.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
    local_278._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_278._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_278._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_258.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    local_258.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
    local_258.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    local_258.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
    local_258.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    local_258.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
    local_258.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    local_258.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
    local_258.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    local_258.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
    local_28 = 0;
    AppendPrimitive(param_1,(FMeshShapeGenerator *)pFVar2,&local_258,param_2,
                    (TVector<double> *)&local_278._s_0,
                    (TOptional<UE::Geometry::TQuaternion<double>_> *)(local_118 + 0xd0));
    local_1f8._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    local_118._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((void *)local_118._136_8_ != (void *)0x0) {
      FMemory::Free((void *)local_118._136_8_);
    }
    if ((void *)local_118._120_8_ != (void *)0x0) {
      FMemory::Free((void *)local_118._120_8_);
    }
    if ((void *)local_118._104_8_ != (void *)0x0) {
      FMemory::Free((void *)local_118._104_8_);
    }
    if ((void *)local_118._88_8_ != (void *)0x0) {
      FMemory::Free((void *)local_118._88_8_);
    }
    if ((void *)local_118._72_8_ != (void *)0x0) {
      FMemory::Free((void *)local_118._72_8_);
    }
    if ((void *)local_118._56_8_ != (void *)0x0) {
      FMemory::Free((void *)local_118._56_8_);
    }
    if ((void *)local_118._40_8_ != (void *)0x0) {
      FMemory::Free((void *)local_118._40_8_);
    }
    if ((void *)local_118._24_8_ != (void *)0x0) {
      FMemory::Free((void *)local_118._24_8_);
    }
    if ((void *)local_118._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_118._8_8_);
    }
  }
  return param_1;
}

// AppendLinearStairs @ 14ce52b40

/* WARNING: Removing unreachable block (ram,0x00014ce52c76) */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendLinearStairs
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,float param_4,float param_5,float param_6,int param_7,bool param_8,
          UGeometryScriptDebug *param_9)

{
  FText *pFVar1;
  FStairGenerator *this;
  FStairGenerator *pFVar2;
  EGeometryScriptPrimitiveUVMode EStackX_12;
  TVector<double>_u_0 local_e8;
  TTransform<double> local_c8;
  TOptional<UE::Geometry::TQuaternion<double>_> local_68;
  
  pFVar2 = (FStairGenerator *)0x0;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_e8._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"PrimitiveFunctions_AppendLinearStairs",
                        L"AppendLinearStairs: TargetMesh is Null");
    UE::Geometry::AppendError(param_9,InvalidInputs,pFVar1);
    if ((longlong *)local_e8._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_e8._s_0.X + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    this = ::operator_new(0x148);
    if (param_8) {
      if (this != (FStairGenerator *)0x0) {
        UE::Geometry::FStairGenerator::FStairGenerator(this);
        *(undefined4 *)&this[1]._padding_ = 0x41f00000;
        this->_padding_ = (longlong)&___7FFloatingStairGenerator_Geometry_UE__6B_;
        this->StairStyle = Floating;
        pFVar2 = this;
      }
    }
    else {
      if (this != (FStairGenerator *)0x0) {
        UE::Geometry::FStairGenerator::FStairGenerator(this);
        *(undefined4 *)&this[1]._padding_ = 0x41f00000;
        this->_padding_ = (longlong)&___7FLinearStairGenerator_Geometry_UE__6B_;
        this->StairStyle = Solid;
        pFVar2 = this;
      }
      local_e8._s_0.X = 0.0;
    }
    if (param_7 < 1) {
      param_7 = 1;
    }
    *(float *)&pFVar2[1]._padding_ = param_6;
    pFVar2->StepWidth = param_4;
    pFVar2->StepHeight = param_5;
    pFVar2->NumSteps = param_7;
    EStackX_12 = param_2.UVMode;
    pFVar2->bPolygroupPerQuad = param_2.PolygroupMode == PerQuad;
    pFVar2->bScaleUVByAspectRatio = EStackX_12 == Uniform;
    (**(code **)(pFVar2->_padding_ + 8))(pFVar2);
    local_c8.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    local_c8.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
    local_e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_c8.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    local_c8.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
    local_c8.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    local_c8.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
    local_c8.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    local_c8.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
    local_c8.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    local_c8.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
    local_c8.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    local_c8.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
    local_68.bIsSet = false;
    AppendPrimitive(param_1,(FMeshShapeGenerator *)pFVar2,&local_c8,param_2,
                    (TVector<double> *)&local_e8._s_0,&local_68);
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  return param_1;
}

// AppendOrientedBox @ 14ce52db0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendOrientedBox
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,FOrientedBox *param_4,int param_5,int param_6,int param_7,UGeometryScriptDebug *param_8)

{
  TOrientedBox3<double> *pTVar1;
  UDynamicMesh *pUVar2;
  TOrientedBox3<double> local_68;
  
  pTVar1 = UE::Geometry::TOrientedBox3<double>::TOrientedBox3<double>(&local_68,param_4);
  pUVar2 = UE::Private::AppendMeshHelper::AppendBox
                     (param_1,(FGeometryScriptSimpleCollision *)0x0,param_2,param_3,pTVar1,param_5,
                      param_6,param_7,param_8);
  return pUVar2;
}

// AppendOrientedBoxWithCollision @ 14ce52e40

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendOrientedBoxWithCollision
          (UDynamicMesh *param_1,FGeometryScriptSimpleCollision *param_2,
          FGeometryScriptPrimitiveOptions param_3,TTransform<double> *param_4,FOrientedBox *param_5,
          int param_6,int param_7,int param_8,UGeometryScriptDebug *param_9)

{
  TOrientedBox3<double> *pTVar1;
  UDynamicMesh *pUVar2;
  TOrientedBox3<double> local_78;
  
  FKAggregateGeom::EmptyElements(&param_2->AggGeom);
  pTVar1 = UE::Geometry::TOrientedBox3<double>::TOrientedBox3<double>(&local_78,param_5);
  pUVar2 = UE::Private::AppendMeshHelper::AppendBox
                     (param_1,param_2,param_3,param_4,pTVar1,param_6,param_7,param_8,param_9);
  return pUVar2;
}

// AppendPolygonListTriangulation @ 14ce52ef0

/* WARNING: Type propagation algorithm not settling */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendPolygonListTriangulation
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,FGeometryScriptGeneralPolygonList *param_4,
          FGeometryScriptPolygonsTriangulationOptions param_5,bool *param_6,
          UGeometryScriptDebug *param_7)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined1 _Src [8];
  TRefCountPtr<ITextData> TVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  FText *pFVar10;
  UDynamicMesh *pUVar11;
  FMeshShapeGenerator *pFVar12;
  int iVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  TGeneralPolygon2<double> *pTVar17;
  undefined1 local_268;
  undefined1 local_267 [7];
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_260;
  undefined1 local_250 [8];
  double dStack_248;
  uint local_240;
  TGeneralPolygon2<double> *local_238;
  FText local_230;
  FDelaunay2 local_220;
  FText local_200;
  TVector<double>_u_0 local_1e8;
  FFlatTriangulationMeshGenerator local_1c8;
  TTransform<double> local_d8;
  TOptional<UE::Geometry::TQuaternion<double>_> local_78;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_230,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendPolygonListTriangulation_NullTarget",
                         L"AppendDelaunayTriangulation2D: TargetMesh is Null");
    UE::Geometry::AppendError(param_7,InvalidInputs,pFVar10);
    if (local_230.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_230.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->Polygons).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  if ((param_4->Polygons).Object !=
      (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    UE::Geometry::FFlatTriangulationMeshGenerator::FFlatTriangulationMeshGenerator(&local_1c8);
    local_1c8._padding_._0_1_ = 1;
    *param_6 = false;
    if (((param_4->Polygons).Object ==
         (TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pUVar11 = (UDynamicMesh *)(*pcVar5)();
      return pUVar11;
    }
    local_200.TextData.Reference = (ITextData *)(param_4->Polygons).Object;
    local_240 = ((TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)
                local_200.TextData.Reference)->ArrayNum;
    uVar16 = (ulonglong)(int)local_240;
    pTVar17 = (TGeneralPolygon2<double> *)
              (((TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *)
               local_200.TextData.Reference)->AllocatorInstance).Data;
    local_230.TextData.Reference = (ITextData *)(pTVar17 + uVar16);
    while( true ) {
      TVar6.Reference = local_230.TextData.Reference;
      local_238 = pTVar17;
      if (*(int *)(local_200.TextData.Reference + 1) != (int)uVar16) {
        `TCheckedPointerIterator<UE::Geometry::TGeneralPolygon2<double>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_268);
      }
      if (pTVar17 == (TGeneralPolygon2<double> *)TVar6.Reference) {
        if ((2 < local_1c8.Vertices2D.ArrayNum) && (0 < local_1c8.Triangles2D.ArrayNum)) {
          local_78.bIsSet = false;
          local_250 = (undefined1  [8])UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_248 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_230.TextData.Reference =
               (ITextData *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          pFVar12 = UE::Geometry::FFlatTriangulationMeshGenerator::Generate(&local_1c8);
          local_d8.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
          local_d8.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
          local_1e8._s_0.X = (double)local_250;
          local_1e8._s_0.Y = dStack_248;
          local_1e8._s_0.Z = (double)local_230.TextData.Reference;
          local_d8.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
          local_d8.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
          local_d8.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
          local_d8.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
          local_d8.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
          local_d8.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
          local_d8.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
          local_d8.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
          local_d8.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
          local_d8.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
          AppendPrimitive(param_1,pFVar12,&local_d8,param_2,(TVector<double> *)&local_1e8._s_0,
                          &local_78);
        }
        UE::Geometry::FFlatTriangulationMeshGenerator::~FFlatTriangulationMeshGenerator(&local_1c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_4->Polygons).SharedReferenceCount.ReferenceController);
        return param_1;
      }
      local_220.RandomStream.InitialSeed = 0;
      local_220.RandomStream.Seed = 0;
      local_220.bKeepFastEdgeAdjacencyData = false;
      local_220.bValidateEdges = true;
      local_220.Connectivity.Ptr = (FDelaunay2Connectivity *)0x0;
      local_220.bIsConstrained = false;
      local_220.Result = NotComputed;
      local_220.bAutomaticallyFixEdgesToDuplicateVertices = true;
      local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_260.ArrayNum = 0;
      local_260.ArrayMax = 0;
      local_250 = (undefined1  [8])0x0;
      dStack_248 = 0.0;
      bVar8 = UE::Geometry::FDelaunay2::Triangulate<double>
                        (&local_220,pTVar17,&local_260,
                         (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)local_250
                         ,true);
      iVar7 = local_1c8.Vertices2D.ArrayNum;
      _Src = local_250;
      if ((!bVar8) && (*param_6 = true, param_5.bStillAppendOnTriangulationError == false)) {
        if (local_250 != (undefined1  [8])0x0) {
          FMemory::Free((void *)local_250);
        }
        if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_260.AllocatorInstance.Data);
        }
        if (local_220.Connectivity.Ptr != (FDelaunay2Connectivity *)0x0) {
          (**(code **)&local_220.Connectivity.Ptr[-1].DuplicateVertices.field_0x40)
                    (&local_220.Connectivity.Ptr[-1].DuplicateVertices.field_0x40);
        }
        UE::Geometry::FFlatTriangulationMeshGenerator::~FFlatTriangulationMeshGenerator(&local_1c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_4->Polygons).SharedReferenceCount.ReferenceController);
        return param_1;
      }
      lVar14 = (longlong)dStack_248._0_4_;
      if (dStack_248._0_4_ != 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,dStack_248._0_4_,&local_1c8.Vertices2D.AllocatorInstance,
                           &local_1c8.Vertices2D.ArrayNum,&local_1c8.Vertices2D.ArrayMax);
        memcpy(local_1c8.Vertices2D.AllocatorInstance.Data + (longlong)iVar9 * 0x10,(void *)_Src,
               lVar14 << 4);
      }
      uVar1 = local_1c8.Triangles2D.ArrayNum + local_260.ArrayNum;
      if ((int)uVar1 < 0) break;
      iVar9 = local_260.ArrayNum;
      if (local_1c8.Triangles2D.ArrayMax < (int)uVar1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,uVar1,&local_1c8.Triangles2D.AllocatorInstance,
                   local_1c8.Triangles2D.ArrayNum,&local_1c8.Triangles2D.ArrayMax);
        iVar9 = local_260.ArrayNum;
      }
      pFVar2 = local_260.AllocatorInstance.Data + (longlong)iVar9 * 0xc;
      FVar15.Data = local_260.AllocatorInstance.Data;
      iVar13 = iVar9;
      while( true ) {
        if (iVar13 != iVar9) {
          `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_267);
        }
        if (FVar15.Data == pFVar2) break;
        iVar13 = *(int *)(FVar15.Data + 8);
        iVar3 = *(int *)(FVar15.Data + 4);
        iVar4 = *(int *)FVar15.Data;
        if (local_1c8.Triangles2D.ArrayNum == local_1c8.Triangles2D.ArrayMax) {
          local_1c8.Triangles2D.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&local_1c8.Triangles2D.AllocatorInstance,
                          &local_1c8.Triangles2D.ArrayMax);
        }
        lVar14 = (longlong)local_1c8.Triangles2D.ArrayNum;
        FVar15.Data = FVar15.Data + 0xc;
        local_1c8.Triangles2D.ArrayNum = local_1c8.Triangles2D.ArrayNum + 1;
        *(int *)(local_1c8.Triangles2D.AllocatorInstance.Data + lVar14 * 0xc) = iVar4 + iVar7;
        *(int *)(local_1c8.Triangles2D.AllocatorInstance.Data + lVar14 * 0xc + 4) = iVar3 + iVar7;
        *(int *)(local_1c8.Triangles2D.AllocatorInstance.Data + lVar14 * 0xc + 8) = iVar13 + iVar7;
        iVar13 = local_260.ArrayNum;
      }
      if (local_250 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_250);
      }
      if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.AllocatorInstance.Data);
      }
      if (local_220.Connectivity.Ptr != (FDelaunay2Connectivity *)0x0) {
        (**(code **)&local_220.Connectivity.Ptr[-1].DuplicateVertices.field_0x40)
                  (&local_220.Connectivity.Ptr[-1].DuplicateVertices.field_0x40);
      }
      pTVar17 = local_238 + 1;
      uVar16 = (ulonglong)local_240;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_200,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                       L"PrimitiveFunctions_AppendPolygonListTriangulation_NullPolygonList",
                       L"AppendPolygonListTriangulation: Polygon List is not set");
  UE::Geometry::AppendError(param_7,InvalidInputs,pFVar10);
  if (local_200.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_200.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->Polygons).SharedReferenceCount.ReferenceController);
  return param_1;
}

// AppendRectangleXY @ 14ce53570

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRectangleXY
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,float param_4,float param_5,int param_6,int param_7,UGeometryScriptDebug *param_8)

{
  bool bVar1;
  FText *pFVar2;
  ITextData local_res8;
  FGeometryScriptPrimitiveOptions local_458 [2];
  TVector<double>_u_0 local_448;
  undefined1 *local_430;
  undefined1 *local_428;
  undefined1 local_418 [96];
  double dStack_3b8;
  double local_3b0;
  double dStack_3a8;
  char local_3a0;
  FRectangleMeshGenerator local_398;
  TTransform<double> local_2a8;
  FDynamicMesh3 local_248;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_448._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"PrimitiveFunctions_AppendRectangleXY",
                        L"AppendRectangle: TargetMesh is Null");
    UE::Geometry::AppendError(param_8,InvalidInputs,pFVar2);
    if ((longlong *)local_448._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_448._s_0.X + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    UE::Geometry::FRectangleMeshGenerator::FRectangleMeshGenerator(&local_398);
    local_398.Normal.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
    local_398.Origin.field0_0x0._s_0.X = 0.0;
    local_398.Origin.field0_0x0._s_0.Y = 0.0;
    local_398.WidthVertexCount = param_6;
    if (param_6 < 0) {
      local_398.WidthVertexCount = 0;
    }
    local_398.Origin.field0_0x0._s_0.Z = 0.0;
    local_398.Normal.field0_0x0._0_8_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
    local_398.Height = (double)param_5;
    local_398.HeightVertexCount = param_7;
    if (param_7 < 0) {
      local_398.HeightVertexCount = 0;
    }
    local_398.bSinglePolyGroup = param_2.PolygroupMode != PerQuad;
    local_398.Width = (double)param_4;
    UE::Geometry::FRectangleMeshGenerator::Generate(&local_398);
    local_res8 = (ITextData)&local_398;
    local_2a8.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    local_2a8.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
    local_418._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_418._24_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_418._32_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_2a8.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    local_2a8.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
    local_2a8.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    local_2a8.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
    local_2a8.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    local_2a8.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
    local_2a8.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    local_2a8.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
    local_2a8.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    local_2a8.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
    local_418[0x50] = '\0';
    local_458[0] = param_2;
    bVar1 = UDynamicMesh::IsEmpty(param_1);
    if (bVar1) {
      local_448._s_0.X = (double)&local_res8;
      local_448._s_0.Y = (double)&local_2a8;
      local_448._s_0.Z = (double)local_458;
      local_430 = local_418 + 0x10;
      local_428 = local_418 + 0x30;
      local_418._8_8_ = &local_448;
      local_418._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_418,
                 GeneralEdit,Unknown,false);
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_248,(FMeshShapeGenerator *)local_res8);
      local_3a0 = local_418[0x50];
      if (local_418[0x50] != '\0') {
        local_418._88_8_ = local_418._48_8_;
        dStack_3b8 = (double)local_418._56_8_;
        local_3b0 = (double)local_418._64_8_;
        dStack_3a8 = (double)local_418._72_8_;
      }
      local_448._s_0.X = (double)local_418._16_8_;
      local_448._s_0.Y = (double)local_418._24_8_;
      local_448._s_0.Z = (double)local_418._32_8_;
      ApplyPrimitiveOptionsToMesh
                (&local_248,&local_2a8,local_458[0],(TVector<double> *)&local_448._s_0,
                 (TOptional<UE::Geometry::TQuaternion<double>_> *)(local_418 + 0x58));
      local_418._0_8_ = &local_248;
      local_448._s_0.Y = (double)local_418;
      local_448._s_0.X =
           (double)UE::Core::Private::Function::
                   TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                   ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)
                         &local_448._s_0,GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_248);
    }
    local_398._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((void *)local_398._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_398._padding_);
    }
    if ((void *)local_398._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_398._padding_);
    }
    if ((void *)local_398._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_398._padding_);
    }
    if ((void *)local_398._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_398._padding_);
    }
    if ((void *)local_398._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_398._padding_);
    }
    if ((void *)local_398._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_398._padding_);
    }
    if ((void *)local_398._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_398._padding_);
    }
    if ((void *)local_398._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_398._padding_);
    }
    if ((void *)local_398._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_398._padding_);
    }
  }
  return param_1;
}

// AppendRectangle_Compatibility_5_0 @ 14ce538c0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRectangle_Compatibility_5_0
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,float param_4,float param_5,int param_6,int param_7,UGeometryScriptDebug *param_8)

{
  UDynamicMesh *pUVar1;
  TTransform<double> local_68;
  
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
  pUVar1 = AppendRectangleXY(param_1,param_2,&local_68,param_4 * __real_3f000000,
                             param_5 * __real_3f000000,param_6,param_7,param_8);
  return pUVar1;
}

// AppendRevolvePath @ 14ce53960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePath
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_4,
          FGeometryScriptRevolveOptions *param_5,int param_6,bool param_7,
          UGeometryScriptDebug *param_8)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FText *pFVar5;
  UDynamicMesh *pUVar6;
  TDynamicMeshOverlay<float,3> *pTVar7;
  TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *pTVar8;
  TDynamicMeshOverlay<float,3> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  float fVar12;
  undefined1 local_res8 [8];
  float local_448 [4];
  undefined1 local_438 [12];
  undefined2 local_42c;
  undefined1 local_42a;
  longlong local_428;
  longlong lStack_420;
  longlong local_418;
  longlong lStack_410;
  undefined1 local_408;
  undefined4 local_404;
  undefined1 local_400;
  longlong local_3f8;
  undefined1 local_3f0;
  ForAnyElementType local_3e8;
  uint local_3e0;
  uint local_3dc;
  bool local_3d8;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  FMeshNormals local_3b8;
  FMeshNormals local_3a0;
  FGeometryScriptPrimitiveOptions local_388;
  FDynamicMesh3 *local_380;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_378;
  float *local_370;
  code *local_368;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_360;
  FDynamicMesh3 *local_358;
  undefined8 **local_350;
  code *local_348;
  FDynamicMesh3 **local_340;
  code *local_338;
  FDynamicMesh3 **local_330;
  double *local_328;
  FGeometryScriptPrimitiveOptions *local_320;
  double local_318;
  double dStack_310;
  double local_308;
  FText local_300;
  FText local_2f0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  FDynamicMesh3 local_278;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_300,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"AppendRevolvePath_NullMesh",L"AppendRevolvePath: TargetMesh is Null");
    UE::Geometry::AppendError(param_8,InvalidInputs,pFVar5);
    if (local_300.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_300.TextData.Reference + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  iVar1 = param_4->ArrayNum;
  if (iVar1 < 2) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_2f0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"AppendRevolvePath_InvalidPolygon",
                        L"AppendRevolvePath: PathVertices array requires at least 2 positions");
    UE::Geometry::AppendError(param_8,InvalidInputs,pFVar5);
    if (local_2f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2f0.TextData.Reference + 0x10))();
    }
  }
  else {
    pTVar9 = (TDynamicMeshOverlay<float,3> *)0x0;
    pFVar10 = (param_4->AllocatorInstance).Data;
    local_428 = ___xmm_3ff00000000000003ff0000000000000;
    lStack_420 = _UNK_150689688;
    pFVar11 = pFVar10 + (longlong)iVar1 * 0x10;
    local_3f8 = __real_3f847ae147ae147b;
    local_438._0_4_ = 0x10;
    local_438._4_8_ = 0x43b40000;
    local_42c = 0;
    local_42a = 1;
    local_418 = 0;
    lStack_410 = 0;
    local_408 = 0;
    local_404 = 0x42c80000;
    local_400 = 0;
    local_3f0 = 1;
    local_3e8.Data = (FScriptContainerElement *)0x0;
    local_3e0 = 0;
    local_3dc = 0;
    local_3d8 = true;
    pTVar7 = pTVar9;
    while( true ) {
      uVar4 = (uint)pTVar7;
      if (param_4->ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
        uVar4 = local_3e0;
      }
      if (pFVar10 == pFVar11) break;
      local_3c8 = *(undefined8 *)pFVar10;
      uStack_3c0 = *(undefined8 *)(pFVar10 + 8);
      if (((local_3e8.Data <= (FScriptContainerElement *)&local_3c8) &&
          ((FScriptContainerElement *)&local_3c8 < local_3e8.Data + (longlong)(int)local_3dc * 0x10)
          ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), uVar4 = local_3e0, bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar6 = (UDynamicMesh *)(*pcVar2)();
        return pUVar6;
      }
      if (uVar4 == local_3dc) {
        uVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_3e8,(int *)&local_3dc);
      }
      local_3e0 = uVar4 + 1;
      pFVar10 = pFVar10 + 0x10;
      *(undefined8 *)(local_3e8.Data + (longlong)(int)uVar4 * 0x10) = local_3c8;
      *(undefined8 *)(local_3e8.Data + (longlong)(int)uVar4 * 0x10 + 8) = uStack_3c0;
      pTVar7 = (TDynamicMeshOverlay<float,3> *)(ulonglong)local_3e0;
    }
    local_3d8 = param_7;
    local_438._0_4_ = 2;
    if (2 < param_6) {
      local_438._0_4_ = param_6;
    }
    local_438._4_8_ = *(undefined8 *)param_5;
    local_42c = CONCAT11(param_5->bProfileAtMidpoint,param_5->bReverseDirection);
    local_42a = param_5->bFillPartialRevolveEndcaps;
    UE::Geometry::FRevolvePlanarPathGenerator::GenerateMesh
              ((FRevolvePlanarPathGenerator *)local_438,&local_278);
    if (param_5->bHardNormals != false) {
      fVar12 = param_5->HardNormalAngle;
      if (0.0 <= fVar12) {
        if (__real_43340000 <= fVar12) {
          fVar12 = __real_43340000;
        }
      }
      else {
        fVar12 = 0.0;
      }
      local_448[0] = cosf(fVar12 * __real_3c8efa35);
      local_3a0.Mesh = &local_278;
      local_3a0.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3a0.Normals.ArrayNum = 0;
      local_3a0.Normals.ArrayMax = 0;
      UE::Geometry::FMeshNormals::Compute_Triangle(&local_3a0);
      pTVar7 = pTVar9;
      if (0 < ((local_278.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
        pTVar7 = *(TDynamicMeshOverlay<float,3> **)
                  ((local_278.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
      }
      local_370 = local_448;
      local_360 = &local_378;
      local_368 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePath'::__l15::<lambda_1>,bool,int,int,int>
                  ::Call;
      local_378 = &local_3a0.Normals;
      UE::Geometry::TDynamicMeshOverlay<float,3>::CreateFromPredicate
                (pTVar7,(TFunctionRef<bool___cdecl(int,int,int)> *)&local_368,0.0);
      local_3b8.Mesh = &local_278;
      local_3b8.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3b8.Normals.ArrayNum = 0;
      local_3b8.Normals.ArrayMax = 0;
      pTVar7 = pTVar9;
      if (0 < ((local_278.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
        pTVar7 = *(TDynamicMeshOverlay<float,3> **)
                  ((local_278.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
      }
      UE::Geometry::FMeshNormals::Compute_Overlay_FaceAvg
                (&local_3b8,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pTVar7,
                 true,true);
      if (0 < ((local_278.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
        pTVar9 = *(TDynamicMeshOverlay<float,3> **)
                  ((local_278.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
      }
      UE::Geometry::FMeshNormals::CopyToOverlay
                (&local_3b8,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pTVar9,
                 false);
      if (local_3b8.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.Normals.AllocatorInstance.Data);
      }
      if (local_3a0.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a0.Normals.AllocatorInstance.Data);
      }
    }
    local_2d8 = (param_3->Rotation).XY.m128d_f64[0];
    dStack_2d0 = (param_3->Rotation).XY.m128d_f64[1];
    local_2c8 = (param_3->Rotation).ZW.m128d_f64[0];
    dStack_2c0 = (param_3->Rotation).ZW.m128d_f64[1];
    local_2b8 = (param_3->Translation).XY.m128d_f64[0];
    dStack_2b0 = (param_3->Translation).XY.m128d_f64[1];
    local_298 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_290 = (param_3->Scale3D).XY.m128d_f64[1];
    local_2a8 = (param_3->Translation).ZW.m128d_f64[0];
    dStack_2a0 = (param_3->Translation).ZW.m128d_f64[1];
    local_288 = (param_3->Scale3D).ZW.m128d_f64[0];
    dStack_280 = (param_3->Scale3D).ZW.m128d_f64[1];
    local_328 = &local_2d8;
    local_318 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_310 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_320 = &local_388;
    local_308 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_388 = param_2;
    bVar3 = UDynamicMesh::IsEmpty(param_1);
    if (bVar3) {
      local_358 = &local_278;
      pTVar8 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_348;
      local_350 = &local_328;
      local_340 = &local_358;
      local_348 = UE::Core::Private::Function::
                  TFunctionRefCaller<`AppendPrimitiveMesh'::__l5::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
    }
    else {
      `AppendPrimitiveMesh'::__l2::<lambda_1>::operator()(&local_328,&local_278);
      local_380 = &local_278;
      pTVar8 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_338;
      local_330 = &local_380;
      local_338 = UE::Core::Private::Function::
                  TFunctionRefCaller<`AppendPrimitiveMesh'::__l7::<lambda_3>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
    }
    UDynamicMesh::EditMesh(param_1,pTVar8,GeneralEdit,Unknown,false);
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_278);
    if (local_3e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data);
    }
  }
  return param_1;
}

// AppendRevolvePolygon @ 14ce53e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePolygon
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_4,
          FGeometryScriptRevolveOptions *param_5,float param_6,int param_7,
          UGeometryScriptDebug *param_8)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FText *pFVar5;
  UDynamicMesh *pUVar6;
  TDynamicMeshOverlay<float,3> *pTVar7;
  TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *pTVar8;
  TDynamicMeshOverlay<float,3> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  float fVar12;
  undefined1 local_res8 [8];
  float local_458 [2];
  double local_450;
  double dStack_448;
  undefined1 local_438 [12];
  undefined2 local_42c;
  undefined1 local_42a;
  longlong local_428;
  longlong lStack_420;
  longlong local_418;
  longlong lStack_410;
  undefined1 local_408;
  undefined4 local_404;
  undefined1 local_400;
  longlong local_3f8;
  undefined1 local_3f0;
  ForAnyElementType local_3e8;
  uint local_3e0;
  uint local_3dc;
  bool local_3d8;
  FMeshNormals local_3c8;
  FMeshNormals local_3b0;
  FGeometryScriptPrimitiveOptions local_398;
  FDynamicMesh3 *local_390;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_388;
  float *local_380;
  code *local_378;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_370;
  FDynamicMesh3 *local_368;
  undefined8 **local_360;
  code *local_358;
  FDynamicMesh3 **local_350;
  code *local_348;
  FDynamicMesh3 **local_340;
  double *local_338;
  FGeometryScriptPrimitiveOptions *local_330;
  double local_328;
  double dStack_320;
  double local_318;
  FText local_310;
  FText local_300;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  FDynamicMesh3 local_288;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_310,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"AppendRevolvePolygon_NullMesh",L"AppendRevolvePolygon: TargetMesh is Null"
                       );
    UE::Geometry::AppendError(param_8,InvalidInputs,pFVar5);
    if (local_310.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_310.TextData.Reference + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  iVar1 = param_4->ArrayNum;
  if (iVar1 < 3) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_300,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"AppendRevolvePolygon_InvalidPolygon",
                        L"AppendRevolvePolygon: PolygonVertices array requires at least 3 positions"
                       );
    UE::Geometry::AppendError(param_8,InvalidInputs,pFVar5);
    if (local_300.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_300.TextData.Reference + 0x10))();
    }
  }
  else {
    pTVar9 = (TDynamicMeshOverlay<float,3> *)0x0;
    pFVar10 = (param_4->AllocatorInstance).Data;
    local_428 = ___xmm_3ff00000000000003ff0000000000000;
    lStack_420 = _UNK_150689688;
    pFVar11 = pFVar10 + (longlong)iVar1 * 0x10;
    local_3f8 = __real_3f847ae147ae147b;
    local_438._0_4_ = 0x10;
    local_438._4_8_ = 0x43b40000;
    local_42c = 0;
    local_42a = 1;
    local_418 = 0;
    lStack_410 = 0;
    local_408 = 0;
    local_404 = 0x42c80000;
    local_400 = 0;
    local_3f0 = 1;
    local_3e8.Data = (FScriptContainerElement *)0x0;
    local_3e0 = 0;
    local_3dc = 0;
    local_3d8 = false;
    pTVar7 = pTVar9;
    while( true ) {
      uVar4 = (uint)pTVar7;
      if (param_4->ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
        uVar4 = local_3e0;
      }
      if (pFVar10 == pFVar11) break;
      dStack_448 = *(double *)(pFVar10 + 8);
      local_450 = (double)param_6 + *(double *)pFVar10;
      if (((local_3e8.Data <= (FScriptContainerElement *)&local_450) &&
          ((FScriptContainerElement *)&local_450 < local_3e8.Data + (longlong)(int)local_3dc * 0x10)
          ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), uVar4 = local_3e0, bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar6 = (UDynamicMesh *)(*pcVar2)();
        return pUVar6;
      }
      if (uVar4 == local_3dc) {
        uVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_3e8,(int *)&local_3dc);
      }
      local_3e0 = uVar4 + 1;
      pFVar10 = pFVar10 + 0x10;
      *(double *)(local_3e8.Data + (longlong)(int)uVar4 * 0x10) = local_450;
      *(double *)(local_3e8.Data + (longlong)(int)uVar4 * 0x10 + 8) = dStack_448;
      pTVar7 = (TDynamicMeshOverlay<float,3> *)(ulonglong)local_3e0;
    }
    local_438._0_4_ = 2;
    if (2 < param_7) {
      local_438._0_4_ = param_7;
    }
    local_438._4_8_ = *(undefined8 *)param_5;
    local_42c = CONCAT11(param_5->bProfileAtMidpoint,param_5->bReverseDirection);
    local_42a = param_5->bFillPartialRevolveEndcaps;
    UE::Geometry::FRevolvePlanarPolygonGenerator::GenerateMesh
              ((FRevolvePlanarPolygonGenerator *)local_438,&local_288);
    if (param_5->bHardNormals != false) {
      fVar12 = param_5->HardNormalAngle;
      if (0.0 <= fVar12) {
        if (__real_43340000 <= fVar12) {
          fVar12 = __real_43340000;
        }
      }
      else {
        fVar12 = 0.0;
      }
      local_458[0] = cosf(fVar12 * __real_3c8efa35);
      local_3b0.Mesh = &local_288;
      local_3b0.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3b0.Normals.ArrayNum = 0;
      local_3b0.Normals.ArrayMax = 0;
      UE::Geometry::FMeshNormals::Compute_Triangle(&local_3b0);
      pTVar7 = pTVar9;
      if (0 < ((local_288.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
        pTVar7 = *(TDynamicMeshOverlay<float,3> **)
                  ((local_288.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
      }
      local_380 = local_458;
      local_370 = &local_388;
      local_378 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePolygon'::__l15::<lambda_1>,bool,int,int,int>
                  ::Call;
      local_388 = &local_3b0.Normals;
      UE::Geometry::TDynamicMeshOverlay<float,3>::CreateFromPredicate
                (pTVar7,(TFunctionRef<bool___cdecl(int,int,int)> *)&local_378,0.0);
      local_3c8.Mesh = &local_288;
      local_3c8.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3c8.Normals.ArrayNum = 0;
      local_3c8.Normals.ArrayMax = 0;
      pTVar7 = pTVar9;
      if (0 < ((local_288.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
        pTVar7 = *(TDynamicMeshOverlay<float,3> **)
                  ((local_288.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
      }
      UE::Geometry::FMeshNormals::Compute_Overlay_FaceAvg
                (&local_3c8,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pTVar7,
                 true,true);
      if (0 < ((local_288.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
        pTVar9 = *(TDynamicMeshOverlay<float,3> **)
                  ((local_288.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
      }
      UE::Geometry::FMeshNormals::CopyToOverlay
                (&local_3c8,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pTVar9,
                 false);
      if (local_3c8.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c8.Normals.AllocatorInstance.Data);
      }
      if (local_3b0.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b0.Normals.AllocatorInstance.Data);
      }
    }
    local_2e8 = (param_3->Rotation).XY.m128d_f64[0];
    dStack_2e0 = (param_3->Rotation).XY.m128d_f64[1];
    local_2d8 = (param_3->Rotation).ZW.m128d_f64[0];
    dStack_2d0 = (param_3->Rotation).ZW.m128d_f64[1];
    local_2c8 = (param_3->Translation).XY.m128d_f64[0];
    dStack_2c0 = (param_3->Translation).XY.m128d_f64[1];
    local_2a8 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_2a0 = (param_3->Scale3D).XY.m128d_f64[1];
    local_2b8 = (param_3->Translation).ZW.m128d_f64[0];
    dStack_2b0 = (param_3->Translation).ZW.m128d_f64[1];
    local_298 = (param_3->Scale3D).ZW.m128d_f64[0];
    dStack_290 = (param_3->Scale3D).ZW.m128d_f64[1];
    local_338 = &local_2e8;
    local_328 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_320 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_330 = &local_398;
    local_318 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_398 = param_2;
    bVar3 = UDynamicMesh::IsEmpty(param_1);
    if (bVar3) {
      local_368 = &local_288;
      pTVar8 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_358;
      local_360 = &local_338;
      local_350 = &local_368;
      local_358 = UE::Core::Private::Function::
                  TFunctionRefCaller<`AppendPrimitiveMesh'::__l5::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
    }
    else {
      `AppendPrimitiveMesh'::__l2::<lambda_1>::operator()(&local_338,&local_288);
      local_390 = &local_288;
      pTVar8 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_348;
      local_340 = &local_390;
      local_348 = UE::Core::Private::Function::
                  TFunctionRefCaller<`AppendPrimitiveMesh'::__l7::<lambda_3>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
    }
    UDynamicMesh::EditMesh(param_1,pTVar8,GeneralEdit,Unknown,false);
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_288);
    if (local_3e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data);
    }
  }
  return param_1;
}

// AppendRoundRectangleXY @ 14ce543c0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRoundRectangleXY
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,float param_4,float param_5,float param_6,int param_7,int param_8,int param_9,
          UGeometryScriptDebug *param_10)

{
  bool bVar1;
  FText *pFVar2;
  ITextData local_res8;
  FGeometryScriptPrimitiveOptions local_468 [2];
  TVector<double>_u_0 local_458;
  undefined1 *local_440;
  undefined1 *local_438;
  undefined1 local_428 [96];
  double dStack_3c8;
  double local_3c0;
  double dStack_3b8;
  char local_3b0;
  undefined1 local_3a8 [200];
  double local_2e0;
  double local_2d8;
  int local_2d0;
  int local_2cc;
  undefined1 local_2c7;
  double local_2b8;
  int local_2b0;
  TTransform<double> local_2a8;
  FDynamicMesh3 local_248;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_458._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"PrimitiveFunctions_AppendRoundRectangleXY",
                        L"AppendRoundRectangle: TargetMesh is Null");
    UE::Geometry::AppendError(param_10,InvalidInputs,pFVar2);
    if ((longlong *)local_458._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_458._s_0.X + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    UE::Geometry::FRoundedRectangleMeshGenerator::FRoundedRectangleMeshGenerator
              ((FRoundedRectangleMeshGenerator *)local_3a8);
    local_3a8._192_4_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
    local_3a8._160_8_ = 0;
    local_3a8._168_8_ = 0;
    local_2d0 = param_7;
    if (param_7 < 0) {
      local_2d0 = 0;
    }
    local_3a8._184_8_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
    local_2e0 = (double)param_4;
    local_2cc = param_8;
    if (param_8 < 0) {
      local_2cc = 0;
    }
    local_2b0 = 3;
    if (3 < param_9) {
      local_2b0 = param_9;
    }
    local_2c7 = param_2.PolygroupMode != PerQuad;
    local_3a8._176_8_ = 0;
    if (param_6 <= __real_358637bd) {
      param_6 = __real_358637bd;
    }
    local_2d8 = (double)param_5;
    local_2b8 = (double)param_6;
    UE::Geometry::FRoundedRectangleMeshGenerator::Generate
              ((FRoundedRectangleMeshGenerator *)local_3a8);
    local_res8 = (ITextData)local_3a8;
    local_2a8.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    local_2a8.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
    local_428._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_428._24_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_428._32_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_2a8.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    local_2a8.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
    local_2a8.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    local_2a8.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
    local_2a8.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    local_2a8.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
    local_2a8.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    local_2a8.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
    local_2a8.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    local_2a8.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
    local_428[0x50] = '\0';
    local_468[0] = param_2;
    bVar1 = UDynamicMesh::IsEmpty(param_1);
    if (bVar1) {
      local_458._s_0.X = (double)&local_res8;
      local_458._s_0.Y = (double)&local_2a8;
      local_458._s_0.Z = (double)local_468;
      local_440 = local_428 + 0x10;
      local_438 = local_428 + 0x30;
      local_428._8_8_ = &local_458;
      local_428._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_428,
                 GeneralEdit,Unknown,false);
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_248,(FMeshShapeGenerator *)local_res8);
      local_3b0 = local_428[0x50];
      if (local_428[0x50] != '\0') {
        local_428._88_8_ = local_428._48_8_;
        dStack_3c8 = (double)local_428._56_8_;
        local_3c0 = (double)local_428._64_8_;
        dStack_3b8 = (double)local_428._72_8_;
      }
      local_458._s_0.X = (double)local_428._16_8_;
      local_458._s_0.Y = (double)local_428._24_8_;
      local_458._s_0.Z = (double)local_428._32_8_;
      ApplyPrimitiveOptionsToMesh
                (&local_248,&local_2a8,local_468[0],(TVector<double> *)&local_458._s_0,
                 (TOptional<UE::Geometry::TQuaternion<double>_> *)(local_428 + 0x58));
      local_428._0_8_ = &local_248;
      local_458._s_0.Y = (double)local_428;
      local_458._s_0.X =
           (double)UE::Core::Private::Function::
                   TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                   ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)
                         &local_458._s_0,GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_248);
    }
    local_3a8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((FScriptContainerElement *)local_3a8._136_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3a8._136_8_);
    }
    if ((FScriptContainerElement *)local_3a8._120_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3a8._120_8_);
    }
    if ((FScriptContainerElement *)local_3a8._104_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3a8._104_8_);
    }
    if ((FScriptContainerElement *)local_3a8._88_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3a8._88_8_);
    }
    if ((FScriptContainerElement *)local_3a8._72_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3a8._72_8_);
    }
    if ((FScriptContainerElement *)local_3a8._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3a8._56_8_);
    }
    if ((FScriptContainerElement *)local_3a8._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3a8._40_8_);
    }
    if ((FScriptContainerElement *)local_3a8._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3a8._24_8_);
    }
    if ((FScriptContainerElement *)local_3a8._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3a8._8_8_);
    }
  }
  return param_1;
}

// AppendRoundRectangle_Compatibility_5_0 @ 14ce54740

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRoundRectangle_Compatibility_5_0
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,float param_4,float param_5,float param_6,int param_7,int param_8,int param_9,
          UGeometryScriptDebug *param_10)

{
  UDynamicMesh *pUVar1;
  TTransform<double> local_68;
  
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
  pUVar1 = AppendRoundRectangleXY
                     (param_1,param_2,&local_68,param_4 * __real_3f000000,param_5 * __real_3f000000,
                      param_6,param_7,param_8,param_9,param_10);
  return pUVar1;
}

// AppendSimpleCollisionShapes @ 14ce54800

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleCollisionShapes
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,FGeometryScriptSimpleCollision *param_4,
          FGeometryScriptSimpleCollisionTriangulationOptions *param_5,UGeometryScriptDebug *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FText *pFVar3;
  UDynamicMesh *local_res8;
  FGeometryScriptPrimitiveOptions local_res10 [3];
  FSimpleCollisionToMeshAttributeSettings local_b8 [2];
  FSimpleCollisionTriangulationSettings local_b0;
  code *local_98;
  UDynamicMesh ***local_90;
  UDynamicMesh **local_88;
  TTransform<double> *local_80;
  FGeometryScriptPrimitiveOptions *local_78;
  double local_70;
  double dStack_68;
  double local_60;
  FText local_58;
  FText local_48;
  TVector<double>_u_0 local_38;
  
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_res8 = param_1;
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"PrimitiveFunctions_AppendSimpleCollisionShapes",
                        L"AppendSimpleCollisionShapes: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar3);
  }
  else {
    local_b0.BoxSphereStepsPerSide = param_5->SphereStepsPerSide;
    local_70 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_68 = (param_3->Scale3D).XY.m128d_f64[1];
    local_60 = (param_3->Scale3D).ZW.m128d_f64[0];
    local_b0.CapsuleCircleSteps = param_5->CapsuleCircleSteps;
    local_b0.CapsuleHemisphereSteps = param_5->CapsuleHemisphereSteps;
    local_b0.bApproximateLevelSetWithCubes = param_5->bApproximateLevelSetsWithCubes;
    local_88 = &local_res8;
    local_b0.LatLongSphereSteps = 0x10;
    local_b0.bUseBoxSphere = true;
    local_b8[0].bEnableAttributes = true;
    local_b8[0].bSetToPerTriangleNormals = false;
    local_b8[0].bInitializeConvexAndLevelSetUVs = true;
    (param_3->Scale3D).XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    (param_3->Scale3D).XY.m128d_f64[1] = (double)uVar1;
    (param_3->Scale3D).ZW.m128d_f64[0] = (double)uVar2;
    (param_3->Scale3D).ZW.m128d_f64[1] = 0.0;
    local_78 = local_res10;
    local_90 = &local_88;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleCollisionShapes'::__l2::<lambda_1>,void,int,FKShapeElem_const_&,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_80 = param_3;
    local_38._s_0.X = local_70;
    local_38._s_0.Y = dStack_68;
    local_38._s_0.Z = local_60;
    UE::Geometry::ConvertSimpleCollisionToDynamicMeshes
              (&param_4->AggGeom,(TVector<double> *)&local_38._s_0,
               (TFunctionRef<void___cdecl(int,FKShapeElem_const_&,UE::Geometry::FDynamicMesh3_&)> *)
               &local_98,&local_b0,local_b8);
    if (((param_4->AggGeom).TaperedCapsuleElems.ArrayNum == 0) &&
       ((param_4->AggGeom).SkinnedLevelSetElems.ArrayNum == 0)) {
      return local_res8;
    }
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"PrimitiveFunctions_AppendSimpleCollisionShapes Tapered Capsules Unsupported"
                        ,
                        L"AppendSimpleCollisionShapes: Tapered Capsules are not supported and will be skipped"
                       );
    UE::Geometry::AppendWarning(param_6,OperationFailed,pFVar3);
    local_58.TextData.Reference = local_48.TextData.Reference;
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return local_res8;
}

// AppendSimpleExtrudePolygon @ 14ce54970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleExtrudePolygon
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_4,float param_5,
          int param_6,bool param_7,EGeometryScriptPrimitiveOriginMode param_8,
          UGeometryScriptDebug *param_9)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  UDynamicMesh *pUVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStackY_668 [32];
  undefined1 local_618 [8];
  FGeneralizedCylinderGenerator *local_610;
  FGeometryScriptPrimitiveOptions local_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  double local_5e0;
  FDynamicMesh3 *local_5d8 [2];
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  double local_5b8;
  code *local_5a8;
  FGeneralizedCylinderGenerator ***local_5a0;
  code *local_598;
  FDynamicMesh3 **local_590;
  TVector<double>_u_0 local_588;
  FGeneralizedCylinderGenerator **local_568;
  TTransform<double> *local_560;
  FGeometryScriptPrimitiveOptions *local_558;
  undefined4 *local_550;
  double *local_548;
  FText local_540;
  FText local_530;
  double local_520;
  double dStack_518;
  double local_510;
  double dStack_508;
  char local_500;
  TQuaternion<double>_u_0 local_4f8;
  char local_4d8;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  double local_4a8;
  double dStack_4a0;
  TTransform<double> local_498;
  FDynamicMesh3 local_438;
  FGeneralizedCylinderGenerator local_208;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_668;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_540,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"AppendSimpleExtrudePolygon_NullMesh",
                        L"AppendSimpleExtrudePolygon: TargetMesh is Null");
    UE::Geometry::AppendError(param_9,InvalidInputs,pFVar5);
    if (local_540.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_540.TextData.Reference + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else if (param_4->ArrayNum < 3) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_530,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"AppendSimpleExtrudePolygon_InvalidPolygon",
                        L"AppendSimpleExtrudePolygon: PolygonVertices array requires at least 3 positions"
                       );
    UE::Geometry::AppendError(param_9,InvalidInputs,pFVar5);
    if (local_530.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_530.TextData.Reference + 0x10))();
    }
  }
  else {
    UE::Geometry::FGeneralizedCylinderGenerator::FGeneralizedCylinderGenerator(&local_208);
    iVar2 = param_4->ArrayNum;
    pFVar9 = (param_4->AllocatorInstance).Data;
    pFVar10 = pFVar9 + (longlong)iVar2 * 0x10;
    while( true ) {
      if (param_4->ArrayNum != iVar2) {
        local_618[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_618);
      }
      if (pFVar9 == pFVar10) break;
      local_600 = *(undefined8 *)pFVar9;
      uStack_5f8 = *(undefined8 *)(pFVar9 + 8);
      if (((local_208.CrossSection.Vertices.AllocatorInstance.Data <=
            (FScriptContainerElement *)&local_600) &&
          ((FScriptContainerElement *)&local_600 <
           local_208.CrossSection.Vertices.AllocatorInstance.Data +
           (longlong)local_208.CrossSection.Vertices.ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar6 = (UDynamicMesh *)(*pcVar3)();
        return pUVar6;
      }
      if (local_208.CrossSection.Vertices.ArrayNum == local_208.CrossSection.Vertices.ArrayMax) {
        local_208.CrossSection.Vertices.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)&local_208.CrossSection,
                        &local_208.CrossSection.Vertices.ArrayMax);
      }
      pFVar9 = pFVar9 + 0x10;
      *(undefined8 *)
       (local_208.CrossSection.Vertices.AllocatorInstance.Data +
       (longlong)local_208.CrossSection.Vertices.ArrayNum * 0x10) = local_600;
      *(undefined8 *)
       (local_208.CrossSection.Vertices.AllocatorInstance.Data +
        (longlong)local_208.CrossSection.Vertices.ArrayNum * 0x10 + 8) = uStack_5f8;
      local_208.CrossSection.Vertices.ArrayNum = local_208.CrossSection.Vertices.ArrayNum + 1;
    }
    iVar2 = param_6 + -1;
    if (param_6 + -1 < 1) {
      iVar2 = 1;
    }
    iVar8 = 0;
    iVar7 = iVar2 + 1;
    if (-1 < iVar7) {
      bVar4 = iVar2 == -1;
      do {
        local_5e0 = (double)param_5;
        if (!bVar4) {
          local_5e0 = (double)iVar8 * ((double)param_5 / (double)iVar2);
        }
        local_5f0 = 0;
        uStack_5e8 = 0;
        if (((local_208.Path.AllocatorInstance.Data <= (FScriptContainerElement *)&local_5f0) &&
            ((FScriptContainerElement *)&local_5f0 <
             local_208.Path.AllocatorInstance.Data + (longlong)local_208.Path.ArrayMax * 0x18)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar6 = (UDynamicMesh *)(*pcVar3)();
          return pUVar6;
        }
        if (local_208.Path.ArrayNum == local_208.Path.ArrayMax) {
          local_208.Path.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_208.Path.AllocatorInstance,&local_208.Path.ArrayMax);
        }
        iVar1 = local_208.Path.ArrayNum + 1;
        iVar8 = iVar8 + 1;
        *(undefined8 *)
         (local_208.Path.AllocatorInstance.Data + (longlong)local_208.Path.ArrayNum * 0x18) =
             local_5f0;
        *(undefined8 *)
         (local_208.Path.AllocatorInstance.Data + (longlong)local_208.Path.ArrayNum * 0x18 + 8) =
             uStack_5e8;
        *(double *)
         (local_208.Path.AllocatorInstance.Data + (longlong)local_208.Path.ArrayNum * 0x18 + 0x10) =
             local_5e0;
        bVar4 = iVar8 == iVar7;
        local_208.Path.ArrayNum = iVar1;
      } while (iVar8 <= iVar7);
    }
    local_208.InitialFrame.Origin.field0_0x0._s_0.X =
         (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                          UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    local_208.InitialFrame.Origin.field0_0x0._s_0.Y =
         (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                          UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    local_208._padding_._0_1_ = param_2.PolygroupMode == PerQuad;
    local_4b8 = 0;
    uStack_4b0 = 0;
    local_208.bCapped = param_7;
    local_4a8 = ___xmm_3ff00000000000000000000000000000;
    dStack_4a0 = _UNK_15061cbc8;
    local_208.InitialFrame.Origin.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_208.InitialFrame.Rotation.field0_0x0._s_0.X = 0.0;
    local_208.InitialFrame.Rotation.field0_0x0._s_0.Y = 0.0;
    local_208.InitialFrame.Rotation.field0_0x0._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_208.InitialFrame.Rotation.field0_0x0._s_0.W = _UNK_15061cbc8;
    UE::Geometry::FGeneralizedCylinderGenerator::Generate(&local_208);
    local_5c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uStack_5c4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_5c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_5bc = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_5b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (param_8 == Center) {
      local_588._s_0.Z = (double)(param_5 * __real_bf000000);
      local_5c8 = 0;
      uStack_5c4 = 0;
      uStack_5c0 = 0;
      uStack_5bc = 0;
      local_5b8 = local_588._s_0.Z;
    }
    local_498.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    local_498.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
    local_610 = &local_208;
    local_498.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    local_498.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
    local_498.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    local_498.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
    local_498.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    local_498.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
    local_498.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    local_498.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
    local_498.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    local_498.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
    local_500 = '\0';
    local_608 = param_2;
    bVar4 = UDynamicMesh::IsEmpty(param_1);
    if (bVar4) {
      local_568 = &local_610;
      local_560 = &local_498;
      local_558 = &local_608;
      local_550 = &local_5c8;
      local_548 = &local_520;
      local_5a8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
      local_5a0 = &local_568;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_5a8,
                 GeneralEdit,Unknown,false);
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_438,(FMeshShapeGenerator *)local_610);
      local_4d8 = local_500;
      if (local_500 != '\0') {
        local_4f8._s_0.X = local_520;
        local_4f8._s_0.Y = dStack_518;
        local_4f8._s_0.Z = local_510;
        local_4f8._s_0.W = dStack_508;
      }
      local_588._s_0.X = (double)CONCAT44(uStack_5c4,local_5c8);
      local_588._s_0.Y = (double)CONCAT44(uStack_5bc,uStack_5c0);
      local_588._s_0.Z = local_5b8;
      ApplyPrimitiveOptionsToMesh
                (&local_438,&local_498,local_608,(TVector<double> *)&local_588._s_0,
                 (TOptional<UE::Geometry::TQuaternion<double>_> *)&local_4f8._s_0);
      local_5d8[0] = &local_438;
      local_590 = local_5d8;
      local_598 = UE::Core::Private::Function::
                  TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_598,
                 GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_438);
    }
    if (local_208.PathTexCoord.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.PathTexCoord.AllocatorInstance.Data);
    }
    if (local_208.CrossSectionTexCoord.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.CrossSectionTexCoord.AllocatorInstance.Data);
    }
    if (local_208.PathScales.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.PathScales.AllocatorInstance.Data);
    }
    if (local_208.PathFrames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.PathFrames.AllocatorInstance.Data);
    }
    if (local_208.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Path.AllocatorInstance.Data);
    }
    if (local_208.CrossSection.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.CrossSection.Vertices.AllocatorInstance.Data);
    }
    local_208._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((void *)local_208._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_208._padding_);
    }
    if ((void *)local_208._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_208._padding_);
    }
    if ((void *)local_208._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_208._padding_);
    }
    if ((void *)local_208._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_208._padding_);
    }
    if ((void *)local_208._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_208._padding_);
    }
    if ((void *)local_208._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_208._padding_);
    }
    if ((void *)local_208._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_208._padding_);
    }
    if ((void *)local_208._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_208._padding_);
    }
    if ((void *)local_208._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_208._padding_);
    }
  }
  return param_1;
}

// AppendSimpleSweptPolygon @ 14ce55040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleSweptPolygon
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5,bool param_6,
          bool param_7,float param_8,float param_9,float param_10,float param_11,
          UGeometryScriptDebug *param_12)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  UDynamicMesh *pUVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auStackY_678 [32];
  undefined1 local_628;
  undefined1 local_627 [7];
  FGeneralizedCylinderGenerator *local_620;
  FGeometryScriptPrimitiveOptions local_618;
  double local_610;
  double dStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  UDynamicMesh *local_5e8;
  FDynamicMesh3 *local_5e0;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  code *local_5b8;
  FGeneralizedCylinderGenerator ***local_5b0;
  code *local_5a8;
  FDynamicMesh3 **local_5a0;
  FGeneralizedCylinderGenerator **local_598;
  TTransform<double> *local_590;
  FGeometryScriptPrimitiveOptions *local_588;
  double *local_580;
  double *local_578;
  FText local_570;
  FText local_560;
  FText local_550;
  TVector<double>_u_0 local_538;
  double local_518;
  double dStack_510;
  double local_508;
  double dStack_500;
  char local_4f8;
  TQuaternion<double>_u_0 local_4f0;
  char local_4d0;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  double local_4a0;
  double dStack_498;
  TTransform<double> local_488;
  FDynamicMesh3 local_428;
  FGeneralizedCylinderGenerator local_1f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_678;
  local_5e8 = param_1;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_570,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"AppendSimpleSweptPolygon_NullMesh",
                        L"AppendSimpleSweptPolygon: TargetMesh is Null");
    UE::Geometry::AppendError(param_12,InvalidInputs,pFVar4);
    if (local_570.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_570.TextData.Reference + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else if (param_4->ArrayNum < 3) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_560,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"AppendSimpleSweptPolygon_InvalidPolygon",
                        L"AppendSimpleSweptPolygon: PolygonVertices array requires at least 3 positions"
                       );
    UE::Geometry::AppendError(param_12,InvalidInputs,pFVar4);
    if (local_560.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_560.TextData.Reference + 0x10))();
    }
  }
  else if (param_5->ArrayNum < 2) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_550,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"AppendSimpleSweptPolygon_InvalidSweepPath",
                        L"AppendSimpleSweptPolygon: SweepPath array requires at least 2 positions");
    UE::Geometry::AppendError(param_12,InvalidInputs,pFVar4);
    if (local_550.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_550.TextData.Reference + 0x10))();
    }
  }
  else {
    UE::Geometry::FGeneralizedCylinderGenerator::FGeneralizedCylinderGenerator(&local_1f8);
    __libm_sse2_sincos_();
    iVar1 = param_4->ArrayNum;
    pFVar6 = (param_4->AllocatorInstance).Data;
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (param_4->ArrayNum != iVar1) {
        local_628 = 0;
        `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_628);
      }
      if (pFVar6 == pFVar7) break;
      local_610 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * *(double *)pFVar6 -
                  (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * *(double *)(pFVar6 + 8);
      dStack_608 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * *(double *)(pFVar6 + 8) +
                   (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * *(double *)pFVar6;
      if (((local_1f8.CrossSection.Vertices.AllocatorInstance.Data <=
            (FScriptContainerElement *)&local_610) &&
          ((FScriptContainerElement *)&local_610 <
           local_1f8.CrossSection.Vertices.AllocatorInstance.Data +
           (longlong)local_1f8.CrossSection.Vertices.ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UDynamicMesh *)(*pcVar2)();
        return pUVar5;
      }
      if (local_1f8.CrossSection.Vertices.ArrayNum == local_1f8.CrossSection.Vertices.ArrayMax) {
        local_1f8.CrossSection.Vertices.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)&local_1f8.CrossSection,
                        &local_1f8.CrossSection.Vertices.ArrayMax);
      }
      pFVar6 = pFVar6 + 0x10;
      *(double *)
       (local_1f8.CrossSection.Vertices.AllocatorInstance.Data +
       (longlong)local_1f8.CrossSection.Vertices.ArrayNum * 0x10) = local_610;
      *(double *)
       (local_1f8.CrossSection.Vertices.AllocatorInstance.Data +
        (longlong)local_1f8.CrossSection.Vertices.ArrayNum * 0x10 + 8) = dStack_608;
      local_1f8.CrossSection.Vertices.ArrayNum = local_1f8.CrossSection.Vertices.ArrayNum + 1;
    }
    iVar1 = param_5->ArrayNum;
    pFVar7 = (param_5->AllocatorInstance).Data;
    pFVar6 = pFVar7 + (longlong)iVar1 * 0x18;
    while( true ) {
      if (param_5->ArrayNum != iVar1) {
        local_627[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_627);
      }
      if (pFVar7 == pFVar6) break;
      local_600 = *(undefined8 *)pFVar7;
      uStack_5f8 = *(undefined8 *)(pFVar7 + 8);
      local_5f0 = *(undefined8 *)(pFVar7 + 0x10);
      if (((local_1f8.Path.AllocatorInstance.Data <= (FScriptContainerElement *)&local_600) &&
          ((FScriptContainerElement *)&local_600 <
           local_1f8.Path.AllocatorInstance.Data + (longlong)local_1f8.Path.ArrayMax * 0x18)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UDynamicMesh *)(*pcVar2)();
        return pUVar5;
      }
      if (local_1f8.Path.ArrayNum == local_1f8.Path.ArrayMax) {
        local_1f8.Path.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1f8.Path.AllocatorInstance,&local_1f8.Path.ArrayMax);
      }
      pFVar7 = pFVar7 + 0x18;
      *(undefined8 *)
       (local_1f8.Path.AllocatorInstance.Data + (longlong)local_1f8.Path.ArrayNum * 0x18) =
           local_600;
      *(undefined8 *)
       (local_1f8.Path.AllocatorInstance.Data + (longlong)local_1f8.Path.ArrayNum * 0x18 + 8) =
           uStack_5f8;
      *(undefined8 *)
       (local_1f8.Path.AllocatorInstance.Data + (longlong)local_1f8.Path.ArrayNum * 0x18 + 0x10) =
           local_5f0;
      local_1f8.Path.ArrayNum = local_1f8.Path.ArrayNum + 1;
    }
    local_1f8._padding_._0_1_ = param_2.PolygroupMode == PerQuad;
    local_1f8.bLoop = param_6;
    local_1f8.bCapped = param_7;
    if ((local_1f8.Path.ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UDynamicMesh *)(*pcVar2)();
      return pUVar5;
    }
    local_4b0 = 0;
    uStack_4a8 = 0;
    local_1f8.InitialFrame.Origin.field0_0x0._16_4_ =
         *(undefined4 *)(local_1f8.Path.AllocatorInstance.Data + 0x10);
    local_1f8.InitialFrame.Origin.field0_0x0._20_4_ =
         *(undefined4 *)(local_1f8.Path.AllocatorInstance.Data + 0x14);
    local_1f8.InitialFrame.Origin.field0_0x0._s_0.X =
         (double)*(undefined8 *)local_1f8.Path.AllocatorInstance.Data;
    local_1f8.InitialFrame.Origin.field0_0x0._s_0.Y =
         (double)*(undefined8 *)(local_1f8.Path.AllocatorInstance.Data + 8);
    local_1f8.InitialFrame.Rotation.field0_0x0._0_4_ = 0;
    local_1f8.InitialFrame.Rotation.field0_0x0._4_4_ = 0;
    local_4a0 = ___xmm_3ff00000000000000000000000000000;
    dStack_498 = _UNK_15061cbc8;
    local_1f8.StartScale = (double)param_8;
    local_1f8.InitialFrame.Rotation.field0_0x0._s_0.Y = 0.0;
    local_1f8.InitialFrame.Rotation.field0_0x0._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_1f8.EndScale = (double)param_9;
    local_1f8.InitialFrame.Rotation.field0_0x0._s_0.W = _UNK_15061cbc8;
    if (__real_3f800000 < param_11) {
      local_1f8.MiterLimit = (double)param_11;
      local_1f8.bAlignFramesToSampledTangents = true;
    }
    UE::Geometry::FGeneralizedCylinderGenerator::Generate(&local_1f8);
    param_1 = local_5e8;
    local_620 = &local_1f8;
    local_488.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    local_488.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
    local_5d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_5d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_5c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_488.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    local_488.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
    local_488.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    local_488.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
    local_488.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    local_488.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
    local_488.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    local_488.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
    local_488.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    local_488.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
    local_4f8 = '\0';
    local_618 = param_2;
    bVar3 = UDynamicMesh::IsEmpty(local_5e8);
    if (bVar3) {
      local_598 = &local_620;
      local_590 = &local_488;
      local_588 = &local_618;
      local_580 = &local_5d8;
      local_578 = &local_518;
      local_5b0 = &local_598;
      local_5b8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_5b8,
                 GeneralEdit,Unknown,false);
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_428,(FMeshShapeGenerator *)local_620);
      local_4d0 = local_4f8;
      if (local_4f8 != '\0') {
        local_4f0._s_0.X = local_518;
        local_4f0._s_0.Y = dStack_510;
        local_4f0._s_0.Z = local_508;
        local_4f0._s_0.W = dStack_500;
      }
      local_538._s_0.X = local_5d8;
      local_538._s_0.Y = dStack_5d0;
      local_538._s_0.Z = local_5c8;
      ApplyPrimitiveOptionsToMesh
                (&local_428,&local_488,local_618,(TVector<double> *)&local_538._s_0,
                 (TOptional<UE::Geometry::TQuaternion<double>_> *)&local_4f0._s_0);
      local_5e0 = &local_428;
      local_5a0 = &local_5e0;
      local_5a8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_5a8,
                 GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_428);
    }
    if (local_1f8.PathTexCoord.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.PathTexCoord.AllocatorInstance.Data);
    }
    if (local_1f8.CrossSectionTexCoord.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.CrossSectionTexCoord.AllocatorInstance.Data);
    }
    if (local_1f8.PathScales.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.PathScales.AllocatorInstance.Data);
    }
    if (local_1f8.PathFrames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.PathFrames.AllocatorInstance.Data);
    }
    if (local_1f8.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Path.AllocatorInstance.Data);
    }
    if (local_1f8.CrossSection.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.CrossSection.Vertices.AllocatorInstance.Data);
    }
    local_1f8._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
    if ((void *)local_1f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._padding_);
    }
  }
  return param_1;
}

// AppendSphereBox @ 14ce55bb0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereBox
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,float param_4,int param_5,int param_6,int param_7,
          EGeometryScriptPrimitiveOriginMode param_8,UGeometryScriptDebug *param_9)

{
  UDynamicMesh *pUVar1;
  TTransform<double> local_68;
  
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
  pUVar1 = UE::Private::AppendMeshHelper::AppendSphereBox
                     (param_1,(FGeometryScriptSimpleCollision *)0x0,param_2,&local_68,param_4,
                      param_5,param_6,param_7,param_8,param_9);
  return pUVar1;
}

// AppendSphereBoxWithCollision @ 14ce55c50

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereBoxWithCollision
          (UDynamicMesh *param_1,FGeometryScriptSimpleCollision *param_2,
          FGeometryScriptPrimitiveOptions param_3,TTransform<double> *param_4,float param_5,
          int param_6,int param_7,int param_8,EGeometryScriptPrimitiveOriginMode param_9,
          UGeometryScriptDebug *param_10)

{
  UDynamicMesh *pUVar1;
  TTransform<double> local_68;
  
  FKAggregateGeom::EmptyElements(&param_2->AggGeom);
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
  pUVar1 = UE::Private::AppendMeshHelper::AppendSphereBox
                     (param_1,param_2,param_3,&local_68,param_5,param_6,param_7,param_8,param_9,
                      param_10);
  return pUVar1;
}

// AppendSphereCovering @ 14ce55d40

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereCovering
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,FGeometryScriptSphereCovering *param_4,int param_5,int param_6,int param_7,
          UGeometryScriptDebug *param_8)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FSphereCovering *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ulonglong uVar6;
  double dVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  FText *pFVar11;
  UDynamicMesh *pUVar12;
  longlong lVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  FMeshShapeGenerator *local_res8;
  FGeometryScriptPrimitiveOptions local_508;
  longlong local_500;
  FDynamicMesh3 *local_4f8 [2];
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  code *local_4c8;
  FMeshShapeGenerator ***local_4c0;
  code *local_4b8;
  FDynamicMesh3 **local_4b0;
  FMeshShapeGenerator **local_4a8;
  TTransform<double> *local_4a0;
  FGeometryScriptPrimitiveOptions *local_498;
  double *local_490;
  double *local_488;
  FText local_480;
  FText local_470;
  TVector<double>_u_0 local_458;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  char local_418;
  TQuaternion<double>_u_0 local_410;
  char local_3f0;
  undefined1 local_3e8 [240];
  FIndex3i_u_0 local_2f8;
  bool local_2eb;
  float local_2e8;
  ESphereProjectionMethod local_2e4;
  TTransform<double> local_2d8;
  FDynamicMesh3 local_278;
  
  dVar7 = __real_3eb0c6f7a0000000;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_480,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendSphereCovering_NullTargetMesh",
                         L"AppendSphereCovering: TargetMesh is Null");
    UE::Geometry::AppendError(param_8,InvalidInputs,pFVar11);
    if (local_480.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_480.TextData.Reference + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  if ((param_4->Spheres).Object == (FSphereCovering *)0x0) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_470,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendSphereCovering_NullSphereCovering",
                         L"AppendSphereCovering: Sphere Covering is Null");
    UE::Geometry::AppendError(param_8,InvalidInputs,pFVar11);
    if (local_470.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_470.TextData.Reference + 0x10))();
      return param_1;
    }
  }
  else {
    uVar14 = 0;
    lVar13 = 0;
    uVar17 = SUB84(__real_3eb0c6f7a0000000,0);
    uVar6 = (ulonglong)__real_3eb0c6f7a0000000 >> 0x20;
    local_500 = 0;
    while( true ) {
      if (((param_4->Spheres).Object == (FSphereCovering *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pUVar12 = (UDynamicMesh *)(*pcVar5)();
        return pUVar12;
      }
      if ((((param_4->Spheres).Object)->Position).ArrayNum <= (int)uVar14) break;
      UE::Geometry::FGridBoxMeshGenerator::FGridBoxMeshGenerator((FGridBoxMeshGenerator *)local_3e8)
      ;
      local_3e8._0_8_ = &___7FBoxSphereGenerator_Geometry_UE__6B_;
      local_2e8 = 1.0;
      local_2e4 = CubeMapping;
      if (((param_4->Spheres).Object == (FSphereCovering *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pUVar12 = (UDynamicMesh *)(*pcVar5)();
        return pUVar12;
      }
      pFVar3 = (param_4->Spheres).Object;
      uVar10 = 0;
      if ((int)uVar14 < (pFVar3->Position).ArrayNum) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pUVar12 = (UDynamicMesh *)(*pcVar5)();
        return pUVar12;
      }
      pFVar4 = (pFVar3->Position).AllocatorInstance.Data;
      pFVar1 = pFVar4 + lVar13;
      local_3e8._160_8_ = *(undefined8 *)pFVar1;
      local_3e8._168_8_ = *(undefined8 *)(pFVar1 + 8);
      local_3e8._176_8_ = *(undefined8 *)(pFVar4 + lVar13 + 0x10);
      if (((param_4->Spheres).Object == (FSphereCovering *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pUVar12 = (UDynamicMesh *)(*pcVar5)();
        return pUVar12;
      }
      pFVar3 = (param_4->Spheres).Object;
      uVar10 = 0;
      if ((int)uVar14 < (pFVar3->Radius).ArrayNum) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pUVar12 = (UDynamicMesh *)(*pcVar5)();
        return pUVar12;
      }
      lVar8 = local_500;
      local_2eb = param_2.PolygroupMode == PerQuad;
      dVar2 = *(double *)((pFVar3->Radius).AllocatorInstance.Data + local_500);
      uVar15 = SUB84(dVar2,0);
      uVar16 = (int)((ulonglong)dVar2 >> 0x20);
      if (dVar2 <= dVar7) {
        uVar15 = uVar17;
        uVar16 = (int)uVar6;
      }
      local_2f8._s_0.A = param_5;
      local_2f8._s_0.B = param_6;
      local_2e8 = (float)(double)CONCAT44(uVar16,uVar15);
      local_2f8._s_0.C = param_7;
      UE::Geometry::FBoxSphereGenerator::Generate((FBoxSphereGenerator *)local_3e8);
      local_res8 = (FMeshShapeGenerator *)local_3e8;
      local_418 = '\0';
      local_2d8.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
      local_2d8.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
      local_4e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_4e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_4d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_2d8.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
      local_2d8.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
      local_2d8.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
      local_2d8.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
      local_2d8.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
      local_2d8.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
      local_2d8.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
      local_2d8.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
      local_2d8.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
      local_2d8.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
      local_508 = param_2;
      bVar9 = UDynamicMesh::IsEmpty(param_1);
      if (bVar9) {
        local_4a8 = &local_res8;
        local_4a0 = &local_2d8;
        local_498 = &local_508;
        local_490 = &local_4e8;
        local_4c0 = &local_4a8;
        local_4c8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                    ::Call;
        local_488 = &local_438;
        UDynamicMesh::EditMesh
                  (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_4c8,
                   GeneralEdit,Unknown,false);
      }
      else {
        UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_278,local_res8);
        local_3f0 = local_418;
        if (local_418 != '\0') {
          local_410._s_0.X = local_438;
          local_410._s_0.Y = dStack_430;
          local_410._s_0.Z = local_428;
          local_410._s_0.W = dStack_420;
        }
        local_458._s_0.X = local_4e8;
        local_458._s_0.Y = dStack_4e0;
        local_458._s_0.Z = local_4d8;
        ApplyPrimitiveOptionsToMesh
                  (&local_278,&local_2d8,local_508,(TVector<double> *)&local_458._s_0,
                   (TOptional<UE::Geometry::TQuaternion<double>_> *)&local_410._s_0);
        local_4f8[0] = &local_278;
        local_4b0 = local_4f8;
        local_4b8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                    ::Call;
        UDynamicMesh::EditMesh
                  (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_4b8,
                   GeneralEdit,Unknown,false);
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_278);
      }
      local_3e8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
      if ((FScriptContainerElement *)local_3e8._136_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3e8._136_8_);
      }
      if ((FScriptContainerElement *)local_3e8._120_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3e8._120_8_);
      }
      if ((FScriptContainerElement *)local_3e8._104_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3e8._104_8_);
      }
      if ((FScriptContainerElement *)local_3e8._88_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3e8._88_8_);
      }
      if ((FScriptContainerElement *)local_3e8._72_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3e8._72_8_);
      }
      if ((FScriptContainerElement *)local_3e8._56_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3e8._56_8_);
      }
      if ((FScriptContainerElement *)local_3e8._40_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3e8._40_8_);
      }
      if ((FScriptContainerElement *)local_3e8._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3e8._24_8_);
      }
      if ((FScriptContainerElement *)local_3e8._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3e8._8_8_);
      }
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 0x18;
      local_500 = lVar8 + 8;
    }
  }
  return param_1;
}

// AppendSphereLatLong @ 14ce566c0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereLatLong
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,float param_4,int param_5,int param_6,EGeometryScriptPrimitiveOriginMode param_7,
          UGeometryScriptDebug *param_8)

{
  UDynamicMesh *pUVar1;
  TTransform<double> local_68;
  
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
  pUVar1 = UE::Private::AppendMeshHelper::AppendSphereLatLong
                     (param_1,(FGeometryScriptSimpleCollision *)0x0,param_2,&local_68,param_4,
                      param_5,param_6,param_7,param_8);
  return pUVar1;
}

// AppendSphereLatLongWithCollision @ 14ce56760

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereLatLongWithCollision
          (UDynamicMesh *param_1,FGeometryScriptSimpleCollision *param_2,
          FGeometryScriptPrimitiveOptions param_3,TTransform<double> *param_4,float param_5,
          int param_6,int param_7,EGeometryScriptPrimitiveOriginMode param_8,
          UGeometryScriptDebug *param_9)

{
  UDynamicMesh *pUVar1;
  TTransform<double> local_68;
  
  FKAggregateGeom::EmptyElements(&param_2->AggGeom);
  local_68.Rotation.XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (param_4->Rotation).XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (param_4->Rotation).ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (param_4->Rotation).ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (param_4->Translation).XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (param_4->Translation).XY.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (param_4->Scale3D).XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (param_4->Scale3D).XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (param_4->Translation).ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (param_4->Translation).ZW.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (param_4->Scale3D).ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (param_4->Scale3D).ZW.m128d_f64[1];
  pUVar1 = UE::Private::AppendMeshHelper::AppendSphereLatLong
                     (param_1,param_2,param_3,&local_68,param_5,param_6,param_7,param_8,param_9);
  return pUVar1;
}

// AppendSpiralRevolvePolygon @ 14ce56b50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSpiralRevolvePolygon
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_4,
          FGeometryScriptRevolveOptions *param_5,float param_6,int param_7,float param_8,
          UGeometryScriptDebug *param_9)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FText *pFVar5;
  UDynamicMesh *pUVar6;
  TDynamicMeshOverlay<float,3> *pTVar7;
  TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *pTVar8;
  TDynamicMeshOverlay<float,3> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  float fVar12;
  double dVar13;
  undefined1 local_res8 [8];
  float local_458 [2];
  double local_450;
  double dStack_448;
  undefined1 local_438 [4];
  undefined8 local_434;
  undefined2 local_42c;
  undefined1 local_42a;
  longlong local_428;
  longlong lStack_420;
  longlong local_418;
  longlong lStack_410;
  undefined1 local_408;
  undefined4 local_404;
  undefined1 local_400;
  longlong local_3f8;
  undefined1 local_3f0;
  ForAnyElementType local_3e8;
  uint local_3e0;
  uint local_3dc;
  bool local_3d8;
  double local_3d0;
  FMeshNormals local_3c8;
  FMeshNormals local_3b0;
  FGeometryScriptPrimitiveOptions local_398;
  FDynamicMesh3 *local_390;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_388;
  float *local_380;
  code *local_378;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_370;
  FDynamicMesh3 *local_368;
  undefined8 **local_360;
  code *local_358;
  FDynamicMesh3 **local_350;
  code *local_348;
  FDynamicMesh3 **local_340;
  double *local_338;
  FGeometryScriptPrimitiveOptions *local_330;
  double local_328;
  double dStack_320;
  double local_318;
  FText local_310;
  FText local_300;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  FDynamicMesh3 local_288;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_310,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"AppendSpiralRevolvePolygon_NullMesh",
                        L"AppendSpiralRevolvePolygon: TargetMesh is Null");
    UE::Geometry::AppendError(param_9,InvalidInputs,pFVar5);
    if (local_310.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_310.TextData.Reference + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  iVar1 = param_4->ArrayNum;
  if (iVar1 < 3) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_300,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"AppendSpiralRevolvePolygon_InvalidPolygon",
                        L"AppendSpiralRevolvePolygon: PolygonVertices array requires at least 3 positions"
                       );
    UE::Geometry::AppendError(param_9,InvalidInputs,pFVar5);
    if (local_300.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_300.TextData.Reference + 0x10))();
    }
  }
  else {
    pTVar9 = (TDynamicMeshOverlay<float,3> *)0x0;
    pFVar10 = (param_4->AllocatorInstance).Data;
    local_428 = ___xmm_3ff00000000000003ff0000000000000;
    lStack_420 = _UNK_150689688;
    local_418 = 0;
    lStack_410 = 0;
    pFVar11 = pFVar10 + (longlong)iVar1 * 0x10;
    local_3d0 = __real_4049000000000000;
    local_3f8 = __real_3f847ae147ae147b;
    local_438 = (undefined1  [4])0x10;
    local_434 = 0x43b40000;
    local_42c = 0;
    local_42a = 1;
    local_408 = 0;
    local_404 = 0x42c80000;
    local_400 = 0;
    local_3f0 = 1;
    local_3e8.Data = (FScriptContainerElement *)0x0;
    local_3e0 = 0;
    local_3dc = 0;
    local_3d8 = false;
    pTVar7 = pTVar9;
    while( true ) {
      uVar4 = (uint)pTVar7;
      if (param_4->ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
        uVar4 = local_3e0;
      }
      if (pFVar10 == pFVar11) break;
      dStack_448 = *(double *)(pFVar10 + 8);
      local_450 = (double)param_6 + *(double *)pFVar10;
      if (((local_3e8.Data <= (FScriptContainerElement *)&local_450) &&
          ((FScriptContainerElement *)&local_450 < local_3e8.Data + (longlong)(int)local_3dc * 0x10)
          ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), uVar4 = local_3e0, bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar6 = (UDynamicMesh *)(*pcVar2)();
        return pUVar6;
      }
      if (uVar4 == local_3dc) {
        uVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_3e8,(int *)&local_3dc);
      }
      local_3e0 = uVar4 + 1;
      pFVar10 = pFVar10 + 0x10;
      *(double *)(local_3e8.Data + (longlong)(int)uVar4 * 0x10) = local_450;
      *(double *)(local_3e8.Data + (longlong)(int)uVar4 * 0x10 + 8) = dStack_448;
      pTVar7 = (TDynamicMeshOverlay<float,3> *)(ulonglong)local_3e0;
    }
    local_438 = (undefined1  [4])2;
    if (2 < param_7) {
      local_438 = (undefined1  [4])param_7;
    }
    local_42c = CONCAT11(param_5->bProfileAtMidpoint,param_5->bReverseDirection);
    local_42a = param_5->bFillPartialRevolveEndcaps;
    dVar13 = (double)param_5->RevolveDegrees;
    if ((double)param_5->RevolveDegrees <= __real_3f1a36e2eb1c432d) {
      dVar13 = __real_3f1a36e2eb1c432d;
    }
    local_434._4_4_ = param_5->DegreeOffset;
    local_434._0_4_ = (float)dVar13;
    local_3d0 = (double)param_8;
    UE::Geometry::FSpiralRevolvePlanarPolygonGenerator::GenerateMesh
              ((FSpiralRevolvePlanarPolygonGenerator *)local_438,&local_288);
    if (param_5->bHardNormals != false) {
      fVar12 = param_5->HardNormalAngle;
      if (0.0 <= fVar12) {
        if (__real_43340000 <= fVar12) {
          fVar12 = __real_43340000;
        }
      }
      else {
        fVar12 = 0.0;
      }
      local_458[0] = cosf(fVar12 * __real_3c8efa35);
      local_3b0.Mesh = &local_288;
      local_3b0.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3b0.Normals.ArrayNum = 0;
      local_3b0.Normals.ArrayMax = 0;
      UE::Geometry::FMeshNormals::Compute_Triangle(&local_3b0);
      pTVar7 = pTVar9;
      if (0 < ((local_288.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
        pTVar7 = *(TDynamicMeshOverlay<float,3> **)
                  ((local_288.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
      }
      local_380 = local_458;
      local_370 = &local_388;
      local_378 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSpiralRevolvePolygon'::__l15::<lambda_1>,bool,int,int,int>
                  ::Call;
      local_388 = &local_3b0.Normals;
      UE::Geometry::TDynamicMeshOverlay<float,3>::CreateFromPredicate
                (pTVar7,(TFunctionRef<bool___cdecl(int,int,int)> *)&local_378,0.0);
      local_3c8.Mesh = &local_288;
      local_3c8.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3c8.Normals.ArrayNum = 0;
      local_3c8.Normals.ArrayMax = 0;
      pTVar7 = pTVar9;
      if (0 < ((local_288.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
        pTVar7 = *(TDynamicMeshOverlay<float,3> **)
                  ((local_288.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
      }
      UE::Geometry::FMeshNormals::Compute_Overlay_FaceAvg
                (&local_3c8,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pTVar7,
                 true,true);
      if (0 < ((local_288.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
        pTVar9 = *(TDynamicMeshOverlay<float,3> **)
                  ((local_288.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
      }
      UE::Geometry::FMeshNormals::CopyToOverlay
                (&local_3c8,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pTVar9,
                 false);
      if (local_3c8.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c8.Normals.AllocatorInstance.Data);
      }
      if (local_3b0.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b0.Normals.AllocatorInstance.Data);
      }
    }
    local_2e8 = (param_3->Rotation).XY.m128d_f64[0];
    dStack_2e0 = (param_3->Rotation).XY.m128d_f64[1];
    local_2d8 = (param_3->Rotation).ZW.m128d_f64[0];
    dStack_2d0 = (param_3->Rotation).ZW.m128d_f64[1];
    local_2c8 = (param_3->Translation).XY.m128d_f64[0];
    dStack_2c0 = (param_3->Translation).XY.m128d_f64[1];
    local_2a8 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_2a0 = (param_3->Scale3D).XY.m128d_f64[1];
    local_2b8 = (param_3->Translation).ZW.m128d_f64[0];
    dStack_2b0 = (param_3->Translation).ZW.m128d_f64[1];
    local_298 = (param_3->Scale3D).ZW.m128d_f64[0];
    dStack_290 = (param_3->Scale3D).ZW.m128d_f64[1];
    local_338 = &local_2e8;
    local_328 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_320 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_330 = &local_398;
    local_318 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_398 = param_2;
    bVar3 = UDynamicMesh::IsEmpty(param_1);
    if (bVar3) {
      local_368 = &local_288;
      pTVar8 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_358;
      local_360 = &local_338;
      local_350 = &local_368;
      local_358 = UE::Core::Private::Function::
                  TFunctionRefCaller<`AppendPrimitiveMesh'::__l5::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
    }
    else {
      `AppendPrimitiveMesh'::__l2::<lambda_1>::operator()(&local_338,&local_288);
      local_390 = &local_288;
      pTVar8 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_348;
      local_340 = &local_390;
      local_348 = UE::Core::Private::Function::
                  TFunctionRefCaller<`AppendPrimitiveMesh'::__l7::<lambda_3>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
    }
    UDynamicMesh::EditMesh(param_1,pTVar8,GeneralEdit,Unknown,false);
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_288);
    if (local_3e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data);
    }
  }
  return param_1;
}

// AppendSweepPolygon @ 14ce570c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSweepPolygon
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_5,bool param_6,
          bool param_7,float param_8,float param_9,float param_10,float param_11,
          UGeometryScriptDebug *param_12)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  FText *pFVar13;
  UDynamicMesh *pUVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auStackY_7b8 [32];
  undefined1 local_768;
  undefined1 local_767 [7];
  FGeneralizedCylinderGenerator *local_760;
  FGeometryScriptPrimitiveOptions local_758;
  double local_750;
  double dStack_748;
  double local_740;
  double dStack_738;
  double local_730;
  double dStack_728;
  double local_720;
  double local_718;
  double dStack_710;
  double local_708;
  double dStack_700;
  double dStack_6f8;
  double dStack_6f0;
  double dStack_6e8;
  UDynamicMesh *local_6e0;
  FDynamicMesh3 *local_6d8;
  TQuaternion<double>_u_0 local_6d0;
  double local_6a8;
  double dStack_6a0;
  double local_698;
  code *local_688;
  FGeneralizedCylinderGenerator ***local_680;
  code *local_678;
  FDynamicMesh3 **local_670;
  FGeneralizedCylinderGenerator **local_668;
  TTransform<double> *local_660;
  FGeometryScriptPrimitiveOptions *local_658;
  double *local_650;
  double *local_648;
  TVector<double>_u_0 local_640;
  double local_628;
  double local_620;
  double local_618;
  double local_610;
  double local_608;
  double local_600;
  FText local_5f8;
  FText local_5e8;
  FText local_5d8;
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  TVector<double>_u_0 local_5a8;
  double local_588;
  double dStack_580;
  double local_578;
  double dStack_570;
  char local_568;
  TQuaternion<double>_u_0 local_560;
  char local_540;
  undefined8 local_520;
  undefined8 uStack_518;
  double local_510;
  double dStack_508;
  double local_500;
  double dStack_4f8;
  double local_4f0;
  TTransform<double> local_4e8;
  FDynamicMesh3 local_488;
  FGeneralizedCylinderGenerator local_258;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_7b8;
  local_6e0 = param_1;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_5f8,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"AppendSweepPolygon_NullMesh",L"AppendSweepPolygon: TargetMesh is Null");
    UE::Geometry::AppendError(param_12,InvalidInputs,pFVar13);
    if (local_5f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5f8.TextData.Reference + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else if (param_4->ArrayNum < 3) {
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_5e8,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"AppendSweepPolygon_InvalidPolygon",
                         L"AppendSweepPolygon: PolygonVertices array requires at least 3 positions")
    ;
    UE::Geometry::AppendError(param_12,InvalidInputs,pFVar13);
    if (local_5e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5e8.TextData.Reference + 0x10))();
    }
  }
  else if (param_5->ArrayNum < 2) {
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_5d8,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"AppendSweepPolygon_InvalidSweepPath",
                         L"AppendSweepPolygon: SweepPath array requires at least 2 positions");
    UE::Geometry::AppendError(param_12,InvalidInputs,pFVar13);
    if (local_5d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5d8.TextData.Reference + 0x10))();
    }
  }
  else {
    __libm_sse2_sincos_();
    UE::Geometry::FGeneralizedCylinderGenerator::FGeneralizedCylinderGenerator(&local_258);
    iVar2 = param_4->ArrayNum;
    pFVar17 = (param_4->AllocatorInstance).Data;
    pFVar16 = pFVar17 + (longlong)iVar2 * 0x10;
    while( true ) {
      if (param_4->ArrayNum != iVar2) {
        local_768 = 0;
        `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_768);
      }
      dVar11 = __real_3ff0000000000000;
      if (pFVar17 == pFVar16) break;
      local_750 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * *(double *)pFVar17 -
                  *(double *)(pFVar17 + 8) * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      dStack_748 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * *(double *)(pFVar17 + 8) +
                   (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * *(double *)pFVar17;
      if (((local_258.CrossSection.Vertices.AllocatorInstance.Data <=
            (FScriptContainerElement *)&local_750) &&
          ((FScriptContainerElement *)&local_750 <
           local_258.CrossSection.Vertices.AllocatorInstance.Data +
           (longlong)local_258.CrossSection.Vertices.ArrayMax * 0x10)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar3 = (code *)swi(3);
        pUVar14 = (UDynamicMesh *)(*pcVar3)();
        return pUVar14;
      }
      if (local_258.CrossSection.Vertices.ArrayNum == local_258.CrossSection.Vertices.ArrayMax) {
        local_258.CrossSection.Vertices.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)&local_258.CrossSection,
                        &local_258.CrossSection.Vertices.ArrayMax);
      }
      pFVar17 = pFVar17 + 0x10;
      *(double *)
       (local_258.CrossSection.Vertices.AllocatorInstance.Data +
       (longlong)local_258.CrossSection.Vertices.ArrayNum * 0x10) = local_750;
      *(double *)
       (local_258.CrossSection.Vertices.AllocatorInstance.Data +
        (longlong)local_258.CrossSection.Vertices.ArrayNum * 0x10 + 8) = dStack_748;
      local_258.CrossSection.Vertices.ArrayNum = local_258.CrossSection.Vertices.ArrayNum + 1;
    }
    pFVar16 = (param_5->AllocatorInstance).Data;
    iVar2 = param_5->ArrayNum;
    pFVar17 = pFVar16 + 0x20;
    pFVar18 = pFVar16 + (longlong)iVar2 * 0x60;
    while( true ) {
      if (param_5->ArrayNum != iVar2) {
        local_767[0] = 0;
        `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_767);
      }
      if (pFVar16 == pFVar18) break;
      local_730 = *(double *)pFVar17;
      dStack_728 = *(double *)(pFVar17 + 8);
      local_720 = *(double *)(pFVar17 + 0x10);
      if (((local_258.Path.AllocatorInstance.Data <= (FScriptContainerElement *)&local_730) &&
          ((FScriptContainerElement *)&local_730 <
           local_258.Path.AllocatorInstance.Data + (longlong)local_258.Path.ArrayMax * 0x18)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar3 = (code *)swi(3);
        pUVar14 = (UDynamicMesh *)(*pcVar3)();
        return pUVar14;
      }
      if (local_258.Path.ArrayNum == local_258.Path.ArrayMax) {
        local_258.Path.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_258.Path.AllocatorInstance,&local_258.Path.ArrayMax);
      }
      dStack_700 = 0.0;
      dStack_6e8 = dVar11;
      local_6d0._s_0.X = 0.0;
      *(double *)(local_258.Path.AllocatorInstance.Data + (longlong)local_258.Path.ArrayNum * 0x18)
           = local_730;
      *(double *)
       (local_258.Path.AllocatorInstance.Data + (longlong)local_258.Path.ArrayNum * 0x18 + 8) =
           dStack_728;
      *(double *)
       (local_258.Path.AllocatorInstance.Data + (longlong)local_258.Path.ArrayNum * 0x18 + 0x10) =
           local_720;
      dVar7 = *(double *)pFVar16;
      dVar8 = *(double *)(pFVar16 + 8);
      dVar9 = *(double *)(pFVar16 + 0x10);
      dVar10 = *(double *)(pFVar16 + 0x18);
      local_6d0._s_0.W = dVar11;
      dVar4 = dVar9 + dVar9;
      dVar5 = dVar8 + dVar8;
      local_718 = *(double *)pFVar17;
      dStack_710 = *(double *)(pFVar17 + 8);
      local_610 = dVar10 * (dVar7 + dVar7);
      dVar6 = dVar7 * (dVar7 + dVar7);
      local_708 = *(double *)(pFVar17 + 0x10);
      local_640._s_0.X = dVar7 * dVar5 - dVar10 * dVar4;
      local_618 = dVar10 * dVar4 + dVar7 * dVar5;
      local_640._s_0.Y = dVar10 * dVar5 + dVar7 * dVar4;
      local_640._s_0.Z = dVar11 - (dVar9 * dVar4 + dVar8 * dVar5);
      local_600 = dVar7 * dVar4 - dVar10 * dVar5;
      dStack_6f8 = 0.0;
      dStack_6f0 = 0.0;
      local_6d0._s_0.Y = 0.0;
      local_6d0._s_0.Z = 0.0;
      local_628 = dVar11 - (dVar6 + dVar9 * dVar4);
      local_620 = dVar8 * dVar4 - local_610;
      local_610 = local_610 + dVar8 * dVar4;
      local_608 = dVar11 - (dVar6 + dVar8 * dVar5);
      local_5c8 = local_718;
      dStack_5c0 = dStack_710;
      local_5b8 = local_708;
      local_258.Path.ArrayNum = local_258.Path.ArrayNum + 1;
      UE::Geometry::TQuaternion<double>::SetFromRotationMatrix
                ((TQuaternion<double> *)&local_6d0._s_0,(TMatrix3<double> *)&local_640._s_0);
      dStack_700 = local_6d0._s_0.X;
      dStack_6f8 = local_6d0._s_0.Y;
      dStack_6f0 = local_6d0._s_0.Z;
      dStack_6e8 = local_6d0._s_0.W;
      if (((local_258.PathFrames.AllocatorInstance.Data <= (FScriptContainerElement *)&local_718) &&
          ((FScriptContainerElement *)&local_718 <
           local_258.PathFrames.AllocatorInstance.Data +
           (longlong)local_258.PathFrames.ArrayMax * 0x38)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar3 = (code *)swi(3);
        pUVar14 = (UDynamicMesh *)(*pcVar3)();
        return pUVar14;
      }
      if (local_258.PathFrames.ArrayNum == local_258.PathFrames.ArrayMax) {
        local_258.PathFrames.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x838,&local_258.PathFrames.AllocatorInstance,&local_258.PathFrames.ArrayMax
                       );
      }
      iVar1 = local_258.PathFrames.ArrayNum + 1;
      lVar15 = (longlong)local_258.PathFrames.ArrayNum * 0x38;
      *(double *)(local_258.PathFrames.AllocatorInstance.Data + lVar15) = local_718;
      *(double *)(local_258.PathFrames.AllocatorInstance.Data + lVar15 + 8) = dStack_710;
      *(double *)(local_258.PathFrames.AllocatorInstance.Data + lVar15 + 0x10) = local_708;
      *(double *)(local_258.PathFrames.AllocatorInstance.Data + lVar15 + 0x10 + 8) = dStack_700;
      *(double *)(local_258.PathFrames.AllocatorInstance.Data + lVar15 + 0x20) = dStack_6f8;
      *(double *)(local_258.PathFrames.AllocatorInstance.Data + lVar15 + 0x20 + 8) = dStack_6f0;
      *(double *)(local_258.PathFrames.AllocatorInstance.Data + lVar15 + 0x30) = dStack_6e8;
      local_500 = *(double *)(pFVar17 + 0x20);
      local_740 = *(double *)(pFVar17 + 0x28);
      dStack_738 = *(double *)(pFVar17 + 0x30);
      dStack_4f8 = local_740;
      local_4f0 = dStack_738;
      local_258.PathFrames.ArrayNum = iVar1;
      if (((local_258.PathScales.AllocatorInstance.Data <= (FScriptContainerElement *)&local_740) &&
          ((FScriptContainerElement *)&local_740 <
           local_258.PathScales.AllocatorInstance.Data +
           (longlong)local_258.PathScales.ArrayMax * 0x10)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar3 = (code *)swi(3);
        pUVar14 = (UDynamicMesh *)(*pcVar3)();
        return pUVar14;
      }
      if (local_258.PathScales.ArrayNum == local_258.PathScales.ArrayMax) {
        local_258.PathScales.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_258.PathScales.AllocatorInstance,&local_258.PathScales.ArrayMax
                       );
      }
      pFVar16 = pFVar16 + 0x60;
      pFVar17 = pFVar17 + 0x60;
      *(double *)
       (local_258.PathScales.AllocatorInstance.Data + (longlong)local_258.PathScales.ArrayNum * 0x10
       ) = local_740;
      *(double *)
       (local_258.PathScales.AllocatorInstance.Data + (longlong)local_258.PathScales.ArrayNum * 0x10
       + 8) = dStack_738;
      local_258.PathScales.ArrayNum = local_258.PathScales.ArrayNum + 1;
    }
    local_258._padding_._0_1_ = param_2.PolygroupMode == PerQuad;
    local_258.bLoop = param_6;
    local_258.bCapped = param_7;
    if ((local_258.Path.ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar3 = (code *)swi(3);
      pUVar14 = (UDynamicMesh *)(*pcVar3)();
      return pUVar14;
    }
    local_520 = 0;
    uStack_518 = 0;
    local_258.InitialFrame.Origin.field0_0x0._16_4_ =
         *(undefined4 *)(local_258.Path.AllocatorInstance.Data + 0x10);
    local_258.InitialFrame.Origin.field0_0x0._20_4_ =
         *(undefined4 *)(local_258.Path.AllocatorInstance.Data + 0x14);
    local_258.InitialFrame.Origin.field0_0x0._s_0.X =
         (double)*(undefined8 *)local_258.Path.AllocatorInstance.Data;
    local_258.InitialFrame.Origin.field0_0x0._s_0.Y =
         (double)*(undefined8 *)(local_258.Path.AllocatorInstance.Data + 8);
    local_258.InitialFrame.Rotation.field0_0x0._0_4_ = 0;
    local_258.InitialFrame.Rotation.field0_0x0._4_4_ = 0;
    local_510 = ___xmm_3ff00000000000000000000000000000;
    dStack_508 = _UNK_15061cbc8;
    local_258.StartScale = (double)param_8;
    local_258.InitialFrame.Rotation.field0_0x0._s_0.Y = 0.0;
    local_258.InitialFrame.Rotation.field0_0x0._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_258.EndScale = (double)param_9;
    local_258.InitialFrame.Rotation.field0_0x0._s_0.W = _UNK_15061cbc8;
    if (__real_3f800000 < param_11) {
      local_258.MiterLimit = (double)param_11;
      local_258.bAlignFramesToSampledTangents = true;
    }
    UE::Geometry::FGeneralizedCylinderGenerator::Generate(&local_258);
    param_1 = local_6e0;
    local_760 = &local_258;
    local_4e8.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    local_4e8.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
    local_6a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_6a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_698 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_4e8.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    local_4e8.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
    local_4e8.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    local_4e8.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
    local_4e8.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    local_4e8.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
    local_4e8.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    local_4e8.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
    local_4e8.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    local_4e8.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
    local_568 = '\0';
    local_758 = param_2;
    bVar12 = UDynamicMesh::IsEmpty(local_6e0);
    if (bVar12) {
      local_668 = &local_760;
      local_660 = &local_4e8;
      local_658 = &local_758;
      local_650 = &local_6a8;
      local_648 = &local_588;
      local_680 = &local_668;
      local_688 = UE::Core::Private::Function::
                  TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_688,
                 GeneralEdit,Unknown,false);
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_488,(FMeshShapeGenerator *)local_760);
      local_540 = local_568;
      if (local_568 != '\0') {
        local_560._s_0.X = local_588;
        local_560._s_0.Y = dStack_580;
        local_560._s_0.Z = local_578;
        local_560._s_0.W = dStack_570;
      }
      local_5a8._s_0.X = local_6a8;
      local_5a8._s_0.Y = dStack_6a0;
      local_5a8._s_0.Z = local_698;
      ApplyPrimitiveOptionsToMesh
                (&local_488,&local_4e8,local_758,(TVector<double> *)&local_5a8._s_0,
                 (TOptional<UE::Geometry::TQuaternion<double>_> *)&local_560._s_0);
      local_6d8 = &local_488;
      local_670 = &local_6d8;
      local_678 = UE::Core::Private::Function::
                  TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_678,
                 GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_488);
    }
    if (local_258.PathTexCoord.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.PathTexCoord.AllocatorInstance.Data);
    }
    if (local_258.CrossSectionTexCoord.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.CrossSectionTexCoord.AllocatorInstance.Data);
    }
    if (local_258.PathScales.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.PathScales.AllocatorInstance.Data);
    }
    if (local_258.PathFrames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.PathFrames.AllocatorInstance.Data);
    }
    if (local_258.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Path.AllocatorInstance.Data);
    }
    if (local_258.CrossSection.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.CrossSection.Vertices.AllocatorInstance.Data);
    }
    local_258._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
  }
  return param_1;
}

// AppendSweepPolyline @ 14ce57c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSweepPolyline
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<float,TSizedDefaultAllocator<32>_> *param_6,
          TArray<float,TSizedDefaultAllocator<32>_> *param_7,bool param_8,float param_9,
          float param_10,float param_11,float param_12,UGeometryScriptDebug *param_13)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  FText *pFVar13;
  UDynamicMesh *pUVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auStackY_508 [32];
  undefined1 local_4b8;
  undefined1 local_4b7 [7];
  UDynamicMesh *local_4b0;
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  double local_470;
  double dStack_468;
  double local_460;
  double dStack_458;
  double dStack_450;
  double dStack_448;
  double dStack_440;
  TArray<float,TSizedDefaultAllocator<32>_> *local_438;
  TArray<float,TSizedDefaultAllocator<32>_> *local_430;
  TQuaternion<double>_u_0 local_428;
  TVector<double>_u_0 local_408;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  FText local_3c0;
  FText local_3b0;
  FText local_3a0;
  FText local_390;
  FText local_380;
  double local_370;
  double dStack_368;
  double local_360;
  TVector<double>_u_0 local_358 [2];
  undefined8 local_320;
  undefined8 uStack_318;
  double local_310;
  double dStack_308;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  TTransform<double> local_2e8;
  TOptional<UE::Geometry::TQuaternion<double>_> local_288;
  FGeneralizedCylinderGenerator local_258;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_508;
  local_438 = param_6;
  local_430 = param_7;
  local_4b0 = param_1;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_3c0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"AppendSweepPolyline_NullMesh",L"AppendSweepPolyline: TargetMesh is Null")
    ;
    UE::Geometry::AppendError(param_13,InvalidInputs,pFVar13);
    if (local_3c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3c0.TextData.Reference + 0x10))();
    }
    local_4b0 = (UDynamicMesh *)0x0;
  }
  else {
    if (param_4->ArrayNum < 2) {
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_3b0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                           L"AppendSweepPolyline_InvalidPolygon",
                           L"AppendSweepPolyline: Polyline array requires at least 2 positions");
      UE::Geometry::AppendError(param_13,InvalidInputs,pFVar13);
    }
    else if (param_5->ArrayNum < 2) {
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_3a0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                           L"AppendSweepPolyline_InvalidSweepPath",
                           L"AppendSweepPolyline: SweepPath array requires at least 2 positions");
      UE::Geometry::AppendError(param_13,InvalidInputs,pFVar13);
      local_3b0.TextData.Reference = local_3a0.TextData.Reference;
    }
    else if ((param_6->ArrayNum == 0) || (param_6->ArrayNum == param_4->ArrayNum)) {
      if ((param_7->ArrayNum == 0) || (param_7->ArrayNum == (uint)param_8 + param_5->ArrayNum)) {
        __libm_sse2_sincos_();
        UE::Geometry::FGeneralizedCylinderGenerator::FGeneralizedCylinderGenerator(&local_258);
        iVar2 = param_4->ArrayNum;
        pFVar17 = (param_4->AllocatorInstance).Data;
        pFVar16 = pFVar17 + (longlong)iVar2 * 0x10;
        while( true ) {
          if (param_4->ArrayNum != iVar2) {
            local_4b8 = 0;
            `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_4b8);
          }
          dVar11 = __real_3ff0000000000000;
          if (pFVar17 == pFVar16) break;
          local_4a8 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * *(double *)pFVar17 -
                      *(double *)(pFVar17 + 8) * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da)
          ;
          dStack_4a0 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) *
                       *(double *)(pFVar17 + 8) +
                       (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * *(double *)pFVar17;
          if (((local_258.CrossSection.Vertices.AllocatorInstance.Data <=
                (FScriptContainerElement *)&local_4a8) &&
              ((FScriptContainerElement *)&local_4a8 <
               local_258.CrossSection.Vertices.AllocatorInstance.Data +
               (longlong)local_258.CrossSection.Vertices.ArrayMax * 0x10)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar3 = (code *)swi(3);
            pUVar14 = (UDynamicMesh *)(*pcVar3)();
            return pUVar14;
          }
          if (local_258.CrossSection.Vertices.ArrayNum == local_258.CrossSection.Vertices.ArrayMax)
          {
            local_258.CrossSection.Vertices.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)&local_258.CrossSection,
                            &local_258.CrossSection.Vertices.ArrayMax);
          }
          pFVar17 = pFVar17 + 0x10;
          *(double *)
           (local_258.CrossSection.Vertices.AllocatorInstance.Data +
           (longlong)local_258.CrossSection.Vertices.ArrayNum * 0x10) = local_4a8;
          *(double *)
           (local_258.CrossSection.Vertices.AllocatorInstance.Data +
            (longlong)local_258.CrossSection.Vertices.ArrayNum * 0x10 + 8) = dStack_4a0;
          local_258.CrossSection.Vertices.ArrayNum = local_258.CrossSection.Vertices.ArrayNum + 1;
        }
        pFVar16 = (param_5->AllocatorInstance).Data;
        iVar2 = param_5->ArrayNum;
        pFVar17 = pFVar16 + 0x20;
        pFVar18 = pFVar16 + (longlong)iVar2 * 0x60;
        while( true ) {
          if (param_5->ArrayNum != iVar2) {
            local_4b7[0] = 0;
            `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_4b7);
          }
          if (pFVar16 == pFVar18) break;
          local_488 = *(double *)pFVar17;
          dStack_480 = *(double *)(pFVar17 + 8);
          local_478 = *(double *)(pFVar17 + 0x10);
          if (((local_258.Path.AllocatorInstance.Data <= (FScriptContainerElement *)&local_488) &&
              ((FScriptContainerElement *)&local_488 <
               local_258.Path.AllocatorInstance.Data + (longlong)local_258.Path.ArrayMax * 0x18)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar3 = (code *)swi(3);
            pUVar14 = (UDynamicMesh *)(*pcVar3)();
            return pUVar14;
          }
          if (local_258.Path.ArrayNum == local_258.Path.ArrayMax) {
            local_258.Path.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_258.Path.AllocatorInstance,&local_258.Path.ArrayMax);
          }
          dStack_458 = 0.0;
          dStack_440 = dVar11;
          local_428._s_0.X = 0.0;
          *(double *)
           (local_258.Path.AllocatorInstance.Data + (longlong)local_258.Path.ArrayNum * 0x18) =
               local_488;
          *(double *)
           (local_258.Path.AllocatorInstance.Data + (longlong)local_258.Path.ArrayNum * 0x18 + 8) =
               dStack_480;
          *(double *)
           (local_258.Path.AllocatorInstance.Data + (longlong)local_258.Path.ArrayNum * 0x18 + 0x10)
               = local_478;
          dVar7 = *(double *)pFVar16;
          dVar8 = *(double *)(pFVar16 + 8);
          dVar9 = *(double *)(pFVar16 + 0x10);
          dVar10 = *(double *)(pFVar16 + 0x18);
          local_428._s_0.W = dVar11;
          dVar4 = dVar9 + dVar9;
          dVar5 = dVar8 + dVar8;
          local_470 = *(double *)pFVar17;
          dStack_468 = *(double *)(pFVar17 + 8);
          local_3d8 = dVar10 * (dVar7 + dVar7);
          dVar6 = dVar7 * (dVar7 + dVar7);
          local_460 = *(double *)(pFVar17 + 0x10);
          local_408._s_0.X = dVar7 * dVar5 - dVar10 * dVar4;
          local_3e0 = dVar10 * dVar4 + dVar7 * dVar5;
          local_408._s_0.Y = dVar10 * dVar5 + dVar7 * dVar4;
          local_408._s_0.Z = dVar11 - (dVar9 * dVar4 + dVar8 * dVar5);
          local_3c8 = dVar7 * dVar4 - dVar10 * dVar5;
          dStack_450 = 0.0;
          dStack_448 = 0.0;
          local_428._s_0.Y = 0.0;
          local_428._s_0.Z = 0.0;
          local_3f0 = dVar11 - (dVar6 + dVar9 * dVar4);
          local_3e8 = dVar8 * dVar4 - local_3d8;
          local_3d8 = local_3d8 + dVar8 * dVar4;
          local_3d0 = dVar11 - (dVar6 + dVar8 * dVar5);
          local_370 = local_470;
          dStack_368 = dStack_468;
          local_360 = local_460;
          local_258.Path.ArrayNum = local_258.Path.ArrayNum + 1;
          UE::Geometry::TQuaternion<double>::SetFromRotationMatrix
                    ((TQuaternion<double> *)&local_428._s_0,(TMatrix3<double> *)&local_408._s_0);
          dStack_458 = local_428._s_0.X;
          dStack_450 = local_428._s_0.Y;
          dStack_448 = local_428._s_0.Z;
          dStack_440 = local_428._s_0.W;
          if (((local_258.PathFrames.AllocatorInstance.Data <= (FScriptContainerElement *)&local_470
               ) && ((FScriptContainerElement *)&local_470 <
                     local_258.PathFrames.AllocatorInstance.Data +
                     (longlong)local_258.PathFrames.ArrayMax * 0x38)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar3 = (code *)swi(3);
            pUVar14 = (UDynamicMesh *)(*pcVar3)();
            return pUVar14;
          }
          if (local_258.PathFrames.ArrayNum == local_258.PathFrames.ArrayMax) {
            local_258.PathFrames.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&local_258.PathFrames.AllocatorInstance,
                            &local_258.PathFrames.ArrayMax);
          }
          iVar1 = local_258.PathFrames.ArrayNum + 1;
          lVar15 = (longlong)local_258.PathFrames.ArrayNum * 0x38;
          *(double *)(local_258.PathFrames.AllocatorInstance.Data + lVar15) = local_470;
          *(double *)(local_258.PathFrames.AllocatorInstance.Data + lVar15 + 8) = dStack_468;
          *(double *)(local_258.PathFrames.AllocatorInstance.Data + lVar15 + 0x10) = local_460;
          *(double *)(local_258.PathFrames.AllocatorInstance.Data + lVar15 + 0x10 + 8) = dStack_458;
          *(double *)(local_258.PathFrames.AllocatorInstance.Data + lVar15 + 0x20) = dStack_450;
          *(double *)(local_258.PathFrames.AllocatorInstance.Data + lVar15 + 0x20 + 8) = dStack_448;
          *(double *)(local_258.PathFrames.AllocatorInstance.Data + lVar15 + 0x30) = dStack_440;
          local_300 = *(double *)(pFVar17 + 0x20);
          local_498 = *(double *)(pFVar17 + 0x28);
          dStack_490 = *(double *)(pFVar17 + 0x30);
          dStack_2f8 = local_498;
          local_2f0 = dStack_490;
          local_258.PathFrames.ArrayNum = iVar1;
          if (((local_258.PathScales.AllocatorInstance.Data <= (FScriptContainerElement *)&local_498
               ) && ((FScriptContainerElement *)&local_498 <
                     local_258.PathScales.AllocatorInstance.Data +
                     (longlong)local_258.PathScales.ArrayMax * 0x10)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar3 = (code *)swi(3);
            pUVar14 = (UDynamicMesh *)(*pcVar3)();
            return pUVar14;
          }
          if (local_258.PathScales.ArrayNum == local_258.PathScales.ArrayMax) {
            local_258.PathScales.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_258.PathScales.AllocatorInstance,
                            &local_258.PathScales.ArrayMax);
          }
          pFVar16 = pFVar16 + 0x60;
          pFVar17 = pFVar17 + 0x60;
          *(double *)
           (local_258.PathScales.AllocatorInstance.Data +
           (longlong)local_258.PathScales.ArrayNum * 0x10) = local_498;
          *(double *)
           (local_258.PathScales.AllocatorInstance.Data +
            (longlong)local_258.PathScales.ArrayNum * 0x10 + 8) = dStack_490;
          local_258.PathScales.ArrayNum = local_258.PathScales.ArrayNum + 1;
        }
        local_258.bLoop = param_8;
        local_258._padding_._1_1_ = 0;
        iVar2 = local_438->ArrayNum;
        if ((0 < iVar2) && (&local_258.CrossSectionTexCoord != local_438)) {
          pFVar17 = (local_438->AllocatorInstance).Data;
          local_258.CrossSectionTexCoord.ArrayNum = iVar2;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar2,local_258.CrossSectionTexCoord.ArrayMax,
                     &local_258.CrossSectionTexCoord.AllocatorInstance,iVar2,
                     &local_258.CrossSectionTexCoord.ArrayMax);
          memcpy(local_258.CrossSectionTexCoord.AllocatorInstance.Data,pFVar17,(longlong)iVar2 << 2)
          ;
        }
        iVar2 = local_430->ArrayNum;
        if ((0 < iVar2) && (&local_258.PathTexCoord != local_430)) {
          pFVar17 = (local_430->AllocatorInstance).Data;
          local_258.PathTexCoord.ArrayNum = iVar2;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar2,local_258.PathTexCoord.ArrayMax,
                     &local_258.PathTexCoord.AllocatorInstance,iVar2,
                     &local_258.PathTexCoord.ArrayMax);
          memcpy(local_258.PathTexCoord.AllocatorInstance.Data,pFVar17,(longlong)iVar2 << 2);
        }
        local_258._padding_._0_1_ = param_2.PolygroupMode == PerQuad;
        if ((local_258.Path.ArrayNum < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          pUVar14 = (UDynamicMesh *)(*pcVar3)();
          return pUVar14;
        }
        local_320 = 0;
        uStack_318 = 0;
        local_258.InitialFrame.Origin.field0_0x0._16_4_ =
             *(undefined4 *)(local_258.Path.AllocatorInstance.Data + 0x10);
        local_258.InitialFrame.Origin.field0_0x0._20_4_ =
             *(undefined4 *)(local_258.Path.AllocatorInstance.Data + 0x14);
        local_258.InitialFrame.Origin.field0_0x0._s_0.X =
             (double)*(undefined8 *)local_258.Path.AllocatorInstance.Data;
        local_258.InitialFrame.Origin.field0_0x0._s_0.Y =
             (double)*(undefined8 *)(local_258.Path.AllocatorInstance.Data + 8);
        local_258.InitialFrame.Rotation.field0_0x0._0_4_ = 0;
        local_258.InitialFrame.Rotation.field0_0x0._4_4_ = 0;
        local_310 = ___xmm_3ff00000000000000000000000000000;
        dStack_308 = _UNK_15061cbc8;
        local_258.StartScale = (double)param_9;
        local_258.InitialFrame.Rotation.field0_0x0._s_0.Y = 0.0;
        local_258.InitialFrame.Rotation.field0_0x0._s_0.Z = ___xmm_3ff00000000000000000000000000000;
        local_258.EndScale = (double)param_10;
        local_258.InitialFrame.Rotation.field0_0x0._s_0.W = _UNK_15061cbc8;
        if (__real_3f800000 < param_12) {
          local_258.MiterLimit = (double)param_12;
          local_258.bAlignFramesToSampledTangents = true;
        }
        UE::Geometry::FGeneralizedCylinderGenerator::Generate(&local_258);
        pUVar14 = local_4b0;
        local_2e8.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
        local_2e8.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
        local_358[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_358[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_358[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_2e8.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
        local_2e8.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
        local_2e8.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
        local_2e8.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
        local_2e8.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
        local_2e8.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
        local_2e8.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
        local_2e8.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
        local_2e8.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
        local_2e8.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
        local_288.bIsSet = false;
        AppendPrimitive(local_4b0,(FMeshShapeGenerator *)&local_258,&local_2e8,param_2,
                        (TVector<double> *)&local_358[0]._s_0,&local_288);
        if (local_258.PathTexCoord.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.PathTexCoord.AllocatorInstance.Data);
        }
        if (local_258.CrossSectionTexCoord.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_258.CrossSectionTexCoord.AllocatorInstance.Data);
        }
        if (local_258.PathScales.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.PathScales.AllocatorInstance.Data);
        }
        if (local_258.PathFrames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.PathFrames.AllocatorInstance.Data);
        }
        if (local_258.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Path.AllocatorInstance.Data);
        }
        if (local_258.CrossSection.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(local_258.CrossSection.Vertices.AllocatorInstance.Data);
        }
        local_258._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
        if ((void *)local_258._padding_ == (void *)0x0) {
          return pUVar14;
        }
        FMemory::Free((void *)local_258._padding_);
        return pUVar14;
      }
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_380,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                           L"AppendSweepPolyline_InvalidTexParamV",
                           L"AppendSweepPolyline: SweepPath Texture Parameter V array must be same length as SweepPath, or (length+1) for a closed loop"
                          );
      UE::Geometry::AppendError(param_13,InvalidInputs,pFVar13);
      local_3b0.TextData.Reference = local_380.TextData.Reference;
    }
    else {
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_390,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                           L"AppendSweepPolyline_InvalidTexParamU",
                           L"AppendSweepPolyline: Polyline Texture Parameter U array must be same length as PolylineVertices"
                          );
      UE::Geometry::AppendError(param_13,InvalidInputs,pFVar13);
      local_3b0.TextData.Reference = local_390.TextData.Reference;
    }
    if (local_3b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3b0.TextData.Reference + 0x10))();
    }
  }
  return local_4b0;
}

// AppendTorus @ 14ce58850

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTorus
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,FGeometryScriptRevolveOptions *param_4,float param_5,float param_6,int param_7,
          int param_8,EGeometryScriptPrimitiveOriginMode param_9,UGeometryScriptDebug *param_10)

{
  code *pcVar1;
  double dVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UDynamicMesh *pUVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar14;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  undefined4 uVar15;
  undefined4 uVar16;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_138;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_128;
  double local_118;
  double dStack_110;
  FGeometryScriptRevolveOptions local_108;
  TTransform<double> local_e8;
  ulonglong uVar13;
  
  fVar4 = param_6;
  if (param_6 <= __real_358637bd) {
    fVar4 = __real_358637bd;
  }
  iVar3 = param_8;
  if (param_8 < 3) {
    iVar3 = 3;
  }
  uVar11 = 0;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_128,iVar3,Default);
  uVar9 = uVar11;
  uVar13 = uVar11;
  if (0 < iVar3) {
    do {
      uVar12 = (uint)uVar13;
      __libm_sse2_sincos_();
      uVar6 = 0;
      if ((int)uVar12 < local_128.ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        pUVar8 = (UDynamicMesh *)(*pcVar1)();
        return pUVar8;
      }
      *(double *)(local_128.AllocatorInstance.Data + uVar9) = extraout_XMM0_Qb * (double)fVar4;
      *(double *)(local_128.AllocatorInstance.Data + uVar9 + 8) = extraout_XMM0_Qa * (double)fVar4;
      uVar9 = uVar9 + 0x10;
      uVar13 = (ulonglong)(uVar12 + 1);
    } while ((int)(uVar12 + 1) < iVar3);
  }
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  if (param_9 == Base) {
    uVar15 = 0;
    uVar16 = 0;
    dVar2 = (double)param_6;
  }
  else {
    uVar15 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
    uVar16 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
    dVar2 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
  }
  iVar3 = local_128.ArrayNum;
  uVar9 = (ulonglong)local_128.ArrayNum;
  pFVar14 = local_128.AllocatorInstance.Data + uVar9 * 0x10;
  FVar10.Data = local_128.AllocatorInstance.Data;
  while( true ) {
    iVar7 = (int)uVar11;
    if ((int)uVar9 != iVar3) {
      param_8 = param_8 & 0xffffff00;
      `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&param_8);
      iVar7 = local_138.ArrayNum;
    }
    if (FVar10.Data == pFVar14) break;
    local_118 = (double)CONCAT44(uVar16,uVar15) + *(double *)FVar10.Data;
    dStack_110 = dVar2 + *(double *)(FVar10.Data + 8);
    if ((local_138.AllocatorInstance.Data <= (FScriptContainerElement *)&local_118) &&
       ((FScriptContainerElement *)&local_118 <
        local_138.AllocatorInstance.Data + (longlong)local_138.ArrayMax * 0x10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pUVar8 = (UDynamicMesh *)(*pcVar1)();
        return pUVar8;
      }
      iVar7 = local_138.ArrayNum;
    }
    if (iVar7 == local_138.ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_138.AllocatorInstance,&local_138.ArrayMax);
    }
    local_138.ArrayNum = iVar7 + 1U;
    FVar10.Data = FVar10.Data + 0x10;
    *(double *)(local_138.AllocatorInstance.Data + (longlong)iVar7 * 0x10) = local_118;
    *(double *)(local_138.AllocatorInstance.Data + (longlong)iVar7 * 0x10 + 8) = dStack_110;
    uVar9 = local_128._8_8_ & 0xffffffff;
    uVar11 = (ulonglong)(iVar7 + 1U);
  }
  local_e8.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
  local_e8.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
  local_108.RevolveDegrees = param_4->RevolveDegrees;
  local_108.DegreeOffset = param_4->DegreeOffset;
  local_108.bReverseDirection = param_4->bReverseDirection;
  local_108.bHardNormals = param_4->bHardNormals;
  local_108._10_2_ = *(undefined2 *)&param_4->field_0xa;
  local_108.HardNormalAngle = param_4->HardNormalAngle;
  local_108.bProfileAtMidpoint = param_4->bProfileAtMidpoint;
  local_108.bFillPartialRevolveEndcaps = param_4->bFillPartialRevolveEndcaps;
  local_108._18_2_ = *(undefined2 *)&param_4->field_0x12;
  local_e8.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
  local_e8.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
  local_e8.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  local_e8.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
  local_e8.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
  local_e8.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
  local_e8.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
  local_e8.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
  local_e8.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
  local_e8.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
  pUVar8 = AppendRevolvePolygon
                     (param_1,param_2,&local_e8,&local_138,&local_108,param_5,param_7,param_10);
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return pUVar8;
}

// AppendTriangulatedPolygon3D @ 14ce58c30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTriangulatedPolygon3D
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4,
          UGeometryScriptDebug *param_5)

{
  undefined1 auVar1 [16];
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TDynamicMeshOverlay<float,3> *pTVar8;
  bool bVar9;
  int iVar10;
  FText *pFVar11;
  UDynamicMesh *pUVar12;
  ulonglong uVar13;
  int iVar14;
  TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *pTVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  ForAnyElementType FVar20;
  TDynamicMeshOverlay<float,2> *this;
  TDynamicMeshOverlay<float,2> *pTVar21;
  longlong lVar22;
  TDynamicMeshOverlay<float,2> *pTVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  EGeometryScriptPrimitiveUVMode EStackX_12;
  undefined1 local_4b8;
  undefined1 local_4b7 [7];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_4b0;
  TDynamicMeshOverlay<float,3> *local_4a0;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_498;
  FIndex3i_u_0 local_488;
  float local_478;
  float local_474;
  float local_470;
  float local_46c;
  float local_468;
  FGeometryScriptPrimitiveOptions local_460;
  FDynamicMesh3 *local_458;
  TVector<double>_u_0 local_450;
  FDynamicMesh3 *local_438;
  undefined8 **local_430;
  code *local_428;
  FDynamicMesh3 **local_420;
  code *local_418;
  FDynamicMesh3 **local_410;
  TVector<double>_u_0 local_408;
  undefined8 local_3f0;
  float local_3e8;
  undefined8 local_3e4;
  float local_3dc;
  TVector2<float>_u_0 local_3d8;
  undefined2 local_3d0;
  undefined1 local_3ce;
  TVector<double>_u_0 local_3c8;
  TVector<double>_u_0 local_3b0;
  double *local_398;
  FGeometryScriptPrimitiveOptions *local_390;
  double local_388;
  double dStack_380;
  double local_378;
  FText local_370;
  FText local_360;
  TVector<double>_u_0 local_350;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2c8;
  FDynamicMesh3 local_2b8;
  TDynamicMeshOverlay<float,2> *pTVar19;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_370,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"AppendTriangulatedPolygon3D_InvalidInput",
                         L"AppendTriangulatedPolygon3D: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar11);
    if (local_370.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_370.TextData.Reference + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  if (param_4->ArrayNum < 3) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_360,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"AppendTriangulatedPolygon3D_InvalidPolygon",
                         L"AppendTriangulatedPolygon3D: PolygonVertices array requires at least 3 positions"
                        );
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar11);
    if (local_360.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_360.TextData.Reference + 0x10))();
      return param_1;
    }
  }
  else {
    local_350._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_350._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_350._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    PolygonTriangulation::ComputePolygonPlane<double>
              (param_4,(TVector<double> *)&local_450._s_0,(TVector<double> *)&local_350._s_0);
    UE::Geometry::VectorUtil::MakePerpVectors<double>
              ((TVector<double> *)&local_450._s_0,(TVector<double> *)&local_3c8._s_0,
               (TVector<double> *)&local_3b0._s_0);
    this = (TDynamicMeshOverlay<float,2> *)0x0;
    local_4b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4b0.ArrayNum = 0;
    local_4b0.ArrayMax = 0;
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_4b0,param_4->ArrayNum,Default);
    iVar14 = param_4->ArrayNum;
    pTVar19 = this;
    pTVar21 = this;
    pTVar23 = this;
    if (0 < iVar14) {
      do {
        uVar18 = (uint)pTVar19;
        uVar16 = 0;
        if ((int)uVar18 < iVar14) {
          uVar16 = ~uVar18 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          pUVar12 = (UDynamicMesh *)(*pcVar3)();
          return pUVar12;
        }
        pFVar2 = (param_4->AllocatorInstance).Data;
        pFVar17 = (FScriptContainerElement *)((longlong)&pTVar23->ParentMesh + (longlong)pFVar2);
        dVar25 = *(double *)pFVar17;
        dVar6 = *(double *)(pFVar17 + 8);
        local_2c8 = *(double *)(pFVar2 + 8 + (longlong)&(pTVar23->ElementsRefCounts).RefCounts);
        dVar4 = local_3c8._s_0.X * dVar25;
        uVar16 = 0;
        if ((int)uVar18 < local_4b0.ArrayNum) {
          uVar16 = ~uVar18 >> 0x1f;
        }
        dVar5 = local_3c8._s_0.Z * local_2c8;
        dVar25 = dVar25 * local_3b0._s_0.X;
        dVar7 = local_3c8._s_0.Y * dVar6;
        dVar6 = dVar6 * local_3b0._s_0.Y;
        dVar26 = local_2c8 * local_3b0._s_0.Z;
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          pUVar12 = (UDynamicMesh *)(*pcVar3)();
          return pUVar12;
        }
        *(double *)(local_4b0.AllocatorInstance.Data + (longlong)&pTVar21->ParentMesh) =
             dVar7 + dVar4 + dVar5;
        *(double *)
         (local_4b0.AllocatorInstance.Data + (longlong)&(pTVar21->ElementsRefCounts).RefCounts) =
             dVar6 + dVar25 + dVar26;
        iVar14 = param_4->ArrayNum;
        pTVar19 = (TDynamicMeshOverlay<float,2> *)(ulonglong)(uVar18 + 1);
        pTVar21 = (TDynamicMeshOverlay<float,2> *)&(pTVar21->ElementsRefCounts).RefCounts.Blocks;
        pTVar23 = (TDynamicMeshOverlay<float,2> *)
                  &(pTVar23->ElementsRefCounts).RefCounts.Blocks.ArrayNum;
      } while ((int)(uVar18 + 1) < iVar14);
    }
    local_498.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_498.ArrayNum = 0;
    local_498.ArrayMax = 0;
    PolygonTriangulation::TriangulateSimplePolygon<double>(&local_4b0,&local_498,false);
    iVar14 = local_4b0.ArrayNum;
    uVar13 = (ulonglong)local_4b0.ArrayNum;
    uVar31 = (undefined4)__real_7fefffffffffffff;
    uVar32 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    uVar27 = (undefined4)__real_ffefffffffffffff;
    uVar28 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
    pFVar17 = local_4b0.AllocatorInstance.Data + uVar13 * 0x10;
    FVar20.Data = local_4b0.AllocatorInstance.Data;
    uVar29 = uVar27;
    uVar30 = uVar28;
    uVar33 = uVar31;
    uVar34 = uVar32;
    while( true ) {
      if ((int)uVar13 != iVar14) {
        local_4b8 = 0;
        `TCheckedPointerIterator<UE::Math::TVector2<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_4b8);
        uVar13 = local_4b0._8_8_ & 0xffffffff;
      }
      if (FVar20.Data == pFVar17) break;
      auVar1 = *(undefined1 (*) [16])FVar20.Data;
      dVar4 = auVar1._0_8_;
      if (dVar4 < (double)CONCAT44(uVar32,uVar31)) {
        uVar31 = auVar1._0_4_;
        uVar32 = auVar1._4_4_;
      }
      if ((double)CONCAT44(uVar28,uVar27) <= dVar4 && dVar4 != (double)CONCAT44(uVar28,uVar27)) {
        uVar27 = auVar1._0_4_;
        uVar28 = auVar1._4_4_;
      }
      dVar4 = auVar1._8_8_;
      if (dVar4 < (double)CONCAT44(uVar34,uVar33)) {
        uVar33 = auVar1._8_4_;
        uVar34 = auVar1._12_4_;
      }
      if ((double)CONCAT44(uVar30,uVar29) <= dVar4 && dVar4 != (double)CONCAT44(uVar30,uVar29)) {
        uVar29 = auVar1._8_4_;
        uVar30 = auVar1._12_4_;
      }
      FVar20.Data = FVar20.Data + 0x10;
    }
    EStackX_12 = param_2.UVMode;
    dVar4 = __real_3f847ae147ae147b;
    if (EStackX_12 == ScaleToFill) {
      dVar4 = (double)CONCAT44(uVar28,uVar27) - (double)CONCAT44(uVar32,uVar31);
      dVar6 = (double)CONCAT44(uVar30,uVar29) - (double)CONCAT44(uVar34,uVar33);
      if (dVar4 <= 0.0) {
        dVar4 = 0.0;
      }
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
      if (dVar4 <= dVar6) {
        dVar4 = dVar6;
      }
      if (dVar4 <= __real_3e45798ee2308c3a) {
        dVar4 = __real_3e45798ee2308c3a;
      }
      dVar4 = __real_3ff0000000000000 / dVar4;
    }
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_2b8);
    UE::Geometry::FDynamicMesh3::EnableAttributes(&local_2b8);
    if (0 < ((local_2b8.AttributeSet.Ptr)->UVLayers).Array.ArrayNum) {
      this = *(TDynamicMeshOverlay<float,2> **)
              ((local_2b8.AttributeSet.Ptr)->UVLayers).Array.AllocatorInstance.Data;
    }
    if (((local_2b8.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum < 1) {
      local_4a0 = (TDynamicMeshOverlay<float,3> *)0x0;
    }
    else {
      local_4a0 = *(TDynamicMeshOverlay<float,3> **)
                   ((local_2b8.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
    }
    pTVar8 = local_4a0;
    uVar16 = 0;
    iVar14 = param_4->ArrayNum;
    local_470 = (float)local_450._s_0.X;
    local_46c = (float)local_450._s_0.Y;
    local_468 = (float)local_450._s_0.Z;
    if (0 < iVar14) {
      lVar22 = 0;
      lVar24 = 0;
      do {
        uVar18 = 0;
        if ((int)uVar16 < iVar14) {
          uVar18 = ~uVar16 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          pUVar12 = (UDynamicMesh *)(*pcVar3)();
          return pUVar12;
        }
        pFVar2 = (param_4->AllocatorInstance).Data;
        local_3d0 = 0;
        local_3ce = 0;
        pFVar17 = pFVar2 + lVar24;
        local_408._s_0.X = (double)*(undefined8 *)pFVar17;
        local_408._s_0.Y = (double)*(undefined8 *)(pFVar17 + 8);
        local_408._s_0.Z = (double)*(undefined8 *)(pFVar2 + lVar24 + 0x10);
        local_3e8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_3dc = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_3f0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_3e4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_3d8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        UE::Geometry::FDynamicMesh3::AppendVertex(&local_2b8,(FVertexInfo *)&local_408._s_0);
        UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement(pTVar8,&local_470);
        uVar18 = 0;
        if ((int)uVar16 < local_4b0.ArrayNum) {
          uVar18 = ~uVar16 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          pUVar12 = (UDynamicMesh *)(*pcVar3)();
          return pUVar12;
        }
        local_478 = (float)((*(double *)(local_4b0.AllocatorInstance.Data + lVar22) -
                            (double)CONCAT44(uVar32,uVar31)) * dVar4);
        local_474 = (float)((*(double *)(local_4b0.AllocatorInstance.Data + lVar22 + 8) -
                            (double)CONCAT44(uVar34,uVar33)) * dVar4);
        UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(this,&local_478);
        iVar14 = param_4->ArrayNum;
        uVar16 = uVar16 + 1;
        lVar24 = lVar24 + 0x18;
        lVar22 = lVar22 + 0x10;
      } while ((int)uVar16 < iVar14);
    }
    pTVar8 = local_4a0;
    iVar14 = local_498.ArrayNum;
    uVar13 = (ulonglong)local_498.ArrayNum;
    pFVar17 = local_498.AllocatorInstance.Data + uVar13 * 0xc;
    FVar20.Data = local_498.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar13 != iVar14) {
        `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_4b7);
      }
      if (FVar20.Data == pFVar17) break;
      local_488._0_8_ = *(undefined8 *)FVar20.Data;
      local_488._s_0.C = *(undefined4 *)(FVar20.Data + 8);
      iVar10 = UE::Geometry::FDynamicMesh3::AppendTriangle(&local_2b8,(FIndex3i *)&local_488._s_0,0)
      ;
      if (-1 < iVar10) {
        UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                  (this,iVar10,(FIndex3i *)&local_488._s_0,false);
        UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                  (pTVar8,iVar10,(FIndex3i *)&local_488._s_0,false);
      }
      uVar13 = local_498._8_8_ & 0xffffffff;
      FVar20.Data = FVar20.Data + 0xc;
    }
    local_338 = (param_3->Rotation).XY.m128d_f64[0];
    dStack_330 = (param_3->Rotation).XY.m128d_f64[1];
    local_328 = (param_3->Rotation).ZW.m128d_f64[0];
    dStack_320 = (param_3->Rotation).ZW.m128d_f64[1];
    local_318 = (param_3->Translation).XY.m128d_f64[0];
    dStack_310 = (param_3->Translation).XY.m128d_f64[1];
    local_2f8 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_2f0 = (param_3->Scale3D).XY.m128d_f64[1];
    local_308 = (param_3->Translation).ZW.m128d_f64[0];
    dStack_300 = (param_3->Translation).ZW.m128d_f64[1];
    local_2e8 = (param_3->Scale3D).ZW.m128d_f64[0];
    dStack_2e0 = (param_3->Scale3D).ZW.m128d_f64[1];
    local_398 = &local_338;
    local_388 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_380 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_390 = &local_460;
    local_378 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_460 = param_2;
    bVar9 = UDynamicMesh::IsEmpty(param_1);
    if (bVar9) {
      local_438 = &local_2b8;
      pTVar15 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_428;
      local_430 = &local_398;
      local_420 = &local_438;
      local_428 = UE::Core::Private::Function::
                  TFunctionRefCaller<`AppendPrimitiveMesh'::__l5::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
    }
    else {
      `AppendPrimitiveMesh'::__l2::<lambda_1>::operator()(&local_398,&local_2b8);
      local_458 = &local_2b8;
      pTVar15 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_418;
      local_410 = &local_458;
      local_418 = UE::Core::Private::Function::
                  TFunctionRefCaller<`AppendPrimitiveMesh'::__l7::<lambda_3>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
    }
    UDynamicMesh::EditMesh(param_1,pTVar15,GeneralEdit,Unknown,false);
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_2b8);
    if (local_498.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.AllocatorInstance.Data);
    }
    if (local_4b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b0.AllocatorInstance.Data);
    }
  }
  return param_1;
}

// AppendTriangulatedPolygon @ 14ce593c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTriangulatedPolygon
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_4,bool param_5,
          UGeometryScriptDebug *param_6)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FText *pFVar11;
  UDynamicMesh *pUVar12;
  ulonglong uVar13;
  FMeshShapeGenerator *pFVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined8 *puVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  longlong lVar23;
  int iVar24;
  undefined8 *puVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStackY_5e8 [32];
  undefined1 local_598;
  undefined1 local_597;
  undefined1 local_596 [6];
  TPolygon2<double> local_590;
  int local_580;
  int local_57c;
  int iStack_578;
  UDynamicMesh *local_570;
  TConstrainedDelaunay2<double> local_568;
  TGeneralPolygon2<double> local_518;
  longlong local_4f0;
  TTransform<double> *local_4e8;
  double local_4e0;
  double dStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  FGeometryScriptPrimitiveOptions local_4c0;
  UGeometryScriptDebug *local_4b8;
  TGeneralPolygon2<double> *local_4b0;
  TVector2<double>_u_0 local_4a8;
  TVector2<double>_u_0 local_498;
  code *local_488;
  TGeneralPolygon2<double> **local_480;
  TVector2<double>_u_0 local_478;
  double local_468;
  double local_460;
  double local_458;
  FText local_450;
  FText local_440;
  FText local_430;
  TVector<double>_u_0 local_418;
  TTransform<double> local_3f8;
  FFlatTriangulationMeshGenerator local_398;
  TOptional<UE::Geometry::TQuaternion<double>_> local_2a8;
  undefined1 local_278 [336];
  undefined1 local_128 [64];
  void *local_e8;
  undefined4 local_e0;
  _RTL_CRITICAL_SECTION local_d8;
  TScaleGridIndexer2<double> local_b0;
  int local_a8;
  double local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_5e8;
  local_4b8 = param_6;
  local_570 = param_1;
  local_4e8 = param_3;
  local_4c0 = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_450,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"AppendTriangulatedPolygon_InvalidInput",
                         L"AppendTriangulatedPolygon: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar11);
    if (local_450.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_450.TextData.Reference + 0x10))();
    }
    pUVar12 = (UDynamicMesh *)0x0;
  }
  else {
    iVar24 = param_4->ArrayNum;
    if (iVar24 < 3) {
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_440,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                           L"AppendTriangulatedPolygon_InvalidPolygon",
                           L"AppendTriangulatedPolygon: PolygonVertices array requires at least 3 positions"
                          );
      UE::Geometry::AppendError(param_6,InvalidInputs,pFVar11);
      pUVar12 = local_570;
      if (local_440.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_440.TextData.Reference + 0x10))();
        pUVar12 = local_570;
      }
    }
    else {
      pFVar19 = (param_4->AllocatorInstance).Data;
      pFVar18 = pFVar19 + (longlong)iVar24 * 0x10;
      local_590.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_590.Vertices.ArrayNum = 0;
      local_590.Vertices.ArrayMax = 0;
      while( true ) {
        if (param_4->ArrayNum != iVar24) {
          local_598 = 0;
          `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_598);
        }
        if (pFVar19 == pFVar18) break;
        local_4e0 = *(double *)pFVar19;
        dStack_4d8 = *(double *)(pFVar19 + 8);
        if (((local_590.Vertices.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4e0) &&
            ((FScriptContainerElement *)&local_4e0 <
             local_590.Vertices.AllocatorInstance.Data +
             (longlong)local_590.Vertices.ArrayMax * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar3 = (code *)swi(3);
          pUVar12 = (UDynamicMesh *)(*pcVar3)();
          return pUVar12;
        }
        iVar9 = local_590.Vertices.ArrayNum;
        if (local_590.Vertices.ArrayNum == local_590.Vertices.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)&local_590,&local_590.Vertices.ArrayMax);
        }
        local_590.Vertices.ArrayNum = iVar9 + 1;
        pFVar19 = pFVar19 + 0x10;
        *(double *)(local_590.Vertices.AllocatorInstance.Data + (longlong)iVar9 * 0x10) = local_4e0;
        *(double *)(local_590.Vertices.AllocatorInstance.Data + (longlong)iVar9 * 0x10 + 8) =
             dStack_4d8;
      }
      UE::Geometry::TGeneralPolygon2<double>::TGeneralPolygon2<double>(&local_518,&local_590);
      uVar17 = 0;
      local_568.bOrientedEdges = true;
      local_568.bOutputCCW = false;
      local_568.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_568.Vertices.ArrayNum = 0;
      local_568.Vertices.ArrayMax = 0;
      local_568.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_568.Edges.ArrayNum = 0;
      local_568.Edges.ArrayMax = 0;
      local_568.HoleEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_568.HoleEdges.ArrayNum = 0;
      local_568.HoleEdges.ArrayMax = 0;
      local_568.bSplitBowties = false;
      local_568.FillRule = Odd;
      local_568.Triangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_568.Triangles.ArrayNum = 0;
      local_568.Triangles.ArrayMax = 0;
      local_568.AddedVerticesStartIndex = -1;
      if (param_5) {
        iVar24 = local_590.Vertices.ArrayNum;
        uVar13 = (ulonglong)local_590.Vertices.ArrayNum;
        uVar28 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
        uVar32 = (undefined4)__real_7fefffffffffffff;
        uVar33 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
        pFVar19 = local_590.Vertices.AllocatorInstance.Data + uVar13 * 0x10;
        FVar22.Data = local_590.Vertices.AllocatorInstance.Data;
        uVar26 = (int)__real_ffefffffffffffff;
        uVar30 = (int)__real_ffefffffffffffff;
        uVar31 = uVar28;
        uVar34 = uVar32;
        uVar36 = uVar33;
        while( true ) {
          if ((int)uVar13 != iVar24) {
            local_597 = 0;
            `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_597);
            uVar13 = local_590.Vertices._8_8_ & 0xffffffff;
          }
          if (FVar22.Data == pFVar19) break;
          dVar1 = *(double *)FVar22.Data;
          uVar29 = (undefined4)((ulonglong)dVar1 >> 0x20);
          dVar2 = *(double *)(FVar22.Data + 8);
          if (dVar1 <= (double)CONCAT44(uVar33,uVar32)) {
            uVar32 = SUB84(dVar1,0);
            uVar33 = uVar29;
          }
          uVar27 = SUB84(dVar1,0);
          if (dVar1 <= (double)CONCAT44(uVar28,uVar26)) {
            uVar27 = uVar26;
            uVar29 = uVar28;
          }
          FVar22.Data = FVar22.Data + 0x10;
          uVar35 = (undefined4)((ulonglong)dVar2 >> 0x20);
          if (dVar2 <= (double)CONCAT44(uVar36,uVar34)) {
            uVar34 = SUB84(dVar2,0);
            uVar36 = uVar35;
          }
          uVar26 = uVar27;
          uVar28 = uVar29;
          if ((double)CONCAT44(uVar31,uVar30) <= dVar2) {
            uVar30 = SUB84(dVar2,0);
            uVar31 = uVar35;
          }
        }
        UE::Geometry::FDynamicGraph2<double>::FDynamicGraph2<double>
                  ((FDynamicGraph2<double> *)local_278);
        dVar2 = (double)CONCAT44(uVar31,uVar30) - (double)CONCAT44(uVar36,uVar34);
        local_128._0_8_ = 0;
        local_128._8_8_ = 0;
        dVar1 = (double)CONCAT44(uVar28,uVar26) - (double)CONCAT44(uVar33,uVar32);
        local_128._32_8_ = 0;
        local_128._40_4_ = 0;
        local_128._44_4_ = 0x80;
        if (dVar2 <= 0.0) {
          dVar2 = 0.0;
        }
        local_128._48_4_ = 0xffffffff;
        local_128._52_4_ = 0;
        if (dVar1 <= 0.0) {
          dVar1 = 0.0;
        }
        local_e8 = (void *)0x0;
        local_e0 = 0;
        if (dVar2 <= dVar1) {
          dVar2 = dVar1;
        }
        dVar1 = dVar2 * __real_3f90000000000000;
        if (dVar2 * __real_3f90000000000000 <= __real_3e45798ee2308c3a) {
          dVar1 = __real_3e45798ee2308c3a;
        }
        InitializeCriticalSectionAndSpinCount(&local_d8,4000);
        local_b0.CellSize = dVar1;
        if ((dVar1 < __real_3e45798ee2308c3a) &&
           (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_2954329834790059998>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\GridIndexing2.h"
                               ,0x22,"CellSize >= TMathUtil<RealType>::ZeroTolerance"), bVar8)) {
          pcVar3 = (code *)swi(3);
          pUVar12 = (UDynamicMesh *)(*pcVar3)();
          return pUVar12;
        }
        uVar4 = local_518.Outer.Vertices._8_8_;
        local_a0 = __real_3ee4f8b588e368f1;
        local_a8 = -1;
        local_568._48_2_ = local_568._48_2_ & 0xff00;
        local_568.bSplitBowties = true;
        while( true ) {
          iVar24 = local_518.Outer.Vertices.ArrayNum;
          uVar21 = (uint)uVar17;
          if ((uint)uVar4 == uVar21) break;
          if (iVar24 <= (int)uVar21) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("polygon != nullptr && i < polygon->VertexCount()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Polygon2.h"
                               ,0xd7,L"");
            if (bVar8) {
              pcVar3 = (code *)swi(3);
              pUVar12 = (UDynamicMesh *)(*pcVar3)();
              return pUVar12;
            }
            iVar24 = local_518.Outer.Vertices.ArrayNum;
          }
          uVar15 = (int)(uVar21 + 1) % iVar24;
          uVar16 = 0;
          if ((int)uVar15 < iVar24) {
            uVar16 = ~uVar15 >> 0x1f;
          }
          if (uVar16 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar3 = (code *)swi(3);
              pUVar12 = (UDynamicMesh *)(*pcVar3)();
              return pUVar12;
            }
            iVar24 = local_518.Outer.Vertices.ArrayNum;
          }
          FVar22.Data = local_518.Outer.Vertices.AllocatorInstance.Data;
          uVar16 = 0;
          if ((int)uVar21 < iVar24) {
            uVar16 = ~uVar21 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            pUVar12 = (UDynamicMesh *)(*pcVar3)();
            return pUVar12;
          }
          UE::Geometry::TSegment2<double>::TSegment2<double>
                    ((TSegment2<double> *)&local_478._s_0,
                     (TVector2<double> *)
                     (local_518.Outer.Vertices.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10
                     ),(TVector2<double> *)(FVar22.Data + (longlong)(int)uVar15 * 0x10));
          local_4a8._s_0.X = local_478._s_0.X + local_468 * local_458;
          local_498._s_0.X = local_478._s_0.X - local_468 * local_458;
          local_4a8._s_0.Y = local_478._s_0.Y + local_460 * local_458;
          local_498._s_0.Y = local_478._s_0.Y - local_460 * local_458;
          UE::Geometry::FArrangement2d::insert_segment
                    ((FArrangement2d *)local_278,(TVector2<double> *)&local_498._s_0,
                     (TVector2<double> *)&local_4a8._s_0,-1,local_a0);
          uVar17 = (ulonglong)(uVar21 + 1);
        }
        UE::Geometry::TConstrainedDelaunay2<double>::Add<double>
                  (&local_568,(FDynamicGraph2<double> *)local_278);
        DeleteCriticalSection(&local_d8);
        local_e0 = 0;
        if (local_e8 != (void *)0x0) {
          FMemory::Free(local_e8);
        }
        TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_128);
        UE::Geometry::TDynamicVector<double,512>::Empty
                  ((TDynamicVector<double,512> *)(local_278 + 0x138),0);
        if ((FScriptContainerElement *)local_278._320_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_278._320_8_);
        }
        UE::Geometry::FDynamicGraph::~FDynamicGraph((FDynamicGraph *)local_278);
        param_3 = local_4e8;
      }
      else {
        UE::Geometry::TConstrainedDelaunay2<double>::Add<double>(&local_568,&local_518.Outer,false);
        local_4f0 = (longlong)local_518.Holes.ArrayNum;
        uVar13 = uVar17;
        if (0 < local_518.Holes.ArrayNum) {
          do {
            uVar16 = (uint)uVar17;
            uVar21 = 0;
            if ((int)uVar16 < local_518.Holes.ArrayNum) {
              uVar21 = ~uVar16 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              pUVar12 = (UDynamicMesh *)(*pcVar3)();
              return pUVar12;
            }
            FVar22.Data = local_518.Holes.AllocatorInstance.Data;
            iVar9 = local_568.Vertices.ArrayNum;
            iVar24 = *(int *)(local_518.Holes.AllocatorInstance.Data + uVar13 + 8);
            puVar20 = *(undefined8 **)(local_518.Holes.AllocatorInstance.Data + uVar13);
            puVar25 = puVar20 + (longlong)iVar24 * 2;
            local_580 = local_568.Vertices.ArrayNum + iVar24;
            while( true ) {
              if (*(int *)(FVar22.Data + uVar13 + 8) != iVar24) {
                local_596[0] = 0;
                `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(local_596);
              }
              iVar10 = local_580;
              if (puVar20 == puVar25) break;
              local_4d0 = *puVar20;
              uStack_4c8 = puVar20[1];
              if (((local_568.Vertices.AllocatorInstance.Data <=
                    (FScriptContainerElement *)&local_4d0) &&
                  ((FScriptContainerElement *)&local_4d0 <
                   local_568.Vertices.AllocatorInstance.Data +
                   (longlong)local_568.Vertices.ArrayMax * 0x10)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar3 = (code *)swi(3);
                pUVar12 = (UDynamicMesh *)(*pcVar3)();
                return pUVar12;
              }
              iVar10 = local_568.Vertices.ArrayNum;
              if (local_568.Vertices.ArrayNum == local_568.Vertices.ArrayMax) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,(ForAnyElementType *)&local_568,
                                    &local_568.Vertices.ArrayMax);
              }
              local_568.Vertices.ArrayNum = iVar10 + 1;
              puVar20 = puVar20 + 2;
              *(undefined8 *)(local_568.Vertices.AllocatorInstance.Data + (longlong)iVar10 * 0x10) =
                   local_4d0;
              *(undefined8 *)
               (local_568.Vertices.AllocatorInstance.Data + (longlong)iVar10 * 0x10 + 8) =
                   uStack_4c8;
            }
            iVar7 = local_580 + -1;
            iVar24 = local_57c;
            param_3 = local_4e8;
            param_2 = local_4c0;
            param_6 = local_4b8;
            for (; local_57c = iVar7, local_4e8 = param_3, local_4c0 = param_2, local_4b8 = param_6,
                iVar9 < iVar10; iVar9 = iVar9 + 1) {
              iStack_578 = iVar9;
              if (((local_568.HoleEdges.AllocatorInstance.Data <=
                    (FScriptContainerElement *)&local_57c) &&
                  ((FScriptContainerElement *)&local_57c <
                   local_568.HoleEdges.AllocatorInstance.Data +
                   (longlong)local_568.HoleEdges.ArrayMax * 8)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar3 = (code *)swi(3);
                pUVar12 = (UDynamicMesh *)(*pcVar3)();
                return pUVar12;
              }
              if (local_568.HoleEdges.ArrayNum == local_568.HoleEdges.ArrayMax) {
                local_568.HoleEdges.ArrayNum =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_568.HoleEdges.AllocatorInstance,
                                &local_568.HoleEdges.ArrayMax);
              }
              *(ulonglong *)
               (local_568.HoleEdges.AllocatorInstance.Data +
               (longlong)local_568.HoleEdges.ArrayNum * 8) = CONCAT44(iStack_578,local_57c);
              iVar7 = iVar9;
              iVar24 = local_57c;
              param_3 = local_4e8;
              param_2 = local_4c0;
              param_6 = local_4b8;
              local_568.HoleEdges.ArrayNum = local_568.HoleEdges.ArrayNum + 1;
            }
            uVar17 = (ulonglong)(uVar16 + 1);
            uVar13 = uVar13 + 0x10;
            local_4f0 = local_4f0 + -1;
            local_57c = iVar24;
          } while (local_4f0 != 0);
          local_4f0 = 0;
        }
      }
      local_4b0 = &local_518;
      local_480 = &local_4b0;
      local_488 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTriangulatedPolygon'::__l2::<lambda_1>,bool,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,UE::Geometry::FIndex3i_const_&>
                  ::Call;
      UE::Geometry::TConstrainedDelaunay2<double>::Triangulate
                (&local_568,
                 (TFunctionRef<bool___cdecl(TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,UE::Geometry::FIndex3i_const_&)>
                  *)&local_488);
      if (local_568.Triangles.ArrayNum == 0) {
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            (&local_430,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                             L"AppendTriangulatedPolygon_Failed",
                             L"AppendTriangulatedPolygon: Failed to triangulate polygon");
        UE::Geometry::AppendError(param_6,OperationFailed,pFVar11);
        pUVar12 = local_570;
        if (local_430.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_430.TextData.Reference + 0x10))();
          pUVar12 = local_570;
        }
      }
      else {
        UE::Geometry::FFlatTriangulationMeshGenerator::FFlatTriangulationMeshGenerator(&local_398);
        FVar22.Data = local_568.Vertices.AllocatorInstance.Data;
        iVar24 = local_568.Vertices.ArrayNum;
        lVar23 = (longlong)local_568.Vertices.ArrayNum;
        local_398.Vertices2D.ArrayNum = local_568.Vertices.ArrayNum;
        if ((local_568.Vertices.ArrayNum == 0) && (local_398.Vertices2D.ArrayMax == 0)) {
          local_398.Vertices2D.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_568.Vertices.ArrayNum,local_398.Vertices2D.ArrayMax,
                     &local_398.Vertices2D.AllocatorInstance,local_568.Vertices.ArrayNum,
                     &local_398.Vertices2D.ArrayMax);
          if (iVar24 != 0) {
            memcpy(local_398.Vertices2D.AllocatorInstance.Data,FVar22.Data,lVar23 << 4);
          }
        }
        FVar22.Data = local_568.Triangles.AllocatorInstance.Data;
        iVar24 = local_568.Triangles.ArrayNum;
        lVar23 = (longlong)local_568.Triangles.ArrayNum;
        local_398.Triangles2D.ArrayNum = local_568.Triangles.ArrayNum;
        if ((local_568.Triangles.ArrayNum == 0) && (local_398.Triangles2D.ArrayMax == 0)) {
          local_398.Triangles2D.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,local_568.Triangles.ArrayNum,local_398.Triangles2D.ArrayMax,
                     &local_398.Triangles2D.AllocatorInstance,local_568.Triangles.ArrayNum,
                     &local_398.Triangles2D.ArrayMax);
          if (iVar24 != 0) {
            memcpy(local_398.Triangles2D.AllocatorInstance.Data,FVar22.Data,lVar23 * 0xc);
          }
        }
        uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_2a8.bIsSet = false;
        pFVar14 = UE::Geometry::FFlatTriangulationMeshGenerator::Generate(&local_398);
        pUVar12 = local_570;
        local_3f8.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
        local_3f8.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
        local_3f8.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
        local_3f8.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
        local_3f8.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
        local_3f8.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
        local_3f8.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
        local_3f8.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
        local_3f8.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
        local_3f8.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
        local_3f8.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
        local_3f8.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
        local_418._s_0.X = (double)uVar4;
        local_418._s_0.Y = (double)uVar5;
        local_418._s_0.Z = (double)uVar6;
        AppendPrimitive(local_570,pFVar14,&local_3f8,param_2,(TVector<double> *)&local_418._s_0,
                        &local_2a8);
        UE::Geometry::FFlatTriangulationMeshGenerator::~FFlatTriangulationMeshGenerator(&local_398);
      }
      if (local_568.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_568.Triangles.AllocatorInstance.Data);
      }
      if (local_568.HoleEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_568.HoleEdges.AllocatorInstance.Data);
      }
      if (local_568.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_568.Edges.AllocatorInstance.Data);
      }
      if (local_568.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_568.Vertices.AllocatorInstance.Data);
      }
      DestructItems<UE::Geometry::TPolygon2<double>,int>
                ((TPolygon2<double> *)local_518.Holes.AllocatorInstance.Data,
                 local_518.Holes.ArrayNum);
      if (local_518.Holes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_518.Holes.AllocatorInstance.Data);
      }
      if (local_518.Outer.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_518.Outer.Vertices.AllocatorInstance.Data);
      }
      if (local_590.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_590.Vertices.AllocatorInstance.Data);
      }
    }
  }
  return pUVar12;
}

// AppendVoronoiDiagram2D @ 14ce59ef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendVoronoiDiagram2D
          (UDynamicMesh *param_1,FGeometryScriptPrimitiveOptions param_2,TTransform<double> *param_3
          ,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_4,
          FGeometryScriptVoronoiOptions *param_5,UGeometryScriptDebug *param_6)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ITextData *pIVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FText *pFVar11;
  TArrayView<UE::Math::TVector2<double>_const_,int> *pTVar12;
  FMeshShapeGenerator *pFVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_298 [16];
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_288;
  UGeometryScriptDebug *local_278 [2];
  undefined1 local_268 [16];
  undefined1 local_258 [28];
  undefined4 uStack_23c;
  bool local_238;
  TVector2<double>_u_0 local_228;
  double local_218;
  double dStack_210;
  TVector<double>_u_0 local_208;
  FDelaunay2 local_1e8;
  TTransform<double> local_1c8;
  FFlatTriangulationMeshGenerator local_168;
  
  local_278[0] = param_6;
  if (param_1 != (UDynamicMesh *)0x0) {
    if (param_4->ArrayNum < 1) {
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          ((FText *)&local_228._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions"
                           ,L"PrimitiveFunctions_AppendVoronoiDiagram2D_TooFewSites",
                           L"AppendVoronoiDiagram2D: VoronoiSites array requires at least 1 position"
                          );
      UE::Geometry::AppendError(local_278[0],InvalidInputs,pFVar11);
      if ((longlong *)local_228._s_0.X != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_228._s_0.X + 0x10))();
      }
      pFVar4 = (param_5->CreateCells).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
    }
    else {
      iVar14 = 0;
      local_1e8.bKeepFastEdgeAdjacencyData = false;
      local_1e8.bValidateEdges = true;
      local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_288.ArrayNum = 0;
      local_228._s_0.Y = (double)((ulonglong)(uint)local_288.ArrayMax << 0x20);
      local_228._s_0.X = 0.0;
      local_1e8.RandomStream.InitialSeed = 0;
      local_1e8.RandomStream.Seed = 0;
      local_1e8.bAutomaticallyFixEdgesToDuplicateVertices = false;
      local_1e8.Connectivity.Ptr = (FDelaunay2Connectivity *)0x0;
      local_1e8.bIsConstrained = false;
      local_1e8.Result = NotComputed;
      pTVar12 = TArrayView<UE::Math::TVector2<double>_const_,int>::
                TArrayView<UE::Math::TVector2<double>_const_,int><TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                          ((TArrayView<UE::Math::TVector2<double>_const_,int> *)&local_208._s_0,
                           param_4);
      local_268._0_8_ = pTVar12->DataPtr;
      local_268._8_4_ = pTVar12->ArrayNum;
      local_268._12_4_ = *(undefined4 *)&pTVar12->field_0xc;
      UE::Geometry::FDelaunay2::Triangulate
                (&local_1e8,(TArrayView<UE::Math::TVector2<double>_const_,int> *)local_268,
                 (TArrayView<UE::Geometry::FIndex2i_const_,int> *)&local_228._s_0);
      if ((local_1e8.Result == Collinear) || (local_1e8.Result == Success)) {
        local_258._0_8_ = ___xmm_7fefffffffffffff7fefffffffffffff;
        local_258._8_8_ = _UNK_150a9e648;
        local_258._16_8_ = ___xmm_ffefffffffffffffffefffffffffffff;
        stack0xfffffffffffffdc0 = _UNK_1508ffb58;
        if ((param_5->Bounds).IsValid == '\0') {
          UE::Geometry::TAxisAlignedBox2<double>::Contain
                    ((TAxisAlignedBox2<double> *)local_258,param_4);
        }
        else {
          local_258._16_8_ = (param_5->Bounds).Max.field0_0x0._s_0.X;
          unique0x100005c8 = *(double *)((longlong)&(param_5->Bounds).Max.field0_0x0 + 8);
          local_258._0_8_ = (param_5->Bounds).Min.field0_0x0._s_0.X;
          local_258._8_8_ = *(double *)((longlong)&(param_5->Bounds).Min.field0_0x0 + 8);
        }
        uVar10 = stack0xfffffffffffffdc0;
        uVar9 = local_258._16_8_;
        uVar8 = local_258._8_8_;
        uVar7 = local_258._0_8_;
        fVar1 = param_5->BoundsExpand;
        bVar2 = param_5->bIncludeBoundary;
        pTVar12 = TArrayView<UE::Math::TVector2<double>_const_,int>::
                  TArrayView<UE::Math::TVector2<double>_const_,int><TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                            ((TArrayView<UE::Math::TVector2<double>_const_,int> *)&local_208._s_0,
                             param_4);
        local_228._s_0.Y = (double)((ulonglong)local_228._s_0.Y & 0xffffffff00000000);
        local_258._0_8_ = 0.0;
        pIVar5 = (ITextData *)pTVar12->DataPtr;
        dVar6 = *(double *)&pTVar12->ArrayNum;
        local_258._8_3_ = 0x100;
        local_258._16_8_ = 0.0;
        local_258._24_4_ = (uint)stack0xfffffffffffffdc0 & 0xffffff00;
        uStack_23c = 1;
        local_268._0_8_ = (ITextData *)0x0;
        local_268._8_8_ = local_228._s_0.Y;
        local_228._s_0.X = (double)pIVar5;
        local_228._s_0.Y = dVar6;
        UE::Geometry::FDelaunay2::Triangulate
                  ((FDelaunay2 *)local_258,
                   (TArrayView<UE::Math::TVector2<double>_const_,int> *)&local_228._s_0,
                   (TArrayView<UE::Geometry::FIndex2i_const_,int> *)local_268);
        local_228._s_0.X = (double)uVar7;
        local_228._s_0.Y = (double)uVar8;
        local_218 = (double)uVar9;
        dStack_210 = (double)uVar10;
        local_268._0_8_ = pIVar5;
        local_268._8_8_ = dVar6;
        UE::Geometry::FDelaunay2::GetVoronoiCells
                  ((FDelaunay2 *)local_258,&local_288,
                   (TArrayView<UE::Math::TVector2<double>_const_,int> *)local_268,bVar2,
                   (TAxisAlignedBox2<double> *)&local_228._s_0,(double)fVar1);
        if ((double)local_258._16_8_ != 0.0) {
          (**(code **)(local_258._16_8_ + -0x10))(local_258._16_8_ + -0x10);
        }
        if (local_288.ArrayNum == 0) {
          pFVar11 = FText::AsLocalizable_Advanced_LocText
                              ((FText *)local_268,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                               L"PrimitiveFunctions_AppendVoronoiDiagram2D_NoPolygons",
                               L"AppendVoronoiDiagram2D: No Voronoi cells constructed");
          UE::Geometry::AppendError(local_278[0],OperationFailed,pFVar11);
          if ((ITextData *)local_268._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_268._0_8_ + 0x10))();
          }
          DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                     local_288.AllocatorInstance.Data,local_288.ArrayNum);
          if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
              local_288.AllocatorInstance.Data !=
              (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(local_288.AllocatorInstance.Data);
          }
          if (local_1e8.Connectivity.Ptr != (FDelaunay2Connectivity *)0x0) {
            (**(code **)&local_1e8.Connectivity.Ptr[-1].DuplicateVertices.field_0x40)
                      (&local_1e8.Connectivity.Ptr[-1].DuplicateVertices.field_0x40);
          }
        }
        else {
          UE::Geometry::FFlatTriangulationMeshGenerator::FFlatTriangulationMeshGenerator(&local_168)
          ;
          iVar3 = (param_5->CreateCells).ArrayNum;
          local_208._s_0.X = (double)&local_168;
          local_208._s_0.Y = (double)&local_288;
          local_208._s_0.Z = (double)local_278;
          if (iVar3 == 0) {
            if (0 < local_288.ArrayNum) {
              do {
                `UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendVoronoiDiagram2D'::__l2::
                <lambda_1>::operator()(&local_208,iVar14);
                iVar14 = iVar14 + 1;
              } while (iVar14 < local_288.ArrayNum);
            }
          }
          else {
            pFVar15 = (param_5->CreateCells).AllocatorInstance.Data;
            pFVar4 = pFVar15 + (longlong)iVar3 * 4;
            while( true ) {
              if ((param_5->CreateCells).ArrayNum != iVar3) {
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_298);
              }
              if (pFVar15 == pFVar4) break;
              `UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendVoronoiDiagram2D'::__l2::
              <lambda_1>::operator()(&local_208,*(int *)pFVar15);
              pFVar15 = pFVar15 + 4;
            }
          }
          uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          if ((2 < local_168.Vertices2D.ArrayNum) && (0 < local_168.Triangles2D.ArrayNum)) {
            local_238 = false;
            pFVar13 = UE::Geometry::FFlatTriangulationMeshGenerator::Generate(&local_168);
            local_1c8.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
            local_1c8.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
            local_1c8.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
            local_1c8.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
            local_1c8.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
            local_1c8.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
            local_1c8.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
            local_1c8.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
            local_1c8.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
            local_1c8.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
            local_1c8.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
            local_1c8.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
            local_208._s_0.X = (double)uVar7;
            local_208._s_0.Y = (double)uVar8;
            local_208._s_0.Z = (double)uVar9;
            AppendPrimitive(param_1,pFVar13,&local_1c8,param_2,(TVector<double> *)&local_208._s_0,
                            (TOptional<UE::Geometry::TQuaternion<double>_> *)local_258);
          }
          UE::Geometry::FFlatTriangulationMeshGenerator::~FFlatTriangulationMeshGenerator
                    (&local_168);
          DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                     local_288.AllocatorInstance.Data,local_288.ArrayNum);
          if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
              local_288.AllocatorInstance.Data !=
              (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(local_288.AllocatorInstance.Data);
          }
          if (local_1e8.Connectivity.Ptr != (FDelaunay2Connectivity *)0x0) {
            (**(code **)&local_1e8.Connectivity.Ptr[-1].DuplicateVertices.field_0x40)
                      (&local_1e8.Connectivity.Ptr[-1].DuplicateVertices.field_0x40);
          }
        }
        pFVar4 = (param_5->CreateCells).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
      }
      else {
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            ((FText *)local_268,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                             L"PrimitiveFunctions_AppendVoronoiDiagram2D_GenFailed",
                             L"AppendVoronoiDiagram2D: Voronoi diagram generation failed");
        UE::Geometry::AppendError(local_278[0],OperationFailed,pFVar11);
        if ((ITextData *)local_268._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_268._0_8_ + 0x10))();
        }
        if (local_1e8.Connectivity.Ptr != (FDelaunay2Connectivity *)0x0) {
          (**(code **)&local_1e8.Connectivity.Ptr[-1].DuplicateVertices.field_0x40)
                    (&local_1e8.Connectivity.Ptr[-1].DuplicateVertices.field_0x40);
        }
        pFVar4 = (param_5->CreateCells).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
      }
    }
    return param_1;
  }
  pFVar11 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_228._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                       L"PrimitiveFunctions_AppendVoronoiDiagram2D_NullTarget",
                       L"AppendVoronoiDiagram2D: TargetMesh is Null");
  UE::Geometry::AppendError(local_278[0],InvalidInputs,pFVar11);
  if ((longlong *)local_228._s_0.X != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_228._s_0.X + 0x10))();
  }
  pFVar4 = (param_5->CreateCells).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return (UDynamicMesh *)0x0;
}

// CreateConstrainedEdgesChain @ 14ce680c0

TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::CreateConstrainedEdgesChain
          (TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar2 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar2 = 0;
  if (1 < param_1) {
    uVar6 = param_1 - 1;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if (0 < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar6,&__return_storage_ptr__->AllocatorInstance,0,piVar2);
    }
    iVar5 = 1;
    do {
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == *piVar2) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      *(int *)(pFVar3 + (longlong)iVar4 * 8 + 4) = iVar5;
      iVar1 = iVar5 + -1;
      iVar5 = iVar5 + 1;
      *(int *)(pFVar3 + (longlong)iVar4 * 8) = iVar1;
    } while (iVar5 < param_1);
  }
  return __return_storage_ptr__;
}

// CreateConstrainedEdgesLoop @ 14ce68180

TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> * __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::CreateConstrainedEdgesLoop
          (TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (2 < param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,param_1,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    iVar3 = param_1 + -1;
    iVar5 = 0;
    do {
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      *(int *)(pFVar2 + (longlong)iVar4 * 8) = iVar3 + param_2;
      *(int *)(pFVar2 + (longlong)iVar4 * 8 + 4) = iVar5 + param_2;
      iVar4 = iVar5 + 1;
      iVar3 = iVar5;
      iVar5 = iVar4;
    } while (iVar4 < param_1);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14ce6cff0

UClass * __cdecl UGeometryScriptLibrary_MeshPrimitiveFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshPrimitiveFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshPrimitiveFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshPrimitiveFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshPrimitiveFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions.InnerSingleton;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshPrimitiveFunctions @ 14ce74fc0

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshPrimitiveFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x26;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshPrimitiveFunctions_Statics::Funcs
  ;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAppendBoundingBox @ 14ce77360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendBoundingBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  UDynamicMesh *pUVar3;
  undefined1 auStackY_1d8 [32];
  int local_188;
  int local_184;
  int local_180 [2];
  undefined2 local_178;
  undefined1 uStack_176;
  undefined1 uStack_175;
  int iStack_174;
  UGeometryScriptDebug *local_170;
  UDynamicMesh *local_168 [2];
  TVector<double>_u_0 local_158;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  TTransform<double> local_118;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  double local_58;
  double dStack_50;
  double local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined7 uStack_27;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_168[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_168);
  }
  local_178 = 1;
  uStack_176 = 0;
  iStack_174 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  local_28 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_180[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_180);
  }
  local_184 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_184,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_184);
  }
  local_188 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_170 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  local_158._s_0.X = local_58;
  local_158._s_0.Y = dStack_50;
  local_158._s_0.Z = local_48;
  uStack_140 = uStack_40;
  local_128 = CONCAT71(uStack_27,local_28);
  local_138 = local_38;
  uStack_130 = uStack_30;
  FVar2.UVMode = uStack_176;
  FVar2.PolygroupMode = (undefined1)local_178;
  FVar2.bFlipOrientation = (bool)local_178._1_1_;
  FVar2._3_1_ = uStack_175;
  FVar2.MaterialID = iStack_174;
  local_118.Rotation.XY.m128d_f64[0] = (double)local_b8._0_8_;
  local_118.Rotation.XY.m128d_f64[1] = (double)local_b8._8_8_;
  local_118.Rotation.ZW.m128d_f64[0] = (double)local_a8._0_8_;
  local_118.Rotation.ZW.m128d_f64[1] = (double)local_a8._8_8_;
  local_118.Translation.XY.m128d_f64[0] = (double)local_98._0_8_;
  local_118.Translation.XY.m128d_f64[1] = (double)local_98._8_8_;
  local_118.Translation.ZW.m128d_f64[0] = (double)local_88._0_8_;
  local_118.Translation.ZW.m128d_f64[1] = (double)local_88._8_8_;
  local_118.Scale3D.XY.m128d_f64[0] = (double)local_78._0_8_;
  local_118.Scale3D.XY.m128d_f64[1] = (double)local_78._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_118.Scale3D.ZW.m128d_f64[0] = (double)local_68._0_8_;
  local_118.Scale3D.ZW.m128d_f64[1] = (double)local_68._8_8_;
  pUVar3 = UE::Private::AppendMeshHelper::AppendBoundingBox
                     (local_168[0],(FGeometryScriptSimpleCollision *)0x0,FVar2,&local_118,
                      (TBox<double> *)&local_158._s_0,local_180[0],local_184,local_188,local_170);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execAppendBoundingBoxWithCollision @ 14ce776c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendBoundingBoxWithCollision
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UGeometryScriptDebug *pUVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  UDynamicMesh *pUVar20;
  FKAggregateGeom *this;
  undefined1 auStackY_338 [32];
  int local_2e8;
  int local_2e4;
  int local_2e0 [2];
  undefined2 local_2d8;
  undefined1 uStack_2d6;
  undefined1 uStack_2d5;
  int iStack_2d4;
  UGeometryScriptDebug *local_2d0;
  UDynamicMesh *local_2c8;
  FKAggregateGeom local_2c0;
  undefined8 *local_220;
  TVector<double>_u_0 local_218;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  TTransform<double> local_1d8;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined7 uStack_e7;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_2c8 = (UDynamicMesh *)0x0;
  local_220 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2c8);
  }
  local_2c0.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c0.SphereElems.ArrayNum = 0;
  local_2c0.SphereElems.ArrayMax = 0;
  local_2c0.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c0.BoxElems.ArrayNum = 0;
  local_2c0.BoxElems.ArrayMax = 0;
  local_2c0.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c0.SphylElems.ArrayNum = 0;
  local_2c0.SphylElems.ArrayMax = 0;
  local_2c0.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c0.ConvexElems.ArrayNum = 0;
  local_2c0.ConvexElems.ArrayMax = 0;
  local_2c0.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c0.TaperedCapsuleElems.ArrayNum = 0;
  local_2c0.TaperedCapsuleElems.ArrayMax = 0;
  local_2c0.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c0.LevelSetElems.ArrayNum = 0;
  local_2c0.LevelSetElems.ArrayMax = 0;
  local_2c0.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c0.SkinnedLevelSetElems.ArrayNum = 0;
  local_2c0.SkinnedLevelSetElems.ArrayMax = 0;
  local_2c0.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c0.MLLevelSetElems.ArrayNum = 0;
  local_2c0.MLLevelSetElems.ArrayMax = 0;
  local_2c0.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c0.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_2c0.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_2c0.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_2c0.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2c0);
  }
  local_2d8 = 1;
  uStack_2d6 = 0;
  this = &local_2c0;
  if ((FKAggregateGeom *)param_2->MostRecentPropertyAddress != (FKAggregateGeom *)0x0) {
    this = (FKAggregateGeom *)param_2->MostRecentPropertyAddress;
  }
  iStack_2d4 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2d8);
  }
  local_178 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_170 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_168 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_160 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_148 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_140 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_158._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_158._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_158._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_128 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_120 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_138._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_138._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_138._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  local_e8 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_2e0[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_2e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_2e0);
  }
  local_2e4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2e4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2e4);
  }
  local_2e8 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2e8);
  }
  local_2d0 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2d0);
  }
  dVar19 = dStack_120;
  dVar18 = local_128;
  dVar15 = dStack_140;
  dVar14 = local_148;
  dVar11 = dStack_160;
  dVar10 = local_168;
  dVar9 = dStack_170;
  dVar8 = local_178;
  pUVar20 = local_2c8;
  pUVar7 = local_2d0;
  iVar6 = local_2e0[0];
  iVar5 = local_2e4;
  iVar4 = local_2e8;
  uVar3 = CONCAT71(uStack_e7,local_e8);
  uVar12 = local_158._0_8_;
  uVar13 = local_158._8_8_;
  uVar16 = local_138._0_8_;
  uVar17 = local_138._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.UVMode = uStack_2d6;
  FVar2.PolygroupMode = (undefined1)local_2d8;
  FVar2.bFlipOrientation = (bool)local_2d8._1_1_;
  FVar2._3_1_ = uStack_2d5;
  FVar2.MaterialID = iStack_2d4;
  FKAggregateGeom::EmptyElements(this);
  local_218._s_0.X = local_118;
  local_218._s_0.Y = dStack_110;
  local_218._s_0.Z = local_108;
  uStack_200 = uStack_100;
  local_1f8 = local_f8;
  uStack_1f0 = uStack_f0;
  local_1d8.Rotation.XY.m128d_f64[0] = dVar8;
  local_1d8.Rotation.XY.m128d_f64[1] = dVar9;
  local_1d8.Rotation.ZW.m128d_f64[0] = dVar10;
  local_1d8.Rotation.ZW.m128d_f64[1] = dVar11;
  local_1d8.Translation.XY.m128d_f64[0] = (double)uVar12;
  local_1d8.Translation.XY.m128d_f64[1] = (double)uVar13;
  local_1d8.Translation.ZW.m128d_f64[0] = dVar14;
  local_1d8.Translation.ZW.m128d_f64[1] = dVar15;
  local_1d8.Scale3D.XY.m128d_f64[0] = (double)uVar16;
  local_1d8.Scale3D.XY.m128d_f64[1] = (double)uVar17;
  local_1d8.Scale3D.ZW.m128d_f64[0] = dVar18;
  local_1d8.Scale3D.ZW.m128d_f64[1] = dVar19;
  local_1e8 = uVar3;
  pUVar20 = UE::Private::AppendMeshHelper::AppendBoundingBox
                      (pUVar20,(FGeometryScriptSimpleCollision *)this,FVar2,&local_1d8,
                       (TBox<double> *)&local_218._s_0,iVar6,iVar5,iVar4,pUVar7);
  *local_220 = pUVar20;
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)local_2c0.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_2c0.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_2c0.SkinnedTriangleMeshElems.AllocatorInstance.Data !=
      (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_2c0.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_2c0.MLLevelSetElems.AllocatorInstance.Data,
             local_2c0.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_2c0.MLLevelSetElems.AllocatorInstance.Data !=
      (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_2c0.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_2c0.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_2c0.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_2c0.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_2c0.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_2c0.LevelSetElems.AllocatorInstance.Data,
             local_2c0.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_2c0.LevelSetElems.AllocatorInstance.Data != (FKLevelSetElem *)0x0) {
    FMemory::Free(local_2c0.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_2c0.TaperedCapsuleElems.AllocatorInstance.Data,
             local_2c0.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_2c0.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_2c0.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_2c0.ConvexElems.AllocatorInstance.Data,
             local_2c0.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_2c0.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_2c0.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_2c0.SphylElems.AllocatorInstance.Data,
             local_2c0.SphylElems.ArrayNum);
  if ((FKSphylElem *)local_2c0.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_2c0.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_2c0.BoxElems.AllocatorInstance.Data,local_2c0.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_2c0.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_2c0.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_2c0.SphereElems.AllocatorInstance.Data,
             local_2c0.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_2c0.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_2c0.SphereElems.AllocatorInstance.Data);
  }
  return;
}

// execAppendBox @ 14ce77c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  float fVar3;
  UDynamicMesh *pUVar4;
  float fVar5;
  float fVar6;
  undefined1 auStackY_1c8 [32];
  char local_178 [4];
  int local_174;
  int local_170;
  int local_16c;
  float local_168;
  float local_164;
  float local_160 [2];
  undefined2 local_158;
  undefined1 uStack_156;
  undefined1 uStack_155;
  int iStack_154;
  UGeometryScriptDebug *local_150;
  UDynamicMesh *local_148 [2];
  TVector<double>_u_0 local_138;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  double local_f0;
  TTransform<double> local_e8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_148[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  local_158 = 1;
  uStack_156 = 0;
  iStack_154 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_168 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_164 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_164,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_164);
  }
  local_160[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_160);
  }
  local_16c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_16c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_16c);
  }
  local_170 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  local_174 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_174,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_174);
  }
  local_178[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_178);
  }
  local_150 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  fVar3 = __real_3f000000;
  local_e8.Rotation.XY.m128d_f64[0] = (double)local_88._0_8_;
  local_e8.Rotation.XY.m128d_f64[1] = (double)local_88._8_8_;
  local_e8.Translation.XY.m128d_f64[0] = (double)local_68._0_8_;
  local_e8.Translation.XY.m128d_f64[1] = (double)local_68._8_8_;
  local_e8.Scale3D.XY.m128d_f64[0] = (double)local_48._0_8_;
  local_e8.Scale3D.XY.m128d_f64[1] = (double)local_48._8_8_;
  local_e8.Rotation.ZW.m128d_f64[0] = (double)local_78._0_8_;
  local_e8.Rotation.ZW.m128d_f64[1] = (double)local_78._8_8_;
  local_e8.Translation.ZW.m128d_f64[0] = (double)local_58._0_8_;
  local_e8.Translation.ZW.m128d_f64[1] = (double)local_58._8_8_;
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)local_38._0_8_;
  local_e8.Scale3D.ZW.m128d_f64[1] = (double)local_38._8_8_;
  fVar5 = local_168 * __real_3f000000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar6 = local_160[0] * fVar3;
  local_100 = (double)fVar5;
  local_f0 = (double)fVar6;
  local_f8 = (double)(local_164 * fVar3);
  if (local_178[0] != '\x01') {
    fVar6 = 0.0;
  }
  local_138._s_0.Z = (double)fVar6;
  FVar2.UVMode = uStack_156;
  FVar2.PolygroupMode = (undefined1)local_158;
  FVar2.bFlipOrientation = (bool)local_158._1_1_;
  FVar2._3_1_ = uStack_155;
  FVar2.MaterialID = iStack_154;
  local_120 = 0;
  local_138._s_0.X = 0.0;
  local_138._s_0.Y = 0.0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = __real_3ff0000000000000;
  pUVar4 = UE::Private::AppendMeshHelper::AppendBox
                     (local_148[0],(FGeometryScriptSimpleCollision *)0x0,FVar2,&local_e8,
                      (TOrientedBox3<double> *)&local_138._s_0,local_16c,local_170,local_174,
                      local_150);
  *(UDynamicMesh **)param_3 = pUVar4;
  return;
}

// execAppendBoxWithCollision @ 14ce780f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendBoxWithCollision
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  UGeometryScriptDebug *pUVar9;
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
  UDynamicMesh *pUVar22;
  float fVar23;
  undefined1 auStackY_328 [32];
  char local_2d8 [4];
  int local_2d4;
  int local_2d0;
  int local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0 [2];
  undefined2 local_2b8;
  undefined1 uStack_2b6;
  undefined1 uStack_2b5;
  int iStack_2b4;
  UGeometryScriptDebug *local_2b0;
  UDynamicMesh *local_2a8;
  FKAggregateGeom *local_2a0;
  FKAggregateGeom local_298;
  undefined8 *local_1f8;
  TVector<double>_u_0 local_1e8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  TTransform<double> local_198;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_2a8 = (UDynamicMesh *)0x0;
  local_1f8 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2a8);
  }
  local_298.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.SphereElems.ArrayNum = 0;
  local_298.SphereElems.ArrayMax = 0;
  local_298.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.BoxElems.ArrayNum = 0;
  local_298.BoxElems.ArrayMax = 0;
  local_298.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.SphylElems.ArrayNum = 0;
  local_298.SphylElems.ArrayMax = 0;
  local_298.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.ConvexElems.ArrayNum = 0;
  local_298.ConvexElems.ArrayMax = 0;
  local_298.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.TaperedCapsuleElems.ArrayNum = 0;
  local_298.TaperedCapsuleElems.ArrayMax = 0;
  local_298.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.LevelSetElems.ArrayNum = 0;
  local_298.LevelSetElems.ArrayMax = 0;
  local_298.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.SkinnedLevelSetElems.ArrayNum = 0;
  local_298.SkinnedLevelSetElems.ArrayMax = 0;
  local_298.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.MLLevelSetElems.ArrayNum = 0;
  local_298.MLLevelSetElems.ArrayMax = 0;
  local_298.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_298.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_298.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_298.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_298,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_298);
  }
  local_2b8 = 1;
  uStack_2b6 = 0;
  local_2a0 = &local_298;
  if ((FKAggregateGeom *)param_2->MostRecentPropertyAddress != (FKAggregateGeom *)0x0) {
    local_2a0 = (FKAggregateGeom *)param_2->MostRecentPropertyAddress;
  }
  iStack_2b4 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2b8);
  }
  local_138._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_138._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_138._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_128._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_118._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_108._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_138);
  }
  local_2c0[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_2c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_2c0);
  }
  local_2c4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2c4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2c4);
  }
  local_2c8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2c8);
  }
  local_2cc = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2cc,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2cc);
  }
  local_2d0 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2d0);
  }
  local_2d4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2d4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2d4);
  }
  local_2d8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_2d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_2d8);
  }
  local_2b0 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2b0);
  }
  pUVar22 = local_2a8;
  pUVar9 = local_2b0;
  fVar8 = local_2c0[0];
  fVar7 = local_2c4;
  fVar23 = local_2c8;
  iVar6 = local_2cc;
  iVar5 = local_2d0;
  iVar4 = local_2d4;
  cVar3 = local_2d8[0];
  uVar10 = local_138._0_8_;
  uVar11 = local_138._8_8_;
  uVar12 = local_128._0_8_;
  uVar13 = local_128._8_8_;
  uVar14 = local_118._0_8_;
  uVar15 = local_118._8_8_;
  uVar16 = local_108._0_8_;
  uVar17 = local_108._8_8_;
  uVar18 = local_f8._0_8_;
  uVar19 = local_f8._8_8_;
  uVar20 = local_e8._0_8_;
  uVar21 = local_e8._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.UVMode = uStack_2b6;
  FVar2.PolygroupMode = (undefined1)local_2b8;
  FVar2.bFlipOrientation = (bool)local_2b8._1_1_;
  FVar2._3_1_ = uStack_2b5;
  FVar2.MaterialID = iStack_2b4;
  FKAggregateGeom::EmptyElements(local_2a0);
  fVar23 = fVar23 * __real_3f000000;
  local_198.Rotation.XY.m128d_f64[0] = (double)uVar10;
  local_198.Rotation.XY.m128d_f64[1] = (double)uVar11;
  local_198.Rotation.ZW.m128d_f64[0] = (double)uVar12;
  local_198.Rotation.ZW.m128d_f64[1] = (double)uVar13;
  local_198.Translation.XY.m128d_f64[0] = (double)uVar14;
  local_198.Translation.XY.m128d_f64[1] = (double)uVar15;
  local_198.Translation.ZW.m128d_f64[0] = (double)uVar16;
  local_198.Translation.ZW.m128d_f64[1] = (double)uVar17;
  local_198.Scale3D.XY.m128d_f64[0] = (double)uVar18;
  local_198.Scale3D.XY.m128d_f64[1] = (double)uVar19;
  local_198.Scale3D.ZW.m128d_f64[0] = (double)uVar20;
  local_198.Scale3D.ZW.m128d_f64[1] = (double)uVar21;
  local_1b0 = (double)(fVar8 * __real_3f000000);
  local_1a8 = (double)(fVar7 * __real_3f000000);
  local_1a0 = (double)fVar23;
  if (cVar3 != '\x01') {
    fVar23 = 0.0;
  }
  local_1e8._s_0.Z = (double)fVar23;
  local_1d0 = 0;
  local_1e8._s_0.X = 0.0;
  local_1e8._s_0.Y = 0.0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = __real_3ff0000000000000;
  pUVar22 = UE::Private::AppendMeshHelper::AppendBox
                      (pUVar22,(FGeometryScriptSimpleCollision *)local_2a0,FVar2,&local_198,
                       (TOrientedBox3<double> *)&local_1e8._s_0,iVar6,iVar5,iVar4,pUVar9);
  *local_1f8 = pUVar22;
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)local_298.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_298.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_298.SkinnedTriangleMeshElems.AllocatorInstance.Data !=
      (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_298.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_298.MLLevelSetElems.AllocatorInstance.Data,
             local_298.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_298.MLLevelSetElems.AllocatorInstance.Data !=
      (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_298.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_298.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_298.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_298.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_298.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_298.LevelSetElems.AllocatorInstance.Data,
             local_298.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_298.LevelSetElems.AllocatorInstance.Data != (FKLevelSetElem *)0x0) {
    FMemory::Free(local_298.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_298.TaperedCapsuleElems.AllocatorInstance.Data,
             local_298.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_298.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_298.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_298.ConvexElems.AllocatorInstance.Data,
             local_298.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_298.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_298.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_298.SphylElems.AllocatorInstance.Data,
             local_298.SphylElems.ArrayNum);
  if ((FKSphylElem *)local_298.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_298.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_298.BoxElems.AllocatorInstance.Data,local_298.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_298.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_298.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_298.SphereElems.AllocatorInstance.Data,
             local_298.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_298.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_298.SphereElems.AllocatorInstance.Data);
  }
  return;
}

// execAppendCapsule @ 14ce787b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendCapsule
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  UDynamicMesh *pUVar3;
  undefined1 auStackY_178 [32];
  EGeometryScriptPrimitiveOriginMode local_118 [4];
  int local_114;
  int local_110;
  int local_10c;
  float local_108;
  float local_104;
  undefined2 local_100;
  undefined1 uStack_fe;
  undefined1 uStack_fd;
  int iStack_fc;
  UGeometryScriptDebug *local_f8;
  UDynamicMesh *local_f0;
  TTransform<double> local_e8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_f0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_100 = 1;
  uStack_fe = 0;
  iStack_fc = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_104 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_104,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_104);
  }
  local_108 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_10c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_10c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_10c);
  }
  local_110 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
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
  local_118[0] = Center;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  local_f8 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  FVar2.UVMode = uStack_fe;
  FVar2.PolygroupMode = (undefined1)local_100;
  FVar2.bFlipOrientation = (bool)local_100._1_1_;
  FVar2._3_1_ = uStack_fd;
  FVar2.MaterialID = iStack_fc;
  local_e8.Rotation.XY.m128d_f64[0] = (double)local_88._0_8_;
  local_e8.Rotation.XY.m128d_f64[1] = (double)local_88._8_8_;
  local_e8.Rotation.ZW.m128d_f64[0] = (double)local_78._0_8_;
  local_e8.Rotation.ZW.m128d_f64[1] = (double)local_78._8_8_;
  local_e8.Translation.XY.m128d_f64[0] = (double)local_68._0_8_;
  local_e8.Translation.XY.m128d_f64[1] = (double)local_68._8_8_;
  local_e8.Translation.ZW.m128d_f64[0] = (double)local_58._0_8_;
  local_e8.Translation.ZW.m128d_f64[1] = (double)local_58._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e8.Scale3D.XY.m128d_f64[0] = (double)local_48._0_8_;
  local_e8.Scale3D.XY.m128d_f64[1] = (double)local_48._8_8_;
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)local_38._0_8_;
  local_e8.Scale3D.ZW.m128d_f64[1] = (double)local_38._8_8_;
  pUVar3 = UE::Private::AppendMeshHelper::AppendCapsule
                     (local_f0,(FGeometryScriptSimpleCollision *)0x0,FVar2,&local_e8,local_104,
                      local_108,local_10c,local_110,local_114,local_118[0],local_f8);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execAppendCapsuleWithCollision @ 14ce78b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendCapsuleWithCollision
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  EGeometryScriptPrimitiveOriginMode EVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  UGeometryScriptDebug *pUVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  UDynamicMesh *pUVar22;
  undefined1 auStackY_2c8 [32];
  EGeometryScriptPrimitiveOriginMode local_268 [4];
  int local_264;
  int local_260;
  int local_25c;
  float local_258;
  float local_254;
  undefined2 local_250;
  undefined1 uStack_24e;
  undefined1 uStack_24d;
  int iStack_24c;
  UGeometryScriptDebug *local_248;
  UDynamicMesh *local_240;
  FKAggregateGeom *local_238;
  FKAggregateGeom local_230;
  undefined8 *local_190;
  TTransform<double> local_188;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_240 = (UDynamicMesh *)0x0;
  local_190 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_240,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_240);
  }
  local_230.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.SphereElems.ArrayNum = 0;
  local_230.SphereElems.ArrayMax = 0;
  local_230.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.BoxElems.ArrayNum = 0;
  local_230.BoxElems.ArrayMax = 0;
  local_230.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.SphylElems.ArrayNum = 0;
  local_230.SphylElems.ArrayMax = 0;
  local_230.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.ConvexElems.ArrayNum = 0;
  local_230.ConvexElems.ArrayMax = 0;
  local_230.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.TaperedCapsuleElems.ArrayNum = 0;
  local_230.TaperedCapsuleElems.ArrayMax = 0;
  local_230.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.LevelSetElems.ArrayNum = 0;
  local_230.LevelSetElems.ArrayMax = 0;
  local_230.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.SkinnedLevelSetElems.ArrayNum = 0;
  local_230.SkinnedLevelSetElems.ArrayMax = 0;
  local_230.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.MLLevelSetElems.ArrayNum = 0;
  local_230.MLLevelSetElems.ArrayMax = 0;
  local_230.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_230.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_230.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_230.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_230,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_230);
  }
  local_250 = 1;
  uStack_24e = 0;
  local_238 = &local_230;
  if ((FKAggregateGeom *)param_2->MostRecentPropertyAddress != (FKAggregateGeom *)0x0) {
    local_238 = (FKAggregateGeom *)param_2->MostRecentPropertyAddress;
  }
  iStack_24c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_250,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_250);
  }
  local_128 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_120 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_118 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_110 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_f8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_d8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_254 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_254,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_254);
  }
  local_258 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_258,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_258);
  }
  local_25c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_25c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_25c);
  }
  local_260 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_260,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_260);
  }
  local_264 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_264,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_264);
  }
  local_268[0] = Center;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_268,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_268);
  }
  local_248 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_248,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_248);
  }
  dVar21 = dStack_d0;
  dVar20 = local_d8;
  dVar17 = dStack_f0;
  dVar16 = local_f8;
  dVar13 = dStack_110;
  dVar12 = local_118;
  dVar11 = dStack_120;
  dVar10 = local_128;
  pUVar22 = local_240;
  pUVar9 = local_248;
  fVar8 = local_254;
  fVar7 = local_258;
  iVar6 = local_25c;
  iVar5 = local_260;
  iVar4 = local_264;
  EVar3 = local_268[0];
  uVar14 = local_108._0_8_;
  uVar15 = local_108._8_8_;
  uVar18 = local_e8._0_8_;
  uVar19 = local_e8._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.UVMode = uStack_24e;
  FVar2.PolygroupMode = (undefined1)local_250;
  FVar2.bFlipOrientation = (bool)local_250._1_1_;
  FVar2._3_1_ = uStack_24d;
  FVar2.MaterialID = iStack_24c;
  FKAggregateGeom::EmptyElements(local_238);
  local_188.Rotation.XY.m128d_f64[0] = dVar10;
  local_188.Rotation.XY.m128d_f64[1] = dVar11;
  local_188.Rotation.ZW.m128d_f64[0] = dVar12;
  local_188.Rotation.ZW.m128d_f64[1] = dVar13;
  local_188.Translation.XY.m128d_f64[0] = (double)uVar14;
  local_188.Translation.XY.m128d_f64[1] = (double)uVar15;
  local_188.Translation.ZW.m128d_f64[0] = dVar16;
  local_188.Translation.ZW.m128d_f64[1] = dVar17;
  local_188.Scale3D.XY.m128d_f64[0] = (double)uVar18;
  local_188.Scale3D.XY.m128d_f64[1] = (double)uVar19;
  local_188.Scale3D.ZW.m128d_f64[0] = dVar20;
  local_188.Scale3D.ZW.m128d_f64[1] = dVar21;
  pUVar22 = UE::Private::AppendMeshHelper::AppendCapsule
                      (pUVar22,(FGeometryScriptSimpleCollision *)local_238,FVar2,&local_188,fVar8,
                       fVar7,iVar6,iVar5,iVar4,EVar3,pUVar9);
  *local_190 = pUVar22;
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)local_230.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_230.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_230.SkinnedTriangleMeshElems.AllocatorInstance.Data !=
      (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_230.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_230.MLLevelSetElems.AllocatorInstance.Data,
             local_230.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_230.MLLevelSetElems.AllocatorInstance.Data !=
      (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_230.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_230.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_230.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_230.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_230.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_230.LevelSetElems.AllocatorInstance.Data,
             local_230.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_230.LevelSetElems.AllocatorInstance.Data != (FKLevelSetElem *)0x0) {
    FMemory::Free(local_230.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_230.TaperedCapsuleElems.AllocatorInstance.Data,
             local_230.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_230.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_230.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_230.ConvexElems.AllocatorInstance.Data,
             local_230.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_230.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_230.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_230.SphylElems.AllocatorInstance.Data,
             local_230.SphylElems.ArrayNum);
  if ((FKSphylElem *)local_230.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_230.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_230.BoxElems.AllocatorInstance.Data,local_230.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_230.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_230.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_230.SphereElems.AllocatorInstance.Data,
             local_230.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_230.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_230.SphereElems.AllocatorInstance.Data);
  }
  return;
}

// execAppendCone @ 14ce79160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendCone
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  UDynamicMesh *pUVar3;
  bool bVar4;
  undefined1 auStackY_188 [32];
  EGeometryScriptPrimitiveOriginMode local_128 [4];
  int local_124;
  int local_120;
  int local_11c;
  float local_118;
  float local_114;
  float local_110 [2];
  undefined2 local_108;
  undefined1 uStack_106;
  undefined1 uStack_105;
  int iStack_104;
  UGeometryScriptDebug *local_100;
  UDynamicMesh *local_f8 [2];
  TTransform<double> local_e8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_f8[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_108 = 1;
  uStack_106 = 0;
  iStack_104 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_110[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_110);
  }
  local_114 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_114,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_114);
  }
  local_118 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_11c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_11c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_11c);
  }
  local_120 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_124 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_124,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_124);
  }
  bVar4 = local_124 != 0;
  local_128[0] = Center;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
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
  FVar2.UVMode = uStack_106;
  FVar2.PolygroupMode = (undefined1)local_108;
  FVar2.bFlipOrientation = (bool)local_108._1_1_;
  FVar2._3_1_ = uStack_105;
  FVar2.MaterialID = iStack_104;
  local_e8.Rotation.XY.m128d_f64[0] = (double)local_88._0_8_;
  local_e8.Rotation.XY.m128d_f64[1] = (double)local_88._8_8_;
  local_e8.Rotation.ZW.m128d_f64[0] = (double)local_78._0_8_;
  local_e8.Rotation.ZW.m128d_f64[1] = (double)local_78._8_8_;
  local_e8.Translation.XY.m128d_f64[0] = (double)local_68._0_8_;
  local_e8.Translation.XY.m128d_f64[1] = (double)local_68._8_8_;
  local_e8.Translation.ZW.m128d_f64[0] = (double)local_58._0_8_;
  local_e8.Translation.ZW.m128d_f64[1] = (double)local_58._8_8_;
  local_e8.Scale3D.XY.m128d_f64[0] = (double)local_48._0_8_;
  local_e8.Scale3D.XY.m128d_f64[1] = (double)local_48._8_8_;
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)local_38._0_8_;
  local_e8.Scale3D.ZW.m128d_f64[1] = (double)local_38._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = AppendCone(local_f8[0],FVar2,&local_e8,local_110[0],local_114,local_118,local_11c,
                      local_120,bVar4,local_128[0],local_100);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execAppendCurvedStairs @ 14ce79550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ce79982) */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendCurvedStairs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FGeometryScriptPrimitiveOptions FVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  UGeometryScriptDebug *pUVar9;
  UDynamicMesh *pUVar10;
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
  FText *pFVar23;
  FCurvedStairGenerator *this;
  FCurvedStairGenerator *pFVar24;
  int iVar25;
  bool bVar26;
  undefined1 auStackY_268 [32];
  undefined4 local_238;
  int local_234;
  int local_230;
  float local_22c;
  float local_228;
  undefined4 local_224;
  undefined2 local_220;
  undefined1 uStack_21e;
  undefined1 uStack_21d;
  int iStack_21c;
  UGeometryScriptDebug *local_218;
  UDynamicMesh *local_210;
  TVector<double>_u_0 local_208;
  undefined8 local_1e8;
  undefined8 local_1e0;
  TTransform<double> local_1d8;
  TOptional<UE::Geometry::TQuaternion<double>_> local_178;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pFVar24 = (FCurvedStairGenerator *)0x0;
  local_210 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_210,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_210);
  }
  local_220 = 1;
  uStack_21e = 0;
  iStack_21c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_220,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_220);
  }
  local_148._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_148._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_148._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_138._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_138._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_138._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_128._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_118._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  local_238 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_238,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_238);
  }
  local_224 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_224,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_224);
  }
  local_228 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_228,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_228);
  }
  local_22c = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_22c,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_22c);
  }
  local_230 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_230,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_230);
  }
  local_234 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_234,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_234);
  }
  bVar26 = local_234 == 0;
  local_218 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_218,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_218);
  }
  pUVar10 = local_210;
  pUVar9 = local_218;
  uVar8 = local_220;
  uVar7 = local_224;
  fVar6 = local_228;
  fVar5 = local_22c;
  iVar25 = local_230;
  uVar4 = local_238;
  FVar3.UVMode = uStack_21e;
  FVar3.PolygroupMode = (undefined1)local_220;
  FVar3.bFlipOrientation = (bool)local_220._1_1_;
  FVar3._3_1_ = uStack_21d;
  FVar3.MaterialID = iStack_21c;
  uVar11 = local_148._0_8_;
  uVar12 = local_148._8_8_;
  uVar13 = local_138._0_8_;
  uVar14 = local_138._8_8_;
  uVar15 = local_128._0_8_;
  uVar16 = local_128._8_8_;
  uVar17 = local_118._0_8_;
  uVar18 = local_118._8_8_;
  uVar19 = local_108._0_8_;
  uVar20 = local_108._8_8_;
  uVar21 = local_f8._0_8_;
  uVar22 = local_f8._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_208._s_0.X = (double)FVar3;
  if (local_210 == (UDynamicMesh *)0x0) {
    pFVar23 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_208._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendCurvedStairs",
                         L"AppendCurvedStairs: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar9,InvalidInputs,pFVar23);
    if ((FGeometryScriptPrimitiveOptions)local_208._s_0.X != (FGeometryScriptPrimitiveOptions)0x0) {
      (**(code **)(*(longlong *)local_208._s_0.X + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    this = ::operator_new(0x168);
    if (bVar26) {
      if (this != (FCurvedStairGenerator *)0x0) {
        pFVar24 = UE::Geometry::FCurvedStairGenerator::FCurvedStairGenerator(this);
      }
      local_1e0 = 0;
    }
    else if (this == (FCurvedStairGenerator *)0x0) {
      local_1e8 = 0;
    }
    else {
      UE::Geometry::FCurvedStairGenerator::FCurvedStairGenerator(this);
      this->_padding_ = (longlong)&___7FSpiralStairGenerator_Geometry_UE__6B_;
      local_1e8 = 0;
      *(undefined4 *)&this->_padding_ = 1;
      pFVar24 = this;
    }
    *(undefined4 *)((longlong)&pFVar24->_padding_ + 4) = uVar4;
    *(undefined4 *)&pFVar24->_padding_ = uVar7;
    if (iVar25 < 1) {
      iVar25 = 1;
    }
    *(int *)((longlong)&pFVar24->_padding_ + 4) = iVar25;
    pFVar24->InnerRadius = fVar6;
    pFVar24->CurveAngle = fVar5;
    *(bool *)((longlong)&pFVar24->_padding_ + 1) = (char)uVar8 == '\x02';
    *(bool *)&pFVar24->_padding_ = local_208._2_1_ == Uniform;
    (**(code **)(pFVar24->_padding_ + 8))(pFVar24);
    local_178.bIsSet = false;
    local_208._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_208._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_208._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1d8.Rotation.XY.m128d_f64[0] = (double)uVar11;
    local_1d8.Rotation.XY.m128d_f64[1] = (double)uVar12;
    local_1d8.Rotation.ZW.m128d_f64[0] = (double)uVar13;
    local_1d8.Rotation.ZW.m128d_f64[1] = (double)uVar14;
    local_1d8.Translation.XY.m128d_f64[0] = (double)uVar15;
    local_1d8.Translation.XY.m128d_f64[1] = (double)uVar16;
    local_1d8.Translation.ZW.m128d_f64[0] = (double)uVar17;
    local_1d8.Translation.ZW.m128d_f64[1] = (double)uVar18;
    local_1d8.Scale3D.XY.m128d_f64[0] = (double)uVar19;
    local_1d8.Scale3D.XY.m128d_f64[1] = (double)uVar20;
    local_1d8.Scale3D.ZW.m128d_f64[0] = (double)uVar21;
    local_1d8.Scale3D.ZW.m128d_f64[1] = (double)uVar22;
    AppendPrimitive(pUVar10,(FMeshShapeGenerator *)pFVar24,&local_1d8,FVar3,
                    (TVector<double> *)&local_208._s_0,&local_178);
    (**(code **)pFVar24->_padding_)(pFVar24,1);
    *(UDynamicMesh **)param_3 = pUVar10;
  }
  return;
}

// execAppendCylinder @ 14ce79ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendCylinder
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  UDynamicMesh *pUVar3;
  bool bVar4;
  undefined1 auStackY_168 [32];
  EGeometryScriptPrimitiveOriginMode local_118 [4];
  int local_114;
  int local_110;
  int local_10c;
  float local_108;
  float local_104;
  undefined2 local_100;
  undefined1 uStack_fe;
  undefined1 uStack_fd;
  int iStack_fc;
  UGeometryScriptDebug *local_f8;
  UDynamicMesh *local_f0;
  TTransform<double> local_e8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_f0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_100 = 1;
  uStack_fe = 0;
  iStack_fc = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_104 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_104,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_104);
  }
  local_108 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_10c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_10c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_10c);
  }
  local_110 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_114 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_114,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_114);
  }
  bVar4 = local_114 != 0;
  local_118[0] = Center;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  local_f8 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  FVar2.UVMode = uStack_fe;
  FVar2.PolygroupMode = (undefined1)local_100;
  FVar2.bFlipOrientation = (bool)local_100._1_1_;
  FVar2._3_1_ = uStack_fd;
  FVar2.MaterialID = iStack_fc;
  local_e8.Rotation.XY.m128d_f64[0] = (double)local_88._0_8_;
  local_e8.Rotation.XY.m128d_f64[1] = (double)local_88._8_8_;
  local_e8.Rotation.ZW.m128d_f64[0] = (double)local_78._0_8_;
  local_e8.Rotation.ZW.m128d_f64[1] = (double)local_78._8_8_;
  local_e8.Translation.XY.m128d_f64[0] = (double)local_68._0_8_;
  local_e8.Translation.XY.m128d_f64[1] = (double)local_68._8_8_;
  local_e8.Translation.ZW.m128d_f64[0] = (double)local_58._0_8_;
  local_e8.Translation.ZW.m128d_f64[1] = (double)local_58._8_8_;
  local_e8.Scale3D.XY.m128d_f64[0] = (double)local_48._0_8_;
  local_e8.Scale3D.XY.m128d_f64[1] = (double)local_48._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)local_38._0_8_;
  local_e8.Scale3D.ZW.m128d_f64[1] = (double)local_38._8_8_;
  pUVar3 = AppendCylinder(local_f0,FVar2,&local_e8,local_104,local_108,local_10c,local_110,bVar4,
                          local_118[0],local_f8);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execAppendDelaunayTriangulation2D @ 14ce79e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendDelaunayTriangulation2D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  uint uVar3;
  FProperty *pFVar4;
  void *_Src;
  code *pcVar5;
  FGeometryScriptPrimitiveOptions FVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uchar *puVar10;
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
  bool bVar23;
  char cVar24;
  int iVar25;
  FText *pFVar26;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar27;
  ulonglong uVar28;
  int iVar29;
  void **ppvVar30;
  ForAnyElementType *pFVar31;
  UDynamicMesh *pUVar32;
  UDynamicMesh *this;
  void **ppvVar33;
  EFillMode EVar34;
  longlong *plVar35;
  UGeometryScriptDebug *pUVar36;
  undefined1 auStackY_798 [32];
  uchar local_758 [2];
  char local_756;
  undefined2 local_754;
  char local_752;
  undefined1 local_750 [8];
  ForAnyElementType local_748;
  undefined8 local_740;
  undefined2 local_738;
  undefined2 local_728;
  undefined2 local_718;
  undefined1 uStack_716;
  undefined1 uStack_715;
  int iStack_714;
  FDelaunay2 local_710;
  uint local_6f0;
  UGeometryScriptDebug *local_6e8;
  UDynamicMesh *local_6e0;
  void **local_6d8;
  ForAnyElementType *local_6d0;
  FMeshShapeGenerator *local_6c8;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_6c0;
  ForAnyElementType local_6b0;
  undefined8 local_6a8;
  void *local_6a0;
  undefined8 local_698;
  void *local_690;
  undefined8 local_688;
  longlong *local_680;
  UGeometryScriptDebug *local_678;
  uchar *local_670;
  FGeometryScriptPrimitiveOptions local_668;
  undefined8 local_660;
  ulonglong *local_658;
  double local_648;
  double dStack_640;
  double local_638;
  FScriptContainerElement *local_628;
  int iStack_620;
  undefined4 uStack_61c;
  code *local_618;
  FMeshShapeGenerator ***local_610;
  code *local_608;
  FDynamicMesh3 **local_600;
  ForAnyElementType *local_5f8;
  FDelaunay2 *local_5f0;
  code *local_5e8;
  ForAnyElementType **local_5e0;
  FScriptContainerElement *local_5d8;
  int iStack_5d0;
  undefined4 uStack_5cc;
  TVector2<double> *local_5c8;
  int iStack_5c0;
  undefined4 uStack_5bc;
  FDynamicMesh3 *local_5b8;
  ForAnyElementType *local_5b0;
  FMeshShapeGenerator **local_5a8;
  FMeshShapeGenerator **local_5a0;
  TTransform<double> *local_598;
  FGeometryScriptPrimitiveOptions *local_590;
  double *local_588;
  ForAnyElementType *local_580;
  FText local_578;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_568;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_558;
  FText local_548;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_538;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_528;
  FText local_518;
  TVector<double>_u_0 local_508;
  FText local_4e8;
  FFlatTriangulationMeshGenerator local_4d8;
  TTransform<double> local_3e8;
  TOptional<UE::Geometry::TQuaternion<double>_> local_388;
  FDynamicMesh3 local_358;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_798;
  pUVar32 = (UDynamicMesh *)0x0;
  EVar34 = Solid;
  local_6e0 = (UDynamicMesh *)0x0;
  local_658 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_6e0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_6e0);
  }
  local_718 = 1;
  uStack_716 = 0;
  iVar25 = 0;
  iStack_714 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_718,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_718);
  }
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_128._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_118._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  local_690 = (void *)0x0;
  local_688 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_690,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_690);
  }
  local_6a0 = (void *)0x0;
  local_698 = 0;
  ppvVar33 = &local_690;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar33 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_6a0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_6a0);
  }
  local_754 = 0x100;
  local_752 = '\0';
  local_6d8 = &local_6a0;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    local_6d8 = (void **)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_754,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_754);
  }
  local_6b0.Data = (FScriptContainerElement *)0x0;
  local_6a8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_6b0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_6b0);
  }
  pFVar31 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  local_758[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_6d0 = &local_6b0;
  if (pFVar31 != (ForAnyElementType *)0x0) {
    local_6d0 = pFVar31;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_758,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_758);
  }
  local_6e8 = (UGeometryScriptDebug *)0x0;
  local_670 = local_758;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_670 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_6e8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_6e8);
  }
  pFVar31 = local_6d0;
  this = local_6e0;
  pUVar36 = local_6e8;
  cVar24 = local_752;
  uVar11 = local_128._0_8_;
  uVar12 = local_128._8_8_;
  uVar13 = local_118._0_8_;
  uVar14 = local_118._8_8_;
  uVar15 = local_108._0_8_;
  uVar16 = local_108._8_8_;
  uVar17 = local_f8._0_8_;
  uVar18 = local_f8._8_8_;
  uVar19 = local_e8._0_8_;
  uVar20 = local_e8._8_8_;
  uVar21 = local_d8._0_8_;
  uVar22 = local_d8._8_8_;
  FVar6.UVMode = uStack_716;
  FVar6.PolygroupMode = (undefined1)local_718;
  FVar6.bFlipOrientation = (bool)local_718._1_1_;
  FVar6._3_1_ = uStack_715;
  FVar6.MaterialID = iStack_714;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  piVar1 = (int *)((longlong)&local_6d0[1].Data + 4);
  local_738 = local_754;
  local_728 = local_754;
  local_756 = local_752;
  local_678 = local_6e8;
  *local_670 = '\0';
  iVar29 = *piVar1;
  *(undefined4 *)&pFVar31[1].Data = 0;
  if (iVar29 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,pFVar31,0,piVar1);
    cVar24 = local_756;
  }
  ppvVar30 = local_6d8;
  if (this == (UDynamicMesh *)0x0) {
    pFVar26 = FText::AsLocalizable_Advanced_LocText
                        (&local_548,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendDelaunayTriangulation2D_NullTarget",
                         L"AppendDelaunayTriangulation2D: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar36,InvalidInputs,pFVar26);
    this = pUVar32;
    if (local_548.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_548.TextData.Reference + 0x10))();
    }
  }
  else if (*(int *)(ppvVar33 + 1) < 3) {
    pFVar26 = FText::AsLocalizable_Advanced_LocText
                        (&local_518,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendDelaunayTriangulation2D_TooFewVertices",
                         L"AppendDelaunayTriangulation2D: VertexPositions array requires at least 3 positions"
                        );
    UE::Geometry::AppendError(pUVar36,InvalidInputs,pFVar26);
    if (local_518.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_518.TextData.Reference + 0x10))();
    }
  }
  else {
    local_710.RandomStream.InitialSeed = 0;
    local_710.RandomStream.Seed = 0;
    local_710.bKeepFastEdgeAdjacencyData = false;
    local_710.bValidateEdges = true;
    local_710.bAutomaticallyFixEdgesToDuplicateVertices = false;
    uVar3 = *(uint *)(local_6d8 + 1);
    local_710.Connectivity.Ptr = (FDelaunay2Connectivity *)0x0;
    local_710.bIsConstrained = false;
    local_710.Result = NotComputed;
    local_748.Data = (FScriptContainerElement *)0x0;
    local_740 = 0;
    if (uVar3 == 0) {
      local_710.bAutomaticallyFixEdgesToDuplicateVertices = (bool)cVar24;
LAB_14ce7a46a:
      local_5d8 = local_748.Data;
      if ((iVar25 < 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar23)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_5c8 = *ppvVar33;
      iVar29 = *(int *)(ppvVar33 + 1);
      iStack_5d0 = iVar25;
      if ((iVar29 < 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar23)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_568._12_4_ = uStack_5cc;
      local_568.ArrayNum = iStack_5d0;
      local_558._12_4_ = uStack_5bc;
      local_558.ArrayNum = iVar29;
      local_558.DataPtr = local_5c8;
      local_568.DataPtr = (FIndex2i *)local_5d8;
      iStack_5c0 = iVar29;
      bVar23 = UE::Geometry::FDelaunay2::Triangulate(&local_710,&local_558,&local_568);
      if (bVar23) {
        bVar23 = UE::Geometry::FDelaunay2::HasDuplicates(&local_710);
        puVar10 = local_670;
        *local_670 = bVar23;
        UE::Geometry::FFlatTriangulationMeshGenerator::FFlatTriangulationMeshGenerator(&local_4d8);
        local_4d8._padding_._0_1_ = 1;
        if (&local_4d8.Vertices2D !=
            (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)ppvVar33) {
          iVar25 = *(int *)(ppvVar33 + 1);
          _Src = *ppvVar33;
          local_4d8.Vertices2D.ArrayNum = iVar25;
          if ((iVar25 == 0) && (local_4d8.Vertices2D.ArrayMax == 0)) {
            local_4d8.Vertices2D.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar25,local_4d8.Vertices2D.ArrayMax,
                       &local_4d8.Vertices2D.AllocatorInstance,iVar25,&local_4d8.Vertices2D.ArrayMax
                      );
            if (iVar25 != 0) {
              memcpy(local_4d8.Vertices2D.AllocatorInstance.Data,_Src,(longlong)iVar25 << 4);
            }
          }
        }
        if ((*(int *)(local_6d8 + 1) == 0) || (cVar24 = (char)local_738, cVar24 == '\0')) {
          pTVar27 = UE::Geometry::FDelaunay2::GetTriangles(&local_710,&local_528);
          if (&local_4d8.Triangles2D != pTVar27) {
            if (local_4d8.Triangles2D.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4d8.Triangles2D.AllocatorInstance.Data);
            }
            local_4d8.Triangles2D.AllocatorInstance.Data = (pTVar27->AllocatorInstance).Data;
            (pTVar27->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            local_4d8.Triangles2D.ArrayNum = pTVar27->ArrayNum;
            local_4d8.Triangles2D.ArrayMax = pTVar27->ArrayMax;
            pTVar27->ArrayNum = 0;
            pTVar27->ArrayMax = 0;
          }
          if (local_528.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_528.AllocatorInstance.Data);
          }
        }
        else {
          if (cVar24 != '\x01') {
            if (cVar24 == '\x02') {
              EVar34 = PositiveWinding;
            }
            else if (cVar24 == '\x03') {
              EVar34 = NonZeroWinding;
            }
            else {
              EVar34 = (cVar24 != '\x04') + NegativeWinding;
            }
          }
          iVar25 = (int)local_740;
          local_628 = local_748.Data;
          if (((int)local_740 < 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar23)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iStack_620 = iVar25;
          local_538._12_4_ = uStack_61c;
          local_538.ArrayNum = iVar25;
          local_538.DataPtr = (FIndex2i *)local_628;
          local_6c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_6c0.ArrayNum = 0;
          local_6c0.ArrayMax = 0;
          UE::Geometry::FDelaunay2::GetFilledTriangles(&local_710,&local_6c0,&local_538,EVar34);
          if (local_4d8.Triangles2D.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4d8.Triangles2D.AllocatorInstance.Data);
          }
          local_4d8.Triangles2D.AllocatorInstance.Data = local_6c0.AllocatorInstance.Data;
          local_4d8.Triangles2D.ArrayNum = local_6c0.ArrayNum;
          local_4d8.Triangles2D.ArrayMax = local_6c0.ArrayMax;
        }
        uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        if ((2 < local_4d8.Vertices2D.ArrayNum) && (0 < local_4d8.Triangles2D.ArrayNum)) {
          local_6c8 = UE::Geometry::FFlatTriangulationMeshGenerator::Generate(&local_4d8);
          local_648 = (double)uVar7;
          dStack_640 = (double)uVar8;
          local_638 = (double)uVar9;
          local_3e8.Rotation.XY.m128d_f64[0] = (double)uVar11;
          local_3e8.Rotation.XY.m128d_f64[1] = (double)uVar12;
          local_3e8.Rotation.ZW.m128d_f64[0] = (double)uVar13;
          local_3e8.Rotation.ZW.m128d_f64[1] = (double)uVar14;
          local_3e8.Translation.XY.m128d_f64[0] = (double)uVar15;
          local_3e8.Translation.XY.m128d_f64[1] = (double)uVar16;
          local_3e8.Translation.ZW.m128d_f64[0] = (double)uVar17;
          local_3e8.Translation.ZW.m128d_f64[1] = (double)uVar18;
          local_3e8.Scale3D.XY.m128d_f64[0] = (double)uVar19;
          local_3e8.Scale3D.XY.m128d_f64[1] = (double)uVar20;
          local_3e8.Scale3D.ZW.m128d_f64[0] = (double)uVar21;
          local_3e8.Scale3D.ZW.m128d_f64[1] = (double)uVar22;
          local_668 = FVar6;
          bVar23 = UDynamicMesh::IsEmpty(this);
          pFVar31 = local_6d0;
          if (bVar23) {
            local_5a0 = &local_6c8;
            local_598 = &local_3e8;
            local_580 = local_6d0;
            local_590 = &local_668;
            local_588 = &local_648;
            local_610 = &local_5a0;
            local_618 = UE::Core::Private::Function::
                        TFunctionRefCaller<`AppendPrimitiveWithVertexIndexMap'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                        ::Call;
            UDynamicMesh::EditMesh
                      (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_618,
                       GeneralEdit,Unknown,false);
          }
          else {
            UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_358,local_6c8);
            local_508._s_0.X = local_648;
            local_508._s_0.Y = dStack_640;
            local_508._s_0.Z = local_638;
            local_388.bIsSet = false;
            ApplyPrimitiveOptionsToMesh
                      (&local_358,&local_3e8,local_668,(TVector<double> *)&local_508._s_0,&local_388
                      );
            pFVar31 = local_6d0;
            local_5b8 = &local_358;
            local_5a8 = &local_6c8;
            local_5b0 = local_6d0;
            local_600 = &local_5b8;
            local_608 = UE::Core::Private::Function::
                        TFunctionRefCaller<`AppendPrimitiveWithVertexIndexMap'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                        ::Call;
            UDynamicMesh::EditMesh
                      (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_608,
                       GeneralEdit,Unknown,false);
            UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_358);
          }
          if ((local_756 != '\0') && (*puVar10 != '\0')) {
            local_5f0 = &local_710;
            local_5e0 = &local_5f8;
            local_5e8 = UE::Core::Private::Function::
                        TFunctionRefCaller<`UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendDelaunayTriangulation2D'::__l38::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                        ::Call;
            local_5f8 = pFVar31;
            UDynamicMesh::EditMesh
                      (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_5e8,
                       GeneralEdit,Unknown,false);
          }
        }
        UE::Geometry::FFlatTriangulationMeshGenerator::~FFlatTriangulationMeshGenerator(&local_4d8);
      }
      else {
        pFVar26 = FText::AsLocalizable_Advanced_LocText
                            (&local_4e8,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                             L"PrimitiveFunctions_AppendDelaunayTriangulation2D_GenFailed",
                             L"AppendDelaunayTriangulation2D: Delaunay triangulation failed");
        UE::Geometry::AppendError(pUVar36,OperationFailed,pFVar26);
        if (local_4e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_4e8.TextData.Reference + 0x10))();
        }
      }
    }
    else {
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      if (0 < (int)uVar3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar3,&local_748,0,(int *)((longlong)&local_740 + 4));
        pUVar32 = (UDynamicMesh *)(local_740 & 0xffffffff);
      }
      uVar28 = (ulonglong)(int)*(uint *)(ppvVar30 + 1);
      plVar35 = *ppvVar30;
      local_6f0 = *(uint *)(ppvVar30 + 1);
      local_680 = plVar35 + uVar28;
      while( true ) {
        while( true ) {
          if (*(int *)(ppvVar30 + 1) != (int)uVar28) {
            local_750[0] = 0;
            `TCheckedPointerIterator<UE::Math::TIntPoint<int>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_750);
            pUVar32 = (UDynamicMesh *)(local_740 & 0xffffffff);
          }
          iVar25 = (int)pUVar32;
          if (plVar35 == local_680) {
            local_710.bValidateEdges = local_728._1_1_;
            local_710.bAutomaticallyFixEdgesToDuplicateVertices = true;
            pUVar36 = local_678;
            goto LAB_14ce7a46a;
          }
          local_660 = *plVar35;
          iVar29 = (int)local_660;
          if ((((iVar29 < 0) || (*(int *)(ppvVar33 + 1) <= iVar29)) || (local_660 < 0)) ||
             (*(int *)(ppvVar33 + 1) <= (int)((ulonglong)local_660 >> 0x20))) break;
          if (iVar25 == local_740._4_4_) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_748,(int *)((longlong)&local_740 + 4));
          }
          local_740 = CONCAT44(local_740._4_4_,iVar25 + 1U);
          plVar35 = plVar35 + 1;
          *(int *)(local_748.Data + (longlong)iVar25 * 8) = iVar29;
          uVar28 = (ulonglong)local_6f0;
          *(undefined4 *)(local_748.Data + (longlong)iVar25 * 8 + 4) = local_660._4_4_;
          pUVar32 = (UDynamicMesh *)(ulonglong)(iVar25 + 1U);
          ppvVar30 = local_6d8;
        }
        if (local_728._1_1_ != false) break;
        plVar35 = plVar35 + 1;
        uVar28 = (ulonglong)local_6f0;
        ppvVar30 = local_6d8;
      }
      pFVar26 = FText::AsLocalizable_Advanced_LocText
                          (&local_578,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                           L"PrimitiveFunctions_AppendDelaunayTriangulation2D_InvalidEdges",
                           L"AppendDelaunayTriangulation2D: Constrained Edges must only contain valid indices into Vertex Positions"
                          );
      UE::Geometry::AppendError(local_678,InvalidInputs,pFVar26);
      if (local_578.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_578.TextData.Reference + 0x10))();
      }
    }
    if (local_748.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_748.Data);
    }
    if (local_710.Connectivity.Ptr != (FDelaunay2Connectivity *)0x0) {
      (**(code **)&local_710.Connectivity.Ptr[-1].DuplicateVertices.field_0x40)
                (&local_710.Connectivity.Ptr[-1].DuplicateVertices.field_0x40);
    }
  }
  *local_658 = (ulonglong)this;
  if (local_6b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b0.Data);
  }
  if (local_6a0 != (void *)0x0) {
    FMemory::Free(local_6a0);
  }
  if (local_690 != (void *)0x0) {
    FMemory::Free(local_690);
  }
  return;
}

// execAppendDisc @ 14ce7aa30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendDisc
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  FGeometryScriptPrimitiveOptions FVar4;
  float fVar5;
  float fVar6;
  UGeometryScriptDebug *pUVar7;
  UDynamicMesh *pUVar8;
  undefined8 uVar9;
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
  FText *pFVar21;
  char cVar22;
  FPuncturedDiscMeshGenerator *pFVar23;
  float fVar24;
  undefined1 auStackY_418 [32];
  float local_3e8;
  float local_3e4;
  float local_3e0;
  int local_3dc;
  int local_3d8;
  float local_3d4;
  undefined2 local_3d0;
  undefined1 uStack_3ce;
  undefined1 uStack_3cd;
  int iStack_3cc;
  float local_3c8;
  UGeometryScriptDebug *local_3c0;
  UDynamicMesh *local_3b8 [2];
  TVector<double>_u_0 local_3a8;
  TTransform<double> local_388;
  FPuncturedDiscMeshGenerator local_328;
  undefined1 local_248 [240];
  undefined1 local_158;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_418;
  local_3b8[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_3b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_3b8);
  }
  local_3d0 = 1;
  uStack_3ce = 0;
  iStack_3cc = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3d0);
  }
  local_148._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_148._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_148._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_138._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_138._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_138._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_128._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_118._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  local_3d4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3d4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3d4);
  }
  local_3d8 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3d8);
  }
  local_3dc = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3dc,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3dc);
  }
  local_3e0 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3e0);
  }
  local_3e4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3e4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3e4);
  }
  local_3e8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3e8);
  }
  local_3c0 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3c0);
  }
  pUVar8 = local_3b8[0];
  pUVar7 = local_3c0;
  fVar24 = local_3d4;
  iVar2 = local_3d8;
  iVar3 = local_3dc;
  fVar6 = local_3e4;
  fVar5 = local_3e8;
  uVar9 = local_148._0_8_;
  uVar10 = local_148._8_8_;
  uVar11 = local_138._0_8_;
  uVar12 = local_138._8_8_;
  uVar13 = local_128._0_8_;
  uVar14 = local_128._8_8_;
  uVar15 = local_118._0_8_;
  uVar16 = local_118._8_8_;
  uVar17 = local_108._0_8_;
  uVar18 = local_108._8_8_;
  uVar19 = local_f8._0_8_;
  uVar20 = local_f8._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4.UVMode = uStack_3ce;
  FVar4.PolygroupMode = (undefined1)local_3d0;
  FVar4.bFlipOrientation = (bool)local_3d0._1_1_;
  FVar4._3_1_ = uStack_3cd;
  FVar4.MaterialID = iStack_3cc;
  local_3c8 = local_3e0;
  cVar22 = (char)local_3d0;
  if (local_3b8[0] == (UDynamicMesh *)0x0) {
    pFVar21 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_3a8._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendDisc",L"AppendDisc: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar7,InvalidInputs,pFVar21);
    if ((longlong *)local_3a8._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_3a8._s_0.X + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    UE::Geometry::FDiscMeshGenerator::FDiscMeshGenerator((FDiscMeshGenerator *)local_248);
    UE::Geometry::FPuncturedDiscMeshGenerator::FPuncturedDiscMeshGenerator(&local_328);
    pFVar23 = (FPuncturedDiscMeshGenerator *)local_248;
    if (0.0 < fVar5) {
      local_328.HoleRadius = fVar5;
      pFVar23 = &local_328;
    }
    if (fVar24 <= __real_358637bd) {
      fVar24 = __real_358637bd;
    }
    *(undefined8 *)((longlong)&pFVar23->_padding_ + 4) =
         UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
    *(float *)((longlong)&pFVar23->_padding_ + 4) =
         UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
    *(float *)&pFVar23->_padding_ = local_3c8;
    *(float *)&pFVar23->_padding_ = fVar24;
    if (iVar2 < 3) {
      iVar2 = 3;
    }
    *(float *)((longlong)&pFVar23->_padding_ + 4) = fVar6;
    *(int *)&pFVar23->_padding_ = iVar2;
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    *(int *)((longlong)&pFVar23->_padding_ + 4) = iVar3;
    *(bool *)&pFVar23->_padding_ = cVar22 != '\x02';
    (**(code **)(pFVar23->_padding_ + 8))(pFVar23);
    local_158 = 0;
    local_3a8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_3a8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_3a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_388.Rotation.XY.m128d_f64[0] = (double)uVar9;
    local_388.Rotation.XY.m128d_f64[1] = (double)uVar10;
    local_388.Rotation.ZW.m128d_f64[0] = (double)uVar11;
    local_388.Rotation.ZW.m128d_f64[1] = (double)uVar12;
    local_388.Translation.XY.m128d_f64[0] = (double)uVar13;
    local_388.Translation.XY.m128d_f64[1] = (double)uVar14;
    local_388.Translation.ZW.m128d_f64[0] = (double)uVar15;
    local_388.Translation.ZW.m128d_f64[1] = (double)uVar16;
    local_388.Scale3D.XY.m128d_f64[0] = (double)uVar17;
    local_388.Scale3D.XY.m128d_f64[1] = (double)uVar18;
    local_388.Scale3D.ZW.m128d_f64[0] = (double)uVar19;
    local_388.Scale3D.ZW.m128d_f64[1] = (double)uVar20;
    AppendPrimitive(pUVar8,(FMeshShapeGenerator *)pFVar23,&local_388,FVar4,
                    (TVector<double> *)&local_3a8._s_0,
                    (TOptional<UE::Geometry::TQuaternion<double>_> *)(local_248 + 0xd0));
    local_328._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((void *)local_328._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_328._padding_);
    }
    if ((void *)local_328._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_328._padding_);
    }
    if ((void *)local_328._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_328._padding_);
    }
    if ((void *)local_328._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_328._padding_);
    }
    if ((void *)local_328._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_328._padding_);
    }
    if ((void *)local_328._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_328._padding_);
    }
    if ((void *)local_328._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_328._padding_);
    }
    if ((void *)local_328._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_328._padding_);
    }
    if ((void *)local_328._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_328._padding_);
    }
    local_248._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((void *)local_248._136_8_ != (void *)0x0) {
      FMemory::Free((void *)local_248._136_8_);
    }
    if ((void *)local_248._120_8_ != (void *)0x0) {
      FMemory::Free((void *)local_248._120_8_);
    }
    if ((void *)local_248._104_8_ != (void *)0x0) {
      FMemory::Free((void *)local_248._104_8_);
    }
    if ((void *)local_248._88_8_ != (void *)0x0) {
      FMemory::Free((void *)local_248._88_8_);
    }
    if ((void *)local_248._72_8_ != (void *)0x0) {
      FMemory::Free((void *)local_248._72_8_);
    }
    if ((void *)local_248._56_8_ != (void *)0x0) {
      FMemory::Free((void *)local_248._56_8_);
    }
    if ((void *)local_248._40_8_ != (void *)0x0) {
      FMemory::Free((void *)local_248._40_8_);
    }
    if ((void *)local_248._24_8_ != (void *)0x0) {
      FMemory::Free((void *)local_248._24_8_);
    }
    if ((void *)local_248._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_248._8_8_);
    }
    *(UDynamicMesh **)param_3 = pUVar8;
  }
  return;
}

// execAppendLinearStairs @ 14ce7b100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ce7b50e) */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendLinearStairs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FGeometryScriptPrimitiveOptions FVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined2 uVar7;
  UGeometryScriptDebug *pUVar8;
  UDynamicMesh *pUVar9;
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
  FText *pFVar22;
  FStairGenerator *this;
  FStairGenerator *pFVar23;
  int iVar24;
  bool bVar25;
  undefined1 auStackY_258 [32];
  float local_228;
  int local_224;
  int local_220;
  undefined4 local_21c;
  float local_218 [2];
  undefined2 local_210;
  undefined1 uStack_20e;
  undefined1 uStack_20d;
  int iStack_20c;
  UGeometryScriptDebug *local_208;
  UDynamicMesh *local_200;
  TVector<double>_u_0 local_1f8;
  undefined8 local_1d8;
  undefined8 local_1d0;
  TTransform<double> local_1c8;
  TOptional<UE::Geometry::TQuaternion<double>_> local_168;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pFVar23 = (FStairGenerator *)0x0;
  local_200 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_200,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_200);
  }
  local_210 = 1;
  uStack_20e = 0;
  iStack_20c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_210,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_210);
  }
  local_138._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_138._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_138._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_128._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_118._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_108._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_138,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_138);
  }
  local_228 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_228,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_228);
  }
  local_218[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_218,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_218);
  }
  local_21c = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_21c,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_21c);
  }
  local_220 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_220,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_220);
  }
  local_224 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_224,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_224);
  }
  bVar25 = local_224 == 0;
  local_208 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_208,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_208);
  }
  pUVar9 = local_200;
  pUVar8 = local_208;
  uVar7 = local_210;
  fVar6 = local_218[0];
  uVar5 = local_21c;
  iVar24 = local_220;
  fVar4 = local_228;
  FVar3.UVMode = uStack_20e;
  FVar3.PolygroupMode = (undefined1)local_210;
  FVar3.bFlipOrientation = (bool)local_210._1_1_;
  FVar3._3_1_ = uStack_20d;
  FVar3.MaterialID = iStack_20c;
  uVar10 = local_138._0_8_;
  uVar11 = local_138._8_8_;
  uVar12 = local_128._0_8_;
  uVar13 = local_128._8_8_;
  uVar14 = local_118._0_8_;
  uVar15 = local_118._8_8_;
  uVar16 = local_108._0_8_;
  uVar17 = local_108._8_8_;
  uVar18 = local_f8._0_8_;
  uVar19 = local_f8._8_8_;
  uVar20 = local_e8._0_8_;
  uVar21 = local_e8._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1f8._s_0.X = (double)FVar3;
  if (local_200 == (UDynamicMesh *)0x0) {
    pFVar22 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_1f8._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendLinearStairs",
                         L"AppendLinearStairs: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar8,InvalidInputs,pFVar22);
    if ((FGeometryScriptPrimitiveOptions)local_1f8._s_0.X != (FGeometryScriptPrimitiveOptions)0x0) {
      (**(code **)(*(longlong *)local_1f8._s_0.X + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    this = ::operator_new(0x148);
    if (bVar25) {
      if (this != (FStairGenerator *)0x0) {
        UE::Geometry::FStairGenerator::FStairGenerator(this);
        *(undefined4 *)&this[1]._padding_ = 0x41f00000;
        this->_padding_ = (longlong)&___7FLinearStairGenerator_Geometry_UE__6B_;
        this->StairStyle = Solid;
        pFVar23 = this;
      }
      local_1d0 = 0;
    }
    else if (this == (FStairGenerator *)0x0) {
      local_1d8 = 0;
    }
    else {
      UE::Geometry::FStairGenerator::FStairGenerator(this);
      *(undefined4 *)&this[1]._padding_ = 0x41f00000;
      this->_padding_ = (longlong)&___7FFloatingStairGenerator_Geometry_UE__6B_;
      this->StairStyle = Floating;
      local_1d8 = 0;
      pFVar23 = this;
    }
    *(undefined4 *)&pFVar23[1]._padding_ = uVar5;
    pFVar23->StepWidth = fVar4;
    pFVar23->StepHeight = fVar6;
    if (iVar24 < 1) {
      iVar24 = 1;
    }
    pFVar23->NumSteps = iVar24;
    pFVar23->bPolygroupPerQuad = (char)uVar7 == '\x02';
    pFVar23->bScaleUVByAspectRatio = local_1f8._2_1_ == Uniform;
    (**(code **)(pFVar23->_padding_ + 8))(pFVar23);
    local_168.bIsSet = false;
    local_1f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_1f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1c8.Rotation.XY.m128d_f64[0] = (double)uVar10;
    local_1c8.Rotation.XY.m128d_f64[1] = (double)uVar11;
    local_1c8.Rotation.ZW.m128d_f64[0] = (double)uVar12;
    local_1c8.Rotation.ZW.m128d_f64[1] = (double)uVar13;
    local_1c8.Translation.XY.m128d_f64[0] = (double)uVar14;
    local_1c8.Translation.XY.m128d_f64[1] = (double)uVar15;
    local_1c8.Translation.ZW.m128d_f64[0] = (double)uVar16;
    local_1c8.Translation.ZW.m128d_f64[1] = (double)uVar17;
    local_1c8.Scale3D.XY.m128d_f64[0] = (double)uVar18;
    local_1c8.Scale3D.XY.m128d_f64[1] = (double)uVar19;
    local_1c8.Scale3D.ZW.m128d_f64[0] = (double)uVar20;
    local_1c8.Scale3D.ZW.m128d_f64[1] = (double)uVar21;
    AppendPrimitive(pUVar9,(FMeshShapeGenerator *)pFVar23,&local_1c8,FVar3,
                    (TVector<double> *)&local_1f8._s_0,&local_168);
    (**(code **)pFVar23->_padding_)(pFVar23,1);
    *(UDynamicMesh **)param_3 = pUVar9;
  }
  return;
}

// execAppendOrientedBox @ 14ce7b640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendOrientedBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UGeometryScriptDebug *pUVar6;
  TOrientedBox3<double> *pTVar7;
  UDynamicMesh *pUVar8;
  undefined1 auStackY_2d8 [32];
  int local_288;
  int local_284;
  int local_280 [2];
  undefined2 local_278;
  undefined1 uStack_276;
  undefined1 uStack_275;
  int iStack_274;
  UGeometryScriptDebug *local_270;
  UDynamicMesh *local_268 [2];
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  TVector<double>_u_0 local_1d8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  TTransform<double> local_158;
  TOrientedBox3<double> local_f8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_268[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_268,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_268);
  }
  local_278 = 1;
  uStack_276 = 0;
  iStack_274 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_278,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_278);
  }
  local_a8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_a0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_90 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_88 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dStack_80 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_78 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_70 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_68 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dStack_60 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_58 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_50 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_258 = 0.0;
  dStack_250 = 0.0;
  local_238 = 0;
  uStack_230 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_1f8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_1f0 = _UNK_150689688;
  local_1e8 = __real_3ff0000000000000;
  local_248 = ___xmm_3ff00000000000000000000000000000;
  uStack_240 = _UNK_15061cbc8;
  local_228 = ___xmm_3ff00000000000000000000000000000;
  uStack_220 = _UNK_15061cbc8;
  local_208 = ___xmm_3ff00000000000000000000000000000;
  uStack_200 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_258,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_258);
  }
  local_280[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_280,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_280);
  }
  local_284 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_284,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_284);
  }
  local_288 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_288,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_288);
  }
  local_270 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_270,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_270);
  }
  pUVar8 = local_268[0];
  pUVar6 = local_270;
  iVar5 = local_280[0];
  iVar4 = local_284;
  iVar3 = local_288;
  local_1d8._s_0.X = local_258;
  local_1d8._s_0.Y = dStack_250;
  local_1d8._s_0.Z = local_248;
  uStack_1c0 = uStack_240;
  local_1b8 = local_238;
  uStack_1b0 = uStack_230;
  local_1a8 = local_228;
  uStack_1a0 = uStack_220;
  local_198 = local_218;
  uStack_190 = uStack_210;
  local_188 = local_208;
  uStack_180 = uStack_200;
  local_178 = local_1f8;
  uStack_170 = uStack_1f0;
  local_168 = local_1e8;
  local_158.Rotation.XY.m128d_f64[0] = local_a8;
  local_158.Rotation.XY.m128d_f64[1] = dStack_a0;
  local_158.Rotation.ZW.m128d_f64[0] = local_98;
  local_158.Rotation.ZW.m128d_f64[1] = dStack_90;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.UVMode = uStack_276;
  FVar2.PolygroupMode = (undefined1)local_278;
  FVar2.bFlipOrientation = (bool)local_278._1_1_;
  FVar2._3_1_ = uStack_275;
  FVar2.MaterialID = iStack_274;
  local_158.Translation.XY.m128d_f64[0] = local_88;
  local_158.Translation.XY.m128d_f64[1] = dStack_80;
  local_158.Translation.ZW.m128d_f64[0] = local_78;
  local_158.Translation.ZW.m128d_f64[1] = dStack_70;
  local_158.Scale3D.XY.m128d_f64[0] = local_68;
  local_158.Scale3D.XY.m128d_f64[1] = dStack_60;
  local_158.Scale3D.ZW.m128d_f64[0] = local_58;
  local_158.Scale3D.ZW.m128d_f64[1] = dStack_50;
  pTVar7 = UE::Geometry::TOrientedBox3<double>::TOrientedBox3<double>
                     (&local_f8,(FOrientedBox *)&local_1d8._s_0);
  pUVar8 = UE::Private::AppendMeshHelper::AppendBox
                     (pUVar8,(FGeometryScriptSimpleCollision *)0x0,FVar2,&local_158,pTVar7,iVar5,
                      iVar4,iVar3,pUVar6);
  *(UDynamicMesh **)param_3 = pUVar8;
  return;
}

// execAppendOrientedBoxWithCollision @ 14ce7ba40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendOrientedBoxWithCollision
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UGeometryScriptDebug *pUVar6;
  TOrientedBox3<double> *pTVar7;
  UDynamicMesh *pUVar8;
  FKAggregateGeom *this;
  undefined1 auStackY_378 [32];
  int local_328;
  int local_324;
  int local_320 [2];
  undefined2 local_318;
  undefined1 uStack_316;
  undefined1 uStack_315;
  int iStack_314;
  UGeometryScriptDebug *local_310;
  UDynamicMesh *local_308;
  FKAggregateGeom local_300;
  undefined8 *local_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  TVector<double>_u_0 local_1d8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  TTransform<double> local_158;
  TOrientedBox3<double> local_f8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_308 = (UDynamicMesh *)0x0;
  local_260 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_308,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_308);
  }
  local_300.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300.SphereElems.ArrayNum = 0;
  local_300.SphereElems.ArrayMax = 0;
  local_300.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300.BoxElems.ArrayNum = 0;
  local_300.BoxElems.ArrayMax = 0;
  local_300.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300.SphylElems.ArrayNum = 0;
  local_300.SphylElems.ArrayMax = 0;
  local_300.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300.ConvexElems.ArrayNum = 0;
  local_300.ConvexElems.ArrayMax = 0;
  local_300.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300.TaperedCapsuleElems.ArrayNum = 0;
  local_300.TaperedCapsuleElems.ArrayMax = 0;
  local_300.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300.LevelSetElems.ArrayNum = 0;
  local_300.LevelSetElems.ArrayMax = 0;
  local_300.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300.SkinnedLevelSetElems.ArrayNum = 0;
  local_300.SkinnedLevelSetElems.ArrayMax = 0;
  local_300.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300.MLLevelSetElems.ArrayNum = 0;
  local_300.MLLevelSetElems.ArrayMax = 0;
  local_300.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_300.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_300.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_300.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_300,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_300);
  }
  local_318 = 1;
  uStack_316 = 0;
  this = &local_300;
  if ((FKAggregateGeom *)param_2->MostRecentPropertyAddress != (FKAggregateGeom *)0x0) {
    this = (FKAggregateGeom *)param_2->MostRecentPropertyAddress;
  }
  iStack_314 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_318,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_318);
  }
  local_a8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_a0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_90 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_88 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dStack_80 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_78 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_70 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_68 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dStack_60 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_58 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_50 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_258 = 0.0;
  dStack_250 = 0.0;
  local_238 = 0;
  uStack_230 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_1f8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_1f0 = _UNK_150689688;
  local_1e8 = __real_3ff0000000000000;
  local_248 = ___xmm_3ff00000000000000000000000000000;
  uStack_240 = _UNK_15061cbc8;
  local_228 = ___xmm_3ff00000000000000000000000000000;
  uStack_220 = _UNK_15061cbc8;
  local_208 = ___xmm_3ff00000000000000000000000000000;
  uStack_200 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_258,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_258);
  }
  local_320[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_320,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_320);
  }
  local_324 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_324,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_324);
  }
  local_328 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_328,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_328);
  }
  local_310 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_310,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_310);
  }
  pUVar8 = local_308;
  pUVar6 = local_310;
  iVar5 = local_320[0];
  iVar4 = local_324;
  iVar3 = local_328;
  local_1d8._s_0.X = local_258;
  local_1d8._s_0.Y = dStack_250;
  local_1d8._s_0.Z = local_248;
  uStack_1c0 = uStack_240;
  local_1b8 = local_238;
  uStack_1b0 = uStack_230;
  local_1a8 = local_228;
  uStack_1a0 = uStack_220;
  local_198 = local_218;
  uStack_190 = uStack_210;
  local_188 = local_208;
  uStack_180 = uStack_200;
  local_178 = local_1f8;
  uStack_170 = uStack_1f0;
  local_168 = local_1e8;
  local_158.Rotation.XY.m128d_f64[0] = local_a8;
  local_158.Rotation.XY.m128d_f64[1] = dStack_a0;
  local_158.Rotation.ZW.m128d_f64[0] = local_98;
  local_158.Rotation.ZW.m128d_f64[1] = dStack_90;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.UVMode = uStack_316;
  FVar2.PolygroupMode = (undefined1)local_318;
  FVar2.bFlipOrientation = (bool)local_318._1_1_;
  FVar2._3_1_ = uStack_315;
  FVar2.MaterialID = iStack_314;
  local_158.Translation.XY.m128d_f64[0] = local_88;
  local_158.Translation.XY.m128d_f64[1] = dStack_80;
  local_158.Translation.ZW.m128d_f64[0] = local_78;
  local_158.Translation.ZW.m128d_f64[1] = dStack_70;
  local_158.Scale3D.XY.m128d_f64[0] = local_68;
  local_158.Scale3D.XY.m128d_f64[1] = dStack_60;
  local_158.Scale3D.ZW.m128d_f64[0] = local_58;
  local_158.Scale3D.ZW.m128d_f64[1] = dStack_50;
  FKAggregateGeom::EmptyElements(this);
  pTVar7 = UE::Geometry::TOrientedBox3<double>::TOrientedBox3<double>
                     (&local_f8,(FOrientedBox *)&local_1d8._s_0);
  pUVar8 = UE::Private::AppendMeshHelper::AppendBox
                     (pUVar8,(FGeometryScriptSimpleCollision *)this,FVar2,&local_158,pTVar7,iVar5,
                      iVar4,iVar3,pUVar6);
  *local_260 = pUVar8;
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)local_300.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_300.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_300.SkinnedTriangleMeshElems.AllocatorInstance.Data !=
      (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_300.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_300.MLLevelSetElems.AllocatorInstance.Data,
             local_300.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_300.MLLevelSetElems.AllocatorInstance.Data !=
      (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_300.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_300.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_300.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_300.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_300.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_300.LevelSetElems.AllocatorInstance.Data,
             local_300.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_300.LevelSetElems.AllocatorInstance.Data != (FKLevelSetElem *)0x0) {
    FMemory::Free(local_300.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_300.TaperedCapsuleElems.AllocatorInstance.Data,
             local_300.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_300.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_300.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_300.ConvexElems.AllocatorInstance.Data,
             local_300.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_300.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_300.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_300.SphylElems.AllocatorInstance.Data,
             local_300.SphylElems.ArrayNum);
  if ((FKSphylElem *)local_300.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_300.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_300.BoxElems.AllocatorInstance.Data,local_300.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_300.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_300.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_300.SphereElems.AllocatorInstance.Data,
             local_300.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_300.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_300.SphereElems.AllocatorInstance.Data);
  }
  return;
}

// execAppendPolygonListTriangulation @ 14ce7c000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendPolygonListTriangulation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FProperty *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  UGeometryScriptDebug *pUVar10;
  TGeneralPolygon2<double> *pTVar11;
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
  undefined8 uVar23;
  bool bVar24;
  int iVar25;
  FText *pFVar26;
  FMeshShapeGenerator *pFVar27;
  TReferenceControllerBase<1> *pTVar28;
  int iVar29;
  longlong *plVar30;
  char cVar31;
  longlong lVar32;
  ForAnyElementType FVar33;
  FGeometryScriptPrimitiveOptions FVar34;
  ulonglong uVar35;
  TGeneralPolygon2<double> *pTVar36;
  uchar *puVar37;
  UDynamicMesh *pUVar38;
  UDynamicMesh *pUVar39;
  undefined1 auStackY_388 [32];
  uchar local_358;
  char local_357;
  char local_356;
  undefined1 local_355 [5];
  undefined2 local_350;
  undefined1 uStack_34e;
  undefined1 uStack_34d;
  int iStack_34c;
  UDynamicMesh *local_348;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_340;
  TVector<double>_u_0 local_328;
  int local_308;
  uint local_304;
  UGeometryScriptDebug *local_300;
  UDynamicMesh *local_2f8;
  TGeneralPolygon2<double> *local_2f0;
  longlong *local_2e8;
  TReferenceControllerBase<1> *local_2e0;
  longlong *local_2d8;
  TReferenceControllerBase<1> *pTStack_2d0;
  TQuaternion<double>_u_0 local_2c8;
  undefined1 local_2a8;
  FGeometryScriptPrimitiveOptions local_2a0;
  uchar *local_298;
  TGeneralPolygon2<double> *local_290;
  undefined8 *local_288;
  FFlatTriangulationMeshGenerator local_278;
  TTransform<double> local_188;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_388;
  pUVar38 = (UDynamicMesh *)0x0;
  local_2f8 = (UDynamicMesh *)0x0;
  local_288 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2f8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2f8);
  }
  local_350 = 1;
  uStack_34e = 0;
  iStack_34c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_350,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_350);
  }
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_128._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_118._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  local_2d8 = (longlong *)0x0;
  pTStack_2d0 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2d8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2d8);
  }
  local_357 = '\x01';
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_357,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_357);
  }
  local_358 = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_358,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_358);
  }
  local_300 = (UGeometryScriptDebug *)0x0;
  puVar37 = &local_358;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar37 = param_2->MostRecentPropertyAddress;
  }
  local_298 = puVar37;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_300,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_300);
  }
  pTVar28 = pTStack_2d0;
  pUVar39 = local_2f8;
  pUVar10 = local_300;
  cVar31 = local_357;
  local_2e0 = pTStack_2d0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_356 = local_357;
  local_2e8 = local_2d8;
  if (pTStack_2d0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_2d0->SharedReferenceCount = (atomic<int>)((int)pTStack_2d0->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar34.UVMode = uStack_34e;
  FVar34.PolygroupMode = (undefined1)local_350;
  FVar34.bFlipOrientation = (bool)local_350._1_1_;
  FVar34._3_1_ = uStack_34d;
  FVar34.MaterialID = iStack_34c;
  uVar12 = local_128._0_8_;
  uVar13 = local_128._8_8_;
  uVar14 = local_118._0_8_;
  uVar15 = local_118._8_8_;
  uVar16 = local_108._0_8_;
  uVar17 = local_108._8_8_;
  uVar18 = local_f8._0_8_;
  uVar19 = local_f8._8_8_;
  uVar20 = local_e8._0_8_;
  uVar21 = local_e8._8_8_;
  uVar22 = local_d8._0_8_;
  uVar23 = local_d8._8_8_;
  local_348 = local_2f8;
  local_2a0 = FVar34;
  if (local_2f8 == (UDynamicMesh *)0x0) {
    pFVar26 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_328._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendPolygonListTriangulation_NullTarget",
                         L"AppendDelaunayTriangulation2D: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar10,InvalidInputs,pFVar26);
    if ((longlong *)local_328._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_328._s_0.X + 0x10))();
    }
LAB_14ce7c72c:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
    pUVar39 = pUVar38;
  }
  else if (local_2d8 == (longlong *)0x0) {
    pFVar26 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_328._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendPolygonListTriangulation_NullPolygonList",
                         L"AppendPolygonListTriangulation: Polygon List is not set");
    UE::Geometry::AppendError(pUVar10,InvalidInputs,pFVar26);
    if ((longlong *)local_328._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_328._s_0.X + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  }
  else {
    UE::Geometry::FFlatTriangulationMeshGenerator::FFlatTriangulationMeshGenerator(&local_278);
    plVar30 = local_2e8;
    local_278._padding_._0_1_ = 1;
    *puVar37 = '\0';
    local_304 = *(uint *)(plVar30 + 1);
    uVar35 = (ulonglong)(int)local_304;
    pTVar36 = (TGeneralPolygon2<double> *)*plVar30;
    local_290 = pTVar36 + uVar35;
    while( true ) {
      pTVar11 = local_290;
      local_2f0 = pTVar36;
      if ((int)plVar30[1] != (int)uVar35) {
        `TCheckedPointerIterator<UE::Geometry::TGeneralPolygon2<double>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_355);
      }
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      if (pTVar36 == pTVar11) {
        pUVar38 = local_348;
        if ((2 < local_278.Vertices2D.ArrayNum) && (0 < local_278.Triangles2D.ArrayNum)) {
          local_2a8 = 0;
          pFVar27 = UE::Geometry::FFlatTriangulationMeshGenerator::Generate(&local_278);
          pUVar38 = local_348;
          local_328._s_0.X = (double)uVar6;
          local_328._s_0.Y = (double)uVar7;
          local_328._s_0.Z = (double)uVar8;
          local_188.Rotation.XY.m128d_f64[0] = (double)uVar12;
          local_188.Rotation.XY.m128d_f64[1] = (double)uVar13;
          local_188.Rotation.ZW.m128d_f64[0] = (double)uVar14;
          local_188.Rotation.ZW.m128d_f64[1] = (double)uVar15;
          local_188.Translation.XY.m128d_f64[0] = (double)uVar16;
          local_188.Translation.XY.m128d_f64[1] = (double)uVar17;
          local_188.Translation.ZW.m128d_f64[0] = (double)uVar18;
          local_188.Translation.ZW.m128d_f64[1] = (double)uVar19;
          local_188.Scale3D.XY.m128d_f64[0] = (double)uVar20;
          local_188.Scale3D.XY.m128d_f64[1] = (double)uVar21;
          local_188.Scale3D.ZW.m128d_f64[0] = (double)uVar22;
          local_188.Scale3D.ZW.m128d_f64[1] = (double)uVar23;
          AppendPrimitive(local_348,pFVar27,&local_188,FVar34,(TVector<double> *)&local_328._s_0,
                          (TOptional<UE::Geometry::TQuaternion<double>_> *)&local_2c8._s_0);
        }
        UE::Geometry::FFlatTriangulationMeshGenerator::~FFlatTriangulationMeshGenerator(&local_278);
        pTVar28 = local_2e0;
        goto LAB_14ce7c72c;
      }
      local_2c8._s_0.X = 0.0;
      local_2c8._8_2_ = 0x100;
      local_2c8._s_0.Z = 0.0;
      local_2c8._24_1_ = 0;
      local_2c8._28_4_ = 1;
      local_2c8._10_1_ = 1;
      local_340.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_340.ArrayNum = 0;
      local_340.ArrayMax = 0;
      local_328._s_0.X = 0.0;
      local_328._s_0.Y = 0.0;
      bVar24 = UE::Geometry::FDelaunay2::Triangulate<double>
                         ((FDelaunay2 *)&local_2c8._s_0,pTVar36,&local_340,
                          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                          &local_328._s_0,true);
      if ((!bVar24) && (*puVar37 = '\x01', cVar31 == '\0')) break;
      uVar6 = local_328._s_0.X;
      lVar32 = (longlong)(int)local_328._8_4_;
      local_308 = local_278.Vertices2D.ArrayNum;
      if (local_328._8_4_ != 0) {
        iVar25 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,local_328._8_4_,&local_278.Vertices2D.AllocatorInstance,
                            &local_278.Vertices2D.ArrayNum,&local_278.Vertices2D.ArrayMax);
        memcpy(local_278.Vertices2D.AllocatorInstance.Data + (longlong)iVar25 * 0x10,(void *)uVar6,
               lVar32 << 4);
      }
      uVar1 = local_278.Triangles2D.ArrayNum + local_340.ArrayNum;
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
      }
      iVar25 = local_340.ArrayNum;
      if (local_278.Triangles2D.ArrayMax < (int)uVar1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,uVar1,&local_278.Triangles2D.AllocatorInstance,
                   local_278.Triangles2D.ArrayNum,&local_278.Triangles2D.ArrayMax);
        iVar25 = local_340.ArrayNum;
      }
      iVar9 = local_308;
      pFVar2 = local_340.AllocatorInstance.Data + (longlong)iVar25 * 0xc;
      FVar33.Data = local_340.AllocatorInstance.Data;
      iVar29 = iVar25;
      while( true ) {
        if (iVar29 != iVar25) {
          `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_355);
        }
        FVar34 = local_2a0;
        cVar31 = local_356;
        if (FVar33.Data == pFVar2) break;
        iVar29 = *(int *)(FVar33.Data + 8);
        iVar3 = *(int *)(FVar33.Data + 4);
        iVar4 = *(int *)FVar33.Data;
        if (local_278.Triangles2D.ArrayNum == local_278.Triangles2D.ArrayMax) {
          local_278.Triangles2D.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&local_278.Triangles2D.AllocatorInstance,
                          &local_278.Triangles2D.ArrayMax);
        }
        lVar32 = (longlong)local_278.Triangles2D.ArrayNum;
        FVar33.Data = FVar33.Data + 0xc;
        local_278.Triangles2D.ArrayNum = local_278.Triangles2D.ArrayNum + 1;
        *(int *)(local_278.Triangles2D.AllocatorInstance.Data + lVar32 * 0xc) = iVar4 + iVar9;
        *(int *)(local_278.Triangles2D.AllocatorInstance.Data + lVar32 * 0xc + 4) = iVar3 + iVar9;
        *(int *)(local_278.Triangles2D.AllocatorInstance.Data + lVar32 * 0xc + 8) = iVar29 + iVar9;
        iVar29 = local_340.ArrayNum;
      }
      if ((longlong *)local_328._s_0.X != (longlong *)0x0) {
        FMemory::Free((void *)local_328._s_0.X);
      }
      if (local_340.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_340.AllocatorInstance.Data);
      }
      if (local_2c8._s_0.Z != 0.0) {
        (**(code **)((longlong)local_2c8._s_0.Z + -0x10))((longlong)local_2c8._s_0.Z + -0x10);
      }
      pTVar36 = local_2f0 + 1;
      uVar35 = (ulonglong)local_304;
      plVar30 = local_2e8;
      puVar37 = local_298;
    }
    if ((longlong *)local_328._s_0.X != (longlong *)0x0) {
      FMemory::Free((void *)local_328._s_0.X);
    }
    if (local_340.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_340.AllocatorInstance.Data);
    }
    if (local_2c8._s_0.Z != 0.0) {
      (**(code **)((longlong)local_2c8._s_0.Z + -0x10))((longlong)local_2c8._s_0.Z + -0x10);
    }
    UE::Geometry::FFlatTriangulationMeshGenerator::~FFlatTriangulationMeshGenerator(&local_278);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e0);
    pUVar39 = local_348;
  }
  *local_288 = pUVar39;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2d0);
  return;
}

// execAppendRectangleXY @ 14ce7c7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendRectangleXY
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  UGeometryScriptDebug *pUVar7;
  UDynamicMesh *this;
  undefined8 uVar8;
  undefined8 uVar9;
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
  bool bVar20;
  FText *pFVar21;
  char cVar22;
  undefined1 auStackY_5c8 [32];
  int local_598;
  int local_594;
  float local_590;
  float local_58c;
  undefined2 local_588;
  undefined1 uStack_586;
  undefined1 uStack_585;
  int iStack_584;
  UGeometryScriptDebug *local_580;
  UDynamicMesh *local_578;
  ITextData local_570;
  FGeometryScriptPrimitiveOptions local_568 [2];
  TVector<double>_u_0 local_558;
  undefined1 *local_540;
  undefined1 *local_538;
  undefined1 local_528 [96];
  double dStack_4c8;
  double local_4c0;
  double dStack_4b8;
  char local_4b0;
  FRectangleMeshGenerator local_4a8;
  TTransform<double> local_3b8;
  FDynamicMesh3 local_358;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  local_578 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_578,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_578);
  }
  local_588 = 1;
  uStack_586 = 0;
  iStack_584 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_588,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_588);
  }
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_128._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_118._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  local_58c = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58c);
  }
  local_590 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_590,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_590);
  }
  local_594 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_594,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_594);
  }
  local_598 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_598,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_598);
  }
  local_580 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_580,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_580);
  }
  this = local_578;
  pUVar7 = local_580;
  fVar6 = local_58c;
  fVar5 = local_590;
  iVar4 = local_594;
  iVar3 = local_598;
  uVar8 = local_128._0_8_;
  uVar9 = local_128._8_8_;
  uVar10 = local_118._0_8_;
  uVar11 = local_118._8_8_;
  uVar12 = local_108._0_8_;
  uVar13 = local_108._8_8_;
  uVar14 = local_f8._0_8_;
  uVar15 = local_f8._8_8_;
  uVar16 = local_e8._0_8_;
  uVar17 = local_e8._8_8_;
  uVar18 = local_d8._0_8_;
  uVar19 = local_d8._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.UVMode = uStack_586;
  FVar2.PolygroupMode = (undefined1)local_588;
  FVar2.bFlipOrientation = (bool)local_588._1_1_;
  FVar2._3_1_ = uStack_585;
  FVar2.MaterialID = iStack_584;
  cVar22 = (char)local_588;
  if (local_578 == (UDynamicMesh *)0x0) {
    pFVar21 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_558._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendRectangleXY",
                         L"AppendRectangle: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar7,InvalidInputs,pFVar21);
    if ((longlong *)local_558._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_558._s_0.X + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    UE::Geometry::FRectangleMeshGenerator::FRectangleMeshGenerator(&local_4a8);
    local_4a8.Normal.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
    local_4a8.Origin.field0_0x0._s_0.X = 0.0;
    local_4a8.Origin.field0_0x0._s_0.Y = 0.0;
    local_4a8.Normal.field0_0x0._0_8_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
    local_4a8.WidthVertexCount = iVar4;
    if (iVar4 < 0) {
      local_4a8.WidthVertexCount = 0;
    }
    local_4a8.Origin.field0_0x0._s_0.Z = 0.0;
    local_4a8.Width = (double)fVar6;
    local_4a8.HeightVertexCount = iVar3;
    if (iVar3 < 0) {
      local_4a8.HeightVertexCount = 0;
    }
    local_4a8.bSinglePolyGroup = cVar22 != '\x02';
    local_4a8.Height = (double)fVar5;
    UE::Geometry::FRectangleMeshGenerator::Generate(&local_4a8);
    local_570 = (ITextData)&local_4a8;
    local_528[0x50] = '\0';
    local_3b8.Rotation.XY.m128d_f64[0] = (double)uVar8;
    local_3b8.Rotation.XY.m128d_f64[1] = (double)uVar9;
    local_528._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_528._24_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_528._32_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_3b8.Rotation.ZW.m128d_f64[0] = (double)uVar10;
    local_3b8.Rotation.ZW.m128d_f64[1] = (double)uVar11;
    local_3b8.Translation.XY.m128d_f64[0] = (double)uVar12;
    local_3b8.Translation.XY.m128d_f64[1] = (double)uVar13;
    local_3b8.Translation.ZW.m128d_f64[0] = (double)uVar14;
    local_3b8.Translation.ZW.m128d_f64[1] = (double)uVar15;
    local_3b8.Scale3D.XY.m128d_f64[0] = (double)uVar16;
    local_3b8.Scale3D.XY.m128d_f64[1] = (double)uVar17;
    local_3b8.Scale3D.ZW.m128d_f64[0] = (double)uVar18;
    local_3b8.Scale3D.ZW.m128d_f64[1] = (double)uVar19;
    local_568[0] = FVar2;
    bVar20 = UDynamicMesh::IsEmpty(this);
    if (bVar20) {
      local_558._s_0.X = (double)&local_570;
      local_558._s_0.Y = (double)&local_3b8;
      local_558._s_0.Z = (double)local_568;
      local_540 = local_528 + 0x10;
      local_538 = local_528 + 0x30;
      local_528._8_8_ = &local_558;
      local_528._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_528,
                 GeneralEdit,Unknown,false);
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_358,(FMeshShapeGenerator *)local_570);
      local_4b0 = local_528[0x50];
      if (local_528[0x50] != '\0') {
        local_528._88_8_ = local_528._48_8_;
        dStack_4c8 = (double)local_528._56_8_;
        local_4c0 = (double)local_528._64_8_;
        dStack_4b8 = (double)local_528._72_8_;
      }
      local_558._s_0.X = (double)local_528._16_8_;
      local_558._s_0.Y = (double)local_528._24_8_;
      local_558._s_0.Z = (double)local_528._32_8_;
      ApplyPrimitiveOptionsToMesh
                (&local_358,&local_3b8,local_568[0],(TVector<double> *)&local_558._s_0,
                 (TOptional<UE::Geometry::TQuaternion<double>_> *)(local_528 + 0x58));
      local_528._0_8_ = &local_358;
      local_558._s_0.Y = (double)local_528;
      local_558._s_0.X =
           (double)UE::Core::Private::Function::
                   TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                   ::Call;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_558._s_0,
                 GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_358);
    }
    local_4a8._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((void *)local_4a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._padding_);
    }
    if ((void *)local_4a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._padding_);
    }
    if ((void *)local_4a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._padding_);
    }
    if ((void *)local_4a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._padding_);
    }
    if ((void *)local_4a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._padding_);
    }
    if ((void *)local_4a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._padding_);
    }
    if ((void *)local_4a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._padding_);
    }
    if ((void *)local_4a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._padding_);
    }
    if ((void *)local_4a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._padding_);
    }
    *(UDynamicMesh **)param_3 = this;
  }
  return;
}

// execAppendRectangle_Compatibility_5_0 @ 14ce7ce00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendRectangle_Compatibility_5_0
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  UGeometryScriptDebug *pUVar7;
  UDynamicMesh *this;
  undefined8 uVar8;
  undefined8 uVar9;
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
  bool bVar20;
  FText *pFVar21;
  char cVar22;
  undefined1 auStackY_5c8 [32];
  int local_598;
  int local_594;
  float local_590;
  float local_58c;
  undefined2 local_588;
  undefined1 uStack_586;
  undefined1 uStack_585;
  int iStack_584;
  UGeometryScriptDebug *local_580;
  UDynamicMesh *local_578;
  ITextData local_570;
  FGeometryScriptPrimitiveOptions local_568 [2];
  TVector<double>_u_0 local_558;
  undefined1 *local_540;
  undefined1 *local_538;
  undefined1 local_528 [96];
  double dStack_4c8;
  double local_4c0;
  double dStack_4b8;
  char local_4b0;
  FRectangleMeshGenerator local_4a8;
  TTransform<double> local_3b8;
  FDynamicMesh3 local_358;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  local_578 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_578,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_578);
  }
  local_588 = 1;
  uStack_586 = 0;
  iStack_584 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_588,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_588);
  }
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_128._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_118._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  local_58c = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58c);
  }
  local_590 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_590,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_590);
  }
  local_594 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_594,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_594);
  }
  local_598 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_598,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_598);
  }
  local_580 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_580,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_580);
  }
  this = local_578;
  pUVar7 = local_580;
  fVar6 = local_58c;
  fVar5 = local_590;
  iVar4 = local_594;
  iVar3 = local_598;
  uVar8 = local_128._0_8_;
  uVar9 = local_128._8_8_;
  uVar10 = local_118._0_8_;
  uVar11 = local_118._8_8_;
  uVar12 = local_108._0_8_;
  uVar13 = local_108._8_8_;
  uVar14 = local_f8._0_8_;
  uVar15 = local_f8._8_8_;
  uVar16 = local_e8._0_8_;
  uVar17 = local_e8._8_8_;
  uVar18 = local_d8._0_8_;
  uVar19 = local_d8._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.UVMode = uStack_586;
  FVar2.PolygroupMode = (undefined1)local_588;
  FVar2.bFlipOrientation = (bool)local_588._1_1_;
  FVar2._3_1_ = uStack_585;
  FVar2.MaterialID = iStack_584;
  cVar22 = (char)local_588;
  if (local_578 == (UDynamicMesh *)0x0) {
    pFVar21 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_558._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendRectangleXY",
                         L"AppendRectangle: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar7,InvalidInputs,pFVar21);
    if ((longlong *)local_558._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_558._s_0.X + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    UE::Geometry::FRectangleMeshGenerator::FRectangleMeshGenerator(&local_4a8);
    local_4a8.Normal.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
    local_4a8.Origin.field0_0x0._s_0.X = 0.0;
    local_4a8.Origin.field0_0x0._s_0.Y = 0.0;
    local_4a8.Normal.field0_0x0._0_8_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
    local_4a8.WidthVertexCount = iVar4;
    if (iVar4 < 0) {
      local_4a8.WidthVertexCount = 0;
    }
    local_4a8.Origin.field0_0x0._s_0.Z = 0.0;
    local_4a8.HeightVertexCount = iVar3;
    if (iVar3 < 0) {
      local_4a8.HeightVertexCount = 0;
    }
    local_4a8.bSinglePolyGroup = cVar22 != '\x02';
    local_4a8.Width = (double)(float)((double)fVar6 * __real_3fe0000000000000);
    local_4a8.Height = (double)(float)((double)fVar5 * __real_3fe0000000000000);
    UE::Geometry::FRectangleMeshGenerator::Generate(&local_4a8);
    local_570 = (ITextData)&local_4a8;
    local_528[0x50] = '\0';
    local_3b8.Rotation.XY.m128d_f64[0] = (double)uVar8;
    local_3b8.Rotation.XY.m128d_f64[1] = (double)uVar9;
    local_528._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_528._24_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_528._32_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_3b8.Rotation.ZW.m128d_f64[0] = (double)uVar10;
    local_3b8.Rotation.ZW.m128d_f64[1] = (double)uVar11;
    local_3b8.Translation.XY.m128d_f64[0] = (double)uVar12;
    local_3b8.Translation.XY.m128d_f64[1] = (double)uVar13;
    local_3b8.Translation.ZW.m128d_f64[0] = (double)uVar14;
    local_3b8.Translation.ZW.m128d_f64[1] = (double)uVar15;
    local_3b8.Scale3D.XY.m128d_f64[0] = (double)uVar16;
    local_3b8.Scale3D.XY.m128d_f64[1] = (double)uVar17;
    local_3b8.Scale3D.ZW.m128d_f64[0] = (double)uVar18;
    local_3b8.Scale3D.ZW.m128d_f64[1] = (double)uVar19;
    local_568[0] = FVar2;
    bVar20 = UDynamicMesh::IsEmpty(this);
    if (bVar20) {
      local_558._s_0.X = (double)&local_570;
      local_558._s_0.Y = (double)&local_3b8;
      local_558._s_0.Z = (double)local_568;
      local_540 = local_528 + 0x10;
      local_538 = local_528 + 0x30;
      local_528._8_8_ = &local_558;
      local_528._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_528,
                 GeneralEdit,Unknown,false);
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_358,(FMeshShapeGenerator *)local_570);
      local_4b0 = local_528[0x50];
      if (local_528[0x50] != '\0') {
        local_528._88_8_ = local_528._48_8_;
        dStack_4c8 = (double)local_528._56_8_;
        local_4c0 = (double)local_528._64_8_;
        dStack_4b8 = (double)local_528._72_8_;
      }
      local_558._s_0.X = (double)local_528._16_8_;
      local_558._s_0.Y = (double)local_528._24_8_;
      local_558._s_0.Z = (double)local_528._32_8_;
      ApplyPrimitiveOptionsToMesh
                (&local_358,&local_3b8,local_568[0],(TVector<double> *)&local_558._s_0,
                 (TOptional<UE::Geometry::TQuaternion<double>_> *)(local_528 + 0x58));
      local_528._0_8_ = &local_358;
      local_558._s_0.Y = (double)local_528;
      local_558._s_0.X =
           (double)UE::Core::Private::Function::
                   TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                   ::Call;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_558._s_0,
                 GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_358);
    }
    local_4a8._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((void *)local_4a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._padding_);
    }
    if ((void *)local_4a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._padding_);
    }
    if ((void *)local_4a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._padding_);
    }
    if ((void *)local_4a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._padding_);
    }
    if ((void *)local_4a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._padding_);
    }
    if ((void *)local_4a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._padding_);
    }
    if ((void *)local_4a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._padding_);
    }
    if ((void *)local_4a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._padding_);
    }
    if ((void *)local_4a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._padding_);
    }
    *(UDynamicMesh **)param_3 = this;
  }
  return;
}

// execAppendRevolvePath @ 14ce7d480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendRevolvePath
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  UGeometryScriptDebug *pUVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  uint uVar21;
  FText *pFVar22;
  UDynamicMesh *pUVar23;
  TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *pTVar24;
  undefined8 *puVar25;
  UDynamicMesh *pUVar26;
  UDynamicMesh *this;
  undefined8 *puVar27;
  void **ppvVar28;
  float fVar29;
  undefined1 auStack_608 [32];
  undefined1 local_5b8;
  undefined1 local_5b7;
  int local_5b4;
  int local_5b0 [2];
  undefined2 local_5a8;
  undefined1 uStack_5a6;
  undefined1 uStack_5a5;
  undefined4 uStack_5a4;
  undefined8 local_5a0;
  undefined2 uStack_598;
  float fStack_594;
  undefined4 local_590;
  int local_588;
  undefined4 local_578;
  float local_568 [2];
  UGeometryScriptDebug *local_560;
  UDynamicMesh *local_558;
  void *local_550;
  undefined8 local_548;
  FRevolvePlanarPathGenerator local_538;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  FMeshNormals local_4b8;
  FMeshNormals local_4a0;
  undefined8 local_488;
  FDynamicMesh3 *local_480;
  undefined8 *local_478;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_470;
  float *local_468;
  code *local_460;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_458;
  FDynamicMesh3 *local_450;
  double **local_448;
  code *local_440;
  FDynamicMesh3 **local_438;
  code *local_430;
  FDynamicMesh3 **local_428;
  double *local_420;
  undefined8 *local_418;
  double local_410;
  double dStack_408;
  double local_400;
  FText local_3f8;
  FText local_3e8 [2];
  undefined4 local_3c8;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  double local_388;
  double dStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  double local_368;
  double dStack_360;
  FDynamicMesh3 local_358;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_608;
  pUVar26 = (UDynamicMesh *)0x0;
  local_558 = (UDynamicMesh *)0x0;
  local_478 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_558,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_558);
  }
  local_5a8 = 1;
  uStack_5a6 = 0;
  uStack_5a4 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5a8);
  }
  local_128 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_120 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_118 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_110 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_f8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_d8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_550 = (void *)0x0;
  local_548 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_550,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_550);
  }
  local_5a0 = 0x43b40000;
  uStack_598 = 0;
  ppvVar28 = &local_550;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar28 = (void **)param_2->MostRecentPropertyAddress;
  }
  fStack_594 = 30.0;
  local_590 = CONCAT22(local_590._2_2_,0x100);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5a0);
  }
  local_5b0[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_5b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_5b0);
  }
  local_5b4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5b4,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5b4);
  }
  local_5b7 = local_5b4 != 0;
  local_560 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_560,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_560);
  }
  dVar19 = dStack_d0;
  dVar18 = local_d8;
  dVar15 = dStack_f0;
  dVar14 = local_f8;
  dVar11 = dStack_110;
  dVar10 = local_118;
  dVar9 = dStack_120;
  dVar8 = local_128;
  this = local_558;
  pUVar7 = local_560;
  fVar29 = fStack_594;
  uVar6 = uStack_598;
  uVar5 = local_5a0;
  uVar12 = local_108._0_8_;
  uVar13 = local_108._8_8_;
  uVar16 = local_e8._0_8_;
  uVar17 = local_e8._8_8_;
  local_578 = local_590;
  local_3c8 = local_590;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar4 = CONCAT44(uStack_5a4,CONCAT13(uStack_5a5,CONCAT12(uStack_5a6,local_5a8)));
  local_588 = local_5b0[0];
  if (local_558 == (UDynamicMesh *)0x0) {
    pFVar22 = FText::AsLocalizable_Advanced_LocText
                        (&local_3f8,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"AppendRevolvePath_NullMesh",L"AppendRevolvePath: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar7,InvalidInputs,pFVar22);
    this = pUVar26;
    if (local_3f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3f8.TextData.Reference + 0x10))();
    }
  }
  else {
    iVar1 = *(int *)(ppvVar28 + 1);
    if (iVar1 < 2) {
      pFVar22 = FText::AsLocalizable_Advanced_LocText
                          (local_3e8,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                           L"AppendRevolvePath_InvalidPolygon",
                           L"AppendRevolvePath: PathVertices array requires at least 2 positions");
      UE::Geometry::AppendError(pUVar7,InvalidInputs,pFVar22);
      if (local_3e8[0].TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3e8[0].TextData.Reference + 0x10))();
      }
    }
    else {
      puVar25 = *ppvVar28;
      local_538._padding_ = ___xmm_3ff00000000000003ff0000000000000;
      local_538._padding_ = _UNK_150689688;
      local_538._padding_ = 0;
      local_538._padding_ = 0;
      puVar27 = puVar25 + (longlong)iVar1 * 2;
      local_538._padding_ = __real_3f847ae147ae147b;
      local_538._padding_._0_4_ = 0x10;
      local_538._4_8_ = 0x43b40000;
      local_538._padding_._4_2_ = 0;
      local_538._padding_._6_1_ = 1;
      local_538._padding_._0_1_ = 0;
      local_538._padding_._4_4_ = 0x42c80000;
      local_538._padding_._0_1_ = 0;
      local_538._padding_._0_1_ = 1;
      local_538.PathVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_538.PathVertices.ArrayNum = 0;
      local_538.PathVertices.ArrayMax = 0;
      local_538.bCapped = true;
      pUVar23 = pUVar26;
      while( true ) {
        uVar21 = (uint)pUVar23;
        if (*(int *)(ppvVar28 + 1) != iVar1) {
          local_5b8 = 0;
          `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_5b8);
          uVar21 = local_538.PathVertices.ArrayNum;
        }
        if (puVar25 == puVar27) break;
        local_4c8 = *puVar25;
        uStack_4c0 = puVar25[1];
        if (((local_538.PathVertices.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4c8
             ) && ((FScriptContainerElement *)&local_4c8 <
                   local_538.PathVertices.AllocatorInstance.Data +
                   (longlong)local_538.PathVertices.ArrayMax * 0x10)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), uVar21 = local_538.PathVertices.ArrayNum, bVar20)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar21 == local_538.PathVertices.ArrayMax) {
          uVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_538.PathVertices.AllocatorInstance,
                              &local_538.PathVertices.ArrayMax);
        }
        local_538.PathVertices.ArrayNum = uVar21 + 1;
        puVar25 = puVar25 + 2;
        *(undefined8 *)
         (local_538.PathVertices.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10) = local_4c8;
        *(undefined8 *)
         (local_538.PathVertices.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10 + 8) =
             uStack_4c0;
        pUVar23 = (UDynamicMesh *)(ulonglong)(uVar21 + 1);
      }
      local_538._padding_._0_4_ = 2;
      if (2 < local_588) {
        local_538._padding_._0_4_ = local_588;
      }
      local_538.bCapped = (bool)local_5b7;
      local_538._4_8_ = uVar5;
      local_538._padding_._4_2_ = CONCAT11((char)local_578,(char)uVar6);
      local_538._padding_._6_1_ = local_3c8._1_1_;
      UE::Geometry::FRevolvePlanarPathGenerator::GenerateMesh(&local_538,&local_358);
      if ((char)((ushort)uVar6 >> 8) != '\0') {
        if (0.0 <= fVar29) {
          if (__real_43340000 <= fVar29) {
            fVar29 = __real_43340000;
          }
        }
        else {
          fVar29 = 0.0;
        }
        local_568[0] = cosf(fVar29 * __real_3c8efa35);
        local_4a0.Mesh = &local_358;
        local_4a0.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4a0.Normals.ArrayNum = 0;
        local_4a0.Normals.ArrayMax = 0;
        UE::Geometry::FMeshNormals::Compute_Triangle(&local_4a0);
        pUVar23 = pUVar26;
        if (0 < ((local_358.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
          pUVar23 = *(UDynamicMesh **)
                     ((local_358.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
        }
        local_470 = &local_4a0.Normals;
        local_468 = local_568;
        local_458 = &local_470;
        local_460 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePath'::__l15::<lambda_1>,bool,int,int,int>
                    ::Call;
        UE::Geometry::TDynamicMeshOverlay<float,3>::CreateFromPredicate
                  ((TDynamicMeshOverlay<float,3> *)pUVar23,
                   (TFunctionRef<bool___cdecl(int,int,int)> *)&local_460,0.0);
        local_4b8.Mesh = &local_358;
        local_4b8.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4b8.Normals.ArrayNum = 0;
        local_4b8.Normals.ArrayMax = 0;
        pUVar23 = pUVar26;
        if (0 < ((local_358.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
          pUVar23 = *(UDynamicMesh **)
                     ((local_358.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
        }
        UE::Geometry::FMeshNormals::Compute_Overlay_FaceAvg
                  (&local_4b8,
                   (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pUVar23,true,true
                  );
        if (0 < ((local_358.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
          pUVar26 = *(UDynamicMesh **)
                     ((local_358.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
        }
        UE::Geometry::FMeshNormals::CopyToOverlay
                  (&local_4b8,
                   (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pUVar26,false);
        if (local_4b8.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b8.Normals.AllocatorInstance.Data);
        }
        if (local_4a0.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a0.Normals.AllocatorInstance.Data);
        }
      }
      local_420 = &local_3b8;
      local_3b8 = dVar8;
      dStack_3b0 = dVar9;
      local_410 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_408 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_418 = &local_488;
      local_400 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_3a8 = dVar10;
      dStack_3a0 = dVar11;
      local_398 = uVar12;
      uStack_390 = uVar13;
      local_388 = dVar14;
      dStack_380 = dVar15;
      local_378 = uVar16;
      uStack_370 = uVar17;
      local_368 = dVar18;
      dStack_360 = dVar19;
      local_488 = uVar4;
      bVar20 = UDynamicMesh::IsEmpty(this);
      if (bVar20) {
        local_450 = &local_358;
        pTVar24 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_440;
        local_448 = &local_420;
        local_438 = &local_450;
        local_440 = UE::Core::Private::Function::
                    TFunctionRefCaller<`AppendPrimitiveMesh'::__l5::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                    ::Call;
      }
      else {
        `AppendPrimitiveMesh'::__l2::<lambda_1>::operator()(&local_420,&local_358);
        local_480 = &local_358;
        pTVar24 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_430;
        local_428 = &local_480;
        local_430 = UE::Core::Private::Function::
                    TFunctionRefCaller<`AppendPrimitiveMesh'::__l7::<lambda_3>,void,UE::Geometry::FDynamicMesh3_&>
                    ::Call;
      }
      UDynamicMesh::EditMesh(this,pTVar24,GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_358);
      if (local_538.PathVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_538.PathVertices.AllocatorInstance.Data);
      }
    }
  }
  *local_478 = this;
  if (local_550 != (void *)0x0) {
    FMemory::Free(local_550);
  }
  return;
}

// execAppendRevolvePolygon @ 14ce7dd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendRevolvePolygon
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  UGeometryScriptDebug *pUVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  bool bVar21;
  uint uVar22;
  FText *pFVar23;
  UDynamicMesh *pUVar24;
  TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *pTVar25;
  double *pdVar26;
  UDynamicMesh *pUVar27;
  UDynamicMesh *this;
  double *pdVar28;
  void **ppvVar29;
  float fVar30;
  undefined1 auStack_618 [32];
  undefined1 local_5c8 [4];
  int local_5c4;
  float local_5c0 [2];
  undefined2 local_5b8;
  undefined1 uStack_5b6;
  undefined1 uStack_5b5;
  undefined4 uStack_5b4;
  undefined8 local_5b0;
  undefined2 uStack_5a8;
  float fStack_5a4;
  undefined4 local_5a0;
  int local_598;
  undefined4 local_588;
  float local_578 [2];
  UGeometryScriptDebug *local_570;
  UDynamicMesh *local_568;
  void *local_560;
  undefined8 local_558;
  double local_550;
  double dStack_548;
  FRevolvePlanarPolygonGenerator local_538;
  FMeshNormals local_4c8;
  FMeshNormals local_4b0;
  undefined8 local_498;
  FDynamicMesh3 *local_490;
  undefined8 *local_488;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_480;
  float *local_478;
  code *local_470;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_468;
  FDynamicMesh3 *local_460;
  double **local_458;
  code *local_450;
  FDynamicMesh3 **local_448;
  code *local_440;
  FDynamicMesh3 **local_438;
  double *local_430;
  undefined8 *local_428;
  double local_420;
  double dStack_418;
  double local_410;
  FText local_408;
  FText local_3f8 [2];
  undefined4 local_3d8;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  double local_398;
  double dStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  double local_378;
  double dStack_370;
  FDynamicMesh3 local_368;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  double dStack_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_618;
  pUVar27 = (UDynamicMesh *)0x0;
  local_568 = (UDynamicMesh *)0x0;
  local_488 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_568,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_568);
  }
  local_5b8 = 1;
  uStack_5b6 = 0;
  uStack_5b4 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5b8);
  }
  local_138 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_130 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_128 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_120 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_108 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_100 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_118._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_e8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_560 = (void *)0x0;
  local_558 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_560,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_560);
  }
  local_5b0 = 0x43b40000;
  uStack_5a8 = 0;
  ppvVar29 = &local_560;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar29 = (void **)param_2->MostRecentPropertyAddress;
  }
  fStack_5a4 = 30.0;
  local_5a0 = CONCAT22(local_5a0._2_2_,0x100);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5b0);
  }
  local_5c0[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_5c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_5c0);
  }
  local_5c4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5c4,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5c4);
  }
  local_570 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_570,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_570);
  }
  dVar20 = dStack_e0;
  dVar19 = local_e8;
  dVar16 = dStack_100;
  dVar15 = local_108;
  dVar12 = dStack_120;
  dVar11 = local_128;
  dVar10 = dStack_130;
  dVar9 = local_138;
  this = local_568;
  pUVar8 = local_570;
  fVar30 = fStack_5a4;
  uVar7 = uStack_5a8;
  uVar6 = local_5b0;
  fVar5 = local_5c0[0];
  uVar13 = local_118._0_8_;
  uVar14 = local_118._8_8_;
  uVar17 = local_f8._0_8_;
  uVar18 = local_f8._8_8_;
  local_588 = local_5a0;
  local_3d8 = local_5a0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar4 = CONCAT44(uStack_5b4,CONCAT13(uStack_5b5,CONCAT12(uStack_5b6,local_5b8)));
  local_598 = local_5c4;
  if (local_568 == (UDynamicMesh *)0x0) {
    pFVar23 = FText::AsLocalizable_Advanced_LocText
                        (&local_408,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"AppendRevolvePolygon_NullMesh",
                         L"AppendRevolvePolygon: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar8,InvalidInputs,pFVar23);
    this = pUVar27;
    if (local_408.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_408.TextData.Reference + 0x10))();
    }
  }
  else {
    iVar1 = *(int *)(ppvVar29 + 1);
    if (iVar1 < 3) {
      pFVar23 = FText::AsLocalizable_Advanced_LocText
                          (local_3f8,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                           L"AppendRevolvePolygon_InvalidPolygon",
                           L"AppendRevolvePolygon: PolygonVertices array requires at least 3 positions"
                          );
      UE::Geometry::AppendError(pUVar8,InvalidInputs,pFVar23);
      if (local_3f8[0].TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3f8[0].TextData.Reference + 0x10))();
      }
    }
    else {
      pdVar26 = *ppvVar29;
      local_538._padding_ = ___xmm_3ff00000000000003ff0000000000000;
      local_538._padding_ = _UNK_150689688;
      local_538._padding_ = 0;
      local_538._padding_ = 0;
      pdVar28 = pdVar26 + (longlong)iVar1 * 2;
      local_538._padding_ = __real_3f847ae147ae147b;
      local_538._padding_._0_4_ = 0x10;
      local_538._4_8_ = 0x43b40000;
      local_538._padding_._4_2_ = 0;
      local_538._padding_._6_1_ = 1;
      local_538._padding_._0_1_ = 0;
      local_538._padding_._4_4_ = 0x42c80000;
      local_538._padding_._0_1_ = 0;
      local_538._padding_._0_1_ = 1;
      local_538.PolygonVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_538.PolygonVertices.ArrayNum = 0;
      local_538.PolygonVertices.ArrayMax = 0;
      local_538.bWeldVertsOnAxis = false;
      pUVar24 = pUVar27;
      while( true ) {
        uVar22 = (uint)pUVar24;
        if (*(int *)(ppvVar29 + 1) != iVar1) {
          local_5c8[0] = 0;
          `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_5c8);
          uVar22 = local_538.PolygonVertices.ArrayNum;
        }
        if (pdVar26 == pdVar28) break;
        dStack_548 = pdVar26[1];
        local_550 = (double)fVar5 + *pdVar26;
        if (((local_538.PolygonVertices.AllocatorInstance.Data <=
              (FScriptContainerElement *)&local_550) &&
            ((FScriptContainerElement *)&local_550 <
             local_538.PolygonVertices.AllocatorInstance.Data +
             (longlong)local_538.PolygonVertices.ArrayMax * 0x10)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), uVar22 = local_538.PolygonVertices.ArrayNum, bVar21)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar22 == local_538.PolygonVertices.ArrayMax) {
          uVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_538.PolygonVertices.AllocatorInstance,
                              &local_538.PolygonVertices.ArrayMax);
        }
        local_538.PolygonVertices.ArrayNum = uVar22 + 1;
        pdVar26 = pdVar26 + 2;
        *(double *)(local_538.PolygonVertices.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10)
             = local_550;
        *(double *)
         (local_538.PolygonVertices.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10 + 8) =
             dStack_548;
        pUVar24 = (UDynamicMesh *)(ulonglong)(uVar22 + 1);
      }
      local_538._padding_._0_4_ = 2;
      if (2 < local_598) {
        local_538._padding_._0_4_ = local_598;
      }
      local_538._4_8_ = uVar6;
      local_538._padding_._4_2_ = CONCAT11((char)local_588,(char)uVar7);
      local_538._padding_._6_1_ = local_3d8._1_1_;
      UE::Geometry::FRevolvePlanarPolygonGenerator::GenerateMesh(&local_538,&local_368);
      if ((char)((ushort)uVar7 >> 8) != '\0') {
        if (0.0 <= fVar30) {
          if (__real_43340000 <= fVar30) {
            fVar30 = __real_43340000;
          }
        }
        else {
          fVar30 = 0.0;
        }
        local_578[0] = cosf(fVar30 * __real_3c8efa35);
        local_4b0.Mesh = &local_368;
        local_4b0.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4b0.Normals.ArrayNum = 0;
        local_4b0.Normals.ArrayMax = 0;
        UE::Geometry::FMeshNormals::Compute_Triangle(&local_4b0);
        pUVar24 = pUVar27;
        if (0 < ((local_368.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
          pUVar24 = *(UDynamicMesh **)
                     ((local_368.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
        }
        local_480 = &local_4b0.Normals;
        local_478 = local_578;
        local_468 = &local_480;
        local_470 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePolygon'::__l15::<lambda_1>,bool,int,int,int>
                    ::Call;
        UE::Geometry::TDynamicMeshOverlay<float,3>::CreateFromPredicate
                  ((TDynamicMeshOverlay<float,3> *)pUVar24,
                   (TFunctionRef<bool___cdecl(int,int,int)> *)&local_470,0.0);
        local_4c8.Mesh = &local_368;
        local_4c8.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4c8.Normals.ArrayNum = 0;
        local_4c8.Normals.ArrayMax = 0;
        pUVar24 = pUVar27;
        if (0 < ((local_368.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
          pUVar24 = *(UDynamicMesh **)
                     ((local_368.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
        }
        UE::Geometry::FMeshNormals::Compute_Overlay_FaceAvg
                  (&local_4c8,
                   (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pUVar24,true,true
                  );
        if (0 < ((local_368.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
          pUVar27 = *(UDynamicMesh **)
                     ((local_368.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
        }
        UE::Geometry::FMeshNormals::CopyToOverlay
                  (&local_4c8,
                   (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pUVar27,false);
        if (local_4c8.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4c8.Normals.AllocatorInstance.Data);
        }
        if (local_4b0.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b0.Normals.AllocatorInstance.Data);
        }
      }
      local_430 = &local_3c8;
      local_3c8 = dVar9;
      dStack_3c0 = dVar10;
      local_420 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_418 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_428 = &local_498;
      local_410 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_3b8 = dVar11;
      dStack_3b0 = dVar12;
      local_3a8 = uVar13;
      uStack_3a0 = uVar14;
      local_398 = dVar15;
      dStack_390 = dVar16;
      local_388 = uVar17;
      uStack_380 = uVar18;
      local_378 = dVar19;
      dStack_370 = dVar20;
      local_498 = uVar4;
      bVar21 = UDynamicMesh::IsEmpty(this);
      if (bVar21) {
        local_460 = &local_368;
        pTVar25 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_450;
        local_458 = &local_430;
        local_448 = &local_460;
        local_450 = UE::Core::Private::Function::
                    TFunctionRefCaller<`AppendPrimitiveMesh'::__l5::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                    ::Call;
      }
      else {
        `AppendPrimitiveMesh'::__l2::<lambda_1>::operator()(&local_430,&local_368);
        local_490 = &local_368;
        pTVar25 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_440;
        local_438 = &local_490;
        local_440 = UE::Core::Private::Function::
                    TFunctionRefCaller<`AppendPrimitiveMesh'::__l7::<lambda_3>,void,UE::Geometry::FDynamicMesh3_&>
                    ::Call;
      }
      UDynamicMesh::EditMesh(this,pTVar25,GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_368);
      if (local_538.PolygonVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_538.PolygonVertices.AllocatorInstance.Data);
      }
    }
  }
  *local_488 = this;
  if (local_560 != (void *)0x0) {
    FMemory::Free(local_560);
  }
  return;
}

// execAppendRoundRectangleXY @ 14ce7e640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendRoundRectangleXY
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  UGeometryScriptDebug *pUVar8;
  UDynamicMesh *this;
  undefined8 uVar9;
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
  bool bVar21;
  FText *pFVar22;
  char cVar23;
  float fVar24;
  undefined1 auStackY_5f8 [32];
  int local_5c4;
  int local_5c0;
  int local_5bc;
  float local_5b8;
  float local_5b4;
  float local_5b0 [2];
  undefined2 local_5a8;
  undefined1 uStack_5a6;
  undefined1 uStack_5a5;
  int iStack_5a4;
  UGeometryScriptDebug *local_5a0;
  UDynamicMesh *local_598;
  ITextData local_590;
  FGeometryScriptPrimitiveOptions local_588 [2];
  TVector<double>_u_0 local_578;
  undefined1 *local_560;
  undefined1 *local_558;
  undefined1 local_548 [96];
  double dStack_4e8;
  double local_4e0;
  double dStack_4d8;
  char local_4d0;
  undefined1 local_4c8 [200];
  double local_400;
  double local_3f8;
  int local_3f0;
  int local_3ec;
  undefined1 local_3e7;
  double local_3d8;
  int local_3d0;
  TTransform<double> local_3c8;
  FDynamicMesh3 local_368;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  local_598 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_598,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_598);
  }
  local_5a8 = 1;
  uStack_5a6 = 0;
  iStack_5a4 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5a8);
  }
  local_138._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_138._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_138._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_128._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_118._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_108._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_138);
  }
  local_5b0[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_5b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_5b0);
  }
  local_5b4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5b4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5b4);
  }
  local_5b8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5b8);
  }
  local_5bc = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5bc,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5bc);
  }
  local_5c0 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5c0);
  }
  local_5c4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5c4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5c4);
  }
  local_5a0 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5a0);
  }
  this = local_598;
  pUVar8 = local_5a0;
  fVar7 = local_5b0[0];
  fVar6 = local_5b4;
  fVar24 = local_5b8;
  iVar5 = local_5bc;
  iVar4 = local_5c0;
  iVar3 = local_5c4;
  uVar9 = local_138._0_8_;
  uVar10 = local_138._8_8_;
  uVar11 = local_128._0_8_;
  uVar12 = local_128._8_8_;
  uVar13 = local_118._0_8_;
  uVar14 = local_118._8_8_;
  uVar15 = local_108._0_8_;
  uVar16 = local_108._8_8_;
  uVar17 = local_f8._0_8_;
  uVar18 = local_f8._8_8_;
  uVar19 = local_e8._0_8_;
  uVar20 = local_e8._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.UVMode = uStack_5a6;
  FVar2.PolygroupMode = (undefined1)local_5a8;
  FVar2.bFlipOrientation = (bool)local_5a8._1_1_;
  FVar2._3_1_ = uStack_5a5;
  FVar2.MaterialID = iStack_5a4;
  cVar23 = (char)local_5a8;
  if (local_598 == (UDynamicMesh *)0x0) {
    pFVar22 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_578._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendRoundRectangleXY",
                         L"AppendRoundRectangle: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar8,InvalidInputs,pFVar22);
    if ((longlong *)local_578._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_578._s_0.X + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    UE::Geometry::FRoundedRectangleMeshGenerator::FRoundedRectangleMeshGenerator
              ((FRoundedRectangleMeshGenerator *)local_4c8);
    if (fVar24 <= __real_358637bd) {
      fVar24 = __real_358637bd;
    }
    local_4c8._192_4_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
    local_4c8._160_8_ = 0;
    local_4c8._168_8_ = 0;
    local_3f0 = iVar5;
    if (iVar5 < 0) {
      local_3f0 = 0;
    }
    local_4c8._184_8_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
    local_400 = (double)fVar7;
    local_3ec = iVar4;
    if (iVar4 < 0) {
      local_3ec = 0;
    }
    local_3d0 = 3;
    if (3 < iVar3) {
      local_3d0 = iVar3;
    }
    local_3e7 = cVar23 != '\x02';
    local_4c8._176_8_ = 0;
    local_3d8 = (double)fVar24;
    local_3f8 = (double)fVar6;
    UE::Geometry::FRoundedRectangleMeshGenerator::Generate
              ((FRoundedRectangleMeshGenerator *)local_4c8);
    local_590 = (ITextData)local_4c8;
    local_548[0x50] = '\0';
    local_3c8.Rotation.XY.m128d_f64[0] = (double)uVar9;
    local_3c8.Rotation.XY.m128d_f64[1] = (double)uVar10;
    local_548._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_548._24_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_548._32_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_3c8.Rotation.ZW.m128d_f64[0] = (double)uVar11;
    local_3c8.Rotation.ZW.m128d_f64[1] = (double)uVar12;
    local_3c8.Translation.XY.m128d_f64[0] = (double)uVar13;
    local_3c8.Translation.XY.m128d_f64[1] = (double)uVar14;
    local_3c8.Translation.ZW.m128d_f64[0] = (double)uVar15;
    local_3c8.Translation.ZW.m128d_f64[1] = (double)uVar16;
    local_3c8.Scale3D.XY.m128d_f64[0] = (double)uVar17;
    local_3c8.Scale3D.XY.m128d_f64[1] = (double)uVar18;
    local_3c8.Scale3D.ZW.m128d_f64[0] = (double)uVar19;
    local_3c8.Scale3D.ZW.m128d_f64[1] = (double)uVar20;
    local_588[0] = FVar2;
    bVar21 = UDynamicMesh::IsEmpty(this);
    if (bVar21) {
      local_578._s_0.X = (double)&local_590;
      local_578._s_0.Y = (double)&local_3c8;
      local_578._s_0.Z = (double)local_588;
      local_560 = local_548 + 0x10;
      local_558 = local_548 + 0x30;
      local_548._8_8_ = &local_578;
      local_548._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_548,
                 GeneralEdit,Unknown,false);
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_368,(FMeshShapeGenerator *)local_590);
      local_4d0 = local_548[0x50];
      if (local_548[0x50] != '\0') {
        local_548._88_8_ = local_548._48_8_;
        dStack_4e8 = (double)local_548._56_8_;
        local_4e0 = (double)local_548._64_8_;
        dStack_4d8 = (double)local_548._72_8_;
      }
      local_578._s_0.X = (double)local_548._16_8_;
      local_578._s_0.Y = (double)local_548._24_8_;
      local_578._s_0.Z = (double)local_548._32_8_;
      ApplyPrimitiveOptionsToMesh
                (&local_368,&local_3c8,local_588[0],(TVector<double> *)&local_578._s_0,
                 (TOptional<UE::Geometry::TQuaternion<double>_> *)(local_548 + 0x58));
      local_548._0_8_ = &local_368;
      local_578._s_0.Y = (double)local_548;
      local_578._s_0.X =
           (double)UE::Core::Private::Function::
                   TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                   ::Call;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_578._s_0,
                 GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_368);
    }
    local_4c8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((FScriptContainerElement *)local_4c8._136_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._136_8_);
    }
    if ((FScriptContainerElement *)local_4c8._120_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._120_8_);
    }
    if ((FScriptContainerElement *)local_4c8._104_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._104_8_);
    }
    if ((FScriptContainerElement *)local_4c8._88_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._88_8_);
    }
    if ((FScriptContainerElement *)local_4c8._72_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._72_8_);
    }
    if ((FScriptContainerElement *)local_4c8._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._56_8_);
    }
    if ((FScriptContainerElement *)local_4c8._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._40_8_);
    }
    if ((FScriptContainerElement *)local_4c8._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._24_8_);
    }
    if ((FScriptContainerElement *)local_4c8._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._8_8_);
    }
    *(UDynamicMesh **)param_3 = this;
  }
  return;
}

// execAppendRoundRectangle_Compatibility_5_0 @ 14ce7ed60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendRoundRectangle_Compatibility_5_0
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  UGeometryScriptDebug *pUVar8;
  UDynamicMesh *this;
  undefined8 uVar9;
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
  bool bVar21;
  FText *pFVar22;
  char cVar23;
  float fVar24;
  undefined1 auStackY_5f8 [32];
  int local_5c4;
  int local_5c0;
  int local_5bc;
  float local_5b8;
  float local_5b4;
  float local_5b0 [2];
  undefined2 local_5a8;
  undefined1 uStack_5a6;
  undefined1 uStack_5a5;
  int iStack_5a4;
  UGeometryScriptDebug *local_5a0;
  UDynamicMesh *local_598;
  ITextData local_590;
  FGeometryScriptPrimitiveOptions local_588 [2];
  TVector<double>_u_0 local_578;
  undefined1 *local_560;
  undefined1 *local_558;
  undefined1 local_548 [96];
  double dStack_4e8;
  double local_4e0;
  double dStack_4d8;
  char local_4d0;
  undefined1 local_4c8 [200];
  double local_400;
  double local_3f8;
  int local_3f0;
  int local_3ec;
  undefined1 local_3e7;
  double local_3d8;
  int local_3d0;
  TTransform<double> local_3c8;
  FDynamicMesh3 local_368;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  local_598 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_598,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_598);
  }
  local_5a8 = 1;
  uStack_5a6 = 0;
  iStack_5a4 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5a8);
  }
  local_138._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_138._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_138._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_128._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_118._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_108._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_138);
  }
  local_5b0[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_5b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_5b0);
  }
  local_5b4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5b4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5b4);
  }
  local_5b8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5b8);
  }
  local_5bc = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5bc,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5bc);
  }
  local_5c0 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5c0);
  }
  local_5c4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5c4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5c4);
  }
  local_5a0 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5a0);
  }
  this = local_598;
  pUVar8 = local_5a0;
  fVar7 = local_5b0[0];
  fVar6 = local_5b4;
  fVar24 = local_5b8;
  iVar5 = local_5bc;
  iVar4 = local_5c0;
  iVar3 = local_5c4;
  uVar9 = local_138._0_8_;
  uVar10 = local_138._8_8_;
  uVar11 = local_128._0_8_;
  uVar12 = local_128._8_8_;
  uVar13 = local_118._0_8_;
  uVar14 = local_118._8_8_;
  uVar15 = local_108._0_8_;
  uVar16 = local_108._8_8_;
  uVar17 = local_f8._0_8_;
  uVar18 = local_f8._8_8_;
  uVar19 = local_e8._0_8_;
  uVar20 = local_e8._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.UVMode = uStack_5a6;
  FVar2.PolygroupMode = (undefined1)local_5a8;
  FVar2.bFlipOrientation = (bool)local_5a8._1_1_;
  FVar2._3_1_ = uStack_5a5;
  FVar2.MaterialID = iStack_5a4;
  cVar23 = (char)local_5a8;
  if (local_598 == (UDynamicMesh *)0x0) {
    pFVar22 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_578._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendRoundRectangleXY",
                         L"AppendRoundRectangle: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar8,InvalidInputs,pFVar22);
    if ((longlong *)local_578._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_578._s_0.X + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    UE::Geometry::FRoundedRectangleMeshGenerator::FRoundedRectangleMeshGenerator
              ((FRoundedRectangleMeshGenerator *)local_4c8);
    if (fVar24 <= __real_358637bd) {
      fVar24 = __real_358637bd;
    }
    local_4c8._192_4_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
    local_4c8._160_8_ = 0;
    local_4c8._168_8_ = 0;
    local_4c8._184_8_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
    local_3f0 = iVar5;
    if (iVar5 < 0) {
      local_3f0 = 0;
    }
    local_4c8._176_8_ = 0;
    local_3ec = iVar4;
    if (iVar4 < 0) {
      local_3ec = 0;
    }
    local_3d0 = 3;
    if (3 < iVar3) {
      local_3d0 = iVar3;
    }
    local_3e7 = cVar23 != '\x02';
    local_400 = (double)(float)((double)fVar7 * __real_3fe0000000000000);
    local_3f8 = (double)(float)((double)fVar6 * __real_3fe0000000000000);
    local_3d8 = (double)fVar24;
    UE::Geometry::FRoundedRectangleMeshGenerator::Generate
              ((FRoundedRectangleMeshGenerator *)local_4c8);
    local_590 = (ITextData)local_4c8;
    local_548[0x50] = '\0';
    local_3c8.Rotation.XY.m128d_f64[0] = (double)uVar9;
    local_3c8.Rotation.XY.m128d_f64[1] = (double)uVar10;
    local_548._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_548._24_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_548._32_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_3c8.Rotation.ZW.m128d_f64[0] = (double)uVar11;
    local_3c8.Rotation.ZW.m128d_f64[1] = (double)uVar12;
    local_3c8.Translation.XY.m128d_f64[0] = (double)uVar13;
    local_3c8.Translation.XY.m128d_f64[1] = (double)uVar14;
    local_3c8.Translation.ZW.m128d_f64[0] = (double)uVar15;
    local_3c8.Translation.ZW.m128d_f64[1] = (double)uVar16;
    local_3c8.Scale3D.XY.m128d_f64[0] = (double)uVar17;
    local_3c8.Scale3D.XY.m128d_f64[1] = (double)uVar18;
    local_3c8.Scale3D.ZW.m128d_f64[0] = (double)uVar19;
    local_3c8.Scale3D.ZW.m128d_f64[1] = (double)uVar20;
    local_588[0] = FVar2;
    bVar21 = UDynamicMesh::IsEmpty(this);
    if (bVar21) {
      local_578._s_0.X = (double)&local_590;
      local_578._s_0.Y = (double)&local_3c8;
      local_578._s_0.Z = (double)local_588;
      local_560 = local_548 + 0x10;
      local_558 = local_548 + 0x30;
      local_548._8_8_ = &local_578;
      local_548._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_548,
                 GeneralEdit,Unknown,false);
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_368,(FMeshShapeGenerator *)local_590);
      local_4d0 = local_548[0x50];
      if (local_548[0x50] != '\0') {
        local_548._88_8_ = local_548._48_8_;
        dStack_4e8 = (double)local_548._56_8_;
        local_4e0 = (double)local_548._64_8_;
        dStack_4d8 = (double)local_548._72_8_;
      }
      local_578._s_0.X = (double)local_548._16_8_;
      local_578._s_0.Y = (double)local_548._24_8_;
      local_578._s_0.Z = (double)local_548._32_8_;
      ApplyPrimitiveOptionsToMesh
                (&local_368,&local_3c8,local_588[0],(TVector<double> *)&local_578._s_0,
                 (TOptional<UE::Geometry::TQuaternion<double>_> *)(local_548 + 0x58));
      local_548._0_8_ = &local_368;
      local_578._s_0.Y = (double)local_548;
      local_578._s_0.X =
           (double)UE::Core::Private::Function::
                   TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                   ::Call;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_578._s_0,
                 GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_368);
    }
    local_4c8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((FScriptContainerElement *)local_4c8._136_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._136_8_);
    }
    if ((FScriptContainerElement *)local_4c8._120_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._120_8_);
    }
    if ((FScriptContainerElement *)local_4c8._104_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._104_8_);
    }
    if ((FScriptContainerElement *)local_4c8._88_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._88_8_);
    }
    if ((FScriptContainerElement *)local_4c8._72_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._72_8_);
    }
    if ((FScriptContainerElement *)local_4c8._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._56_8_);
    }
    if ((FScriptContainerElement *)local_4c8._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._40_8_);
    }
    if ((FScriptContainerElement *)local_4c8._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._24_8_);
    }
    if ((FScriptContainerElement *)local_4c8._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._8_8_);
    }
    *(UDynamicMesh **)param_3 = this;
  }
  return;
}

// execAppendSimpleCollisionShapes @ 14ce7f4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSimpleCollisionShapes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  UGeometryScriptDebug *pUVar3;
  FText *pFVar4;
  FKAggregateGeom *pFVar5;
  undefined1 auStackY_268 [32];
  FSimpleCollisionToMeshAttributeSettings local_238 [2];
  undefined2 local_230;
  undefined1 uStack_22e;
  undefined1 uStack_22d;
  undefined4 uStack_22c;
  int local_228;
  int local_224;
  int local_220;
  undefined1 local_21c;
  UGeometryScriptDebug *local_218;
  longlong local_210;
  undefined1 local_208 [16];
  longlong local_1f8;
  FKAggregateGeom local_1f0;
  FSimpleCollisionTriangulationSettings local_150;
  undefined8 local_138;
  longlong *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  TVector<double>_u_0 local_118;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_210 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_210,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_210);
  }
  local_230 = 1;
  uStack_22e = 0;
  uStack_22c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_230,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_230);
  }
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_1f0.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.SphereElems.ArrayNum = 0;
  local_1f0.SphereElems.ArrayMax = 0;
  local_1f0.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.BoxElems.ArrayNum = 0;
  local_1f0.BoxElems.ArrayMax = 0;
  local_1f0.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.SphylElems.ArrayNum = 0;
  local_1f0.SphylElems.ArrayMax = 0;
  local_1f0.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.ConvexElems.ArrayNum = 0;
  local_1f0.ConvexElems.ArrayMax = 0;
  local_1f0.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.TaperedCapsuleElems.ArrayNum = 0;
  local_1f0.TaperedCapsuleElems.ArrayMax = 0;
  local_1f0.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.LevelSetElems.ArrayNum = 0;
  local_1f0.LevelSetElems.ArrayMax = 0;
  local_1f0.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.SkinnedLevelSetElems.ArrayNum = 0;
  local_1f0.SkinnedLevelSetElems.ArrayMax = 0;
  local_1f0.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.MLLevelSetElems.ArrayNum = 0;
  local_1f0.MLLevelSetElems.ArrayMax = 0;
  local_1f0.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_1f0.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_1f0.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_1f0.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f0);
  }
  local_228 = 4;
  local_224 = 5;
  pFVar5 = &local_1f0;
  if ((FKAggregateGeom *)param_2->MostRecentPropertyAddress != (FKAggregateGeom *)0x0) {
    pFVar5 = (FKAggregateGeom *)param_2->MostRecentPropertyAddress;
  }
  local_220 = 8;
  local_21c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_228,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_228);
  }
  local_218 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_218,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_218);
  }
  pUVar3 = local_218;
  local_f8 = local_98._0_8_;
  uStack_f0 = local_98._8_8_;
  local_138 = CONCAT44(uStack_22c,CONCAT13(uStack_22d,CONCAT12(uStack_22e,local_230)));
  local_e8 = local_88._0_8_;
  uStack_e0 = local_88._8_8_;
  local_d8 = local_78._0_8_;
  uStack_d0 = local_78._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8 = local_68._0_8_;
  uStack_c0 = local_68._8_8_;
  local_b8 = (double)local_58._0_8_;
  dStack_b0 = (double)local_58._8_8_;
  local_a8 = (double)local_48._0_8_;
  uStack_a0 = local_48._8_8_;
  local_1f8 = local_210;
  if (local_210 == 0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_208,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"PrimitiveFunctions_AppendSimpleCollisionShapes",
                        L"AppendSimpleCollisionShapes: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar3,InvalidInputs,pFVar4);
  }
  else {
    local_150.BoxSphereStepsPerSide = local_228;
    local_150.CapsuleCircleSteps = local_220;
    local_150.CapsuleHemisphereSteps = local_224;
    local_150.bApproximateLevelSetWithCubes = (bool)local_21c;
    local_130 = &local_1f8;
    local_128 = &local_f8;
    local_120 = &local_138;
    local_208._8_8_ = &local_130;
    local_208._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleCollisionShapes'::__l2::<lambda_1>,void,int,FKShapeElem_const_&,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_150.LatLongSphereSteps = 0x10;
    local_150.bUseBoxSphere = true;
    local_238[0].bEnableAttributes = true;
    local_238[0].bSetToPerTriangleNormals = false;
    local_238[0].bInitializeConvexAndLevelSetUVs = true;
    local_b8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dStack_b0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_a8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    uStack_a0 = 0;
    local_118._s_0.X = (double)local_58._0_8_;
    local_118._s_0.Y = (double)local_58._8_8_;
    local_118._s_0.Z = (double)local_48._0_8_;
    UE::Geometry::ConvertSimpleCollisionToDynamicMeshes
              (pFVar5,(TVector<double> *)&local_118._s_0,
               (TFunctionRef<void___cdecl(int,FKShapeElem_const_&,UE::Geometry::FDynamicMesh3_&)> *)
               local_208,&local_150,local_238);
    if (((pFVar5->TaperedCapsuleElems).ArrayNum == 0) &&
       ((pFVar5->SkinnedLevelSetElems).ArrayNum == 0)) goto LAB_14ce7f8a7;
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_208,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                        L"PrimitiveFunctions_AppendSimpleCollisionShapes Tapered Capsules Unsupported"
                        ,
                        L"AppendSimpleCollisionShapes: Tapered Capsules are not supported and will be skipped"
                       );
    UE::Geometry::AppendWarning(pUVar3,OperationFailed,pFVar4);
  }
  if ((ITextData *)local_208._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_208._0_8_ + 0x10))();
  }
LAB_14ce7f8a7:
  *(longlong *)param_3 = local_1f8;
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)local_1f0.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_1f0.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_1f0.SkinnedTriangleMeshElems.AllocatorInstance.Data !=
      (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_1f0.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_1f0.MLLevelSetElems.AllocatorInstance.Data,
             local_1f0.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_1f0.MLLevelSetElems.AllocatorInstance.Data !=
      (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_1f0.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_1f0.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_1f0.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_1f0.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_1f0.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_1f0.LevelSetElems.AllocatorInstance.Data,
             local_1f0.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_1f0.LevelSetElems.AllocatorInstance.Data != (FKLevelSetElem *)0x0) {
    FMemory::Free(local_1f0.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_1f0.TaperedCapsuleElems.AllocatorInstance.Data,
             local_1f0.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_1f0.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_1f0.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_1f0.ConvexElems.AllocatorInstance.Data,
             local_1f0.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_1f0.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_1f0.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_1f0.SphylElems.AllocatorInstance.Data,
             local_1f0.SphylElems.ArrayNum);
  if ((FKSphylElem *)local_1f0.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_1f0.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_1f0.BoxElems.AllocatorInstance.Data,local_1f0.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_1f0.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_1f0.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_1f0.SphereElems.AllocatorInstance.Data,
             local_1f0.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_1f0.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_1f0.SphereElems.AllocatorInstance.Data);
  }
  return;
}

// execAppendSimpleExtrudePolygon @ 14ce7f9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSimpleExtrudePolygon
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  UDynamicMesh *pUVar3;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  undefined1 auStackY_188 [32];
  EGeometryScriptPrimitiveOriginMode local_138 [4];
  int local_134;
  int local_130;
  float local_12c;
  undefined2 local_128;
  undefined1 uStack_126;
  undefined1 uStack_125;
  int iStack_124;
  UGeometryScriptDebug *local_120;
  UDynamicMesh *local_118;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_110;
  TTransform<double> local_f8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_118 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_128 = 1;
  uStack_126 = 0;
  iStack_124 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_12c = 0.0;
  pTVar4 = &local_110;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_12c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_12c);
  }
  local_130 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_134 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_134,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_134);
  }
  bVar5 = local_134 != 0;
  local_138[0] = Center;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_138);
  }
  local_120 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  FVar2.UVMode = uStack_126;
  FVar2.PolygroupMode = (undefined1)local_128;
  FVar2.bFlipOrientation = (bool)local_128._1_1_;
  FVar2._3_1_ = uStack_125;
  FVar2.MaterialID = iStack_124;
  local_f8.Rotation.XY.m128d_f64[0] = (double)local_98._0_8_;
  local_f8.Rotation.XY.m128d_f64[1] = (double)local_98._8_8_;
  local_f8.Rotation.ZW.m128d_f64[0] = (double)local_88._0_8_;
  local_f8.Rotation.ZW.m128d_f64[1] = (double)local_88._8_8_;
  local_f8.Translation.XY.m128d_f64[0] = (double)local_78._0_8_;
  local_f8.Translation.XY.m128d_f64[1] = (double)local_78._8_8_;
  local_f8.Translation.ZW.m128d_f64[0] = (double)local_68._0_8_;
  local_f8.Translation.ZW.m128d_f64[1] = (double)local_68._8_8_;
  local_f8.Scale3D.XY.m128d_f64[0] = (double)local_58._0_8_;
  local_f8.Scale3D.XY.m128d_f64[1] = (double)local_58._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f8.Scale3D.ZW.m128d_f64[0] = (double)local_48._0_8_;
  local_f8.Scale3D.ZW.m128d_f64[1] = (double)local_48._8_8_;
  pUVar3 = AppendSimpleExtrudePolygon
                     (local_118,FVar2,&local_f8,pTVar4,local_12c,local_130,bVar5,local_138[0],
                      local_120);
  *(UDynamicMesh **)param_3 = pUVar3;
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  return;
}

// execAppendSimpleSweptPolygon @ 14ce7fd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSimpleSweptPolygon
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  UDynamicMesh *pUVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auStackY_1b8 [32];
  int local_158;
  int local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  undefined2 local_140;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  int iStack_13c;
  UGeometryScriptDebug *local_138;
  UDynamicMesh *local_130;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_128;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_118;
  TTransform<double> local_108;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_130 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_140 = 1;
  uStack_13e = 0;
  iStack_13c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_140,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_140);
  }
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  pTVar5 = &local_118;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_158 = 0;
  pTVar4 = &local_128;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  bVar6 = local_158 != 0;
  local_154 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_154,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_154);
  }
  bVar7 = local_154 != 0;
  local_144 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_144,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_144);
  }
  local_148 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_14c = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_14c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_14c);
  }
  local_150 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  local_138 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  FVar2.UVMode = uStack_13e;
  FVar2.PolygroupMode = (undefined1)local_140;
  FVar2.bFlipOrientation = (bool)local_140._1_1_;
  FVar2._3_1_ = uStack_13d;
  FVar2.MaterialID = iStack_13c;
  local_108.Rotation.XY.m128d_f64[0] = (double)local_a8._0_8_;
  local_108.Rotation.XY.m128d_f64[1] = (double)local_a8._8_8_;
  local_108.Rotation.ZW.m128d_f64[0] = (double)local_98._0_8_;
  local_108.Rotation.ZW.m128d_f64[1] = (double)local_98._8_8_;
  local_108.Translation.XY.m128d_f64[0] = (double)local_88._0_8_;
  local_108.Translation.XY.m128d_f64[1] = (double)local_88._8_8_;
  local_108.Translation.ZW.m128d_f64[0] = (double)local_78._0_8_;
  local_108.Translation.ZW.m128d_f64[1] = (double)local_78._8_8_;
  local_108.Scale3D.XY.m128d_f64[0] = (double)local_68._0_8_;
  local_108.Scale3D.XY.m128d_f64[1] = (double)local_68._8_8_;
  local_108.Scale3D.ZW.m128d_f64[0] = (double)local_58._0_8_;
  local_108.Scale3D.ZW.m128d_f64[1] = (double)local_58._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = AppendSimpleSweptPolygon
                     (local_130,FVar2,&local_108,pTVar5,pTVar4,bVar6,bVar7,local_144,local_148,
                      local_14c,local_150,local_138);
  *(UDynamicMesh **)param_3 = pUVar3;
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  return;
}

// execAppendSphereBox @ 14ce801f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSphereBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  UGeometryScriptDebug *pUVar8;
  UDynamicMesh *this;
  undefined8 uVar9;
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
  bool bVar21;
  FText *pFVar22;
  undefined1 auStackY_5e8 [32];
  char local_5b8;
  char local_5b7;
  int local_5b4;
  int local_5b0;
  int local_5ac;
  float local_5a8 [2];
  undefined2 local_5a0;
  undefined1 uStack_59e;
  undefined1 uStack_59d;
  int iStack_59c;
  UGeometryScriptDebug *local_598;
  UDynamicMesh *local_590;
  ITextData local_588;
  FGeometryScriptPrimitiveOptions local_580;
  undefined8 *local_578;
  TVector<double>_u_0 local_568;
  undefined1 *local_550;
  undefined1 *local_548;
  undefined1 local_538 [96];
  double dStack_4d8;
  double local_4d0;
  double dStack_4c8;
  char local_4c0;
  TTransform<double> local_4b8;
  undefined1 local_458 [253];
  bool local_35b;
  float local_358;
  ESphereProjectionMethod local_354;
  FDynamicMesh3 local_348;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_5e8;
  local_590 = (UDynamicMesh *)0x0;
  local_578 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_590,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_590);
  }
  local_5a0 = 1;
  uStack_59e = 0;
  iStack_59c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5a0);
  }
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_118._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_108._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  local_5a8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_5a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_5a8);
  }
  local_5ac = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5ac,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5ac);
  }
  local_5b0 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5b0);
  }
  local_5b4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5b4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5b4);
  }
  local_5b8 = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5b8);
  }
  local_598 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_598,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_598);
  }
  this = local_590;
  pUVar8 = local_598;
  fVar7 = local_5a8[0];
  iVar6 = local_5ac;
  iVar5 = local_5b0;
  iVar4 = local_5b4;
  cVar3 = local_5b8;
  uVar9 = local_118._0_8_;
  uVar10 = local_118._8_8_;
  uVar11 = local_108._0_8_;
  uVar12 = local_108._8_8_;
  uVar13 = local_f8._0_8_;
  uVar14 = local_f8._8_8_;
  uVar15 = local_e8._0_8_;
  uVar16 = local_e8._8_8_;
  uVar17 = local_d8._0_8_;
  uVar18 = local_d8._8_8_;
  uVar19 = local_c8._0_8_;
  uVar20 = local_c8._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.UVMode = uStack_59e;
  FVar2.PolygroupMode = (undefined1)local_5a0;
  FVar2.bFlipOrientation = (bool)local_5a0._1_1_;
  FVar2._3_1_ = uStack_59d;
  FVar2.MaterialID = iStack_59c;
  local_5b7 = (char)local_5a0;
  if (local_590 == (UDynamicMesh *)0x0) {
    pFVar22 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_568._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendSphereBox",
                         L"AppendSphereBox: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar8,InvalidInputs,pFVar22);
    if ((longlong *)local_568._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_568._s_0.X + 0x10))();
    }
    *local_578 = 0;
  }
  else {
    UE::Geometry::FGridBoxMeshGenerator::FGridBoxMeshGenerator((FGridBoxMeshGenerator *)local_458);
    local_354 = CubeMapping;
    local_458._240_4_ = iVar6;
    if (iVar6 < 0) {
      local_458._240_4_ = 0;
    }
    local_458._0_8_ = &___7FBoxSphereGenerator_Geometry_UE__6B_;
    local_358 = fVar7;
    if (fVar7 <= __real_358637bd) {
      local_358 = __real_358637bd;
    }
    local_458._244_4_ = iVar5;
    if (iVar5 < 0) {
      local_458._244_4_ = 0;
    }
    local_458._248_4_ = iVar4;
    if (iVar4 < 0) {
      local_458._248_4_ = 0;
    }
    local_35b = local_5b7 == '\x02';
    UE::Geometry::FBoxSphereGenerator::Generate((FBoxSphereGenerator *)local_458);
    local_538._16_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_538._20_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_538._24_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_538._28_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_538._32_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (cVar3 == '\x01') {
      local_538._16_4_ = 0;
      local_538._20_4_ = 0;
      local_538._24_4_ = 0;
      local_538._28_4_ = 0;
      local_538._32_8_ = (FGeometryScriptPrimitiveOptions *)(double)fVar7;
    }
    local_588 = (ITextData)local_458;
    local_538[0x50] = '\0';
    local_4b8.Rotation.XY.m128d_f64[0] = (double)uVar9;
    local_4b8.Rotation.XY.m128d_f64[1] = (double)uVar10;
    local_4b8.Rotation.ZW.m128d_f64[0] = (double)uVar11;
    local_4b8.Rotation.ZW.m128d_f64[1] = (double)uVar12;
    local_4b8.Translation.XY.m128d_f64[0] = (double)uVar13;
    local_4b8.Translation.XY.m128d_f64[1] = (double)uVar14;
    local_4b8.Translation.ZW.m128d_f64[0] = (double)uVar15;
    local_4b8.Translation.ZW.m128d_f64[1] = (double)uVar16;
    local_4b8.Scale3D.XY.m128d_f64[0] = (double)uVar17;
    local_4b8.Scale3D.XY.m128d_f64[1] = (double)uVar18;
    local_4b8.Scale3D.ZW.m128d_f64[0] = (double)uVar19;
    local_4b8.Scale3D.ZW.m128d_f64[1] = (double)uVar20;
    local_580 = FVar2;
    bVar21 = UDynamicMesh::IsEmpty(this);
    if (bVar21) {
      local_568._s_0.X = (double)&local_588;
      local_568._s_0.Y = (double)&local_4b8;
      local_568._s_0.Z = (double)&local_580;
      local_550 = local_538 + 0x10;
      local_548 = local_538 + 0x30;
      local_538._8_8_ = &local_568;
      local_538._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_538,
                 GeneralEdit,Unknown,false);
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_348,(FMeshShapeGenerator *)local_588);
      local_4c0 = local_538[0x50];
      if (local_538[0x50] != '\0') {
        local_538._88_8_ = local_538._48_8_;
        dStack_4d8 = (double)local_538._56_8_;
        local_4d0 = (double)local_538._64_8_;
        dStack_4c8 = (double)local_538._72_8_;
      }
      local_568._s_0.X = (double)CONCAT44(local_538._20_4_,local_538._16_4_);
      local_568._s_0.Y = (double)CONCAT44(local_538._28_4_,local_538._24_4_);
      local_568._s_0.Z = (double)local_538._32_8_;
      ApplyPrimitiveOptionsToMesh
                (&local_348,&local_4b8,local_580,(TVector<double> *)&local_568._s_0,
                 (TOptional<UE::Geometry::TQuaternion<double>_> *)(local_538 + 0x58));
      local_538._0_8_ = &local_348;
      local_568._s_0.Y = (double)local_538;
      local_568._s_0.X =
           (double)UE::Core::Private::Function::
                   TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                   ::Call;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_568._s_0,
                 GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_348);
    }
    local_458._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((FScriptContainerElement *)local_458._136_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_458._136_8_);
    }
    if ((FScriptContainerElement *)local_458._120_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_458._120_8_);
    }
    if ((FScriptContainerElement *)local_458._104_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_458._104_8_);
    }
    if ((FScriptContainerElement *)local_458._88_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_458._88_8_);
    }
    if ((FScriptContainerElement *)local_458._72_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_458._72_8_);
    }
    if ((FScriptContainerElement *)local_458._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_458._56_8_);
    }
    if ((FScriptContainerElement *)local_458._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_458._40_8_);
    }
    if ((FScriptContainerElement *)local_458._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_458._24_8_);
    }
    if ((FScriptContainerElement *)local_458._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_458._8_8_);
    }
    *local_578 = this;
  }
  return;
}

// execAppendSphereBoxWithCollision @ 14ce808a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSphereBoxWithCollision
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FGeometryScriptPrimitiveOptions FVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  bool bVar20;
  FText *pFVar21;
  int iVar22;
  UDynamicMesh *this;
  FKAggregateGeom *this_00;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStackY_708 [32];
  char local_6d8;
  char local_6d7;
  char local_6d6;
  int local_6d4;
  int local_6d0;
  int local_6cc;
  float local_6c8 [2];
  undefined2 local_6c0;
  undefined1 uStack_6be;
  undefined1 uStack_6bd;
  int iStack_6bc;
  FGeometryScriptPrimitiveOptions local_6b8;
  FGeometryScriptPrimitiveOptions local_6b0;
  UDynamicMesh *local_6a8;
  ITextData local_6a0;
  TVector<double>_u_0 local_698;
  FKAggregateGeom local_678;
  TVector<double>_u_0 local_5d8;
  TVector<double>_u_0 *local_5c0;
  undefined1 *local_5b8;
  undefined1 local_5a8 [72];
  double dStack_560;
  double local_558;
  double dStack_550;
  char local_548;
  TTransform<double> local_538;
  undefined1 local_4d8 [253];
  bool local_3db;
  float local_3d8;
  ESphereProjectionMethod local_3d4;
  TTransform<double> local_3c8;
  FDynamicMesh3 local_368;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_708;
  iVar22 = 0;
  local_6a8 = (UDynamicMesh *)0x0;
  local_5a8._16_8_ = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_6a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_6a8);
  }
  local_678.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_678.SphereElems.ArrayNum = 0;
  local_678.SphereElems.ArrayMax = 0;
  local_678.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_678.BoxElems.ArrayNum = 0;
  local_678.BoxElems.ArrayMax = 0;
  local_678.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_678.SphylElems.ArrayNum = 0;
  local_678.SphylElems.ArrayMax = 0;
  local_678.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_678.ConvexElems.ArrayNum = 0;
  local_678.ConvexElems.ArrayMax = 0;
  local_678.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_678.TaperedCapsuleElems.ArrayNum = 0;
  local_678.TaperedCapsuleElems.ArrayMax = 0;
  local_678.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_678.LevelSetElems.ArrayNum = 0;
  local_678.LevelSetElems.ArrayMax = 0;
  local_678.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_678.SkinnedLevelSetElems.ArrayNum = 0;
  local_678.SkinnedLevelSetElems.ArrayMax = 0;
  local_678.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_678.MLLevelSetElems.ArrayNum = 0;
  local_678.MLLevelSetElems.ArrayMax = 0;
  local_678.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_678.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_678.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_678.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_678.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_678,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_678);
  }
  local_6c0 = 1;
  uStack_6be = 0;
  this_00 = &local_678;
  if ((FKAggregateGeom *)param_2->MostRecentPropertyAddress != (FKAggregateGeom *)0x0) {
    this_00 = (FKAggregateGeom *)param_2->MostRecentPropertyAddress;
  }
  iStack_6bc = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_6c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_6c0);
  }
  local_138._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_138._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_138._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_128._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_118._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_108._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_138);
  }
  local_6c8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_6c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_6c8);
  }
  local_6cc = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_6cc,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_6cc);
  }
  local_6d0 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_6d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_6d0);
  }
  local_6d4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_6d4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_6d4);
  }
  local_6d8 = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_6d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_6d8);
  }
  local_6b0.PolygroupMode = SingleGroup;
  local_6b0.bFlipOrientation = false;
  local_6b0.UVMode = Uniform;
  local_6b0._3_1_ = 0;
  local_6b0.MaterialID = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_6b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_6b0);
  }
  this = local_6a8;
  fVar7 = local_6c8[0];
  iVar6 = local_6cc;
  iVar5 = local_6d0;
  iVar4 = local_6d4;
  uVar8 = local_138._0_8_;
  uVar9 = local_138._8_8_;
  uVar10 = local_128._0_8_;
  uVar11 = local_128._8_8_;
  uVar12 = local_118._0_8_;
  uVar13 = local_118._8_8_;
  uVar14 = local_108._0_8_;
  uVar15 = local_108._8_8_;
  uVar16 = local_f8._0_8_;
  uVar17 = local_f8._8_8_;
  uVar18 = local_e8._0_8_;
  uVar19 = local_e8._8_8_;
  local_6b8 = local_6b0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3.UVMode = uStack_6be;
  FVar3.PolygroupMode = (undefined1)local_6c0;
  FVar3.bFlipOrientation = (bool)local_6c0._1_1_;
  FVar3._3_1_ = uStack_6bd;
  FVar3.MaterialID = iStack_6bc;
  local_6d6 = local_6d8;
  local_6d7 = (char)local_6c0;
  FKAggregateGeom::EmptyElements(this_00);
  local_3c8.Rotation.XY.m128d_f64[0] = (double)uVar8;
  local_3c8.Rotation.XY.m128d_f64[1] = (double)uVar9;
  local_3c8.Rotation.ZW.m128d_f64[0] = (double)uVar10;
  local_3c8.Rotation.ZW.m128d_f64[1] = (double)uVar11;
  local_3c8.Translation.XY.m128d_f64[0] = (double)uVar12;
  local_3c8.Translation.XY.m128d_f64[1] = (double)uVar13;
  local_3c8.Translation.ZW.m128d_f64[0] = (double)uVar14;
  local_3c8.Translation.ZW.m128d_f64[1] = (double)uVar15;
  local_3c8.Scale3D.XY.m128d_f64[0] = (double)uVar16;
  local_3c8.Scale3D.XY.m128d_f64[1] = (double)uVar17;
  local_3c8.Scale3D.ZW.m128d_f64[0] = (double)uVar18;
  local_3c8.Scale3D.ZW.m128d_f64[1] = (double)uVar19;
  if (this == (UDynamicMesh *)0x0) {
    pFVar21 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_5d8._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendSphereBox",
                         L"AppendSphereBox: TargetMesh is Null");
    UE::Geometry::AppendError((UGeometryScriptDebug *)local_6b8,InvalidInputs,pFVar21);
    this = (UDynamicMesh *)0x0;
    if ((ITextData *)local_5d8._s_0.X != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_5d8._s_0.X + 0x10))();
    }
  }
  else {
    UE::Geometry::FGridBoxMeshGenerator::FGridBoxMeshGenerator((FGridBoxMeshGenerator *)local_4d8);
    local_3d4 = CubeMapping;
    local_3d8 = fVar7;
    if (fVar7 <= __real_358637bd) {
      local_3d8 = __real_358637bd;
    }
    local_4d8._240_4_ = iVar6;
    if (iVar6 < 0) {
      local_4d8._240_4_ = iVar22;
    }
    local_4d8._0_8_ = &___7FBoxSphereGenerator_Geometry_UE__6B_;
    local_4d8._244_4_ = iVar5;
    if (iVar5 < 0) {
      local_4d8._244_4_ = iVar22;
    }
    local_4d8._248_4_ = iVar4;
    if (iVar4 < 0) {
      local_4d8._248_4_ = iVar22;
    }
    local_3db = local_6d7 == '\x02';
    UE::Geometry::FBoxSphereGenerator::Generate((FBoxSphereGenerator *)local_4d8);
    uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (local_6d6 == '\x01') {
      uVar23 = 0;
      uVar24 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar2 = (FGeometryScriptPrimitiveOptions *)(double)fVar7;
    }
    local_6a0 = (ITextData)local_4d8;
    local_5a8[0x38] = '\0';
    local_538.Rotation.XY.m128d_f64[0] = (double)uVar8;
    local_538.Rotation.XY.m128d_f64[1] = (double)uVar9;
    local_538.Rotation.ZW.m128d_f64[0] = (double)uVar10;
    local_538.Rotation.ZW.m128d_f64[1] = (double)uVar11;
    local_538.Translation.XY.m128d_f64[0] = (double)uVar12;
    local_538.Translation.XY.m128d_f64[1] = (double)uVar13;
    local_538.Translation.ZW.m128d_f64[0] = (double)uVar14;
    local_538.Translation.ZW.m128d_f64[1] = (double)uVar15;
    local_538.Scale3D.XY.m128d_f64[0] = (double)uVar16;
    local_538.Scale3D.XY.m128d_f64[1] = (double)uVar17;
    local_538.Scale3D.ZW.m128d_f64[0] = (double)uVar18;
    local_538.Scale3D.ZW.m128d_f64[1] = (double)uVar19;
    local_6b8 = FVar3;
    local_698._0_4_ = uVar23;
    local_698._4_4_ = uVar24;
    local_698._8_4_ = uVar25;
    local_698._12_4_ = uVar26;
    local_698._s_0.Z = (double)uVar2;
    bVar20 = UDynamicMesh::IsEmpty(this);
    if (bVar20) {
      local_5d8._s_0.X = (double)&local_6a0;
      local_5d8._s_0.Y = (double)&local_538;
      local_5d8._s_0.Z = (double)&local_6b8;
      local_5c0 = &local_698;
      local_5b8 = local_5a8 + 0x18;
      local_5a8._8_8_ = &local_5d8;
      local_5a8._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_5a8,
                 GeneralEdit,Unknown,false);
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_368,(FMeshShapeGenerator *)local_6a0);
      local_548 = local_5a8[0x38];
      if (local_5a8[0x38] != '\0') {
        local_5a8._64_8_ = local_5a8._24_8_;
        dStack_560 = (double)local_5a8._32_8_;
        local_558 = (double)local_5a8._40_8_;
        dStack_550 = (double)local_5a8._48_8_;
      }
      local_5d8._s_0.X = (double)CONCAT44(local_698._4_4_,local_698._0_4_);
      local_5d8._s_0.Y = (double)CONCAT44(local_698._12_4_,local_698._8_4_);
      local_5d8._s_0.Z = local_698._s_0.Z;
      ApplyPrimitiveOptionsToMesh
                (&local_368,&local_538,local_6b8,(TVector<double> *)&local_5d8._s_0,
                 (TOptional<UE::Geometry::TQuaternion<double>_> *)(local_5a8 + 0x40));
      local_5a8._0_8_ = &local_368;
      local_5d8._s_0.Y = (double)local_5a8;
      local_5d8._s_0.X =
           (double)UE::Core::Private::Function::
                   TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                   ::Call;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_5d8._s_0,
                 GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_368);
    }
    if (this_00 != (FKAggregateGeom *)0x0) {
      local_698._0_4_ = uVar23;
      local_698._4_4_ = uVar24;
      local_698._8_4_ = uVar25;
      local_698._12_4_ = uVar26;
      local_698._16_8_ = uVar2;
      UE::Private::AppendMeshHelper::AppendSphereSimpleCollision
                (this_00,&local_3c8,fVar7,(TVector<double> *)&local_698._s_0);
    }
    local_4d8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((FScriptContainerElement *)local_4d8._136_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4d8._136_8_);
    }
    if ((FScriptContainerElement *)local_4d8._120_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4d8._120_8_);
    }
    if ((FScriptContainerElement *)local_4d8._104_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4d8._104_8_);
    }
    if ((FScriptContainerElement *)local_4d8._88_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4d8._88_8_);
    }
    if ((FScriptContainerElement *)local_4d8._72_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4d8._72_8_);
    }
    if ((FScriptContainerElement *)local_4d8._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4d8._56_8_);
    }
    if ((FScriptContainerElement *)local_4d8._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4d8._40_8_);
    }
    if ((FScriptContainerElement *)local_4d8._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4d8._24_8_);
    }
    if ((FScriptContainerElement *)local_4d8._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4d8._8_8_);
    }
  }
  *(UDynamicMesh **)local_5a8._16_8_ = this;
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)local_678.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_678.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_678.SkinnedTriangleMeshElems.AllocatorInstance.Data !=
      (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_678.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_678.MLLevelSetElems.AllocatorInstance.Data,
             local_678.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_678.MLLevelSetElems.AllocatorInstance.Data !=
      (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_678.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_678.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_678.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_678.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_678.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_678.LevelSetElems.AllocatorInstance.Data,
             local_678.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_678.LevelSetElems.AllocatorInstance.Data != (FKLevelSetElem *)0x0) {
    FMemory::Free(local_678.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_678.TaperedCapsuleElems.AllocatorInstance.Data,
             local_678.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_678.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_678.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_678.ConvexElems.AllocatorInstance.Data,
             local_678.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_678.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_678.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_678.SphylElems.AllocatorInstance.Data,
             local_678.SphylElems.ArrayNum);
  if ((FKSphylElem *)local_678.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_678.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_678.BoxElems.AllocatorInstance.Data,local_678.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_678.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_678.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_678.SphereElems.AllocatorInstance.Data,
             local_678.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_678.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_678.SphereElems.AllocatorInstance.Data);
  }
  return;
}

// execAppendSphereCovering @ 14ce811e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSphereCovering
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  double *pdVar2;
  double dVar3;
  FProperty *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  FGeometryScriptPrimitiveOptions FVar8;
  ulonglong uVar9;
  double dVar10;
  undefined2 uVar11;
  UGeometryScriptDebug *pUVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  bool bVar26;
  uint uVar27;
  FText *pFVar28;
  UDynamicMesh *this;
  uint uVar29;
  UDynamicMesh *pUVar30;
  UDynamicMesh *pUVar31;
  longlong *plVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStackY_668 [32];
  int local_638;
  int local_634;
  int local_630 [2];
  undefined2 local_628;
  undefined1 uStack_626;
  undefined1 uStack_625;
  int iStack_624;
  int local_620;
  int local_61c;
  int local_618;
  UGeometryScriptDebug *local_610;
  UDynamicMesh *local_608;
  FMeshShapeGenerator *local_600;
  FGeometryScriptPrimitiveOptions local_5f8;
  longlong local_5f0;
  longlong local_5e8;
  TReferenceControllerBase<1> *pTStack_5e0;
  UDynamicMesh *local_5d8;
  FDynamicMesh3 *local_5d0;
  ulonglong *local_5c8;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  code *local_598;
  FMeshShapeGenerator ***local_590;
  code *local_588;
  FDynamicMesh3 **local_580;
  FMeshShapeGenerator **local_578;
  TTransform<double> *local_570;
  FGeometryScriptPrimitiveOptions *local_568;
  double *local_560;
  double *local_558;
  FText local_550;
  FText local_540;
  TVector<double>_u_0 local_528;
  double local_508;
  double dStack_500;
  double local_4f8;
  double dStack_4f0;
  char local_4e8;
  TQuaternion<double>_u_0 local_4e0;
  char local_4c0;
  undefined1 local_4b8 [240];
  FIndex3i_u_0 local_3c8;
  bool local_3bb;
  float local_3b8;
  ESphereProjectionMethod local_3b4;
  TTransform<double> local_3a8;
  FDynamicMesh3 local_348;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_668;
  pUVar30 = (UDynamicMesh *)0x0;
  local_608 = (UDynamicMesh *)0x0;
  local_5c8 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_608,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_608);
  }
  local_628 = 1;
  uStack_626 = 0;
  iStack_624 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_628,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_628);
  }
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_118._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_108._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_5e8 = 0;
  pTStack_5e0 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5e8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5e8);
  }
  local_630[0] = 0;
  plVar32 = &local_5e8;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar32 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_630,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_630);
  }
  local_634 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_634,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_634);
  }
  local_638 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_638,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_638);
  }
  local_610 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_610,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_610);
  }
  this = local_608;
  pUVar12 = local_610;
  uVar11 = local_628;
  uVar14 = local_118._0_8_;
  uVar15 = local_118._8_8_;
  uVar16 = local_108._0_8_;
  uVar17 = local_108._8_8_;
  uVar18 = local_f8._0_8_;
  uVar19 = local_f8._8_8_;
  uVar20 = local_e8._0_8_;
  uVar21 = local_e8._8_8_;
  uVar22 = local_d8._0_8_;
  uVar23 = local_d8._8_8_;
  uVar24 = local_c8._0_8_;
  uVar25 = local_c8._8_8_;
  local_618 = local_638;
  local_61c = local_634;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar10 = __real_3eb0c6f7a0000000;
  FVar8.UVMode = uStack_626;
  FVar8.PolygroupMode = (undefined1)local_628;
  FVar8.bFlipOrientation = (bool)local_628._1_1_;
  FVar8._3_1_ = uStack_625;
  FVar8.MaterialID = iStack_624;
  local_620 = local_630[0];
  local_5d8 = local_608;
  if (local_608 == (UDynamicMesh *)0x0) {
    pFVar28 = FText::AsLocalizable_Advanced_LocText
                        (&local_550,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendSphereCovering_NullTargetMesh",
                         L"AppendSphereCovering: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar12,InvalidInputs,pFVar28);
    this = pUVar30;
    if (local_550.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_550.TextData.Reference + 0x10))();
    }
  }
  else if (*plVar32 == 0) {
    pFVar28 = FText::AsLocalizable_Advanced_LocText
                        (&local_540,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendSphereCovering_NullSphereCovering",
                         L"AppendSphereCovering: Sphere Covering is Null");
    UE::Geometry::AppendError(pUVar12,InvalidInputs,pFVar28);
    if (local_540.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_540.TextData.Reference + 0x10))();
    }
  }
  else {
    uVar35 = SUB84(__real_3eb0c6f7a0000000,0);
    uVar9 = (ulonglong)__real_3eb0c6f7a0000000 >> 0x20;
    local_5f0 = 0;
    pUVar31 = pUVar30;
    while( true ) {
      if ((*plVar32 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar26)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar29 = (uint)pUVar30;
      if (*(int *)(*plVar32 + 8) <= (int)uVar29) break;
      UE::Geometry::FGridBoxMeshGenerator::FGridBoxMeshGenerator((FGridBoxMeshGenerator *)local_4b8)
      ;
      local_4b8._0_8_ = &___7FBoxSphereGenerator_Geometry_UE__6B_;
      local_3b8 = 1.0;
      local_3b4 = CubeMapping;
      if ((*plVar32 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar26)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar5 = (longlong *)*plVar32;
      uVar27 = 0;
      if ((int)uVar29 < (int)plVar5[1]) {
        uVar27 = ~uVar29 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *plVar5;
      pdVar2 = (double *)((longlong)&pUVar31->_padding_ + lVar6);
      local_4b8._160_8_ = *pdVar2;
      local_4b8._168_8_ = pdVar2[1];
      local_4b8._176_8_ = *(double *)((longlong)&pUVar31->_padding_ + lVar6);
      if ((*plVar32 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar26)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *plVar32;
      uVar27 = 0;
      if ((int)uVar29 < *(int *)(lVar6 + 0x18)) {
        uVar27 = ~uVar29 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar13 = local_5f0;
      local_3bb = (char)uVar11 == '\x02';
      dVar3 = *(double *)(local_5f0 + *(longlong *)(lVar6 + 0x10));
      uVar33 = SUB84(dVar3,0);
      uVar34 = (int)((ulonglong)dVar3 >> 0x20);
      if (dVar3 <= dVar10) {
        uVar33 = uVar35;
        uVar34 = (int)uVar9;
      }
      local_3c8._s_0.A = local_620;
      local_3c8._s_0.B = local_61c;
      local_3b8 = (float)(double)CONCAT44(uVar34,uVar33);
      local_3c8._s_0.C = local_618;
      UE::Geometry::FBoxSphereGenerator::Generate((FBoxSphereGenerator *)local_4b8);
      this = local_5d8;
      local_600 = (FMeshShapeGenerator *)local_4b8;
      local_4e8 = '\0';
      local_5b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_5b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_5a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_3a8.Rotation.XY.m128d_f64[0] = (double)uVar14;
      local_3a8.Rotation.XY.m128d_f64[1] = (double)uVar15;
      local_3a8.Rotation.ZW.m128d_f64[0] = (double)uVar16;
      local_3a8.Rotation.ZW.m128d_f64[1] = (double)uVar17;
      local_3a8.Translation.XY.m128d_f64[0] = (double)uVar18;
      local_3a8.Translation.XY.m128d_f64[1] = (double)uVar19;
      local_3a8.Translation.ZW.m128d_f64[0] = (double)uVar20;
      local_3a8.Translation.ZW.m128d_f64[1] = (double)uVar21;
      local_3a8.Scale3D.XY.m128d_f64[0] = (double)uVar22;
      local_3a8.Scale3D.XY.m128d_f64[1] = (double)uVar23;
      local_3a8.Scale3D.ZW.m128d_f64[0] = (double)uVar24;
      local_3a8.Scale3D.ZW.m128d_f64[1] = (double)uVar25;
      local_5f8 = FVar8;
      bVar26 = UDynamicMesh::IsEmpty(local_5d8);
      if (bVar26) {
        local_578 = &local_600;
        local_570 = &local_3a8;
        local_568 = &local_5f8;
        local_560 = &local_5b8;
        local_558 = &local_508;
        local_590 = &local_578;
        local_598 = UE::Core::Private::Function::
                    TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                    ::Call;
        UDynamicMesh::EditMesh
                  (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_598,
                   GeneralEdit,Unknown,false);
      }
      else {
        UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_348,local_600);
        local_4c0 = local_4e8;
        if (local_4e8 != '\0') {
          local_4e0._s_0.X = local_508;
          local_4e0._s_0.Y = dStack_500;
          local_4e0._s_0.Z = local_4f8;
          local_4e0._s_0.W = dStack_4f0;
        }
        local_528._s_0.X = local_5b8;
        local_528._s_0.Y = dStack_5b0;
        local_528._s_0.Z = local_5a8;
        ApplyPrimitiveOptionsToMesh
                  (&local_348,&local_3a8,local_5f8,(TVector<double> *)&local_528._s_0,
                   (TOptional<UE::Geometry::TQuaternion<double>_> *)&local_4e0._s_0);
        local_5d0 = &local_348;
        local_580 = &local_5d0;
        local_588 = UE::Core::Private::Function::
                    TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                    ::Call;
        UDynamicMesh::EditMesh
                  (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_588,
                   GeneralEdit,Unknown,false);
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_348);
      }
      local_4b8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
      if ((FScriptContainerElement *)local_4b8._136_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_4b8._136_8_);
      }
      if ((FScriptContainerElement *)local_4b8._120_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_4b8._120_8_);
      }
      if ((FScriptContainerElement *)local_4b8._104_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_4b8._104_8_);
      }
      if ((FScriptContainerElement *)local_4b8._88_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_4b8._88_8_);
      }
      if ((FScriptContainerElement *)local_4b8._72_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_4b8._72_8_);
      }
      if ((FScriptContainerElement *)local_4b8._56_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_4b8._56_8_);
      }
      if ((FScriptContainerElement *)local_4b8._40_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_4b8._40_8_);
      }
      if ((FScriptContainerElement *)local_4b8._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_4b8._24_8_);
      }
      if ((FScriptContainerElement *)local_4b8._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_4b8._8_8_);
      }
      pUVar30 = (UDynamicMesh *)(ulonglong)(uVar29 + 1);
      pUVar31 = (UDynamicMesh *)&pUVar31->_padding_;
      local_5f0 = lVar13 + 8;
    }
  }
  *local_5c8 = (ulonglong)this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_5e0);
  return;
}

// execAppendSphereLatLong @ 14ce81a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSphereLatLong
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  char cVar3;
  float fVar4;
  UGeometryScriptDebug *pUVar5;
  UDynamicMesh *this;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  FText *pFVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  undefined1 auStackY_578 [32];
  char local_548 [4];
  float local_544;
  int local_540;
  int local_53c;
  char local_538;
  undefined1 uStack_537;
  undefined1 uStack_536;
  undefined1 uStack_535;
  int iStack_534;
  UGeometryScriptDebug *local_530;
  UDynamicMesh *local_528;
  ITextData local_520;
  FGeometryScriptPrimitiveOptions local_518 [2];
  TVector<double>_u_0 local_508;
  undefined4 *local_4f0;
  double *local_4e8;
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [160];
  double local_428;
  int local_420;
  int local_41c;
  bool local_418;
  undefined4 local_408;
  undefined4 uStack_404;
  uint uStack_400;
  undefined4 uStack_3fc;
  FGeometryScriptPrimitiveOptions *local_3f8;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  char local_3c8;
  TQuaternion<double>_u_0 local_3c0;
  char local_3a0;
  TTransform<double> local_398;
  FDynamicMesh3 local_338;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_578;
  local_528 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_528,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_528);
  }
  local_538 = '\x01';
  uStack_537 = 0;
  uStack_536 = 0;
  iStack_534 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_538,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_538);
  }
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  local_544 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_544,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_544);
  }
  local_540 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_540,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_540);
  }
  local_53c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_53c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_53c);
  }
  local_548[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_548,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_548);
  }
  local_530 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_530,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_530);
  }
  this = local_528;
  pUVar5 = local_530;
  fVar4 = local_544;
  cVar3 = local_548[0];
  uVar6 = local_108._0_8_;
  uVar7 = local_108._8_8_;
  uVar8 = local_f8._0_8_;
  uVar9 = local_f8._8_8_;
  uVar10 = local_e8._0_8_;
  uVar11 = local_e8._8_8_;
  uVar12 = local_d8._0_8_;
  uVar13 = local_d8._8_8_;
  uVar14 = local_c8._0_8_;
  uVar15 = local_c8._8_8_;
  uVar16 = local_b8._0_8_;
  uVar17 = local_b8._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.bFlipOrientation = (bool)uStack_537;
  FVar2.PolygroupMode = local_538;
  FVar2.UVMode = uStack_536;
  FVar2._3_1_ = uStack_535;
  FVar2.MaterialID = iStack_534;
  if (local_528 == (UDynamicMesh *)0x0) {
    pFVar19 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_508._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendSphereLatLong",
                         L"AppendSphereLatLong: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar5,InvalidInputs,pFVar19);
    if ((longlong *)local_508._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_508._s_0.X + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_4c8._0_8_ = &___7FSphereGenerator_Geometry_UE__6B_;
    local_4c8._8_8_ = (FScriptContainerElement *)0x0;
    iVar20 = local_540;
    if (local_540 < 3) {
      iVar20 = 3;
    }
    local_4c8._16_8_ = 0.0;
    local_4c8._24_8_ = (FScriptContainerElement *)0x0;
    local_4c8._32_8_ = 0.0;
    fVar22 = local_544;
    if (local_544 <= __real_358637bd) {
      fVar22 = __real_358637bd;
    }
    iVar21 = local_53c;
    if (local_53c < 3) {
      iVar21 = 3;
    }
    local_4c8._40_8_ = (FScriptContainerElement *)0x0;
    local_418 = local_538 == '\x02';
    local_4c8._48_8_ = 0.0;
    local_4c8._56_8_ = (FScriptContainerElement *)0x0;
    local_4c8._64_8_ = 0.0;
    local_428 = (double)fVar22;
    local_420 = 3;
    if (3 < iVar20) {
      local_420 = iVar20;
    }
    local_4c8._72_8_ = (FScriptContainerElement *)0x0;
    local_4c8._80_8_ = 0;
    local_41c = 3;
    if (3 < iVar21) {
      local_41c = iVar21;
    }
    local_4c8._88_8_ = (FScriptContainerElement *)0x0;
    local_4c8._96_8_ = 0;
    iVar21 = (local_420 + -2) * local_41c;
    local_4c8._104_8_ = (FScriptContainerElement *)0x0;
    local_4c8._112_8_ = 0;
    local_4c8._120_8_ = (FScriptContainerElement *)0x0;
    local_4c8._128_8_ = 0;
    local_4c8._136_8_ = (FScriptContainerElement *)0x0;
    iVar20 = iVar21 + 2;
    local_4c8._144_8_ = 0;
    local_4c8[0x98] = false;
    UE::Geometry::FMeshShapeGenerator::SetBufferSizes
              ((FMeshShapeGenerator *)local_4c8,iVar20,iVar21 * 2,
               (local_41c + 1) * (local_420 + -2) + local_41c * 2,iVar20);
    UE::Geometry::FSphereGenerator::GenerateVertices((FSphereGenerator *)local_4c8);
    UE::Geometry::FSphereGenerator::GenerateUVVertices((FSphereGenerator *)local_4c8);
    UE::Geometry::FSphereGenerator::OutputEquatorialTriangles((FSphereGenerator *)local_4c8);
    UE::Geometry::FSphereGenerator::OutputPolarTriangles((FSphereGenerator *)local_4c8);
    local_408 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uStack_404 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_400 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_3fc = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_3f8 = (FGeometryScriptPrimitiveOptions *)
                UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (cVar3 == '\x01') {
      local_408 = 0;
      uStack_404 = 0;
      uStack_400 = 0;
      uStack_3fc = 0;
      local_3f8 = (FGeometryScriptPrimitiveOptions *)(double)fVar4;
    }
    local_520 = (ITextData)local_4c8;
    local_3c8 = '\0';
    local_398.Rotation.XY.m128d_f64[0] = (double)uVar6;
    local_398.Rotation.XY.m128d_f64[1] = (double)uVar7;
    local_398.Rotation.ZW.m128d_f64[0] = (double)uVar8;
    local_398.Rotation.ZW.m128d_f64[1] = (double)uVar9;
    local_398.Translation.XY.m128d_f64[0] = (double)uVar10;
    local_398.Translation.XY.m128d_f64[1] = (double)uVar11;
    local_398.Translation.ZW.m128d_f64[0] = (double)uVar12;
    local_398.Translation.ZW.m128d_f64[1] = (double)uVar13;
    local_398.Scale3D.XY.m128d_f64[0] = (double)uVar14;
    local_398.Scale3D.XY.m128d_f64[1] = (double)uVar15;
    local_398.Scale3D.ZW.m128d_f64[0] = (double)uVar16;
    local_398.Scale3D.ZW.m128d_f64[1] = (double)uVar17;
    local_518[0] = FVar2;
    bVar18 = UDynamicMesh::IsEmpty(this);
    if (bVar18) {
      local_508._s_0.X = (double)&local_520;
      local_508._s_0.Y = (double)&local_398;
      local_508._s_0.Z = (double)local_518;
      local_4f0 = &local_408;
      local_4e8 = &local_3e8;
      local_4d8._8_8_ = &local_508;
      local_4d8._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_4d8,
                 GeneralEdit,Unknown,false);
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_338,(FMeshShapeGenerator *)local_520);
      local_3a0 = local_3c8;
      if (local_3c8 != '\0') {
        local_3c0._s_0.X = local_3e8;
        local_3c0._s_0.Y = dStack_3e0;
        local_3c0._s_0.Z = local_3d8;
        local_3c0._s_0.W = dStack_3d0;
      }
      local_508._s_0.X = (double)CONCAT44(uStack_404,local_408);
      local_508._s_0.Y = (double)CONCAT44(uStack_3fc,uStack_400);
      local_508._s_0.Z = (double)local_3f8;
      ApplyPrimitiveOptionsToMesh
                (&local_338,&local_398,local_518[0],(TVector<double> *)&local_508._s_0,
                 (TOptional<UE::Geometry::TQuaternion<double>_> *)&local_3c0._s_0);
      local_4d8._0_8_ = &local_338;
      local_508._s_0.Y = (double)local_4d8;
      local_508._s_0.X =
           (double)UE::Core::Private::Function::
                   TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                   ::Call;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_508._s_0,
                 GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_338);
    }
    local_4c8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((FScriptContainerElement *)local_4c8._136_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._136_8_);
    }
    if ((FScriptContainerElement *)local_4c8._120_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._120_8_);
    }
    if ((FScriptContainerElement *)local_4c8._104_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._104_8_);
    }
    if ((FScriptContainerElement *)local_4c8._88_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._88_8_);
    }
    if ((FScriptContainerElement *)local_4c8._72_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._72_8_);
    }
    if ((FScriptContainerElement *)local_4c8._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._56_8_);
    }
    if ((FScriptContainerElement *)local_4c8._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._40_8_);
    }
    if ((FScriptContainerElement *)local_4c8._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._24_8_);
    }
    if ((FScriptContainerElement *)local_4c8._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_4c8._8_8_);
    }
    *(UDynamicMesh **)param_3 = this;
  }
  return;
}

// execAppendSphereLatLongWithCollision @ 14ce820f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSphereLatLongWithCollision
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  undefined8 uVar3;
  FGeometryScriptPrimitiveOptions FVar4;
  float fVar5;
  UGeometryScriptDebug *pUVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  FText *pFVar20;
  UDynamicMesh *this;
  int iVar21;
  FKAggregateGeom *this_00;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStackY_6b8 [32];
  char local_688;
  char local_687;
  char local_686;
  int local_684;
  int local_680;
  float local_67c;
  undefined2 local_678;
  undefined1 uStack_676;
  undefined1 uStack_675;
  int iStack_674;
  UGeometryScriptDebug *local_670;
  UDynamicMesh *local_668;
  ITextData local_660;
  FGeometryScriptPrimitiveOptions local_658 [2];
  TVector<double>_u_0 local_648;
  FKAggregateGeom local_628;
  TVector<double>_u_0 local_588;
  TVector<double>_u_0 *local_570;
  double *local_568;
  undefined1 local_558 [16];
  undefined1 local_548 [160];
  double local_4a8;
  int local_4a0;
  int local_49c;
  bool local_498;
  undefined8 *local_488;
  double local_480;
  double dStack_478;
  double local_470;
  double dStack_468;
  char local_460;
  TQuaternion<double>_u_0 local_458;
  char local_438;
  TTransform<double> local_428;
  TTransform<double> local_3c8;
  FDynamicMesh3 local_368;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_6b8;
  local_668 = (UDynamicMesh *)0x0;
  local_488 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_668,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_668);
  }
  local_628.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_628.SphereElems.ArrayNum = 0;
  local_628.SphereElems.ArrayMax = 0;
  local_628.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_628.BoxElems.ArrayNum = 0;
  local_628.BoxElems.ArrayMax = 0;
  local_628.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_628.SphylElems.ArrayNum = 0;
  local_628.SphylElems.ArrayMax = 0;
  local_628.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_628.ConvexElems.ArrayNum = 0;
  local_628.ConvexElems.ArrayMax = 0;
  local_628.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_628.TaperedCapsuleElems.ArrayNum = 0;
  local_628.TaperedCapsuleElems.ArrayMax = 0;
  local_628.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_628.LevelSetElems.ArrayNum = 0;
  local_628.LevelSetElems.ArrayMax = 0;
  local_628.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_628.SkinnedLevelSetElems.ArrayNum = 0;
  local_628.SkinnedLevelSetElems.ArrayMax = 0;
  local_628.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_628.MLLevelSetElems.ArrayNum = 0;
  local_628.MLLevelSetElems.ArrayMax = 0;
  local_628.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_628.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_628.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_628.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_628.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_628,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_628);
  }
  local_678 = 1;
  uStack_676 = 0;
  this_00 = &local_628;
  if ((FKAggregateGeom *)param_2->MostRecentPropertyAddress != (FKAggregateGeom *)0x0) {
    this_00 = (FKAggregateGeom *)param_2->MostRecentPropertyAddress;
  }
  iStack_674 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_678,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_678);
  }
  local_138._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_138._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_138._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_128._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_118._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_108._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_138);
  }
  local_67c = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_67c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_67c);
  }
  local_680 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_680,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_680);
  }
  local_684 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_684,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_684);
  }
  local_688 = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_688,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_688);
  }
  local_670 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_670,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_670);
  }
  this = local_668;
  pUVar6 = local_670;
  fVar5 = local_67c;
  iVar2 = local_680;
  iVar21 = local_684;
  uVar7 = local_138._0_8_;
  uVar8 = local_138._8_8_;
  uVar9 = local_128._0_8_;
  uVar10 = local_128._8_8_;
  uVar11 = local_118._0_8_;
  uVar12 = local_118._8_8_;
  uVar13 = local_108._0_8_;
  uVar14 = local_108._8_8_;
  uVar15 = local_f8._0_8_;
  uVar16 = local_f8._8_8_;
  uVar17 = local_e8._0_8_;
  uVar18 = local_e8._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4.UVMode = uStack_676;
  FVar4.PolygroupMode = (undefined1)local_678;
  FVar4.bFlipOrientation = (bool)local_678._1_1_;
  FVar4._3_1_ = uStack_675;
  FVar4.MaterialID = iStack_674;
  local_686 = local_688;
  local_687 = (char)local_678;
  FKAggregateGeom::EmptyElements(this_00);
  local_3c8.Rotation.XY.m128d_f64[0] = (double)uVar7;
  local_3c8.Rotation.XY.m128d_f64[1] = (double)uVar8;
  local_3c8.Rotation.ZW.m128d_f64[0] = (double)uVar9;
  local_3c8.Rotation.ZW.m128d_f64[1] = (double)uVar10;
  local_3c8.Translation.XY.m128d_f64[0] = (double)uVar11;
  local_3c8.Translation.XY.m128d_f64[1] = (double)uVar12;
  local_3c8.Translation.ZW.m128d_f64[0] = (double)uVar13;
  local_3c8.Translation.ZW.m128d_f64[1] = (double)uVar14;
  local_3c8.Scale3D.XY.m128d_f64[0] = (double)uVar15;
  local_3c8.Scale3D.XY.m128d_f64[1] = (double)uVar16;
  local_3c8.Scale3D.ZW.m128d_f64[0] = (double)uVar17;
  local_3c8.Scale3D.ZW.m128d_f64[1] = (double)uVar18;
  if (this == (UDynamicMesh *)0x0) {
    pFVar20 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_588._s_0,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"PrimitiveFunctions_AppendSphereLatLong",
                         L"AppendSphereLatLong: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar6,InvalidInputs,pFVar20);
    this = (UDynamicMesh *)0x0;
    if ((ITextData *)local_588._s_0.X != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_588._s_0.X + 0x10))();
    }
  }
  else {
    local_548._8_8_ = (FScriptContainerElement *)0x0;
    if (iVar2 < 3) {
      iVar2 = 3;
    }
    local_548._16_8_ = 0.0;
    local_548._24_8_ = (FScriptContainerElement *)0x0;
    local_548._32_8_ = 0.0;
    fVar22 = fVar5;
    if (fVar5 <= __real_358637bd) {
      fVar22 = __real_358637bd;
    }
    if (iVar21 < 3) {
      iVar21 = 3;
    }
    local_548._40_8_ = (FScriptContainerElement *)0x0;
    local_498 = local_687 == '\x02';
    local_548._0_8_ = &___7FSphereGenerator_Geometry_UE__6B_;
    local_548._48_8_ = 0.0;
    local_548._56_8_ = (FScriptContainerElement *)0x0;
    local_4a8 = (double)fVar22;
    local_4a0 = 3;
    if (3 < iVar2) {
      local_4a0 = iVar2;
    }
    local_548._64_8_ = 0.0;
    local_548._72_8_ = (FScriptContainerElement *)0x0;
    local_49c = 3;
    if (3 < iVar21) {
      local_49c = iVar21;
    }
    local_548._80_8_ = 0;
    local_548._88_8_ = (FScriptContainerElement *)0x0;
    iVar21 = (local_4a0 + -2) * local_49c;
    local_548._96_8_ = 0;
    local_548._104_8_ = (FScriptContainerElement *)0x0;
    local_548._112_8_ = 0;
    local_548._120_8_ = (FScriptContainerElement *)0x0;
    local_548._128_8_ = 0;
    iVar2 = iVar21 + 2;
    local_548._136_8_ = (FScriptContainerElement *)0x0;
    local_548._144_8_ = 0;
    local_548[0x98] = false;
    UE::Geometry::FMeshShapeGenerator::SetBufferSizes
              ((FMeshShapeGenerator *)local_548,iVar2,iVar21 * 2,
               (local_49c + 1) * (local_4a0 + -2) + local_49c * 2,iVar2);
    UE::Geometry::FSphereGenerator::GenerateVertices((FSphereGenerator *)local_548);
    UE::Geometry::FSphereGenerator::GenerateUVVertices((FSphereGenerator *)local_548);
    UE::Geometry::FSphereGenerator::OutputEquatorialTriangles((FSphereGenerator *)local_548);
    UE::Geometry::FSphereGenerator::OutputPolarTriangles((FSphereGenerator *)local_548);
    uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (local_686 == '\x01') {
      uVar23 = 0;
      uVar24 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar3 = (FGeometryScriptPrimitiveOptions *)(double)fVar5;
    }
    local_660 = (ITextData)local_548;
    local_460 = '\0';
    local_428.Rotation.XY.m128d_f64[0] = (double)uVar7;
    local_428.Rotation.XY.m128d_f64[1] = (double)uVar8;
    local_428.Rotation.ZW.m128d_f64[0] = (double)uVar9;
    local_428.Rotation.ZW.m128d_f64[1] = (double)uVar10;
    local_428.Translation.XY.m128d_f64[0] = (double)uVar11;
    local_428.Translation.XY.m128d_f64[1] = (double)uVar12;
    local_428.Translation.ZW.m128d_f64[0] = (double)uVar13;
    local_428.Translation.ZW.m128d_f64[1] = (double)uVar14;
    local_428.Scale3D.XY.m128d_f64[0] = (double)uVar15;
    local_428.Scale3D.XY.m128d_f64[1] = (double)uVar16;
    local_428.Scale3D.ZW.m128d_f64[0] = (double)uVar17;
    local_428.Scale3D.ZW.m128d_f64[1] = (double)uVar18;
    local_658[0] = FVar4;
    local_648._0_4_ = uVar23;
    local_648._4_4_ = uVar24;
    local_648._8_4_ = uVar25;
    local_648._12_4_ = uVar26;
    local_648._s_0.Z = (double)uVar3;
    bVar19 = UDynamicMesh::IsEmpty(this);
    if (bVar19) {
      local_588._s_0.X = (double)&local_660;
      local_588._s_0.Y = (double)&local_428;
      local_588._s_0.Z = (double)local_658;
      local_570 = &local_648;
      local_568 = &local_480;
      local_558._8_8_ = &local_588;
      local_558._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`AppendPrimitive'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_558,
                 GeneralEdit,Unknown,false);
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_368,(FMeshShapeGenerator *)local_660);
      local_438 = local_460;
      if (local_460 != '\0') {
        local_458._s_0.X = local_480;
        local_458._s_0.Y = dStack_478;
        local_458._s_0.Z = local_470;
        local_458._s_0.W = dStack_468;
      }
      local_588._s_0.X = (double)CONCAT44(local_648._4_4_,local_648._0_4_);
      local_588._s_0.Y = (double)CONCAT44(local_648._12_4_,local_648._8_4_);
      local_588._s_0.Z = local_648._s_0.Z;
      ApplyPrimitiveOptionsToMesh
                (&local_368,&local_428,local_658[0],(TVector<double> *)&local_588._s_0,
                 (TOptional<UE::Geometry::TQuaternion<double>_> *)&local_458._s_0);
      local_558._0_8_ = &local_368;
      local_588._s_0.Y = (double)local_558;
      local_588._s_0.X =
           (double)UE::Core::Private::Function::
                   TFunctionRefCaller<`AppendPrimitive'::__l7::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                   ::Call;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_588._s_0,
                 GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_368);
    }
    if (this_00 != (FKAggregateGeom *)0x0) {
      local_648._0_4_ = uVar23;
      local_648._4_4_ = uVar24;
      local_648._8_4_ = uVar25;
      local_648._12_4_ = uVar26;
      local_648._16_8_ = uVar3;
      UE::Private::AppendMeshHelper::AppendSphereSimpleCollision
                (this_00,&local_3c8,fVar5,(TVector<double> *)&local_648._s_0);
    }
    local_548._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((FScriptContainerElement *)local_548._136_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_548._136_8_);
    }
    if ((FScriptContainerElement *)local_548._120_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_548._120_8_);
    }
    if ((FScriptContainerElement *)local_548._104_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_548._104_8_);
    }
    if ((FScriptContainerElement *)local_548._88_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_548._88_8_);
    }
    if ((FScriptContainerElement *)local_548._72_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_548._72_8_);
    }
    if ((FScriptContainerElement *)local_548._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_548._56_8_);
    }
    if ((FScriptContainerElement *)local_548._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_548._40_8_);
    }
    if ((FScriptContainerElement *)local_548._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_548._24_8_);
    }
    if ((FScriptContainerElement *)local_548._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_548._8_8_);
    }
  }
  *local_488 = this;
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)local_628.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_628.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_628.SkinnedTriangleMeshElems.AllocatorInstance.Data !=
      (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_628.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_628.MLLevelSetElems.AllocatorInstance.Data,
             local_628.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_628.MLLevelSetElems.AllocatorInstance.Data !=
      (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_628.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_628.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_628.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_628.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_628.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_628.LevelSetElems.AllocatorInstance.Data,
             local_628.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_628.LevelSetElems.AllocatorInstance.Data != (FKLevelSetElem *)0x0) {
    FMemory::Free(local_628.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_628.TaperedCapsuleElems.AllocatorInstance.Data,
             local_628.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_628.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_628.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_628.ConvexElems.AllocatorInstance.Data,
             local_628.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_628.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_628.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_628.SphylElems.AllocatorInstance.Data,
             local_628.SphylElems.ArrayNum);
  if ((FKSphylElem *)local_628.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_628.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_628.BoxElems.AllocatorInstance.Data,local_628.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_628.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_628.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_628.SphereElems.AllocatorInstance.Data,
             local_628.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_628.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_628.SphereElems.AllocatorInstance.Data);
  }
  return;
}

// execAppendSpiralRevolvePolygon @ 14ce82aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSpiralRevolvePolygon
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  float fVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  undefined2 uVar9;
  UGeometryScriptDebug *pUVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  bool bVar23;
  uint uVar24;
  FText *pFVar25;
  UDynamicMesh *pUVar26;
  TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *pTVar27;
  double *pdVar28;
  UDynamicMesh *pUVar29;
  UDynamicMesh *this;
  double *pdVar30;
  void **ppvVar31;
  double dVar32;
  float fVar33;
  undefined1 auStack_628 [32];
  undefined1 local_5d8 [4];
  float local_5d4;
  int local_5d0;
  float local_5cc;
  undefined2 local_5c8;
  undefined1 uStack_5c6;
  undefined1 uStack_5c5;
  undefined4 uStack_5c4;
  undefined8 local_5c0;
  undefined2 uStack_5b8;
  float fStack_5b4;
  undefined4 local_5b0;
  int local_5a8;
  undefined4 local_598;
  float local_588 [2];
  UGeometryScriptDebug *local_580;
  UDynamicMesh *local_578;
  void *local_570;
  undefined8 local_568;
  double local_560;
  double dStack_558;
  undefined1 local_548 [4];
  undefined8 local_544;
  undefined2 local_53c;
  undefined1 local_53a;
  longlong local_538;
  longlong lStack_530;
  longlong local_528;
  longlong lStack_520;
  undefined1 local_518;
  undefined4 local_514;
  undefined1 local_510;
  longlong local_508;
  undefined1 local_500;
  ForAnyElementType local_4f8;
  uint local_4f0;
  uint local_4ec;
  bool local_4e8;
  double local_4e0;
  FMeshNormals local_4d8;
  FMeshNormals local_4c0;
  undefined8 local_4a8;
  FDynamicMesh3 *local_4a0;
  undefined8 *local_498;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_490;
  float *local_488;
  code *local_480;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_478;
  FDynamicMesh3 *local_470;
  double **local_468;
  code *local_460;
  FDynamicMesh3 **local_458;
  code *local_450;
  FDynamicMesh3 **local_448;
  double *local_440;
  undefined8 *local_438;
  double local_430;
  double dStack_428;
  double local_420;
  FText local_418;
  FText local_408 [2];
  undefined4 local_3e8;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  double local_3a8;
  double dStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  double local_388;
  double dStack_380;
  FDynamicMesh3 local_378;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_628;
  pUVar29 = (UDynamicMesh *)0x0;
  local_578 = (UDynamicMesh *)0x0;
  local_498 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_578,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_578);
  }
  local_5c8 = 1;
  uStack_5c6 = 0;
  uStack_5c4 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5c8);
  }
  local_148 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_140 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_138 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_130 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_118 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_110 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_128._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_f8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_570 = (void *)0x0;
  local_568 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_570,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_570);
  }
  local_5c0 = 0x43b40000;
  uStack_5b8 = 0;
  ppvVar31 = &local_570;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar31 = (void **)param_2->MostRecentPropertyAddress;
  }
  fStack_5b4 = 30.0;
  local_5b0 = CONCAT22(local_5b0._2_2_,0x100);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5c0);
  }
  local_5cc = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5cc,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5cc);
  }
  local_5d0 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5d0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5d0);
  }
  local_5d4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5d4,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5d4);
  }
  local_580 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_580,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_580);
  }
  dVar22 = dStack_f0;
  dVar21 = local_f8;
  dVar18 = dStack_110;
  dVar17 = local_118;
  dVar14 = dStack_130;
  dVar13 = local_138;
  dVar12 = dStack_140;
  dVar11 = local_148;
  this = local_578;
  pUVar10 = local_580;
  fVar33 = fStack_5b4;
  uVar9 = uStack_5b8;
  fVar8 = local_5cc;
  fVar7 = local_5d4;
  fVar4 = (float)local_5c0;
  uVar6 = (ulonglong)local_5c0 >> 0x20;
  uVar15 = local_128._0_8_;
  uVar16 = local_128._8_8_;
  uVar19 = local_108._0_8_;
  uVar20 = local_108._8_8_;
  local_598 = local_5b0;
  local_3e8 = local_5b0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar5 = CONCAT44(uStack_5c4,CONCAT13(uStack_5c5,CONCAT12(uStack_5c6,local_5c8)));
  local_5a8 = local_5d0;
  if (local_578 == (UDynamicMesh *)0x0) {
    pFVar25 = FText::AsLocalizable_Advanced_LocText
                        (&local_418,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"AppendSpiralRevolvePolygon_NullMesh",
                         L"AppendSpiralRevolvePolygon: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar10,InvalidInputs,pFVar25);
    this = pUVar29;
    if (local_418.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_418.TextData.Reference + 0x10))();
    }
  }
  else {
    iVar1 = *(int *)(ppvVar31 + 1);
    if (iVar1 < 3) {
      pFVar25 = FText::AsLocalizable_Advanced_LocText
                          (local_408,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                           L"AppendSpiralRevolvePolygon_InvalidPolygon",
                           L"AppendSpiralRevolvePolygon: PolygonVertices array requires at least 3 positions"
                          );
      UE::Geometry::AppendError(pUVar10,InvalidInputs,pFVar25);
      if (local_408[0].TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_408[0].TextData.Reference + 0x10))();
      }
    }
    else {
      pdVar28 = *ppvVar31;
      local_538 = ___xmm_3ff00000000000003ff0000000000000;
      lStack_530 = _UNK_150689688;
      local_528 = 0;
      lStack_520 = 0;
      local_4e0 = __real_4049000000000000;
      pdVar30 = pdVar28 + (longlong)iVar1 * 2;
      local_508 = __real_3f847ae147ae147b;
      local_548 = (undefined1  [4])0x10;
      local_544 = 0x43b40000;
      local_53c = 0;
      local_53a = 1;
      local_518 = 0;
      local_514 = 0x42c80000;
      local_510 = 0;
      local_500 = 1;
      local_4f8.Data = (FScriptContainerElement *)0x0;
      local_4f0 = 0;
      local_4ec = 0;
      local_4e8 = false;
      pUVar26 = pUVar29;
      while( true ) {
        uVar24 = (uint)pUVar26;
        if (*(int *)(ppvVar31 + 1) != iVar1) {
          local_5d8[0] = 0;
          `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_5d8);
          uVar24 = local_4f0;
        }
        if (pdVar28 == pdVar30) break;
        dStack_558 = pdVar28[1];
        local_560 = (double)fVar8 + *pdVar28;
        if (((local_4f8.Data <= (FScriptContainerElement *)&local_560) &&
            ((FScriptContainerElement *)&local_560 <
             local_4f8.Data + (longlong)(int)local_4ec * 0x10)) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), uVar24 = local_4f0, bVar23)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar24 == local_4ec) {
          uVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_4f8,(int *)&local_4ec);
        }
        local_4f0 = uVar24 + 1;
        pdVar28 = pdVar28 + 2;
        *(double *)(local_4f8.Data + (longlong)(int)uVar24 * 0x10) = local_560;
        *(double *)(local_4f8.Data + (longlong)(int)uVar24 * 0x10 + 8) = dStack_558;
        pUVar26 = (UDynamicMesh *)(ulonglong)(uVar24 + 1);
      }
      local_548 = (undefined1  [4])2;
      if (2 < local_5a8) {
        local_548 = (undefined1  [4])local_5a8;
      }
      dVar32 = (double)fVar4;
      if ((double)fVar4 <= __real_3f1a36e2eb1c432d) {
        dVar32 = __real_3f1a36e2eb1c432d;
      }
      local_544._4_4_ = (int)uVar6;
      local_544._0_4_ = (float)dVar32;
      local_4e0 = (double)fVar7;
      local_53c = CONCAT11((char)local_598,(char)uVar9);
      local_53a = local_3e8._1_1_;
      UE::Geometry::FSpiralRevolvePlanarPolygonGenerator::GenerateMesh
                ((FSpiralRevolvePlanarPolygonGenerator *)local_548,&local_378);
      if ((char)((ushort)uVar9 >> 8) != '\0') {
        if (0.0 <= fVar33) {
          if (__real_43340000 <= fVar33) {
            fVar33 = __real_43340000;
          }
        }
        else {
          fVar33 = 0.0;
        }
        local_588[0] = cosf(fVar33 * __real_3c8efa35);
        local_4c0.Mesh = &local_378;
        local_4c0.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4c0.Normals.ArrayNum = 0;
        local_4c0.Normals.ArrayMax = 0;
        UE::Geometry::FMeshNormals::Compute_Triangle(&local_4c0);
        pUVar26 = pUVar29;
        if (0 < ((local_378.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
          pUVar26 = *(UDynamicMesh **)
                     ((local_378.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
        }
        local_490 = &local_4c0.Normals;
        local_488 = local_588;
        local_478 = &local_490;
        local_480 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSpiralRevolvePolygon'::__l15::<lambda_1>,bool,int,int,int>
                    ::Call;
        UE::Geometry::TDynamicMeshOverlay<float,3>::CreateFromPredicate
                  ((TDynamicMeshOverlay<float,3> *)pUVar26,
                   (TFunctionRef<bool___cdecl(int,int,int)> *)&local_480,0.0);
        local_4d8.Mesh = &local_378;
        local_4d8.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4d8.Normals.ArrayNum = 0;
        local_4d8.Normals.ArrayMax = 0;
        pUVar26 = pUVar29;
        if (0 < ((local_378.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
          pUVar26 = *(UDynamicMesh **)
                     ((local_378.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
        }
        UE::Geometry::FMeshNormals::Compute_Overlay_FaceAvg
                  (&local_4d8,
                   (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pUVar26,true,true
                  );
        if (0 < ((local_378.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
          pUVar29 = *(UDynamicMesh **)
                     ((local_378.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
        }
        UE::Geometry::FMeshNormals::CopyToOverlay
                  (&local_4d8,
                   (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pUVar29,false);
        if (local_4d8.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d8.Normals.AllocatorInstance.Data);
        }
        if (local_4c0.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4c0.Normals.AllocatorInstance.Data);
        }
      }
      local_440 = &local_3d8;
      local_3d8 = dVar11;
      dStack_3d0 = dVar12;
      local_430 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_428 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_438 = &local_4a8;
      local_420 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_3c8 = dVar13;
      dStack_3c0 = dVar14;
      local_3b8 = uVar15;
      uStack_3b0 = uVar16;
      local_3a8 = dVar17;
      dStack_3a0 = dVar18;
      local_398 = uVar19;
      uStack_390 = uVar20;
      local_388 = dVar21;
      dStack_380 = dVar22;
      local_4a8 = uVar5;
      bVar23 = UDynamicMesh::IsEmpty(this);
      if (bVar23) {
        local_470 = &local_378;
        pTVar27 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_460;
        local_468 = &local_440;
        local_458 = &local_470;
        local_460 = UE::Core::Private::Function::
                    TFunctionRefCaller<`AppendPrimitiveMesh'::__l5::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                    ::Call;
      }
      else {
        `AppendPrimitiveMesh'::__l2::<lambda_1>::operator()(&local_440,&local_378);
        local_4a0 = &local_378;
        pTVar27 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_450;
        local_448 = &local_4a0;
        local_450 = UE::Core::Private::Function::
                    TFunctionRefCaller<`AppendPrimitiveMesh'::__l7::<lambda_3>,void,UE::Geometry::FDynamicMesh3_&>
                    ::Call;
      }
      UDynamicMesh::EditMesh(this,pTVar27,GeneralEdit,Unknown,false);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_378);
      if (local_4f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f8.Data);
      }
    }
  }
  *local_498 = this;
  if (local_570 != (void *)0x0) {
    FMemory::Free(local_570);
  }
  return;
}

// execAppendSweepPolygon @ 14ce83410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSweepPolygon
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  UDynamicMesh *pUVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auStackY_1b8 [32];
  int local_158;
  int local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  undefined2 local_140;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  int iStack_13c;
  UGeometryScriptDebug *local_138;
  UDynamicMesh *local_130;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_128;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_118;
  TTransform<double> local_108;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_130 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_140 = 1;
  uStack_13e = 0;
  iStack_13c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_140,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_140);
  }
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  pTVar5 = &local_118;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_158 = 0;
  pTVar4 = &local_128;
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  bVar6 = local_158 != 0;
  local_154 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_154,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_154);
  }
  bVar7 = local_154 != 0;
  local_144 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_144,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_144);
  }
  local_148 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_14c = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_14c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_14c);
  }
  local_150 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  local_138 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  FVar2.UVMode = uStack_13e;
  FVar2.PolygroupMode = (undefined1)local_140;
  FVar2.bFlipOrientation = (bool)local_140._1_1_;
  FVar2._3_1_ = uStack_13d;
  FVar2.MaterialID = iStack_13c;
  local_108.Rotation.XY.m128d_f64[0] = (double)local_a8._0_8_;
  local_108.Rotation.XY.m128d_f64[1] = (double)local_a8._8_8_;
  local_108.Rotation.ZW.m128d_f64[0] = (double)local_98._0_8_;
  local_108.Rotation.ZW.m128d_f64[1] = (double)local_98._8_8_;
  local_108.Translation.XY.m128d_f64[0] = (double)local_88._0_8_;
  local_108.Translation.XY.m128d_f64[1] = (double)local_88._8_8_;
  local_108.Translation.ZW.m128d_f64[0] = (double)local_78._0_8_;
  local_108.Translation.ZW.m128d_f64[1] = (double)local_78._8_8_;
  local_108.Scale3D.XY.m128d_f64[0] = (double)local_68._0_8_;
  local_108.Scale3D.XY.m128d_f64[1] = (double)local_68._8_8_;
  local_108.Scale3D.ZW.m128d_f64[0] = (double)local_58._0_8_;
  local_108.Scale3D.ZW.m128d_f64[1] = (double)local_58._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = AppendSweepPolygon(local_130,FVar2,&local_108,pTVar5,pTVar4,bVar6,bVar7,local_144,
                              local_148,local_14c,local_150,local_138);
  *(UDynamicMesh **)param_3 = pUVar3;
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  return;
}

// execAppendSweepPolyline @ 14ce838a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendSweepPolyline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  UDynamicMesh *pUVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  undefined1 auStackY_1f8 [32];
  int local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178 [2];
  undefined2 local_170;
  undefined1 uStack_16e;
  undefined1 uStack_16d;
  int iStack_16c;
  UGeometryScriptDebug *local_168;
  UDynamicMesh *local_160;
  TArray<float,TSizedDefaultAllocator<32>_> local_158;
  TArray<float,TSizedDefaultAllocator<32>_> local_148;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_138;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_128;
  undefined8 *local_118;
  TTransform<double> local_108;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_160 = (UDynamicMesh *)0x0;
  local_118 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  local_170 = 1;
  uStack_16e = 0;
  iStack_16c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  pTVar5 = &local_128;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  pTVar7 = &local_138;
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  pTVar6 = &local_148;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_188 = 0;
  pTVar4 = &local_158;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  bVar8 = local_188 != 0;
  local_178[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_178);
  }
  local_17c = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_17c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_17c);
  }
  local_180 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  local_184 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_184,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_184);
  }
  local_168 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  FVar2.UVMode = uStack_16e;
  FVar2.PolygroupMode = (undefined1)local_170;
  FVar2.bFlipOrientation = (bool)local_170._1_1_;
  FVar2._3_1_ = uStack_16d;
  FVar2.MaterialID = iStack_16c;
  local_108.Rotation.XY.m128d_f64[0] = (double)local_a8._0_8_;
  local_108.Rotation.XY.m128d_f64[1] = (double)local_a8._8_8_;
  local_108.Rotation.ZW.m128d_f64[0] = (double)local_98._0_8_;
  local_108.Rotation.ZW.m128d_f64[1] = (double)local_98._8_8_;
  local_108.Translation.XY.m128d_f64[0] = (double)local_88._0_8_;
  local_108.Translation.XY.m128d_f64[1] = (double)local_88._8_8_;
  local_108.Translation.ZW.m128d_f64[0] = (double)local_78._0_8_;
  local_108.Translation.ZW.m128d_f64[1] = (double)local_78._8_8_;
  local_108.Scale3D.XY.m128d_f64[0] = (double)local_68._0_8_;
  local_108.Scale3D.XY.m128d_f64[1] = (double)local_68._8_8_;
  local_108.Scale3D.ZW.m128d_f64[0] = (double)local_58._0_8_;
  local_108.Scale3D.ZW.m128d_f64[1] = (double)local_58._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = AppendSweepPolyline(local_160,FVar2,&local_108,pTVar5,pTVar7,pTVar6,pTVar4,bVar8,
                               local_178[0],local_17c,local_180,local_184,local_168);
  *local_118 = pUVar3;
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return;
}

// execAppendTorus @ 14ce83dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendTorus
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  UDynamicMesh *pUVar3;
  undefined1 auStackY_1a8 [32];
  EGeometryScriptPrimitiveOriginMode local_158 [4];
  int local_154;
  int local_150;
  float local_14c;
  float local_148 [2];
  undefined2 local_140;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  int iStack_13c;
  FGeometryScriptRevolveOptions local_138;
  UGeometryScriptDebug *local_120;
  UDynamicMesh *local_118 [2];
  FGeometryScriptRevolveOptions local_108;
  TTransform<double> local_e8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_118[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  local_140 = 1;
  uStack_13e = 0;
  iStack_13c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_140,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_140);
  }
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_138.RevolveDegrees = 360.0;
  local_138.DegreeOffset = 0.0;
  local_138.bReverseDirection = false;
  local_138.bHardNormals = false;
  local_138.HardNormalAngle = 30.0;
  local_138.bProfileAtMidpoint = false;
  local_138.bFillPartialRevolveEndcaps = true;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_148[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  local_14c = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_14c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_14c);
  }
  local_150 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  local_154 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_154,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_154);
  }
  local_158[0] = Center;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_158);
  }
  local_120 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_108._10_2_ = local_138._10_2_;
  local_108.bReverseDirection = local_138.bReverseDirection;
  local_108.bHardNormals = local_138.bHardNormals;
  local_108.HardNormalAngle = local_138.HardNormalAngle;
  FVar2.UVMode = uStack_13e;
  FVar2.PolygroupMode = (undefined1)local_140;
  FVar2.bFlipOrientation = (bool)local_140._1_1_;
  FVar2._3_1_ = uStack_13d;
  FVar2.MaterialID = iStack_13c;
  local_108.RevolveDegrees = local_138.RevolveDegrees;
  local_108.DegreeOffset = local_138.DegreeOffset;
  local_108.bProfileAtMidpoint = local_138.bProfileAtMidpoint;
  local_108.bFillPartialRevolveEndcaps = local_138.bFillPartialRevolveEndcaps;
  local_108._18_2_ = local_138._18_2_;
  local_e8.Rotation.XY.m128d_f64[0] = (double)local_88._0_8_;
  local_e8.Rotation.XY.m128d_f64[1] = (double)local_88._8_8_;
  local_e8.Rotation.ZW.m128d_f64[0] = (double)local_78._0_8_;
  local_e8.Rotation.ZW.m128d_f64[1] = (double)local_78._8_8_;
  local_e8.Translation.XY.m128d_f64[0] = (double)local_68._0_8_;
  local_e8.Translation.XY.m128d_f64[1] = (double)local_68._8_8_;
  local_e8.Translation.ZW.m128d_f64[0] = (double)local_58._0_8_;
  local_e8.Translation.ZW.m128d_f64[1] = (double)local_58._8_8_;
  local_e8.Scale3D.XY.m128d_f64[0] = (double)local_48._0_8_;
  local_e8.Scale3D.XY.m128d_f64[1] = (double)local_48._8_8_;
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)local_38._0_8_;
  local_e8.Scale3D.ZW.m128d_f64[1] = (double)local_38._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = AppendTorus(local_118[0],FVar2,&local_e8,&local_108,local_148[0],local_14c,local_150,
                       local_154,local_158[0],local_120);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execAppendTriangulatedPolygon3D @ 14ce84190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendTriangulatedPolygon3D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined1 auVar2 [16];
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  UGeometryScriptDebug *pUVar10;
  TDynamicMeshOverlay<float,2> *pTVar11;
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
  bool bVar22;
  uint uVar23;
  int iVar24;
  FText *pFVar25;
  ulonglong uVar26;
  int iVar27;
  TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *pTVar28;
  uint uVar29;
  ForAnyElementType FVar31;
  uint uVar32;
  UDynamicMesh *pUVar33;
  UDynamicMesh *pUVar34;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar35;
  FScriptContainerElement *pFVar36;
  UDynamicMesh *pUVar37;
  double dVar38;
  double dVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 auStack_608 [32];
  undefined1 local_5d8;
  undefined1 local_5d7 [7];
  undefined2 local_5d0;
  undefined1 uStack_5ce;
  undefined1 uStack_5cd;
  undefined4 uStack_5cc;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_5c8;
  undefined8 local_5b8;
  UGeometryScriptDebug *local_5b0;
  UDynamicMesh *local_5a8;
  TDynamicMeshOverlay<float,2> *local_5a0;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_598;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_588;
  FIndex3i_u_0 local_578;
  float local_568;
  float local_564;
  float local_560;
  float local_55c;
  float local_558;
  TDynamicMeshOverlay<float,3> *local_550;
  TDynamicMeshOverlay<float,3> *local_548;
  UDynamicMesh *local_540;
  FDynamicMesh3 *local_538;
  ulonglong *local_530;
  TVector<double>_u_0 local_528;
  FDynamicMesh3 *local_510;
  undefined8 **local_508;
  code *local_500;
  FDynamicMesh3 **local_4f8;
  code *local_4f0;
  FDynamicMesh3 **local_4e8;
  TVector<double>_u_0 local_4e0;
  undefined8 local_4c8;
  float local_4c0;
  undefined8 local_4bc;
  float local_4b4;
  TVector2<float>_u_0 local_4b0;
  undefined2 local_4a8;
  undefined1 local_4a6;
  TVector<double>_u_0 local_4a0;
  TVector<double>_u_0 local_488;
  undefined8 *local_470;
  TDynamicMeshOverlay<float,3> **local_468;
  double local_460;
  double dStack_458;
  double local_450;
  FText local_448;
  FText local_438;
  undefined8 local_428;
  undefined8 uStack_420;
  TVector<double>_u_0 local_418;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  double local_388;
  FDynamicMesh3 local_378;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  ulonglong local_e8;
  UDynamicMesh *pUVar30;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_608;
  pUVar33 = (UDynamicMesh *)0x0;
  local_5a8 = (UDynamicMesh *)0x0;
  local_530 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5a8);
  }
  local_5d0 = 1;
  uStack_5ce = 0;
  uVar32 = 0;
  uStack_5cc = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5d0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5d0);
  }
  local_148._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_148._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_148._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_138._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_138._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_138._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_128._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_118._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  local_588.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_588.ArrayNum = 0;
  local_588.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_588,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_588);
  }
  local_5b0 = (UGeometryScriptDebug *)0x0;
  pTVar35 = &local_588;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar35 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
              param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_5b0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_5b0);
  }
  pUVar30 = local_5a8;
  pUVar10 = local_5b0;
  uVar12 = local_148._0_8_;
  uVar13 = local_148._8_8_;
  uVar14 = local_138._0_8_;
  uVar15 = local_138._8_8_;
  uVar16 = local_128._0_8_;
  uVar17 = local_128._8_8_;
  uVar18 = local_118._0_8_;
  uVar19 = local_118._8_8_;
  uVar20 = local_108._0_8_;
  uVar21 = local_108._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_5b8 = (TDynamicMeshOverlay<float,3> *)
              CONCAT44(uStack_5cc,CONCAT13(uStack_5cd,CONCAT12(uStack_5ce,local_5d0)));
  local_550 = local_5b8;
  local_428 = local_f8._0_8_;
  uStack_420 = local_f8._8_8_;
  local_540 = local_5a8;
  if (local_5a8 == (UDynamicMesh *)0x0) {
    pFVar25 = FText::AsLocalizable_Advanced_LocText
                        (&local_448,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"AppendTriangulatedPolygon3D_InvalidInput",
                         L"AppendTriangulatedPolygon3D: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar10,InvalidInputs,pFVar25);
    pUVar30 = pUVar33;
    if (local_448.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_448.TextData.Reference + 0x10))();
    }
  }
  else if (pTVar35->ArrayNum < 3) {
    pFVar25 = FText::AsLocalizable_Advanced_LocText
                        (&local_438,L"UGeometryScriptLibrary_MeshPrimitiveFunctions",
                         L"AppendTriangulatedPolygon3D_InvalidPolygon",
                         L"AppendTriangulatedPolygon3D: PolygonVertices array requires at least 3 positions"
                        );
    UE::Geometry::AppendError(pUVar10,InvalidInputs,pFVar25);
    if (local_438.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
    }
  }
  else {
    local_418._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_418._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_418._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    PolygonTriangulation::ComputePolygonPlane<double>
              (pTVar35,(TVector<double> *)&local_528._s_0,(TVector<double> *)&local_418._s_0);
    UE::Geometry::VectorUtil::MakePerpVectors<double>
              ((TVector<double> *)&local_528._s_0,(TVector<double> *)&local_4a0._s_0,
               (TVector<double> *)&local_488._s_0);
    local_5c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5c8.ArrayNum = 0;
    local_5c8.ArrayMax = 0;
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_5c8,pTVar35->ArrayNum,Default);
    iVar27 = pTVar35->ArrayNum;
    pUVar30 = pUVar33;
    pUVar34 = pUVar33;
    pUVar37 = pUVar33;
    if (0 < iVar27) {
      do {
        uVar29 = (uint)pUVar30;
        uVar23 = uVar32;
        if ((int)uVar29 < iVar27) {
          uVar23 = ~uVar29 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (pTVar35->AllocatorInstance).Data;
        pFVar36 = (FScriptContainerElement *)((longlong)&pUVar34->_padding_ + (longlong)pFVar4);
        dVar38 = *(double *)pFVar36;
        dVar8 = *(double *)(pFVar36 + 8);
        local_388 = *(double *)((longlong)&pUVar34->_padding_ + (longlong)pFVar4);
        dVar6 = local_4a0._s_0.X * dVar38;
        uVar23 = uVar32;
        if ((int)uVar29 < local_5c8.ArrayNum) {
          uVar23 = ~uVar29 >> 0x1f;
        }
        dVar7 = local_4a0._s_0.Z * local_388;
        dVar38 = dVar38 * local_488._s_0.X;
        dVar9 = local_4a0._s_0.Y * dVar8;
        dVar8 = dVar8 * local_488._s_0.Y;
        dVar39 = local_388 * local_488._s_0.Z;
        if ((uVar23 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(double *)(local_5c8.AllocatorInstance.Data + (longlong)&pUVar37->_padding_) =
             dVar9 + dVar6 + dVar7;
        *(double *)((longlong)&pUVar37->_padding_ + local_5c8.AllocatorInstance.Data) =
             dVar8 + dVar38 + dVar39;
        iVar27 = pTVar35->ArrayNum;
        pUVar30 = (UDynamicMesh *)(ulonglong)(uVar29 + 1);
        pUVar34 = (UDynamicMesh *)&pUVar34->_padding_;
        pUVar37 = (UDynamicMesh *)&pUVar37->_padding_;
      } while ((int)(uVar29 + 1) < iVar27);
    }
    local_598.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_598.ArrayNum = 0;
    local_598.ArrayMax = 0;
    PolygonTriangulation::TriangulateSimplePolygon<double>(&local_5c8,&local_598,false);
    iVar27 = local_5c8.ArrayNum;
    uVar26 = (ulonglong)local_5c8.ArrayNum;
    uVar44 = (undefined4)__real_7fefffffffffffff;
    uVar45 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    uVar40 = (undefined4)__real_ffefffffffffffff;
    uVar41 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
    pFVar36 = local_5c8.AllocatorInstance.Data + uVar26 * 0x10;
    FVar31.Data = local_5c8.AllocatorInstance.Data;
    uVar42 = uVar40;
    uVar43 = uVar41;
    uVar46 = uVar44;
    uVar47 = uVar45;
    while( true ) {
      if ((int)uVar26 != iVar27) {
        local_5d8 = 0;
        `TCheckedPointerIterator<UE::Math::TVector2<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_5d8);
        uVar26 = local_5c8._8_8_ & 0xffffffff;
      }
      if (FVar31.Data == pFVar36) break;
      auVar2 = *(undefined1 (*) [16])FVar31.Data;
      dVar6 = auVar2._0_8_;
      if (dVar6 < (double)CONCAT44(uVar45,uVar44)) {
        uVar44 = auVar2._0_4_;
        uVar45 = auVar2._4_4_;
      }
      if ((double)CONCAT44(uVar43,uVar42) <= dVar6 && dVar6 != (double)CONCAT44(uVar43,uVar42)) {
        uVar42 = auVar2._0_4_;
        uVar43 = auVar2._4_4_;
      }
      dVar6 = auVar2._8_8_;
      if (dVar6 < (double)CONCAT44(uVar47,uVar46)) {
        uVar46 = auVar2._8_4_;
        uVar47 = auVar2._12_4_;
      }
      if ((double)CONCAT44(uVar41,uVar40) <= dVar6 && dVar6 != (double)CONCAT44(uVar41,uVar40)) {
        uVar40 = auVar2._8_4_;
        uVar41 = auVar2._12_4_;
      }
      FVar31.Data = FVar31.Data + 0x10;
    }
    dVar6 = __real_3f847ae147ae147b;
    if (local_5b8._2_1_ == '\x01') {
      dVar6 = (double)CONCAT44(uVar41,uVar40) - (double)CONCAT44(uVar47,uVar46);
      dVar8 = (double)CONCAT44(uVar43,uVar42) - (double)CONCAT44(uVar45,uVar44);
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
      if (dVar8 <= 0.0) {
        dVar8 = 0.0;
      }
      if (dVar6 <= dVar8) {
        dVar6 = dVar8;
      }
      if (dVar6 <= __real_3e45798ee2308c3a) {
        dVar6 = __real_3e45798ee2308c3a;
      }
      dVar6 = __real_3ff0000000000000 / dVar6;
    }
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_378);
    UE::Geometry::FDynamicMesh3::EnableAttributes(&local_378);
    if (((local_378.AttributeSet.Ptr)->UVLayers).Array.ArrayNum < 1) {
      local_5a0 = (TDynamicMeshOverlay<float,2> *)0x0;
    }
    else {
      local_5a0 = *(TDynamicMeshOverlay<float,2> **)
                   ((local_378.AttributeSet.Ptr)->UVLayers).Array.AllocatorInstance.Data;
    }
    pTVar11 = local_5a0;
    if (((local_378.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum < 1) {
      local_5b8 = (TDynamicMeshOverlay<float,3> *)0x0;
    }
    else {
      local_5b8 = *(TDynamicMeshOverlay<float,3> **)
                   ((local_378.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
    }
    iVar27 = pTVar35->ArrayNum;
    local_560 = (float)local_528._s_0.X;
    local_55c = (float)local_528._s_0.Y;
    local_558 = (float)local_528._s_0.Z;
    pUVar30 = pUVar33;
    pUVar34 = pUVar33;
    if (0 < iVar27) {
      do {
        uVar29 = (uint)pUVar30;
        uVar23 = uVar32;
        if ((int)uVar29 < iVar27) {
          uVar23 = ~uVar29 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (pTVar35->AllocatorInstance).Data;
        local_4a8 = 0;
        local_4a6 = 0;
        pFVar36 = (FScriptContainerElement *)((longlong)&pUVar33->_padding_ + (longlong)pFVar4);
        local_4e0._s_0.X = (double)*(undefined8 *)pFVar36;
        local_4e0._s_0.Y = (double)*(undefined8 *)(pFVar36 + 8);
        local_4e0._s_0.Z = (double)*(undefined8 *)((longlong)&pUVar33->_padding_ + (longlong)pFVar4)
        ;
        local_4c0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_4b4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_4c8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_4bc = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_4b0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        UE::Geometry::FDynamicMesh3::AppendVertex(&local_378,(FVertexInfo *)&local_4e0._s_0);
        UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement(local_5b8,&local_560);
        uVar23 = uVar32;
        if ((int)uVar29 < local_5c8.ArrayNum) {
          uVar23 = ~uVar29 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_568 = (float)((*(double *)
                              (local_5c8.AllocatorInstance.Data + (longlong)&pUVar34->_padding_) -
                            (double)CONCAT44(uVar45,uVar44)) * dVar6);
        local_564 = (float)((*(double *)
                              ((longlong)&pUVar34->_padding_ + local_5c8.AllocatorInstance.Data) -
                            (double)CONCAT44(uVar47,uVar46)) * dVar6);
        UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(pTVar11,&local_568);
        iVar27 = pTVar35->ArrayNum;
        pUVar33 = (UDynamicMesh *)&pUVar33->_padding_;
        pUVar30 = (UDynamicMesh *)(ulonglong)(uVar29 + 1);
        pUVar34 = (UDynamicMesh *)&pUVar34->_padding_;
      } while ((int)(uVar29 + 1) < iVar27);
    }
    pTVar11 = local_5a0;
    iVar27 = local_598.ArrayNum;
    uVar26 = (ulonglong)local_598.ArrayNum;
    pFVar36 = local_598.AllocatorInstance.Data + uVar26 * 0xc;
    FVar31.Data = local_598.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar26 != iVar27) {
        `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_5d7);
      }
      pUVar30 = local_540;
      if (FVar31.Data == pFVar36) break;
      local_578._0_8_ = *(undefined8 *)FVar31.Data;
      local_578._s_0.C = *(undefined4 *)(FVar31.Data + 8);
      iVar24 = UE::Geometry::FDynamicMesh3::AppendTriangle(&local_378,(FIndex3i *)&local_578._s_0,0)
      ;
      if (-1 < iVar24) {
        UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                  (pTVar11,iVar24,(FIndex3i *)&local_578._s_0,false);
        UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                  (local_5b8,iVar24,(FIndex3i *)&local_578._s_0,false);
      }
      uVar26 = local_598._8_8_ & 0xffffffff;
      FVar31.Data = FVar31.Data + 0xc;
    }
    local_470 = &local_3f8;
    local_3a8 = local_428;
    uStack_3a0 = uStack_420;
    local_548 = local_550;
    local_460 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_458 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_468 = &local_548;
    local_450 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_3f8 = uVar12;
    uStack_3f0 = uVar13;
    local_3e8 = uVar14;
    uStack_3e0 = uVar15;
    local_3d8 = uVar16;
    uStack_3d0 = uVar17;
    local_3c8 = uVar18;
    uStack_3c0 = uVar19;
    local_3b8 = uVar20;
    uStack_3b0 = uVar21;
    bVar22 = UDynamicMesh::IsEmpty(local_540);
    if (bVar22) {
      local_510 = &local_378;
      pTVar28 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_500;
      local_508 = &local_470;
      local_4f8 = &local_510;
      local_500 = UE::Core::Private::Function::
                  TFunctionRefCaller<`AppendPrimitiveMesh'::__l5::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
    }
    else {
      `AppendPrimitiveMesh'::__l2::<lambda_1>::operator()(&local_470,&local_378);
      local_538 = &local_378;
      pTVar28 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_4f0;
      local_4e8 = &local_538;
      local_4f0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`AppendPrimitiveMesh'::__l7::<lambda_3>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
    }
    UDynamicMesh::EditMesh(pUVar30,pTVar28,GeneralEdit,Unknown,false);
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_378);
    if (local_598.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.AllocatorInstance.Data);
    }
    if (local_5c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c8.AllocatorInstance.Data);
    }
  }
  *local_530 = (ulonglong)pUVar30;
  if (local_588.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.AllocatorInstance.Data);
  }
  return;
}

// execAppendTriangulatedPolygon @ 14ce84ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendTriangulatedPolygon
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  UDynamicMesh *pUVar3;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  undefined1 auStackY_158 [32];
  int local_128 [2];
  undefined2 local_120;
  undefined1 uStack_11e;
  undefined1 uStack_11d;
  int iStack_11c;
  UGeometryScriptDebug *local_118;
  UDynamicMesh *local_110;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_108;
  TTransform<double> local_f8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_110 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_120 = 1;
  uStack_11e = 0;
  iStack_11c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_128[0] = 0;
  pTVar4 = &local_108;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  bVar5 = local_128[0] != 0;
  local_118 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  FVar2.UVMode = uStack_11e;
  FVar2.PolygroupMode = (undefined1)local_120;
  FVar2.bFlipOrientation = (bool)local_120._1_1_;
  FVar2._3_1_ = uStack_11d;
  FVar2.MaterialID = iStack_11c;
  local_f8.Rotation.XY.m128d_f64[0] = (double)local_98._0_8_;
  local_f8.Rotation.XY.m128d_f64[1] = (double)local_98._8_8_;
  local_f8.Rotation.ZW.m128d_f64[0] = (double)local_88._0_8_;
  local_f8.Rotation.ZW.m128d_f64[1] = (double)local_88._8_8_;
  local_f8.Translation.XY.m128d_f64[0] = (double)local_78._0_8_;
  local_f8.Translation.XY.m128d_f64[1] = (double)local_78._8_8_;
  local_f8.Translation.ZW.m128d_f64[0] = (double)local_68._0_8_;
  local_f8.Translation.ZW.m128d_f64[1] = (double)local_68._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f8.Scale3D.XY.m128d_f64[0] = (double)local_58._0_8_;
  local_f8.Scale3D.XY.m128d_f64[1] = (double)local_58._8_8_;
  local_f8.Scale3D.ZW.m128d_f64[0] = (double)local_48._0_8_;
  local_f8.Scale3D.ZW.m128d_f64[1] = (double)local_48._8_8_;
  pUVar3 = AppendTriangulatedPolygon(local_110,FVar2,&local_f8,pTVar4,bVar5,local_118);
  *(UDynamicMesh **)param_3 = pUVar3;
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return;
}

// execAppendVoronoiDiagram2D @ 14ce84e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execAppendVoronoiDiagram2D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPrimitiveOptions FVar2;
  UGeometryScriptDebug *pUVar3;
  void *_Src;
  UDynamicMesh *pUVar4;
  longlong lVar5;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  undefined1 auStackY_218 [32];
  undefined2 local_1d8;
  undefined1 uStack_1d6;
  undefined1 uStack_1d5;
  int iStack_1d4;
  UGeometryScriptDebug *local_1d0;
  UDynamicMesh *local_1c8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_1c0;
  FGeometryScriptVoronoiOptions local_1b0;
  TTransform<double> local_158;
  float local_f8 [2];
  double local_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double local_c8;
  undefined1 local_c0;
  undefined4 uStack_bf;
  undefined2 uStack_bb;
  uchar uStack_b9;
  void *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1c8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  local_1d8 = 1;
  uStack_1d6 = 0;
  iStack_1d4 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0.ArrayNum = 0;
  local_1c0.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c0);
  }
  local_f8[0] = 0.0;
  local_c0 = 0;
  pTVar6 = &local_1c0;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  local_f0 = 0.0;
  local_c8 = 0.0;
  uStack_bf = 0;
  uStack_bb = 0;
  uStack_b9 = '\0';
  dStack_e8 = 0.0;
  dStack_e0 = 0.0;
  dStack_d8 = 0.0;
  dStack_d0 = 0.0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_1d0 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d0);
  }
  _Src = local_b8;
  pUVar3 = local_1d0;
  local_1b0.BoundsExpand = local_f8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_b0;
  local_1b0.CreateCells.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.CreateCells.ArrayNum = (int)local_b0;
  local_1b0.Bounds.Min.field0_0x0._s_0.X = local_f0;
  local_1b0.Bounds.Min.field0_0x0._s_0.Y = dStack_e8;
  local_1b0.Bounds.Min.field0_0x0._s_0.Z = dStack_e0;
  local_1b0.Bounds.Max.field0_0x0._s_0.X = dStack_d8;
  local_1b0.Bounds.Pad[0] = (undefined1)uStack_bf;
  local_1b0.Bounds.Pad[1] = uStack_bf._1_1_;
  local_1b0.Bounds.Pad[2] = uStack_bf._2_1_;
  local_1b0.Bounds.Pad[3] = uStack_bf._3_1_;
  local_1b0.Bounds.IsValid = local_c0;
  local_1b0.Bounds.Pad[4] = (undefined1)uStack_bb;
  local_1b0.Bounds.Pad[5] = uStack_bb._1_1_;
  local_1b0.Bounds.Pad[6] = uStack_b9;
  local_1b0.Bounds.Max.field0_0x0._s_0.Y = dStack_d0;
  local_1b0.Bounds.Max.field0_0x0._s_0.Z = local_c8;
  if ((int)local_b0 == 0) {
    local_1b0.CreateCells.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_b0,0,&local_1b0.CreateCells.AllocatorInstance,(int)local_b0,
               &local_1b0.CreateCells.ArrayMax);
    memcpy(local_1b0.CreateCells.AllocatorInstance.Data,_Src,lVar5 << 2);
  }
  FVar2.UVMode = uStack_1d6;
  FVar2.PolygroupMode = (undefined1)local_1d8;
  FVar2.bFlipOrientation = (bool)local_1d8._1_1_;
  FVar2._3_1_ = uStack_1d5;
  FVar2.MaterialID = iStack_1d4;
  local_158.Rotation.XY.m128d_f64[0] = (double)local_98._0_8_;
  local_158.Rotation.XY.m128d_f64[1] = (double)local_98._8_8_;
  local_158.Rotation.ZW.m128d_f64[0] = (double)local_88._0_8_;
  local_158.Rotation.ZW.m128d_f64[1] = (double)local_88._8_8_;
  local_158.Translation.XY.m128d_f64[0] = (double)local_78._0_8_;
  local_158.Translation.XY.m128d_f64[1] = (double)local_78._8_8_;
  local_158.Translation.ZW.m128d_f64[0] = (double)local_68._0_8_;
  local_158.Translation.ZW.m128d_f64[1] = (double)local_68._8_8_;
  local_1b0.bIncludeBoundary = (bool)local_a8;
  local_158.Scale3D.XY.m128d_f64[0] = (double)local_58._0_8_;
  local_158.Scale3D.XY.m128d_f64[1] = (double)local_58._8_8_;
  local_158.Scale3D.ZW.m128d_f64[0] = (double)local_48._0_8_;
  local_158.Scale3D.ZW.m128d_f64[1] = (double)local_48._8_8_;
  pUVar4 = AppendVoronoiDiagram2D(local_1c8,FVar2,&local_158,pTVar6,&local_1b0,pUVar3);
  *(UDynamicMesh **)param_3 = pUVar4;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.AllocatorInstance.Data);
  }
  return;
}

// execCreateConstrainedEdgesChain @ 14ce8dd30

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execCreateConstrainedEdgesChain
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  FProperty *pFVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_res10 [2];
  undefined4 local_res20 [2];
  ForAnyElementType local_28;
  int local_20;
  int iStack_1c;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  iVar5 = local_res10[0];
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  iStack_1c = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (1 < local_res10[0]) {
    uVar1 = local_res10[0] - 1;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar1,&local_28,0,&iStack_1c);
    }
    if (1 < iVar5) {
      iVar6 = 1;
      do {
        if (local_20 == iStack_1c) {
          local_20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_28,&iStack_1c);
        }
        iVar4 = local_20 + 1;
        *(int *)(local_28.Data + (longlong)local_20 * 8 + 4) = iVar6;
        iVar2 = iVar6 + -1;
        iVar6 = iVar6 + 1;
        *(int *)(local_28.Data + (longlong)local_20 * 8) = iVar2;
        local_20 = iVar4;
      } while (iVar6 < iVar5);
    }
  }
  if (param_3 != &local_28) {
    iVar5 = local_20;
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
      iVar5 = local_20;
    }
    *(FScriptContainerElement **)param_3 = local_28.Data;
    *(int *)((longlong)param_3 + 0xc) = iStack_1c;
    local_20 = 0;
    iStack_1c = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = iVar5;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// execCreateConstrainedEdgesLoop @ 14ce8ded0

void __cdecl
UGeometryScriptLibrary_MeshPrimitiveFunctions::execCreateConstrainedEdgesLoop
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_res10 [2];
  int local_res20 [2];
  ForAnyElementType local_38;
  int local_30;
  int iStack_2c;
  
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
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar4 = local_res20[0];
  iVar3 = local_res10[0];
  local_30 = 0;
  iStack_2c = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38.Data = (FScriptContainerElement *)0x0;
  if (2 < local_res20[0]) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_res20[0],&local_38,0,&iStack_2c);
    iVar6 = iVar4 + -1;
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        iVar7 = iVar5;
        if (local_30 == iStack_2c) {
          local_30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_38,&iStack_2c);
        }
        iVar1 = local_30 + 1;
        *(int *)(local_38.Data + (longlong)local_30 * 8) = iVar6 + iVar3;
        *(int *)(local_38.Data + (longlong)local_30 * 8 + 4) = iVar7 + iVar3;
        iVar5 = iVar7 + 1;
        iVar6 = iVar7;
        local_30 = iVar1;
      } while (iVar7 + 1 < iVar4);
    }
  }
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data;
    *(int *)((longlong)param_3 + 8) = local_30;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = iStack_2c;
    local_30 = 0;
    iStack_2c = 0;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

