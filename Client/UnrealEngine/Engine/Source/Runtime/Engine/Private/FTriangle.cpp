// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FTriangle @ 147531af0

FTriangle * __thiscall
FTriangle::FTriangle(FTriangle *this,FVertex *param_1,FVertex *param_2,FVertex *param_3)

{
  double dVar1;
  FVertex *pFVar2;
  FVertex *pFVar3;
  code *pcVar4;
  FVertex *pFVar5;
  bool bVar6;
  FTriangle *pFVar7;
  double dVar8;
  FTriangle *local_res8;
  FTriangle *local_res10;
  FTriangle *local_res18 [2];
  
  this->Vertices[0] = param_1;
  this->Vertices[1] = param_2;
  this->Vertices[2] = param_3;
  dVar8 = ((param_1->Position).field0_0x0._s_0.Y + (param_2->Position).field0_0x0._s_0.Y +
          (param_3->Position).field0_0x0._s_0.Y) * __real_3fd5555555555555;
  (this->Center).field0_0x0._s_0.X =
       ((param_1->Position).field0_0x0._s_0.X + (param_2->Position).field0_0x0._s_0.X +
       (param_3->Position).field0_0x0._s_0.X) * __real_3fd5555555555555;
  (this->Center).field0_0x0._s_0.Y = dVar8;
  local_res8 = this;
  TArray<FTriangle_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTriangle_*_const_&>
            (&param_1->Triangles,&local_res8);
  local_res10 = this;
  TArray<FTriangle_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTriangle_*_const_&>
            (&this->Vertices[1]->Triangles,&local_res10);
  local_res18[0] = this;
  TArray<FTriangle_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTriangle_*_const_&>
            (&this->Vertices[2]->Triangles,local_res18);
  dVar8 = (this->Vertices[0]->Position).field0_0x0._s_0.X;
  dVar1 = (this->Vertices[0]->Position).field0_0x0._s_0.Y;
  pFVar2 = this->Vertices[2];
  dVar8 = ((pFVar2->Position).field0_0x0._s_0.Y - dVar1) *
          ((this->Vertices[1]->Position).field0_0x0._s_0.X - dVar8) -
          ((this->Vertices[1]->Position).field0_0x0._s_0.Y - dVar1) *
          ((pFVar2->Position).field0_0x0._s_0.X - dVar8);
  if (dVar8 == 0.0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result != 0.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpaceHelpers.h"
                       ,0x10c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FTriangle *)(*pcVar4)();
      return pFVar7;
    }
  }
  else if (dVar8 < 0.0) {
    this->Vertices[2] = this->Vertices[1];
    this->Vertices[1] = pFVar2;
  }
  pFVar5 = this->Vertices[1];
  pFVar2 = this->Vertices[2];
  pFVar3 = this->Vertices[0];
  this->Edges[0].Vertices[0] = this->Vertices[0];
  this->Edges[0].Vertices[1] = pFVar5;
  pFVar5 = this->Vertices[2];
  this->Edges[1].Vertices[0] = this->Vertices[1];
  this->Edges[1].Vertices[1] = pFVar5;
  this->Edges[2].Vertices[0] = pFVar2;
  this->Edges[2].Vertices[1] = pFVar3;
  return this;
}

// FTriangle @ 147531c40

FTriangle * __thiscall FTriangle::FTriangle(FTriangle *this,FVertex *param_1,FVertex *param_2)

