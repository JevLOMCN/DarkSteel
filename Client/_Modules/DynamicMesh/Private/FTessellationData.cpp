// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 12

// FTessellationData @ 14c7b49f0

FTessellationData * __thiscall
SelectiveTessellateLocals::FTessellationData::FTessellationData
          (FTessellationData *this,FDynamicMesh3 *param_1)

{
  this->_padding_ = (longlong)&___7FTessellationData_SelectiveTessellateLocals__6B_;
  *(undefined8 *)&(this->EdgesToTessellate).Elements = 0;
  *(undefined8 *)&(this->EdgesToTessellate).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EdgesToTessellate).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EdgesToTessellate).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EdgesToTessellate).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EdgesToTessellate).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->EdgesToTessellate).Elements.field_0x30 = 0xffffffff;
  (this->EdgesToTessellate).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EdgesToTessellate).HashSize = 0;
  *(undefined8 *)&(this->TrianglesToTessellate).Elements = 0;
  *(undefined8 *)&(this->TrianglesToTessellate).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TrianglesToTessellate).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TrianglesToTessellate).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TrianglesToTessellate).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TrianglesToTessellate).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TrianglesToTessellate).Elements.field_0x30 = 0xffffffff;
  (this->TrianglesToTessellate).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TrianglesToTessellate).HashSize = 0;
  (this->EdgeIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeIDs).ArrayNum = 0;
  (this->EdgeIDs).ArrayMax = 0;
  *(undefined8 *)&this->EdgeIDOffsets = 0;
  *(undefined8 *)&(this->EdgeIDOffsets).field_0x8 = 0;
  *(undefined8 *)&(this->EdgeIDOffsets).field_0x20 = 0;
  *(undefined4 *)&(this->EdgeIDOffsets).field_0x28 = 0;
  *(undefined4 *)&(this->EdgeIDOffsets).field_0x2c = 0x80;
  *(undefined4 *)&(this->EdgeIDOffsets).field_0x34 = 0;
  *(undefined4 *)&(this->EdgeIDOffsets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EdgeIDOffsets).field_0x40 = 0;
  *(undefined4 *)&(this->EdgeIDOffsets).field_0x48 = 0;
  (this->EdgeCoord).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeCoord).ArrayNum = 0;
  (this->EdgeCoord).ArrayMax = 0;
  *(undefined8 *)&this->EdgeCoordOffsets = 0;
  *(undefined8 *)&(this->EdgeCoordOffsets).field_0x8 = 0;
  *(undefined8 *)&(this->EdgeCoordOffsets).field_0x20 = 0;
  *(undefined4 *)&(this->EdgeCoordOffsets).field_0x28 = 0;
  *(undefined4 *)&(this->EdgeCoordOffsets).field_0x2c = 0x80;
  *(undefined4 *)&(this->EdgeCoordOffsets).field_0x34 = 0;
  *(undefined4 *)&(this->EdgeCoordOffsets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EdgeCoordOffsets).field_0x40 = 0;
  *(undefined4 *)&(this->EdgeCoordOffsets).field_0x48 = 0;
  (this->InnerIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InnerIDs).ArrayNum = 0;
  (this->InnerIDs).ArrayMax = 0;
  (this->InnerCoord).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InnerCoord).ArrayNum = 0;
  (this->InnerCoord).ArrayMax = 0;
  *(undefined8 *)&this->InnerOffsets = 0;
  *(undefined8 *)&(this->InnerOffsets).field_0x8 = 0;
  *(undefined8 *)&(this->InnerOffsets).field_0x20 = 0;
  *(undefined4 *)&(this->InnerOffsets).field_0x28 = 0;
  *(undefined4 *)&(this->InnerOffsets).field_0x2c = 0x80;
  *(undefined4 *)&(this->InnerOffsets).field_0x34 = 0;
  *(undefined4 *)&(this->InnerOffsets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->InnerOffsets).field_0x40 = 0;
  *(undefined4 *)&(this->InnerOffsets).field_0x48 = 0;
  (this->TriangleIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleIDs).ArrayNum = 0;
  (this->TriangleIDs).ArrayMax = 0;
  (this->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles).ArrayNum = 0;
  (this->Triangles).ArrayMax = 0;
  *(undefined8 *)&this->TrianglesOffsets = 0;
  *(undefined8 *)&(this->TrianglesOffsets).field_0x8 = 0;
  *(undefined8 *)&(this->TrianglesOffsets).field_0x20 = 0;
  *(undefined4 *)&(this->TrianglesOffsets).field_0x28 = 0;
  *(undefined4 *)&(this->TrianglesOffsets).field_0x2c = 0x80;
  *(undefined4 *)&(this->TrianglesOffsets).field_0x34 = 0;
  *(undefined4 *)&(this->TrianglesOffsets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TrianglesOffsets).field_0x40 = 0;
  *(undefined4 *)&(this->TrianglesOffsets).field_0x48 = 0;
  this->MaxID = -1;
  this->Mesh = param_1;
  this->MaxID = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  return this;
}

