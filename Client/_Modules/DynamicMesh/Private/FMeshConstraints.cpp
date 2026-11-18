// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 7

// ~FMeshConstraints @ 14c6e1760

void __thiscall UE::Geometry::FMeshConstraints::~FMeshConstraints(FMeshConstraints *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int>
            ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)
             (this->ProjectionData).ProjectionCurves.AllocatorInstance.Data,
             (this->ProjectionData).ProjectionCurves.ArrayNum);
  pFVar1 = (this->ProjectionData).ProjectionCurves.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->Vertices).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Vertices).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FVertexConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FVertexConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FVertexConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Vertices);
  *(undefined4 *)&(this->Edges).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Edges).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FEdgeConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FEdgeConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FEdgeConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// GetEdgeConstraint @ 14c739e00

FEdgeConstraint * __thiscall
UE::Geometry::FMeshConstraints::GetEdgeConstraint
          (FMeshConstraints *this,FEdgeConstraint *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  IProjectionTarget *pIVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  
  if (*(int *)&(this->Edges).field_0x8 != *(int *)&(this->Edges).field_0x34) {
    puVar6 = *(undefined1 **)&(this->Edges).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Edges).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->Edges).field_0x48 - 1U & param_1) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->Edges + (longlong)iVar4 * 0x28;
        if (*(int *)(*(longlong *)&this->Edges + (longlong)iVar4 * 0x28) == param_1) {
          puVar5 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar5 = (undefined8 *)0x0;
          }
          if (puVar5 != (undefined8 *)0x0) {
            pIVar3 = (IProjectionTarget *)puVar5[1];
            uVar2 = puVar5[2];
            *(undefined8 *)__return_storage_ptr__ = *puVar5;
            __return_storage_ptr__->Target = pIVar3;
            *(undefined8 *)&__return_storage_ptr__->TrackingSetID = uVar2;
            return __return_storage_ptr__;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x20);
      } while (iVar4 != -1);
    }
  }
  __return_storage_ptr__->RefineFlags = NoConstraint;
  __return_storage_ptr__->Target = (IProjectionTarget *)0x0;
  __return_storage_ptr__->TrackingSetID = -1;
  return __return_storage_ptr__;
}

// GetVertexConstraint @ 14c743be0

FVertexConstraint * __thiscall
UE::Geometry::FMeshConstraints::GetVertexConstraint
          (FMeshConstraints *this,FVertexConstraint *__return_storage_ptr__,int param_1)

{
  undefined8 uVar1;
  IProjectionTarget *pIVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  
  if (*(int *)&(this->Vertices).field_0x8 != *(int *)&(this->Vertices).field_0x34) {
    puVar6 = *(undefined1 **)&(this->Vertices).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Vertices).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->Vertices).field_0x48 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&this->Vertices);
        if (*piVar5 == param_1) {
          piVar4 = piVar5 + 2;
          if (piVar5 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          if (piVar4 != (int *)0x0) {
            uVar1 = *(undefined8 *)piVar4;
            pIVar2 = *(IProjectionTarget **)(piVar4 + 2);
            __return_storage_ptr__->bCannotDelete = (bool)(char)uVar1;
            __return_storage_ptr__->bCanMove = (bool)(char)((ulonglong)uVar1 >> 8);
            *(short *)&__return_storage_ptr__->field_0x2 = (short)((ulonglong)uVar1 >> 0x10);
            __return_storage_ptr__->FixedSetID = (int)((ulonglong)uVar1 >> 0x20);
            __return_storage_ptr__->Target = pIVar2;
            return __return_storage_ptr__;
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  __return_storage_ptr__->bCannotDelete = false;
  __return_storage_ptr__->bCanMove = true;
  __return_storage_ptr__->FixedSetID = -1;
  __return_storage_ptr__->Target = (IProjectionTarget *)0x0;
  return __return_storage_ptr__;
}

// HasEdgeConstraint @ 14c744420

bool __thiscall
UE::Geometry::FMeshConstraints::HasEdgeConstraint(FMeshConstraints *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  lVar5 = 0;
  lVar2 = lVar5;
  if (*(int *)&(this->Edges).field_0x8 != *(int *)&(this->Edges).field_0x34) {
    puVar4 = *(undefined1 **)&(this->Edges).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Edges).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->Edges).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)&this->Edges + (longlong)iVar1 * 0x28;
        if (*(int *)(*(longlong *)&this->Edges + (longlong)iVar1 * 0x28) == param_1) break;
        iVar1 = *(int *)(lVar2 + 0x20);
        lVar2 = lVar5;
      } while (iVar1 != -1);
    }
  }
  lVar3 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar3 = lVar5;
  }
  return lVar3 != 0;
}

