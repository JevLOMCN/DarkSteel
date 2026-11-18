// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 6

// FMeshRegionOperator @ 14c7b2df0

FMeshRegionOperator * __thiscall
UE::Geometry::FMeshRegionOperator::FMeshRegionOperator
          (FMeshRegionOperator *this,FDynamicMesh3 *param_1,TArrayView<int_const_,int> *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  int *_Src;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FMeshRegionOperator *pFVar8;
  
  this->BaseMesh = param_1;
  FDynamicSubmesh3::FDynamicSubmesh3(&this->Region);
  pTVar3 = &this->CurrentBaseTris;
  (this->ReinsertSubToBaseMapV).Dense.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CurrentBaseTris).ArrayNum;
  (this->ReinsertSubToBaseMapV).Dense.ArrayNum = 0;
  (this->ReinsertSubToBaseMapV).Dense.ArrayMax = 0;
  piVar2 = &(this->CurrentBaseTris).ArrayMax;
  *(undefined8 *)&(this->ReinsertSubToBaseMapV).Sparse = 0;
  *(undefined8 *)&(this->ReinsertSubToBaseMapV).Sparse.field_0x8 = 0;
  *(undefined8 *)&(this->ReinsertSubToBaseMapV).Sparse.field_0x20 = 0;
  *(undefined4 *)&(this->ReinsertSubToBaseMapV).Sparse.field_0x28 = 0;
  *(undefined4 *)&(this->ReinsertSubToBaseMapV).Sparse.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReinsertSubToBaseMapV).Sparse.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReinsertSubToBaseMapV).Sparse.field_0x34 = 0;
  *(undefined8 *)&(this->ReinsertSubToBaseMapV).Sparse.field_0x40 = 0;
  *(undefined4 *)&(this->ReinsertSubToBaseMapV).Sparse.field_0x48 = 0;
  (this->ReinsertSubToBaseMapV).DefaultOffset = -1;
  (this->ReinsertSubToBaseMapV).DefaultScale = 0;
  (this->ReinsertSubToBaseMapV).MaxIndex = -1;
  (this->ReinsertSubToBaseMapV).MapType = Sparse;
  (this->ReinsertSubToBaseMapT).Dense.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReinsertSubToBaseMapT).Dense.ArrayNum = 0;
  (this->ReinsertSubToBaseMapT).Dense.ArrayMax = 0;
  *(undefined8 *)&(this->ReinsertSubToBaseMapT).Sparse = 0;
  *(undefined8 *)&(this->ReinsertSubToBaseMapT).Sparse.field_0x8 = 0;
  *(undefined8 *)&(this->ReinsertSubToBaseMapT).Sparse.field_0x20 = 0;
  *(undefined4 *)&(this->ReinsertSubToBaseMapT).Sparse.field_0x28 = 0;
  *(undefined4 *)&(this->ReinsertSubToBaseMapT).Sparse.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReinsertSubToBaseMapT).Sparse.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReinsertSubToBaseMapT).Sparse.field_0x34 = 0;
  *(undefined8 *)&(this->ReinsertSubToBaseMapT).Sparse.field_0x40 = 0;
  *(undefined4 *)&(this->ReinsertSubToBaseMapT).Sparse.field_0x48 = 0;
  (this->ReinsertSubToBaseMapT).DefaultOffset = -1;
  (this->ReinsertSubToBaseMapT).DefaultScale = 0;
  (this->ReinsertSubToBaseMapT).MaxIndex = -1;
  (this->ReinsertSubToBaseMapT).MapType = Sparse;
  this->ReinsertDuplicateTriBehavior = EnsureContinue;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (FDynamicMesh3 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Base",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Operations\\MeshRegionOperator.h"
                       ,0x3c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FMeshRegionOperator *)(*pcVar5)();
      return pFVar8;
    }
  }
  (this->Region).BaseMesh = param_1;
  FDynamicSubmesh3::Compute(&this->Region,param_2,0xf,true);
  iVar4 = param_2->ArrayNum;
  _Src = param_2->DataPtr;
  if ((_Src == (int *)0x0) && (iVar4 != 0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FMeshRegionOperator *)(*pcVar5)();
      return pFVar8;
    }
  }
  iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar4,&pTVar3->AllocatorInstance,piVar1,piVar2);
  if (iVar4 != 0) {
    memcpy((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 4,_Src,(longlong)iVar4 << 2);
  }
  return this;
}

