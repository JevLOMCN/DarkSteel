// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FractureEngine
// Functions: 23

// operator() @ 14e803c10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FFractureEngineFracturing::MeshArrayCutter'::__l12::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  float fVar1;
  double *pdVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong lVar5;
  ForAnyElementType *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  int local_128 [2];
  TArrayView<int_const_,int> local_120;
  TTransform<double> local_108;
  TOptional<UE::Math::TTransform<double>_> local_a8;
  
  bVar9 = *(bool *)((longlong)this + 0x24);
  local_a8.TypedValue.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_a8.TypedValue.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  fVar1 = *(float *)((longlong)this + 0x20);
  local_a8.TypedValue.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_a8.TypedValue.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_a8.TypedValue.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_a8.TypedValue.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_a8.bIsSet = true;
  local_120.DataPtr = (int *)**(undefined8 **)((longlong)this + 0x18);
  iVar11 = *(int *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  if ((iVar11 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pdVar2 = *(double **)this;
  local_108.Rotation.XY.m128d_f64[0] = *pdVar2;
  local_108.Rotation.XY.m128d_f64[1] = pdVar2[1];
  local_108.Rotation.ZW.m128d_f64[0] = pdVar2[2];
  local_108.Rotation.ZW.m128d_f64[1] = pdVar2[3];
  local_108.Translation.XY.m128d_f64[0] = pdVar2[4];
  local_108.Translation.XY.m128d_f64[1] = pdVar2[5];
  local_108.Translation.ZW.m128d_f64[0] = pdVar2[6];
  local_108.Translation.ZW.m128d_f64[1] = pdVar2[7];
  local_108.Scale3D.XY.m128d_f64[0] = pdVar2[8];
  local_108.Scale3D.XY.m128d_f64[1] = pdVar2[9];
  local_108.Scale3D.ZW.m128d_f64[0] = pdVar2[10];
  local_108.Scale3D.ZW.m128d_f64[1] = pdVar2[0xb];
  local_120.ArrayNum = iVar11;
  uVar10 = CutWithMesh(param_1,&local_108,*(FInternalSurfaceMaterials **)((longlong)this + 8),
                       (FGeometryCollection *)**(undefined8 **)((longlong)this + 0x10),&local_120,
                       (double)fVar1,&local_a8,true,(FProgressCancel *)0x0,bVar9);
  UE::Private::FractureHelpers::ProcessNewlyFracturedBones
            ((FGeometryCollection *)**(undefined8 **)((longlong)this + 0x10),uVar10,-1);
  puVar3 = *(undefined8 **)((longlong)this + 0x10);
  piVar4 = (int *)**(undefined8 **)((longlong)this + 0x18);
  piVar13 = piVar4 + *(int *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  piVar12 = piVar4;
  while (piVar12 != piVar13) {
    bVar9 = FGeometryCollection::IsVisible((FGeometryCollection *)*puVar3,*piVar12);
    if (bVar9) {
      piVar12 = piVar12 + 1;
    }
    else {
      do {
        piVar13 = piVar13 + -1;
        if (piVar12 == piVar13) goto LAB_14e803db1;
        bVar9 = FGeometryCollection::IsVisible((FGeometryCollection *)*puVar3,*piVar13);
      } while (!bVar9);
      *piVar12 = *piVar13;
      piVar12 = piVar12 + 1;
    }
  }
LAB_14e803db1:
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (*(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18),
             (int)((longlong)piVar12 - (longlong)piVar4 >> 2),Default);
  if (**(uint **)((longlong)this + 0x28) == 0xffffffff) {
    **(uint **)((longlong)this + 0x28) = uVar10;
  }
  if (-1 < (int)uVar10) {
    lVar5 = **(longlong **)((longlong)this + 0x10);
    uVar14 = 0;
    if ((int)uVar10 < *(int *)(lVar5 + 0x3b8)) {
      uVar14 = ~uVar10 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_128[0] = *(int *)(*(longlong *)(lVar5 + 0x3b0) + (longlong)(int)uVar10 * 4);
    iVar11 = FManagedArrayCollection::NumElements
                       ((FManagedArrayCollection *)**(undefined8 **)((longlong)this + 0x10),
                        FTransformCollection::TransformGroup);
    if (local_128[0] < iVar11) {
      do {
        pFVar6 = *(ForAnyElementType **)((longlong)this + 0x18);
        if (((pFVar6->Data <= (FScriptContainerElement *)local_128) &&
            ((FScriptContainerElement *)local_128 <
             pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 4)) &&
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
        iVar11 = *(int *)&pFVar6[1].Data;
        piVar4 = (int *)((longlong)&pFVar6[1].Data + 4);
        if (iVar11 == *piVar4) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,pFVar6,piVar4);
        }
        *(int *)&pFVar6[1].Data = iVar11 + 1;
        *(int *)(pFVar6->Data + (longlong)iVar11 * 4) = local_128[0];
        local_128[0] = local_128[0] + 1;
        iVar11 = FManagedArrayCollection::NumElements
                           ((FManagedArrayCollection *)**(undefined8 **)((longlong)this + 0x10),
                            FTransformCollection::TransformGroup);
      } while (local_128[0] < iVar11);
    }
  }
  return;
}

// AddBoxEdges @ 14e804660

void __cdecl
FFractureEngineFracturing::AddBoxEdges
          (TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
           *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FScriptContainerElement *pFVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  longlong lVar15;
  
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  uVar9 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar10 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x14);
  uVar2 = *(undefined8 *)&param_2->field0_0x0;
  uVar11 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
  uVar12 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
  iVar14 = param_1->ArrayNum;
  uVar3 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  if (iVar14 == param_1->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar14 + 1;
  lVar15 = (longlong)iVar14;
  pFVar8 = (param_1->AllocatorInstance).Data;
  *(double *)(pFVar8 + lVar15 * 0x30) = dVar4;
  *(double *)(pFVar8 + lVar15 * 0x30 + 8) = dVar5;
  pFVar1 = pFVar8 + lVar15 * 0x30 + 0x10;
  *(undefined4 *)pFVar1 = uVar9;
  *(undefined4 *)(pFVar1 + 4) = uVar10;
  *(int *)(pFVar1 + 8) = (int)uVar2;
  *(int *)(pFVar1 + 0xc) = (int)((ulonglong)uVar2 >> 0x20);
  pFVar8 = pFVar8 + lVar15 * 0x30 + 0x20;
  *(undefined4 *)pFVar8 = uVar11;
  *(undefined4 *)(pFVar8 + 4) = uVar12;
  *(int *)(pFVar8 + 8) = (int)uVar3;
  *(int *)(pFVar8 + 0xc) = (int)((ulonglong)uVar3 >> 0x20);
  iVar14 = param_1->ArrayNum;
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  uVar9 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar10 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x14);
  uVar2 = *(undefined8 *)&param_2->field0_0x0;
  uVar11 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uVar12 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  uVar3 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
  if (iVar14 == param_1->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar14 + 1;
  lVar15 = (longlong)iVar14;
  pFVar8 = (param_1->AllocatorInstance).Data;
  *(double *)(pFVar8 + lVar15 * 0x30) = dVar4;
  *(double *)(pFVar8 + lVar15 * 0x30 + 8) = dVar5;
  pFVar1 = pFVar8 + lVar15 * 0x30 + 0x10;
  *(undefined4 *)pFVar1 = uVar9;
  *(undefined4 *)(pFVar1 + 4) = uVar10;
  *(int *)(pFVar1 + 8) = (int)uVar2;
  *(int *)(pFVar1 + 0xc) = (int)((ulonglong)uVar2 >> 0x20);
  pFVar8 = pFVar8 + lVar15 * 0x30 + 0x20;
  *(undefined4 *)pFVar8 = uVar11;
  *(undefined4 *)(pFVar8 + 4) = uVar12;
  *(int *)(pFVar8 + 8) = (int)uVar3;
  *(int *)(pFVar8 + 0xc) = (int)((ulonglong)uVar3 >> 0x20);
  iVar14 = param_1->ArrayNum;
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_3->field0_0x0)._s_0.Y;
  dVar6 = (param_2->field0_0x0)._s_0.Z;
  dVar7 = (param_3->field0_0x0)._s_0.Z;
  if (iVar14 == param_1->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar15 = (longlong)iVar14;
  param_1->ArrayNum = iVar14 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(double *)(pFVar1 + lVar15 * 0x30) = dVar4;
  *(double *)(pFVar1 + lVar15 * 0x30 + 8) = dVar5;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x10) = dVar7;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x18) = dVar4;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x20) = dVar5;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x28) = dVar6;
  iVar14 = param_1->ArrayNum;
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  dVar6 = (param_3->field0_0x0)._s_0.Z;
  dVar7 = (param_3->field0_0x0)._s_0.Y;
  if (iVar14 == param_1->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar15 = (longlong)iVar14;
  param_1->ArrayNum = iVar14 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(double *)(pFVar1 + lVar15 * 0x30) = dVar4;
  *(double *)(pFVar1 + lVar15 * 0x30 + 8) = dVar7;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x10) = dVar6;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x18) = dVar4;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x20) = dVar5;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x28) = dVar6;
  iVar14 = param_1->ArrayNum;
  dVar4 = (param_3->field0_0x0)._s_0.X;
  dVar5 = (param_3->field0_0x0)._s_0.Y;
  dVar6 = (param_2->field0_0x0)._s_0.Z;
  dVar7 = (param_2->field0_0x0)._s_0.Y;
  if (iVar14 == param_1->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar15 = (longlong)iVar14;
  param_1->ArrayNum = iVar14 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(double *)(pFVar1 + lVar15 * 0x30) = dVar4;
  *(double *)(pFVar1 + lVar15 * 0x30 + 8) = dVar7;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x10) = dVar6;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x18) = dVar4;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x20) = dVar5;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x28) = dVar6;
  iVar14 = param_1->ArrayNum;
  dVar4 = (param_3->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  dVar6 = (param_3->field0_0x0)._s_0.Z;
  dVar7 = (param_2->field0_0x0)._s_0.Z;
  if (iVar14 == param_1->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar15 = (longlong)iVar14;
  param_1->ArrayNum = iVar14 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(double *)(pFVar1 + lVar15 * 0x30) = dVar4;
  *(double *)(pFVar1 + lVar15 * 0x30 + 8) = dVar5;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x10) = dVar7;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x18) = dVar4;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x20) = dVar5;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x28) = dVar6;
  iVar14 = param_1->ArrayNum;
  dVar4 = (param_3->field0_0x0)._s_0.X;
  dVar5 = (param_3->field0_0x0)._s_0.Y;
  uVar9 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x10);
  uVar10 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x14);
  uVar2 = *(undefined8 *)&param_3->field0_0x0;
  uVar11 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
  uVar12 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
  uVar3 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  if (iVar14 == param_1->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar14 + 1;
  lVar15 = (longlong)iVar14;
  pFVar8 = (param_1->AllocatorInstance).Data;
  *(double *)(pFVar8 + lVar15 * 0x30) = dVar4;
  *(double *)(pFVar8 + lVar15 * 0x30 + 8) = dVar5;
  pFVar1 = pFVar8 + lVar15 * 0x30 + 0x10;
  *(undefined4 *)pFVar1 = uVar9;
  *(undefined4 *)(pFVar1 + 4) = uVar10;
  *(int *)(pFVar1 + 8) = (int)uVar2;
  *(int *)(pFVar1 + 0xc) = (int)((ulonglong)uVar2 >> 0x20);
  pFVar8 = pFVar8 + lVar15 * 0x30 + 0x20;
  *(undefined4 *)pFVar8 = uVar11;
  *(undefined4 *)(pFVar8 + 4) = uVar12;
  *(int *)(pFVar8 + 8) = (int)uVar3;
  *(int *)(pFVar8 + 0xc) = (int)((ulonglong)uVar3 >> 0x20);
  iVar14 = param_1->ArrayNum;
  dVar4 = (param_3->field0_0x0)._s_0.X;
  dVar5 = (param_3->field0_0x0)._s_0.Y;
  uVar9 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x10);
  uVar10 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x14);
  uVar2 = *(undefined8 *)&param_3->field0_0x0;
  uVar11 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uVar12 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  uVar3 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
  if (iVar14 == param_1->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar14 + 1;
  lVar15 = (longlong)iVar14;
  pFVar8 = (param_1->AllocatorInstance).Data;
  *(double *)(pFVar8 + lVar15 * 0x30) = dVar4;
  *(double *)(pFVar8 + lVar15 * 0x30 + 8) = dVar5;
  pFVar1 = pFVar8 + lVar15 * 0x30 + 0x10;
  *(undefined4 *)pFVar1 = uVar9;
  *(undefined4 *)(pFVar1 + 4) = uVar10;
  *(int *)(pFVar1 + 8) = (int)uVar2;
  *(int *)(pFVar1 + 0xc) = (int)((ulonglong)uVar2 >> 0x20);
  pFVar8 = pFVar8 + lVar15 * 0x30 + 0x20;
  *(undefined4 *)pFVar8 = uVar11;
  *(undefined4 *)(pFVar8 + 4) = uVar12;
  *(int *)(pFVar8 + 8) = (int)uVar3;
  *(int *)(pFVar8 + 0xc) = (int)((ulonglong)uVar3 >> 0x20);
  iVar14 = param_1->ArrayNum;
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  uVar9 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar10 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x14);
  uVar2 = *(undefined8 *)&param_3->field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar11 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uVar12 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  uVar13 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x10);
  if (iVar14 == param_1->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar14 + 1;
  lVar15 = (longlong)iVar14;
  pFVar8 = (param_1->AllocatorInstance).Data;
  *(double *)(pFVar8 + lVar15 * 0x30) = dVar4;
  *(double *)(pFVar8 + lVar15 * 0x30 + 8) = dVar5;
  pFVar1 = pFVar8 + lVar15 * 0x30 + 0x10;
  *(undefined4 *)pFVar1 = uVar9;
  *(undefined4 *)(pFVar1 + 4) = uVar10;
  *(int *)(pFVar1 + 8) = (int)uVar2;
  *(int *)(pFVar1 + 0xc) = (int)((ulonglong)uVar2 >> 0x20);
  pFVar8 = pFVar8 + lVar15 * 0x30 + 0x20;
  *(undefined4 *)pFVar8 = uVar11;
  *(undefined4 *)(pFVar8 + 4) = uVar12;
  *(undefined4 *)(pFVar8 + 8) = uVar13;
  *(int *)(pFVar8 + 0xc) = (int)((ulonglong)uVar3 >> 0x20);
  iVar14 = param_1->ArrayNum;
  dVar4 = (param_3->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  dVar6 = (param_3->field0_0x0)._s_0.Z;
  dVar7 = (param_2->field0_0x0)._s_0.X;
  if (iVar14 == param_1->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar15 = (longlong)iVar14;
  param_1->ArrayNum = iVar14 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(double *)(pFVar1 + lVar15 * 0x30) = dVar7;
  *(double *)(pFVar1 + lVar15 * 0x30 + 8) = dVar5;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x10) = dVar6;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x18) = dVar4;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x20) = dVar5;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x28) = dVar6;
  iVar14 = param_1->ArrayNum;
  dVar4 = (param_3->field0_0x0)._s_0.X;
  dVar5 = (param_3->field0_0x0)._s_0.Y;
  dVar6 = (param_2->field0_0x0)._s_0.Z;
  dVar7 = (param_2->field0_0x0)._s_0.X;
  if (iVar14 == param_1->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar15 = (longlong)iVar14;
  param_1->ArrayNum = iVar14 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(double *)(pFVar1 + lVar15 * 0x30) = dVar7;
  *(double *)(pFVar1 + lVar15 * 0x30 + 8) = dVar5;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x10) = dVar6;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x18) = dVar4;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x20) = dVar5;
  *(double *)(pFVar1 + lVar15 * 0x30 + 0x28) = dVar6;
  dVar4 = (param_3->field0_0x0)._s_0.Z;
  dVar6 = (param_3->field0_0x0)._s_0.X;
  dVar7 = (param_3->field0_0x0)._s_0.Y;
  iVar14 = param_1->ArrayNum;
  uVar9 = *(undefined4 *)&param_2->field0_0x0;
  uVar10 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uVar2 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  dVar5 = (param_3->field0_0x0)._s_0.Z;
  if (iVar14 == param_1->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar14 + 1;
  lVar15 = (longlong)iVar14;
  pFVar8 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar8 + lVar15 * 0x30;
  *(undefined4 *)pFVar1 = uVar9;
  *(undefined4 *)(pFVar1 + 4) = uVar10;
  *(int *)(pFVar1 + 8) = (int)uVar2;
  *(int *)(pFVar1 + 0xc) = (int)((ulonglong)uVar2 >> 0x20);
  *(double *)(pFVar8 + lVar15 * 0x30 + 0x10) = dVar4;
  *(double *)(pFVar8 + lVar15 * 0x30 + 0x10 + 8) = dVar6;
  *(double *)(pFVar8 + lVar15 * 0x30 + 0x20) = dVar7;
  *(double *)(pFVar8 + lVar15 * 0x30 + 0x20 + 8) = dVar5;
  return;
}