{
  FVertex *pFVar1;
  FVertex *pFVar2;
  FVertex *pFVar3;
  double dVar4;
  FTriangle *local_res8 [4];
  
  this->Vertices[0] = param_1;
  this->Vertices[1] = param_2;
  this->Vertices[2] = param_2;
  dVar4 = ((this->Vertices[1]->Position).field0_0x0._s_0.Y +
           (this->Vertices[0]->Position).field0_0x0._s_0.Y + (param_2->Position).field0_0x0._s_0.Y)
          * __real_3fd5555555555555;
  (this->Center).field0_0x0._s_0.X =
       ((this->Vertices[0]->Position).field0_0x0._s_0.X +
        (this->Vertices[1]->Position).field0_0x0._s_0.X + (param_2->Position).field0_0x0._s_0.X) *
       __real_3fd5555555555555;
  (this->Center).field0_0x0._s_0.Y = dVar4;
  local_res8[0] = this;
  TArray<FTriangle_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTriangle_*_const_&>
            (&this->Vertices[0]->Triangles,local_res8);
  local_res8[0] = this;
  TArray<FTriangle_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTriangle_*_const_&>
            (&this->Vertices[1]->Triangles,local_res8);
  local_res8[0] = this;
  TArray<FTriangle_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTriangle_*_const_&>
            (&this->Vertices[2]->Triangles,local_res8);
  pFVar3 = this->Vertices[1];
  pFVar1 = this->Vertices[2];
  pFVar2 = this->Vertices[0];
  this->Edges[0].Vertices[0] = this->Vertices[0];
  this->Edges[0].Vertices[1] = pFVar3;
  pFVar3 = this->Vertices[2];
  this->Edges[1].Vertices[0] = this->Vertices[1];
  this->Edges[1].Vertices[1] = pFVar3;
  this->Edges[2].Vertices[0] = pFVar1;
  this->Edges[2].Vertices[1] = pFVar2;
  return this;
}

// FTriangle @ 147531d10

FTriangle * __thiscall FTriangle::FTriangle(FTriangle *this,FVertex *param_1)

{
  double dVar1;
  double dVar2;
  FVertex *pFVar3;
  FVertex *pFVar4;
  FVertex *pFVar5;
  double dVar6;
  FTriangle *local_res8 [4];
  
  dVar6 = __real_3fd5555555555555;
  this->Vertices[0] = param_1;
  this->Vertices[1] = param_1;
  this->Vertices[2] = param_1;
  dVar1 = (param_1->Position).field0_0x0._s_0.X;
  dVar2 = (param_1->Position).field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = dVar1 * dVar6 + dVar1 * dVar6 + dVar1 * dVar6;
  (this->Center).field0_0x0._s_0.Y = dVar2 * dVar6 + dVar2 * dVar6 + dVar2 * dVar6;
  local_res8[0] = this;
  TArray<FTriangle_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTriangle_*_const_&>
            (&param_1->Triangles,local_res8);
  local_res8[0] = this;
  TArray<FTriangle_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTriangle_*_const_&>
            (&this->Vertices[1]->Triangles,local_res8);
  local_res8[0] = this;
  TArray<FTriangle_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTriangle_*_const_&>
            (&this->Vertices[2]->Triangles,local_res8);
  pFVar5 = this->Vertices[1];
  pFVar3 = this->Vertices[2];
  pFVar4 = this->Vertices[0];
  this->Edges[0].Vertices[0] = this->Vertices[0];
  this->Edges[0].Vertices[1] = pFVar5;
  pFVar5 = this->Vertices[2];
  this->Edges[1].Vertices[0] = this->Vertices[1];
  this->Edges[1].Vertices[1] = pFVar5;
  this->Edges[2].Vertices[0] = pFVar3;
  this->Edges[2].Vertices[1] = pFVar4;
  return this;
}

// FTriangle @ 147531df0

FTriangle * __thiscall FTriangle::FTriangle(FTriangle *this)

{
  this->Vertices[0] = (FVertex *)0x0;
  this->Vertices[1] = (FVertex *)0x0;
  this->Vertices[2] = (FVertex *)0x0;
  return this;
}

// ~FTriangle @ 1475335a0

void __thiscall FTriangle::~FTriangle(FTriangle *this)