// FMeshRegionOperator @ 14c7b3020

FMeshRegionOperator * __thiscall
UE::Geometry::FMeshRegionOperator::FMeshRegionOperator
          (FMeshRegionOperator *this,FDynamicMesh3 *param_1,TArrayView<int_const_,int> *param_2,
          TFunctionRef<void___cdecl(UE::Geometry::FDynamicSubmesh3_&)> *param_3)

{
  int *piVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  int *_Src;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FMeshRegionOperator *pFVar8;
  
  this->BaseMesh = param_1;
  FDynamicSubmesh3::FDynamicSubmesh3(&this->Region);
  pTVar3 = &this->CurrentBaseTris;
  (this->ReinsertSubToBaseMapV).Dense.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CurrentBaseTris).ArrayNum;
  (this->ReinsertSubToBaseMapV).Dense.ArrayNum = 0;
  (this->ReinsertSubToBaseMapV).Dense.ArrayMax = 0;
  piVar2 = &(this->CurrentBaseTris).ArrayMax;
  *(undefined8 *)&(this->ReinsertSubToBaseMapV).Sparse = 0;
  *(undefined8 *)&(this->ReinsertSubToBaseMapV).Sparse.field_0x8 = 0;
  *(undefined8 *)&(this->ReinsertSubToBaseMapV).Sparse.field_0x20 = 0;
  *(undefined4 *)&(this->ReinsertSubToBaseMapV).Sparse.field_0x28 = 0;
  *(undefined4 *)&(this->ReinsertSubToBaseMapV).Sparse.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReinsertSubToBaseMapV).Sparse.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReinsertSubToBaseMapV).Sparse.field_0x34 = 0;
  *(undefined8 *)&(this->ReinsertSubToBaseMapV).Sparse.field_0x40 = 0;
  *(undefined4 *)&(this->ReinsertSubToBaseMapV).Sparse.field_0x48 = 0;
  (this->ReinsertSubToBaseMapV).DefaultOffset = -1;
  (this->ReinsertSubToBaseMapV).DefaultScale = 0;
  (this->ReinsertSubToBaseMapV).MaxIndex = -1;
  (this->ReinsertSubToBaseMapV).MapType = Sparse;
  (this->ReinsertSubToBaseMapT).Dense.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReinsertSubToBaseMapT).Dense.ArrayNum = 0;
  (this->ReinsertSubToBaseMapT).Dense.ArrayMax = 0;
  *(undefined8 *)&(this->ReinsertSubToBaseMapT).Sparse = 0;
  *(undefined8 *)&(this->ReinsertSubToBaseMapT).Sparse.field_0x8 = 0;
  *(undefined8 *)&(this->ReinsertSubToBaseMapT).Sparse.field_0x20 = 0;
  *(undefined4 *)&(this->ReinsertSubToBaseMapT).Sparse.field_0x28 = 0;
  *(undefined4 *)&(this->ReinsertSubToBaseMapT).Sparse.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReinsertSubToBaseMapT).Sparse.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReinsertSubToBaseMapT).Sparse.field_0x34 = 0;
  *(undefined8 *)&(this->ReinsertSubToBaseMapT).Sparse.field_0x40 = 0;
  *(undefined4 *)&(this->ReinsertSubToBaseMapT).Sparse.field_0x48 = 0;
  (this->ReinsertSubToBaseMapT).DefaultOffset = -1;
  (this->ReinsertSubToBaseMapT).DefaultScale = 0;
  (this->ReinsertSubToBaseMapT).MaxIndex = -1;
  (this->ReinsertSubToBaseMapT).MapType = Sparse;
  this->ReinsertDuplicateTriBehavior = EnsureContinue;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  if (param_1 == (FDynamicMesh3 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Base",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Operations\\MeshRegionOperator.h"
                       ,0x33,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FMeshRegionOperator *)(*pcVar5)();
      return pFVar8;
    }
  }
  (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&this->Region);
  (this->Region).BaseMesh = param_1;
  FDynamicSubmesh3::Compute(&this->Region,param_2,0xf,true);
  iVar4 = param_2->ArrayNum;
  _Src = param_2->DataPtr;
  if ((_Src == (int *)0x0) && (iVar4 != 0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FMeshRegionOperator *)(*pcVar5)();
      return pFVar8;
    }
  }
  iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar4,&pTVar3->AllocatorInstance,piVar1,piVar2);
  if (iVar4 != 0) {
    memcpy((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 4,_Src,(longlong)iVar4 << 2);
  }
  return this;
}

