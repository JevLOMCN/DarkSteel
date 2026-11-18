// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 10

// ~FMeshShapeGenerator @ 14336a5c0

void __thiscall UE::Geometry::FMeshShapeGenerator::~FMeshShapeGenerator(FMeshShapeGenerator *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
  pFVar1 = (this->TrianglePolygonIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TriangleNormals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TriangleUVs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NormalParentVertex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Normals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UVParentVertex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UVs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Reset @ 1435c01b0

void __thiscall UE::Geometry::FMeshShapeGenerator::Reset(FMeshShapeGenerator *this)

{
  (this->Vertices).ArrayNum = 0;
  if ((this->Vertices).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->Vertices).AllocatorInstance,0,&(this->Vertices).ArrayMax);
  }
  (this->UVs).ArrayNum = 0;
  if ((this->UVs).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->UVs).AllocatorInstance,0,&(this->UVs).ArrayMax);
  }
  (this->UVParentVertex).ArrayNum = 0;
  if ((this->UVParentVertex).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->UVParentVertex).AllocatorInstance,0,&(this->UVParentVertex).ArrayMax);
  }
  (this->Normals).ArrayNum = 0;
  if ((this->Normals).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->Normals).AllocatorInstance,0,&(this->Normals).ArrayMax);
  }
  (this->NormalParentVertex).ArrayNum = 0;
  if ((this->NormalParentVertex).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->NormalParentVertex).AllocatorInstance,0,
               &(this->NormalParentVertex).ArrayMax);
  }
  (this->Triangles).ArrayNum = 0;
  if ((this->Triangles).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->Triangles).AllocatorInstance,0,&(this->Triangles).ArrayMax);
  }
  (this->TriangleUVs).ArrayNum = 0;
  if ((this->TriangleUVs).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->TriangleUVs).AllocatorInstance,0,&(this->TriangleUVs).ArrayMax);
  }
  (this->TriangleNormals).ArrayNum = 0;
  if ((this->TriangleNormals).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->TriangleNormals).AllocatorInstance,0,
               &(this->TriangleNormals).ArrayMax);
  }
  (this->TrianglePolygonIDs).ArrayNum = 0;
  if ((this->TrianglePolygonIDs).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->TrianglePolygonIDs).AllocatorInstance,0,
               &(this->TrianglePolygonIDs).ArrayMax);
  }
  return;
}

// SetBufferSizes @ 1435c1830

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshShapeGenerator::SetBufferSizes
          (FMeshShapeGenerator *this,int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  if (0 < param_1) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Vertices,param_1,Default);
  }
  if (0 < param_2) {
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Triangles,param_2,Default);
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
              (&this->TriangleUVs,param_2,Default);
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
              (&this->TriangleNormals,param_2,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->TrianglePolygonIDs,param_2,Default);
  }
  if (0 < param_3) {
    iVar5 = (this->UVs).ArrayNum;
    piVar1 = &(this->UVs).ArrayNum;
    if (iVar5 < param_3) {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,param_3 - iVar5,&(this->UVs).AllocatorInstance,piVar1,&(this->UVs).ArrayMax);
    }
    else if (param_3 < iVar5) {
      uVar6 = iVar5 - param_3;
      if ((int)(uVar6 | param_3) < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (uVar6 != 0) {
        pFVar2 = (this->UVs).AllocatorInstance.Data + (longlong)param_3 * 8;
        iVar5 = (*piVar1 - uVar6) - param_3;
        if (iVar5 != 0) {
          memmove(pFVar2,pFVar2 + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        *piVar1 = *piVar1 - uVar6;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&(this->UVs).AllocatorInstance,*piVar1,&(this->UVs).ArrayMax);
      }
    }
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->UVParentVertex,param_3,Default);
  }
  if (0 < param_4) {
    iVar5 = (this->Normals).ArrayNum;
    piVar1 = &(this->Normals).ArrayNum;
    if (iVar5 < param_4) {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_4 - iVar5,&(this->Normals).AllocatorInstance,piVar1,
                 &(this->Normals).ArrayMax);
    }
    else if (param_4 < iVar5) {
      uVar6 = iVar5 - param_4;
      if ((int)(uVar6 | param_4) < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (uVar6 != 0) {
        pFVar2 = (this->Normals).AllocatorInstance.Data + (longlong)param_4 * 0xc;
        iVar5 = (*piVar1 - uVar6) - param_4;
        if (iVar5 != 0) {
          memmove(pFVar2,pFVar2 + (longlong)(int)uVar6 * 0xc,(longlong)iVar5 * 0xc);
        }
        *piVar1 = *piVar1 - uVar6;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,&(this->Normals).AllocatorInstance,*piVar1,&(this->Normals).ArrayMax);
      }
    }
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->NormalParentVertex,param_4,Default);
  }
  return;
}

// SetNormal @ 1435c2c40

void __thiscall
UE::Geometry::FMeshShapeGenerator::SetNormal
          (FMeshShapeGenerator *this,int param_1,TVector<float> *param_2,int param_3)

