// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 25

// <lambda_invoker_cdecl> @ 14332f1c0

bool __cdecl UE::Geometry::FMarchingCubes::<lambda_25_>::<lambda_invoker_cdecl>(void)

{
  return false;
}

// FMarchingCubes @ 143366e60

FMarchingCubes * __thiscall UE::Geometry::FMarchingCubes::FMarchingCubes(FMarchingCubes *this)

{
  undefined1 *puVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  this->_padding_ = (longlong)&___7FMarchingCubes_Geometry_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->Implicit = 0;
  *(undefined8 *)&(this->Implicit).field_0x28 = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->IsoValue = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  this->CubeSize = 0.1;
  this->bParallelCompute = true;
  this->bEnableValueCaching = true;
  this->SafetyMaxDimension = 0x1000;
  this->RootMode = SingleLerp;
  this->RootModeSteps = 5;
  *(undefined8 *)&this->CancelF = 0;
  *(undefined8 *)&(this->CancelF).field_0x28 = 0;
  *(undefined ***)&(this->CancelF).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->CancelF).field_0x18;
  *(code **)puVar1 = <lambda_25_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->CancelF =
         Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  *(undefined8 *)&(this->CellDimensions).field0_0x0 = 0;
  (this->CellDimensions).field0_0x0._s_0.Z = 0;
  (this->GridBounds).Min.field0_0x0._s_0.X = 0x7fffffff;
  (this->GridBounds).Min.field0_0x0._s_0.Y = 0x7fffffff;
  (this->GridBounds).Min.field0_0x0._s_0.Z = 0x7fffffff;
  (this->GridBounds).Max.field0_0x0._s_0.X = -0x7fffffff;
  (this->GridBounds).Max.field0_0x0._s_0.Y = -0x7fffffff;
  (this->GridBounds).Max.field0_0x0._s_0.Z = -0x7fffffff;
  (this->LastGridBounds).Min.field0_0x0._s_0.X = 0x7fffffff;
  (this->LastGridBounds).Min.field0_0x0._s_0.Y = 0x7fffffff;
  (this->LastGridBounds).Min.field0_0x0._s_0.Z = 0x7fffffff;
  (this->LastGridBounds).Max.field0_0x0._s_0.X = -0x7fffffff;
  (this->LastGridBounds).Max.field0_0x0._s_0.Y = -0x7fffffff;
  (this->LastGridBounds).Max.field0_0x0._s_0.Z = -0x7fffffff;
  this->EDGE_X = 0x1000000000000000;
  this->EDGE_Y = 0x2000000000000000;
  this->EDGE_Z = 0x4000000000000000;
  this->NumEdgeVertexSections = 0x40;
  (this->EdgeVertexSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeVertexSections).ArrayNum = 0;
  (this->EdgeVertexSections).ArrayMax = 0;
  (this->EdgeVertexSectionLocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeVertexSectionLocks).ArrayNum = 0;
  (this->EdgeVertexSectionLocks).ArrayMax = 0;
  (this->BlockedCornerValuesGrid)._padding_ = 0;
  (this->BlockedCornerValuesGrid)._padding_ = 0;
  (this->BlockedCornerValuesGrid)._padding_ = 0;
  TBlockedGrid3Layout<32>::Resize((TBlockedGrid3Layout<32> *)&this->BlockedCornerValuesGrid,0,0,0);
  *(undefined4 *)&(this->BlockedCornerValuesGrid)._padding_ = 0;
  (this->BlockedCornerValuesGrid)._padding_ = 0;
  (this->BlockedCornerValuesGrid)._padding_ = 0;
  (this->BlockedCornerValuesGrid).BlockLocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->BlockedCornerValuesGrid).BlockLocks.ArrayNum = 0;
  (this->BlockedCornerValuesGrid).BlockLocks.ArrayMax = 0;
  this->parallel_mesh_access = false;
  (this->BlockedDoneCells)._padding_ = 0;
  (this->BlockedDoneCells)._padding_ = 0;
  (this->BlockedDoneCells)._padding_ = 0;
  TBlockedGrid3Layout<32>::Resize((TBlockedGrid3Layout<32> *)&this->BlockedDoneCells,0,0,0);
  dVar2 = __real_4020000000000000;
  *(undefined4 *)&(this->BlockedDoneCells)._padding_ = 0;
  (this->BlockedDoneCells)._padding_ = 0;
  (this->BlockedDoneCells)._padding_ = 0;
  (this->BlockedDoneCells).BlockLocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlockedDoneCells).BlockLocks.ArrayNum = 0;
  (this->BlockedDoneCells).BlockLocks.ArrayMax = 0;
  this->VertexCounter = (atomic<int>)0x0;
  this->NumVertexSections = 0x40;
  (this->VertexSectionLocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexSectionLocks).ArrayNum = 0;
  (this->VertexSectionLocks).ArrayMax = 0;
  (this->VertexSectionLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexSectionLists).ArrayNum = 0;
  (this->VertexSectionLists).ArrayMax = 0;
  this->NumTriangleSections = 0x40;
  (this->TriangleSectionLocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleSectionLocks).ArrayNum = 0;
  (this->TriangleSectionLocks).ArrayMax = 0;
  (this->TriangleSectionLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleSectionLists).ArrayNum = 0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TriangleSectionLists).ArrayMax = 0;
  dVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X + dVar2;
  dVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z - dVar2;
  (this->Bounds).Min.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X - dVar2;
  (this->Bounds).Min.field0_0x0._s_0.Y = (double)uVar3 - dVar2;
  (this->Bounds).Min.field0_0x0._s_0.Z = dVar5;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar6;
  (this->Bounds).Max.field0_0x0._s_0.Y = (double)uVar3 + dVar2;
  (this->Bounds).Max.field0_0x0._s_0.Z = (double)uVar4 + dVar2;
  this->CubeSize = 0.25;
  return this;
}

// ~FMarchingCubes @ 14336a3f0

void __thiscall UE::Geometry::FMarchingCubes::~FMarchingCubes(FMarchingCubes *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FMarchingCubes_Geometry_UE__6B_;
  DestructItems<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)
             (this->TriangleSectionLists).AllocatorInstance.Data,
             (this->TriangleSectionLists).ArrayNum);
  pFVar1 = (this->TriangleSectionLists).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::FWindowsRecursiveMutex,int>
            ((FWindowsRecursiveMutex *)(this->TriangleSectionLocks).AllocatorInstance.Data,
             (this->TriangleSectionLocks).ArrayNum);
  pFVar1 = (this->TriangleSectionLocks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Geometry::FMarchingCubes::FIndexedVertex,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Geometry::FMarchingCubes::FIndexedVertex,TSizedDefaultAllocator<32>_> *)
             (this->VertexSectionLists).AllocatorInstance.Data,(this->VertexSectionLists).ArrayNum);
  pFVar1 = (this->VertexSectionLists).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::FWindowsRecursiveMutex,int>
            ((FWindowsRecursiveMutex *)(this->VertexSectionLocks).AllocatorInstance.Data,
             (this->VertexSectionLocks).ArrayNum);
  pFVar1 = (this->VertexSectionLocks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::FWindowsRecursiveMutex,int>
            ((FWindowsRecursiveMutex *)(this->BlockedDoneCells).BlockLocks.AllocatorInstance.Data,
             (this->BlockedDoneCells).BlockLocks.ArrayNum);
  pFVar1 = (this->BlockedDoneCells).BlockLocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<int,32>::FBlock3,int>
            ((FBlock3 *)(this->BlockedDoneCells)._padding_,(int)(this->BlockedDoneCells)._padding_);
  pvVar2 = (void *)(this->BlockedDoneCells)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<UE::FWindowsRecursiveMutex,int>
            ((FWindowsRecursiveMutex *)
             (this->BlockedCornerValuesGrid).BlockLocks.AllocatorInstance.Data,
             (this->BlockedCornerValuesGrid).BlockLocks.ArrayNum);
  pFVar1 = (this->BlockedCornerValuesGrid).BlockLocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<float,32>::FBlock3,int>
            ((FBlock3 *)(this->BlockedCornerValuesGrid)._padding_,
             (int)(this->BlockedCornerValuesGrid)._padding_);
  pvVar2 = (void *)(this->BlockedCornerValuesGrid)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<UE::FWindowsRecursiveMutex,int>
            ((FWindowsRecursiveMutex *)(this->EdgeVertexSectionLocks).AllocatorInstance.Data,
             (this->EdgeVertexSectionLocks).ArrayNum);
  pFVar1 = (this->EdgeVertexSectionLocks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>,int>
            ((TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_> *)
             (this->EdgeVertexSections).AllocatorInstance.Data,(this->EdgeVertexSections).ArrayNum);
  pFVar1 = (this->EdgeVertexSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->CancelF != 0) {
    plVar3 = *(longlong **)&(this->CancelF).field_0x28;
    plVar4 = (longlong *)&(this->CancelF).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->Implicit != 0) {
    plVar3 = *(longlong **)&(this->Implicit).field_0x28;
    plVar4 = (longlong *)&(this->Implicit).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  FMeshShapeGenerator::~FMeshShapeGenerator((FMeshShapeGenerator *)this);
  return;
}

// operator() @ 1433718b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`UE::Geometry::FMarchingCubes::generate_parallel'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  uint uVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  uint6 uVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  longlong *plVar13;
  uchar *puVar14;
  ulong64 uVar15;
  int *piVar16;
  ushort uVar17;
  FMarchingCubes *pFVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStackY_198 [32];
  int local_108 [12];
  FVector3i_u_0 local_d8;
  FVector3i_u_0 FStack_cc;
  FVector3i_u_0 FStack_c0;
  int iStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  int iStack_a0;
  FVector3i_u_0 FStack_9c;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78 [4];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar18 = *(FMarchingCubes **)this;
  local_d8._0_8_ = 0;
  local_d8._s_0.Z = 0;
  FStack_cc._s_0.X = 0;
  FStack_cc._s_0.Y = 0;
  FStack_cc._s_0.Z = 0;
  FStack_c0._0_8_ = 0;
  FStack_c0._s_0.Z = 0;
  iStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_a8 = 0;
  iStack_a0 = 0;
  FStack_9c._s_0.X = 0;
  FStack_9c._s_0.Y = 0;
  FStack_9c._s_0.Z = 0;
  auStack_90 = (undefined1  [8])0x0;
  uVar20 = 0;
  local_88 = 0;
  uStack_80 = 0;
  if (0 < (pFVar18->CellDimensions).field0_0x0._s_0.Y) {
    do {
      UE::Core::Private::Function::CheckCallable(*(void **)&pFVar18->CancelF);
      plVar5 = *(longlong **)&(pFVar18->CancelF).field_0x28;
      pcVar6 = *(code **)&pFVar18->CancelF;
      plVar13 = (longlong *)&(pFVar18->CancelF).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar13 = plVar5;
      }
      uVar12 = (**(code **)(*plVar13 + 8))();
      cVar8 = (*pcVar6)(uVar12);
      if (cVar8 != '\0') {
        return;
      }
      pFVar18 = *(FMarchingCubes **)this;
      FStack_c0._s_0.Z = param_1 + 1;
      uVar1 = uVar20 + 1;
      local_d8._0_8_ = (ulonglong)uVar20 << 0x20;
      FStack_cc._s_0.X = 1;
      FStack_c0._0_8_ = CONCAT44(uVar20,1);
      iStack_b4 = 0;
      local_a8 = (ulonglong)uVar1 << 0x20;
      uVar17 = 1;
      FStack_9c._s_0.X = 1;
      auStack_90._4_4_ = uVar1;
      auStack_90._0_4_ = 1;
      local_88 = (ulonglong)(uint)FStack_c0._s_0.Z;
      uStack_80 = CONCAT44(FStack_c0._s_0.Z,uVar1);
      FStack_cc._s_0.Y = uVar20;
      FStack_cc._s_0.Z = param_1;
      uStack_b0 = uVar20;
      uStack_ac = FStack_c0._s_0.Z;
      iStack_a0 = param_1;
      FStack_9c._s_0.Y = uVar1;
      FStack_9c._s_0.Z = param_1;
      local_d8._s_0.Z = param_1;
      if (pFVar18->bEnableValueCaching == false) {
        UE::Geometry::FMarchingCubes::initialize_cell_values_nohash
                  (pFVar18,(FGridCell *)&local_d8._s_0,false);
      }
      else {
        UE::Geometry::FMarchingCubes::initialize_cell_values_grid
                  (pFVar18,(FGridCell *)&local_d8._s_0,false);
      }
      pFVar18 = *(FMarchingCubes **)this;
      dVar2 = pFVar18->IsoValue;
      uVar20 = local_78[0] < dVar2 | 2;
      if (dVar2 <= local_78[1]) {
        uVar20 = (uint)(local_78[0] < dVar2);
      }
      uVar10 = uVar20 | 4;
      if (dVar2 <= local_78[2]) {
        uVar10 = uVar20;
      }
      uVar20 = uVar10 | 8;
      if (dVar2 <= local_78[3]) {
        uVar20 = uVar10;
      }
      uVar10 = uVar20 | 0x10;
      if (dVar2 <= local_58) {
        uVar10 = uVar20;
      }
      uVar20 = uVar10 | 0x20;
      if (dVar2 <= local_50) {
        uVar20 = uVar10;
      }
      uVar10 = uVar20 | 0x40;
      if (dVar2 <= local_48) {
        uVar10 = uVar20;
      }
      uVar20 = uVar10 | 0x80;
      if (dVar2 <= local_40) {
        uVar20 = uVar10;
      }
      if (UE::Geometry::FMarchingCubes::EdgeTable[uVar20] != 0) {
        piVar16 = local_108;
        puVar14 = UE::Geometry::FMarchingCubes::EdgeIndices[0] + 1;
        do {
          if ((uVar17 & UE::Geometry::FMarchingCubes::EdgeTable[uVar20]) != 0) {
            iVar11 = UE::Geometry::FMarchingCubes::edge_vertex_id
                               (pFVar18,(FVector3i *)
                                        &(&local_d8)[(*(uchar (*) [2])(puVar14 + -1))[0]]._s_0,
                                (FVector3i *)&(&local_d8)[*puVar14]._s_0,
                                local_78[(*(uchar (*) [2])(puVar14 + -1))[0]],local_78[*puVar14]);
            *piVar16 = iVar11;
          }
          uVar17 = uVar17 * 2;
          puVar14 = puVar14 + 2;
          piVar16 = piVar16 + 1;
        } while ((longlong)puVar14 < 0x150aa24f8);
        uVar15 = UE::Geometry::FMarchingCubes::TriTable[uVar20];
        uVar7 = CONCAT42(CONCAT22(local_d8._s_0.Z._0_2_,local_d8._s_0.Y._0_2_),local_d8._s_0.X._0_2_
                        );
        for (; uVar15 != 0; uVar15 = uVar15 >> 0xc) {
          iVar11 = local_108[(uint)uVar15 & 0xf];
          iVar21 = local_108[(uint)(uVar15 >> 4) & 0xf];
          iVar19 = local_108[(uint)(uVar15 >> 8) & 0xf];
          if (((iVar11 == iVar21) || (iVar11 == iVar19)) || (iVar21 == iVar19)) {
            bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<765328623430271823>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Generators\\MarchingCubes.h"
                               ,0x34f,"a != b && a != c && b != c");
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            UE::Geometry::FMarchingCubes::append_triangle
                      (pFVar18,iVar11,iVar21,iVar19,(ulonglong)uVar7);
          }
        }
      }
      pFVar18 = *(FMarchingCubes **)this;
      if (1 < (pFVar18->CellDimensions).field0_0x0._s_0.X) {
        iVar21 = 2;
        iVar11 = 1;
        do {
          iVar19 = iVar11 + 1;
          local_78[0] = local_78[1];
          local_78[3] = local_78[2];
          local_58 = local_50;
          local_40 = local_48;
          local_d8._s_0.X = iVar11;
          FStack_c0._s_0.X = iVar19;
          local_a8 = CONCAT44(local_a8._4_4_,iVar11);
          auStack_90._0_4_ = iVar19;
          local_88 = CONCAT44(iVar11,(undefined4)local_88);
          FStack_cc._s_0.X = iVar21;
          iStack_b4 = iVar11;
          FStack_9c._s_0.X = iVar19;
          if (pFVar18->bEnableValueCaching == false) {
            local_78[1] = UE::Geometry::FMarchingCubes::corner_value_nohash
                                    (pFVar18,(FVector3i *)&FStack_cc._s_0);
            local_78[2] = UE::Geometry::FMarchingCubes::corner_value_nohash
                                    (pFVar18,(FVector3i *)&FStack_c0._s_0);
            local_50 = UE::Geometry::FMarchingCubes::corner_value_nohash
                                 (pFVar18,(FVector3i *)&FStack_9c._s_0);
            dVar2 = UE::Geometry::FMarchingCubes::corner_value_nohash
                              (pFVar18,(FVector3i *)auStack_90);
            uVar22 = SUB84(dVar2,0);
            uVar23 = (undefined4)((ulonglong)dVar2 >> 0x20);
          }
          else {
            local_78[1] = UE::Geometry::FMarchingCubes::corner_value_grid
                                    (pFVar18,(FVector3i *)&FStack_cc._s_0);
            local_78[2] = UE::Geometry::FMarchingCubes::corner_value_grid
                                    (pFVar18,(FVector3i *)&FStack_c0._s_0);
            local_50 = UE::Geometry::FMarchingCubes::corner_value_grid
                                 (pFVar18,(FVector3i *)&FStack_9c._s_0);
            dVar2 = UE::Geometry::FMarchingCubes::corner_value_grid(pFVar18,(FVector3i *)auStack_90)
            ;
            uVar22 = SUB84(dVar2,0);
            uVar23 = (undefined4)((ulonglong)dVar2 >> 0x20);
          }
          pFVar18 = *(FMarchingCubes **)this;
          local_48 = (double)CONCAT44(uVar23,uVar22);
          dVar2 = pFVar18->IsoValue;
          uVar17 = 1;
          uVar20 = local_78[0] < dVar2 | 2;
          if (dVar2 <= local_78[1]) {
            uVar20 = (uint)(local_78[0] < dVar2);
          }
          uVar10 = uVar20 | 4;
          if (dVar2 <= local_78[2]) {
            uVar10 = uVar20;
          }
          uVar20 = uVar10 | 8;
          if (dVar2 <= local_78[3]) {
            uVar20 = uVar10;
          }
          uVar10 = uVar20 | 0x10;
          if (dVar2 <= local_58) {
            uVar10 = uVar20;
          }
          uVar20 = uVar10 | 0x20;
          if (dVar2 <= local_50) {
            uVar20 = uVar10;
          }
          uVar10 = uVar20 | 0x40;
          if (dVar2 <= (double)CONCAT44(uVar23,uVar22)) {
            uVar10 = uVar20;
          }
          uVar20 = uVar10 | 0x80;
          if (dVar2 <= local_40) {
            uVar20 = uVar10;
          }
          if (UE::Geometry::FMarchingCubes::EdgeTable[uVar20] != 0) {
            piVar16 = local_108;
            puVar14 = UE::Geometry::FMarchingCubes::EdgeIndices[0] + 1;
            do {
              if ((uVar17 & UE::Geometry::FMarchingCubes::EdgeTable[uVar20]) != 0) {
                iVar11 = UE::Geometry::FMarchingCubes::edge_vertex_id
                                   (pFVar18,(FVector3i *)
                                            &(&local_d8)[(*(uchar (*) [2])(puVar14 + -1))[0]]._s_0,
                                    (FVector3i *)&(&local_d8)[*puVar14]._s_0,
                                    local_78[(*(uchar (*) [2])(puVar14 + -1))[0]],local_78[*puVar14]
                                   );
                *piVar16 = iVar11;
              }
              uVar17 = uVar17 * 2;
              puVar14 = puVar14 + 2;
              piVar16 = piVar16 + 1;
            } while ((longlong)puVar14 < 0x150aa24f8);
            uVar15 = UE::Geometry::FMarchingCubes::TriTable[uVar20];
            uVar7 = CONCAT42(CONCAT22(local_d8._s_0.Z._0_2_,local_d8._s_0.Y._0_2_),
                             local_d8._s_0.X._0_2_);
            for (; uVar15 != 0; uVar15 = uVar15 >> 0xc) {
              iVar11 = local_108[(uint)uVar15 & 0xf];
              iVar3 = local_108[(uint)(uVar15 >> 4) & 0xf];
              iVar4 = local_108[(uint)(uVar15 >> 8) & 0xf];
              if (((iVar11 == iVar3) || (iVar11 == iVar4)) || (iVar3 == iVar4)) {
                bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<765328623430271823>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Generators\\MarchingCubes.h"
                                   ,0x34f,"a != b && a != c && b != c");
                if (bVar9) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              else {
                UE::Geometry::FMarchingCubes::append_triangle
                          (pFVar18,iVar11,iVar3,iVar4,(ulonglong)uVar7);
              }
            }
          }
          iVar21 = iVar21 + 1;
          pFVar18 = *(FMarchingCubes **)this;
          iVar11 = iVar19;
        } while (iVar19 < (pFVar18->CellDimensions).field0_0x0._s_0.X);
      }
      uVar20 = uVar1;
    } while ((int)uVar1 < (pFVar18->CellDimensions).field0_0x0._s_0.Y);
  }
  return;
}

