// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 14

// ~FGroupTopologyProvider @ 14cb64880

void __thiscall FGroupTopologyProvider::~FGroupTopologyProvider(FGroupTopologyProvider *this)

{
  return;
}

// FindGroupEdgeID @ 14cb8ce10

int __thiscall FGroupTopologyProvider::FindGroupEdgeID(FGroupTopologyProvider *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Geometry::FGroupTopology::FindGroupEdgeID(this->GroupTopology,param_1);
  return iVar1;
}

// ForGroupSetEdges @ 14cb91a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGroupTopologyProvider::ForGroupSetEdges
          (FGroupTopologyProvider *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          TFunction<void___cdecl(int)> *param_2)

{
  FGroupTopology *this_00;
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48._0_8_ = *(undefined8 *)param_2;
  this_00 = this->GroupTopology;
  local_20 = (longlong *)0x0;
  if (local_48._0_8_ != 0) {
    puVar1 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar1)(puVar1,local_48 + 0x10);
  }
  UE::Geometry::FGroupTopology::
  ForGroupSetEdges<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,_FGroupTopologyProvider::ForGroupSetEdges_::__l2::<lambda_1>_>
            (this_00,param_1,(<lambda_1> *)local_48);
  if (local_48._0_8_ != 0) {
    plVar2 = (longlong *)(local_48 + 0x10);
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// GetCornerVertexID @ 14cb95370

int __thiscall FGroupTopologyProvider::GetCornerVertexID(FGroupTopologyProvider *this,int param_1)

{
  FGroupTopology *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  pFVar1 = this->GroupTopology;
  uVar4 = 0;
  if (param_1 < (pFVar1->Corners).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  return *(int *)((pFVar1->Corners).AllocatorInstance.Data + (longlong)param_1 * 0x18);
}

// GetEdgePolyline @ 14cb96360

void __thiscall
FGroupTopologyProvider::GetEdgePolyline
          (FGroupTopologyProvider *this,int param_1,TPolyline<double,3> *param_2)

{
  FGroupTopology *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  pFVar1 = this->GroupTopology;
  uVar4 = 0;
  if (param_1 < (pFVar1->Edges).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
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
  UE::Geometry::FEdgeSpan::GetPolyline
            ((FEdgeSpan *)((pFVar1->Edges).AllocatorInstance.Data + (longlong)param_1 * 0x50 + 8),
             param_2);
  return;
}

// GetGroupEdgeEdges @ 14cb96a10

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FGroupTopologyProvider::GetGroupEdgeEdges(FGroupTopologyProvider *this,int param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = UE::Geometry::FGroupTopology::GetGroupEdgeEdges(this->GroupTopology,param_1);
  return pTVar1;
}

// GetGroupEdgeVertices @ 14cb971c0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FGroupTopologyProvider::GetGroupEdgeVertices(FGroupTopologyProvider *this,int param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = UE::Geometry::FGroupTopology::GetGroupEdgeVertices(this->GroupTopology,param_1);
  return pTVar1;
}

// GetGroupIDAt @ 14cb971f0

int __thiscall FGroupTopologyProvider::GetGroupIDAt(FGroupTopologyProvider *this,int param_1)

{
  FGroupTopology *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  pFVar1 = this->GroupTopology;
  uVar4 = 0;
  if (param_1 < (pFVar1->Groups).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  return *(int *)((pFVar1->Groups).AllocatorInstance.Data + (longlong)param_1 * 0x38);
}

// GetGroupIDForTriangle @ 14cb97290

int __thiscall
FGroupTopologyProvider::GetGroupIDForTriangle(FGroupTopologyProvider *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014cb97297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(this->GroupTopology->_padding_ + 0x18))();
  return iVar1;
}

// GetNumCorners @ 14cb98ba0

int __thiscall FGroupTopologyProvider::GetNumCorners(FGroupTopologyProvider *this)

{
  return (this->GroupTopology->Corners).ArrayNum;
}

// GetNumEdges @ 14cb98bd0

int __thiscall FGroupTopologyProvider::GetNumEdges(FGroupTopologyProvider *this)

{
  return (this->GroupTopology->Edges).ArrayNum;
}

// GetNumGroups @ 14cb98c00

int __thiscall FGroupTopologyProvider::GetNumGroups(FGroupTopologyProvider *this)

{
  return (this->GroupTopology->Groups).ArrayNum;
}

// GetSelectionBounds @ 14cb9ba70

TAxisAlignedBox3<double> * __thiscall
FGroupTopologyProvider::GetSelectionBounds
          (FGroupTopologyProvider *this,TAxisAlignedBox3<double> *__return_storage_ptr__,
          FGroupTopologySelection *param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
          *param_2)

{
  TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  UE::Geometry::FGroupTopology::GetSelectionBounds
            (this->GroupTopology,__return_storage_ptr__,param_1,&local_18);
  return __return_storage_ptr__;
}

// GetSelectionFrame @ 14cb9d4a0

TFrame3<double> * __thiscall
FGroupTopologyProvider::GetSelectionFrame
          (FGroupTopologyProvider *this,TFrame3<double> *__return_storage_ptr__,
          FGroupTopologySelection *param_1,TFrame3<double> *param_2)

{
  UE::Geometry::FGroupTopology::GetSelectionFrame
            (this->GroupTopology,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