// BrickCutter @ 14e8069d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
FFractureEngineFracturing::BrickCutter
          (FManagedArrayCollection *param_1,FDataflowTransformSelection *param_2,
          TBox<double> *param_3,TTransform<double> *param_4,EFractureBrickBondEnum param_5,
          float param_6,float param_7,float param_8,int param_9,float param_10,bool param_11,
          float param_12,float param_13,float param_14,float param_15,float param_16,int param_17,
          float param_18,bool param_19,float param_20)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FGeometryCollection *pFVar9;
  TMatrix<double> *pTVar10;
  ulonglong uVar11;
  longlong lVar12;
  TTransform<double> *pTVar13;
  ForAnyElementType FVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auStackY_4a8 [32];
  undefined1 local_448;
  undefined1 local_447 [7];
  ForAnyElementType local_440;
  undefined8 local_438;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_430;
  TArray<int,TSizedDefaultAllocator<32>_> local_420;
  TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
  local_410;
  double local_400;
  double dStack_3f8;
  double local_3f0;
  FManagedArrayCollection *local_3e8;
  TVector<double>_u_0 *local_3d8;
  int iStack_3d0;
  undefined4 uStack_3cc;
  TArrayView<int_const_,int> local_3c8;
  TVector<double>_u_0 local_3b8;
  TVector<double>_u_0 local_3a0;
  TArrayView<UE::Math::TBox<double>_const_,int> local_388;
  TVector<double>_u_0 local_378;
  TOptional<UE::Math::TTransform<double>_> local_358;
  FPlanarCells local_2e8;
  TVector<double>_u_0 local_278;
  double dStack_260;
  double local_258;
  double dStack_250;
  undefined8 local_248;
  TVector<double>_u_0 local_240;
  double local_228;
  double local_220;
  double local_218;
  undefined1 local_210;
  TVector<double>_u_0 local_208;
  double dStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TMatrix<double> local_108;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_3e8 = param_1;
  pFVar9 = FManagedArrayCollection::NewCopy<FGeometryCollection>(param_1);
  if (pFVar9 != (FGeometryCollection *)0x0) {
    local_278._s_0.X = (param_3->Min).field0_0x0._s_0.X;
    local_278._s_0.Y = (param_3->Min).field0_0x0._s_0.Y;
    local_278._s_0.Z = (param_3->Min).field0_0x0._s_0.Z;
    dStack_260 = (param_3->Max).field0_0x0._s_0.X;
    local_430.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_430.ArrayNum = 0;
    local_430.ArrayMax = 0;
    local_258 = (param_3->Max).field0_0x0._s_0.Y;
    dStack_250 = (param_3->Max).field0_0x0._s_0.Z;
    local_410.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_410.ArrayNum = 0;
    local_410.ArrayMax = 0;
    local_248._0_1_ = param_3->IsValid;
    local_248._1_1_ = param_3->Pad[0];
    local_248._2_1_ = param_3->Pad[1];
    local_248._3_1_ = param_3->Pad[2];
    local_248._4_1_ = param_3->Pad[3];
    local_248._5_1_ = param_3->Pad[4];
    local_248._6_1_ = param_3->Pad[5];
    local_248._7_1_ = param_3->Pad[6];
    GenerateBrickTransforms
              ((TBox<double> *)&local_278._s_0,&local_430,param_5,param_6,param_7,param_8,&local_410
              );
    local_3b8._s_0.X = dStack_260 - local_278._s_0.X;
    local_3b8._s_0.Y = local_258 - local_278._s_0.Y;
    local_3b8._s_0.Z = dStack_250 - local_278._s_0.Z;
    FractureToolBrickLocals::GetBrickDimensions
              ((TVector<double> *)&local_3a0._s_0,param_6,param_7,param_8,
               (TVector<double> *)&local_3b8._s_0);
    uVar22 = (uint)__xmm_80000000000000008000000000000000;
    uVar23 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_218 = local_3a0._s_0.Z * __real_3fe0000000000000;
    local_440.Data = (FScriptContainerElement *)0x0;
    local_220 = local_3a0._s_0.Y * __real_3fe0000000000000;
    local_438 = 0;
    local_228 = local_3a0._s_0.X * __real_3fe0000000000000;
    local_210 = 1;
    dVar3 = local_220;
    if (local_228 <= local_220) {
      dVar3 = local_228;
    }
    if (local_218 <= dVar3) {
      dVar3 = local_218;
    }
    fVar15 = (float)dVar3 * __real_3f7ae148;
    if (param_12 * __real_3f000000 <= (float)dVar3 * __real_3f7ae148) {
      fVar15 = param_12 * __real_3f000000;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    dVar3 = (double)fVar15;
    local_228 = local_228 - dVar3;
    local_220 = local_220 - dVar3;
    local_218 = local_218 - dVar3;
    local_240._s_0.X =
         (double)CONCAT44((uint)((ulonglong)local_228 >> 0x20) ^ uVar23,SUB84(local_228,0) ^ uVar22)
    ;
    local_240._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)local_220 >> 0x20) ^ uVar23,SUB84(local_220,0) ^ uVar22)
    ;
    local_1c8.Rotation.XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
    local_1c8.Rotation.XY.m128d_f64[1] = (param_4->Rotation).XY.m128d_f64[1];
    local_240._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)local_218 >> 0x20) ^ uVar23,SUB84(local_218,0) ^ uVar22)
    ;
    iVar6 = local_430.ArrayNum;
    uVar11 = (ulonglong)local_430.ArrayNum;
    local_1c8.Rotation.ZW.m128d_f64 = *&(param_4->Rotation).ZW.m128d_f64;
    local_400 = (param_4->Translation).XY.m128d_f64[0];
    dStack_3f8 = (param_4->Translation).XY.m128d_f64[1];
    local_3f0 = (param_4->Translation).ZW.m128d_f64[0];
    local_1c8.Scale3D.XY.m128d_f64 = *&(param_4->Scale3D).XY.m128d_f64;
    local_1c8.Scale3D.ZW.m128d_f64 = *&(param_4->Scale3D).ZW.m128d_f64;
    pTVar13 = (TTransform<double> *)(local_430.AllocatorInstance.Data + uVar11 * 0x60);
    FVar14.Data = local_430.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar11 != iVar6) {
        local_448 = 0;
        `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_448);
      }
      if ((TTransform<double> *)FVar14.Data == pTVar13) break;
      local_1c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_1c8.Translation.XY.m128d_f64[0]._0_4_ = SUB84(local_400,0) ^ uVar22;
      local_1c8.Translation.XY.m128d_f64[0]._4_4_ = (uint)((ulonglong)local_400 >> 0x20) ^ uVar23;
      uVar20 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      uVar21 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      local_1c8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dStack_3f8,0) ^ uVar22;
      local_1c8.Translation.XY.m128d_f64[1]._4_4_ = (uint)((ulonglong)dStack_3f8 >> 0x20) ^ uVar23;
      local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar20;
      local_1c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar21;
      uVar18 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      uVar19 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
      ;
      uVar16 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      uVar17 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
      ;
      local_1c8.Translation.ZW.m128d_f64[0] =
           (double)CONCAT44((uint)((ulonglong)local_3f0 >> 0x20) ^ uVar23,
                            SUB84(local_3f0,0) ^ uVar22);
      local_1c8.Translation.ZW.m128d_f64[1] = 0.0;
      local_168.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_168.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_1c8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar18;
      local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1c8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar19;
      local_168.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_168.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar16;
      local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar17;
      local_168.Rotation.ZW.m128d_f64[1]._0_4_ = uVar20;
      local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_168.Rotation.ZW.m128d_f64[1]._4_4_ = uVar21;
      local_168.Scale3D.XY.m128d_f64[1]._0_4_ = uVar18;
      local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_168.Scale3D.XY.m128d_f64[1]._4_4_ = uVar19;
      local_168.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar16;
      local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_168.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar17;
      local_168.Rotation.XY.m128d_f64[0] = local_1c8.Rotation.XY.m128d_f64[0];
      local_168.Rotation.XY.m128d_f64[1] = local_1c8.Rotation.XY.m128d_f64[1];
      UE::Math::TTransform<double>::Multiply
                (&local_168,(TTransform<double> *)FVar14.Data,&local_1c8);
      pTVar10 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_168,&local_108);
      UE::Math::TBox<double>::TransformBy
                ((TBox<double> *)&local_240._s_0,(TBox<double> *)&local_208._s_0,pTVar10);
      if (((local_440.Data <= &local_208) &&
          (&local_208 < (TVector<double>_u_0 *)(local_440.Data + (longlong)local_438._4_4_ * 0x38)))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      iVar7 = (int)local_438;
      if ((int)local_438 == local_438._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&local_440,(int *)((longlong)&local_438 + 4));
      }
      local_438 = CONCAT44(local_438._4_4_,iVar7 + 1);
      lVar12 = (longlong)iVar7 * 0x38;
      FVar14.Data = FVar14.Data + 0x60;
      *(double *)&local_440.Data[lVar12].field_0x0 = local_208._s_0.X;
      *(double *)(local_440.Data + lVar12 + 8) = local_208._s_0.Y;
      *(double *)(local_440.Data + lVar12 + 0x10) = local_208._s_0.Z;
      *(double *)(local_440.Data + lVar12 + 0x10 + 8) = dStack_1f0;
      *(undefined8 *)(local_440.Data + lVar12 + 0x20) = local_1e8;
      *(undefined8 *)(local_440.Data + lVar12 + 0x20 + 8) = uStack_1e0;
      *(undefined8 *)(local_440.Data + lVar12 + 0x30) = local_1d8;
      uVar11 = local_430._8_8_ & 0xffffffff;
    }
    RandomReduceSelection(param_2,param_9,param_10);
    UE::Private::FractureHelpers::ConvertToLeafSelection(pFVar9,param_2);
    FDataflowSelection::AsArrayValidated
              ((FDataflowSelection *)param_2,&local_420,(FManagedArrayCollection *)pFVar9);
    iVar8 = FManagedArrayCollection::NumElements(param_1,FTransformCollection::TransformGroup);
    iVar6 = local_420.ArrayNum;
    pFVar1 = local_420.AllocatorInstance.Data + (longlong)local_420.ArrayNum * 4;
    FVar14.Data = local_420.AllocatorInstance.Data;
    iVar7 = local_420.ArrayNum;
    while( true ) {
      if (iVar7 != iVar6) {
        local_447[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_447);
        iVar7 = local_420.ArrayNum;
      }
      if (FVar14.Data == pFVar1) {
        iVar6 = (int)local_438;
        local_3d8 = (TVector<double>_u_0 *)local_440.Data;
        bVar4 = param_12 <= __real_38d1b717;
        if (((int)local_438 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
        iStack_3d0 = iVar6;
        local_388._12_4_ = uStack_3cc;
        local_388.ArrayNum = iVar6;
        local_388.DataPtr = (TBox<double> *)local_3d8;
        FPlanarCells::FPlanarCells(&local_2e8,&local_388,bVar4);
        local_378._s_0.Z = local_3f0;
        local_378._s_0.Y = dStack_3f8;
        local_378._s_0.X = local_400;
        local_358.TypedValue.Rotation.XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
        local_358.TypedValue.Rotation.XY.m128d_f64[1] = (param_4->Rotation).XY.m128d_f64[1];
        local_358.TypedValue.Rotation.ZW.m128d_f64[0] = (param_4->Rotation).ZW.m128d_f64[0];
        local_358.TypedValue.Rotation.ZW.m128d_f64[1] = (param_4->Rotation).ZW.m128d_f64[1];
        local_358.TypedValue.Translation.XY.m128d_f64[0] = (param_4->Translation).XY.m128d_f64[0];
        local_358.TypedValue.Translation.XY.m128d_f64[1] = (param_4->Translation).XY.m128d_f64[1];
        local_358.TypedValue.Translation.ZW.m128d_f64[0] = (param_4->Translation).ZW.m128d_f64[0];
        local_358.TypedValue.Translation.ZW.m128d_f64[1] = (param_4->Translation).ZW.m128d_f64[1];
        local_358.TypedValue.Scale3D.XY.m128d_f64[0] = (param_4->Scale3D).XY.m128d_f64[0];
        local_358.TypedValue.Scale3D.XY.m128d_f64[1] = (param_4->Scale3D).XY.m128d_f64[1];
        local_358.TypedValue.Scale3D.ZW.m128d_f64[0] = (param_4->Scale3D).ZW.m128d_f64[0];
        local_358.TypedValue.Scale3D.ZW.m128d_f64[1] = (param_4->Scale3D).ZW.m128d_f64[1];
        local_358.bIsSet = true;
        local_3c8.DataPtr = (int *)local_420.AllocatorInstance.Data;
        if ((local_420.ArrayNum < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
        local_3c8.ArrayNum = local_420.ArrayNum;
        iVar6 = CutMultipleWithPlanarCells
                          (&local_2e8,pFVar9,&local_3c8,0.0,(double)param_18,param_9,&local_358,true
                           ,true,(FProgressCancel *)0x0,(TVector<double> *)&local_378._s_0,param_11)
        ;
        UE::Private::FractureHelpers::ProcessNewlyFracturedBones(pFVar9,iVar6,-1);
        FManagedArrayCollection::operator=(local_3e8,(FManagedArrayCollection *)pFVar9);
        if (local_2e8.PlaneBoundaryVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(local_2e8.PlaneBoundaryVertices.AllocatorInstance.Data);
        }
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)
                   local_2e8.PlaneBoundaries.AllocatorInstance.Data,
                   local_2e8.PlaneBoundaries.ArrayNum);
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)
            local_2e8.PlaneBoundaries.AllocatorInstance.Data !=
            (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_2e8.PlaneBoundaries.AllocatorInstance.Data);
        }
        if (local_2e8.PlaneCells.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e8.PlaneCells.AllocatorInstance.Data);
        }
        if (local_2e8.Planes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e8.Planes.AllocatorInstance.Data);
        }
        if (local_420.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_420.AllocatorInstance.Data);
        }
        if ((TVector<double>_u_0 *)local_440.Data != (TVector<double>_u_0 *)0x0) {
          FMemory::Free(local_440.Data);
        }
        if (local_410.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_410.AllocatorInstance.Data);
        }
        if ((TTransform<double> *)local_430.AllocatorInstance.Data != (TTransform<double> *)0x0) {
          FMemory::Free(local_430.AllocatorInstance.Data);
        }
        (**(code **)pFVar9->_padding_)(pFVar9,1);
        if (*(void **)&param_2->field_0x18 == (void *)0x0) {
          return iVar6;
        }
        FMemory::Free(*(void **)&param_2->field_0x18);
        return iVar6;
      }
      if ((*(int *)FVar14.Data < 0) || (iVar8 <= *(int *)FVar14.Data)) break;
      FVar14.Data = FVar14.Data + 4;
    }
    if (local_420.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_420.AllocatorInstance.Data);
    }
    if ((TVector<double>_u_0 *)local_440.Data != (TVector<double>_u_0 *)0x0) {
      FMemory::Free(local_440.Data);
    }
    if (local_410.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_410.AllocatorInstance.Data);
    }
    if ((TTransform<double> *)local_430.AllocatorInstance.Data != (TTransform<double> *)0x0) {
      FMemory::Free(local_430.AllocatorInstance.Data);
    }
    (**(code **)pFVar9->_padding_)(pFVar9,1);
  }
  if (*(void **)&param_2->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x18);
  }
  return -1;
}

// GenerateBrickTransforms @ 14e80fa30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FFractureEngineFracturing::GenerateBrickTransforms
          (TBox<double> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          EFractureBrickBondEnum param_3,float param_4,float param_5,float param_6,
          TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
          *param_7)

{
  int *piVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  bool bVar35;
  undefined1 auVar36 [16];
  bool bVar37;
  bool bVar38;
  int iVar39;
  ulonglong uVar40;
  FScriptContainerElement *pFVar41;
  longlong lVar42;
  byte bVar43;
  FScriptContainerElement *pFVar44;
  FScriptContainerElement *pFVar45;
  byte bVar46;
  float fVar47;
  uint uVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  uint uVar59;
  double dVar60;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar61;
  undefined4 uVar62;
  float fVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  float fVar66;
  undefined4 uVar75;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  double dVar76;
  double dVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  double dVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined4 uVar95;
  undefined4 uVar96;
  double dVar97;
  double dVar98;
  double dVar99;
  undefined4 uVar100;
  undefined4 uVar101;
  float local_res8;
  float local_res18 [2];
  float local_1f8;
  double local_1c8;
  double dStack_1c0;
  undefined8 local_1b8;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_178;
  double dStack_170;
  undefined8 local_168;
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_d8;
  
  local_178 = (param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X;
  dStack_170 = (param_1->Max).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y;
  local_168 = (param_1->Max).field0_0x0._s_0.Z - (param_1->Min).field0_0x0._s_0.Z;
  FractureToolBrickLocals::GetBrickDimensions
            ((TVector<double> *)&local_1c8,param_4,param_5,param_6,(TVector<double> *)&local_178);
  dVar76 = local_1c8;
  uVar62 = local_1c8._0_4_;
  uVar64 = local_1c8._4_4_;
  dVar49 = dStack_1c0;
  uVar100 = local_1c8._8_4_;
  uVar101 = local_1c8._12_4_;
  local_190 = (double)local_1b8 * __real_3fe0000000000000;
  dVar28 = local_1c8 * __real_3fe0000000000000;
  auVar81._0_8_ = dStack_1c0 * __real_3fe0000000000000;
  auVar81._8_8_ = 0;
  local_188 = local_1c8;
  local_1a8 = dStack_1c0;
  dVar98 = auVar81._0_8_;
  dVar10 = dVar28;
  if (((param_3 != Dataflow_FractureBrickBond_Stretcher) &&
      (param_3 != Dataflow_FractureBrickBond_Stack)) && (dVar98 = dVar28, dVar28 <= auVar81._0_8_))
  {
    dVar98 = auVar81._0_8_;
    dVar10 = auVar81._0_8_;
  }
  auVar53 = *(undefined1 (*) [16])&(param_1->Min).field0_0x0;
  uVar95 = auVar53._8_4_;
  uVar96 = auVar53._12_4_;
  dVar2 = (param_1->Min).field0_0x0._s_0.Z;
  local_138._8_4_ = uVar95;
  local_138._0_8_ = auVar53._8_8_;
  local_138._12_4_ = uVar96;
  dVar97 = (local_190 + (param_1->Max).field0_0x0._s_0.Z + __real_3f1a36e2eb1c432d) - dVar2;
  dVar9 = auVar53._0_8_;
  dVar10 = (dVar10 + (param_1->Max).field0_0x0._s_0.X + __real_3f1a36e2eb1c432d) - dVar9;
  dVar98 = (dVar98 + (param_1->Max).field0_0x0._s_0.Y + __real_3f1a36e2eb1c432d) - auVar53._8_8_;
  dStack_170 = dVar98;
  local_178 = dVar10;
  if (((local_1c8 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) ||
      (dStack_1c0 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) ||
     ((double)local_1b8 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) {
    local_1a0 = dVar98;
    local_198 = auVar81._0_8_;
    local_168 = dVar97;
    local_d8 = local_190;
    uVar40 = FractureToolBrickLocals::CalculateNumBricks
                       ((TVector<double> *)&local_1c8,(TVector<double> *)&local_178);
    iVar39 = (int)uVar40;
    if (iVar39 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar40 & 0xffffffff);
    }
    piVar1 = &param_2->ArrayMax;
    if (*piVar1 < iVar39) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar39,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
    }
    dVar99 = local_190;
    dVar82 = local_198;
    local_118 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z *
                ___xmm_3fe6a09e667f3bcd3fe6a09e667f3bcd;
    dStack_110 = ___xmm_3fe6a09e667f3bcd3fe6a09e667f3bcd;
    local_128 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X *
                ___xmm_3fe6a09e667f3bcd3fe6a09e667f3bcd;
    dStack_120 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * _UNK_152f64898;
    if (param_3 == Dataflow_FractureBrickBond_Stretcher) {
      auVar78 = ZEXT816(0);
      bVar46 = 0;
      auVar81 = ZEXT816(0);
      auVar34._8_8_ = 0;
      auVar34._0_8_ = local_158._8_8_;
      local_158 = auVar34 << 0x40;
      local_res18[0] = 0.0;
      if (0.0 <= dVar98) {
        fVar47 = (float)local_190;
        do {
          bVar43 = 0;
          dVar49 = (double)fVar47;
          fVar61 = fVar47;
          if (dVar49 <= dVar97) {
            do {
              if (auVar78._0_8_ <= dVar10) {
                dVar49 = (double)fVar61;
                auVar67._8_8_ = auVar81._8_8_;
                local_148 = dVar49 + dVar2;
                auVar67._0_8_ = (double)auVar81._0_4_ + (double)CONCAT44(uVar96,uVar95);
                local_188 = auVar67._0_8_;
                dStack_140 = auVar78._0_8_;
                do {
                  dVar82 = auVar78._0_8_;
                  dVar98 = dVar82;
                  if (bVar43 == bVar46) {
                    dVar98 = dVar82 + dVar28;
                  }
                  fVar6 = GlobalVectorConstants::Float0001.m128_f32[0];
                  iVar39 = param_2->ArrayNum;
                  uVar62 = auVar67._0_4_;
                  uVar64 = auVar67._4_4_;
                  fVar63 = GlobalVectorConstants::Float0001.m128_f32[1];
                  fVar61 = GlobalVectorConstants::Float0001.m128_f32[2];
                  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
                  fVar7 = GlobalVectorConstants::Float1110.m128_f32[0];
                  fVar4 = GlobalVectorConstants::Float1110.m128_f32[1];
                  fVar66 = GlobalVectorConstants::Float1110.m128_f32[2];
                  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
                  if (iVar39 == *piVar1) {
                    iVar39 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x1060,&param_2->AllocatorInstance,piVar1);
                    auVar67._8_8_ = 0;
                    auVar67._0_8_ = local_188;
                  }
                  param_2->ArrayNum = iVar39 + 1;
                  pFVar41 = (param_2->AllocatorInstance).Data;
                  lVar42 = (longlong)iVar39 * 0x60;
                  *(double *)(pFVar41 + lVar42) = (double)fVar6;
                  *(double *)(pFVar41 + lVar42 + 8) = (double)fVar63;
                  auVar21._8_4_ = SUB84((double)fVar3,0);
                  auVar21._0_8_ = (double)fVar61;
                  auVar21._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
                  *(undefined1 (*) [16])(pFVar41 + lVar42 + 0x10) = auVar21;
                  auVar11._8_4_ = uVar62;
                  auVar11._0_8_ = dVar9 + dVar98;
                  auVar11._12_4_ = uVar64;
                  *(undefined1 (*) [16])(pFVar41 + lVar42 + 0x20) = auVar11;
                  *(double *)(pFVar41 + lVar42 + 0x30) = local_148;
                  *(double *)(pFVar41 + lVar42 + 0x30 + 8) = dStack_140;
                  auVar24._8_4_ = SUB84((double)fVar4,0);
                  auVar24._0_8_ = (double)fVar7;
                  auVar24._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
                  *(undefined1 (*) [16])(pFVar41 + lVar42 + 0x40) = auVar24;
                  auVar78._0_8_ = (double)(float)(dVar82 + dVar76);
                  auVar78._8_8_ = 0;
                  auVar29._8_4_ = SUB84((double)fVar5,0);
                  auVar29._0_8_ = (double)fVar66;
                  auVar29._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
                  *(undefined1 (*) [16])(pFVar41 + lVar42 + 0x50) = auVar29;
                } while (auVar78._0_8_ <= dVar10);
                auVar78._8_8_ = 0;
                auVar78._0_8_ = (double)local_158._0_8_;
                auVar81 = ZEXT416((uint)local_res18[0]);
                uVar95 = local_138._0_4_;
                uVar96 = local_138._4_4_;
              }
              bVar43 = bVar43 ^ 1;
              fVar61 = (float)(dVar49 + (double)local_1b8);
              dVar49 = (double)fVar61;
            } while (dVar49 <= dVar97);
            uVar100 = SUB84(local_1a8,0);
            uVar101 = (undefined4)((ulonglong)local_1a8 >> 0x20);
            dVar98 = local_1a0;
          }
          bVar46 = bVar46 ^ 1;
          local_res18[0] = (float)((double)auVar81._0_4_ + (double)CONCAT44(uVar101,uVar100));
          auVar81 = ZEXT416((uint)local_res18[0]);
        } while ((double)local_res18[0] <= dVar98);
      }
    }
    else if (param_3 == Dataflow_FractureBrickBond_Stack) {
      bVar35 = false;
      auVar81 = ZEXT816(0);
      local_res8 = 0.0;
      if (0.0 <= dVar98) {
        fVar47 = (float)local_190;
        do {
          dVar49 = (double)fVar47;
          fVar61 = fVar47;
          local_res18[0] = fVar47;
          if (dVar49 <= dVar97) {
            do {
              auVar83 = ZEXT816(0);
              if (0.0 <= dVar10) {
                auVar79._8_8_ = auVar81._8_8_;
                auVar79._0_8_ = (double)auVar81._0_4_ + (double)CONCAT44(uVar96,uVar95);
                local_158._8_8_ = 0;
                local_158._0_8_ = (double)fVar61 + dVar2;
                local_res18[0] = fVar61;
                local_188 = auVar79._0_8_;
                do {
                  dVar82 = auVar83._0_8_;
                  dVar49 = (double)fVar61;
                  dVar98 = dVar82;
                  if (!bVar35) {
                    dVar98 = dVar82 + dVar28;
                  }
                  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
                  iVar39 = param_2->ArrayNum;
                  uVar62 = auVar79._0_4_;
                  uVar64 = auVar79._4_4_;
                  fVar63 = GlobalVectorConstants::Float0001.m128_f32[1];
                  fVar66 = GlobalVectorConstants::Float0001.m128_f32[2];
                  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
                  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
                  fVar4 = GlobalVectorConstants::Float1110.m128_f32[1];
                  local_148 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  dStack_140 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
                  if (iVar39 == *piVar1) {
                    iVar39 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x1060,&param_2->AllocatorInstance,piVar1);
                    auVar79._8_8_ = 0;
                    auVar79._0_8_ = local_188;
                    fVar61 = local_res18[0];
                  }
                  param_2->ArrayNum = iVar39 + 1;
                  pFVar41 = (param_2->AllocatorInstance).Data;
                  lVar42 = (longlong)iVar39 * 0x60;
                  auVar22._8_4_ = SUB84((double)fVar63,0);
                  auVar22._0_8_ = (double)fVar5;
                  auVar22._12_4_ = (int)((ulonglong)(double)fVar63 >> 0x20);
                  *(undefined1 (*) [16])(pFVar41 + lVar42) = auVar22;
                  auVar25._8_4_ = SUB84((double)fVar3,0);
                  auVar25._0_8_ = (double)fVar66;
                  auVar25._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
                  *(undefined1 (*) [16])(pFVar41 + lVar42 + 0x10) = auVar25;
                  auVar14._8_4_ = uVar62;
                  auVar14._0_8_ = dVar9 + dVar98;
                  auVar14._12_4_ = uVar64;
                  *(undefined1 (*) [16])(pFVar41 + lVar42 + 0x20) = auVar14;
                  *(undefined8 *)(pFVar41 + lVar42 + 0x30) = local_158._0_8_;
                  *(undefined8 *)(pFVar41 + lVar42 + 0x30 + 8) = local_158._8_8_;
                  auVar30._8_4_ = SUB84((double)fVar4,0);
                  auVar30._0_8_ = (double)fVar6;
                  auVar30._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
                  *(undefined1 (*) [16])(pFVar41 + lVar42 + 0x40) = auVar30;
                  *(double *)(pFVar41 + lVar42 + 0x50) = local_148;
                  *(double *)(pFVar41 + lVar42 + 0x50 + 8) = dStack_140;
                  auVar83._0_8_ = (double)(float)(dVar82 + dVar76);
                  auVar83._8_8_ = 0;
                } while (auVar83._0_8_ <= dVar10);
                auVar81 = ZEXT416((uint)local_res8);
                uVar95 = local_138._0_4_;
                uVar96 = local_138._4_4_;
              }
              local_res18[0] = (float)(dVar49 + (double)local_1b8);
              dVar49 = (double)local_res18[0];
              fVar61 = local_res18[0];
            } while (dVar49 <= dVar97);
            uVar100 = SUB84(local_1a8,0);
            uVar101 = (undefined4)((ulonglong)local_1a8 >> 0x20);
            dVar98 = local_1a0;
          }
          bVar35 = (bool)(bVar35 ^ 1);
          local_res8 = (float)((double)auVar81._0_4_ + (double)CONCAT44(uVar101,uVar100));
          auVar81 = ZEXT416((uint)local_res8);
        } while ((double)local_res8 <= dVar98);
      }
    }
    else if (param_3 == Dataflow_FractureBrickBond_English) {
      auVar68 = ZEXT816(0);
      auVar36._8_8_ = 0;
      auVar36._0_8_ = local_158._8_8_;
      local_158 = auVar36 << 0x40;
      bVar35 = false;
      local_1f8 = 0.0;
      fVar47 = (float)((dVar28 - auVar81._0_8_) - auVar81._0_8_);
      if (0.0 <= dVar98) {
        local_148 = ___xmm_00000000000000003ff0000000000000;
        dStack_140 = _UNK_150689518;
        local_108 = ___xmm_3ff00000000000003ff0000000000000;
        dStack_100 = _UNK_150689688;
        do {
          bVar37 = false;
          dVar76 = local_148;
          dVar49 = dStack_140;
          dVar82 = local_128;
          dVar50 = dStack_120;
          dVar60 = local_118;
          dVar77 = dStack_110;
          dVar51 = dVar99;
          while (local_res18[0] = (float)dVar51, local_148 = dVar76, dStack_140 = dVar49,
                local_128 = dVar82, dStack_120 = dVar50, local_118 = dVar60, dStack_110 = dVar77,
                (double)local_res18[0] <= dVar97) {
            uVar65 = auVar68._0_4_;
            uVar75 = auVar68._4_4_;
            dVar98 = auVar68._0_8_;
            if (bVar37) {
              if ((!bVar35) && (dVar98 <= dVar10)) {
                dVar51 = (double)local_res18[0];
                dVar98 = (double)CONCAT44(uVar96,uVar95) + (double)local_1f8 + auVar81._0_8_;
                do {
                  iVar39 = param_2->ArrayNum;
                  if (iVar39 == *piVar1) {
                    iVar39 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x1060,&param_2->AllocatorInstance,piVar1);
                  }
                  param_2->ArrayNum = iVar39 + 1;
                  pFVar41 = (param_2->AllocatorInstance).Data;
                  lVar42 = (longlong)iVar39 * 0x60;
                  *(double *)(pFVar41 + lVar42) = dVar82;
                  *(double *)(pFVar41 + lVar42 + 8) = dVar50;
                  *(double *)(pFVar41 + lVar42 + 0x10) = dVar60;
                  *(double *)(pFVar41 + lVar42 + 0x10 + 8) = dVar77;
                  auVar15._8_4_ = SUB84(dVar98,0);
                  auVar15._0_8_ = dVar9 + auVar68._0_8_;
                  auVar15._12_4_ = (int)((ulonglong)dVar98 >> 0x20);
                  *(undefined1 (*) [16])(pFVar41 + lVar42 + 0x20) = auVar15;
                  auVar26._8_4_ = uVar65;
                  auVar26._0_8_ = dVar51 + dVar2;
                  auVar26._12_4_ = uVar75;
                  *(undefined1 (*) [16])(pFVar41 + lVar42 + 0x30) = auVar26;
                  *(double *)(pFVar41 + lVar42 + 0x40) = local_108;
                  *(double *)(pFVar41 + lVar42 + 0x40 + 8) = dStack_100;
                  *(double *)(pFVar41 + lVar42 + 0x50) = dVar76;
                  *(double *)(pFVar41 + lVar42 + 0x50 + 8) = dVar49;
                  auVar68._0_8_ = (double)(float)(auVar68._0_8_ + (double)CONCAT44(uVar101,uVar100))
                  ;
                  auVar68._8_8_ = 0;
                } while (auVar68._0_8_ <= dVar10);
                uVar62 = SUB84(local_188,0);
                uVar64 = (undefined4)((ulonglong)local_188 >> 0x20);
LAB_14e8102a1:
                auVar68._8_8_ = 0;
                auVar68._0_8_ = (double)local_158._0_8_;
                auVar81._8_8_ = 0;
                auVar81._0_8_ = local_198;
                uVar95 = local_138._0_4_;
                uVar96 = local_138._4_4_;
              }
            }
            else if (dVar98 <= dVar10) {
              dStack_1c0 = dVar98;
              local_1c8 = (double)local_res18[0] + dVar2;
              do {
                dVar98 = auVar68._0_8_;
                if (bVar35) {
                  fVar61 = local_1f8 + fVar47;
                  dVar76 = dVar98;
                }
                else {
                  dVar76 = dVar98 + dVar28;
                  fVar61 = local_1f8 - fVar47;
                }
                fVar4 = GlobalVectorConstants::Float0001.m128_f32[0];
                iVar39 = param_2->ArrayNum;
                fVar63 = GlobalVectorConstants::Float0001.m128_f32[1];
                fVar66 = GlobalVectorConstants::Float0001.m128_f32[2];
                fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
                dVar50 = (double)fVar61 + (double)CONCAT44(uVar96,uVar95);
                fVar5 = GlobalVectorConstants::Float1110.m128_f32[0];
                fVar61 = GlobalVectorConstants::Float1110.m128_f32[1];
                dStack_170 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
                local_178 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
                dVar49 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
                dVar82 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
                if (iVar39 == *piVar1) {
                  iVar39 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x1060,&param_2->AllocatorInstance,piVar1);
                  dVar49 = local_178;
                  dVar82 = dStack_170;
                }
                param_2->ArrayNum = iVar39 + 1;
                pFVar41 = (param_2->AllocatorInstance).Data;
                lVar42 = (longlong)iVar39 * 0x60;
                auVar23._8_4_ = SUB84((double)fVar63,0);
                auVar23._0_8_ = (double)fVar4;
                auVar23._12_4_ = (int)((ulonglong)(double)fVar63 >> 0x20);
                *(undefined1 (*) [16])(pFVar41 + lVar42) = auVar23;
                auVar27._8_4_ = SUB84((double)fVar3,0);
                auVar27._0_8_ = (double)fVar66;
                auVar27._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
                *(undefined1 (*) [16])(pFVar41 + lVar42 + 0x10) = auVar27;
                auVar16._8_4_ = SUB84(dVar50,0);
                auVar16._0_8_ = dVar9 + dVar76;
                auVar16._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
                *(undefined1 (*) [16])(pFVar41 + lVar42 + 0x20) = auVar16;
                *(double *)(pFVar41 + lVar42 + 0x30) = local_1c8;
                *(double *)(pFVar41 + lVar42 + 0x30 + 8) = dStack_1c0;
                auVar31._8_4_ = SUB84((double)fVar61,0);
                auVar31._0_8_ = (double)fVar5;
                auVar31._12_4_ = (int)((ulonglong)(double)fVar61 >> 0x20);
                *(undefined1 (*) [16])(pFVar41 + lVar42 + 0x40) = auVar31;
                *(double *)(pFVar41 + lVar42 + 0x50) = dVar49;
                *(double *)(pFVar41 + lVar42 + 0x50 + 8) = dVar82;
                auVar68._0_8_ = (double)(float)(dVar98 + (double)CONCAT44(uVar64,uVar62));
                auVar68._8_8_ = 0;
                uVar95 = local_138._0_4_;
                uVar96 = local_138._4_4_;
              } while (auVar68._0_8_ <= dVar10);
              uVar100 = SUB84(local_1a8,0);
              uVar101 = (undefined4)((ulonglong)local_1a8 >> 0x20);
              goto LAB_14e8102a1;
            }
            bVar37 = (bool)(bVar37 ^ 1);
            dVar98 = local_1a0;
            dVar76 = local_148;
            dVar49 = dStack_140;
            dVar82 = local_128;
            dVar50 = dStack_120;
            dVar60 = local_118;
            dVar77 = dStack_110;
            dVar51 = (double)local_res18[0] + (double)local_1b8;
          }
          bVar35 = (bool)(bVar35 ^ 1);
          local_1f8 = (float)((double)local_1f8 + (double)CONCAT44(uVar101,uVar100));
        } while ((double)local_1f8 <= dVar98);
      }
    }
    else if (param_3 == Dataflow_FractureBrickBond_Header) {
      bVar46 = 0;
      local_res18[0] = 0.0;
      if (0.0 <= dVar98) {
        fVar47 = (float)local_190;
        dStack_170 = _UNK_150689518;
        local_178 = ___xmm_00000000000000003ff0000000000000;
        dStack_1c0 = _UNK_150689688;
        local_1c8 = ___xmm_3ff00000000000003ff0000000000000;
        do {
          dVar76 = local_1a8;
          dVar49 = (double)fVar47;
          bVar43 = 0;
          fVar61 = fVar47;
          fVar66 = local_res18[0];
          if (dVar49 <= dVar97) {
            do {
              auVar69 = ZEXT816(0);
              if (0.0 <= dVar10) {
                dVar98 = (double)fVar66 + (double)CONCAT44(uVar96,uVar95);
                do {
                  dVar50 = auVar69._0_8_;
                  dVar49 = (double)fVar61;
                  dVar99 = dVar50;
                  if (bVar43 == bVar46) {
                    dVar99 = dVar50 + dVar82;
                  }
                  iVar39 = param_2->ArrayNum;
                  if (iVar39 == param_2->ArrayMax) {
                    iVar39 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x1060,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  param_2->ArrayNum = iVar39 + 1;
                  pFVar41 = (param_2->AllocatorInstance).Data;
                  lVar42 = (longlong)iVar39 * 0x60;
                  *(double *)(pFVar41 + lVar42) = local_128;
                  *(double *)(pFVar41 + lVar42 + 8) = dStack_120;
                  *(double *)(pFVar41 + lVar42 + 0x10) = local_118;
                  *(double *)(pFVar41 + lVar42 + 0x10 + 8) = dStack_110;
                  auVar17._8_4_ = SUB84(dVar98,0);
                  auVar17._0_8_ = dVar9 + dVar99;
                  auVar17._12_4_ = (int)((ulonglong)dVar98 >> 0x20);
                  *(undefined1 (*) [16])(pFVar41 + lVar42 + 0x20) = auVar17;
                  auVar32._8_8_ = 0;
                  auVar32._0_8_ = dVar2 + (double)fVar61;
                  *(undefined1 (*) [16])(pFVar41 + lVar42 + 0x30) = auVar32;
                  *(double *)(pFVar41 + lVar42 + 0x40) = local_1c8;
                  *(double *)(pFVar41 + lVar42 + 0x40 + 8) = dStack_1c0;
                  *(double *)(pFVar41 + lVar42 + 0x50) = local_178;
                  *(double *)(pFVar41 + lVar42 + 0x50 + 8) = dStack_170;
                  auVar69._0_8_ = (double)(float)(dVar50 + dVar76);
                  auVar69._8_8_ = 0;
                } while (auVar69._0_8_ <= dVar10);
                uVar95 = local_138._0_4_;
                uVar96 = local_138._4_4_;
                fVar66 = local_res18[0];
              }
              dVar98 = dVar49 + (double)local_1b8;
              bVar43 = bVar43 ^ 1;
              dVar49 = (double)(float)dVar98;
              fVar61 = (float)dVar98;
            } while (dVar49 <= dVar97);
            uVar62 = SUB84(local_188,0);
            uVar64 = (undefined4)((ulonglong)local_188 >> 0x20);
            dVar98 = local_1a0;
          }
          bVar46 = bVar46 ^ 1;
          local_res18[0] = (float)((double)fVar66 + (double)CONCAT44(uVar64,uVar62));
        } while ((double)local_res18[0] <= dVar98);
      }
    }
    else if (param_3 == Dataflow_FractureBrickBond_Flemish) {
      bVar35 = false;
      local_1f8 = 0.0;
      fVar47 = (float)(dVar28 - dVar49);
      local_res18[0] = fVar47;
      if (0.0 <= local_1a0) {
        uVar62 = SUB84(local_1a8,0);
        uVar64 = (undefined4)((ulonglong)local_1a8 >> 0x20);
        fVar61 = (float)local_190;
        do {
          dVar98 = (double)fVar61;
          bVar37 = false;
          fVar66 = fVar61;
          if (dVar98 <= dVar97) {
            do {
              dVar76 = local_198;
              fVar63 = 0.0;
              if (0.0 <= dVar10) {
                dVar82 = auVar81._0_8_ + dVar28;
                local_158._0_8_ = dVar82;
                dVar49 = (double)local_1f8 + (double)CONCAT44(uVar96,uVar95);
                dVar99 = dVar2 + (double)fVar66;
                bVar38 = bVar37;
                do {
                  dVar50 = dVar9 + (double)fVar63;
                  dVar98 = (double)fVar66;
                  if (bVar38) {
                    iVar39 = param_2->ArrayNum;
                    local_1c8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
                    dStack_1c0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
                    local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
                    dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
                    if (bVar35) {
                      auVar88._8_8_ = (double)fVar47 + dVar49;
                      auVar88._0_8_ = dVar50;
                      dVar50 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
                      dVar60 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
                      local_148 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
                      dStack_140 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
                      unique0x10000324 = SUB84(dVar60,0);
                      local_178 = dVar50;
                      unique0x10000328 = (int)((ulonglong)dVar60 >> 0x20);
                      dVar77 = local_1c8;
                      dVar51 = dStack_1c0;
                      if (iVar39 == param_2->ArrayMax) {
                        iVar39 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x1060,&param_2->AllocatorInstance,&param_2->ArrayMax);
                        dVar50 = local_178;
                        dVar60 = dStack_170;
                        dVar77 = local_1c8;
                        dVar51 = dStack_1c0;
                        dVar82 = (double)local_158._0_8_;
                      }
                      param_2->ArrayNum = iVar39 + 1;
                      pFVar41 = (param_2->AllocatorInstance).Data;
                      lVar42 = (longlong)iVar39 * 0x60;
                      *(double *)(pFVar41 + lVar42) = dVar77;
                      *(double *)(pFVar41 + lVar42 + 8) = dVar51;
                      *(double *)(pFVar41 + lVar42 + 0x10) = local_108;
                      *(double *)(pFVar41 + lVar42 + 0x10 + 8) = dStack_100;
                      *(undefined1 (*) [16])(pFVar41 + lVar42 + 0x20) = auVar88;
                      *(double *)(pFVar41 + lVar42 + 0x30) = dVar99;
                      *(undefined8 *)(pFVar41 + lVar42 + 0x30 + 8) = 0;
                      auVar8._8_4_ = SUB84(dVar60,0);
                      auVar8._0_8_ = dVar50;
                      auVar8._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
                      *(undefined1 (*) [16])(pFVar41 + lVar42 + 0x40) = auVar8;
                      dVar50 = local_148;
                      dVar60 = dStack_140;
                    }
                    else {
                      auVar80._8_8_ = dVar49 - (double)fVar47;
                      auVar80._0_8_ = dVar50;
                      dVar50 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
                      dVar60 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
                      local_148 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
                      dStack_140 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
                      unique0x1000036c = SUB84(dVar60,0);
                      local_178 = dVar50;
                      unique0x10000370 = (int)((ulonglong)dVar60 >> 0x20);
                      dVar77 = local_1c8;
                      dVar51 = dStack_1c0;
                      if (iVar39 == param_2->ArrayMax) {
                        iVar39 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x1060,&param_2->AllocatorInstance,&param_2->ArrayMax);
                        dVar50 = local_178;
                        dVar60 = dStack_170;
                        dVar77 = local_1c8;
                        dVar51 = dStack_1c0;
                        dVar82 = (double)local_158._0_8_;
                      }
                      param_2->ArrayNum = iVar39 + 1;
                      pFVar41 = (param_2->AllocatorInstance).Data;
                      lVar42 = (longlong)iVar39 * 0x60;
                      *(double *)(pFVar41 + lVar42) = dVar77;
                      *(double *)(pFVar41 + lVar42 + 8) = dVar51;
                      *(double *)(pFVar41 + lVar42 + 0x10) = local_108;
                      *(double *)(pFVar41 + lVar42 + 0x10 + 8) = dStack_100;
                      *(undefined1 (*) [16])(pFVar41 + lVar42 + 0x20) = auVar80;
                      *(double *)(pFVar41 + lVar42 + 0x30) = dVar99;
                      *(undefined8 *)(pFVar41 + lVar42 + 0x30 + 8) = 0;
                      auVar70._8_4_ = SUB84(dVar60,0);
                      auVar70._0_8_ = dVar50;
                      auVar70._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
                      *(undefined1 (*) [16])(pFVar41 + lVar42 + 0x40) = auVar70;
                      dVar50 = local_148;
                      dVar60 = dStack_140;
                    }
LAB_14e8107d7:
                    *(double *)(pFVar41 + lVar42 + 0x50) = dVar50;
                    *(double *)(pFVar41 + lVar42 + 0x50 + 8) = dVar60;
                  }
                  else if (!bVar35) {
                    iVar39 = param_2->ArrayNum;
                    auVar53._8_8_ = dVar49 + dVar76;
                    auVar53._0_8_ = dVar50;
                    if (iVar39 == param_2->ArrayMax) {
                      iVar39 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x1060,&param_2->AllocatorInstance,&param_2->ArrayMax);
                      dVar82 = (double)local_158._0_8_;
                    }
                    param_2->ArrayNum = iVar39 + 1;
                    pFVar41 = (param_2->AllocatorInstance).Data;
                    lVar42 = (longlong)iVar39 * 0x60;
                    *(double *)(pFVar41 + lVar42) = local_128;
                    *(double *)(pFVar41 + lVar42 + 8) = dStack_120;
                    *(double *)(pFVar41 + lVar42 + 0x10) = local_118;
                    *(double *)(pFVar41 + lVar42 + 0x10 + 8) = dStack_110;
                    *(undefined1 (*) [16])(pFVar41 + lVar42 + 0x20) = auVar53;
                    *(double *)(pFVar41 + lVar42 + 0x30) = dVar99;
                    *(undefined8 *)(pFVar41 + lVar42 + 0x30 + 8) = 0;
                    dVar50 = _UNK_150689688;
                    *(double *)(pFVar41 + lVar42 + 0x40) = ___xmm_3ff00000000000003ff0000000000000;
                    *(double *)(pFVar41 + lVar42 + 0x40 + 8) = dVar50;
                    dVar50 = ___xmm_00000000000000003ff0000000000000;
                    dVar60 = _UNK_150689518;
                    goto LAB_14e8107d7;
                  }
                  bVar38 = (bool)(bVar38 ^ 1);
                  fVar63 = (float)(dVar82 + (double)fVar63);
                  fVar47 = local_res18[0];
                } while ((double)fVar63 <= dVar10);
                auVar81._8_8_ = 0;
                auVar81._0_8_ = local_198;
                uVar95 = local_138._0_4_;
                uVar96 = local_138._4_4_;
              }
              dVar76 = dVar98 + (double)local_1b8;
              bVar37 = (bool)(bVar37 ^ 1);
              dVar98 = (double)(float)dVar76;
              fVar66 = (float)dVar76;
            } while (dVar98 <= dVar97);
            uVar62 = SUB84(local_1a8,0);
            uVar64 = (undefined4)((ulonglong)local_1a8 >> 0x20);
          }
          bVar35 = (bool)(bVar35 ^ 1);
          local_1f8 = (float)((double)local_1f8 + (double)CONCAT44(uVar64,uVar62));
        } while ((double)local_1f8 <= local_1a0);
      }
    }
    dVar2 = local_d8;
    dVar49 = local_198;
    pFVar44 = (param_2->AllocatorInstance).Data;
    uVar48 = (uint)__xmm_80000000000000008000000000000000;
    uVar59 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    iVar39 = param_2->ArrayNum;
    pFVar41 = pFVar44 + 0x20;
    dVar98 = (double)CONCAT44((uint)((ulonglong)local_198 >> 0x20) ^ uVar59,
                              SUB84(local_198,0) ^ uVar48);
    pFVar45 = pFVar44 + (longlong)iVar39 * 0x60;
    dVar76 = (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) ^ uVar59,SUB84(dVar28,0) ^ uVar48);
    dStack_1c0 = dVar98;
    local_1c8 = dVar76;
    dVar10 = (double)CONCAT44((uint)((ulonglong)local_190 >> 0x20) ^ uVar59,
                              SUB84(local_190,0) ^ uVar48);
    local_1b8 = dVar10;
    while( true ) {
      if (param_2->ArrayNum != iVar39) {
        `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if (pFVar44 == pFVar45) break;
      auVar81 = *(undefined1 (*) [16])(pFVar44 + 0x10);
      auVar53 = *(undefined1 (*) [16])pFVar44;
      dVar18 = dVar2 * *(double *)&pFVar41[0x30].field_0x0;
      dVar82 = *(double *)(pFVar41 + 0x38) * 0.0;
      auVar80 = *(undefined1 (*) [16])pFVar44;
      dVar33 = *(double *)(pFVar44 + 0x18);
      dVar50 = dVar28 * *(double *)&pFVar41[0x20].field_0x0;
      dVar77 = dVar49 * *(double *)(pFVar41 + 0x28);
      uVar62 = (undefined4)((ulonglong)dVar77 >> 0x20);
      auVar70 = blendpd(auVar53,auVar81,2);
      auVar89._8_4_ = SUB84(dVar77,0);
      auVar89._0_8_ = dVar50;
      auVar89._12_4_ = uVar62;
      dVar9 = auVar81._0_8_;
      auVar90._0_8_ = auVar89._8_8_ * auVar53._0_8_ - auVar53._8_8_ * dVar50;
      auVar90._8_8_ = dVar18 * auVar53._8_8_ - dVar9 * dVar77;
      auVar52._8_4_ = SUB84(dVar77,0);
      auVar52._0_8_ = dVar50;
      auVar52._12_4_ = uVar62;
      auVar12._8_4_ = SUB84(dVar82,0);
      auVar12._0_8_ = dVar18;
      auVar12._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
      auVar53 = blendpd(auVar52,auVar12,2);
      dVar97 = auVar81._8_8_;
      auVar54._0_8_ = auVar53._0_8_ * dVar9 - auVar70._0_8_ * dVar18;
      auVar54._8_8_ = auVar53._8_8_ * dVar97 - auVar70._8_8_ * dVar82;
      auVar53 = blendpd(auVar90,auVar54,2);
      auVar91._0_8_ = auVar53._0_8_ + auVar53._0_8_;
      auVar91._8_8_ = auVar53._8_8_ + auVar53._8_8_;
      dVar82 = auVar90._8_8_ + auVar90._8_8_;
      dVar99 = auVar54._0_8_ + auVar54._0_8_;
      uVar62 = (undefined4)((ulonglong)dVar99 >> 0x20);
      auVar84._8_4_ = SUB84(dVar99,0);
      auVar84._0_8_ = dVar82;
      auVar84._12_4_ = uVar62;
      auVar71._8_4_ = SUB84(dVar99,0);
      auVar71._0_8_ = dVar82;
      auVar71._12_4_ = uVar62;
      auVar53 = blendpd(auVar71,auVar91,2);
      auVar85._0_8_ = auVar84._8_8_ * auVar80._0_8_ - auVar80._8_8_ * dVar82;
      auVar85._8_8_ = auVar91._0_8_ * auVar80._8_8_ - dVar9 * dVar99;
      dVar60 = *(double *)&pFVar41[0x20].field_0x0 * dVar76;
      dVar51 = *(double *)(pFVar41 + 0x28) * dVar98;
      uVar62 = (undefined4)((ulonglong)dVar51 >> 0x20);
      auVar80 = blendpd(auVar80,auVar81,2);
      auVar72._0_8_ = auVar53._0_8_ * dVar9 - auVar80._0_8_ * auVar91._0_8_;
      auVar72._8_8_ = auVar53._8_8_ * dVar97 - auVar80._8_8_ * auVar91._8_8_;
      auVar53 = *(undefined1 (*) [16])pFVar44;
      auVar55._8_4_ = SUB84(auVar85._8_8_,0);
      auVar55._0_8_ = auVar85._0_8_;
      auVar55._12_4_ = (int)((ulonglong)auVar85._8_8_ >> 0x20);
      auVar80 = *(undefined1 (*) [16])pFVar44;
      dVar19 = dVar10 * *(double *)&pFVar41[0x30].field_0x0;
      dVar20 = *(double *)(pFVar41 + 0x38) * 0.0;
      dVar99 = dVar99 * dVar33 + dVar77 + auVar72._0_8_ + *(double *)(pFVar41 + 8);
      auVar70 = blendpd(auVar85,auVar72,2);
      local_1b8 = auVar91._0_8_ * dVar33 + dVar18 + auVar70._0_8_ +
                  *(double *)&pFVar41[0x10].field_0x0;
      unique0x100005ac = SUB84(dVar99,0);
      local_1c8 = dVar82 * dVar33 + dVar50 + auVar55._8_8_ + *(double *)&pFVar41->field_0x0;
      unique0x100005b0 = (int)((ulonglong)dVar99 >> 0x20);
      auVar92._8_4_ = SUB84(dVar51,0);
      auVar92._0_8_ = dVar60;
      auVar92._12_4_ = uVar62;
      auVar70 = blendpd(auVar80,auVar81,2);
      auVar93._0_8_ = auVar92._8_8_ * auVar80._0_8_ - auVar80._8_8_ * dVar60;
      auVar93._8_8_ = dVar19 * auVar80._8_8_ - dVar9 * dVar51;
      auVar56._8_4_ = SUB84(dVar51,0);
      auVar56._0_8_ = dVar60;
      auVar56._12_4_ = uVar62;
      auVar13._8_4_ = SUB84(dVar20,0);
      auVar13._0_8_ = dVar19;
      auVar13._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      auVar80 = blendpd(auVar56,auVar13,2);
      auVar57._0_8_ = auVar80._0_8_ * dVar9 - auVar70._0_8_ * dVar19;
      auVar57._8_8_ = auVar80._8_8_ * dVar97 - auVar70._8_8_ * dVar20;
      auVar80 = blendpd(auVar93,auVar57,2);
      dVar82 = auVar93._8_8_ + auVar93._8_8_;
      dVar99 = auVar57._0_8_ + auVar57._0_8_;
      uVar62 = (undefined4)((ulonglong)dVar99 >> 0x20);
      auVar94._0_8_ = auVar80._0_8_ + auVar80._0_8_;
      auVar94._8_8_ = auVar80._8_8_ + auVar80._8_8_;
      auVar86._8_4_ = SUB84(dVar99,0);
      auVar86._0_8_ = dVar82;
      auVar86._12_4_ = uVar62;
      auVar73._8_4_ = SUB84(dVar99,0);
      auVar73._0_8_ = dVar82;
      auVar73._12_4_ = uVar62;
      auVar80 = blendpd(auVar73,auVar94,2);
      auVar87._0_8_ = auVar86._8_8_ * auVar53._0_8_ - auVar53._8_8_ * dVar82;
      auVar87._8_8_ = auVar94._0_8_ * auVar53._8_8_ - dVar9 * dVar99;
      auVar58._8_4_ = SUB84(auVar87._8_8_,0);
      auVar58._0_8_ = auVar87._0_8_;
      auVar58._12_4_ = (int)((ulonglong)auVar87._8_8_ >> 0x20);
      auVar81 = blendpd(auVar53,auVar81,2);
      auVar74._0_8_ = auVar80._0_8_ * dVar9 - auVar81._0_8_ * auVar94._0_8_;
      auVar74._8_8_ = auVar80._8_8_ * dVar97 - auVar81._8_8_ * auVar94._8_8_;
      auVar81 = blendpd(auVar87,auVar74,2);
      dVar9 = dVar99 * dVar97 + dVar51 + auVar74._0_8_ + *(double *)(pFVar41 + 8);
      local_168 = auVar94._0_8_ * dVar97 + dVar19 + auVar81._0_8_ +
                  *(double *)&pFVar41[0x10].field_0x0;
      unique0x100005d0 = SUB84(dVar9,0);
      local_178 = dVar82 * dVar97 + dVar60 + auVar58._8_8_ + *(double *)&pFVar41->field_0x0;
      unique0x100005d4 = (int)((ulonglong)dVar9 >> 0x20);
      AddBoxEdges(param_7,(TVector<double> *)&local_178,(TVector<double> *)&local_1c8);
      pFVar44 = pFVar44 + 0x60;
      pFVar41 = pFVar41 + 0x60;
    }
  }
  return;
}

