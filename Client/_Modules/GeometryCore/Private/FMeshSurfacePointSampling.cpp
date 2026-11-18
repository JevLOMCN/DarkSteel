// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 3

// operator() @ 1435e7b80

void __thiscall
`UE::Geometry::FMeshSurfacePointSampling::ComputePoissonSampling'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *param_1,int param_2,double param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TVector<double> *pTVar5;
  longlong lVar6;
  ForAnyElementType *pFVar7;
  ForAnyElementType *pFVar8;
  int local_res18 [2];
  double local_res20;
  TVector<double>_u_0 local_88;
  TVector<double> local_70;
  double local_58;
  double dStack_50;
  double local_48;
  TQuaternion<double>_u_0 TStack_40;
  
  lVar6 = *(longlong *)this;
  pFVar8 = (ForAnyElementType *)(lVar6 + 0x88);
  local_res18[0] = param_2;
  local_res20 = param_3;
  pTVar5 = UE::Geometry::FDynamicMesh3::GetTriNormal
                     (*(FDynamicMesh3 **)((longlong)this + 8),&local_70,param_2);
  local_58 = (param_1->field0_0x0)._s_0.X;
  dStack_50 = (param_1->field0_0x0)._s_0.Y;
  TStack_40._s_0.X = 0.0;
  TStack_40._s_0.Y = 0.0;
  TStack_40._s_0.Z = 0.0;
  TStack_40._s_0.W = __real_3ff0000000000000;
  local_48 = (param_1->field0_0x0)._s_0.Z;
  local_88._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  local_88._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_88._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  UE::Geometry::TQuaternion<double>::SetFromTo
            ((TQuaternion<double> *)&TStack_40._s_0,(TVector<double> *)&local_88._s_0,pTVar5);
  if ((pFVar8->Data <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 < pFVar8->Data + (longlong)*(int *)(lVar6 + 0x94) * 0x38)
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(lVar6 + 0x90);
  if (iVar4 == *(int *)(lVar6 + 0x94)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,pFVar8,(int *)(lVar6 + 0x94));
  }
  *(int *)(lVar6 + 0x90) = iVar4 + 1;
  lVar6 = (longlong)iVar4 * 0x38;
  pFVar1 = pFVar8->Data;
  *(double *)(pFVar1 + lVar6) = local_58;
  *(double *)(pFVar1 + lVar6 + 8) = dStack_50;
  *(double *)(pFVar1 + lVar6 + 0x10) = local_48;
  *(double *)(pFVar1 + lVar6 + 0x10 + 8) = TStack_40._s_0.X;
  *(double *)(pFVar1 + lVar6 + 0x20) = TStack_40._s_0.Y;
  *(double *)(pFVar1 + lVar6 + 0x20 + 8) = TStack_40._s_0.Z;
  *(double *)(pFVar1 + lVar6 + 0x30) = TStack_40._s_0.W;
  lVar6 = *(longlong *)this;
  pFVar8 = (ForAnyElementType *)(lVar6 + 0x98);
  if ((pFVar8->Data <= (FScriptContainerElement *)&local_res20) &&
     ((FScriptContainerElement *)&local_res20 < pFVar8->Data + (longlong)*(int *)(lVar6 + 0xa4) * 8)
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(lVar6 + 0xa0);
  if (iVar4 == *(int *)(lVar6 + 0xa4)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar8,(int *)(lVar6 + 0xa4));
  }
  *(int *)(lVar6 + 0xa0) = iVar4 + 1;
  lVar6 = *(longlong *)this;
  pFVar7 = (ForAnyElementType *)(lVar6 + 0xa8);
  *(double *)(pFVar8->Data + (longlong)iVar4 * 8) = local_res20;
  if ((pFVar7->Data <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 < pFVar7->Data + (longlong)*(int *)(lVar6 + 0xb4) * 4))
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(lVar6 + 0xb0);
  if (iVar4 == *(int *)(lVar6 + 0xb4)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar7,(int *)(lVar6 + 0xb4));
  }
  *(int *)(lVar6 + 0xb0) = iVar4 + 1;
  *(int *)(pFVar7->Data + (longlong)iVar4 * 4) = local_res18[0];
  return;
}

// operator() @ 1435eb810

double __thiscall
`UE::Geometry::FMeshSurfacePointSampling::ComputePoissonSampling'::__l8::<lambda_2>::operator()
          (void *this,int param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  uint local_38;
  uint uStack_34;
  
  lVar3 = *(longlong *)((longlong)this + 8);
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  uVar2 = *(uint *)(lVar4 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  uVar1 = *(undefined8 *)(lVar4 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x50)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    dVar9 = (double)(*pcVar6)();
    return dVar9;
  }
  uStack_34 = (uint)((ulonglong)uVar1 >> 0x20);
  lVar4 = *(longlong *)(lVar3 + 0x48);
  uVar8 = 0;
  if ((int)uStack_34 < *(int *)(lVar3 + 0x50)) {
    uVar8 = ~uStack_34 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    dVar9 = (double)(*pcVar6)();
    return dVar9;
  }
  local_38 = (uint)uVar1;
  lVar5 = *(longlong *)(lVar3 + 0x48);
  uVar8 = 0;
  if ((int)local_38 < *(int *)(lVar3 + 0x50)) {
    uVar8 = ~local_38 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    dVar9 = (double)(*pcVar6)();
    return dVar9;
  }
  dVar9 = *(double *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)local_38 * 8) *
          (param_3->field0_0x0)._s_0.X +
          (param_3->field0_0x0)._s_0.Y * *(double *)(lVar5 + (longlong)(int)uStack_34 * 8) +
          (param_3->field0_0x0)._s_0.Z * *(double *)(lVar4 + (longlong)(int)uVar2 * 8);
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x5c) != '\0') {
    dVar10 = 0.0;
    if ((0.0 <= dVar9) && (dVar10 = dVar9, __real_3ff0000000000000 <= dVar9)) {
      dVar10 = __real_3ff0000000000000;
    }
    dVar9 = __real_3ff0000000000000 - dVar10;
  }
  return dVar9;
}

