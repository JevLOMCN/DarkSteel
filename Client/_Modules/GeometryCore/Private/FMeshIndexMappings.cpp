// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 11

// FMeshIndexMappings @ 1433671e0

FMeshIndexMappings * __thiscall
UE::Geometry::FMeshIndexMappings::FMeshIndexMappings(FMeshIndexMappings *this)

{
  *(undefined8 *)&(this->VertexMap).ForwardMap = 0;
  *(undefined8 *)&(this->VertexMap).ForwardMap.field_0x8 = 0;
  *(undefined8 *)&(this->VertexMap).ForwardMap.field_0x20 = 0;
  *(undefined4 *)&(this->VertexMap).ForwardMap.field_0x28 = 0;
  *(undefined4 *)&(this->VertexMap).ForwardMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->VertexMap).ForwardMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VertexMap).ForwardMap.field_0x34 = 0;
  *(undefined8 *)&(this->VertexMap).ForwardMap.field_0x40 = 0;
  *(undefined4 *)&(this->VertexMap).ForwardMap.field_0x48 = 0;
  *(undefined8 *)&(this->VertexMap).ReverseMap = 0;
  *(undefined8 *)&(this->VertexMap).ReverseMap.field_0x8 = 0;
  *(undefined8 *)&(this->VertexMap).ReverseMap.field_0x20 = 0;
  *(undefined4 *)&(this->VertexMap).ReverseMap.field_0x28 = 0;
  *(undefined4 *)&(this->VertexMap).ReverseMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->VertexMap).ReverseMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VertexMap).ReverseMap.field_0x34 = 0;
  *(undefined8 *)&(this->VertexMap).ReverseMap.field_0x40 = 0;
  *(undefined4 *)&(this->VertexMap).ReverseMap.field_0x48 = 0;
  (this->VertexMap).bWantForward = true;
  (this->VertexMap).bWantReverse = true;
  *(undefined8 *)&(this->TriangleMap).ForwardMap = 0;
  *(undefined8 *)&(this->TriangleMap).ForwardMap.field_0x8 = 0;
  *(undefined8 *)&(this->TriangleMap).ForwardMap.field_0x20 = 0;
  *(undefined4 *)&(this->TriangleMap).ForwardMap.field_0x28 = 0;
  *(undefined4 *)&(this->TriangleMap).ForwardMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->TriangleMap).ForwardMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TriangleMap).ForwardMap.field_0x34 = 0;
  *(undefined8 *)&(this->TriangleMap).ForwardMap.field_0x40 = 0;
  *(undefined4 *)&(this->TriangleMap).ForwardMap.field_0x48 = 0;
  *(undefined8 *)&(this->TriangleMap).ReverseMap = 0;
  *(undefined8 *)&(this->TriangleMap).ReverseMap.field_0x8 = 0;
  *(undefined8 *)&(this->TriangleMap).ReverseMap.field_0x20 = 0;
  *(undefined4 *)&(this->TriangleMap).ReverseMap.field_0x28 = 0;
  *(undefined4 *)&(this->TriangleMap).ReverseMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->TriangleMap).ReverseMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TriangleMap).ReverseMap.field_0x34 = 0;
  *(undefined8 *)&(this->TriangleMap).ReverseMap.field_0x40 = 0;
  *(undefined4 *)&(this->TriangleMap).ReverseMap.field_0x48 = 0;
  (this->TriangleMap).bWantForward = true;
  (this->TriangleMap).bWantReverse = true;
  *(undefined8 *)&(this->GroupMap).ForwardMap = 0;
  *(undefined8 *)&(this->GroupMap).ForwardMap.field_0x8 = 0;
  *(undefined8 *)&(this->GroupMap).ForwardMap.field_0x20 = 0;
  *(undefined4 *)&(this->GroupMap).ForwardMap.field_0x28 = 0;
  *(undefined4 *)&(this->GroupMap).ForwardMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->GroupMap).ForwardMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GroupMap).ForwardMap.field_0x34 = 0;
  *(undefined8 *)&(this->GroupMap).ForwardMap.field_0x40 = 0;
  *(undefined4 *)&(this->GroupMap).ForwardMap.field_0x48 = 0;
  *(undefined8 *)&(this->GroupMap).ReverseMap = 0;
  *(undefined8 *)&(this->GroupMap).ReverseMap.field_0x8 = 0;
  *(undefined8 *)&(this->GroupMap).ReverseMap.field_0x20 = 0;
  *(undefined4 *)&(this->GroupMap).ReverseMap.field_0x28 = 0;
  *(undefined4 *)&(this->GroupMap).ReverseMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->GroupMap).ReverseMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GroupMap).ReverseMap.field_0x34 = 0;
  *(undefined8 *)&(this->GroupMap).ReverseMap.field_0x40 = 0;
  *(undefined4 *)&(this->GroupMap).ReverseMap.field_0x48 = 0;
  (this->GroupMap).bWantForward = true;
  (this->GroupMap).bWantReverse = true;
  *(undefined8 *)&(this->ColorMap).ForwardMap = 0;
  *(undefined8 *)&(this->ColorMap).ForwardMap.field_0x8 = 0;
  *(undefined8 *)&(this->ColorMap).ForwardMap.field_0x20 = 0;
  *(undefined4 *)&(this->ColorMap).ForwardMap.field_0x28 = 0;
  *(undefined4 *)&(this->ColorMap).ForwardMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->ColorMap).ForwardMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ColorMap).ForwardMap.field_0x34 = 0;
  *(undefined8 *)&(this->ColorMap).ForwardMap.field_0x40 = 0;
  *(undefined4 *)&(this->ColorMap).ForwardMap.field_0x48 = 0;
  *(undefined8 *)&(this->ColorMap).ReverseMap = 0;
  *(undefined8 *)&(this->ColorMap).ReverseMap.field_0x8 = 0;
  *(undefined8 *)&(this->ColorMap).ReverseMap.field_0x20 = 0;
  *(undefined4 *)&(this->ColorMap).ReverseMap.field_0x28 = 0;
  *(undefined4 *)&(this->ColorMap).ReverseMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->ColorMap).ReverseMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ColorMap).ReverseMap.field_0x34 = 0;
  *(undefined8 *)&(this->ColorMap).ReverseMap.field_0x40 = 0;
  *(undefined4 *)&(this->ColorMap).ReverseMap.field_0x48 = 0;
  (this->ColorMap).bWantForward = true;
  (this->ColorMap).bWantReverse = true;
  (this->UVMaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVMaps).ArrayNum = 0;
  (this->UVMaps).ArrayMax = 0;
  (this->NormalMaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalMaps).ArrayNum = 0;
  (this->NormalMaps).ArrayMax = 0;
  return this;
}