// GenerateExplodedViewAttribute @ 14e810f30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FFractureEngineFracturing::GenerateExplodedViewAttribute
          (FManagedArrayCollection *param_1,TVector<double> *param_2,float param_3,int param_4,
          int param_5)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  FName FVar8;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  FName FVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  FName *pFVar24;
  TManagedArray<UE::Math::TVector<float>_> *pTVar25;
  TManagedArray<UE::Math::TTransform<float>_> *pTVar26;
  TManagedArray<int> *pTVar27;
  TManagedArray<int> *pTVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  double dVar35;
  uint local_178;
  ulonglong local_170;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_168;
  float local_158;
  longlong local_150;
  FName local_148;
  undefined4 local_140;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_138;
  TManagedArray<int> *local_128;
  TManagedArray<int> *local_120;
  TManagedArray<int> *local_118;
  TManagedArray<UE::Math::TBox<double>_> *local_110;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_108;
  TManagedArray<int> *local_100;
  FConstructionParameters local_f8;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  TVector<double>_u_0 local_d0 [6];
  
  bVar21 = FManagedArrayCollection::HasAttribute
                     (param_1,FTransformCollection::TransformAttribute,
                      FTransformCollection::TransformGroup);
  FVar17 = FTransformCollection::TransformGroup;
  if (bVar21) {
    uVar29 = 0;
    local_148.ComparisonIndex.Value = 0;
    local_148.Number = 0;
    local_140 = (uint)local_140._2_2_ << 0x10;
    pFVar24 = ::FName::FName(&local_e8,"ExplodedVector");
    local_f8.GroupIndexDependency = local_148;
    FVar8 = *pFVar24;
    local_f8.Saved = (bool)(undefined1)local_140;
    local_f8.bAllowCircularDependency = (bool)local_140._1_1_;
    local_f8._10_2_ = local_140._2_2_;
    bVar21 = FManagedArrayCollection::HasAttribute(param_1,FVar8,FVar17);
    if (!bVar21) {
      FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<float>_>
                (param_1,FVar8,FVar17,&local_f8);
    }
    FManagedArrayCollection::ModifyAttribute<UE::Math::TVector<float>_>(param_1,FVar8,FVar17);
    FVar17 = FTransformCollection::TransformGroup;
    pFVar24 = ::FName::FName(&local_e0,"ExplodedVector");
    bVar21 = FManagedArrayCollection::HasAttribute(param_1,*pFVar24,FVar17);
    if ((!bVar21) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("InOutCollection.HasAttribute(\"ExplodedVector\", FGeometryCollection::TransformGroup)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Fracture\\Source\\FractureEngine\\Private\\FractureEngineFracturing.cpp"
                            ,0x119,L""), bVar21)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FVar17 = FTransformCollection::TransformGroup;
    pFVar24 = ::FName::FName(&local_d8,"ExplodedVector");
    pTVar25 = FManagedArrayCollection::ModifyAttribute<UE::Math::TVector<float>_>
                        (param_1,*pFVar24,FVar17);
    pTVar26 = FManagedArrayCollection::GetAttribute<UE::Math::TTransform<float>_>
                        (param_1,FTransformCollection::TransformAttribute,
                         FTransformCollection::TransformGroup);
    local_100 = FManagedArrayCollection::GetAttribute<int>
                          (param_1,FGeometryCollection::TransformToGeometryIndexAttribute,
                           FTransformCollection::TransformGroup);
    local_110 = FManagedArrayCollection::GetAttribute<UE::Math::TBox<double>_>
                          (param_1,FGeometryCollection::BoundingBoxAttribute,
                           FGeometryCollection::GeometryGroup);
    FGeometryCollectionClusteringUtility::UpdateHierarchyLevelOfChildren(param_1,-1);
    pTVar27 = FManagedArrayCollection::GetAttribute<int>
                        (param_1,FTransformCollection::LevelAttribute,
                         FTransformCollection::TransformGroup);
    local_128 = pTVar27;
    pTVar28 = FManagedArrayCollection::GetAttribute<int>
                        (param_1,FTransformCollection::ParentAttribute,
                         FTransformCollection::TransformGroup);
    local_120 = pTVar28;
    local_108 = FManagedArrayCollection::
                GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                          (param_1,FTransformCollection::ChildrenAttribute,
                           FTransformCollection::TransformGroup);
    local_118 = FManagedArrayCollection::GetAttribute<int>
                          (param_1,FGeometryCollection::SimulationTypeAttribute,
                           FTransformCollection::TransformGroup);
    iVar22 = (**(code **)(*(longlong *)pTVar26 + 0x60))(pTVar26);
    if (0 < iVar22) {
      lVar33 = 0;
      do {
        uVar30 = 0;
        if ((int)uVar29 < *(int *)&pTVar27->field_0x18) {
          uVar30 = ~uVar29 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (param_5 < *(int *)(*(longlong *)&pTVar27->field_0x10 + lVar33 * 4)) {
          uVar30 = 0;
          if ((int)uVar29 < *(int *)&pTVar27->field_0x18) {
            uVar30 = ~uVar29 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          param_5 = *(int *)(*(longlong *)&pTVar27->field_0x10 + lVar33 * 4);
        }
        uVar29 = uVar29 + 1;
        lVar33 = lVar33 + 1;
        pTVar28 = local_120;
      } while (lVar33 < iVar22);
    }
    uVar30 = 0;
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0;
    GeometryCollectionAlgo::
    GlobalMatrices<UE::Math::TTransform<double>,UE::Math::TTransform<float>_>
              (pTVar26,pTVar28,&local_138);
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = 0;
    local_168.ArrayMax = 0;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_168,local_138.ArrayNum,Default);
    local_178 = 0;
    dVar35 = 0.0;
    dVar12 = 0.0;
    dVar13 = 0.0;
    iVar22 = (**(code **)(*(longlong *)pTVar26 + 0x60))();
    dVar14 = 0.0;
    dVar15 = 0.0;
    dVar16 = 0.0;
    uVar29 = uVar30;
    if (0 < iVar22) {
      lVar33 = 0;
      local_150 = (longlong)iVar22;
      lVar34 = 0;
      local_170 = 0;
      do {
        uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uVar31 = ~uVar30 >> 0x1f;
        local_158 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar29 = 0;
        if ((int)uVar30 < *(int *)&pTVar25->field_0x18) {
          uVar29 = uVar31;
        }
        if ((uVar29 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar32 = *(longlong *)&pTVar25->field_0x10;
        *(undefined8 *)(lVar32 + local_170) = uVar2;
        *(float *)(lVar32 + 8 + local_170) = local_158;
        bVar21 = GetValidGeoCenter(param_1,local_100,&local_138,pTVar28,local_108,local_110,
                                   local_118,uVar30,(TVector<double> *)&local_d0[0]._s_0);
        uVar2 = local_d0[0]._s_0.Z;
        uVar20 = local_d0[0]._12_4_;
        uVar19 = local_d0[0]._8_4_;
        uVar18 = local_d0[0]._4_4_;
        uVar7 = local_d0[0]._0_4_;
        if (bVar21) {
          uVar29 = 0;
          if ((int)uVar30 < local_168.ArrayNum) {
            uVar29 = uVar31;
          }
          if ((uVar29 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar1 = local_168.AllocatorInstance.Data + lVar34;
          *(undefined4 *)pFVar1 = uVar7;
          *(undefined4 *)(pFVar1 + 4) = uVar18;
          *(undefined4 *)(pFVar1 + 8) = uVar19;
          *(undefined4 *)(pFVar1 + 0xc) = uVar20;
          *(undefined8 *)(local_168.AllocatorInstance.Data + lVar34 + 0x10) = uVar2;
          if (-1 < param_4) {
            uVar29 = 0;
            if ((int)uVar30 < *(int *)&pTVar27->field_0x18) {
              uVar29 = uVar31;
            }
            if ((uVar29 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (*(int *)(*(longlong *)&pTVar27->field_0x10 + lVar33 * 4) != param_4)
            goto LAB_14e8114ca;
          }
          uVar29 = 0;
          if ((int)uVar30 < local_168.ArrayNum) {
            uVar29 = uVar31;
          }
          if ((uVar29 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          local_178 = local_178 + 1;
          dVar13 = dVar13 + *(double *)(local_168.AllocatorInstance.Data + lVar34 + 0x10);
          dVar35 = dVar35 + *(double *)(local_168.AllocatorInstance.Data + lVar34);
          dVar12 = dVar12 + *(double *)(local_168.AllocatorInstance.Data + lVar34 + 8);
        }
LAB_14e8114ca:
        uVar30 = uVar30 + 1;
        local_170 = local_170 + 0xc;
        lVar33 = lVar33 + 1;
        lVar34 = lVar34 + 0x18;
        dVar14 = dVar35;
        dVar15 = dVar12;
        dVar16 = dVar13;
        uVar29 = local_178;
      } while (lVar33 < local_150);
    }
    local_170 = (ulonglong)(uint)param_5;
    dVar35 = __real_3ff0000000000000 / (double)(int)uVar29;
    if (0 < param_5) {
      do {
        local_150 = (longlong)local_138.ArrayNum;
        uVar29 = 0;
        lVar33 = 0;
        if (0 < local_150) {
          lVar34 = 0;
          lVar32 = 0;
          do {
            if (param_4 < 0) {
LAB_14e811730:
              dVar11 = (double)param_3;
              uVar31 = ~uVar29 >> 0x1f;
              dVar12 = (param_2->field0_0x0)._s_0.X;
              dVar13 = (param_2->field0_0x0)._s_0.Y;
              dVar3 = (param_2->field0_0x0)._s_0.Z;
              uVar30 = 0;
              if ((int)uVar29 < local_168.ArrayNum) {
                uVar30 = uVar31;
              }
              if ((uVar30 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              dVar4 = *(double *)(local_168.AllocatorInstance.Data + lVar32);
              dVar5 = *(double *)(local_168.AllocatorInstance.Data + lVar32 + 8);
              dVar6 = *(double *)(local_168.AllocatorInstance.Data + lVar32 + 0x10);
              uVar30 = 0;
              if ((int)uVar29 < *(int *)&pTVar25->field_0x18) {
                uVar30 = uVar31;
              }
              if ((uVar30 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar9 = *(longlong *)&pTVar25->field_0x10;
              *(float *)(lVar9 + lVar34) =
                   (float)(dVar4 - dVar14 * dVar35) * (float)(dVar11 * dVar12);
              *(float *)(lVar9 + 4 + lVar34) =
                   (float)(dVar5 - dVar15 * dVar35) * (float)(dVar11 * dVar13);
              *(float *)(lVar9 + 8 + lVar34) =
                   (float)(dVar6 - dVar16 * dVar35) * (float)(dVar11 * dVar3);
            }
            else {
              uVar31 = ~uVar29 >> 0x1f;
              uVar30 = 0;
              if ((int)uVar29 < *(int *)&local_128->field_0x18) {
                uVar30 = uVar31;
              }
              if ((uVar30 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pTVar28 = local_120;
              if (*(int *)(*(longlong *)&local_128->field_0x10 + lVar33 * 4) == param_4)
              goto LAB_14e811730;
              uVar30 = 0;
              if ((int)uVar29 < *(int *)&local_120->field_0x18) {
                uVar30 = uVar31;
              }
              if ((uVar30 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              if (-1 < *(int *)(*(longlong *)&pTVar28->field_0x10 + lVar33 * 4)) {
                uVar30 = 0;
                if ((int)uVar29 < *(int *)&pTVar28->field_0x18) {
                  uVar30 = uVar31;
                }
                if ((uVar30 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                uVar30 = *(uint *)(*(longlong *)&pTVar28->field_0x10 + lVar33 * 4);
                uVar23 = 0;
                if ((int)uVar30 < *(int *)&pTVar25->field_0x18) {
                  uVar23 = ~uVar30 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                uVar2 = *(undefined8 *)
                         (*(longlong *)&pTVar25->field_0x10 + (longlong)(int)uVar30 * 0xc);
                uVar7 = *(undefined4 *)
                         (*(longlong *)&pTVar25->field_0x10 + 8 + (longlong)(int)uVar30 * 0xc);
                uVar30 = 0;
                if ((int)uVar29 < *(int *)&pTVar25->field_0x18) {
                  uVar30 = uVar31;
                }
                if ((uVar30 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar9 = *(longlong *)&pTVar25->field_0x10;
                *(undefined8 *)(lVar34 + lVar9) = uVar2;
                *(undefined4 *)(lVar34 + 8 + lVar9) = uVar7;
              }
            }
            uVar29 = uVar29 + 1;
            lVar33 = lVar33 + 1;
            lVar32 = lVar32 + 0x18;
            lVar34 = lVar34 + 0xc;
          } while (lVar33 < local_150);
        }
        local_170 = local_170 - 1;
      } while (local_170 != 0);
    }
    if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
    if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
  }
  return;
}

// GenerateMeshTransforms @ 14e811e50

void __cdecl
FFractureEngineFracturing::GenerateMeshTransforms
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TBox<double> *param_2,int param_3,EMeshCutterCutDistribution param_4,int param_5,
          int param_6,int param_7,int param_8,float param_9,float param_10,float param_11,
          bool param_12,float param_13,float param_14,float param_15)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  FScriptContainerElement *pFVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  TQuat<double> *pTVar15;
  int iVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  int iVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  double dVar31;
  undefined1 local_res20 [8];
  ForAnyElementType local_198;
  int local_190;
  int iStack_18c;
  FRandomStream local_188;
  TVector<double>_u_0 local_180;
  undefined1 local_168 [16];
  double local_158;
  undefined1 local_148 [16];
  undefined1 local_138 [16] [16];
  
  fVar30 = __real_3f800000;
  local_138[0] = *(undefined1 (*) [16])&(param_2->Min).field0_0x0;
  uVar28 = local_138[0]._0_4_;
  uVar29 = local_138[0]._4_4_;
  auVar5 = *(undefined1 (*) [16])((longlong)&(param_2->Min).field0_0x0 + 0x10);
  iVar21 = 0;
  local_198.Data = (FScriptContainerElement *)0x0;
  dVar27 = auVar5._8_8_ - local_138[0]._0_8_;
  dVar25 = (param_2->Max).field0_0x0._s_0.Y - local_138[0]._8_8_;
  local_168._8_4_ = local_138[0]._8_4_;
  local_168._0_8_ = local_138[0]._8_8_;
  local_168._12_4_ = local_138[0]._12_4_;
  dVar7 = auVar5._0_8_;
  dVar26 = (param_2->Max).field0_0x0._s_0.Z - dVar7;
  local_190 = 0;
  iStack_18c = 0;
  local_148._8_4_ = auVar5._8_4_;
  local_148._0_8_ = dVar27;
  local_148._12_4_ = auVar5._12_4_;
  local_188.InitialSeed = param_3;
  local_188.Seed = param_3;
  if (param_4 == UniformRandom) {
    uVar17 = (ulonglong)(uint)param_5;
    if (param_5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar17);
    }
    if (0 < param_5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_5,&local_198,0,&iStack_18c);
      uVar3 = local_168._0_8_;
      do {
        uVar10 = param_3 * 0xbb38435 + 0x3619636b;
        uVar11 = uVar10 * 0xbb38435 + 0x3619636b;
        param_3 = uVar11 * 0xbb38435 + 0x3619636b;
        if (local_190 == iStack_18c) {
          local_190 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_198,&iStack_18c);
        }
        iVar21 = local_190 + 1;
        lVar14 = (longlong)local_190;
        *(double *)(local_198.Data + lVar14 * 0x18) =
             (double)((float)((uint)param_3 >> 9 | 0x3f800000) - fVar30) * dVar27 +
             (double)CONCAT44(uVar29,uVar28);
        *(double *)(local_198.Data + lVar14 * 0x18 + 8) =
             (double)((float)(uVar11 >> 9 | 0x3f800000) - fVar30) * dVar25 + (double)uVar3;
        *(double *)(local_198.Data + lVar14 * 0x18 + 0x10) =
             (double)((float)(uVar10 >> 9 | 0x3f800000) - fVar30) * dVar26 + dVar7;
        uVar17 = uVar17 - 1;
        uVar28 = local_138[0]._0_4_;
        uVar29 = local_138[0]._4_4_;
        dVar27 = (double)local_148._0_8_;
        local_190 = iVar21;
      } while (uVar17 != 0);
    }
  }
  else if (param_4 == Grid) {
    uVar10 = param_6 * param_7 * param_8;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    uVar23 = local_138[0]._8_4_;
    uVar24 = local_138[0]._12_4_;
    if (0 < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar10,&local_198,0,&iStack_18c);
      uVar23 = local_168._0_4_;
      uVar24 = local_168._4_4_;
    }
    dVar9 = __real_3fe0000000000000;
    dVar8 = __real_3ff0000000000000;
    iVar21 = 0;
    iVar13 = local_190;
    if (0 < param_6) {
      dVar22 = __real_3ff0000000000000 / (double)param_6;
      local_158 = dVar22;
      do {
        iVar20 = 0;
        dVar31 = ((double)iVar21 + dVar9) * dVar22;
        if (0 < param_7) {
          do {
            iVar16 = 0;
            if (0 < param_8) {
              do {
                dVar22 = (double)iVar16;
                if (iVar13 == iStack_18c) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&local_198,&iStack_18c);
                }
                lVar14 = (longlong)iVar13;
                iVar13 = iVar13 + 1;
                iVar16 = iVar16 + 1;
                *(double *)(local_198.Data + lVar14 * 0x18) =
                     dVar27 * dVar31 + (double)CONCAT44(uVar29,uVar28);
                *(double *)(local_198.Data + lVar14 * 0x18 + 8) =
                     dVar25 * ((double)iVar20 + dVar9) * (dVar8 / (double)param_7) +
                     (double)CONCAT44(uVar24,uVar23);
                *(double *)(local_198.Data + lVar14 * 0x18 + 0x10) =
                     (dVar22 + dVar9) * (dVar8 / (double)param_8) * dVar26 + dVar7;
                local_190 = iVar13;
              } while (iVar16 < param_8);
              uVar28 = local_138[0]._0_4_;
              uVar29 = local_138[0]._4_4_;
              dVar27 = (double)local_148._0_8_;
            }
            iVar20 = iVar20 + 1;
            uVar23 = local_168._0_4_;
            uVar24 = local_168._4_4_;
            dVar22 = local_158;
          } while (iVar20 < param_7);
        }
        iVar21 = iVar21 + 1;
        uVar23 = local_168._0_4_;
        uVar24 = local_168._4_4_;
        fVar30 = __real_3f800000;
      } while (iVar21 < param_6);
    }
    pFVar19 = local_198.Data + 0x10;
    pFVar2 = local_198.Data + (longlong)iVar13 * 0x18;
    iVar21 = iVar13;
    while( true ) {
      if (iVar21 != iVar13) {
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
        iVar21 = local_190;
      }
      pFVar6 = pFVar19 + -0x10;
      if (pFVar6 == pFVar2) break;
      FRandomStream::GetUnitVector(&local_188,(TVector<double> *)&local_180._s_0);
      dVar26 = (double)param_9;
      param_3 = local_188.Seed * 0xbb38435 + 0x3619636b;
      dVar27 = (double)((float)((uint)param_3 >> 9 | 0x3f800000) - fVar30);
      *(double *)pFVar6 = local_180._s_0.X * dVar27 * dVar26 + *(double *)pFVar6;
      *(double *)(pFVar19 + -8) = local_180._s_0.Y * dVar27 * dVar26 + *(double *)(pFVar19 + -8);
      *(double *)pFVar19 = local_180._s_0.Z * dVar27 * dVar26 + *(double *)pFVar19;
      pFVar19 = pFVar19 + 0x18;
      iVar21 = local_190;
      local_188.Seed = param_3;
    }
  }
  uVar10 = iVar21 + param_1->ArrayNum;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &param_1->ArrayMax;
  if (param_1->ArrayMax < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar10,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    iVar21 = local_190;
  }
  uVar10 = __xmm_80000000800000008000000080000000;
  pFVar19 = local_198.Data + (longlong)iVar21 * 0x18;
  FVar18.Data = local_198.Data;
  iVar13 = iVar21;
  while( true ) {
    if (iVar13 != iVar21) {
      `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (FVar18.Data == pFVar19) break;
    param_3 = param_3 * 0xbb38435 + 0x3619636b;
    dVar27 = ((double)param_11 - (double)param_10) *
             (double)((float)((uint)param_3 >> 9 | 0x3f800000) - __real_3f800000) + (double)param_10
    ;
    local_180._s_0.X = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_180._s_0.Y = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_180._s_0.Z = UE::Math::TRotator<double>::ZeroRotator.Roll;
    if (param_12) {
      uVar11 = param_3 * 0xbb38435 + 0x3619636b;
      uVar12 = uVar11 * 0xbb38435 + 0x3619636b;
      param_3 = uVar12 * 0xbb38435 + 0x3619636b;
      local_180._s_0.X =
           ((double)param_14 - (double)(float)((uint)param_14 ^ uVar10)) *
           (double)((float)((uint)param_3 >> 9 | 0x3f800000) - __real_3f800000) +
           (double)(float)((uint)param_14 ^ uVar10);
      local_180._s_0.Y =
           ((double)param_15 - (double)(float)((uint)param_15 ^ uVar10)) *
           (double)((float)(uVar12 >> 9 | 0x3f800000) - __real_3f800000) +
           (double)(float)((uint)param_15 ^ uVar10);
      local_180._s_0.Z =
           ((double)param_13 - (double)(float)((uint)param_13 ^ uVar10)) *
           (double)((float)(uVar11 >> 9 | 0x3f800000) - __real_3f800000) +
           (double)(float)((uint)param_13 ^ uVar10);
    }
    pTVar15 = UE::Math::TRotator<double>::Quaternion
                        ((TRotator<double> *)&local_180._s_0,(TQuat<double> *)local_138);
    uVar3 = *(undefined8 *)(FVar18.Data + 8);
    uVar28 = *(undefined4 *)FVar18.Data;
    uVar29 = *(undefined4 *)(FVar18.Data + 4);
    uVar23 = *(undefined4 *)(FVar18.Data + 8);
    uVar4 = *(undefined8 *)(FVar18.Data + 0x10);
    dVar26 = pTVar15->X;
    dVar7 = pTVar15->Y;
    dVar25 = pTVar15->Z;
    dVar8 = pTVar15->W;
    iVar13 = param_1->ArrayNum;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1060,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar13 + 1;
    pFVar6 = (param_1->AllocatorInstance).Data;
    lVar14 = (longlong)iVar13 * 0x60;
    FVar18.Data = FVar18.Data + 0x18;
    *(double *)(pFVar6 + lVar14) = dVar26;
    *(double *)(pFVar6 + lVar14 + 8) = dVar7;
    *(double *)(pFVar6 + lVar14 + 0x10) = dVar25;
    *(double *)(pFVar6 + lVar14 + 0x10 + 8) = dVar8;
    pFVar2 = pFVar6 + lVar14 + 0x20;
    *(undefined4 *)pFVar2 = uVar28;
    *(undefined4 *)(pFVar2 + 4) = uVar29;
    *(undefined4 *)(pFVar2 + 8) = uVar23;
    *(int *)(pFVar2 + 0xc) = (int)((ulonglong)uVar3 >> 0x20);
    *(undefined8 *)(pFVar6 + lVar14 + 0x30) = uVar4;
    *(undefined8 *)(pFVar6 + lVar14 + 0x30 + 8) = 0;
    auVar5._8_4_ = SUB84(dVar27,0);
    auVar5._0_8_ = dVar27;
    auVar5._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    *(undefined1 (*) [16])(pFVar6 + lVar14 + 0x40) = auVar5;
    *(double *)(pFVar6 + lVar14 + 0x50) = dVar27;
    *(undefined8 *)(pFVar6 + lVar14 + 0x50 + 8) = 0;
    iVar13 = local_190;
  }
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  return;
}

// GenerateSliceTransforms @ 14e812620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FFractureEngineFracturing::GenerateSliceTransforms
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TBox<double> *param_2,int param_3,int param_4,int param_5,int param_6,float param_7,
          float param_8)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  float fVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  int *piVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  double extraout_XMM0_Qa;
  double dVar26;
  double dVar27;
  double extraout_XMM0_Qb;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  FRandomStream local_res10 [2];
  int local_res20;
  TVector<double>_u_0 local_198;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_148;
  double dStack_140;
  TVector<double>_u_0 local_138;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  
  dVar2 = (param_2->Max).field0_0x0._s_0.Z;
  dVar3 = (param_2->Max).field0_0x0._s_0.Y;
  dVar51 = (param_2->Max).field0_0x0._s_0.X;
  dVar4 = (param_2->Min).field0_0x0._s_0.X;
  dVar8 = ((param_2->Min).field0_0x0._s_0.X + dVar51) * __real_3fe0000000000000;
  dVar12 = ((param_2->Min).field0_0x0._s_0.Y + dVar3) * __real_3fe0000000000000;
  dVar16 = ((param_2->Min).field0_0x0._s_0.Z + dVar2) * __real_3fe0000000000000;
  uVar23 = param_3 * param_4 * param_5;
  dVar3 = (dVar3 - (param_2->Min).field0_0x0._s_0.Y) / (double)(param_4 + 1);
  local_f0 = (dVar2 - (param_2->Min).field0_0x0._s_0.Z) / (double)(param_5 + 1);
  local_res20 = param_4;
  local_178 = dVar16;
  local_170 = dVar8;
  local_118 = dVar3;
  local_110 = dVar12;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  piVar22 = &param_1->ArrayMax;
  piVar1 = &param_1->ArrayNum;
  if (*piVar22 < (int)uVar23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar23,&param_1->AllocatorInstance,*piVar1,piVar22);
  }
  iVar24 = 0;
  iVar25 = 0;
  uVar57 = SUB84(__real_3fe6a09e6ecb41fe,0);
  uVar58 = (undefined4)((ulonglong)__real_3fe6a09e6ecb41fe >> 0x20);
  local_res10[0].InitialSeed = param_6;
  local_res10[0].Seed = param_6;
  if (0 < param_3) {
    local_f8 = (double)param_8;
    local_108 = ___xmm_3ff00000000000003ff0000000000000;
    dStack_100 = _UNK_150689688;
    local_138._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_138._s_0.Y = _UNK_150689518;
    do {
      fVar18 = __real_3f800000;
      FRandomStream::GetUnitVector(local_res10,(TVector<double> *)&local_198._s_0);
      local_158 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X *
                  (double)CONCAT44(uVar58,uVar57);
      uVar23 = local_res10[0].Seed * 0xbb38435 + 0x3619636b;
      local_148 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y *
                  (double)CONCAT44(uVar58,uVar57);
      local_168 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z *
                  (double)CONCAT44(uVar58,uVar57);
      dVar2 = (double)((float)(uVar23 >> 9 | 0x3f800000) - fVar18);
      local_e8 = ((double)iVar25 + __real_3ff0000000000000) *
                 ((dVar51 - dVar4) / (double)(param_3 + 1)) + (param_2->Min).field0_0x0._s_0.X +
                 local_198._s_0.X * dVar2 * local_f8;
      dStack_e0 = local_198._s_0.Y * dVar2 * local_f8 + dVar12;
      local_198._s_0.X = local_198._s_0.Z * dVar2 * local_f8 + dVar16;
      local_198._s_0.Y = 0.0;
      __libm_sse2_sincos_();
      dVar40 = extraout_XMM0_Qa * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
      dVar27 = extraout_XMM0_Qa * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
      local_res10[0].Seed = (uVar23 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b;
      dVar9 = extraout_XMM0_Qa * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
      __libm_sse2_sincos_();
      dVar54 = extraout_XMM0._0_8_;
      dVar53 = dVar54 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
      dVar6 = dVar54 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
      dVar54 = dVar54 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
      dVar26 = extraout_XMM0._8_8_;
      iVar19 = *piVar1;
      auVar41._8_4_ = extraout_XMM0._8_4_;
      auVar41._0_8_ = dVar54;
      auVar41._12_4_ = extraout_XMM0._12_4_;
      auVar28._8_4_ = SUB84(dVar6,0);
      auVar28._0_8_ = dVar53;
      auVar28._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
      dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      auVar29._8_4_ = SUB84(dVar9,0);
      auVar29._0_8_ = dVar9;
      auVar29._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar17 = dVar40 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar53 * extraout_XMM0_Qb + dVar54 * dVar27 * dVar2 + dVar9 * dVar6 * dVar8;
      dVar52 = dVar40 * dVar54 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar28._8_8_ * extraout_XMM0_Qb +
               auVar41._8_8_ * dVar27 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar29._8_8_ * dVar53 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      auVar30._8_4_ = SUB84(__real_3fe6a09e5e333598,0);
      auVar30._0_8_ = __real_3fe6a09e5e333598;
      auVar30._12_4_ = (int)((ulonglong)__real_3fe6a09e5e333598 >> 0x20);
      dVar56 = dVar40 * dVar6 * dVar3 + dVar54 * extraout_XMM0_Qb + dVar27 * dVar53 * dVar16 +
               dVar9 * dVar26 * dVar12;
      dVar27 = dVar40 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dVar26 * extraout_XMM0_Qb +
               dVar27 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar9 * dVar54 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      auVar42._8_4_ = SUB84(local_158,0);
      auVar42._0_8_ = local_158;
      auVar42._12_4_ = (int)((ulonglong)local_158 >> 0x20);
      dVar9 = local_158 * dVar52;
      dVar54 = local_158 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
               + __real_3fe6a09e5e333598 * dVar17;
      dStack_140 = auVar42._8_8_ * dVar56 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                   auVar30._8_8_ * dVar52;
      auVar31._8_4_ = SUB84(local_168,0);
      auVar31._0_8_ = local_168;
      auVar31._12_4_ = (int)((ulonglong)local_168 >> 0x20);
      auVar43._8_4_ = SUB84(local_148,0);
      auVar43._0_8_ = local_148;
      auVar43._12_4_ = (int)((ulonglong)local_148 >> 0x20);
      dVar53 = local_148 * dVar56;
      dVar50 = local_148 * dVar17;
      dVar55 = __real_3fe6a09e5e333598 * dVar56;
      dVar26 = local_168 * dVar52;
      dVar6 = local_168 * dVar27;
      dVar40 = dStack_140 +
               auVar43._8_8_ * dVar27 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar31._8_8_ * dVar17 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar27 = local_158 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
               + __real_3fe6a09e5e333598 * dVar27 +
               local_148 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
               + local_168 * dVar56 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_148 = dVar54;
      if (iVar19 == *piVar22) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&param_1->AllocatorInstance,piVar22);
        *piVar1 = iVar19;
      }
      iVar25 = iVar25 + 1;
      *piVar1 = iVar19 + 1;
      pFVar5 = (param_1->AllocatorInstance).Data;
      lVar21 = (longlong)iVar19 * 0x60;
      auVar14._8_4_ = SUB84(dVar40,0);
      auVar14._0_8_ = dVar54 + dVar53 * dVar2 + dVar26 * dVar8;
      auVar14._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
      *(undefined1 (*) [16])(pFVar5 + lVar21) = auVar14;
      auVar7._8_4_ = SUB84(dVar27,0);
      auVar7._0_8_ = dVar9 * dVar3 + dVar55 + dVar50 * dVar16 + dVar6 * dVar12;
      auVar7._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      *(undefined1 (*) [16])(pFVar5 + lVar21 + 0x10) = auVar7;
      *(double *)(pFVar5 + lVar21 + 0x20) = local_e8;
      *(double *)(pFVar5 + lVar21 + 0x20 + 8) = dStack_e0;
      *(double *)(pFVar5 + lVar21 + 0x30) = local_198._s_0.X;
      *(double *)(pFVar5 + lVar21 + 0x30 + 8) = local_198._s_0.Y;
      *(double *)(pFVar5 + lVar21 + 0x40) = local_108;
      *(double *)(pFVar5 + lVar21 + 0x40 + 8) = dStack_100;
      *(double *)(pFVar5 + lVar21 + 0x50) = local_138._s_0.X;
      *(double *)(pFVar5 + lVar21 + 0x50 + 8) = local_138._s_0.Y;
      uVar57 = SUB84(__real_3fe6a09e6ecb41fe,0);
      uVar58 = (undefined4)((ulonglong)__real_3fe6a09e6ecb41fe >> 0x20);
      dVar8 = local_170;
      dVar12 = local_110;
      dVar16 = local_178;
      dVar3 = local_118;
    } while (iVar25 < param_3);
  }
  iVar25 = local_res20;
  piVar22 = &param_1->ArrayNum;
  iVar19 = 0;
  if (0 < local_res20) {
    local_168 = (double)param_8;
    do {
      dVar2 = local_168;
      fVar18 = __real_3f800000;
      FRandomStream::GetUnitVector(local_res10,(TVector<double> *)&local_138._s_0);
      local_148 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X *
                  __real_3fe6a09e6ecb41fe;
      uVar23 = local_res10[0].Seed * 0xbb38435 + 0x3619636b;
      local_158 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y *
                  __real_3fe6a09e6ecb41fe;
      auVar35._0_8_ =
           UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z * __real_3fe6a09e6ecb41fe;
      dVar51 = (double)((float)(uVar23 >> 9 | 0x3f800000) - fVar18);
      dStack_100 = ((double)iVar19 + __real_3ff0000000000000) * dVar3 +
                   (param_2->Min).field0_0x0._s_0.Y + local_138._s_0.Y * dVar51 * dVar2;
      local_108 = local_138._s_0.X * dVar51 * dVar2 + dVar8;
      local_198._s_0.X = local_138._s_0.Z * dVar51 * dVar2 + dVar16;
      local_198._s_0.Y = 0.0;
      __libm_sse2_sincos_();
      dVar6 = extraout_XMM0_00._0_8_;
      dVar9 = dVar6 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
      dVar16 = dVar6 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
      local_res10[0].Seed = (uVar23 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b;
      dVar6 = dVar6 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
      dVar12 = extraout_XMM0_00._8_8_;
      __libm_sse2_sincos_();
      dVar56 = extraout_XMM0_01._0_8_;
      dVar26 = dVar56 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
      dVar8 = dVar56 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
      dVar56 = dVar56 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
      dVar52 = extraout_XMM0_01._8_8_;
      auVar44._8_4_ = extraout_XMM0_01._8_4_;
      auVar44._0_8_ = dVar56;
      auVar44._12_4_ = extraout_XMM0_01._12_4_;
      auVar32._8_4_ = extraout_XMM0_00._8_4_;
      auVar32._0_8_ = dVar12;
      auVar32._12_4_ = extraout_XMM0_00._12_4_;
      dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      auVar33._8_4_ = SUB84(dVar6,0);
      auVar33._0_8_ = dVar6;
      auVar33._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar27 = dVar9 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar12 * dVar26 +
               dVar56 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar6 * dVar8 * dVar3;
      dVar40 = dVar9 * dVar56 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar32._8_8_ * dVar8 +
               auVar44._8_8_ * dVar16 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar33._8_8_ * dVar26 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      auVar34._8_4_ = SUB84(__real_3fe6a09e5e333598,0);
      auVar34._0_8_ = __real_3fe6a09e5e333598;
      auVar34._12_4_ = (int)((ulonglong)__real_3fe6a09e5e333598 >> 0x20);
      dVar17 = dVar9 * dVar8 * dVar2 + dVar56 * dVar12 + dVar16 * dVar26 * dVar4 +
               dVar6 * dVar52 * dVar51;
      dVar9 = dVar9 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar52 * dVar12 +
              dVar16 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar6 * dVar56 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      auVar45._8_4_ = SUB84(local_148,0);
      auVar45._0_8_ = local_148;
      auVar45._12_4_ = (int)((ulonglong)local_148 >> 0x20);
      dVar8 = local_148 * dVar40;
      local_138._s_0.X =
           local_148 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           __real_3fe6a09e5e333598 * dVar27;
      local_138._s_0.Y =
           auVar45._8_8_ * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
           + auVar34._8_8_ * dVar40;
      auVar35._8_4_ = SUB84(auVar35._0_8_,0);
      auVar35._12_4_ = (int)((ulonglong)auVar35._0_8_ >> 0x20);
      auVar46._8_4_ = SUB84(local_158,0);
      auVar46._0_8_ = local_158;
      auVar46._12_4_ = (int)((ulonglong)local_158 >> 0x20);
      dVar52 = local_158 * dVar27;
      dVar56 = __real_3fe6a09e5e333598 * dVar17;
      dVar16 = local_138._s_0.X +
               local_158 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
      dVar6 = local_138._s_0.Y +
              auVar46._8_8_ * dVar9 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              auVar35._8_8_ * dVar27 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      iVar20 = *piVar22;
      dVar12 = local_148 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
               + __real_3fe6a09e5e333598 * dVar9 +
               local_158 * dVar40 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
               + auVar35._0_8_ * dVar17 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      if (iVar20 == param_1->ArrayMax) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&param_1->AllocatorInstance,&param_1->ArrayMax);
        *piVar22 = iVar20;
      }
      iVar19 = iVar19 + 1;
      *piVar22 = iVar20 + 1;
      pFVar5 = (param_1->AllocatorInstance).Data;
      lVar21 = (longlong)iVar20 * 0x60;
      auVar15._8_4_ = SUB84(dVar6,0);
      auVar15._0_8_ = dVar16 + auVar35._0_8_ * dVar40 * dVar3;
      auVar15._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])(pFVar5 + lVar21) = auVar15;
      auVar10._8_4_ = SUB84(dVar12,0);
      auVar10._0_8_ = dVar8 * dVar2 + dVar56 + dVar52 * dVar4 + auVar35._0_8_ * dVar9 * dVar51;
      auVar10._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      *(undefined1 (*) [16])(pFVar5 + lVar21 + 0x10) = auVar10;
      *(double *)(pFVar5 + lVar21 + 0x20) = local_108;
      *(double *)(pFVar5 + lVar21 + 0x20 + 8) = dStack_100;
      *(double *)(pFVar5 + lVar21 + 0x30) = local_198._s_0.X;
      *(double *)(pFVar5 + lVar21 + 0x30 + 8) = local_198._s_0.Y;
      dVar2 = _UNK_150689688;
      *(double *)(pFVar5 + lVar21 + 0x40) = ___xmm_3ff00000000000003ff0000000000000;
      *(double *)(pFVar5 + lVar21 + 0x40 + 8) = dVar2;
      dVar2 = _UNK_150689518;
      *(double *)(pFVar5 + lVar21 + 0x50) = ___xmm_00000000000000003ff0000000000000;
      *(double *)(pFVar5 + lVar21 + 0x50 + 8) = dVar2;
      dVar3 = local_118;
      dVar8 = local_170;
      dVar16 = local_178;
    } while (iVar19 < iVar25);
  }
  piVar22 = &param_1->ArrayNum;
  if (0 < param_5) {
    dVar2 = (double)param_8;
    do {
      FRandomStream::GetUnitVector(local_res10,(TVector<double> *)&local_198._s_0);
      dVar26 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dVar54 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      uVar23 = local_res10[0].Seed * 0xbb38435 + 0x3619636b;
      local_138._s_0.X = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_138._s_0.Y = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      dVar3 = (double)((float)(uVar23 >> 9 | 0x3f800000) - __real_3f800000);
      dStack_100 = local_198._s_0.Y * dVar3 * dVar2 + local_110;
      local_108 = local_198._s_0.X * dVar3 * dVar2 + local_170;
      local_198._s_0.X =
           ((double)iVar24 + __real_3ff0000000000000) * local_f0 + (param_2->Min).field0_0x0._s_0.Z
           + local_198._s_0.Z * dVar3 * dVar2;
      local_198._s_0.Y = 0.0;
      local_e8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      dStack_e0 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_148 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dStack_140 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      __libm_sse2_sincos_();
      dVar27 = extraout_XMM0_02._0_8_;
      dVar40 = dVar27 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
      dVar9 = dVar27 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
      local_res10[0].Seed = (uVar23 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b;
      dVar27 = dVar27 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
      dVar6 = extraout_XMM0_02._8_8_;
      __libm_sse2_sincos_();
      dVar50 = extraout_XMM0_03._0_8_;
      dVar55 = dVar50 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
      dVar16 = dVar50 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
      dVar50 = dVar50 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
      iVar25 = *piVar22;
      dVar53 = extraout_XMM0_03._8_8_;
      auVar47._8_4_ = extraout_XMM0_03._8_4_;
      auVar47._0_8_ = dVar50;
      auVar47._12_4_ = extraout_XMM0_03._12_4_;
      auVar36._8_4_ = extraout_XMM0_02._8_4_;
      auVar36._0_8_ = dVar6;
      auVar36._12_4_ = extraout_XMM0_02._12_4_;
      dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      auVar37._8_4_ = SUB84(dVar27,0);
      auVar37._0_8_ = dVar27;
      auVar37._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      dVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
      dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar17 = dVar40 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar6 * dVar55 + dVar50 * dVar9 * dVar51 + dVar27 * dVar16 * dVar8;
      dVar52 = dVar40 * dVar50 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar36._8_8_ * dVar16 +
               auVar47._8_8_ * dVar9 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar37._8_8_ * dVar55 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      auVar38._8_4_ = SUB84(local_138._s_0.Y,0);
      auVar38._0_8_ = local_138._s_0.Y;
      auVar38._12_4_ = (int)((ulonglong)local_138._8_8_ >> 0x20);
      dVar56 = dVar40 * dVar16 * dVar3 + dVar50 * dVar6 + dVar9 * dVar55 * dVar12 +
               dVar27 * dVar53 * dVar4;
      dVar6 = dVar40 * dVar55 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar53 * dVar6 +
              dVar9 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar27 * dVar50 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      auVar48._8_4_ = SUB84(dVar26,0);
      auVar48._0_8_ = dVar26;
      auVar48._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      dVar53 = local_138._s_0.Y * dVar56;
      dVar50 = local_138._s_0.Y * dVar6;
      dVar40 = dVar26 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               local_138._s_0.Y * dVar17;
      local_138._s_0.Y =
           auVar48._8_8_ * dVar56 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
           + auVar38._8_8_ * dVar52;
      auVar39._8_4_ = SUB84(local_138._s_0.X,0);
      auVar39._0_8_ = local_138._s_0.X;
      auVar39._12_4_ = (int)((ulonglong)local_138._0_8_ >> 0x20);
      auVar49._8_4_ = SUB84(dVar54,0);
      auVar49._0_8_ = dVar54;
      auVar49._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
      dVar27 = local_138._s_0.X * dVar52;
      dVar16 = local_138._s_0.X * dVar6;
      dVar9 = local_138._s_0.Y +
              auVar49._8_8_ * dVar6 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              auVar39._8_8_ * dVar17 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar6 = dVar26 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar50 + dVar54 * dVar52 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              local_138._s_0.X * dVar56 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_138._s_0.X = dVar40;
      if (iVar25 == param_1->ArrayMax) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&param_1->AllocatorInstance,&param_1->ArrayMax);
        *piVar22 = iVar25;
      }
      iVar24 = iVar24 + 1;
      *piVar22 = iVar25 + 1;
      pFVar5 = (param_1->AllocatorInstance).Data;
      lVar21 = (longlong)iVar25 * 0x60;
      auVar13._8_4_ = SUB84(dVar9,0);
      auVar13._0_8_ = dVar40 + dVar54 * dVar56 * dVar51 + dVar27 * dVar8;
      auVar13._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(pFVar5 + lVar21) = auVar13;
      auVar11._8_4_ = SUB84(dVar6,0);
      auVar11._0_8_ = dVar26 * dVar52 * dVar3 + dVar53 + dVar54 * dVar17 * dVar12 + dVar16 * dVar4;
      auVar11._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])(pFVar5 + lVar21 + 0x10) = auVar11;
      *(double *)(pFVar5 + lVar21 + 0x20) = local_108;
      *(double *)(pFVar5 + lVar21 + 0x20 + 8) = dStack_100;
      *(double *)(pFVar5 + lVar21 + 0x30) = local_198._s_0.X;
      *(double *)(pFVar5 + lVar21 + 0x30 + 8) = local_198._s_0.Y;
      *(double *)(pFVar5 + lVar21 + 0x40) = local_e8;
      *(double *)(pFVar5 + lVar21 + 0x40 + 8) = dStack_e0;
      *(double *)(pFVar5 + lVar21 + 0x50) = local_148;
      *(double *)(pFVar5 + lVar21 + 0x50 + 8) = dStack_140;
    } while (iVar24 < param_5);
  }
  return;
}

// GenerateSliceTransforms @ 14e813510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FFractureEngineFracturing::GenerateSliceTransforms
          (TBox<double> *param_1,int param_2,int param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  undefined1 auVar2 [16];
  FScriptContainerElement *pFVar3;
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  TQuat<double> *pTVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  TRotator<double> local_128;
  TQuat<double> local_108;
  undefined8 local_d8;
  
  local_d8._0_1_ = param_1->IsValid;
  local_d8._1_1_ = param_1->Pad[0];
  local_d8._2_1_ = param_1->Pad[1];
  local_d8._3_1_ = param_1->Pad[2];
  local_d8._4_1_ = param_1->Pad[3];
  local_d8._5_1_ = param_1->Pad[4];
  local_d8._6_1_ = param_1->Pad[5];
  local_d8._7_1_ = param_1->Pad[6];
  dVar6 = (param_1->Max).field0_0x0._s_0.Y;
  dVar7 = (param_1->Max).field0_0x0._s_0.Z;
  uVar24 = (ulonglong)(uint)param_3;
  uVar25 = param_4->ArrayNum + param_3;
  auVar2 = *(undefined1 (*) [16])&(param_1->Min).field0_0x0;
  dVar8 = (param_1->Min).field0_0x0._s_0.Z;
  dVar9 = (param_1->Max).field0_0x0._s_0.X;
  dVar4 = auVar2._8_8_;
  dVar5 = auVar2._0_8_;
  if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
  }
  piVar1 = &param_4->ArrayMax;
  if (param_4->ArrayMax < (int)uVar25) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar25,&param_4->AllocatorInstance,param_4->ArrayNum,piVar1);
  }
  uVar17 = _UNK_150689688;
  uVar16 = ___xmm_3ff00000000000003ff0000000000000;
  uVar15 = _UNK_150689518;
  uVar14 = ___xmm_00000000000000003ff0000000000000;
  fVar29 = __real_3f800000;
  if (0 < param_3) {
    do {
      local_128.Roll = 0.0;
      uVar25 = param_2 * 0xbb38435 + 0x3619636b;
      uVar18 = uVar25 * 0xbb38435 + 0x3619636b;
      uVar19 = uVar18 * 0xbb38435 + 0x3619636b;
      uVar20 = uVar19 * 0xbb38435 + 0x3619636b;
      param_2 = uVar20 * 0xbb38435 + 0x3619636b;
      local_128.Pitch =
           (double)(((float)((uint)param_2 >> 9 | 0x3f800000) - fVar29) * __real_43b40000);
      local_128.Yaw = (double)(((float)(uVar20 >> 9 | 0x3f800000) - fVar29) * __real_43b40000);
      pTVar22 = UE::Math::TRotator<double>::Quaternion(&local_128,&local_108);
      fVar26 = (float)(uVar19 >> 9 | 0x3f800000) - __real_3f800000;
      dVar10 = pTVar22->X;
      dVar11 = pTVar22->Y;
      dVar12 = pTVar22->Z;
      dVar13 = pTVar22->W;
      iVar21 = param_4->ArrayNum;
      dVar28 = (double)((float)(uVar18 >> 9 | 0x3f800000) - __real_3f800000) * (dVar6 - dVar4) +
               dVar4;
      fVar27 = (float)(uVar25 >> 9 | 0x3f800000) - __real_3f800000;
      if (iVar21 == *piVar1) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&param_4->AllocatorInstance,piVar1);
      }
      fVar29 = __real_3f800000;
      param_4->ArrayNum = iVar21 + 1;
      pFVar3 = (param_4->AllocatorInstance).Data;
      lVar23 = (longlong)iVar21 * 0x60;
      *(double *)(pFVar3 + lVar23) = dVar10;
      *(double *)(pFVar3 + lVar23 + 8) = dVar11;
      *(double *)(pFVar3 + lVar23 + 0x10) = dVar12;
      *(double *)(pFVar3 + lVar23 + 0x10 + 8) = dVar13;
      auVar2._8_4_ = SUB84(dVar28,0);
      auVar2._0_8_ = (double)fVar26 * (dVar9 - dVar5) + dVar5;
      auVar2._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      *(undefined1 (*) [16])(pFVar3 + lVar23 + 0x20) = auVar2;
      *(double *)(pFVar3 + lVar23 + 0x30) = (double)fVar27 * (dVar7 - dVar8) + dVar8;
      *(double *)(pFVar3 + lVar23 + 0x30 + 8) = 0.0;
      *(undefined8 *)(pFVar3 + lVar23 + 0x40) = uVar16;
      *(undefined8 *)(pFVar3 + lVar23 + 0x40 + 8) = uVar17;
      *(undefined8 *)(pFVar3 + lVar23 + 0x50) = uVar14;
      *(undefined8 *)(pFVar3 + lVar23 + 0x50 + 8) = uVar15;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  return;
}

// InitColors @ 14e8153e0

void __cdecl FFractureEngineFracturing::InitColors(FManagedArrayCollection *param_1)

{
  undefined4 *puVar1;
  UObject *pUVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  UClass *this;
  TManagedArray<FLinearColor> *pTVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  
  this = Z_Construct_UClass_UDataflowSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar2 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  pTVar11 = FManagedArrayCollection::ModifyAttribute<FLinearColor>
                      (param_1,FGeometryCollection::BoneColorAttribute,
                       FTransformCollection::TransformGroup);
  uVar14 = 0;
  iVar9 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11);
  lVar13 = (longlong)iVar9;
  if (0 < iVar9) {
    lVar12 = 0;
    do {
      uVar4 = *(undefined4 *)&pUVar2[5].field_0x20;
      uVar5 = *(undefined4 *)&pUVar2[5].field_0x24;
      uVar6 = *(undefined4 *)(pUVar2 + 6);
      uVar7 = *(undefined4 *)&pUVar2[6].field_0x4;
      uVar10 = 0;
      if ((int)uVar14 < *(int *)&pTVar11->field_0x18) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar14 = uVar14 + 1;
      puVar1 = (undefined4 *)(*(longlong *)&pTVar11->field_0x10 + lVar12);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      lVar12 = lVar12 + 0x10;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  pTVar11 = FManagedArrayCollection::ModifyAttribute<FLinearColor>
                      (param_1,FGeometryCollection::ColorAttribute,
                       FGeometryCollection::VerticesGroup);
  uVar14 = 0;
  iVar9 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11);
  lVar13 = (longlong)iVar9;
  if (0 < iVar9) {
    lVar12 = 0;
    do {
      uVar4 = *(undefined4 *)&pUVar2[5].field_0x20;
      uVar5 = *(undefined4 *)&pUVar2[5].field_0x24;
      uVar6 = *(undefined4 *)(pUVar2 + 6);
      uVar7 = *(undefined4 *)&pUVar2[6].field_0x4;
      uVar10 = 0;
      if ((int)uVar14 < *(int *)&pTVar11->field_0x18) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar14 = uVar14 + 1;
      puVar1 = (undefined4 *)(lVar12 + *(longlong *)&pTVar11->field_0x10);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      lVar12 = lVar12 + 0x10;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}

// MeshArrayCutter @ 14e817b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __cdecl
FFractureEngineFracturing::MeshArrayCutter
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          FManagedArrayCollection *param_2,FDataflowTransformSelection *param_3,
          TArrayView<UE::Geometry::FDynamicMesh3_const_*,int> *param_4,
          EMeshCutterPerCutMeshSelection param_5,int param_6,float param_7,bool param_8,
          float param_9)

{
  FDynamicMesh3 *pFVar1;
  code *pcVar2;
  double dVar3;
  float fVar4;
  FGeometryCollection *pFVar5;
  FGeometryCollection *pFVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FDynamicMesh3 **ppFVar13;
  uint uVar14;
  ForElementType<unsigned_int> _Dst;
  ulonglong uVar15;
  int iVar16;
  void *_Src;
  uint uVar17;
  ForAnyElementType FVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStackY_2a8 [32];
  uint local_258;
  int local_254;
  undefined1 local_250 [8];
  FGeometryCollection *local_248;
  uint local_240 [2];
  ForAnyElementType local_238;
  undefined8 local_230;
  int local_228;
  uint local_224;
  uint local_220;
  FScriptContainerElement *local_218;
  FInternalSurfaceMaterials *local_210;
  FGeometryCollection **local_208;
  TArray<int,TSizedDefaultAllocator<32>_> *local_200;
  float local_1f8;
  bool local_1f4;
  uint *local_1f0;
  FScriptContainerElement *local_1e8;
  FDynamicMesh3 **local_1e0;
  TArrayView<UE::Geometry::FDynamicMesh3_const_*,int> *local_1d8;
  FScriptContainerElement *local_1d0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_1c8;
  FManagedArrayCollection *local_1c0;
  TArrayView<int_const_,int> local_1b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1a8;
  FInternalSurfaceMaterials local_198;
  TTransform<double> local_168;
  TOptional<UE::Math::TTransform<double>_> local_108;
  FDataflowSelection local_98;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_1d8 = param_4;
  local_1c8 = param_1;
  local_1c0 = param_2;
  iVar11 = FManagedArrayCollection::NumElements(param_2,FTransformCollection::TransformGroup);
  if ((iVar11 == 0) ||
     (local_248 = FManagedArrayCollection::NewCopy<FGeometryCollection>(param_2),
     fVar4 = __real_3f800000, local_248 == (FGeometryCollection *)0x0)) {
    uVar14 = 0xffffffff;
  }
  else {
    local_198.GlobalMaterialID = 0;
    local_198.bGlobalVisibility = true;
    local_198.GlobalUVScale = 1.0;
    local_198.NoiseSettings.bIsSet = false;
    local_240[0] = 0xffffffff;
    local_220 = FManagedArrayCollection::NumElements(param_2,FTransformCollection::TransformGroup);
    local_98.GroupName.ComparisonIndex.Value = *(uint *)&param_3->field_0x0;
    local_98.GroupName.Number = *(uint *)&param_3->field_0x4;
    local_98.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_98.SelectionArray.NumBits = 0;
    local_98.SelectionArray.MaxBits = 0;
    uVar14 = *(int *)&param_3->field_0x20 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar14) {
      uVar12 = 0x80;
      if (0x80 < (int)uVar14) {
        uVar12 = uVar14;
      }
      local_98.SelectionArray._24_8_ = (ulonglong)uVar12 << 0x20;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_98.SelectionArray,0);
    }
    iVar11 = *(int *)&param_3->field_0x20;
    local_98.SelectionArray.NumBits = iVar11;
    if (iVar11 != 0) {
      _Src = *(void **)&param_3->field_0x18;
      if (*(void **)&param_3->field_0x18 == (void *)0x0) {
        _Src = &param_3->field_0x8;
      }
      _Dst = (ForElementType<unsigned_int>)&local_98.SelectionArray;
      if (local_98.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        _Dst = local_98.SelectionArray.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)_Dst,_Src,(ulonglong)(iVar11 + 0x1fU >> 5) << 2);
    }
    RandomReduceSelection((FDataflowTransformSelection *)&local_98,param_6,param_7);
    UE::Private::FractureHelpers::ConvertToLeafSelection
              (local_248,(FDataflowTransformSelection *)&local_98);
    FDataflowSelection::AsArrayValidated(&local_98,&local_1a8,(FManagedArrayCollection *)local_248);
    local_224 = param_1->ArrayNum;
    uVar15 = (ulonglong)(int)local_224;
    iVar11 = 0;
    pFVar20 = (param_1->AllocatorInstance).Data;
    local_228 = 0;
    local_1d0 = pFVar20 + uVar15 * 0x60;
    while( true ) {
      pFVar7 = local_1d0;
      local_1e8 = pFVar20;
      if (param_1->ArrayNum != (int)uVar15) {
        local_250[0] = 0;
        `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_250);
      }
      uVar14 = local_220;
      if (pFVar20 == pFVar7) break;
      local_210 = &local_198;
      local_208 = &local_248;
      local_1f4 = param_8;
      local_1f0 = local_240;
      local_1f8 = param_9;
      local_218 = pFVar20;
      local_200 = &local_1a8;
      if (param_5 == All) {
        ppFVar13 = param_4->DataPtr;
        local_1e0 = ppFVar13 + param_4->ArrayNum;
        if (ppFVar13 != local_1e0) {
          do {
            iVar11 = local_1a8.ArrayNum;
            bVar9 = local_1f4;
            pFVar1 = *ppFVar13;
            local_108.TypedValue.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_108.TypedValue.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_108.TypedValue.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_108.TypedValue.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_108.TypedValue.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_108.TypedValue.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
            local_108.bIsSet = true;
            local_1b8.DataPtr = (int *)local_1a8.AllocatorInstance.Data;
            dVar3 = (double)local_1f8;
            if ((local_1a8.ArrayNum < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar10)) {
              pcVar2 = (code *)swi(3);
              iVar11 = (*pcVar2)();
              return iVar11;
            }
            local_1b8.ArrayNum = iVar11;
            local_168.Rotation.XY.m128d_f64[0] = *(double *)local_218;
            local_168.Rotation.XY.m128d_f64[1] = *(double *)(local_218 + 8);
            local_168.Rotation.ZW.m128d_f64[0] = *(double *)(local_218 + 0x10);
            local_168.Rotation.ZW.m128d_f64[1] = *(double *)(local_218 + 0x18);
            local_168.Translation.XY.m128d_f64[0] = *(double *)(local_218 + 0x20);
            local_168.Translation.XY.m128d_f64[1] = *(double *)(local_218 + 0x28);
            local_168.Translation.ZW.m128d_f64[0] = *(double *)(local_218 + 0x30);
            local_168.Translation.ZW.m128d_f64[1] = *(double *)(local_218 + 0x38);
            local_168.Scale3D.XY.m128d_f64[0] = *(double *)(local_218 + 0x40);
            local_168.Scale3D.XY.m128d_f64[1] = *(double *)(local_218 + 0x48);
            local_168.Scale3D.ZW.m128d_f64[0] = *(double *)(local_218 + 0x50);
            local_168.Scale3D.ZW.m128d_f64[1] = *(double *)(local_218 + 0x58);
            uVar14 = CutWithMesh(pFVar1,&local_168,local_210,local_248,&local_1b8,dVar3,&local_108,
                                 true,(FProgressCancel *)0x0,bVar9);
            UE::Private::FractureHelpers::ProcessNewlyFracturedBones(local_248,uVar14,-1);
            FVar8.Data = local_1a8.AllocatorInstance.Data;
            pFVar20 = local_1a8.AllocatorInstance.Data + (longlong)local_1a8.ArrayNum * 4;
            FVar18.Data = local_1a8.AllocatorInstance.Data;
            while (FVar18.Data != pFVar20) {
              bVar9 = FGeometryCollection::IsVisible(local_248,*(int *)FVar18.Data);
              if (bVar9) {
                FVar18.Data = FVar18.Data + 4;
              }
              else {
                do {
                  pFVar20 = pFVar20 + -4;
                  if (FVar18.Data == pFVar20) goto LAB_14e817fa2;
                  bVar9 = FGeometryCollection::IsVisible(local_248,*(int *)pFVar20);
                } while (!bVar9);
                *(int *)FVar18.Data = *(int *)pFVar20;
                FVar18.Data = FVar18.Data + 4;
              }
            }
LAB_14e817fa2:
            TArray<int,TSizedDefaultAllocator<32>_>::SetNum
                      (&local_1a8,(int)((longlong)FVar18.Data - (longlong)FVar8.Data >> 2),Default);
            pFVar5 = local_248;
            if (*local_1f0 == 0xffffffff) {
              *local_1f0 = uVar14;
            }
            if (-1 < (int)uVar14) {
              uVar12 = 0;
              if ((int)uVar14 < *(int *)&(local_248->TransformIndex).field_0x18) {
                uVar12 = ~uVar14 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar2 = (code *)swi(3);
                iVar11 = (*pcVar2)();
                return iVar11;
              }
              local_254 = *(int *)(*(longlong *)&(pFVar5->TransformIndex).field_0x10 +
                                  (longlong)(int)uVar14 * 4);
              iVar11 = FManagedArrayCollection::NumElements
                                 ((FManagedArrayCollection *)local_248,
                                  FTransformCollection::TransformGroup);
              if (local_254 < iVar11) {
                do {
                  if (((local_1a8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_254)
                      && ((FScriptContainerElement *)&local_254 <
                          local_1a8.AllocatorInstance.Data + (longlong)local_1a8.ArrayMax * 4)) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
                    pcVar2 = (code *)swi(3);
                    iVar11 = (*pcVar2)();
                    return iVar11;
                  }
                  if (local_1a8.ArrayNum == local_1a8.ArrayMax) {
                    local_1a8.ArrayNum =
                         UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_1a8.AllocatorInstance,&local_1a8.ArrayMax);
                  }
                  *(int *)(local_1a8.AllocatorInstance.Data + (longlong)local_1a8.ArrayNum * 4) =
                       local_254;
                  local_254 = local_254 + 1;
                  local_1a8.ArrayNum = local_1a8.ArrayNum + 1;
                  iVar11 = FManagedArrayCollection::NumElements
                                     ((FManagedArrayCollection *)local_248,
                                      FTransformCollection::TransformGroup);
                } while (local_254 < iVar11);
              }
            }
            ppFVar13 = ppFVar13 + 1;
            pFVar20 = local_1e8;
            param_4 = local_1d8;
            iVar11 = local_228;
          } while (ppFVar13 != local_1e0);
        }
      }
      else if (param_5 == Random) {
        if (param_4->ArrayNum < 1) {
          iVar16 = 0;
        }
        else {
          param_6 = param_6 * 0xbb38435 + 0x3619636b;
          iVar16 = (int)(((float)((uint)param_6 >> 9 | 0x3f800000) - fVar4) *
                        (float)param_4->ArrayNum);
        }
        ppFVar13 = TArrayView<UE::Geometry::FDynamicMesh3_const_*,int>::operator[](param_4,iVar16);
        `FFractureEngineFracturing::MeshArrayCutter'::__l12::<lambda_1>::operator()
                  (&local_218,*ppFVar13);
      }
      else if (param_5 == Sequential) {
        ppFVar13 = TArrayView<UE::Geometry::FDynamicMesh3_const_*,int>::operator[](param_4,iVar11);
        `FFractureEngineFracturing::MeshArrayCutter'::__l12::<lambda_1>::operator()
                  (&local_218,*ppFVar13);
        local_228 = (iVar11 + 1) % param_4->ArrayNum;
        iVar11 = local_228;
      }
      else {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Fracture\\Source\\FractureEngine\\Private\\FractureEngineFracturing.cpp"
                           ,0x4f8,L"");
        if (bVar9) {
          pcVar2 = (code *)swi(3);
          iVar11 = (*pcVar2)();
          return iVar11;
        }
      }
      pFVar20 = pFVar20 + 0x60;
      uVar15 = (ulonglong)local_224;
      param_1 = local_1c8;
    }
    if (-1 < (int)local_240[0]) {
      local_258 = local_220;
      local_238.Data = (FScriptContainerElement *)0x0;
      local_230 = 0;
      iVar11 = FManagedArrayCollection::NumElements
                         ((FManagedArrayCollection *)local_248,FTransformCollection::TransformGroup)
      ;
      if ((int)local_258 < iVar11) {
        do {
          pFVar5 = local_248;
          lVar19 = (longlong)(int)local_258;
          uVar12 = 0;
          if ((int)local_258 < *(int *)&(local_248->SimulationType).field_0x18) {
            uVar12 = ~local_258 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar2 = (code *)swi(3);
            iVar11 = (*pcVar2)();
            return iVar11;
          }
          pFVar6 = local_248;
          if (*(int *)(*(longlong *)&(pFVar5->SimulationType).field_0x10 + lVar19 * 4) == 1) {
            lVar19 = (longlong)(int)local_258;
            uVar12 = 0;
            if ((int)local_258 < (int)local_248->_padding_) {
              uVar12 = ~local_258 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar2 = (code *)swi(3);
              iVar11 = (*pcVar2)();
              return iVar11;
            }
            uVar12 = *(uint *)(pFVar6->_padding_ + lVar19 * 4);
            uVar15 = (ulonglong)uVar12;
            if ((int)uVar14 <= (int)uVar12) {
              do {
                pFVar5 = local_248;
                uVar17 = (uint)uVar15;
                uVar12 = 0;
                if ((int)uVar17 < (int)local_248->_padding_) {
                  uVar12 = ~uVar17 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar2 = (code *)swi(3);
                  iVar11 = (*pcVar2)();
                  return iVar11;
                }
                pFVar6 = local_248;
                uVar12 = *(uint *)(pFVar5->_padding_ + (longlong)(int)uVar17 * 4);
                uVar15 = (ulonglong)(int)uVar12;
                uVar17 = 0;
                if ((int)uVar12 < (int)local_248->_padding_) {
                  uVar17 = ~uVar12 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar2 = (code *)swi(3);
                  iVar11 = (*pcVar2)();
                  return iVar11;
                }
              } while ((int)uVar14 <= *(int *)(pFVar6->_padding_ + uVar15 * 4));
              FTransformCollection::ParentTransforms
                        ((FTransformCollection *)local_248,uVar12,local_258);
            }
          }
          else {
            if (((local_238.Data <= (FScriptContainerElement *)&local_258) &&
                ((FScriptContainerElement *)&local_258 <
                 local_238.Data + (longlong)local_230._4_4_ * 4)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar2 = (code *)swi(3);
              iVar11 = (*pcVar2)();
              return iVar11;
            }
            iVar11 = (int)local_230;
            if ((int)local_230 == local_230._4_4_) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_238,(int *)((longlong)&local_230 + 4));
            }
            local_230 = CONCAT44(local_230._4_4_,iVar11 + 1);
            *(uint *)(local_238.Data + (longlong)iVar11 * 4) = local_258;
          }
          local_258 = local_258 + 1;
          iVar11 = FManagedArrayCollection::NumElements
                             ((FManagedArrayCollection *)local_248,
                              FTransformCollection::TransformGroup);
        } while ((int)local_258 < iVar11);
      }
      (**(code **)(local_248->_padding_ + 0x28))
                (local_248,&FTransformCollection::TransformGroup,&local_238,0x100);
      if (local_238.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data);
      }
    }
    FManagedArrayCollection::operator=(local_1c0,(FManagedArrayCollection *)local_248);
    uVar14 = local_240[0];
    if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.AllocatorInstance.Data);
    }
    if (local_98.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_98.SelectionArray.AllocatorInstance.SecondaryData);
    }
    if (local_248 != (FGeometryCollection *)0x0) {
      (**(code **)local_248->_padding_)(local_248,1);
    }
  }
  return uVar14;
}

// MeshCutter @ 14e8184d0

int __cdecl
FFractureEngineFracturing::MeshCutter
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          FManagedArrayCollection *param_2,FDataflowTransformSelection *param_3,
          FDynamicMesh3 *param_4,int param_5,float param_6,bool param_7,float param_8)

{
  int iVar1;
  FDynamicMesh3 *local_res20;
  TArrayView<UE::Geometry::FDynamicMesh3_const_*,int> local_18;
  
  local_18.DataPtr = &local_res20;
  local_18.ArrayNum = 1;
  local_res20 = param_4;
  iVar1 = MeshArrayCutter(param_1,param_2,param_3,&local_18,All,param_5,param_6,param_7,param_8);
  return iVar1;
}

// PlaneCutter @ 14e818550

/* WARNING: Type propagation algorithm not settling */

int __cdecl
FFractureEngineFracturing::PlaneCutter
          (FManagedArrayCollection *param_1,FDataflowTransformSelection *param_2,
          TBox<double> *param_3,TTransform<double> *param_4,int param_5,int param_6,float param_7,
          bool param_8,float param_9,float param_10,float param_11,float param_12,float param_13,
          int param_14,float param_15,bool param_16,float param_17,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_18)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FGeometryCollection *pFVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 uVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 local_218;
  undefined1 local_217 [7];
  ForAnyElementType local_210;
  undefined8 local_208;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_200;
  int local_1f0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1e8;
  FInternalSurfaceMaterials local_1d8;
  FManagedArrayCollection *local_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  TArrayView<int_const_,int> local_188;
  TArrayView<UE::Math::TPlane<double>_const_,int> local_178;
  undefined1 local_168 [16];
  double local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  double local_140;
  undefined1 local_138 [16];
  double local_128;
  TOptional<UE::Math::TTransform<double>_> local_118;
  undefined1 local_a8 [16];
  
  local_1b0 = param_1;
  pFVar11 = FManagedArrayCollection::NewCopy<FGeometryCollection>(param_1);
  if (pFVar11 != (FGeometryCollection *)0x0) {
    local_200.ArrayNum = param_18->ArrayNum;
    lVar15 = (longlong)local_200.ArrayNum;
    local_210.Data = (FScriptContainerElement *)0x0;
    local_208 = 0;
    local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_200.ArrayNum == 0) {
      local_200.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,local_200.ArrayNum,0,&local_200.AllocatorInstance,local_200.ArrayNum,
                 &local_200.ArrayMax);
      memcpy(local_200.AllocatorInstance.Data,param_18->DataPtr,lVar15 * 0x60);
    }
    GenerateSliceTransforms(param_3,param_6,param_5,&local_200);
    iVar9 = local_200.ArrayNum;
    dVar7 = __real_3ff0000000000000;
    uVar12 = (ulonglong)local_200.ArrayNum;
    pFVar13 = local_200.AllocatorInstance.Data + uVar12 * 0x60;
    FVar16.Data = local_200.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar12 != iVar9) {
        local_218 = 0;
        `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_218);
      }
      if (FVar16.Data == pFVar13) break;
      auVar18 = *(undefined1 (*) [16])(FVar16.Data + 0x10);
      dVar19 = auVar18._0_8_;
      local_a8 = *(undefined1 (*) [16])FVar16.Data;
      auVar26 = *(undefined1 (*) [16])FVar16.Data;
      dVar6 = *(double *)(FVar16.Data + 0x18);
      local_140 = dVar7;
      auVar22 = blendpd(local_a8,auVar18,2);
      auVar29._0_8_ = local_a8._0_8_ * 0.0 - local_a8._8_8_ * 0.0;
      auVar29._8_8_ = dVar7 * local_a8._8_8_ - dVar19 * 0.0;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = dVar7;
      auVar17 = blendpd(ZEXT816(0),auVar17,2);
      local_150 = 0;
      uStack_148 = 0;
      auVar23._0_8_ = auVar17._0_8_ * dVar19 - auVar22._0_8_ * dVar7;
      auVar23._8_8_ = auVar17._8_8_ * auVar18._8_8_ - auVar22._8_8_ * 0.0;
      auVar17 = blendpd(auVar29,auVar23,2);
      auVar30._0_8_ = auVar17._0_8_ + auVar17._0_8_;
      auVar30._8_8_ = auVar17._8_8_ + auVar17._8_8_;
      dVar2 = auVar29._8_8_ + auVar29._8_8_;
      dVar3 = auVar23._0_8_ + auVar23._0_8_;
      uVar27 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar24._8_4_ = SUB84(dVar3,0);
      auVar24._0_8_ = dVar2;
      auVar24._12_4_ = uVar27;
      auVar22._8_4_ = SUB84(dVar3,0);
      auVar22._0_8_ = dVar2;
      auVar22._12_4_ = uVar27;
      auVar17 = blendpd(auVar22,auVar30,2);
      auVar23 = blendpd(auVar26,auVar18,2);
      local_138 = *(undefined1 (*) [16])(FVar16.Data + 0x20);
      auVar25._0_8_ = auVar24._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar2;
      auVar25._8_8_ = auVar30._0_8_ * auVar26._8_8_ - dVar19 * dVar3;
      auVar20._0_8_ = auVar17._0_8_ * dVar19 - auVar23._0_8_ * auVar30._0_8_;
      auVar20._8_8_ = auVar17._8_8_ * auVar18._8_8_ - auVar23._8_8_ * auVar30._8_8_;
      local_128 = *(double *)(FVar16.Data + 0x30);
      auVar18._8_4_ = SUB84(auVar25._8_8_,0);
      auVar18._0_8_ = auVar25._0_8_;
      auVar18._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
      auVar26 = blendpd(auVar25,auVar20,2);
      auVar4._4_8_ = auVar20._8_8_;
      auVar4._0_4_ = local_138._4_4_;
      auVar21._0_8_ = auVar4._0_8_ << 0x20;
      auVar21._8_4_ = local_138._8_4_;
      auVar21._12_4_ = local_138._12_4_;
      dVar2 = dVar2 * dVar6 + auVar18._8_8_;
      dVar3 = dVar3 * dVar6 + auVar20._0_8_;
      uVar27 = SUB84(dVar3,0);
      uVar28 = (undefined4)((ulonglong)dVar3 >> 0x20);
      local_198 = auVar30._0_8_ * dVar6 + dVar7 + auVar26._0_8_;
      local_1a8._8_4_ = uVar27;
      local_1a8._0_8_ = dVar2;
      local_1a8._12_4_ = uVar28;
      auVar5._4_8_ = auVar20._0_8_;
      auVar5._0_4_ = (int)((ulonglong)dVar2 >> 0x20);
      auVar26._0_8_ = auVar5._0_8_ << 0x20;
      auVar26._8_4_ = uVar27;
      auVar26._12_4_ = uVar28;
      local_168._8_4_ = uVar27;
      local_168._0_8_ = dVar2;
      local_168._12_4_ = uVar28;
      dStack_190 = auVar21._8_8_ * auVar26._8_8_ + local_138._0_8_ * dVar2 + local_128 * local_198;
      local_158 = local_198;
      if (((local_210.Data <= (TPlane<double> *)local_1a8) &&
          ((TPlane<double> *)local_1a8 <
           (TPlane<double> *)(local_210.Data + (longlong)local_208._4_4_ * 0x20))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar1 = (code *)swi(3);
        iVar9 = (*pcVar1)();
        return iVar9;
      }
      iVar10 = (int)local_208;
      if ((int)local_208 == local_208._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1020,&local_210,(int *)((longlong)&local_208 + 4));
      }
      local_208 = CONCAT44(local_208._4_4_,iVar10 + 1);
      FVar16.Data = FVar16.Data + 0x60;
      *(undefined8 *)&local_210.Data[(longlong)iVar10 * 0x20].field_0x0 = local_1a8._0_8_;
      *(undefined8 *)(local_210.Data + (longlong)iVar10 * 0x20 + 8) = local_1a8._8_8_;
      *(double *)(local_210.Data + (longlong)iVar10 * 0x20 + 0x10) = local_198;
      *(double *)(local_210.Data + (longlong)iVar10 * 0x20 + 0x10 + 8) = dStack_190;
      uVar12 = (ulonglong)(uint)local_200.ArrayNum;
    }
    local_1d8.GlobalMaterialID = 0;
    local_1d8.bGlobalVisibility = true;
    local_1d8.GlobalUVScale = 1.0;
    local_1d8.NoiseSettings.bIsSet = 0.0 < param_10;
    if (local_1d8.NoiseSettings.bIsSet) {
      local_1d8.NoiseSettings.TypedValue.Amplitude = param_10;
      local_1d8.NoiseSettings.TypedValue.Frequency = param_11;
      local_1d8.NoiseSettings.TypedValue.PointSpacing = param_15;
      local_1d8.NoiseSettings.TypedValue.Persistence = param_12;
      local_1d8.NoiseSettings.TypedValue.Lacunarity = param_13;
      local_1d8.NoiseSettings.TypedValue.Octaves = param_14;
    }
    RandomReduceSelection(param_2,param_6,param_7);
    UE::Private::FractureHelpers::ConvertToLeafSelection(pFVar11,param_2);
    FDataflowSelection::AsArrayValidated
              ((FDataflowSelection *)param_2,&local_1e8,(FManagedArrayCollection *)pFVar11);
    iVar9 = FManagedArrayCollection::NumElements(param_1,FTransformCollection::TransformGroup);
    iVar10 = local_1e8.ArrayNum;
    pFVar13 = local_1e8.AllocatorInstance.Data + (longlong)iVar10 * 4;
    uVar14 = local_1e8._8_8_;
    FVar16.Data = local_1e8.AllocatorInstance.Data;
    local_1f0 = iVar9;
    while( true ) {
      if ((int)uVar14 != iVar10) {
        local_217[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_217);
        uVar14 = local_1e8._8_8_;
        iVar9 = local_1f0;
      }
      if (FVar16.Data == pFVar13) {
        local_118.TypedValue.Rotation.XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
        local_118.TypedValue.Rotation.XY.m128d_f64[1] = (param_4->Rotation).XY.m128d_f64[1];
        local_118.TypedValue.Rotation.ZW.m128d_f64[0] = (param_4->Rotation).ZW.m128d_f64[0];
        local_118.TypedValue.Rotation.ZW.m128d_f64[1] = (param_4->Rotation).ZW.m128d_f64[1];
        local_118.TypedValue.Translation.XY.m128d_f64[0] = (param_4->Translation).XY.m128d_f64[0];
        local_118.TypedValue.Translation.XY.m128d_f64[1] = (param_4->Translation).XY.m128d_f64[1];
        local_118.TypedValue.Translation.ZW.m128d_f64[0] = (param_4->Translation).ZW.m128d_f64[0];
        local_118.TypedValue.Translation.ZW.m128d_f64[1] = (param_4->Translation).ZW.m128d_f64[1];
        local_118.TypedValue.Scale3D.XY.m128d_f64[0] = (param_4->Scale3D).XY.m128d_f64[0];
        local_118.TypedValue.Scale3D.XY.m128d_f64[1] = (param_4->Scale3D).XY.m128d_f64[1];
        local_118.TypedValue.Scale3D.ZW.m128d_f64[0] = (param_4->Scale3D).ZW.m128d_f64[0];
        local_118.TypedValue.Scale3D.ZW.m128d_f64[1] = (param_4->Scale3D).ZW.m128d_f64[1];
        local_118.bIsSet = true;
        local_188.DataPtr = (int *)local_1e8.AllocatorInstance.Data;
        iVar9 = (int)uVar14;
        if ((iVar9 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar1 = (code *)swi(3);
          iVar9 = (*pcVar1)();
          return iVar9;
        }
        iVar10 = (int)local_208;
        local_178.DataPtr = (TPlane<double> *)local_210.Data;
        local_188.ArrayNum = iVar9;
        if (((int)local_208 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar1 = (code *)swi(3);
          iVar9 = (*pcVar1)();
          return iVar9;
        }
        local_178.ArrayNum = iVar10;
        iVar9 = CutMultipleWithMultiplePlanes
                          (&local_178,&local_1d8,pFVar11,&local_188,(double)param_9,(double)param_17
                           ,param_6,&local_118,true,(FProgressCancel *)0x0,param_8);
        UE::Private::FractureHelpers::ProcessNewlyFracturedBones(pFVar11,iVar9,-1);
        FManagedArrayCollection::operator=(local_1b0,(FManagedArrayCollection *)pFVar11);
        if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.AllocatorInstance.Data);
        }
        if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.AllocatorInstance.Data);
        }
        if ((TPlane<double> *)local_210.Data != (TPlane<double> *)0x0) {
          FMemory::Free(local_210.Data);
        }
        (**(code **)pFVar11->_padding_)(pFVar11,1);
        if (*(void **)&param_2->field_0x18 == (void *)0x0) {
          return iVar9;
        }
        FMemory::Free(*(void **)&param_2->field_0x18);
        return iVar9;
      }
      if ((*(int *)FVar16.Data < 0) || (iVar9 <= *(int *)FVar16.Data)) break;
      FVar16.Data = FVar16.Data + 4;
    }
    if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.AllocatorInstance.Data);
    }
    if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.AllocatorInstance.Data);
    }
    if ((TPlane<double> *)local_210.Data != (TPlane<double> *)0x0) {
      FMemory::Free(local_210.Data);
    }
    (**(code **)pFVar11->_padding_)(pFVar11,1);
  }
  if (*(void **)&param_2->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x18);
  }
  return -1;
}

// SetBoneColorByAttr @ 14e81d7a0

void __cdecl
FFractureEngineFracturing::SetBoneColorByAttr
          (FManagedArrayCollection *param_1,FString *param_2,float param_3,float param_4,
          FLinearColor *param_5,FLinearColor *param_6)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TManagedArray<float> *pTVar10;
  TManagedArray<FLinearColor> *pTVar11;
  wchar_t *pwVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  FName local_res10;
  FLinearColor_u_0 local_78 [5];
  
  if ((param_2->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res10,pwVar12);
  bVar7 = FManagedArrayCollection::HasAttribute
                    (param_1,local_res10,FTransformCollection::TransformGroup);
  if (bVar7) {
    pTVar10 = FManagedArrayCollection::GetAttribute<float>
                        (param_1,local_res10,FTransformCollection::TransformGroup);
    pTVar11 = FManagedArrayCollection::ModifyAttribute<FLinearColor>
                        (param_1,FGeometryCollection::BoneColorAttribute,
                         FTransformCollection::TransformGroup);
    uVar13 = 0;
    iVar8 = (**(code **)(*(longlong *)pTVar10 + 0x60))(pTVar10);
    fVar4 = __real_3c23d70a;
    if (0 < iVar8) {
      lVar15 = 0;
      lVar14 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar13 < *(int *)&pTVar10->field_0x18) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar16 = *(float *)(*(longlong *)&pTVar10->field_0x10 + lVar14);
        if (fVar16 <= param_3) {
          fVar16 = param_3;
        }
        if (param_4 <= fVar16) {
          fVar16 = param_4;
        }
        if (param_4 < param_3) {
          param_4 = param_3 + fVar4;
        }
        FLinearColor::LerpUsingHSV
                  ((FLinearColor *)&local_78[0]._s_0,param_5,param_6,
                   (fVar16 - param_3) / (param_4 - param_3));
        uVar6 = local_78[0]._8_8_;
        uVar5 = local_78[0]._0_8_;
        uVar9 = 0;
        if ((int)uVar13 < *(int *)&pTVar11->field_0x18) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 4;
        puVar1 = (undefined8 *)(*(longlong *)&pTVar11->field_0x10 + lVar15);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        lVar15 = lVar15 + 0x10;
        iVar8 = (**(code **)(*(longlong *)pTVar10 + 0x60))(pTVar10);
      } while ((int)uVar13 < iVar8);
    }
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// SetBoneColorByCluster @ 14e81da10

void __cdecl
FFractureEngineFracturing::SetBoneColorByCluster
          (FManagedArrayCollection *param_1,FRandomStream *param_2,int param_3,int param_4,
          int param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FName FVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  UClass *this;
  longlong lVar11;
  FName *pFVar12;
  TManagedArray<int> *pTVar13;
  TManagedArray<int> *pTVar14;
  FLinearColor *pFVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ForAnyElementType local_e8;
  int local_e0;
  int iStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint local_c8;
  float local_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  TManagedArray<FLinearColor> *local_b0;
  longlong local_a8;
  longlong local_a0;
  TObjectPtr<UObject>_u_0 local_98;
  longlong local_90;
  FName local_88;
  FLinearColor local_80;
  FLinearColor local_70 [4];
  
  this = Z_Construct_UClass_UDataflowSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  fVar5 = __real_3f800000;
  local_98 = (this->ClassDefaultObject).field0_0x0;
  uVar18 = 1;
  fVar3 = (float)param_4;
  lVar17 = 100;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  iStack_dc = 0;
  fVar4 = (float)param_5 - fVar3;
  do {
    uStack_b8 = 0x3f800000;
    uVar8 = uVar18 * 0xbb38435 + 0x3619636b;
    uVar9 = uVar8 * 0xbb38435 + 0x3619636b;
    uVar18 = uVar9 * 0xbb38435 + 0x3619636b;
    local_c4 = FLinearColor::sRGBToLinearTable
               [(int)(((float)(uVar8 >> 9 | 0x3f800000) - fVar5) * fVar4 + fVar3) & 0xff];
    fStack_c0 = FLinearColor::sRGBToLinearTable
                [(int)(((float)(uVar9 >> 9 | 0x3f800000) - fVar5) * fVar4 + fVar3) & 0xff];
    fStack_bc = FLinearColor::sRGBToLinearTable
                [(int)(((float)(uVar18 >> 9 | 0x3f800000) - fVar5) * fVar4 + fVar3) & 0xff];
    if (((local_e8.Data <= (FScriptContainerElement *)&local_c4) &&
        ((FScriptContainerElement *)&local_c4 < local_e8.Data + (longlong)iStack_dc * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_e0 == iStack_dc) {
      local_e0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&local_e8,&iStack_dc);
    }
    lVar11 = (longlong)local_e0;
    local_e0 = local_e0 + 1;
    *(ulonglong *)(local_e8.Data + lVar11 * 0x10) = CONCAT44(fStack_c0,local_c4);
    *(ulonglong *)(local_e8.Data + lVar11 * 0x10 + 8) = CONCAT44(uStack_b8,fStack_bc);
    FVar6 = FTransformCollection::TransformGroup;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  pFVar12 = ::FName::FName(&local_88,"Parent");
  pTVar13 = FManagedArrayCollection::GetAttribute<int>(param_1,*pFVar12,FVar6);
  pTVar14 = FManagedArrayCollection::GetAttribute<int>
                      (param_1,FTransformCollection::LevelAttribute,
                       FTransformCollection::TransformGroup);
  local_b0 = FManagedArrayCollection::ModifyAttribute<FLinearColor>
                       (param_1,FGeometryCollection::BoneColorAttribute,
                        FTransformCollection::TransformGroup);
  uVar18 = 0;
  iVar10 = (**(code **)(*(longlong *)pTVar13 + 0x60))(pTVar13);
  fVar4 = __real_3b808081;
  fVar3 = __real_3f000000;
  local_90 = (longlong)iVar10;
  if (0 < local_90) {
    local_a0 = 0;
    local_a8 = 0;
    do {
      lVar17 = local_a0;
      lVar11 = local_a8;
      fStack_d4 = FLinearColor::sRGBToLinearTable[FColor::Black.field0_0x0._s_0.G];
      local_d8 = FLinearColor::sRGBToLinearTable[FColor::Black.field0_0x0._s_0.R];
      uVar9 = ~uVar18 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar18 < *(int *)&pTVar14->field_0x18) {
        uVar8 = uVar9;
      }
      fStack_cc = (float)FColor::Black.field0_0x0._3_1_ * fVar4;
      fStack_d0 = FLinearColor::sRGBToLinearTable[FColor::Black.field0_0x0._s_0.B];
      local_c8 = uVar9;
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = uVar18;
      if (*(int *)(*(longlong *)&pTVar14->field_0x10 + lVar11 * 4) < param_3) {
        uVar19 = *(undefined8 *)&local_98.DebugPtr[5].field_0x20;
        uVar20 = *(undefined8 *)(local_98.DebugPtr + 6);
      }
      else {
        for (; uVar8 != 0xffffffff;
            uVar8 = *(uint *)(*(longlong *)&pTVar13->field_0x10 + (longlong)(int)uVar8 * 4)) {
          uVar9 = 0;
          if ((int)uVar8 < *(int *)&pTVar14->field_0x18) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar17 = local_a0;
          uVar9 = local_c8;
          if (*(int *)(*(longlong *)&pTVar14->field_0x10 + (longlong)(int)uVar8 * 4) <= param_3)
          break;
          uVar9 = 0;
          if ((int)uVar8 < *(int *)&pTVar13->field_0x18) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar9 = local_c8;
          lVar17 = local_a0;
        }
        uVar16 = (int)(uVar8 + 1) % local_e0;
        uVar8 = 0;
        if ((int)uVar16 < local_e0) {
          uVar8 = ~uVar16 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        _local_d8 = *(undefined8 *)(local_e8.Data + (longlong)(int)uVar16 * 0x10);
        _fStack_d0 = *(undefined8 *)(local_e8.Data + (longlong)(int)uVar16 * 0x10 + 8);
        pFVar15 = FLinearColor::LinearRGBToHSV((FLinearColor *)&local_d8,&local_80);
        _local_d8 = *(undefined8 *)&pFVar15->field0_0x0;
        fStack_cc = (pFVar15->field0_0x0)._s_0.A;
        fStack_d0 = (pFVar15->field0_0x0)._s_0.B * fVar3;
        pFVar15 = FLinearColor::HSVToLinearRGB((FLinearColor *)&local_d8,local_70);
        uVar19 = *(undefined8 *)&pFVar15->field0_0x0;
        uVar20 = *(undefined8 *)((longlong)&pFVar15->field0_0x0 + 8);
        lVar11 = local_a8;
      }
      uVar8 = 0;
      if ((int)uVar18 < *(int *)&local_b0->field_0x18) {
        uVar8 = uVar9;
      }
      _local_d8 = uVar19;
      _fStack_d0 = uVar20;
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_a8 = lVar11 + 1;
      uVar18 = uVar18 + 1;
      puVar1 = (undefined8 *)(*(longlong *)&local_b0->field_0x10 + lVar17);
      *puVar1 = uVar19;
      puVar1[1] = uVar20;
      local_a0 = lVar17 + 0x10;
    } while (local_a8 < local_90);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  return;
}

// SetBoneColorByLeaf @ 14e81dfe0

void __cdecl
FFractureEngineFracturing::SetBoneColorByLeaf
          (FManagedArrayCollection *param_1,FRandomStream *param_2,int param_3,int param_4,
          int param_5)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UObject *pUVar5;
  code *pcVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  UClass *this;
  TManagedArray<FLinearColor> *pTVar15;
  TManagedArray<int> *pTVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  
  this = Z_Construct_UClass_UDataflowSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar5 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  pTVar15 = FManagedArrayCollection::ModifyAttribute<FLinearColor>
                      (param_1,FGeometryCollection::BoneColorAttribute,
                       FTransformCollection::TransformGroup);
  pTVar16 = FManagedArrayCollection::GetAttribute<int>
                      (param_1,FTransformCollection::LevelAttribute,
                       FTransformCollection::TransformGroup);
  uVar17 = 0;
  iVar12 = (**(code **)(*(longlong *)pTVar15 + 0x60))(pTVar15);
  fVar10 = __real_3f800000;
  if (0 < iVar12) {
    lVar19 = 0;
    lVar18 = 0;
    do {
      uVar20 = ~uVar17 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar17 < *(int *)&pTVar16->field_0x18) {
        uVar13 = uVar20;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(int *)(*(longlong *)&pTVar16->field_0x10 + lVar19 * 4) < param_3) {
        uVar8 = *(undefined8 *)&pUVar5[5].field_0x20;
        uVar9 = *(undefined8 *)(pUVar5 + 6);
        uVar13 = 0;
        if ((int)uVar17 < *(int *)&pTVar15->field_0x18) {
          uVar13 = uVar20;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar1 = (undefined8 *)(*(longlong *)&pTVar15->field_0x10 + lVar18);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
      }
      else {
        fVar4 = (float)param_4;
        uVar13 = param_2->Seed * 0xbb38435 + 0x3619636b;
        fVar7 = (float)param_5 - fVar4;
        uVar14 = uVar13 * 0xbb38435 + 0x3619636b;
        uVar21 = uVar14 * 0xbb38435 + 0x3619636b;
        param_2->Seed = uVar21;
        fVar2 = FLinearColor::sRGBToLinearTable
                [(int)(((float)(uVar13 >> 9 | 0x3f800000) - fVar10) * fVar7 + fVar4) & 0xff];
        fVar3 = FLinearColor::sRGBToLinearTable
                [(int)(((float)(uVar14 >> 9 | 0x3f800000) - fVar10) * fVar7 + fVar4) & 0xff];
        fVar4 = FLinearColor::sRGBToLinearTable
                [(int)(((float)(uVar21 >> 9 | 0x3f800000) - fVar10) * fVar7 + fVar4) & 0xff];
        uVar13 = 0;
        if ((int)uVar17 < *(int *)&pTVar15->field_0x18) {
          uVar13 = uVar20;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar1 = (undefined8 *)(*(longlong *)&pTVar15->field_0x10 + lVar18);
        *puVar1 = CONCAT44(fVar3,fVar2);
        puVar1[1] = CONCAT44(0x3f800000,fVar4);
      }
      uVar17 = uVar17 + 1;
      lVar19 = lVar19 + 1;
      lVar18 = lVar18 + 0x10;
    } while (lVar19 < iVar12);
  }
  return;
}

// SetBoneColorByLeafLevel @ 14e81e2e0

void __cdecl
FFractureEngineFracturing::SetBoneColorByLeafLevel(FManagedArrayCollection *param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  UClass *this;
  TManagedArray<FLinearColor> *pTVar9;
  TManagedArray<int> *pTVar10;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  this = Z_Construct_UClass_UDataflowSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar3 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  iVar2 = *(int *)&pUVar3[5].field_0x18;
  pTVar9 = FManagedArrayCollection::ModifyAttribute<FLinearColor>
                     (param_1,FGeometryCollection::BoneColorAttribute,
                      FTransformCollection::TransformGroup);
  iVar7 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9);
  pTVar10 = FManagedArrayCollection::GetAttribute<int>
                      (param_1,FTransformCollection::LevelAttribute,
                       FTransformCollection::TransformGroup);
  pTVar11 = FManagedArrayCollection::
            GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                      (param_1,FTransformCollection::ChildrenAttribute,
                       FTransformCollection::TransformGroup);
  fVar5 = __real_3b808081;
  uVar15 = 0;
  if (0 < iVar7) {
    lVar14 = 0;
    lVar16 = 0;
    lVar17 = 0;
    do {
      uVar13 = ~uVar15 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar15 < *(int *)&pTVar10->field_0x18) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(int *)(*(longlong *)&pTVar10->field_0x10 + lVar14 * 4) < param_2) {
        fVar19 = *(float *)&pUVar3[5].field_0x20;
        fVar20 = *(float *)&pUVar3[5].field_0x24;
        fVar21 = *(float *)(pUVar3 + 6);
        fVar18 = *(float *)&pUVar3[6].field_0x4;
        uVar8 = 0;
        if ((int)uVar15 < *(int *)&pTVar9->field_0x18) {
          uVar8 = uVar13;
        }
      }
      else {
        uVar8 = 0;
        if ((int)uVar15 < *(int *)&pTVar11->field_0x18) {
          uVar8 = uVar13;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)(lVar17 + 8 + *(longlong *)&pTVar11->field_0x10) ==
            *(int *)(lVar17 + 0x34 + *(longlong *)&pTVar11->field_0x10)) {
          uVar8 = 0;
          if ((int)uVar15 < *(int *)&pTVar10->field_0x18) {
            uVar8 = uVar13;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar12 = *(int *)(*(longlong *)&pTVar10->field_0x10 + lVar14 * 4) % iVar2;
          uVar8 = 0;
          if ((int)uVar12 < *(int *)&pUVar3[5].field_0x18) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pfVar1 = (float *)(*(longlong *)&pUVar3[5].field_0x10 + (longlong)(int)uVar12 * 0x10);
          fVar19 = *pfVar1;
          fVar20 = pfVar1[1];
          fVar21 = pfVar1[2];
          fVar18 = pfVar1[3];
        }
        else {
          fVar19 = FLinearColor::sRGBToLinearTable[FColor::Black.field0_0x0._s_0.R];
          fVar20 = FLinearColor::sRGBToLinearTable[FColor::Black.field0_0x0._s_0.G];
          fVar21 = FLinearColor::sRGBToLinearTable[FColor::Black.field0_0x0._s_0.B];
          fVar18 = (float)FColor::Black.field0_0x0._3_1_ * fVar5;
        }
        uVar8 = 0;
        if ((int)uVar15 < *(int *)&pTVar9->field_0x18) {
          uVar8 = uVar13;
        }
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 1;
      lVar17 = lVar17 + 0x50;
      pfVar1 = (float *)(lVar16 + *(longlong *)&pTVar9->field_0x10);
      *pfVar1 = fVar19;
      pfVar1[1] = fVar20;
      pfVar1[2] = fVar21;
      pfVar1[3] = fVar18;
      lVar16 = lVar16 + 0x10;
    } while (lVar14 < iVar7);
  }
  return;
}

// SetBoneColorByLevel @ 14e81e660

void __cdecl
FFractureEngineFracturing::SetBoneColorByLevel(FManagedArrayCollection *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  UClass *this;
  TManagedArray<FLinearColor> *pTVar8;
  TManagedArray<int> *pTVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  this = Z_Construct_UClass_UDataflowSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar3 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  iVar2 = *(int *)&pUVar3[5].field_0x18;
  pTVar8 = FManagedArrayCollection::ModifyAttribute<FLinearColor>
                     (param_1,FGeometryCollection::BoneColorAttribute,
                      FTransformCollection::TransformGroup);
  iVar6 = (**(code **)(*(longlong *)pTVar8 + 0x60))(pTVar8);
  pTVar9 = FManagedArrayCollection::GetAttribute<int>
                     (param_1,FTransformCollection::LevelAttribute,
                      FTransformCollection::TransformGroup);
  uVar13 = 0;
  if (0 < iVar6) {
    lVar12 = 0;
    lVar11 = 0;
    do {
      if (-1 < param_2) {
        uVar7 = 0;
        if ((int)uVar13 < *(int *)&pTVar9->field_0x18) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)(*(longlong *)&pTVar9->field_0x10 + lVar12 * 4) < param_2) {
          uVar14 = *(undefined4 *)&pUVar3[5].field_0x20;
          uVar15 = *(undefined4 *)&pUVar3[5].field_0x24;
          uVar16 = *(undefined4 *)(pUVar3 + 6);
          uVar17 = *(undefined4 *)&pUVar3[6].field_0x4;
        }
        else {
          uVar10 = param_2 % iVar2;
          uVar7 = 0;
          if ((int)uVar10 < *(int *)&pUVar3[5].field_0x18) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar1 = (undefined4 *)(*(longlong *)&pUVar3[5].field_0x10 + (longlong)(int)uVar10 * 0x10)
          ;
          uVar14 = *puVar1;
          uVar15 = puVar1[1];
          uVar16 = puVar1[2];
          uVar17 = puVar1[3];
        }
        uVar7 = 0;
        if ((int)uVar13 < *(int *)&pTVar8->field_0x18) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar1 = (undefined4 *)(*(longlong *)&pTVar8->field_0x10 + lVar11);
        *puVar1 = uVar14;
        puVar1[1] = uVar15;
        puVar1[2] = uVar16;
        puVar1[3] = uVar17;
      }
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x10;
    } while (lVar12 < iVar6);
  }
  return;
}

// SetBoneColorByParent @ 14e81e880

void __cdecl
FFractureEngineFracturing::SetBoneColorByParent
          (FManagedArrayCollection *param_1,FRandomStream *param_2,int param_3,int param_4,
          int param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  float fVar7;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar8;
  longlong *plVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  TManagedArray<FLinearColor> *pTVar14;
  TManagedArray<int> *pTVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  longlong *plVar21;
  float fVar22;
  undefined1 local_res18 [8];
  int local_res20;
  uint local_168;
  undefined8 local_160;
  longlong local_150;
  longlong local_148;
  FLinearColor_u_0 local_138;
  int local_128;
  int local_124;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_120;
  longlong local_118;
  longlong *local_110;
  int iStack_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined4 local_94;
  
  local_res20 = param_4;
  pTVar14 = FManagedArrayCollection::ModifyAttribute<FLinearColor>
                      (param_1,FGeometryCollection::BoneColorAttribute,
                       FTransformCollection::TransformGroup);
  iVar11 = (**(code **)(*(longlong *)pTVar14 + 0x60))(pTVar14);
  lVar18 = (longlong)iVar11;
  pTVar15 = FManagedArrayCollection::GetAttribute<int>
                      (param_1,FTransformCollection::LevelAttribute,
                       FTransformCollection::TransformGroup);
  local_120 = FManagedArrayCollection::
              GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                        (param_1,FTransformCollection::ChildrenAttribute,
                         FTransformCollection::TransformGroup);
  fVar7 = __real_3f800000;
  local_118 = lVar18;
  if (param_3 == 0) {
    uVar16 = 0;
    fVar4 = (float)param_4;
    uVar12 = param_2->Seed * 0xbb38435 + 0x3619636b;
    uVar13 = uVar12 * 0xbb38435 + 0x3619636b;
    fVar22 = (float)(uVar12 >> 9 | 0x3f800000) - __real_3f800000;
    fVar5 = (float)param_5 - fVar4;
    uVar12 = uVar13 * 0xbb38435 + 0x3619636b;
    param_2->Seed = uVar12;
    fVar3 = FLinearColor::sRGBToLinearTable
            [(byte)(int)(((float)(uVar12 >> 9 | 0x3f800000) - fVar7) * fVar5 + fVar4)];
    if (0 < lVar18) {
      lVar19 = 0;
      local_160 = CONCAT44(FLinearColor::sRGBToLinearTable
                           [(int)(((float)(uVar13 >> 9 | 0x3f800000) - fVar7) * fVar5 + fVar4) &
                            0xff],FLinearColor::sRGBToLinearTable
                                  [(int)(fVar22 * fVar5 + fVar4) & 0xff]);
      do {
        uVar12 = 0;
        if ((int)uVar16 < *(int *)&pTVar14->field_0x18) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar16 = uVar16 + 1;
        puVar1 = (undefined8 *)(lVar19 + *(longlong *)&pTVar14->field_0x10);
        *puVar1 = local_160;
        puVar1[1] = CONCAT44(0x3f800000,fVar3);
        lVar19 = lVar19 + 0x10;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
  }
  else if ((0 < param_3) && (local_168 = 0, 0 < iVar11)) {
    local_148 = 0;
    local_150 = 0;
    do {
      uVar12 = 0;
      if ((int)local_168 < *(int *)&pTVar15->field_0x18) {
        uVar12 = ~local_168 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar8 = local_120;
      if (*(int *)(*(longlong *)&pTVar15->field_0x10 + local_150 * 4) == param_3 + -1) {
        fVar5 = (float)local_res20;
        uVar12 = param_2->Seed * 0xbb38435 + 0x3619636b;
        uVar13 = uVar12 * 0xbb38435 + 0x3619636b;
        fVar22 = (float)param_5 - fVar5;
        uVar16 = uVar13 * 0xbb38435 + 0x3619636b;
        param_2->Seed = uVar16;
        fVar3 = FLinearColor::sRGBToLinearTable
                [(int)(((float)(uVar12 >> 9 | 0x3f800000) - fVar7) * fVar22 + fVar5) & 0xff];
        fVar4 = FLinearColor::sRGBToLinearTable
                [(int)(((float)(uVar13 >> 9 | 0x3f800000) - fVar7) * fVar22 + fVar5) & 0xff];
        fVar5 = FLinearColor::sRGBToLinearTable
                [(int)(((float)(uVar16 >> 9 | 0x3f800000) - fVar7) * fVar22 + fVar5) & 0xff];
        uVar12 = 0;
        if ((int)local_168 < *(int *)&local_120->field_0x18) {
          uVar12 = ~local_168 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iStack_108 = 0;
        plVar21 = (longlong *)(*(longlong *)&pTVar8->field_0x10 + local_148);
        local_f0 = 0;
        iVar11 = (int)plVar21[5];
        local_100 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar21 + 2);
        uStack_104 = 1;
        iStack_f4 = 0;
        if (iVar11 != 0) {
          pTVar20 = local_100;
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar21[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)plVar21[4];
          }
          uVar12 = *(uint *)(pTVar20->AllocatorInstance).InlineData;
          while (uVar12 == 0) {
            lVar18 = (longlong)iStack_108;
            local_f0 = local_f0 + 0x20;
            iStack_108 = iStack_108 + 1;
            iStack_f4 = iVar11;
            if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_108)
            goto LAB_14e81ecef;
            uVar12 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar18 * 4 + 4);
          }
          uStack_104 = -uVar12 & uVar12;
          uVar2 = (ulonglong)uStack_104 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_128 = (int)lVar18;
          iStack_f4 = local_128 + -1 + local_f0;
          if (iVar11 < iStack_f4) {
            iStack_f4 = iVar11;
          }
        }
LAB_14e81ecef:
        uVar12 = *(uint *)(plVar21 + 5);
        uStack_ec = local_94;
        iStack_e8 = (int)plVar21[1] - *(int *)((longlong)plVar21 + 0x34);
        uVar13 = uVar12 & 0xffffffe0;
        TStack_d8._padding_ = CONCAT44(uStack_104,iStack_108);
        uStack_f8 = 0xffffffff;
        TStack_d8.CurrentBitIndex = iStack_f4;
        TStack_d8.UnvisitedBitMask = 0xffffffff;
        iVar17 = (int)uVar12 >> 5;
        TStack_d8._28_4_ = local_94;
        TStack_d8.BaseBitIndex = local_f0;
        uStack_b8 = CONCAT44(uStack_e4,iStack_e8);
        local_110 = plVar21;
        local_e0 = plVar21;
        TStack_d8.Array = local_100;
        if ((((int)uVar12 < 0) || (iVar11 < (int)uVar12)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar16 = *(uint *)(plVar21 + 5);
        if (uVar12 != uVar16) {
          pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar21 + 2);
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar21[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)plVar21[4];
          }
          uVar12 = -1 << ((byte)uVar12 & 0x1f) &
                   *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
          while (uVar12 == 0) {
            lVar18 = (longlong)iVar17;
            uVar13 = uVar13 + 0x20;
            iVar17 = iVar17 + 1;
            uVar12 = uVar16;
            if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_14e81ee00;
            uVar12 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar18 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_124 = (int)lVar18;
          uVar12 = local_124 + -1 + uVar13;
          if ((int)uVar16 < (int)uVar12) {
            uVar12 = uVar16;
          }
        }
LAB_14e81ee00:
        while( true ) {
          plVar9 = local_e0;
          if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
            local_res18[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if (((TStack_d8.CurrentBitIndex == uVar12) &&
              (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar21 + 2))) &&
             (lVar18 = local_118, plVar9 == plVar21)) break;
          local_138._s_0.A = 1.0;
          local_138._s_0.R = fVar3;
          local_138._s_0.G = fVar4;
          local_138._s_0.B = fVar5;
          UE::Dataflow::Private::SetBoneColor
                    (param_1,*(int *)(*plVar9 + (longlong)TStack_d8.CurrentBitIndex * 0xc),
                     (FLinearColor *)&local_138._s_0);
          TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
        }
      }
      local_168 = local_168 + 1;
      local_150 = local_150 + 1;
      local_148 = local_148 + 0x50;
    } while (local_150 < lVar18);
  }
  return;
}

// SetBoneColorRandom @ 14e81ef00

void __cdecl
FFractureEngineFracturing::SetBoneColorRandom
          (FManagedArrayCollection *param_1,FRandomStream *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  TManagedArray<FLinearColor> *pTVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  
  pTVar13 = FManagedArrayCollection::ModifyAttribute<FLinearColor>
                      (param_1,FGeometryCollection::BoneColorAttribute,
                       FTransformCollection::TransformGroup);
  uVar16 = 0;
  iVar10 = (**(code **)(*(longlong *)pTVar13 + 0x60))(pTVar13);
  fVar8 = __real_42c80000;
  fVar7 = __real_40a00000;
  fVar6 = __real_3f800000;
  lVar15 = (longlong)iVar10;
  if (0 < iVar10) {
    lVar14 = 0;
    do {
      uVar11 = param_2->Seed * 0xbb38435 + 0x3619636b;
      uVar12 = uVar11 * 0xbb38435 + 0x3619636b;
      uVar17 = uVar12 * 0xbb38435 + 0x3619636b;
      param_2->Seed = uVar17;
      fVar1 = FLinearColor::sRGBToLinearTable
              [(int)(((float)(uVar11 >> 9 | 0x3f800000) - fVar6) * fVar8 + fVar7) & 0xff];
      fVar2 = FLinearColor::sRGBToLinearTable
              [(int)(((float)(uVar12 >> 9 | 0x3f800000) - fVar6) * fVar8 + fVar7) & 0xff];
      fVar3 = FLinearColor::sRGBToLinearTable
              [(int)(((float)(uVar17 >> 9 | 0x3f800000) - fVar6) * fVar8 + fVar7) & 0xff];
      uVar11 = 0;
      if ((int)uVar16 < *(int *)&pTVar13->field_0x18) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)&pTVar13->field_0x10;
      uVar16 = uVar16 + 1;
      *(float *)(lVar14 + lVar4) = fVar1;
      *(float *)(lVar14 + 4 + lVar4) = fVar2;
      *(float *)(lVar14 + 8 + lVar4) = fVar3;
      *(undefined4 *)(lVar14 + 0xc + lVar4) = 0x3f800000;
      lVar14 = lVar14 + 0x10;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}

// SliceCutter @ 14e821fa0

/* WARNING: Type propagation algorithm not settling */

int __cdecl
FFractureEngineFracturing::SliceCutter
          (FManagedArrayCollection *param_1,FDataflowTransformSelection *param_2,
          TBox<double> *param_3,int param_4,int param_5,int param_6,float param_7,float param_8,
          int param_9,float param_10,bool param_11,float param_12,float param_13,float param_14,
          float param_15,float param_16,int param_17,float param_18,bool param_19,float param_20)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  double dVar6;
  double dVar7;
  FName FVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FGeometryCollection *this;
  FName *pFVar13;
  ulonglong uVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 local_238;
  undefined1 local_237 [7];
  ForAnyElementType local_230;
  undefined8 local_228;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_220;
  TArray<int,TSizedDefaultAllocator<32>_> local_210;
  FInternalSurfaceMaterials local_200;
  FManagedArrayCollection *local_1d8;
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  TArrayView<int_const_,int> local_1a8;
  TArrayView<UE::Math::TPlane<double>_const_,int> local_198;
  FName local_188;
  FName local_180;
  undefined1 local_178 [16];
  double local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  double local_150;
  undefined1 local_148 [16];
  double local_138;
  TOptional<UE::Math::TTransform<double>_> local_128;
  undefined1 local_b8 [16];
  
  local_1d8 = param_1;
  this = FManagedArrayCollection::NewCopy<FGeometryCollection>(param_1);
  if (this != (FGeometryCollection *)0x0) {
    local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_220.ArrayNum = 0;
    local_220.ArrayMax = 0;
    GenerateSliceTransforms(&local_220,param_3,param_4,param_5,param_6,param_9,param_7,param_8);
    uVar14 = local_220._8_8_ & 0xffffffff;
    local_230.Data = (FScriptContainerElement *)0x0;
    local_228 = 0;
    if (local_220.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar14);
    }
    if (0 < local_220.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,local_220.ArrayNum,&local_230,0,(int *)((longlong)&local_228 + 4));
      uVar14 = local_220._8_8_ & 0xffffffff;
    }
    dVar7 = __real_3ff0000000000000;
    iVar10 = (int)uVar14;
    pFVar17 = local_220.AllocatorInstance.Data + (longlong)iVar10 * 0x60;
    FVar16.Data = local_220.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar10) {
        local_238 = 0;
        `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_238);
      }
      if (FVar16.Data == pFVar17) break;
      auVar19 = *(undefined1 (*) [16])(FVar16.Data + 0x10);
      dVar20 = auVar19._0_8_;
      local_b8 = *(undefined1 (*) [16])FVar16.Data;
      auVar27 = *(undefined1 (*) [16])FVar16.Data;
      dVar6 = *(double *)(FVar16.Data + 0x18);
      local_150 = dVar7;
      auVar23 = blendpd(local_b8,auVar19,2);
      auVar30._0_8_ = local_b8._0_8_ * 0.0 - local_b8._8_8_ * 0.0;
      auVar30._8_8_ = dVar7 * local_b8._8_8_ - dVar20 * 0.0;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = dVar7;
      auVar18 = blendpd(ZEXT816(0),auVar18,2);
      local_160 = 0;
      uStack_158 = 0;
      auVar24._0_8_ = auVar18._0_8_ * dVar20 - auVar23._0_8_ * dVar7;
      auVar24._8_8_ = auVar18._8_8_ * auVar19._8_8_ - auVar23._8_8_ * 0.0;
      auVar18 = blendpd(auVar30,auVar24,2);
      auVar31._0_8_ = auVar18._0_8_ + auVar18._0_8_;
      auVar31._8_8_ = auVar18._8_8_ + auVar18._8_8_;
      dVar2 = auVar30._8_8_ + auVar30._8_8_;
      dVar3 = auVar24._0_8_ + auVar24._0_8_;
      uVar28 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar25._8_4_ = SUB84(dVar3,0);
      auVar25._0_8_ = dVar2;
      auVar25._12_4_ = uVar28;
      auVar23._8_4_ = SUB84(dVar3,0);
      auVar23._0_8_ = dVar2;
      auVar23._12_4_ = uVar28;
      auVar18 = blendpd(auVar23,auVar31,2);
      auVar24 = blendpd(auVar27,auVar19,2);
      local_148 = *(undefined1 (*) [16])(FVar16.Data + 0x20);
      auVar26._0_8_ = auVar25._8_8_ * auVar27._0_8_ - auVar27._8_8_ * dVar2;
      auVar26._8_8_ = auVar31._0_8_ * auVar27._8_8_ - dVar20 * dVar3;
      auVar21._0_8_ = auVar18._0_8_ * dVar20 - auVar24._0_8_ * auVar31._0_8_;
      auVar21._8_8_ = auVar18._8_8_ * auVar19._8_8_ - auVar24._8_8_ * auVar31._8_8_;
      local_138 = *(double *)(FVar16.Data + 0x30);
      auVar19._8_4_ = SUB84(auVar26._8_8_,0);
      auVar19._0_8_ = auVar26._0_8_;
      auVar19._12_4_ = (int)((ulonglong)auVar26._8_8_ >> 0x20);
      auVar27 = blendpd(auVar26,auVar21,2);
      auVar4._4_8_ = auVar21._8_8_;
      auVar4._0_4_ = local_148._4_4_;
      auVar22._0_8_ = auVar4._0_8_ << 0x20;
      auVar22._8_4_ = local_148._8_4_;
      auVar22._12_4_ = local_148._12_4_;
      dVar2 = dVar2 * dVar6 + auVar19._8_8_;
      dVar3 = dVar3 * dVar6 + auVar21._0_8_;
      uVar28 = SUB84(dVar3,0);
      uVar29 = (undefined4)((ulonglong)dVar3 >> 0x20);
      local_1b8 = auVar31._0_8_ * dVar6 + dVar7 + auVar27._0_8_;
      local_1c8._8_4_ = uVar28;
      local_1c8._0_8_ = dVar2;
      local_1c8._12_4_ = uVar29;
      auVar5._4_8_ = auVar21._0_8_;
      auVar5._0_4_ = (int)((ulonglong)dVar2 >> 0x20);
      auVar27._0_8_ = auVar5._0_8_ << 0x20;
      auVar27._8_4_ = uVar28;
      auVar27._12_4_ = uVar29;
      local_178._8_4_ = uVar28;
      local_178._0_8_ = dVar2;
      local_178._12_4_ = uVar29;
      dStack_1b0 = auVar22._8_8_ * auVar27._8_8_ + local_148._0_8_ * dVar2 + local_138 * local_1b8;
      local_168 = local_1b8;
      if (((local_230.Data <= (TPlane<double> *)local_1c8) &&
          ((TPlane<double> *)local_1c8 <
           (TPlane<double> *)(local_230.Data + (longlong)local_228._4_4_ * 0x20))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar1 = (code *)swi(3);
        iVar10 = (*pcVar1)();
        return iVar10;
      }
      if ((int)local_228 == local_228._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1020,&local_230,(int *)((longlong)&local_228 + 4));
        local_228 = CONCAT44(local_228._4_4_,iVar11);
      }
      lVar15 = (longlong)(int)local_228;
      FVar16.Data = FVar16.Data + 0x60;
      local_228 = CONCAT44(local_228._4_4_,(int)local_228 + 1);
      *(undefined8 *)&local_230.Data[lVar15 * 0x20].field_0x0 = local_1c8._0_8_;
      *(undefined8 *)(local_230.Data + lVar15 * 0x20 + 8) = local_1c8._8_8_;
      *(double *)(local_230.Data + lVar15 * 0x20 + 0x10) = local_1b8;
      *(double *)(local_230.Data + lVar15 * 0x20 + 0x10 + 8) = dStack_1b0;
      uVar14 = local_220._8_8_ & 0xffffffff;
    }
    local_200.GlobalMaterialID = 0;
    local_200.bGlobalVisibility = true;
    local_200.GlobalUVScale = 1.0;
    local_200.NoiseSettings.bIsSet = 0.0 < param_13;
    if (local_200.NoiseSettings.bIsSet) {
      local_200.NoiseSettings.TypedValue.Amplitude = param_13;
      local_200.NoiseSettings.TypedValue.Frequency = param_14;
      local_200.NoiseSettings.TypedValue.PointSpacing = param_18;
      local_200.NoiseSettings.TypedValue.Persistence = param_15;
      local_200.NoiseSettings.TypedValue.Lacunarity = param_16;
      local_200.NoiseSettings.TypedValue.Octaves = param_17;
    }
    RandomReduceSelection(param_2,param_9,param_10);
    UE::Private::FractureHelpers::ConvertToLeafSelection(this,param_2);
    FDataflowSelection::AsArrayValidated
              ((FDataflowSelection *)param_2,&local_210,(FManagedArrayCollection *)this);
    iVar12 = FManagedArrayCollection::NumElements(param_1,FTransformCollection::TransformGroup);
    iVar10 = local_210.ArrayNum;
    pFVar17 = local_210.AllocatorInstance.Data + (longlong)local_210.ArrayNum * 4;
    FVar16.Data = local_210.AllocatorInstance.Data;
    iVar11 = local_210.ArrayNum;
    while( true ) {
      if (iVar11 != iVar10) {
        local_237[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_237);
        iVar11 = local_210.ArrayNum;
      }
      FVar8 = FGeometryCollection::GeometryGroup;
      if (FVar16.Data == pFVar17) {
        pFVar13 = ::FName::FName(&local_188,"Proximity");
        bVar9 = FManagedArrayCollection::HasAttribute
                          ((FManagedArrayCollection *)this,*pFVar13,FVar8);
        FVar8 = FGeometryCollection::GeometryGroup;
        if (bVar9) {
          pFVar13 = ::FName::FName(&local_180,"Proximity");
          FManagedArrayCollection::RemoveAttribute((FManagedArrayCollection *)this,*pFVar13,FVar8);
        }
        local_128.TypedValue.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_128.TypedValue.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_128.TypedValue.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_128.TypedValue.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_128.TypedValue.Scale3D.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        local_128.TypedValue.Scale3D.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        local_128.bIsSet = true;
        local_1a8.DataPtr = (int *)local_210.AllocatorInstance.Data;
        if ((local_210.ArrayNum < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar1 = (code *)swi(3);
          iVar10 = (*pcVar1)();
          return iVar10;
        }
        local_1a8.ArrayNum = local_210.ArrayNum;
        iVar10 = (int)local_228;
        local_198.DataPtr = (TPlane<double> *)local_230.Data;
        if (((int)local_228 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar1 = (code *)swi(3);
          iVar10 = (*pcVar1)();
          return iVar10;
        }
        local_198.ArrayNum = iVar10;
        iVar10 = CutMultipleWithMultiplePlanes
                           (&local_198,&local_200,this,&local_1a8,(double)param_12,(double)param_20,
                            param_9,&local_128,true,(FProgressCancel *)0x0,param_11);
        UE::Private::FractureHelpers::ProcessNewlyFracturedBones(this,iVar10,-1);
        FManagedArrayCollection::operator=(local_1d8,(FManagedArrayCollection *)this);
        if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.AllocatorInstance.Data);
        }
        if ((TPlane<double> *)local_230.Data != (TPlane<double> *)0x0) {
          FMemory::Free(local_230.Data);
        }
        if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_220.AllocatorInstance.Data);
        }
        (**(code **)this->_padding_)(this,1);
        if (*(void **)&param_2->field_0x18 == (void *)0x0) {
          return iVar10;
        }
        FMemory::Free(*(void **)&param_2->field_0x18);
        return iVar10;
      }
      if ((*(int *)FVar16.Data < 0) || (iVar12 <= *(int *)FVar16.Data)) break;
      FVar16.Data = FVar16.Data + 4;
    }
    if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.AllocatorInstance.Data);
    }
    if ((TPlane<double> *)local_230.Data != (TPlane<double> *)0x0) {
      FMemory::Free(local_230.Data);
    }
    if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.AllocatorInstance.Data);
    }
    (**(code **)this->_padding_)(this,1);
  }
  if (*(void **)&param_2->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x18);
  }
  return -1;
}