// operator() @ 143372300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FMarchingCubes::generate_continuation_parallel'::__l11::<lambda_1>::operator()
          (void *this,int param_1)

{
  void *_Dst;
  LPCRITICAL_SECTION lpCriticalSection;
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  FMarchingCubes *pFVar6;
  ForElementType<UE::Geometry::FVector3i> *pFVar7;
  code *pcVar8;
  uint6 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  ForElementType<UE::Geometry::FVector3i> FVar18;
  TBlockData3<int,32> *pTVar19;
  ForElementType<UE::Geometry::FVector3i> FVar20;
  longlong *plVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uchar *puVar25;
  ulong64 uVar26;
  int iVar27;
  int *piVar28;
  FVector3i *pFVar29;
  ushort uVar30;
  uint uVar31;
  undefined1 auStackY_4d8 [32];
  uint local_470;
  int iStack_46c;
  int local_468;
  undefined1 local_460 [104];
  undefined1 local_3f8 [8];
  FVector3i FStack_3f0;
  int iStack_3e4;
  undefined1 auStack_3e0 [8];
  FVector3i local_3d8;
  int iStack_3cc;
  undefined1 local_3c8 [8];
  FVector3i FStack_3c0;
  int iStack_3b4;
  undefined1 auStack_3b0 [8];
  FVector3i local_3a8;
  int iStack_39c;
  double local_398 [4];
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  ForElementType<UE::Geometry::FVector3i> local_358;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  plVar21 = *(longlong **)this;
  uVar31 = 0;
  if (param_1 < (int)plVar21[1]) {
    uVar31 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar31 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar17 = *plVar21;
  lVar5 = *(longlong *)((longlong)this + 8);
  local_460._0_8_ = *(undefined8 *)(lVar17 + (longlong)param_1 * 0xc);
  local_460._8_4_ = *(undefined4 *)(lVar17 + 8 + (longlong)param_1 * 0xc);
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar5 + 0x120));
  pcVar8 = *(code **)(lVar5 + 0x120);
  plVar21 = (longlong *)(lVar5 + 0x130);
  if (*(longlong **)(lVar5 + 0x148) != (longlong *)0x0) {
    plVar21 = *(longlong **)(lVar5 + 0x148);
  }
  (**(code **)(*plVar21 + 8))();
  cVar13 = (*pcVar8)();
  if (cVar13 == '\0') {
    local_4c = 0x40;
    local_3f8[0] = '\0';
    local_3f8[1] = '\0';
    local_3f8[2] = '\0';
    local_3f8[3] = '\0';
    local_3f8[4] = '\0';
    local_3f8[5] = '\0';
    local_3f8[6] = '\0';
    local_3f8[7] = '\0';
    FStack_3f0.field0_0x0._0_8_ = 0;
    FStack_3f0.field0_0x0._s_0.Z._0_1_ = '\0';
    FStack_3f0.field0_0x0._s_0.Z._1_1_ = '\0';
    FStack_3f0.field0_0x0._s_0.Z._2_1_ = '\0';
    FStack_3f0.field0_0x0._s_0.Z._3_1_ = '\0';
    iStack_3e4._0_1_ = '\0';
    iStack_3e4._1_1_ = '\0';
    iStack_3e4._2_1_ = '\0';
    iStack_3e4._3_1_ = '\0';
    auStack_3e0[0] = '\0';
    auStack_3e0[1] = '\0';
    auStack_3e0[2] = '\0';
    auStack_3e0[3] = '\0';
    auStack_3e0[4] = '\0';
    auStack_3e0[5] = '\0';
    auStack_3e0[6] = '\0';
    auStack_3e0[7] = '\0';
    local_3d8.field0_0x0._0_8_ = 0;
    local_3d8.field0_0x0._s_0.Z._0_1_ = '\0';
    local_3d8.field0_0x0._s_0.Z._1_1_ = '\0';
    local_3d8.field0_0x0._s_0.Z._2_1_ = '\0';
    local_3d8.field0_0x0._s_0.Z._3_1_ = '\0';
    iStack_3cc._0_1_ = '\0';
    iStack_3cc._1_1_ = '\0';
    iStack_3cc._2_1_ = '\0';
    iStack_3cc._3_1_ = '\0';
    local_3c8[0] = '\0';
    local_3c8[1] = '\0';
    local_3c8[2] = '\0';
    local_3c8[3] = '\0';
    local_3c8[4] = '\0';
    local_3c8[5] = '\0';
    local_3c8[6] = '\0';
    local_3c8[7] = '\0';
    FStack_3c0.field0_0x0._0_8_ = 0;
    FStack_3c0.field0_0x0._s_0.Z._0_1_ = '\0';
    FStack_3c0.field0_0x0._s_0.Z._1_1_ = '\0';
    FStack_3c0.field0_0x0._s_0.Z._2_1_ = '\0';
    FStack_3c0.field0_0x0._s_0.Z._3_1_ = '\0';
    iStack_3b4._0_1_ = '\0';
    iStack_3b4._1_1_ = '\0';
    iStack_3b4._2_1_ = '\0';
    iStack_3b4._3_1_ = '\0';
    auStack_3b0[0] = '\0';
    auStack_3b0[1] = '\0';
    auStack_3b0[2] = '\0';
    auStack_3b0[3] = '\0';
    auStack_3b0[4] = '\0';
    auStack_3b0[5] = '\0';
    auStack_3b0[6] = '\0';
    auStack_3b0[7] = '\0';
    local_3a8.field0_0x0._0_8_ = 0;
    local_3a8.field0_0x0._s_0.Z._0_1_ = '\0';
    local_3a8.field0_0x0._s_0.Z._1_1_ = '\0';
    local_3a8.field0_0x0._s_0.Z._2_1_ = '\0';
    local_3a8.field0_0x0._s_0.Z._3_1_ = '\0';
    iStack_39c._0_1_ = '\0';
    iStack_39c._1_1_ = '\0';
    iStack_39c._2_1_ = '\0';
    iStack_39c._3_1_ = '\0';
    local_358.SecondaryData = (ForElementType<UE::Geometry::FVector3i>)0x0;
    local_50 = 0;
    iVar14 = 0;
    if ((&local_358 <= (ForElementType<UE::Geometry::FVector3i> *)local_460) &&
       (local_460 < &local_358.SecondaryData)) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar12) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = local_50;
      if (local_50 == local_4c) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::FVector3i>_>
                           (0x40c,&local_358,&local_4c);
      }
    }
    local_50 = iVar14 + 1;
    FVar20 = (ForElementType<UE::Geometry::FVector3i>)&local_358;
    if (local_358.SecondaryData != (ForElementType<UE::Geometry::FVector3i>)0x0) {
      FVar20 = local_358.SecondaryData;
    }
    *(undefined8 *)((longlong)FVar20 + (longlong)iVar14 * 0xc) = local_460._0_8_;
    *(undefined4 *)((uchar *)((longlong)FVar20 + 8) + (longlong)iVar14 * 0xc) = local_460._8_4_;
    iVar14 = 0;
    while (0 < local_50) {
      local_460._16_4_ = iVar14 + 1;
      if (99 < iVar14) {
        EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
        pFVar7 = *(ForElementType<UE::Geometry::FVector3i> **)((longlong)this + 0x18);
        if ((pFVar7 == &local_358) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar17 = (longlong)local_50;
        if (local_50 != 0) {
          iVar14 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0xc,4,local_50,(ForAnyElementType *)pFVar7,
                              (int *)((longlong)pFVar7->InlineData + 8),
                              (int *)((longlong)pFVar7->InlineData + 0xc));
          FVar20 = (ForElementType<UE::Geometry::FVector3i>)&local_358;
          if (local_358.SecondaryData != (ForElementType<UE::Geometry::FVector3i>)0x0) {
            FVar20 = local_358.SecondaryData;
          }
          memcpy(*(FScriptContainerElement **)pFVar7->InlineData + (longlong)iVar14 * 0xc,
                 (void *)FVar20,lVar17 * 0xc);
        }
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
        break;
      }
      if ((local_50 < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar17 = (longlong)(local_50 + -1);
      FVar20 = (ForElementType<UE::Geometry::FVector3i>)&local_358;
      if (local_358.SecondaryData != (ForElementType<UE::Geometry::FVector3i>)0x0) {
        FVar20 = local_358.SecondaryData;
      }
      local_460._24_8_ = *(undefined8 *)((longlong)FVar20 + lVar17 * 0xc);
      FVar18 = (ForElementType<UE::Geometry::FVector3i>)&local_358;
      if (local_358.SecondaryData != (ForElementType<UE::Geometry::FVector3i>)0x0) {
        FVar18 = local_358.SecondaryData;
      }
      iVar2 = *(int *)((uchar *)((longlong)FVar20 + 8) + lVar17 * 0xc);
      _Dst = (void *)((longlong)FVar18 + lVar17 * 0xc);
      iVar14 = (local_50 - (local_50 + -1)) + -1;
      if (iVar14 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 0xc),(longlong)iVar14 * 0xc);
      }
      uVar10 = local_460._24_4_;
      iStack_3cc = iVar2 + 1;
      local_50 = local_50 + -1;
      pFVar6 = *(FMarchingCubes **)((longlong)this + 8);
      auStack_3e0._0_4_ = local_460._24_4_ + 1;
      local_3d8.field0_0x0._s_0.Z = SUB84(local_460._24_8_,4);
      auStack_3b0._4_4_ = local_3d8.field0_0x0._s_0.Z + 1;
      auStack_3e0._4_4_ = local_3d8.field0_0x0._s_0.Z;
      auStack_3b0._0_4_ = auStack_3e0._0_4_;
      iStack_39c = iStack_3cc;
      local_3a8.field0_0x0._s_0.Z = auStack_3b0._4_4_;
      local_3f8 = (undefined1  [8])local_460._24_8_;
      FStack_3f0.field0_0x0._s_0.Y = auStack_3e0._0_4_;
      FStack_3f0.field0_0x0._s_0.X = iVar2;
      iStack_3e4 = iVar2;
      FStack_3f0.field0_0x0._s_0.Z = local_3d8.field0_0x0._s_0.Z;
      local_3d8.field0_0x0._s_0.Y = local_460._24_4_;
      local_3d8.field0_0x0._s_0.X = iStack_3cc;
      local_3c8._4_4_ = auStack_3b0._4_4_;
      local_3c8._0_4_ = local_460._24_4_;
      FStack_3c0.field0_0x0._s_0.Y = auStack_3e0._0_4_;
      FStack_3c0.field0_0x0._s_0.X = iVar2;
      iStack_3b4 = iVar2;
      FStack_3c0.field0_0x0._s_0.Z = auStack_3b0._4_4_;
      local_3a8.field0_0x0._s_0.Y = local_460._24_4_;
      local_3a8.field0_0x0._s_0.X = iStack_3cc;
      if (pFVar6->bEnableValueCaching == false) {
        UE::Geometry::FMarchingCubes::initialize_cell_values_nohash
                  (pFVar6,(FGridCell *)local_3f8,false);
      }
      else {
        UE::Geometry::FMarchingCubes::initialize_cell_values_grid
                  (pFVar6,(FGridCell *)local_3f8,false);
      }
      pFVar6 = *(FMarchingCubes **)((longlong)this + 8);
      dVar1 = pFVar6->IsoValue;
      uVar30 = 1;
      uVar31 = local_398[0] < dVar1 | 2;
      if (dVar1 <= local_398[1]) {
        uVar31 = (uint)(local_398[0] < dVar1);
      }
      uVar24 = uVar31 | 4;
      if (dVar1 <= local_398[2]) {
        uVar24 = uVar31;
      }
      uVar31 = uVar24 | 8;
      if (dVar1 <= local_398[3]) {
        uVar31 = uVar24;
      }
      uVar24 = uVar31 | 0x10;
      if (dVar1 <= local_378) {
        uVar24 = uVar31;
      }
      uVar31 = uVar24 | 0x20;
      if (dVar1 <= local_370) {
        uVar31 = uVar24;
      }
      uVar24 = uVar31 | 0x40;
      if (dVar1 <= local_368) {
        uVar24 = uVar31;
      }
      uVar31 = uVar24 | 0x80;
      if (dVar1 <= local_360) {
        uVar31 = uVar24;
      }
      iVar14 = local_460._16_4_;
      if (UE::Geometry::FMarchingCubes::EdgeTable[uVar31] != 0) {
        piVar28 = (int *)(local_460 + 0x38);
        puVar25 = UE::Geometry::FMarchingCubes::EdgeIndices[0] + 1;
        do {
          if ((uVar30 & UE::Geometry::FMarchingCubes::EdgeTable[uVar31]) != 0) {
            iVar14 = UE::Geometry::FMarchingCubes::edge_vertex_id
                               (pFVar6,(FVector3i *)
                                       (local_3f8 +
                                       (ulonglong)(*(uchar (*) [2])(puVar25 + -1))[0] * 0xc),
                                (FVector3i *)(local_3f8 + (ulonglong)*puVar25 * 0xc),
                                local_398[(*(uchar (*) [2])(puVar25 + -1))[0]],local_398[*puVar25]);
            *piVar28 = iVar14;
          }
          uVar30 = uVar30 * 2;
          puVar25 = puVar25 + 2;
          piVar28 = piVar28 + 1;
        } while ((longlong)puVar25 < 0x150aa24f8);
        iVar27 = 0;
        uVar26 = UE::Geometry::FMarchingCubes::TriTable[uVar31];
        uVar9 = CONCAT42(CONCAT22(FStack_3f0.field0_0x0._s_0.X._0_2_,local_3f8._4_2_),
                         local_3f8._0_2_);
        iVar14 = local_460._16_4_;
        if (uVar26 != 0) {
          do {
            iVar14 = *(int *)(local_460 + (ulonglong)((uint)uVar26 & 0xf) * 4 + 0x38);
            iVar3 = *(int *)(local_460 + (ulonglong)((uint)(uVar26 >> 4) & 0xf) * 4 + 0x38);
            iVar4 = *(int *)(local_460 + (ulonglong)((uint)(uVar26 >> 8) & 0xf) * 4 + 0x38);
            if (((iVar14 == iVar3) || (iVar14 == iVar4)) || (iVar3 == iVar4)) {
              bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<765328623430271823>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Generators\\MarchingCubes.h"
                                  ,0x34f,"a != b && a != c && b != c");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            else {
              UE::Geometry::FMarchingCubes::append_triangle
                        (pFVar6,iVar14,iVar3,iVar4,(ulonglong)uVar9);
              iVar27 = iVar27 + 1;
            }
            uVar26 = uVar26 >> 0xc;
          } while (uVar26 != 0);
          iVar14 = local_460._16_4_;
          if (0 < iVar27) {
            uVar11 = local_460._28_4_;
            pFVar29 = IndexUtil::GridOffsets6;
            do {
              local_460._40_8_ = *(undefined8 *)&pFVar29->field0_0x0;
              lVar17 = *(longlong *)((longlong)this + 8);
              local_468 = (pFVar29->field0_0x0)._s_0.Z + iVar2;
              local_470 = local_460._40_4_ + uVar10;
              iStack_46c = SUB84(local_460._40_8_,4) + uVar11;
              if ((((*(int *)(lVar17 + 0x15c) <= (int)local_470) &&
                   (*(int *)(lVar17 + 0x160) <= iStack_46c)) &&
                  ((*(int *)(lVar17 + 0x164) <= local_468 &&
                   (((int)local_470 <= *(int *)(lVar17 + 0x168) &&
                    (iStack_46c <= *(int *)(lVar17 + 0x16c))))))) &&
                 (local_468 <= *(int *)(lVar17 + 0x170))) {
                uVar24 = local_470 & 0x1f;
                uVar31 = local_470;
                if ((int)local_470 < 0) {
                  uVar31 = local_470 + 0x1f;
                  uVar24 = uVar24 - 0x20;
                }
                uVar22 = iStack_46c >> 0x1f & 0x1f;
                uVar15 = iStack_46c + uVar22;
                uVar23 = local_468 >> 0x1f & 0x1f;
                uVar16 = local_468 + uVar23;
                uVar24 = (((uVar16 & 0x1f) - uVar23) * 0x20 + ((uVar15 & 0x1f) - uVar22)) * 0x20 +
                         uVar24;
                iVar14 = (((int)uVar16 >> 5) * *(int *)(lVar17 + 0x21c) + ((int)uVar15 >> 5)) *
                         (int)((TBasicBlockedDenseGrid3<int,32> *)(lVar17 + 0x218))->_padding_ +
                         ((int)uVar31 >> 5);
                lpCriticalSection =
                     (LPCRITICAL_SECTION)(*(longlong *)(lVar17 + 0x248) + (longlong)iVar14 * 0x28);
                if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::ReportNotNullPtr();
                }
                EnterCriticalSection(lpCriticalSection);
                pTVar19 = UE::Geometry::TBasicBlockedDenseGrid3<int,32>::TouchBlockData
                                    ((TBasicBlockedDenseGrid3<int,32> *)(lVar17 + 0x218),iVar14);
                bVar12 = (pTVar19->Data).Elements[uVar24] == 0;
                if (bVar12) {
                  (pTVar19->Data).Elements[uVar24] = 1;
                }
                LeaveCriticalSection(lpCriticalSection);
                if (bVar12) {
                  FVar20 = (ForElementType<UE::Geometry::FVector3i>)&local_358;
                  if (local_358.SecondaryData != (ForElementType<UE::Geometry::FVector3i>)0x0) {
                    FVar20 = local_358.SecondaryData;
                  }
                  if ((ulonglong)FVar20 <= &local_470) {
                    FVar20 = (ForElementType<UE::Geometry::FVector3i>)&local_358;
                    if (local_358.SecondaryData != (ForElementType<UE::Geometry::FVector3i>)0x0) {
                      FVar20 = local_358.SecondaryData;
                    }
                    if ((&local_470 < (uint *)((longlong)FVar20 + (longlong)local_4c * 0xc)) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar12)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                  }
                  iVar14 = local_50;
                  if (local_50 == local_4c) {
                    iVar14 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::FVector3i>_>
                                       (0x40c,&local_358,&local_4c);
                  }
                  local_50 = iVar14 + 1;
                  FVar20 = (ForElementType<UE::Geometry::FVector3i>)&local_358;
                  if (local_358.SecondaryData != (ForElementType<UE::Geometry::FVector3i>)0x0) {
                    FVar20 = local_358.SecondaryData;
                  }
                  *(ulonglong *)((longlong)FVar20 + (longlong)iVar14 * 0xc) =
                       CONCAT44(iStack_46c,local_470);
                  *(int *)((uchar *)((longlong)FVar20 + 8) + (longlong)iVar14 * 0xc) = local_468;
                }
              }
              pFVar29 = pFVar29 + 1;
              iVar14 = local_460._16_4_;
            } while (pFVar29 != (FVector3i *)&DAT_150aa2fa8);
          }
        }
      }
    }
    if (local_358.SecondaryData != (ForElementType<UE::Geometry::FVector3i>)0x0) {
      FMemory::Free((void *)local_358.SecondaryData);
    }
  }
  return;
}