// ~FTessellationData @ 14c7b7a20

void __thiscall
SelectiveTessellateLocals::FTessellationData::~FTessellationData(FTessellationData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  
  this->_padding_ = (longlong)&___7FTessellationData_SelectiveTessellateLocals__6B_;
  *(undefined4 *)&(this->TrianglesOffsets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TrianglesOffsets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TrianglesOffsets);
  pFVar2 = (this->Triangles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TriangleIDs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->InnerOffsets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InnerOffsets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InnerOffsets);
  pFVar2 = (this->InnerCoord).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InnerIDs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->EdgeCoordOffsets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EdgeCoordOffsets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EdgeCoordOffsets);
  pFVar2 = (this->EdgeCoord).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->EdgeIDOffsets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EdgeIDOffsets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EdgeIDOffsets);
  pFVar2 = (this->EdgeIDs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->TrianglesToTessellate).HashSize = 0;
  FVar3 = (this->TrianglesToTessellate).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TrianglesToTessellate).Elements);
  (this->EdgesToTessellate).HashSize = 0;
  FVar3 = (this->EdgesToTessellate).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EdgesToTessellate).Elements);
  return;
}

// InitEdgeVertexBuffers @ 14c8140f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
SelectiveTessellateLocals::FTessellationData::InitEdgeVertexBuffers
          (FTessellationData *this,FTessellationPattern *param_1)

{
  FDynamicMesh3 *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int local_res8 [2];
  int local_res18 [4];
  TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&> local_78;
  undefined4 local_68;
  int local_64;
  int local_60;
  int *local_58;
  undefined1 *local_50;
  undefined4 *local_48;
  int *local_40;
  
  pFVar1 = this->Mesh;
  iVar11 = 0;
  uVar8 = 0;
  uVar9 = (pFVar1->EdgeRefCounts).RefCounts.CurBlockUsed +
          (pFVar1->EdgeRefCounts).RefCounts.CurBlock * 0x200;
  if (((uVar9 != 0) &&
      (pFVar2 = (pFVar1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
      0xfffd < (ushort)(**(short **)pFVar2 - 1U))) && (uVar8 = 1, 1 < (int)uVar9)) {
    do {
      lVar4 = (ulonglong)((uint)uVar8 & 0x1ff) * 2;
      lVar10 = *(longlong *)(pFVar2 + (uVar8 >> 9) * 8);
      if ((*(short *)(lVar4 + lVar10) != 0) && (*(short *)(lVar4 + lVar10) != -1)) break;
      uVar7 = (uint)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < (int)uVar9);
  }
  uVar7 = (uint)uVar8;
joined_r0x00014c81419b:
  do {
    if (uVar7 == uVar9) {
      TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->EdgeIDs,iVar11,Default);
      uVar9 = 0;
      if (0 < (this->EdgeIDs).ArrayNum) {
        lVar10 = 0;
        do {
          iVar6 = this->MaxID + uVar9;
          uVar7 = 0;
          if ((int)uVar9 < (this->EdgeIDs).ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar9 = uVar9 + 1;
          *(int *)((this->EdgeIDs).AllocatorInstance.Data + lVar10) = iVar6;
          lVar10 = lVar10 + 4;
        } while ((int)uVar9 < (this->EdgeIDs).ArrayNum);
      }
      TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&this->EdgeCoord,iVar11,Default);
      return;
    }
    while( true ) {
      local_res8[0] = (int)uVar8;
      iVar6 = (**(code **)(param_1->_padding_ + 0x10))(param_1,uVar8);
      if (0 < iVar6) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&this->EdgesToTessellate,local_res18,(bool *)local_res8);
        local_58 = local_res8;
        local_50 = (undefined1 *)((longlong)&local_78.Key + 4);
        local_78.Key._4_4_ = iVar11;
        local_78.Value._0_4_ = iVar6;
        TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FIndex2i_&&>_>
                  ((TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                    *)&this->EdgeCoordOffsets,
                   (TPairInitializer<int_const_&,UE::Geometry::FIndex2i_&&> *)(local_res18 + 2),
                   (bool *)&local_58);
        local_78.Value._4_4_ = local_res8[0];
        local_48 = (undefined4 *)((longlong)&local_78.Value + 4);
        local_40 = &local_64;
        local_68 = 0xffffffff;
        local_64 = iVar11;
        local_60 = iVar6;
        TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_&&,UE::Geometry::FIndex2i_&&>_>
                  ((TSet<TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                    *)&this->EdgeIDOffsets,&local_78,(bool *)&local_48);
        iVar11 = iVar11 + iVar6;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar9 <= (int)uVar7) break;
      pFVar2 = (pFVar1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar10 = (uVar8 >> 9) * 8;
        lVar4 = (ulonglong)((uint)uVar8 & 0x1ff) * 2;
        if ((*(short *)(lVar4 + *(longlong *)(pFVar2 + lVar10)) != 0) &&
           (*(short *)(lVar4 + *(longlong *)(pFVar2 + lVar10)) != -1)) break;
        uVar7 = (uint)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        if ((int)uVar9 <= (int)uVar7) goto joined_r0x00014c81419b;
      }
    }
  } while( true );
}