// TransferBoneColorToVertexColor @ 14e8229c0

void __cdecl
FFractureEngineFracturing::TransferBoneColorToVertexColor(FManagedArrayCollection *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  TManagedArray<FLinearColor> *pTVar11;
  TManagedArray<int> *pTVar12;
  TManagedArray<int> *pTVar13;
  TManagedArray<int> *pTVar14;
  TManagedArray<FLinearColor> *pTVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  longlong local_res10;
  longlong local_60;
  
  iVar9 = FManagedArrayCollection::NumElements(param_1,FTransformCollection::TransformGroup);
  pTVar11 = FManagedArrayCollection::ModifyAttribute<FLinearColor>
                      (param_1,FGeometryCollection::BoneColorAttribute,
                       FTransformCollection::TransformGroup);
  pTVar12 = FManagedArrayCollection::GetAttribute<int>
                      (param_1,FGeometryCollection::TransformToGeometryIndexAttribute,
                       FTransformCollection::TransformGroup);
  pTVar13 = FManagedArrayCollection::GetAttribute<int>
                      (param_1,FGeometryCollection::VertexStartAttribute,
                       FGeometryCollection::GeometryGroup);
  pTVar14 = FManagedArrayCollection::GetAttribute<int>
                      (param_1,FGeometryCollection::VertexCountAttribute,
                       FGeometryCollection::GeometryGroup);
  pTVar15 = FManagedArrayCollection::ModifyAttribute<FLinearColor>
                      (param_1,FGeometryCollection::ColorAttribute,
                       FGeometryCollection::VerticesGroup);
  uVar18 = 0;
  if (0 < iVar9) {
    local_60 = 0;
    local_res10 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar18 < *(int *)&pTVar12->field_0x18) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = *(uint *)(*(longlong *)&pTVar12->field_0x10 + local_60 * 4);
      if (uVar10 != 0xffffffff) {
        uVar16 = 0;
        if ((int)uVar10 < *(int *)&pTVar13->field_0x18) {
          uVar16 = ~uVar10 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar16 = 0;
        if ((int)uVar10 < *(int *)&pTVar14->field_0x18) {
          uVar16 = ~uVar10 >> 0x1f;
        }
        iVar2 = *(int *)((longlong)(int)uVar10 * 4 + *(longlong *)&pTVar13->field_0x10);
        uVar17 = (ulonglong)iVar2;
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar20 = *(int *)(*(longlong *)&pTVar14->field_0x10 + (longlong)(int)uVar10 * 4) + iVar2;
        if (iVar2 < iVar20) {
          lVar19 = uVar17 << 4;
          do {
            uVar10 = 0;
            if ((int)uVar18 < *(int *)&pTVar11->field_0x18) {
              uVar10 = ~uVar18 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar1 = (undefined4 *)(local_res10 + *(longlong *)&pTVar11->field_0x10);
            uVar4 = *puVar1;
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar7 = puVar1[3];
            uVar16 = (uint)uVar17;
            uVar10 = 0;
            if ((int)uVar16 < *(int *)&pTVar15->field_0x18) {
              uVar10 = ~uVar16 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar17 = (ulonglong)(uVar16 + 1);
            puVar1 = (undefined4 *)(lVar19 + *(longlong *)&pTVar15->field_0x10);
            *puVar1 = uVar4;
            puVar1[1] = uVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar7;
            lVar19 = lVar19 + 0x10;
          } while ((int)(uVar16 + 1) < iVar20);
        }
      }
      local_res10 = local_res10 + 0x10;
      local_60 = local_60 + 1;
      uVar18 = uVar18 + 1;
    } while (local_60 < iVar9);
  }
  return;
}

// UniformFracture @ 14e822d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int __cdecl
FFractureEngineFracturing::UniformFracture
          (FManagedArrayCollection *param_1,FDataflowTransformSelection *param_2,
          FUniformFractureSettings *param_3)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  TUniquePtr<FGeometryCollection,TDefaultDelete<FGeometryCollection>_> TVar5;
  TBox<double> *pTVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FGeometryCollection *this;
  TManagedArray<UE::Math::TTransform<float>_> *pTVar12;
  TManagedArray<int> *pTVar13;
  TManagedArray<UE::Math::TBox<double>_> *pTVar14;
  TMatrix<double> *pTVar15;
  ForElementType<FSetElementId> FVar16;
  uint *puVar17;
  longlong lVar18;
  int iVar19;
  ForAnyElementType FVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
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
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auStack_4e8 [32];
  uint *local_4c8;
  FScriptContainerElement *local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  undefined8 local_4a8;
  undefined1 local_498;
  undefined1 local_497;
  undefined1 local_496 [2];
  uint local_494;
  uint local_490 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_488;
  TArray<int,TSizedDefaultAllocator<32>_> local_478;
  TUniquePtr<FGeometryCollection,TDefaultDelete<FGeometryCollection>_> local_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_428;
  FManagedArrayCollection *local_418;
  FDataflowTransformSelection *local_410;
  TPairInitializer<int_const_&,UE::Math::TBox<double>_&&> local_408;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  uint *local_3c0;
  TBox<double> *local_3b8;
  TSet<TTuple<int,UE::Math::TBox<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
  local_3a8;
  TVector<double>_u_0 local_358;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  int local_2b8;
  int local_2b4;
  int local_2b0;
  int local_2ac;
  undefined1 local_2a8;
  float local_2a4;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined1 local_288;
  float local_284;
  TVector<double>_u_0 local_278;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  undefined1 local_1c8;
  float local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  float local_1a4;
  TBox<double> local_198;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_4e8;
  local_418 = param_1;
  local_410 = param_2;
  this = FManagedArrayCollection::NewCopy<FGeometryCollection>(param_1);
  local_468.Ptr = this;
  if (this != (FGeometryCollection *)0x0) {
    RandomReduceSelection(param_2,param_3->RandomSeed,param_3->ChanceToFracture);
    UE::Private::FractureHelpers::ConvertToLeafSelection(this,param_2);
    FDataflowSelection::AsArrayValidated
              ((FDataflowSelection *)param_2,&local_478,(FManagedArrayCollection *)this);
    iVar8 = FManagedArrayCollection::NumElements(param_1,FTransformCollection::TransformGroup);
    iVar9 = local_478.ArrayNum;
    pFVar1 = local_478.AllocatorInstance.Data + (longlong)local_478.ArrayNum * 4;
    FVar20.Data = local_478.AllocatorInstance.Data;
    iVar19 = local_478.ArrayNum;
    do {
      if (iVar19 != iVar9) {
        local_498 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_498);
        iVar19 = local_478.ArrayNum;
      }
      if (FVar20.Data == pFVar1) {
        pTVar12 = FManagedArrayCollection::GetAttribute<UE::Math::TTransform<float>_>
                            ((FManagedArrayCollection *)this,
                             FTransformCollection::TransformAttribute,
                             FTransformCollection::TransformGroup);
        pTVar13 = FManagedArrayCollection::GetAttribute<int>
                            ((FManagedArrayCollection *)this,
                             FGeometryCollection::TransformToGeometryIndexAttribute,
                             FTransformCollection::TransformGroup);
        pTVar14 = FManagedArrayCollection::GetAttribute<UE::Math::TBox<double>_>
                            ((FManagedArrayCollection *)this,
                             FGeometryCollection::BoundingBoxAttribute,
                             FGeometryCollection::GeometryGroup);
        local_428.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_428.ArrayNum = 0;
        local_428.ArrayMax = 0;
        GeometryCollectionAlgo::
        GlobalMatrices<UE::Math::TTransform<double>,UE::Math::TTransform<float>_>
                  (pTVar12,(TManagedArray<int> *)&this->_padding_,&local_428);
        iVar9 = (**(code **)(*(longlong *)pTVar12 + 0x60))(pTVar12);
        local_3a8.Elements._44_4_ = 0x80;
        local_3a8.Elements._0_8_ = 0;
        iVar19 = -1;
        local_3a8.Elements._8_8_ = 0;
        local_3a8.Elements._32_8_ = 0;
        local_3a8.Elements._40_4_ = 0;
        local_3a8.Elements._48_4_ = 0xffffffff;
        local_3a8.Elements._52_4_ = 0;
        local_3a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_3a8.HashSize = 0;
        local_494 = 0;
        if (0 < iVar9) {
          do {
            uVar11 = local_494;
            uVar10 = 0;
            if ((int)local_494 < *(int *)&pTVar13->field_0x18) {
              uVar10 = ~local_494 >> 0x1f;
            }
            if (uVar10 == 0) {
              local_4c8 = (uint *)(longlong)(int)local_494;
              local_4c0 = (FScriptContainerElement *)(longlong)*(int *)&pTVar13->field_0x18;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                iVar9 = (*pcVar4)();
                return iVar9;
              }
            }
            if (-1 < *(int *)(*(longlong *)&pTVar13->field_0x10 + (longlong)(int)uVar11 * 4)) {
              puVar17 = (uint *)(longlong)(int)local_494;
              uVar11 = 0;
              if ((int)local_494 < *(int *)&pTVar13->field_0x18) {
                uVar11 = ~local_494 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (local_4c8 = puVar17,
                 local_4c0 = (FScriptContainerElement *)(longlong)*(int *)&pTVar13->field_0x18,
                 bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                iVar9 = (*pcVar4)();
                return iVar9;
              }
              uVar11 = *(uint *)(*(longlong *)&pTVar13->field_0x10 + (longlong)puVar17 * 4);
              uVar10 = 0;
              if ((int)uVar11 < *(int *)&pTVar14->field_0x18) {
                uVar10 = ~uVar11 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (local_4c8 = (uint *)(longlong)(int)uVar11,
                 local_4c0 = (FScriptContainerElement *)(longlong)*(int *)&pTVar14->field_0x18,
                 bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                iVar9 = (*pcVar4)();
                return iVar9;
              }
              puVar17 = (uint *)(longlong)(int)local_494;
              lVar18 = *(longlong *)&pTVar14->field_0x10;
              uVar10 = 0;
              if ((int)local_494 < local_428.ArrayNum) {
                uVar10 = ~local_494 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (local_4c8 = puVar17,
                 local_4c0 = (FScriptContainerElement *)(longlong)local_428.ArrayNum,
                 bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                iVar9 = (*pcVar4)();
                return iVar9;
              }
              pTVar15 = UE::Math::TTransform<double>::ToMatrixWithScale
                                  ((TTransform<double> *)
                                   (local_428.AllocatorInstance.Data + (longlong)puVar17 * 0x60),
                                   &local_158);
              UE::Math::TBox<double>::TransformBy
                        ((TBox<double> *)((longlong)(int)uVar11 * 0x38 + lVar18),&local_198,pTVar15)
              ;
              local_3c0 = &local_494;
              local_3b8 = &local_198;
              TSet<TTuple<int,UE::Math::TBox<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TBox<double>,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<int_const_&,UE::Math::TBox<double>_&&>_>
                        (&local_3a8,&local_408,(bool *)&local_3c0);
            }
            local_494 = local_494 + 1;
          } while ((int)local_494 < iVar9);
        }
        iVar9 = local_478.ArrayNum;
        local_3f8 = 0;
        uStack_3f0 = 0;
        local_3e8 = 0;
        uStack_3e0 = 0;
        local_3d8 = 0;
        uStack_3d0 = 0;
        local_3c8 = 0;
        if (param_3->GroupFracture == false) {
          local_408.Value =
               (TBox<double> *)(local_478.AllocatorInstance.Data + (longlong)local_478.ArrayNum * 4)
          ;
          FVar20.Data = local_478.AllocatorInstance.Data;
          do {
            pTVar6 = local_408.Value;
            if (local_478.ArrayNum != iVar9) {
              local_496[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_496);
            }
            TVar5.Ptr = local_468.Ptr;
            if ((TBox<double> *)FVar20.Data == pTVar6) {
              FManagedArrayCollection::operator=(local_418,(FManagedArrayCollection *)local_468.Ptr)
              ;
              local_3a8.HashSize = 0;
              if (local_3a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_3a8.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TBox<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TBox<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_3a8.Elements);
              if (local_428.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_428.AllocatorInstance.Data);
              }
              if (local_478.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_478.AllocatorInstance.Data);
              }
              if (TVar5.Ptr != (FGeometryCollection *)0x0) {
                (**(code **)(TVar5.Ptr)->_padding_)(TVar5.Ptr,1);
              }
              if (*(void **)&local_410->field_0x18 == (void *)0x0) {
                return iVar19;
              }
              FMemory::Free(*(void **)&local_410->field_0x18);
              return iVar19;
            }
            local_490[0] = *(uint *)&(((TBox<double> *)FVar20.Data)->Min).field0_0x0;
            puVar17 = (uint *)(longlong)(int)local_490[0];
            local_488.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_488.ArrayNum = 0;
            local_488.ArrayMax = 0;
            uVar11 = 0;
            if ((int)local_490[0] < *(int *)&pTVar13->field_0x18) {
              uVar11 = ~local_490[0] >> 0x1f;
            }
            iVar8 = 0;
            if (uVar11 == 0) {
              local_4c8 = puVar17;
              local_4c0 = (FScriptContainerElement *)(longlong)*(int *)&pTVar13->field_0x18;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                iVar9 = (*pcVar4)();
                return iVar9;
              }
              iVar8 = local_488.ArrayNum;
            }
            if (-1 < *(int *)(*(longlong *)&pTVar13->field_0x10 + (longlong)puVar17 * 4)) {
              if (local_488.AllocatorInstance.Data <= (FScriptContainerElement *)local_490) {
                if ((FScriptContainerElement *)local_490 <
                    local_488.AllocatorInstance.Data + (longlong)local_488.ArrayMax * 4) {
                  local_4b0 = (longlong)iVar8;
                  local_4a8 = 4;
                  local_4c8 = local_490;
                  local_4c0 = local_488.AllocatorInstance.Data;
                  local_4b8 = (longlong)local_488.ArrayMax;
                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    );
                  if (bVar7) {
                    pcVar4 = (code *)swi(3);
                    iVar9 = (*pcVar4)();
                    return iVar9;
                  }
                  iVar8 = local_488.ArrayNum;
                }
              }
              if (iVar8 == local_488.ArrayMax) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_488.AllocatorInstance,&local_488.ArrayMax);
              }
              local_488.ArrayNum = iVar8 + 1;
              *(uint *)(local_488.AllocatorInstance.Data + (longlong)iVar8 * 4) = local_490[0];
              iVar19 = param_3->RandomSeed + local_490[0];
              if (local_3a8.Elements._8_4_ != local_3a8.Elements._52_4_) {
                FVar16 = (ForElementType<FSetElementId>)&local_3a8.Hash;
                if (local_3a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar16 = local_3a8.Hash.SecondaryData;
                }
                iVar8 = *(int *)((longlong)FVar16 +
                                (ulonglong)(local_3a8.HashSize - 1U & local_490[0]) * 4);
                while (iVar8 != -1) {
                  lVar18 = local_3a8.Elements._0_8_ + (longlong)iVar8 * 0x48;
                  if (*(uint *)(local_3a8.Elements._0_8_ + (longlong)iVar8 * 0x48) == local_490[0])
                  {
                    if (lVar18 == 0) goto LAB_14e82374e;
                    goto LAB_14e823774;
                  }
                  iVar8 = *(int *)(lVar18 + 0x40);
                }
              }
              lVar18 = 0;
LAB_14e82374e:
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L"");
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                iVar9 = (*pcVar4)();
                return iVar9;
              }