// AppendOrFindVertexID @ 143384da0

int __thiscall
UE::Geometry::FMarchingCubes::AppendOrFindVertexID
          (FMarchingCubes *this,long64 param_1,TVector<double> *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int local_res8 [2];
  long64 local_res10;
  TVector<double> *local_res18;
  long64 *local_68;
  int *local_60;
  TVector<double>_u_0 local_58;
  
  uVar6 = (uint)(param_1 % (this->NumEdgeVertexSections + -1));
  uVar8 = ~uVar6 >> 0x1f;
  uVar3 = 0;
  if ((int)uVar6 < (this->EdgeVertexSectionLocks).ArrayNum) {
    uVar3 = uVar8;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  lpCriticalSection =
       (LPCRITICAL_SECTION)
       ((this->EdgeVertexSectionLocks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x28);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    uVar3 = 0;
    if ((int)uVar6 < (this->EdgeVertexSections).ArrayNum) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    lVar7 = (longlong)(int)uVar6 * 0x50;
    piVar5 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
             ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                     *)((this->EdgeVertexSections).AllocatorInstance.Data + lVar7),local_res10);
    if (piVar5 == (int *)0x0) {
      local_58._s_0.X = (local_res18->field0_0x0)._s_0.X;
      local_58._s_0.Y = (local_res18->field0_0x0)._s_0.Y;
      local_58._s_0.Z = (local_res18->field0_0x0)._s_0.Z;
      local_res8[0] = append_vertex(this,(TVector<double> *)&local_58._s_0,local_res10);
      uVar3 = 0;
      if ((int)uVar6 < (this->EdgeVertexSections).ArrayNum) {
        uVar3 = uVar8;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      local_68 = &local_res10;
      local_60 = local_res8;
      TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<__int64_const_&,int_const_&>_>
                ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                  *)((this->EdgeVertexSections).AllocatorInstance.Data + lVar7),
                 (TPairInitializer<__int64_const_&,int_const_&> *)&stack0x00000020,(bool *)&local_68
                );
      iVar4 = local_res8[0];
    }
    else {
      iVar4 = *piVar5;
    }
    LeaveCriticalSection(lpCriticalSection);
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// BuildMesh @ 1433898c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FMarchingCubes::BuildMesh(FMarchingCubes *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  int *piVar15;
  longlong lVar16;
  uint uVar17;
  undefined8 *puVar18;
  int *piVar19;
  bool bVar20;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_b8 [8];
  ulonglong local_b0;
  ForAnyElementType local_a8;
  int local_a0 [2];
  FScriptContainerElement *local_98;
  undefined8 local_90;
  int iStack_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_void___cdecl_UE::Geometry::FMarchingCubes::BuildMesh(void)___ptr64'::
                __l2::__CpuProfilerEventSpecId944,"Geometry_MCMesh_BuildMesh",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Generators\\MarchingCubes.h"
               ,0x3b0);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_void___cdecl_UE::Geometry::FMarchingCubes::BuildMesh(void)___ptr64'::__l2
               ::__CpuProfilerEventSpecId944);
  }
  aVar3 = this->VertexCounter;
  local_b0 = CONCAT44(local_b0._4_4_,aVar3);
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  if ((int)aVar3 < 1) {
    if ((int)aVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)(uint)aVar3);
    }
  }
  else {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(int)aVar3,&local_a8,local_a0,local_a0 + 1);
  }
  iVar8 = (this->VertexSectionLists).ArrayNum;
  uVar11 = (ulonglong)iVar8;
  pFVar13 = (this->VertexSectionLists).AllocatorInstance.Data;
  pFVar12 = pFVar13 + uVar11 * 0x10;
  local_98 = (FScriptContainerElement *)CONCAT44(local_98._4_4_,iVar8);
  while( true ) {
    if ((this->VertexSectionLists).ArrayNum != (int)uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TArray<UE::Geometry::FMarchingCubes::FIndexedVertex,TSizedDefaultAllocator<32>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar13 == pFVar12) break;
    iVar8 = *(int *)(pFVar13 + 8);
    piVar15 = *(int **)pFVar13;
    piVar19 = piVar15 + (longlong)iVar8 * 8;
    while( true ) {
      if (*(int *)(pFVar13 + 8) != iVar8) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FMarchingCubes::FIndexedVertex_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (piVar15 == piVar19) break;
      iVar10 = *piVar15;
      iStack_64 = piVar15[1];
      iStack_60 = piVar15[2];
      iStack_5c = piVar15[3];
      local_58 = piVar15[4];
      iStack_54 = piVar15[5];
      local_90 = *(undefined8 *)(piVar15 + 4);
      iStack_88 = piVar15[6];
      iStack_84 = piVar15[7];
      local_68 = iVar10;
      iStack_50 = iStack_88;
      iStack_4c = iStack_84;
      if ((iVar10 < 0 || local_a0[0] <= iVar10) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      piVar15 = piVar15 + 8;
      *(ulonglong *)(local_a8.Data + (longlong)iVar10 * 0x18) = CONCAT44(iStack_5c,iStack_60);
      *(ulonglong *)(local_a8.Data + (longlong)iVar10 * 0x18 + 8) = CONCAT44(iStack_54,local_58);
      *(ulonglong *)(local_a8.Data + (longlong)iVar10 * 0x18 + 0x10) = CONCAT44(iStack_84,iStack_88)
      ;
    }
    uVar11 = (ulonglong)local_98 & 0xffffffff;
    pFVar13 = pFVar13 + 0x10;
  }
  local_b0 = (ulonglong)(int)local_b0;
  uVar17 = 0;
  if (0 < (longlong)local_b0) {
    lVar16 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar17 < local_a0[0]) {
        uVar7 = ~uVar17 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar13 = local_a8.Data + lVar16;
      if ((((FScriptContainerElement *)this->_padding_ <= pFVar13) &&
          (pFVar13 < (FScriptContainerElement *)this->_padding_ +
                     (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0x18)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (int)this->_padding_;
      if (iVar8 == *(int *)((longlong)&this->_padding_ + 4)) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)&this->_padding_,
                           (int *)((longlong)&this->_padding_ + 4));
      }
      uVar17 = uVar17 + 1;
      *(int *)&this->_padding_ = iVar8 + 1;
      lVar16 = lVar16 + 0x18;
      local_b0 = local_b0 + -1;
      uVar2 = *(undefined8 *)(pFVar13 + 8);
      lVar4 = this->_padding_;
      puVar1 = (undefined8 *)(lVar4 + (longlong)iVar8 * 0x18);
      *puVar1 = *(undefined8 *)pFVar13;
      puVar1[1] = uVar2;
      *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar8 * 0x18) = *(undefined8 *)(pFVar13 + 0x10);
    } while (local_b0 != 0);
  }
  iVar8 = (this->TriangleSectionLists).ArrayNum;
  uVar11 = (ulonglong)iVar8;
  pFVar13 = (this->TriangleSectionLists).AllocatorInstance.Data;
  local_98 = pFVar13 + uVar11 * 0x10;
  local_b0 = CONCAT44(local_b0._4_4_,iVar8);
  do {
    pFVar12 = local_98;
    if ((this->TriangleSectionLists).ArrayNum != (int)uVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar13 == pFVar12) {
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      if (bVar20) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    iVar8 = *(int *)(pFVar13 + 8);
    puVar18 = *(undefined8 **)pFVar13;
    puVar1 = (undefined8 *)((longlong)puVar18 + (longlong)iVar8 * 0xc);
    while( true ) {
      if (*(int *)(pFVar13 + 8) != iVar8) {
        local_b8[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FIndex3i_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_b8);
      }
      if (puVar18 == puVar1) break;
      local_90 = *puVar18;
      uVar9 = (undefined4)((ulonglong)local_90 >> 0x20);
      if ((char)this->_padding_ == '\0') {
        puVar14 = (undefined8 *)&local_74;
        local_74 = (int)local_90;
        local_70 = uVar9;
        local_6c = *(undefined4 *)(puVar18 + 1);
      }
      else {
        local_80 = *(undefined4 *)(puVar18 + 1);
        puVar14 = (undefined8 *)&local_80;
        local_78 = (int)local_90;
        uStack_7c = uVar9;
      }
      if ((((undefined8 *)this->_padding_ <= puVar14) &&
          (puVar14 < (undefined8 *)
                     (this->_padding_ + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0xc)))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = (int)this->_padding_;
      piVar15 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar10 == *piVar15) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,(ForAnyElementType *)&this->_padding_,piVar15);
      }
      uVar2 = *puVar14;
      *(int *)&this->_padding_ = iVar10 + 1;
      lVar16 = this->_padding_;
      *(undefined8 *)(lVar16 + (longlong)iVar10 * 0xc) = uVar2;
      *(undefined4 *)(lVar16 + (longlong)iVar10 * 0xc + 8) = *(undefined4 *)(puVar14 + 1);
      TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                 (int)this->_padding_,Default);
      TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                 (int)this->_padding_,Default);
      TArray<int,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,(int)this->_padding_,
                 Default);
      puVar18 = (undefined8 *)((longlong)puVar18 + 0xc);
    }
    pFVar13 = pFVar13 + 0x10;
    uVar11 = local_b0 & 0xffffffff;
  } while( true );
}

// Generate @ 1433a1d60

FMeshShapeGenerator * __thiscall UE::Geometry::FMarchingCubes::Generate(FMarchingCubes *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  <lambda_1> <Var6;
  bool bVar7;
  FMeshShapeGenerator *pFVar8;
  bool bVar9;
  FMarchingCubes *local_res10;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  FMarchingCubes **local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  uint uStack_1c;
  int local_18;
  int iStack_14;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_class_UE::Geometry::FMeshShapeGenerator&___ptr64___cdecl_UE::Geometry::FMarchingCubes::Generate(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId136,"Geometry_MCMesh_Generate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Generators\\MarchingCubes.h"
               ,0x88);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_class_UE::Geometry::FMeshShapeGenerator&___ptr64___cdecl_UE::Geometry::FMarchingCubes::Generate(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId136);
  }
  bVar7 = Validate(this);
  if (bVar7) {
    SetDimensions(this);
    piVar1 = &(this->CellDimensions).field0_0x0._s_0.Z;
    uStack_1c = (this->CellDimensions).field0_0x0._s_0.X - 1;
    local_18 = (this->CellDimensions).field0_0x0._s_0.Y + -1;
    local_28 = 0;
    iStack_14 = (this->CellDimensions).field0_0x0._s_0.Z + -1;
    uStack_20 = 0;
    *(undefined8 *)&(this->GridBounds).Min.field0_0x0 = 0;
    *(ulonglong *)((longlong)&(this->GridBounds).Min.field0_0x0 + 8) = (ulonglong)uStack_1c << 0x20;
    *(ulonglong *)((longlong)&(this->GridBounds).Max.field0_0x0 + 4) = CONCAT44(iStack_14,local_18);
    if (this->bEnableValueCaching != false) {
      iVar2 = *piVar1;
      iVar3 = (this->CellDimensions).field0_0x0._s_0.Y;
      iVar4 = (this->CellDimensions).field0_0x0._s_0.X;
      *(undefined4 *)&(this->BlockedCornerValuesGrid)._padding_ = 0x7f7fffff;
      TBlockedDenseGrid3<float>::Resize
                (&this->BlockedCornerValuesGrid,iVar4 + 1,iVar3 + 1,iVar2 + 1);
    }
    InitHashTables(this);
    ResetMesh(this);
    if (this->bParallelCompute == false) {
      generate_basic(this);
    }
    else {
      iVar2 = *piVar1;
      local_38 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FMarchingCubes::generate_parallel'::__l2::<lambda_1>,void,int>
                 ::Call;
      local_30 = &local_res10;
      this->parallel_mesh_access = true;
      local_res10._0_1_ = SUB81(this,0);
      local_48.DataPtr = (void **)0x0;
      local_48.ArrayNum = 0;
      <Var6 = local_res10._0_1_;
      local_res10 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar2,1,(TFunctionRef<void___cdecl(int)> *)&local_38,<Var6,None
                 ,&local_48);
      this->parallel_mesh_access = false;
    }
    BuildMesh(this);
  }
  else {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<765328623430271114>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Generators\\MarchingCubes.h"
                       ,0x8a,"Validate()");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FMeshShapeGenerator *)(*pcVar5)();
      return pFVar8;
    }
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FMeshShapeGenerator *)this;
}

// GenerateContinuation @ 1433a1f60