// HasVertexConstraint @ 14c744640

bool __thiscall
UE::Geometry::FMeshConstraints::HasVertexConstraint(FMeshConstraints *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  int *piVar5;
  
  piVar5 = (int *)0x0;
  piVar2 = piVar5;
  if (*(int *)&(this->Vertices).field_0x8 != *(int *)&(this->Vertices).field_0x34) {
    puVar4 = *(undefined1 **)&(this->Vertices).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Vertices).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->Vertices).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&this->Vertices);
        if (*piVar2 == param_1) break;
        iVar1 = piVar2[6];
        piVar2 = piVar5;
      } while (iVar1 != -1);
    }
  }
  piVar3 = piVar2 + 2;
  if (piVar2 == (int *)0x0) {
    piVar3 = piVar5;
  }
  return piVar3 != (int *)0x0;
}

// FMeshConstraints @ 14c7b2b90

FMeshConstraints * __thiscall
UE::Geometry::FMeshConstraints::FMeshConstraints(FMeshConstraints *this,FMeshConstraints *param_1)

{
  undefined1 *puVar1;
  TMap<int,UE::Geometry::FVertexConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>_>
  *pTVar2;
  TMap<int,UE::Geometry::FVertexConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>_>
  *pTVar3;
  void *pvVar4;
  undefined1 *puVar5;
  
  *(undefined8 *)&this->Edges = 0;
  *(undefined8 *)&(this->Edges).field_0x8 = 0;
  *(undefined8 *)&(this->Edges).field_0x20 = 0;
  *(undefined4 *)&(this->Edges).field_0x28 = 0;
  *(undefined4 *)&(this->Edges).field_0x2c = 0x80;
  *(undefined4 *)&(this->Edges).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Edges).field_0x34 = 0;
  *(undefined8 *)&(this->Edges).field_0x40 = 0;
  *(undefined4 *)&(this->Edges).field_0x48 = 0;
  if (this != param_1) {
    puVar1 = &(this->Edges).field_0x10;
    *(undefined8 *)&this->Edges = *(undefined8 *)&param_1->Edges;
    *(undefined8 *)&param_1->Edges = 0;
    *(undefined4 *)&(this->Edges).field_0x8 = *(undefined4 *)&(param_1->Edges).field_0x8;
    *(undefined4 *)&(this->Edges).field_0xc = *(undefined4 *)&(param_1->Edges).field_0xc;
    *(undefined8 *)&(param_1->Edges).field_0x8 = 0;
    puVar5 = &(param_1->Edges).field_0x10;
    if (puVar1 != puVar5) {
      if (*(longlong *)&(param_1->Edges).field_0x20 == 0) {
        memmove(puVar1,puVar5,0x10);
      }
      pvVar4 = *(void **)&(this->Edges).field_0x20;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      *(undefined8 *)&(this->Edges).field_0x20 = *(undefined8 *)&(param_1->Edges).field_0x20;
      *(undefined8 *)&(param_1->Edges).field_0x20 = 0;
      *(undefined4 *)&(this->Edges).field_0x28 = *(undefined4 *)&(param_1->Edges).field_0x28;
      *(undefined4 *)&(this->Edges).field_0x2c = *(undefined4 *)&(param_1->Edges).field_0x2c;
      *(undefined8 *)&(param_1->Edges).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Edges).field_0x30 = *(undefined4 *)&(param_1->Edges).field_0x30;
    *(undefined4 *)&(this->Edges).field_0x34 = *(undefined4 *)&(param_1->Edges).field_0x34;
    *(undefined4 *)&(param_1->Edges).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Edges).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->Edges).field_0x40 == 0) {
    *(undefined4 *)&(this->Edges).field_0x38 = *(undefined4 *)&(param_1->Edges).field_0x38;
  }
  pvVar4 = *(void **)&(this->Edges).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  pTVar2 = &this->Vertices;
  *(undefined8 *)&(this->Edges).field_0x40 = *(undefined8 *)&(param_1->Edges).field_0x40;
  pTVar3 = &param_1->Vertices;
  *(undefined8 *)&(param_1->Edges).field_0x40 = 0;
  *(undefined4 *)&(this->Edges).field_0x48 = *(undefined4 *)&(param_1->Edges).field_0x48;
  *(undefined4 *)&(param_1->Edges).field_0x48 = 0;
  *(undefined8 *)pTVar2 = 0;
  *(undefined8 *)&(this->Vertices).field_0x8 = 0;
  *(undefined8 *)&(this->Vertices).field_0x20 = 0;
  *(undefined4 *)&(this->Vertices).field_0x28 = 0;
  *(undefined4 *)&(this->Vertices).field_0x2c = 0x80;
  *(undefined4 *)&(this->Vertices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Vertices).field_0x34 = 0;
  *(undefined8 *)&(this->Vertices).field_0x40 = 0;
  *(undefined4 *)&(this->Vertices).field_0x48 = 0;
  if (pTVar2 != pTVar3) {
    *(undefined8 *)pTVar2 = *(undefined8 *)pTVar3;
    *(undefined8 *)pTVar3 = 0;
    puVar1 = &(param_1->Vertices).field_0x10;
    *(undefined4 *)&(this->Vertices).field_0x8 = *(undefined4 *)&(param_1->Vertices).field_0x8;
    puVar5 = &(this->Vertices).field_0x10;
    *(undefined4 *)&(this->Vertices).field_0xc = *(undefined4 *)&(param_1->Vertices).field_0xc;
    *(undefined8 *)&(param_1->Vertices).field_0x8 = 0;
    if (puVar5 != puVar1) {
      if (*(longlong *)&(param_1->Vertices).field_0x20 == 0) {
        memmove(puVar5,puVar1,0x10);
      }
      pvVar4 = *(void **)&(this->Vertices).field_0x20;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      *(undefined8 *)&(this->Vertices).field_0x20 = *(undefined8 *)&(param_1->Vertices).field_0x20;
      *(undefined8 *)&(param_1->Vertices).field_0x20 = 0;
      *(undefined4 *)&(this->Vertices).field_0x28 = *(undefined4 *)&(param_1->Vertices).field_0x28;
      *(undefined4 *)&(this->Vertices).field_0x2c = *(undefined4 *)&(param_1->Vertices).field_0x2c;
      *(undefined8 *)&(param_1->Vertices).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Vertices).field_0x30 = *(undefined4 *)&(param_1->Vertices).field_0x30;
    *(undefined4 *)&(this->Vertices).field_0x34 = *(undefined4 *)&(param_1->Vertices).field_0x34;
    *(undefined4 *)&(param_1->Vertices).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Vertices).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->Vertices).field_0x40 == 0) {
    *(undefined4 *)&(this->Vertices).field_0x38 = *(undefined4 *)&(param_1->Vertices).field_0x38;
  }
  pvVar4 = *(void **)&(this->Vertices).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  *(undefined8 *)&(this->Vertices).field_0x40 = *(undefined8 *)&(param_1->Vertices).field_0x40;
  *(undefined8 *)&(param_1->Vertices).field_0x40 = 0;
  *(undefined4 *)&(this->Vertices).field_0x48 = *(undefined4 *)&(param_1->Vertices).field_0x48;
  *(undefined4 *)&(param_1->Vertices).field_0x48 = 0;
  this->FixedSetIDCounter = param_1->FixedSetIDCounter;
  (this->ProjectionData).ProjectionCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectionData).ProjectionCurves.AllocatorInstance.Data =
       (param_1->ProjectionData).ProjectionCurves.AllocatorInstance.Data;
  (param_1->ProjectionData).ProjectionCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ProjectionData).ProjectionCurves.ArrayNum =
       (param_1->ProjectionData).ProjectionCurves.ArrayNum;
  (this->ProjectionData).ProjectionCurves.ArrayMax =
       (param_1->ProjectionData).ProjectionCurves.ArrayMax;
  (param_1->ProjectionData).ProjectionCurves.ArrayNum = 0;
  (param_1->ProjectionData).ProjectionCurves.ArrayMax = 0;
  return this;
}

// SetOrUpdateVertexConstraint @ 14c917270

void __thiscall
UE::Geometry::FMeshConstraints::SetOrUpdateVertexConstraint
          (FMeshConstraints *this,int param_1,FVertexConstraint *param_2)

{
  TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> local_res8 [2];
  FVertexConstraint **local_18;
  FVertexConstraint *local_10;
  
  local_18 = &local_res8[0].Value;
  local_res8[0].Value._0_4_ = param_1;
  local_10 = param_2;
  TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
            ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
              *)&this->Vertices,local_res8,(bool *)&local_18);
  return;
}