LAB_14e823774:
              local_3f8 = *(undefined8 *)(lVar18 + 8);
              uStack_3f0 = *(undefined8 *)(lVar18 + 0x10);
              local_1d8 = param_3->MinVoronoiSites;
              local_3e8 = *(undefined8 *)(lVar18 + 0x18);
              uStack_3e0 = *(undefined8 *)(lVar18 + 0x20);
              local_1d4 = param_3->MaxVoronoiSites;
              local_3d8 = *(undefined8 *)(lVar18 + 0x28);
              uStack_3d0 = *(undefined8 *)(lVar18 + 0x30);
              local_1d0 = param_3->InternalMaterialID;
              local_3c8 = *(undefined8 *)(lVar18 + 0x38);
              local_1c8 = param_3->SplitIslands;
              local_278._s_0.X = *(double *)(lVar18 + 8);
              local_278._s_0.Y = *(double *)(lVar18 + 0x10);
              local_1a8 = param_3->AddSamplesForCollision;
              local_278._s_0.Z = *(double *)(lVar18 + 0x18);
              uStack_260 = *(undefined8 *)(lVar18 + 0x20);
              local_258 = *(undefined8 *)(lVar18 + 0x28);
              uStack_250 = *(undefined8 *)(lVar18 + 0x30);
              local_248 = *(undefined8 *)(lVar18 + 0x38);
              local_238 = (param_3->Transform).Rotation.XY.m128d_f64[0];
              dStack_230 = (param_3->Transform).Rotation.XY.m128d_f64[1];
              local_228 = (param_3->Transform).Rotation.ZW.m128d_f64[0];
              dStack_220 = (param_3->Transform).Rotation.ZW.m128d_f64[1];
              local_218 = (param_3->Transform).Translation.XY.m128d_f64[0];
              dStack_210 = (param_3->Transform).Translation.XY.m128d_f64[1];
              local_208 = (param_3->Transform).Translation.ZW.m128d_f64[0];
              dStack_200 = (param_3->Transform).Translation.ZW.m128d_f64[1];
              local_1f8 = (param_3->Transform).Scale3D.XY.m128d_f64[0];
              dStack_1f0 = (param_3->Transform).Scale3D.XY.m128d_f64[1];
              local_1e8 = (param_3->Transform).Scale3D.ZW.m128d_f64[0];
              dStack_1e0 = (param_3->Transform).Scale3D.ZW.m128d_f64[1];
              local_1c4 = param_3->Grout;
              local_1b0._0_4_ = (param_3->NoiseSettings).Lacunarity;
              local_1b0._4_4_ = (param_3->NoiseSettings).Persistence;
              local_1c0._0_4_ = (param_3->NoiseSettings).Amplitude;
              local_1c0._4_4_ = (param_3->NoiseSettings).Frequency;
              uStack_1b8._0_4_ = (param_3->NoiseSettings).Octaves;
              uStack_1b8._4_4_ = (param_3->NoiseSettings).PointSpacing;
              local_1a4 = param_3->CollisionSampleSpacing;
              local_1cc = iVar19;
              iVar19 = UE::Private::FractureHelpers::UniformFractureProc
                                 (&local_468,&local_488,
                                  (FUniformFractureProcSettings *)&local_278._s_0);
            }
            if (local_488.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_488.AllocatorInstance.Data);
            }
            FVar20.Data = (FScriptContainerElement *)
                          ((longlong)&(((TBox<double> *)FVar20.Data)->Min).field0_0x0 + 4);
          } while( true );
        }
        uVar21 = 0;
        uVar22 = 0;
        uVar23 = 0;
        uVar24 = 0;
        uVar25 = 0;
        uVar26 = 0;
        uVar27 = 0;
        uVar28 = 0;
        uVar29 = 0;
        uVar30 = 0;
        uVar31 = 0;
        uVar32 = 0;
        pFVar1 = local_478.AllocatorInstance.Data + (longlong)local_478.ArrayNum * 4;
        uVar33 = 0;
        uVar34 = 0;
        uVar41 = 0;
        uVar42 = 0;
        uVar43 = 0;
        uVar44 = 0;
        uVar39 = 0;
        uVar40 = 0;
        local_460 = 0;
        uStack_458 = 0;
        local_450 = 0;
        uStack_448 = 0;
        local_440 = 0;
        uStack_438 = 0;
        local_430 = 0;
        uVar35 = 0;
        uVar36 = 0;
        uVar37 = 0;
        uVar38 = 0;
        FVar20.Data = local_478.AllocatorInstance.Data;
        do {
          if (local_478.ArrayNum != iVar9) {
            local_497 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_497);
          }
          if (FVar20.Data == pFVar1) {
            local_318 = (param_3->Transform).Rotation.XY.m128d_f64[0];
            dStack_310 = (param_3->Transform).Rotation.XY.m128d_f64[1];
            local_2b8 = param_3->MinVoronoiSites;
            local_328 = local_430;
            local_308 = (param_3->Transform).Rotation.ZW.m128d_f64[0];
            dStack_300 = (param_3->Transform).Rotation.ZW.m128d_f64[1];
            local_2b4 = param_3->MaxVoronoiSites;
            local_2e8 = (param_3->Transform).Translation.ZW.m128d_f64[0];
            dStack_2e0 = (param_3->Transform).Translation.ZW.m128d_f64[1];
            local_2b0 = param_3->InternalMaterialID;
            local_2c8 = (param_3->Transform).Scale3D.ZW.m128d_f64[0];
            dStack_2c0 = (param_3->Transform).Scale3D.ZW.m128d_f64[1];
            local_2ac = param_3->RandomSeed;
            local_2f8 = (param_3->Transform).Translation.XY.m128d_f64[0];
            dStack_2f0 = (param_3->Transform).Translation.XY.m128d_f64[1];
            local_2a8 = param_3->SplitIslands;
            local_2a4 = param_3->Grout;
            local_2d8 = (param_3->Transform).Scale3D.XY.m128d_f64[0];
            dStack_2d0 = (param_3->Transform).Scale3D.XY.m128d_f64[1];
            local_288 = param_3->AddSamplesForCollision;
            local_290._0_4_ = (param_3->NoiseSettings).Lacunarity;
            local_290._4_4_ = (param_3->NoiseSettings).Persistence;
            local_2a0._0_4_ = (param_3->NoiseSettings).Amplitude;
            local_2a0._4_4_ = (param_3->NoiseSettings).Frequency;
            uStack_298._0_4_ = (param_3->NoiseSettings).Octaves;
            uStack_298._4_4_ = (param_3->NoiseSettings).PointSpacing;
            local_284 = param_3->CollisionSampleSpacing;
            local_358._0_4_ = uVar21;
            local_358._4_4_ = uVar22;
            local_358._8_4_ = uVar23;
            local_358._12_4_ = uVar24;
            local_358._16_4_ = uVar25;
            local_358._20_4_ = uVar26;
            uStack_340 = uVar27;
            uStack_33c = uVar28;
            local_338 = uVar29;
            uStack_334 = uVar30;
            uStack_330 = uVar31;
            uStack_32c = uVar32;
            iVar9 = UE::Private::FractureHelpers::UniformFractureProc
                              (&local_468,&local_478,(FUniformFractureProcSettings *)&local_358._s_0
                              );
            TVar5.Ptr = local_468.Ptr;
            FManagedArrayCollection::operator=(local_418,(FManagedArrayCollection *)local_468.Ptr);
            local_3a8.HashSize = 0;
            if (local_3a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_3a8.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TBox<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TBox<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_3a8.Elements);
            if (local_428.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_428.AllocatorInstance.Data);
            }
            if (local_478.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_478.AllocatorInstance.Data);
            }
            if (TVar5.Ptr != (FGeometryCollection *)0x0) {
              (**(code **)(TVar5.Ptr)->_padding_)(TVar5.Ptr,1);
            }
            if (*(void **)&local_410->field_0x18 == (void *)0x0) {
              return iVar9;
            }
            FMemory::Free(*(void **)&local_410->field_0x18);
            return iVar9;
          }
          uVar11 = *(uint *)&(FVar20.Data)->field_0x0;
          uVar10 = 0;
          if ((int)uVar11 < *(int *)&pTVar13->field_0x18) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if (uVar10 == 0) {
            local_4c8 = (uint *)(longlong)(int)uVar11;
            local_4c0 = (FScriptContainerElement *)(longlong)*(int *)&pTVar13->field_0x18;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              iVar9 = (*pcVar4)();
              return iVar9;
            }
          }
          if (-1 < *(int *)(*(longlong *)&pTVar13->field_0x10 + (longlong)(int)uVar11 * 4)) {
            if (local_3a8.Elements._8_4_ != local_3a8.Elements._52_4_) {
              FVar16 = (ForElementType<FSetElementId>)&local_3a8.Hash;
              if (local_3a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar16 = local_3a8.Hash.SecondaryData;
              }
              iVar19 = *(int *)((longlong)FVar16 + (ulonglong)(local_3a8.HashSize - 1U & uVar11) * 4
                               );
              while (iVar19 != -1) {
                lVar18 = local_3a8.Elements._0_8_ + (longlong)iVar19 * 0x48;
                if (*(uint *)(local_3a8.Elements._0_8_ + (longlong)iVar19 * 0x48) == uVar11) {
                  if (lVar18 == 0) goto LAB_14e823291;
                  goto LAB_14e823303;
                }
                iVar19 = *(int *)(lVar18 + 0x40);
              }
            }
            lVar18 = 0;
LAB_14e823291:
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L"");
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              iVar9 = (*pcVar4)();
              return iVar9;
            }