// ComputePoissonSampling @ 1435f5bc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshSurfacePointSampling::ComputePoissonSampling
          (FMeshSurfacePointSampling *this,FDynamicMesh3 *param_1,FProgressCancel *param_2)

{
  TArray<UE::Geometry::FGeometryError,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Geometry::FGeometryWarning,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  longlong *plVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  uint uVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  double dVar29;
  double dVar30;
  longlong local_res8;
  FMeshSurfacePointSampling *local_1b8;
  FDynamicMesh3 *local_1b0;
  undefined1 local_1a8 [16];
  TOptional<TFunctionRef<double___cdecl(int,UE::Math::TVector<double>,UE::Math::TVector<double>)>_>_u_0
  local_198;
  EInterpretWeightMode local_188;
  FDynamicMesh3 *local_180;
  FMeshSurfacePointSampling *local_178;
  code *local_170;
  FMeshSurfacePointSampling **local_168;
  code *local_160;
  FMeshSurfacePointSampling **local_158;
  code *local_150;
  FMeshSurfacePointSampling **local_148;
  double local_130;
  double local_118;
  double local_100;
  undefined8 local_f0 [2];
  undefined8 local_e0 [21];
  
  pTVar1 = &(this->Result).Errors;
  uVar22 = 0;
  (this->Result).Result = InProgress;
  if (pTVar1 != (TArray<UE::Geometry::FGeometryError,TSizedDefaultAllocator<32>_> *)local_f0) {
    DestructItems<UE::Geometry::FGeometryError,int>
              ((FGeometryError *)(pTVar1->AllocatorInstance).Data,(this->Result).Errors.ArrayNum);
    pFVar8 = (pTVar1->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Result).Errors.ArrayNum = 0;
    (this->Result).Errors.ArrayMax = 0;
  }
  pTVar2 = &(this->Result).Warnings;
  if (pTVar2 != (TArray<UE::Geometry::FGeometryWarning,TSizedDefaultAllocator<32>_> *)local_e0) {
    DestructItems<UE::Geometry::FGeometryWarning,int>
              ((FGeometryWarning *)(pTVar2->AllocatorInstance).Data,(this->Result).Warnings.ArrayNum
              );
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Result).Warnings.ArrayNum = 0;
    (this->Result).Warnings.ArrayMax = 0;
  }
  DestructItems<UE::Geometry::FGeometryWarning,int>((FGeometryWarning *)0x0,0);
  DestructItems<UE::Geometry::FGeometryError,int>((FGeometryError *)0x0,0);
  piVar3 = &(this->Samples).ArrayMax;
  (this->Samples).ArrayNum = 0;
  if (*piVar3 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->Samples).AllocatorInstance,0,piVar3);
  }
  (this->Radii).ArrayNum = 0;
  if ((this->Radii).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Radii).AllocatorInstance,0,&(this->Radii).ArrayMax);
  }
  piVar3 = &(this->TriangleIDs).ArrayMax;
  (this->TriangleIDs).ArrayNum = 0;
  if (*piVar3 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->TriangleIDs).AllocatorInstance,0,piVar3);
  }
  piVar3 = &(this->BarycentricCoords).ArrayMax;
  (this->BarycentricCoords).ArrayNum = 0;
  if (*piVar3 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->BarycentricCoords).AllocatorInstance,0,piVar3);
  }
  dVar18 = __real_3ff0000000000000;
  dVar5 = this->SampleRadius;
  dVar6 = this->MaxSampleRadius;
  local_1b8 = this;
  local_1b0 = param_1;
  if (dVar6 <= dVar5) {
    local_148 = &local_1b8;
    local_150 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FMeshSurfacePointSampling::ComputePoissonSampling'::__l2::<lambda_1>,void,UE::Math::TVector<double>,int,double>
                ::Call;
    UELocal::UniformMeshPointSampling<UE::Geometry::FDynamicMesh3>
              (param_1,(TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)> *)
                       &local_150,dVar5,this->MaxSamples,this->SubSampleDensity,this->RandomSeed,
               this->MaxSubSamplePoints,this->SamplingMethodVersion,param_2);
  }
  else {
    local_188 = this->InterpretWeightMode;
    local_1a8._8_8_ = this->SizeDistributionPower;
    if (__real_4024000000000000 <= this->SizeDistributionPower) {
      local_1a8._8_8_ = __real_4024000000000000;
    }
    local_1a8._0_4_ = this->SizeDistribution;
    local_198._0_8_ = (code *)0x0;
    local_198._8_8_ = (FDynamicMesh3 **)0x0;
    if ((double)local_1a8._8_8_ <= __real_3ff0000000000000) {
      local_1a8._8_8_ = __real_3ff0000000000000;
    }
    if ((this->bUseVertexWeights == false) ||
       ((this->VertexWeights).ArrayNum !=
        (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
        (param_1->VertexRefCounts).RefCounts.CurBlockUsed)) {
      local_158 = &local_1b8;
      local_160 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FMeshSurfacePointSampling::ComputePoissonSampling'::__l2::<lambda_1>,void,UE::Math::TVector<double>,int,double>
                  ::Call;
      UELocal::NonUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>
                (param_1,(TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)> *)
                         &local_160,dVar5,dVar6,this->MaxSamples,this->SubSampleDensity,
                 this->RandomSeed,(FNonUniformSamplingConfig *)local_1a8,this->MaxSubSamplePoints,
                 this->SamplingMethodVersion,param_2);
    }
    else {
      local_198._0_8_ =
           Core::Private::Function::
           TFunctionRefCaller<`UE::Geometry::FMeshSurfacePointSampling::ComputePoissonSampling'::__l8::<lambda_2>,double,int,UE::Math::TVector<double>,UE::Math::TVector<double>_>
           ::Call;
      local_198._8_8_ = &local_180;
      local_168 = &local_1b8;
      local_170 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FMeshSurfacePointSampling::ComputePoissonSampling'::__l2::<lambda_1>,void,UE::Math::TVector<double>,int,double>
                  ::Call;
      local_180 = param_1;
      local_178 = this;
      UELocal::NonUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>
                (param_1,(TFunctionRef<void___cdecl(UE::Math::TVector<double>,int,double)> *)
                         &local_170,dVar5,dVar6,this->MaxSamples,this->SubSampleDensity,
                 this->RandomSeed,(FNonUniformSamplingConfig *)local_1a8,this->MaxSubSamplePoints,
                 this->SamplingMethodVersion,param_2);
    }
  }
  if (this->bComputeBarycentrics != false) {
    iVar7 = (this->Samples).ArrayNum;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->BarycentricCoords,iVar7,Default);
    if (0 < iVar7) {
      lVar27 = 0;
      local_res8 = 0;
      uVar28 = uVar22;
      do {
        uVar26 = (uint)uVar22;
        uVar25 = ~uVar26 >> 0x1f;
        uVar20 = 0;
        if ((int)uVar26 < (this->TriangleIDs).ArrayNum) {
          uVar20 = uVar25;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar8 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
        uVar20 = *(uint *)((this->TriangleIDs).AllocatorInstance.Data + uVar28 * 4);
        uVar24 = (ulonglong)(uVar20 & 0x1ff);
        lVar9 = *(longlong *)
                 ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8)
        ;
        uVar20 = *(uint *)(lVar9 + uVar24 * 0xc);
        uVar22 = (ulonglong)(uVar20 & 0x1ff);
        local_130 = *(double *)
                     (*(longlong *)(pFVar8 + (ulonglong)(uVar20 >> 9) * 8) + 0x10 + uVar22 * 0x18);
        pdVar4 = (double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar20 >> 9) * 8) + uVar22 * 0x18);
        dVar6 = *pdVar4;
        dVar15 = pdVar4[1];
        uVar20 = *(uint *)(lVar9 + 4 + uVar24 * 0xc);
        uVar22 = (ulonglong)(uVar20 & 0x1ff);
        local_100 = *(double *)
                     (*(longlong *)(pFVar8 + (ulonglong)(uVar20 >> 9) * 8) + 0x10 + uVar22 * 0x18);
        pdVar4 = (double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar20 >> 9) * 8) + uVar22 * 0x18);
        dVar5 = *pdVar4;
        dVar29 = pdVar4[1];
        uVar20 = *(uint *)(lVar9 + 8 + uVar24 * 0xc);
        uVar22 = (ulonglong)(uVar20 & 0x1ff);
        local_118 = *(double *)
                     (*(longlong *)(pFVar8 + (ulonglong)(uVar20 >> 9) * 8) + 0x10 + uVar22 * 0x18);
        pdVar4 = (double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar20 >> 9) * 8) + uVar22 * 0x18);
        dVar16 = *pdVar4;
        dVar17 = pdVar4[1];
        uVar20 = 0;
        if ((int)uVar26 < (this->Samples).ArrayNum) {
          uVar20 = uVar25;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar8 = (this->Samples).AllocatorInstance.Data;
        dVar5 = dVar5 - dVar16;
        dVar12 = local_100 - local_118;
        dVar30 = local_130 - local_118;
        dVar6 = dVar6 - dVar16;
        dVar29 = dVar29 - dVar17;
        dVar15 = dVar15 - dVar17;
        uVar20 = 0;
        if ((int)uVar26 < (this->BarycentricCoords).ArrayNum) {
          uVar20 = uVar25;
        }
        dVar14 = dVar15 * dVar15 + dVar6 * dVar6 + dVar30 * dVar30;
        dVar13 = dVar29 * dVar15 + dVar5 * dVar6 + dVar12 * dVar30;
        dVar15 = dVar15 * (*(double *)(pFVar8 + local_res8 + 8) - dVar17) +
                 dVar6 * (*(double *)(pFVar8 + local_res8) - dVar16) +
                 dVar30 * (*(double *)(pFVar8 + local_res8 + 0x10) - local_118);
        dVar30 = dVar29 * dVar29 + dVar5 * dVar5 + dVar12 * dVar12;
        dVar6 = dVar29 * (*(double *)(pFVar8 + local_res8 + 8) - dVar17) +
                dVar5 * (*(double *)(pFVar8 + local_res8) - dVar16) +
                dVar12 * (*(double *)(pFVar8 + local_res8 + 0x10) - local_118);
        dVar29 = dVar18 / (dVar30 * dVar14 - dVar13 * dVar13);
        dVar5 = (dVar15 * dVar30 - dVar6 * dVar13) * dVar29;
        dVar29 = (dVar6 * dVar14 - dVar15 * dVar13) * dVar29;
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar8 = (this->BarycentricCoords).AllocatorInstance.Data;
        local_res8 = local_res8 + 0x38;
        uVar22 = (ulonglong)(uVar26 + 1);
        uVar28 = uVar28 + 1;
        *(double *)(pFVar8 + lVar27) = dVar5;
        *(double *)(pFVar8 + lVar27 + 8) = dVar29;
        *(double *)(pFVar8 + lVar27 + 0x10) = (dVar18 - dVar5) - dVar29;
        lVar27 = lVar27 + 0x18;
      } while ((longlong)uVar28 < (longlong)iVar7);
    }
  }
  if (param_2 == (FProgressCancel *)0x0) {
LAB_1435f6330:
    (this->Result).Result = Success;
    return;
  }
  if (param_2->WasCancelled == false) {
    Core::Private::Function::CheckCallable(*(void **)&param_2->CancelF);
    pcVar11 = *(code **)&param_2->CancelF;
    plVar10 = *(longlong **)&(param_2->CancelF).field_0x28;
    plVar23 = (longlong *)&(param_2->CancelF).field_0x10;
    if (plVar10 != (longlong *)0x0) {
      plVar23 = plVar10;
    }
    uVar21 = (**(code **)(*plVar23 + 8))();
    bVar19 = (bool)(*pcVar11)(uVar21);
    param_2->WasCancelled = bVar19;
    if (bVar19 == false) goto LAB_1435f6330;
  }
  (this->Result).Result = Cancelled;
  return;
}