// ~FMeshRegionOperator @ 14c7b72e0

void __thiscall UE::Geometry::FMeshRegionOperator::~FMeshRegionOperator(FMeshRegionOperator *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->CurrentBaseTris).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ReinsertSubToBaseMapT).Sparse.field_0x48 = 0;
  pvVar2 = *(void **)&(this->ReinsertSubToBaseMapT).Sparse.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ReinsertSubToBaseMapT).Sparse);
  pFVar1 = (this->ReinsertSubToBaseMapT).Dense.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ReinsertSubToBaseMapV).Sparse.field_0x48 = 0;
  pvVar2 = *(void **)&(this->ReinsertSubToBaseMapV).Sparse.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ReinsertSubToBaseMapV).Sparse);
  pFVar1 = (this->ReinsertSubToBaseMapV).Dense.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDynamicSubmesh3::~FDynamicSubmesh3(&this->Region);
  return;
}

// BackPropropagate @ 14c7e42b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FMeshRegionOperator::BackPropropagate(FMeshRegionOperator *this,bool param_1)

{
  FOptionallySparseIndexMap *this_00;
  int iVar1;
  code *pcVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  int *piVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  EMapType *pEVar18;
  uint local_res20 [2];
  FDynamicMeshEditor local_78;
  longlong local_70;
  longlong local_68;
  TArray<int,TSizedDefaultAllocator<32>_> *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  
  if (param_1) {
    RepairPossibleNonManifoldEdges(this);
  }
  local_78.Mesh = this->BaseMesh;
  local_60 = &this->CurrentBaseTris;
  FDynamicMeshEditor::RemoveTriangles(&local_78,local_60,true);
  uVar13 = (this->Region).Submesh.TriangleRefCounts.UsedCount;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (0 < (int)uVar13) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar13,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
  }
  bVar4 = FDynamicMeshEditor::ReinsertSubmesh
                    (&local_78,&this->Region,&this->ReinsertSubToBaseMapV,&local_58,
                     this->ReinsertDuplicateTriBehavior);
  this_00 = &this->ReinsertSubToBaseMapT;
  iVar11 = (this->ReinsertSubToBaseMapT).Dense.ArrayMax;
  iVar1 = (this->Region).Submesh.TriangleRefCounts.UsedCount;
  iVar17 = (this->Region).Submesh.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
           (this->Region).Submesh.TriangleRefCounts.RefCounts.CurBlockUsed;
  (this->ReinsertSubToBaseMapT).Dense.ArrayNum = 0;
  if (iVar11 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this_00,0,&(this->ReinsertSubToBaseMapT).Dense.ArrayMax);
  }
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &(this->ReinsertSubToBaseMapT).Sparse);
  (this->ReinsertSubToBaseMapT).MaxIndex = iVar17;
  if ((iVar17 < 32000) || (__real_3dcccccd < (float)iVar1 / (float)iVar17)) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this_00->Dense,iVar17,Default);
    uVar13 = 0;
    (this->ReinsertSubToBaseMapT).MapType = Dense;
    iVar11 = (this->ReinsertSubToBaseMapT).Dense.ArrayNum;
    if (0 < iVar11) {
      lVar14 = 0;
      do {
        iVar16 = uVar13 * (this->ReinsertSubToBaseMapT).DefaultScale;
        iVar1 = (this->ReinsertSubToBaseMapT).DefaultOffset;
        uVar15 = 0;
        if ((int)uVar13 < iVar11) {
          uVar15 = ~uVar13 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        uVar13 = uVar13 + 1;
        *(int *)((this_00->Dense).AllocatorInstance.Data + lVar14) = iVar16 + iVar1;
        lVar14 = lVar14 + 4;
        iVar11 = (this->ReinsertSubToBaseMapT).Dense.ArrayNum;
      } while ((int)uVar13 < iVar11);
    }
    if (iVar17 < 1) goto LAB_14c7e4760;
  }
  else {
    (this->ReinsertSubToBaseMapT).MapType = Sparse;
  }
  bVar7 = false;
  uVar13 = 0;
  pEVar18 = &(this->ReinsertSubToBaseMapT).MapType;
  uVar15 = 0;
  local_70 = 0;
  local_68 = 0;
  do {
    lVar14 = local_68;
    if (((-1 < (int)uVar13) &&
        ((int)uVar13 <
         (int)((this->Region).Submesh.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
              (this->Region).Submesh.TriangleRefCounts.RefCounts.CurBlockUsed))) &&
       ((ushort)(*(short *)(*(longlong *)
                             ((this->Region).Submesh.TriangleRefCounts.RefCounts.Blocks.
                              AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8) +
                           (ulonglong)((uint)local_68 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      uVar8 = 0;
      if ((int)uVar15 < local_58.ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      uVar15 = uVar15 + 1;
      iVar11 = *(int *)(local_58.AllocatorInstance.Data + local_70);
      local_70 = local_70 + 4;
      if ((param_1) || (iVar11 != -2)) {
        iVar1 = (this->ReinsertSubToBaseMapT).MaxIndex;
        local_res20[0] = uVar13;
        if ((-1 < iVar1) &&
           ((iVar1 <= (int)uVar13 &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("!BadIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\SparseIndexCollectionTypes.h"
                                ,0x164,L""), bVar5)))) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        if ((*pEVar18 == ScaleAndOffset) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("MapType != EMapType::ScaleAndOffset",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\SparseIndexCollectionTypes.h"
                               ,0x165,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        if (*pEVar18 == Dense) {
          lVar14 = (longlong)(int)local_res20[0];
          uVar8 = 0;
          if ((int)local_res20[0] < (this->ReinsertSubToBaseMapT).Dense.ArrayNum) {
            uVar8 = ~local_res20[0] >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          *(int *)((this_00->Dense).AllocatorInstance.Data + lVar14 * 4) = iVar11;
          lVar14 = local_68;
        }
        else {
          piVar9 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                   FindOrAddImpl<int_const_&>
                             ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                               *)&(this->ReinsertSubToBaseMapT).Sparse,local_res20[0],
                              (int *)local_res20);
          *piVar9 = iVar11;
        }
      }
      else {
        bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7845198807745691855>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Operations\\MeshRegionOperator.h"
                           ,0xcf,"new_tri != -2");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        bVar7 = true;
      }
    }
    local_68 = lVar14 + 1;
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < iVar17);
  if (bVar7) {
    pFVar10 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 4;
    FVar12.Data = local_58.AllocatorInstance.Data;
    while (FVar12.Data != pFVar10) {
      if (*(int *)FVar12.Data == -2) {
        do {
          pFVar10 = pFVar10 + -4;
          if (FVar12.Data == pFVar10) goto LAB_14c7e474c;
        } while (*(int *)pFVar10 == -2);
        *(int *)FVar12.Data = *(int *)pFVar10;
        FVar12.Data = FVar12.Data + 4;
      }
      else {
        FVar12.Data = FVar12.Data + 4;
      }
    }
LAB_14c7e474c:
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              (&local_58,
               (int)((longlong)FVar12.Data - (longlong)local_58.AllocatorInstance.Data >> 2),Default
              );
  }
LAB_14c7e4760:
  FVar12.Data = local_58.AllocatorInstance.Data;
  pTVar3 = local_60;
  if (local_60 != &local_58) {
    iVar11 = local_58.ArrayNum;
    lVar14 = (longlong)local_58.ArrayNum;
    piVar9 = &local_60->ArrayMax;
    local_60->ArrayNum = local_58.ArrayNum;
    if ((local_58.ArrayNum == 0) && (*piVar9 == 0)) {
      *piVar9 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_58.ArrayNum,*piVar9,&local_60->AllocatorInstance,local_58.ArrayNum,piVar9
                );
      if (iVar11 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,FVar12.Data,lVar14 << 2);
      }
    }
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return bVar4;
}

// BackPropropagateVertices @ 14c7e4830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FMeshRegionOperator::BackPropropagateVertices(FMeshRegionOperator *this,bool param_1)

{
  FMutex *this_00;
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  atomic<unsigned_char> aVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  FDynamicMesh3 *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 uVar12;
  short sVar13;
  uint uVar14;
  byte bVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  bool bVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_178 [32];
  undefined1 local_146 [6];
  ulonglong local_140;
  undefined8 local_138;
  undefined8 local_130;
  float local_128;
  longlong *local_120;
  uint uStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  uint local_100;
  uint uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  longlong local_f0;
  ulonglong local_e8;
  TVector<double>_u_0 local_e0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (((this->Region).Submesh.VertexNormals.bIsSet == false) ||
     (bVar11 = true, (((this->Region).BaseMesh)->VertexNormals).bIsSet == false)) {
    bVar11 = false;
  }
  local_138 = 1;
  uVar21 = (this->Region).Submesh.VertexRefCounts.RefCounts.CurBlockUsed +
           (this->Region).Submesh.VertexRefCounts.RefCounts.CurBlock * 0x200;
  uVar20 = 0;
  if ((uVar21 != 0) &&
     (pFVar6 = (this->Region).Submesh.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data,
     uVar20 = 0, 0xfffd < (ushort)(**(short **)pFVar6 - 1U))) {
    uVar20 = 1;
    uVar17 = 1;
    if (1 < (int)uVar21) {
      do {
        uVar20 = uVar17;
        sVar13 = *(short *)(*(longlong *)(pFVar6 + (uVar20 >> 9) * 8) +
                           (ulonglong)((uint)uVar20 & 0x1ff) * 2);
        if ((sVar13 != 0) && (sVar13 != -1)) break;
        uVar18 = (uint)uVar20 + 1;
        uVar20 = (ulonglong)uVar18;
        uVar17 = uVar20;
      } while ((int)uVar18 < (int)uVar21);
    }
  }
  uVar18 = (uint)uVar20;
joined_r0x00014c7e48f9:
  if (uVar18 != uVar21) {
    while( true ) {
      uVar18 = (uint)uVar20;
      uVar14 = TIndexMap<int>::GetFrom(&(this->Region).Mappings.VertexMap,uVar18);
      pFVar7 = this->BaseMesh;
      uVar17 = (ulonglong)(uVar18 & 0x1ff);
      local_e8 = uVar20 >> 9;
      local_f0 = *(longlong *)
                  ((this->Region).Submesh.Vertices.Blocks.AllocatorInstance.Data + local_e8 * 8);
      local_e0._s_0.Z = *(double *)(local_f0 + 0x10 + uVar17 * 0x18);
      puVar1 = (undefined4 *)(local_f0 + uVar17 * 0x18);
      uVar25 = puVar1[2];
      local_140 = uVar17;
      sVar13 = _dclass(*puVar1);
      if (((sVar13 < 1) && (sVar13 = _dclass(uVar25), sVar13 < 1)) &&
         (sVar13 = _dclass(SUB84(local_e0._s_0.Z,0)), sVar13 < 1)) {
        puVar2 = (undefined8 *)(local_f0 + uVar17 * 0x18);
        uVar9 = puVar2[1];
        uVar5 = *(undefined8 *)(local_f0 + 0x10 + uVar17 * 0x18);
        lVar16 = *(longlong *)
                  ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8);
        puVar3 = (undefined8 *)(lVar16 + (ulonglong)(uVar14 & 0x1ff) * 0x18);
        *puVar3 = *puVar2;
        puVar3[1] = uVar9;
        *(undefined8 *)(lVar16 + 0x10 + (ulonglong)(uVar14 & 0x1ff) * 0x18) = uVar5;
        uVar17 = local_140;
        if ((pFVar7->ChangeStampShape).bIsEnabled != false) {
          this_00 = &(pFVar7->ChangeStampShape).Mutex;
          LOCK();
          bVar24 = this_00->State == (atomic<unsigned_char>)0x0;
          if (bVar24) {
            this_00->State = SUB81(local_138,0);
          }
          UNLOCK();
          if (!bVar24) {
            FMutex::LockSlow(this_00);
          }
          puVar22 = &(pFVar7->ChangeStampShape).Value;
          *puVar22 = *puVar22 + 1;
          LOCK();
          aVar4 = this_00->State;
          this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
          UNLOCK();
          uVar17 = local_140;
          if (((byte)aVar4 & 2) != 0) {
            FMutex::WakeWaitingThread(this_00);
            uVar17 = local_140;
          }
        }
      }
      if (bVar11) {
        if ((this->Region).Submesh.VertexNormals.bIsSet == false) {
          uVar25 = (undefined4)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
          uVar26 = (undefined4)
                   ((ulonglong)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_ >> 0x20);
          local_128 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
        }
        else {
          lVar16 = *(longlong *)
                    ((this->Region).Submesh.VertexNormals.TypedValue.Blocks.AllocatorInstance.Data +
                    local_e8 * 8);
          uVar5 = *(undefined8 *)(lVar16 + uVar17 * 0xc);
          uVar25 = (undefined4)uVar5;
          uVar26 = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_128 = *(float *)(lVar16 + 8 + uVar17 * 0xc);
        }
        local_130 = CONCAT44(uVar26,uVar25);
        if ((this->BaseMesh->VertexNormals).bIsSet != false) {
          lVar16 = *(longlong *)
                    ((this->BaseMesh->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar14 >> 9) * 8);
          *(ulonglong *)(lVar16 + (ulonglong)(uVar14 & 0x1ff) * 0xc) = CONCAT44(uVar26,uVar25);
          *(float *)(lVar16 + 8 + (ulonglong)(uVar14 & 0x1ff) * 0xc) = local_128;
        }
      }
      uVar18 = uVar18 + 1;
      uVar20 = (ulonglong)uVar18;
      if ((int)uVar21 <= (int)uVar18) break;
      while( true ) {
        uVar17 = (ulonglong)((uint)uVar20 & 0x1ff);
        lVar16 = *(longlong *)
                  ((this->Region).Submesh.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data +
                  (uVar20 >> 9) * 8);
        if ((*(short *)(lVar16 + uVar17 * 2) != 0) && (*(short *)(lVar16 + uVar17 * 2) != -1))
        break;
        uVar18 = (uint)uVar20 + 1;
        uVar20 = (ulonglong)uVar18;
        if ((int)uVar21 <= (int)uVar18) goto joined_r0x00014c7e48f9;
      }
    }
    goto joined_r0x00014c7e48f9;
  }
  uVar21 = (uint)local_138;
  if (param_1) {
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    uVar18 = 0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,
               &(this->Region).BaseBorderV);
    uVar14 = local_70;
    local_100 = 0;
    uStack_104 = local_100;
    if (local_70 != 0) {
      puVar22 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar22 = local_78;
      }
      uVar23 = *puVar22;
      local_100 = 0;
      uVar18 = 0;
      while (uVar23 == 0) {
        lVar16 = (longlong)(int)uVar18;
        local_100 = local_100 + 0x20;
        uVar18 = uVar18 + 1;
        uStack_104 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
        goto LAB_14c7e4bc5;
        uVar23 = puVar22[lVar16 + 1];
      }
      uVar21 = -uVar23 & uVar23;
      uVar20 = (ulonglong)uVar21 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uStack_104 = (local_100 - 1) + (int)lVar16;
      local_140 = CONCAT44(local_140._4_4_,(int)lVar16);
      if ((int)local_70 < (int)uStack_104) {
        uStack_104 = local_70;
      }
    }
LAB_14c7e4bc5:
    local_120 = (longlong *)local_98;
    local_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    iStack_f8 = local_98._8_4_ - local_64;
    uVar23 = local_70 & 0xffffffe0;
    uStack_108 = 0xffffffff;
    TStack_c0.CurrentBitIndex = uStack_104;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    TStack_c0._padding_ = CONCAT44(uVar21,uVar18);
    iVar19 = (int)local_70 >> 5;
    TStack_c0._28_4_ = uStack_104;
    TStack_c0.BaseBitIndex = local_100;
    uStack_a0 = CONCAT44(uStack_f4,iStack_f8);
    bVar15 = (byte)local_70;
    uStack_118 = uVar18;
    uStack_114 = uVar21;
    uStack_fc = uStack_104;
    local_c8 = local_120;
    TStack_c0.Array = local_110;
    if (((int)local_70 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
    if (uVar14 != local_70) {
      puVar22 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar22 = local_78;
      }
      uVar21 = -1 << (bVar15 & 0x1f) & puVar22[iVar19];
      while (uVar21 == 0) {
        lVar16 = (longlong)iVar19;
        uVar23 = uVar23 + 0x20;
        iVar19 = iVar19 + 1;
        uVar14 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_14c7e4cd0;
        uVar21 = puVar22[lVar16 + 1];
      }
      uVar20 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar14 = (int)lVar16 + -1 + uVar23;
      if ((int)local_70 < (int)uVar14) {
        uVar14 = local_70;
      }
    }
LAB_14c7e4cd0:
    while( true ) {
      plVar10 = local_c8;
      if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_146);
      }
      if (((TStack_c0.CurrentBitIndex == uVar14) &&
          (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar10 == (longlong *)local_98)) break;
      uVar21 = *(uint *)(*plVar10 + (longlong)TStack_c0.CurrentBitIndex * 0xc);
      FMeshNormals::ComputeVertexNormal
                ((TVector<double> *)&local_e0._s_0,this->BaseMesh,uVar21,true,true);
      if ((this->BaseMesh->VertexNormals).bIsSet != false) {
        uVar20 = (ulonglong)(uVar21 & 0x1ff);
        lVar16 = *(longlong *)
                  ((this->BaseMesh->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar21 >> 9) * 8);
        *(float *)(lVar16 + uVar20 * 0xc) = (float)local_e0._s_0.X;
        *(float *)(lVar16 + 4 + uVar20 * 0xc) = (float)local_e0._s_0.Y;
        *(float *)(lVar16 + 8 + uVar20 * 0xc) = (float)local_e0._s_0.Z;
      }
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  return true;
}

// RepairPossibleNonManifoldEdges @ 14c824290

void __thiscall
UE::Geometry::FMeshRegionOperator::RepairPossibleNonManifoldEdges(FMeshRegionOperator *this)

{
  longlong lVar1;
  undefined8 uVar2;
  FDynamicMesh3 *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 uVar14;
  int iStackX_c;
  uint local_98 [2];
  ForAnyElementType local_90;
  undefined8 local_88;
  undefined1 local_78 [4];
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  
  iVar13 = (this->Region).Submesh.EdgeRefCounts.RefCounts.CurBlock * 0x200 +
           (this->Region).Submesh.EdgeRefCounts.RefCounts.CurBlockUsed;
  uVar12 = 0;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  local_98[0] = 0;
  uVar9 = uVar12;
  if (0 < iVar13) {
    do {
      uVar7 = (uint)uVar9;
      if (((-1 < (int)uVar7) &&
          ((int)uVar7 <
           (int)((this->Region).Submesh.EdgeRefCounts.RefCounts.CurBlock * 0x200 +
                (this->Region).Submesh.EdgeRefCounts.RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((this->Region).Submesh.EdgeRefCounts.RefCounts.Blocks.
                                AllocatorInstance.Data + (uVar9 >> 9) * 8) +
                             (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        lVar1 = *(longlong *)
                 ((this->Region).Submesh.Edges.Blocks.AllocatorInstance.Data + (uVar9 >> 9) * 8);
        if (*(int *)(lVar1 + 0xc + (ulonglong)(uVar7 & 0x1ff) * 0x10) != -1) {
          uVar2 = *(undefined8 *)(lVar1 + (ulonglong)(uVar7 & 0x1ff) * 0x10);
          iVar11 = (int)uVar2;
          bVar6 = FDynamicMesh3::IsBoundaryVertex(&(this->Region).Submesh,iVar11);
          if (bVar6) {
            iStackX_c = (int)((ulonglong)uVar2 >> 0x20);
            bVar6 = FDynamicMesh3::IsBoundaryVertex(&(this->Region).Submesh,iStackX_c);
            if (bVar6) {
              uVar7 = TIndexMap<int>::GetFrom(&(this->Region).Mappings.VertexMap,iVar11);
              uVar8 = TIndexMap<int>::GetFrom(&(this->Region).Mappings.VertexMap,iStackX_c);
              if ((uVar7 != 0xffffffff) && (uVar8 != 0xffffffff)) {
                pFVar3 = this->BaseMesh;
                if ((((((int)uVar7 < 0) ||
                      ((iVar11 = (pFVar3->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                                 (pFVar3->VertexRefCounts).RefCounts.CurBlockUsed,
                       iVar11 <= (int)uVar7 ||
                       (pFVar4 = (pFVar3->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
                       0xfffd < (ushort)(*(short *)(*(longlong *)
                                                     (pFVar4 + (ulonglong)(uVar7 >> 9) * 8) +
                                                   (ulonglong)(uVar7 & 0x1ff) * 2) - 1U))))) ||
                     ((int)uVar8 < 0)) ||
                    ((iVar11 <= (int)uVar8 ||
                     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                    (pFVar4 + (ulonglong)(uVar8 >> 9) * 8) +
                                                  (ulonglong)(uVar8 & 0x1ff) * 2) - 1U))))) &&
                   (bVar6 = Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<7845198807745691789>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Operations\\MeshRegionOperator.h"
                                       ,0x8d,
                                       "BaseMesh->IsVertex(base_a) && BaseMesh->IsVertex(base_b)"),
                   bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar11 = FDynamicMesh3::FindEdge((this->Region).BaseMesh,uVar7,uVar8);
                if (iVar11 != -1) {
                  if (((local_90.Data <= (FScriptContainerElement *)local_98) &&
                      ((FScriptContainerElement *)local_98 <
                       local_90.Data + (longlong)local_88._4_4_ * 4)) &&
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
                  iVar11 = (int)local_88;
                  if ((int)local_88 == local_88._4_4_) {
                    iVar11 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_90,(int *)((longlong)&local_88 + 4));
                  }
                  local_88 = CONCAT44(local_88._4_4_,iVar11 + 1);
                  *(uint *)(local_90.Data + (longlong)iVar11 * 4) = local_98[0];
                }
              }
            }
          }
          uVar12 = local_88 & 0xffffffff;
          uVar7 = local_98[0];
        }
      }
      local_98[0] = uVar7 + 1;
      uVar9 = (ulonglong)local_98[0];
    } while ((int)local_98[0] < iVar13);
  }
  uVar9 = 0;
  if (0 < (int)uVar12) {
    pFVar3 = &(this->Region).Submesh;
    uVar14 = (undefined4)__real_3fe0000000000000;
    uVar10 = uVar9;
    do {
      uVar8 = (uint)uVar9;
      local_74 = 0xffffffffffffffff;
      local_6c = 0xffffffffffffffff;
      pcVar5 = *(code **)(pFVar3->_padding_ + 0x30);
      uVar7 = 0;
      if ((int)uVar8 < (int)uVar12) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      local_64 = 0xffffffffffffffff;
      local_54 = 0xffffffffffffffff;
      local_4c = 0xffffffffffffffff;
      local_44 = 0xffffffff;
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
      (*pcVar5)(pFVar3,*(undefined4 *)(local_90.Data + uVar10),local_78,uVar14);
      uVar12 = local_88 & 0xffffffff;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 4;
    } while ((int)(uVar8 + 1) < (int)local_88);
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return;
}