{
  undefined8 uVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar1 = *(undefined8 *)&param_2->field0_0x0;
  fVar2 = (param_2->field0_0x0)._s_0.Z;
  lVar7 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < (this->Normals).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->Normals).AllocatorInstance.Data;
  *(undefined8 *)(pFVar3 + lVar7 * 0xc) = uVar1;
  *(float *)(pFVar3 + lVar7 * 0xc + 8) = fVar2;
  uVar6 = 0;
  if (param_1 < (this->NormalParentVertex).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(int *)((this->NormalParentVertex).AllocatorInstance.Data + lVar7 * 4) = param_3;
  return;
}

// SetTriangle @ 1435c3890

void __thiscall
UE::Geometry::FMeshShapeGenerator::SetTriangle
          (FMeshShapeGenerator *this,int param_1,int param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int local_18;
  
  local_18 = param_2;
  if (this->bReverseOrientation != false) {
    local_18 = param_4;
    param_4 = param_2;
  }
  uVar4 = 0;
  if (param_1 < (this->Triangles).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  *(ulonglong *)(pFVar1 + (longlong)param_1 * 0xc) = CONCAT44(param_3,local_18);
  *(int *)(pFVar1 + (longlong)param_1 * 0xc + 8) = param_4;
  return;
}

// SetTriangleNormals @ 1435c3940

void __thiscall
UE::Geometry::FMeshShapeGenerator::SetTriangleNormals
          (FMeshShapeGenerator *this,int param_1,int param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int local_18;
  
  local_18 = param_2;
  if (this->bReverseOrientation != false) {
    local_18 = param_4;
    param_4 = param_2;
  }
  uVar4 = 0;
  if (param_1 < (this->TriangleNormals).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->TriangleNormals).AllocatorInstance.Data;
  *(ulonglong *)(pFVar1 + (longlong)param_1 * 0xc) = CONCAT44(param_3,local_18);
  *(int *)(pFVar1 + (longlong)param_1 * 0xc + 8) = param_4;
  return;
}

// SetTrianglePolygon @ 1435c46a0

void __thiscall
UE::Geometry::FMeshShapeGenerator::SetTrianglePolygon
          (FMeshShapeGenerator *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->TrianglePolygonIDs).ArrayNum) {
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
  *(int *)((this->TrianglePolygonIDs).AllocatorInstance.Data + (longlong)param_1 * 4) = param_2;
  return;
}

// SetTriangleUVs @ 1435c4730

void __thiscall
UE::Geometry::FMeshShapeGenerator::SetTriangleUVs
          (FMeshShapeGenerator *this,int param_1,FIndex3i *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (this->bReverseOrientation == false) {
    uVar6 = *(undefined8 *)&param_2->field0_0x0;
    iVar5 = (param_2->field0_0x0)._s_0.C;
  }
  else {
    iVar5 = (param_2->field0_0x0)._s_0.A;
    uVar6 = CONCAT44((param_2->field0_0x0)._s_0.B,(param_2->field0_0x0)._s_0.C);
  }
  uVar4 = 0;
  if (param_1 < (this->TriangleUVs).ArrayNum) {
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
  pFVar1 = (this->TriangleUVs).AllocatorInstance.Data;
  *(undefined8 *)(pFVar1 + (longlong)param_1 * 0xc) = uVar6;
  *(int *)(pFVar1 + (longlong)param_1 * 0xc + 8) = iVar5;
  return;
}

// SetTriangleUVs @ 1435c47f0

void __thiscall
UE::Geometry::FMeshShapeGenerator::SetTriangleUVs
          (FMeshShapeGenerator *this,int param_1,int param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int local_18;
  
  local_18 = param_2;
  if (this->bReverseOrientation != false) {
    local_18 = param_4;
    param_4 = param_2;
  }
  uVar4 = 0;
  if (param_1 < (this->TriangleUVs).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->TriangleUVs).AllocatorInstance.Data;
  *(ulonglong *)(pFVar1 + (longlong)param_1 * 0xc) = CONCAT44(param_3,local_18);
  *(int *)(pFVar1 + (longlong)param_1 * 0xc + 8) = param_4;
  return;
}

// SetVertex @ 1435c4f40

void __thiscall
UE::Geometry::FMeshShapeGenerator::SetVertex
          (FMeshShapeGenerator *this,int param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  
  uVar5 = *(undefined4 *)&param_2->field0_0x0;
  uVar6 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uVar7 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uVar8 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  uVar10 = 0;
  if (param_1 < (this->Vertices).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->Vertices).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)param_1 * 0x18;
  *(undefined4 *)pFVar1 = uVar5;
  *(undefined4 *)(pFVar1 + 4) = uVar6;
  *(undefined4 *)(pFVar1 + 8) = uVar7;
  *(undefined4 *)(pFVar1 + 0xc) = uVar8;
  *(double *)(pFVar3 + (longlong)param_1 * 0x18 + 0x10) = dVar2;
  return;
}