// GetNewNormal @ 1433a90a0

int __thiscall
UE::Geometry::FMeshIndexMappings::GetNewNormal(FMeshIndexMappings *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->NormalMaps).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
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
  iVar4 = TIndexMap<int>::GetTo
                    ((TIndexMap<int> *)
                     ((this->NormalMaps).AllocatorInstance.Data + (longlong)param_1 * 0xa8),param_2)
  ;
  return iVar4;
}

// GetNewUV @ 1433a9130

int __thiscall
UE::Geometry::FMeshIndexMappings::GetNewUV(FMeshIndexMappings *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->UVMaps).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
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
  iVar4 = TIndexMap<int>::GetTo
                    ((TIndexMap<int> *)
                     ((this->UVMaps).AllocatorInstance.Data + (longlong)param_1 * 0xa8),param_2);
  return iVar4;
}

// Reset @ 1433c58e0

void __thiscall UE::Geometry::FMeshIndexMappings::Reset(FMeshIndexMappings *this)

{
  int iVar1;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *pTVar2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *pTVar3;
  undefined1 local_res8 [8];
  
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             this);
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &(this->VertexMap).ReverseMap);
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->TriangleMap);
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &(this->TriangleMap).ReverseMap);
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->GroupMap);
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &(this->GroupMap).ReverseMap);
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->ColorMap);
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &(this->ColorMap).ReverseMap);
  iVar1 = (this->UVMaps).ArrayNum;
  pTVar2 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
           (this->UVMaps).AllocatorInstance.Data;
  pTVar3 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
           ((longlong)pTVar2 + (longlong)iVar1 * 0xa8);
  while( true ) {
    if ((this->UVMaps).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Geometry::TIndexMap<int>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pTVar2 == pTVar3) break;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset(pTVar2)
    ;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
              (pTVar2 + 1);
    pTVar2 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &pTVar2[2].Elements.field_0x8;
  }
  iVar1 = (this->NormalMaps).ArrayNum;
  pTVar2 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
           (this->NormalMaps).AllocatorInstance.Data;
  pTVar3 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
           ((longlong)pTVar2 + (longlong)iVar1 * 0xa8);
  while( true ) {
    if ((this->NormalMaps).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Geometry::TIndexMap<int>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pTVar2 == pTVar3) break;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset(pTVar2)
    ;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
              (pTVar2 + 1);
    pTVar2 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &pTVar2[2].Elements.field_0x8;
  }
  return;
}

