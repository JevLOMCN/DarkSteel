// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 3

// AppendNormal @ 14c95ca80

int __thiscall
UE::Geometry::FMeshShapeGenerator::AppendNormal
          (FMeshShapeGenerator *this,TVector<float> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res18 [4];
  
  pFVar2 = (this->Normals).AllocatorInstance.Data;
  local_res18[0] = param_2;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->Normals).ArrayMax * 0xc)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = (this->Normals).ArrayNum;
  piVar1 = &(this->Normals).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->Normals).AllocatorInstance,piVar1);
  }
  (this->Normals).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Normals).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar5 * 0xc) = *(undefined8 *)&param_1->field0_0x0;
  *(float *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = (param_1->field0_0x0)._s_0.Z;
  pFVar2 = (this->NormalParentVertex).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar2 + (longlong)(this->NormalParentVertex).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = (this->NormalParentVertex).ArrayNum;
  piVar1 = &(this->NormalParentVertex).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->NormalParentVertex).AllocatorInstance,piVar1);
  }
  (this->NormalParentVertex).ArrayNum = iVar5 + 1;
  *(int *)((this->NormalParentVertex).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_res18[0]
  ;
  return (this->Normals).ArrayNum + -1;
}

// AppendTriangle @ 14c95cbf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
UE::Geometry::FMeshShapeGenerator::AppendTriangle
          (FMeshShapeGenerator *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int local_28;
  int iStack_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (this->bReverseOrientation == false) {
    local_1c = param_1;
    pFVar7 = (FScriptContainerElement *)&local_1c;
    local_18 = param_2;
    local_14 = param_3;
  }
  else {
    local_28 = param_3;
    pFVar7 = (FScriptContainerElement *)&local_28;
    iStack_24 = param_2;
    local_20 = param_1;
  }
  pFVar3 = (this->Triangles).AllocatorInstance.Data;
  if ((pFVar3 <= pFVar7) && (pFVar7 < pFVar3 + (longlong)(this->Triangles).ArrayMax * 0xc)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  iVar6 = (this->Triangles).ArrayNum;
  piVar1 = &(this->Triangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->Triangles).AllocatorInstance,piVar1);
  }
  uVar2 = *(undefined8 *)pFVar7;
  (this->Triangles).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Triangles).AllocatorInstance.Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0xc) = uVar2;
  *(undefined4 *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = *(undefined4 *)(pFVar7 + 8);
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
            (&this->TriangleUVs,(this->Triangles).ArrayNum,Default);
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
            (&this->TriangleNormals,(this->Triangles).ArrayNum,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&this->TrianglePolygonIDs,(this->Triangles).ArrayNum,Default);
  return (this->Triangles).ArrayNum + -1;
}

// AppendVertex @ 14c95e9b0

int __thiscall
UE::Geometry::FMeshShapeGenerator::AppendVertex(FMeshShapeGenerator *this,TVector<double> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  
  pFVar2 = (this->Vertices).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->Vertices).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
  }
  iVar7 = (this->Vertices).ArrayNum;
  piVar1 = &(this->Vertices).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Vertices).AllocatorInstance,piVar1);
  }
  (this->Vertices).ArrayNum = iVar7 + 1;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  pFVar3 = (this->Vertices).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar7 * 0x18;
  *(double *)pFVar2 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + 8) = dVar5;
  *(double *)(pFVar3 + (longlong)iVar7 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  return (this->Vertices).ArrayNum + -1;
}