FMeshShapeGenerator * __thiscall
UE::Geometry::FMarchingCubes::GenerateContinuation
          (FMarchingCubes *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  FMeshShapeGenerator *pFVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  TArrayView<UE::Math::TVector<double>_const_,int> local_58;
  TArrayView<UE::Math::TVector<double>_const_,int> local_48;
  undefined8 local_38;
  undefined4 uStack_30;
  uint uStack_2c;
  int local_28;
  int iStack_24;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_class_UE::Geometry::FMeshShapeGenerator&___ptr64___cdecl_UE::Geometry::FMarchingCubes::GenerateContinuation(TArrayView<UE::Math::TVector<double>_const_,int>)___ptr64'
                ::__l2::__CpuProfilerEventSpecId171,"Geometry_MCMesh_GenerateContinuation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Generators\\MarchingCubes.h"
               ,0xab);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_class_UE::Geometry::FMeshShapeGenerator&___ptr64___cdecl_UE::Geometry::FMarchingCubes::GenerateContinuation(TArrayView<UE::Math::TVector<double>_const_,int>)___ptr64'
               ::__l2::__CpuProfilerEventSpecId171);
  }
  bVar6 = Validate(this);
  if (!bVar6) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<765328623430271149>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Generators\\MarchingCubes.h"
                       ,0xad,"Validate()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FMeshShapeGenerator *)(*pcVar4)();
      return pFVar7;
    }
    goto LAB_1433a2207;
  }
  SetDimensions(this);
  uStack_2c = (this->CellDimensions).field0_0x0._s_0.X - 1;
  local_38 = 0;
  local_28 = (this->CellDimensions).field0_0x0._s_0.Y + -1;
  uStack_30 = 0;
  iStack_24 = (this->CellDimensions).field0_0x0._s_0.Z + -1;
  *(undefined8 *)&(this->GridBounds).Min.field0_0x0 = 0;
  *(ulonglong *)((longlong)&(this->GridBounds).Min.field0_0x0 + 8) = (ulonglong)uStack_2c << 0x20;
  *(ulonglong *)((longlong)&(this->GridBounds).Max.field0_0x0 + 4) = CONCAT44(iStack_24,local_28);
  InitHashTables(this);
  ResetMesh(this);
  if (((((this->LastGridBounds).Max.field0_0x0._s_0.X == (this->GridBounds).Max.field0_0x0._s_0.X)
       && ((this->LastGridBounds).Max.field0_0x0._s_0.Y == (this->GridBounds).Max.field0_0x0._s_0.Y)
       ) && ((this->LastGridBounds).Max.field0_0x0._s_0.Z ==
             (this->GridBounds).Max.field0_0x0._s_0.Z)) &&
     ((((this->LastGridBounds).Min.field0_0x0._s_0.X == (this->GridBounds).Min.field0_0x0._s_0.X &&
       ((this->LastGridBounds).Min.field0_0x0._s_0.Y == (this->GridBounds).Min.field0_0x0._s_0.Y))
      && ((this->LastGridBounds).Min.field0_0x0._s_0.Z == (this->GridBounds).Min.field0_0x0._s_0.Z))
     )) {
    piVar1 = &(this->CellDimensions).field0_0x0._s_0.Z;
    piVar2 = &(this->CellDimensions).field0_0x0._s_0.Y;
    if (this->bEnableValueCaching != false) {
      TBlockedDenseGrid3<float>::Resize
                (&this->BlockedCornerValuesGrid,(this->CellDimensions).field0_0x0._s_0.X + 1,
                 *piVar2 + 1,*piVar1 + 1);
    }
    if (this->bParallelCompute != false) {
      iVar10 = *piVar1;
      iVar9 = *piVar2;
      iVar8 = (this->CellDimensions).field0_0x0._s_0.X;
LAB_1433a2196:
      TBlockedDenseGrid3<int>::Resize(&this->BlockedDoneCells,iVar8,iVar9,iVar10);
    }
  }
  else {
    piVar1 = &(this->CellDimensions).field0_0x0._s_0.Z;
    piVar2 = &(this->CellDimensions).field0_0x0._s_0.Y;
    if (this->bEnableValueCaching != false) {
      iVar10 = *piVar1;
      iVar9 = *piVar2;
      iVar8 = (this->CellDimensions).field0_0x0._s_0.X;
      *(undefined4 *)&(this->BlockedCornerValuesGrid)._padding_ = 0x7f7fffff;
      TBlockedDenseGrid3<float>::Resize
                (&this->BlockedCornerValuesGrid,iVar8 + 1,iVar9 + 1,iVar10 + 1);
    }
    if (this->bParallelCompute != false) {
      iVar10 = *piVar1;
      iVar9 = *piVar2;
      iVar8 = (this->CellDimensions).field0_0x0._s_0.X;
      *(undefined4 *)&(this->BlockedDoneCells)._padding_ = 0;
      goto LAB_1433a2196;
    }
  }
  uVar3._0_4_ = param_1->ArrayNum;
  uVar3._4_4_ = *(undefined4 *)&param_1->field_0xc;
  if (this->bParallelCompute == false) {
    local_48.DataPtr = param_1->DataPtr;
    local_48._8_8_ = uVar3;
    generate_continuation(this,&local_48);
  }
  else {
    local_58.DataPtr = param_1->DataPtr;
    local_58._8_8_ = uVar3;
    generate_continuation_parallel(this,&local_58);
  }
  BuildMesh(this);
  uVar5 = *(undefined8 *)((longlong)&(this->GridBounds).Min.field0_0x0 + 8);
  uVar3 = *(undefined8 *)((longlong)&(this->GridBounds).Max.field0_0x0 + 4);
  *(undefined8 *)&(this->LastGridBounds).Min.field0_0x0 =
       *(undefined8 *)&(this->GridBounds).Min.field0_0x0;
  *(undefined8 *)((longlong)&(this->LastGridBounds).Min.field0_0x0 + 8) = uVar5;
  *(undefined8 *)((longlong)&(this->LastGridBounds).Max.field0_0x0 + 4) = uVar3;
LAB_1433a2207:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FMeshShapeGenerator *)this;
}

// InitHashTables @ 1433b5f10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FMarchingCubes::InitHashTables(FMarchingCubes *this)

{
  int *piVar1;
  int *piVar2;
  TArray<TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  TArray<UE::FWindowsRecursiveMutex,TSizedDefaultAllocator<32>_> *this_01;
  uint uVar3;
  int iVar4;
  TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  
  this_00 = &this->EdgeVertexSections;
  piVar1 = &(this->EdgeVertexSections).ArrayMax;
  pTVar5 = (TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_> *)
           (this_00->AllocatorInstance).Data;
  piVar2 = &(this->EdgeVertexSections).ArrayNum;
  if ((this->EdgeVertexSections).ArrayMax < 0) {
    DestructItems<TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>,int>
              (pTVar5,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,&this_00->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>,int>
              (pTVar5,*piVar2);
    *piVar2 = 0;
  }
  uVar3 = (uint)this->NumEdgeVertexSections;
  iVar4 = *piVar2;
  if (iVar4 < (int)uVar3) {
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,uVar3 - iVar4,&this_00->AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar9 * 0x50,uVar3 - iVar4);
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if ((int)uVar3 < iVar4) {
      uVar10 = iVar4 - uVar3;
      if ((int)(uVar10 | uVar3) < 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (uVar10 != 0) {
        TArray<TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_00,uVar3,uVar10);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,&this_00->AllocatorInstance,*piVar2,piVar1);
      }
    }
  }
  this_01 = &this->EdgeVertexSectionLocks;
  piVar1 = &(this->EdgeVertexSectionLocks).ArrayMax;
  pFVar6 = (this_01->AllocatorInstance).Data;
  iVar4 = (this->EdgeVertexSectionLocks).ArrayNum;
  if ((this->EdgeVertexSectionLocks).ArrayMax < 0) {
    DestructItems<UE::FWindowsRecursiveMutex,int>((FWindowsRecursiveMutex *)pFVar6,iVar4);
    (this->EdgeVertexSectionLocks).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&this_01->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::FWindowsRecursiveMutex,int>((FWindowsRecursiveMutex *)pFVar6,iVar4);
    (this->EdgeVertexSectionLocks).ArrayNum = 0;
  }
  TArray<UE::FWindowsRecursiveMutex,TSizedDefaultAllocator<32>_>::SetNum
            (this_01,(int)this->NumEdgeVertexSections,Default);
  return;
}

// ResetMesh @ 1433c5a00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FMarchingCubes::ResetMesh(FMarchingCubes *this)

{
  int *piVar1;
  int *piVar2;
  TArray<TArray<UE::Geometry::FMarchingCubes::FIndexedVertex,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  TArray<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_01;
  uint uVar3;
  int iVar4;
  TArray<UE::Geometry::FMarchingCubes::FIndexedVertex,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  
  TArray<UE::FWindowsRecursiveMutex,TSizedDefaultAllocator<32>_>::SetNum
            (&this->VertexSectionLocks,(int)this->NumVertexSections,Default);
  this_00 = &this->VertexSectionLists;
  piVar1 = &(this->VertexSectionLists).ArrayMax;
  pTVar5 = (TArray<UE::Geometry::FMarchingCubes::FIndexedVertex,TSizedDefaultAllocator<32>_> *)
           (this_00->AllocatorInstance).Data;
  piVar2 = &(this->VertexSectionLists).ArrayNum;
  if ((this->VertexSectionLists).ArrayMax < 0) {
    DestructItems<TArray<UE::Geometry::FMarchingCubes::FIndexedVertex,TSizedDefaultAllocator<32>_>,int>
              (pTVar5,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&this_00->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<UE::Geometry::FMarchingCubes::FIndexedVertex,TSizedDefaultAllocator<32>_>,int>
              (pTVar5,*piVar2);
    *piVar2 = 0;
  }
  uVar3 = (uint)this->NumVertexSections;
  iVar4 = *piVar2;
  if (iVar4 < (int)uVar3) {
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar3 - iVar4,&this_00->AllocatorInstance,piVar2,piVar1);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar9 * 0x10,0,
           (longlong)(int)(uVar3 - iVar4) << 4);
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if ((int)uVar3 < iVar4) {
      uVar10 = iVar4 - uVar3;
      if ((int)(uVar10 | uVar3) < 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (uVar10 != 0) {
        TArray<TArray<UE::Geometry::FMarchingCubes::FIndexedVertex,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_00,uVar3,uVar10);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,*piVar2,piVar1);
      }
    }
  }
  LOCK();
  this->VertexCounter = (atomic<int>)0x0;
  UNLOCK();
  TArray<UE::FWindowsRecursiveMutex,TSizedDefaultAllocator<32>_>::SetNum
            (&this->TriangleSectionLocks,(int)this->NumTriangleSections,Default);
  this_01 = &this->TriangleSectionLists;
  piVar1 = &(this->TriangleSectionLists).ArrayMax;
  pTVar6 = (TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)
           (this_01->AllocatorInstance).Data;
  piVar2 = &(this->TriangleSectionLists).ArrayNum;
  if ((this->TriangleSectionLists).ArrayMax < 0) {
    DestructItems<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,int>(pTVar6,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&this_01->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,int>(pTVar6,*piVar2);
    *piVar2 = 0;
  }
  uVar3 = (uint)this->NumTriangleSections;
  iVar4 = *piVar2;
  if (iVar4 < (int)uVar3) {
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar3 - iVar4,&this_01->AllocatorInstance,piVar2,piVar1);
    memset((this_01->AllocatorInstance).Data + (longlong)iVar9 * 0x10,0,
           (longlong)(int)(uVar3 - iVar4) << 4);
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if ((int)uVar3 < iVar4) {
      uVar10 = iVar4 - uVar3;
      if ((int)(uVar10 | uVar3) < 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (uVar10 != 0) {
        TArray<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_01,uVar3,uVar10);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_01->AllocatorInstance,*piVar2,piVar1);
      }
    }
  }
  return;
}

// SetDimensions @ 1433c7730

void __thiscall UE::Geometry::FMarchingCubes::SetDimensions(FMarchingCubes *this)

{
  code *pcVar1;
  double dVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar2 = __real_3ff0000000000000;
  dVar9 = (this->Bounds).Max.field0_0x0._s_0.X - (this->Bounds).Min.field0_0x0._s_0.X;
  dVar12 = __real_3ff0000000000000 / this->CubeSize;
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
  }
  dVar10 = (this->Bounds).Max.field0_0x0._s_0.Y - (this->Bounds).Min.field0_0x0._s_0.Y;
  iVar6 = (int)(dVar9 * dVar12) + 1;
  if (dVar10 <= 0.0) {
    dVar10 = 0.0;
  }
  dVar11 = (this->Bounds).Max.field0_0x0._s_0.Z - (this->Bounds).Min.field0_0x0._s_0.Z;
  iVar7 = (int)(dVar10 * dVar12) + 1;
  if (dVar11 <= 0.0) {
    dVar11 = 0.0;
  }
  iVar3 = (int)(dVar10 * dVar12);
  if (iVar7 < iVar6) {
    iVar3 = (int)(dVar9 * dVar12);
  }
  iVar8 = (int)(dVar11 * dVar12) + 1;
  iVar5 = (int)(dVar11 * dVar12);
  if (iVar8 < iVar3 + 1) {
    iVar5 = iVar3;
  }
  if (this->SafetyMaxDimension < iVar5 + 1) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<765328623430271222>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Generators\\MarchingCubes.h"
                       ,0xf6,"MaxDim <= SafetyMaxDimension");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    dVar12 = (this->Bounds).Max.field0_0x0._s_0.Y - (this->Bounds).Min.field0_0x0._s_0.Y;
    dVar9 = (this->Bounds).Min.field0_0x0._s_0.X;
    dVar10 = (this->Bounds).Max.field0_0x0._s_0.Z - (this->Bounds).Min.field0_0x0._s_0.Z;
    if (dVar12 <= 0.0) {
      dVar12 = 0.0;
    }
    dVar11 = (this->Bounds).Max.field0_0x0._s_0.X - dVar9;
    if (dVar10 <= 0.0) {
      dVar10 = 0.0;
    }
    if (dVar11 <= 0.0) {
      dVar11 = 0.0;
    }
    if (dVar10 <= dVar12) {
      dVar10 = dVar12;
    }
    if (dVar10 <= dVar11) {
      dVar10 = dVar11;
    }
    dVar10 = dVar10 / (double)(this->SafetyMaxDimension + -1);
    this->CubeSize = dVar10;
    dVar9 = (this->Bounds).Max.field0_0x0._s_0.X - dVar9;
    dVar2 = dVar2 / dVar10;
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
    }
    dVar12 = (this->Bounds).Max.field0_0x0._s_0.Y - (this->Bounds).Min.field0_0x0._s_0.Y;
    iVar6 = (int)(dVar9 * dVar2) + 1;
    if (dVar12 <= 0.0) {
      dVar12 = 0.0;
    }
    dVar9 = (this->Bounds).Max.field0_0x0._s_0.Z - (this->Bounds).Min.field0_0x0._s_0.Z;
    iVar7 = (int)(dVar12 * dVar2) + 1;
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
    }
    iVar8 = (int)(dVar9 * dVar2) + 1;
  }
  (this->CellDimensions).field0_0x0._s_0.X = iVar6;
  (this->CellDimensions).field0_0x0._s_0.Y = iVar7;
  (this->CellDimensions).field0_0x0._s_0.Z = iVar8;
  return;
}

// Validate @ 1433e1390

bool __thiscall UE::Geometry::FMarchingCubes::Validate(FMarchingCubes *this)

{
  double *pdVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (0.0 < this->CubeSize) {
    iVar2 = _finite(this->CubeSize);
    if (iVar2 != 0) {
      dVar3 = (this->Bounds).Min.field0_0x0._s_0.X;
      dVar5 = (this->Bounds).Max.field0_0x0._s_0.X;
      if (((dVar3 <= dVar5) &&
          (dVar4 = (this->Bounds).Min.field0_0x0._s_0.Y,
          pdVar1 = &(this->Bounds).Max.field0_0x0._s_0.Y, dVar4 < *pdVar1 || dVar4 == *pdVar1)) &&
         (dVar4 = (this->Bounds).Min.field0_0x0._s_0.Z,
         pdVar1 = &(this->Bounds).Max.field0_0x0._s_0.Z, dVar4 < *pdVar1 || dVar4 == *pdVar1)) {
        dVar5 = dVar5 - dVar3;
        dVar3 = (this->Bounds).Max.field0_0x0._s_0.Z - (this->Bounds).Min.field0_0x0._s_0.Z;
        dVar4 = (this->Bounds).Max.field0_0x0._s_0.Y - (this->Bounds).Min.field0_0x0._s_0.Y;
        if (dVar5 <= 0.0) {
          dVar5 = 0.0;
        }
        if (dVar3 <= 0.0) {
          dVar3 = 0.0;
        }
        if (dVar4 <= 0.0) {
          dVar4 = 0.0;
        }
        if (dVar3 <= dVar4) {
          dVar3 = dVar4;
        }
        if (dVar3 <= dVar5) {
          dVar3 = dVar5;
        }
        iVar2 = _finite(dVar3);
        if (iVar2 != 0) {
          return true;
        }
      }
    }
  }
  return false;
}

// append_triangle @ 1433e32b0