// SetColor @ 1433c76c0

void __thiscall
UE::Geometry::FMeshIndexMappings::SetColor(FMeshIndexMappings *this,int param_1,int param_2)

{
  TPairInitializer<int_const_&,int_const_&> local_res8;
  int local_res18 [4];
  int **local_18;
  int **local_10;
  
  local_18 = (int **)local_res18;
  local_10 = &local_res8.Value;
  local_res8.Value._0_4_ = param_2;
  local_res18[0] = param_1;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->ColorMap,&local_res8,(bool *)&local_18);
  local_18 = &local_res8.Value;
  local_10 = (int **)local_res18;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &(this->ColorMap).ReverseMap,&local_res8,(bool *)&local_18);
  return;
}

// SetGroup @ 1433c98d0

void __thiscall
UE::Geometry::FMeshIndexMappings::SetGroup(FMeshIndexMappings *this,int param_1,int param_2)

{
  TPairInitializer<int_const_&,int_const_&> local_res8;
  int local_res18 [4];
  int **local_18;
  int **local_10;
  
  local_18 = (int **)local_res18;
  local_10 = &local_res8.Value;
  local_res8.Value._0_4_ = param_2;
  local_res18[0] = param_1;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->GroupMap,&local_res8,(bool *)&local_18);
  local_18 = &local_res8.Value;
  local_10 = (int **)local_res18;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &(this->GroupMap).ReverseMap,&local_res8,(bool *)&local_18);
  return;
}

// SetNormal @ 1433c9940

