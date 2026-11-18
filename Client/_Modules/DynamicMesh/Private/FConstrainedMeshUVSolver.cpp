// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 7

// FConstrainedMeshUVSolver @ 14c8967e0

FConstrainedMeshUVSolver * __thiscall
UE::Geometry::FConstrainedMeshUVSolver::FConstrainedMeshUVSolver
          (FConstrainedMeshUVSolver *this,FDynamicMesh3 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  
  this->_padding_ = (longlong)&___7FConstrainedMeshUVSolver_Geometry_UE__6B_;
  plVar1 = &(this->VtxLinearization)._padding_;
  piVar2 = (int *)((longlong)&(this->VtxLinearization)._padding_ + 4);
  *(undefined8 *)&this->ConstraintMap = 0;
  *(undefined8 *)&(this->ConstraintMap).field_0x8 = 0;
  *(undefined8 *)&(this->ConstraintMap).field_0x20 = 0;
  *(undefined4 *)&(this->ConstraintMap).field_0x28 = 0;
  *(undefined4 *)&(this->ConstraintMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConstraintMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConstraintMap).field_0x34 = 0;
  *(undefined8 *)&(this->ConstraintMap).field_0x40 = 0;
  *(undefined4 *)&(this->ConstraintMap).field_0x48 = 0;
  this->bConstraintPositionsDirty = true;
  this->bConstraintWeightsDirty = true;
  (this->VtxLinearization)._padding_ = 0;
  (this->VtxLinearization)._padding_ = 0;
  *plVar1 = 0;
  *piVar2 = 0;
  (this->VtxLinearization).NumBndryVerts = 0;
  this->Mesh = param_1;
  *(undefined4 *)&(this->VtxLinearization)._padding_ = 0;
  if (*piVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)plVar1,0,piVar2);
  }
  FElementLinearization::Populate<UE::Geometry::FRefCountVector::IndexEnumerable>
            ((FElementLinearization *)&this->VtxLinearization,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed,(param_1->VertexRefCounts).UsedCount,
             (IndexEnumerable)&param_1->VertexRefCounts);
  return this;
}

// ~FConstrainedMeshUVSolver @ 14c89a0c0

void __thiscall
UE::Geometry::FConstrainedMeshUVSolver::~FConstrainedMeshUVSolver(FConstrainedMeshUVSolver *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FConstrainedMeshUVSolver_Geometry_UE__6B_;
  pvVar1 = (void *)(this->VtxLinearization)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->VtxLinearization)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->ConstraintMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ConstraintMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Solvers::FUVConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Solvers::FUVConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Solvers::FUVConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConstraintMap);
  this->_padding_ = (longlong)&___7IConstrainedMeshUVSolver_Solvers_UE__6B_;
  return;
}

// AddConstraint @ 14c8b6fc0

void __thiscall
UE::Geometry::FConstrainedMeshUVSolver::AddConstraint
          (FConstrainedMeshUVSolver *this,int param_1,double param_2,TVector2<double> *param_3,
          bool param_4)

{
  code *pcVar1;
  bool bVar2;
  int local_res8;
  TPairInitializer<int_const_&,UE::Solvers::FUVConstraint_const_&> local_58;
  int *local_48;
  int local_40;
  int local_3c;
  double local_38;
  double dStack_30;
  bool local_28;
  double local_20;
  
  bVar2 = FElementLinearization::IsValidId((FElementLinearization *)&this->VtxLinearization,param_1)
  ;
  if (bVar2) {
    local_res8 = FElementLinearization::GetIndex
                           ((FElementLinearization *)&this->VtxLinearization,param_1);
    local_38 = (param_3->field0_0x0)._s_0.X;
    dStack_30 = (param_3->field0_0x0)._s_0.Y;
    local_28 = param_4;
    local_58.Value = (FUVConstraint *)&local_res8;
    local_48 = &local_40;
    local_40 = param_1;
    local_3c = local_res8;
    local_20 = param_2;
    TSet<TTuple<int,UE::Solvers::FUVConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FUVConstraint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Solvers::FUVConstraint_const_&>_>
              ((TSet<TTuple<int,UE::Solvers::FUVConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FUVConstraint,0>,FDefaultSetAllocator>
                *)&this->ConstraintMap,&local_58,(bool *)&local_58.Value);
    this->bConstraintPositionsDirty = true;
    this->bConstraintWeightsDirty = true;
  }
  else {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8826420370400608166>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\MeshUVSolver.cpp"
                       ,0x5a,"VtxLinearization.IsValidId(VtxId)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ClearConstraints @ 14c8c7010

void __thiscall
UE::Geometry::FConstrainedMeshUVSolver::ClearConstraints(FConstrainedMeshUVSolver *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->ConstraintMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,UE::Solvers::FUVConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FUVConstraint,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,UE::Solvers::FUVConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FUVConstraint,0>,FDefaultSetAllocator>
                      *)&this->ConstraintMap);
  }
  puVar1 = &(this->ConstraintMap).field_0xc;
  *(undefined4 *)&(this->ConstraintMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)&this->ConstraintMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ConstraintMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConstraintMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->ConstraintMap).field_0x2c;
  *(undefined4 *)&(this->ConstraintMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ConstraintMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ConstraintMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ConstraintMap).field_0x48 = 1;
    TSet<TTuple<int,UE::Solvers::FUVConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FUVConstraint,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,UE::Solvers::FUVConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FUVConstraint,0>,FDefaultSetAllocator>
              *)&this->ConstraintMap);
  }
  this->bConstraintPositionsDirty = true;
  this->bConstraintWeightsDirty = true;
  return;
}

// IsConstrained @ 14c901dc0