void __thiscall
UE::Geometry::FMarchingCubes::append_triangle
          (FMarchingCubes *this,int param_1,int param_2,int param_3,long64 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  int local_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int local_34;
  
  uVar7 = (uint)(param_4 % (this->NumTriangleSections + -1));
  uVar8 = ~uVar7 >> 0x1f;
  if (this->parallel_mesh_access == false) {
    uVar4 = 0;
    if ((int)uVar7 < (this->TriangleSectionLists).ArrayNum) {
      uVar4 = uVar8;
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
    pFVar6 = (this->TriangleSectionLists).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
    local_3c = param_1;
    iStack_38 = param_2;
    local_34 = param_3;
    if ((*(int **)&pFVar6->field_0x0 <= &local_3c) &&
       (&local_3c < *(int **)&pFVar6->field_0x0 + (longlong)*(int *)(pFVar6 + 0xc) * 3)) {
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
    iVar5 = *(int *)&pFVar6[8].field_0x0;
    if (iVar5 == *(int *)(pFVar6 + 0xc)) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)pFVar6,(int *)(pFVar6 + 0xc));
    }
    *(int *)&pFVar6[8].field_0x0 = iVar5 + 1;
    lVar1 = *(longlong *)&pFVar6->field_0x0;
    *(ulonglong *)(lVar1 + (longlong)iVar5 * 0xc) = CONCAT44(iStack_38,local_3c);
    *(int *)(lVar1 + (longlong)iVar5 * 0xc + 8) = local_34;
  }
  else {
    uVar4 = 0;
    if ((int)uVar7 < (this->TriangleSectionLocks).ArrayNum) {
      uVar4 = uVar8;
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
    lpCriticalSection =
         (LPCRITICAL_SECTION)
         ((this->TriangleSectionLocks).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x28);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    uVar4 = 0;
    if ((int)uVar7 < (this->TriangleSectionLists).ArrayNum) {
      uVar4 = uVar8;
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
    pFVar6 = (this->TriangleSectionLists).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
    local_48 = param_1;
    iStack_44 = param_2;
    local_40 = param_3;
    if ((*(int **)&pFVar6->field_0x0 <= &local_48) &&
       (&local_48 < *(int **)&pFVar6->field_0x0 + (longlong)*(int *)(pFVar6 + 0xc) * 3)) {
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
    iVar5 = *(int *)&pFVar6[8].field_0x0;
    if (iVar5 == *(int *)(pFVar6 + 0xc)) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)pFVar6,(int *)(pFVar6 + 0xc));
      *(int *)&pFVar6[8].field_0x0 = iVar5 + 1;
    }
    else {
      *(int *)&pFVar6[8].field_0x0 = iVar5 + 1;
    }
    lVar1 = *(longlong *)&pFVar6->field_0x0;
    *(ulonglong *)(lVar1 + (longlong)iVar5 * 0xc) = CONCAT44(iStack_44,local_48);
    *(int *)(lVar1 + (longlong)iVar5 * 0xc + 8) = local_40;
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// append_vertex @ 1433e35e0

int __thiscall
UE::Geometry::FMarchingCubes::append_vertex
          (FMarchingCubes *this,TVector<double> *param_1,long64 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  atomic<int> *paVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  double *pdVar4;
  atomic<int> aVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  atomic<int> local_68;
  atomic<int> aStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  atomic<int> local_48;
  undefined4 uStack_44;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  
  LOCK();
  paVar1 = &this->VertexCounter;
  aVar5 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  uVar12 = (uint)(param_2 % (this->NumVertexSections + -1));
  uVar13 = ~uVar12 >> 0x1f;
  if (this->parallel_mesh_access == false) {
    uVar9 = 0;
    if ((int)uVar12 < (this->VertexSectionLists).ArrayNum) {
      uVar9 = uVar13;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar10 = (*pcVar7)();
        return iVar10;
      }
    }
    dStack_40 = (param_1->field0_0x0)._s_0.X;
    dStack_38 = (param_1->field0_0x0)._s_0.Y;
    dStack_30 = (param_1->field0_0x0)._s_0.Z;
    pFVar11 = (this->VertexSectionLists).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
    local_48 = aVar5;
    if ((*(atomic<int> **)&pFVar11->field_0x0 <= &local_48) &&
       (&local_48 < *(atomic<int> **)&pFVar11->field_0x0 + (longlong)*(int *)(pFVar11 + 0xc) * 8)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar10 = (*pcVar7)();
        return iVar10;
      }
    }
    iVar10 = *(int *)&pFVar11[8].field_0x0;
    if (iVar10 == *(int *)(pFVar11 + 0xc)) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
    }
    *(int *)&pFVar11[8].field_0x0 = iVar10 + 1;
    lVar6 = *(longlong *)&pFVar11->field_0x0;
    puVar2 = (undefined8 *)(lVar6 + (longlong)iVar10 * 0x20);
    *puVar2 = CONCAT44(uStack_44,local_48);
    puVar2[1] = dStack_40;
    pdVar4 = (double *)(lVar6 + (longlong)iVar10 * 0x20 + 0x10);
    *pdVar4 = dStack_38;
    pdVar4[1] = dStack_30;
  }
  else {
    uVar9 = 0;
    if ((int)uVar12 < (this->VertexSectionLocks).ArrayNum) {
      uVar9 = uVar13;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar10 = (*pcVar7)();
        return iVar10;
      }
    }
    lpCriticalSection =
         (LPCRITICAL_SECTION)
         ((this->VertexSectionLocks).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x28);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    uVar9 = 0;
    if ((int)uVar12 < (this->VertexSectionLists).ArrayNum) {
      uVar9 = uVar13;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar10 = (*pcVar7)();
        return iVar10;
      }
    }
    uStack_60 = *(undefined8 *)&param_1->field0_0x0;
    uStack_58 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    uStack_50 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
    pFVar11 = (this->VertexSectionLists).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
    local_68 = aVar5;
    if ((*(atomic<int> **)&pFVar11->field_0x0 <= &local_68) &&
       (&local_68 < *(atomic<int> **)&pFVar11->field_0x0 + (longlong)*(int *)(pFVar11 + 0xc) * 8)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar10 = (*pcVar7)();
        return iVar10;
      }
    }
    iVar10 = *(int *)&pFVar11[8].field_0x0;
    if (iVar10 == *(int *)(pFVar11 + 0xc)) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      *(int *)&pFVar11[8].field_0x0 = iVar10 + 1;
    }
    else {
      *(int *)&pFVar11[8].field_0x0 = iVar10 + 1;
    }
    lVar6 = *(longlong *)&pFVar11->field_0x0;
    paVar1 = (atomic<int> *)(lVar6 + (longlong)iVar10 * 0x20);
    *paVar1 = local_68;
    paVar1[1] = aStack_64;
    paVar1[2] = uStack_60._0_4_;
    paVar1[3] = uStack_60._4_4_;
    puVar3 = (undefined4 *)(lVar6 + (longlong)iVar10 * 0x20 + 0x10);
    *puVar3 = (undefined4)uStack_58;
    puVar3[1] = uStack_58._4_4_;
    puVar3[2] = (undefined4)uStack_50;
    puVar3[3] = uStack_50._4_4_;
    LeaveCriticalSection(lpCriticalSection);
  }
  return (int)aVar5;
}

// corner_value_grid @ 1433e6590

double __thiscall
UE::Geometry::FMarchingCubes::corner_value_grid(FMarchingCubes *this,FVector3i *param_1)

{
  TBlockedDenseGrid3<float> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  TBlockData3<float,32> *pTVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  double dVar18;
  float fVar19;
  double local_38;
  double local_30;
  double local_28;
  
  if (this->bParallelCompute == false) {
    iVar1 = (param_1->field0_0x0)._s_0.X;
    this_00 = &this->BlockedCornerValuesGrid;
    iVar2 = (param_1->field0_0x0)._s_0.Y;
    uVar14 = iVar1 >> 0x1f & 0x1f;
    uVar8 = iVar1 + uVar14;
    uVar15 = iVar2 >> 0x1f & 0x1f;
    uVar9 = iVar2 + uVar15;
    iVar3 = (param_1->field0_0x0)._s_0.Z;
    uVar16 = iVar3 >> 0x1f & 0x1f;
    uVar10 = iVar3 + uVar16;
    lVar17 = (longlong)
             ((((int)uVar10 >> 5) *
               *(int *)((longlong)&(this->BlockedCornerValuesGrid)._padding_ + 4) +
              ((int)uVar9 >> 5)) * (int)this_00->_padding_ + ((int)uVar8 >> 5));
    lVar4 = (this->BlockedCornerValuesGrid)._padding_;
    lVar5 = *(longlong *)(lVar4 + lVar17 * 0x10);
    if (lVar5 == 0) {
      fVar19 = *(float *)(lVar4 + 8 + lVar17 * 0x10);
    }
    else {
      fVar19 = *(float *)(lVar5 + 4 +
                         (ulonglong)
                         ((((uVar10 & 0x1f) - uVar16) * 0x20 + ((uVar9 & 0x1f) - uVar15)) * 0x20 +
                         ((uVar8 & 0x1f) - uVar14)) * 4);
    }
    if (fVar19 == __real_7f7fffff) {
      dVar18 = this->CubeSize;
      local_38 = (double)iVar1 * dVar18 + (this->Bounds).Min.field0_0x0._s_0.X;
      local_30 = (double)iVar2 * dVar18 + (this->Bounds).Min.field0_0x0._s_0.Y;
      local_28 = (double)(param_1->field0_0x0)._s_0.Z * dVar18 +
                 (this->Bounds).Min.field0_0x0._s_0.Z;
      Core::Private::Function::CheckCallable(*(void **)&this->Implicit);
      pcVar6 = *(code **)&this->Implicit;
      plVar7 = *(longlong **)&(this->Implicit).field_0x28;
      plVar13 = (longlong *)&(this->Implicit).field_0x10;
      if (plVar7 != (longlong *)0x0) {
        plVar13 = plVar7;
      }
      uVar11 = (**(code **)(*plVar13 + 8))();
      dVar18 = (double)(*pcVar6)(uVar11,&local_38);
      iVar1 = (param_1->field0_0x0)._s_0.X;
      uVar14 = iVar1 >> 0x1f & 0x1f;
      uVar8 = iVar1 + uVar14;
      iVar1 = (param_1->field0_0x0)._s_0.Y;
      uVar15 = iVar1 >> 0x1f & 0x1f;
      uVar9 = iVar1 + uVar15;
      iVar1 = (param_1->field0_0x0)._s_0.Z;
      uVar16 = iVar1 >> 0x1f & 0x1f;
      uVar10 = iVar1 + uVar16;
      fVar19 = (float)dVar18;
      pTVar12 = TBasicBlockedDenseGrid3<float,32>::TouchBlockData
                          ((TBasicBlockedDenseGrid3<float,32> *)this_00,
                           (((int)uVar9 >> 5) +
                           ((int)uVar10 >> 5) *
                           *(int *)((longlong)&(this->BlockedCornerValuesGrid)._padding_ + 4)) *
                           (int)this_00->_padding_ + ((int)uVar8 >> 5));
      (pTVar12->Data).Elements
      [(((uVar10 & 0x1f) - uVar16) * 0x20 + ((uVar9 & 0x1f) - uVar15)) * 0x20 +
       ((uVar8 & 0x1f) - uVar14)] = fVar19;
    }
    return (double)fVar19;
  }
  dVar18 = corner_value_grid_parallel(this,param_1);
  return dVar18;
}

// corner_value_grid_parallel @ 1433e67a0

double __thiscall
UE::Geometry::FMarchingCubes::corner_value_grid_parallel(FMarchingCubes *this,FVector3i *param_1)

{
  TBlockedDenseGrid3<float> *this_00;
  LPCRITICAL_SECTION p_Var1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  TBlockData3<float,32> *pTVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  double dVar17;
  float fVar18;
  double local_48;
  double local_40;
  double local_38;
  
  iVar15 = (param_1->field0_0x0)._s_0.X;
  this_00 = &this->BlockedCornerValuesGrid;
  uVar12 = iVar15 >> 0x1f & 0x1f;
  uVar6 = iVar15 + uVar12;
  iVar15 = (param_1->field0_0x0)._s_0.Y;
  uVar13 = iVar15 >> 0x1f & 0x1f;
  uVar7 = iVar15 + uVar13;
  iVar15 = (param_1->field0_0x0)._s_0.Z;
  uVar14 = iVar15 >> 0x1f & 0x1f;
  uVar8 = iVar15 + uVar14;
  lVar16 = (longlong)
           ((((int)uVar8 >> 5) * *(int *)((longlong)&(this->BlockedCornerValuesGrid)._padding_ + 4)
            + ((int)uVar7 >> 5)) * (int)this_00->_padding_ + ((int)uVar6 >> 5));
  p_Var1 = (LPCRITICAL_SECTION)
           ((this->BlockedCornerValuesGrid).BlockLocks.AllocatorInstance.Data + lVar16 * 0x28);
  if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(p_Var1);
  lVar2 = (this->BlockedCornerValuesGrid)._padding_;
  lVar3 = *(longlong *)(lVar2 + lVar16 * 0x10);
  if (lVar3 == 0) {
    fVar18 = *(float *)(lVar2 + 8 + lVar16 * 0x10);
  }
  else {
    fVar18 = *(float *)(lVar3 + 4 +
                       (ulonglong)
                       ((((uVar8 & 0x1f) - uVar14) * 0x20 + ((uVar7 & 0x1f) - uVar13)) * 0x20 +
                       ((uVar6 & 0x1f) - uVar12)) * 4);
  }
  LeaveCriticalSection(p_Var1);
  if (fVar18 == __real_7f7fffff) {
    dVar17 = this->CubeSize;
    local_48 = (double)(param_1->field0_0x0)._s_0.X * dVar17 + (this->Bounds).Min.field0_0x0._s_0.X;
    local_40 = (double)(param_1->field0_0x0)._s_0.Y * dVar17 + (this->Bounds).Min.field0_0x0._s_0.Y;
    local_38 = (double)(param_1->field0_0x0)._s_0.Z * dVar17 + (this->Bounds).Min.field0_0x0._s_0.Z;
    Core::Private::Function::CheckCallable(*(void **)&this->Implicit);
    pcVar4 = *(code **)&this->Implicit;
    plVar5 = *(longlong **)&(this->Implicit).field_0x28;
    plVar11 = (longlong *)&(this->Implicit).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar11 = plVar5;
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    dVar17 = (double)(*pcVar4)(uVar9,&local_48);
    iVar15 = (param_1->field0_0x0)._s_0.X;
    uVar12 = iVar15 >> 0x1f & 0x1f;
    uVar6 = iVar15 + uVar12;
    iVar15 = (param_1->field0_0x0)._s_0.Y;
    uVar13 = iVar15 >> 0x1f & 0x1f;
    uVar7 = iVar15 + uVar13;
    iVar15 = (param_1->field0_0x0)._s_0.Z;
    uVar14 = iVar15 >> 0x1f & 0x1f;
    uVar8 = iVar15 + uVar14;
    fVar18 = (float)dVar17;
    iVar15 = (((int)uVar8 >> 5) * *(int *)((longlong)&(this->BlockedCornerValuesGrid)._padding_ + 4)
             + ((int)uVar7 >> 5)) * (int)this_00->_padding_ + ((int)uVar6 >> 5);
    p_Var1 = (LPCRITICAL_SECTION)
             ((this->BlockedCornerValuesGrid).BlockLocks.AllocatorInstance.Data +
             (longlong)iVar15 * 0x28);
    if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(p_Var1);
    pTVar10 = TBasicBlockedDenseGrid3<float,32>::TouchBlockData
                        ((TBasicBlockedDenseGrid3<float,32> *)this_00,iVar15);
    (pTVar10->Data).Elements
    [(((uVar8 & 0x1f) - uVar14) * 0x20 + ((uVar7 & 0x1f) - uVar13)) * 0x20 +
     ((uVar6 & 0x1f) - uVar12)] = fVar18;
    LeaveCriticalSection(p_Var1);
  }
  return (double)fVar18;
}

// corner_value_nohash @ 1433e69f0

double __thiscall
UE::Geometry::FMarchingCubes::corner_value_nohash(FMarchingCubes *this,FVector3i *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  double dVar5;
  double local_28;
  double local_20;
  double local_18;
  
  dVar5 = this->CubeSize;
  local_28 = (double)(param_1->field0_0x0)._s_0.X * dVar5 + (this->Bounds).Min.field0_0x0._s_0.X;
  local_20 = (double)(param_1->field0_0x0)._s_0.Y * dVar5 + (this->Bounds).Min.field0_0x0._s_0.Y;
  local_18 = (double)(param_1->field0_0x0)._s_0.Z * dVar5 + (this->Bounds).Min.field0_0x0._s_0.Z;
  Core::Private::Function::CheckCallable(*(void **)&this->Implicit);
  pcVar1 = *(code **)&this->Implicit;
  plVar2 = *(longlong **)&(this->Implicit).field_0x28;
  plVar4 = (longlong *)&(this->Implicit).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  dVar5 = (double)(*pcVar1)(uVar3,&local_28);
  return dVar5;
}

// edge_vertex_id @ 1433e6aa0

int __thiscall
UE::Geometry::FMarchingCubes::edge_vertex_id
          (FMarchingCubes *this,FVector3i *param_1,FVector3i *param_2,double param_3,double param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  ushort uVar11;
  uint uVar12;
  ulonglong uVar13;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58 [2];
  
  uVar8 = (param_1->field0_0x0)._s_0.X;
  uVar12 = (param_2->field0_0x0)._s_0.X;
  if (uVar8 == uVar12) {
    uVar12 = (param_1->field0_0x0)._s_0.Y;
    uVar5 = (param_2->field0_0x0)._s_0.Y;
    if (uVar12 == uVar5) {
      iVar9 = (param_2->field0_0x0)._s_0.Z;
      uVar11 = (ushort)iVar9;
      if ((param_1->field0_0x0)._s_0.Z < iVar9) {
        uVar11 = (ushort)(param_1->field0_0x0)._s_0.Z;
      }
      uVar13 = ((ulonglong)uVar11 << 0x10 | (ulonglong)(uVar12 & 0xffff)) << 0x10 | this->EDGE_Z;
    }
    else {
      if ((int)uVar12 < (int)uVar5) {
        uVar5 = uVar12;
      }
      uVar13 = (ulonglong)CONCAT22(*(undefined2 *)((longlong)&param_1->field0_0x0 + 8),(short)uVar5)
               << 0x10 | this->EDGE_Y;
    }
    uVar13 = uVar13 | uVar8 & 0xffff;
  }
  else {
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
    uVar13 = (ulonglong)
             CONCAT22(*(undefined2 *)((longlong)&param_1->field0_0x0 + 8),
                      *(undefined2 *)((longlong)&param_1->field0_0x0 + 4)) << 0x10 |
             (ulonglong)uVar12 & 0xffff | this->EDGE_X;
  }
  uVar12 = (uint)((longlong)uVar13 % (this->NumEdgeVertexSections + -1));
  uVar8 = 0;
  if ((int)uVar12 < (this->EdgeVertexSectionLocks).ArrayNum) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    iVar9 = (*pcVar6)();
    return iVar9;
  }
  lpCriticalSection =
       (LPCRITICAL_SECTION)
       ((this->EdgeVertexSectionLocks).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x28);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  uVar8 = 0;
  if ((int)uVar12 < (this->EdgeVertexSections).ArrayNum) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    iVar9 = (*pcVar6)();
    return iVar9;
  }
  piVar10 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>::
            Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                  *)((this->EdgeVertexSections).AllocatorInstance.Data +
                    (longlong)(int)uVar12 * 0x50),uVar13);
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  LeaveCriticalSection(lpCriticalSection);
  if (iVar9 == -1) {
    dVar1 = this->CubeSize;
    dVar2 = (this->Bounds).Min.field0_0x0._s_0.Y;
    dVar3 = (this->Bounds).Min.field0_0x0._s_0.X;
    dVar4 = (this->Bounds).Min.field0_0x0._s_0.Z;
    local_78._s_0.X = (double)(param_1->field0_0x0)._s_0.X * dVar1 + dVar3;
    local_78._s_0.Y = (double)(param_1->field0_0x0)._s_0.Y * dVar1 + dVar2;
    local_78._s_0.Z = (double)(param_1->field0_0x0)._s_0.Z * dVar1 + dVar4;
    local_90._s_0.X = (double)(param_2->field0_0x0)._s_0.X * dVar1 + dVar3;
    local_90._s_0.Y = (double)(param_2->field0_0x0)._s_0.Y * dVar1 + dVar2;
    local_90._s_0.Z = (double)(param_2->field0_0x0)._s_0.Z * dVar1 + dVar4;
    local_a8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_a8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    find_iso(this,(TVector<double> *)&local_78._s_0,(TVector<double> *)&local_90._s_0,param_3,
             param_4,(TVector<double> *)&local_a8._s_0);
    local_58[0]._s_0.X = local_a8._s_0.X;
    local_58[0]._s_0.Y = local_a8._s_0.Y;
    local_58[0]._s_0.Z = local_a8._s_0.Z;
    iVar9 = AppendOrFindVertexID(this,uVar13,(TVector<double> *)&local_58[0]._s_0);
  }
  return iVar9;
}