{
  int iVar1;
  FVertex *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FTriangle *pFVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FTriangle *local_38 [2];
  
  pFVar2 = this->Vertices[0];
  local_38[0] = this;
  if (pFVar2 != (FVertex *)0x0) {
    pFVar3 = (pFVar2->Triangles).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)(pFVar2->Triangles).ArrayMax * 8))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = (pFVar2->Triangles).ArrayNum;
    if (iVar1 != 0) {
      pFVar3 = (pFVar2->Triangles).AllocatorInstance.Data;
      iVar10 = 0;
      bVar5 = *(FTriangle **)pFVar3 != local_38[0];
      lVar7 = 0;
      pFVar6 = local_38[0];
      iVar9 = 0;
      do {
        iVar8 = iVar9;
        do {
          lVar7 = lVar7 + 1;
          iVar8 = iVar8 + 1;
          if (iVar1 <= lVar7) break;
        } while (bVar5 == (*(FTriangle **)(pFVar3 + lVar7 * 8) != pFVar6));
        if (bVar5 != false) {
          if (iVar10 != iVar9) {
            memmove(pFVar3 + (longlong)iVar10 * 8,pFVar3 + (longlong)iVar9 * 8,
                    (longlong)(iVar8 - iVar9) << 3);
            pFVar6 = local_38[0];
          }
          iVar10 = iVar10 + (iVar8 - iVar9);
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar9 = iVar8;
      } while (lVar7 < iVar1);
      (pFVar2->Triangles).ArrayNum = iVar10;
    }
  }
  pFVar2 = this->Vertices[1];
  if (pFVar2 != (FVertex *)0x0) {
    pFVar3 = (pFVar2->Triangles).AllocatorInstance.Data;
    local_38[0] = this;
    if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)(pFVar2->Triangles).ArrayMax * 8))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = (pFVar2->Triangles).ArrayNum;
    if (iVar1 != 0) {
      pFVar3 = (pFVar2->Triangles).AllocatorInstance.Data;
      iVar10 = 0;
      bVar5 = *(FTriangle **)pFVar3 != local_38[0];
      lVar7 = 0;
      pFVar6 = local_38[0];
      iVar9 = 0;
      do {
        iVar8 = iVar9;
        do {
          lVar7 = lVar7 + 1;
          iVar8 = iVar8 + 1;
          if (iVar1 <= lVar7) break;
        } while (bVar5 == (*(FTriangle **)(pFVar3 + lVar7 * 8) != pFVar6));
        if (bVar5 != false) {
          if (iVar10 != iVar9) {
            memmove(pFVar3 + (longlong)iVar10 * 8,pFVar3 + (longlong)iVar9 * 8,
                    (longlong)(iVar8 - iVar9) << 3);
            pFVar6 = local_38[0];
          }
          iVar10 = iVar10 + (iVar8 - iVar9);
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar9 = iVar8;
      } while (lVar7 < iVar1);
      (pFVar2->Triangles).ArrayNum = iVar10;
    }
  }
  pFVar2 = this->Vertices[2];
  if (pFVar2 != (FVertex *)0x0) {
    pFVar3 = (pFVar2->Triangles).AllocatorInstance.Data;
    local_38[0] = this;
    if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)(pFVar2->Triangles).ArrayMax * 8))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = (pFVar2->Triangles).ArrayNum;
    if (iVar1 != 0) {
      pFVar3 = (pFVar2->Triangles).AllocatorInstance.Data;
      iVar10 = 0;
      bVar5 = *(FTriangle **)pFVar3 != local_38[0];
      lVar7 = 0;
      pFVar6 = local_38[0];
      iVar9 = 0;
      do {
        iVar8 = iVar9;
        do {
          lVar7 = lVar7 + 1;
          iVar8 = iVar8 + 1;
          if (iVar1 <= lVar7) break;
        } while (bVar5 == (*(FTriangle **)(pFVar3 + lVar7 * 8) != pFVar6));
        if (bVar5 != false) {
          if (iVar10 != iVar9) {
            memmove(pFVar3 + (longlong)iVar10 * 8,pFVar3 + (longlong)iVar9 * 8,
                    (longlong)(iVar8 - iVar9) << 3);
            pFVar6 = local_38[0];
          }
          iVar10 = iVar10 + (iVar8 - iVar9);
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar9 = iVar8;
      } while (lVar7 < iVar1);
      (pFVar2->Triangles).ArrayNum = iVar10;
    }
  }
  return;
}