bool __thiscall
UE::Geometry::FConstrainedMeshUVSolver::IsConstrained(FConstrainedMeshUVSolver *this,int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  bVar1 = FElementLinearization::IsValidId((FElementLinearization *)&this->VtxLinearization,param_1)
  ;
  if (!bVar1) {
    return false;
  }
  uVar2 = FElementLinearization::GetIndex((FElementLinearization *)&this->VtxLinearization,param_1);
  if (*(int *)&(this->ConstraintMap).field_0x8 != *(int *)&(this->ConstraintMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ConstraintMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ConstraintMap).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->ConstraintMap).field_0x48 - 1U & uVar2) *
                              4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)((longlong)iVar3 * 0x38 + *(longlong *)&this->ConstraintMap) == uVar2)
        goto LAB_14c901e4c;
        iVar3 = *(int *)((longlong)iVar3 * 0x38 + 0x30 + *(longlong *)&this->ConstraintMap);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14c901e4c:
  return iVar3 != -1;
}

// UpdateConstraintPosition @ 14c9215a0

bool __thiscall
UE::Geometry::FConstrainedMeshUVSolver::UpdateConstraintPosition
          (FConstrainedMeshUVSolver *this,int param_1,TVector2<double> *param_2,bool param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint *puVar9;
  atomic<unsigned_char> *paVar10;
  uint *puVar11;
  undefined1 *puVar12;
  int iVar13;
  
  bVar4 = FElementLinearization::IsValidId((FElementLinearization *)&this->VtxLinearization,param_1)
  ;
  if (bVar4) {
    uVar6 = FElementLinearization::GetIndex
                      ((FElementLinearization *)&this->VtxLinearization,param_1);
    if (*(int *)&(this->ConstraintMap).field_0x8 != *(int *)&(this->ConstraintMap).field_0x34) {
      puVar12 = *(undefined1 **)&(this->ConstraintMap).field_0x40;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &(this->ConstraintMap).field_0x38;
      }
      uVar7 = *(uint *)(puVar12 +
                       (ulonglong)(*(int *)&(this->ConstraintMap).field_0x48 - 1U & uVar6) * 4);
      if (uVar7 != 0xffffffff) {
        do {
          puVar9 = (uint *)((longlong)(int)uVar7 * 0x38 + *(longlong *)&this->ConstraintMap);
          if (*puVar9 == uVar6) {
            puVar11 = puVar9 + 2;
            if (puVar9 == (uint *)0x0) {
              puVar11 = (uint *)0x0;
            }
            if (puVar11 != (uint *)0x0) {
              dVar2 = (param_2->field0_0x0)._s_0.X;
              dVar3 = (param_2->field0_0x0)._s_0.Y;
              *(bool *)(puVar11 + 6) = param_3;
              *(double *)(puVar11 + 2) = dVar2;
              *(double *)(puVar11 + 4) = dVar3;
              this->bConstraintPositionsDirty = true;
              return true;
            }
            break;
          }
          uVar7 = puVar9[0xc];
        } while (uVar7 != 0xffffffff);
      }
    }
    pcVar8 = "Found != nullptr";
    iVar13 = 0x71;
    paVar10 = &bGEnsureHasExecuted<_8826420370400608143>;
  }
  else {
    pcVar8 = "VtxLinearization.IsValidId(VtxId)";
    iVar13 = 0x6d;
    paVar10 = &bGEnsureHasExecuted<_8826420370400608147>;
  }
  bVar4 = Assert::Private::ExecCheckImplInternal
                    (paVar10,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\MeshUVSolver.cpp"
                     ,iVar13,pcVar8);
  if (!bVar4) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return (bool)uVar5;
}

// UpdateConstraintWeight @ 14c921940

bool __thiscall
UE::Geometry::FConstrainedMeshUVSolver::UpdateConstraintWeight
          (FConstrainedMeshUVSolver *this,int param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint *puVar7;
  atomic<unsigned_char> *paVar8;
  uint *puVar9;
  undefined1 *puVar10;
  int iVar11;
  
  bVar2 = FElementLinearization::IsValidId((FElementLinearization *)&this->VtxLinearization,param_1)
  ;
  if (bVar2) {
    uVar4 = FElementLinearization::GetIndex
                      ((FElementLinearization *)&this->VtxLinearization,param_1);
    if (*(int *)&(this->ConstraintMap).field_0x8 != *(int *)&(this->ConstraintMap).field_0x34) {
      puVar10 = *(undefined1 **)&(this->ConstraintMap).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->ConstraintMap).field_0x38;
      }
      uVar5 = *(uint *)(puVar10 +
                       (ulonglong)(*(int *)&(this->ConstraintMap).field_0x48 - 1U & uVar4) * 4);
      if (uVar5 != 0xffffffff) {
        do {
          puVar7 = (uint *)((longlong)(int)uVar5 * 0x38 + *(longlong *)&this->ConstraintMap);
          if (*puVar7 == uVar4) {
            puVar9 = puVar7 + 2;
            if (puVar7 == (uint *)0x0) {
              puVar9 = (uint *)0x0;
            }
            if (puVar9 != (uint *)0x0) {
              *(double *)(puVar9 + 8) = param_2;
              this->bConstraintWeightsDirty = true;
              return true;
            }
            break;
          }
          uVar5 = puVar7[0xc];
        } while (uVar5 != 0xffffffff);
      }
    }
    pcVar6 = "Found != nullptr";
    iVar11 = 0x82;
    paVar8 = &bGEnsureHasExecuted<_8826420370400608126>;
  }
  else {
    pcVar6 = "VtxLinearization.IsValidId(VtxId)";
    iVar11 = 0x7e;
    paVar8 = &bGEnsureHasExecuted<_8826420370400608130>;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (paVar8,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\MeshUVSolver.cpp"
                     ,iVar11,pcVar6);
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