// find_iso @ 1433f2bb0

void __thiscall
UE::Geometry::FMarchingCubes::find_iso
          (FMarchingCubes *this,TVector<double> *param_1,TVector<double> *param_2,double param_3,
          double param_4,TVector<double> *param_5)

{
  double dVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  double local_d0;
  undefined1 local_c8 [16];
  double local_b8;
  
  dVar13 = __real_3fe0000000000000;
  dVar11 = __real_3ff0000000000000;
  if (__real_3ee4f8b588e368f1 <=
      (double)CONCAT44((uint)((ulonglong)(param_3 - param_4) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(param_3 - param_4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar12 = this->IsoValue;
    if (__real_3ee4f8b588e368f1 <=
        (double)CONCAT44((uint)((ulonglong)(dVar12 - param_3) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar12 - param_3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    {
      if (__real_3ee4f8b588e368f1 <=
          (double)CONCAT44((uint)((ulonglong)(dVar12 - param_4) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar12 - param_4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
         ) {
        uVar8 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
        dVar1 = (param_2->field0_0x0)._s_0.Z;
        local_f8 = *(undefined8 *)&param_1->field0_0x0;
        uStack_f0 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
        local_e8 = (param_1->field0_0x0)._s_0.Z;
        local_e0 = *(undefined8 *)&param_2->field0_0x0;
        uStack_d8 = uVar8;
        local_d0 = dVar1;
        if (param_4 < param_3) {
          local_e0 = *(undefined8 *)&param_1->field0_0x0;
          uStack_d8 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
          local_d0 = (param_1->field0_0x0)._s_0.Z;
          local_f8 = *(undefined8 *)&param_2->field0_0x0;
          uStack_f0 = uVar8;
          local_e8 = dVar1;
        }
        dVar1 = param_3;
        if (param_3 <= param_4) {
          dVar1 = param_4;
        }
        if (param_4 <= param_3) {
          param_3 = param_4;
        }
        uVar20 = (undefined4)uStack_f0;
        uVar21 = (undefined4)((ulonglong)uStack_f0 >> 0x20);
        uVar18 = (undefined4)local_f8;
        uVar19 = (undefined4)((ulonglong)local_f8 >> 0x20);
        uVar16 = (undefined4)uStack_d8;
        uVar17 = (undefined4)((ulonglong)uStack_d8 >> 0x20);
        uVar14 = (undefined4)local_e0;
        uVar15 = (undefined4)((ulonglong)local_e0 >> 0x20);
        if (this->RootMode == Bisection) {
          iVar10 = 0;
          if (0 < this->RootModeSteps) {
            do {
              dVar11 = ((double)CONCAT44(uVar15,uVar14) + (double)CONCAT44(uVar19,uVar18)) * dVar13;
              (param_5->field0_0x0)._s_0.Z = (local_d0 + local_e8) * dVar13;
              (param_5->field0_0x0)._s_0.Y =
                   ((double)CONCAT44(uVar17,uVar16) + (double)CONCAT44(uVar21,uVar20)) * dVar13;
              uVar22 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 8);
              uVar23 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 0xc);
              auVar4._8_4_ = uVar22;
              auVar4._0_8_ = dVar11;
              auVar4._12_4_ = uVar23;
              *(undefined1 (*) [16])&param_5->field0_0x0 = auVar4;
              local_c8._8_4_ = uVar22;
              local_c8._0_8_ = dVar11;
              local_c8._12_4_ = uVar23;
              local_b8 = (param_5->field0_0x0)._s_0.Z;
              Core::Private::Function::CheckCallable(*(void **)&this->Implicit);
              plVar2 = *(longlong **)&(this->Implicit).field_0x28;
              pcVar3 = *(code **)&this->Implicit;
              plVar9 = (longlong *)&(this->Implicit).field_0x10;
              if (plVar2 != (longlong *)0x0) {
                plVar9 = plVar2;
              }
              uVar8 = (**(code **)(*plVar9 + 8))();
              dVar12 = (double)(*pcVar3)(uVar8,local_c8);
              dVar11 = (param_5->field0_0x0)._s_0.Z;
              if (this->IsoValue <= dVar12) {
                uVar14 = *(undefined4 *)&param_5->field0_0x0;
                uVar15 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 4);
                uVar16 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 8);
                uVar17 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 0xc);
                local_d0 = dVar11;
              }
              else {
                uVar18 = *(undefined4 *)&param_5->field0_0x0;
                uVar19 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 4);
                uVar20 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 8);
                uVar21 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 0xc);
                local_e8 = dVar11;
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < this->RootModeSteps);
          }
          dVar11 = ((double)CONCAT44(uVar17,uVar16) + (double)CONCAT44(uVar21,uVar20)) * dVar13;
          dVar12 = (local_d0 + local_e8) * dVar13;
          dVar13 = ((double)CONCAT44(uVar15,uVar14) + (double)CONCAT44(uVar19,uVar18)) * dVar13;
        }
        else {
          uVar22 = SUB84(local_e8,0);
          uVar23 = (undefined4)((ulonglong)local_e8 >> 0x20);
          if ((this->RootMode == LerpSteps) && (iVar10 = 0, 0 < this->RootModeSteps)) {
            do {
              dVar13 = (dVar12 - param_3) / (dVar1 - param_3);
              if (0.0 <= dVar13) {
                if (dVar11 <= dVar13) {
                  dVar13 = dVar11;
                }
              }
              else {
                dVar13 = 0.0;
              }
              dVar12 = ((double)CONCAT44(uVar15,uVar14) - (double)CONCAT44(uVar19,uVar18)) * dVar13
                       + (double)CONCAT44(uVar19,uVar18);
              (param_5->field0_0x0)._s_0.Y =
                   ((double)CONCAT44(uVar17,uVar16) - (double)CONCAT44(uVar21,uVar20)) * dVar13 +
                   (double)CONCAT44(uVar21,uVar20);
              (param_5->field0_0x0)._s_0.Z =
                   (local_d0 - (double)CONCAT44(uVar23,uVar22)) * dVar13 +
                   (double)CONCAT44(uVar23,uVar22);
              uVar6 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 8);
              uVar7 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 0xc);
              auVar5._8_4_ = uVar6;
              auVar5._0_8_ = dVar12;
              auVar5._12_4_ = uVar7;
              *(undefined1 (*) [16])&param_5->field0_0x0 = auVar5;
              local_c8._8_4_ = uVar6;
              local_c8._0_8_ = dVar12;
              local_c8._12_4_ = uVar7;
              local_b8 = (param_5->field0_0x0)._s_0.Z;
              Core::Private::Function::CheckCallable(*(void **)&this->Implicit);
              plVar2 = *(longlong **)&(this->Implicit).field_0x28;
              pcVar3 = *(code **)&this->Implicit;
              plVar9 = (longlong *)&(this->Implicit).field_0x10;
              if (plVar2 != (longlong *)0x0) {
                plVar9 = plVar2;
              }
              uVar8 = (**(code **)(*plVar9 + 8))();
              dVar13 = (double)(*pcVar3)(uVar8,local_c8);
              dVar12 = this->IsoValue;
              if (dVar12 <= dVar13) {
                uVar14 = *(undefined4 *)&param_5->field0_0x0;
                uVar15 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 4);
                uVar16 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 8);
                uVar17 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 0xc);
                local_d0 = (param_5->field0_0x0)._s_0.Z;
                dVar1 = dVar13;
              }
              else {
                uVar18 = *(undefined4 *)&param_5->field0_0x0;
                uVar19 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 4);
                uVar20 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 8);
                uVar21 = *(undefined4 *)((longlong)&param_5->field0_0x0 + 0xc);
                uVar8 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 0x10);
                uVar22 = (undefined4)uVar8;
                uVar23 = (undefined4)((ulonglong)uVar8 >> 0x20);
                param_3 = dVar13;
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < this->RootModeSteps);
          }
          dVar12 = (dVar12 - param_3) / (dVar1 - param_3);
          dVar13 = 0.0;
          if ((0.0 <= dVar12) && (dVar13 = dVar12, dVar11 <= dVar12)) {
            dVar13 = dVar11;
          }
          dVar11 = ((double)CONCAT44(uVar17,uVar16) - (double)CONCAT44(uVar21,uVar20)) * dVar13 +
                   (double)CONCAT44(uVar21,uVar20);
          dVar12 = (local_d0 - (double)CONCAT44(uVar23,uVar22)) * dVar13 +
                   (double)CONCAT44(uVar23,uVar22);
          dVar13 = ((double)CONCAT44(uVar15,uVar14) - (double)CONCAT44(uVar19,uVar18)) * dVar13 +
                   (double)CONCAT44(uVar19,uVar18);
        }
      }
      else {
        dVar12 = (param_2->field0_0x0)._s_0.Z * __real_3feffffde7210be9 +
                 (param_1->field0_0x0)._s_0.Z * __real_3eb0c6f7a0b80000;
        dVar11 = (param_2->field0_0x0)._s_0.Y * __real_3feffffde7210be9 +
                 (param_1->field0_0x0)._s_0.Y * __real_3eb0c6f7a0b80000;
        dVar13 = (param_2->field0_0x0)._s_0.X * __real_3feffffde7210be9 +
                 (param_1->field0_0x0)._s_0.X * __real_3eb0c6f7a0b80000;
      }
    }
    else {
      dVar12 = (param_1->field0_0x0)._s_0.Z * __real_3feffffde7210be9 +
               (param_2->field0_0x0)._s_0.Z * __real_3eb0c6f7a0b80000;
      dVar11 = (param_1->field0_0x0)._s_0.Y * __real_3feffffde7210be9 +
               (param_2->field0_0x0)._s_0.Y * __real_3eb0c6f7a0b80000;
      dVar13 = (param_2->field0_0x0)._s_0.X * __real_3eb0c6f7a0b80000 +
               (param_1->field0_0x0)._s_0.X * __real_3feffffde7210be9;
    }
  }
  else {
    dVar12 = ((param_1->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z) * __real_3fe0000000000000
    ;
    dVar11 = ((param_1->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y) * __real_3fe0000000000000
    ;
    dVar13 = ((param_1->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X) * __real_3fe0000000000000
    ;
  }
  (param_5->field0_0x0)._s_0.X = dVar13;
  (param_5->field0_0x0)._s_0.Y = dVar11;
  (param_5->field0_0x0)._s_0.Z = dVar12;
  return;
}

// generate_basic @ 1433f6ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall UE::Geometry::FMarchingCubes::generate_basic(FMarchingCubes *this)

{
  uint uVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  uint6 uVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  longlong *plVar13;
  uchar *puVar14;
  ulong64 uVar15;
  ushort uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStackY_198 [32];
  int local_15c;
  int local_110 [14];
  FVector3i_u_0 local_d8;
  FVector3i_u_0 FStack_cc;
  FVector3i_u_0 FStack_c0;
  int iStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  int iStack_a0;
  FVector3i_u_0 FStack_9c;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78 [4];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_d8._0_8_ = 0;
  local_d8._s_0.Z._0_2_ = 0;
  local_d8._s_0.Z._2_2_ = 0;
  FStack_cc._s_0.X = 0;
  FStack_cc._s_0.Y = 0;
  FStack_cc._s_0.Z = 0;
  FStack_c0._0_8_ = 0;
  FStack_c0._s_0.Z = 0;
  iStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_a8 = 0;
  iStack_a0 = 0;
  FStack_9c._s_0.X = 0;
  FStack_9c._s_0.Y = 0;
  FStack_9c._s_0.Z = 0;
  auStack_90 = (undefined1  [8])0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_15c = 0;
  if (0 < (this->CellDimensions).field0_0x0._s_0.Z) {
    do {
      uVar18 = 0;
      if (0 < (this->CellDimensions).field0_0x0._s_0.Y) {
        do {
          Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
          plVar5 = *(longlong **)&(this->CancelF).field_0x28;
          pcVar6 = *(code **)&this->CancelF;
          plVar13 = (longlong *)&(this->CancelF).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar13 = plVar5;
          }
          uVar12 = (**(code **)(*plVar13 + 8))();
          cVar8 = (*pcVar6)(uVar12);
          if (cVar8 != '\0') {
            return;
          }
          FStack_c0._s_0.Z = local_15c + 1;
          uVar1 = uVar18 + 1;
          local_d8._0_8_ = (ulonglong)uVar18 << 0x20;
          FStack_cc._s_0.X = 1;
          FStack_c0._0_8_ = CONCAT44(uVar18,1);
          iStack_b4 = 0;
          local_a8 = (ulonglong)uVar1 << 0x20;
          uVar16 = 1;
          FStack_9c._s_0.X = 1;
          local_d8._s_0.Z._0_2_ = (undefined2)local_15c;
          local_d8._s_0.Z._2_2_ = (undefined2)((uint)local_15c >> 0x10);
          auStack_90._4_4_ = uVar1;
          auStack_90._0_4_ = 1;
          local_88 = (ulonglong)(uint)FStack_c0._s_0.Z;
          uStack_80 = CONCAT44(FStack_c0._s_0.Z,uVar1);
          FStack_cc._s_0.Y = uVar18;
          FStack_cc._s_0.Z = local_15c;
          uStack_b0 = uVar18;
          uStack_ac = FStack_c0._s_0.Z;
          iStack_a0 = local_15c;
          FStack_9c._s_0.Y = uVar1;
          FStack_9c._s_0.Z = local_15c;
          if (this->bEnableValueCaching == false) {
            initialize_cell_values_nohash(this,(FGridCell *)&local_d8._s_0,false);
          }
          else {
            initialize_cell_values_grid(this,(FGridCell *)&local_d8._s_0,false);
          }
          dVar2 = this->IsoValue;
          uVar18 = local_78[0] < dVar2 | 2;
          if (dVar2 <= local_78[1]) {
            uVar18 = (uint)(local_78[0] < dVar2);
          }
          uVar10 = uVar18 | 4;
          if (dVar2 <= local_78[2]) {
            uVar10 = uVar18;
          }
          uVar18 = uVar10 | 8;
          if (dVar2 <= local_78[3]) {
            uVar18 = uVar10;
          }
          uVar10 = uVar18 | 0x10;
          if (dVar2 <= local_58) {
            uVar10 = uVar18;
          }
          uVar18 = uVar10 | 0x20;
          if (dVar2 <= local_50) {
            uVar18 = uVar10;
          }
          uVar10 = uVar18 | 0x40;
          if (dVar2 <= local_48) {
            uVar10 = uVar18;
          }
          uVar18 = uVar10 | 0x80;
          if (dVar2 <= local_40) {
            uVar18 = uVar10;
          }
          if (EdgeTable[uVar18] != 0) {
            piVar20 = local_110;
            puVar14 = EdgeIndices[0] + 1;
            do {
              if ((uVar16 & EdgeTable[uVar18]) != 0) {
                iVar11 = edge_vertex_id(this,(FVector3i *)
                                             &(&local_d8)[(*(uchar (*) [2])(puVar14 + -1))[0]]._s_0,
                                        (FVector3i *)&(&local_d8)[*puVar14]._s_0,
                                        local_78[(*(uchar (*) [2])(puVar14 + -1))[0]],
                                        local_78[*puVar14]);
                *piVar20 = iVar11;
              }
              uVar16 = uVar16 * 2;
              puVar14 = puVar14 + 2;
              piVar20 = piVar20 + 1;
            } while ((longlong)puVar14 < 0x150aa24f8);
            uVar15 = TriTable[uVar18];
            uVar7 = CONCAT42(CONCAT22(local_d8._s_0.Z._0_2_,local_d8._s_0.Y._0_2_),
                             local_d8._s_0.X._0_2_);
            for (; uVar15 != 0; uVar15 = uVar15 >> 0xc) {
              iVar11 = local_110[(uint)uVar15 & 0xf];
              iVar19 = local_110[(uint)(uVar15 >> 4) & 0xf];
              iVar17 = local_110[(uint)(uVar15 >> 8) & 0xf];
              if (((iVar11 == iVar19) || (iVar11 == iVar17)) || (iVar19 == iVar17)) {
                bVar9 = Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<765328623430271823>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Generators\\MarchingCubes.h"
                                   ,0x34f,"a != b && a != c && b != c");
                if (bVar9) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              else {
                append_triangle(this,iVar11,iVar19,iVar17,(ulonglong)uVar7);
              }
            }
          }
          if (1 < (this->CellDimensions).field0_0x0._s_0.X) {
            iVar19 = 2;
            iVar11 = 1;
            do {
              iVar17 = iVar11 + 1;
              local_78[0] = local_78[1];
              local_78[3] = local_78[2];
              local_58 = local_50;
              local_40 = local_48;
              local_d8._s_0.X = iVar11;
              FStack_c0._s_0.X = iVar17;
              local_a8 = CONCAT44(local_a8._4_4_,iVar11);
              auStack_90._0_4_ = iVar17;
              local_88 = CONCAT44(iVar11,(undefined4)local_88);
              FStack_cc._s_0.X = iVar19;
              iStack_b4 = iVar11;
              FStack_9c._s_0.X = iVar17;
              if (this->bEnableValueCaching == false) {
                local_78[1] = corner_value_nohash(this,(FVector3i *)&FStack_cc._s_0);
                local_78[2] = corner_value_nohash(this,(FVector3i *)&FStack_c0._s_0);
                local_50 = corner_value_nohash(this,(FVector3i *)&FStack_9c._s_0);
                dVar2 = corner_value_nohash(this,(FVector3i *)auStack_90);
                uVar21 = SUB84(dVar2,0);
                uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
              }
              else {
                local_78[1] = corner_value_grid(this,(FVector3i *)&FStack_cc._s_0);
                local_78[2] = corner_value_grid(this,(FVector3i *)&FStack_c0._s_0);
                local_50 = corner_value_grid(this,(FVector3i *)&FStack_9c._s_0);
                dVar2 = corner_value_grid(this,(FVector3i *)auStack_90);
                uVar21 = SUB84(dVar2,0);
                uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
              }
              local_48 = (double)CONCAT44(uVar22,uVar21);
              dVar2 = this->IsoValue;
              uVar16 = 1;
              uVar18 = local_78[0] < dVar2 | 2;
              if (dVar2 <= local_78[1]) {
                uVar18 = (uint)(local_78[0] < dVar2);
              }
              uVar10 = uVar18 | 4;
              if (dVar2 <= local_78[2]) {
                uVar10 = uVar18;
              }
              uVar18 = uVar10 | 8;
              if (dVar2 <= local_78[3]) {
                uVar18 = uVar10;
              }
              uVar10 = uVar18 | 0x10;
              if (dVar2 <= local_58) {
                uVar10 = uVar18;
              }
              uVar18 = uVar10 | 0x20;
              if (dVar2 <= local_50) {
                uVar18 = uVar10;
              }
              uVar10 = uVar18 | 0x40;
              if (dVar2 <= (double)CONCAT44(uVar22,uVar21)) {
                uVar10 = uVar18;
              }
              uVar18 = uVar10 | 0x80;
              if (dVar2 <= local_40) {
                uVar18 = uVar10;
              }
              if (EdgeTable[uVar18] != 0) {
                piVar20 = local_110;
                puVar14 = EdgeIndices[0] + 1;
                do {
                  if ((uVar16 & EdgeTable[uVar18]) != 0) {
                    iVar11 = edge_vertex_id(this,(FVector3i *)
                                                 &(&local_d8)[(*(uchar (*) [2])(puVar14 + -1))[0]].
                                                  _s_0,(FVector3i *)&(&local_d8)[*puVar14]._s_0,
                                            local_78[(*(uchar (*) [2])(puVar14 + -1))[0]],
                                            local_78[*puVar14]);
                    *piVar20 = iVar11;
                  }
                  uVar16 = uVar16 * 2;
                  puVar14 = puVar14 + 2;
                  piVar20 = piVar20 + 1;
                } while ((longlong)puVar14 < 0x150aa24f8);
                uVar15 = TriTable[uVar18];
                uVar7 = CONCAT42(CONCAT22(local_d8._s_0.Z._0_2_,local_d8._s_0.Y._0_2_),
                                 local_d8._s_0.X._0_2_);
                for (; uVar15 != 0; uVar15 = uVar15 >> 0xc) {
                  iVar11 = local_110[(uint)uVar15 & 0xf];
                  iVar3 = local_110[(uint)(uVar15 >> 4) & 0xf];
                  iVar4 = local_110[(uint)(uVar15 >> 8) & 0xf];
                  if (((iVar11 == iVar3) || (iVar11 == iVar4)) || (iVar3 == iVar4)) {
                    bVar9 = Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<765328623430271823>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Generators\\MarchingCubes.h"
                                       ,0x34f,"a != b && a != c && b != c");
                    if (bVar9) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                  }
                  else {
                    append_triangle(this,iVar11,iVar3,iVar4,(ulonglong)uVar7);
                  }
                }
              }
              iVar19 = iVar19 + 1;
              iVar11 = iVar17;
            } while (iVar17 < (this->CellDimensions).field0_0x0._s_0.X);
          }
          uVar18 = uVar1;
        } while ((int)uVar1 < (this->CellDimensions).field0_0x0._s_0.Y);
      }
      local_15c = local_15c + 1;
    } while (local_15c < (this->CellDimensions).field0_0x0._s_0.Z);
  }
  return;
}