LAB_14e823303:
            if ((char)local_430 == '\0') {
              if (*(char *)(lVar18 + 0x38) != '\0') {
                uVar23 = *(undefined4 *)(lVar18 + 0x10);
                uVar24 = *(undefined4 *)(lVar18 + 0x14);
                uVar25 = *(undefined4 *)(lVar18 + 0x18);
                uVar26 = *(undefined4 *)(lVar18 + 0x1c);
                uVar27 = *(undefined4 *)(lVar18 + 0x20);
                uVar28 = *(undefined4 *)(lVar18 + 0x24);
                uVar29 = *(undefined4 *)(lVar18 + 0x28);
                uVar30 = *(undefined4 *)(lVar18 + 0x2c);
                local_430 = *(undefined8 *)(lVar18 + 0x38);
                uVar21 = *(undefined4 *)(lVar18 + 8);
                uVar22 = *(undefined4 *)(lVar18 + 0xc);
                uVar31 = *(undefined4 *)(lVar18 + 0x30);
                uVar32 = *(undefined4 *)(lVar18 + 0x34);
                goto LAB_14e8233ca;
              }
            }
            else if (*(char *)(lVar18 + 0x38) != '\0') {
              dVar2 = *(double *)(lVar18 + 0x10);
              dVar3 = *(double *)(lVar18 + 0x18);
              uVar23 = SUB84(dVar2,0);
              uVar24 = (int)((ulonglong)dVar2 >> 0x20);
              if ((double)CONCAT44(uVar40,uVar39) <= dVar2) {
                uVar23 = uVar39;
                uVar24 = uVar40;
              }
              dVar2 = *(double *)(lVar18 + 8);
              if (dVar2 <= (double)CONCAT44(uVar34,uVar33)) {
                uVar33 = SUB84(dVar2,0);
                uVar34 = (undefined4)((ulonglong)dVar2 >> 0x20);
              }
              uVar25 = SUB84(dVar3,0);
              uVar26 = (int)((ulonglong)dVar3 >> 0x20);
              if ((double)CONCAT44(uVar44,uVar43) <= dVar3) {
                uVar25 = uVar43;
                uVar26 = uVar44;
              }
              dVar2 = *(double *)(lVar18 + 0x20);
              uVar27 = SUB84(dVar2,0);
              uVar28 = (int)((ulonglong)dVar2 >> 0x20);
              if (dVar2 <= (double)CONCAT44(uVar38,uVar37)) {
                uVar27 = uVar37;
                uVar28 = uVar38;
              }
              dVar2 = *(double *)(lVar18 + 0x28);
              uVar29 = SUB84(dVar2,0);
              uVar30 = (int)((ulonglong)dVar2 >> 0x20);
              if (dVar2 <= (double)CONCAT44(uVar42,uVar41)) {
                uVar29 = uVar41;
                uVar30 = uVar42;
              }
              dVar2 = *(double *)(lVar18 + 0x30);
              uVar21 = uVar33;
              uVar22 = uVar34;
              uVar31 = SUB84(dVar2,0);
              uVar32 = (int)((ulonglong)dVar2 >> 0x20);
              if (dVar2 <= (double)CONCAT44(uVar36,uVar35)) {
                uVar31 = uVar35;
                uVar32 = uVar36;
              }
LAB_14e8233ca:
              local_440 = CONCAT44(uVar30,uVar29);
              uStack_438 = CONCAT44(uVar32,uVar31);
              local_450 = CONCAT44(uVar26,uVar25);
              uStack_448 = CONCAT44(uVar28,uVar27);
              local_460 = CONCAT44(uVar22,uVar21);
              uStack_458 = CONCAT44(uVar24,uVar23);
              uVar33 = uVar21;
              uVar34 = uVar22;
              uVar35 = uVar31;
              uVar36 = uVar32;
              uVar37 = uVar27;
              uVar38 = uVar28;
              uVar39 = uVar23;
              uVar40 = uVar24;
              uVar41 = uVar29;
              uVar42 = uVar30;
              uVar43 = uVar25;
              uVar44 = uVar26;
            }
          }
          FVar20.Data = FVar20.Data + 4;
        } while( true );
      }
      if ((*(int *)&(FVar20.Data)->field_0x0 < 0) || (iVar8 <= *(int *)&(FVar20.Data)->field_0x0))
      goto LAB_14e822dd4;
      FVar20.Data = FVar20.Data + 4;
    } while( true );
  }