void __thiscall
UE::Geometry::FMeshIndexMappings::SetNormal
          (FMeshIndexMappings *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *this_00;
  TPairInitializer<int_const_&,int_const_&> local_res8;
  int local_res18 [4];
  int *local_48;
  int **local_40;
  int **local_38;
  int *local_30;
  
  uVar3 = 0;
  if (param_1 < (this->NormalMaps).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48 = local_res18;
  local_40 = &local_res8.Value;
  this_00 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
            ((this->NormalMaps).AllocatorInstance.Data + (longlong)param_1 * 0xa8);
  local_res8.Value._0_4_ = param_3;
  local_res18[0] = param_2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            (this_00,(TPairInitializer<int_const_&,int_const_&> *)(local_res18 + 2),
             (bool *)&local_48);
  local_38 = &local_res8.Value;
  local_30 = local_res18;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>(this_00 + 1,&local_res8,(bool *)&local_38);
  return;
}

// SetUV @ 1433ce890

void __thiscall
UE::Geometry::FMeshIndexMappings::SetUV
          (FMeshIndexMappings *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *this_00;
  TPairInitializer<int_const_&,int_const_&> local_res8;
  int local_res18 [4];
  int *local_48;
  int **local_40;
  int **local_38;
  int *local_30;
  
  uVar3 = 0;
  if (param_1 < (this->UVMaps).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48 = local_res18;
  local_40 = &local_res8.Value;
  this_00 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
            ((this->UVMaps).AllocatorInstance.Data + (longlong)param_1 * 0xa8);
  local_res8.Value._0_4_ = param_3;
  local_res18[0] = param_2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            (this_00,(TPairInitializer<int_const_&,int_const_&> *)(local_res18 + 2),
             (bool *)&local_48);
  local_38 = &local_res8.Value;
  local_30 = local_res18;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>(this_00 + 1,&local_res8,(bool *)&local_38);
  return;
}

// SetVertex @ 1433ceaa0

void __thiscall
UE::Geometry::FMeshIndexMappings::SetVertex(FMeshIndexMappings *this,int param_1,int param_2)

{
  TPairInitializer<int_const_&,int_const_&> local_res8;
  int local_res18 [4];
  int **local_18;
  int **local_10;
  
  local_18 = (int **)local_res18;
  local_10 = &local_res8.Value;
  local_res8.Value._0_4_ = param_2;
  local_res18[0] = param_1;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             this,&local_res8,(bool *)&local_18);
  local_18 = &local_res8.Value;
  local_10 = (int **)local_res18;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &(this->VertexMap).ReverseMap,&local_res8,(bool *)&local_18);
  return;
}

// Initialize @ 1434d0160

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshIndexMappings::Initialize(FMeshIndexMappings *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  int iVar2;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    iVar2 = (**(code **)(pFVar1->_padding_ + 0xa8))(pFVar1);
    TArray<UE::Geometry::TIndexMap<int>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->UVMaps,iVar2,Default);
    iVar2 = (**(code **)(pFVar1->_padding_ + 0xb8))(pFVar1);
    TArray<UE::Geometry::TIndexMap<int>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->NormalMaps,iVar2,Default);
  }
  return;
}

// ~FMeshIndexMappings @ 143568f80

void __thiscall UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(FMeshIndexMappings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<UE::Geometry::TIndexMap<int>,int>
            ((TIndexMap<int> *)(this->NormalMaps).AllocatorInstance.Data,(this->NormalMaps).ArrayNum
            );
  pFVar1 = (this->NormalMaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::TIndexMap<int>,int>
            ((TIndexMap<int> *)(this->UVMaps).AllocatorInstance.Data,(this->UVMaps).ArrayNum);
  pFVar1 = (this->UVMaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ColorMap).ReverseMap.field_0x48 = 0;
  pvVar2 = *(void **)&(this->ColorMap).ReverseMap.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ColorMap).ReverseMap);
  *(undefined4 *)&(this->ColorMap).ForwardMap.field_0x48 = 0;
  pvVar2 = *(void **)&(this->ColorMap).ForwardMap.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColorMap);
  *(undefined4 *)&(this->GroupMap).ReverseMap.field_0x48 = 0;
  pvVar2 = *(void **)&(this->GroupMap).ReverseMap.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->GroupMap).ReverseMap);
  *(undefined4 *)&(this->GroupMap).ForwardMap.field_0x48 = 0;
  pvVar2 = *(void **)&(this->GroupMap).ForwardMap.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GroupMap);
  *(undefined4 *)&(this->TriangleMap).ReverseMap.field_0x48 = 0;
  pvVar2 = *(void **)&(this->TriangleMap).ReverseMap.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->TriangleMap).ReverseMap);
  *(undefined4 *)&(this->TriangleMap).ForwardMap.field_0x48 = 0;
  pvVar2 = *(void **)&(this->TriangleMap).ForwardMap.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TriangleMap);
  *(undefined4 *)&(this->VertexMap).ReverseMap.field_0x48 = 0;
  pvVar2 = *(void **)&(this->VertexMap).ReverseMap.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->VertexMap).ReverseMap);
  *(undefined4 *)&(this->VertexMap).ForwardMap.field_0x48 = 0;
  pvVar2 = *(void **)&(this->VertexMap).ForwardMap.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