// generate_continuation @ 1433f73b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMarchingCubes::generate_continuation
          (FMarchingCubes *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  uint6 uVar7;
  double dVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  TBlockData3<int,32> *pTVar15;
  undefined8 uVar16;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uchar *puVar21;
  ulong64 uVar22;
  int *piVar23;
  ushort uVar24;
  ForAnyElementType FVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  TVector<double> *pTVar29;
  TVector<double> *pTVar30;
  TBlockedDenseGrid3<int> *this_00;
  FVector3i *pFVar31;
  double dVar32;
  undefined1 auStackY_1e8 [32];
  ForAnyElementType local_198;
  undefined8 local_190;
  uint local_188;
  uint uStack_184;
  uint local_180;
  uint local_178;
  uint uStack_174;
  uint local_170;
  int local_168;
  int local_164;
  TVector<double> *local_160;
  TVector<double> *local_158;
  undefined8 local_150;
  undefined8 local_140;
  int local_130 [16];
  double local_f0;
  undefined1 local_e8 [8];
  FVector3i FStack_e0;
  int iStack_d4;
  undefined1 auStack_d0 [8];
  FVector3i local_c8;
  int iStack_bc;
  undefined1 local_b8 [8];
  FVector3i FStack_b0;
  int iStack_a4;
  undefined1 auStack_a0 [8];
  FVector3i local_98;
  int iStack_8c;
  double local_88 [4];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  iVar11 = (this->CellDimensions).field0_0x0._s_0.Z;
  iVar13 = (this->CellDimensions).field0_0x0._s_0.Y;
  iVar12 = (this->CellDimensions).field0_0x0._s_0.X;
  local_e8 = (undefined1  [8])0x0;
  FStack_e0.field0_0x0._0_8_ = 0;
  stack0xffffffffffffff28 = 0;
  auStack_d0 = (undefined1  [8])0x0;
  local_c8.field0_0x0._0_8_ = 0;
  stack0xffffffffffffff40 = 0;
  local_b8 = (undefined1  [8])0x0;
  FStack_b0.field0_0x0._0_8_ = 0;
  stack0xffffffffffffff58 = 0;
  auStack_a0 = (undefined1  [8])0x0;
  local_98.field0_0x0._0_8_ = 0;
  stack0xffffffffffffff70 = 0;
  *(undefined4 *)&(this->BlockedDoneCells)._padding_ = 0;
  TBlockedDenseGrid3<int>::Resize(&this->BlockedDoneCells,iVar12,iVar13,iVar11);
  dVar8 = __real_3ff0000000000000;
  pTVar29 = param_1->DataPtr;
  FVar25.Data = (FScriptContainerElement *)0x0;
  iVar11 = 0;
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190 = 0;
  pTVar30 = pTVar29 + param_1->ArrayNum;
  local_160 = pTVar29;
  local_158 = pTVar30;
  if (pTVar29 != pTVar30) {
    do {
      this_00 = &this->BlockedDoneCells;
      local_f0 = (pTVar29->field0_0x0)._s_0.Z;
      dVar32 = dVar8 / this->CubeSize;
      local_188 = (uint)(((pTVar29->field0_0x0)._s_0.X - (this->Bounds).Min.field0_0x0._s_0.X) *
                        dVar32);
      uStack_184 = (uint)(((pTVar29->field0_0x0)._s_0.Y - (this->Bounds).Min.field0_0x0._s_0.Y) *
                         dVar32);
      local_180 = (uint)((local_f0 - (this->Bounds).Min.field0_0x0._s_0.Z) * dVar32);
      if ((((-1 < (int)local_188) && (-1 < (int)uStack_184)) && (-1 < (int)local_180)) &&
         ((((int)local_188 < *(int *)((longlong)&(this->BlockedDoneCells)._padding_ + 4) &&
           ((int)uStack_184 < (int)(this->BlockedDoneCells)._padding_)) &&
          ((int)local_180 < *(int *)((longlong)&(this->BlockedDoneCells)._padding_ + 4))))) {
        lVar3 = (this->BlockedDoneCells)._padding_;
        lVar14 = (longlong)
                 (((int)(local_188 + ((int)local_188 >> 0x1f & 0x1fU)) >> 5) +
                 (((int)(((int)local_180 >> 0x1f & 0x1fU) + local_180) >> 5) *
                  *(int *)((longlong)&(this->BlockedDoneCells)._padding_ + 4) +
                 ((int)(uStack_184 + ((int)uStack_184 >> 0x1f & 0x1fU)) >> 5)) *
                 (int)this_00->_padding_);
        lVar4 = *(longlong *)(lVar3 + lVar14 * 0x10);
        if (lVar4 == 0) {
          iVar13 = *(int *)(lVar3 + 8 + lVar14 * 0x10);
        }
        else {
          uVar26 = local_180 & 0x8000001f;
          if ((int)uVar26 < 0) {
            uVar26 = (uVar26 - 1 | 0xffffffe0) + 1;
          }
          uVar27 = uStack_184 & 0x8000001f;
          if ((int)uVar27 < 0) {
            uVar27 = (uVar27 - 1 | 0xffffffe0) + 1;
          }
          uVar28 = local_188 & 0x8000001f;
          if ((int)uVar28 < 0) {
            uVar28 = (uVar28 - 1 | 0xffffffe0) + 1;
          }
          iVar13 = *(int *)(lVar4 + 4 + (ulonglong)((uVar26 * 0x20 + uVar27) * 0x20 + uVar28) * 4);
        }
        if (iVar13 != 1) {
          local_160 = pTVar29;
          if ((FVar25.Data <= (FScriptContainerElement *)&local_188) &&
             ((FScriptContainerElement *)&local_188 < FVar25.Data + (longlong)local_190._4_4_ * 0xc)
             ) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar25.Data = local_198.Data;
            iVar11 = (int)local_190;
          }
          if (iVar11 == local_190._4_4_) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&local_198,(int *)((longlong)&local_190 + 4));
            FVar25.Data = local_198.Data;
          }
          local_190 = CONCAT44(local_190._4_4_,iVar11 + 1);
          *(ulonglong *)(FVar25.Data + (longlong)iVar11 * 0xc) = CONCAT44(uStack_184,local_188);
          *(uint *)(FVar25.Data + (longlong)iVar11 * 0xc + 8) = local_180;
          uVar18 = (int)local_188 >> 0x1f & 0x1f;
          uVar26 = local_188 + uVar18;
          uVar19 = (int)uStack_184 >> 0x1f & 0x1f;
          uVar27 = uStack_184 + uVar19;
          uVar20 = (int)local_180 >> 0x1f & 0x1f;
          uVar28 = local_180 + uVar20;
          pTVar15 = TBasicBlockedDenseGrid3<int,32>::TouchBlockData
                              ((TBasicBlockedDenseGrid3<int,32> *)this_00,
                               (((int)uVar27 >> 5) +
                               ((int)uVar28 >> 5) *
                               *(int *)((longlong)&(this->BlockedDoneCells)._padding_ + 4)) *
                               (int)this_00->_padding_ + ((int)uVar26 >> 5));
          (pTVar15->Data).Elements
          [(((uVar28 & 0x1f) - uVar20) * 0x20 + ((uVar27 & 0x1f) - uVar19)) * 0x20 +
           ((uVar26 & 0x1f) - uVar18)] = 1;
          iVar11 = (int)local_190;
          FVar25.Data = local_198.Data;
          while (local_198.Data = FVar25.Data, 0 < iVar11) {
            uVar27 = iVar11 - 1;
            uVar26 = 0;
            if ((int)uVar27 < iVar11) {
              uVar26 = ~uVar27 >> 0x1f;
            }
            if (uVar26 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar11 = (int)local_190;
            }
            uVar28 = iVar11 - 1;
            local_150 = *(undefined8 *)(local_198.Data + (longlong)(int)uVar27 * 0xc);
            iVar13 = *(int *)(local_198.Data + (longlong)(int)uVar27 * 0xc + 8);
            uVar26 = 0;
            if ((int)uVar28 < iVar11) {
              uVar26 = ~uVar28 >> 0x1f;
            }
            local_164 = iVar13;
            if (uVar26 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar11 = (int)local_190;
            }
            iVar12 = (iVar11 - uVar28) + -1;
            if (iVar12 != 0) {
              memmove(local_198.Data + (longlong)(int)uVar28 * 0xc,
                      local_198.Data + (longlong)(int)uVar28 * 0xc + 0xc,(longlong)iVar12 * 0xc);
              iVar11 = (int)local_190;
            }
            local_190 = CONCAT44(local_190._4_4_,iVar11 + -1);
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,&local_198,iVar11 + -1,(int *)((longlong)&local_190 + 4));
            Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
            plVar5 = *(longlong **)&(this->CancelF).field_0x28;
            pcVar6 = *(code **)&this->CancelF;
            plVar17 = (longlong *)&(this->CancelF).field_0x10;
            if (plVar5 != (longlong *)0x0) {
              plVar17 = plVar5;
            }
            uVar16 = (**(code **)(*plVar17 + 8))();
            cVar10 = (*pcVar6)(uVar16);
            FVar25.Data = local_198.Data;
            if (cVar10 != '\0') goto LAB_1433f7da4;
            local_c8.field0_0x0._s_0.X = iVar13 + 1;
            iVar11 = (int)local_150;
            FStack_b0.field0_0x0._s_0.Z = local_150._4_4_ + 1;
            FStack_e0.field0_0x0._s_0.Y = (int)local_150 + 1;
            local_168 = local_150._4_4_;
            local_e8 = (undefined1  [8])local_150;
            FStack_e0.field0_0x0._s_0.X = iVar13;
            iStack_d4 = iVar13;
            FStack_e0.field0_0x0._s_0.Z = local_150._4_4_;
            auStack_d0._4_4_ = local_150._4_4_;
            auStack_d0._0_4_ = FStack_e0.field0_0x0._s_0.Y;
            local_c8.field0_0x0._s_0.Y = (int)local_150;
            iStack_bc = local_c8.field0_0x0._s_0.X;
            local_c8.field0_0x0._s_0.Z = local_150._4_4_;
            local_b8 = (undefined1  [8])CONCAT44(FStack_b0.field0_0x0._s_0.Z,(int)local_150);
            FStack_b0.field0_0x0._s_0.Y = FStack_e0.field0_0x0._s_0.Y;
            FStack_b0.field0_0x0._s_0.X = iVar13;
            iStack_a4 = iVar13;
            auStack_a0._4_4_ = FStack_b0.field0_0x0._s_0.Z;
            auStack_a0._0_4_ = FStack_e0.field0_0x0._s_0.Y;
            local_98.field0_0x0._s_0.Y = (int)local_150;
            local_98.field0_0x0._s_0.X = local_c8.field0_0x0._s_0.X;
            iStack_8c = local_c8.field0_0x0._s_0.X;
            local_98.field0_0x0._s_0.Z = FStack_b0.field0_0x0._s_0.Z;
            if (this->bEnableValueCaching == false) {
              initialize_cell_values_nohash(this,(FGridCell *)local_e8,false);
            }
            else {
              initialize_cell_values_grid(this,(FGridCell *)local_e8,false);
            }
            dVar32 = this->IsoValue;
            uVar24 = 1;
            uVar26 = local_88[0] < dVar32 | 2;
            if (dVar32 <= local_88[1]) {
              uVar26 = (uint)(local_88[0] < dVar32);
            }
            uVar27 = uVar26 | 4;
            if (dVar32 <= local_88[2]) {
              uVar27 = uVar26;
            }
            uVar26 = uVar27 | 8;
            if (dVar32 <= local_88[3]) {
              uVar26 = uVar27;
            }
            uVar27 = uVar26 | 0x10;
            if (dVar32 <= local_68) {
              uVar27 = uVar26;
            }
            uVar26 = uVar27 | 0x20;
            if (dVar32 <= local_60) {
              uVar26 = uVar27;
            }
            uVar27 = uVar26 | 0x40;
            if (dVar32 <= local_58) {
              uVar27 = uVar26;
            }
            uVar26 = uVar27 | 0x80;
            if (dVar32 <= local_50) {
              uVar26 = uVar27;
            }
            if (EdgeTable[uVar26] != 0) {
              piVar23 = local_130;
              puVar21 = EdgeIndices[0] + 1;
              do {
                if ((uVar24 & EdgeTable[uVar26]) != 0) {
                  iVar13 = edge_vertex_id(this,((FGridCell *)local_e8)->i +
                                               (*(uchar (*) [2])(puVar21 + -1))[0],
                                          ((FGridCell *)local_e8)->i + *puVar21,
                                          local_88[(*(uchar (*) [2])(puVar21 + -1))[0]],
                                          local_88[*puVar21]);
                  *piVar23 = iVar13;
                }
                uVar24 = uVar24 * 2;
                puVar21 = puVar21 + 2;
                piVar23 = piVar23 + 1;
              } while ((longlong)puVar21 < 0x150aa24f8);
              iVar13 = 0;
              uVar22 = TriTable[uVar26];
              uVar7 = CONCAT42(CONCAT22(FStack_e0.field0_0x0._s_0.X._0_2_,local_e8._4_2_),
                               local_e8._0_2_);
              if (uVar22 != 0) {
                do {
                  iVar12 = local_130[(uint)uVar22 & 0xf];
                  iVar1 = local_130[(uint)(uVar22 >> 4) & 0xf];
                  iVar2 = local_130[(uint)(uVar22 >> 8) & 0xf];
                  if (((iVar12 == iVar1) || (iVar12 == iVar2)) || (iVar1 == iVar2)) {
                    bVar9 = Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<765328623430271823>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Generators\\MarchingCubes.h"
                                       ,0x34f,"a != b && a != c && b != c");
                    if (bVar9) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                  }
                  else {
                    append_triangle(this,iVar12,iVar1,iVar2,(ulonglong)uVar7);
                    iVar13 = iVar13 + 1;
                  }
                  iVar12 = local_168;
                  uVar22 = uVar22 >> 0xc;
                } while (uVar22 != 0);
                if (0 < iVar13) {
                  pFVar31 = IndexUtil::GridOffsets6;
                  do {
                    local_140 = *(undefined8 *)&pFVar31->field0_0x0;
                    local_170 = (pFVar31->field0_0x0)._s_0.Z + local_164;
                    local_178 = (int)local_140 + iVar11;
                    uStack_174 = (int)((ulonglong)local_140 >> 0x20) + iVar12;
                    if ((((this->GridBounds).Min.field0_0x0._s_0.X <= (int)local_178) &&
                        ((this->GridBounds).Min.field0_0x0._s_0.Y <= (int)uStack_174)) &&
                       ((((this->GridBounds).Min.field0_0x0._s_0.Z <= (int)local_170 &&
                         (((int)local_178 <= (this->GridBounds).Max.field0_0x0._s_0.X &&
                          ((int)uStack_174 <= (this->GridBounds).Max.field0_0x0._s_0.Y)))) &&
                        ((int)local_170 <= (this->GridBounds).Max.field0_0x0._s_0.Z)))) {
                      lVar3 = (this->BlockedDoneCells)._padding_;
                      lVar14 = (longlong)
                               (((int)(local_178 + ((int)local_178 >> 0x1f & 0x1fU)) >> 5) +
                               (((int)(((int)local_170 >> 0x1f & 0x1fU) + local_170) >> 5) *
                                *(int *)((longlong)&(this->BlockedDoneCells)._padding_ + 4) +
                               ((int)(uStack_174 + ((int)uStack_174 >> 0x1f & 0x1fU)) >> 5)) *
                               (int)(this->BlockedDoneCells)._padding_);
                      lVar4 = *(longlong *)(lVar3 + lVar14 * 0x10);
                      if (lVar4 == 0) {
                        iVar13 = *(int *)(lVar3 + 8 + lVar14 * 0x10);
                      }
                      else {
                        uVar26 = local_170 & 0x8000001f;
                        if ((int)uVar26 < 0) {
                          uVar26 = (uVar26 - 1 | 0xffffffe0) + 1;
                        }
                        uVar27 = uStack_174 & 0x8000001f;
                        if ((int)uVar27 < 0) {
                          uVar27 = (uVar27 - 1 | 0xffffffe0) + 1;
                        }
                        uVar28 = local_178 & 0x8000001f;
                        if ((int)uVar28 < 0) {
                          uVar28 = (uVar28 - 1 | 0xffffffe0) + 1;
                        }
                        iVar13 = *(int *)(lVar4 + 4 +
                                         (ulonglong)((uVar26 * 0x20 + uVar27) * 0x20 + uVar28) * 4);
                      }
                      if (iVar13 == 0) {
                        if (((local_198.Data <= (FScriptContainerElement *)&local_178) &&
                            ((FScriptContainerElement *)&local_178 <
                             local_198.Data + (longlong)local_190._4_4_ * 0xc)) &&
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
                        iVar13 = (int)local_190;
                        if ((int)local_190 == local_190._4_4_) {
                          iVar13 = Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x40c,&local_198,(int *)((longlong)&local_190 + 4));
                        }
                        local_190 = CONCAT44(local_190._4_4_,iVar13 + 1);
                        *(ulonglong *)(local_198.Data + (longlong)iVar13 * 0xc) =
                             CONCAT44(uStack_174,local_178);
                        *(uint *)(local_198.Data + (longlong)iVar13 * 0xc + 8) = local_170;
                        uVar18 = (int)local_178 >> 0x1f & 0x1f;
                        uVar26 = local_178 + uVar18;
                        uVar19 = (int)uStack_174 >> 0x1f & 0x1f;
                        uVar27 = uStack_174 + uVar19;
                        uVar20 = (int)local_170 >> 0x1f & 0x1f;
                        uVar28 = local_170 + uVar20;
                        pTVar15 = TBasicBlockedDenseGrid3<int,32>::TouchBlockData
                                            ((TBasicBlockedDenseGrid3<int,32> *)
                                             &this->BlockedDoneCells,
                                             (((int)uVar27 >> 5) +
                                             ((int)uVar28 >> 5) *
                                             *(int *)((longlong)&(this->BlockedDoneCells)._padding_
                                                     + 4)) * (int)(this->BlockedDoneCells)._padding_
                                             + ((int)uVar26 >> 5));
                        (pTVar15->Data).Elements
                        [(((uVar28 & 0x1f) - uVar20) * 0x20 + ((uVar27 & 0x1f) - uVar19)) * 0x20 +
                         ((uVar26 & 0x1f) - uVar18)] = 1;
                      }
                    }
                    pFVar31 = pFVar31 + 1;
                  } while (pFVar31 != (FVector3i *)&DAT_150aa2fa8);
                }
              }
            }
            pTVar29 = local_160;
            pTVar30 = local_158;
            FVar25.Data = local_198.Data;
            iVar11 = (int)local_190;
          }
        }
      }
      pTVar29 = pTVar29 + 1;
      local_160 = pTVar29;
    } while (pTVar29 != pTVar30);
  }