LAB_14e822df5:
  if (*(void **)&param_2->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x18);
  }
  return -1;
LAB_14e822dd4:
  if (local_478.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.AllocatorInstance.Data);
  }
  if (this != (FGeometryCollection *)0x0) {
    (**(code **)this->_padding_)(this,1);
  }
  goto LAB_14e822df5;
}

// VoronoiFracture @ 14e824160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FFractureEngineFracturing::VoronoiFracture
          (FManagedArrayCollection *param_1,FDataflowTransformSelection *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,
          TTransform<double> *param_4,int param_5,float param_6,bool param_7,float param_8,
          float param_9,float param_10,float param_11,float param_12,int param_13,float param_14,
          bool param_15,float param_16)

{
  double *pdVar1;
  longlong lVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  FDataflowSelection *this;
  TVector<double> *pTVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  FGeometryCollection *pFVar19;
  TManagedArray<UE::Math::TTransform<float>_> *pTVar20;
  TManagedArray<int> *pTVar21;
  TManagedArray<UE::Math::TBox<double>_> *pTVar22;
  FScriptContainerElement *pFVar23;
  TArrayView<UE::Math::TVector<double>_const_,int> *pTVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined8 uVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  ForAnyElementType FVar30;
  longlong lVar31;
  float fVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  float fVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined1 auStackY_528 [32];
  undefined1 local_4c8;
  undefined1 local_4c7 [3];
  float local_4c4;
  undefined1 local_4c0 [16];
  undefined1 local_4b0 [16];
  double local_4a0;
  double dStack_498;
  undefined8 local_490;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> local_488;
  FDataflowSelection *local_478;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined8 local_448;
  double dStack_440;
  TArray<int,TSizedDefaultAllocator<32>_> local_438;
  undefined1 local_428 [16];
  double local_418;
  double dStack_410;
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  TTransform<double> *local_3d8;
  FManagedArrayCollection *local_3d0;
  TArrayView<UE::Math::TVector<double>_const_,int> local_3c8;
  FGeometryCollection *local_3b8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  undefined1 local_390 [16];
  undefined1 local_380 [16];
  undefined8 local_370;
  double dStack_368;
  undefined8 local_360;
  TArrayView<int_const_,int> local_358;
  FPlanarCells local_348;
  undefined1 local_2d8 [16];
  double dStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  double dStack_2b0;
  undefined1 local_2a8;
  uchar auStack_2a7 [7];
  TArrayView<UE::Math::TVector<double>_const_,int> local_298;
  TVector<double>_u_0 local_288;
  TOptional<UE::Math::TTransform<double>_> local_268;
  TArrayView<UE::Math::TVector<double>_const_,int> local_1f8 [4];
  undefined1 local_1b8;
  uchar auStack_1b7 [7];
  undefined1 local_1b0 [24];
  TVector<double>_u_0 TStack_198;
  uchar local_180;
  uchar uStack_17f;
  uchar uStack_17e;
  uchar uStack_17d;
  uchar uStack_17c;
  uchar uStack_17b;
  uchar uStack_17a;
  uchar uStack_179;
  FVoronoiDiagram local_178;
  TBox<double> local_128;
  ulonglong local_f0;
  
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_528;
  local_4c4 = param_8;
  local_478 = (FDataflowSelection *)param_2;
  local_3d8 = param_4;
  local_3d0 = param_1;
  local_3b0 = param_3;
  pFVar19 = FManagedArrayCollection::NewCopy<FGeometryCollection>(param_1);
  local_3b8 = pFVar19;
  if (pFVar19 != (FGeometryCollection *)0x0) {
    if (0 < param_3->ArrayNum) {
      uVar54 = 0;
      uVar55 = 0;
      uVar56 = 0;
      uVar57 = 0;
      local_4c0 = ZEXT816(0);
      local_490._0_1_ = '\0';
      local_490._1_1_ = '\0';
      local_490._2_1_ = '\0';
      local_490._3_1_ = '\0';
      local_490._4_1_ = '\0';
      local_490._5_1_ = '\0';
      local_490._6_1_ = '\0';
      local_490._7_1_ = '\0';
      local_458 = ZEXT816(0);
      local_4b0 = ZEXT816(0);
      local_448._0_4_ = 0;
      local_448._4_4_ = 0;
      dStack_440 = 0.0;
      local_4a0 = 0.0;
      dStack_498 = 0.0;
      bVar15 = FManagedArrayCollection::HasAttribute
                         (param_1,FTransformCollection::TransformAttribute,
                          FTransformCollection::TransformGroup);
      if ((((bVar15) &&
           (bVar15 = FManagedArrayCollection::HasAttribute
                               (param_1,FTransformCollection::ParentAttribute,
                                FTransformCollection::TransformGroup), bVar15)) &&
          (bVar15 = FManagedArrayCollection::HasAttribute
                              (param_1,FGeometryCollection::TransformIndexAttribute,
                               FGeometryCollection::GeometryGroup), bVar15)) &&
         (bVar15 = FManagedArrayCollection::HasAttribute
                             (param_1,FGeometryCollection::BoundingBoxAttribute,
                              FGeometryCollection::GeometryGroup), bVar15)) {
        pTVar20 = FManagedArrayCollection::GetAttribute<UE::Math::TTransform<float>_>
                            (param_1,FTransformCollection::TransformAttribute,
                             FTransformCollection::TransformGroup);
        pTVar21 = FManagedArrayCollection::GetAttribute<int>
                            (param_1,FTransformCollection::ParentAttribute,
                             FTransformCollection::TransformGroup);
        local_3c8.DataPtr =
             (TVector<double> *)
             FManagedArrayCollection::GetAttribute<int>
                       (param_1,FGeometryCollection::TransformIndexAttribute,
                        FGeometryCollection::GeometryGroup);
        pTVar22 = FManagedArrayCollection::GetAttribute<UE::Math::TBox<double>_>
                            (param_1,FGeometryCollection::BoundingBoxAttribute,
                             FGeometryCollection::GeometryGroup);
        local_488.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_488.ArrayNum = 0;
        local_488.ArrayMax = 0;
        GeometryCollectionAlgo::
        GlobalMatrices<UE::Math::TMatrix<double>,UE::Math::TTransform<float>_>
                  (pTVar20,pTVar21,&local_488);
        dVar50 = 0.0;
        dVar33 = 0.0;
        dVar46 = 0.0;
        dVar5 = 0.0;
        if (0 < local_488.ArrayNum) {
          uVar28 = 0;
          iVar16 = (**(code **)(*(longlong *)pTVar22 + 0x60))(pTVar22);
          pTVar14 = local_3c8.DataPtr;
          dVar50 = 0.0;
          dVar33 = 0.0;
          dVar46 = 0.0;
          dVar5 = 0.0;
          if (0 < iVar16) {
            lVar31 = 0;
            local_428._12_4_ = 0;
            local_428._0_12_ = ZEXT812(0);
            lVar26 = 0;
            local_408._12_4_ = 0;
            local_408._0_12_ = ZEXT812(0);
            local_3e8 = ZEXT816(0);
            local_418 = 0.0;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = local_3f8._8_8_;
            local_3f8 = auVar13 << 0x40;
            local_468 = ZEXT816(0);
            uVar51 = uVar56;
            uVar58 = uVar57;
            do {
              uVar17 = 0;
              if ((int)uVar28 < *(int *)((longlong)pTVar14 + 0x18)) {
                uVar17 = ~uVar28 >> 0x1f;
              }
              if (uVar17 == 0) {
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar4 = (code *)swi(3);
                  iVar16 = (*pcVar4)();
                  return iVar16;
                }
              }
              uVar17 = *(uint *)(lVar26 + *(longlong *)((longlong)pTVar14 + 0x10));
              uVar18 = 0;
              if ((int)uVar28 < *(int *)&pTVar22->field_0x18) {
                uVar18 = ~uVar28 >> 0x1f;
              }
              if (uVar18 == 0) {
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar4 = (code *)swi(3);
                  iVar16 = (*pcVar4)();
                  return iVar16;
                }
              }
              lVar2 = *(longlong *)&pTVar22->field_0x10;
              uVar18 = 0;
              if ((int)uVar17 < local_488.ArrayNum) {
                uVar18 = ~uVar17 >> 0x1f;
              }
              if (uVar18 == 0) {
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar15) {
                  pcVar4 = (code *)swi(3);
                  iVar16 = (*pcVar4)();
                  return iVar16;
                }
              }
              pFVar23 = local_488.AllocatorInstance.Data + (longlong)(int)uVar17 * 0x80;
              bVar15 = *(char *)(lVar2 + 0x30 + lVar31) != '\0';
              if (bVar15) {
                dVar33 = *(double *)(lVar2 + lVar31);
                dVar5 = ((double *)(lVar2 + lVar31))[1];
                local_2a8 = 1;
                dVar46 = *(double *)(lVar2 + 0x10 + lVar31);
                pdVar1 = (double *)(lVar2 + 0x18 + lVar31);
                dVar6 = *pdVar1;
                dVar7 = pdVar1[1];
                dVar50 = *(double *)(lVar2 + 0x28 + lVar31);
                dVar47 = (dVar6 + dVar33) * ___xmm_3fe00000000000003fe0000000000000;
                dVar48 = (dVar7 + dVar5) * _UNK_150689678;
                dVar8 = (dVar6 - dVar33) * ___xmm_3fe00000000000003fe0000000000000;
                dVar9 = (dVar7 - dVar5) * _UNK_150689678;
                dVar33 = (dVar50 + dVar46) * ___xmm_3fe00000000000003fe0000000000000;
                dVar10 = (dVar50 - dVar46) * ___xmm_3fe00000000000003fe0000000000000;
                dVar50 = *(double *)(pFVar23 + 0x20) * dVar48 + *(double *)pFVar23 * dVar47 +
                         *(double *)(pFVar23 + 0x40) * dVar33 + *(double *)(pFVar23 + 0x60);
                dVar5 = *(double *)(pFVar23 + 0x28) * dVar48 + *(double *)(pFVar23 + 8) * dVar47 +
                        *(double *)(pFVar23 + 0x48) * dVar33 + *(double *)(pFVar23 + 0x68);
                dVar46 = *(double *)pFVar23 * dVar8;
                dVar6 = *(double *)(pFVar23 + 8) * dVar8;
                dVar8 = *(double *)(pFVar23 + 0x10) * dVar8;
                dVar49 = *(double *)(pFVar23 + 0x30) * dVar48 + *(double *)(pFVar23 + 0x10) * dVar47
                         + *(double *)(pFVar23 + 0x50) * dVar33 + *(double *)(pFVar23 + 0x70);
                dVar47 = *(double *)(pFVar23 + 0x20) * dVar9;
                dVar48 = *(double *)(pFVar23 + 0x28) * dVar9;
                dVar9 = *(double *)(pFVar23 + 0x30) * dVar9;
                dVar33 = *(double *)(pFVar23 + 0x40) * dVar10;
                dVar7 = *(double *)(pFVar23 + 0x48) * dVar10;
                dVar10 = *(double *)(pFVar23 + 0x50) * dVar10;
                auVar44._8_4_ = SUB84(dVar5,0);
                auVar44._0_8_ = dVar50;
                auVar44._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
                dVar46 = (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) &
                                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                          SUB84(dVar47,0) &
                                          (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                         (double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) &
                                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                          SUB84(dVar46,0) &
                                          (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                         (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) &
                                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                          SUB84(dVar33,0) &
                                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
                local_370 = (double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) & _UNK_15061cc8c,
                                             SUB84(dVar48,0) & _UNK_15061cc88) +
                            (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_15061cc8c,
                                             SUB84(dVar6,0) & _UNK_15061cc88) +
                            (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                                             SUB84(dVar7,0) & _UNK_15061cc88);
                dStack_368 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                              SUB84(dVar9,0) &
                                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                             (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                              SUB84(dVar8,0) &
                                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                             (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                              SUB84(dVar10,0) &
                                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
                local_390._0_8_ = dVar50 - dVar46;
                local_390._8_8_ = auVar44._8_8_ - local_370;
                dVar46 = dVar46 + dVar50;
                local_370 = local_370 + dVar5;
                dVar33 = dVar49 - dStack_368;
                local_360._1_1_ = auStack_2a7[0];
                local_360._2_1_ = auStack_2a7[1];
                local_360._3_1_ = auStack_2a7[2];
                local_360._4_1_ = auStack_2a7[3];
                local_360._5_1_ = auStack_2a7[4];
                local_360._6_1_ = auStack_2a7[5];
                local_360._7_1_ = auStack_2a7[6];
                local_360._0_1_ = '\x01';
                dStack_368 = dStack_368 + dVar49;
                dVar50 = local_390._0_8_;
                local_2d8 = local_390;
                dStack_2c8 = dVar33;
                dStack_2b0 = dStack_368;
                uStack_2b8 = local_370;
                local_2c0 = dVar46;
              }
              else {
                local_390 = ZEXT816(0);
                dVar33 = 0.0;
                dVar46 = 0.0;
                local_370 = 0.0;
                dStack_368 = 0.0;
                local_360._0_1_ = '\0';
                local_360._1_1_ = '\0';
                local_360._2_1_ = '\0';
                local_360._3_1_ = '\0';
                local_360._4_1_ = '\0';
                local_360._5_1_ = '\0';
                local_360._6_1_ = '\0';
                local_360._7_1_ = '\0';
                dVar50 = 0.0;
              }
              uVar53 = (undefined4)((ulonglong)dVar46 >> 0x20);
              uVar52 = SUB84(dVar46,0);
              local_380._8_4_ = uVar52;
              local_380._0_8_ = dVar33;
              local_380._12_4_ = uVar53;
              uVar56 = local_390._8_4_;
              uVar57 = local_390._12_4_;
              if ((uchar)local_490 == '\0') {
                if (!bVar15) goto LAB_14e8248e7;
                uVar54 = local_390._0_4_;
                uVar55 = local_390._4_4_;
                local_428._0_8_ = dStack_368;
                auVar11._4_8_ = dStack_368;
                auVar11._0_4_ = (int)((ulonglong)dVar33 >> 0x20);
                auVar34._0_8_ = auVar11._0_8_ << 0x20;
                auVar34._8_4_ = uVar52;
                auVar34._12_4_ = uVar53;
                local_408._0_8_ = auVar34._8_8_;
                auVar12._4_8_ = dVar46;
                auVar12._0_4_ = uVar55;
                auVar35._0_8_ = auVar12._0_8_ << 0x20;
                auVar35._8_4_ = uVar56;
                auVar35._12_4_ = uVar57;
                local_3e8._0_8_ = auVar35._8_8_;
                local_458._8_4_ = uVar52;
                local_458._0_8_ = dVar33;
                local_458._12_4_ = uVar53;
                local_4b0._8_4_ = uVar52;
                local_4b0._0_8_ = dVar33;
                local_4b0._12_4_ = uVar53;
                local_3f8._8_4_ = uVar52;
                local_3f8._0_8_ = dVar33;
                local_3f8._12_4_ = uVar53;
                local_4c0 = local_390;
                local_4a0 = local_370;
                dStack_498 = dStack_368;
                local_490 = local_360;
                local_468 = local_390;
                dStack_440 = dStack_368;
                local_418 = local_370;
                dStack_410 = dStack_368;
                dVar5 = local_370;
              }
              else if (bVar15) {
                uVar54 = local_468._0_4_;
                uVar55 = local_468._4_4_;
                if ((double)local_3f8._0_8_ <= dVar33) {
                  dVar33 = (double)local_3f8._0_8_;
                }
                if (dVar46 <= (double)local_408._0_8_) {
                  dVar46 = (double)local_408._0_8_;
                }
                uVar51 = (undefined4)((ulonglong)dVar46 >> 0x20);
                local_4a0 = local_370;
                if (local_370 <= local_418) {
                  local_4a0 = local_418;
                }
                if (dVar50 <= local_468._0_8_) {
                  uVar54 = SUB84(dVar50,0);
                  uVar55 = (undefined4)((ulonglong)dVar50 >> 0x20);
                }
                dStack_498 = dStack_368;
                if (dStack_368 <= (double)local_428._0_8_) {
                  dStack_498 = (double)local_428._0_8_;
                }
                dVar50 = local_390._8_8_;
                if ((double)local_3e8._0_8_ <= local_390._8_8_) {
                  dVar50 = (double)local_3e8._0_8_;
                }
                local_3f8._8_4_ = uVar52;
                local_3f8._0_8_ = dVar33;
                local_3f8._12_4_ = uVar53;
                local_468._4_4_ = uVar55;
                local_468._0_4_ = uVar54;
                local_408._8_4_ = uVar52;
                local_408._0_8_ = dVar46;
                local_408._12_4_ = uVar53;
                local_4c0._12_4_ = (undefined4)((ulonglong)dVar50 >> 0x20);
                local_458._8_4_ = SUB84(dVar46,0);
                local_458._0_8_ = dVar33;
                local_458._12_4_ = uVar51;
                local_4b0._8_4_ = SUB84(dVar46,0);
                local_4b0._0_8_ = dVar33;
                local_4b0._12_4_ = uVar51;
                local_3e8._8_4_ = uVar56;
                local_3e8._0_8_ = dVar50;
                local_3e8._12_4_ = uVar57;
                local_428._8_4_ = SUB84(dStack_368,0);
                local_428._0_8_ = dStack_498;
                local_428._12_4_ = (int)((ulonglong)dStack_368 >> 0x20);
                local_4c0._4_4_ = uVar55;
                local_4c0._0_4_ = uVar54;
                local_4c0._8_4_ = SUB84(dVar50,0);
                uVar56 = SUB84(dVar50,0);
                uVar57 = local_4c0._12_4_;
                dStack_440 = dStack_498;
                local_418 = local_4a0;
                dStack_410 = dStack_368;
                dVar5 = local_4a0;
              }
              else {
LAB_14e8248e7:
                dVar33 = local_458._0_8_;
                dVar46 = local_458._8_8_;
                uVar56 = uVar51;
                uVar57 = uVar58;
                dVar5 = local_448;
              }
              dVar50 = dStack_440;
              uVar28 = uVar28 + 1;
              lVar26 = lVar26 + 4;
              lVar31 = lVar31 + 0x38;
              local_448 = dVar5;
              iVar16 = (**(code **)(*(longlong *)pTVar22 + 0x60))(pTVar22);
              pFVar19 = local_3b8;
              param_3 = local_3b0;
              param_4 = local_3d8;
              param_1 = local_3d0;
              param_8 = local_4c4;
              uVar51 = uVar56;
              uVar58 = uVar57;
            } while ((int)uVar28 < iVar16);
          }
        }
        dVar6 = (param_4->Translation).XY.m128d_f64[0];
        dVar7 = (param_4->Translation).XY.m128d_f64[1];
        iVar16 = param_3->ArrayNum;
        pFVar29 = (param_3->AllocatorInstance).Data;
        dVar8 = (param_4->Translation).ZW.m128d_f64[0];
        pFVar23 = pFVar29 + (longlong)iVar16 * 0x18;
        local_3a8 = dVar6;
        dStack_3a0 = dVar7;
        local_398 = dVar8;
        while( true ) {
          if (param_3->ArrayNum != iVar16) {
            local_4c8 = 0;
            `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_4c8);
          }
          if (pFVar29 == pFVar23) break;
          *(double *)pFVar29 = *(double *)pFVar29 - dVar6;
          *(double *)(pFVar29 + 8) = *(double *)(pFVar29 + 8) - dVar7;
          *(double *)(pFVar29 + 0x10) = *(double *)(pFVar29 + 0x10) - dVar8;
          pFVar29 = pFVar29 + 0x18;
        }
        iVar16 = param_3->ArrayNum;
        local_180 = (uchar)local_490;
        uStack_17f = local_490._1_1_;
        uStack_17e = local_490._2_1_;
        uStack_17d = local_490._3_1_;
        uStack_17c = local_490._4_1_;
        uStack_17b = local_490._5_1_;
        uStack_17a = local_490._6_1_;
        uStack_179 = local_490._7_1_;
        local_1b0._4_4_ = uVar55;
        local_1b0._0_4_ = uVar54;
        local_1b0._12_4_ = uVar57;
        local_1b0._8_4_ = uVar56;
        unique0x10000486 = SUB84(dVar46,0);
        local_1b0._16_8_ = dVar33;
        unique0x1000048a = (int)((ulonglong)dVar46 >> 0x20);
        TStack_198._s_0.Y = dVar5;
        TStack_198._s_0.Z = dVar50;
        if (iVar16 < 1) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar15) {
            pcVar4 = (code *)swi(3);
            iVar16 = (*pcVar4)();
            return iVar16;
          }
        }
        UE::Math::TBox<double>::TBox<double>
                  (&local_128,(TVector<double> *)(param_3->AllocatorInstance).Data,iVar16);
        UE::Math::TBox<double>::operator+=((TBox<double> *)local_1b0,&local_128);
        iVar16 = 0;
        fVar45 = param_8;
        fVar43 = param_9;
        if (7 < param_13) {
          uVar28 = (param_13 - 8U >> 3) + 1;
          uVar25 = (ulonglong)uVar28;
          iVar16 = uVar28 * 8;
          do {
            fVar36 = fVar43 * param_11;
            fVar32 = (float)((uint)fVar43 & __xmm_7fffffff7fffffff7fffffff7fffffff);
            fVar37 = fVar36 * param_11;
            fVar38 = fVar37 * param_11;
            fVar39 = fVar38 * param_11;
            fVar40 = fVar39 * param_11;
            fVar41 = fVar40 * param_11;
            fVar42 = fVar41 * param_11;
            fVar43 = fVar42 * param_11;
            fVar45 = fVar45 + fVar32 +
                     (float)((uint)fVar36 & __xmm_7fffffff7fffffff7fffffff7fffffff) +
                     (float)((uint)fVar37 & __xmm_7fffffff7fffffff7fffffff7fffffff) +
                     (float)((uint)fVar38 & __xmm_7fffffff7fffffff7fffffff7fffffff) +
                     (float)((uint)fVar39 & __xmm_7fffffff7fffffff7fffffff7fffffff) +
                     (float)((uint)fVar40 & __xmm_7fffffff7fffffff7fffffff7fffffff) +
                     (float)((uint)fVar41 & __xmm_7fffffff7fffffff7fffffff7fffffff) +
                     (float)((uint)fVar42 & __xmm_7fffffff7fffffff7fffffff7fffffff);
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
        if (iVar16 < param_13) {
          uVar25 = (ulonglong)(uint)(param_13 - iVar16);
          do {
            fVar45 = fVar45 + (float)((uint)fVar43 & __xmm_7fffffff7fffffff7fffffff7fffffff);
            uVar25 = uVar25 - 1;
            fVar43 = fVar43 * param_11;
          } while (uVar25 != 0);
        }
        local_3c8.DataPtr = (TVector<double> *)(param_3->AllocatorInstance).Data;
        iVar16 = param_3->ArrayNum;
        local_1b8 = 1;
        dVar50 = (double)(fVar45 + __real_38d1b717);
        local_1b0._0_8_ = (double)local_1b0._0_8_ - dVar50;
        local_1b0._8_8_ = (double)local_1b0._8_8_ - dVar50;
        dVar46 = dVar50 + TStack_198._s_0.X;
        TStack_198._s_0.Y = dVar50 + TStack_198._s_0.Y;
        TStack_198._s_0.Z = dVar50 + TStack_198._s_0.Z;
        uStack_17f = auStack_1b7[0];
        uStack_17e = auStack_1b7[1];
        uStack_17d = auStack_1b7[2];
        uStack_17c = auStack_1b7[3];
        uStack_17b = auStack_1b7[4];
        uStack_17a = auStack_1b7[5];
        uStack_179 = auStack_1b7[6];
        local_180 = '\x01';
        unique0x100002ca = SUB84(dVar46,0);
        local_1b0._16_8_ = (double)local_1b0._16_8_ - dVar50;
        unique0x100002ce = (int)((ulonglong)dVar46 >> 0x20);
        if (iVar16 < 0) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L"");
          if (bVar15) {
            pcVar4 = (code *)swi(3);
            iVar16 = (*pcVar4)();
            return iVar16;
          }
        }
        local_3c8.ArrayNum = iVar16;
        FVoronoiDiagram::FVoronoiDiagram
                  (&local_178,&local_3c8,(TBox<double> *)local_1b0,__real_3fb99999a0000000,
                   __real_3f1a36e2e0000000);
        pTVar24 = TArrayView<UE::Math::TVector<double>_const_,int>::
                  TArrayView<UE::Math::TVector<double>_const_,int><TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                            (local_1f8,param_3);
        local_298.DataPtr = pTVar24->DataPtr;
        local_298.ArrayNum = pTVar24->ArrayNum;
        local_298._12_4_ = *(undefined4 *)&pTVar24->field_0xc;
        FPlanarCells::FPlanarCells(&local_348,&local_298,&local_178);
        this = local_478;
        local_348.InternalSurfaceMaterials.NoiseSettings.TypedValue.Frequency = param_10;
        local_348.InternalSurfaceMaterials.NoiseSettings.TypedValue.Lacunarity = param_12;
        local_348.InternalSurfaceMaterials.NoiseSettings.TypedValue.Amplitude = param_9;
        local_348.InternalSurfaceMaterials.NoiseSettings.TypedValue.PointSpacing = param_14;
        local_348.InternalSurfaceMaterials.NoiseSettings.TypedValue.Persistence = param_11;
        local_348.InternalSurfaceMaterials.NoiseSettings.TypedValue.Octaves = param_13;
        local_348.InternalSurfaceMaterials.NoiseSettings.bIsSet = true;
        RandomReduceSelection((FDataflowTransformSelection *)local_478,param_5,param_6);
        UE::Private::FractureHelpers::ConvertToLeafSelection
                  (pFVar19,(FDataflowTransformSelection *)this);
        FDataflowSelection::AsArrayValidated(this,&local_438,(FManagedArrayCollection *)pFVar19);
        fVar45 = (float)FManagedArrayCollection::NumElements
                                  (param_1,FTransformCollection::TransformGroup);
        iVar16 = local_438.ArrayNum;
        pFVar23 = local_438.AllocatorInstance.Data + (longlong)iVar16 * 4;
        uVar27 = local_438._8_8_;
        FVar30.Data = local_438.AllocatorInstance.Data;
        local_4c4 = fVar45;
        while( true ) {
          if ((int)uVar27 != iVar16) {
            local_4c7[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_4c7);
            uVar27 = local_438._8_8_;
            fVar45 = local_4c4;
          }
          dVar46 = local_398;
          if (FVar30.Data == pFVar23) {
            local_268.bIsSet = true;
            local_268.TypedValue.Rotation.XY.m128d_f64[0] = (local_3d8->Rotation).XY.m128d_f64[0];
            local_268.TypedValue.Rotation.XY.m128d_f64[1] = (local_3d8->Rotation).XY.m128d_f64[1];
            local_268.TypedValue.Rotation.ZW.m128d_f64[0] = (local_3d8->Rotation).ZW.m128d_f64[0];
            local_268.TypedValue.Rotation.ZW.m128d_f64[1] = (local_3d8->Rotation).ZW.m128d_f64[1];
            local_268.TypedValue.Translation.XY.m128d_f64[0] =
                 (local_3d8->Translation).XY.m128d_f64[0];
            local_268.TypedValue.Translation.XY.m128d_f64[1] =
                 (local_3d8->Translation).XY.m128d_f64[1];
            local_268.TypedValue.Translation.ZW.m128d_f64[0] =
                 (local_3d8->Translation).ZW.m128d_f64[0];
            local_268.TypedValue.Translation.ZW.m128d_f64[1] =
                 (local_3d8->Translation).ZW.m128d_f64[1];
            local_268.TypedValue.Scale3D.XY.m128d_f64[0] = (local_3d8->Scale3D).XY.m128d_f64[0];
            local_268.TypedValue.Scale3D.XY.m128d_f64[1] = (local_3d8->Scale3D).XY.m128d_f64[1];
            local_268.TypedValue.Scale3D.ZW.m128d_f64[0] = (local_3d8->Scale3D).ZW.m128d_f64[0];
            local_268.TypedValue.Scale3D.ZW.m128d_f64[1] = (local_3d8->Scale3D).ZW.m128d_f64[1];
            local_358.DataPtr = (int *)local_438.AllocatorInstance.Data;
            if ((int)uVar27 < 0) {
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L"");
              if (bVar15) {
                pcVar4 = (code *)swi(3);
                iVar16 = (*pcVar4)();
                return iVar16;
              }
            }
            local_288._s_0.Z = dVar46;
            local_358.ArrayNum = (int)uVar27;
            local_288._s_0.X = dVar6;
            local_288._s_0.Y = dVar7;
            iVar16 = CutMultipleWithPlanarCells
                               (&local_348,pFVar19,&local_358,(double)param_8,(double)param_16,
                                param_5,&local_268,true,true,(FProgressCancel *)0x0,
                                (TVector<double> *)&local_288._s_0,param_7);
            UE::Private::FractureHelpers::ProcessNewlyFracturedBones(pFVar19,iVar16,-1);
            FManagedArrayCollection::operator=(param_1,(FManagedArrayCollection *)pFVar19);
            if (local_438.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_438.AllocatorInstance.Data);
            }
            if (local_348.PlaneBoundaryVertices.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_348.PlaneBoundaryVertices.AllocatorInstance.Data);
            }
            DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)
                       local_348.PlaneBoundaries.AllocatorInstance.Data,
                       local_348.PlaneBoundaries.ArrayNum);
            if ((TArray<int,TSizedDefaultAllocator<32>_> *)
                local_348.PlaneBoundaries.AllocatorInstance.Data !=
                (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              FMemory::Free(local_348.PlaneBoundaries.AllocatorInstance.Data);
            }
            if (local_348.PlaneCells.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_348.PlaneCells.AllocatorInstance.Data);
            }
            if (local_348.Planes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_348.Planes.AllocatorInstance.Data);
            }
            FVoronoiDiagram::~FVoronoiDiagram(&local_178);
            if (local_488.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_488.AllocatorInstance.Data);
            }
            (**(code **)pFVar19->_padding_)(pFVar19,1);
            FVar3 = (local_478->SelectionArray).AllocatorInstance.SecondaryData;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)FVar3);
            }
            pFVar23 = (param_3->AllocatorInstance).Data;
            if (pFVar23 == (FScriptContainerElement *)0x0) {
              return iVar16;
            }
            FMemory::Free(pFVar23);
            return iVar16;
          }
          if ((*(int *)FVar30.Data < 0) || ((int)fVar45 <= *(int *)FVar30.Data)) break;
          FVar30.Data = FVar30.Data + 4;
        }
        if (local_438.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_438.AllocatorInstance.Data);
        }
        if (local_348.PlaneBoundaryVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(local_348.PlaneBoundaryVertices.AllocatorInstance.Data);
        }
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)
                   local_348.PlaneBoundaries.AllocatorInstance.Data,
                   local_348.PlaneBoundaries.ArrayNum);
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)
            local_348.PlaneBoundaries.AllocatorInstance.Data !=
            (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_348.PlaneBoundaries.AllocatorInstance.Data);
        }
        if (local_348.PlaneCells.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_348.PlaneCells.AllocatorInstance.Data);
        }
        if (local_348.Planes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_348.Planes.AllocatorInstance.Data);
        }
        FVoronoiDiagram::~FVoronoiDiagram(&local_178);
        if (local_488.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_488.AllocatorInstance.Data);
        }
        (**(code **)pFVar19->_padding_)(pFVar19,1);
        param_2 = (FDataflowTransformSelection *)local_478;
        goto LAB_14e824fc2;
      }
    }
    (**(code **)pFVar19->_padding_)(pFVar19,1);
  }
LAB_14e824fc2:
  FVar3 = (((FDataflowSelection *)param_2)->SelectionArray).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  pFVar23 = (param_3->AllocatorInstance).Data;
  if (pFVar23 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar23);
  }
  return -1;
}