// InitTriVertexBuffers @ 14c814380

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
SelectiveTessellateLocals::FTessellationData::InitTriVertexBuffers
          (FTessellationData *this,FTessellationPattern *param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int local_res8 [2];
  TPairInitializer<int_const_&,UE::Geometry::FIndex2i_&&> local_res18;
  int *local_38;
  FIndex2i **local_30;
  
  iVar7 = 0;
  local_res8[0] = 0;
  if (0 < (int)((this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed)) {
    do {
      cVar3 = (**(code **)(this->_padding_ + 0x20))(this);
      if ((cVar3 != '\0') &&
         (iVar5 = (**(code **)(param_1->_padding_ + 0x18))(param_1,local_res8[0]), 0 < iVar5)) {
        local_38 = local_res8;
        local_30 = &local_res18.Value;
        local_res18.Value._0_4_ = iVar7;
        local_res18.Value._4_4_ = iVar5;
        TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FIndex2i_&&>_>
                  ((TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                    *)&this->InnerOffsets,&local_res18,(bool *)&local_38);
        iVar7 = iVar7 + iVar5;
      }
      local_res8[0] = local_res8[0] + 1;
    } while (local_res8[0] <
             (int)((this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed));
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->InnerIDs,iVar7,Default);
  iVar5 = (this->EdgeIDs).ArrayNum;
  if (iVar5 < 1) {
    iVar5 = this->MaxID;
  }
  else {
    uVar8 = 0;
    if ((int)(iVar5 - 1U) < iVar5) {
      uVar8 = ~(iVar5 - 1U) >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = *(int *)((this->EdgeIDs).AllocatorInstance.Data +
                    (longlong)(this->EdgeIDs).ArrayNum * 4 + -4) + 1;
  }
  uVar8 = 0;
  if (0 < (this->InnerIDs).ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->InnerIDs).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = uVar8 + iVar5;
      uVar8 = uVar8 + 1;
      *(int *)((this->InnerIDs).AllocatorInstance.Data + lVar9) = iVar1;
      lVar9 = lVar9 + 4;
    } while ((int)uVar8 < (this->InnerIDs).ArrayNum);
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->InnerCoord,iVar7,Default);
  return;
}

// InitTrianglesBuffers @ 14c814570

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
SelectiveTessellateLocals::FTessellationData::InitTrianglesBuffers
          (FTessellationData *this,FTessellationPattern *param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int local_res8 [2];
  int local_res18 [4];
  int local_48;
  int local_44;
  int *local_40;
  int *local_38;
  
  local_res8[0] = 0;
  iVar8 = 0;
  if (0 < (int)((this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed)) {
    do {
      cVar4 = (**(code **)(this->_padding_ + 0x20))(this);
      if ((cVar4 != '\0') &&
         (iVar6 = (**(code **)(param_1->_padding_ + 0x20))(param_1,local_res8[0]), 0 < iVar6)) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&this->TrianglesToTessellate,local_res18,(bool *)local_res8);
        local_40 = local_res8;
        local_38 = &local_48;
        local_48 = iVar8;
        local_44 = iVar6;
        TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FIndex2i_&&>_>
                  ((TSet<TTuple<int,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
                    *)&this->TrianglesOffsets,
                   (TPairInitializer<int_const_&,UE::Geometry::FIndex2i_&&> *)(local_res18 + 2),
                   (bool *)&local_40);
        iVar8 = iVar8 + iVar6;
      }
      local_res8[0] = local_res8[0] + 1;
    } while (local_res8[0] <
             (int)((this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed));
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->TriangleIDs,iVar8,Default);
  uVar9 = 0;
  if (0 < (this->TriangleIDs).ArrayNum) {
    lVar10 = 0;
    do {
      uVar1 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlock;
      uVar2 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed;
      uVar7 = 0;
      if ((int)uVar9 < (this->TriangleIDs).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = uVar1 * 0x200 + uVar2 + uVar9;
      uVar9 = uVar9 + 1;
      *(int *)((this->TriangleIDs).AllocatorInstance.Data + lVar10) = iVar6;
      lVar10 = lVar10 + 4;
    } while ((int)uVar9 < (this->TriangleIDs).ArrayNum);
  }
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum(&this->Triangles,iVar8,Default)
  ;
  return;
}

// IsValidTriangle @ 14c819130

bool __thiscall
SelectiveTessellateLocals::FTessellationData::IsValidTriangle(FTessellationData *this,int param_1)

{
  FDynamicMesh3 *pFVar1;
  
  pFVar1 = this->Mesh;
  if (((-1 < param_1) &&
      (param_1 < (int)((pFVar1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                      (pFVar1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((pFVar1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// MapEdgeCoordBufferBlock @ 14c81aad0

TArrayView<double,int> * __thiscall
SelectiveTessellateLocals::FTessellationData::MapEdgeCoordBufferBlock
          (FTessellationData *this,TArrayView<double,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FIndex2i FVar3;
  code *pcVar4;
  bool bVar5;
  TArrayView<double,int> *pTVar6;
  FIndex2i_u_0 *pFVar7;
  int iVar8;
  
  iVar1 = (this->EdgeCoord).ArrayNum;
  pFVar2 = (this->EdgeCoord).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArrayView<double,int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  pFVar7 = &TMapBase<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
            ::FindChecked((TMapBase<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
                           *)&this->EdgeCoordOffsets,param_1)->field0_0x0;
  FVar3.field0_0x0 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar7->_s_0;
  iVar8 = FVar3.field0_0x0._0_4_;
  if (iVar8 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15b,L"Invalid index (%lld)");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArrayView<double,int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  if ((longlong)FVar3.field0_0x0 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15c,L"Invalid count (%lld)");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArrayView<double,int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  if (iVar1 < iVar8 + FVar3.field0_0x0._4_4_) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index + InNum <= ArrayNum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15d,
                       L"Range (index: %lld, count: %lld) lies outside the view of %lld elements");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArrayView<double,int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->ArrayNum = FVar3.field0_0x0._4_4_;
  __return_storage_ptr__->DataPtr = (double *)(pFVar2 + (longlong)iVar8 * 8);
  if ((longlong)FVar3.field0_0x0 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArrayView<double,int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// MapEdgeIDBufferBlock @ 14c81ac50

TArrayView<int,int> * __thiscall
SelectiveTessellateLocals::FTessellationData::MapEdgeIDBufferBlock
          (FTessellationData *this,TArrayView<int,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<int,int> *pTVar4;
  FIndex2i_u_0 *pFVar5;
  FIndex2i_u_0 local_res8;
  TArrayView<int,int> local_18;
  
  local_18.DataPtr = (int *)(this->EdgeIDs).AllocatorInstance.Data;
  iVar1 = (this->EdgeIDs).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<int,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  local_res8._s_0.B = -1;
  local_res8._s_0.A = param_1;
  local_18.ArrayNum = iVar1;
  pFVar5 = &TMapBase<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>_>
            ::FindChecked((TMapBase<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>_>
                           *)&this->EdgeIDOffsets,(FIndex2i *)&local_res8._s_0)->field0_0x0;
  TArrayView<int,int>::Slice
            (&local_18,__return_storage_ptr__,(*(FIndex2i_u_0 *)&pFVar5->_s_0).A,
             (*(FIndex2i_u_0 *)&pFVar5->_s_0).B);
  return __return_storage_ptr__;
}

// MapEdgeIDBufferBlock @ 14c81ad00

TArrayView<int,int> * __thiscall
SelectiveTessellateLocals::FTessellationData::MapEdgeIDBufferBlock
          (FTessellationData *this,TArrayView<int,int> *__return_storage_ptr__,int param_1,
          int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<int,int> *pTVar4;
  FIndex2i_u_0 *pFVar5;
  FIndex2i_u_0 local_res8;
  TArrayView<int,int> local_28;
  
  local_28.DataPtr = (int *)(this->EdgeIDs).AllocatorInstance.Data;
  iVar1 = (this->EdgeIDs).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<int,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  local_res8._s_0.A = param_1;
  local_res8._s_0.B = param_2;
  local_28.ArrayNum = iVar1;
  pFVar5 = &TMapBase<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>_>
            ::FindChecked((TMapBase<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>_>
                           *)&this->EdgeIDOffsets,(FIndex2i *)&local_res8._s_0)->field0_0x0;
  TArrayView<int,int>::Slice
            (&local_28,__return_storage_ptr__,(*(FIndex2i_u_0 *)&pFVar5->_s_0).A,
             (*(FIndex2i_u_0 *)&pFVar5->_s_0).B);
  return __return_storage_ptr__;
}

// MapInnerCoordBufferBlock @ 14c81adb0

TArrayView<UE::Math::TVector<double>,int> * __thiscall
SelectiveTessellateLocals::FTessellationData::MapInnerCoordBufferBlock
          (FTessellationData *this,TArrayView<UE::Math::TVector<double>,int> *__return_storage_ptr__
          ,int param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FIndex2i FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArrayView<UE::Math::TVector<double>,int> *pTVar7;
  FIndex2i_u_0 *pFVar8;
  int iVar9;
  undefined1 *puVar10;
  
  if (*(int *)&(this->InnerOffsets).field_0x8 != *(int *)&(this->InnerOffsets).field_0x34) {
    puVar10 = *(undefined1 **)&(this->InnerOffsets).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->InnerOffsets).field_0x38;
    }
    iVar6 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->InnerOffsets).field_0x48 - 1U & param_1) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&this->InnerOffsets;
      do {
        if (*(int *)(lVar1 + (longlong)iVar6 * 0x14) == param_1) {
          iVar6 = (this->InnerCoord).ArrayNum;
          pFVar2 = (this->InnerCoord).AllocatorInstance.Data;
          if ((iVar6 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArrayView<UE::Math::TVector<double>,int> *)(*pcVar4)();
            return pTVar7;
          }
          pFVar8 = &TMapBase<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
                    ::FindChecked((TMapBase<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
                                   *)&this->InnerOffsets,param_1)->field0_0x0;
          FVar3.field0_0x0 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar8->_s_0;
          iVar9 = FVar3.field0_0x0._0_4_;
          if ((iVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x15b,L"Invalid index (%lld)"), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArrayView<UE::Math::TVector<double>,int> *)(*pcVar4)();
            return pTVar7;
          }
          if (((longlong)FVar3.field0_0x0 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x15c,L"Invalid count (%lld)"), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArrayView<UE::Math::TVector<double>,int> *)(*pcVar4)();
            return pTVar7;
          }
          if ((iVar6 < iVar9 + FVar3.field0_0x0._4_4_) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index + InNum <= ArrayNum",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x15d,
                                 L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArrayView<UE::Math::TVector<double>,int> *)(*pcVar4)();
            return pTVar7;
          }
          __return_storage_ptr__->ArrayNum = FVar3.field0_0x0._4_4_;
          __return_storage_ptr__->DataPtr = (TVector<double> *)(pFVar2 + (longlong)iVar9 * 0x18);
          if (-1 < (longlong)FVar3.field0_0x0) {
            return __return_storage_ptr__;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L"");
          if (!bVar5) {
            return __return_storage_ptr__;
          }
          pcVar4 = (code *)swi(3);
          pTVar7 = (TArrayView<UE::Math::TVector<double>,int> *)(*pcVar4)();
          return pTVar7;
        }
        iVar6 = *(int *)(lVar1 + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  __return_storage_ptr__->DataPtr = (TVector<double> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// MapInnerIDBufferBlock @ 14c81afa0

TArrayView<int,int> * __thiscall
SelectiveTessellateLocals::FTessellationData::MapInnerIDBufferBlock
          (FTessellationData *this,TArrayView<int,int> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<int,int> *pTVar5;
  FIndex2i_u_0 *pFVar6;
  undefined1 *puVar7;
  TArrayView<int,int> local_18;
  
  if (*(int *)&(this->InnerOffsets).field_0x8 != *(int *)&(this->InnerOffsets).field_0x34) {
    puVar7 = *(undefined1 **)&(this->InnerOffsets).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->InnerOffsets).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->InnerOffsets).field_0x48 - 1U & param_1) *
                              4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->InnerOffsets;
      do {
        if (*(int *)(lVar1 + (longlong)iVar4 * 0x14) == param_1) {
          local_18.DataPtr = (int *)(this->InnerIDs).AllocatorInstance.Data;
          iVar4 = (this->InnerIDs).ArrayNum;
          if (iVar4 < 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pTVar5 = (TArrayView<int,int> *)(*pcVar2)();
              return pTVar5;
            }
          }
          local_18.ArrayNum = iVar4;
          pFVar6 = &TMapBase<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
                    ::FindChecked((TMapBase<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
                                   *)&this->InnerOffsets,param_1)->field0_0x0;
          TArrayView<int,int>::Slice
                    (&local_18,__return_storage_ptr__,(*(FIndex2i_u_0 *)&pFVar6->_s_0).A,
                     (*(FIndex2i_u_0 *)&pFVar6->_s_0).B);
          return __return_storage_ptr__;
        }
        iVar4 = *(int *)(lVar1 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  __return_storage_ptr__->DataPtr = (int *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// MapTrianglesBufferBlock @ 14c81b0b0

TArrayView<UE::Geometry::FIndex3i,int> * __thiscall
SelectiveTessellateLocals::FTessellationData::MapTrianglesBufferBlock
          (FTessellationData *this,TArrayView<UE::Geometry::FIndex3i,int> *__return_storage_ptr__,
          int param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FIndex2i FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArrayView<UE::Geometry::FIndex3i,int> *pTVar7;
  FIndex2i_u_0 *pFVar8;
  int iVar9;
  undefined1 *puVar10;
  
  if (*(int *)&(this->TrianglesOffsets).field_0x8 != *(int *)&(this->TrianglesOffsets).field_0x34) {
    puVar10 = *(undefined1 **)&(this->TrianglesOffsets).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->TrianglesOffsets).field_0x38;
    }
    iVar6 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->TrianglesOffsets).field_0x48 - 1U & param_1) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&this->TrianglesOffsets;
      do {
        if (*(int *)(lVar1 + (longlong)iVar6 * 0x14) == param_1) {
          iVar6 = (this->Triangles).ArrayNum;
          pFVar2 = (this->Triangles).AllocatorInstance.Data;
          if ((iVar6 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArrayView<UE::Geometry::FIndex3i,int> *)(*pcVar4)();
            return pTVar7;
          }
          pFVar8 = &TMapBase<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
                    ::FindChecked((TMapBase<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
                                   *)&this->TrianglesOffsets,param_1)->field0_0x0;
          FVar3.field0_0x0 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar8->_s_0;
          iVar9 = FVar3.field0_0x0._0_4_;
          if ((iVar9 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x15b,L"Invalid index (%lld)"), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArrayView<UE::Geometry::FIndex3i,int> *)(*pcVar4)();
            return pTVar7;
          }
          if (((longlong)FVar3.field0_0x0 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x15c,L"Invalid count (%lld)"), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArrayView<UE::Geometry::FIndex3i,int> *)(*pcVar4)();
            return pTVar7;
          }
          if ((iVar6 < iVar9 + FVar3.field0_0x0._4_4_) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index + InNum <= ArrayNum",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x15d,
                                 L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArrayView<UE::Geometry::FIndex3i,int> *)(*pcVar4)();
            return pTVar7;
          }
          __return_storage_ptr__->ArrayNum = FVar3.field0_0x0._4_4_;
          __return_storage_ptr__->DataPtr = (FIndex3i *)(pFVar2 + (longlong)iVar9 * 0xc);
          if (-1 < (longlong)FVar3.field0_0x0) {
            return __return_storage_ptr__;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L"");
          if (!bVar5) {
            return __return_storage_ptr__;
          }
          pcVar4 = (code *)swi(3);
          pTVar7 = (TArrayView<UE::Geometry::FIndex3i,int> *)(*pcVar4)();
          return pTVar7;
        }
        iVar6 = *(int *)(lVar1 + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  __return_storage_ptr__->DataPtr = (FIndex3i *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