LAB_1433f7da4:
  if (FVar25.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar25.Data);
  }
  return;
}

// generate_continuation_parallel @ 1433f7e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMarchingCubes::generate_continuation_parallel
          (FMarchingCubes *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar1;
  double dVar2;
  ForAnyElementType FVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  TBlockData3<int,32> *pTVar7;
  uint uVar8;
  uint uVar9;
  TVector<double> *pTVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  double dVar15;
  undefined1 auStackY_158 [32];
  ForAnyElementType local_108;
  undefined8 uStack_100;
  <lambda_1> local_f8;
  uint local_f0;
  int iStack_ec;
  int local_e8;
  FScriptContainerElement *local_d8;
  longlong lStack_d0;
  TVector<double> *local_c8;
  TArrayView<std::nullptr_t,int> local_c0;
  code *local_b0;
  ForAnyElementType **local_a8;
  ForAnyElementType *local_a0;
  FMarchingCubes *local_98;
  _RTL_CRITICAL_SECTION *local_90;
  FScriptContainerElement **local_88;
  double local_70;
  _RTL_CRITICAL_SECTION local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_158;
  iVar13 = param_1->ArrayNum;
  pTVar10 = param_1->DataPtr;
  this->parallel_mesh_access = true;
  dVar2 = __real_3ff0000000000000;
  local_108.Data = (FScriptContainerElement *)0x0;
  uStack_100 = 0;
  local_c8 = pTVar10 + iVar13;
  if (pTVar10 != local_c8) {
    do {
      local_70 = (pTVar10->field0_0x0)._s_0.Z;
      dVar15 = dVar2 / this->CubeSize;
      local_f0 = (uint)(((pTVar10->field0_0x0)._s_0.X - (this->Bounds).Min.field0_0x0._s_0.X) *
                       dVar15);
      iStack_ec = (int)(((pTVar10->field0_0x0)._s_0.Y - (this->Bounds).Min.field0_0x0._s_0.Y) *
                       dVar15);
      local_e8 = (int)((local_70 - (this->Bounds).Min.field0_0x0._s_0.Z) * dVar15);
      if (((((-1 < (int)local_f0) && (-1 < iStack_ec)) && (-1 < local_e8)) &&
          (((int)local_f0 < *(int *)((longlong)&(this->BlockedDoneCells)._padding_ + 4) &&
           (iStack_ec < (int)(this->BlockedDoneCells)._padding_)))) &&
         (local_e8 < *(int *)((longlong)&(this->BlockedDoneCells)._padding_ + 4))) {
        uVar12 = local_f0 & 0x1f;
        uVar11 = local_f0;
        if ((int)local_f0 < 0) {
          uVar11 = local_f0 + 0x1f;
          uVar12 = uVar12 - 0x20;
        }
        uVar8 = iStack_ec >> 0x1f & 0x1f;
        uVar5 = iStack_ec + uVar8;
        uVar9 = local_e8 >> 0x1f & 0x1f;
        uVar6 = local_e8 + uVar9;
        uVar12 = (((uVar6 & 0x1f) - uVar9) * 0x20 + ((uVar5 & 0x1f) - uVar8)) * 0x20 + uVar12;
        iVar13 = (((int)uVar6 >> 5) * *(int *)((longlong)&(this->BlockedDoneCells)._padding_ + 4) +
                 ((int)uVar5 >> 5)) * (int)(this->BlockedDoneCells)._padding_ + ((int)uVar11 >> 5);
        lpCriticalSection =
             (LPCRITICAL_SECTION)
             ((this->BlockedDoneCells).BlockLocks.AllocatorInstance.Data + (longlong)iVar13 * 0x28);
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(lpCriticalSection);
        pTVar7 = TBasicBlockedDenseGrid3<int,32>::TouchBlockData
                           ((TBasicBlockedDenseGrid3<int,32> *)&this->BlockedDoneCells,iVar13);
        bVar14 = (pTVar7->Data).Elements[uVar12] == 0;
        if (bVar14) {
          (pTVar7->Data).Elements[uVar12] = 1;
        }
        LeaveCriticalSection(lpCriticalSection);
        if (bVar14) {
          if (((local_108.Data <= (FScriptContainerElement *)&local_f0) &&
              ((FScriptContainerElement *)&local_f0 <
               local_108.Data + (longlong)(int)uStack_100._4_4_ * 0xc)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar13 = (int)uStack_100;
          if ((int)uStack_100 == uStack_100._4_4_) {
            iVar13 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&local_108,(int *)((longlong)&uStack_100 + 4));
          }
          uStack_100 = CONCAT44(uStack_100._4_4_,iVar13 + 1);
          *(ulonglong *)(local_108.Data + (longlong)iVar13 * 0xc) = CONCAT44(iStack_ec,local_f0);
          *(int *)(local_108.Data + (longlong)iVar13 * 0xc + 8) = local_e8;
        }
      }
      pTVar10 = pTVar10 + 1;
    } while (pTVar10 != local_c8);
  }
  local_d8 = (FScriptContainerElement *)0x0;
  lStack_d0 = 0;
  InitializeCriticalSectionAndSpinCount(&local_68,4000);
  iVar13 = (int)uStack_100;
  FVar3.Data = local_108.Data;
  lVar4 = uStack_100;
  while (uStack_100 = lVar4, local_108.Data = FVar3.Data, 0 < iVar13) {
    local_a0 = &local_108;
    local_90 = &local_68;
    local_c0.DataPtr = (void **)0x0;
    local_88 = &local_d8;
    local_c0.ArrayNum = 0;
    local_a8 = &local_a0;
    local_b0 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMarchingCubes::generate_continuation_parallel'::__l11::<lambda_1>,void,int>
               ::Call;
    local_98 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar13,1,(TFunctionRef<void___cdecl(int)> *)&local_b0,local_f8,
               None,&local_c0);
    lVar4 = uStack_100;
    uVar11 = uStack_100._4_4_;
    uStack_100 = (ulonglong)uStack_100._4_4_ << 0x20;
    iVar13 = 0;
    if ((lVar4 < 0) && (uVar11 != 0)) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&local_108,0,(int *)((longlong)&uStack_100 + 4));
      iVar13 = (int)uStack_100;
    }
    FVar3.Data = local_108.Data;
    lVar4 = uStack_100;
    if (0 < (int)lStack_d0) {
      iVar13 = (int)lStack_d0;
      FVar3.Data = local_d8;
      lVar4 = lStack_d0;
      local_d8 = local_108.Data;
      lStack_d0 = uStack_100;
    }
  }
  this->parallel_mesh_access = false;
  DeleteCriticalSection(&local_68);
  if (local_d8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  return;
}

// initialize_cell_values_grid @ 14340b820

void __thiscall
UE::Geometry::FMarchingCubes::initialize_cell_values_grid
          (FMarchingCubes *this,FGridCell *param_1,bool param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  TBlockData3<float,32> *pTVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  int *piVar20;
  double *pdVar21;
  double dVar22;
  double dVar23;
  double local_68;
  double local_60;
  double local_58;
  
  fVar8 = __real_7f7fffff;
  if (param_2) {
    dVar22 = corner_value_grid(this,param_1->i + 1);
    param_1->f[1] = dVar22;
    dVar22 = corner_value_grid(this,param_1->i + 2);
    param_1->f[2] = dVar22;
    dVar22 = corner_value_grid(this,param_1->i + 5);
    param_1->f[5] = dVar22;
    dVar22 = corner_value_grid(this,param_1->i + 6);
    param_1->f[6] = dVar22;
    return;
  }
  piVar20 = &param_1->i[0].field0_0x0._s_0.Z;
  lVar19 = 8;
  pdVar21 = param_1->f;
  do {
    if (this->bParallelCompute == false) {
      iVar2 = ((FVector3i_u_0_s_0 *)(piVar20 + -2))->X;
      iVar3 = piVar20[-1];
      uVar15 = iVar2 >> 0x1f & 0x1f;
      uVar9 = iVar2 + uVar15;
      uVar16 = iVar3 >> 0x1f & 0x1f;
      uVar10 = iVar3 + uVar16;
      uVar17 = *piVar20 >> 0x1f & 0x1f;
      uVar11 = *piVar20 + uVar17;
      lVar18 = (longlong)
               ((((int)uVar11 >> 5) *
                 *(int *)((longlong)&(this->BlockedCornerValuesGrid)._padding_ + 4) +
                ((int)uVar10 >> 5)) * (int)(this->BlockedCornerValuesGrid)._padding_ +
               ((int)uVar9 >> 5));
      lVar4 = (this->BlockedCornerValuesGrid)._padding_;
      lVar5 = *(longlong *)(lVar4 + lVar18 * 0x10);
      if (lVar5 == 0) {
        fVar1 = *(float *)(lVar4 + 8 + lVar18 * 0x10);
      }
      else {
        fVar1 = *(float *)(lVar5 + 4 +
                          (ulonglong)
                          ((((uVar11 & 0x1f) - uVar17) * 0x20 + ((uVar10 & 0x1f) - uVar16)) * 0x20 +
                          ((uVar9 & 0x1f) - uVar15)) * 4);
      }
      if (fVar1 == fVar8) {
        dVar22 = this->CubeSize;
        local_68 = (double)iVar2 * dVar22 + (this->Bounds).Min.field0_0x0._s_0.X;
        local_60 = (double)iVar3 * dVar22 + (this->Bounds).Min.field0_0x0._s_0.Y;
        local_58 = (double)*piVar20 * dVar22 + (this->Bounds).Min.field0_0x0._s_0.Z;
        Core::Private::Function::CheckCallable(*(void **)&this->Implicit);
        plVar6 = *(longlong **)&(this->Implicit).field_0x28;
        pcVar7 = *(code **)&this->Implicit;
        plVar14 = (longlong *)&(this->Implicit).field_0x10;
        if (plVar6 != (longlong *)0x0) {
          plVar14 = plVar6;
        }
        uVar12 = (**(code **)(*plVar14 + 8))();
        dVar22 = (double)(*pcVar7)(uVar12,&local_68);
        uVar15 = ((FVector3i_u_0_s_0 *)(piVar20 + -2))->X >> 0x1f & 0x1f;
        uVar9 = ((FVector3i_u_0_s_0 *)(piVar20 + -2))->X + uVar15;
        uVar16 = piVar20[-1] >> 0x1f & 0x1f;
        uVar10 = piVar20[-1] + uVar16;
        uVar17 = *piVar20 >> 0x1f & 0x1f;
        uVar11 = *piVar20 + uVar17;
        pTVar13 = TBasicBlockedDenseGrid3<float,32>::TouchBlockData
                            ((TBasicBlockedDenseGrid3<float,32> *)&this->BlockedCornerValuesGrid,
                             (((int)uVar10 >> 5) +
                             ((int)uVar11 >> 5) *
                             *(int *)((longlong)&(this->BlockedCornerValuesGrid)._padding_ + 4)) *
                             (int)(this->BlockedCornerValuesGrid)._padding_ + ((int)uVar9 >> 5));
        dVar23 = (double)(float)dVar22;
        (pTVar13->Data).Elements
        [(((uVar11 & 0x1f) - uVar17) * 0x20 + ((uVar10 & 0x1f) - uVar16)) * 0x20 +
         ((uVar9 & 0x1f) - uVar15)] = (float)dVar22;
      }
      else {
        dVar23 = (double)fVar1;
      }
    }
    else {
      dVar23 = corner_value_grid_parallel(this,(FVector3i *)(piVar20 + -2));
    }
    *pdVar21 = dVar23;
    piVar20 = piVar20 + 3;
    pdVar21 = pdVar21 + 1;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  return;
}

// initialize_cell_values_nohash @ 14340baf0

void __thiscall
UE::Geometry::FMarchingCubes::initialize_cell_values_nohash
          (FMarchingCubes *this,FGridCell *param_1,bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  double *pdVar5;
  int *piVar6;
  longlong lVar7;
  double dVar8;
  double local_38;
  double local_30;
  double local_28;
  
  if (param_2) {
    dVar8 = corner_value_nohash(this,param_1->i + 1);
    param_1->f[1] = dVar8;
    dVar8 = corner_value_nohash(this,param_1->i + 2);
    param_1->f[2] = dVar8;
    dVar8 = corner_value_nohash(this,param_1->i + 5);
    param_1->f[5] = dVar8;
    dVar8 = corner_value_nohash(this,param_1->i + 6);
    param_1->f[6] = dVar8;
    return;
  }
  pdVar5 = param_1->f;
  piVar6 = &param_1->i[0].field0_0x0._s_0.Z;
  lVar7 = 8;
  do {
    dVar8 = this->CubeSize;
    local_38 = (double)((FVector3i_u_0_s_0 *)(piVar6 + -2))->X * dVar8 +
               (this->Bounds).Min.field0_0x0._s_0.X;
    local_30 = (double)piVar6[-1] * dVar8 + (this->Bounds).Min.field0_0x0._s_0.Y;
    local_28 = (double)*piVar6 * dVar8 + (this->Bounds).Min.field0_0x0._s_0.Z;
    Core::Private::Function::CheckCallable(*(void **)&this->Implicit);
    plVar1 = *(longlong **)&(this->Implicit).field_0x28;
    pcVar2 = *(code **)&this->Implicit;
    plVar4 = (longlong *)&(this->Implicit).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    dVar8 = (double)(*pcVar2)(uVar3,&local_38);
    *pdVar5 = dVar8;
    piVar6 = piVar6 + 3;
    pdVar5 = pdVar5 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

